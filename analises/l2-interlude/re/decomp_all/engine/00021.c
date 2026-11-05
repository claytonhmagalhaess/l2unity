// ==== 1043ffa3 Catch@1043ffa3

void Catch_1043ffa3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetInertiaTensor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440040 FUN_10440040

void FUN_10440040(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811200;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_28);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) == 0) {
    ExceptionList = local_10;
    return;
  }
  iVar2 = thunk_FUN_1043fb50(*(int *)(in_ECX + 0x348));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x9c) = local_28;
    *(undefined4 *)(iVar2 + 0xa0) = local_24;
    *(undefined4 *)(iVar2 + 0xa4) = local_20;
    *(undefined4 *)(iVar2 + 0xa8) = local_34;
    *(undefined4 *)(iVar2 + 0xac) = local_30;
    *(undefined4 *)(iVar2 + 0xb0) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044014b Catch@1044014b

void Catch_1044014b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044015f Catch@1044015f

void Catch_1044015f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetInertiaTensor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104401d0 FUN_104401d0

void FUN_104401d0(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811210;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((*(int *)(in_ECX + 0x348) != 0) &&
     (iVar2 = thunk_FUN_1043fb50(*(int *)(in_ECX + 0x348)), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0xb4) = local_28;
    *(undefined4 *)(iVar2 + 0xb8) = local_24;
    *(undefined4 *)(iVar2 + 0xbc) = local_20;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044028c Catch@1044028c

void Catch_1044028c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104402a0 Catch@104402a0

void Catch_104402a0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetCOMOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440300 FUN_10440300

void FUN_10440300(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811220;
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
    puVar4 = local_28;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    iVar2 = thunk_FUN_1043fb50(*(int *)(in_ECX + 0x348));
    if (iVar2 == 0) {
      iVar2 = *(int *)(in_ECX + 0x38);
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return;
      }
      if (*(int *)(iVar2 + 0x1f0) == 0) {
        ExceptionList = local_10;
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x1f0);
      *puVar4 = *(undefined4 *)(iVar2 + 0x4c);
      puVar4[1] = *(undefined4 *)(iVar2 + 0x50);
      uVar3 = *(undefined4 *)(iVar2 + 0x54);
    }
    else {
      *puVar4 = *(undefined4 *)(iVar2 + 0xb4);
      puVar4[1] = *(undefined4 *)(iVar2 + 0xb8);
      uVar3 = *(undefined4 *)(iVar2 + 0xbc);
    }
    puVar4[2] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044041d Catch@1044041d

void Catch_1044041d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10440431 Catch@10440431

void Catch_10440431(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetCOMOffset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104404b0 FUN_104404b0

void FUN_104404b0(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_10811230;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = 0;
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar2,&param_1);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  if (**(char **)(iVar2 + 0xc) == 'B') {
    *(char **)(iVar2 + 0xc) = *(char **)(iVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(iVar2,0);
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    iVar2 = thunk_FUN_1043fb20(*(int *)(in_ECX + 0x348));
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 100) = local_18;
      *(int *)(iVar2 + 0x68) = param_1;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044059b Catch@1044059b

void Catch_1044059b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104405af Catch@104405af

void Catch_104405af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetDampingProps");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440620 FUN_10440620

void FUN_10440620(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811240;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = &local_18;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = &local_1c;
  }
  else {
    puVar4 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    iVar2 = thunk_FUN_1043fb20(*(int *)(in_ECX + 0x348));
    if (iVar2 != 0) {
      *puVar3 = *(undefined4 *)(iVar2 + 100);
      *puVar4 = *(undefined4 *)(iVar2 + 0x68);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044077c Catch@1044077c

void Catch_1044077c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10440790 Catch@10440790

void Catch_10440790(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetDampingProps");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440810 FUN_10440810

void FUN_10440810(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811250;
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
      *(undefined4 *)(iVar2 + 0x90) = local_18;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 104408d5 Catch@104408d5

void Catch_104408d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104408e9 Catch@104408e9

void Catch_104408e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetActorGravScale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440950 FUN_10440950

void FUN_10440950(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811260;
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
      *param_2 = *(undefined4 *)(iVar1 + 0x90);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 104409f4 Catch@104409f4

void Catch_104409f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10440a08 Catch@10440a08

void Catch_10440a08(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKGetActorGravScale");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440a60 FUN_10440a60

void FUN_10440a60(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_10811270;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = 0;
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(iVar2,&param_1);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  if (**(char **)(iVar2 + 0xc) == 'B') {
    *(char **)(iVar2 + 0xc) = *(char **)(iVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(iVar2,0);
  }
  if (*(int *)(in_ECX + 0x348) != 0) {
    iVar2 = thunk_FUN_1043fb20(*(int *)(in_ECX + 0x348));
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x98) =
           *(uint *)(iVar2 + 0x98) ^ (local_18 * 8 ^ *(uint *)(iVar2 + 0x98)) & 8;
      *(uint *)(iVar2 + 0x98) =
           (param_1 << 4 ^ *(uint *)(iVar2 + 0x98)) & 0x10 ^ *(uint *)(iVar2 + 0x98);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10440b54 Catch@10440b54

void Catch_10440b54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10440b68 Catch@10440b68

void Catch_10440b68(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::execKSetStayUpright");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440bd0 FUN_10440bd0

void FUN_10440bd0(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811280;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x5d4))();
  ExceptionList = local_10;
  return;
}


// ==== 10440c1a Catch@10440c1a

void Catch_10440c1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10440c2e Catch@10440c2e

void Catch_10440c2e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UL2ConsoleWnd::LoadDefaultCharacterInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10440c70 FUN_10440c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c70(float param_1)

{
  int iVar1;
  int in_ECX;
  wchar_t *pwVar2;
  int *piVar3;
  FName aFStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((*(int *)(in_ECX + 0x38) == 3) &&
     (_DAT_10b3b8c8 = _DAT_10b3b8c8 + param_1, 5.0 < _DAT_10b3b8c8 != (_DAT_10b3b8c8 == 5.0))) {
    pwVar2 = u_social_spwait02_MFighter_10a741c8;
    piVar3 = (int *)(in_ECX + 600);
    do {
      uStack_14 = 0x10440cb8;
      iVar1 = appRand();
      if ((0x45 < iVar1 % 100) && (*piVar3 != 0)) {
        iVar1 = *(int *)*piVar3;
        uStack_14 = 1;
        uStack_18 = 0;
        local_1c = 0x3e99999a;
        local_20 = 0x3f800000;
        FName::FName(aFStack_24,(ushort *)pwVar2,1);
        (**(code **)(iVar1 + 0x328))(0);
      }
      pwVar2 = pwVar2 + 0x200;
      piVar3 = piVar3 + 0xc5;
    } while ((int)pwVar2 < 0x10a789c8);
    _DAT_10b3b8c8 = 0.0;
  }
  return;
}


// ==== 10440d50 FUN_10440d50

void FUN_10440d50(void)

{
  int *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(*in_ECX + 0x5d0))(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x12);
  return;
}


// ==== 10440d80 FUN_10440d80

void FUN_10440d80(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x50) + 0x19c);
  if (piVar1 == (int *)0x0) {
    appFailAssert("Level",".\\L2ConsoleWnd.cpp",0x17d);
  }
  piVar4 = (int *)(in_ECX + 600);
  iVar3 = 0x12;
  do {
    if (*piVar4 != 0) {
      iVar2 = *(int *)(*piVar4 + 0x14d8);
      (**(code **)(*piVar1 + 0xac))(*piVar4,0);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0xac))(iVar2,0);
      }
    }
    _memset(piVar4 + -0x81,0,0x314);
    piVar4 = piVar4 + 0xc5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


// ==== 10440e30 FUN_10440e30

void FUN_10440e30(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x50) + 0x19c);
  if (piVar1 == (int *)0x0) {
    appFailAssert("Level",".\\L2ConsoleWnd.cpp",0x1e5);
  }
  piVar4 = (int *)(in_ECX + 0x39c0);
  iVar3 = 8;
  do {
    if (*piVar4 != 0) {
      iVar2 = *(int *)(*piVar4 + 0x14d8);
      (**(code **)(*piVar1 + 0xac))(*piVar4,0);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0xac))(iVar2,0);
      }
    }
    _memset(piVar4 + -0x81,0,0x314);
    piVar4 = piVar4 + 0xc5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x48) = 0xffffffff;
  return;
}


// ==== 10440f00 FUN_10440f00

void FUN_10440f00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  FRotator local_c [12];
  
  if (-1 < param_1) {
    if ((*(char *)(param_1 * 0x314 + 0x39c8 + in_ECX) != '\0') && (param_1 != -1)) {
      return;
    }
    if (param_1 < 7) {
      iVar1 = *(int *)(in_ECX + 0x48);
      if (iVar1 == param_1) {
        return;
      }
      if (((-1 < iVar1) && (iVar1 = *(int *)(iVar1 * 0x314 + 0x39c0 + in_ECX), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x14d8) != 0)) {
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 8;
        iVar3 = 0;
        iVar1 = FUN_107a6660();
        puVar2 = (undefined4 *)FRotator::FRotator(local_c,0,iVar1,iVar3);
        iVar1 = *(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX);
        *(undefined4 *)(iVar1 + 0x8c) = *puVar2;
        *(undefined4 *)(iVar1 + 0x90) = puVar2[1];
        *(undefined4 *)(iVar1 + 0x94) = puVar2[2];
        iVar1 = *(int *)(in_ECX + 0x48) * 0x10;
        AController::MoveTo(*(AController **)
                             (*(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX) + 0x14d8),
                            *(undefined4 *)(&DAT_10bbc1b4 + iVar1),
                            *(undefined4 *)(&DAT_10bbc1b8 + iVar1),
                            *(undefined4 *)(&DAT_10bbc1bc + iVar1),0,0x3f800000);
      }
      *(int *)(in_ECX + 0x48) = param_1;
      iVar1 = *(int *)(param_1 * 0x314 + in_ECX + 0x39c0);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x14d8) == 0) {
        return;
      }
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 8;
      iVar3 = 0;
      iVar1 = FUN_107a6660();
      puVar2 = (undefined4 *)FRotator::FRotator(local_c,0,iVar1,iVar3);
      iVar1 = *(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX);
      *(undefined4 *)(iVar1 + 0x8c) = *puVar2;
      *(undefined4 *)(iVar1 + 0x90) = puVar2[1];
      *(undefined4 *)(iVar1 + 0x94) = puVar2[2];
      AController::MoveTo(*(AController **)
                           (*(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX) + 0x14d8),
                          DAT_10bbc224,DAT_10bbc228,DAT_10bbc22c,0,0x3f800000);
      return;
    }
  }
  if (((-1 < *(int *)(in_ECX + 0x48)) &&
      (iVar1 = *(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x14d8) != 0)) {
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 8;
    iVar3 = 0;
    iVar1 = FUN_107a6660();
    puVar2 = (undefined4 *)FRotator::FRotator(local_c,0,iVar1,iVar3);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX);
    *(undefined4 *)(iVar1 + 0x8c) = *puVar2;
    *(undefined4 *)(iVar1 + 0x90) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x94) = puVar2[2];
    iVar1 = *(int *)(in_ECX + 0x48) * 0x10;
    AController::MoveTo(*(AController **)
                         (*(int *)(*(int *)(in_ECX + 0x48) * 0x314 + 0x39c0 + in_ECX) + 0x14d8),
                        *(undefined4 *)(&DAT_10bbc1b4 + iVar1),
                        *(undefined4 *)(&DAT_10bbc1b8 + iVar1),
                        *(undefined4 *)(&DAT_10bbc1bc + iVar1),0,0x3f800000);
  }
  *(undefined4 *)(in_ECX + 0x48) = 0xffffffff;
  return;
}


// ==== 10441250 FUN_10441250

void FUN_10441250(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar2 = (int *)(param_1 * 0x314 + 600 + in_ECX);
  if (*(int *)(param_1 * 0x314 + 600 + in_ECX) != 0) {
    puVar1 = (uint *)(*piVar2 + 0x6dc);
    *puVar1 = *puVar1 | 2;
    uVar3 = FUN_107a6660();
    *(undefined4 *)(*piVar2 + 0x6e0) = uVar3;
  }
  return;
}


// ==== 104412a0 FUN_104412a0

void FUN_104412a0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 * 0x314 + 600 + in_ECX);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x6dc) = *(uint *)(iVar1 + 0x6dc) & 0xfffffffd;
    *(undefined4 *)(iVar1 + 0x32c) = *(undefined4 *)(iVar1 + 0x1c8);
    *(undefined4 *)(iVar1 + 0x330) = *(undefined4 *)(iVar1 + 0x1cc);
    *(undefined4 *)(iVar1 + 0x334) = *(undefined4 *)(iVar1 + 0x1d0);
  }
  return;
}


// ==== 104412f0 FUN_104412f0

void FUN_104412f0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar3 = *(int *)(param_1 * 0x314 + 600 + in_ECX);
  if (iVar3 != 0) {
    pfVar1 = (float *)(&DAT_10bbc0a0 + param_1 * 0x10);
    fVar2 = *(float *)(&DAT_10bbc0a0 + param_1 * 0x10);
    while (65536.0 < fVar2) {
      *pfVar1 = *pfVar1 - 65536.0;
      fVar2 = *pfVar1;
    }
    fVar2 = *pfVar1;
    while (fVar2 < 0.0) {
      *pfVar1 = *pfVar1 + 65536.0;
      fVar2 = *pfVar1;
    }
    if (*pfVar1 != (float)*(int *)(iVar3 + 0x1cc)) {
      *(uint *)(iVar3 + 0x6dc) = *(uint *)(iVar3 + 0x6dc) | 1;
      uVar4 = FUN_107a6660();
      *(undefined4 *)(iVar3 + 0x6d8) = uVar4;
    }
  }
  return;
}


// ==== 104413b0 FUN_104413b0

void FUN_104413b0(int param_1)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(in_ECX + 600);
  do {
    if ((*piVar1 != 0) && (iVar2 != param_1)) {
      (**(code **)(*(int *)*piVar1 + 0x128))(7,1,0);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xc5;
  } while (iVar2 < 0x12);
  return;
}


// ==== 10441400 FUN_10441400

void FUN_10441400(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(in_ECX + 600);
  iVar3 = 0x12;
  do {
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && ((char)piVar1[0x27] == '\a')) {
      (**(code **)(*piVar1 + 0x128))(8,1,0);
    }
    piVar2 = piVar2 + 0xc5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


// ==== 10441450 FUN_10441450

void FUN_10441450(void)

{
  undefined4 uVar1;
  int in_ECX;
  FString aFStack_34 [12];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811299;
  local_c = ExceptionList;
  if (((*(int *)(in_ECX + 0x50) != 0) && (*(int *)(*(int *)(in_ECX + 0x50) + 0x58) != 0)) &&
     (*(int *)(in_ECX + 0x3c) < 0)) {
    uStack_18 = 0;
    local_1c = 0x3f800000;
    uStack_20 = 0;
    uStack_24 = 1;
    local_28 = 0x3fc00000;
    ExceptionList = &local_c;
    FString::FString(aFStack_34,(ushort *)&DAT_10b3a8d8);
    local_4 = 0xffffffff;
    uVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x3c) = uVar1;
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10441510 FUN_10441510

void FUN_10441510(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) && (-1 < *(int *)(in_ECX + 0x3c))) {
    (**(code **)(**(int **)(iVar1 + 0x58) + 0xd4))(*(int *)(in_ECX + 0x3c),0x40000000,0);
    *(undefined4 *)(in_ECX + 0x3c) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x44) = 0xffffffff;
  }
  return;
}


// ==== 10441560 FUN_10441560

void FUN_10441560(void)

{
  return;
}


// ==== 10441570 FUN_10441570

void FUN_10441570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  FString aFStack_3c [12];
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108112dd;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x38) != 3) {
    return;
  }
  if (param_1 == 0) {
    if (((*(int *)(in_ECX + 0x40) == 0) || (iVar1 = *(int *)(in_ECX + 0x50), iVar1 == 0)) ||
       (*(int *)(iVar1 + 0x58) == 0)) goto LAB_10441835;
    iStack_28 = *(int *)(in_ECX + 0x3c);
    ExceptionList = &local_c;
    if (0 < iStack_28) {
      uStack_20 = 0;
      local_24 = 0;
      uStack_2c = 0x104415e0;
      ExceptionList = &local_c;
      (**(code **)(**(int **)(iVar1 + 0x58) + 0xd4))();
    }
    uStack_20 = 0;
    local_24 = 0x3f800000;
    iStack_28 = 0;
    uStack_2c = 1;
    local_30 = 0x3fc00000;
    FString::FString(aFStack_3c,(ushort *)&DAT_10b3aed2);
LAB_10441612:
    uStack_4 = 0xffffffff;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x44) = 3;
  }
  else if (param_1 == 1) {
    if (((*(int *)(in_ECX + 0x40) == 1) || (iVar1 = *(int *)(in_ECX + 0x50), iVar1 == 0)) ||
       (*(int *)(iVar1 + 0x58) == 0)) goto LAB_10441835;
    iStack_28 = *(int *)(in_ECX + 0x3c);
    ExceptionList = &local_c;
    if (0 < iStack_28) {
      uStack_20 = 0;
      local_24 = 0;
      uStack_2c = 0x10441676;
      ExceptionList = &local_c;
      (**(code **)(**(int **)(iVar1 + 0x58) + 0xd4))();
    }
    uStack_20 = 0;
    local_24 = 0x3f800000;
    iStack_28 = 0;
    uStack_2c = 1;
    local_30 = 0x3fc00000;
    FString::FString(aFStack_3c,(ushort *)&DAT_10b3b0d0);
    uStack_4 = 0xffffffff;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x44) = 4;
  }
  else {
    uVar3 = 2;
    if (param_1 == 2) {
      if (((*(int *)(in_ECX + 0x40) == 2) || (iVar1 = *(int *)(in_ECX + 0x50), iVar1 == 0)) ||
         (*(int *)(iVar1 + 0x58) == 0)) goto LAB_10441835;
      iStack_28 = *(int *)(in_ECX + 0x3c);
      ExceptionList = &local_c;
      if (0 < iStack_28) {
        uStack_20 = 0;
        local_24 = 0;
        uStack_2c = 0x10441710;
        ExceptionList = &local_c;
        (**(code **)(**(int **)(iVar1 + 0x58) + 0xd4))();
      }
      uStack_20 = 0;
      local_24 = 0x3f800000;
      iStack_28 = 0;
      uStack_2c = 1;
      local_30 = 0x3fc00000;
      FString::FString(aFStack_3c,(ushort *)&DAT_10b3b2ce);
    }
    else {
      if (param_1 == 3) {
        if (((*(int *)(in_ECX + 0x40) == 3) || (iVar1 = *(int *)(in_ECX + 0x50), iVar1 == 0)) ||
           (*(int *)(iVar1 + 0x58) == 0)) goto LAB_10441835;
        iStack_28 = *(int *)(in_ECX + 0x3c);
        ExceptionList = &local_c;
        if (0 < iStack_28) {
          uStack_20 = 0;
          local_24 = 0;
          uStack_2c = 0x1044177e;
          ExceptionList = &local_c;
          (**(code **)(**(int **)(iVar1 + 0x58) + 0xd4))();
        }
        uStack_20 = 0;
        local_24 = 0x3f800000;
        iStack_28 = 0;
        uStack_2c = 1;
        local_30 = 0x3fc00000;
        FString::FString(aFStack_3c,(ushort *)&DAT_10b3b4cc);
        goto LAB_10441612;
      }
      uVar3 = 4;
      if ((((param_1 != 4) || (*(int *)(in_ECX + 0x40) == 4)) ||
          (iVar1 = *(int *)(in_ECX + 0x50), iVar1 == 0)) || (*(int *)(iVar1 + 0x58) == 0))
      goto LAB_10441835;
      iStack_28 = *(int *)(in_ECX + 0x3c);
      ExceptionList = &local_c;
      if (0 < iStack_28) {
        uStack_20 = 0;
        local_24 = 0;
        uStack_2c = 0x104417e9;
        ExceptionList = &local_c;
        (**(code **)(**(int **)(iVar1 + 0x58) + 0xd4))();
      }
      uStack_20 = 0;
      local_24 = 0x3f800000;
      iStack_28 = 0;
      uStack_2c = 1;
      local_30 = 0x3fc00000;
      FString::FString(aFStack_3c,(ushort *)&DAT_10b3b6ca);
    }
    uStack_4 = 0xffffffff;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x44) = uVar3;
  }
  *(undefined4 *)(in_ECX + 0x3c) = uVar2;
LAB_10441835:
  *(int *)(in_ECX + 0x40) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10441910 FUN_10441910

void FUN_10441910(void)

{
  undefined4 uVar1;
  int in_ECX;
  FString aFStack_34 [12];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811309;
  local_c = ExceptionList;
  if ((*(int *)(in_ECX + 0x38) != 5) && (-1 < *(int *)(in_ECX + 0x44))) {
    uStack_18 = 0;
    local_1c = 0x3f800000;
    uStack_20 = 0;
    uStack_24 = 1;
    local_28 = 0x3fc00000;
    ExceptionList = &local_c;
    FString::FString(aFStack_34,(ushort *)(&DAT_10b3a8d8 + *(int *)(in_ECX + 0x44) * 0x1fe));
    local_4 = 0xffffffff;
    uVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x3c) = uVar1;
  }
  ExceptionList = local_c;
  return;
}


// ==== 104419f0 FUN_104419f0

void FUN_104419f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_2;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[10] = 0xffffffff;
  in_ECX[9] = param_1;
  in_ECX[0xb] = 0;
  return;
}


// ==== 10441a40 FUN_10441a40

USubsystem * FUN_10441a40(void)

{
  USubsystem *in_ECX;
  int iVar1;
  USubsystem *pUVar2;
  int iVar3;
  USubsystem *pUVar4;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10811329;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  USubsystem::USubsystem(in_ECX);
  iVar1 = 0;
  local_8 = 0;
  *(undefined ***)in_ECX = UL2ConsoleWnd::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2ConsoleWnd::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  pUVar4 = in_ECX + 0x54;
  local_18 = 0x11;
  pUVar2 = in_ECX + 0x32e;
  do {
    *(undefined4 *)(pUVar2 + -0x106) = 0;
    *(undefined4 *)(pUVar2 + -0xfa) = 0;
    *(undefined4 *)(pUVar2 + -0xee) = 0;
    *(undefined4 *)(pUVar2 + -0xe2) = 0;
    pUVar2[-2] = (USubsystem)0x0;
    pUVar2[-1] = (USubsystem)0x0;
    *pUVar2 = (USubsystem)0x0;
    pUVar2[1] = (USubsystem)0x0;
    pUVar2[2] = (USubsystem)0x0;
    pUVar2[3] = (USubsystem)0x0;
    pUVar2[4] = (USubsystem)0x0;
    appMemset(pUVar4,0,0x314);
    *(undefined4 *)(pUVar2 + 0x2e) = 0xffffffff;
    pUVar4 = pUVar4 + 0x314;
    pUVar2 = pUVar2 + 0x314;
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  pUVar4 = in_ECX + 0x37bc;
  local_18 = 7;
  pUVar2 = in_ECX + 0x3a96;
  do {
    *(undefined4 *)(pUVar2 + -0x106) = 0;
    *(undefined4 *)(pUVar2 + -0xfa) = 0;
    *(undefined4 *)(pUVar2 + -0xee) = 0;
    *(undefined4 *)(pUVar2 + -0xe2) = 0;
    pUVar2[-2] = (USubsystem)0x0;
    pUVar2[-1] = (USubsystem)0x0;
    *pUVar2 = (USubsystem)0x0;
    pUVar2[1] = (USubsystem)0x0;
    pUVar2[2] = (USubsystem)0x0;
    pUVar2[3] = (USubsystem)0x0;
    pUVar2[4] = (USubsystem)0x0;
    appMemset(pUVar4,0,0x314);
    *(undefined4 *)(pUVar2 + 0x2e) = 0xffffffff;
    pUVar4 = pUVar4 + 0x314;
    pUVar2 = pUVar2 + 0x314;
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x3c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x40) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x44) = 0xffffffff;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    _memset(in_ECX + iVar3 * 0x314 + 0x37bc,0,0x314);
  }
  for (; iVar1 < 8; iVar1 = iVar1 + 1) {
    iVar3 = (**(code **)(**(int **)GConfig_exref + 0x10))
                      (L"LobbySound",u_LogInSound_10a72fd8 + iVar1 * 0xff,
                       &DAT_10b3a8d8 + iVar1 * 0x1fe,0x100,L"ALAudio.int");
    if (iVar3 == 0) {
      appStrcpy((ushort *)(&DAT_10b3a8d8 + iVar1 * 0x1fe),(ushort *)L"intro");
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}


// ==== 10441c09 Catch@10441c09

void Catch_10441c09(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10441c1d Catch@10441c1d

void Catch_10441c1d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UL2ConsoleWnd::UL2ConsoleWnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10441cc0 FUN_10441cc0

void FUN_10441cc0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  ALineagePlayerController *this;
  FString aFStack_34 [12];
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_1c;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1081135b;
  pvStack_c = ExceptionList;
  if (param_1 == 2) {
    ExceptionList = &pvStack_c;
    if (((*(int *)(in_ECX + 0x38) == 2) ||
        (iVar3 = *(int *)(in_ECX + 0x50), ExceptionList = &pvStack_c, iVar3 == 0)) ||
       (ExceptionList = &pvStack_c, *(int *)(iVar3 + 0x58) == 0)) goto LAB_10441eaf;
    iStack_20 = *(int *)(in_ECX + 0x3c);
    ExceptionList = &pvStack_c;
    if (0 < iStack_20) {
      local_1c = 0;
      uStack_24 = 0x10441d21;
      ExceptionList = &pvStack_c;
      (**(code **)(**(int **)(iVar3 + 0x58) + 0xd4))();
    }
    local_1c = 0x3f800000;
    iStack_20 = 0;
    uStack_24 = 1;
    local_28 = 0x3fc00000;
    FString::FString(aFStack_34,(ushort *)&DAT_10b3a8d8);
    uStack_4 = 0xffffffff;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  else if (param_1 == 4) {
    ExceptionList = &pvStack_c;
    if (((*(int *)(in_ECX + 0x38) == 4) ||
        (iVar3 = *(int *)(in_ECX + 0x50), ExceptionList = &pvStack_c, iVar3 == 0)) ||
       (ExceptionList = &pvStack_c, *(int *)(iVar3 + 0x58) == 0)) goto LAB_10441eaf;
    iStack_20 = *(int *)(in_ECX + 0x3c);
    ExceptionList = &pvStack_c;
    if (0 < iStack_20) {
      local_1c = 0;
      uStack_24 = 0x10441dbb;
      ExceptionList = &pvStack_c;
      (**(code **)(**(int **)(iVar3 + 0x58) + 0xd4))();
    }
    local_1c = 0x3f800000;
    iStack_20 = 0;
    uStack_24 = 1;
    local_28 = 0x3fc00000;
    FString::FString(aFStack_34,(ushort *)&DAT_10b3aad6);
    uStack_4 = 0xffffffff;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x44) = 1;
  }
  else {
    ExceptionList = &pvStack_c;
    if ((param_1 != 3) || (ExceptionList = &pvStack_c, *(int *)(in_ECX + 0x38) == 3))
    goto LAB_10441eaf;
    iVar3 = *(int *)(in_ECX + 0x50);
    ExceptionList = &pvStack_c;
    *(undefined4 *)(in_ECX + 0x40) = 0xffffffff;
    if ((iVar3 == 0) || ((*(int *)(iVar3 + 0x58) == 0 || (*(int *)(in_ECX + 0x38) == 1))))
    goto LAB_10441eaf;
    iStack_20 = *(int *)(in_ECX + 0x3c);
    if (0 < iStack_20) {
      local_1c = 0;
      uStack_24 = 0x10441e5b;
      (**(code **)(**(int **)(iVar3 + 0x58) + 0xd4))();
    }
    local_1c = 0x3f800000;
    iStack_20 = 0;
    uStack_24 = 1;
    local_28 = 0x3fc00000;
    FString::FString(aFStack_34,(ushort *)&DAT_10b3acd4);
    uStack_4 = 0xffffffff;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x50) + 0x58) + 0xd0))();
    *(undefined4 *)(in_ECX + 0x44) = 2;
  }
  *(undefined4 *)(in_ECX + 0x3c) = uVar2;
LAB_10441eaf:
  *(int *)(in_ECX + 0x38) = param_1;
  if ((param_1 == 5) || (param_1 == 7)) {
    if (*(int *)(in_ECX + 0x50) == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = *(int *)(*(int *)(in_ECX + 0x50) + 0x54);
    if (iVar3 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = *(int **)(iVar3 + 0x38);
    if (*piVar1 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    this = *(ALineagePlayerController **)(*piVar1 + 0x3c);
    if (this == (ALineagePlayerController *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x50) == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = *(int *)(*(int *)(in_ECX + 0x50) + 0x54);
    if (iVar3 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = *(int **)(iVar3 + 0x38);
    if (*piVar1 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    this = *(ALineagePlayerController **)(*piVar1 + 0x3c);
    if (this == (ALineagePlayerController *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = 1;
  }
  local_1c = 0x10441f07;
  ALineagePlayerController::DisableCameraManuallyRotationg(this,iVar3);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10441fb0 FUN_10441fb0

void FUN_10441fb0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  FName *this;
  UClass *pUVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float *pfVar11;
  int iVar12;
  undefined4 uStack_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  float local_b8;
  ushort *puVar13;
  ulong uVar14;
  float fVar15;
  UPackageMap *pUVar16;
  FString local_54 [12];
  FRotator local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811379;
  local_c = ExceptionList;
  piVar2 = *(int **)(*(int *)(in_ECX + 0x50) + 0x19c);
  ExceptionList = &local_c;
  if (piVar2 == (int *)0x0) {
    ExceptionList = &local_c;
    appFailAssert("Level",".\\L2ConsoleWnd.cpp",0x143);
  }
  iVar8 = in_ECX + param_1 * 0x314;
  if (*(int *)(iVar8 + 600) == 0) {
    _memset((User *)(iVar8 + 0x54),0,0x314);
    *(undefined4 *)(iVar8 + 0xa0) = *(undefined4 *)(&DAT_10a72f00 + param_1 * 0xc);
    *(undefined4 *)(iVar8 + 0xa4) = *(undefined4 *)(&DAT_10a72f04 + param_1 * 0xc);
    *(undefined4 *)(iVar8 + 0xa8) = *(undefined4 *)(&DAT_10a72f08 + param_1 * 0xc);
    FString::FString(local_54);
    local_4 = 0;
    FString::operator=(local_54,(ushort *)L"Engine.PlayerController");
    pUVar16 = (UPackageMap *)0x0;
    uVar14 = 1;
    puVar13 = (ushort *)0x0;
    puVar3 = FString::operator*(local_54);
    local_b8 = 3.8679312e-29;
    UObject::StaticLoadClass
              (&AController::PrivateStaticClass,(UObject *)0x0,puVar3,puVar13,uVar14,pUVar16);
    iVar5 = *piVar2;
    puVar4 = (undefined4 *)FRotator::FRotator(local_48,0,0,0);
    local_bc = (undefined1 *)*puVar4;
    local_b8 = (float)puVar4[1];
    local_c8 = 0;
    uStack_cc = 0;
    local_c4 = 0;
    local_c0 = 0;
    FName::FName((FName *)&uStack_cc,0);
    iVar5 = (**(code **)(iVar5 + 0xc0))();
    if (iVar5 == 0) {
      appFailAssert("pController",".\\L2ConsoleWnd.cpp",0x153);
    }
    pUVar16 = (UPackageMap *)0x1;
    uVar14 = 0;
    pfVar11 = &local_b8;
    this = (FName *)User::GetClassNameW((User *)(iVar8 + 0x54));
    puVar3 = FName::operator*(this);
    uStack_f0 = 0x10442163;
    pUVar6 = UObject::StaticLoadClass
                       (&APawn::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pfVar11,uVar14,
                        pUVar16);
    *(UClass **)(iVar5 + 0x4f8) = pUVar6;
    local_c4 = *piVar2;
    iVar9 = param_1 * 0x10;
    iVar12 = 0;
    iVar8 = FUN_107a6660();
    puVar4 = (undefined4 *)FRotator::FRotator((FRotator *)&stack0xffffff50,0,iVar8,iVar12);
    uStack_f4 = *puVar4;
    uStack_f0 = puVar4[1];
    uStack_fc = *(undefined4 *)(&DAT_10bbc098 + iVar9);
    uStack_100 = *(undefined4 *)(&DAT_10bbc094 + iVar9);
    uStack_104 = *(undefined4 *)(&DAT_10bbc09c + iVar9);
    local_bc = (undefined1 *)&uStack_104;
    uStack_f8 = uStack_104;
    FName::FName((FName *)&uStack_104,0);
    uVar7 = (**(code **)(local_c4 + 0xc0))(*(undefined4 *)(iVar5 + 0x4f8));
    *(undefined4 *)(iVar5 + 0x3bc) = uVar7;
    local_c8 = *(undefined4 *)(&DAT_10bbc098 + iVar9);
    local_c4 = *(int *)(&DAT_10bbc09c + iVar9);
    fVar15 = 0.0;
    uStack_cc = *(undefined4 *)(&DAT_10bbc094 + iVar9);
    iVar8 = *(int *)(iVar5 + 0x3bc);
    uStack_f8 = *(undefined4 *)(iVar8 + 0x2f0);
    uStack_f4 = *(undefined4 *)(iVar8 + 0x2f0);
    uStack_f0 = *(undefined4 *)(iVar8 + 0x2f4);
    puVar10 = &stack0xffffff58;
    (**(code **)(*piVar2 + 0xe4))
              (puVar10,iVar5,&uStack_cc,&stack0xffffff28,0x86,uStack_f8,uStack_f4,uStack_f0);
    if (fVar15 * 12.0 < 1.9) {
      local_b8 = (2.15 - fVar15 * 12.0) + local_b8;
    }
    (**(code **)(*piVar2 + 0xa8))(*(undefined4 *)(iVar5 + 0x3bc),local_c0,local_bc,local_b8,1,1,0);
    uVar7 = 0;
    *(undefined4 *)(puVar10 + 600) = *(undefined4 *)(iVar5 + 0x3bc);
    *(int *)(*(int *)(iVar5 + 0x3bc) + 0x14d8) = iVar5;
    *(undefined1 *)(iVar5 + 0xc2) = 4;
    *(undefined1 *)(*(int *)(iVar5 + 0x3bc) + 0xc2) = 4;
    (**(code **)(**(int **)(iVar5 + 0x3bc) + 0x1c8))(1,0,0,uVar7,0x3f800000);
    User::SetPawnResource((User *)0x0);
    puVar1 = (uint *)(*(int *)(iVar5 + 0x3bc) + 0x17ec);
    *puVar1 = *puVar1 | 1;
    APawn::SetLobbyWaitAnimName
              (*(APawn **)(iVar5 + 0x3bc),
               (ushort *)(u_social_spwait01_MFighter_10a73fc8 + param_1 * 0x200));
    local_4 = 0xffffffff;
    FString::~FString(local_54);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10442540 FUN_10442540

void FUN_10442540(undefined4 param_1,int param_2)

{
  AActor *pAVar1;
  int in_ECX;
  int *piStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    piStack_10 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
    pAVar1 = *(AActor **)(*piStack_10 + 0x3c);
    if (pAVar1 != (AActor *)0x0) {
      if (param_2 == 2) {
        iStack_8 = 0;
        iStack_c = 0;
        FName::FName((FName *)&piStack_10,(ushort *)L"LogOn_Warp",1);
        AActor::eventTriggerEvent(pAVar1);
      }
      else {
        if (param_2 == 3) {
          iStack_8 = 0;
          iStack_c = 0;
          FName::FName((FName *)&piStack_10,(ushort *)L"Char_Create_Warp",1);
          AActor::eventTriggerEvent(pAVar1);
          return;
        }
        iStack_c = param_2 + -4;
        if (iStack_c == 0) {
          iStack_8 = iStack_c;
          FName::FName((FName *)&piStack_10,(ushort *)L"Char_Select_Warp",1);
          AActor::eventTriggerEvent(pAVar1);
          return;
        }
      }
    }
  }
  return;
}


// ==== 104425f0 FUN_104425f0

void FUN_104425f0(int param_1,undefined4 param_2,int param_3)

{
  AActor *pAVar1;
  int in_ECX;
  EFindName EVar2;
  FName aFStack_2c [4];
  undefined4 uStack_28;
  wchar_t *pwVar3;
  ushort *puVar4;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811399;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x50) == 0) {
    return;
  }
  if (param_1 == -1) {
    return;
  }
  pAVar1 = *(AActor **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38) + 0x3c);
  if (pAVar1 == (AActor *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  FString::FString(local_18);
  local_4 = 0;
  switch(param_1) {
  case 0:
    pwVar3 = L"Human";
    break;
  case 1:
    pwVar3 = L"Elf";
    break;
  case 2:
    pwVar3 = L"DarkElf";
    break;
  case 3:
    pwVar3 = L"Orc";
    break;
  case 4:
    pwVar3 = L"Dwarf";
    break;
  default:
    goto switchD_1044264c_default;
  }
  uStack_28 = 0x1044267e;
  FString::operator=(local_18,(ushort *)pwVar3);
switchD_1044264c_default:
  switch(param_2) {
  case 0:
  case 0x12:
  case 0x1f:
  case 0x2c:
  case 0x35:
    pwVar3 = L"_Knight";
    break;
  default:
    goto switchD_1044268e_caseD_1;
  case 10:
  case 0x19:
  case 0x26:
  case 0x31:
    pwVar3 = L"_Mage";
  }
  uStack_28 = 0x104426ab;
  FString::operator+=(local_18,(ushort *)pwVar3);
switchD_1044268e_caseD_1:
  if (param_3 == 0) {
    puVar4 = (ushort *)&DAT_1089156c;
  }
  else {
    if (param_3 != 1) goto LAB_104426cf;
    puVar4 = (ushort *)&DAT_10891574;
  }
  uStack_28 = 0x104426cf;
  FString::operator+=(local_18,puVar4);
LAB_104426cf:
  uStack_28 = 0x104426de;
  FString::operator+=(local_18,(ushort *)L"_Warp");
  uStack_28 = 0;
  EVar2 = 1;
  puVar4 = FString::operator*(local_18);
  FName::FName(aFStack_2c,puVar4,EVar2);
  AActor::eventTriggerEvent(pAVar1);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 104427f0 FUN_104427f0

void FUN_104427f0(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort *puVar3;
  FName *pFVar4;
  UClass *pUVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  User *this;
  User *pUVar10;
  int iVar11;
  char in_stack_00000214;
  int in_stack_00000218;
  undefined1 *puVar12;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iVar13;
  undefined4 uStack_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined1 **ppuVar14;
  EFindName EVar15;
  ushort *puVar16;
  float fVar17;
  ulong uVar18;
  UPackageMap *pUVar19;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  FString local_54 [12];
  FRotator local_48 [20];
  int iStack_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108113b9;
  local_c = ExceptionList;
  if (param_1 < 8) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x50) + 0x19c);
    ExceptionList = &local_c;
    if (piVar2 == (int *)0x0) {
      ExceptionList = &local_c;
      appFailAssert("Level",".\\L2ConsoleWnd.cpp",399);
    }
    local_7c = (undefined1 *)(param_1 * 0x314 + in_ECX);
    this = (User *)(local_7c + 0x37bc);
    puVar7 = (undefined4 *)&stack0x00000008;
    pUVar10 = this;
    for (iVar9 = 0xc5; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pUVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      pUVar10 = pUVar10 + 4;
    }
    FString::FString(local_54);
    local_4 = 0;
    FString::operator=(local_54,(ushort *)L"Engine.PlayerController");
    pUVar19 = (UPackageMap *)0x0;
    uVar18 = 1;
    puVar16 = (ushort *)0x0;
    puVar3 = FString::operator*(local_54);
    UObject::StaticLoadClass
              (&AController::PrivateStaticClass,(UObject *)0x0,puVar3,puVar16,uVar18,pUVar19);
    iVar9 = *piVar2;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    FRotator::FRotator(local_48,0,0,0);
    local_c4 = local_78;
    uStack_c8 = local_70;
    local_c0 = local_74;
    local_bc = local_70;
    FName::FName((FName *)&uStack_c8,0);
    iVar9 = (**(code **)(iVar9 + 0xc0))();
    if (iVar9 == 0) {
      appFailAssert("pController",".\\L2ConsoleWnd.cpp",0x199);
    }
    pUVar19 = (UPackageMap *)0x1;
    uVar18 = 0;
    puVar3 = (ushort *)&stack0xffffff4c;
    pFVar4 = (FName *)User::GetClassNameW(this);
    puVar16 = FName::operator*(pFVar4);
    uStack_ec = 0x1044296c;
    pUVar5 = UObject::StaticLoadClass
                       (&APawn::PrivateStaticClass,(UObject *)0x0,puVar16,puVar3,uVar18,pUVar19);
    *(UClass **)(iVar9 + 0x4f8) = pUVar5;
    local_c0 = *piVar2;
    iVar11 = iStack_34 * 0x10;
    iVar13 = 0;
    iVar6 = FUN_107a6660();
    puVar7 = (undefined4 *)FRotator::FRotator((FRotator *)&stack0xffffff50,0,iVar6,iVar13);
    uStack_f0 = *puVar7;
    uStack_ec = puVar7[1];
    uStack_f8 = *(undefined4 *)(&DAT_10bbc1b8 + iVar11);
    uStack_fc = *(undefined4 *)(&DAT_10bbc1b4 + iVar11);
    uStack_100 = *(undefined4 *)(&DAT_10bbc1bc + iVar11);
    puVar7 = &uStack_100;
    uStack_f4 = uStack_100;
    FName::FName((FName *)&uStack_100,0);
    uVar8 = (**(code **)(local_c0 + 0xc0))(*(undefined4 *)(iVar9 + 0x4f8));
    *(undefined4 *)(iVar9 + 0x3bc) = uVar8;
    uStack_c8 = *(undefined4 *)(&DAT_10bbc1b8 + iVar11);
    local_c4 = *(undefined4 *)(&DAT_10bbc1bc + iVar11);
    fVar17 = 0.0;
    local_7c = (undefined1 *)0x0;
    iVar6 = *(int *)(iVar9 + 0x3bc);
    uStack_f4 = *(undefined4 *)(iVar6 + 0x2f0);
    uStack_f0 = *(undefined4 *)(iVar6 + 0x2f0);
    uStack_ec = *(undefined4 *)(iVar6 + 0x2f4);
    puVar12 = &stack0xffffff58;
    (**(code **)(*piVar2 + 0xe4))
              (puVar12,iVar9,&stack0xffffff34,&stack0xffffff28,0x86,uStack_f4,uStack_f0,uStack_ec);
    if (fVar17 * 12.0 < 1.9) {
      puVar7 = (undefined4 *)((2.15 - fVar17 * 12.0) + (float)puVar7);
    }
    (**(code **)(*piVar2 + 0xa8))(*(undefined4 *)(iVar9 + 0x3bc),local_c0,local_bc,puVar7,1,1,0);
    uVar8 = 0;
    *(undefined4 *)(puVar12 + 0x39c0) = *(undefined4 *)(iVar9 + 0x3bc);
    *(int *)(*(int *)(iVar9 + 0x3bc) + 0x14d8) = iVar9;
    *(undefined1 *)(iVar9 + 0xc2) = 4;
    *(undefined1 *)(*(int *)(iVar9 + 0x3bc) + 0xc2) = 4;
    (**(code **)(**(int **)(iVar9 + 0x3bc) + 0x1c8))(1,0,0,uVar8,0x3f800000);
    puVar1 = (uint *)(*(int *)(iVar9 + 0x3bc) + 0x17e0);
    *puVar1 = *puVar1 | 1;
    *(uint *)(*(int *)(iVar9 + 0x3bc) + 0x17e4) = param_1;
    iVar6 = User::GetItemClassID(this,10);
    *(int *)(*(int *)(iVar9 + 0x3bc) + 0x6a0) = iVar6;
    if (*(int *)(*(int *)(iVar9 + 0x3bc) + 0x6a0) == 0) {
      iVar6 = User::GetItemClassID(this,0xb);
      *(int *)(*(int *)(iVar9 + 0x3bc) + 0x6a0) = iVar6;
    }
    if (*(int *)(*(int *)(iVar9 + 0x3bc) + 0x6a0) == 0) {
      iVar6 = User::GetItemClassID(this,0xc);
      *(int *)(*(int *)(iVar9 + 0x3bc) + 0x6a0) = iVar6;
    }
    iVar6 = *(int *)(iVar9 + 0x3bc);
    if (((-1 < *(int *)(iVar6 + 0x6a0)) && (iVar11 = thunk_FUN_10422ee0(), iVar11 != 0)) &&
       (*(int *)(iVar11 + 4) == 0)) {
      if (*(int *)(iVar11 + 0x168) < 0) {
        *(uint *)(iVar6 + 0x1820) = *(uint *)(iVar6 + 0x1820) & 0xfffffffd;
      }
      else {
        *(uint *)(iVar6 + 0x1820) = *(uint *)(iVar6 + 0x1820) | 2;
      }
    }
    *(undefined4 *)(*(int *)(iVar9 + 0x3bc) + 0x1830) = *(undefined4 *)(puVar12 + 0x3aa4);
    *(undefined4 *)(*(int *)(iVar9 + 0x3bc) + 0x1834) = *(undefined4 *)(puVar12 + 0x3aac);
    *(undefined4 *)(*(int *)(iVar9 + 0x3bc) + 0x1838) = *(undefined4 *)(puVar12 + 0x3ab0);
    User::SetPawnResource(this);
    if (in_stack_00000218 < 1) {
      if (in_stack_00000218 == 0) {
        piVar2 = *(int **)(iVar9 + 0x3bc);
        local_7c = (undefined1 *)piVar2[*(byte *)((int)piVar2 + 0x71d) + 0x21b];
        iVar6 = *piVar2;
        EVar15 = 1;
        puVar3 = FName::operator*((FName *)&local_7c);
        FName::FName((FName *)&stack0xffffff54,puVar3,EVar15);
        (**(code **)(iVar6 + 0x328))();
        *(undefined1 *)(iVar9 + 0x435) = 1;
      }
    }
    else {
      piVar2 = *(int **)(iVar9 + 0x3bc);
      local_7c = (undefined1 *)piVar2[*(byte *)((int)piVar2 + 0x71d) + 0x233];
      iVar6 = *piVar2;
      EVar15 = 1;
      puVar3 = FName::operator*((FName *)&local_7c);
      FName::FName((FName *)&stack0xffffff54,puVar3,EVar15);
      (**(code **)(iVar6 + 0x328))();
      *(undefined1 *)(iVar9 + 0x435) = 0;
    }
    if (in_stack_00000214 != '\0') {
      iVar6 = *(int *)*(APawn **)(iVar9 + 0x3bc);
      local_7c = &stack0xffffff54;
      ppuVar14 = &local_7c;
      pFVar4 = (FName *)APawn::GetDeathWaitAnimName(*(APawn **)(iVar9 + 0x3bc));
      puVar3 = FName::operator*(pFVar4);
      local_bc = 0x10442de0;
      FName::FName((FName *)&stack0xffffff54,puVar3,(EFindName)ppuVar14);
      (**(code **)(iVar6 + 0x328))();
      *(undefined1 *)(iVar9 + 0x435) = 2;
    }
    *(undefined1 *)(iVar9 + 0x434) = 0;
    local_4 = 0xffffffff;
    FString::~FString(local_54);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10442fc0 FUN_10442fc0

void FUN_10442fc0(ushort *param_1,int param_2)

{
  AActor *pAVar1;
  int in_ECX;
  int *piStack_10;
  AActor *pAStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    piStack_10 = *(int **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x54) + 0x38);
    pAVar1 = *(AActor **)(*piStack_10 + 0x3c);
    if ((pAVar1 != (AActor *)0x0) && (param_1 != (ushort *)0x0)) {
      uStack_8 = 0;
      pAStack_c = pAVar1;
      if (param_2 == 0) {
        pAStack_c = (AActor *)0x0;
      }
      FName::FName((FName *)&piStack_10,param_1,1);
      AActor::eventTriggerEvent(pAVar1);
    }
  }
  return;
}


// ==== 10443020 FUN_10443020

void FUN_10443020(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x30);
  return;
}


// ==== 1044307a Catch@1044307a

void Catch_1044307a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044308e Catch@1044308e

void Catch_1044308e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::Refresh");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104430f0 FUN_104430f0

void FUN_104430f0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xc);
  return;
}


// ==== 10443100 FUN_10443100

void FUN_10443100(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  return;
}


// ==== 10443150 Catch@10443150

void Catch_10443150(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10443164 Catch@10443164

void Catch_10443164(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::SetWantedFogRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104431b0 FUN_104431b0

void FUN_104431b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}


// ==== 104431f8 Catch@104431f8

void Catch_104431f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044320c Catch@1044320c

void Catch_1044320c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::SetWantedFogColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443280 FUN_10443280

void FUN_10443280(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  *(undefined4 *)(in_ECX + 0x2c) = param_2;
  *(undefined4 *)(in_ECX + 0x20) = param_2;
  return;
}


// ==== 104432d6 Catch@104432d6

void Catch_104432d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104432ea Catch@104432ea

void Catch_104432ea(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::SetCurrentFogRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443330 FUN_10443330

void FUN_10443330(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = param_1;
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}


// ==== 1044337b Catch@1044337b

void Catch_1044337b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044338f Catch@1044338f

void Catch_1044338f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::SetCurrentFogColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104433e0 FUN_104433e0

void FUN_104433e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x30) = param_1;
  return;
}


// ==== 1044342a Catch@1044342a

void Catch_1044342a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044343e Catch@1044343e

void Catch_1044343e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::SetFogSpeed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443480 FUN_10443480

void FUN_10443480(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x40400000;
  return;
}


// ==== 104434de Catch@104434de

void Catch_104434de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104434f2 Catch@104434f2

void Catch_104434f2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2SkyEnvironment::L2SkyEnvironment");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443540 FUN_10443540

void FUN_10443540(float param_1)

{
  int in_ECX;
  
  param_1 = *(float *)(in_ECX + 0x18) - param_1;
  *(float *)(in_ECX + 0x18) = param_1;
  if (param_1 < 0.0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    return;
  }
  return;
}


// ==== 10443580 FUN_10443580

float10 FUN_10443580(void)

{
  int in_ECX;
  
  if (5.0 <= *(float *)GL2TerrainCR_exref) {
    if ((5.0 <= *(float *)GL2TerrainCR_exref) && (*(float *)GL2TerrainCR_exref < 6.0)) {
      return (float10)*(float *)(in_ECX + 0x3cc);
    }
    if ((6.0 <= *(float *)GL2TerrainCR_exref) && (*(float *)GL2TerrainCR_exref < 7.0)) {
      return (float10)*(float *)(in_ECX + 0x3d4);
    }
    if ((7.0 <= *(float *)GL2TerrainCR_exref) && (*(float *)GL2TerrainCR_exref < 8.0)) {
      return (float10)*(float *)(in_ECX + 0x3dc);
    }
    if (8.0 <= *(float *)GL2TerrainCR_exref) {
      return (float10)*(float *)(in_ECX + 0x3e4);
    }
  }
  return (float10)*(float *)(in_ECX + 0x3c4);
}


// ==== 10443650 FUN_10443650

float10 FUN_10443650(void)

{
  int in_ECX;
  
  if (5.0 <= *(float *)GL2TerrainCR_exref) {
    if ((5.0 <= *(float *)GL2TerrainCR_exref) && (*(float *)GL2TerrainCR_exref < 6.0)) {
      return (float10)*(float *)(in_ECX + 0x3d0);
    }
    if ((6.0 <= *(float *)GL2TerrainCR_exref) && (*(float *)GL2TerrainCR_exref < 7.0)) {
      return (float10)*(float *)(in_ECX + 0x3d8);
    }
    if ((7.0 <= *(float *)GL2TerrainCR_exref) && (*(float *)GL2TerrainCR_exref < 8.0)) {
      return (float10)*(float *)(in_ECX + 0x3e0);
    }
    if (8.0 <= *(float *)GL2TerrainCR_exref) {
      return (float10)*(float *)(in_ECX + 1000);
    }
  }
  return (float10)*(float *)(in_ECX + 0x3c8);
}


// ==== 10443720 FUN_10443720

float10 FUN_10443720(float param_1,float param_2,float param_3)

{
  if (param_1 <= param_2) {
    return (float10)((param_1 - param_3) / (param_1 - param_2));
  }
  do {
    param_2 = param_2 + 24.0;
  } while (param_2 < param_1);
  return (float10)((param_1 - param_3) / (param_1 - param_2));
}


// ==== 10443800 FUN_10443800

void FUN_10443800(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811449;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10443850 FUN_10443850

void FUN_10443850(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811469;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 104438a0 FUN_104438a0

void FUN_104438a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811489;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10443920 FUN_10443920

float10 FUN_10443920(float *param_1,float *param_2,float param_3)

{
  return (float10)((*param_2 - *param_1) * param_3 + *param_1);
}


// ==== 10443950 FUN_10443950

ushort FUN_10443950(byte *param_1,byte *param_2,float param_3)

{
  undefined2 in_FPUControlWord;
  
  param_2._0_1_ =
       (undefined1)
       (int)ROUND((float)(int)((uint)*param_2 - (uint)*param_1) * param_3 + (float)*param_1);
  return CONCAT11((char)((ushort)in_FPUControlWord >> 8),param_2._0_1_) | 0xc00;
}


// ==== 10443a20 FUN_10443a20

void FUN_10443a20(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108114a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  thunk_FUN_10443020();
  ExceptionList = local_10;
  return;
}


// ==== 10443a75 Catch@10443a75

void Catch_10443a75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10443a89 Catch@10443a89

void Catch_10443a89(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::Reset");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443ad0 FUN_10443ad0

void FUN_10443ad0(float param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  undefined1 uVar2;
  int in_ECX;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108114b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(float *)(in_ECX + 0x34) <= 0.0) {
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0xc);
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0xc);
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  else {
    param_1 = *(float *)(in_ECX + 0x34) - param_1;
    ExceptionList = &local_10;
    *(float *)(in_ECX + 0x34) = param_1;
    fVar1 = 1.0 - param_1 / *(float *)(in_ECX + 0x30);
    fVar3 = (float10)thunk_FUN_10443920(in_ECX + 0x1c,in_ECX + 0x10,fVar1);
    *(float *)(in_ECX + 0x28) = (float)fVar3;
    fVar3 = (float10)thunk_FUN_10443920(in_ECX + 0x20,in_ECX + 0x14,fVar1);
    *(float *)(in_ECX + 0x2c) = (float)fVar3;
    uVar2 = thunk_FUN_10443950(in_ECX + 0x1a,in_ECX + 0xe,fVar1);
    *(undefined1 *)(in_ECX + 0x26) = uVar2;
    uVar2 = thunk_FUN_10443950(in_ECX + 0x19,in_ECX + 0xd,fVar1);
    *(undefined1 *)(in_ECX + 0x25) = uVar2;
    uVar2 = thunk_FUN_10443950(in_ECX + 0x18,in_ECX + 0xc,fVar1);
    *(undefined1 *)(in_ECX + 0x24) = uVar2;
  }
  *param_2 = *(undefined4 *)(in_ECX + 0x28);
  *param_3 = *(undefined4 *)(in_ECX + 0x2c);
  *param_4 = *(undefined4 *)(in_ECX + 0x24);
  ExceptionList = local_10;
  return;
}


// ==== 10443c03 Catch@10443c03

void Catch_10443c03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10443c17 Catch@10443c17

void Catch_10443c17(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::UpdateFog");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443c90 FUN_10443c90

void FUN_10443c90(int param_1)

{
  ushort *puVar1;
  UObject *pUVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108114c0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = in_ECX[1];
  if (iVar3 != param_1) {
    ExceptionList = &local_10;
    in_ECX[3] = iVar3;
    in_ECX[1] = param_1;
    in_ECX[6] = (int)((float)in_ECX[5] - (float)in_ECX[6]);
    if (iVar3 == 0) {
      puVar1 = UL2NEnvManager::GetCloudName(*(UL2NEnvManager **)(*in_ECX + 0x6c),0);
      pUVar2 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar1,iVar3);
      in_ECX[3] = (int)pUVar2;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10443d13 Catch@10443d13

void Catch_10443d13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10443d27 Catch@10443d27

void Catch_10443d27(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2SkyEnvironment::SetNewMaterial");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10443d80 FUN_10443d80

undefined1 * FUN_10443d80(undefined1 *param_1,byte *param_2,byte *param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = param_2;
  bVar1 = param_2[2];
  bVar2 = param_3[2];
  bVar3 = param_3[1];
  param_1[3] = 0xff;
  param_2._0_1_ =
       (undefined1)(int)ROUND((float)bVar1 + param_4 * (float)(int)((uint)bVar2 - (uint)bVar1));
  param_1[2] = param_2._0_1_;
  uVar5 = (uint)pbVar4[1];
  param_2._0_1_ = (undefined1)(int)ROUND((float)(int)(bVar3 - uVar5) * param_4 + (float)uVar5);
  param_1[1] = param_2._0_1_;
  uVar5 = (uint)*pbVar4;
  param_2._0_1_ = (undefined1)(int)ROUND(param_4 * (float)(int)(*param_3 - uVar5) + (float)uVar5);
  *param_1 = param_2._0_1_;
  return param_1;
}


// ==== 10443ea0 FUN_10443ea0

void FUN_10443ea0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *in_ECX;
  float *pfVar5;
  ushort local_278 [256];
  ushort local_78 [34];
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  int local_20;
  float local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  puStack_c = &LAB_108114d0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd7c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  iVar2 = (**(code **)(**(int **)GConfig_exref + 0x10))
                    (&DAT_108919f0,L"Color",local_278,0x100,param_1);
  if ((((iVar2 != 0) &&
       (iVar2 = Parse(local_278,(ushort *)&DAT_108919e8,(uchar *)(in_ECX + 6)), iVar2 != 0)) &&
      (iVar2 = Parse(local_278,(ushort *)&DAT_108919e0,(uchar *)((int)in_ECX + 0x19)), iVar2 != 0))
     && (iVar2 = Parse(local_278,(ushort *)&DAT_108919d8,(uchar *)((int)in_ECX + 0x1a)), iVar2 != 0)
     ) {
    pfVar4 = (float *)(in_ECX + 4);
    iVar2 = (**(code **)(**(int **)GConfig_exref + 8))(&DAT_108919f0,L"Start",pfVar4,uVar1);
    if (iVar2 != 0) {
      pfVar5 = (float *)(in_ECX + 5);
      iVar2 = (**(code **)(**(int **)GConfig_exref + 8))(&DAT_108919f0,&DAT_108919bc,pfVar5,uVar1);
      if ((iVar2 != 0) &&
         (iVar2 = (**(code **)(**(int **)GConfig_exref + 8))
                            (&DAT_108919f0,L"Speed",local_18 + 7,uVar1), iVar2 != 0)) {
        *pfVar4 = *pfVar4 * 0.00048828125;
        *pfVar5 = *pfVar5 * 0.00048828125;
        param_1 = 0;
        iVar2 = (**(code **)(**(int **)GConfig_exref + 4))(L"Position",&DAT_10891990,&param_1,uVar1)
        ;
        if (iVar2 != 0) {
          local_20 = 0;
          while( true ) {
            if (param_1 <= local_20) {
              *local_18 = 1;
              ExceptionList = local_10;
              return;
            }
            iVar2 = local_20 + 1;
            appSprintf(local_78,(ushort *)L"Pos%d",iVar2);
            iVar3 = (**(code **)(**(int **)GConfig_exref + 0x10))
                              (L"Position",local_78,local_278,0x100,uVar1);
            if (((iVar3 == 0) ||
                (iVar3 = Parse(local_278,(ushort *)&DAT_10891960,&local_30), iVar3 == 0)) ||
               ((iVar3 = Parse(local_278,(ushort *)&DAT_10891958,&local_34), iVar3 == 0 ||
                (iVar3 = Parse(local_278,(ushort *)&DAT_10891950,&local_24), iVar3 == 0)))) break;
            pfVar4 = (float *)thunk_FUN_10370680(0xc,local_18 + 1);
            local_20 = iVar2;
            if (pfVar4 != (float *)0x0) {
              local_2c = local_34;
              local_1c = local_24;
              *pfVar4 = local_30;
              pfVar4[1] = local_34;
              pfVar4[2] = local_24;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044412b Catch@1044412b

void Catch_1044412b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1044413f Catch@1044413f

void Catch_1044413f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FAbnormalZone::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444210 FUN_10444210

uint FUN_10444210(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int in_ECX;
  uint local_1c;
  
  iVar7 = 0;
  local_1c = 0;
  while (iVar7 < *(int *)(in_ECX + 8)) {
    pfVar1 = (float *)(*(int *)(in_ECX + 4) + iVar7 * 0xc);
    fVar3 = pfVar1[1];
    iVar7 = iVar7 + 1;
    pfVar2 = (float *)(*(int *)(in_ECX + 4) + (iVar7 % *(int *)(in_ECX + 8)) * 0xc);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    if (fVar5 == fVar3) {
      fVar5 = fVar5 + 0.001;
    }
    fVar6 = (fVar3 - param_1[1]) * (fVar5 - param_1[1]);
    if ((fVar6 < 0.0 != (fVar6 == 0.0)) &&
       (*param_1 - fVar4 <= ((param_1[1] - fVar5) / (fVar3 - fVar5)) * (*pfVar1 - fVar4))) {
      local_1c = local_1c + 1;
    }
  }
  return local_1c & 1;
}


// ==== 10444312 Catch@10444312

void Catch_10444312(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 10444326 Catch@10444326

void Catch_10444326(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FAbnormalZone::IsInside");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444390 FUN_10444390

int FUN_10444390(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108114f0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar3 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (*(int *)(in_ECX + 0xc) <= iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = *(int *)(in_ECX + 8);
    iVar2 = thunk_FUN_10444210(param_1);
    if (iVar2 != 0) break;
    iVar3 = iVar3 + 1;
  }
  ExceptionList = local_10;
  return iVar3 * 0x20 + iVar1;
}


// ==== 1044440a Catch@1044440a

void Catch_1044440a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1044441e Catch@1044441e

void Catch_1044441e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FAbnormalZone *L2AbnormalZone::GetCurrentZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444470 FUN_10444470

void FUN_10444470(int param_1,int param_2)

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


// ==== 10444540 FUN_10444540

void FUN_10444540(undefined4 param_1)

{
  int in_ECX;
  
  thunk_FUN_10373830(param_1,in_ECX + 0x1bc);
  return;
}


// ==== 10444560 FUN_10444560

float10 FUN_10444560(undefined4 param_1)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  
  fVar2 = (float10)thunk_FUN_10373830(param_1,in_ECX + 0x1bc);
  fVar1 = (float)fVar2;
  if ((1 < *(int *)(in_ECX + 0x3f4)) && (fVar1 < *(float *)(in_ECX + 0x3c0))) {
    if (*(float *)(in_ECX + 0x3bc) < fVar1 == (*(float *)(in_ECX + 0x3bc) == fVar1)) {
      return (float10)1;
    }
    return (float10)((*(float *)(in_ECX + 0x3c0) - fVar1) /
                    (*(float *)(in_ECX + 0x3c0) - *(float *)(in_ECX + 0x3bc)));
  }
  return (float10)0;
}


// ==== 10444600 FUN_10444600

void FUN_10444600(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811509;
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


// ==== 104446c0 FUN_104446c0

void FUN_104446c0(int *param_1)

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


// ==== 10444710 FUN_10444710

int FUN_10444710(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_10444470(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 10444760 FUN_10444760

void FUN_10444760(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811536;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  thunk_FUN_10391680();
  ExceptionList = local_c;
  return;
}


// ==== 104447c0 FUN_104447c0

void FUN_104447c0(float param_1)

{
  float *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10811564;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray((FArray *)(in_ECX + 0xe));
  local_8 = 2;
  in_ECX[2] = param_1;
  *in_ECX = *(float *)GL2FogStart_exref;
  in_ECX[1] = *(float *)GL2FogEnd_exref;
  in_ECX[3] = -1.7014118e+38;
  in_ECX[4] = *in_ECX * 32768.0 * 0.0625;
  in_ECX[5] = in_ECX[1] * 32768.0 * 0.0625;
  in_ECX[0xc] = *(float *)GL2FogSpeed_exref;
  thunk_FUN_10443a20();
  ExceptionList = local_10;
  return;
}


// ==== 1044487c Catch@1044487c

void Catch_1044487c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10444890 Catch@10444890

void Catch_10444890(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::L2DistanceFog");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104448f0 FUN_104448f0

void FUN_104448f0(int param_1)

{
  int in_ECX;
  undefined1 *local_30;
  int local_2c;
  double local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10811588;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) == 0) {
    return;
  }
  if (param_1 != 0) {
    local_24 = *(double *)(*(int *)(*(int *)(in_ECX + 8) + 0x6c) + 0x134);
    ExceptionList = &local_10;
    thunk_FUN_10368e10();
    local_8._0_1_ = 1;
    (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 0x6c) + 0xdc))((float)local_24,&local_30);
    if (0 < local_2c) {
      *(undefined1 *)(in_ECX + 0xe) = local_30[2];
      *(undefined1 *)(in_ECX + 0xd) = local_30[1];
      *(undefined1 *)(in_ECX + 0xc) = *local_30;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10391680();
  }
  ExceptionList = local_10;
  return;
}


// ==== 104449b6 Catch@104449b6

void Catch_104449b6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104449ca Catch@104449ca

void Catch_104449ca(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::CalcFogColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444a30 FUN_10444a30

undefined1 * FUN_10444a30(undefined1 *param_1)

{
  byte bVar1;
  double dVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined2 in_FPUControlWord;
  byte *local_34;
  int local_30;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108115a8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  local_20 = *(double *)(*(int *)(*(int *)(in_ECX + 8) + 0x6c) + 0x134);
  ExceptionList = &local_10;
  thunk_FUN_10368e10();
  local_8._0_1_ = 1;
  local_18 = (float)local_20;
  (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 0x6c) + 0xdc))(local_18,&local_34);
  if (0 < local_30) {
    bVar1 = local_34[2];
    uVar3 = SUB84(local_20,0);
    local_20._4_1_ = (byte)(int)ROUND((double)bVar1 * 0.72);
    local_34[2] = local_20._4_1_;
    local_20._4_4_ = (uint)local_34[1];
    local_20._4_1_ = (byte)(int)ROUND((double)local_20._4_4_ * 0.72);
    local_34[1] = local_20._4_1_;
    local_20._4_4_ = (uint)*local_34;
    dVar2 = (double)local_20._4_4_;
    local_18 = (float)CONCAT22(in_FPUControlWord,(ushort)bVar1);
    local_20._4_1_ = (byte)(int)ROUND(dVar2 * 0.72);
    *local_34 = local_20._4_1_;
    local_20 = (double)CONCAT44((int)ROUND(dVar2 * 0.72),uVar3);
  }
  *param_1 = 0x7f;
  param_1[1] = 0x7f;
  param_1[2] = 0x7f;
  param_1[3] = 0xff;
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10391680();
  ExceptionList = local_10;
  return param_1;
}


// ==== 10444b64 Catch@10444b64

void Catch_10444b64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10444b78 Catch@10444b78

void Catch_10444b78(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2DistanceFog::GetOutdoorFogColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444bf0 FUN_10444bf0

void FUN_10444bf0(void)

{
  AActor *in_ECX;
  undefined1 local_4 [4];
  
  AActor::ClearL2Game(in_ECX);
  if ((DAT_10c51044 != 0) && (*(int *)(DAT_10c51044 + 0x18c) != 0)) {
    thunk_FUN_10444710(local_4);
  }
  return;
}


// ==== 10444c90 FUN_10444c90

void FUN_10444c90(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108115e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0xc));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 0x18));
  ExceptionList = local_c;
  return;
}


// ==== 10444d10 FUN_10444d10

void FUN_10444d10(float param_1,ELevelTick param_2)

{
  undefined1 *puVar1;
  AActor *in_ECX;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811600;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd4;
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x74) + 0x18c) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_104446c0(local_18);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  AActor::Tick(in_ECX,param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 10444d83 Catch@10444d83

void Catch_10444d83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10444d97 Catch@10444d97

void Catch_10444d97(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AL2FogInfo::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444de0 FUN_10444de0

void FUN_10444de0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  FRange local_24 [4];
  FArray *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10811624;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_20 = (FArray *)(in_ECX + 1);
  ExceptionList = &local_10;
  FArray::FArray(local_20);
  local_8 = 1;
  FRange::FRange((FRange *)(in_ECX + 4));
  local_8 = CONCAT31(local_8._1_3_,2);
  *in_ECX = 0;
  puVar1 = (undefined4 *)FRange::FRange(local_24,0.0);
  in_ECX[4] = *puVar1;
  in_ECX[5] = puVar1[1];
  in_ECX[6] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10444e6a Catch@10444e6a

void Catch_10444e6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10444e7e Catch@10444e7e

void Catch_10444e7e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FAbnormalZone::FAbnormalZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444ed0 FUN_10444ed0

void FUN_10444ed0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1081164b;
  local_10 = ExceptionList;
  local_8 = 1;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 8); iVar1 = iVar1 + 1) {
  }
  ExceptionList = &local_10;
  FArray::Empty((FArray *)(in_ECX + 4),0xc,0);
  local_8 = 0xffffffff;
  thunk_FUN_1038fad0();
  ExceptionList = local_10;
  return;
}


// ==== 10444f3d Catch@10444f3d

void Catch_10444f3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10444f51 Catch@10444f51

void Catch_10444f51(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FAbnormalZone::~FAbnormalZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10444fa0 FUN_10444fa0

void FUN_10444fa0(byte param_1)

{
  thunk_FUN_10444760();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10444fd0 FUN_10444fd0

undefined4 FUN_10444fd0(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  float *pfVar7;
  
  for (; param_1 < 0.0; param_1 = param_1 + 24.0) {
  }
  if (!NAN(param_1) && 24.0 < param_1 != (param_1 == 24.0)) {
    do {
      param_1 = param_1 - 24.0;
    } while (24.0 <= param_1);
  }
  iVar4 = *(int *)(in_ECX + 0x3f4);
  if (0 < iVar4) {
    iVar5 = 0;
    pfVar7 = *(float **)(in_ECX + 0x3f0);
    do {
      iVar1 = iVar5 + 1;
      fVar2 = *pfVar7;
      iVar6 = iVar1 % iVar4;
      for (fVar3 = (*(float **)(in_ECX + 0x3f0))[iVar6 * 9]; fVar3 < fVar2; fVar3 = fVar3 + 24.0) {
      }
      if ((fVar2 < param_1 != (fVar2 == param_1)) && (param_1 <= fVar3)) {
        iVar4 = *(int *)(in_ECX + 0x3f0) + iVar5 * 0x24;
        *param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x3f0) + iVar5 * 0x24);
        param_2[1] = *(undefined4 *)(iVar4 + 4);
        param_2[2] = *(undefined4 *)(iVar4 + 8);
        thunk_FUN_10391740(iVar4 + 0xc);
        thunk_FUN_10391740(iVar4 + 0x18);
        iVar4 = *(int *)(in_ECX + 0x3f0) + iVar6 * 0x24;
        *param_3 = *(undefined4 *)(*(int *)(in_ECX + 0x3f0) + iVar6 * 0x24);
        param_3[1] = *(undefined4 *)(iVar4 + 4);
        param_3[2] = *(undefined4 *)(iVar4 + 8);
        thunk_FUN_10391740(iVar4 + 0xc);
        thunk_FUN_10391740(iVar4 + 0x18);
        return 1;
      }
      pfVar7 = pfVar7 + 9;
      iVar5 = iVar1;
    } while (iVar1 < iVar4);
  }
  return 0;
}


// ==== 104451d0 FUN_104451d0

undefined4 * FUN_104451d0(undefined4 *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_54;
  undefined1 local_50 [32];
  undefined4 local_30;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811690;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  thunk_FUN_10444c90();
  local_4 = 0;
  thunk_FUN_10444c90();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = thunk_FUN_10444fd0(param_2,&local_30,&local_54);
  if (iVar1 != 0) {
    fVar3 = (float10)thunk_FUN_10443720(local_30,local_54,param_2);
    param_2 = (float)fVar3;
    puVar2 = (undefined4 *)thunk_FUN_10443d80(&param_2,local_2c,local_50,param_2);
    *param_1 = *puVar2;
  }
  local_4._0_1_ = 2;
  thunk_FUN_10391680();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10391680();
  local_4 = 4;
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  thunk_FUN_10391680();
  ExceptionList = local_c;
  return param_1;
}


// ==== 10445320 FUN_10445320

undefined4 * FUN_10445320(undefined4 *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_54 [2];
  undefined1 local_4c [28];
  undefined4 local_30 [2];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108116e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  thunk_FUN_10444c90();
  local_4 = 0;
  thunk_FUN_10444c90();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = thunk_FUN_10444fd0(param_2,local_30,local_54);
  if (iVar1 != 0) {
    fVar3 = (float10)thunk_FUN_10443720(local_30[0],local_54[0],param_2);
    param_2 = (float)fVar3;
    puVar2 = (undefined4 *)thunk_FUN_10443d80(&param_2,local_28,local_4c,param_2);
    *param_1 = *puVar2;
  }
  local_4._0_1_ = 2;
  thunk_FUN_10391680();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10391680();
  local_4 = 4;
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  thunk_FUN_10391680();
  ExceptionList = local_c;
  return param_1;
}


// ==== 10445470 FUN_10445470

FArray * FUN_10445470(FArray *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_58;
  undefined4 local_54 [3];
  int local_48;
  int local_44;
  undefined4 local_30 [3];
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10811752;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  local_4 = 0;
  thunk_FUN_10444c90();
  local_4 = 2;
  thunk_FUN_10444c90();
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = thunk_FUN_10444fd0(param_2,local_54,local_30);
  if (iVar1 != 0) {
    fVar3 = (float10)thunk_FUN_10443720(local_54[0],local_30[0],param_2);
    iVar1 = 0;
    if (0 < local_44) {
      do {
        if (local_20 <= iVar1) break;
        thunk_FUN_10443d80(&local_58,local_48 + iVar1 * 4,local_24 + iVar1 * 4,(float)fVar3);
        iVar2 = FArray::Add(param_1,1,4);
        iVar1 = iVar1 + 1;
        *(undefined4 *)(*(int *)param_1 + iVar2 * 4) = local_58;
      } while (iVar1 < local_44);
    }
  }
  local_4._0_1_ = 4;
  thunk_FUN_10391680();
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_10391680();
  local_4 = 6;
  thunk_FUN_10391680();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10391680();
  ExceptionList = local_c;
  return param_1;
}


// ==== 10445610 FUN_10445610

FArray * FUN_10445610(FArray *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_58;
  undefined4 local_54 [6];
  int local_3c;
  int local_38;
  undefined4 local_30 [6];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_108117d2;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  local_4 = 0;
  thunk_FUN_10444c90();
  local_4 = 2;
  thunk_FUN_10444c90();
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = thunk_FUN_10444fd0(param_2,local_54,local_30);
  if (iVar1 != 0) {
    fVar3 = (float10)thunk_FUN_10443720(local_54[0],local_30[0],param_2);
    iVar1 = 0;
    if (0 < local_38) {
      do {
        if (local_14 <= iVar1) break;
        thunk_FUN_10443d80(&local_58,local_3c + iVar1 * 4,local_18 + iVar1 * 4,(float)fVar3);
        iVar2 = FArray::Add(param_1,1,4);
        iVar1 = iVar1 + 1;
        *(undefined4 *)(*(int *)param_1 + iVar2 * 4) = local_58;
      } while (iVar1 < local_38);
    }
  }
  local_4._0_1_ = 4;
  thunk_FUN_10391680();
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_10391680();
  local_4 = 6;
  thunk_FUN_10391680();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10391680();
  ExceptionList = local_c;
  return param_1;
}


// ==== 104457b0 FUN_104457b0

void FUN_104457b0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811816;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar1 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0;
      thunk_FUN_10391680();
      local_4 = 0xffffffff;
      thunk_FUN_10391680();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x24);
  ExceptionList = local_c;
  return;
}


// ==== 104458d0 FUN_104458d0

void FUN_104458d0(void)

{
  int iVar1;
  int iVar2;
  undefined2 local_26c;
  undefined1 local_26a [510];
  ushort local_6c [36];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811830;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd88;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)GConfig_exref + 4))
                    (L"AbnormalZone",&DAT_10891990,&local_18,L"Env.int");
  if (iVar1 == 0) {
    local_18 = 0;
  }
  local_24 = 0;
  iVar1 = local_24;
  while (local_24 = iVar1, iVar1 = local_24, local_24 < local_18) {
    local_26c = 0;
    _memset(local_26a,0,0x1fe);
    iVar1 = iVar1 + 1;
    appSprintf(local_6c,(ushort *)L"Zone%d",iVar1);
    iVar2 = (**(code **)(**(int **)GConfig_exref + 0x10))
                      (L"AbnormalZone",local_6c,&local_26c,0x100,L"Env.int");
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_103721d0(0x20,local_1c + 8);
      if (iVar2 == 0) {
        thunk_FUN_10443ea0(&local_26c);
      }
      else {
        thunk_FUN_10444de0();
        thunk_FUN_10443ea0(&local_26c);
      }
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(local_1c + 0xc); iVar1 = iVar1 + 1) {
    if (*(int *)(iVar1 * 0x20 + *(int *)(local_1c + 8)) == 0) {
      local_20 = iVar1;
      thunk_FUN_1038ae50(iVar1,1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10445a1b Catch@10445a1b

void Catch_10445a1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10445a2f Catch@10445a2f

void Catch_10445a2f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2AbnormalZone::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10445ab0 FUN_10445ab0

void FUN_10445ab0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811849;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_104457b0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10445b20 FUN_10445b20

void FUN_10445b20(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811887;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = AL2FogInfo::vftable;
  FRange::FRange((FRange *)(in_ECX + 0x3bc));
  FRange::FRange((FRange *)(in_ECX + 0x3c4));
  FRange::FRange((FRange *)(in_ECX + 0x3cc));
  FRange::FRange((FRange *)(in_ECX + 0x3d4));
  FRange::FRange((FRange *)(in_ECX + 0x3dc));
  FRange::FRange((FRange *)(in_ECX + 0x3e4));
  FArray::FArray((FArray *)(in_ECX + 0x3f0));
  ExceptionList = local_c;
  return;
}


// ==== 10445c00 FUN_10445c00

void FUN_10445c00(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_108118b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = L2AbnormalZone::vftable;
  FArray::FArray((FArray *)(in_ECX + 2));
  in_ECX[1] = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 10445c65 Catch@10445c65

void Catch_10445c65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10445c79 Catch@10445c79

void Catch_10445c79(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2AbnormalZone::L2AbnormalZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10445cc0 FUN_10445cc0

void FUN_10445cc0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108118db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = L2AbnormalZone::vftable;
  local_8 = 1;
  thunk_FUN_1038af10(0);
  local_8 = 0xffffffff;
  thunk_FUN_1039bc40();
  ExceptionList = local_10;
  return;
}


// ==== 10445d20 Catch@10445d20

void Catch_10445d20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10445d34 Catch@10445d34

void Catch_10445d34(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2AbnormalZone::~L2AbnormalZone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10445d80 FUN_10445d80

void FUN_10445d80(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10811906;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AL2FogInfo::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10445ab0();
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10445e20 FUN_10445e20

void FUN_10445e20(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_10445d80();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x400);
  }
  return;
}


// ==== 10445eb0 FUN_10445eb0

undefined4 FUN_10445eb0(void)

{
  int *in_ECX;
  
  if (in_ECX[0x17] < in_ECX[3]) {
    return **(undefined4 **)(*in_ECX + in_ECX[0x17] * 4);
  }
  return 0;
}


// ==== 10445ee0 FUN_10445ee0

undefined4 FUN_10445ee0(ushort *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar3 = 0;
  pwVar2 = u_default_10a79b38;
  do {
    iVar1 = appStrcmp((ushort *)pwVar2,param_1);
    if (iVar1 == 0) {
      return (&DAT_10a79d38)[iVar3 * 0x81];
    }
    pwVar2 = pwVar2 + 0x102;
    iVar3 = iVar3 + 1;
  } while ((int)pwVar2 < 0x10a7a348);
  return 0;
}


// ==== 10445f40 FUN_10445f40

void FUN_10445f40(FArchive *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811920;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10445f90 Catch@10445f90

void Catch_10445f90(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10445fa4 Catch@10445fa4

void Catch_10445fa4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2WarningNotice::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10445ff0 FUN_10445ff0

void FUN_10445ff0(FArchive *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811930;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,in_ECX);
  operator<<(param_1,in_ECX + 0xc);
  operator<<(param_1,in_ECX + 0x18);
  ExceptionList = local_10;
  return;
}


// ==== 10446052 Catch@10446052

void Catch_10446052(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446066 Catch@10446066

void Catch_10446066(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2Eula::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104460c0 FUN_104460c0

void FUN_104460c0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811940;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 0xf; iVar2 = iVar2 + 1) {
      thunk_FUN_10330040(param_1,in_ECX + (iVar1 * 0xf + iVar2) * 4);
      thunk_FUN_10330040(param_1,in_ECX + ((iVar1 + 0xf) * 0xf + iVar2) * 4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10446154 Catch@10446154

void Catch_10446154(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10446168 Catch@10446168

void Catch_10446168(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2HairData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104461c0 FUN_104461c0

void FUN_104461c0(void)

{
  FString *pFVar1;
  FString *in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10811962;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = (FString *)FString::FString(local_28,(ushort *)&DAT_10853d94);
  local_8._0_1_ = 1;
  FString::operator=(in_ECX,pFVar1);
  local_8._0_1_ = 0;
  FString::~FString(local_28);
  pFVar1 = (FString *)FString::FString(local_28,(ushort *)&DAT_10853d94);
  local_8._0_1_ = 2;
  FString::operator=(in_ECX + 0xc,pFVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1044624f Catch@1044624f

void Catch_1044624f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446263 Catch@10446263

void Catch_10446263(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SetItemData::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104462b0 FUN_104462b0

void FUN_104462b0(void)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811989;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::operator=(in_ECX,(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10446309 Catch@10446309

void Catch_10446309(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044631d Catch@1044631d

void Catch_1044631d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SetItemData::SetItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446360 FUN_10446360

void FUN_10446360(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108119a9;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::operator=((FString *)(in_ECX + 0xc),(FString *)&stack0x00000004);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 104463bc Catch@104463bc

void Catch_104463bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104463d0 Catch@104463d0

void Catch_104463d0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SetItemData::SetEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446410 FUN_10446410

void FUN_10446410(FArchive *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108119c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,in_ECX);
  operator<<(param_1,in_ECX + 0xc);
  ExceptionList = local_10;
  return;
}


// ==== 1044646b Catch@1044646b

void Catch_1044646b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044647f Catch@1044647f

void Catch_1044647f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SetItemData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104464c0 FUN_104464c0

FName * FUN_104464c0(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 104464e0 FUN_104464e0

FName * FUN_104464e0(FName *param_1,uint param_2)

{
  int in_ECX;
  
  if (param_2 < 0xf) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0xd8);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10446520 FUN_10446520

FName * FUN_10446520(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (param_2 < 0xf) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0xe0 + param_3 * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10446560 FUN_10446560

FName * FUN_10446560(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (param_2 < 0xf) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x114 + (param_3 * 0xf + param_2) * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 104465b0 FUN_104465b0

FName * FUN_104465b0(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (param_2 < 0xf) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x36c + (param_3 * 0xf + param_2) * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10446600 FUN_10446600

undefined4 FUN_10446600(void)

{
  return 0;
}


// ==== 10446610 FUN_10446610

undefined4 FUN_10446610(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 0xf) {
    return *(undefined4 *)(in_ECX + 0xe8);
  }
  return 0;
}


// ==== 10446630 FUN_10446630

undefined4 FUN_10446630(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 0xf) {
    return *(undefined4 *)(in_ECX + 0xf0);
  }
  return 0;
}


// ==== 10446650 FUN_10446650

undefined4 FUN_10446650(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 0xf) {
    return *(undefined4 *)(in_ECX + 0x204 + param_1 * 4);
  }
  return 0;
}


// ==== 10446670 FUN_10446670

FName * FUN_10446670(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10446690 FUN_10446690

FName * FUN_10446690(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (((param_2 < 0xf) && (-1 < param_3)) && (param_3 < *(int *)(in_ECX + 0xe8))) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0xec + param_3 * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 104466e0 FUN_104466e0

FName * FUN_104466e0(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (((param_2 < 0xf) && (-1 < param_3)) && (param_3 < *(int *)(in_ECX + 0xf0))) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0xf4 + param_3 * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10446730 FUN_10446730

FName * FUN_10446730(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (((param_2 < 0xf) && (-1 < param_3)) && (param_3 < *(int *)(in_ECX + 0x204 + param_2 * 4))) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x240 + (param_3 * 0xf + param_2) * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10446790 FUN_10446790

FName * FUN_10446790(FName *param_1,uint param_2,int param_3)

{
  int in_ECX;
  
  if (param_2 < 0xf) {
    *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x498 + (param_3 * 0xf + param_2) * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 104467e0 FUN_104467e0

void FUN_104467e0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108119d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}


// ==== 1044683c Catch@1044683c

void Catch_1044683c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446850 Catch@10446850

void Catch_10446850(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ClientData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446890 FUN_10446890

void FUN_10446890(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108119e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}


// ==== 104468ec Catch@104468ec

void Catch_104468ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446900 Catch@10446900

void Catch_10446900(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ServerData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446940 FUN_10446940

void FUN_10446940(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108119f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  operator<<(param_1,(FString *)(in_ECX + 0x10));
  ExceptionList = local_10;
  return;
}


// ==== 104469ba Catch@104469ba

void Catch_104469ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104469ce Catch@104469ce

void Catch_104469ce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameTipData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446a20 FUN_10446a20

void FUN_10446a20(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  thunk_FUN_10330040(param_1,in_ECX + 0x10);
  thunk_FUN_10330020(param_1,in_ECX + 0x14);
  operator<<(param_1,(FString *)(in_ECX + 0x18));
  operator<<(param_1,(FString *)(in_ECX + 0x24));
  thunk_FUN_10330040(param_1,in_ECX + 0x30);
  thunk_FUN_10330040(param_1,in_ECX + 0x34);
  thunk_FUN_10330040(param_1,in_ECX + 0x38);
  thunk_FUN_10330040(param_1,in_ECX + 0x3c);
  thunk_FUN_10330040(param_1,in_ECX + 0x40);
  operator<<(param_1,(FString *)(in_ECX + 0x44));
  operator<<(param_1,(FString *)(in_ECX + 0x50));
  ExceptionList = local_10;
  return;
}


// ==== 10446ae3 Catch@10446ae3

void Catch_10446ae3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446af7 Catch@10446af7

void Catch_10446af7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SystemMsg::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446b60 FUN_10446b60

void FUN_10446b60(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  operator<<(param_1,(FString *)(in_ECX + 0x10));
  ExceptionList = local_10;
  return;
}


// ==== 10446bc5 Catch@10446bc5

void Catch_10446bc5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446bd9 Catch@10446bd9

void Catch_10446bd9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ServerName::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446c20 FUN_10446c20

void FUN_10446c20(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  operator<<(param_1,(FString *)(in_ECX + 0x10));
  thunk_FUN_10330040(param_1,in_ECX + 0x1c);
  thunk_FUN_10330040(param_1,in_ECX + 0x20);
  ExceptionList = local_10;
  return;
}


// ==== 10446c99 Catch@10446c99

void Catch_10446c99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446cad Catch@10446cad

void Catch_10446cad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2CreditData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446d00 FUN_10446d00

void FUN_10446d00(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  ExceptionList = local_10;
  return;
}


// ==== 10446d5b Catch@10446d5b

void Catch_10446d5b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446d6f Catch@10446d6f

void Catch_10446d6f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2RecipeMaterialData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446db0 FUN_10446db0

void FUN_10446db0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  operator<<(param_1,(FString *)(in_ECX + 8));
  operator<<(param_1,(FString *)(in_ECX + 0x14));
  operator<<(param_1,(FString *)(in_ECX + 0x20));
  operator<<(param_1,(FString *)(in_ECX + 0x2c));
  ExceptionList = local_10;
  return;
}


// ==== 10446e2d Catch@10446e2d

void Catch_10446e2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446e41 Catch@10446e41

void Catch_10446e41(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2HennaData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446e90 FUN_10446e90

void FUN_10446e90(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  operator<<(param_1,(FString *)(in_ECX + 8));
  operator<<(param_1,(FString *)(in_ECX + 0x14));
  operator<<(param_1,(FString *)(in_ECX + 0x20));
  ExceptionList = local_10;
  return;
}


// ==== 10446f06 Catch@10446f06

void Catch_10446f06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446f1a Catch@10446f1a

void Catch_10446f1a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2CastleData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10446f60 FUN_10446f60

void FUN_10446f60(FArchive *param_1)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,in_ECX);
  operator<<(param_1,in_ECX + 0xc);
  thunk_FUN_10330040(param_1,in_ECX + 0x1c);
  ExceptionList = local_10;
  return;
}


// ==== 10446fc5 Catch@10446fc5

void Catch_10446fc5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10446fd9 Catch@10446fd9

void Catch_10446fd9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SymbolData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10447020 FUN_10447020

void FUN_10447020(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  operator<<(param_1,(FString *)(in_ECX + 8));
  ExceptionList = local_10;
  return;
}


// ==== 10447086 Catch@10447086

void Catch_10447086(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044709a Catch@1044709a

void Catch_1044709a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2CommandData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104470e0 FUN_104470e0

void FUN_104470e0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}


// ==== 1044713c Catch@1044713c

void Catch_1044713c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10447150 Catch@10447150

void Catch_10447150(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ObsceneData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10447190 FUN_10447190

void FUN_10447190(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811a90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  operator<<(param_1,(FString *)(in_ECX + 0xc));
  operator<<(param_1,(FString *)(in_ECX + 0x18));
  operator<<(param_1,(FString *)(in_ECX + 0x24));
  ExceptionList = local_10;
  return;
}


// ==== 10447210 Catch@10447210

void Catch_10447210(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10447224 Catch@10447224

void Catch_10447224(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2VariationOptionData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10447270 FUN_10447270

void FUN_10447270(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811aa0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  thunk_FUN_10330060(param_1,in_ECX + 0x10);
  thunk_FUN_10330060(param_1,in_ECX + 0x14);
  operator<<(param_1,(FString *)(in_ECX + 0x18));
  thunk_FUN_10330040(param_1,in_ECX + 0x24);
  thunk_FUN_10330040(param_1,in_ECX + 0x28);
  thunk_FUN_10330040(param_1,in_ECX + 0x2c);
  thunk_FUN_10330040(param_1,in_ECX + 0x30);
  thunk_FUN_10330040(param_1,in_ECX + 0x34);
  thunk_FUN_10330040(param_1,in_ECX + 0x38);
  thunk_FUN_10330060(param_1,in_ECX + 0x3c);
  operator<<(param_1,(FString *)(in_ECX + 0x40));
  ExceptionList = local_10;
  return;
}


// ==== 10447350 Catch@10447350

void Catch_10447350(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10447364 Catch@10447364

void Catch_10447364(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FZoneNameInfo::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104473d0 FUN_104473d0

void FUN_104473d0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811ab0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330060(param_1);
  thunk_FUN_10330060(param_1,in_ECX + 4);
  thunk_FUN_10330060(param_1,in_ECX + 8);
  thunk_FUN_10330060(param_1,in_ECX + 0xc);
  ExceptionList = local_10;
  return;
}


// ==== 1044743f Catch@1044743f

void Catch_1044743f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10447453 Catch@10447453

void Catch_10447453(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FDefaultPawnInfo::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104474a0 FUN_104474a0

void FUN_104474a0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811ac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 104474f0 FUN_104474f0

void FUN_104474f0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811ae9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10447540 FUN_10447540

void FUN_10447540(void)

{
  FStringNoInit *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811b21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit(in_ECX);
  local_4 = 0;
  FStringNoInit::FStringNoInit(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FStringNoInit::FStringNoInit(in_ECX + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 104475c0 FUN_104475c0

void FUN_104475c0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811b91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4._0_1_ = 1;
  FString::FString(in_ECX + 0x18);
  local_4._0_1_ = 2;
  FString::FString(in_ECX + 0x24);
  local_4._0_1_ = 3;
  FString::FString(in_ECX + 0x30);
  local_4._0_1_ = 4;
  FString::FString(in_ECX + 0x3c);
  local_4 = CONCAT31(local_4._1_3_,5);
  FString::FString(in_ECX + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 10447690 FUN_10447690

undefined4 FUN_10447690(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (iVar1 < 0x19b) {
      if ((DAT_10a799b8 != 0) && (param_4 == 0)) {
        appMsgf(0,(ushort *)L"Files are corrupted ! Please, full check");
        appRequestExit(0);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      _Dst = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(iVar1 + 2U,&DAT_10853a28);
      _memset(_Dst,0,iVar1 + 2U);
      (**(code **)(*param_1 + 4))(_Dst,iVar1);
      *unaff_EDI = _Dst;
      *unaff_ESI = iVar1;
    }
    else if (*(int *)GL2CurrentTxtCodec_exref != 0) {
      (**(code **)(**(int **)GL2CurrentTxtCodec_exref + 0xc))(param_1,param_2,param_3);
      return 0;
    }
    return 0;
  }
  return 0xffffffff;
}


// ==== 104477a0 FUN_104477a0

void FUN_104477a0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x104477a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::Empty((FString *)(in_ECX + 0x7cb7c));
  return;
}


// ==== 104477b0 FUN_104477b0

void FUN_104477b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x104477b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::Empty((FString *)(in_ECX + 0x7cb88));
  return;
}


// ==== 104477c0 FUN_104477c0

void FUN_104477c0(void)

{
  int in_ECX;
  
  FString::Empty((FString *)(in_ECX + 0x7cb94));
                    /* WARNING: Could not recover jumptable at 0x104477d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::Empty((FString *)(in_ECX + 0x7cba0));
  return;
}


// ==== 104477f0 FUN_104477f0

void FUN_104477f0(void)

{
  return;
}


// ==== 10447800 FUN_10447800

void FUN_10447800(void)

{
  return;
}


// ==== 10447810 FUN_10447810

void FUN_10447810(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7fbdc);
  iVar1 = 500;
  do {
    FString::Empty(this);
    this = this + 0x28;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447840 FUN_10447840

void FUN_10447840(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7fad4);
  iVar1 = 0xf;
  do {
    FString::Empty(this);
    this = this + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447870 FUN_10447870

void FUN_10447870(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7f9e4);
  iVar1 = 0xf;
  do {
    FString::Empty(this);
    this = this + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 104478a0 FUN_104478a0

void FUN_104478a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811bd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x28));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 10447910 FUN_10447910

void FUN_10447910(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811bfc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 10447960 FUN_10447960

void FUN_10447960(void)

{
  return;
}


// ==== 10447970 FUN_10447970

void FUN_10447970(void)

{
  return;
}


// ==== 10447980 FUN_10447980

void FUN_10447980(void)

{
  return;
}


// ==== 10447990 FUN_10447990

void FUN_10447990(void)

{
  return;
}


// ==== 104479a0 FUN_104479a0

void FUN_104479a0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10811c3d;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x5c);
  local_4._0_1_ = 1;
  FString::~FString(in_ECX + 0x50);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10447a30 FUN_10447a30

void FUN_10447a30(void)

{
  return;
}


// ==== 10447a40 FUN_10447a40

void FUN_10447a40(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811c6c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10447a90 FUN_10447a90

void FUN_10447a90(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811c98;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10447b00 FUN_10447b00

void FUN_10447b00(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811cbc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10447b50 FUN_10447b50

void FUN_10447b50(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x6770c);
  iVar1 = 200;
  do {
    if (*(int *)(this + -4) != 0) {
      FString::Empty(this);
      FString::Empty(this + 0xc);
    }
    this = this + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447b90 FUN_10447b90

void FUN_10447b90(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x68cec);
  iVar1 = 0xff;
  do {
    if (*(int *)(this + -4) != 0) {
      FString::Empty(this);
    }
    this = this + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447bd0 FUN_10447bd0

void FUN_10447bd0(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x240ec);
  iVar1 = 3000;
  do {
    if (*(int *)(this + -4) != 0) {
      FString::Empty(this);
      FString::Empty(this + 0x14);
      FString::Empty(this + 0x20);
      FString::Empty(this + 0x40);
      FString::Empty(this + 0x4c);
    }
    this = this + 0x5c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447c30 FUN_10447c30

void FUN_10447c30(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x6a8dc);
  iVar1 = 3000;
  do {
    FString::Empty(this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447c60 FUN_10447c60

void FUN_10447c60(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7357c);
  iVar1 = 3000;
  do {
    FString::Empty(this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447c90 FUN_10447c90

void FUN_10447c90(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7c21c);
  iVar1 = 100;
  do {
    FString::Empty(this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447cc0 FUN_10447cc0

void FUN_10447cc0(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7c6cc);
  iVar1 = 100;
  do {
    FString::Empty(this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447cf0 FUN_10447cf0

void FUN_10447cf0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10811d00;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x2c));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x20));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x14));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10447d80 FUN_10447d80

void FUN_10447d80(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811d38;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10447df0 FUN_10447df0

void FUN_10447df0(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7dcf8);
  iVar1 = 200;
  do {
    FString::Empty(this + -0xc);
    FString::Empty(this);
    this = this + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447e30 FUN_10447e30

void FUN_10447e30(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7cbcc);
  iVar1 = 100;
  do {
    FString::Empty(this + -0xc);
    FString::Empty(this);
    FString::Empty(this + 0xc);
    this = this + 0x2c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10447e80 FUN_10447e80

void FUN_10447e80(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10811d74;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x24));
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 10447f00 FUN_10447f00

void FUN_10447f00(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811d9c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x18));
  ExceptionList = local_c;
  return;
}


// ==== 10447f50 FUN_10447f50

void FUN_10447f50(ushort *param_1,undefined4 param_2)

{
  if (*(int *)GIsNative_exref != 0) {
    appSprintf(param_1,(ushort *)L"%s-%s.txt",param_2,GCountryCode_exref);
    return;
  }
  appSprintf(param_1,(ushort *)L"%s-e.txt",param_2);
  return;
}


// ==== 10447fb0 FUN_10447fb0

void FUN_10447fb0(ushort *param_1,undefined4 param_2)

{
  if (*(int *)GIsNative_exref != 0) {
    appSprintf(param_1,(ushort *)L"%s-%s.dat",param_2,GCountryCode_exref);
    return;
  }
  appSprintf(param_1,(ushort *)L"%s-e.dat",param_2);
  return;
}


// ==== 10448010 FUN_10448010

void FUN_10448010(void)

{
  int *piVar1;
  ushort *puVar2;
  FL2GameData *in_ECX;
  int iVar3;
  int iVar4;
  ushort local_128 [128];
  FL2GameData *local_28;
  int local_24;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10811dbb;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffecc;
  local_8 = 0;
  iVar3 = 0;
  ExceptionList = &local_10;
  local_28 = in_ECX;
  FL2GameData::GetTextFileName(in_ECX,local_128,(ushort *)L"..\\Notice\\Notice");
  piVar1 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))
                            (local_128,0,*(undefined4 *)GNull_exref);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x2c))();
  }
  thunk_FUN_104a14b0();
  local_8._0_1_ = 1;
  if (piVar1 != (int *)0x0) {
    local_18 = (void *)thunk_FUN_103ff730(iVar3 + 2U);
    _memset(local_18,0,iVar3 + 2U);
    if (local_18 != (void *)0x0) {
      (**(code **)(*piVar1 + 4))(local_18,iVar3);
      for (iVar3 = 0; local_24 = iVar3, iVar3 < 3; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_enotice_begin_10ad0f06 + iVar3 * 0x101 + 1,
                           u_cnotice_10ad1108[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750((int)local_18 + 2);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(EName *)GError_exref,(ushort *)0x0);
      }
      iVar3 = thunk_FUN_1049f840();
      for (iVar4 = 0; local_1c = iVar4, iVar4 < iVar3; iVar4 = iVar4 + 1) {
        puVar2 = (ushort *)thunk_FUN_104a0c30(L"notice",iVar4);
        if (puVar2 != (ushort *)0x0) {
          FString::operator=((FString *)(local_28 + 0x7cb7c),puVar2);
        }
      }
      thunk_FUN_104a16a0();
      thunk_FUN_103254a0(local_18);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(1);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_104a1770();
  ExceptionList = local_10;
  return;
}


// ==== 104481c4 Catch@104481c4

void Catch_104481c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 104481d8 Catch@104481d8

void Catch_104481d8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::NoticeLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10448270 FUN_10448270

void FUN_10448270(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811ddc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 104482c0 FUN_104482c0

void FUN_104482c0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811dfc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10448310 FUN_10448310

void FUN_10448310(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 0x18));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 10448380 FUN_10448380

void FUN_10448380(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10811e64;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x24));
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 10448400 FUN_10448400

undefined4 FUN_10448400(ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (ushort *)&DAT_10a8af78;
  do {
    iVar1 = appStricmp(param_1,puVar2);
    if (iVar1 == 0) {
      return (&DAT_10a8b178)[iVar3 * 0x81];
    }
    puVar2 = puVar2 + 0x102;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10a99540);
  return 0xffffffff;
}


// ==== 10448470 FUN_10448470

int FUN_10448470(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x7fad0);
  do {
    if (*piVar2 == param_1) {
      return (iVar1 + 0x7fad) * 0x10 + in_ECX;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 0xf);
  return 0;
}


// ==== 104484b0 FUN_104484b0

int FUN_104484b0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x7f9e0);
  do {
    if (*piVar2 == param_1) {
      return (iVar1 + 0x7f9e) * 0x10 + in_ECX;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 0xf);
  return 0;
}


// ==== 104484f0 FUN_104484f0

int FUN_104484f0(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x7fbc0);
  do {
    if (*piVar2 == param_1) {
      return in_ECX + (iVar1 * 5 + 0xff78) * 8;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar1 < 500);
  return 0;
}


// ==== 10448540 FUN_10448540

undefined4 FUN_10448540(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x849e8);
}


// ==== 1044857f Catch@1044857f

void Catch_1044857f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10448593 Catch@10448593

void Catch_10448593(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetGameTipDataCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104485d0 FUN_104485d0

ushort * FUN_104485d0(void)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10811e90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x7f9d0) != 0) {
    ExceptionList = &local_10;
    puVar1 = FString::operator*((FString *)(*(int *)(in_ECX + 0x7f9d0) + 0x18));
    ExceptionList = local_10;
    return puVar1;
  }
  return (ushort *)0x0;
}


// ==== 1044862f Catch@1044862f

void Catch_1044862f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10448643 Catch@10448643

void Catch_10448643(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetCurrentZoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10448690 FUN_10448690

void FUN_10448690(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10811eb8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x18));
  ExceptionList = local_c;
  return;
}


// ==== 10448700 FUN_10448700

void FUN_10448700(void)

{
  FString *this;
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_d0 [12];
  FString local_c4 [12];
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  FString local_88 [12];
  FString local_7c [12];
  undefined1 *local_70;
  void *local_6c;
  undefined1 *puStack_68;
  int local_64;
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [20];
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  puStack_68 = &LAB_10811f76;
  local_6c = ExceptionList;
  local_70 = &stack0xffffff24;
  iVar3 = 0;
  local_64 = 0;
  if (*(int *)GConfig_exref != 0) {
    ExceptionList = &local_6c;
    FString::FString(local_60,(ushort *)L"None");
    local_64._0_1_ = 1;
    FString::FString(local_54,(ushort *)&DAT_10894614);
    local_64._0_1_ = 2;
    FString::FString(local_48,(ushort *)&DAT_10894610);
    local_64._0_1_ = 3;
    FString::FString(local_3c,(ushort *)&DAT_1089460c);
    local_64._0_1_ = 4;
    FString::FString(local_30,(ushort *)&DAT_10894608);
    local_64._0_1_ = 5;
    FString::FString(local_24,(ushort *)&DAT_10894604);
    local_64._0_1_ = 7;
    FString::FString(local_d0,(ushort *)L"HAND");
    local_64._0_1_ = 8;
    FString::FString(local_c4,(ushort *)&DAT_108945ec);
    local_64._0_1_ = 9;
    FString::FString(local_b8,(ushort *)&DAT_108945e0);
    local_64._0_1_ = 10;
    FString::FString(local_ac,(ushort *)L"DUAL");
    local_64._0_1_ = 0xb;
    FString::FString(local_a0,(ushort *)L"POLE");
    local_64._0_1_ = 0xc;
    FString::FString(local_94,(ushort *)&DAT_108945bc);
    local_64._0_1_ = 0xd;
    FString::FString(local_88,(ushort *)L"THROW");
    local_64._0_1_ = 0xe;
    FString::FString(local_7c,(ushort *)L"DUALFIST");
    local_64 = CONCAT31(local_64._1_3_,0x10);
    for (; iVar3 < 6; iVar3 = iVar3 + 1) {
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      iVar4 = iVar3 * 0x54 + local_c;
      this = local_60 + iVar3 * 0xc;
      pwVar7 = L"soulshot.int";
      iVar2 = iVar4 + 0x7f62c;
      pwVar6 = L"OnSticks";
      local_10 = iVar3;
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,pwVar6,iVar2,pwVar7);
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      pwVar7 = L"soulshot.int";
      iVar2 = iVar4 + 0x7f638;
      pwVar6 = L"OnBooks";
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,pwVar6,iVar2,pwVar7);
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      pwVar6 = L"soulshot.int";
      iVar2 = iVar4 + 0x7f644;
      puVar5 = &DAT_1089453c;
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,puVar5,iVar2,pwVar6);
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      pwVar7 = L"soulshot.int";
      iVar2 = (iVar3 + 0x1844) * 0x54 + local_c;
      pwVar6 = L"AtkDarkCr";
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,pwVar6,iVar2,pwVar7);
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      pwVar7 = L"soulshot.int";
      iVar2 = iVar4 + 0x7f65c;
      pwVar6 = L"AtkCr";
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,pwVar6,iVar2,pwVar7);
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      pwVar7 = L"soulshot.int";
      iVar2 = iVar4 + 0x7f668;
      pwVar6 = L"SpiritOnSticks";
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,pwVar6,iVar2,pwVar7);
      local_8 = (undefined4 *)(**(int **)GConfig_exref + 0xc);
      pwVar7 = L"soulshot.int";
      iVar4 = iVar4 + 0x7f674;
      pwVar6 = L"SpiritOnBooks";
      puVar1 = FString::operator*(this);
      (*(code *)*local_8)(puVar1,pwVar6,iVar4,pwVar7);
    }
    for (iVar3 = 0; local_10 = iVar3, iVar3 < 8; iVar3 = iVar3 + 1) {
      iVar4 = **(int **)GConfig_exref;
      iVar2 = local_c + 0x7f5ec + iVar3 * 8;
      pwVar6 = L"soulshot.int";
      puVar5 = &DAT_108944c4;
      puVar1 = FString::operator*(local_d0 + iVar3 * 0xc);
      iVar2 = (**(code **)(iVar4 + 4))(puVar1,puVar5,iVar2,pwVar6);
      if (iVar2 == 0) {
        *(undefined4 *)(local_c + 0x7f5ec + iVar3 * 8) = 0;
      }
      iVar4 = **(int **)GConfig_exref;
      iVar2 = local_c + 0x7f5f0 + iVar3 * 8;
      pwVar6 = L"soulshot.int";
      puVar5 = &DAT_108944bc;
      puVar1 = FString::operator*(local_d0 + iVar3 * 0xc);
      iVar2 = (**(code **)(iVar4 + 4))(puVar1,puVar5,iVar2,pwVar6);
      if (iVar2 == 0) {
        *(undefined4 *)(local_c + 0x7f5f0 + iVar3 * 8) = 0;
      }
    }
    local_64._0_1_ = 7;
    _eh_vector_destructor_iterator_(local_d0,0xc,8,~FString_exref);
    local_64 = (uint)local_64._1_3_ << 8;
    _eh_vector_destructor_iterator_(local_60,0xc,6,~FString_exref);
  }
  ExceptionList = local_6c;
  return;
}


// ==== 10448ae6 Catch@10448ae6

void Catch_10448ae6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x4c) = *(undefined4 *)(unaff_EBP + 0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x4c,&DAT_10914c48);
}


// ==== 10448afa Catch@10448afa

void Catch_10448afa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SoulShotDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10448c20 FUN_10448c20

void FUN_10448c20(void)

{
  int in_ECX;
  FString *this;
  int iVar1;
  
  this = (FString *)(in_ECX + 0x7f638);
  iVar1 = 6;
  do {
    FString::Empty(this + -0xc);
    FString::Empty(this);
    FString::Empty(this + 0xc);
    FString::Empty(this + 0x18);
    FString::Empty(this + 0x24);
    FString::Empty(this + 0x30);
    FString::Empty(this + 0x3c);
    this = this + 0x54;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10448c90 FUN_10448c90

void FUN_10448c90(FArchive *param_1)

{
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811fb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_18,(ushort *)L"SafePackage");
  local_4 = 0;
  operator<<(param_1,local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10448d10 FUN_10448d10

undefined1 FUN_10448d10(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  int aiStack_2c [2];
  undefined1 *puStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar3 = *param_1;
  iStack_1c = 0x10448d23;
  iStack_1c = (**(code **)(iVar3 + 0x2c))();
  iStack_1c = iStack_1c + -0xc;
  uStack_20 = 0x10448d2e;
  (**(code **)(iVar3 + 0x3c))();
  uStack_20 = 0xc;
  puStack_24 = &stack0xfffffff0;
  aiStack_2c[1] = 0x10448d3e;
  (**(code **)(*param_1 + 4))();
  aiStack_2c[1] = 0;
  aiStack_2c[0] = 0x10448d49;
  (**(code **)(*param_1 + 0x3c))();
  iVar3 = 0xc;
  bVar6 = true;
  piVar4 = &iStack_1c;
  pcVar5 = "SafePackage";
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = (char)*piVar4 == *pcVar5;
    piVar4 = (int *)((int)piVar4 + 1);
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    return 1;
  }
  iVar3 = *param_1;
  aiStack_2c[0] = 0x10448d74;
  aiStack_2c[0] = (**(code **)(iVar3 + 0x2c))();
  aiStack_2c[0] = aiStack_2c[0] + -0x20;
  (**(code **)(iVar3 + 0x3c))();
  (**(code **)(*param_1 + 4))(&uStack_20,0xc);
  (**(code **)(*param_1 + 0x3c))(0);
  iVar3 = 0xc;
  piVar4 = aiStack_2c;
  pcVar5 = "SafePackage";
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    iVar2 = *piVar4;
    piVar4 = (int *)((int)piVar4 + 1);
    pcVar5 = pcVar5 + 1;
  } while ((char)iVar2 == cVar1);
  return 0;
}


// ==== 10448df0 FUN_10448df0

void FUN_10448df0(void)

{
  return;
}


// ==== 10448e00 FUN_10448e00

void FUN_10448e00(void)

{
  return;
}


// ==== 10448e10 FUN_10448e10

uint FUN_10448e10(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  if (*(int *)(in_ECX + 4) < *(int *)(in_ECX + 8)) {
    do {
      *(undefined2 *)(in_ECX + 0x14 + *(int *)(in_ECX + 0xc) * 2) =
           *(undefined2 *)(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 4) * 2);
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
      *(undefined2 *)(in_ECX + 0x14 + *(int *)(in_ECX + 0xc) * 2) = 0;
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    } while (*(int *)(in_ECX + 4) < *(int *)(in_ECX + 8));
  }
  return (*(int *)(in_ECX + 0xc) < 1) - 1 & (uint)(in_ECX + 0x14);
}


// ==== 10448e90 FUN_10448e90

void FUN_10448e90(short *param_1)

{
  short sVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = (in_ECX + 0x216) - (int)param_1;
  do {
    sVar1 = *param_1;
    *(short *)(iVar2 + (int)param_1) = sVar1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return;
}


// ==== 10448ec0 FUN_10448ec0

bool FUN_10448ec0(wchar_t param_1)

{
  wchar_t *pwVar1;
  int in_ECX;
  
  pwVar1 = _wcsrchr((wchar_t *)(in_ECX + 0x216),param_1);
  return pwVar1 != (wchar_t *)0x0;
}


// ==== 10448ef0 FUN_10448ef0

void FUN_10448ef0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811fd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10448f40 FUN_10448f40

void FUN_10448f40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10811ff9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10448f90 FUN_10448f90

void FUN_10448f90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812019;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449120 FUN_10449120

void FUN_10449120(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812039;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 104491c0 FUN_104491c0

void FUN_104491c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


// ==== 104491f0 FUN_104491f0

bool FUN_104491f0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) < *(int *)(*(int *)(in_ECX + 4) + 4);
}


// ==== 104492b0 FUN_104492b0

void FUN_104492b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


// ==== 104492e0 FUN_104492e0

bool FUN_104492e0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) < *(int *)(*(int *)(in_ECX + 4) + 4);
}


// ==== 10449530 FUN_10449530

void FUN_10449530(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


// ==== 10449560 FUN_10449560

bool FUN_10449560(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) < *(int *)(*(int *)(in_ECX + 4) + 4);
}


// ==== 10449580 FUN_10449580

void FUN_10449580(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


// ==== 104495b0 FUN_104495b0

bool FUN_104495b0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) < *(int *)(*(int *)(in_ECX + 4) + 4);
}


// ==== 10449680 FUN_10449680

bool FUN_10449680(void)

{
  int *in_ECX;
  
  return in_ECX[1] < *(int *)(*in_ECX + 4);
}


// ==== 104496a0 FUN_104496a0

void FUN_104496a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812059;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449760 FUN_10449760

void FUN_10449760(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


// ==== 10449790 FUN_10449790

bool FUN_10449790(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 8) < *(int *)(*(int *)(in_ECX + 4) + 4);
}


// ==== 10449850 FUN_10449850

void FUN_10449850(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812079;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 104498b0 FUN_104498b0

void FUN_104498b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812099;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449910 FUN_10449910

void FUN_10449910(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108120b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449a60 FUN_10449a60

void FUN_10449a60(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108120d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449ad0 FUN_10449ad0

void FUN_10449ad0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108120f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449b20 FUN_10449b20

void FUN_10449b20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812119;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449b70 FUN_10449b70

void FUN_10449b70(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812139;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449be0 FUN_10449be0

void FUN_10449be0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812159;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449c50 FUN_10449c50

void FUN_10449c50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812179;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449cc0 FUN_10449cc0

void FUN_10449cc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812199;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449d30 FUN_10449d30

void FUN_10449d30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108121b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449da0 FUN_10449da0

void FUN_10449da0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108121d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449e10 FUN_10449e10

void FUN_10449e10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108121f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449e80 FUN_10449e80

void FUN_10449e80(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449ef0 FUN_10449ef0

void FUN_10449ef0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812239;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449f60 FUN_10449f60

void FUN_10449f60(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812259;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10449fd0 FUN_10449fd0

void FUN_10449fd0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812279;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a040 FUN_1044a040

void FUN_1044a040(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812299;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a0b0 FUN_1044a0b0

void FUN_1044a0b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108122b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a120 FUN_1044a120

void FUN_1044a120(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108122d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a190 FUN_1044a190

void FUN_1044a190(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108122f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a200 FUN_1044a200

void FUN_1044a200(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812319;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a2a0 FUN_1044a2a0

void FUN_1044a2a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812339;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044a320 FUN_1044a320

void FUN_1044a320(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081235c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1044a370 FUN_1044a370

void FUN_1044a370(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1081237c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1044a480 FUN_1044a480

void FUN_1044a480(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081239c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1044a5b0 FUN_1044a5b0

void FUN_1044a5b0(ushort *param_1,undefined4 *param_2)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108123bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4),param_1);
  *(undefined4 *)(in_ECX + 0x10) = *param_2;
  ExceptionList = local_c;
  return;
}


// ==== 1044aca0 FUN_1044aca0

void FUN_1044aca0(void)

{
  FName *in_ECX;
  int iVar1;
  FName *pFVar2;
  int local_8;
  undefined4 local_4;
  
  FName::FName(in_ECX);
  pFVar2 = in_ECX + 0x14;
  iVar1 = 0x13;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = in_ECX + 100;
  iVar1 = 0x13;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = in_ECX + 0xb4;
  iVar1 = 0x13;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = in_ECX + 0x104;
  iVar1 = 0x13;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FName::FName(in_ECX + 0x154);
  FName::FName(in_ECX + 0x158);
  FName::FName(in_ECX + 0x15c);
  FName::FName(in_ECX + 0x160);
  FName::FName(in_ECX + 0x164);
  FName::FName(in_ECX + 0x168);
  FName::FName(in_ECX + 0x16c);
  FName::FName(in_ECX + 0x170);
  FName::FName(in_ECX + 0x174);
  pFVar2 = in_ECX + 0x1a8;
  iVar1 = 2;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = in_ECX + 0x1b4;
  iVar1 = 4;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = in_ECX + 0x1c8;
  iVar1 = 2;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = in_ECX + 0x1d4;
  iVar1 = 0x27;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  FName::FName((FName *)&local_8,0);
  *(int *)(in_ECX + 0x170) = local_8;
  *(int *)(in_ECX + 0x16c) = local_8;
  *(int *)(in_ECX + 0x164) = local_8;
  *(int *)(in_ECX + 0x160) = local_8;
  *(int *)(in_ECX + 0x15c) = local_8;
  *(int *)(in_ECX + 0x158) = local_8;
  *(int *)(in_ECX + 0x154) = local_8;
  FName::FName((FName *)&local_8,0);
  *(int *)(in_ECX + 0x174) = local_8;
  *(undefined4 *)(in_ECX + 0x184) = 0;
  *(undefined4 *)(in_ECX + 0x180) = 0;
  *(undefined4 *)(in_ECX + 0x17c) = 0;
  pFVar2 = in_ECX + 0x1a8;
  iVar1 = 3;
  do {
    FName::FName((FName *)&local_8,0);
    *(int *)pFVar2 = local_8;
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pFVar2 = in_ECX + 0x1b4;
  iVar1 = 5;
  do {
    FName::FName((FName *)&local_8,0);
    *(int *)pFVar2 = local_8;
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pFVar2 = in_ECX + 0x1c8;
  iVar1 = 3;
  do {
    FName::FName((FName *)&local_8,0);
    *(int *)pFVar2 = local_8;
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pFVar2 = in_ECX + 0x1d4;
  local_8 = 8;
  do {
    iVar1 = 5;
    do {
      FName::FName((FName *)&local_4,0);
      *(undefined4 *)pFVar2 = local_4;
      pFVar2 = pFVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(in_ECX + 0x188) = 0;
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  *(undefined4 *)(in_ECX + 400) = 0;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  *(undefined4 *)(in_ECX + 0x198) = 0;
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  return;
}


// ==== 1044b010 FUN_1044b010

void FUN_1044b010(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108123e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1044b080 FUN_1044b080

void FUN_1044b080(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10812415;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044b0f0 FUN_1044b0f0

void FUN_1044b0f0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10812461;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0xb4));
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_
            ((void *)(in_ECX + 0x68),0x18,3,(_func_void_void_ptr *)&LAB_10306267);
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0x58));
  ExceptionList = local_c;
  return;
}


// ==== 1044b180 FUN_1044b180

void FUN_1044b180(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *in_ECX;
  
  *in_ECX = param_1;
  _param_1 = CONCAT13(0xff,CONCAT12(param_2,CONCAT11(param_3,param_4)));
  *(undefined4 *)(in_ECX + 4) = _param_1;
  return;
}


// ==== 1044b1c0 FUN_1044b1c0

void FUN_1044b1c0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0xff000000;
  return;
}


// ==== 1044b1f0 FUN_1044b1f0

void FUN_1044b1f0(void)

{
  FString *pFVar1;
  FString *in_ECX;
  undefined4 local_20 [2];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108124d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4._0_1_ = 1;
  FName::FName((FName *)(in_ECX + 0x40));
  FName::FName((FName *)(in_ECX + 0x44));
  FName::FName((FName *)(in_ECX + 0x48));
  FString::FString(in_ECX + 0x50);
  local_4._0_1_ = 2;
  FString::FString(in_ECX + 0x5c);
  local_4._0_1_ = 3;
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)L"NoSkillName");
  local_4._0_1_ = 4;
  FString::operator=(in_ECX,pFVar1);
  local_4._0_1_ = 3;
  FString::~FString(local_18);
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)&DAT_10853d94);
  local_4._0_1_ = 5;
  FString::operator=(in_ECX + 0xc,pFVar1);
  local_4._0_1_ = 3;
  FString::~FString(local_18);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  FName::FName((FName *)local_20,0);
  *(undefined4 *)(in_ECX + 0x48) = local_20[0];
  FName::FName((FName *)local_20,0);
  *(undefined4 *)(in_ECX + 0x40) = local_20[0];
  FName::FName((FName *)local_20,0);
  *(undefined4 *)(in_ECX + 0x44) = local_20[0];
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)&DAT_10853d94);
  local_4._0_1_ = 6;
  FString::operator=(in_ECX + 0x50,pFVar1);
  local_4._0_1_ = 3;
  FString::~FString(local_18);
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)&DAT_10853d94);
  local_4._0_1_ = 7;
  FString::operator=(in_ECX + 0x5c,pFVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 1044b3e0 FUN_1044b3e0

void FUN_1044b3e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081250c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1));
  local_4 = 0;
  *in_ECX = 0;
  FString::operator=((FString *)(in_ECX + 1),(ushort *)0x0);
  ExceptionList = local_c;
  return;
}


// ==== 1044b460 FUN_1044b460

void FUN_1044b460(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081252c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1));
  local_4 = 0;
  *in_ECX = 0;
  FString::operator=((FString *)(in_ECX + 1),(ushort *)0x0);
  ExceptionList = local_c;
  return;
}


// ==== 1044b4e0 FUN_1044b4e0

void FUN_1044b4e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081254c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 7));
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044b570 FUN_1044b570

void FUN_1044b570(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 7));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 10));
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0xffffffff;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044b630 FUN_1044b630

void FUN_1044b630(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081259c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FString::operator=((FString *)(in_ECX + 4),(ushort *)&DAT_10853d94);
  ExceptionList = local_c;
  return;
}


// ==== 1044b6b0 FUN_1044b6b0

void FUN_1044b6b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108125ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 6));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 9));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x11));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 0x14));
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044b760 FUN_1044b760

void FUN_1044b760(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4));
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044b7e0 FUN_1044b7e0

void FUN_1044b7e0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FString::Empty((FString *)(in_ECX + 4));
  FString::Empty((FString *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 1044b880 FUN_1044b880

void FUN_1044b880(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812694;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 2));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 5));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 8));
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044b910 FUN_1044b910

void FUN_1044b910(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108126e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 2));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 5));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 8));
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::FString((FString *)(in_ECX + 0xb));
  *in_ECX = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044b9b0 FUN_1044b9b0

void FUN_1044b9b0(void)

{
  int in_ECX;
  int iVar1;
  FName *pFVar2;
  FName *this;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pFVar2 = (FName *)(in_ECX + 8);
  iVar4 = 2;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar2 = (FName *)(in_ECX + 0x14);
  iVar4 = 2;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar2 = (FName *)(in_ECX + 0x20);
  iVar4 = 2;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar2 = (FName *)(in_ECX + 0x74);
  iVar4 = 0x1d;
  this = pFVar2;
  do {
    FName::FName(this);
    this = this + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)(in_ECX + 0x38);
  iVar4 = 3;
  do {
    iVar1 = iVar4;
    puVar3[-3] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    FName::FName((FName *)&local_c,0);
    puVar3[-0xc] = local_c;
    FName::FName((FName *)&local_8,0);
    puVar3[-9] = local_8;
    FName::FName((FName *)&local_4,0);
    puVar3[-6] = local_4;
    puVar3 = puVar3 + 1;
    iVar4 = iVar1 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(in_ECX + 0xec) = 0;
  iVar1 = iVar1 + 1;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  do {
    iVar4 = 0xf;
    do {
      FName::FName((FName *)&local_4,0);
      *(undefined4 *)pFVar2 = local_4;
      pFVar2 = pFVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 1044bb30 FUN_1044bb30

void FUN_1044bb30(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812724;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 2));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 5));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 8));
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044bbc0 FUN_1044bbc0

void FUN_1044bbc0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812755;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044bc70 FUN_1044bc70

void FUN_1044bc70(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x10));
  local_4 = CONCAT31(local_4._1_3_,1);
  FName::FName((FName *)(in_ECX + 0x2c));
  FName::FName((FName *)(in_ECX + 0x30));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1044bd10 FUN_1044bd10

void FUN_1044bd10(void)

{
  FName *in_ECX;
  FName *this;
  int iVar1;
  
  iVar1 = 9;
  this = in_ECX;
  do {
    this = this + 4;
    FName::FName(this);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)in_ECX = 0;
  return;
}


// ==== 1044bd60 FUN_1044bd60

void FUN_1044bd60(void)

{
  undefined4 *in_ECX;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108127c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FName::FName((FName *)(in_ECX + 2));
  FString::FString((FString *)(in_ECX + 3));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 6));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 9));
  local_4 = CONCAT31(local_4._1_3_,2);
  FName::FName((FName *)local_14,0);
  in_ECX[2] = local_14[0];
  *in_ECX = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044be20 FUN_1044be20

void FUN_1044be20(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812804;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 3));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 6));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 9));
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1044bec0 FUN_1044bec0

void FUN_1044bec0(void)

{
  undefined4 *in_ECX;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081282c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FName::FName((FName *)(in_ECX + 5));
  FString::FString((FString *)(in_ECX + 6));
  local_4 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  FName::FName((FName *)local_14,0);
  in_ECX[5] = local_14[0];
  FString::operator=((FString *)(in_ECX + 6),(ushort *)&DAT_10853d94);
  ExceptionList = local_c;
  return;
}


// ==== 1044bf70 FUN_1044bf70

void FUN_1044bf70(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  return;
}


// ==== 1044bf90 FUN_1044bf90

int FUN_1044bf90(uint param_1,uint param_2,int param_3)

{
  if ((int)param_1 < 200) {
    return param_1 << 8;
  }
  return ((param_3 << 8 | param_2) << 8 | param_1) << 8;
}


// ==== 1044bfc0 FUN_1044bfc0

void FUN_1044bfc0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = in_ECX + 2;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1044c030 FUN_1044c030

void FUN_1044c030(uint param_1,undefined1 param_2)

{
  int in_ECX;
  
  if (param_1 < 0x20) {
    *(undefined1 *)(param_1 + 8 + in_ECX) = param_2;
  }
  return;
}


// ==== 1044c090 FUN_1044c090

void FUN_1044c090(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1044c100 FUN_1044c100

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1044c100(FArchive *param_1,FName *param_2)

{
  int iVar1;
  ushort *puVar2;
  code *pcVar3;
  int iVar4;
  ushort local_2028;
  undefined1 local_2026 [8202];
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812860;
  local_10 = ExceptionList;
  local_14 = &stack0xffffdfcc;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    FName::FName((FName *)&local_1c,0);
    iVar1 = FName::operator==(param_2,(FName *)&local_1c);
    if (iVar1 == 0) {
      puVar2 = L2FName::operator*((L2FName *)param_2);
      local_18 = appStrlen(puVar2);
      local_18 = local_18 * 2;
      (**(code **)(*(int *)param_1 + 4))(&local_18,4);
      iVar1 = *(int *)param_1;
      iVar4 = local_18;
      puVar2 = L2FName::operator*((L2FName *)param_2);
      pcVar3 = *(code **)(iVar1 + 4);
    }
    else {
      local_18 = 0;
      iVar4 = 4;
      puVar2 = (ushort *)&local_18;
      pcVar3 = *(code **)(*(int *)param_1 + 4);
    }
    (*pcVar3)(puVar2,iVar4);
  }
  else {
    (**(code **)(*(int *)param_1 + 4))(&local_18,4);
    iVar1 = local_18;
    if (local_18 < 1) {
      FName::FName((FName *)&local_1c,0);
      *(undefined4 *)param_2 = local_1c;
    }
    else {
      local_2028 = 0;
      _memset(local_2026,0,0x1ffe);
      (**(code **)(*(int *)param_1 + 4))(&local_2028,iVar1);
      FName::FName((FName *)&local_1c,&local_2028,2);
      *(undefined4 *)param_2 = local_1c;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044c232 Catch@1044c232

void Catch_1044c232(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1044c246 Catch@1044c246

void Catch_1044c246(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"L2FNameSerialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044c2c0 FUN_1044c2c0

void FUN_1044c2c0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812870;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1044c100(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  thunk_FUN_10330040(param_1,in_ECX + 0x10);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 4); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x14 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 8); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 100 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0xc); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0xb4 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x10); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x104 + iVar1 * 4);
  }
  thunk_FUN_1044c100(param_1,in_ECX + 0x154);
  thunk_FUN_1044c100(param_1,in_ECX + 0x158);
  thunk_FUN_1044c100(param_1,in_ECX + 0x15c);
  thunk_FUN_1044c100(param_1,in_ECX + 0x160);
  thunk_FUN_1044c100(param_1,in_ECX + 0x164);
  thunk_FUN_1044c100(param_1,in_ECX + 0x168);
  thunk_FUN_1044c100(param_1,in_ECX + 0x16c);
  thunk_FUN_1044c100(param_1,in_ECX + 0x170);
  thunk_FUN_1044c100(param_1,in_ECX + 0x174);
  thunk_FUN_10330040(param_1,in_ECX + 0x178);
  thunk_FUN_10330040(param_1,in_ECX + 0x17c);
  thunk_FUN_10330040(param_1,in_ECX + 0x180);
  thunk_FUN_10330040(param_1,in_ECX + 0x184);
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x17c); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x1a8 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x180); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x1b4 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x184); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x1c8 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    thunk_FUN_10330040(param_1,in_ECX + 0x188 + iVar1 * 4);
    for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x188 + iVar1 * 4); local_18 = local_18 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x1d4 + (local_18 + iVar1 * 5) * 4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044c517 Catch@1044c517

void Catch_1044c517(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1044c52b Catch@1044c52b

void Catch_1044c52b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2CharData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044c5f0 FUN_1044c5f0

void FUN_1044c5f0(FArchive *param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812880;
  local_10 = ExceptionList;
  iVar1 = 0;
  local_8 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    thunk_FUN_10330040(param_1,in_ECX + 4);
    thunk_FUN_10330040(param_1,in_ECX + 0xc);
    thunk_FUN_10330040(param_1,in_ECX + 0x10);
    thunk_FUN_10330040(param_1,in_ECX + 0x14);
    thunk_FUN_10330040(param_1,in_ECX + 0x18);
    thunk_FUN_10330040(param_1,in_ECX + 0x1c);
    thunk_FUN_10330040(param_1,in_ECX + 0x20);
    for (; iVar1 < 3; iVar1 = iVar1 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x24 + iVar1 * 4);
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x30 + iVar1 * 4);
    }
    thunk_FUN_1044c100(param_1,in_ECX + 0x3c);
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x40 + iVar1 * 4);
    }
    thunk_FUN_10330040(param_1,in_ECX + 0xc0);
    thunk_FUN_10330040(param_1,in_ECX + 0xc4);
    thunk_FUN_10330040(param_1,in_ECX + 200);
    thunk_FUN_10330040(param_1,in_ECX + 0xcc);
    thunk_FUN_10330040(param_1,in_ECX + 0xd0);
  }
  else {
    ExceptionList = &local_10;
    thunk_FUN_1044c100(param_1,in_ECX + 0x50);
    thunk_FUN_1044c100(param_1,in_ECX + 0x54);
    operator<<(param_1,(FString *)(in_ECX + 0x58));
    thunk_FUN_10330040(param_1,in_ECX + 100);
    for (; iVar1 < 3; iVar1 = iVar1 + 1) {
      thunk_FUN_10446410(param_1);
    }
    thunk_FUN_10330040(param_1,in_ECX + 0xb0);
    operator<<(param_1,(FString *)(in_ECX + 0xb4));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044c792 Catch@1044c792

void Catch_1044c792(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1044c7a6 Catch@1044c7a6

void Catch_1044c7a6(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ItemDataBase::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044c840 FUN_1044c840

void FUN_1044c840(FOutputDevice *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  int in_ECX;
  int iVar5;
  FName *pFVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  ushort *puVar8;
  UObject *pUVar9;
  ulong uVar10;
  UObject *pUVar11;
  UPackageMap *pUVar12;
  FName local_1c [4];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812890;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  local_18 = in_ECX;
  for (iVar7 = 0; iVar7 < 0xf; iVar7 = iVar7 + 1) {
    for (iVar5 = 0; iVar5 < *(int *)(local_18 + 0xd8 + iVar7 * 4); iVar5 = iVar5 + 1) {
      FName::FName(local_1c,0);
      pFVar6 = (FName *)(local_18 + 0x114 + (iVar5 * 0xf + iVar7) * 4);
      iVar1 = FName::operator!=(pFVar6,local_1c);
      if (iVar1 != 0) {
        iVar1 = 0;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticFindObject
                           (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
        if (pUVar3 == (UObject *)0x0) {
          pUVar9 = pUVar3;
          pUVar11 = pUVar3;
          puVar2 = L2FName::operator*((L2FName *)pFVar6);
          pUVar3 = UObject::StaticLoadObject
                             (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                              (ulong)pUVar9,(UPackageMap *)pUVar11);
          if (pUVar3 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar6);
            FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
    }
  }
  for (iVar7 = 0; iVar7 < 0xf; iVar7 = iVar7 + 1) {
    for (iVar5 = 0; iVar5 < *(int *)(local_18 + 0x204 + iVar7 * 4); iVar5 = iVar5 + 1) {
      FName::FName(local_1c,0);
      pFVar6 = (FName *)(local_18 + 0x240 + (iVar5 * 0xf + iVar7) * 4);
      iVar1 = FName::operator!=(pFVar6,local_1c);
      if (iVar1 != 0) {
        iVar1 = 0;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticFindObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
        if (pUVar3 == (UObject *)0x0) {
          pUVar9 = pUVar3;
          pUVar11 = pUVar3;
          puVar2 = L2FName::operator*((L2FName *)pFVar6);
          pUVar3 = UObject::StaticLoadObject
                             (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                              (ulong)pUVar9,(UPackageMap *)pUVar11);
          if (pUVar3 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar6);
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
    }
  }
  for (iVar7 = 0; iVar7 < *(int *)(local_18 + 0x588); iVar7 = iVar7 + 1) {
    FName::FName(local_1c,0);
    pFVar6 = (FName *)(local_18 + 0x58c + iVar7 * 4);
    iVar5 = FName::operator!=(pFVar6,local_1c);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticFindObject
                         (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar9 = pUVar3;
        pUVar11 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticLoadObject
                           (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar9,(UPackageMap *)pUVar11);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar6);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar7 = 0; iVar7 < *(int *)(local_18 + 0x59c); iVar7 = iVar7 + 1) {
    FName::FName(local_1c,0);
    pFVar6 = (FName *)(local_18 + 0x5a0 + iVar7 * 4);
    iVar5 = FName::operator!=(pFVar6,local_1c);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar9 = pUVar3;
        pUVar11 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar9,(UPackageMap *)pUVar11);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar6);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
    FName::FName(local_1c,0);
    pFVar6 = (FName *)(local_18 + 0x24 + iVar7 * 4);
    iVar5 = FName::operator!=(pFVar6,local_1c);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticFindObject
                         (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar9 = pUVar3;
        pUVar11 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticLoadObject
                           (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar9,(UPackageMap *)pUVar11);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar6);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  iVar7 = 0;
  while( true ) {
    FName::FName(local_1c,0);
    if (2 < iVar7) break;
    pFVar6 = (FName *)(local_18 + 0x30 + iVar7 * 4);
    iVar5 = FName::operator!=(pFVar6,local_1c);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar9 = pUVar3;
        pUVar11 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar9,(UPackageMap *)pUVar11);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar6);
          FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    iVar7 = iVar7 + 1;
  }
  pFVar6 = (FName *)(local_18 + 0x3c);
  iVar7 = FName::operator!=(pFVar6,local_1c);
  if (iVar7 != 0) {
    iVar7 = 0;
    puVar2 = L2FName::operator*((L2FName *)pFVar6);
    pUVar3 = UObject::StaticFindObject
                       (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar7);
    if (pUVar3 == (UObject *)0x0) {
      pUVar9 = pUVar3;
      pUVar11 = pUVar3;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticLoadObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                          (ulong)pUVar9,(UPackageMap *)pUVar11);
      if (pUVar3 == (UObject *)0x0) {
        L2FName::operator*((L2FName *)pFVar6);
        FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
      }
    }
  }
  if (param_2 != 0) {
    iVar7 = 0;
    while( true ) {
      iVar5 = local_18;
      if (*(int *)(local_18 + 0x5b4) <= iVar7) break;
      FName::FName((FName *)&param_2,0);
      pFVar6 = (FName *)(iVar5 + 0x5b8 + iVar7 * 4);
      iVar5 = FName::operator!=(pFVar6,(FName *)&param_2);
      if (iVar5 != 0) {
        iVar5 = 0;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticFindObject
                           (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
        if (pUVar3 == (UObject *)0x0) {
          pUVar9 = pUVar3;
          pUVar11 = pUVar3;
          puVar2 = L2FName::operator*((L2FName *)pFVar6);
          pUVar3 = UObject::StaticLoadObject
                             (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                              (ulong)pUVar9,(UPackageMap *)pUVar11);
          if (pUVar3 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar6);
            FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
      iVar7 = iVar7 + 1;
    }
    FName::FName((FName *)&param_2,0);
    pFVar6 = (FName *)(iVar5 + 0x5c8);
    iVar7 = FName::operator!=(pFVar6,(FName *)&param_2);
    if (iVar7 != 0) {
      iVar7 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar7);
      if (pUVar3 == (UObject *)0x0) {
        pUVar9 = pUVar3;
        pUVar11 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar9,(UPackageMap *)pUVar11);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar6);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    FName::FName((FName *)&param_2,0);
    pFVar6 = (FName *)(local_18 + 0x5cc);
    iVar7 = FName::operator!=(pFVar6,(FName *)&param_2);
    if (iVar7 != 0) {
      iVar7 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar6);
      pUVar3 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar7);
      if (pUVar3 == (UObject *)0x0) {
        pUVar9 = pUVar3;
        pUVar11 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar9,(UPackageMap *)pUVar11);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar6);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
    }
    for (iVar7 = 0; iVar7 < *(int *)(local_18 + 0x5d0); iVar7 = iVar7 + 1) {
      FName::FName((FName *)&param_2,0);
      pFVar6 = (FName *)(local_18 + 0x5d4 + iVar7 * 4);
      iVar5 = FName::operator!=(pFVar6,(FName *)&param_2);
      if (iVar5 != 0) {
        iVar5 = 0;
        puVar2 = L2FName::operator*((L2FName *)pFVar6);
        pUVar3 = UObject::StaticFindObject
                           (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
        if (pUVar3 == (UObject *)0x0) {
          pUVar9 = pUVar3;
          pUVar11 = pUVar3;
          puVar2 = L2FName::operator*((L2FName *)pFVar6);
          pUVar3 = UObject::StaticLoadObject
                             (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                              (ulong)pUVar9,(UPackageMap *)pUVar11);
          if (pUVar3 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar6);
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
    }
  }
  FName::FName((FName *)&param_2,0);
  pFVar6 = (FName *)(local_18 + 0x5b0);
  iVar7 = FName::operator!=(pFVar6,(FName *)&param_2);
  if (iVar7 != 0) {
    pUVar12 = (UPackageMap *)0x0;
    uVar10 = 1;
    puVar8 = (ushort *)0x0;
    puVar2 = L2FName::operator*((L2FName *)pFVar6);
    pUVar4 = UObject::StaticLoadClass
                       (&AActor::PrivateStaticClass,(UObject *)0x0,puVar2,puVar8,uVar10,pUVar12);
    if (pUVar4 == (UClass *)0x0) {
      L2FName::operator*((L2FName *)pFVar6);
      FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1044cf9a Catch@1044cf9a

void Catch_1044cf9a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 1044cfae Catch@1044cfae

void Catch_1044cfae(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ArmorItemData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044d1b0 FUN_1044d1b0

void FUN_1044d1b0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  FString local_4c [20];
  int local_38;
  int local_34;
  int local_30;
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
  
  puStack_c = &LAB_108128a9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1044c5f0(param_1,0);
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_10330040(param_1,in_ECX + 0xd4);
  for (iVar1 = 0; local_28 = iVar1, iVar1 < 0xf; iVar1 = iVar1 + 1) {
    thunk_FUN_10330040(param_1,in_ECX + 0xd8 + iVar1 * 4);
    for (local_18 = 0; local_18 < *(int *)(in_ECX + 0xd8 + iVar1 * 4); local_18 = local_18 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x114 + (local_18 * 0xf + iVar1) * 4);
    }
    thunk_FUN_10330040(param_1,in_ECX + 0x204 + iVar1 * 4);
    for (local_1c = 0; local_1c < *(int *)(in_ECX + 0x204 + iVar1 * 4); local_1c = local_1c + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x240 + (local_1c * 0xf + iVar1) * 4);
    }
    thunk_FUN_10330040(param_1,in_ECX + 0x330 + iVar1 * 4);
    for (local_20 = 0; local_20 < *(int *)(in_ECX + 0x330 + iVar1 * 4); local_20 = local_20 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x36c + (local_20 * 0xf + iVar1) * 4);
    }
    thunk_FUN_10330040(param_1,in_ECX + 0x45c + iVar1 * 4);
    for (local_24 = 0; local_24 < *(int *)(in_ECX + 0x45c + iVar1 * 4); local_24 = local_24 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x498 + (local_24 * 0xf + iVar1) * 4);
    }
  }
  thunk_FUN_10330040(param_1,in_ECX + 0x588);
  for (iVar1 = 0; local_2c = iVar1, iVar1 < *(int *)(in_ECX + 0x588); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x58c + iVar1 * 4);
  }
  thunk_FUN_10330040(param_1,in_ECX + 0x59c);
  for (iVar1 = 0; local_30 = iVar1, iVar1 < *(int *)(in_ECX + 0x59c); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x5a0 + iVar1 * 4);
  }
  thunk_FUN_1044c100(param_1,in_ECX + 0x5b0);
  thunk_FUN_10330040(param_1,in_ECX + 0x5b4);
  for (iVar1 = 0; local_34 = iVar1, iVar1 < *(int *)(in_ECX + 0x5b4); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x5b8 + iVar1 * 4);
  }
  thunk_FUN_1044c100(param_1,in_ECX + 0x5c8);
  thunk_FUN_1044c100(param_1,in_ECX + 0x5cc);
  thunk_FUN_10330040(param_1,in_ECX + 0x5d0);
  for (iVar1 = 0; local_38 = iVar1, iVar1 < *(int *)(in_ECX + 0x5d0); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x5d4 + iVar1 * 4);
  }
  thunk_FUN_10330040(param_1,in_ECX + 0x5e4);
  thunk_FUN_10330040(param_1,in_ECX + 0x5e8);
  thunk_FUN_10330040(param_1,in_ECX + 0x5ec);
  thunk_FUN_10330040(param_1,in_ECX + 0x5f0);
  thunk_FUN_10330040(param_1,in_ECX + 0x5f4);
  thunk_FUN_10330040(param_1,in_ECX + 0x5f8);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 1044d486 Catch@1044d486

void Catch_1044d486(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 1044d49a Catch@1044d49a

void Catch_1044d49a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ArmorItemData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044d580 FUN_1044d580

void FUN_1044d580(FOutputDevice *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  UObject *pUVar3;
  int in_ECX;
  FName *pFVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  UObject *pUVar6;
  UObject *pUVar7;
  FName local_1c [4];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108128c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  local_18 = in_ECX;
  for (iVar5 = 0; iVar1 = local_18, iVar5 < *(int *)(local_18 + 0xdc); iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(iVar1 + 0xe0 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar5 = 0; iVar1 = local_18, iVar5 < *(int *)(local_18 + 0xf0); iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(iVar1 + 0xf4 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar5 = 0; iVar1 = local_18, iVar5 < 3; iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(iVar1 + 0x24 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  iVar5 = 0;
  while( true ) {
    iVar1 = local_18;
    FName::FName(local_1c,0);
    if (2 < iVar5) break;
    pFVar4 = (FName *)(iVar1 + 0x30 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    iVar5 = iVar5 + 1;
  }
  pFVar4 = (FName *)(iVar1 + 0x3c);
  iVar5 = FName::operator!=(pFVar4,local_1c);
  if (iVar5 != 0) {
    iVar5 = 0;
    puVar2 = L2FName::operator*((L2FName *)pFVar4);
    pUVar3 = UObject::StaticFindObject
                       (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
    if (pUVar3 == (UObject *)0x0) {
      pUVar6 = pUVar3;
      pUVar7 = pUVar3;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticLoadObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                          (ulong)pUVar6,(UPackageMap *)pUVar7);
      if (pUVar3 == (UObject *)0x0) {
        L2FName::operator*((L2FName *)pFVar4);
        FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                            (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
      }
    }
  }
  for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(local_18 + 0x24c + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  if (param_2 != 0) {
    iVar5 = 0;
    while( true ) {
      iVar1 = local_18;
      if (*(int *)(local_18 + 0x104) <= iVar5) break;
      FName::FName((FName *)&param_2,0);
      pFVar4 = (FName *)(iVar1 + 0x108 + iVar5 * 4);
      iVar1 = FName::operator!=(pFVar4,(FName *)&param_2);
      if (iVar1 != 0) {
        iVar1 = 0;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticFindObject
                           (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
        if (pUVar3 == (UObject *)0x0) {
          pUVar6 = pUVar3;
          pUVar7 = pUVar3;
          puVar2 = L2FName::operator*((L2FName *)pFVar4);
          pUVar3 = UObject::StaticLoadObject
                             (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                              (ulong)pUVar6,(UPackageMap *)pUVar7);
          if (pUVar3 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar4);
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
      iVar5 = iVar5 + 1;
    }
    FName::FName((FName *)&param_2,0);
    pFVar4 = (FName *)(iVar1 + 0x118);
    iVar5 = FName::operator!=(pFVar4,(FName *)&param_2);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    FName::FName((FName *)&param_2,0);
    pFVar4 = (FName *)(local_18 + 0x11c);
    iVar5 = FName::operator!=(pFVar4,(FName *)&param_2);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1044dac3 Catch@1044dac3

void Catch_1044dac3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 1044dad7 Catch@1044dad7

void Catch_1044dad7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2WeaponItemData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044dc60 FUN_1044dc60

void FUN_1044dc60(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  FString local_58 [20];
  int local_44;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_108128d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1044c5f0(param_1,0);
  FString::FString(local_58);
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_10330040(param_1,in_ECX + 0xd4);
  thunk_FUN_10330040(param_1,in_ECX + 0xd8);
  thunk_FUN_10330040(param_1,in_ECX + 0xdc);
  for (iVar1 = 0; local_18 = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0xe0 + iVar1 * 4);
  }
  thunk_FUN_10330040(param_1,in_ECX + 0xf0);
  for (iVar1 = 0; local_1c = iVar1, iVar1 < *(int *)(in_ECX + 0xf0); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0xf4 + iVar1 * 4);
  }
  thunk_FUN_10330040(param_1,in_ECX + 0x104);
  for (iVar1 = 0; local_20 = iVar1, iVar1 < *(int *)(in_ECX + 0x104); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x108 + iVar1 * 4);
  }
  thunk_FUN_1044c100(param_1,in_ECX + 0x118);
  thunk_FUN_1044c100(param_1,in_ECX + 0x11c);
  thunk_FUN_1044c100(param_1,in_ECX + 0x120);
  thunk_FUN_10330040(param_1,in_ECX + 0x124);
  thunk_FUN_10330040(param_1,in_ECX + 0x128);
  thunk_FUN_10330040(param_1,in_ECX + 300);
  thunk_FUN_10330040(param_1,in_ECX + 0x130);
  thunk_FUN_10330040(param_1,in_ECX + 0x134);
  thunk_FUN_10330040(param_1,in_ECX + 0x138);
  thunk_FUN_10330040(param_1,in_ECX + 0x13c);
  thunk_FUN_10330040(param_1,in_ECX + 0x140);
  thunk_FUN_10330040(param_1,in_ECX + 0x144);
  thunk_FUN_10330040(param_1,in_ECX + 0x148);
  thunk_FUN_10330040(param_1,in_ECX + 0x14c);
  thunk_FUN_10330040(param_1,in_ECX + 0x150);
  thunk_FUN_10330040(param_1,in_ECX + 0x154);
  thunk_FUN_10330040(param_1,in_ECX + 0x158);
  thunk_FUN_10330040(param_1,in_ECX + 0x15c);
  thunk_FUN_10330040(param_1,in_ECX + 0x160);
  thunk_FUN_10330040(param_1,in_ECX + 0x168);
  thunk_FUN_10330040(param_1,in_ECX + 0x164);
  for (iVar1 = 0; local_24 = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x1dc + iVar1 * 4);
  }
  for (iVar1 = 0; local_28 = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_103301d0(param_1,in_ECX + (iVar1 * 3 + 0x7b) * 4);
  }
  for (iVar1 = 0; local_2c = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_10330060(param_1,in_ECX + 0x21c + iVar1 * 4);
  }
  for (iVar1 = 0; local_30 = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_10330060(param_1,in_ECX + 0x22c + iVar1 * 4);
  }
  for (iVar1 = 0; local_34 = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x16c + iVar1 * 4);
  }
  for (iVar1 = 0; local_38 = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_103301d0(param_1,in_ECX + 0x17c + iVar1 * 0xc);
  }
  for (iVar1 = 0; local_3c = iVar1, iVar1 < *(int *)(in_ECX + 0xdc); iVar1 = iVar1 + 1) {
    thunk_FUN_103301d0(param_1,in_ECX + 0x1ac + iVar1 * 0xc);
  }
  for (iVar1 = 0; local_40 = iVar1, iVar1 < 4; iVar1 = iVar1 + 1) {
    thunk_FUN_10330040(param_1,in_ECX + 0x23c + iVar1 * 4);
  }
  for (iVar1 = 0; local_44 = iVar1, iVar1 < 4; iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0x24c + iVar1 * 4);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_58);
  ExceptionList = local_10;
  return;
}


// ==== 1044dfcc Catch@1044dfcc

void Catch_1044dfcc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_10914c48);
}


// ==== 1044dfe0 Catch@1044dfe0

void Catch_1044dfe0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2WeaponItemData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044e0f0 FUN_1044e0f0

void FUN_1044e0f0(FOutputDevice *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  UObject *pUVar3;
  int in_ECX;
  FName *pFVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  UObject *pUVar6;
  UObject *pUVar7;
  FName local_1c [4];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108128f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  local_18 = in_ECX;
  for (iVar5 = 0; iVar1 = local_18, iVar5 < *(int *)(local_18 + 0xd4); iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(iVar1 + 0xd8 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar5 = 0; iVar1 = local_18, iVar5 < *(int *)(local_18 + 0xe8); iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(iVar1 + 0xec + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar5 = 0; iVar1 = local_18, iVar5 < 3; iVar5 = iVar5 + 1) {
    FName::FName(local_1c,0);
    pFVar4 = (FName *)(iVar1 + 0x24 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  iVar5 = 0;
  while( true ) {
    iVar1 = local_18;
    FName::FName(local_1c,0);
    if (2 < iVar5) break;
    pFVar4 = (FName *)(iVar1 + 0x30 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar4,local_1c);
    if (iVar1 != 0) {
      iVar1 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    iVar5 = iVar5 + 1;
  }
  pFVar4 = (FName *)(iVar1 + 0x3c);
  iVar5 = FName::operator!=(pFVar4,local_1c);
  if (iVar5 != 0) {
    iVar5 = 0;
    puVar2 = L2FName::operator*((L2FName *)pFVar4);
    pUVar3 = UObject::StaticFindObject
                       (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
    if (pUVar3 == (UObject *)0x0) {
      pUVar6 = pUVar3;
      pUVar7 = pUVar3;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticLoadObject
                         (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                          (ulong)pUVar6,(UPackageMap *)pUVar7);
      if (pUVar3 == (UObject *)0x0) {
        L2FName::operator*((L2FName *)pFVar4);
        FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                            (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
      }
    }
  }
  if (param_2 != 0) {
    FName::FName((FName *)&param_2,0);
    pFVar4 = (FName *)(local_18 + 0x108);
    iVar5 = FName::operator!=(pFVar4,(FName *)&param_2);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    FName::FName((FName *)&param_2,0);
    pFVar4 = (FName *)(local_18 + 0x10c);
    iVar5 = FName::operator!=(pFVar4,(FName *)&param_2);
    if (iVar5 != 0) {
      iVar5 = 0;
      puVar2 = L2FName::operator*((L2FName *)pFVar4);
      pUVar3 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar5);
      if (pUVar3 == (UObject *)0x0) {
        pUVar6 = pUVar3;
        pUVar7 = pUVar3;
        puVar2 = L2FName::operator*((L2FName *)pFVar4);
        pUVar3 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar6,(UPackageMap *)pUVar7);
        if (pUVar3 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar4);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1044e508 Catch@1044e508

void Catch_1044e508(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1044e51c Catch@1044e51c

void Catch_1044e51c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2EtcItemData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044e650 FUN_1044e650

void FUN_1044e650(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10812909;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1044c5f0(param_1,0);
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_10330040(param_1,in_ECX + 0xd4);
  for (iVar1 = 0; local_18 = iVar1, iVar1 < *(int *)(in_ECX + 0xd4); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0xd8 + iVar1 * 4);
  }
  thunk_FUN_10330040(param_1,in_ECX + 0xe8);
  for (iVar1 = 0; local_1c = iVar1, iVar1 < *(int *)(in_ECX + 0xe8); iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 0xec + iVar1 * 4);
  }
  thunk_FUN_1044c100(param_1,in_ECX + 0x108);
  thunk_FUN_1044c100(param_1,in_ECX + 0x10c);
  thunk_FUN_10330040(param_1,in_ECX + 0xfc);
  thunk_FUN_10330040(param_1,in_ECX + 0x100);
  thunk_FUN_10330040(param_1,in_ECX + 0x104);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1044e75e Catch@1044e75e

void Catch_1044e75e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1044e772 Catch@1044e772

void Catch_1044e772(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2EtcItemData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044e7e0 FUN_1044e7e0

void FUN_1044e7e0(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812920;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1032ffe0(param_1);
  thunk_FUN_10331640(param_1,in_ECX + 4);
  ExceptionList = local_10;
  return;
}


// ==== 1044e83b Catch@1044e83b

void Catch_1044e83b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044e84f Catch@1044e84f

void Catch_1044e84f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NpcSilhouetteData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044e890 FUN_1044e890

void FUN_1044e890(FArchive *param_1,int param_2)

{
  FString *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812930;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    thunk_FUN_10330040(param_1,in_ECX + 0x18);
    thunk_FUN_10330040(param_1,in_ECX + 0x1c);
    thunk_FUN_10330040(param_1,in_ECX + 0x20);
    thunk_FUN_10330040(param_1,in_ECX + 0x24);
    thunk_FUN_10330040(param_1,in_ECX + 0x2c);
    thunk_FUN_10330040(param_1,in_ECX + 0x30);
    thunk_FUN_10330060(param_1,in_ECX + 0x34);
    thunk_FUN_10330040(param_1,in_ECX + 0x3c);
    thunk_FUN_1044c100(param_1,in_ECX + 0x40);
    thunk_FUN_1044c100(param_1,in_ECX + 0x44);
    thunk_FUN_1044c100(param_1,in_ECX + 0x48);
    thunk_FUN_10330040(param_1,in_ECX + 0x4c);
    thunk_FUN_10330040(param_1,in_ECX + 0x68);
    thunk_FUN_10330040(param_1,in_ECX + 0x6c);
    thunk_FUN_10330040(param_1,in_ECX + 0x28);
    thunk_FUN_10330040(param_1,in_ECX + 0x70);
    thunk_FUN_10330040(param_1,in_ECX + 0x74);
  }
  else {
    ExceptionList = &local_10;
    operator<<(param_1,in_ECX);
    operator<<(param_1,in_ECX + 0xc);
    operator<<(param_1,in_ECX + 0x50);
    operator<<(param_1,in_ECX + 0x5c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044e9b7 Catch@1044e9b7

void Catch_1044e9b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044e9cb Catch@1044e9cb

void Catch_1044e9cb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2MagicSkillData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044ea40 FUN_1044ea40

void FUN_1044ea40(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812940;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  thunk_FUN_103301d0(param_1,in_ECX + 0x10);
  operator<<(param_1,(FString *)(in_ECX + 0x1c));
  ExceptionList = local_10;
  return;
}


// ==== 1044eac4 Catch@1044eac4

void Catch_1044eac4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044ead8 Catch@1044ead8

void Catch_1044ead8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2RaidData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044eb30 FUN_1044eb30

void FUN_1044eb30(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812950;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  thunk_FUN_103301d0(param_1,in_ECX + 0x10);
  operator<<(param_1,(FString *)(in_ECX + 0x1c));
  thunk_FUN_10330040(param_1,in_ECX + 0x34);
  operator<<(param_1,(FString *)(in_ECX + 0x28));
  ExceptionList = local_10;
  return;
}


// ==== 1044ebc7 Catch@1044ebc7

void Catch_1044ebc7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044ebdb Catch@1044ebdb

void Catch_1044ebdb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2HuntingZoneData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044ec30 FUN_1044ec30

void FUN_1044ec30(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812960;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + 8 + iVar1 * 4);
    thunk_FUN_1044c100(param_1,in_ECX + 0x14 + iVar1 * 4);
    thunk_FUN_1044c100(param_1,in_ECX + 0x20 + iVar1 * 4);
    thunk_FUN_10330060(param_1,in_ECX + 0x2c + iVar1 * 4);
    thunk_FUN_10330060(param_1,in_ECX + 0x38 + iVar1 * 4);
    thunk_FUN_10330060(param_1,in_ECX + 0x44 + iVar1 * 4);
    thunk_FUN_10330060(param_1,in_ECX + 0x50 + iVar1 * 4);
    thunk_FUN_10330060(param_1,in_ECX + 0x5c + iVar1 * 4);
    thunk_FUN_10330060(param_1,in_ECX + 0x68 + iVar1 * 4);
  }
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 0xf; iVar2 = iVar2 + 1) {
      thunk_FUN_1044c100(param_1,in_ECX + 0x74 + (iVar1 * 0xf + iVar2) * 4);
    }
  }
  thunk_FUN_10330060(param_1,in_ECX + 0xec);
  thunk_FUN_10330060(param_1,in_ECX + 0xf0);
  ExceptionList = local_10;
  return;
}


// ==== 1044ed57 Catch@1044ed57

void Catch_1044ed57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1044ed6b Catch@1044ed6b

void Catch_1044ed6b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SkillSoundData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044ede0 FUN_1044ede0

void FUN_1044ede0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812970;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  operator<<(param_1,(FString *)(in_ECX + 4));
  operator<<(param_1,(FString *)(in_ECX + 0x10));
  thunk_FUN_10330060(param_1,in_ECX + 0x1c);
  thunk_FUN_10330060(param_1,in_ECX + 0x20);
  thunk_FUN_10330040(param_1,in_ECX + 0x24);
  thunk_FUN_10330040(param_1,in_ECX + 0x28);
  thunk_FUN_1044c100(param_1,in_ECX + 0x2c);
  thunk_FUN_1044c100(param_1,in_ECX + 0x30);
  ExceptionList = local_10;
  return;
}


// ==== 1044ee84 Catch@1044ee84

void Catch_1044ee84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044ee98 Catch@1044ee98

void Catch_1044ee98(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2EnterEventData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044eef0 FUN_1044eef0

void FUN_1044eef0(undefined4 param_1)

{
  int *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812980;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  for (iVar1 = 0; iVar1 < *in_ECX; iVar1 = iVar1 + 1) {
    thunk_FUN_1044c100(param_1,in_ECX + iVar1 + 1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044ef5d Catch@1044ef5d

void Catch_1044ef5d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1044ef71 Catch@1044ef71

void Catch_1044ef71(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMusicInfo::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044efc0 FUN_1044efc0

void FUN_1044efc0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812990;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_1044c100(param_1,in_ECX + 8);
  operator<<(param_1,(FString *)(in_ECX + 0xc));
  operator<<(param_1,(FString *)(in_ECX + 0x18));
  operator<<(param_1,(FString *)(in_ECX + 0x24));
  ExceptionList = local_10;
  return;
}


// ==== 1044f040 Catch@1044f040

void Catch_1044f040(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044f054 Catch@1044f054

void Catch_1044f054(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NpcSkillAnimData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044f0a0 FUN_1044f0a0

void FUN_1044f0a0(FOutputDevice *param_1)

{
  int iVar1;
  ushort *puVar2;
  UObject *pUVar3;
  int in_ECX;
  FName *this;
  undefined4 *unaff_FS_OFFSET;
  UObject *pUVar4;
  UObject *pUVar5;
  FName local_18 [4];
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108129a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  FName::FName(local_18,0);
  this = (FName *)(in_ECX + 0x14);
  iVar1 = FName::operator!=(this,local_18);
  if (iVar1 != 0) {
    iVar1 = 0;
    puVar2 = L2FName::operator*((L2FName *)this);
    pUVar3 = UObject::StaticFindObject
                       (&AActor::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
    if (pUVar3 == (UObject *)0x0) {
      pUVar4 = pUVar3;
      pUVar5 = pUVar3;
      puVar2 = L2FName::operator*((L2FName *)this);
      pUVar3 = UObject::StaticLoadObject
                         (&UMesh::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                          (ulong)pUVar4,(UPackageMap *)pUVar5);
      if (pUVar3 == (UObject *)0x0) {
        L2FName::operator*((L2FName *)this);
        FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1044f162 Catch@1044f162

void Catch_1044f162(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1044f176 Catch@1044f176

void Catch_1044f176(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2VariationEffectData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044f1d0 FUN_1044f1d0

void FUN_1044f1d0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108129b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  thunk_FUN_10330040(param_1,in_ECX + 0x10);
  thunk_FUN_1044c100(param_1,in_ECX + 0x14);
  operator<<(param_1,(FString *)(in_ECX + 0x18));
  ExceptionList = local_10;
  return;
}


// ==== 1044f25e Catch@1044f25e

void Catch_1044f25e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044f272 Catch@1044f272

void Catch_1044f272(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2VariationEffectData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044f2c0 FUN_1044f2c0

void FUN_1044f2c0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108129c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1044c100(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1044f30f Catch@1044f30f

void Catch_1044f30f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044f323 Catch@1044f323

void Catch_1044f323(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FStaticObjectInfo::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044f360 FUN_1044f360

void FUN_1044f360(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108129d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1044c100(param_1);
  for (iVar2 = 0; iVar2 < 0xf; iVar2 = iVar2 + 1) {
    iVar1 = in_ECX + iVar2 * 0xc;
    thunk_FUN_10330060(param_1,iVar1 + 4);
    thunk_FUN_10330060(param_1,iVar1 + 8);
    thunk_FUN_10330060(param_1,iVar1 + 0xc);
    thunk_FUN_10330040(param_1,iVar1 + 0xb8);
    thunk_FUN_10330040(param_1,iVar1 + 0xbc);
    thunk_FUN_10330040(param_1,in_ECX + (iVar2 * 3 + 0x30) * 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044f418 Catch@1044f418

void Catch_1044f418(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1044f42c Catch@1044f42c

void Catch_1044f42c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FHairAccessoryLoc::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044f490 FUN_1044f490

void FUN_1044f490(byte param_1)

{
  thunk_FUN_1044b0f0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f4c0 FUN_1044f4c0

void FUN_1044f4c0(byte param_1)

{
  thunk_FUN_104478a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f4f0 FUN_1044f4f0

void FUN_1044f4f0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108129ec;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1044f560 FUN_1044f560

void FUN_1044f560(byte param_1)

{
  thunk_FUN_104479a0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f590 FUN_1044f590

void FUN_1044f590(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10812a0c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 8));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1044f600 FUN_1044f600

void FUN_1044f600(byte param_1)

{
  thunk_FUN_10447a90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f630 FUN_1044f630

void FUN_1044f630(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10812a2c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1044f6a0 FUN_1044f6a0

void FUN_1044f6a0(byte param_1)

{
  thunk_FUN_10447cf0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f6d0 FUN_1044f6d0

void FUN_1044f6d0(byte param_1)

{
  thunk_FUN_10447d80();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f700 FUN_1044f700

void FUN_1044f700(byte param_1)

{
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f730 FUN_1044f730

void FUN_1044f730(byte param_1)

{
  thunk_FUN_10447e80();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1044f760 FUN_1044f760

void FUN_1044f760(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10812a4c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x18));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1044f7d0 FUN_1044f7d0

undefined4 FUN_1044f7d0(int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  uchar *puVar3;
  ushort *puVar4;
  FL2GameData *in_ECX;
  int iVar5;
  int iVar6;
  FOutputDevice local_130 [184];
  undefined4 local_78;
  undefined1 *local_38;
  void *local_34;
  undefined1 *puStack_30;
  int local_2c;
  int local_1c;
  int local_18;
  FArchive *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_30 = &LAB_10812a6b;
  local_34 = ExceptionList;
  local_38 = &stack0xfffffec4;
  iVar5 = 0;
  local_2c = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_34;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_130,(ushort *)L"WarningNotice");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_130,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_130,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1044f91d;
    }
  }
  else if (param_1 == 0) {
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_130,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar5 == 0) {
        FOutputDevice::Logf(local_130,*(ushort **)GError_exref);
      }
      thunk_FUN_10445f40(pFVar2);
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1044f91d;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_130,(ushort *)L"WarningNotice");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_130,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_130,*(ushort **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_2c._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_130,*(ushort **)GWarn_exref);
      local_10 = 0;
      local_2c = (uint)local_2c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      puVar3 = local_8 + 2;
      for (; local_18 = iVar5, iVar5 < 3; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_enotice_begin_10ad0f06 + iVar5 * 0x101 + 1,
                           u_cnotice_10ad1108[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(puVar3);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(local_78);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        iVar5 = thunk_FUN_1049f840();
        for (iVar6 = 0; local_1c = iVar6, iVar6 < iVar5; iVar6 = iVar6 + 1) {
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"notice",iVar6);
          if (puVar4 != (ushort *)0x0) {
            FString::operator=((FString *)(in_ECX + 0x7cb88),puVar4);
          }
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_2c = (uint)local_2c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_1044f91d:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_34;
  return local_10;
}


// ==== 1044fb83 Catch@1044fb83

void Catch_1044fb83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 1044fb97 Catch@1044fb97

void Catch_1044fb97(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::WarningNoticeLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044fcb0 FUN_1044fcb0

void FUN_1044fcb0(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  ushort local_a0 [70];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812a80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff54;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,local_a0,(ushort *)L"WarningNotice");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a0,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    thunk_FUN_10445f40(pFVar1);
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1044fda3 Catch@1044fda3

void Catch_1044fda3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1044fdb7 Catch@1044fdb7

void Catch_1044fdb7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::WarningNoticeSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1044fe20 FUN_1044fe20

undefined4 FUN_1044fe20(int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  uchar *puVar3;
  ushort *puVar4;
  FL2GameData *in_ECX;
  int iVar5;
  int iVar6;
  FOutputDevice local_130 [184];
  undefined4 local_78;
  undefined1 *local_38;
  void *local_34;
  undefined1 *puStack_30;
  int local_2c;
  int local_1c;
  int local_18;
  FArchive *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_30 = &LAB_10812a9b;
  local_34 = ExceptionList;
  local_38 = &stack0xfffffec4;
  iVar5 = 0;
  local_2c = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_34;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_130,(ushort *)L"EULA");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_130,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_130,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1044ff6d;
    }
  }
  else if (param_1 == 0) {
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_130,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar5 == 0) {
        FOutputDevice::Logf(local_130,*(ushort **)GError_exref);
      }
      thunk_FUN_10445ff0(pFVar2);
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1044ff6d;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_130,(ushort *)L"EULA");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_130,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_130,*(ushort **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_2c._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_130,*(ushort **)GWarn_exref);
      local_10 = 0;
      local_2c = (uint)local_2c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      puVar3 = local_8 + 2;
      for (; local_18 = iVar5, iVar5 < 5; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_eula_begin_10ad1510 + iVar5 * 0x101,(&DAT_10ad1710)[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(puVar3);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(local_78);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        iVar5 = thunk_FUN_1049f840();
        for (iVar6 = 0; local_1c = iVar6, iVar6 < iVar5; iVar6 = iVar6 + 1) {
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"eula",iVar6);
          if (puVar4 != (ushort *)0x0) {
            FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x7cb94),puVar4);
          }
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"eulatestserver",iVar6);
          if (puVar4 != (ushort *)0x0) {
            FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x7cba0),puVar4);
          }
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"eulachinaspecialmessage",iVar6);
          if (puVar4 != (ushort *)0x0) {
            FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x7cbac),puVar4);
          }
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_2c = (uint)local_2c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_1044ff6d:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_34;
  return local_10;
}


// ==== 1045021a Catch@1045021a

void Catch_1045021a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 1045022e Catch@1045022e

void Catch_1045022e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::EulaLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10450360 FUN_10450360

void FUN_10450360(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  ushort local_a0 [70];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812ab0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff54;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,local_a0,(ushort *)L"EULA");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a0,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    thunk_FUN_10445ff0(pFVar1);
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10450453 Catch@10450453

void Catch_10450453(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10450467 Catch@10450467

void Catch_10450467(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::EulaSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104504d0 FUN_104504d0

undefined4 FUN_104504d0(int param_1)

{
  int iVar1;
  FL2GameData *pFVar2;
  wchar_t *pwVar3;
  FArchive *pFVar4;
  FArchive *pFVar5;
  int iVar6;
  uchar *puVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  FOutputDevice *this;
  int iVar11;
  EFindName EVar12;
  FOutputDevice local_1b4 [188];
  undefined4 local_f8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  FArchive *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uchar *local_10;
  FL2GameData *local_c;
  int local_8;
  
  puStack_80 = &LAB_10812acb;
  local_84 = ExceptionList;
  local_88 = &stack0xfffffe40;
  local_7c = 0;
  local_34 = 1;
  local_10 = (uchar *)0x0;
  local_24 = 0;
  local_38 = (FArchive *)0x0;
  pwVar3 = L"Chargrp.dat";
  if (*(int *)GLanguageType_exref == 4) {
    pwVar3 = L"Chargrp-fc.dat";
  }
  ExceptionList = &local_84;
  appStrcpy((ushort *)local_1b4,(ushort *)pwVar3);
  pFVar4 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_1b4,0,*(undefined4 *)GNull_exref);
  local_38 = pFVar4;
  if (pFVar4 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104511bb;
    }
  }
  else if (param_1 == 0) {
    local_24 = (**(code **)(*(int *)pFVar4 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar4,&local_10,&local_24,0);
    pFVar5 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_10,local_24);
    if (pFVar5 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_1b4,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar6 = FL2GameData::CheckSafePackage(local_c,pFVar5);
      if (iVar6 == 0) {
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      for (iVar6 = 0; local_60 = iVar6, iVar6 < 0xf; iVar6 = iVar6 + 1) {
        thunk_FUN_1044c2c0(pFVar5);
      }
      (**(code **)(*(int *)pFVar5 + 0x58))();
    }
    (**(code **)(*(int *)pFVar4 + 0x58))();
    thunk_FUN_103254a0(local_10);
    if (pFVar5 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar5)(1);
    }
    goto LAB_104511bb;
  }
  if (pFVar4 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar4 + 0x58))();
  }
  pwVar3 = L"Chargrp.txt";
  if (*(int *)GLanguageType_exref == 4) {
    pwVar3 = L"Chargrp-fc.txt";
  }
  appStrcpy((ushort *)local_1b4,(ushort *)pwVar3);
  pFVar4 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_1b4,0,*(undefined4 *)GNull_exref);
  local_38 = pFVar4;
  if (pFVar4 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_34 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_7c._0_1_ = 1;
    local_24 = (**(code **)(*(int *)pFVar4 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar4,&local_10,&local_24,param_1);
    if (local_10 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_34 = 0;
      local_7c = (uint)local_7c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      puVar7 = local_10 + 2;
      for (iVar6 = 0; local_a8 = iVar6, iVar6 < 0x1c; iVar6 = iVar6 + 1) {
        thunk_FUN_104a1120(u_pc_begin_10acd6d0 + iVar6 * 0x101,u_cclass_name_10acd8d0[iVar6 * 0x101]
                          );
      }
      thunk_FUN_1049f750(puVar7);
      iVar6 = thunk_FUN_104a1840();
      if (iVar6 == 0) {
        thunk_FUN_10445eb0(local_f8);
        FOutputDevice::Logf(local_1b4,*(ushort **)GWarn_exref);
        local_34 = 0;
      }
      else {
        iVar6 = thunk_FUN_1049f840();
        local_a4 = 0;
        while (iVar1 = local_a4, local_a4 < iVar6) {
          iVar11 = -1;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"class_name",local_a4);
          iVar9 = appStricmp(puVar8,(ushort *)L"FFighter");
          if (iVar9 == 0) {
            iVar11 = 1;
          }
          else {
            iVar9 = appStricmp(puVar8,(ushort *)L"MFighter");
            if (iVar9 == 0) {
              iVar11 = 0;
            }
            else {
              iVar9 = appStricmp(puVar8,(ushort *)L"FMagic");
              if (iVar9 == 0) {
                iVar11 = 9;
              }
              else {
                iVar9 = appStricmp(puVar8,(ushort *)L"MMagic");
                if (iVar9 == 0) {
                  iVar11 = 8;
                }
                else {
                  iVar9 = appStricmp(puVar8,(ushort *)&DAT_10895c70);
                  if (iVar9 == 0) {
                    iVar11 = 7;
                  }
                  else {
                    iVar9 = appStricmp(puVar8,(ushort *)&DAT_10895c64);
                    if (iVar9 == 0) {
                      iVar11 = 6;
                    }
                    else {
                      iVar9 = appStricmp(puVar8,(ushort *)L"FDarkElf");
                      if (iVar9 == 0) {
                        iVar11 = 3;
                      }
                      else {
                        iVar9 = appStricmp(puVar8,(ushort *)L"MDarkElf");
                        if (iVar9 == 0) {
                          iVar11 = 2;
                        }
                        else {
                          iVar9 = appStricmp(puVar8,(ushort *)&DAT_10895c28);
                          if (iVar9 == 0) {
                            iVar11 = 0xb;
                          }
                          else {
                            iVar9 = appStricmp(puVar8,(ushort *)&DAT_10895c1c);
                            if (iVar9 == 0) {
                              iVar11 = 10;
                            }
                            else {
                              iVar9 = appStricmp(puVar8,(ushort *)L"FShaman");
                              if (iVar9 == 0) {
                                iVar11 = 0xd;
                              }
                              else {
                                iVar9 = appStricmp(puVar8,(ushort *)L"MShaman");
                                if (iVar9 == 0) {
                                  iVar11 = 0xc;
                                }
                                else {
                                  iVar9 = appStricmp(puVar8,(ushort *)&DAT_10895be4);
                                  if (iVar9 == 0) {
                                    iVar11 = 5;
                                  }
                                  else {
                                    iVar9 = appStricmp(puVar8,(ushort *)&DAT_10895bd4);
                                    if (iVar9 == 0) {
                                      iVar11 = 4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"face_icon",iVar1);
          L2FName::L2FName((L2FName *)&local_48,puVar8,EVar12);
          pFVar2 = local_c;
          *(undefined4 *)(local_c + iVar11 * 0x274 + 0x183c) = local_48;
          uVar10 = thunk_FUN_104a0c90(L"hair_mesh",iVar1);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x1840) = uVar10;
          for (local_8 = 0; local_8 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x1840);
              local_8 = local_8 + 1) {
            EVar12 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"hair_mesh",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_90,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x1850) = local_90;
          }
          uVar10 = thunk_FUN_104a0c90(L"hair_texture",iVar1);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x1844) = uVar10;
          for (local_8 = 0; local_8 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x1844);
              local_8 = local_8 + 1) {
            EVar12 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"hair_texture",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_50,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x18a0) = local_50;
          }
          uVar10 = thunk_FUN_104a0c90(L"face_mesh",iVar1);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x1848) = uVar10;
          for (local_8 = 0; local_8 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x1848);
              local_8 = local_8 + 1) {
            EVar12 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"face_mesh",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_b8,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x18f0) = local_b8;
          }
          uVar10 = thunk_FUN_104a0c90(L"face_texture",iVar1);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x184c) = uVar10;
          local_8 = 0;
          while( true ) {
            EVar12 = 2;
            if (*(int *)(pFVar2 + iVar11 * 0x274 + 0x184c) <= local_8) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"face_texture",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_58,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x1940) = local_58;
            local_8 = local_8 + 1;
          }
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"chest_mesh",iVar1);
          L2FName::L2FName((L2FName *)&local_98,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x1990) = local_98;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"chest_texture",iVar1);
          L2FName::L2FName((L2FName *)&local_3c,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19a0) = local_3c;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"legs_mesh",iVar1);
          L2FName::L2FName((L2FName *)local_b0,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x1994) = local_b0[0];
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"legs_texture",iVar1);
          L2FName::L2FName((L2FName *)&local_68,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19a4) = local_68;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"feet_mesh",iVar1);
          L2FName::L2FName((L2FName *)&local_a0,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x199c) = local_a0;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"feet_texture",iVar1);
          L2FName::L2FName((L2FName *)&local_70,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19ac) = local_70;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"gloves_mesh",iVar1);
          L2FName::L2FName((L2FName *)&local_b4,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x1998) = local_b4;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"gloves_texture",iVar1);
          L2FName::L2FName((L2FName *)&local_78,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19a8) = local_78;
          EVar12 = 2;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"attack_effect",iVar1);
          L2FName::L2FName((L2FName *)&local_40,puVar8,EVar12);
          *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19b0) = local_40;
          iVar9 = thunk_FUN_104a0b70(L"walkanimframe",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19b4) = iVar9;
          if (iVar9 == -1) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19b4) = 0;
          }
          iVar9 = thunk_FUN_104a0c90(L"attack_sound",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19b8) = iVar9;
          if (3 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19b8) = 3;
          }
          for (local_8 = 0; local_8 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x19b8);
              local_8 = local_8 + 1) {
            EVar12 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"attack_sound",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_44,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x19e4) = local_44;
          }
          iVar9 = thunk_FUN_104a0c90(L"defense_sound",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19bc) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19bc) = 5;
          }
          for (local_8 = 0; local_8 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x19bc);
              local_8 = local_8 + 1) {
            EVar12 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"defense_sound",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_4c,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x19f0) = local_4c;
          }
          iVar9 = thunk_FUN_104a0c90(L"damage_sound",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19c0) = iVar9;
          if (3 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19c0) = 3;
          }
          for (local_8 = 0; local_8 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x19c0);
              local_8 = local_8 + 1) {
            EVar12 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"damage_sound",local_8,iVar1);
            L2FName::L2FName((L2FName *)&local_54,puVar8,EVar12);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_8) * 4 + 0x1a04) = local_54;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_hand",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19c4) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19c4) = 5;
          }
          local_1c = 0;
          while( true ) {
            if (*(int *)(pFVar2 + iVar11 * 0x274 + 0x19c4) <= local_1c) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_hand",local_1c,iVar1);
            L2FName::L2FName((L2FName *)&local_5c,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_1c) * 4 + 0x1a10) = local_5c;
            local_1c = local_1c + 1;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_1hs",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19c8) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19c8) = 5;
          }
          local_2c = 0;
          while( true ) {
            if (*(int *)(pFVar2 + iVar11 * 0x274 + 0x19c8) <= local_2c) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_1hs",local_2c,iVar1);
            L2FName::L2FName((L2FName *)&local_64,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_2c) * 4 + 0x1a24) = local_64;
            local_2c = local_2c + 1;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_2hs",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19cc) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19cc) = 5;
          }
          for (local_14 = 0; local_14 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x19cc);
              local_14 = local_14 + 1) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_2hs",local_14,iVar1);
            L2FName::L2FName((L2FName *)&local_6c,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_14) * 4 + 0x1a38) = local_6c;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_dual",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19d0) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19d0) = 5;
          }
          local_30 = 0;
          while( true ) {
            if (*(int *)(pFVar2 + iVar11 * 0x274 + 0x19d0) <= local_30) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_dual",local_30,iVar1);
            L2FName::L2FName((L2FName *)&local_74,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_30) * 4 + 0x1a4c) = local_74;
            local_30 = local_30 + 1;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_pole",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19d4) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19d4) = 5;
          }
          local_18 = 0;
          while( true ) {
            if (*(int *)(pFVar2 + iVar11 * 0x274 + 0x19d4) <= local_18) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_pole",local_18,iVar1);
            L2FName::L2FName((L2FName *)&local_8c,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_18) * 4 + 0x1a60) = local_8c;
            local_18 = local_18 + 1;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_bow",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19d8) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19d8) = 5;
          }
          for (local_20 = 0; local_20 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x19d8);
              local_20 = local_20 + 1) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_bow",local_20,iVar1);
            L2FName::L2FName((L2FName *)&local_94,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_20) * 4 + 0x1a74) = local_94;
          }
          iVar9 = thunk_FUN_104a0c90(L"voice_sound_fist",iVar1);
          *(int *)(pFVar2 + iVar11 * 0x274 + 0x19e0) = iVar9;
          if (5 < iVar9) {
            *(undefined4 *)(pFVar2 + iVar11 * 0x274 + 0x19e0) = 5;
          }
          for (local_28 = 0; local_28 < *(int *)(pFVar2 + iVar11 * 0x274 + 0x19e0);
              local_28 = local_28 + 1) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"voice_sound_fist",local_28,iVar1);
            L2FName::L2FName((L2FName *)&local_9c,puVar8,2);
            *(undefined4 *)(local_c + (iVar11 * 0x9d + local_28) * 4 + 0x1a9c) = local_9c;
          }
          pFVar4 = local_38;
          local_a4 = iVar1 + 1;
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar4 + 0x58))();
      thunk_FUN_103254a0(local_10);
      local_7c = (uint)local_7c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104511bb:
  if (pFVar4 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar4)(1);
  }
  ExceptionList = local_84;
  return local_34;
}


// ==== 104511e2 Catch@104511e2

void Catch_104511e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0xbc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_10914c48);
}


// ==== 104511f9 Catch@104511f9

void Catch_104511f9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CharDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10451570 FUN_10451570

void FUN_10451570(int param_1)

{
  wchar_t *pwVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  int iVar3;
  FOutputDevice local_a4 [136];
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812ae0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff50;
  local_8 = 0;
  pwVar1 = L"Chargrp.dat";
  if (*(int *)GLanguageType_exref == 4) {
    pwVar1 = L"Chargrp-fc.dat";
  }
  ExceptionList = &local_10;
  appStrcpy((ushort *)local_a4,(ushort *)pwVar1);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a4,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a4,*(ushort **)GWarn_exref);
  }
  else {
    iVar3 = 0;
    while( true ) {
      local_1c = iVar3;
      if (0xe < iVar3) break;
      thunk_FUN_1044c2c0(pFVar2);
      iVar3 = iVar3 + 1;
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf(local_a4,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1045168e Catch@1045168e

void Catch_1045168e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104516a2 Catch@104516a2

void Catch_104516a2(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CharDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10451720 FUN_10451720

undefined4 FUN_10451720(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  uchar *puVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ushort local_200 [100];
  FOutputDevice local_138 [184];
  undefined4 local_80;
  undefined1 *local_40;
  void *local_3c;
  undefined1 *puStack_38;
  int local_34;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  FArchive *local_14;
  int local_10;
  FL2GameData *local_c;
  uchar *local_8;
  
  puStack_38 = &LAB_10812afb;
  local_3c = ExceptionList;
  local_40 = &stack0xfffffdf4;
  local_34 = 0;
  local_1c = 1;
  local_8 = (uchar *)0x0;
  local_18 = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_3c;
  appStrcpy((ushort *)local_138,(ushort *)L"Hairgrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_138,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_138,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10451c78;
    }
  }
  else if (param_1 == 0) {
    local_18 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar2,&local_8,&local_18,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_18);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_138,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_c,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_138,*(ushort **)GError_exref);
      }
      thunk_FUN_104460c0(pFVar3);
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10451c78;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_138,(ushort *)L"Hairgrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_138,0,*(undefined4 *)GNull_exref);
  iVar4 = 0;
  local_14 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_138,*(ushort **)GWarn_exref);
    local_1c = 0;
    pFVar2 = local_14;
  }
  else {
    thunk_FUN_104a14b0();
    local_34._0_1_ = 1;
    local_18 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar2,&local_8,&local_18,param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_138,*(ushort **)GWarn_exref);
      local_1c = 0;
      local_34 = (uint)local_34._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_14;
    }
    else {
      puVar5 = local_8 + 2;
      for (; local_20 = iVar4, iVar4 < 0x21; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_hair_begin_10a99550 + iVar4 * 0x101,
                           u_cclass_name_10a99750[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(puVar5);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_80);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_1c = 0;
      }
      else {
        iVar4 = thunk_FUN_1049f840();
        for (local_10 = 0; local_10 < iVar4; local_10 = local_10 + 1) {
          iVar9 = -1;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"class_name",local_10);
          iVar7 = appStricmp(puVar6,(ushort *)L"FFighter");
          if (iVar7 == 0) {
            iVar9 = 1;
          }
          else {
            iVar7 = appStricmp(puVar6,(ushort *)L"MFighter");
            if (iVar7 == 0) {
              iVar9 = 0;
            }
            else {
              iVar7 = appStricmp(puVar6,(ushort *)L"FMagic");
              if (iVar7 == 0) {
                iVar9 = 9;
              }
              else {
                iVar7 = appStricmp(puVar6,(ushort *)L"MMagic");
                if (iVar7 == 0) {
                  iVar9 = 8;
                }
                else {
                  iVar7 = appStricmp(puVar6,(ushort *)&DAT_10895c70);
                  if (iVar7 == 0) {
                    iVar9 = 7;
                  }
                  else {
                    iVar7 = appStricmp(puVar6,(ushort *)&DAT_10895c64);
                    if (iVar7 == 0) {
                      iVar9 = 6;
                    }
                    else {
                      iVar7 = appStricmp(puVar6,(ushort *)L"FDarkElf");
                      if (iVar7 == 0) {
                        iVar9 = 3;
                      }
                      else {
                        iVar7 = appStricmp(puVar6,(ushort *)L"MDarkElf");
                        if (iVar7 == 0) {
                          iVar9 = 2;
                        }
                        else {
                          iVar7 = appStricmp(puVar6,(ushort *)&DAT_10895c28);
                          if (iVar7 == 0) {
                            iVar9 = 0xb;
                          }
                          else {
                            iVar7 = appStricmp(puVar6,(ushort *)&DAT_10895c1c);
                            if (iVar7 == 0) {
                              iVar9 = 10;
                            }
                            else {
                              iVar7 = appStricmp(puVar6,(ushort *)L"FShaman");
                              if (iVar7 == 0) {
                                iVar9 = 0xd;
                              }
                              else {
                                iVar7 = appStricmp(puVar6,(ushort *)L"MShaman");
                                if (iVar7 == 0) {
                                  iVar9 = 0xc;
                                }
                                else {
                                  iVar7 = appStricmp(puVar6,(ushort *)&DAT_10895be4);
                                  if (iVar7 == 0) {
                                    iVar9 = 5;
                                  }
                                  else {
                                    iVar7 = appStricmp(puVar6,(ushort *)&DAT_10895bd4);
                                    if (iVar7 == 0) {
                                      iVar9 = 4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          for (iVar7 = 0; local_24 = iVar7, iVar7 < 0xf; iVar7 = iVar7 + 1) {
            appSprintf(local_200,(ushort *)&DAT_10895df4,iVar7);
            iVar1 = iVar9 * 0xf + iVar7;
            uVar8 = thunk_FUN_104a0b70(local_200,local_10);
            *(undefined4 *)(local_c + iVar1 * 4 + 0x1124) = uVar8;
            appSprintf(local_200,(ushort *)&DAT_10895de8,iVar7);
            uVar8 = thunk_FUN_104a0b70(local_200,local_10);
            *(undefined4 *)(local_c + iVar1 * 4 + 0x14a8) = uVar8;
          }
          pFVar2 = local_14;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_34 = (uint)local_34._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_14;
    }
  }
LAB_10451c78:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_3c;
  return local_1c;
}


// ==== 10451c9f Catch@10451c9f

void Catch_10451c9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 10451cb3 Catch@10451cb3

void Catch_10451cb3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HairDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10451e40 FUN_10451e40

void FUN_10451e40(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  ushort local_a0 [70];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812b10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff54;
  local_8 = 0;
  ExceptionList = &local_10;
  appStrcpy(local_a0,(ushort *)L"Hairgrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a0,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    thunk_FUN_104460c0(pFVar1);
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10451f37 Catch@10451f37

void Catch_10451f37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10451f4b Catch@10451f4b

void Catch_10451f4b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HairDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10451fc0 FUN_10451fc0

void FUN_10451fc0(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812b20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"GameTip");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    param_1 = *(int *)(in_ECX + 0x849e8);
    (**(code **)(*(int *)pFVar1 + 4))(&param_1,4);
    for (; local_20 = iVar2, iVar2 < param_1; iVar2 = iVar2 + 1) {
      local_1c = *(int *)(*(int *)(in_ECX + 0x849e4) + iVar2 * 4);
      if (local_1c == 0) {
        appFailAssert("pGameTipData",".\\L2GameData.cpp",0x1e16);
      }
      thunk_FUN_10446940(pFVar1);
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104520ff Catch@104520ff

void Catch_104520ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10452113 Catch@10452113

void Catch_10452113(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GameTipDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10452190 FUN_10452190

void FUN_10452190(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_ac [136];
  int local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812b30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff48;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  appStrcpy((ushort *)local_ac,(ushort *)L"clientdata.dat");
  local_18 = 0;
  for (local_24 = 0; local_24 < 0xf; local_24 = local_24 + 1) {
    if (0 < *(int *)(in_ECX + (local_24 + 0x7fad) * 0x10)) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_ac,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (; local_1c = iVar2, iVar2 < 0xf; iVar2 = iVar2 + 1) {
      if (0 < *(int *)(in_ECX + (iVar2 + 0x7fad) * 0x10)) {
        thunk_FUN_104467e0(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104522d4 Catch@104522d4

void Catch_104522d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 104522e8 Catch@104522e8

void Catch_104522e8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ClientDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10452370 FUN_10452370

undefined4 FUN_10452370(uchar *param_1)

{
  uchar *puVar1;
  FL2GameData *pFVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  FOutputDevice *this;
  FOutputDevice local_140 [184];
  undefined4 local_88;
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  int local_3c;
  int local_28;
  int local_20;
  int local_1c;
  FArchive *local_18;
  undefined4 local_14;
  FL2GameData *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10812b4b;
  local_44 = ExceptionList;
  local_48 = &stack0xfffffeb4;
  local_3c = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_18 = (FArchive *)0x0;
  ExceptionList = &local_44;
  appStrcpy((ushort *)local_140,(ushort *)L"clientdata.dat");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_18 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10452799;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    FL2GameData::GetTextInformation(local_10,pFVar3,&local_8,&local_c,0);
    pFVar4 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar4 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = FL2GameData::CheckSafePackage(local_10,pFVar4);
      if (iVar5 == 0) {
        FOutputDevice::Logf(local_140,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar4 + 4))(&param_1,4);
      for (iVar5 = 0; local_20 = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
        thunk_FUN_104467e0(pFVar4);
      }
      (**(code **)(*(int *)pFVar4 + 0x58))();
    }
    (**(code **)(*(int *)pFVar3 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar4 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar4)(1);
    }
    goto LAB_10452799;
  }
  if (pFVar3 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar3 + 0x58))();
  }
  appStrcpy((ushort *)local_140,(ushort *)L"serverdata.txt");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_18 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    FL2GameData::GetTextInformation(local_10,pFVar3,&local_8,&local_c,(int)puVar1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar5 = 0; local_28 = iVar5, iVar5 < 4; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_server_begin_10ad1f20 + iVar5 * 0x101,(&DAT_10ad2120)[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar5 = 0; local_1c = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
          local_3c = CONCAT31(local_3c._1_3_,2);
          uVar6 = thunk_FUN_104a0b70(&DAT_1089600c,iVar5);
          pFVar2 = local_10;
          *(undefined4 *)(local_10 + (iVar5 + 0x7fad) * 0x10) = uVar6;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"name",iVar5);
          FString::operator=((FString *)(pFVar2 + iVar5 * 0x10 + 0x7fad4),puVar7);
          local_3c._0_1_ = 1;
          local_3c._1_3_ = 0;
        }
        FOutputDevice::Logf(local_140,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar3 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10452799:
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_44;
  return local_14;
}


// ==== 1045268b Catch@1045268b

void Catch_1045268b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 1045269f Catch@1045269f

void Catch_1045269f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x1c) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104527c0 Catch@104527c0

void Catch_104527c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 104527d4 Catch@104527d4

void Catch_104527d4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ClientDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10452920 FUN_10452920

void FUN_10452920(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_ac [136];
  int local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812b60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff48;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  appStrcpy((ushort *)local_ac,(ushort *)L"serverdata.dat");
  local_18 = 0;
  for (local_24 = 0; local_24 < 0xf; local_24 = local_24 + 1) {
    if (0 < *(int *)(in_ECX + (local_24 + 0x7f9e) * 0x10)) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_ac,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (; local_1c = iVar2, iVar2 < 0xf; iVar2 = iVar2 + 1) {
      if (0 < *(int *)(in_ECX + (iVar2 + 0x7f9e) * 0x10)) {
        thunk_FUN_10446890(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10452a64 Catch@10452a64

void Catch_10452a64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10452a78 Catch@10452a78

void Catch_10452a78(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ServerDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10452b00 FUN_10452b00

undefined4 FUN_10452b00(uchar *param_1)

{
  uchar *puVar1;
  FL2GameData *pFVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  FOutputDevice *this;
  FOutputDevice local_140 [184];
  undefined4 local_88;
  undefined1 *local_48;
  void *pvStack_44;
  undefined1 *puStack_40;
  int local_3c;
  int local_28;
  int local_20;
  int local_1c;
  FArchive *local_18;
  undefined4 local_14;
  FL2GameData *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10812b7b;
  pvStack_44 = ExceptionList;
  local_48 = &stack0xfffffeb4;
  local_3c = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_18 = (FArchive *)0x0;
  ExceptionList = &pvStack_44;
  appStrcpy((ushort *)local_140,(ushort *)L"serverdata.dat");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_18 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10452f29;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    FL2GameData::GetTextInformation(local_10,pFVar3,&local_8,&local_c,0);
    pFVar4 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar4 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = FL2GameData::CheckSafePackage(local_10,pFVar4);
      if (iVar5 == 0) {
        FOutputDevice::Logf(local_140,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar4 + 4))(&param_1,4);
      for (iVar5 = 0; local_20 = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
        thunk_FUN_10446890(pFVar4);
      }
      (**(code **)(*(int *)pFVar4 + 0x58))();
    }
    (**(code **)(*(int *)pFVar3 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar4 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar4)(1);
    }
    goto LAB_10452f29;
  }
  if (pFVar3 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar3 + 0x58))();
  }
  appStrcpy((ushort *)local_140,(ushort *)L"serverdata.txt");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_18 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    FL2GameData::GetTextInformation(local_10,pFVar3,&local_8,&local_c,(int)puVar1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar5 = 0; local_28 = iVar5, iVar5 < 4; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_eserver_begin_10ad2726 + iVar5 * 0x101 + 1,
                           (&DAT_10ad2928)[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar5 = 0; local_1c = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
          local_3c = CONCAT31(local_3c._1_3_,2);
          uVar6 = thunk_FUN_104a0b70(&DAT_1089600c,iVar5);
          pFVar2 = local_10;
          *(undefined4 *)(local_10 + (iVar5 + 0x7f9e) * 0x10) = uVar6;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"name",iVar5);
          FString::operator=((FString *)(pFVar2 + iVar5 * 0x10 + 0x7f9e4),puVar7);
          local_3c._0_1_ = 1;
          local_3c._1_3_ = 0;
        }
        FOutputDevice::Logf(local_140,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar3 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10452f29:
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = pvStack_44;
  return local_14;
}


// ==== 10452e1b Catch@10452e1b

void Catch_10452e1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10452e2f Catch@10452e2f

void Catch_10452e2f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x1c) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10452f50 Catch@10452f50

void Catch_10452f50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10452f64 Catch@10452f64

void Catch_10452f64(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ServerDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104530b0 FUN_104530b0

void FUN_104530b0(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_ac [136];
  int local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812b90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff48;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_ac,(ushort *)L"RaidData");
  local_18 = 0;
  for (local_24 = 0; local_24 < 500; local_24 = local_24 + 1) {
    if (0 < *(int *)(in_ECX + (local_24 * 5 + 0xff78) * 8)) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_ac,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (; local_1c = iVar2, iVar2 < 500; iVar2 = iVar2 + 1) {
      if (0 < *(int *)(in_ECX + (iVar2 * 5 + 0xff78) * 8)) {
        thunk_FUN_1044ea40(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104531f2 Catch@104531f2

void Catch_104531f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10453206 Catch@10453206

void Catch_10453206(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::RaidDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10453280 FUN_10453280

undefined4 FUN_10453280(ushort *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  FL2GameData *in_ECX;
  FOutputDevice local_158 [184];
  undefined4 local_a0;
  undefined1 *local_60;
  void *pvStack_5c;
  undefined1 *puStack_58;
  int local_54;
  float local_44;
  FL2GameData *local_40;
  int local_3c;
  float local_38;
  ushort *local_34;
  ushort *local_30;
  int local_2c;
  int local_20;
  int local_1c;
  ushort *local_18;
  undefined4 local_14;
  FArchive *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_58 = &LAB_10812bab;
  pvStack_5c = ExceptionList;
  local_60 = &stack0xfffffe9c;
  local_54 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &pvStack_5c;
  local_40 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_158,(ushort *)L"RaidData");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_158,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (ushort *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_158,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104537a9;
    }
  }
  else if (param_1 == (ushort *)0x0) {
    param_1 = (ushort *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_158,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_158,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
        thunk_FUN_1044ea40(pFVar2);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_104537a9;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_158,(ushort *)L"RaidData");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_158,0,*(undefined4 *)GNull_exref);
  iVar3 = 0;
  local_10 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_158,*(ushort **)GWarn_exref);
    local_14 = 0;
    pFVar1 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_54._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_158,*(ushort **)GWarn_exref);
      local_14 = 0;
      local_54 = (uint)local_54._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_10;
    }
    else {
      param_1 = (ushort *)(local_8 + 2);
      for (; local_3c = iVar3, iVar3 < 8; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_raid_begin_10ac2608 + iVar3 * 0x101,(&DAT_10ac2808)[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_a0);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        local_2c = thunk_FUN_1049f840();
        local_20 = 0;
        while (iVar3 = local_20, local_20 < local_2c) {
          local_54 = CONCAT31(local_54._1_3_,2);
          uVar4 = thunk_FUN_104a0b70(&DAT_1089600c,local_20);
          *(undefined4 *)(in_ECX + (iVar3 * 5 + 0xff78) * 8) = uVar4;
          uVar4 = thunk_FUN_104a0b70(L"raid_id",iVar3);
          *(undefined4 *)(in_ECX + iVar3 * 0x28 + 0x7fbc4) = uVar4;
          uVar4 = thunk_FUN_104a0b70(L"raid_lvl",iVar3);
          *(undefined4 *)(in_ECX + iVar3 * 0x28 + 0x7fbc8) = uVar4;
          uVar4 = thunk_FUN_104a0b70(L"search_zoneid",iVar3);
          *(undefined4 *)(in_ECX + iVar3 * 0x28 + 0x7fbcc) = uVar4;
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar3);
          FString::operator=((FString *)(in_ECX + iVar3 * 0x28 + 0x7fbdc),puVar5);
          puVar5 = (ushort *)thunk_FUN_104a0cf0(&DAT_1089617c,0,iVar3);
          param_1 = (ushort *)thunk_FUN_104a0cf0(&DAT_1089617c,1,iVar3);
          local_18 = (ushort *)thunk_FUN_104a0cf0(&DAT_1089617c,2,iVar3);
          if (((puVar5 != (ushort *)0x0) && (param_1 != (ushort *)0x0)) &&
             (local_18 != (ushort *)0x0)) {
            local_44 = appAtof(puVar5);
            param_1 = (ushort *)appAtof(param_1);
            local_30 = (ushort *)appAtof(local_18);
            local_38 = local_44;
            local_34 = param_1;
            *(float *)(in_ECX + iVar3 * 0x28 + 0x7fbd0) = local_44;
            *(ushort **)(in_ECX + iVar3 * 0x28 + 0x7fbd4) = param_1;
            *(ushort **)(in_ECX + iVar3 * 0x28 + 0x7fbd8) = local_30;
            local_18 = local_30;
          }
          local_54._0_1_ = 1;
          local_54._1_3_ = 0;
          pFVar1 = local_10;
          in_ECX = local_40;
          local_20 = iVar3 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_54 = (uint)local_54._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_10;
    }
  }
LAB_104537a9:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = pvStack_5c;
  return local_14;
}


// ==== 1045368e Catch@1045368e

void Catch_1045368e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x2c) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x2c,&DAT_10914c48);
}


// ==== 104536a2 Catch@104536a2

void Catch_104536a2(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x30) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104537d1 Catch@104537d1

void Catch_104537d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 104537e5 Catch@104537e5

void Catch_104537e5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::RaidDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10453970 FUN_10453970

undefined4 FUN_10453970(uchar *param_1)

{
  short sVar1;
  wchar_t wVar2;
  longlong lVar3;
  uchar *puVar4;
  FArchive *pFVar5;
  FArchive *pFVar6;
  int iVar7;
  short *psVar8;
  ushort *puVar9;
  undefined4 uVar10;
  int iVar11;
  FL2GameData *in_ECX;
  uint uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  ulong uVar17;
  FOutputDevice local_154 [184];
  undefined4 local_9c;
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  int local_50;
  int local_44;
  ulong local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  ushort *local_28;
  short *local_24;
  int local_20;
  wchar_t *local_1c;
  undefined4 local_18;
  FArchive *local_14;
  int local_10;
  uchar *local_c;
  FL2GameData *local_8;
  
  puStack_54 = &LAB_10812bcb;
  local_58 = ExceptionList;
  local_5c = &stack0xfffffea0;
  local_50 = 0;
  local_18 = 1;
  local_c = (uchar *)0x0;
  local_10 = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_58;
  local_8 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_154,(ushort *)L"SystemMsg");
  pFVar5 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_154,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar5;
  if (pFVar5 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_154,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10453b0c;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_10 = (**(code **)(*(int *)pFVar5 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar5,&local_c,&local_10,0);
    pFVar6 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_10);
    if (pFVar6 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_154,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar7 = FL2GameData::CheckSafePackage(in_ECX,pFVar6);
      if (iVar7 == 0) {
        FOutputDevice::Logf(local_154,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar6 + 4))(&param_1,4);
      for (local_20 = 0; local_20 < (int)param_1; local_20 = local_20 + 1) {
        local_8 = (FL2GameData *)0x0;
        (**(code **)(*(int *)pFVar6 + 4))(&local_8,4);
        thunk_FUN_10446a20(pFVar6);
      }
      (**(code **)(*(int *)pFVar6 + 0x58))();
    }
    (**(code **)(*(int *)pFVar5 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar6 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar6)(1);
    }
    goto LAB_10453b0c;
  }
  if (pFVar5 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar5 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_154,(ushort *)L"SystemMsg");
  pFVar5 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_154,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar5;
  if (pFVar5 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_154,*(ushort **)GWarn_exref);
    local_18 = 0;
    pFVar5 = local_14;
  }
  else {
    thunk_FUN_104a14b0();
    local_50._0_1_ = 1;
    local_10 = (**(code **)(*(int *)pFVar5 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar5,&local_c,&local_10,(int)param_1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(local_154,*(ushort **)GWarn_exref);
      local_18 = 0;
      local_50 = (uint)local_50._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar5 = local_14;
    }
    else {
      param_1 = local_c + 2;
      for (iVar7 = 0; local_3c = iVar7, iVar7 < 0xe; iVar7 = iVar7 + 1) {
        thunk_FUN_104a1120(u_emsg_begin_10ad4146 + iVar7 * 0x101 + 1,(&DAT_10ad4348)[iVar7 * 0x101])
        ;
      }
      thunk_FUN_1049f750(param_1);
      iVar7 = thunk_FUN_104a1840();
      if (iVar7 == 0) {
        thunk_FUN_10445eb0(local_9c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_18 = 0;
      }
      else {
        for (local_2c = 0; local_2c < 3000; local_2c = local_2c + 1) {
          *(undefined4 *)(in_ECX + local_2c * 0x5c + 0x240e8) = 0;
        }
        local_34 = thunk_FUN_1049f840();
        local_30 = 0;
        while (iVar7 = local_30, local_30 < local_34) {
          param_1 = (uchar *)thunk_FUN_104a0b70(&DAT_1089600c,local_30);
          local_28 = (ushort *)thunk_FUN_104a0c30(L"group",iVar7);
          uVar17 = 0xffb09b79;
          local_40 = 0xffb09b79;
          local_24 = (short *)thunk_FUN_104a0c30(L"color",iVar7);
          if ((local_24 != (short *)0x0) && (*local_24 != 0)) {
            psVar8 = local_24;
            do {
              sVar1 = *psVar8;
              psVar8 = psVar8 + 1;
            } while (sVar1 != 0);
            lVar3 = (ulonglong)(((int)psVar8 - (int)(local_24 + 1) >> 1) + 5) * 2;
            local_1c = (wchar_t *)
                       thunk_FUN_103ff730(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) |
                                          (uint)lVar3);
            pwVar14 = L"0xff";
            pwVar15 = local_1c;
            do {
              wVar2 = *pwVar14;
              *pwVar15 = wVar2;
              pwVar14 = pwVar14 + 1;
              pwVar15 = pwVar15 + 1;
              psVar8 = local_24;
            } while (wVar2 != L'\0');
            do {
              sVar1 = *psVar8;
              psVar8 = psVar8 + 1;
            } while (sVar1 != 0);
            uVar12 = (int)psVar8 - (int)local_24;
            pwVar15 = local_1c + -1;
            do {
              pwVar14 = pwVar15 + 1;
              pwVar15 = pwVar15 + 1;
            } while (*pwVar14 != L'\0');
            psVar8 = local_24;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pwVar15 = *(undefined4 *)psVar8;
              psVar8 = psVar8 + 2;
              pwVar15 = pwVar15 + 2;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(char *)pwVar15 = (char)*psVar8;
              psVar8 = (short *)((int)psVar8 + 1);
              pwVar15 = (wchar_t *)((int)pwVar15 + 1);
            }
            psVar8 = local_24;
            do {
              sVar1 = *psVar8;
              psVar8 = psVar8 + 1;
            } while (sVar1 != 0);
            local_1c[((int)psVar8 - (int)(local_24 + 1) >> 1) + 4] = L'\0';
            uVar17 = _wcstoul(local_1c,(wchar_t **)0x0,0x10);
            local_40 = uVar17;
            thunk_FUN_103254c0(local_1c);
            in_ECX = local_8;
          }
          puVar4 = param_1;
          *(ulong *)(in_ECX + (int)param_1 * 0x5c + 0x240fc) = uVar17;
          puVar9 = (ushort *)thunk_FUN_104a0c30(L"sound",iVar7);
          FString::operator=((FString *)(in_ECX + (int)puVar4 * 0x5c + 0x24100),puVar9);
          puVar9 = (ushort *)thunk_FUN_104a0c30(L"voice",iVar7);
          FString::operator=((FString *)(in_ECX + (int)puVar4 * 0x5c + 0x2410c),puVar9);
          local_1c = (wchar_t *)thunk_FUN_104a0c30(&DAT_1089628c,iVar7);
          uVar10 = thunk_FUN_104a0b70(&DAT_10896280,iVar7);
          *(undefined4 *)(in_ECX + (int)puVar4 * 0x5c + 0x24118) = uVar10;
          uVar10 = thunk_FUN_104a0b70(L"font",iVar7);
          *(undefined4 *)(in_ECX + (int)puVar4 * 0x5c + 0x2411c) = uVar10;
          uVar10 = thunk_FUN_104a0b70(L"lftime",iVar7);
          *(undefined4 *)(in_ECX + (int)puVar4 * 0x5c + 0x24120) = uVar10;
          uVar10 = thunk_FUN_104a0b70(L"anim",iVar7);
          *(undefined4 *)(in_ECX + (int)puVar4 * 0x5c + 0x24124) = uVar10;
          uVar10 = thunk_FUN_104a0b70(&DAT_1089624c,iVar7);
          *(undefined4 *)(local_8 + (int)(param_1 + 0x646) * 0x5c) = uVar10;
          puVar9 = (ushort *)thunk_FUN_104a0c30(L"scrnmsg",iVar7);
          FString::operator=((FString *)(in_ECX + (int)puVar4 * 0x5c + 0x2412c),puVar9);
          FString::operator=((FString *)(in_ECX + (int)puVar4 * 0x5c + 0x24138),local_28);
          *(undefined4 *)(in_ECX + (int)puVar4 * 0x5c + 0x240e8) = 1;
          for (iVar16 = 0; local_44 = iVar16, iVar16 < 8; iVar16 = iVar16 + 1) {
            iVar11 = appStricmp(local_28,(ushort *)(u_none_10a89f58 + iVar16 * 0x102));
            if (iVar11 == 0) {
              *(undefined4 *)(local_8 + (int)param_1 * 0x5c + 0x240f8) =
                   (&DAT_10a8a158)[iVar16 * 0x81];
              break;
            }
          }
          if (local_1c != (wchar_t *)0x0) {
            FString::operator=((FString *)(local_8 + (int)param_1 * 0x5c + 0x240ec),
                               (ushort *)local_1c);
          }
          in_ECX = local_8;
          local_30 = iVar7 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)local_14 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_50 = (uint)local_50._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar5 = local_14;
    }
  }
LAB_10453b0c:
  if (pFVar5 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar5)(1);
  }
  ExceptionList = local_58;
  return local_18;
}


// ==== 10454014 Catch@10454014

void Catch_10454014(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10454028 Catch@10454028

void Catch_10454028(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SystemMsgFormatLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10454200 FUN_10454200

void FUN_10454200(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812be0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"SystemMsg");
  local_18 = 0;
  for (local_20 = 0; local_20 < 3000; local_20 = local_20 + 1) {
    if (*(int *)(in_ECX + local_20 * 0x5c + 0x240e8) != 0) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (param_1 = 0; param_1 < 3000; param_1 = param_1 + 1) {
      if (*(int *)(in_ECX + param_1 * 0x5c + 0x240e8) != 0) {
        (**(code **)(*(int *)pFVar1 + 4))(&param_1,4);
        thunk_FUN_10446a20(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1045436a Catch@1045436a

void Catch_1045436a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1045437e Catch@1045437e

void Catch_1045437e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SystemMsgFormatSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10454410 FUN_10454410

undefined4 FUN_10454410(uchar *param_1)

{
  FL2GameData *pFVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  ushort *puVar5;
  FL2GameData *in_ECX;
  int iVar6;
  FOutputDevice local_140 [184];
  undefined4 local_88;
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  int local_3c;
  ushort *local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  FL2GameData *local_18;
  undefined4 local_14;
  int local_10;
  FArchive *local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10812bfb;
  local_44 = ExceptionList;
  local_48 = &stack0xfffffeb4;
  iVar6 = 0;
  local_3c = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_c = (FArchive *)0x0;
  ExceptionList = &local_44;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_140,(ushort *)L"ServerName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104545b2;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_10,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_10);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar6 = FL2GameData::CheckSafePackage(in_ECX,pFVar3);
      if (iVar6 == 0) {
        FOutputDevice::Logf(local_140,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
        local_18 = (FL2GameData *)0x0;
        (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
        thunk_FUN_10446b60(pFVar3);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_104545b2;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_140,(ushort *)L"ServerName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_140,*(ushort **)GWarn_exref);
    local_14 = 0;
    pFVar2 = local_c;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 1;
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_10,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_140,*(ushort **)GWarn_exref);
      local_14 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_c;
    }
    else {
      param_1 = local_8 + 2;
      for (; local_20 = iVar6, iVar6 < 5; iVar6 = iVar6 + 1) {
        thunk_FUN_104a1120(u_eserver_name_begin_10ad2f2e + iVar6 * 0x101 + 1,
                           (&DAT_10ad3130)[iVar6 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar6 = thunk_FUN_104a1840();
      if (iVar6 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        iVar6 = 0;
        for (local_28 = 0; local_28 < 200; local_28 = local_28 + 1) {
          *(undefined4 *)(in_ECX + local_28 * 0x1c + 0x67708) = 0;
        }
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (; local_2c = iVar6, iVar6 < (int)param_1; iVar6 = iVar6 + 1) {
          iVar4 = thunk_FUN_104a0b70(&DAT_1089600c,iVar6);
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"name",iVar6);
          local_30 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar6);
          pFVar1 = local_18;
          *(undefined4 *)(local_18 + iVar4 * 0x1c + 0x67708) = 1;
          if (puVar5 != (ushort *)0x0) {
            FString::operator=((FString *)(local_18 + iVar4 * 0x1c + 0x6770c),puVar5);
          }
          if (local_30 != (ushort *)0x0) {
            FString::operator=((FString *)(pFVar1 + iVar4 * 0x1c + 0x67718),local_30);
          }
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)local_c + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_c;
    }
  }
LAB_104545b2:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_44;
  return local_14;
}


// ==== 104548a5 Catch@104548a5

void Catch_104548a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 104548b9 Catch@104548b9

void Catch_104548b9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ServerNameLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10454a10 FUN_10454a10

void FUN_10454a10(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812c10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"ServerName");
  local_18 = 0;
  for (local_20 = 0; local_20 < 200; local_20 = local_20 + 1) {
    if (*(int *)(in_ECX + local_20 * 0x1c + 0x67708) != 0) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (param_1 = 0; param_1 < 200; param_1 = param_1 + 1) {
      if (*(int *)(in_ECX + param_1 * 0x5c + 0x240e8) != 0) {
        (**(code **)(*(int *)pFVar1 + 4))(&param_1,4);
        thunk_FUN_10446b60(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10454b84 Catch@10454b84

void Catch_10454b84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10454b98 Catch@10454b98

void Catch_10454b98(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ServerNameSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10454c20 FUN_10454c20

undefined4 FUN_10454c20(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_13c [184];
  undefined4 local_84;
  undefined1 *local_44;
  void *local_40;
  undefined1 *puStack_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  FArchive *local_c;
  uchar *local_8;
  
  puStack_3c = &LAB_10812c2b;
  local_40 = ExceptionList;
  local_44 = &stack0xfffffeb8;
  local_38 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_c = (FArchive *)0x0;
  ExceptionList = &local_40;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_13c,(ushort *)L"IDCName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10454db9;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_13c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_13c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_18 = 0; local_18 < (int)param_1; local_18 = local_18 + 1) {
        local_1c = 0;
        (**(code **)(*(int *)pFVar2 + 4))(&local_1c,4);
        thunk_FUN_10446b60(pFVar2);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10454db9;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_13c,(ushort *)L"IDCName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
    pFVar1 = local_c;
  }
  else {
    thunk_FUN_104a14b0();
    local_38._0_1_ = 1;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_10,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_c;
    }
    else {
      param_1 = local_8 + 2;
      for (iVar3 = 0; local_20 = iVar3, iVar3 < 4; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_idc_name_begin_10ad3940 + iVar3 * 0x101,(&DAT_10ad3b40)[iVar3 * 0x101])
        ;
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_84);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        for (local_2c = 0; local_2c < 0xff; local_2c = local_2c + 1) {
          *(undefined4 *)(in_ECX + local_2c * 0x1c + 0x68ce8) = 0;
        }
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar3 = 0; local_28 = iVar3, iVar3 < (int)param_1; iVar3 = iVar3 + 1) {
          iVar4 = thunk_FUN_104a0b70(&DAT_1089600c,iVar3);
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"name",iVar3);
          *(undefined4 *)(in_ECX + iVar4 * 0x1c + 0x68ce8) = 1;
          if (puVar5 != (ushort *)0x0) {
            FString::operator=((FString *)(in_ECX + iVar4 * 0x1c + 0x68cec),puVar5);
          }
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)local_c + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_c;
    }
  }
LAB_10454db9:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_40;
  return local_14;
}


// ==== 10455073 Catch@10455073

void Catch_10455073(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10455087 Catch@10455087

void Catch_10455087(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::IDCNameLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104551d0 FUN_104551d0

void FUN_104551d0(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812c40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_a8,(ushort *)L"IDCName");
  iVar1 = (**(code **)(**(int **)GFileManager_exref + 8))(local_a8,0,*(undefined4 *)GNull_exref);
  if (iVar1 != 0) {
    FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"IDCName");
    local_18 = 0;
    for (local_20 = 0; local_20 < 0xff; local_20 = local_20 + 1) {
      if (*(int *)(in_ECX + local_20 * 0x1c + 0x68ce8) != 0) {
        local_18 = local_18 + 1;
      }
    }
    pFVar2 = (FArchive *)
             (**(code **)(**(int **)GFileManager_exref + 0xc))
                       (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                        *(undefined4 *)GNull_exref);
    if (pFVar2 == (FArchive *)0x0) {
      FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    }
    else {
      (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
      for (param_1 = 0; param_1 < 0xff; param_1 = param_1 + 1) {
        if (*(int *)(in_ECX + param_1 * 0x5c + 0x240e8) != 0) {
          (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
          thunk_FUN_10446b60(pFVar2);
        }
      }
      FL2GameData::MakeSafePackage(in_ECX,pFVar2);
      (**(code **)(*(int *)pFVar2 + 0x58))();
      FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1045537f Catch@1045537f

void Catch_1045537f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10455393 Catch@10455393

void Catch_10455393(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::IDCNameSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10455430 FUN_10455430

undefined4 FUN_10455430(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  ushort *puVar3;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  int iVar4;
  int iVar5;
  FOutputDevice local_13c [184];
  undefined4 local_84;
  undefined1 *local_44;
  void *local_40;
  undefined1 *puStack_3c;
  int local_38;
  int local_2c;
  int local_28;
  undefined4 local_24 [2];
  int local_1c;
  FL2GameData *local_18;
  FArchive *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_3c = &LAB_10812c5b;
  local_40 = ExceptionList;
  local_44 = &stack0xfffffeb8;
  iVar4 = 0;
  local_38 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_40;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_13c,(ushort *)L"SysString");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104555c7;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_13c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_13c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (iVar4 = 0; local_1c = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
        local_24[0] = 0;
        (**(code **)(*(int *)pFVar2 + 4))(local_24,4);
        operator<<(pFVar2,(FString *)(local_18 + iVar4 * 0xc + 0x6a8dc));
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_104555c7;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_13c,(ushort *)L"SysString");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_38._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar5 = 0; local_2c = iVar5, iVar5 < 4; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_string_begin_10ad5d68 + iVar5 * 0x101,
                           u_cstringID_10ad5f68[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(local_84);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (; local_28 = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
          iVar5 = thunk_FUN_104a0b70(L"stringID",iVar4);
          puVar3 = (ushort *)thunk_FUN_104a0c30(L"string",iVar4);
          if (puVar3 != (ushort *)0x0) {
            FString::operator=((FString *)(local_18 + iVar5 * 0xc + 0x6a8dc),puVar3);
          }
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104555c7:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_40;
  return local_10;
}


// ==== 10455840 Catch@10455840

void Catch_10455840(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10455854 Catch@10455854

void Catch_10455854(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SysStringLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10455990 FUN_10455990

void FUN_10455990(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812c70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"SysString");
  local_18 = 0;
  for (local_20 = 0; local_20 < 3000; local_20 = local_20 + 1) {
    if (*(int *)(in_ECX + local_20 * 0x5c + 0x240e8) != 0) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (param_1 = 0; param_1 < 3000; param_1 = param_1 + 1) {
      if (*(int *)(in_ECX + param_1 * 0x5c + 0x240e8) != 0) {
        (**(code **)(*(int *)pFVar1 + 4))(&param_1,4);
        operator<<(pFVar1,(FString *)(in_ECX + param_1 * 0xc + 0x6a8dc));
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10455afe Catch@10455afe

void Catch_10455afe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10455b12 Catch@10455b12

void Catch_10455b12(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SysStringSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10455ba0 FUN_10455ba0

undefined4 FUN_10455ba0(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  uint uVar3;
  ushort *puVar4;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  int iVar5;
  int iVar6;
  FOutputDevice local_13c [184];
  undefined4 local_84;
  undefined1 *local_44;
  void *local_40;
  undefined1 *puStack_3c;
  int local_38;
  int local_2c;
  int local_28;
  undefined4 local_24 [2];
  int local_1c;
  FL2GameData *local_18;
  FArchive *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_3c = &LAB_10812c8b;
  local_40 = ExceptionList;
  local_44 = &stack0xfffffeb8;
  iVar5 = 0;
  local_38 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_40;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_13c,(ushort *)L"ClassInfo");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10455d37;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_13c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar5 == 0) {
        FOutputDevice::Logf(local_13c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (iVar5 = 0; local_1c = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
        local_24[0] = 0;
        (**(code **)(*(int *)pFVar2 + 4))(local_24,4);
        operator<<(pFVar2,(FString *)(local_18 + iVar5 * 0xc + 0x7c21c));
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10455d37;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_13c,(ushort *)L"ClassInfo");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_38._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar6 = 0; local_2c = iVar6, iVar6 < 4; iVar6 = iVar6 + 1) {
        thunk_FUN_104a1120(u_etext_begin_10ad656e + iVar6 * 0x101 + 1,(&DAT_10ad6770)[iVar6 * 0x101]
                          );
      }
      thunk_FUN_1049f750(param_1);
      iVar6 = thunk_FUN_104a1840();
      if (iVar6 == 0) {
        thunk_FUN_10445eb0(local_84);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (; local_28 = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
          uVar3 = thunk_FUN_104a0b70(&DAT_1089600c,iVar5);
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"text",iVar5);
          if (puVar4 != (ushort *)0x0) {
            FString::operator=((FString *)(local_18 + (uVar3 & 0xffff) * 0xc + 0x7c21c),puVar4);
          }
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10455d37:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_40;
  return local_10;
}


// ==== 10455fb4 Catch@10455fb4

void Catch_10455fb4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10455fc8 Catch@10455fc8

void Catch_10455fc8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ClassInfoLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10456100 FUN_10456100

void FUN_10456100(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  int iVar3;
  bool bVar4;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812ca0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"ClassInfo");
  bVar4 = param_1 != 0;
  local_18 = 0;
  for (iVar3 = 0; local_20 = iVar3, iVar3 < 100; iVar3 = iVar3 + 1) {
    iVar1 = FString::operator_int((FString *)(in_ECX + iVar3 * 0xc + 0x7c21c));
    if (iVar1 != 0) {
      local_18 = local_18 + 1;
    }
  }
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)bVar4 & 0xfffffffe) + 2 | 4,*(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
    for (param_1 = 0; param_1 < 100; param_1 = param_1 + 1) {
      iVar3 = FString::operator_int((FString *)(in_ECX + param_1 * 0xc + 0x7c21c));
      if (iVar3 != 0) {
        (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
        operator<<(pFVar2,(FString *)(in_ECX + param_1 * 0xc + 0x7c21c));
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10456272 Catch@10456272

void Catch_10456272(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10456286 Catch@10456286

void Catch_10456286(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ClassInfoSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10456310 FUN_10456310

undefined4 FUN_10456310(uchar *param_1)

{
  FL2GameData *pFVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_138 [184];
  undefined4 local_80;
  undefined1 *local_40;
  void *local_3c;
  undefined1 *puStack_38;
  int local_34;
  int local_28;
  int local_24;
  FArchive *local_1c;
  FL2GameData *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uchar *local_8;
  
  puStack_38 = &LAB_10812cbb;
  local_3c = ExceptionList;
  local_40 = &stack0xfffffebc;
  local_34 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_1c = (FArchive *)0x0;
  ExceptionList = &local_3c;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_138,(ushort *)L"CastleName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_138,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104564ac;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_138,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(in_ECX,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_138,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_10 = 0; local_10 < (int)param_1; local_10 = local_10 + 1) {
        local_18 = (FL2GameData *)0x0;
        (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
        thunk_FUN_10446e90(pFVar3);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_104564ac;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_138,(ushort *)L"CastleName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_138,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_34._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_34 = (uint)local_34._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar4 = 0; local_28 = iVar4, iVar4 < 6; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_castle_name_begin_10ae3250 + iVar4 * 0x101,
                           (&DAT_10ae3450)[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_80);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar4 = 0; pFVar1 = local_18, local_24 = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1
            ) {
          *(undefined4 *)(local_18 + iVar4 * 0x2c + 0x7cbb8) = 1;
          uVar5 = thunk_FUN_104a0b70(&DAT_1089600c,iVar4);
          *(undefined4 *)(pFVar1 + iVar4 * 0x2c + 0x7cbbc) = uVar5;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"name",iVar4);
          FString::operator=((FString *)(pFVar1 + iVar4 * 0x2c + 0x7cbc0),puVar6);
          puVar6 = (ushort *)thunk_FUN_104a0c30(&DAT_10896634,iVar4);
          FString::operator=((FString *)(pFVar1 + iVar4 * 0x2c + 0x7cbcc),puVar6);
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar4);
          FString::operator=((FString *)(pFVar1 + iVar4 * 0x2c + 0x7cbd8),puVar6);
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_34 = (uint)local_34._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104564ac:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_3c;
  return local_14;
}


// ==== 1045677b Catch@1045677b

void Catch_1045677b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 1045678f Catch@1045678f

void Catch_1045678f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CastleNameDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104568e0 FUN_104568e0

void FUN_104568e0(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812cd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"CastleName");
  local_18 = 0;
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    if (*(int *)(in_ECX + local_20 * 0x2c + 0x7cbb8) != 0) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (param_1 = 0; param_1 < 100; param_1 = param_1 + 1) {
      if (*(int *)(in_ECX + param_1 * 0x2c + 0x7cbb8) != 0) {
        (**(code **)(*(int *)pFVar1 + 4))(&param_1,4);
        thunk_FUN_10446e90(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10456a45 Catch@10456a45

void Catch_10456a45(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10456a59 Catch@10456a59

void Catch_10456a59(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CastleNameDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10456ae0 FUN_10456ae0

undefined4 FUN_10456ae0(uchar *param_1)

{
  FL2GameData *pFVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_138 [184];
  undefined4 local_80;
  undefined1 *local_40;
  void *local_3c;
  undefined1 *puStack_38;
  int local_34;
  int local_28;
  int local_24;
  FArchive *local_1c;
  int local_18;
  FL2GameData *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_38 = &LAB_10812ceb;
  local_3c = ExceptionList;
  local_40 = &stack0xfffffebc;
  local_34 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_1c = (FArchive *)0x0;
  ExceptionList = &local_3c;
  local_14 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_138,(ushort *)L"SymbolName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_138,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10456c7c;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_138,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(in_ECX,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_138,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_18 = 0; local_18 < (int)param_1; local_18 = local_18 + 1) {
        local_14 = (FL2GameData *)0x0;
        (**(code **)(*(int *)pFVar3 + 4))(&local_14,4);
        thunk_FUN_10446f60(pFVar3);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10456c7c;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_138,(ushort *)L"SymbolName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_138,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_34._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_34 = (uint)local_34._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar4 = 0; local_28 = iVar4, iVar4 < 5; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_symbol_begin_10ae2840 + iVar4 * 0x101,(&DAT_10ae2a40)[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_80);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar4 = 0; local_24 = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
          iVar5 = thunk_FUN_104a0b70(&DAT_1089600c,iVar4);
          pFVar1 = local_14;
          if (iVar5 < 200) {
            *(undefined4 *)(local_14 + iVar5 * 0x20 + 0x7dd08) = 1;
            puVar6 = (ushort *)thunk_FUN_104a0c30(L"filename",iVar4);
            FString::operator=((FString *)(pFVar1 + iVar5 * 0x20 + 0x7dcf8),puVar6);
            puVar6 = (ushort *)thunk_FUN_104a0c30(L"alias",iVar4);
            FString::operator=((FString *)(pFVar1 + iVar5 * 0x20 + 0x7dcec),puVar6);
          }
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_34 = (uint)local_34._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10456c7c:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_3c;
  return local_10;
}


// ==== 10456f25 Catch@10456f25

void Catch_10456f25(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10456f39 Catch@10456f39

void Catch_10456f39(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SymbolInfoLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10457080 FUN_10457080

void FUN_10457080(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812d00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_8 = 0;
  ExceptionList = &local_10;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_a8,(ushort *)L"SymbolName");
  local_18 = 0;
  for (local_20 = 0; local_20 < 200; local_20 = local_20 + 1) {
    if (*(int *)(in_ECX + local_20 * 0x20 + 0x7dd08) != 0) {
      local_18 = local_18 + 1;
    }
  }
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
    for (param_1 = 0; param_1 < 200; param_1 = param_1 + 1) {
      if (*(int *)(in_ECX + param_1 * 0x20 + 0x7dd08) != 0) {
        (**(code **)(*(int *)pFVar1 + 4))(&param_1,4);
        thunk_FUN_10446f60(pFVar1);
      }
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104571ea Catch@104571ea

void Catch_104571ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104571fe Catch@104571fe

void Catch_104571fe(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SymbolInfoSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10457290 FUN_10457290

undefined4 FUN_10457290(int param_1)

{
  FL2GameData *pFVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  uchar *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  FOutputDevice local_154 [184];
  undefined4 local_9c;
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  int local_50;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  FArchive *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  FL2GameData *local_14;
  uchar *local_10;
  float local_c;
  int local_8;
  
  puStack_54 = &LAB_10812d1b;
  local_58 = ExceptionList;
  local_5c = &stack0xfffffea0;
  local_50 = 0;
  local_20 = 1;
  local_10 = (uchar *)0x0;
  local_18 = 0;
  local_24 = (FArchive *)0x0;
  ExceptionList = &local_58;
  appStrcpy((ushort *)local_154,(ushort *)L"Logongrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_154,0,*(undefined4 *)GNull_exref);
  local_24 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_154,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104579da;
    }
  }
  else if (param_1 == 0) {
    local_18 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_10,&local_18,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_10,local_18);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_154,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_14,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_154,*(ushort **)GError_exref);
      }
      for (iVar4 = 0; local_34 = iVar4, iVar4 < 8; iVar4 = iVar4 + 1) {
        thunk_FUN_104473d0(pFVar3);
      }
      for (iVar4 = 0; local_40 = iVar4, iVar4 < 0x12; iVar4 = iVar4 + 1) {
        thunk_FUN_104473d0(pFVar3);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_10);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_104579da;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_154,(ushort *)L"Logongrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_154,0,*(undefined4 *)GNull_exref);
  local_24 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_154,*(ushort **)GWarn_exref);
    local_20 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_50._0_1_ = 1;
    local_18 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_10,&local_18,param_1);
    if (local_10 == (uchar *)0x0) {
      FOutputDevice::Logf(local_154,*(ushort **)GWarn_exref);
      local_20 = 0;
      local_50 = (uint)local_50._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      puVar5 = local_10 + 2;
      for (iVar4 = 0; local_44 = iVar4, iVar4 < 7; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_LogPawn_begin_10aea0d0 + iVar4 * 0x101,
                           u_cLogPawn_end_10aea2d0[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(puVar5);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_9c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_20 = 0;
      }
      else {
        local_38 = thunk_FUN_1049f840();
        local_1c = 0;
        while (local_1c < local_38) {
          iVar4 = -1;
          param_1 = -1;
          local_8 = -1;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"class",local_1c);
          iVar7 = appStricmp(puVar6,(ushort *)L"slot_0");
          if (iVar7 == 0) {
            param_1 = 0;
          }
          else {
            iVar7 = appStricmp(puVar6,(ushort *)L"slot_1");
            if (iVar7 == 0) {
              param_1 = 1;
            }
            else {
              iVar7 = appStricmp(puVar6,(ushort *)L"slot_2");
              if (iVar7 == 0) {
                param_1 = 2;
              }
              else {
                iVar7 = appStricmp(puVar6,(ushort *)L"slot_3");
                if (iVar7 == 0) {
                  param_1 = 3;
                }
                else {
                  iVar7 = appStricmp(puVar6,(ushort *)L"slot_4");
                  if (iVar7 == 0) {
                    param_1 = 4;
                  }
                  else {
                    iVar7 = appStricmp(puVar6,(ushort *)L"slot_5");
                    if (iVar7 == 0) {
                      param_1 = 5;
                    }
                    else {
                      iVar7 = appStricmp(puVar6,(ushort *)L"slot_6");
                      if (iVar7 == 0) {
                        param_1 = 6;
                      }
                      else {
                        iVar7 = appStricmp(puVar6,(ushort *)L"slot_center");
                        if (iVar7 == 0) {
                          param_1 = 7;
                        }
                        else {
                          iVar7 = appStricmp(puVar6,(ushort *)L"Human_Knight_M");
                          if (iVar7 == 0) {
                            iVar4 = 0;
                            local_8 = iVar4;
                          }
                          else {
                            iVar7 = appStricmp(puVar6,(ushort *)L"Human_Knight_F");
                            if (iVar7 == 0) {
                              iVar4 = 1;
                              local_8 = iVar4;
                            }
                            else {
                              iVar7 = appStricmp(puVar6,(ushort *)L"Human_Mage_M");
                              if (iVar7 == 0) {
                                iVar4 = 2;
                                local_8 = iVar4;
                              }
                              else {
                                iVar7 = appStricmp(puVar6,(ushort *)L"Human_Mage_F");
                                if (iVar7 == 0) {
                                  iVar4 = 3;
                                  local_8 = iVar4;
                                }
                                else {
                                  iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Knight_M");
                                  if (iVar7 == 0) {
                                    iVar4 = 4;
                                    local_8 = iVar4;
                                  }
                                  else {
                                    iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Knight_F");
                                    if (iVar7 == 0) {
                                      iVar4 = 5;
                                      local_8 = iVar4;
                                    }
                                    else {
                                      iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Mage_M");
                                      if (iVar7 == 0) {
                                        iVar4 = 6;
                                        local_8 = iVar4;
                                      }
                                      else {
                                        iVar7 = appStricmp(puVar6,(ushort *)L"Elf_Mage_F");
                                        if (iVar7 == 0) {
                                          iVar4 = 7;
                                          local_8 = iVar4;
                                        }
                                        else {
                                          iVar7 = appStricmp(puVar6,(ushort *)L"DarkElf_Knight_M");
                                          if (iVar7 == 0) {
                                            iVar4 = 8;
                                            local_8 = iVar4;
                                          }
                                          else {
                                            iVar7 = appStricmp(puVar6,(ushort *)L"DarkElf_Knight_F")
                                            ;
                                            if (iVar7 == 0) {
                                              iVar4 = 9;
                                              local_8 = iVar4;
                                            }
                                            else {
                                              iVar7 = appStricmp(puVar6,(ushort *)L"DarkElf_Mage_M")
                                              ;
                                              if (iVar7 == 0) {
                                                iVar4 = 10;
                                                local_8 = iVar4;
                                              }
                                              else {
                                                iVar7 = appStricmp(puVar6,(ushort *)
                                                                          L"DarkElf_Mage_F");
                                                if (iVar7 == 0) {
                                                  iVar4 = 0xb;
                                                  local_8 = iVar4;
                                                }
                                                else {
                                                  iVar7 = appStricmp(puVar6,(ushort *)
                                                                            L"Orc_Knight_M");
                                                  if (iVar7 == 0) {
                                                    iVar4 = 0xc;
                                                    local_8 = iVar4;
                                                  }
                                                  else {
                                                    iVar7 = appStricmp(puVar6,(ushort *)
                                                                              L"Orc_Knight_F");
                                                    if (iVar7 == 0) {
                                                      iVar4 = 0xd;
                                                      local_8 = iVar4;
                                                    }
                                                    else {
                                                      iVar7 = appStricmp(puVar6,(ushort *)
                                                                                L"Orc_Mage_M");
                                                      if (iVar7 == 0) {
                                                        iVar4 = 0xe;
                                                        local_8 = iVar4;
                                                      }
                                                      else {
                                                        iVar7 = appStricmp(puVar6,(ushort *)
                                                                                  L"Orc_Mage_F");
                                                        if (iVar7 == 0) {
                                                          iVar4 = 0xf;
                                                          local_8 = iVar4;
                                                        }
                                                        else {
                                                          iVar7 = appStricmp(puVar6,(ushort *)
                                                                                                                                                                        
                                                  L"Dwarf_Knight_M");
                                                  if (iVar7 == 0) {
                                                    iVar4 = 0x10;
                                                    local_8 = iVar4;
                                                  }
                                                  else {
                                                    iVar7 = appStricmp(puVar6,(ushort *)
                                                                              L"Dwarf_Knight_F");
                                                    if (iVar7 == 0) {
                                                      iVar4 = 0x11;
                                                      local_8 = iVar4;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar7 = local_1c;
          local_c = (float)thunk_FUN_104a0b70(&DAT_108967d8,local_1c);
          local_30 = (float)(int)local_c;
          local_c = (float)thunk_FUN_104a0b70(&DAT_108967d4,iVar7);
          local_2c = (float)(int)local_c;
          local_c = (float)thunk_FUN_104a0b70(&DAT_108967d0,iVar7);
          local_28 = (float)(int)local_c;
          iVar8 = thunk_FUN_104a0b70(&DAT_108967c4,iVar7);
          local_c = (float)iVar8;
          pFVar2 = local_24;
          if (param_1 == -1) {
            if (iVar4 != -1) {
              pFVar1 = local_14 + iVar4 * 0x10 + 0x7f824;
              *(float *)pFVar1 = local_30;
              *(float *)(pFVar1 + 4) = local_2c;
              *(float *)(pFVar1 + 8) = local_28;
              *(float *)(local_14 + (iVar4 + 0x7f83) * 0x10) = local_c - 16384.0;
            }
            local_1c = iVar7 + 1;
          }
          else {
            pFVar1 = local_14 + param_1 * 0x10 + 0x7f944;
            *(float *)pFVar1 = local_30;
            *(float *)(pFVar1 + 4) = local_2c;
            *(float *)(pFVar1 + 8) = local_28;
            *(float *)(local_14 + (param_1 + 0x7f95) * 0x10) = local_c - 16384.0;
            local_1c = iVar7 + 1;
          }
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_10);
      local_50 = (uint)local_50._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104579da:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_58;
  return local_20;
}


// ==== 10457a02 Catch@10457a02

void Catch_10457a02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10457a16 Catch@10457a16

void Catch_10457a16(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::LogonDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10457c20 FUN_10457c20

void FUN_10457c20(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_a8 [136];
  int local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812d30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  appStrcpy((ushort *)local_a8,(ushort *)L"Logongrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_a8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
  }
  else {
    for (; local_1c = iVar2, iVar2 < 8; iVar2 = iVar2 + 1) {
      thunk_FUN_104473d0(pFVar1);
    }
    iVar2 = 0;
    while( true ) {
      local_20 = iVar2;
      if (0x11 < iVar2) break;
      thunk_FUN_104473d0(pFVar1);
      iVar2 = iVar2 + 1;
    }
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_a8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10457d4c Catch@10457d4c

void Catch_10457d4c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10457d60 Catch@10457d60

void Catch_10457d60(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::LogonDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10457de0 FUN_10457de0

void FUN_10457de0(void)

{
  FName *in_ECX;
  FName *pFVar1;
  int iVar2;
  
  FName::FName(in_ECX);
  pFVar1 = in_ECX + 4;
  iVar2 = 0xe;
  do {
    FVector::FVector((FVector *)pFVar1);
    pFVar1 = pFVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar1 = in_ECX + 0xb8;
  iVar2 = 0xe;
  do {
    FRotator::FRotator((FRotator *)pFVar1);
    pFVar1 = pFVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}


// ==== 10457e40 FUN_10457e40

void FUN_10457e40(byte param_1)

{
  thunk_FUN_10448380();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10457e70 FUN_10457e70

void FUN_10457e70(FOutputDevice *param_1)

{
  FName *pFVar1;
  int iVar2;
  ushort *puVar3;
  UObject *pUVar4;
  UPackageMap *pUVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  code *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  UPackageMap *pUVar9;
  UPackageMap *pUVar10;
  UObject *pUVar11;
  undefined4 uVar12;
  UObject *pUVar13;
  undefined4 local_24;
  FName local_20 [4];
  FName local_1c [4];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10812d40;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  local_18 = in_ECX;
  for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
    FName::FName(local_1c,0);
    pFVar1 = (FName *)(local_18 + 8 + iVar7 * 4);
    iVar2 = FName::operator!=(pFVar1,local_1c);
    pcVar8 = StaticFindObject_exref;
    if (iVar2 != 0) {
      iVar2 = 0;
      puVar3 = L2FName::operator*((L2FName *)pFVar1);
      pcVar8 = StaticFindObject_exref;
      pUVar4 = UObject::StaticFindObject
                         (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar2);
      if (pUVar4 == (UObject *)0x0) {
        pUVar11 = pUVar4;
        pUVar13 = pUVar4;
        puVar3 = L2FName::operator*((L2FName *)pFVar1);
        pUVar4 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                            (ulong)pUVar11,(UPackageMap *)pUVar13);
        if (pUVar4 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar1);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
    }
    FName::FName(local_20,0);
    pFVar1 = (FName *)(local_18 + 0x14 + iVar7 * 4);
    iVar2 = FName::operator!=(pFVar1,local_20);
    if (iVar2 != 0) {
      uVar12 = 0;
      puVar3 = L2FName::operator*((L2FName *)pFVar1);
      pUVar5 = (UPackageMap *)(*pcVar8)(&USound::PrivateStaticClass,0xffffffff,puVar3,uVar12);
      if (pUVar5 == (UPackageMap *)0x0) {
        pUVar9 = pUVar5;
        pUVar10 = pUVar5;
        puVar3 = L2FName::operator*((L2FName *)pFVar1);
        pUVar4 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar5,
                            (ulong)pUVar9,pUVar10);
        if (pUVar4 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar1);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
    FName::FName((FName *)&local_24,0);
    pFVar1 = (FName *)(local_18 + 0x20 + iVar7 * 4);
    iVar2 = FName::operator!=(pFVar1,(FName *)&local_24);
    if (iVar2 != 0) {
      uVar12 = 0;
      puVar3 = L2FName::operator*((L2FName *)pFVar1);
      pUVar5 = (UPackageMap *)(*pcVar8)(&USound::PrivateStaticClass,0xffffffff,puVar3,uVar12);
      if (pUVar5 == (UPackageMap *)0x0) {
        pUVar9 = pUVar5;
        pUVar10 = pUVar5;
        puVar3 = L2FName::operator*((L2FName *)pFVar1);
        pUVar4 = UObject::StaticLoadObject
                           (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar5,
                            (ulong)pUVar9,pUVar10);
        if (pUVar4 == (UObject *)0x0) {
          L2FName::operator*((L2FName *)pFVar1);
          FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
        }
      }
    }
  }
  for (iVar7 = 0; iVar7 < 2; iVar7 = iVar7 + 1) {
    for (iVar2 = 0; iVar2 < 0xf; iVar2 = iVar2 + 1) {
      FName::FName((FName *)&local_24,0);
      pFVar1 = (FName *)(local_18 + 0x74 + (iVar7 * 0xf + iVar2) * 4);
      *(undefined4 *)pFVar1 = local_24;
      FName::FName(local_20,0);
      iVar6 = FName::operator!=(pFVar1,local_20);
      if (iVar6 != 0) {
        iVar6 = 0;
        puVar3 = L2FName::operator*((L2FName *)pFVar1);
        pUVar4 = UObject::StaticFindObject
                           (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar6);
        if (pUVar4 == (UObject *)0x0) {
          pUVar11 = pUVar4;
          pUVar13 = pUVar4;
          puVar3 = L2FName::operator*((L2FName *)pFVar1);
          pUVar4 = UObject::StaticLoadObject
                             (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                              (ulong)pUVar11,(UPackageMap *)pUVar13);
          if (pUVar4 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar1);
            FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 10458117 Catch@10458117

void Catch_10458117(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1045812b Catch@1045812b

void Catch_1045812b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SkillSoundData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10458200 FUN_10458200

undefined4 FUN_10458200(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x849e8))) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x849e4) + param_1 * 4);
  }
  return 0;
}


// ==== 10458268 Catch@10458268

void Catch_10458268(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1045827c Catch@1045827c

void Catch_1045827c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetGameTipData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104582c0 FUN_104582c0

UObject * FUN_104582c0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  UObject *this;
  int in_ECX;
  int iVar4;
  FString *this_00;
  UObject *pUVar5;
  UObject *pUVar6;
  
  if (param_1 == (ushort *)0x0) {
    return (UObject *)0x0;
  }
  iVar4 = 0;
  this_00 = (FString *)(in_ECX + 0x7dcec);
  do {
    if (*(int *)(this_00 + 0x1c) != 0) {
      puVar3 = param_1;
      puVar1 = FString::operator*(this_00);
      iVar2 = appStrcmp(puVar1,puVar3);
      if (iVar2 == 0) {
        iVar4 = iVar4 * 0x20 + in_ECX;
        this = *(UObject **)(iVar4 + 0x7dd04);
        if (this == (UObject *)0x0) {
          puVar3 = FString::operator*((FString *)(iVar4 + 0x7dcf8));
          this = UObject::StaticFindObject
                           (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,puVar3,(int)this);
          if (this == (UObject *)0x0) {
            pUVar5 = this;
            pUVar6 = this;
            puVar3 = FString::operator*((FString *)(iVar4 + 0x7dcf8));
            this = UObject::StaticLoadObject
                             (&UTexture::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)this,
                              (ulong)pUVar5,(UPackageMap *)pUVar6);
            *(UObject **)(iVar4 + 0x7dd04) = this;
            if (this == (UObject *)0x0) {
              return (UObject *)0x0;
            }
          }
        }
        UObject::SetFlags(this,0x4000000);
        return this;
      }
    }
    iVar4 = iVar4 + 1;
    this_00 = this_00 + 0x20;
  } while (iVar4 < 200);
  return (UObject *)0x0;
}


// ==== 104583c0 FUN_104583c0

UObject * FUN_104583c0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  UObject *this;
  int in_ECX;
  UObject *pUVar3;
  UObject *pUVar4;
  
  if (199 < param_1) {
    return (UObject *)0x0;
  }
  iVar1 = param_1 * 0x20 + in_ECX;
  if (*(int *)(param_1 * 0x20 + 0x7dd08 + in_ECX) != 0) {
    this = *(UObject **)(iVar1 + 0x7dd04);
    if (this == (UObject *)0x0) {
      puVar2 = FString::operator*((FString *)(iVar1 + 0x7dcf8));
      this = UObject::StaticFindObject
                       (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,puVar2,(int)this);
      if (this == (UObject *)0x0) {
        pUVar3 = this;
        pUVar4 = this;
        puVar2 = FString::operator*((FString *)(iVar1 + 0x7dcf8));
        this = UObject::StaticLoadObject
                         (&UTexture::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)this,
                          (ulong)pUVar3,(UPackageMap *)pUVar4);
        *(UObject **)(iVar1 + 0x7dd04) = this;
        if (this == (UObject *)0x0) {
          return (UObject *)0x0;
        }
      }
      UObject::SetFlags(this,0x4000000);
    }
    return this;
  }
  return (UObject *)0x0;
}


// ==== 10458480 FUN_10458480

void FUN_10458480(byte param_1)

{
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 104584b0 FUN_104584b0

UObject * FUN_104584b0(uint param_1,int param_2)

{
  undefined1 *puVar1;
  ushort *puVar2;
  UObject *pUVar3;
  int iVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FString local_34 [20];
  UObject *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10812d77;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar4 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffc0;
  if ((DAT_10bdbfc8 & 1) == 0) {
    DAT_10bdbfc8 = DAT_10bdbfc8 | 1;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    ExceptionList = &local_10;
    TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)&DAT_10bdbfb8);
    _atexit((_func_4879 *)&LAB_1084c6e0);
    local_8 = (uint)local_8._1_3_ << 8;
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_18 = (param_2 << 8 | param_1) & 0xffff;
  while( true ) {
    local_1c = iVar4;
    if (DAT_10bdbfbc <= iVar4) {
      FString::Printf((ushort *)local_34,L"L2ZoneName.%d_%d",param_1,param_2);
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar4 = 0;
      puVar2 = FString::operator*(local_34);
      pUVar3 = UObject::StaticFindObject
                         (&UTexture::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar4);
      local_20 = pUVar3;
      if (pUVar3 == (UObject *)0x0) {
        pUVar5 = pUVar3;
        pUVar6 = pUVar3;
        puVar2 = FString::operator*(local_34);
        pUVar3 = UObject::StaticLoadObject
                           (&UTexture::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar3,
                            (ulong)pUVar5,(UPackageMap *)pUVar6);
        local_20 = pUVar3;
        if (pUVar3 == (UObject *)0x0) {
          TArray<unsigned_short>::AddUniqueItem
                    ((TArray<unsigned_short> *)&DAT_10bdbfb8,(ushort *)&local_18);
        }
      }
      local_8 = local_8 & 0xffffff00;
      FString::~FString(local_34);
      ExceptionList = local_10;
      return pUVar3;
    }
    puVar2 = TArray<unsigned_short>::operator()((TArray<unsigned_short> *)&DAT_10bdbfb8,iVar4);
    if (*puVar2 == (ushort)local_18) break;
    iVar4 = iVar4 + 1;
  }
  ExceptionList = local_10;
  return (UObject *)0x0;
}


// ==== 104585e6 Catch@104585e6

void Catch_104585e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 104585fa Catch@104585fa

void Catch_104585fa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetZoneNameTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10458670 FUN_10458670

void FUN_10458670(byte param_1)

{
  thunk_FUN_10448690();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 104586a0 FUN_104586a0

int * FUN_104586a0(void)

{
  int *piVar1;
  wchar_t _Ch;
  int iVar2;
  wchar_t *pwVar3;
  int *in_ECX;
  
  piVar1 = in_ECX + 5;
  in_ECX[3] = 0;
  *(undefined2 *)piVar1 = 0;
  if (in_ECX[1] < in_ECX[2]) {
    do {
      _Ch = *(wchar_t *)(in_ECX[4] + in_ECX[1] * 2);
      pwVar3 = _wcsrchr((wchar_t *)((int)in_ECX + 0x216),_Ch);
      if ((pwVar3 == (wchar_t *)0x0) || (*in_ECX != 0)) {
        if (_Ch == L'[') {
          *in_ECX = *in_ECX + 1;
        }
        else {
          if (_Ch == L']') {
            *in_ECX = *in_ECX + -1;
            iVar2 = in_ECX[3];
            goto joined_r0x10458712;
          }
          *(wchar_t *)((int)in_ECX + in_ECX[3] * 2 + 0x14) = _Ch;
          in_ECX[3] = in_ECX[3] + 1;
          *(undefined2 *)((int)in_ECX + in_ECX[3] * 2 + 0x14) = 0;
        }
      }
      else {
        iVar2 = in_ECX[3];
joined_r0x10458712:
        if (0 < iVar2) {
          in_ECX[1] = in_ECX[1] + 1;
          return piVar1;
        }
      }
      in_ECX[1] = in_ECX[1] + 1;
    } while (in_ECX[1] < in_ECX[2]);
  }
  return (int *)((uint)piVar1 & (in_ECX[3] < 1) - 1);
}


// ==== 10458780 FUN_10458780

void FUN_10458780(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 104587d0 FUN_104587d0

void FUN_104587d0(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10458800 FUN_10458800

void FUN_10458800(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10458830 FUN_10458830

void FUN_10458830(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10458860 FUN_10458860

void FUN_10458860(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 104588c0 FUN_104588c0

undefined4 FUN_104588c0(uint *param_1)

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


// ==== 10458920 FUN_10458920

void FUN_10458920(uint *param_1,FArray *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  for (iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4); iVar2 != -1;
      iVar2 = *(int *)(iVar2 + *in_ECX)) {
    iVar2 = iVar2 * 0xc;
    if (*(uint *)(iVar2 + 4 + *in_ECX) == *param_1) {
      iVar3 = FArray::Add(param_2,1,4);
      puVar1 = (undefined4 *)(*(int *)param_2 + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + 8 + *in_ECX);
      }
    }
  }
  return;
}


// ==== 104589a0 FUN_104589a0

int FUN_104589a0(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
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


// ==== 10458a30 FUN_10458a30

undefined4 FUN_10458a30(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
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


// ==== 10458ac0 FUN_10458ac0

void FUN_10458ac0(uint *param_1,FArray *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  for (iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4); iVar2 != -1;
      iVar2 = *(int *)(iVar2 + *in_ECX)) {
    iVar2 = iVar2 * 0xc;
    if (*(uint *)(iVar2 + 4 + *in_ECX) == *param_1) {
      iVar3 = FArray::Add(param_2,1,4);
      puVar1 = (undefined4 *)(*(int *)param_2 + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + 8 + *in_ECX);
      }
    }
  }
  return;
}


// ==== 10458b40 FUN_10458b40

undefined4 FUN_10458b40(uint *param_1)

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


// ==== 10458ba0 FUN_10458ba0

void FUN_10458ba0(uint *param_1,FArray *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  for (iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4); iVar2 != -1;
      iVar2 = *(int *)(iVar2 + *in_ECX)) {
    iVar2 = iVar2 * 0xc;
    if (*(uint *)(iVar2 + 4 + *in_ECX) == *param_1) {
      iVar3 = FArray::Add(param_2,1,4);
      puVar1 = (undefined4 *)(*(int *)param_2 + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + 8 + *in_ECX);
      }
    }
  }
  return;
}


// ==== 10458c20 FUN_10458c20

int FUN_10458c20(uint *param_1)

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


// ==== 10458c80 FUN_10458c80

undefined4 FUN_10458c80(FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  puVar2 = FString::operator*(param_1);
  uVar3 = thunk_FUN_1032ff50(puVar2);
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


// ==== 10458d10 FUN_10458d10

int FUN_10458d10(uint *param_1)

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


// ==== 10458d70 FUN_10458d70

void FUN_10458d70(uint *param_1,FArray *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  for (iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & *param_1) * 4); iVar2 != -1;
      iVar2 = *(int *)(iVar2 + *in_ECX)) {
    iVar2 = iVar2 * 0xc;
    if (*(uint *)(iVar2 + 4 + *in_ECX) == *param_1) {
      iVar3 = FArray::Add(param_2,1,4);
      puVar1 = (undefined4 *)(*(int *)param_2 + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + 8 + *in_ECX);
      }
    }
  }
  return;
}


// ==== 10458df0 FUN_10458df0

int FUN_10458df0(uint *param_1)

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


// ==== 10458e50 FUN_10458e50

undefined4 FUN_10458e50(uint *param_1)

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


// ==== 10458eb0 FUN_10458eb0

undefined4 FUN_10458eb0(FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  pFVar2 = param_1;
  param_1 = *(FName **)param_1;
  uVar3 = FName::GetIndex((FName *)&param_1);
  iVar1 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    iVar4 = FName::operator==((FName *)(*in_ECX + iVar1 * 0xc + 4),pFVar2);
    if (iVar4 != 0) break;
    iVar1 = *(int *)(iVar1 * 0xc + *in_ECX);
  }
  return *(undefined4 *)(*in_ECX + 8 + iVar1 * 0xc);
}


// ==== 10458f40 FUN_10458f40

undefined4 FUN_10458f40(uint *param_1)

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


// ==== 10458fa0 FUN_10458fa0

undefined4 FUN_10458fa0(uint *param_1)

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


// ==== 10459020 FUN_10459020

void FUN_10459020(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 10459050 FUN_10459050

undefined4 FUN_10459050(uint *param_1)

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


// ==== 104590f0 FUN_104590f0

int FUN_104590f0(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 8 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 10459150 FUN_10459150

int FUN_10459150(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 8 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 10459250 FUN_10459250

int FUN_10459250(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 8 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 10459270 FUN_10459270

int FUN_10459270(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 4 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 10459290 FUN_10459290

int FUN_10459290(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 8 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 104592f0 FUN_104592f0

void FUN_104592f0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 0;
  return;
}


// ==== 10459380 FUN_10459380

int FUN_10459380(void)

{
  int in_ECX;
  
  return **(int **)(in_ECX + 4) + 8 + *(int *)(in_ECX + 8) * 0xc;
}


// ==== 10459420 FUN_10459420

void FUN_10459420(void)

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


// ==== 10459530 FUN_10459530

undefined4 * FUN_10459530(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_10459420();
  }
  return puVar3 + 2;
}


// ==== 104595e0 FUN_104595e0

void FUN_104595e0(void)

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


// ==== 104596f0 FUN_104596f0

undefined4 * FUN_104596f0(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_104595e0();
  }
  return puVar3 + 2;
}


// ==== 104597a0 FUN_104597a0

void FUN_104597a0(void)

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


// ==== 104598b0 FUN_104598b0

undefined4 * FUN_104598b0(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_104597a0();
  }
  return puVar3 + 2;
}


// ==== 10459960 FUN_10459960

void FUN_10459960(void)

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


// ==== 10459a70 FUN_10459a70

undefined4 * FUN_10459a70(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_10459960();
  }
  return puVar3 + 2;
}


// ==== 10459b20 FUN_10459b20

void FUN_10459b20(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
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
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = thunk_FUN_1032ff50(puVar3);
      iVar2 = iVar2 + 0x14;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10459c50 FUN_10459c50

undefined4 * FUN_10459c50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,0x14);
  if (*(int *)in_ECX + iVar1 * 0x14 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_1044a480(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = thunk_FUN_1032ff50(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10459b20();
  }
  return puVar2 + 4;
}


// ==== 10459cf0 FUN_10459cf0

void FUN_10459cf0(void)

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


// ==== 10459e00 FUN_10459e00

undefined4 * FUN_10459e00(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_10459cf0();
  }
  return puVar3 + 2;
}


// ==== 10459eb0 FUN_10459eb0

void FUN_10459eb0(void)

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


// ==== 10459fc0 FUN_10459fc0

undefined4 * FUN_10459fc0(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_10459eb0();
  }
  return puVar3 + 2;
}


// ==== 1045a070 FUN_1045a070

void FUN_1045a070(void)

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


// ==== 1045a180 FUN_1045a180

undefined4 * FUN_1045a180(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045a070();
  }
  return puVar3 + 2;
}


// ==== 1045a230 FUN_1045a230

void FUN_1045a230(void)

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


// ==== 1045a340 FUN_1045a340

undefined4 * FUN_1045a340(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045a230();
  }
  return puVar3 + 2;
}


// ==== 1045a3f0 FUN_1045a3f0

void FUN_1045a3f0(void)

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


// ==== 1045a500 FUN_1045a500

undefined4 * FUN_1045a500(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045a3f0();
  }
  return puVar3 + 2;
}


// ==== 1045a5b0 FUN_1045a5b0

void FUN_1045a5b0(void)

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


// ==== 1045a6c0 FUN_1045a6c0

undefined4 * FUN_1045a6c0(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045a5b0();
  }
  return puVar3 + 2;
}


// ==== 1045a770 FUN_1045a770

void FUN_1045a770(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
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
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = thunk_FUN_1032ff50(puVar3);
      iVar2 = iVar2 + 0x14;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1045a8a0 FUN_1045a8a0

undefined4 * FUN_1045a8a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,0x14);
  if (*(int *)in_ECX + iVar1 * 0x14 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_1044a5b0(param_1,param_2);
  }
  puVar3 = FString::operator*((FString *)(puVar2 + 1));
  uVar4 = thunk_FUN_1032ff50(puVar3);
  uVar4 = *(int *)(in_ECX + 0x10) - 1U & uVar4;
  *puVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar4 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar4 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1045a770();
  }
  return puVar2 + 4;
}


// ==== 1045a940 FUN_1045a940

void FUN_1045a940(void)

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


// ==== 1045aa50 FUN_1045aa50

undefined4 * FUN_1045aa50(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045a940();
  }
  return puVar3 + 2;
}


// ==== 1045ab00 FUN_1045ab00

void FUN_1045ab00(void)

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


// ==== 1045ac10 FUN_1045ac10

undefined4 * FUN_1045ac10(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045ab00();
  }
  return puVar3 + 2;
}


// ==== 1045acc0 FUN_1045acc0

void FUN_1045acc0(void)

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


// ==== 1045add0 FUN_1045add0

undefined4 * FUN_1045add0(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045acc0();
  }
  return puVar3 + 2;
}


// ==== 1045ae80 FUN_1045ae80

void FUN_1045ae80(void)

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


// ==== 1045af90 FUN_1045af90

undefined4 * FUN_1045af90(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045ae80();
  }
  return puVar3 + 2;
}


// ==== 1045b040 FUN_1045b040

void FUN_1045b040(void)

{
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
      uVar3 = FName::GetIndex((FName *)&stack0xfffffff4);
      iVar2 = iVar2 + 0xc;
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


// ==== 1045b170 FUN_1045b170

undefined4 * FUN_1045b170(undefined4 *param_1,undefined4 *param_2)

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
  param_1 = (undefined4 *)puVar3[1];
  uVar2 = FName::GetIndex((FName *)&param_1);
  uVar2 = *(int *)(in_ECX + 0x10) - 1U & uVar2;
  *puVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar2 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar2 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1045b040();
  }
  return puVar3 + 2;
}


// ==== 1045b230 FUN_1045b230

void FUN_1045b230(void)

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


// ==== 1045b340 FUN_1045b340

undefined4 * FUN_1045b340(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045b230();
  }
  return puVar3 + 2;
}


// ==== 1045b3f0 FUN_1045b3f0

void FUN_1045b3f0(void)

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


// ==== 1045b500 FUN_1045b500

undefined4 * FUN_1045b500(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045b3f0();
  }
  return puVar3 + 2;
}


// ==== 1045b650 FUN_1045b650

void FUN_1045b650(void)

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


// ==== 1045b760 FUN_1045b760

undefined4 * FUN_1045b760(undefined4 *param_1,undefined4 *param_2)

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
    thunk_FUN_1045b650();
  }
  return puVar3 + 2;
}


// ==== 1045b7f0 FUN_1045b7f0

void FUN_1045b7f0(int param_1,int param_2)

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


// ==== 1045bb30 FUN_1045bb30

void FUN_1045bb30(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10812d9c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1045bba0 FUN_1045bba0

void FUN_1045bba0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10812dbc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1045be90 FUN_1045be90

void FUN_1045be90(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812ddc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1045c350 FUN_1045c350

void FUN_1045c350(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812dfc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
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


// ==== 1045c8b0 FUN_1045c8b0

UObject * FUN_1045c8b0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AStaticMeshActor::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1045c8e0 FUN_1045c8e0

void FUN_1045c8e0(void)

{
  FString *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  FName *pFVar4;
  undefined4 local_20 [2];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812e53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FL2ItemDataBase::vftable;
  pFVar4 = (FName *)(in_ECX + 9);
  iVar2 = 2;
  do {
    FName::FName(pFVar4);
    pFVar4 = pFVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar4 = (FName *)(in_ECX + 0xc);
  iVar2 = 2;
  do {
    FName::FName(pFVar4);
    pFVar4 = pFVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FName::FName((FName *)(in_ECX + 0xf));
  pFVar4 = (FName *)(in_ECX + 0x10);
  iVar2 = 3;
  do {
    FName::FName(pFVar4);
    pFVar4 = pFVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FName::FName((FName *)(in_ECX + 0x14));
  FName::FName((FName *)(in_ECX + 0x15));
  FString::FString((FString *)(in_ECX + 0x16));
  local_4 = 0;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x1a,0x18,3,(_func_void_void_ptr *)&LAB_1030f696,
             (_func_void_void_ptr *)&LAB_10306267);
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x2d));
  local_4._0_1_ = 2;
  FName::FName((FName *)local_20,(ushort *)L"NoItemName",2);
  in_ECX[0x14] = local_20[0];
  FName::FName((FName *)local_20,0);
  in_ECX[0x15] = local_20[0];
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)&DAT_10853d94);
  local_4._0_1_ = 3;
  FString::operator=((FString *)(in_ECX + 0x16),pFVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::~FString(local_18);
  in_ECX[2] = 0;
  in_ECX[0x19] = 0;
  iVar2 = 3;
  do {
    thunk_FUN_104461c0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[0x2c] = 0;
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)&DAT_10853d94);
  local_4._0_1_ = 4;
  FString::operator=((FString *)(in_ECX + 0x2d),pFVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::~FString(local_18);
  puVar3 = in_ECX + 9;
  iVar2 = 3;
  do {
    FName::FName((FName *)local_20,0);
    *puVar3 = local_20[0];
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = in_ECX + 0xc;
  iVar2 = 3;
  do {
    FName::FName((FName *)local_20,0);
    *puVar3 = local_20[0];
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FName::FName((FName *)local_20,0);
  in_ECX[0xf] = local_20[0];
  puVar3 = in_ECX + 0x10;
  iVar2 = 4;
  do {
    FName::FName((FName *)local_20,0);
    *puVar3 = local_20[0];
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[8] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1045cb90 FUN_1045cb90

void FUN_1045cb90(void)

{
  undefined4 *in_ECX;
  FName *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1045c8e0();
  local_4 = 0;
  *in_ECX = FL2EtcItemData::vftable;
  pFVar1 = (FName *)(in_ECX + 0x36);
  iVar2 = 3;
  do {
    FName::FName(pFVar1);
    pFVar1 = pFVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar1 = (FName *)(in_ECX + 0x3b);
  iVar2 = 3;
  do {
    FName::FName(pFVar1);
    pFVar1 = pFVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FName::FName((FName *)(in_ECX + 0x42));
  FName::FName((FName *)(in_ECX + 0x43));
  in_ECX[0x3a] = 0;
  in_ECX[0x35] = 0;
  puVar3 = in_ECX + 0x36;
  iVar2 = 4;
  do {
    FName::FName((FName *)local_14,0);
    *puVar3 = local_14[0];
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = in_ECX + 0x3b;
  iVar2 = 4;
  do {
    FName::FName((FName *)local_14,0);
    *puVar3 = local_14[0];
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FName::FName((FName *)local_14,0);
  in_ECX[0x43] = local_14[0];
  in_ECX[0x42] = local_14[0];
  ExceptionList = local_c;
  return;
}


// ==== 1045cd00 FUN_1045cd00

void FUN_1045cd00(void)

{
  undefined4 *in_ECX;
  int iVar1;
  FName *pFVar2;
  FVector *pFVar3;
  FName *pFVar4;
  undefined4 *puVar5;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1045c8e0();
  local_4 = 0;
  *in_ECX = FL2WeaponItemData::vftable;
  pFVar4 = (FName *)(in_ECX + 0x38);
  iVar1 = 3;
  do {
    FName::FName(pFVar4);
    pFVar4 = pFVar4 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar4 = (FName *)(in_ECX + 0x3d);
  iVar1 = 3;
  do {
    FName::FName(pFVar4);
    pFVar4 = pFVar4 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar4 = (FName *)(in_ECX + 0x42);
  iVar1 = 3;
  do {
    FName::FName(pFVar4);
    pFVar4 = pFVar4 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FName::FName((FName *)(in_ECX + 0x46));
  FName::FName((FName *)(in_ECX + 0x47));
  FName::FName((FName *)(in_ECX + 0x48));
  pFVar4 = (FName *)(in_ECX + 0x5b);
  iVar1 = 3;
  pFVar2 = pFVar4;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar3 = (FVector *)(in_ECX + 0x5f);
  iVar1 = 3;
  do {
    FVector::FVector(pFVar3);
    pFVar3 = pFVar3 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar3 = (FVector *)(in_ECX + 0x6b);
  iVar1 = 3;
  do {
    FVector::FVector(pFVar3);
    pFVar3 = pFVar3 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = (FName *)(in_ECX + 0x77);
  iVar1 = 3;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar3 = (FVector *)(in_ECX + 0x7b);
  iVar1 = 3;
  do {
    FVector::FVector(pFVar3);
    pFVar3 = pFVar3 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pFVar2 = (FName *)(in_ECX + 0x93);
  iVar1 = 3;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 4;
  do {
    FName::FName((FName *)local_14,0);
    *(undefined4 *)(pFVar4 + 0x70) = local_14[0];
    *(undefined4 *)pFVar4 = local_14[0];
    *(undefined4 *)(pFVar4 + -0x8c) = local_14[0];
    pFVar4 = pFVar4 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar5 = in_ECX + 0x3d;
  iVar1 = 4;
  do {
    FName::FName((FName *)local_14,0);
    *puVar5 = local_14[0];
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar5 = in_ECX + 0x42;
  iVar1 = 4;
  do {
    FName::FName((FName *)local_14,0);
    *puVar5 = local_14[0];
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  in_ECX[0x8f] = 0xffffffff;
  in_ECX[0x90] = 0xffffffff;
  in_ECX[0x91] = 0xffffffff;
  in_ECX[0x92] = 0xffffffff;
  puVar5 = in_ECX + 0x93;
  iVar1 = 4;
  do {
    FName::FName((FName *)local_14,0);
    *puVar5 = local_14[0];
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  in_ECX[0x37] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x41] = 0;
  FName::FName((FName *)local_14,0);
  in_ECX[0x46] = local_14[0];
  in_ECX[0x47] = local_14[0];
  in_ECX[0x58] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1045d030 FUN_1045d030

void FUN_1045d030(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  FName *pFVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10812eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1045c8e0();
  local_4 = 0;
  *in_ECX = FL2ArmorItemData::vftable;
  pFVar2 = (FName *)(in_ECX + 0x45);
  iVar4 = 0x3b;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar2 = (FName *)(in_ECX + 0x90);
  iVar4 = 0x3b;
  do {
    FName::FName(pFVar2);
    pFVar2 = pFVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar2 = (FName *)(in_ECX + 0xdb);
  iVar4 = 0x3b;
  pFVar3 = pFVar2;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar3 = (FName *)(in_ECX + 0x126);
  iVar4 = 0x3b;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar3 = (FName *)(in_ECX + 0x163);
  iVar4 = 3;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  pFVar3 = (FName *)(in_ECX + 0x168);
  iVar4 = 3;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  FName::FName((FName *)(in_ECX + 0x16c));
  pFVar3 = (FName *)(in_ECX + 0x16e);
  iVar4 = 3;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  FName::FName((FName *)(in_ECX + 0x172));
  FName::FName((FName *)(in_ECX + 0x173));
  pFVar3 = (FName *)(in_ECX + 0x175);
  iVar4 = 3;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  iVar4 = 4;
  do {
    iVar6 = 0xf;
    do {
      iVar5 = iVar6;
      FName::FName((FName *)&local_18,0);
      *(undefined4 *)(pFVar2 + -600) = local_18;
      FName::FName((FName *)local_14,0);
      *(undefined4 *)pFVar2 = local_14[0];
      pFVar2 = pFVar2 + 4;
      iVar6 = iVar5 + -1;
    } while (iVar6 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar1 = in_ECX + 0x126;
  iVar4 = iVar5 + 3;
  do {
    iVar6 = iVar4;
    iVar4 = 0xf;
    do {
      FName::FName((FName *)local_14,0);
      puVar1[-0x96] = local_14[0];
      FName::FName((FName *)&local_18,0);
      *puVar1 = local_18;
      puVar1 = puVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = iVar6 + -1;
  } while (iVar4 != 0);
  puVar1 = in_ECX + 0x16e;
  iVar4 = iVar6 + 3;
  do {
    iVar6 = iVar4;
    FName::FName((FName *)local_14,0);
    *puVar1 = local_14[0];
    puVar1 = puVar1 + 1;
    iVar4 = iVar6 + -1;
  } while (iVar4 != 0);
  in_ECX[0x167] = 0;
  puVar1 = in_ECX + 0x81;
  iVar6 = iVar6 + 0xe;
  do {
    puVar1[-0x4b] = 0;
    *puVar1 = 0;
    puVar1[0x4b] = 0;
    puVar1[0x96] = 0;
    puVar1 = puVar1 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  in_ECX[0x16d] = 0;
  FName::FName((FName *)local_14,0);
  in_ECX[0x173] = local_14[0];
  in_ECX[0x172] = local_14[0];
  ExceptionList = local_c;
  return;
}


// ==== 1045d400 FUN_1045d400

void FUN_1045d400(FOutputDevice *param_1,int param_2,int param_3)

{
  int iVar1;
  UObject *pUVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  FName *pFVar11;
  code *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  UPackageMap *pUVar13;
  ushort *puVar14;
  UPackageMap *pUVar15;
  UObject *pUVar16;
  ulong uVar17;
  UObject *pUVar18;
  UPackageMap *pUVar19;
  FRotator local_e0 [12];
  FRotator local_d4 [16];
  FString local_c4 [12];
  int local_b8;
  int local_b4;
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  FString local_9c [12];
  undefined1 *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined1 *puStack_78;
  int local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  int local_64;
  int local_60;
  undefined1 *local_5c [2];
  undefined1 *local_54;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 *local_34;
  int local_30;
  undefined1 *local_2c;
  int local_28;
  int local_24;
  UObject *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  puStack_78 = &LAB_10812eea;
  local_7c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_7c;
  local_80 = &stack0xffffff14;
  local_74 = 0;
  FName::FName((FName *)&local_c,(ushort *)L"None",1);
  switch(param_1) {
  case (FOutputDevice *)0x0:
    FName::FName((FName *)&local_ac,(ushort *)L"LineageWarrior.MFighter",1);
    local_c = local_ac;
    break;
  case (FOutputDevice *)0x1:
    FName::FName((FName *)&local_54,(ushort *)L"LineageWarrior.FFighter",1);
    local_c = local_54;
    break;
  case (FOutputDevice *)0x2:
    FName::FName((FName *)local_5c,(ushort *)L"LineageWarrior.MDarkElf",1);
    local_c = local_5c[0];
    break;
  case (FOutputDevice *)0x3:
    FName::FName((FName *)&local_2c,(ushort *)L"LineageWarrior.FDarkElf",1);
    local_c = local_2c;
    break;
  case (FOutputDevice *)0x4:
    FName::FName((FName *)&local_6c,(ushort *)L"LineageWarrior.MDwarf",1);
    local_c = local_6c;
    break;
  case (FOutputDevice *)0x5:
    FName::FName((FName *)&local_34,(ushort *)L"LineageWarrior.FDwarf",1);
    local_c = local_34;
    break;
  case (FOutputDevice *)0x6:
    FName::FName((FName *)&local_68,(ushort *)L"LineageWarrior.MElf",1);
    local_c = local_68;
    break;
  case (FOutputDevice *)0x7:
    FName::FName((FName *)&local_3c,(ushort *)L"LineageWarrior.FElf",1);
    local_c = local_3c;
    break;
  case (FOutputDevice *)0x8:
    FName::FName((FName *)&local_90,(ushort *)L"LineageWarrior.MMagic",1);
    local_c = local_90;
    break;
  case (FOutputDevice *)0x9:
    FName::FName((FName *)&local_44,(ushort *)L"LineageWarrior.FMagic",1);
    local_c = local_44;
    break;
  case (FOutputDevice *)0xa:
    FName::FName((FName *)&local_70,(ushort *)L"LineageWarrior.MOrc",1);
    local_c = local_70;
    break;
  case (FOutputDevice *)0xb:
    FName::FName((FName *)&local_4c,(ushort *)L"LineageWarrior.FOrc",1);
    local_c = local_4c;
    break;
  case (FOutputDevice *)0xc:
    FName::FName((FName *)&local_18,(ushort *)L"LineageWarrior.MShaman",1);
    local_c = local_18;
    break;
  case (FOutputDevice *)0xd:
    FName::FName((FName *)&local_14,(ushort *)L"LineageWarrior.FShaman",1);
    local_c = local_14;
  }
  local_1c = 0;
  pcVar12 = StaticFindObject_exref;
  do {
    iVar5 = local_1c;
    if (*(int *)(local_8 + 0xc) <= local_1c) {
      for (iVar5 = 0; local_24 = iVar5, iVar5 < *(int *)(local_8 + 0x10); iVar5 = iVar5 + 1) {
        FName::FName((FName *)&param_2,0);
        pFVar11 = (FName *)(local_8 + 0x104 + iVar5 * 4);
        iVar1 = FName::operator!=(pFVar11,(FName *)&param_2);
        if (iVar1 != 0) {
          L2FName::operator*((L2FName *)pFVar11);
          pUVar19 = (UPackageMap *)(*pcVar12)();
          if (pUVar19 == (UPackageMap *)0x0) {
            pUVar13 = pUVar19;
            pUVar15 = pUVar19;
            puVar3 = L2FName::operator*((L2FName *)pFVar11);
            local_10c = 0x1045d9da;
            pUVar2 = UObject::StaticLoadObject
                               (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar3,
                                (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
            if (pUVar2 == (UObject *)0x0) {
              L2FName::operator*((L2FName *)pFVar11);
              FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
            }
          }
        }
      }
      for (iVar5 = 0; local_64 = iVar5, iVar5 < *(int *)(local_8 + 4); iVar5 = iVar5 + 1) {
        FName::FName((FName *)&param_2,0);
        pFVar11 = (FName *)(local_8 + 0x14 + iVar5 * 4);
        iVar1 = FName::operator!=(pFVar11,(FName *)&param_2);
        if (iVar1 != 0) {
          L2FName::operator*((L2FName *)pFVar11);
          pUVar19 = (UPackageMap *)(*pcVar12)();
          if (pUVar19 == (UPackageMap *)0x0) {
            pUVar13 = pUVar19;
            pUVar15 = pUVar19;
            puVar3 = L2FName::operator*((L2FName *)pFVar11);
            local_10c = 0x1045da71;
            pUVar2 = UObject::StaticLoadObject
                               (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,
                                (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
            if (pUVar2 == (UObject *)0x0) {
              L2FName::operator*((L2FName *)pFVar11);
              FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
            }
          }
        }
      }
      for (iVar5 = 0; local_28 = iVar5, iVar5 < *(int *)(local_8 + 8); iVar5 = iVar5 + 1) {
        FName::FName((FName *)&param_2,0);
        pFVar11 = (FName *)(local_8 + 100 + iVar5 * 4);
        iVar1 = FName::operator!=(pFVar11,(FName *)&param_2);
        if (iVar1 != 0) {
          L2FName::operator*((L2FName *)pFVar11);
          pUVar19 = (UPackageMap *)(*pcVar12)();
          if (pUVar19 == (UPackageMap *)0x0) {
            pUVar13 = pUVar19;
            pUVar15 = pUVar19;
            puVar3 = L2FName::operator*((L2FName *)pFVar11);
            local_10c = 0x1045db08;
            pUVar2 = UObject::StaticLoadObject
                               (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar3,
                                (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
            if (pUVar2 == (UObject *)0x0) {
              L2FName::operator*((L2FName *)pFVar11);
              FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
            }
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x154);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      pcVar9 = StaticLoadObject_exref;
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        pUVar19 = (UPackageMap *)(*pcVar12)();
        pcVar9 = StaticLoadObject_exref;
        if (pUVar19 == (UPackageMap *)0x0) {
          pUVar13 = pUVar19;
          pUVar15 = pUVar19;
          puVar3 = L2FName::operator*((L2FName *)pFVar11);
          pcVar9 = StaticLoadObject_exref;
          local_10c = 0x1045db8d;
          pUVar2 = UObject::StaticLoadObject
                             (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,
                              (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
          if (pUVar2 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x164);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x158);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x168);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x15c);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x16c);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x160);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x170);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        L2FName::operator*((L2FName *)pFVar11);
        iVar5 = (*pcVar12)();
        if (iVar5 == 0) {
          L2FName::operator*((L2FName *)pFVar11);
          iVar5 = (*pcVar9)();
          if (iVar5 == 0) {
            L2FName::operator*((L2FName *)pFVar11);
            FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
      if (param_3 != 0) {
        for (iVar5 = 0; local_30 = iVar5, iVar5 < *(int *)(local_8 + 0x17c); iVar5 = iVar5 + 1) {
          FName::FName((FName *)&param_2,0);
          pFVar11 = (FName *)(local_8 + 0x1a8 + iVar5 * 4);
          iVar1 = FName::operator!=(pFVar11,(FName *)&param_2);
          if (iVar1 != 0) {
            L2FName::operator*((L2FName *)pFVar11);
            pUVar19 = (UPackageMap *)(*pcVar12)();
            if (pUVar19 == (UPackageMap *)0x0) {
              pUVar13 = pUVar19;
              pUVar15 = pUVar19;
              puVar3 = L2FName::operator*((L2FName *)pFVar11);
              local_10c = 0x1045df95;
              pUVar2 = UObject::StaticLoadObject
                                 (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,
                                  (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
              if (pUVar2 == (UObject *)0x0) {
                L2FName::operator*((L2FName *)pFVar11);
                FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,
                                    *(ushort **)GCheckGrpLog_exref);
              }
            }
          }
        }
        for (iVar5 = 0; local_38 = iVar5, iVar5 < *(int *)(local_8 + 0x180); iVar5 = iVar5 + 1) {
          FName::FName((FName *)&param_2,0);
          pFVar11 = (FName *)(local_8 + 0x1b4 + iVar5 * 4);
          iVar1 = FName::operator!=(pFVar11,(FName *)&param_2);
          if (iVar1 != 0) {
            L2FName::operator*((L2FName *)pFVar11);
            pUVar19 = (UPackageMap *)(*pcVar12)();
            if (pUVar19 == (UPackageMap *)0x0) {
              pUVar13 = pUVar19;
              pUVar15 = pUVar19;
              puVar3 = L2FName::operator*((L2FName *)pFVar11);
              local_10c = 0x1045e032;
              pUVar2 = UObject::StaticLoadObject
                                 (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,
                                  (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
              if (pUVar2 == (UObject *)0x0) {
                L2FName::operator*((L2FName *)pFVar11);
                FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,
                                    *(ushort **)GCheckGrpLog_exref);
              }
            }
          }
        }
        for (iVar5 = 0; local_40 = iVar5, iVar5 < *(int *)(local_8 + 0x184); iVar5 = iVar5 + 1) {
          FName::FName((FName *)&param_2,0);
          pFVar11 = (FName *)(local_8 + 0x1c8 + iVar5 * 4);
          iVar1 = FName::operator!=(pFVar11,(FName *)&param_2);
          if (iVar1 != 0) {
            L2FName::operator*((L2FName *)pFVar11);
            pUVar19 = (UPackageMap *)(*pcVar12)();
            if (pUVar19 == (UPackageMap *)0x0) {
              pUVar13 = pUVar19;
              pUVar15 = pUVar19;
              puVar3 = L2FName::operator*((L2FName *)pFVar11);
              local_10c = 0x1045e0cf;
              pUVar2 = UObject::StaticLoadObject
                                 (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,
                                  (ushort *)pUVar19,(ulong)pUVar13,pUVar15);
              if (pUVar2 == (UObject *)0x0) {
                L2FName::operator*((L2FName *)pFVar11);
                FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,
                                    *(ushort **)GCheckGrpLog_exref);
              }
            }
          }
        }
        for (iVar5 = 0; local_50 = iVar5, iVar5 < 8; iVar5 = iVar5 + 1) {
          for (iVar1 = 0; local_48 = iVar1, iVar1 < *(int *)(local_8 + 0x188 + iVar5 * 4);
              iVar1 = iVar1 + 1) {
            FName::FName((FName *)&param_2,0);
            pFVar11 = (FName *)(local_8 + 0x1d4 + (iVar1 + iVar5 * 5) * 4);
            iVar10 = FName::operator!=(pFVar11,(FName *)&param_2);
            if (iVar10 != 0) {
              iVar10 = 0;
              puVar3 = L2FName::operator*((L2FName *)pFVar11);
              pUVar2 = UObject::StaticFindObject
                                 (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar10);
              if (pUVar2 == (UObject *)0x0) {
                pUVar16 = pUVar2;
                pUVar18 = pUVar2;
                puVar3 = L2FName::operator*((L2FName *)pFVar11);
                pUVar2 = UObject::StaticLoadObject
                                   (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,
                                    (ushort *)pUVar2,(ulong)pUVar16,(UPackageMap *)pUVar18);
                if (pUVar2 == (UObject *)0x0) {
                  L2FName::operator*((L2FName *)pFVar11);
                  FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
                }
              }
            }
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      pFVar11 = (FName *)(local_8 + 0x174);
      iVar5 = FName::operator!=(pFVar11,(FName *)&param_2);
      if (iVar5 != 0) {
        pUVar19 = (UPackageMap *)0x0;
        uVar17 = 1;
        puVar14 = (ushort *)0x0;
        puVar3 = L2FName::operator*((L2FName *)pFVar11);
        pUVar6 = UObject::StaticLoadClass
                           (&AActor::PrivateStaticClass,(UObject *)0x0,puVar3,puVar14,uVar17,pUVar19
                           );
        if (pUVar6 == (UClass *)0x0) {
          L2FName::operator*((L2FName *)pFVar11);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
LAB_1045d75b:
      *unaff_FS_OFFSET = local_7c;
      return;
    }
    FName::FName((FName *)&local_14,0);
    pFVar11 = (FName *)(local_8 + 0xb4 + iVar5 * 4);
    iVar1 = FName::operator!=(pFVar11,(FName *)&local_14);
    if (iVar1 == 0) goto LAB_1045d967;
    L2FName::operator*((L2FName *)pFVar11);
    pUVar2 = (UObject *)(*pcVar12)();
    local_20 = pUVar2;
    if (pUVar2 == (UObject *)0x0) {
      pUVar16 = pUVar2;
      pUVar18 = pUVar2;
      puVar3 = L2FName::operator*((L2FName *)pFVar11);
      local_20 = UObject::StaticLoadObject
                           (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,
                            (ushort *)pUVar2,(ulong)pUVar16,(UPackageMap *)pUVar18);
      if (local_20 != (UObject *)0x0) goto LAB_1045d649;
      L2FName::operator*((L2FName *)pFVar11);
      FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                          (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
      if (param_2 != 0) {
        pUVar19 = (UPackageMap *)0x0;
        uVar17 = 0;
        puVar14 = (ushort *)0x0;
        puVar3 = L2FName::operator*((L2FName *)pFVar11);
        local_20 = UObject::StaticLoadObject
                             (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,puVar14,
                              uVar17,pUVar19);
        if (local_20 != (UObject *)0x0) goto LAB_1045d649;
      }
    }
    else {
LAB_1045d649:
      if (param_2 != 0) {
        FString::FString(local_c4);
        local_74._0_1_ = 1;
        FString::FString(local_9c);
        local_74._0_1_ = 2;
        FString::operator=(local_9c,(ushort *)L"Engine.PlayerController");
        pUVar19 = (UPackageMap *)0x0;
        uVar17 = 1;
        puVar14 = (ushort *)0x0;
        puVar3 = FString::operator*(local_9c);
        UObject::StaticLoadClass
                  (&AController::PrivateStaticClass,(UObject *)0x0,puVar3,puVar14,uVar17,pUVar19);
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        iVar5 = **(int **)(DAT_10c51044 + 0x19c);
        puVar4 = (undefined4 *)FRotator::FRotator(local_d4,0,0,0);
        local_10c = *puVar4;
        uStack_118 = local_8c;
        local_114 = local_88;
        local_110 = local_84;
        local_18 = (undefined1 *)&uStack_11c;
        uStack_11c = local_84;
        FName::FName((FName *)&uStack_11c,0);
        iVar5 = (**(code **)(iVar5 + 0xc0))();
        if (iVar5 == 0) {
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
        else {
          pUVar19 = (UPackageMap *)0x0;
          uVar17 = 0;
          puVar14 = (ushort *)0x0;
          puVar3 = FName::operator*((FName *)&local_c);
          uStack_13c = 0x1045d78e;
          pUVar6 = UObject::StaticLoadClass
                             (&APawn::PrivateStaticClass,(UObject *)0x0,puVar3,puVar14,uVar17,
                              pUVar19);
          *(UClass **)(iVar5 + 0x4f8) = pUVar6;
          if (pUVar6 != (UClass *)0x0) {
            local_a8 = 0;
            local_a4 = 0;
            local_a0 = 0;
            iVar1 = **(int **)(DAT_10c51044 + 0x19c);
            puVar4 = (undefined4 *)FRotator::FRotator(local_e0,0,0,0);
            uStack_140 = *puVar4;
            uStack_13c = puVar4[1];
            uStack_14c = local_a8;
            uStack_148 = local_a4;
            uStack_144 = local_a0;
            local_18 = (undefined1 *)&uStack_150;
            uStack_150 = local_a0;
            FName::FName((FName *)&uStack_150,0);
            uVar7 = (**(code **)(iVar1 + 0xc0))(*(undefined4 *)(iVar5 + 0x4f8));
            *(undefined4 *)(iVar5 + 0x3bc) = uVar7;
            thunk_FUN_103688b0();
            local_74 = CONCAT31(local_74._1_3_,3);
            APawn::GetAllAnimName(*(APawn **)(iVar5 + 0x3bc),(TArray<FName> *)&local_b8);
            for (local_10 = 0; local_10 < local_b4; local_10 = local_10 + 1) {
              iVar1 = *(int *)(local_20 + 0x248);
              if (iVar1 != 0) {
                for (iVar10 = 0; local_60 = iVar10, iVar10 < *(int *)(iVar1 + 0x70);
                    iVar10 = iVar10 + 1) {
                  iVar8 = FName::operator==((FName *)(iVar10 * 0x74 + *(int *)(iVar1 + 0x6c)),
                                            (FName *)(local_b8 + local_10 * 4));
                  if (iVar8 != 0) goto LAB_1045d8f9;
                }
                FName::operator*((FName *)(local_b8 + local_10 * 4));
                L2FName::operator*((L2FName *)(local_8 + 0xb4 + local_1c * 4));
                FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,
                                    *(ushort **)GCheckGrpLog_exref);
              }
LAB_1045d8f9:
              pcVar12 = StaticFindObject_exref;
            }
            (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(*(undefined4 *)(iVar5 + 0x3bc),0)
            ;
            (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(iVar5,0);
            local_74._0_1_ = 2;
            thunk_FUN_103792c0();
            local_74._0_1_ = 1;
            FString::~FString(local_9c);
            local_74 = (uint)local_74._1_3_ << 8;
            FString::~FString(local_c4);
            iVar5 = local_1c;
            goto LAB_1045d967;
          }
          FName::operator*((FName *)&local_c);
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
        local_74._0_1_ = 1;
        FString::~FString(local_9c);
        local_74 = (uint)local_74._1_3_ << 8;
        FString::~FString(local_c4);
        goto LAB_1045d75b;
      }
    }
LAB_1045d967:
    local_1c = iVar5 + 1;
  } while( true );
}


// ==== 1045e233 Catch@1045e233

void Catch_1045e233(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 1045e247 Catch@1045e247

void Catch_1045e247(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2CharData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1045e650 FUN_1045e650

void FUN_1045e650(FOutputDevice *param_1,undefined4 *param_2,int param_3)

{
  FName *pFVar1;
  int iVar2;
  ushort *puVar3;
  UObject *pUVar4;
  undefined4 *puVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  UObject *pUVar10;
  ushort *puVar11;
  UObject *pUVar12;
  ulong uVar13;
  UPackageMap *pUVar14;
  FString local_80 [12];
  FString local_74 [12];
  int local_68;
  int local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  UObject *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10812f1a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  local_8 = 0;
  ExceptionList = &local_10;
  FName::FName((FName *)&local_20,0);
  pFVar1 = (FName *)(in_ECX + 0x24);
  iVar2 = FName::operator!=(pFVar1,(FName *)&local_20);
  if (iVar2 == 0) goto LAB_1045ea57;
  iVar2 = 0;
  puVar3 = L2FName::operator*((L2FName *)pFVar1);
  pUVar4 = UObject::StaticFindObject
                     (&USkeletalMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar2);
  local_1c = pUVar4;
  if (pUVar4 == (UObject *)0x0) {
    pUVar10 = pUVar4;
    pUVar12 = pUVar4;
    puVar3 = L2FName::operator*((L2FName *)pFVar1);
    local_a8 = 0x1045e6dc;
    local_1c = UObject::StaticLoadObject
                         (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                          (ulong)pUVar10,(UPackageMap *)pUVar12);
    if (local_1c == (UObject *)0x0) {
      L2FName::operator*((L2FName *)pFVar1);
      FString::operator*((FString *)(in_ECX + 4));
      FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
      if (param_2 == (undefined4 *)0x0) goto LAB_1045ea57;
      pUVar14 = (UPackageMap *)0x0;
      uVar13 = 0;
      puVar11 = (ushort *)0x0;
      puVar3 = L2FName::operator*((L2FName *)pFVar1);
      local_1c = UObject::StaticLoadObject
                           (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,puVar11,uVar13,
                            pUVar14);
      if (local_1c == (UObject *)0x0) goto LAB_1045ea57;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
LAB_1045ea57:
    for (iVar2 = 0; local_28 = iVar2, iVar2 < *(int *)(in_ECX + 0x28); iVar2 = iVar2 + 1) {
      FName::FName((FName *)&param_2,0);
      pFVar1 = (FName *)(in_ECX + 0x2c + iVar2 * 4);
      iVar9 = FName::operator!=(pFVar1,(FName *)&param_2);
      if (iVar9 != 0) {
        iVar9 = 0;
        puVar3 = L2FName::operator*((L2FName *)pFVar1);
        pUVar4 = UObject::StaticFindObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar9);
        if (pUVar4 == (UObject *)0x0) {
          pUVar10 = pUVar4;
          pUVar12 = pUVar4;
          puVar3 = L2FName::operator*((L2FName *)pFVar1);
          pUVar4 = UObject::StaticLoadObject
                             (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                              (ulong)pUVar10,(UPackageMap *)pUVar12);
          if (pUVar4 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar1);
            FString::operator*((FString *)(in_ECX + 4));
            FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
          }
        }
      }
    }
    for (iVar2 = 0; local_2c = iVar2, iVar2 < *(int *)(in_ECX + 0x44); iVar2 = iVar2 + 1) {
      FName::FName((FName *)&param_2,0);
      iVar9 = iVar2 * 4;
      iVar8 = FName::operator!=((FName *)(*(int *)(in_ECX + 0x40) + iVar9),(FName *)&param_2);
      if (iVar8 != 0) {
        iVar8 = 0;
        puVar3 = L2FName::operator*((L2FName *)(*(int *)(in_ECX + 0x40) + iVar9));
        pUVar4 = UObject::StaticFindObject
                           (&UMaterial::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar8);
        if (pUVar4 == (UObject *)0x0) {
          pUVar10 = pUVar4;
          pUVar12 = pUVar4;
          puVar3 = L2FName::operator*((L2FName *)(*(int *)(in_ECX + 0x40) + iVar9));
          pUVar4 = UObject::StaticLoadObject
                             (&UMaterial::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                              (ulong)pUVar10,(UPackageMap *)pUVar12);
          if (pUVar4 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)(*(int *)(in_ECX + 0x40) + iVar9));
            FString::operator*((FString *)(in_ECX + 4));
            FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
    }
    for (iVar2 = 0; local_30 = iVar2, iVar2 < *(int *)(in_ECX + 0x9c); iVar2 = iVar2 + 1) {
      FName::FName((FName *)&param_2,0);
      pFVar1 = (FName *)(in_ECX + 0xa0 + iVar2 * 4);
      iVar9 = FName::operator!=(pFVar1,(FName *)&param_2);
      if (iVar9 != 0) {
        iVar9 = 0;
        puVar3 = L2FName::operator*((L2FName *)pFVar1);
        pUVar4 = UObject::StaticFindObject
                           (&AEmitter::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar9);
        if (pUVar4 == (UObject *)0x0) {
          pUVar10 = pUVar4;
          pUVar12 = pUVar4;
          puVar3 = L2FName::operator*((L2FName *)pFVar1);
          pUVar4 = UObject::StaticLoadObject
                             (&AEmitter::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                              (ulong)pUVar10,(UPackageMap *)pUVar12);
          if (pUVar4 == (UObject *)0x0) {
            L2FName::operator*((L2FName *)pFVar1);
            FString::operator*((FString *)(in_ECX + 4));
            FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          }
        }
      }
    }
    if (param_3 != 0) {
      for (iVar2 = 0; local_34 = iVar2, iVar2 < *(int *)(in_ECX + 100); iVar2 = iVar2 + 1) {
        FName::FName((FName *)&param_2,0);
        pFVar1 = (FName *)(in_ECX + 0x68 + iVar2 * 4);
        iVar9 = FName::operator!=(pFVar1,(FName *)&param_2);
        if (iVar9 != 0) {
          iVar9 = 0;
          puVar3 = L2FName::operator*((L2FName *)pFVar1);
          pUVar4 = UObject::StaticFindObject
                             (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar9);
          if (pUVar4 == (UObject *)0x0) {
            pUVar10 = pUVar4;
            pUVar12 = pUVar4;
            puVar3 = L2FName::operator*((L2FName *)pFVar1);
            pUVar4 = UObject::StaticLoadObject
                               (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                                (ulong)pUVar10,(UPackageMap *)pUVar12);
            if (pUVar4 == (UObject *)0x0) {
              L2FName::operator*((L2FName *)pFVar1);
              FString::operator*((FString *)(in_ECX + 4));
              FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                                  (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
            }
          }
        }
      }
      for (iVar2 = 0; local_38 = iVar2, iVar2 < *(int *)(in_ECX + 0x74); iVar2 = iVar2 + 1) {
        FName::FName((FName *)&param_2,0);
        pFVar1 = (FName *)(in_ECX + 0x78 + iVar2 * 4);
        iVar9 = FName::operator!=(pFVar1,(FName *)&param_2);
        if (iVar9 != 0) {
          iVar9 = 0;
          puVar3 = L2FName::operator*((L2FName *)pFVar1);
          pUVar4 = UObject::StaticFindObject
                             (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar9);
          if (pUVar4 == (UObject *)0x0) {
            pUVar10 = pUVar4;
            pUVar12 = pUVar4;
            puVar3 = L2FName::operator*((L2FName *)pFVar1);
            pUVar4 = UObject::StaticLoadObject
                               (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                                (ulong)pUVar10,(UPackageMap *)pUVar12);
            if (pUVar4 == (UObject *)0x0) {
              L2FName::operator*((L2FName *)pFVar1);
              FString::operator*((FString *)(in_ECX + 4));
              FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref
                                 );
            }
          }
        }
      }
      for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x8c); iVar2 = iVar2 + 1) {
        local_3c = iVar2;
        FName::FName((FName *)&param_2,0);
        pFVar1 = (FName *)(in_ECX + 0x90 + iVar2 * 4);
        iVar9 = FName::operator!=(pFVar1,(FName *)&param_2);
        if (iVar9 != 0) {
          iVar9 = 0;
          puVar3 = L2FName::operator*((L2FName *)pFVar1);
          pUVar4 = UObject::StaticFindObject
                             (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar9);
          if (pUVar4 == (UObject *)0x0) {
            pUVar10 = pUVar4;
            pUVar12 = pUVar4;
            puVar3 = L2FName::operator*((L2FName *)pFVar1);
            pUVar4 = UObject::StaticLoadObject
                               (&USound::PrivateStaticClass,(UObject *)0x0,puVar3,(ushort *)pUVar4,
                                (ulong)pUVar10,(UPackageMap *)pUVar12);
            if (pUVar4 == (UObject *)0x0) {
              L2FName::operator*((L2FName *)pFVar1);
              FString::operator*((FString *)(in_ECX + 4));
              FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
            }
          }
        }
      }
    }
    ExceptionList = local_10;
    return;
  }
  FString::FString(local_80);
  local_8._0_1_ = 1;
  FString::FString(local_74);
  local_8._0_1_ = 2;
  FString::operator=(local_74,(ushort *)L"Engine.PlayerController");
  pUVar14 = (UPackageMap *)0x0;
  uVar13 = 1;
  puVar11 = (ushort *)0x0;
  puVar3 = FString::operator*(local_74);
  UObject::StaticLoadClass
            (&AController::PrivateStaticClass,(UObject *)0x0,puVar3,puVar11,uVar13,pUVar14);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar2 = **(int **)(DAT_10c51044 + 0x19c);
  puVar5 = (undefined4 *)FRotator::FRotator((FRotator *)&local_5c,0,0,0);
  local_a8 = *puVar5;
  local_b4 = local_50;
  local_b0 = local_4c;
  local_ac = local_48;
  param_2 = &uStack_b8;
  uStack_b8 = local_48;
  FName::FName((FName *)&uStack_b8,0);
  iVar2 = (**(code **)(iVar2 + 0xc0))();
  param_2 = (undefined4 *)iVar2;
  if (iVar2 == 0) {
    FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
  }
  else {
    pUVar14 = (UPackageMap *)0x0;
    uVar13 = 0;
    puVar11 = (ushort *)0x0;
    puVar3 = L2FName::operator*((L2FName *)(in_ECX + 0x20));
    uStack_d8 = 0x1045e888;
    pUVar6 = UObject::StaticLoadClass
                       (&APawn::PrivateStaticClass,(UObject *)0x0,puVar3,puVar11,uVar13,pUVar14);
    *(UClass **)(iVar2 + 0x4f8) = pUVar6;
    if (pUVar6 != (UClass *)0x0) {
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      iVar9 = **(int **)(DAT_10c51044 + 0x19c);
      puVar5 = (undefined4 *)FRotator::FRotator((FRotator *)&local_50,0,0,0);
      uStack_dc = *puVar5;
      uStack_d8 = puVar5[1];
      uStack_e8 = local_5c;
      uStack_e4 = local_58;
      uStack_e0 = local_54;
      local_20 = (undefined1 *)&uStack_ec;
      uStack_ec = local_54;
      FName::FName((FName *)&uStack_ec,0);
      uVar7 = (**(code **)(iVar9 + 0xc0))(*(undefined4 *)(iVar2 + 0x4f8));
      *(undefined4 *)(iVar2 + 0x3bc) = uVar7;
      thunk_FUN_103688b0();
      local_8 = CONCAT31(local_8._1_3_,3);
      APawn::GetAllAnimName(*(APawn **)(iVar2 + 0x3bc),(TArray<FName> *)&local_68);
      for (local_18 = 0; local_18 < local_64; local_18 = local_18 + 1) {
        iVar2 = *(int *)(local_1c + 0x248);
        if (iVar2 != 0) {
          for (iVar9 = 0; local_24 = iVar9, iVar9 < *(int *)(iVar2 + 0x70); iVar9 = iVar9 + 1) {
            iVar8 = FName::operator==((FName *)(iVar9 * 0x74 + *(int *)(iVar2 + 0x6c)),
                                      (FName *)(local_68 + local_18 * 4));
            if (iVar8 != 0) goto LAB_1045e9ee;
          }
          FName::operator*((FName *)(local_68 + local_18 * 4));
          FString::operator*((FString *)(in_ECX + 4));
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
LAB_1045e9ee:
        iVar2 = (int)param_2;
      }
      (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(*(undefined4 *)(iVar2 + 0x3bc),0);
      (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(iVar2,0);
      local_8._0_1_ = 2;
      thunk_FUN_103792c0();
      local_8._0_1_ = 1;
      FString::~FString(local_74);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_80);
      goto LAB_1045ea57;
    }
    L2FName::operator*((L2FName *)(in_ECX + 0x20));
    FString::operator*((FString *)(in_ECX + 4));
    FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_74);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_80);
  ExceptionList = local_10;
  return;
}


// ==== 1045ee4f Catch@1045ee4f

void Catch_1045ee4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10914c48);
}


// ==== 1045ee63 Catch@1045ee63

void Catch_1045ee63(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NpcData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1045f090 FUN_1045f090

void FUN_1045f090(FArchive *param_1)

{
  FArchive *this;
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this = param_1;
  puStack_c = &LAB_10812f30;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,(FString *)(in_ECX + 0x10));
  thunk_FUN_10330040(this,in_ECX + 0x1c);
  thunk_FUN_10330040(this,in_ECX + 0x20);
  thunk_FUN_10330040(this,in_ECX + 0x24);
  thunk_FUN_10330040(this,in_ECX + 0x28);
  thunk_FUN_10330040(this,in_ECX + 0x2c);
  thunk_FUN_10330040(this,in_ECX + 0x30);
  thunk_FUN_10330040(this,in_ECX + 0x34);
  thunk_FUN_10330040(this,in_ECX + 0x38);
  iVar1 = FArchive::IsLoading(this);
  if (iVar1 == 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 8); iVar1 = iVar1 + 1) {
      thunk_FUN_10446d00(this);
    }
  }
  else {
    for (; iVar2 < *(int *)(in_ECX + 0x38); iVar2 = iVar2 + 1) {
      param_1 = (FArchive *)thunk_FUN_1032ffc0(8);
      thunk_FUN_10446d00(this);
      thunk_FUN_104587d0(&param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1045f18f Catch@1045f18f

void Catch_1045f18f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1045f1a3 Catch@1045f1a3

void Catch_1045f1a3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2RecipeData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1045f210 FUN_1045f210

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_1045f210(void)

{
  int iVar1;
  int *piVar2;
  FL2ServerData *pFVar3;
  ushort *puVar4;
  UObject *this;
  FL2GameData *in_ECX;
  FOutputDevice *this_00;
  int iVar5;
  undefined1 auStackY_8004c [32708];
  undefined4 uStackY_78088;
  FStaticTexture local_4c [24];
  int local_34;
  int local_2c;
  FL2GameData *local_24;
  void *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10812f50;
  local_10 = ExceptionList;
  local_18 = (int *)0x1045f233;
  local_14 = &stack0xfff87fa8;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  thunk_FUN_1043c5c0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FL2GameData::ServerDataLoad(in_ECX,1);
  piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))();
  local_18 = piVar2;
  if (piVar2 == (int *)0x0) {
    FOutputDevice::Logf(this_00,*(ushort **)GWarn_exref);
  }
  else {
    local_2c = 1;
    while (iVar1 = local_2c, piVar2 = local_18, local_2c < 0x10) {
      pFVar3 = FL2GameData::GetServerData(in_ECX,local_2c);
      puVar4 = FString::operator*((FString *)(pFVar3 + 4));
      this = UObject::StaticFindObject(&UTexture::PrivateStaticClass,(UObject *)0xffffffff,puVar4,0)
      ;
      if (this == (UObject *)0x0) {
        this = UObject::StaticLoadObject
                         (&UTexture::PrivateStaticClass,(UObject *)0x0,puVar4,(ushort *)0x0,0,
                          (UPackageMap *)0x0);
        if (this != (UObject *)0x0) goto LAB_1045f2ee;
      }
      else {
LAB_1045f2ee:
        UObject::SetFlags(this,0x4000000);
      }
      (*(code *)**(undefined4 **)(*(int *)(this + 0x5f0) + 0x10))();
      FStaticTexture::FStaticTexture(local_4c,(UTexture *)this);
      local_8._0_1_ = 2;
      local_1c = FStaticTexture::GetRawTextureData(local_4c,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      FStaticTexture::~FStaticTexture(local_4c);
      for (iVar5 = 0; local_34 = iVar5, iVar5 < 0x8000; iVar5 = iVar5 + 1) {
        thunk_FUN_1032ffe0();
        auStackY_8004c[iVar1 * 0x8000 + iVar5] = *(undefined1 *)(iVar5 + (int)local_1c);
        uStackY_78088 = 0x1045f389;
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      in_ECX = local_24;
      local_2c = iVar1 + 1;
    }
  }
  thunk_FUN_1043c780();
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  thunk_FUN_10330020();
  (**(code **)(*piVar2 + 0x58))();
  (**(code **)*piVar2)();
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_1043c5d0();
  ExceptionList = local_10;
  return 1;
}


// ==== 1045f42b Catch@1045f42b

void Catch_1045f42b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1045f43f Catch@1045f43f

void Catch_1045f43f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ServerDataCreate()");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1045f4f0 FUN_1045f4f0

void FUN_1045f4f0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10812f8f;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x34));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x28));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x1c));
  local_4 = 0xffffffff;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 1045f580 FUN_1045f580

void FUN_1045f580(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10813030;
  local_c = ExceptionList;
  local_4 = 8;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  local_4._0_1_ = 7;
  thunk_FUN_10325f90();
  local_4._0_1_ = 6;
  FString::~FString((FString *)(in_ECX + 0x94));
  local_4._0_1_ = 5;
  FString::~FString((FString *)(in_ECX + 0x88));
  local_4._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0x68));
  local_4._0_1_ = 3;
  thunk_FUN_10325f90();
  local_4._0_1_ = 2;
  thunk_FUN_10325f90();
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x28));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 1045f680 FUN_1045f680

void FUN_1045f680(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813060;
  local_10 = ExceptionList;
  iVar1 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  while (iVar1 < *(int *)(in_ECX + 0x849e8)) {
    if (*(int *)(*(int *)(in_ECX + 0x849e4) + iVar1 * 4) == 0) {
      appFailAssert("pGameTipData",".\\L2GameData.cpp",0xe59);
      iVar1 = iVar1 + 1;
    }
    else {
      thunk_FUN_1044f4f0(1);
      iVar1 = iVar1 + 1;
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x849e8); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x849e4),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 1045f728 Catch@1045f728

void Catch_1045f728(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1045f73c Catch@1045f73c

void Catch_1045f73c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GameTipDataClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1045f790 FUN_1045f790

void FUN_1045f790(void)

{
  int iVar1;
  void **ppvVar2;
  int in_ECX;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081307c;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (0 < *(int *)(in_ECX + 0x3d20)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x3d1c) + iVar3 * 4);
      if (iVar1 != 0) {
        FString::Empty((FString *)(iVar1 + 4));
        local_4 = 0xffffffff;
        FString::~FString((FString *)(iVar1 + 4));
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar3 = iVar3 + 1;
      ppvVar2 = ExceptionList;
    } while (iVar3 < *(int *)(in_ECX + 0x3d20));
  }
  ExceptionList = ppvVar2;
  FArray::Empty((FArray *)(in_ECX + 0x3d1c),4,0);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1045f850 FUN_1045f850

ushort * FUN_1045f850(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  
  if ((-1 < param_1) && (*(int *)(in_ECX + 0x3d18) != 0)) {
    piVar1 = (int *)thunk_FUN_10458d10(&param_1);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      piVar1 = (int *)*piVar1;
      iVar2 = appRand();
      puVar3 = L2FName::operator*((L2FName *)(piVar1 + iVar2 % *piVar1 + 1));
      return puVar3;
    }
  }
  return (ushort *)0x0;
}


// ==== 1045f8b0 FUN_1045f8b0

ushort * FUN_1045f8b0(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  
  if (param_1 - 1U < 1000) {
    piVar1 = (int *)thunk_FUN_10458d10(&param_1);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      piVar1 = (int *)*piVar1;
      iVar2 = appRand();
      puVar3 = L2FName::operator*((L2FName *)(piVar1 + iVar2 % *piVar1 + 1));
      return puVar3;
    }
  }
  return (ushort *)0x0;
}


// ==== 1045f910 FUN_1045f910

undefined4 FUN_1045f910(int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  FL2GameData *in_ECX;
  int iVar7;
  int iVar8;
  EFindName EVar9;
  ushort local_1d0 [64];
  FOutputDevice local_150 [248];
  undefined1 *local_58;
  void *local_54;
  undefined1 *puStack_50;
  int local_4c;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c [2];
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  FArchive *local_c;
  uchar *local_8;
  
  puStack_50 = &LAB_108130ad;
  local_54 = ExceptionList;
  local_58 = &stack0xfffffe24;
  iVar7 = 0;
  local_4c = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_c = (FArchive *)0x0;
  ExceptionList = &local_54;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_150,(ushort *)L"ItemName");
  pFVar1 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 8))();
  local_c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_150,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1045fab8;
    }
  }
  else if (param_1 == 0) {
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))();
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_150,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar7 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar7 == 0) {
        FOutputDevice::Logf(local_150,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))();
      for (local_1c = 0; local_1c < 0; local_1c = local_1c + 1) {
        local_18 = 0;
        (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
        piVar3 = (int *)thunk_FUN_10422ee0(&local_18);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xc))(pFVar2,1);
        }
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0();
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)();
    }
    goto LAB_1045fab8;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_150,(ushort *)L"ItemName");
  pFVar1 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 8))();
  local_c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_150,*(ushort **)GWarn_exref);
    local_14 = 0;
    pFVar1 = local_c;
  }
  else {
    thunk_FUN_104a14b0();
    local_4c._0_1_ = 1;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_10,param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_150,*(ushort **)GWarn_exref);
      local_14 = 0;
      local_4c = (uint)local_4c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_c;
    }
    else {
      for (; local_38 = iVar7, iVar7 < 0xf; iVar7 = iVar7 + 1) {
        thunk_FUN_104a1120();
      }
      thunk_FUN_1049f750();
      iVar7 = thunk_FUN_104a1840();
      if (iVar7 == 0) {
        thunk_FUN_10445eb0();
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        local_18 = thunk_FUN_1049f840();
        local_24 = 0;
        while (iVar7 = local_24, local_24 < local_18) {
          local_3c = thunk_FUN_104a0b70();
          iVar4 = thunk_FUN_10422ee0();
          if (iVar4 != 0) {
            EVar9 = 2;
            puVar5 = (ushort *)thunk_FUN_104a0c30();
            L2FName::L2FName((L2FName *)local_2c,puVar5,EVar9);
            *(undefined4 *)(iVar4 + 0x50) = local_2c[0];
            EVar9 = 2;
            puVar5 = (ushort *)thunk_FUN_104a0c30();
            L2FName::L2FName((L2FName *)&local_20,puVar5,EVar9);
            *(undefined4 *)(iVar4 + 0x54) = local_20;
            uVar6 = thunk_FUN_104a0b70();
            *(undefined4 *)(iVar4 + 100) = uVar6;
            puVar5 = (ushort *)thunk_FUN_104a0c30();
            FString::operator=((FString *)(iVar4 + 0x58),puVar5);
            for (iVar8 = 0; local_34 = iVar8, iVar8 < 3; iVar8 = iVar8 + 1) {
              appSprintf(local_1d0,(ushort *)L"setid_%d");
              puVar5 = (ushort *)thunk_FUN_104a0c30();
              local_30 = &stack0xfffffe08;
              FString::FString((FString *)&stack0xfffffe08,puVar5);
              local_4c._0_1_ = 1;
              thunk_FUN_104462b0();
              appSprintf(local_1d0,(ushort *)L"effect_%d");
              puVar5 = (ushort *)thunk_FUN_104a0c30();
              local_30 = &stack0xfffffe08;
              FString::FString((FString *)&stack0xfffffe08,puVar5);
              local_4c._0_1_ = 1;
              thunk_FUN_10446360();
            }
            uVar6 = thunk_FUN_104a0b70();
            *(undefined4 *)(iVar4 + 0xb0) = uVar6;
            puVar5 = (ushort *)thunk_FUN_104a0c30();
            FString::operator=((FString *)(iVar4 + 0xb4),puVar5);
          }
          pFVar1 = local_c;
          local_24 = iVar7 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0();
      local_4c = (uint)local_4c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_c;
    }
  }
LAB_1045fab8:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)();
  }
  ExceptionList = local_54;
  return local_14;
}


// ==== 1045fea1 Catch@1045fea1

void Catch_1045fea1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 1045feb5 Catch@1045feb5

void Catch_1045feb5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ItemNameDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10460050 FUN_10460050

undefined4 FUN_10460050(uchar *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_144 [184];
  undefined4 local_8c;
  undefined1 *local_4c;
  void *pvStack_48;
  undefined1 *puStack_44;
  int local_40;
  int local_3c;
  int local_28;
  undefined4 *local_24;
  FArchive *local_20;
  int local_1c;
  FL2GameData *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_44 = &LAB_108130e1;
  pvStack_48 = ExceptionList;
  local_4c = &stack0xfffffeb0;
  local_40 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_20 = (FArchive *)0x0;
  ExceptionList = &pvStack_48;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_144,(ushort *)L"GameTip");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_20 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10460536;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(in_ECX,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_144,*(ushort **)GError_exref);
      }
      param_1 = (uchar *)0x0;
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_14 = 0; local_14 < (int)param_1; local_14 = local_14 + 1) {
        local_24 = (undefined4 *)thunk_FUN_1032ffc0(0x1c);
        local_40._0_1_ = 1;
        if (local_24 == (undefined4 *)0x0) {
          local_18 = (FL2GameData *)0x0;
        }
        else {
          local_18 = (FL2GameData *)thunk_FUN_1044b630();
        }
        local_40 = (uint)local_40._1_3_ << 8;
        thunk_FUN_10446940(pFVar3);
        thunk_FUN_10458860(&local_18);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10460536;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_144,(ushort *)L"GameTip");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  local_20 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_40._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,(int)puVar1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar4 = 0; local_28 = iVar4, iVar4 < 7; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_gametip_begin_10ac4830 + iVar4 * 0x101,(&DAT_10ac4a30)[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_8c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar4 = 0; local_1c = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
          local_3c = thunk_FUN_1032ffc0(0x1c);
          local_40._0_1_ = 3;
          if (local_3c == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_1044b630();
          }
          local_40._0_1_ = 2;
          local_24 = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            appFailAssert("pGameTipData",".\\L2GameData.cpp",0x1e6b);
          }
          local_40 = CONCAT31(local_40._1_3_,4);
          uVar6 = thunk_FUN_104a0b70(&DAT_1089600c,iVar4);
          *puVar5 = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"priority",iVar4);
          puVar5[1] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"target_lv",iVar4);
          puVar5[2] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"validity",iVar4);
          puVar5[3] = uVar6;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"tip_msg",iVar4);
          FString::operator=((FString *)(puVar5 + 4),puVar7);
          local_40._0_1_ = 2;
          local_40._1_3_ = 0;
          thunk_FUN_10458860(&local_24);
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10460536:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = pvStack_48;
  return local_10;
}


// ==== 1046041e Catch@1046041e

void Catch_1046041e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10460432 Catch@10460432

void Catch_10460432(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x20) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046055d Catch@1046055d

void Catch_1046055d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10460571 Catch@10460571

void Catch_10460571(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GameTipDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104606e0 FUN_104606e0

undefined4 FUN_104606e0(int param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  FL2GameData *in_ECX;
  int iVar8;
  EFindName EVar9;
  FOutputDevice local_144 [184];
  undefined4 local_8c;
  undefined1 *local_4c;
  void *pvStack_48;
  undefined1 *puStack_44;
  int local_40;
  int local_3c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  FL2GameData *local_18;
  undefined4 local_14;
  FArchive *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_44 = &LAB_10813121;
  pvStack_48 = ExceptionList;
  local_4c = &stack0xfffffeb0;
  local_40 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &pvStack_48;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_144,(ushort *)L"variationeffectgrp");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  iVar4 = param_1;
  local_10 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10460bfa;
    }
  }
  else if (param_1 == 0) {
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(in_ECX,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_144,*(ushort **)GError_exref);
      }
      param_1 = 0;
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
        local_24 = (undefined4 *)thunk_FUN_1032ffc0(0x24);
        local_40._0_1_ = 1;
        if (local_24 == (undefined4 *)0x0) {
          local_18 = (FL2GameData *)0x0;
        }
        else {
          local_18 = (FL2GameData *)thunk_FUN_1044bec0();
        }
        local_40 = (uint)local_40._1_3_ << 8;
        thunk_FUN_1044f1d0(pFVar3);
        thunk_FUN_10459020(&local_18);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10460bfa;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_144,(ushort *)L"variationeffectgrp");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_144,*(ushort **)GWarn_exref);
    local_14 = 0;
    pFVar2 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_40._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,iVar4);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_144,*(ushort **)GWarn_exref);
      local_14 = 0;
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_10;
    }
    else {
      puVar1 = local_8 + 2;
      for (iVar4 = 0; local_28 = iVar4, iVar4 < 9; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_evariation_effect_begin_10af79ae + iVar4 * 0x101 + 1,
                           u_cquality1_10af7bb0[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(puVar1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_8c);
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
        local_14 = 0;
      }
      else {
        iVar4 = thunk_FUN_1049f840();
        for (iVar8 = 0; local_20 = iVar8, iVar8 < iVar4; iVar8 = iVar8 + 1) {
          local_3c = thunk_FUN_1032ffc0(0x24);
          local_40._0_1_ = 3;
          if (local_3c == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_1044bec0();
          }
          local_40._0_1_ = 2;
          local_24 = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            appFailAssert("pVariationEffectData",".\\L2GameData.cpp",0x1f6f);
          }
          local_40 = CONCAT31(local_40._1_3_,4);
          uVar6 = thunk_FUN_104a0b70(L"quality1",iVar8);
          *puVar5 = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"quality2",iVar8);
          puVar5[1] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"enchant_min",iVar8);
          puVar5[2] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"enchant_max",iVar8);
          puVar5[3] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"effect_type",iVar8);
          puVar5[4] = uVar6;
          EVar9 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"effect_name",iVar8);
          L2FName::L2FName((L2FName *)&param_1,puVar7,EVar9);
          puVar5[5] = param_1;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"item_prefix",iVar8);
          FString::operator=((FString *)(puVar5 + 6),puVar7);
          local_40._0_1_ = 2;
          local_40._1_3_ = 0;
          thunk_FUN_10459020(&local_24);
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)local_10 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_10;
    }
  }
LAB_10460bfa:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = pvStack_48;
  return local_14;
}


// ==== 10460ad5 Catch@10460ad5

void Catch_10460ad5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10460ae9 Catch@10460ae9

void Catch_10460ae9(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x1c) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10460c21 Catch@10460c21

void Catch_10460c21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10460c35 Catch@10460c35

void Catch_10460c35(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::VariationEffectDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10460db0 FUN_10460db0

void FUN_10460db0(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  int iVar3;
  FOutputDevice local_22c [512];
  int local_2c;
  undefined4 local_20;
  FL2GameData *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813140;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdc8;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_22c,(ushort *)L"variationeffectgrp");
  local_20 = *(undefined4 *)(*(int *)(in_ECX + 0x7f9dc) + 4);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_22c,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_20,4);
  }
  iVar1 = *(int *)(in_ECX + 0x7f9dc);
  local_2c = iVar1;
  for (iVar3 = 0; iVar3 < *(int *)(iVar1 + 4); iVar3 = iVar3 + 1) {
    if (pFVar2 != (FArchive *)0x0) {
      thunk_FUN_1044f1d0(pFVar2);
    }
  }
  if (pFVar2 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(local_1c,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf(local_22c,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10460ee1 Catch@10460ee1

void Catch_10460ee1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10460ef5 Catch@10460ef5

void Catch_10460ef5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::VariationEffectDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10460f70 FUN_10460f70

undefined4 FUN_10460f70(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ushort *puVar5;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  int iVar6;
  FOutputDevice local_140 [184];
  undefined4 local_88;
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  int local_3c;
  int local_30;
  int local_28;
  int local_24;
  undefined4 *local_20;
  FArchive *local_1c;
  FL2GameData *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10813171;
  local_44 = ExceptionList;
  local_48 = &stack0xfffffeb4;
  iVar6 = 0;
  local_3c = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_1c = (FArchive *)0x0;
  ExceptionList = &local_44;
  local_18 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_140,(ushort *)L"Obscene");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10461123;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar6 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar6 == 0) {
        FOutputDevice::Logf(local_140,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_14 = 0; local_14 < (int)param_1; local_14 = local_14 + 1) {
        local_20 = (undefined4 *)thunk_FUN_1032ffc0(0x10);
        local_3c._0_1_ = 1;
        if (local_20 == (undefined4 *)0x0) {
          local_18 = (FL2GameData *)0x0;
        }
        else {
          local_18 = (FL2GameData *)thunk_FUN_104482c0();
        }
        local_3c = (uint)local_3c._1_3_ << 8;
        thunk_FUN_104470e0(pFVar2);
        thunk_FUN_10458800(&local_18);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10461123;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_140,(ushort *)L"Obscene");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (; local_24 = iVar6, iVar6 < 4; iVar6 = iVar6 + 1) {
        thunk_FUN_104a1120(u_obscene_begin_10ae4870 + iVar6 * 0x101,(&DAT_10ae4a70)[iVar6 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar6 = thunk_FUN_104a1840();
      if (iVar6 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar6 = 0; local_28 = iVar6, iVar6 < (int)param_1; iVar6 = iVar6 + 1) {
          local_30 = thunk_FUN_1032ffc0(0x10);
          local_3c._0_1_ = 3;
          if (local_30 == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)thunk_FUN_104482c0();
          }
          local_3c._0_1_ = 2;
          local_20 = puVar3;
          uVar4 = thunk_FUN_104a0b70(&DAT_1089600c,iVar6);
          *puVar3 = uVar4;
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"string",iVar6);
          FString::operator=((FString *)(puVar3 + 1),puVar5);
          thunk_FUN_10458800(&local_20);
        }
        FOutputDevice::Logf(local_140,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10461123:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_44;
  return local_10;
}


// ==== 104613d1 Catch@104613d1

void Catch_104613d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 104613e5 Catch@104613e5

void Catch_104613e5(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ObsceneDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10461530 FUN_10461530

void FUN_10461530(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_ac [128];
  FL2GameData *local_2c;
  undefined4 local_20;
  FL2GameData *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813190;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff48;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_ac,(ushort *)L"Obscene");
  local_20 = *(undefined4 *)(in_ECX + 0x3d20);
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_ac,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_20,4);
    local_2c = in_ECX + 0x3d1c;
    iVar2 = 0;
    while( true ) {
      if (*(int *)(in_ECX + 0x3d20) <= iVar2) break;
      thunk_FUN_104470e0(pFVar1);
      iVar2 = iVar2 + 1;
    }
    FL2GameData::MakeSafePackage(local_1c,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10461658 Catch@10461658

void Catch_10461658(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1046166c Catch@1046166c

void Catch_1046166c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ObsceneDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104616e0 FUN_104616e0

int * FUN_104616e0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108131a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)thunk_FUN_10458c20(&param_1);
  if ((((piVar1 == (int *)0x0) || (*piVar1 == 0)) || (piVar1 = (int *)*piVar1, *piVar1 != param_1))
     || (piVar1[10] == 0)) {
    piVar1 = (int *)0x0;
  }
  ExceptionList = local_10;
  return piVar1;
}


// ==== 10461744 Catch@10461744

void Catch_10461744(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10461758 Catch@10461758

void Catch_10461758(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetEnterEventData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104617a0 FUN_104617a0

int * FUN_104617a0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108131b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)thunk_FUN_10458c20(&param_1);
  if ((((piVar1 == (int *)0x0) || (*piVar1 == 0)) || (piVar1 = (int *)*piVar1, *piVar1 != param_1))
     || (piVar1[10] != 0)) {
    piVar1 = (int *)0x0;
  }
  ExceptionList = local_10;
  return piVar1;
}


// ==== 10461804 Catch@10461804

void Catch_10461804(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10461818 Catch@10461818

void Catch_10461818(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetExitEventData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10461860 FUN_10461860

void FUN_10461860(FOutputDevice *param_1,FName *param_2,int param_3)

{
  FString *this;
  FName *this_00;
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  UClass *pUVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  L2FName *this_01;
  undefined4 *unaff_FS_OFFSET;
  UObject *pUVar10;
  UObject *pUVar11;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ushort *puVar12;
  ulong uVar13;
  UPackageMap *pUVar14;
  FString local_5c [12];
  FString local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  FName local_20 [4];
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108131d2;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  if (*in_ECX != 0) {
    local_1c = in_ECX;
    iVar1 = thunk_FUN_10422f80();
    local_18 = iVar1;
    if (iVar1 != 0) {
      if (param_2 != (FName *)0x0) {
        FString::FString(local_5c);
        local_8._0_1_ = 1;
        FString::FString(local_50);
        local_8._0_1_ = 2;
        FString::operator=(local_50,(ushort *)L"Engine.PlayerController");
        pUVar14 = (UPackageMap *)0x0;
        uVar13 = 1;
        puVar12 = (ushort *)0x0;
        puVar2 = FString::operator*(local_50);
        local_84 = 0x10461928;
        UObject::StaticLoadClass
                  (&AController::PrivateStaticClass,(UObject *)0x0,puVar2,puVar12,uVar13,pUVar14);
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        iVar4 = **(int **)(DAT_10c51044 + 0x19c);
        puVar3 = (undefined4 *)FRotator::FRotator((FRotator *)&local_44,0,0,0);
        local_88 = *puVar3;
        local_84 = puVar3[1];
        local_94 = local_38;
        local_90 = local_34;
        local_8c = local_30;
        param_2 = (FName *)&uStack_98;
        uStack_98 = local_30;
        FName::FName((FName *)&uStack_98,0);
        iVar4 = (**(code **)(iVar4 + 0xc0))();
        pUVar14 = (UPackageMap *)0x0;
        uVar13 = 0;
        puVar12 = (ushort *)0x0;
        puVar2 = L2FName::operator*((L2FName *)(iVar1 + 0x20));
        uStack_b8 = 0x104619ce;
        pUVar5 = UObject::StaticLoadClass
                           (&APawn::PrivateStaticClass,(UObject *)0x0,puVar2,puVar12,uVar13,pUVar14)
        ;
        *(UClass **)(iVar4 + 0x4f8) = pUVar5;
        if (pUVar5 == (UClass *)0x0) {
          L2FName::operator*((L2FName *)(iVar1 + 0x20));
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          local_8._0_1_ = 1;
          FString::~FString(local_50);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_5c);
          *unaff_FS_OFFSET = local_10;
          return;
        }
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        iVar8 = **(int **)(DAT_10c51044 + 0x19c);
        puVar3 = (undefined4 *)FRotator::FRotator((FRotator *)&local_38,0,0,0);
        uStack_bc = *puVar3;
        uStack_b8 = puVar3[1];
        uStack_c8 = local_44;
        uStack_c4 = local_40;
        uStack_c0 = local_3c;
        param_2 = (FName *)&uStack_cc;
        uStack_cc = local_3c;
        FName::FName((FName *)&uStack_cc,0);
        uVar6 = (**(code **)(iVar8 + 0xc0))(*(undefined4 *)(iVar4 + 0x4f8));
        *(undefined4 *)(iVar4 + 0x3bc) = uVar6;
        this_01 = (L2FName *)(iVar1 + 0x24);
        iVar1 = 0;
        puVar2 = L2FName::operator*(this_01);
        pUVar7 = UObject::StaticFindObject
                           (&USkeletalMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar1);
        if (pUVar7 == (UObject *)0x0) {
          pUVar10 = pUVar7;
          pUVar11 = pUVar7;
          puVar2 = L2FName::operator*(this_01);
          pUVar7 = UObject::StaticLoadObject
                             (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar2,
                              (ushort *)pUVar7,(ulong)pUVar10,(UPackageMap *)pUVar11);
          if (pUVar7 == (UObject *)0x0) {
            pUVar10 = pUVar7;
            pUVar11 = pUVar7;
            puVar2 = L2FName::operator*(this_01);
            pUVar7 = UObject::StaticLoadObject
                               (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar2,
                                (ushort *)pUVar7,(ulong)pUVar10,(UPackageMap *)pUVar11);
            if (pUVar7 == (UObject *)0x0) {
              L2FName::operator*(this_01);
              FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref
                                 );
            }
          }
        }
        iVar1 = *(int *)(pUVar7 + 0x248);
        if (iVar1 != 0) {
          FName::FName(local_20,0);
          param_2 = (FName *)(local_1c + 0xc);
          iVar8 = FName::operator!=(param_2,local_20);
          if (iVar8 != 0) {
            for (iVar8 = 0; local_24 = iVar8, iVar8 < *(int *)(iVar1 + 0x70); iVar8 = iVar8 + 1) {
              iVar9 = FName::operator==((FName *)(iVar8 * 0x74 + *(int *)(iVar1 + 0x6c)),param_2);
              if (iVar9 != 0) goto LAB_10461bc4;
            }
            L2FName::operator*((L2FName *)param_2);
            FString::operator*((FString *)(local_18 + 4));
            FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
          }
        }
LAB_10461bc4:
        (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(*(undefined4 *)(iVar4 + 0x3bc),0);
        (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(iVar4,0);
        local_8._0_1_ = 1;
        FString::~FString(local_50);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_5c);
        in_ECX = local_1c;
      }
      iVar1 = local_18;
      if (param_3 != 0) {
        this = (FString *)(in_ECX + 4);
        iVar4 = FString::operator_int(this);
        if (iVar4 != 0) {
          iVar4 = 0;
          puVar2 = FString::operator*(this);
          pUVar7 = UObject::StaticFindObject
                             (&USound::PrivateStaticClass,(UObject *)0xffffffff,puVar2,iVar4);
          if (pUVar7 == (UObject *)0x0) {
            pUVar10 = pUVar7;
            pUVar11 = pUVar7;
            puVar2 = FString::operator*(this);
            local_84 = 0x10461c67;
            pUVar7 = UObject::StaticLoadObject
                               (&USound::PrivateStaticClass,(UObject *)0x0,puVar2,(ushort *)pUVar7,
                                (ulong)pUVar10,(UPackageMap *)pUVar11);
            if (pUVar7 == (UObject *)0x0) {
              FString::operator*(this);
              FString::operator*((FString *)(iVar1 + 4));
              FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
            }
          }
        }
      }
      FName::FName((FName *)&param_2,0);
      this_00 = (FName *)(in_ECX + 0xb);
      iVar1 = FName::operator!=(this_00,(FName *)&param_2);
      if (iVar1 != 0) {
        pUVar14 = (UPackageMap *)0x0;
        uVar13 = 1;
        puVar12 = (ushort *)0x0;
        puVar2 = L2FName::operator*((L2FName *)this_00);
        local_84 = 0x10461cd5;
        pUVar5 = UObject::StaticLoadClass
                           (&AActor::PrivateStaticClass,(UObject *)0x0,puVar2,puVar12,uVar13,pUVar14
                           );
        if (pUVar5 == (UClass *)0x0) {
          L2FName::operator*((L2FName *)this_00);
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
      }
      *unaff_FS_OFFSET = local_10;
      return;
    }
    FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 10461d19 Catch@10461d19

void Catch_10461d19(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10461d2d Catch@10461d2d

void Catch_10461d2d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2EnterEventData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10461e90 FUN_10461e90

undefined4 FUN_10461e90(ushort *param_1)

{
  int iVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108131f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = appStrlen(param_1);
  if ((((3 < iVar1) && (*param_1 == 0x2f)) && (param_1[1] == 0x2f)) && (param_1[2] == 0x2f)) {
    ExceptionList = local_c;
    return 0x10000001;
  }
  iVar1 = appStrlen(param_1);
  if (((2 < iVar1) && (*param_1 == 0x2f)) && (param_1[1] == 0x2f)) {
    ExceptionList = local_c;
    return 0x10000000;
  }
  iVar1 = appStrlen(param_1);
  if ((1 < iVar1) && (*param_1 == 0x2f)) {
    FString::FString(local_18,param_1 + 1);
    local_4 = 0;
    iVar1 = thunk_FUN_10458c80(local_18);
    local_4 = 0xffffffff;
    FString::~FString(local_18);
    if (iVar1 != 0) {
      ExceptionList = local_c;
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  ExceptionList = local_c;
  return 0xffffffff;
}


// ==== 10461fe0 FUN_10461fe0

undefined4 FUN_10461fe0(ushort *param_1)

{
  undefined4 uVar1;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10813219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(local_18,param_1);
  local_4 = 0;
  uVar1 = thunk_FUN_10458a30(local_18);
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return uVar1;
}


// ==== 10462070 FUN_10462070

void FUN_10462070(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813230;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10458f40(&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 104620ba Catch@104620ba

void Catch_104620ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104620ce Catch@104620ce

void Catch_104620ce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetHuntingZoneData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462110 FUN_10462110

undefined4 FUN_10462110(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x7f9d8) != 0) {
    uVar1 = thunk_FUN_10458fa0(&stack0x00000004);
    return uVar1;
  }
  return 0;
}


// ==== 10462140 FUN_10462140

int * FUN_10462140(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  piVar1 = *(int **)(in_ECX + 0x7f9dc);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    if (0 < piVar1[1]) {
      do {
        piVar2 = *(int **)(*piVar1 + iVar3 * 4);
        if ((((*piVar2 == param_1) && (piVar2[1] == param_2)) && (piVar2[4] == param_4)) &&
           ((piVar2[2] <= param_3 && (param_3 <= piVar2[3])))) {
          return piVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < piVar1[1]);
    }
  }
  return (int *)0x0;
}


// ==== 104621b0 FUN_104621b0

void FUN_104621b0(void)

{
  thunk_FUN_10422ee0(&stack0x00000004);
  return;
}


// ==== 104621d0 FUN_104621d0

void FUN_104621d0(void)

{
  thunk_FUN_10458b40(&stack0x00000004);
  return;
}


// ==== 104621f0 FUN_104621f0

void FUN_104621f0(void)

{
  int iVar1;
  FName local_4 [4];
  
  FName::FName(local_4,0);
  iVar1 = thunk_FUN_10422f80(&stack0x00000004);
  if (iVar1 != 0) {
    FString::operator*((FString *)(iVar1 + 4));
    return;
  }
  FName::operator*(local_4);
  return;
}


// ==== 10462240 FUN_10462240

FNameEntry * FUN_10462240(void)

{
  int iVar1;
  int iVar2;
  FNameEntry *pFVar3;
  FName local_4 [4];
  
  FName::FName(local_4,0);
  iVar1 = thunk_FUN_10422ee0(&stack0x00000004);
  if (iVar1 == 0) {
    pFVar3 = (FNameEntry *)FName::operator*(local_4);
    return pFVar3;
  }
  iVar2 = FName::GetIndex((FName *)(iVar1 + 0x50));
  if (iVar2 == 0) {
    return (FNameEntry *)0x0;
  }
  iVar1 = FName::GetIndex((FName *)(iVar1 + 0x50));
  pFVar3 = FName::GetEntry(iVar1);
  return pFVar3 + 0xc;
}


// ==== 104622c0 FUN_104622c0

FNameEntry * FUN_104622c0(void)

{
  int iVar1;
  int iVar2;
  FNameEntry *pFVar3;
  FName local_4 [4];
  
  FName::FName(local_4,0);
  iVar1 = thunk_FUN_10422ee0(&stack0x00000004);
  if (iVar1 == 0) {
    pFVar3 = (FNameEntry *)FName::operator*(local_4);
    return pFVar3;
  }
  iVar2 = FName::GetIndex((FName *)(iVar1 + 0x54));
  if (iVar2 == 0) {
    return (FNameEntry *)0x0;
  }
  iVar1 = FName::GetIndex((FName *)(iVar1 + 0x54));
  pFVar3 = FName::GetEntry(iVar1);
  return pFVar3 + 0xc;
}


// ==== 10462340 FUN_10462340

undefined4 FUN_10462340(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_10422ee0(&stack0x00000004);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 100);
  }
  return 0xffffffff;
}


// ==== 10462370 FUN_10462370

void FUN_10462370(void)

{
  int iVar1;
  FName local_4 [4];
  
  FName::FName(local_4,0);
  iVar1 = thunk_FUN_10422ee0(&stack0x00000004);
  if (iVar1 != 0) {
    FString::operator*((FString *)(iVar1 + 0x58));
    return;
  }
  FName::operator*(local_4);
  return;
}


// ==== 104623c0 FUN_104623c0

ushort * FUN_104623c0(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813240;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_10422ee0(&param_1);
  if (iVar1 != 0) {
    puVar2 = FString::operator*((FString *)(iVar1 + 0x68 + param_2 * 0x18));
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 10462433 Catch@10462433

void Catch_10462433(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10462447 Catch@10462447

void Catch_10462447(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetItemSetListID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462490 FUN_10462490

ushort * FUN_10462490(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813250;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_10422ee0(&param_1);
  if (iVar1 != 0) {
    puVar2 = FString::operator*((FString *)(iVar1 + 0x74 + param_2 * 0x18));
    ExceptionList = local_10;
    return puVar2;
  }
  ExceptionList = local_10;
  return (ushort *)0x0;
}


// ==== 10462503 Catch@10462503

void Catch_10462503(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10462517 Catch@10462517

void Catch_10462517(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetItemSetEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462560 FUN_10462560

bool FUN_10462560(int param_1)

{
  ushort *puVar1;
  int iVar2;
  FL2GameData *in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813269;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = FL2GameData::GetItemSetListID(in_ECX,param_1,0);
  FString::FString(local_28,puVar1);
  local_8._0_1_ = 1;
  iVar2 = FString::Len(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return 0 < iVar2;
}


// ==== 104625d5 Catch@104625d5

void Catch_104625d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104625e9 Catch@104625e9

void Catch_104625e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::IsSetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462630 FUN_10462630

undefined4 FUN_10462630(void)

{
  int iVar1;
  FName local_4 [4];
  
  FName::FName(local_4,0);
  iVar1 = thunk_FUN_10422ee0(&stack0x00000004);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xb0);
  }
  return 0xffffffff;
}


// ==== 10462670 FUN_10462670

ushort * FUN_10462670(void)

{
  int iVar1;
  ushort *puVar2;
  FName local_4 [4];
  
  FName::FName(local_4,0);
  iVar1 = thunk_FUN_10422ee0(&stack0x00000004);
  if (iVar1 != 0) {
    puVar2 = FString::operator*((FString *)(iVar1 + 0xb4));
    return puVar2;
  }
  return (ushort *)0x0;
}


// ==== 104626c0 FUN_104626c0

void FUN_104626c0(void)

{
  thunk_FUN_10459050(&stack0x00000004);
  return;
}


// ==== 104626e0 FUN_104626e0

uint FUN_104626e0(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_10459050(&param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (param_2 < 0x20) {
    return (uint)*(byte *)(param_2 + 8 + iVar1);
  }
  return 0;
}


// ==== 10462730 FUN_10462730

ushort * FUN_10462730(int param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int in_ECX;
  
  if ((-1 < param_1) && (*(int *)(in_ECX + 0x6a8d8) != 0)) {
    puVar1 = (undefined4 *)thunk_FUN_10458df0(&param_1);
    if ((puVar1 != (undefined4 *)0x0) && ((L2FName *)*puVar1 != (L2FName *)0x0)) {
      puVar2 = L2FName::operator*((L2FName *)*puVar1);
      return puVar2;
    }
  }
  return (ushort *)0x0;
}


// ==== 10462780 FUN_10462780

int FUN_10462780(undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813280;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  param_3 = thunk_FUN_1044bf90(param_1,param_2,param_3);
  while( true ) {
    if (0xff < iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = param_3 + 1;
    iVar1 = thunk_FUN_10458e50(&param_3);
    if (iVar1 == 0) break;
    if ((*(float *)(iVar1 + 0x14) < param_4) && (param_4 < *(float *)(iVar1 + 0x10))) {
      *(int *)(in_ECX + 0x7f9d0) = iVar1;
      ExceptionList = local_10;
      return iVar1;
    }
    iVar3 = iVar3 + 1;
    param_3 = iVar2;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1046283f Catch@1046283f

void Catch_1046283f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 10462853 Catch@10462853

void Catch_10462853(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetZoneNameInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104628b0 FUN_104628b0

void FUN_104628b0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813290;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1 = thunk_FUN_10422640(&param_1);
  iVar1 = thunk_FUN_10458e50(&param_1);
  FString::operator*((FString *)(iVar1 + 0x18));
  ExceptionList = local_10;
  return;
}


// ==== 10462917 Catch@10462917

void Catch_10462917(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1046292b Catch@1046292b

void Catch_1046292b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetZoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462970 FUN_10462970

void FUN_10462970(int param_1,int param_2,int param_3)

{
  UTexture *pUVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  FStaticTexture local_3c [28];
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar3 = param_2;
  iVar2 = param_1;
  puStack_c = &LAB_108132a8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  UGameEngine::GetSWMapXY(DAT_10c51044,param_1,param_2,&param_1,&param_2);
  pUVar1 = FL2GameData::GetZoneNameTexture(&GL2GameData,param_1,param_2);
  uVar5 = 0;
  if (pUVar1 != (UTexture *)0x0) {
    local_18 = param_1 + -0x14;
    local_1c = FUN_107a6660();
    local_18 = param_2 + -0x12;
    local_18 = FUN_107a6660();
    local_20 = *(uint *)(pUVar1 + 0x580);
    local_1c = (iVar2 - local_1c) * local_20;
    iVar2 = FUN_107a6660();
    local_1c = (iVar3 - local_18) * *(int *)(pUVar1 + 0x584);
    iVar3 = FUN_107a6660();
    FStaticTexture::FStaticTexture(local_3c,pUVar1);
    local_8._0_1_ = 1;
    pvVar4 = FStaticTexture::GetRawTextureData(local_3c,0);
    local_20 = (uint)*(byte *)((int)pvVar4 + iVar2 + iVar3 * local_20);
    local_8 = (uint)local_8._1_3_ << 8;
    FStaticTexture::~FStaticTexture(local_3c);
    uVar5 = local_20;
  }
  FL2GameData::GetZoneNameInfo(&GL2GameData,uVar5,param_1,param_2,(float)param_3);
  ExceptionList = local_10;
  return;
}


// ==== 10462aa6 Catch@10462aa6

void Catch_10462aa6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10462aba Catch@10462aba

void Catch_10462aba(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::processGetZoneNameInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462b30 FUN_10462b30

undefined4 FUN_10462b30(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108132c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x7f9d0) != 0) {
    ExceptionList = &local_10;
    uVar1 = thunk_FUN_10422640(*(int *)(in_ECX + 0x7f9d0));
    ExceptionList = local_10;
    return uVar1;
  }
  return 0xffffffff;
}


// ==== 10462b93 Catch@10462b93

void Catch_10462b93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10462ba7 Catch@10462ba7

void Catch_10462ba7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetCurrentZoneID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462bf0 FUN_10462bf0

void FUN_10462bf0(short *param_1)

{
  short sVar1;
  FParser *in_ECX;
  short *psVar2;
  FParser *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108132d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == (short *)0x0) {
    return;
  }
  ExceptionList = &local_10;
  *(short **)(in_ECX + 0x10) = param_1;
  psVar2 = param_1 + 1;
  do {
    sVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  *(int *)(in_ECX + 8) = (int)param_1 - (int)psVar2 >> 1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)in_ECX = 0;
  psVar2 = &DAT_1089881c;
  pFVar3 = in_ECX + 0x216;
  do {
    sVar1 = *psVar2;
    *(short *)pFVar3 = sVar1;
    psVar2 = psVar2 + 1;
    pFVar3 = pFVar3 + 2;
  } while (sVar1 != 0);
  FParser::GetToken(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10462c99 Catch@10462c99

void Catch_10462c99(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10462cad Catch@10462cad

void Catch_10462cad(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FParser::SetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10462d00 FParser::GetToken thunk -> 10307388

// ==== 10462d40 FUN_10462d40

int FUN_10462d40(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_10459530(param_1,param_2);
  return iVar2;
}


// ==== 10462df0 FUN_10462df0

int FUN_10462df0(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_104596f0(param_1,param_2);
  return iVar2;
}


// ==== 10462ea0 FUN_10462ea0

int FUN_10462ea0(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_104598b0(param_1,param_2);
  return iVar2;
}


// ==== 10462f60 FUN_10462f60

int FUN_10462f60(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = thunk_FUN_1032ff50(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = thunk_FUN_10459c50(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 10463010 FUN_10463010

void FUN_10463010(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10459cf0();
  return;
}


// ==== 10463070 FUN_10463070

int FUN_10463070(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_10459fc0(param_1,param_2);
  return iVar2;
}


// ==== 10463120 FUN_10463120

int FUN_10463120(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045a180(param_1,param_2);
  return iVar2;
}


// ==== 104631a0 FUN_104631a0

void FUN_104631a0(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045a230();
  return;
}


// ==== 104631d0 FUN_104631d0

int FUN_104631d0(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045a340(param_1,param_2);
  return iVar2;
}


// ==== 10463260 FUN_10463260

void FUN_10463260(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045a3f0();
  return;
}


// ==== 10463290 FUN_10463290

void FUN_10463290(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045a5b0();
  return;
}


// ==== 104632c0 FUN_104632c0

int FUN_104632c0(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045a6c0(param_1,param_2);
  return iVar2;
}


// ==== 10463340 FUN_10463340

int FUN_10463340(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = thunk_FUN_1032ff50(param_1);
  iVar3 = *(int *)(in_ECX[3] + (uVar1 & in_ECX[4] - 1U) * 4);
  while( true ) {
    if (iVar3 == -1) {
      iVar3 = thunk_FUN_1045a8a0(param_1,param_2);
      return iVar3;
    }
    iVar2 = FString::operator==((FString *)(*in_ECX + iVar3 * 0x14 + 4),param_1);
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 * 0x14 + *in_ECX);
  }
  *(undefined4 *)(iVar3 * 0x14 + 0x10 + *in_ECX) = *param_2;
  return iVar3 * 0x14 + 0x10 + *in_ECX;
}


// ==== 104633e0 FUN_104633e0

void FUN_104633e0(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045a940();
  return;
}


// ==== 10463410 FUN_10463410

int FUN_10463410(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045aa50(param_1,param_2);
  return iVar2;
}


// ==== 104634d0 FUN_104634d0

void FUN_104634d0(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045acc0();
  return;
}


// ==== 10463500 FUN_10463500

int FUN_10463500(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045add0(param_1,param_2);
  return iVar2;
}


// ==== 10463580 FUN_10463580

void FUN_10463580(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045ae80();
  return;
}


// ==== 104635b0 FUN_104635b0

int FUN_104635b0(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045af90(param_1,param_2);
  return iVar2;
}


// ==== 10463660 FUN_10463660

int FUN_10463660(FName *param_1,undefined4 *param_2)

{
  FName *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  pFVar1 = param_1;
  param_1 = *(FName **)param_1;
  uVar2 = FName::GetIndex((FName *)&param_1);
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  while( true ) {
    if (iVar4 == -1) {
      iVar4 = thunk_FUN_1045b170(pFVar1,param_2);
      return iVar4;
    }
    iVar3 = FName::operator==((FName *)(*in_ECX + iVar4 * 0xc + 4),pFVar1);
    if (iVar3 != 0) break;
    iVar4 = *(int *)(iVar4 * 0xc + *in_ECX);
  }
  *(undefined4 *)(iVar4 * 0xc + 8 + *in_ECX) = *param_2;
  return iVar4 * 0xc + 8 + *in_ECX;
}


// ==== 10463710 FUN_10463710

void FUN_10463710(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045b230();
  return;
}


// ==== 10463740 FUN_10463740

int FUN_10463740(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045b340(param_1,param_2);
  return iVar2;
}


// ==== 104637f0 FUN_104637f0

int FUN_104637f0(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045b500(param_1,param_2);
  return iVar2;
}


// ==== 10463870 FUN_10463870

void FUN_10463870(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108132e9;
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


// ==== 10463930 FUN_10463930

void FUN_10463930(void)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0xc,0);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_1045b650();
  return;
}


// ==== 10463960 FUN_10463960

int FUN_10463960(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_1045b760(param_1,param_2);
  return iVar2;
}


// ==== 104639e0 FUN_104639e0

int FUN_104639e0(int *param_1)

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
        thunk_FUN_1045b7f0(iVar3,1);
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
      thunk_FUN_1045b650();
    }
  }
  return iVar2;
}


// ==== 10463a80 FUN_10463a80

void FUN_10463a80(void)

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
    thunk_FUN_10459420();
    return;
  }
  return;
}


// ==== 10463ac0 FUN_10463ac0

void FUN_10463ac0(void)

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
    thunk_FUN_104595e0();
    return;
  }
  return;
}


// ==== 10463b00 FUN_10463b00

void FUN_10463b00(void)

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
    thunk_FUN_10459cf0();
    return;
  }
  return;
}


// ==== 10463b40 FUN_10463b40

void FUN_10463b40(void)

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
    thunk_FUN_1045b230();
    return;
  }
  return;
}


// ==== 10463b80 FUN_10463b80

void FUN_10463b80(void)

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
    thunk_FUN_104597a0();
    return;
  }
  return;
}


// ==== 10463bc0 FUN_10463bc0

void FUN_10463bc0(void)

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
    thunk_FUN_10459960();
    return;
  }
  return;
}


// ==== 10463c00 FUN_10463c00

void FUN_10463c00(void)

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
    thunk_FUN_10459b20();
    return;
  }
  return;
}


// ==== 10463c40 FUN_10463c40

void FUN_10463c40(void)

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
    thunk_FUN_1045a770();
    return;
  }
  return;
}


// ==== 10463c80 FUN_10463c80

void FUN_10463c80(void)

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
    thunk_FUN_10459eb0();
    return;
  }
  return;
}


// ==== 10463cc0 FUN_10463cc0

void FUN_10463cc0(void)

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
    thunk_FUN_1045a070();
    return;
  }
  return;
}


// ==== 10463d00 FUN_10463d00

void FUN_10463d00(void)

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
    thunk_FUN_1045a230();
    return;
  }
  return;
}


// ==== 10463d40 FUN_10463d40

void FUN_10463d40(void)

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
    thunk_FUN_1045a3f0();
    return;
  }
  return;
}


// ==== 10463d80 FUN_10463d80

void FUN_10463d80(void)

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
    thunk_FUN_1045a5b0();
    return;
  }
  return;
}


// ==== 10463dc0 FUN_10463dc0

void FUN_10463dc0(void)

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
    thunk_FUN_1045a940();
    return;
  }
  return;
}


// ==== 10463e00 FUN_10463e00

void FUN_10463e00(void)

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
    thunk_FUN_1045b040();
    return;
  }
  return;
}


// ==== 10463e40 FUN_10463e40

void FUN_10463e40(void)

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
    thunk_FUN_1045b3f0();
    return;
  }
  return;
}


// ==== 10463e80 FUN_10463e80

void FUN_10463e80(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813309;
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


// ==== 10463f40 FUN_10463f40

void FUN_10463f40(void)

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
    thunk_FUN_1045ab00();
    return;
  }
  return;
}


// ==== 10463f80 FUN_10463f80

void FUN_10463f80(void)

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
    thunk_FUN_1045acc0();
    return;
  }
  return;
}


// ==== 10463fc0 FUN_10463fc0

void FUN_10463fc0(void)

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
    thunk_FUN_1045ae80();
    return;
  }
  return;
}


// ==== 10464000 FUN_10464000

void FUN_10464000(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813329;
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


// ==== 104640c0 FUN_104640c0

void FUN_104640c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813349;
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


// ==== 10464180 FUN_10464180

void FUN_10464180(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813369;
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


// ==== 10464240 FUN_10464240

void FUN_10464240(void)

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
    thunk_FUN_1045b650();
    return;
  }
  return;
}


// ==== 10464280 FUN_10464280

void FUN_10464280(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813389;
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


// ==== 10464340 FUN_10464340

void FUN_10464340(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108133a9;
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


// ==== 10464400 FUN_10464400

void FUN_10464400(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108133c9;
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


// ==== 104644c0 FUN_104644c0

void FUN_104644c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108133e9;
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


// ==== 10464580 FUN_10464580

void FUN_10464580(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813409;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1045be90(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 104645f0 FUN_104645f0

void FUN_104645f0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081342c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
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


// ==== 10464680 FUN_10464680

void FUN_10464680(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813449;
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


// ==== 10464740 FUN_10464740

void FUN_10464740(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813469;
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


// ==== 10464800 FUN_10464800

void FUN_10464800(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813489;
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


// ==== 104648c0 FUN_104648c0

void FUN_104648c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108134a9;
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


// ==== 10464980 FUN_10464980

void FUN_10464980(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108134c9;
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


// ==== 10464a40 FUN_10464a40

void FUN_10464a40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108134e9;
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


// ==== 10464b00 FUN_10464b00

void FUN_10464b00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813509;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1045c350(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10464b70 FUN_10464b70

void FUN_10464b70(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1081352c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
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


// ==== 10464c00 FUN_10464c00

void FUN_10464c00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813549;
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


// ==== 10464cc0 FUN_10464cc0

void FUN_10464cc0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813569;
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


// ==== 10464d80 FUN_10464d80

void FUN_10464d80(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813589;
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


// ==== 10464e40 FUN_10464e40

void FUN_10464e40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108135a9;
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


// ==== 10464f00 FUN_10464f00

void FUN_10464f00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108135c9;
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


// ==== 10464fc0 FUN_10464fc0

void FUN_10464fc0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108135e9;
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


// ==== 10465080 FUN_10465080

void FUN_10465080(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813609;
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


// ==== 10465140 FUN_10465140

void FUN_10465140(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813629;
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


// ==== 10465200 FUN_10465200

void FUN_10465200(void)

{
  undefined4 *in_ECX;
  FArray *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10813678;
  local_c = ExceptionList;
  local_14[0] = (FArray *)(in_ECX + 4);
  ExceptionList = &local_c;
  FArray::FArray(local_14[0]);
  local_4 = 1;
  FString::FString((FString *)(in_ECX + 7));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 10));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0xd));
  local_4 = CONCAT31(local_4._1_3_,4);
  FName::FName((FName *)(in_ECX + 0x10));
  *in_ECX = 0;
  in_ECX[1] = 0xffffffff;
  in_ECX[3] = 0xffffffff;
  FName::FName((FName *)local_14,0);
  *(FArray **)(in_ECX + 0x10) = local_14[0];
  ExceptionList = local_c;
  return;
}


// ==== 104652e0 FUN_104652e0

void FUN_104652e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10813744;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 3));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 6));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 10));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0xd));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x10));
  local_4._0_1_ = 6;
  FString::FString((FString *)(in_ECX + 0x1a));
  local_4._0_1_ = 7;
  FString::FString((FString *)(in_ECX + 0x22));
  local_4._0_1_ = 8;
  FString::FString((FString *)(in_ECX + 0x25));
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x28));
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FArray::FArray((FArray *)(in_ECX + 0x2b));
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10465430 FUN_10465430

void FUN_10465430(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813789;
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


// ==== 104654f0 FUN_104654f0

void FUN_104654f0(FArchive *param_1,int param_2)

{
  FArchive *this;
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  this = param_1;
  puStack_c = &LAB_108137ab;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    thunk_FUN_10330040(param_1);
    thunk_FUN_1044c100(this,in_ECX + 0x20);
    thunk_FUN_1044c100(this,in_ECX + 0x24);
    thunk_FUN_10330040(this,in_ECX + 0x28);
    for (; iVar2 < *(int *)(in_ECX + 0x28); iVar2 = iVar2 + 1) {
      thunk_FUN_1044c100(this,in_ECX + 0x2c + iVar2 * 4);
    }
    iVar2 = FArchive::IsLoading(this);
    if (iVar2 == 0) {
      param_2 = *(int *)(in_ECX + 0x44);
      thunk_FUN_10330040(this,&param_2);
      for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
        thunk_FUN_1044c100(this,*(int *)(in_ECX + 0x40) + iVar2 * 4);
      }
    }
    else {
      param_1 = (FArchive *)0x0;
      thunk_FUN_10330040(this,&param_1);
      for (iVar2 = 0; iVar2 < (int)param_1; iVar2 = iVar2 + 1) {
        FName::FName((FName *)&param_2,0);
        thunk_FUN_1044c100(this,&param_2);
        thunk_FUN_10458780(&param_2);
      }
    }
    thunk_FUN_1038f880(this,in_ECX + 0x4c);
    thunk_FUN_10330060(this,in_ECX + 0x58);
    thunk_FUN_10330040(this,(int *)(in_ECX + 0x5c));
    if (*(int *)(in_ECX + 0x5c) != 0) {
      if (*(int *)(in_ECX + 0x60) == 0) {
        param_1 = (FArchive *)thunk_FUN_1032ffc0(8);
        local_8._0_1_ = 1;
        if (param_1 == (FArchive *)0x0) {
          uVar1 = 0;
        }
        else {
          uVar1 = thunk_FUN_1044b1c0();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)(in_ECX + 0x60) = uVar1;
      }
      thunk_FUN_1044e7e0(this);
    }
    thunk_FUN_10330040(this,in_ECX + 100);
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 100); iVar2 = iVar2 + 1) {
      thunk_FUN_1044c100(this,in_ECX + 0x68 + iVar2 * 4);
    }
    thunk_FUN_10330040(this,in_ECX + 0x74);
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x74); iVar2 = iVar2 + 1) {
      thunk_FUN_1044c100(this,in_ECX + 0x78 + iVar2 * 4);
    }
    thunk_FUN_10330040(this,in_ECX + 0x8c);
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x8c); iVar2 = iVar2 + 1) {
      thunk_FUN_1044c100(this,in_ECX + 0x90 + iVar2 * 4);
    }
    thunk_FUN_10330040(this,in_ECX + 0x9c);
    for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x9c); iVar2 = iVar2 + 1) {
      thunk_FUN_1044c100(this,in_ECX + 0xa0 + iVar2 * 4);
      thunk_FUN_10330060(this,in_ECX + 0xac + iVar2 * 4);
    }
    thunk_FUN_1038f880(this,in_ECX + 0xb8);
    thunk_FUN_1044c100(this,in_ECX + 0xc4);
    thunk_FUN_10330040(this,in_ECX + 200);
    thunk_FUN_10330060(this,in_ECX + 0xcc);
    thunk_FUN_10330060(this,in_ECX + 0xd0);
    thunk_FUN_10330060(this,in_ECX + 0xd4);
    thunk_FUN_10330040(this,in_ECX + 0xd8);
    thunk_FUN_10330040(this,in_ECX + 0xdc);
  }
  else {
    ExceptionList = &local_10;
    operator<<(param_1,(FString *)(in_ECX + 4));
    operator<<(this,(FString *)(in_ECX + 0x10));
    thunk_FUN_10330020(this,in_ECX + 0x1c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104657b3 Catch@104657b3

void Catch_104657b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 104657c7 Catch@104657c7

void Catch_104657c7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NpcData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104658b0 FUN_104658b0

void FUN_104658b0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108137c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  thunk_FUN_10330040(param_1,in_ECX + 0xc);
  thunk_FUN_1038f880(param_1,in_ECX + 0x10);
  operator<<(param_1,(FString *)(in_ECX + 0x1c));
  operator<<(param_1,(FString *)(in_ECX + 0x28));
  operator<<(param_1,(FString *)(in_ECX + 0x34));
  thunk_FUN_1044c100(param_1,in_ECX + 0x40);
  ExceptionList = local_10;
  return;
}


// ==== 10465951 Catch@10465951

void Catch_10465951(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10465965 Catch@10465965

void Catch_10465965(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2ActionData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104659c0 FUN_104659c0

void FUN_104659c0(FArchive *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108137d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10330040(param_1);
  thunk_FUN_10330040(param_1,in_ECX + 4);
  thunk_FUN_10330040(param_1,in_ECX + 8);
  operator<<(param_1,(FString *)(in_ECX + 0xc));
  operator<<(param_1,(FString *)(in_ECX + 0x18));
  operator<<(param_1,(FString *)(in_ECX + 0x28));
  thunk_FUN_1038f880(param_1,in_ECX + 0x34);
  thunk_FUN_1038f880(param_1,in_ECX + 0x40);
  thunk_FUN_103301d0(param_1,in_ECX + 0x50);
  thunk_FUN_10330040(param_1,in_ECX + 0x5c);
  thunk_FUN_10330040(param_1,in_ECX + 0x60);
  thunk_FUN_10330040(param_1,in_ECX + 100);
  operator<<(param_1,(FString *)(in_ECX + 0x68));
  thunk_FUN_10330040(param_1,in_ECX + 0x74);
  thunk_FUN_10330040(param_1,in_ECX + 0x24);
  thunk_FUN_10330040(param_1,in_ECX + 0x4c);
  thunk_FUN_10330040(param_1,in_ECX + 0x78);
  thunk_FUN_103301d0(param_1,in_ECX + 0x7c);
  operator<<(param_1,(FString *)(in_ECX + 0x88));
  operator<<(param_1,(FString *)(in_ECX + 0x94));
  thunk_FUN_1038f880(param_1,in_ECX + 0xa0);
  thunk_FUN_1038f880(param_1,in_ECX + 0xac);
  thunk_FUN_10330040(param_1,in_ECX + 0xb8);
  thunk_FUN_10330040(param_1,in_ECX + 0xbc);
  thunk_FUN_10330040(param_1,in_ECX + 0xc0);
  thunk_FUN_10330040(param_1,in_ECX + 0xc4);
  ExceptionList = local_10;
  return;
}


// ==== 10465b20 Catch@10465b20

void Catch_10465b20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10465b34 Catch@10465b34

void Catch_10465b34(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2QuestData::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10465bc0 FUN_10465bc0

void FUN_10465bc0(void)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108139f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = FL2GameData::vftable;
  FBlowFish::FBlowFish((FBlowFish *)(in_ECX + 0xdc));
  local_14 = 0xe;
  do {
    thunk_FUN_1044aca0();
    local_14 = local_14 + -1;
  } while (-1 < local_14);
  FArray::FArray((FArray *)(in_ECX + 0x3d1c));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x3d2c));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x3d38));
  local_4._0_1_ = 6;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x3d48,0x2c,3000,(_func_void_void_ptr *)&LAB_1030b429,
             (_func_void_void_ptr *)&LAB_1030c810);
  local_4._0_1_ = 7;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x240e8,0x5c,3000,(_func_void_void_ptr *)&LAB_1030e5e3,
             (_func_void_void_ptr *)&LAB_10301672);
  local_4._0_1_ = 8;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x67708,0x1c,200,(_func_void_void_ptr *)&LAB_103110ea,
             (_func_void_void_ptr *)&LAB_1030a4e3);
  local_4._0_1_ = 9;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x68ce8,0x1c,0xff,(_func_void_void_ptr *)&LAB_103110ea,
             (_func_void_void_ptr *)&LAB_1030a4e3);
  local_4._0_1_ = 10;
  _eh_vector_constructor_iterator_(in_ECX + 0x6a8dc,0xc,3000,FString_exref,~FString_exref);
  local_4._0_1_ = 0xb;
  _eh_vector_constructor_iterator_(in_ECX + 0x7357c,0xc,3000,FString_exref,~FString_exref);
  local_4._0_1_ = 0xc;
  _eh_vector_constructor_iterator_(in_ECX + 0x7c21c,0xc,100,FString_exref,~FString_exref);
  local_4._0_1_ = 0xd;
  _eh_vector_constructor_iterator_(in_ECX + 0x7c6cc,0xc,100,FString_exref,~FString_exref);
  local_4._0_1_ = 0xe;
  FString::FString((FString *)(in_ECX + 0x7cb7c));
  local_4._0_1_ = 0x10;
  FString::FString((FString *)(in_ECX + 0x7cb88));
  local_4._0_1_ = 0x12;
  thunk_FUN_10447540();
  local_4._0_1_ = 0x13;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x7cbb8,0x2c,100,(_func_void_void_ptr *)&LAB_1030f14b,
             (_func_void_void_ptr *)&LAB_10306b68);
  local_4._0_1_ = 0x14;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x7dcec,0x20,200,(_func_void_void_ptr *)&LAB_10304e30,
             (_func_void_void_ptr *)&LAB_1030ee3a);
  local_4._0_1_ = 0x15;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x7f62c,0x54,6,(_func_void_void_ptr *)&LAB_1030351c,
             (_func_void_void_ptr *)&LAB_10301825);
  local_4._0_1_ = 0x16;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x7f9e0,0x10,0xf,(_func_void_void_ptr *)&LAB_10305862,
             (_func_void_void_ptr *)&LAB_1030f0a1);
  local_4._0_1_ = 0x17;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x7fad0,0x10,0xf,(_func_void_void_ptr *)&LAB_10314501,
             (_func_void_void_ptr *)&LAB_10301b9a);
  local_4._0_1_ = 0x18;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x7fbc0,0x28,500,(_func_void_void_ptr *)&LAB_1030d0a3,
             (_func_void_void_ptr *)&LAB_10308139);
  local_4._0_1_ = 0x19;
  FArray::FArray((FArray *)(in_ECX + 0x849e4));
  local_4 = CONCAT31(local_4._1_3_,0x1b);
  *(undefined4 *)(in_ECX + 0x3d08) = 0;
  *(undefined4 *)(in_ECX + 0x3d18) = 0;
  *(undefined4 *)(in_ECX + 0x6a8d8) = 0;
  *(undefined4 *)(in_ECX + 0x7dce8) = 0;
  *(undefined4 *)(in_ECX + 0x7f9cc) = 0;
  *(undefined4 *)(in_ECX + 0x7f9c8) = 0;
  *(undefined4 *)(in_ECX + 0x7f9d0) = 0;
  FBlowFish::InitializeBlowfish
            ((FBlowFish *)(in_ECX + 0xdc),(uchar *)s_31_______________94__10af8bc4,0x15);
  pUVar2 = in_ECX + 0x34;
  for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar2 = 1;
    pUVar2 = pUVar2 + 4;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10465fc0 FUN_10465fc0

void FUN_10465fc0(byte param_1)

{
  thunk_FUN_1045f4f0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10465ff0 FUN_10465ff0

void FUN_10465ff0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x3d3c)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x3d38) + iVar2 * 4);
      if (iVar1 != 0) {
        FArray::Empty((FArray *)(iVar1 + 0x10),4,0);
        thunk_FUN_1045f4f0();
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x3d3c));
  }
  FArray::Empty((FArray *)(in_ECX + 0x3d38),4,0);
  return;
}


// ==== 10466070 FUN_10466070

void FUN_10466070(byte param_1)

{
  thunk_FUN_1045f580();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 104660a0 FUN_104660a0

void FUN_104660a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10813aa7;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  thunk_FUN_10465430();
  ExceptionList = local_c;
  return;
}


// ==== 10466110 FUN_10466110

void FUN_10466110(byte param_1)

{
  thunk_FUN_10463870();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10466140 FUN_10466140

/* WARNING: Type propagation algorithm not settling */

int FUN_10466140(int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  undefined4 uVar3;
  int iVar4;
  FOutputDevice *this;
  code *pcVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  ushort local_910 [32];
  FOutputDevice local_8d0 [184];
  undefined4 local_818;
  wchar_t local_7d8 [13];
  undefined4 local_7be;
  undefined4 local_7ba;
  undefined4 local_7b6;
  undefined4 local_7b2;
  undefined4 local_7ae;
  undefined4 local_7aa;
  undefined4 local_7a6;
  undefined4 local_7a2;
  undefined4 local_79e;
  undefined2 local_79a;
  wchar_t local_798 [13];
  undefined4 local_77e;
  undefined4 local_77a;
  undefined4 local_776;
  undefined4 local_772;
  undefined4 local_76e;
  undefined4 local_76a;
  undefined4 local_766;
  undefined4 local_762;
  undefined4 local_75e;
  undefined2 local_75a;
  wchar_t local_758 [13];
  undefined4 local_73e;
  undefined4 local_73a;
  undefined4 local_736;
  undefined4 local_732;
  undefined4 local_72e;
  undefined4 local_72a;
  undefined4 local_726;
  undefined4 local_722;
  undefined4 local_71e;
  undefined2 local_71a;
  wchar_t local_718 [13];
  undefined4 local_6fe;
  undefined4 local_6fa;
  undefined4 local_6f6;
  undefined4 local_6f2;
  undefined4 local_6ee;
  undefined4 local_6ea;
  undefined4 local_6e6;
  undefined4 local_6e2;
  undefined4 local_6de;
  undefined2 local_6da;
  wchar_t local_6d8 [11];
  undefined1 local_6c2 [42];
  wchar_t local_698 [11];
  undefined1 local_682 [42];
  wchar_t local_658 [9];
  undefined1 local_646 [46];
  wchar_t local_618 [9];
  undefined1 local_606 [46];
  wchar_t local_5d8 [11];
  undefined1 local_5c2 [42];
  wchar_t local_598 [11];
  undefined1 local_582 [42];
  wchar_t local_558 [9];
  undefined1 local_546 [46];
  wchar_t local_518 [9];
  undefined1 local_506 [46];
  wchar_t local_4d8 [64];
  undefined1 local_458 [64];
  wchar_t local_418 [15];
  undefined4 local_3fa;
  undefined4 local_3f6;
  undefined4 local_3f2;
  undefined4 local_3ee;
  undefined4 local_3ea;
  undefined4 local_3e6;
  undefined4 local_3e2;
  undefined4 local_3de;
  undefined2 local_3da;
  wchar_t local_3d8 [15];
  undefined4 local_3ba;
  undefined4 local_3b6;
  undefined4 local_3b2;
  undefined4 local_3ae;
  undefined4 local_3aa;
  undefined4 local_3a6;
  undefined4 local_3a2;
  undefined4 local_39e;
  undefined2 local_39a;
  wchar_t local_398 [15];
  undefined4 local_37a;
  undefined4 local_376;
  undefined4 local_372;
  undefined4 local_36e;
  undefined4 local_36a;
  undefined4 local_366;
  undefined4 local_362;
  undefined4 local_35e;
  undefined2 local_35a;
  wchar_t local_358 [15];
  undefined4 local_33a;
  undefined4 local_336;
  undefined4 local_332;
  undefined4 local_32e;
  undefined4 local_32a;
  undefined4 local_326;
  undefined4 local_322;
  undefined4 local_31e;
  undefined2 local_31a;
  wchar_t local_318 [13];
  undefined4 local_2fe;
  undefined4 local_2fa;
  undefined4 local_2f6;
  undefined4 local_2f2;
  undefined4 local_2ee;
  undefined4 local_2ea;
  undefined4 local_2e6;
  undefined4 local_2e2;
  undefined4 local_2de;
  undefined2 local_2da;
  wchar_t local_2d8 [13];
  undefined4 local_2be;
  undefined4 local_2ba;
  undefined4 local_2b6;
  undefined4 local_2b2;
  undefined4 local_2ae;
  undefined4 local_2aa;
  undefined4 local_2a6;
  undefined4 local_2a2;
  undefined4 local_29e;
  undefined2 local_29a;
  wchar_t local_298 [11];
  undefined1 local_282 [42];
  wchar_t local_258 [11];
  undefined1 local_242 [42];
  wchar_t local_218 [13];
  undefined4 local_1fe;
  undefined4 local_1fa;
  undefined4 local_1f6;
  undefined4 local_1f2;
  undefined4 local_1ee;
  undefined4 local_1ea;
  undefined4 local_1e6;
  undefined4 local_1e2;
  undefined4 local_1de;
  undefined2 local_1da;
  wchar_t local_1d8 [13];
  undefined4 local_1be;
  undefined4 local_1ba;
  undefined4 local_1b6;
  undefined4 local_1b2;
  undefined4 local_1ae;
  undefined4 local_1aa;
  undefined4 local_1a6;
  undefined4 local_1a2;
  undefined4 local_19e;
  undefined2 local_19a;
  wchar_t local_198 [11];
  undefined1 local_182 [42];
  wchar_t local_158 [11];
  undefined1 local_142 [42];
  undefined4 local_118 [7];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [7];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [76];
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [3];
  int local_34;
  FL2GameData *local_30;
  int local_2c;
  int local_28;
  int local_24;
  uchar *local_20;
  FArchive *local_1c;
  uchar *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10813acb;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff6e4;
  local_8 = 0;
  pwVar6 = L"MFighter_Begin";
  pwVar10 = local_418;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_3fa = 0;
  local_3f6 = 0;
  local_3f2 = 0;
  local_3ee = 0;
  local_3ea = 0;
  local_3e6 = 0;
  local_3e2 = 0;
  local_3de = 0;
  local_3da = 0;
  pwVar6 = L"FFighter_Begin";
  pwVar10 = local_3d8;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_3ba = 0;
  local_3b6 = 0;
  local_3b2 = 0;
  local_3ae = 0;
  local_3aa = 0;
  local_3a6 = 0;
  local_3a2 = 0;
  local_39e = 0;
  local_39a = 0;
  pwVar6 = L"MDarkElf_Begin";
  pwVar10 = local_398;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_37a = 0;
  local_376 = 0;
  local_372 = 0;
  local_36e = 0;
  local_36a = 0;
  local_366 = 0;
  local_362 = 0;
  local_35e = 0;
  local_35a = 0;
  pwVar6 = L"FDarkElf_Begin";
  pwVar10 = local_358;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_33a = 0;
  local_336 = 0;
  local_332 = 0;
  local_32e = 0;
  local_32a = 0;
  local_326 = 0;
  local_322 = 0;
  local_31e = 0;
  local_31a = 0;
  pwVar6 = L"MDwarf_Begin";
  pwVar10 = local_318;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_2fe = 0;
  local_2fa = 0;
  local_2f6 = 0;
  local_2f2 = 0;
  local_2ee = 0;
  local_2ea = 0;
  local_2e6 = 0;
  local_2e2 = 0;
  local_2de = 0;
  local_2da = 0;
  pwVar6 = L"FDwarf_Begin";
  pwVar10 = local_2d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_2be = 0;
  local_2ba = 0;
  local_2b6 = 0;
  local_2b2 = 0;
  local_2ae = 0;
  local_2aa = 0;
  local_2a6 = 0;
  local_2a2 = 0;
  local_29e = 0;
  local_29a = 0;
  builtin_wcsncpy(local_298,L"MElf_Begin",0xb);
  ExceptionList = &local_10;
  _memset(local_282,0,0x2a);
  builtin_wcsncpy(local_258,L"FElf_Begin",0xb);
  _memset(local_242,0,0x2a);
  pwVar6 = L"FMagic_Begin";
  pwVar10 = local_218;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_1fe = 0;
  local_1fa = 0;
  local_1f6 = 0;
  local_1f2 = 0;
  local_1ee = 0;
  local_1ea = 0;
  local_1e6 = 0;
  local_1e2 = 0;
  local_1de = 0;
  local_1da = 0;
  pwVar6 = L"MMagic_Begin";
  pwVar10 = local_1d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_1be = 0;
  local_1ba = 0;
  local_1b6 = 0;
  local_1b2 = 0;
  local_1ae = 0;
  local_1aa = 0;
  local_1a6 = 0;
  local_1a2 = 0;
  local_19e = 0;
  local_19a = 0;
  builtin_wcsncpy(local_198,L"MOrc_Begin",0xb);
  _memset(local_182,0,0x2a);
  builtin_wcsncpy(local_158,L"FOrc_Begin",0xb);
  _memset(local_142,0,0x2a);
  pwVar6 = L"MShaman_Begin";
  puVar9 = local_118;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    puVar9 = puVar9 + 1;
  }
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  pwVar6 = L"FShaman_Begin";
  puVar9 = local_d8;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    puVar9 = puVar9 + 1;
  }
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  _memset(local_98,0,0x40);
  pwVar6 = L"MFighter_End";
  pwVar10 = local_7d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_7be = 0;
  local_7ba = 0;
  local_7b6 = 0;
  local_7b2 = 0;
  local_7ae = 0;
  local_7aa = 0;
  local_7a6 = 0;
  local_7a2 = 0;
  local_79e = 0;
  local_79a = 0;
  pwVar6 = L"FFighter_End";
  pwVar10 = local_798;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_77e = 0;
  local_77a = 0;
  local_776 = 0;
  local_772 = 0;
  local_76e = 0;
  local_76a = 0;
  local_766 = 0;
  local_762 = 0;
  local_75e = 0;
  local_75a = 0;
  pwVar6 = L"MDarkElf_End";
  pwVar10 = local_758;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_73e = 0;
  local_73a = 0;
  local_736 = 0;
  local_732 = 0;
  local_72e = 0;
  local_72a = 0;
  local_726 = 0;
  local_722 = 0;
  local_71e = 0;
  local_71a = 0;
  pwVar6 = L"FDarkElf_End";
  pwVar10 = local_718;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_6fe = 0;
  local_6fa = 0;
  local_6f6 = 0;
  local_6f2 = 0;
  local_6ee = 0;
  local_6ea = 0;
  local_6e6 = 0;
  local_6e2 = 0;
  local_6de = 0;
  local_6da = 0;
  builtin_wcsncpy(local_6d8,L"MDwarf_End",0xb);
  _memset(local_6c2,0,0x2a);
  builtin_wcsncpy(local_698,L"FDwarf_End",0xb);
  _memset(local_682,0,0x2a);
  builtin_wcsncpy(local_658,L"MElf_End",9);
  _memset(local_646,0,0x2e);
  builtin_wcsncpy(local_618,L"FElf_End",9);
  _memset(local_606,0,0x2e);
  builtin_wcsncpy(local_5d8,L"FMagic_End",0xb);
  _memset(local_5c2,0,0x2a);
  builtin_wcsncpy(local_598,L"MMagic_End",0xb);
  _memset(local_582,0,0x2a);
  builtin_wcsncpy(local_558,L"MOrc_End",9);
  _memset(local_546,0,0x2e);
  builtin_wcsncpy(local_518,L"FOrc_End",9);
  _memset(local_506,0,0x2e);
  builtin_wcsncpy(local_4d8,L"MShaman_End",0xc);
  local_4d8[0xc] = L'\0';
  local_4d8[0xd] = L'\0';
  local_4d8[0xe] = L'\0';
  local_4d8[0xf] = L'\0';
  local_4d8[0x10] = L'\0';
  local_4d8[0x11] = L'\0';
  local_4d8[0x12] = L'\0';
  local_4d8[0x13] = L'\0';
  local_4d8[0x14] = L'\0';
  local_4d8[0x15] = L'\0';
  local_4d8[0x16] = L'\0';
  local_4d8[0x17] = L'\0';
  local_4d8[0x18] = L'\0';
  local_4d8[0x19] = L'\0';
  local_4d8[0x1a] = L'\0';
  local_4d8[0x1b] = L'\0';
  local_4d8[0x1c] = L'\0';
  local_4d8[0x1d] = L'\0';
  local_4d8[0x1e] = L'\0';
  local_4d8[0x1f] = L'\0';
  local_4d8[0x20] = L'F';
  local_4d8[0x21] = L'S';
  local_4d8[0x22] = L'h';
  local_4d8[0x23] = L'a';
  local_4d8[0x24] = L'm';
  local_4d8[0x25] = L'a';
  local_4d8[0x26] = L'n';
  local_4d8[0x27] = L'_';
  local_4d8[0x28] = L'E';
  local_4d8[0x29] = L'n';
  local_4d8[0x2a] = L'd';
  local_4d8[0x2b] = L'\0';
  local_4d8[0x2c] = L'\0';
  local_4d8[0x2d] = L'\0';
  local_4d8[0x2e] = L'\0';
  local_4d8[0x2f] = L'\0';
  local_4d8[0x30] = L'\0';
  local_4d8[0x31] = L'\0';
  local_4d8[0x32] = L'\0';
  local_4d8[0x33] = L'\0';
  local_4d8[0x34] = L'\0';
  local_4d8[0x35] = L'\0';
  local_4d8[0x36] = L'\0';
  local_4d8[0x37] = L'\0';
  local_4d8[0x38] = L'\0';
  local_4d8[0x39] = L'\0';
  local_4d8[0x3a] = L'\0';
  local_4d8[0x3b] = L'\0';
  local_4d8[0x3c] = L'\0';
  local_4d8[0x3d] = L'\0';
  local_4d8[0x3e] = L'\0';
  local_4d8[0x3f] = L'\0';
  _memset(local_458,0,0x40);
  pcVar5 = appStrcpy_exref;
  local_28 = 1;
  local_18 = (uchar *)0x0;
  local_2c = 0;
  local_1c = (FArchive *)0x0;
  appStrcpy((ushort *)local_8d0,(ushort *)L"Helmetgrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_8d0,0,*(undefined4 *)GNull_exref);
  iVar4 = param_1;
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10466fd0;
    }
  }
  else if (param_1 == 0) {
    local_2c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_30,pFVar1,&local_18,&local_2c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_18,local_2c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_8d0,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_30,pFVar2);
      if (iVar4 == 0) {
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      local_40[0] = 0;
      (**(code **)(*(int *)pFVar2 + 4))(local_40,4);
      for (local_34 = 0; local_34 < local_40[0]; local_34 = local_34 + 1) {
        local_20 = (uchar *)thunk_FUN_1032ffc0(0x708);
        if (local_20 != (uchar *)0x0) {
          local_40[1] = 0;
          (**(code **)(*(int *)pFVar2 + 4))(local_40 + 1,4);
          thunk_FUN_104460c0(pFVar2);
          thunk_FUN_10462d40(local_40 + 1,&local_20);
        }
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_18);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10466fd0;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  appStrcpy((ushort *)local_8d0,(ushort *)L"Helmetgrp.txt");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_8d0,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_28 = 0;
    pFVar1 = local_1c;
  }
  else {
    thunk_FUN_104a14b0();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_2c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    appStrcpy((ushort *)&DAT_10a9d99a,(ushort *)L"helmet_index");
    FL2GameData::GetTextInformation(local_30,pFVar1,&local_18,&local_2c,iVar4);
    if (local_18 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_28 = 0;
    }
    else {
      local_48 = 0;
      while (iVar4 = local_48, local_48 < 0xf) {
        (*pcVar5)(&DAT_10a9d798,local_418 + local_48 * 0x20);
        (*pcVar5)(&DAT_10aa17d8,local_7d8 + iVar4 * 0x20);
        local_20 = local_18 + 2;
        for (iVar7 = 0; local_44 = iVar7, iVar7 < 0x21; iVar7 = iVar7 + 1) {
          thunk_FUN_104a1120(&DAT_10a9d798 + iVar7 * 0x202,(&DAT_10a9d998)[iVar7 * 0x101]);
        }
        thunk_FUN_1049f750(local_20);
        iVar7 = thunk_FUN_104a1840();
        if (iVar7 == 0) {
          thunk_FUN_10445eb0(local_818);
          FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
          local_28 = 0;
          pFVar1 = local_1c;
          break;
        }
        local_20 = (uchar *)thunk_FUN_1049f840();
        for (local_24 = 0; local_24 < (int)local_20; local_24 = local_24 + 1) {
          param_1 = thunk_FUN_104a0b70(L"helmet_index",local_24);
          iVar7 = thunk_FUN_104588c0(&param_1);
          if (iVar7 == 0) {
            local_40[2] = iVar7;
            iVar7 = thunk_FUN_1032ffc0(0x708);
          }
          local_40[2] = iVar7;
          for (iVar8 = 0; local_4c = iVar8, iVar8 < 0xf; iVar8 = iVar8 + 1) {
            appSprintf(local_910,(ushort *)&DAT_10895df4,iVar8);
            uVar3 = thunk_FUN_104a0b70(local_910,local_24);
            *(undefined4 *)(iVar7 + (iVar4 * 0xf + iVar8) * 4) = uVar3;
            appSprintf(local_910,(ushort *)&DAT_10895de8,iVar8);
            uVar3 = thunk_FUN_104a0b70(local_910,local_24);
            *(undefined4 *)(iVar7 + ((iVar4 + 0xf) * 0xf + iVar8) * 4) = uVar3;
          }
          iVar7 = thunk_FUN_104588c0(&param_1);
          if (iVar7 == 0) {
            thunk_FUN_10462d40(&param_1,local_40 + 2);
          }
          pcVar5 = appStrcpy_exref;
        }
        thunk_FUN_104a16a0();
        pFVar1 = local_1c;
        local_48 = iVar4 + 1;
      }
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_18);
      if (local_28 != 0) {
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
    }
    local_8 = local_8 & 0xffffff00;
    thunk_FUN_104a1770();
    pFVar1 = local_1c;
  }
LAB_10466fd0:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return local_28;
}


// ==== 10466ff4 Catch@10466ff4

void Catch_10466ff4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 10467008 Catch@10467008

void Catch_10467008(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HelmHairDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104673e0 FUN_104673e0

void FUN_104673e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FArchive *pFVar4;
  FL2GameData *in_ECX;
  ushort local_bc [68];
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  FL2GameData *local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813ae8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff38;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  appStrcpy(local_bc,(ushort *)L"Helmetgrp.dat");
  pFVar4 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_bc,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar4 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x182c) + 4);
    (**(code **)(*(int *)pFVar4 + 4))(&param_1,4);
    piVar2 = *(int **)(in_ECX + 0x182c);
    local_28 = 0;
    local_8._0_1_ = 1;
    local_2c = 0;
    local_34 = piVar2;
    local_30 = piVar2;
    while (iVar3 = local_2c, local_2c < piVar2[1]) {
      iVar1 = *piVar2 + local_2c * 0xc;
      local_20 = *(undefined4 *)(iVar1 + 8);
      local_1c[0] = *(undefined4 *)(iVar1 + 4);
      (**(code **)(*(int *)pFVar4 + 4))(local_1c,4);
      thunk_FUN_104460c0(pFVar4);
      local_2c = iVar3 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463a80();
    FL2GameData::MakeSafePackage(local_24,pFVar4);
    (**(code **)(*(int *)pFVar4 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar4)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1046754d Catch@1046754d

void Catch_1046754d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10467561 Catch@10467561

void Catch_10467561(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HelmHairDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104675f0 FUN_104675f0

/* WARNING: Type propagation algorithm not settling */

int FUN_104675f0(int param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  undefined4 uVar3;
  int iVar4;
  FOutputDevice *this;
  code *pcVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  ushort local_910 [32];
  FOutputDevice local_8d0 [184];
  undefined4 local_818;
  wchar_t local_7d8 [13];
  undefined4 local_7be;
  undefined4 local_7ba;
  undefined4 local_7b6;
  undefined4 local_7b2;
  undefined4 local_7ae;
  undefined4 local_7aa;
  undefined4 local_7a6;
  undefined4 local_7a2;
  undefined4 local_79e;
  undefined2 local_79a;
  wchar_t local_798 [13];
  undefined4 local_77e;
  undefined4 local_77a;
  undefined4 local_776;
  undefined4 local_772;
  undefined4 local_76e;
  undefined4 local_76a;
  undefined4 local_766;
  undefined4 local_762;
  undefined4 local_75e;
  undefined2 local_75a;
  wchar_t local_758 [13];
  undefined4 local_73e;
  undefined4 local_73a;
  undefined4 local_736;
  undefined4 local_732;
  undefined4 local_72e;
  undefined4 local_72a;
  undefined4 local_726;
  undefined4 local_722;
  undefined4 local_71e;
  undefined2 local_71a;
  wchar_t local_718 [13];
  undefined4 local_6fe;
  undefined4 local_6fa;
  undefined4 local_6f6;
  undefined4 local_6f2;
  undefined4 local_6ee;
  undefined4 local_6ea;
  undefined4 local_6e6;
  undefined4 local_6e2;
  undefined4 local_6de;
  undefined2 local_6da;
  wchar_t local_6d8 [11];
  undefined1 local_6c2 [42];
  wchar_t local_698 [11];
  undefined1 local_682 [42];
  wchar_t local_658 [9];
  undefined1 local_646 [46];
  wchar_t local_618 [9];
  undefined1 local_606 [46];
  wchar_t local_5d8 [11];
  undefined1 local_5c2 [42];
  wchar_t local_598 [11];
  undefined1 local_582 [42];
  wchar_t local_558 [9];
  undefined1 local_546 [46];
  wchar_t local_518 [9];
  undefined1 local_506 [46];
  wchar_t local_4d8 [64];
  undefined1 local_458 [64];
  wchar_t local_418 [15];
  undefined4 local_3fa;
  undefined4 local_3f6;
  undefined4 local_3f2;
  undefined4 local_3ee;
  undefined4 local_3ea;
  undefined4 local_3e6;
  undefined4 local_3e2;
  undefined4 local_3de;
  undefined2 local_3da;
  wchar_t local_3d8 [15];
  undefined4 local_3ba;
  undefined4 local_3b6;
  undefined4 local_3b2;
  undefined4 local_3ae;
  undefined4 local_3aa;
  undefined4 local_3a6;
  undefined4 local_3a2;
  undefined4 local_39e;
  undefined2 local_39a;
  wchar_t local_398 [15];
  undefined4 local_37a;
  undefined4 local_376;
  undefined4 local_372;
  undefined4 local_36e;
  undefined4 local_36a;
  undefined4 local_366;
  undefined4 local_362;
  undefined4 local_35e;
  undefined2 local_35a;
  wchar_t local_358 [15];
  undefined4 local_33a;
  undefined4 local_336;
  undefined4 local_332;
  undefined4 local_32e;
  undefined4 local_32a;
  undefined4 local_326;
  undefined4 local_322;
  undefined4 local_31e;
  undefined2 local_31a;
  wchar_t local_318 [13];
  undefined4 local_2fe;
  undefined4 local_2fa;
  undefined4 local_2f6;
  undefined4 local_2f2;
  undefined4 local_2ee;
  undefined4 local_2ea;
  undefined4 local_2e6;
  undefined4 local_2e2;
  undefined4 local_2de;
  undefined2 local_2da;
  wchar_t local_2d8 [13];
  undefined4 local_2be;
  undefined4 local_2ba;
  undefined4 local_2b6;
  undefined4 local_2b2;
  undefined4 local_2ae;
  undefined4 local_2aa;
  undefined4 local_2a6;
  undefined4 local_2a2;
  undefined4 local_29e;
  undefined2 local_29a;
  wchar_t local_298 [11];
  undefined1 local_282 [42];
  wchar_t local_258 [11];
  undefined1 local_242 [42];
  wchar_t local_218 [13];
  undefined4 local_1fe;
  undefined4 local_1fa;
  undefined4 local_1f6;
  undefined4 local_1f2;
  undefined4 local_1ee;
  undefined4 local_1ea;
  undefined4 local_1e6;
  undefined4 local_1e2;
  undefined4 local_1de;
  undefined2 local_1da;
  wchar_t local_1d8 [13];
  undefined4 local_1be;
  undefined4 local_1ba;
  undefined4 local_1b6;
  undefined4 local_1b2;
  undefined4 local_1ae;
  undefined4 local_1aa;
  undefined4 local_1a6;
  undefined4 local_1a2;
  undefined4 local_19e;
  undefined2 local_19a;
  wchar_t local_198 [11];
  undefined1 local_182 [42];
  wchar_t local_158 [11];
  undefined1 local_142 [42];
  undefined4 local_118 [7];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [7];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [76];
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [3];
  int local_34;
  FL2GameData *local_30;
  int local_2c;
  int local_28;
  int local_24;
  uchar *local_20;
  FArchive *local_1c;
  uchar *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10813b0b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff6e4;
  local_8 = 0;
  pwVar6 = L"MFighter_Begin";
  pwVar10 = local_418;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_3fa = 0;
  local_3f6 = 0;
  local_3f2 = 0;
  local_3ee = 0;
  local_3ea = 0;
  local_3e6 = 0;
  local_3e2 = 0;
  local_3de = 0;
  local_3da = 0;
  pwVar6 = L"FFighter_Begin";
  pwVar10 = local_3d8;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_3ba = 0;
  local_3b6 = 0;
  local_3b2 = 0;
  local_3ae = 0;
  local_3aa = 0;
  local_3a6 = 0;
  local_3a2 = 0;
  local_39e = 0;
  local_39a = 0;
  pwVar6 = L"MDarkElf_Begin";
  pwVar10 = local_398;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_37a = 0;
  local_376 = 0;
  local_372 = 0;
  local_36e = 0;
  local_36a = 0;
  local_366 = 0;
  local_362 = 0;
  local_35e = 0;
  local_35a = 0;
  pwVar6 = L"FDarkElf_Begin";
  pwVar10 = local_358;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_33a = 0;
  local_336 = 0;
  local_332 = 0;
  local_32e = 0;
  local_32a = 0;
  local_326 = 0;
  local_322 = 0;
  local_31e = 0;
  local_31a = 0;
  pwVar6 = L"MDwarf_Begin";
  pwVar10 = local_318;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_2fe = 0;
  local_2fa = 0;
  local_2f6 = 0;
  local_2f2 = 0;
  local_2ee = 0;
  local_2ea = 0;
  local_2e6 = 0;
  local_2e2 = 0;
  local_2de = 0;
  local_2da = 0;
  pwVar6 = L"FDwarf_Begin";
  pwVar10 = local_2d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_2be = 0;
  local_2ba = 0;
  local_2b6 = 0;
  local_2b2 = 0;
  local_2ae = 0;
  local_2aa = 0;
  local_2a6 = 0;
  local_2a2 = 0;
  local_29e = 0;
  local_29a = 0;
  builtin_wcsncpy(local_298,L"MElf_Begin",0xb);
  ExceptionList = &local_10;
  _memset(local_282,0,0x2a);
  builtin_wcsncpy(local_258,L"FElf_Begin",0xb);
  _memset(local_242,0,0x2a);
  pwVar6 = L"MMagic_Begin";
  pwVar10 = local_218;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_1fe = 0;
  local_1fa = 0;
  local_1f6 = 0;
  local_1f2 = 0;
  local_1ee = 0;
  local_1ea = 0;
  local_1e6 = 0;
  local_1e2 = 0;
  local_1de = 0;
  local_1da = 0;
  pwVar6 = L"FMagic_Begin";
  pwVar10 = local_1d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_1be = 0;
  local_1ba = 0;
  local_1b6 = 0;
  local_1b2 = 0;
  local_1ae = 0;
  local_1aa = 0;
  local_1a6 = 0;
  local_1a2 = 0;
  local_19e = 0;
  local_19a = 0;
  builtin_wcsncpy(local_198,L"MOrc_Begin",0xb);
  _memset(local_182,0,0x2a);
  builtin_wcsncpy(local_158,L"FOrc_Begin",0xb);
  _memset(local_142,0,0x2a);
  pwVar6 = L"MShaman_Begin";
  puVar9 = local_118;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    puVar9 = puVar9 + 1;
  }
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  pwVar6 = L"FShaman_Begin";
  puVar9 = local_d8;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    puVar9 = puVar9 + 1;
  }
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  _memset(local_98,0,0x40);
  pwVar6 = L"MFighter_End";
  pwVar10 = local_7d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_7be = 0;
  local_7ba = 0;
  local_7b6 = 0;
  local_7b2 = 0;
  local_7ae = 0;
  local_7aa = 0;
  local_7a6 = 0;
  local_7a2 = 0;
  local_79e = 0;
  local_79a = 0;
  pwVar6 = L"FFighter_End";
  pwVar10 = local_798;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_77e = 0;
  local_77a = 0;
  local_776 = 0;
  local_772 = 0;
  local_76e = 0;
  local_76a = 0;
  local_766 = 0;
  local_762 = 0;
  local_75e = 0;
  local_75a = 0;
  pwVar6 = L"MDarkElf_End";
  pwVar10 = local_758;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_73e = 0;
  local_73a = 0;
  local_736 = 0;
  local_732 = 0;
  local_72e = 0;
  local_72a = 0;
  local_726 = 0;
  local_722 = 0;
  local_71e = 0;
  local_71a = 0;
  pwVar6 = L"FDarkElf_End";
  pwVar10 = local_718;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar10 = pwVar10 + 2;
  }
  *pwVar10 = *pwVar6;
  local_6fe = 0;
  local_6fa = 0;
  local_6f6 = 0;
  local_6f2 = 0;
  local_6ee = 0;
  local_6ea = 0;
  local_6e6 = 0;
  local_6e2 = 0;
  local_6de = 0;
  local_6da = 0;
  builtin_wcsncpy(local_6d8,L"MDwarf_End",0xb);
  _memset(local_6c2,0,0x2a);
  builtin_wcsncpy(local_698,L"FDwarf_End",0xb);
  _memset(local_682,0,0x2a);
  builtin_wcsncpy(local_658,L"MElf_End",9);
  _memset(local_646,0,0x2e);
  builtin_wcsncpy(local_618,L"FElf_End",9);
  _memset(local_606,0,0x2e);
  builtin_wcsncpy(local_5d8,L"MMagic_End",0xb);
  _memset(local_5c2,0,0x2a);
  builtin_wcsncpy(local_598,L"FMagic_End",0xb);
  _memset(local_582,0,0x2a);
  builtin_wcsncpy(local_558,L"MOrc_End",9);
  _memset(local_546,0,0x2e);
  builtin_wcsncpy(local_518,L"FOrc_End",9);
  _memset(local_506,0,0x2e);
  builtin_wcsncpy(local_4d8,L"MShaman_End",0xc);
  local_4d8[0xc] = L'\0';
  local_4d8[0xd] = L'\0';
  local_4d8[0xe] = L'\0';
  local_4d8[0xf] = L'\0';
  local_4d8[0x10] = L'\0';
  local_4d8[0x11] = L'\0';
  local_4d8[0x12] = L'\0';
  local_4d8[0x13] = L'\0';
  local_4d8[0x14] = L'\0';
  local_4d8[0x15] = L'\0';
  local_4d8[0x16] = L'\0';
  local_4d8[0x17] = L'\0';
  local_4d8[0x18] = L'\0';
  local_4d8[0x19] = L'\0';
  local_4d8[0x1a] = L'\0';
  local_4d8[0x1b] = L'\0';
  local_4d8[0x1c] = L'\0';
  local_4d8[0x1d] = L'\0';
  local_4d8[0x1e] = L'\0';
  local_4d8[0x1f] = L'\0';
  local_4d8[0x20] = L'F';
  local_4d8[0x21] = L'S';
  local_4d8[0x22] = L'h';
  local_4d8[0x23] = L'a';
  local_4d8[0x24] = L'm';
  local_4d8[0x25] = L'a';
  local_4d8[0x26] = L'n';
  local_4d8[0x27] = L'_';
  local_4d8[0x28] = L'E';
  local_4d8[0x29] = L'n';
  local_4d8[0x2a] = L'd';
  local_4d8[0x2b] = L'\0';
  local_4d8[0x2c] = L'\0';
  local_4d8[0x2d] = L'\0';
  local_4d8[0x2e] = L'\0';
  local_4d8[0x2f] = L'\0';
  local_4d8[0x30] = L'\0';
  local_4d8[0x31] = L'\0';
  local_4d8[0x32] = L'\0';
  local_4d8[0x33] = L'\0';
  local_4d8[0x34] = L'\0';
  local_4d8[0x35] = L'\0';
  local_4d8[0x36] = L'\0';
  local_4d8[0x37] = L'\0';
  local_4d8[0x38] = L'\0';
  local_4d8[0x39] = L'\0';
  local_4d8[0x3a] = L'\0';
  local_4d8[0x3b] = L'\0';
  local_4d8[0x3c] = L'\0';
  local_4d8[0x3d] = L'\0';
  local_4d8[0x3e] = L'\0';
  local_4d8[0x3f] = L'\0';
  _memset(local_458,0,0x40);
  pcVar5 = appStrcpy_exref;
  local_28 = 1;
  local_18 = (uchar *)0x0;
  local_2c = 0;
  local_1c = (FArchive *)0x0;
  appStrcpy((ushort *)local_8d0,(ushort *)L"HairAccessarygrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_8d0,0,*(undefined4 *)GNull_exref);
  iVar4 = param_1;
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10468480;
    }
  }
  else if (param_1 == 0) {
    local_2c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_30,pFVar1,&local_18,&local_2c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_18,local_2c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_8d0,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_30,pFVar2);
      if (iVar4 == 0) {
        FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref);
      }
      local_40[0] = 0;
      (**(code **)(*(int *)pFVar2 + 4))(local_40,4);
      for (local_34 = 0; local_34 < local_40[0]; local_34 = local_34 + 1) {
        local_20 = (uchar *)thunk_FUN_1032ffc0(0x708);
        if (local_20 != (uchar *)0x0) {
          local_40[1] = 0;
          (**(code **)(*(int *)pFVar2 + 4))(local_40 + 1,4);
          thunk_FUN_104460c0(pFVar2);
          thunk_FUN_10462d40(local_40 + 1,&local_20);
        }
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_18);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10468480;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  appStrcpy((ushort *)local_8d0,(ushort *)L"HairAccessarygrp.txt");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_8d0,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_28 = 0;
    pFVar1 = local_1c;
  }
  else {
    thunk_FUN_104a14b0();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_2c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    appStrcpy((ushort *)&DAT_10a9d99a,(ushort *)L"HairAccessary_index");
    FL2GameData::GetTextInformation(local_30,pFVar1,&local_18,&local_2c,iVar4);
    if (local_18 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_28 = 0;
    }
    else {
      local_48 = 0;
      while (iVar4 = local_48, local_48 < 0xf) {
        (*pcVar5)(&DAT_10a9d798,local_418 + local_48 * 0x20);
        (*pcVar5)(&DAT_10aa17d8,local_7d8 + iVar4 * 0x20);
        local_20 = local_18 + 2;
        for (iVar7 = 0; local_44 = iVar7, iVar7 < 0x21; iVar7 = iVar7 + 1) {
          thunk_FUN_104a1120(&DAT_10a9d798 + iVar7 * 0x202,(&DAT_10a9d998)[iVar7 * 0x101]);
        }
        thunk_FUN_1049f750(local_20);
        iVar7 = thunk_FUN_104a1840();
        if (iVar7 == 0) {
          thunk_FUN_10445eb0(local_818);
          FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
          local_28 = 0;
          pFVar1 = local_1c;
          break;
        }
        local_20 = (uchar *)thunk_FUN_1049f840();
        for (local_24 = 0; local_24 < (int)local_20; local_24 = local_24 + 1) {
          param_1 = thunk_FUN_104a0b70(L"HairAccessary_index",local_24);
          iVar7 = thunk_FUN_104588c0(&param_1);
          if (iVar7 == 0) {
            local_40[2] = iVar7;
            iVar7 = thunk_FUN_1032ffc0(0x708);
          }
          local_40[2] = iVar7;
          for (iVar8 = 0; local_4c = iVar8, iVar8 < 0xf; iVar8 = iVar8 + 1) {
            appSprintf(local_910,(ushort *)&DAT_10895df4,iVar8);
            uVar3 = thunk_FUN_104a0b70(local_910,local_24);
            *(undefined4 *)(iVar7 + (iVar4 * 0xf + iVar8) * 4) = uVar3;
            appSprintf(local_910,(ushort *)&DAT_10895de8,iVar8);
            uVar3 = thunk_FUN_104a0b70(local_910,local_24);
            *(undefined4 *)(iVar7 + ((iVar4 + 0xf) * 0xf + iVar8) * 4) = uVar3;
          }
          iVar7 = thunk_FUN_104588c0(&param_1);
          if (iVar7 == 0) {
            thunk_FUN_10462d40(&param_1,local_40 + 2);
          }
          pcVar5 = appStrcpy_exref;
        }
        thunk_FUN_104a16a0();
        pFVar1 = local_1c;
        local_48 = iVar4 + 1;
      }
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_18);
      if (local_28 != 0) {
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
    }
    local_8 = local_8 & 0xffffff00;
    thunk_FUN_104a1770();
    pFVar1 = local_1c;
  }
LAB_10468480:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return local_28;
}


// ==== 104684a4 Catch@104684a4

void Catch_104684a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_10914c48);
}


// ==== 104684b8 Catch@104684b8

void Catch_104684b8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HelmHairDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10468890 FUN_10468890

void FUN_10468890(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FArchive *pFVar4;
  FL2GameData *in_ECX;
  ushort local_bc [68];
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  FL2GameData *local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813b28;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff38;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  appStrcpy(local_bc,(ushort *)L"HairAccessarygrp.dat");
  pFVar4 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_bc,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar4 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x1830) + 4);
    (**(code **)(*(int *)pFVar4 + 4))(&param_1,4);
    piVar2 = *(int **)(in_ECX + 0x1830);
    local_28 = 0;
    local_8._0_1_ = 1;
    local_2c = 0;
    local_34 = piVar2;
    local_30 = piVar2;
    while (iVar3 = local_2c, local_2c < piVar2[1]) {
      iVar1 = *piVar2 + local_2c * 0xc;
      local_20 = *(undefined4 *)(iVar1 + 8);
      local_1c[0] = *(undefined4 *)(iVar1 + 4);
      (**(code **)(*(int *)pFVar4 + 4))(local_1c,4);
      thunk_FUN_104460c0(pFVar4);
      local_2c = iVar3 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463a80();
    FL2GameData::MakeSafePackage(local_24,pFVar4);
    (**(code **)(*(int *)pFVar4 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar4)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104689fd Catch@104689fd

void Catch_104689fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10468a11 Catch@10468a11

void Catch_10468a11(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::AccessaryHairDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10468aa0 FUN_10468aa0

undefined4 FUN_10468aa0(ushort *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  FOutputDevice local_17c [188];
  undefined4 local_c0;
  undefined1 *local_80;
  void *local_7c;
  undefined1 *puStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  FArchive *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  FL2GameData *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_78 = &LAB_10813b61;
  local_7c = ExceptionList;
  local_80 = &stack0xfffffe78;
  local_74 = 0;
  local_1c = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_30 = (FArchive *)0x0;
  ExceptionList = &local_7c;
  appStrcpy((ushort *)local_17c,(ushort *)L"EtcItemgrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_17c,0,*(undefined4 *)GNull_exref);
  puVar7 = param_1;
  local_30 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (ushort *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_17c,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104692b5;
    }
  }
  else if (param_1 == (ushort *)0x0) {
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_10,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_17c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(local_10,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_17c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_28 = 0; local_28 < (int)param_1; local_28 = local_28 + 1) {
        local_38 = thunk_FUN_1032ffc0(0x110);
        local_74._0_1_ = 1;
        if (local_38 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1045cb90();
        }
        local_74 = (uint)local_74._1_3_ << 8;
        thunk_FUN_1044e650(pFVar2);
        local_2c = iVar3;
        thunk_FUN_10462df0(iVar3 + 0xc,&local_2c);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_104692b5;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  appStrcpy((ushort *)local_17c,(ushort *)L"EtcItemgrp.txt");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_17c,0,*(undefined4 *)GNull_exref);
  local_30 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_17c,*(ushort **)GWarn_exref);
    local_1c = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_74._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_10,pFVar1,&local_8,&local_c,(int)puVar7);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_17c,*(ushort **)GWarn_exref);
      local_1c = 0;
      local_74 = (uint)local_74._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = (ushort *)(local_8 + 2);
      for (iVar3 = 0; local_60 = iVar3, iVar3 < 0x16; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_item_begin_10aa7440 + iVar3 * 0x101,
                           u_cobject_id_10aa7640[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_c0);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_1c = 0;
      }
      else {
        local_2c = thunk_FUN_1049f840();
        local_5c = 0;
        while (iVar3 = local_5c, local_5c < local_2c) {
          param_1 = (ushort *)thunk_FUN_1032ffc0(0x110);
          local_74._0_1_ = 3;
          if (param_1 == (ushort *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = thunk_FUN_1045cb90();
          }
          local_74._0_1_ = 2;
          *(undefined4 *)(iVar4 + 4) = 2;
          uVar5 = thunk_FUN_104a0b70(L"object_id",iVar3);
          local_34 = uVar5;
          iVar6 = thunk_FUN_10422ee0(&local_34);
          if (iVar6 != 0) {
            appMsgf(0,(ushort *)&DAT_10899090,uVar5);
          }
          *(undefined4 *)(iVar4 + 0xc) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_type",iVar3);
          *(undefined4 *)(iVar4 + 0x10) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_anim_type",iVar3);
          *(undefined4 *)(iVar4 + 0x14) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_radius",iVar3);
          *(undefined4 *)(iVar4 + 0x18) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_height",iVar3);
          *(undefined4 *)(iVar4 + 0x1c) = uVar5;
          puVar7 = (ushort *)thunk_FUN_104a0cf0(L"icon",0,iVar3);
          L2FName::L2FName((L2FName *)&local_54,puVar7,2);
          *(undefined4 *)(iVar4 + 0x3c) = local_54;
          param_1 = (ushort *)thunk_FUN_104a0c90(L"drop_mesh",iVar3);
          iVar6 = 0;
          while( true ) {
            local_48 = iVar6;
            if ((int)param_1 <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"drop_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_3c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x24 + iVar6 * 4) = local_3c;
            iVar6 = iVar6 + 1;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"drop_texture",iVar3);
          iVar6 = 0;
          while( true ) {
            local_50 = iVar6;
            if ((int)param_1 <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"drop_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_70,puVar7,2);
            *(undefined4 *)(iVar4 + 0x30 + iVar6 * 4) = local_70;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mesh",iVar3);
          *(int *)(iVar4 + 0xd4) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xd4) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_58 = iVar6;
            if (*(int *)(iVar4 + 0xd4) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)local_68,puVar7,2);
            *(undefined4 *)(iVar4 + 0xd8 + iVar6 * 4) = local_68[0];
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"texture",iVar3);
          *(int *)(iVar4 + 0xe8) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xe8) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_40 = iVar6;
            if (*(int *)(iVar4 + 0xe8) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_6c,puVar7,2);
            *(undefined4 *)(iVar4 + 0xec + iVar6 * 4) = local_6c;
            iVar6 = iVar6 + 1;
          }
          uVar5 = thunk_FUN_104a0b70(L"crystallizable",iVar3);
          *(undefined4 *)(iVar4 + 0xcc) = uVar5;
          param_1 = (ushort *)thunk_FUN_104a0c30(L"etcitem_type",iVar3);
          for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
            iVar8 = local_20 * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_none_10a87d10 + local_20 * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 0x100) = *(undefined4 *)(&DAT_10a87f10 + iVar8);
              break;
            }
          }
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"drop_sound",iVar3);
          L2FName::L2FName((L2FName *)&local_44,puVar7,2);
          *(undefined4 *)(iVar4 + 0x108) = local_44;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"equip_sound",iVar3);
          L2FName::L2FName((L2FName *)&local_4c,puVar7,2);
          *(undefined4 *)(iVar4 + 0x10c) = local_4c;
          uVar5 = thunk_FUN_104a0b70(L"weight",iVar3);
          *(undefined4 *)(iVar4 + 0xc4) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"durability",iVar3);
          *(undefined4 *)(iVar4 + 0xc0) = uVar5;
          param_1 = (ushort *)thunk_FUN_104a0c30(L"consume_type",iVar3);
          for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
            iVar8 = local_24 * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_consume_type_normal_10a7d5c0 + local_24 * 0x102)
                              );
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 0xfc) = *(undefined4 *)(&DAT_10a7d7c0 + iVar8);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"material_type",iVar3);
          for (local_18 = 0; local_18 < 0x36; local_18 = local_18 + 1) {
            iVar8 = local_18 * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_oriharukon_10a7ddd0 + local_18 * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 200) = *(undefined4 *)(&DAT_10a7dfd0 + iVar8);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"crystal_type",iVar3);
          for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
            iVar8 = local_14 * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_none_10a84aa8 + local_14 * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 0x104) = *(undefined4 *)(&DAT_10a84ca8 + iVar8);
              break;
            }
          }
          local_38 = iVar4;
          thunk_FUN_10462df0(&local_34,&local_38);
          pFVar1 = local_30;
          local_5c = iVar3 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_74 = (uint)local_74._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_104692b5:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_7c;
  return local_1c;
}


// ==== 104692dc Catch@104692dc

void Catch_104692dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 104692f3 Catch@104692f3

void Catch_104692f3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::EtcItemDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10469530 FUN_10469530

undefined4 FUN_10469530(ushort *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  FOutputDevice *this;
  int iVar9;
  float fVar10;
  EFindName EVar11;
  FOutputDevice local_1ac [132];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4 [15];
  undefined4 local_88;
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  int local_3c;
  int local_38;
  FArchive *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  FL2GameData *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10813ba1;
  local_44 = ExceptionList;
  local_48 = &stack0xfffffe48;
  local_3c = 0;
  local_20 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_34 = (FArchive *)0x0;
  ExceptionList = &local_44;
  appStrcpy((ushort *)local_1ac,(ushort *)L"Weapongrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_1ac,0,*(undefined4 *)GNull_exref);
  puVar1 = (uchar *)param_1;
  local_34 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (ushort *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046a4bc;
    }
  }
  else if (param_1 == (ushort *)0x0) {
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_1ac,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_14,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_1ac,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_2c = 0; local_2c < (int)param_1; local_2c = local_2c + 1) {
        local_38 = thunk_FUN_1032ffc0(0x25c);
        local_3c._0_1_ = 1;
        if (local_38 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = thunk_FUN_1045cd00();
        }
        local_3c = (uint)local_3c._1_3_ << 8;
        thunk_FUN_1044dc60(pFVar3);
        local_30 = iVar4;
        thunk_FUN_10462df0(iVar4 + 0xc,&local_30);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_1046a4bc;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_1ac,(ushort *)L"Weapongrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_1ac,0,*(undefined4 *)GNull_exref);
  local_34 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_20 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_8,&local_c,(int)puVar1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_20 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = (ushort *)(local_8 + 2);
      for (iVar4 = 0; local_11c = iVar4, iVar4 < 0x33; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_item_begin_10aaa070 + iVar4 * 0x101,
                           u_cobject_id_10aaa270[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_20 = 0;
      }
      else {
        local_30 = thunk_FUN_1049f840();
        local_110 = 0;
        while (iVar4 = local_110, local_110 < local_30) {
          param_1 = (ushort *)thunk_FUN_1032ffc0(0x25c);
          local_3c._0_1_ = 3;
          if (param_1 == (ushort *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = thunk_FUN_1045cd00();
          }
          local_3c._0_1_ = 2;
          *(undefined4 *)(iVar5 + 4) = 0;
          uVar6 = thunk_FUN_104a0b70(L"object_id",iVar4);
          local_10 = uVar6;
          iVar7 = thunk_FUN_10422ee0(&local_10);
          if (iVar7 != 0) {
            appMsgf(0,(ushort *)&DAT_10899090,uVar6);
          }
          param_1 = (ushort *)thunk_FUN_104a0cf0(L"body_part",0,iVar4);
          for (local_24 = 0; local_24 < 0x15; local_24 = local_24 + 1) {
            iVar9 = local_24 * 0x204;
            iVar7 = appStricmp(param_1,(ushort *)(u_rhand_10a7a358 + local_24 * 0x102));
            if (iVar7 == 0) {
              *(undefined4 *)(iVar5 + 0xd4) = *(undefined4 *)(&DAT_10a7a558 + iVar9);
              break;
            }
          }
          *(undefined4 *)(iVar5 + 0xc) = local_10;
          uVar6 = thunk_FUN_104a0b70(L"animation",iVar4);
          *(undefined4 *)(iVar5 + 0xd8) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"drop_type",iVar4);
          *(undefined4 *)(iVar5 + 0x10) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"drop_anim_type",iVar4);
          *(undefined4 *)(iVar5 + 0x14) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"drop_radius",iVar4);
          *(undefined4 *)(iVar5 + 0x18) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"drop_height",iVar4);
          *(undefined4 *)(iVar5 + 0x1c) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"curvature",iVar4);
          *(undefined4 *)(iVar5 + 0x15c) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"add_bone",iVar4);
          *(undefined4 *)(iVar5 + 0x160) = uVar6;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"icon",0,iVar4);
          L2FName::L2FName((L2FName *)&local_108,puVar8,2);
          *(undefined4 *)(iVar5 + 0x3c) = local_108;
          iVar7 = thunk_FUN_104a0c90(L"icon",iVar4);
          if (1 < iVar7) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"icon",1,iVar4);
            L2FName::L2FName((L2FName *)&local_124,puVar8,2);
            *(undefined4 *)(iVar5 + 0x40) = local_124;
            if (2 < iVar7) {
              puVar8 = (ushort *)thunk_FUN_104a0cf0(L"icon",2,iVar4);
              L2FName::L2FName((L2FName *)&local_cc,puVar8,2);
              *(undefined4 *)(iVar5 + 0x44) = local_cc;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"drop_mesh",iVar4);
          iVar7 = 0;
          while( true ) {
            local_d4 = iVar7;
            if ((int)param_1 <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"drop_mesh",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_128,puVar8,2);
            *(undefined4 *)(iVar5 + 0x24 + iVar7 * 4) = local_128;
            iVar7 = iVar7 + 1;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"drop_texture",iVar4);
          iVar7 = 0;
          while( true ) {
            local_dc = iVar7;
            if ((int)param_1 <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"drop_texture",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_104,puVar8,2);
            *(undefined4 *)(iVar5 + 0x30 + iVar7 * 4) = local_104;
            iVar7 = iVar7 + 1;
          }
          iVar7 = thunk_FUN_104a0c90(L"mesh",iVar4);
          *(int *)(iVar5 + 0xdc) = iVar7;
          if (4 < iVar7) {
            *(undefined4 *)(iVar5 + 0xdc) = 4;
          }
          iVar7 = 0;
          while( true ) {
            local_e4 = iVar7;
            if (*(int *)(iVar5 + 0xdc) <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"mesh",iVar7,iVar4);
            L2FName::L2FName((L2FName *)local_c4,puVar8,2);
            *(undefined4 *)(iVar5 + 0xe0 + iVar7 * 4) = local_c4[0];
            iVar7 = iVar7 + 1;
          }
          iVar7 = thunk_FUN_104a0c90(L"texture",iVar4);
          *(int *)(iVar5 + 0xf0) = iVar7;
          if (4 < iVar7) {
            *(undefined4 *)(iVar5 + 0xf0) = 4;
          }
          iVar7 = 0;
          while( true ) {
            local_ec = iVar7;
            if (*(int *)(iVar5 + 0xf0) <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"texture",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_10c,puVar8,2);
            *(undefined4 *)(iVar5 + 0xf4 + iVar7 * 4) = local_10c;
            iVar7 = iVar7 + 1;
          }
          uVar6 = thunk_FUN_104a0b70(L"crystallizable",iVar4);
          *(undefined4 *)(iVar5 + 0xcc) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"weight",iVar4);
          *(undefined4 *)(iVar5 + 0xc4) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"soulshot_count",iVar4);
          *(undefined4 *)(iVar5 + 0x154) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"spiritshot_count",iVar4);
          *(undefined4 *)(iVar5 + 0x158) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"durability",iVar4);
          *(undefined4 *)(iVar5 + 0xc0) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"physical_damage",iVar4);
          *(undefined4 *)(iVar5 + 0x128) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"random_damage",iVar4);
          *(undefined4 *)(iVar5 + 0x124) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"critical",iVar4);
          *(undefined4 *)(iVar5 + 0x138) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"hit_modify",iVar4);
          *(undefined4 *)(iVar5 + 0x13c) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"avoid_modify",iVar4);
          *(undefined4 *)(iVar5 + 0x140) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"shield_defense",iVar4);
          *(undefined4 *)(iVar5 + 0x144) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"shield_defense_rate",iVar4);
          *(undefined4 *)(iVar5 + 0x148) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"attack_speed",iVar4);
          *(undefined4 *)(iVar5 + 0x14c) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"mp_consume",iVar4);
          *(undefined4 *)(iVar5 + 0x150) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"magical_damage",iVar4);
          *(undefined4 *)(iVar5 + 300) = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"can_equip_hero",iVar4);
          *(undefined4 *)(iVar5 + 0x168) = uVar6;
          iVar7 = thunk_FUN_104a0b70(L"can_equip_agit",iVar4);
          iVar9 = thunk_FUN_104a0b70(L"can_equip_castle",iVar4);
          if ((iVar7 < 1) && (iVar9 < 1)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 3;
          }
          *(undefined4 *)(iVar5 + 0x164) = uVar6;
          iVar7 = thunk_FUN_104a0c90(L"item_sound",iVar4);
          *(int *)(iVar5 + 0x104) = iVar7;
          if (4 < iVar7) {
            *(undefined4 *)(iVar5 + 0x104) = 4;
          }
          iVar7 = 0;
          while( true ) {
            local_f4 = iVar7;
            if (*(int *)(iVar5 + 0x104) <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"item_sound",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_120,puVar8,2);
            *(undefined4 *)(iVar5 + 0x108 + iVar7 * 4) = local_120;
            iVar7 = iVar7 + 1;
          }
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"drop_sound",iVar4);
          L2FName::L2FName((L2FName *)&local_114,puVar8,2);
          *(undefined4 *)(iVar5 + 0x118) = local_114;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"equip_sound",iVar4);
          L2FName::L2FName((L2FName *)&local_fc,puVar8,2);
          *(undefined4 *)(iVar5 + 0x11c) = local_fc;
          puVar8 = (ushort *)thunk_FUN_104a0c30(L"projectile",iVar4);
          L2FName::L2FName((L2FName *)&local_c8,puVar8,2);
          *(undefined4 *)(iVar5 + 0x120) = local_c8;
          param_1 = (ushort *)thunk_FUN_104a0c30(L"material_type",iVar4);
          for (local_28 = 0; local_28 < 0x36; local_28 = local_28 + 1) {
            iVar9 = local_28 * 0x204;
            iVar7 = appStricmp(param_1,(ushort *)(u_oriharukon_10a7ddd0 + local_28 * 0x102));
            if (iVar7 == 0) {
              *(undefined4 *)(iVar5 + 200) = *(undefined4 *)(&DAT_10a7dfd0 + iVar9);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"crystal_type",iVar4);
          for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
            iVar9 = local_18 * 0x204;
            iVar7 = appStricmp(param_1,(ushort *)(u_none_10a84aa8 + local_18 * 0x102));
            if (iVar7 == 0) {
              *(undefined4 *)(iVar5 + 0x134) = *(undefined4 *)(&DAT_10a84ca8 + iVar9);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"weapon_type",iVar4);
          for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
            iVar9 = local_1c * 0x204;
            iVar7 = appStricmp(param_1,(ushort *)(u_none_10a858c8 + local_1c * 0x102));
            if (iVar7 == 0) {
              *(undefined4 *)(iVar5 + 0x130) = *(undefined4 *)(&DAT_10a85ac8 + iVar9);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"EnchantedEffect",iVar4);
          if ((ushort *)*(int *)(iVar5 + 0xdc) != param_1) {
            appMsgf(0,(ushort *)&DAT_10899330,local_10);
          }
          iVar7 = 0;
          while( true ) {
            local_d8 = iVar7;
            if ((int)param_1 <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffect",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_d0,puVar8,2);
            *(undefined4 *)(iVar5 + 0x1dc + iVar7 * 4) = local_d0;
            iVar7 = iVar7 + 1;
          }
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectOffset",0,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x1ec) = fVar10;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectOffset",1,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x1f0) = fVar10;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectOffset",2,iVar4);
          fVar10 = appAtof(puVar8);
          iVar7 = (int)param_1;
          *(float *)(iVar5 + 500) = fVar10;
          if (param_1 == (ushort *)0x2) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectOffset",3,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x1f8) = fVar10;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectOffset",4,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x1fc) = fVar10;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectOffset",5,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x200) = fVar10;
          }
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectScale",0,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x21c) = fVar10;
          if (iVar7 == 2) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectScale",1,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x220) = fVar10;
          }
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectVelocity",0,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x22c) = fVar10;
          if (iVar7 == 2) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedEffectVelocity",1,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x230) = fVar10;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"EnchantedMesh",iVar4);
          if ((ushort *)*(int *)(iVar5 + 0xdc) != param_1) {
            appMsgf(0,(ushort *)&DAT_10899330,local_10);
          }
          iVar7 = 0;
          while( true ) {
            local_e8 = iVar7;
            if ((int)param_1 <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMesh",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_e0,puVar8,2);
            *(undefined4 *)(iVar5 + 0x16c + iVar7 * 4) = local_e0;
            iVar7 = iVar7 + 1;
          }
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshOffset",0,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x1ac) = fVar10;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshOffset",1,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x1b0) = fVar10;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshOffset",2,iVar4);
          fVar10 = appAtof(puVar8);
          iVar7 = (int)param_1;
          *(float *)(iVar5 + 0x1b4) = fVar10;
          if (param_1 == (ushort *)0x2) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshOffset",3,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x1b8) = fVar10;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshOffset",4,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x1bc) = fVar10;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshOffset",5,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x1c0) = fVar10;
          }
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshScale",0,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x17c) = fVar10;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshScale",1,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x180) = fVar10;
          puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshScale",2,iVar4);
          fVar10 = appAtof(puVar8);
          *(float *)(iVar5 + 0x184) = fVar10;
          if (iVar7 == 2) {
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshScale",3,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x188) = fVar10;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshScale",4,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 0x18c) = fVar10;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"EnchantedMeshScale",5,iVar4);
            fVar10 = appAtof(puVar8);
            *(float *)(iVar5 + 400) = fVar10;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"variation_effect_type",iVar4);
          iVar7 = 0;
          while( true ) {
            local_f0 = iVar7;
            if ((int)param_1 <= iVar7) break;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"variation_effect_type",iVar7,iVar4);
            iVar9 = appAtoi(puVar8);
            *(int *)(iVar5 + 0x23c + iVar7 * 4) = iVar9;
            iVar7 = iVar7 + 1;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"variation_icon",iVar4);
          for (iVar7 = 0; local_100 = iVar7, iVar7 < (int)param_1; iVar7 = iVar7 + 1) {
            EVar11 = 2;
            puVar8 = (ushort *)thunk_FUN_104a0cf0(L"variation_icon",iVar7,iVar4);
            L2FName::L2FName((L2FName *)&local_f8,puVar8,EVar11);
            *(undefined4 *)(iVar5 + 0x24c + iVar7 * 4) = local_f8;
          }
          local_38 = iVar5;
          thunk_FUN_10462df0(&local_10,&local_38);
          pFVar2 = local_34;
          local_110 = iVar4 + 1;
        }
        FOutputDevice::Logf(local_1ac,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_1046a4bc:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_44;
  return local_20;
}


// ==== 1046a4e4 Catch@1046a4e4

void Catch_1046a4e4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(unaff_EBP + -0xf4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0xe0,&DAT_10914c48);
}


// ==== 1046a501 Catch@1046a501

void Catch_1046a501(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::WeaponItemDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046a920 FUN_1046a920

undefined4 FUN_1046a920(ushort *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  FOutputDevice *this;
  int iVar8;
  EFindName EVar9;
  wchar_t *pwVar10;
  FOutputDevice local_35c [132];
  int local_2d8;
  undefined4 local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  int local_29c;
  undefined4 local_298;
  int local_294;
  undefined4 local_290;
  int local_28c;
  int local_288;
  int local_284;
  undefined4 local_280;
  int local_27c;
  int local_278;
  int local_274;
  undefined4 local_270;
  int local_26c;
  int local_268;
  int local_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  int local_244;
  undefined4 local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined4 local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined4 local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined4 local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined4 local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  FArchive *local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_60;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  FL2GameData *local_c;
  uchar *local_8;
  
  puStack_18 = &LAB_10813be4;
  local_1c = ExceptionList;
  local_20 = &stack0xfffffc98;
  local_14 = 0;
  local_a4 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_bc = (FArchive *)0x0;
  if (*(int *)GLanguageType_exref == 4) {
    pwVar10 = L"Armorgrp-fc.dat";
  }
  else {
    pwVar10 = L"Armorgrp.dat";
  }
  ExceptionList = &local_1c;
  appStrcpy((ushort *)local_35c,(ushort *)pwVar10);
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_35c,0,*(undefined4 *)GNull_exref);
  puVar7 = param_1;
  local_bc = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (ushort *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046ca78;
    }
  }
  else if (param_1 == (ushort *)0x0) {
    param_1 = (ushort *)0x0;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar1,&local_8,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_35c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(local_c,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_35c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_b8 = 0; local_b8 < (int)param_1; local_b8 = local_b8 + 1) {
        local_c0 = thunk_FUN_1032ffc0(0x5fc);
        local_14._0_1_ = 1;
        if (local_c0 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1045d030();
        }
        local_14 = (uint)local_14._1_3_ << 8;
        thunk_FUN_1044d1b0(pFVar2);
        local_b4 = iVar3;
        thunk_FUN_10462df0(iVar3 + 0xc,&local_b4);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1046ca78;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  if (*(int *)GLanguageType_exref == 4) {
    pwVar10 = L"Armorgrp-fc.txt";
  }
  else {
    pwVar10 = L"Armorgrp.txt";
  }
  appStrcpy((ushort *)local_35c,(ushort *)pwVar10);
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_35c,0,*(undefined4 *)GNull_exref);
  local_bc = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_a4 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_14._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar1,&local_8,&local_10,(int)puVar7);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_a4 = 0;
      local_14 = (uint)local_14._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = (ushort *)(local_8 + 2);
      for (iVar3 = 0; local_24c = iVar3, iVar3 < 0x55; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_item_begin_10ab06d8 + iVar3 * 0x101,
                           u_cobject_id_10ab08d8[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_60);
        FOutputDevice::Logf(local_35c,*(ushort **)GWarn_exref);
        local_a4 = 0;
      }
      else {
        local_b4 = thunk_FUN_1049f840();
        local_2c0 = 0;
        while (iVar3 = local_2c0, local_2c0 < local_b4) {
          param_1 = (ushort *)thunk_FUN_1032ffc0(0x5fc);
          local_14._0_1_ = 3;
          if (param_1 == (ushort *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = thunk_FUN_1045d030();
          }
          local_14._0_1_ = 2;
          *(undefined4 *)(iVar4 + 4) = 1;
          uVar5 = thunk_FUN_104a0b70(L"object_id",iVar3);
          local_b0 = uVar5;
          iVar6 = thunk_FUN_10422ee0(&local_b0);
          if (iVar6 != 0) {
            appMsgf(0,(ushort *)&DAT_10899090,uVar5);
          }
          param_1 = (ushort *)thunk_FUN_104a0cf0(L"body_part",0,iVar3);
          for (local_a0 = 0; local_a0 < 0x15; local_a0 = local_a0 + 1) {
            iVar8 = local_a0 * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_rhand_10a7a358 + local_a0 * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(&DAT_10a7a558 + iVar8);
              break;
            }
          }
          *(undefined4 *)(iVar4 + 0xc) = local_b0;
          uVar5 = thunk_FUN_104a0b70(L"drop_type",iVar3);
          *(undefined4 *)(iVar4 + 0x10) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_anim_type",iVar3);
          *(undefined4 *)(iVar4 + 0x14) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_radius",iVar3);
          *(undefined4 *)(iVar4 + 0x18) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"drop_height",iVar3);
          *(undefined4 *)(iVar4 + 0x1c) = uVar5;
          puVar7 = (ushort *)thunk_FUN_104a0cf0(L"icon",0,iVar3);
          L2FName::L2FName((L2FName *)&local_2b8,puVar7,2);
          *(undefined4 *)(iVar4 + 0x3c) = local_2b8;
          param_1 = (ushort *)thunk_FUN_104a0c90(L"icon",iVar3);
          iVar6 = 0;
          while ((local_25c = iVar6, iVar6 < (int)param_1 + -1 && (iVar6 < 4))) {
            local_cc = iVar6 + 1;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"icon",local_cc,iVar3);
            L2FName::L2FName((L2FName *)&local_2d4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x40 + iVar6 * 4) = local_2d4;
            iVar6 = local_cc;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"drop_mesh",iVar3);
          iVar6 = 0;
          while( true ) {
            local_1dc = iVar6;
            if ((int)param_1 <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"drop_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_d4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x24 + iVar6 * 4) = local_d4;
            iVar6 = iVar6 + 1;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"drop_texture",iVar3);
          iVar6 = 0;
          while( true ) {
            local_2d0 = iVar6;
            if ((int)param_1 <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"drop_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_dc,puVar7,2);
            *(undefined4 *)(iVar4 + 0x30 + iVar6 * 4) = local_dc;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mfighter_mesh",iVar3);
          *(int *)(iVar4 + 0xd8) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xd8) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1e4 = iVar6;
            if (*(int *)(iVar4 + 0xd8) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mfighter_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_e4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x114 + iVar6 * 0x3c) = local_e4;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mfighter_mesh_add",iVar3);
          *(int *)(iVar4 + 0x330) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x330) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_264 = iVar6;
            if (*(int *)(iVar4 + 0x330) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mfighter_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_ec,puVar7,2);
            *(undefined4 *)(iVar4 + 0x36c + iVar6 * 0x3c) = local_ec;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mfighter_texture",iVar3);
          *(int *)(iVar4 + 0x204) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x204) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1ec = iVar6;
            if (*(int *)(iVar4 + 0x204) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mfighter_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_f4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x240 + iVar6 * 0x3c) = local_f4;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mfighter_texture_add",iVar3);
          *(int *)(iVar4 + 0x45c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x45c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2a4 = iVar6;
            if (*(int *)(iVar4 + 0x45c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mfighter_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_fc,puVar7,2);
            *(undefined4 *)(iVar4 + 0x498 + iVar6 * 0x3c) = local_fc;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"ffighter_mesh",iVar3);
          *(int *)(iVar4 + 0xdc) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xdc) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1f4 = iVar6;
            if (*(int *)(iVar4 + 0xdc) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"ffighter_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_104,puVar7,2);
            *(undefined4 *)(iVar4 + 0x118 + iVar6 * 0x3c) = local_104;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"ffighter_mesh_add",iVar3);
          *(int *)(iVar4 + 0x334) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x334) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_26c = iVar6;
            if (*(int *)(iVar4 + 0x334) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"ffighter_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_10c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x370 + iVar6 * 0x3c) = local_10c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"ffighter_texture",iVar3);
          *(int *)(iVar4 + 0x208) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x208) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1fc = iVar6;
            if (*(int *)(iVar4 + 0x208) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"ffighter_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_114,puVar7,2);
            *(undefined4 *)(iVar4 + 0x244 + iVar6 * 0x3c) = local_114;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"ffighter_texture_add",iVar3);
          *(int *)(iVar4 + 0x460) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x460) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2c4 = iVar6;
            if (*(int *)(iVar4 + 0x460) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"ffighter_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_11c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x49c + iVar6 * 0x3c) = local_11c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mmagic_mesh",iVar3);
          *(int *)(iVar4 + 0xf8) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xf8) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_204 = iVar6;
            if (*(int *)(iVar4 + 0xf8) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mmagic_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_124,puVar7,2);
            *(undefined4 *)(iVar4 + 0x134 + iVar6 * 0x3c) = local_124;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mmagic_mesh_add",iVar3);
          *(int *)(iVar4 + 0x350) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x350) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_274 = iVar6;
            if (*(int *)(iVar4 + 0x350) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mmagic_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_12c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x38c + iVar6 * 0x3c) = local_12c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mmagic_texture",iVar3);
          *(int *)(iVar4 + 0x224) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x224) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_20c = iVar6;
            if (*(int *)(iVar4 + 0x224) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mmagic_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_134,puVar7,2);
            *(undefined4 *)(iVar4 + 0x260 + iVar6 * 0x3c) = local_134;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mmagic_texture_add",iVar3);
          *(int *)(iVar4 + 0x47c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x47c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2ac = iVar6;
            if (*(int *)(iVar4 + 0x47c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mmagic_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_13c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4b8 + iVar6 * 0x3c) = local_13c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fmagic_mesh",iVar3);
          *(int *)(iVar4 + 0xfc) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xfc) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_214 = iVar6;
            if (*(int *)(iVar4 + 0xfc) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fmagic_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_144,puVar7,2);
            *(undefined4 *)(iVar4 + 0x138 + iVar6 * 0x3c) = local_144;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fmagic_mesh_add",iVar3);
          *(int *)(iVar4 + 0x354) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x354) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_27c = iVar6;
            if (*(int *)(iVar4 + 0x354) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fmagic_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_14c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x390 + iVar6 * 0x3c) = local_14c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fmagic_texture",iVar3);
          *(int *)(iVar4 + 0x228) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x228) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_21c = iVar6;
            if (*(int *)(iVar4 + 0x228) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fmagic_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_154,puVar7,2);
            *(undefined4 *)(iVar4 + 0x264 + iVar6 * 0x3c) = local_154;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fmagic_texture_add",iVar3);
          *(int *)(iVar4 + 0x480) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x480) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2d8 = iVar6;
            if (*(int *)(iVar4 + 0x480) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fmagic_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_15c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4bc + iVar6 * 0x3c) = local_15c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"melf_mesh",iVar3);
          *(int *)(iVar4 + 0xf0) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xf0) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_224 = iVar6;
            if (*(int *)(iVar4 + 0xf0) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"melf_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_164,puVar7,2);
            *(undefined4 *)(iVar4 + (iVar6 + 5) * 0x3c) = local_164;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"melf_mesh_add",iVar3);
          *(int *)(iVar4 + 0x348) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x348) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_284 = iVar6;
            if (*(int *)(iVar4 + 0x348) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"melf_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_16c,puVar7,2);
            *(undefined4 *)(iVar4 + (iVar6 + 0xf) * 0x3c) = local_16c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"melf_texture",iVar3);
          *(int *)(iVar4 + 0x21c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x21c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_22c = iVar6;
            if (*(int *)(iVar4 + 0x21c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"melf_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_174,puVar7,2);
            *(undefined4 *)(iVar4 + (iVar6 + 10) * 0x3c) = local_174;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"melf_texture_add",iVar3);
          *(int *)(iVar4 + 0x474) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x474) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2b4 = iVar6;
            if (*(int *)(iVar4 + 0x474) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"melf_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_17c,puVar7,2);
            *(undefined4 *)(iVar4 + (iVar6 + 0x14) * 0x3c) = local_17c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"felf_mesh",iVar3);
          *(int *)(iVar4 + 0xf4) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xf4) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_234 = iVar6;
            if (*(int *)(iVar4 + 0xf4) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"felf_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_184,puVar7,2);
            *(undefined4 *)(iVar4 + 0x130 + iVar6 * 0x3c) = local_184;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"felf_mesh_add",iVar3);
          *(int *)(iVar4 + 0x34c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x34c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_28c = iVar6;
            if (*(int *)(iVar4 + 0x34c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"felf_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_18c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x388 + iVar6 * 0x3c) = local_18c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"felf_texture",iVar3);
          *(int *)(iVar4 + 0x220) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x220) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_23c = iVar6;
            if (*(int *)(iVar4 + 0x220) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"felf_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_194,puVar7,2);
            *(undefined4 *)(iVar4 + 0x25c + iVar6 * 0x3c) = local_194;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"felf_texture_add",iVar3);
          *(int *)(iVar4 + 0x478) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x478) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2cc = iVar6;
            if (*(int *)(iVar4 + 0x478) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"felf_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_19c,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4b4 + iVar6 * 0x3c) = local_19c;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdarkelf_mesh",iVar3);
          *(int *)(iVar4 + 0xe0) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xe0) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_244 = iVar6;
            if (*(int *)(iVar4 + 0xe0) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdarkelf_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1a4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x11c + iVar6 * 0x3c) = local_1a4;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdarkelf_mesh_add",iVar3);
          *(int *)(iVar4 + 0x338) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x338) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_294 = iVar6;
            if (*(int *)(iVar4 + 0x338) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdarkelf_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1ac,puVar7,2);
            *(undefined4 *)(iVar4 + 0x374 + iVar6 * 0x3c) = local_1ac;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdarkelf_texture",iVar3);
          *(int *)(iVar4 + 0x20c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x20c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_c4 = iVar6;
            if (*(int *)(iVar4 + 0x20c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdarkelf_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1b4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x248 + iVar6 * 0x3c) = local_1b4;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdarkelf_texture_add",iVar3);
          *(int *)(iVar4 + 0x464) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x464) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_2bc = iVar6;
            if (*(int *)(iVar4 + 0x464) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdarkelf_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1bc,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4a0 + iVar6 * 0x3c) = local_1bc;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdarkelf_mesh",iVar3);
          *(int *)(iVar4 + 0xe4) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xe4) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_254 = iVar6;
            if (*(int *)(iVar4 + 0xe4) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdarkelf_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1c4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x120 + iVar6 * 0x3c) = local_1c4;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdarkelf_mesh_add",iVar3);
          *(int *)(iVar4 + 0x33c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x33c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_29c = iVar6;
            if (*(int *)(iVar4 + 0x33c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdarkelf_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1cc,puVar7,2);
            *(undefined4 *)(iVar4 + 0x378 + iVar6 * 0x3c) = local_1cc;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdarkelf_texture",iVar3);
          *(int *)(iVar4 + 0x210) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x210) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_c8 = iVar6;
            if (*(int *)(iVar4 + 0x210) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdarkelf_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1d4,puVar7,2);
            *(undefined4 *)(iVar4 + 0x24c + iVar6 * 0x3c) = local_1d4;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdarkelf_texture_add",iVar3);
          *(int *)(iVar4 + 0x468) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x468) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_d8 = iVar6;
            if (*(int *)(iVar4 + 0x468) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdarkelf_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_d0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4a4 + iVar6 * 0x3c) = local_d0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"morc_mesh",iVar3);
          *(int *)(iVar4 + 0x100) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x100) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_e8 = iVar6;
            if (*(int *)(iVar4 + 0x100) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"morc_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_e0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x13c + iVar6 * 0x3c) = local_e0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"morc_mesh_add",iVar3);
          *(int *)(iVar4 + 0x358) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x358) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_f8 = iVar6;
            if (*(int *)(iVar4 + 0x358) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"morc_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_f0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x394 + iVar6 * 0x3c) = local_f0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"morc_texture",iVar3);
          *(int *)(iVar4 + 0x22c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x22c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_108 = iVar6;
            if (*(int *)(iVar4 + 0x22c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"morc_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_100,puVar7,2);
            *(undefined4 *)(iVar4 + 0x268 + iVar6 * 0x3c) = local_100;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"morc_texture_add",iVar3);
          *(int *)(iVar4 + 0x484) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x484) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_118 = iVar6;
            if (*(int *)(iVar4 + 0x484) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"morc_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_110,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4c0 + iVar6 * 0x3c) = local_110;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"forc_mesh",iVar3);
          *(int *)(iVar4 + 0x104) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x104) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_128 = iVar6;
            if (*(int *)(iVar4 + 0x104) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"forc_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_120,puVar7,2);
            *(undefined4 *)(iVar4 + 0x140 + iVar6 * 0x3c) = local_120;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"forc_mesh_add",iVar3);
          *(int *)(iVar4 + 0x35c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x35c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_138 = iVar6;
            if (*(int *)(iVar4 + 0x35c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"forc_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_130,puVar7,2);
            *(undefined4 *)(iVar4 + 0x398 + iVar6 * 0x3c) = local_130;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"forc_texture",iVar3);
          *(int *)(iVar4 + 0x230) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x230) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_148 = iVar6;
            if (*(int *)(iVar4 + 0x230) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"forc_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_140,puVar7,2);
            *(undefined4 *)(iVar4 + 0x26c + iVar6 * 0x3c) = local_140;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"forc_texture_add",iVar3);
          *(int *)(iVar4 + 0x488) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x488) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_158 = iVar6;
            if (*(int *)(iVar4 + 0x488) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"forc_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_150,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4c4 + iVar6 * 0x3c) = local_150;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdwarf_mesh",iVar3);
          *(int *)(iVar4 + 0xe8) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xe8) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_168 = iVar6;
            if (*(int *)(iVar4 + 0xe8) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdwarf_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_160,puVar7,2);
            *(undefined4 *)(iVar4 + 0x124 + iVar6 * 0x3c) = local_160;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdwarf_mesh_add",iVar3);
          *(int *)(iVar4 + 0x340) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x340) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_178 = iVar6;
            if (*(int *)(iVar4 + 0x340) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdwarf_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_170,puVar7,2);
            *(undefined4 *)(iVar4 + 0x37c + iVar6 * 0x3c) = local_170;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdwarf_texture",iVar3);
          *(int *)(iVar4 + 0x214) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x214) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_188 = iVar6;
            if (*(int *)(iVar4 + 0x214) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdwarf_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_180,puVar7,2);
            *(undefined4 *)(iVar4 + 0x250 + iVar6 * 0x3c) = local_180;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mdwarf_texture_add",iVar3);
          *(int *)(iVar4 + 0x46c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x46c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_198 = iVar6;
            if (*(int *)(iVar4 + 0x46c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mdwarf_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_190,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4a8 + iVar6 * 0x3c) = local_190;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdwarf_mesh",iVar3);
          *(int *)(iVar4 + 0xec) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0xec) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1a8 = iVar6;
            if (*(int *)(iVar4 + 0xec) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdwarf_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1a0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x128 + iVar6 * 0x3c) = local_1a0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdwarf_mesh_add",iVar3);
          *(int *)(iVar4 + 0x344) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x344) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1b8 = iVar6;
            if (*(int *)(iVar4 + 0x344) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdwarf_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1b0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x380 + iVar6 * 0x3c) = local_1b0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdwarf_texture",iVar3);
          *(int *)(iVar4 + 0x218) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x218) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1c8 = iVar6;
            if (*(int *)(iVar4 + 0x218) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdwarf_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1c0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x254 + iVar6 * 0x3c) = local_1c0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fdwarf_texture_add",iVar3);
          *(int *)(iVar4 + 0x470) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x470) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1d8 = iVar6;
            if (*(int *)(iVar4 + 0x470) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fdwarf_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1d0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4ac + iVar6 * 0x3c) = local_1d0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mshaman_mesh",iVar3);
          *(int *)(iVar4 + 0x108) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x108) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1e8 = iVar6;
            if (*(int *)(iVar4 + 0x108) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mshaman_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1e0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x144 + iVar6 * 0x3c) = local_1e0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mshaman_mesh_add",iVar3);
          *(int *)(iVar4 + 0x360) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x360) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_1f8 = iVar6;
            if (*(int *)(iVar4 + 0x360) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mshaman_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_1f0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x39c + iVar6 * 0x3c) = local_1f0;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mshaman_texture",iVar3);
          *(int *)(iVar4 + 0x234) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x234) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_208 = iVar6;
            if (*(int *)(iVar4 + 0x234) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mshaman_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_200,puVar7,2);
            *(undefined4 *)(iVar4 + 0x270 + iVar6 * 0x3c) = local_200;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"mshaman_texture_add",iVar3);
          *(int *)(iVar4 + 0x48c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x48c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_218 = iVar6;
            if (*(int *)(iVar4 + 0x48c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"mshaman_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_210,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4c8 + iVar6 * 0x3c) = local_210;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fshaman_mesh",iVar3);
          *(int *)(iVar4 + 0x10c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x10c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_228 = iVar6;
            if (*(int *)(iVar4 + 0x10c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fshaman_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_220,puVar7,2);
            *(undefined4 *)(iVar4 + 0x148 + iVar6 * 0x3c) = local_220;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fshaman_mesh_add",iVar3);
          *(int *)(iVar4 + 0x364) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x364) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_238 = iVar6;
            if (*(int *)(iVar4 + 0x364) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fshaman_mesh_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_230,puVar7,2);
            *(undefined4 *)(iVar4 + 0x3a0 + iVar6 * 0x3c) = local_230;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fshaman_texture",iVar3);
          *(int *)(iVar4 + 0x238) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x238) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_248 = iVar6;
            if (*(int *)(iVar4 + 0x238) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fshaman_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_240,puVar7,2);
            *(undefined4 *)(iVar4 + 0x274 + iVar6 * 0x3c) = local_240;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"fshaman_texture_add",iVar3);
          *(int *)(iVar4 + 0x490) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x490) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_258 = iVar6;
            if (*(int *)(iVar4 + 0x490) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"fshaman_texture_add",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_250,puVar7,2);
            *(undefined4 *)(iVar4 + 0x4cc + iVar6 * 0x3c) = local_250;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"npc_mesh",iVar3);
          *(int *)(iVar4 + 0x588) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x588) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_268 = iVar6;
            if (*(int *)(iVar4 + 0x588) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"npc_mesh",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_260,puVar7,2);
            *(undefined4 *)(iVar4 + 0x58c + iVar6 * 4) = local_260;
            iVar6 = iVar6 + 1;
          }
          iVar6 = thunk_FUN_104a0c90(L"npc_texture",iVar3);
          *(int *)(iVar4 + 0x59c) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x59c) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_278 = iVar6;
            if (*(int *)(iVar4 + 0x59c) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"npc_texture",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_270,puVar7,2);
            *(undefined4 *)(iVar4 + 0x5a0 + iVar6 * 4) = local_270;
            iVar6 = iVar6 + 1;
          }
          uVar5 = thunk_FUN_104a0b70(L"crystallizable",iVar3);
          *(undefined4 *)(iVar4 + 0xcc) = uVar5;
          iVar6 = thunk_FUN_104a0c90(L"item_sound",iVar3);
          *(int *)(iVar4 + 0x5b4) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x5b4) = 4;
          }
          iVar6 = 0;
          while( true ) {
            local_288 = iVar6;
            if (*(int *)(iVar4 + 0x5b4) <= iVar6) break;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"item_sound",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_280,puVar7,2);
            *(undefined4 *)(iVar4 + 0x5b8 + iVar6 * 4) = local_280;
            iVar6 = iVar6 + 1;
          }
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"drop_sound",iVar3);
          L2FName::L2FName((L2FName *)&local_290,puVar7,2);
          *(undefined4 *)(iVar4 + 0x5c8) = local_290;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"equip_sound",iVar3);
          L2FName::L2FName((L2FName *)&local_298,puVar7,2);
          *(undefined4 *)(iVar4 + 0x5cc) = local_298;
          iVar6 = thunk_FUN_104a0c90(L"idle_sound",iVar3);
          *(int *)(iVar4 + 0x5d0) = iVar6;
          if (4 < iVar6) {
            *(undefined4 *)(iVar4 + 0x5d0) = 4;
          }
          for (iVar6 = 0; local_2a8 = iVar6, iVar6 < *(int *)(iVar4 + 0x5d0); iVar6 = iVar6 + 1) {
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"idle_sound",iVar6,iVar3);
            L2FName::L2FName((L2FName *)&local_2a0,puVar7,2);
            *(undefined4 *)(iVar4 + 0x5d4 + iVar6 * 4) = local_2a0;
          }
          EVar9 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"attack_effect",iVar3);
          L2FName::L2FName((L2FName *)&local_2b0,puVar7,EVar9);
          *(undefined4 *)(iVar4 + 0x5b0) = local_2b0;
          uVar5 = thunk_FUN_104a0b70(L"weight",iVar3);
          *(undefined4 *)(iVar4 + 0xc4) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"durability",iVar3);
          *(undefined4 *)(iVar4 + 0xc0) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"avoid_modify",iVar3);
          *(undefined4 *)(iVar4 + 0x5ec) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"Physical_defense",iVar3);
          *(undefined4 *)(iVar4 + 0x5f0) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"Magical_defense",iVar3);
          *(undefined4 *)(iVar4 + 0x5f4) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"mp_bonus",iVar3);
          *(undefined4 *)(iVar4 + 0x5f8) = uVar5;
          param_1 = (ushort *)thunk_FUN_104a0c30(L"material_type",iVar3);
          for (local_a8 = 0; local_a8 < 0x36; local_a8 = local_a8 + 1) {
            iVar8 = local_a8 * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_oriharukon_10a7ddd0 + local_a8 * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 200) = *(undefined4 *)(&DAT_10a7dfd0 + iVar8);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"crystal_type",iVar3);
          for (local_ac = 0; local_ac < 7; local_ac = local_ac + 1) {
            iVar8 = local_ac * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_none_10a84aa8 + local_ac * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 0x5e8) = *(undefined4 *)(&DAT_10a84ca8 + iVar8);
              break;
            }
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"armor_type",iVar3);
          for (local_9c = 0; local_9c < 4; local_9c = local_9c + 1) {
            iVar8 = local_9c * 0x204;
            iVar6 = appStricmp(param_1,(ushort *)(u_none_10a7cdb0 + local_9c * 0x102));
            if (iVar6 == 0) {
              *(undefined4 *)(iVar4 + 0x5e4) = *(undefined4 *)(&DAT_10a7cfb0 + iVar8);
              break;
            }
          }
          local_c0 = iVar4;
          thunk_FUN_10462df0(&local_b0,&local_c0);
          pFVar1 = local_bc;
          local_2c0 = iVar3 + 1;
        }
        FOutputDevice::Logf(local_35c,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_14 = (uint)local_14._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_1046ca78:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_1c;
  return local_a4;
}


// ==== 1046caa2 Catch@1046caa2

void Catch_1046caa2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2b8) = *(undefined4 *)(unaff_EBP + -0x2cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2b8,&DAT_10914c48);
}


// ==== 1046cabf Catch@1046cabf

void Catch_1046cabf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ArmorItemDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046d350 FUN_1046d350

void FUN_1046d350(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  FArchive *pFVar5;
  FArchive *pFVar6;
  FArchive *pFVar7;
  FL2GameData *in_ECX;
  uint uVar8;
  code *pcVar9;
  ushort local_25c [64];
  ushort local_1dc [64];
  ushort local_15c [64];
  ushort local_dc [68];
  int *local_54;
  int *local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  undefined4 local_38;
  int local_30;
  FArchive *local_2c;
  FArchive *local_28;
  FL2GameData *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10813c10;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd98;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  appStrcpy(local_dc,(ushort *)L"Weapongrp.dat");
  pwVar4 = L"Armorgrp.dat";
  if (*(int *)GLanguageType_exref == 4) {
    pwVar4 = L"Armorgrp-fc.dat";
  }
  appStrcpy(local_1dc,(ushort *)pwVar4);
  appStrcpy(local_15c,(ushort *)L"Etcitemgrp.dat");
  FL2GameData::GetBinFileName(in_ECX,local_25c,(ushort *)L"ItemName");
  uVar8 = (-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4;
  local_1c = 0;
  local_18 = 0;
  local_20 = 0;
  local_30 = 0;
  local_54 = *(int **)(in_ECX + 0x1834);
  local_4c = 0;
  local_48 = 0;
  while (local_4c < local_54[1]) {
    iVar1 = *(int *)(*(int *)(*local_54 + 8 + local_4c * 0xc) + 4);
    if (iVar1 == 0) {
      local_1c = local_1c + 1;
      local_4c = local_4c + 1;
    }
    else if (iVar1 == 1) {
      local_18 = local_18 + 1;
      local_4c = local_4c + 1;
    }
    else {
      if (iVar1 == 2) {
        local_20 = local_20 + 1;
      }
      local_4c = local_4c + 1;
    }
  }
  local_8 = local_8 & 0xffffff00;
  local_50 = local_54;
  thunk_FUN_10463ac0();
  local_30 = local_20 + local_18 + local_1c;
  pFVar5 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_dc,uVar8,*(undefined4 *)GNull_exref);
  local_28 = pFVar5;
  pFVar6 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_1dc,uVar8,*(undefined4 *)GNull_exref);
  local_2c = (FArchive *)
             (**(code **)(**(int **)GFileManager_exref + 0xc))
                       (local_15c,uVar8,*(undefined4 *)GNull_exref);
  pFVar7 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_25c,uVar8,*(undefined4 *)GNull_exref);
  pcVar9 = Logf_exref;
  if (pFVar5 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar5 + 4))(&local_1c,4);
    pcVar9 = Logf_exref;
  }
  if (pFVar6 == (FArchive *)0x0) {
    (*pcVar9)(*(undefined4 *)GWarn_exref,L" - Can not Create [%s] !!!",local_1dc);
  }
  else {
    (**(code **)(*(int *)pFVar6 + 4))(&local_18,4);
  }
  if (local_2c == (FArchive *)0x0) {
    (*pcVar9)(*(undefined4 *)GWarn_exref,L" - Can not Create [%s] !!!",local_15c);
  }
  else {
    (**(code **)(*(int *)local_2c + 4))(&local_20,4);
  }
  if (pFVar7 == (FArchive *)0x0) {
    (*pcVar9)(*(undefined4 *)GWarn_exref,L" - Can not Create [%s] !!!",local_25c);
  }
  else {
    (**(code **)(*(int *)pFVar7 + 4))(&local_30,4);
  }
  local_44 = *(int **)(local_24 + 0x1834);
  local_3c = 0;
  local_38 = 0;
  local_8._0_1_ = 2;
  local_40 = local_44;
  while (iVar1 = local_3c, local_3c < local_40[1]) {
    piVar2 = *(int **)(*local_40 + 8 + local_3c * 0xc);
    if (pFVar7 != (FArchive *)0x0) {
      (**(code **)(*(int *)pFVar7 + 4))(piVar2 + 3,4);
      (**(code **)(*piVar2 + 0xc))(pFVar7,1);
    }
    iVar3 = piVar2[1];
    if ((iVar3 == 0) && (local_28 != (FArchive *)0x0)) {
      thunk_FUN_1044dc60(local_28);
      local_3c = iVar1 + 1;
    }
    else if ((iVar3 == 1) && (pFVar6 != (FArchive *)0x0)) {
      thunk_FUN_1044d1b0(pFVar6);
      local_3c = iVar1 + 1;
    }
    else {
      if ((iVar3 == 2) && (local_2c != (FArchive *)0x0)) {
        thunk_FUN_1044e650(local_2c);
      }
      local_3c = iVar1 + 1;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10463ac0();
  pFVar5 = local_28;
  if (local_28 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(local_24,local_28);
    (**(code **)(*(int *)pFVar5 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (pFVar6 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(local_24,pFVar6);
    (**(code **)(*(int *)pFVar6 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  pFVar5 = local_2c;
  if (local_2c != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(local_24,local_2c);
    (**(code **)(*(int *)pFVar5 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (pFVar7 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(local_24,pFVar7);
    (**(code **)(*(int *)pFVar7 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (local_28 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)local_28)(1);
  }
  if (pFVar6 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar6)(1);
  }
  if (pFVar5 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar5)(1);
  }
  if (pFVar7 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar7)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1046d7ab Catch@1046d7ab

void Catch_1046d7ab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1046d7bf Catch@1046d7bf

void Catch_1046d7bf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ItemDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046d900 FUN_1046d900

undefined4 FUN_1046d900(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  FL2NpcData *this;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  FL2GameData *in_ECX;
  FOutputDevice *this_00;
  int iVar7;
  FOutputDevice local_13c [184];
  undefined4 local_84;
  undefined1 *local_44;
  void *local_40;
  undefined1 *puStack_3c;
  int local_38;
  undefined4 local_2c;
  int local_28;
  int local_20;
  FArchive *local_1c;
  int local_18;
  FL2GameData *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_3c = &LAB_10813c2b;
  local_40 = ExceptionList;
  local_44 = &stack0xfffffeb8;
  iVar7 = 0;
  local_38 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_1c = (FArchive *)0x0;
  ExceptionList = &local_40;
  local_14 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_13c,(ushort *)L"NpcName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046daa6;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_13c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar7 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar7 == 0) {
        FOutputDevice::Logf(local_13c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_18 = 0; local_18 < (int)param_1; local_18 = local_18 + 1) {
        local_14 = (FL2GameData *)0x0;
        (**(code **)(*(int *)pFVar2 + 4))(&local_14,4);
        this = (FL2NpcData *)thunk_FUN_10422f80(&local_14);
        if (this != (FL2NpcData *)0x0) {
          FL2NpcData::Serialize(this,pFVar2,1);
        }
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1046daa6;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_13c,(ushort *)L"NpcName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_38._0_1_ = 1;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (; local_20 = iVar7, iVar7 < 6; iVar7 = iVar7 + 1) {
        thunk_FUN_104a1120(u_npc_begin_10accac0 + iVar7 * 0x101,(&DAT_10acccc0)[iVar7 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar7 = thunk_FUN_104a1840();
      if (iVar7 == 0) {
        thunk_FUN_10445eb0(local_84);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        local_28 = 0;
        while (iVar7 = local_28, local_28 < (int)param_1) {
          local_2c = thunk_FUN_104a0b70(&DAT_1089600c,local_28);
          iVar3 = thunk_FUN_10422f80(&local_2c);
          if (iVar3 != 0) {
            iVar4 = thunk_FUN_104a0c30(L"nickcolor",iVar7);
            if (iVar4 == 0) {
              *(undefined4 *)(iVar3 + 0x1c) = 0;
            }
            else {
              uVar5 = thunk_FUN_10445ee0(iVar4);
              *(undefined4 *)(iVar3 + 0x1c) = uVar5;
            }
            puVar6 = (ushort *)thunk_FUN_104a0c30(L"nick",iVar7);
            FString::operator=((FString *)(iVar3 + 0x10),puVar6);
            puVar6 = (ushort *)thunk_FUN_104a0c30(L"name",iVar7);
            FString::operator=((FString *)(iVar3 + 4),puVar6);
          }
          local_28 = iVar7 + 1;
        }
        FOutputDevice::Logf(local_13c,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_1046daa6:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_40;
  return local_10;
}


// ==== 1046dd81 Catch@1046dd81

void Catch_1046dd81(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 1046dd95 Catch@1046dd95

void Catch_1046dd95(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::NpcNameDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046dee0 FUN_1046dee0

void FUN_1046dee0(int param_1)

{
  FL2NpcData *this;
  FArchive *pFVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  uint uVar3;
  FOutputDevice local_138 [128];
  FOutputDevice local_b8 [140];
  FL2GameData *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813c48;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_2c = in_ECX;
  appStrcpy((ushort *)local_b8,(ushort *)L"Npcgrp.dat");
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_138,(ushort *)L"NpcName");
  uVar3 = (-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4;
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x1838) + 4);
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,uVar3,*(undefined4 *)GNull_exref);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_138,uVar3,*(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_18,4);
  }
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
  }
  local_28 = *(int **)(in_ECX + 0x1838);
  local_1c = 0;
  local_8._0_1_ = 1;
  local_24 = local_28;
  for (local_20 = 0; local_20 < local_24[1]; local_20 = local_20 + 1) {
    this = *(FL2NpcData **)(*local_24 + 8 + local_20 * 0xc);
    if (pFVar1 != (FArchive *)0x0) {
      FL2NpcData::Serialize(this,pFVar1,0);
    }
    if (pFVar2 != (FArchive *)0x0) {
      (**(code **)(*(int *)pFVar2 + 4))(this,4);
      FL2NpcData::Serialize(this,pFVar2,1);
    }
    in_ECX = local_2c;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10463b80();
  if (pFVar1 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(in_ECX,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  if (pFVar2 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(in_ECX,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf(local_138,*(ushort **)GWarn_exref);
  }
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1046e106 Catch@1046e106

void Catch_1046e106(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1046e11a Catch@1046e11a

void Catch_1046e11a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::NpcDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046e1d0 FUN_1046e1d0

undefined4 FUN_1046e1d0(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  EFindName EVar10;
  FOutputDevice local_160 [184];
  undefined4 local_a8;
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  int local_5c;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uchar *local_1c;
  undefined4 local_18;
  FArchive *local_14;
  int local_10;
  FL2GameData *local_c;
  uchar *local_8;
  
  puStack_60 = &LAB_10813c89;
  local_64 = ExceptionList;
  local_68 = &stack0xfffffe94;
  local_5c = 0;
  local_18 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_64;
  appStrcpy((ushort *)local_160,(ushort *)L"Skillgrp.dat");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_160,0,*(undefined4 *)GNull_exref);
  puVar4 = param_1;
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_160,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046e86f;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_1c = param_1;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar1,&local_8,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_160,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(local_c,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_160,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&local_1c,4);
      for (local_24 = 0; local_24 < (int)local_1c; local_24 = local_24 + 1) {
        param_1 = (uchar *)thunk_FUN_1032ffc0(0x78);
        local_5c._0_1_ = 1;
        if (param_1 == (uchar *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1044b1f0();
        }
        local_5c = (uint)local_5c._1_3_ << 8;
        local_28 = iVar3;
        thunk_FUN_1044e890(pFVar2,0);
        thunk_FUN_10459a70(iVar3 + 0x18,&local_28);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1046e86f;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  appStrcpy((ushort *)local_160,(ushort *)L"Skillgrp.txt");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_160,0,*(undefined4 *)GNull_exref);
  iVar3 = 0;
  local_14 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_160,*(ushort **)GWarn_exref);
    local_18 = 0;
    pFVar1 = local_14;
  }
  else {
    thunk_FUN_104a14b0();
    local_5c._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(local_c,pFVar1,&local_8,&local_10,(int)puVar4);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_160,*(ushort **)GWarn_exref);
      local_18 = 0;
      local_5c = (uint)local_5c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_14;
    }
    else {
      param_1 = local_8 + 2;
      for (; local_2c = iVar3, iVar3 < 0x13; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_skill_begin_10abcfa8 + iVar3 * 0x101,
                           u_cskill_id_10abd1a8[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_a8);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_18 = 0;
      }
      else {
        local_28 = thunk_FUN_1049f840();
        local_34 = 0;
        while (iVar3 = local_34, local_34 < local_28) {
          local_50 = thunk_FUN_1032ffc0(0x78);
          local_5c._0_1_ = 3;
          if (local_50 == 0) {
            puVar4 = (uchar *)0x0;
          }
          else {
            puVar4 = (uchar *)thunk_FUN_1044b1f0();
          }
          local_5c._0_1_ = 2;
          param_1 = puVar4;
          uVar5 = thunk_FUN_104a0b70(L"skill_id",iVar3);
          *(undefined4 *)(puVar4 + 0x18) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"skill_level",iVar3);
          *(undefined4 *)(puVar4 + 0x1c) = uVar5;
          EVar10 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"icon",iVar3);
          L2FName::L2FName((L2FName *)&local_1c,puVar6,EVar10);
          *(uchar **)(puVar4 + 0x48) = local_1c;
          uVar5 = thunk_FUN_104a0b70(L"operate_type",iVar3);
          *(undefined4 *)(puVar4 + 0x20) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"is_magic",iVar3);
          *(undefined4 *)(puVar4 + 0x3c) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"mp_consume",iVar3);
          *(undefined4 *)(puVar4 + 0x24) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"hp_consume",iVar3);
          *(undefined4 *)(puVar4 + 0x28) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"cast_range",iVar3);
          *(undefined4 *)(puVar4 + 0x2c) = uVar5;
          fVar9 = (float10)thunk_FUN_104a0bd0(L"hit_time",iVar3);
          *(float *)(puVar4 + 0x34) = (float)fVar9;
          EVar10 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"animation",iVar3);
          L2FName::L2FName((L2FName *)&local_40,puVar6,EVar10);
          *(undefined4 *)(puVar4 + 0x40) = local_40;
          uVar5 = thunk_FUN_104a0b70(L"cast_style",iVar3);
          *(undefined4 *)(puVar4 + 0x30) = uVar5;
          EVar10 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"skill_visual_effect",iVar3);
          L2FName::L2FName((L2FName *)&local_3c,puVar6,EVar10);
          *(undefined4 *)(puVar4 + 0x44) = local_3c;
          uVar5 = thunk_FUN_104a0b70(L"debuff",iVar3);
          *(undefined4 *)(puVar4 + 0x4c) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"enchanted",iVar3);
          *(undefined4 *)(puVar4 + 0x68) = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"enchant_skill_level",iVar3);
          *(undefined4 *)(puVar4 + 0x6c) = uVar5;
          iVar7 = thunk_FUN_104a0b70(L"rumble_self",iVar3);
          iVar8 = thunk_FUN_104a0b70(L"rumble_target",iVar3);
          if (iVar7 == 1) {
            puVar4[0x70] = '\t';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar7 == 2) {
            puVar4[0x70] = '\b';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar7 == 3) {
            puVar4[0x70] = '\r';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar7 == 4) {
            puVar4[0x70] = '\x0e';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else {
            puVar4[0x70] = 0xff;
            puVar4[0x71] = 0xff;
            puVar4[0x72] = 0xff;
            puVar4[0x73] = 0xff;
          }
          if (iVar8 == 1) {
            puVar4[0x74] = '\v';
            puVar4[0x75] = '\0';
            puVar4[0x76] = '\0';
            puVar4[0x77] = '\0';
          }
          else if (iVar8 == 2) {
            puVar4[0x74] = '\n';
            puVar4[0x75] = '\0';
            puVar4[0x76] = '\0';
            puVar4[0x77] = '\0';
          }
          else if (iVar8 == 3) {
            puVar4[0x70] = '\r';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else if (iVar8 == 4) {
            puVar4[0x70] = '\x0e';
            puVar4[0x71] = '\0';
            puVar4[0x72] = '\0';
            puVar4[0x73] = '\0';
          }
          else {
            puVar4[0x74] = 0xff;
            puVar4[0x75] = 0xff;
            puVar4[0x76] = 0xff;
            puVar4[0x77] = 0xff;
          }
          thunk_FUN_104496a0();
          local_5c = CONCAT31(local_5c._1_3_,4);
          thunk_FUN_10458920(puVar4 + 0x18,&local_4c);
          local_20 = 0;
          for (iVar7 = 0; local_38 = iVar7, iVar7 < local_48; iVar7 = iVar7 + 1) {
            if (*(int *)(*(int *)(local_4c + iVar7 * 4) + 0x1c) == *(int *)(puVar4 + 0x1c)) {
              FOutputDevice::Logf(*(FOutputDevice **)(param_1 + 0x18),*(ushort **)GWarn_exref);
              local_20 = local_20 + 1;
            }
          }
          if (local_20 == 0) {
            thunk_FUN_10459a70(param_1 + 0x18,&param_1);
          }
          local_5c._0_1_ = 2;
          thunk_FUN_10463e80();
          pFVar1 = local_14;
          local_34 = iVar3 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_5c = (uint)local_5c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_14;
    }
  }
LAB_1046e86f:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_64;
  return local_18;
}


// ==== 1046e897 Catch@1046e897

void Catch_1046e897(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x28,&DAT_10914c48);
}


// ==== 1046e8ab Catch@1046e8ab

void Catch_1046e8ab(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::MSItemDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046ea90 FUN_1046ea90

undefined4 FUN_1046ea90(uchar *param_1)

{
  FString *pFVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  ushort *puVar5;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  int iVar6;
  FOutputDevice local_15c [128];
  FString local_dc [12];
  FString local_d0 [44];
  undefined4 local_a4;
  FString local_8c [12];
  FString local_80 [28];
  undefined1 *local_64;
  void *local_60;
  undefined1 *puStack_5c;
  int local_58;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_38;
  int local_34 [2];
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  FArchive *local_c;
  uchar *local_8;
  
  puStack_5c = &LAB_10813cc6;
  local_60 = ExceptionList;
  local_64 = &stack0xfffffe98;
  local_58 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_10 = 0;
  local_c = (FArchive *)0x0;
  ExceptionList = &local_60;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_15c,(ushort *)L"SkillName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_15c,0,*(undefined4 *)GNull_exref);
  local_c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046ed13;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_34[0] = 0;
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_10,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_10);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_15c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(in_ECX,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_15c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(local_34,4);
      for (local_20 = 0; local_20 < local_34[0]; local_20 = local_20 + 1) {
        param_1 = (uchar *)0x0;
        (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
        local_18 = 0;
        (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
        thunk_FUN_1044b1f0();
        local_58._0_1_ = 1;
        thunk_FUN_1044e890(pFVar3,1);
        thunk_FUN_104496a0();
        local_58 = CONCAT31(local_58._1_3_,2);
        thunk_FUN_10458920(&param_1,&local_2c);
        local_1c = 0;
        this_00 = extraout_ECX;
        for (iVar4 = 0; local_38 = iVar4, iVar4 < local_28; iVar4 = iVar4 + 1) {
          pFVar1 = *(FString **)(local_2c + iVar4 * 4);
          if (*(int *)(pFVar1 + 0x1c) == local_18) {
            FString::operator=(pFVar1,local_dc);
            FString::operator=(pFVar1 + 0xc,local_d0);
            FString::operator=(pFVar1 + 0x50,local_8c);
            FString::operator=(pFVar1 + 0x5c,local_80);
            local_1c = local_1c + 1;
            this_00 = extraout_ECX_00;
          }
        }
        if ((local_1c == 0) && (*(int *)GLog_exref != 0)) {
          FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
        }
        local_58._0_1_ = 1;
        thunk_FUN_10463e80();
        local_58 = (uint)local_58._1_3_ << 8;
        thunk_FUN_104479a0();
        pFVar2 = local_c;
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_1046ed13;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_15c,(ushort *)L"SkillName");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_15c,0,*(undefined4 *)GNull_exref);
  local_c = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
    pFVar2 = local_c;
  }
  else {
    thunk_FUN_104a14b0();
    local_58._0_1_ = 3;
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_10,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_58 = (uint)local_58._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_c;
    }
    else {
      param_1 = local_8 + 2;
      for (iVar4 = 0; local_48 = iVar4, iVar4 < 8; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_skill_begin_10abf5d0 + iVar4 * 0x101,
                           u_cskill_id_10abf7d0[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_a4);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        local_40 = 0;
        while (iVar4 = local_40, local_40 < (int)param_1) {
          local_44 = thunk_FUN_104a0b70(L"skill_id",local_40);
          local_18 = thunk_FUN_104a0b70(L"skill_level",iVar4);
          thunk_FUN_104496a0();
          local_58 = CONCAT31(local_58._1_3_,4);
          thunk_FUN_10458920(&local_44,&local_2c);
          for (iVar6 = 0; local_4c = iVar6, iVar6 < local_28; iVar6 = iVar6 + 1) {
            pFVar1 = *(FString **)(local_2c + iVar6 * 4);
            if (*(int *)(pFVar1 + 0x1c) == local_18) {
              puVar5 = (ushort *)thunk_FUN_104a0c30(L"name",iVar4);
              FString::operator=(pFVar1,puVar5);
              puVar5 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar4);
              FString::operator=(pFVar1 + 0xc,puVar5);
              puVar5 = (ushort *)thunk_FUN_104a0c30(L"enchant_name",iVar4);
              FString::operator=(pFVar1 + 0x50,puVar5);
              puVar5 = (ushort *)thunk_FUN_104a0c30(L"enchant_desc",iVar4);
              FString::operator=(pFVar1 + 0x5c,puVar5);
            }
          }
          local_58._0_1_ = 3;
          thunk_FUN_10463e80();
          pFVar2 = local_c;
          local_40 = iVar4 + 1;
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_58 = (uint)local_58._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_c;
    }
  }
LAB_1046ed13:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_60;
  return local_14;
}


// ==== 1046f050 Catch@1046f050

void Catch_1046f050(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_10914c48);
}


// ==== 1046f064 Catch@1046f064

void Catch_1046f064(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::MSItemNameDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046f200 FUN_1046f200

void FUN_1046f200(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  uint uVar4;
  ushort local_138 [64];
  ushort local_b8 [70];
  FL2GameData *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813ce8;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_2c = in_ECX;
  appStrcpy(local_b8,(ushort *)L"Skillgrp.dat");
  FL2GameData::GetBinFileName(in_ECX,local_138,(ushort *)L"SkillName");
  uVar4 = (-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4;
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x3d08) + 4);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,uVar4,*(undefined4 *)GNull_exref);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_138,uVar4,*(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
  }
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
  }
  local_28 = *(int **)(in_ECX + 0x3d08);
  local_1c = 0;
  local_8._0_1_ = 1;
  local_24 = local_28;
  for (local_20 = 0; local_20 < local_24[1]; local_20 = local_20 + 1) {
    iVar1 = *(int *)(*local_24 + 8 + local_20 * 0xc);
    if (pFVar2 != (FArchive *)0x0) {
      thunk_FUN_1044e890(pFVar2,0);
    }
    if (pFVar3 != (FArchive *)0x0) {
      (**(code **)(*(int *)pFVar3 + 4))(iVar1 + 0x18,4);
      (**(code **)(*(int *)pFVar3 + 4))(iVar1 + 0x1c,4);
      thunk_FUN_1044e890(pFVar3,1);
    }
    in_ECX = local_2c;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10463bc0();
  if (pFVar2 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(in_ECX,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (pFVar3 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(in_ECX,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1046f438 Catch@1046f438

void Catch_1046f438(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10914c48);
}


// ==== 1046f44c Catch@1046f44c

void Catch_1046f44c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::MSItemNameDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046f510 FUN_1046f510

void FUN_1046f510(undefined4 *param_1)

{
  int *piVar1;
  FString *this;
  ushort *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  FString local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813d11;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  iVar4 = 0;
  piVar1 = *(int **)(in_ECX + 0x3d08);
  if ((piVar1 != (int *)0x0) && (param_1 == (undefined4 *)0x0)) {
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    ExceptionList = &local_10;
    for (; iVar4 < piVar1[1]; iVar4 = iVar4 + 1) {
      this = *(FString **)(*piVar1 + 8 + iVar4 * 0xc);
      puVar2 = FString::operator*(this);
      FString::FString(local_2c,puVar2);
      local_8._0_1_ = 2;
      iVar3 = thunk_FUN_104589a0(local_2c);
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      if (iVar3 == 0) {
        param_1 = (undefined4 *)thunk_FUN_1032ffc0(4);
        *param_1 = *(undefined4 *)(this + 0x18);
        puVar5 = &param_1;
        puVar2 = FString::operator*(this);
        thunk_FUN_10462f60(puVar2,puVar5);
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463bc0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1046f610 Catch@1046f610

void Catch_1046f610(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1046f624 Catch@1046f624

void Catch_1046f624(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::MSCommandDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046f690 FUN_1046f690

undefined4 FUN_1046f690(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  uchar *puVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  EFindName EVar11;
  FOutputDevice local_160 [184];
  undefined4 local_a8;
  undefined1 *local_68;
  void *local_64;
  undefined1 *puStack_60;
  int local_5c;
  undefined4 local_4c [2];
  int local_44;
  int local_40 [2];
  int local_38;
  int local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  FArchive *local_10;
  uchar *local_c;
  ushort *local_8;
  
  puStack_60 = &LAB_10813d51;
  local_64 = ExceptionList;
  local_68 = &stack0xfffffe94;
  iVar8 = 0;
  local_5c = 0;
  local_18 = 1;
  local_c = (uchar *)0x0;
  local_14 = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &local_64;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_160,(ushort *)L"ActionName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_160,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1046f843;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_8 = (ushort *)0x0;
    local_14 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_14,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_14);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_160,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar8 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar8 == 0) {
        FOutputDevice::Logf(local_160,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&local_8,4);
      for (local_1c = 0; local_1c < (int)local_8; local_1c = local_1c + 1) {
        param_1 = (uchar *)thunk_FUN_1032ffc0(0x44);
        local_5c._0_1_ = 1;
        if (param_1 == (uchar *)0x0) {
          local_24 = 0;
        }
        else {
          local_24 = thunk_FUN_10465200();
        }
        local_5c = (uint)local_5c._1_3_ << 8;
        thunk_FUN_104658b0(pFVar2);
        thunk_FUN_10458830(&local_24);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_1046f843;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_160,(ushort *)L"ActionName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_160,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_18 = 0;
    pFVar1 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_5c._0_1_ = 2;
    local_14 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_14,(int)param_1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_18 = 0;
      local_5c = (uint)local_5c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_10;
    }
    else {
      param_1 = local_c + 2;
      for (; local_44 = iVar8, iVar8 < 10; iVar8 = iVar8 + 1) {
        thunk_FUN_104a1120(u_eaction_begin_10ac05de + iVar8 * 0x101 + 1,
                           (&DAT_10ac07e0)[iVar8 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar8 = thunk_FUN_104a1840();
      if (iVar8 == 0) {
        thunk_FUN_10445eb0(local_a8);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_18 = 0;
      }
      else {
        local_24 = thunk_FUN_1049f840();
        for (iVar8 = 0; local_28 = iVar8, iVar8 < local_24; iVar8 = iVar8 + 1) {
          local_5c._0_1_ = 3;
          local_2c = (ushort *)thunk_FUN_1032ffc0(0x44);
          local_5c._0_1_ = 4;
          if (local_2c == (ushort *)0x0) {
            puVar3 = (uchar *)0x0;
          }
          else {
            puVar3 = (uchar *)thunk_FUN_10465200();
          }
          local_5c = CONCAT31(local_5c._1_3_,3);
          puVar3[0] = '\x01';
          puVar3[1] = '\0';
          puVar3[2] = '\0';
          puVar3[3] = '\0';
          param_1 = puVar3;
          uVar4 = thunk_FUN_104a0b70(&DAT_1089600c,iVar8);
          *(undefined4 *)(puVar3 + 4) = uVar4;
          uVar4 = thunk_FUN_104a0b70(L"type",iVar8);
          *(undefined4 *)(puVar3 + 8) = uVar4;
          local_8 = (ushort *)thunk_FUN_104a0c30(L"category",iVar8);
          for (iVar7 = 0; local_30 = iVar7, iVar7 < 6; iVar7 = iVar7 + 1) {
            iVar5 = appStricmp(local_8,(ushort *)(u_none_10a86cf0 + iVar7 * 0x102));
            if (iVar5 == 0) {
              *(undefined4 *)(param_1 + 0xc) = (&DAT_10a86ef0)[iVar7 * 0x81];
              break;
            }
          }
          puVar3 = param_1;
          local_8 = (ushort *)thunk_FUN_104a0c90(L"category2",iVar8);
          for (local_20 = 0; local_20 < (int)local_8; local_20 = local_20 + 1) {
            local_2c = (ushort *)thunk_FUN_104a0cf0(L"category2",local_20,iVar8);
            local_38 = 0;
            while (iVar7 = local_38, local_38 < 2) {
              iVar9 = local_38 * 0x204;
              iVar5 = appStricmp(local_2c,(ushort *)(u_common_10a87908 + local_38 * 0x102));
              if (iVar5 == 0) {
                piVar10 = (int *)(&DAT_10a87b08 + iVar9);
                goto LAB_1046fadf;
              }
              local_38 = iVar7 + 1;
            }
            local_40[0] = appAtoi(local_2c);
            piVar10 = local_40;
LAB_1046fadf:
            thunk_FUN_104225e0(piVar10);
            puVar3 = param_1;
          }
          EVar11 = 2;
          puVar6 = (ushort *)thunk_FUN_104a0c30(&DAT_1089a67c,iVar8);
          L2FName::L2FName((L2FName *)local_4c,puVar6,EVar11);
          *(undefined4 *)(puVar3 + 0x40) = local_4c[0];
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"icon",iVar8);
          FString::operator=((FString *)(puVar3 + 0x28),puVar6);
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"name",iVar8);
          FString::operator=((FString *)(puVar3 + 0x1c),puVar6);
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar8);
          FString::operator=((FString *)(puVar3 + 0x34),puVar6);
          thunk_FUN_10458830(&param_1);
          local_5c._0_1_ = 2;
          local_5c._1_3_ = 0;
        }
        FOutputDevice::Logf(local_160,*(ushort **)GWarn_exref);
        pFVar1 = local_10;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_5c = (uint)local_5c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_10;
    }
  }
LAB_1046f843:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_64;
  return local_18;
}


// ==== 1046fb87 Catch@1046fb87

void Catch_1046fb87(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 1046fb9b Catch@1046fb9b

void Catch_1046fb9b(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x30) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046fcb4 Catch@1046fcb4

void Catch_1046fcb4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x1c,&DAT_10914c48);
}


// ==== 1046fcc8 Catch@1046fcc8

void Catch_1046fcc8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ActionDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1046fe80 FUN_1046fe80

void FUN_1046fe80(int param_1)

{
  FArchive *pFVar1;
  FL2GameData *in_ECX;
  int iVar2;
  FOutputDevice local_ac [128];
  FL2GameData *local_2c;
  undefined4 local_20;
  FL2GameData *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10813d70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff48;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_ac,(ushort *)L"ActionName");
  local_20 = *(undefined4 *)(in_ECX + 0x3d30);
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_ac,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar1 + 4))(&local_20,4);
    local_2c = in_ECX + 0x3d2c;
    iVar2 = 0;
    while( true ) {
      if (*(int *)(in_ECX + 0x3d30) <= iVar2) break;
      thunk_FUN_104658b0(pFVar1);
      iVar2 = iVar2 + 1;
    }
    FL2GameData::MakeSafePackage(local_1c,pFVar1);
    (**(code **)(*(int *)pFVar1 + 0x58))();
    FOutputDevice::Logf(local_ac,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1046ffa8 Catch@1046ffa8

void Catch_1046ffa8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1046ffbc Catch@1046ffbc

void Catch_1046ffbc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ActionDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10470030 FUN_10470030

void FUN_10470030(int param_1)

{
  int *piVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  ushort local_b8 [68];
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813d88;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,local_b8,(ushort *)L"HuntingZone");
  local_1c[0] = *(undefined4 *)(*(int *)(in_ECX + 0x849e0) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(local_1c,4);
    local_30 = *(int **)(in_ECX + 0x849e0);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_2c = local_30;
    while (iVar2 = local_28, local_28 < local_2c[1]) {
      piVar1 = *(int **)(*local_2c + 8 + local_28 * 0xc);
      if (piVar1 == (int *)0x0) {
        appFailAssert("pHuntingZoneData",".\\L2GameData.cpp",0x1d79);
      }
      if (0 < *piVar1) {
        thunk_FUN_1044eb30(pFVar3);
      }
      in_ECX = local_20;
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463b40();
    FL2GameData::MakeSafePackage(in_ECX,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104701a4 Catch@104701a4

void Catch_104701a4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104701b8 Catch@104701b8

void Catch_104701b8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HuntingZoneDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10470240 FUN_10470240

undefined4 FUN_10470240(ushort *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_15c [184];
  undefined4 local_a4;
  undefined1 *local_64;
  void *local_60;
  undefined1 *puStack_5c;
  int local_58;
  float local_48;
  float local_44;
  ushort *local_40;
  ushort *local_3c;
  int local_38;
  int local_2c;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  undefined4 local_14;
  FArchive *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_5c = &LAB_10813dc1;
  local_60 = ExceptionList;
  local_64 = &stack0xfffffe98;
  local_58 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &local_60;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_15c,(ushort *)L"HuntingZone");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_15c,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (ushort *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10470415;
    }
  }
  else if (param_1 == (ushort *)0x0) {
    param_1 = (ushort *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_15c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_15c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
        local_24 = (undefined4 *)thunk_FUN_1032ffc0(0x38);
        local_58._0_1_ = 1;
        if (local_24 == (undefined4 *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1044b570();
        }
        local_58 = (uint)local_58._1_3_ << 8;
        local_20 = iVar3;
        if (iVar3 == 0) {
          appFailAssert("pHuntingZoneData",".\\L2GameData.cpp",0x1da4);
        }
        thunk_FUN_1044eb30(pFVar2);
        thunk_FUN_10463740(iVar3,&local_20);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10470415;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_15c,(ushort *)L"HuntingZone");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_15c,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
    pFVar1 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_58._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_58 = (uint)local_58._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_10;
    }
    else {
      param_1 = (ushort *)(local_8 + 2);
      for (iVar3 = 0; local_38 = iVar3, iVar3 < 9; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_eHunt_begin_10ac3616 + iVar3 * 0x101 + 1,(&DAT_10ac3818)[iVar3 * 0x101]
                          );
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_a4);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        local_20 = thunk_FUN_1049f840();
        local_2c = 0;
        while (iVar3 = local_2c, local_2c < local_20) {
          local_58._0_1_ = 3;
          param_1 = (ushort *)thunk_FUN_1032ffc0(0x38);
          local_58._0_1_ = 4;
          if (param_1 == (ushort *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)thunk_FUN_1044b570();
          }
          local_58 = CONCAT31(local_58._1_3_,3);
          local_24 = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            appFailAssert("pHuntingZoneData",".\\L2GameData.cpp",0x1dd2);
          }
          uVar5 = thunk_FUN_104a0b70(&DAT_1089600c,iVar3);
          *puVar4 = uVar5;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"name",iVar3);
          FString::operator=((FString *)(puVar4 + 10),puVar6);
          uVar5 = thunk_FUN_104a0b70(L"search_zoneid",iVar3);
          puVar4[0xd] = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"type",iVar3);
          puVar4[1] = uVar5;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar3);
          FString::operator=((FString *)(puVar4 + 7),puVar6);
          puVar6 = (ushort *)thunk_FUN_104a0cf0(&DAT_1089617c,0,iVar3);
          param_1 = (ushort *)thunk_FUN_104a0cf0(&DAT_1089617c,1,iVar3);
          local_18 = (ushort *)thunk_FUN_104a0cf0(&DAT_1089617c,2,iVar3);
          if (((puVar6 != (ushort *)0x0) && (param_1 != (ushort *)0x0)) &&
             (local_18 != (ushort *)0x0)) {
            local_48 = appAtof(puVar6);
            param_1 = (ushort *)appAtof(param_1);
            local_3c = (ushort *)appAtof(local_18);
            local_44 = local_48;
            local_40 = param_1;
            puVar4[4] = local_48;
            puVar4[5] = param_1;
            puVar4[6] = local_3c;
            local_18 = local_3c;
          }
          iVar7 = thunk_FUN_104a0c90(L"rc_level",iVar3);
          puVar6 = (ushort *)thunk_FUN_104a0cf0(L"rc_level",0,iVar3);
          if (puVar6 != (ushort *)0x0) {
            iVar8 = appAtoi(puVar6);
            puVar4[2] = iVar8;
          }
          if (1 < iVar7) {
            puVar6 = (ushort *)thunk_FUN_104a0cf0(L"rc_level",1,iVar3);
            iVar7 = appAtoi(puVar6);
            puVar4[3] = iVar7;
          }
          thunk_FUN_10463740(puVar4,&local_24);
          local_58._0_1_ = 2;
          local_58._1_3_ = 0;
          pFVar1 = local_10;
          local_2c = iVar3 + 1;
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_58 = (uint)local_58._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_10;
    }
  }
LAB_10470415:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_60;
  return local_14;
}


// ==== 10470754 Catch@10470754

void Catch_10470754(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_10914c48);
}


// ==== 10470768 Catch@10470768

void Catch_10470768(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x28) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1047087d Catch@1047087d

void Catch_1047087d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x24,&DAT_10914c48);
}


// ==== 10470891 Catch@10470891

void Catch_10470891(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HuntingZoneDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10470a50 FUN_10470a50

undefined4 FUN_10470a50(int param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  int iVar8;
  FOutputDevice local_148 [184];
  undefined4 local_90;
  undefined1 *local_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  int local_44;
  int local_30;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  FL2GameData *local_14;
  FArchive *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_48 = &LAB_10813e01;
  pvStack_4c = ExceptionList;
  local_50 = &stack0xfffffeac;
  local_44 = 0;
  local_18 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &pvStack_4c;
  local_14 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_148,(ushort *)L"optiondata_client");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  iVar8 = param_1;
  local_10 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10470f54;
    }
  }
  else if (param_1 == 0) {
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_14,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_148,*(ushort **)GError_exref);
      }
      param_1 = iVar8;
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_1c = iVar8; local_1c < param_1; local_1c = local_1c + 1) {
        local_24 = (undefined4 *)thunk_FUN_1032ffc0(0x30);
        local_44._0_1_ = 1;
        if (local_24 == (undefined4 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = thunk_FUN_1044be20();
        }
        local_44 = (uint)local_44._1_3_ << 8;
        local_28 = uVar5;
        thunk_FUN_10447190(pFVar3);
        thunk_FUN_104637f0(uVar5,&local_28);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10470f54;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_148,(ushort *)L"optiondata_client");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_18 = 0;
    pFVar2 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_44._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_8,&local_c,iVar8);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_18 = 0;
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_10;
    }
    else {
      puVar1 = local_8 + 2;
      for (iVar8 = 0; local_30 = iVar8, iVar8 < 8; iVar8 = iVar8 + 1) {
        thunk_FUN_104a1120(u_option_client_begin_10af69a0 + iVar8 * 0x101,
                           u_coption_id_10af6ba0[iVar8 * 0x101]);
      }
      thunk_FUN_1049f750(puVar1);
      iVar8 = thunk_FUN_104a1840();
      if (iVar8 == 0) {
        thunk_FUN_10445eb0(local_90);
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
        local_18 = 0;
      }
      else {
        iVar8 = thunk_FUN_1049f840();
        for (iVar4 = 0; local_20 = iVar4, iVar4 < iVar8; iVar4 = iVar4 + 1) {
          param_1 = thunk_FUN_1032ffc0(0x30);
          local_44._0_1_ = 3;
          if (param_1 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)thunk_FUN_1044be20();
          }
          local_44._0_1_ = 2;
          local_24 = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            appFailAssert("pVariationOptionData",".\\L2GameData.cpp",0x1eda);
          }
          local_44 = CONCAT31(local_44._1_3_,4);
          uVar5 = thunk_FUN_104a0b70(L"option_id",iVar4);
          *puVar6 = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"option_quality",iVar4);
          puVar6[1] = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"option_type",iVar4);
          puVar6[2] = uVar5;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"option_desc1",iVar4);
          FString::operator=((FString *)(puVar6 + 3),puVar7);
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"option_desc2",iVar4);
          FString::operator=((FString *)(puVar6 + 6),puVar7);
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"option_desc3",iVar4);
          FString::operator=((FString *)(puVar6 + 9),puVar7);
          local_44._0_1_ = 2;
          local_44._1_3_ = 0;
          thunk_FUN_104637f0(puVar6,&local_24);
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)local_10 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_10;
    }
  }
LAB_10470f54:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = pvStack_4c;
  return local_18;
}


// ==== 10470e3a Catch@10470e3a

void Catch_10470e3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10470e4e Catch@10470e4e

void Catch_10470e4e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x108,
             *(int *)(unaff_EBP + 0x20) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10470f7b Catch@10470f7b

void Catch_10470f7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10470f8f Catch@10470f8f

void Catch_10470f8f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::VariationOptionDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10471110 FUN_10471110

void FUN_10471110(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_238 [520];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813e28;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdbc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_238,(ushort *)L"optiondata_client");
  local_1c[0] = *(undefined4 *)(*(int *)(in_ECX + 0x7f9d8) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_238,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(local_1c,4);
  }
  iVar1 = *(int *)(in_ECX + 0x7f9d8);
  local_24 = 0;
  local_8._0_1_ = 1;
  local_28 = 0;
  local_30 = iVar1;
  local_2c = iVar1;
  while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
    if (pFVar3 != (FArchive *)0x0) {
      thunk_FUN_10447190(pFVar3);
    }
    local_28 = iVar2 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10463e40();
  if (pFVar3 != (FArchive *)0x0) {
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_238,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10471264 Catch@10471264

void Catch_10471264(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10471278 Catch@10471278

void Catch_10471278(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::VariationOptionDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10471300 FUN_10471300

undefined4 FUN_10471300(ushort *param_1)

{
  FArray *this;
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  FL2GameData *in_ECX;
  FOutputDevice *this_00;
  undefined4 *puVar9;
  int iVar10;
  FOutputDevice local_184 [192];
  undefined4 local_c4;
  undefined1 *local_84;
  void *pvStack_80;
  undefined1 *puStack_7c;
  int local_78;
  float local_74;
  ushort *local_70;
  ushort *local_6c;
  float local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  FL2GameData *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  FArchive *local_18;
  undefined4 local_14;
  int local_10;
  uchar *local_c;
  ushort *local_8;
  
  puStack_7c = &LAB_10813e61;
  pvStack_80 = ExceptionList;
  local_84 = &stack0xfffffe70;
  local_78 = 0;
  local_14 = 1;
  local_c = (uchar *)0x0;
  local_10 = 0;
  local_18 = (FArchive *)0x0;
  ExceptionList = &pvStack_80;
  local_2c = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_184,(ushort *)L"QuestName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_184,0,*(undefined4 *)GNull_exref);
  local_18 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (ushort *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10471c6a;
    }
  }
  else if (param_1 == (ushort *)0x0) {
    param_1 = (ushort *)0x0;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_184,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_184,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_20 = 0; local_20 < (int)param_1; local_20 = local_20 + 1) {
        local_28 = thunk_FUN_1032ffc0(200);
        local_78._0_1_ = 1;
        if (local_28 == 0) {
          puVar4 = (ushort *)0x0;
        }
        else {
          puVar4 = (ushort *)thunk_FUN_104652e0();
        }
        local_78 = (uint)local_78._1_3_ << 8;
        local_8 = puVar4;
        thunk_FUN_104659c0(pFVar2);
        thunk_FUN_10459e00(puVar4 + 2,&local_8);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10471c6a;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_184,(ushort *)L"QuestName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_184,0,*(undefined4 *)GNull_exref);
  local_18 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_78._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_10,(int)param_1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_78 = (uint)local_78._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = (ushort *)(local_c + 2);
      for (iVar3 = 0; local_40 = iVar3, iVar3 < 0x1a; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_quest_begin_10ac5640 + iVar3 * 0x101,(&DAT_10ac5840)[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_c4);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        local_4c = thunk_FUN_1049f840();
        local_24 = 0;
        while (iVar3 = local_24, local_24 < local_4c) {
          local_78._0_1_ = 3;
          param_1 = (ushort *)thunk_FUN_1032ffc0(200);
          local_78._0_1_ = 4;
          if (param_1 == (ushort *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_104652e0();
          }
          local_78 = CONCAT31(local_78._1_3_,3);
          if (puVar5 == (undefined4 *)0x0) {
            appFailAssert("pQuestData",".\\L2GameData.cpp",0x21a1);
          }
          *puVar5 = 1;
          uVar6 = thunk_FUN_104a0b70(&DAT_1089600c,iVar3);
          puVar5[1] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"level",iVar3);
          puVar5[2] = uVar6;
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"title",iVar3);
          FString::operator=((FString *)(puVar5 + 3),puVar4);
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"sub_name",iVar3);
          FString::operator=((FString *)(puVar5 + 6),puVar4);
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"desc",iVar3);
          FString::operator=((FString *)(puVar5 + 10),puVar4);
          param_1 = (ushort *)thunk_FUN_104a0c90(L"item_id",iVar3);
          for (iVar10 = 0; local_38 = iVar10, iVar10 < (int)param_1; iVar10 = iVar10 + 1) {
            puVar4 = (ushort *)thunk_FUN_104a0cf0(L"item_id",iVar10,iVar3);
            if (puVar4 != (ushort *)0x0) {
              local_54 = appAtoi(puVar4);
              thunk_FUN_104225e0(&local_54);
            }
          }
          iVar10 = 0;
          while( true ) {
            local_30 = iVar10;
            if ((int)param_1 <= iVar10) break;
            puVar4 = (ushort *)thunk_FUN_104a0cf0(L"item_num",iVar10,iVar3);
            if (puVar4 != (ushort *)0x0) {
              local_5c = appAtoi(puVar4);
              thunk_FUN_104225e0(&local_5c);
            }
            iVar10 = iVar10 + 1;
          }
          uVar6 = thunk_FUN_104a0b70(L"item_num_disp",iVar3);
          puVar5[0x13] = uVar6;
          puVar4 = (ushort *)thunk_FUN_104a0cf0(L"target_loc",0,iVar3);
          param_1 = (ushort *)thunk_FUN_104a0cf0(L"target_loc",1,iVar3);
          local_8 = (ushort *)thunk_FUN_104a0cf0(L"target_loc",2,iVar3);
          if (((puVar4 != (ushort *)0x0) && (param_1 != (ushort *)0x0)) &&
             (local_8 != (ushort *)0x0)) {
            local_1c = appAtof(puVar4);
            param_1 = (ushort *)appAtof(param_1);
            local_6c = (ushort *)appAtof(local_8);
            local_74 = local_1c;
            local_70 = param_1;
            puVar5[0x14] = local_1c;
            puVar5[0x15] = param_1;
            puVar5[0x16] = local_6c;
            local_8 = local_6c;
          }
          iVar10 = thunk_FUN_104a0c90(L"q_level",iVar3);
          puVar4 = (ushort *)thunk_FUN_104a0cf0(L"q_level",0,iVar3);
          if (puVar4 != (ushort *)0x0) {
            iVar7 = appAtoi(puVar4);
            puVar5[0x17] = iVar7;
          }
          if (1 < iVar10) {
            puVar4 = (ushort *)thunk_FUN_104a0cf0(L"q_level",1,iVar3);
            iVar10 = appAtoi(puVar4);
            puVar5[0x18] = iVar10;
          }
          param_1 = (ushort *)thunk_FUN_104a0c30(L"type",iVar3);
          if (param_1 != (ushort *)0x0) {
            for (iVar10 = 0; local_48 = iVar10, iVar10 < 4; iVar10 = iVar10 + 1) {
              iVar7 = appStrcmp(param_1,(ushort *)(&PTR_DAT_10a7a348)[iVar10]);
              if (iVar7 == 0) {
                puVar5[0x19] = iVar10;
              }
            }
          }
          uVar6 = thunk_FUN_104a0b70(L"minimap_only",iVar3);
          puVar5[0x1d] = uVar6;
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"target_name",iVar3);
          FString::operator=((FString *)(puVar5 + 0x1a),puVar4);
          uVar6 = thunk_FUN_104a0b70(L"journal_disp",iVar3);
          puVar5[9] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"start_npc_id",iVar3);
          puVar5[0x1e] = uVar6;
          puVar4 = (ushort *)thunk_FUN_104a0cf0(L"start_npc_loc",0,iVar3);
          param_1 = (ushort *)thunk_FUN_104a0cf0(L"start_npc_loc",1,iVar3);
          local_8 = (ushort *)thunk_FUN_104a0cf0(L"start_npc_loc",2,iVar3);
          if (((puVar4 != (ushort *)0x0) && (param_1 != (ushort *)0x0)) &&
             (local_8 != (ushort *)0x0)) {
            local_1c = appAtof(puVar4);
            param_1 = (ushort *)appAtof(param_1);
            local_60 = (ushort *)appAtof(local_8);
            local_68 = local_1c;
            local_64 = param_1;
            puVar5[0x1f] = local_1c;
            puVar5[0x20] = param_1;
            puVar5[0x21] = local_60;
            local_8 = local_60;
          }
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"q_requirement",iVar3);
          FString::operator=((FString *)(puVar5 + 0x22),puVar4);
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"quest_intro",iVar3);
          FString::operator=((FString *)(puVar5 + 0x25),puVar4);
          uVar6 = thunk_FUN_104a0b70(L"mark_type",iVar3);
          puVar5[0x2e] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"cleared_quest",iVar3);
          puVar5[0x2f] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"or_and",iVar3);
          puVar5[0x30] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"search_zoneid",iVar3);
          puVar5[0x31] = uVar6;
          param_1 = (ushort *)thunk_FUN_104a0c90(L"class_limit",iVar3);
          iVar10 = 0;
          while( true ) {
            local_58 = iVar10;
            if ((int)param_1 <= iVar10) break;
            puVar4 = (ushort *)thunk_FUN_104a0cf0(L"class_limit",iVar10,iVar3);
            if (puVar4 != (ushort *)0x0) {
              local_50 = appAtoi(puVar4);
              thunk_FUN_104225e0(&local_50);
            }
            iVar10 = iVar10 + 1;
          }
          param_1 = (ushort *)thunk_FUN_104a0c90(L"have_item",iVar3);
          for (iVar10 = 0; local_34 = iVar10, iVar10 < (int)param_1; iVar10 = iVar10 + 1) {
            puVar4 = (ushort *)thunk_FUN_104a0cf0(L"have_item",iVar10,iVar3);
            if (puVar4 != (ushort *)0x0) {
              local_28 = appAtoi(puVar4);
              thunk_FUN_104225e0(&local_28);
            }
          }
          this = *(FArray **)(local_2c + 0x3d44);
          iVar10 = FArray::Add(this,1,0xc);
          puVar9 = (undefined4 *)(*(int *)this + iVar10 * 0xc);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9[1] = puVar5[1];
            puVar9[2] = puVar5;
          }
          uVar8 = *(int *)(this + 0x10) - 1U & puVar9[1];
          *puVar9 = *(undefined4 *)(*(int *)(this + 0xc) + uVar8 * 4);
          *(int *)(*(int *)(this + 0xc) + uVar8 * 4) = *(int *)(this + 4) + -1;
          if (*(int *)(this + 0x10) * 2 + 8 < *(int *)(this + 4)) {
            *(int *)(this + 0x10) = *(int *)(this + 0x10) * 2;
            thunk_FUN_10459cf0();
          }
          local_78._0_1_ = 2;
          local_78._1_3_ = 0;
          pFVar1 = local_18;
          local_24 = iVar3 + 1;
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_78 = (uint)local_78._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10471c6a:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = pvStack_80;
  return local_14;
}


// ==== 10471b5b Catch@10471b5b

void Catch_10471b5b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x38) = *(undefined4 *)(unaff_EBP + -0x8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x38,&DAT_10914c48);
}


// ==== 10471b72 Catch@10471b72

void Catch_10471b72(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = thunk_FUN_10445eb0();
  appUnwindf((ushort *)L" - Error File=%s Line=%d Keyword=%s",unaff_EBP + -0x110,
             *(int *)(unaff_EBP + 0x50) + 1,uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10471c92 Catch@10471c92

void Catch_10471c92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + -0x90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_10914c48);
}


// ==== 10471ca9 Catch@10471ca9

void Catch_10471ca9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::QuestDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10471f40 FUN_10471f40

void FUN_10471f40(int param_1)

{
  int *piVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  ushort local_b8 [68];
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813e88;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,local_b8,(ushort *)L"QuestName");
  local_1c[0] = *(undefined4 *)(*(int *)(in_ECX + 0x3d44) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(local_1c,4);
    local_30 = *(int **)(in_ECX + 0x3d44);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_2c = local_30;
    while (iVar2 = local_28, local_28 < local_2c[1]) {
      piVar1 = *(int **)(*local_2c + 8 + local_28 * 0xc);
      if (piVar1 == (int *)0x0) {
        appFailAssert("pQuestData",".\\L2GameData.cpp",0x2230);
      }
      if (*piVar1 == 0) {
        appFailAssert("pQuestData->IsUsed",".\\L2GameData.cpp",0x2231);
      }
      thunk_FUN_104659c0(pFVar3);
      in_ECX = local_20;
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463b00();
    FL2GameData::MakeSafePackage(in_ECX,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104720cc Catch@104720cc

void Catch_104720cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104720e0 Catch@104720e0

void Catch_104720e0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::QuestDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10472170 FUN_10472170

undefined4 FUN_10472170(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_140 [184];
  undefined4 local_88;
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  int local_3c;
  int local_2c;
  int local_28;
  undefined4 *local_24 [2];
  FArchive *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_40 = &LAB_10813ec1;
  local_44 = ExceptionList;
  local_48 = &stack0xfffffeb4;
  local_3c = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_1c = (FArchive *)0x0;
  ExceptionList = &local_44;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_140,(ushort *)L"Creditgrp");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10472329;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_140,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_140,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_14 = 0; local_14 < (int)param_1; local_14 = local_14 + 1) {
        local_24[0] = (undefined4 *)thunk_FUN_1032ffc0(0x24);
        local_3c._0_1_ = 1;
        if (local_24[0] == (undefined4 *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1044b7e0();
        }
        local_3c = (uint)local_3c._1_3_ << 8;
        local_18 = iVar3;
        thunk_FUN_10446c20(pFVar2);
        thunk_FUN_10463070(iVar3,&local_18);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10472329;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_140,(ushort *)L"Creditgrp");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_140,0,*(undefined4 *)GNull_exref);
  local_1c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_3c._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar3 = 0; local_2c = iVar3, iVar3 < 7; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_ecredit_begin_10ae7096 + iVar3 * 0x101 + 1,
                           (&DAT_10ae7298)[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_88);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar3 = 0; local_28 = iVar3, iVar3 < (int)param_1; iVar3 = iVar3 + 1) {
          local_18 = thunk_FUN_1032ffc0(0x24);
          local_3c._0_1_ = 3;
          if (local_18 == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)thunk_FUN_1044b7e0();
          }
          local_3c._0_1_ = 2;
          local_24[0] = puVar4;
          uVar5 = thunk_FUN_104a0b70(&DAT_1089ad14,iVar3);
          *puVar4 = uVar5;
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"html",iVar3);
          FString::operator=((FString *)(puVar4 + 1),puVar6);
          puVar6 = (ushort *)thunk_FUN_104a0c30(L"image",iVar3);
          FString::operator=((FString *)(puVar4 + 4),puVar6);
          uVar5 = thunk_FUN_104a0b70(L"time",iVar3);
          puVar4[7] = uVar5;
          uVar5 = thunk_FUN_104a0b70(L"align",iVar3);
          puVar4[8] = uVar5;
          thunk_FUN_10463070(puVar4,local_24);
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_3c = (uint)local_3c._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10472329:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_44;
  return local_10;
}


// ==== 10472623 Catch@10472623

void Catch_10472623(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 10472637 Catch@10472637

void Catch_10472637(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CreditDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10472790 FUN_10472790

void FUN_10472790(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813ee8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_b8,(ushort *)L"Creditgrp");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x3d10) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x3d10);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_10446c20(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463c80();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104728dc Catch@104728dc

void Catch_104728dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104728f0 Catch@104728f0

void Catch_104728f0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CreditDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10472970 FUN_10472970

void FUN_10472970(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813f08;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  appStrcpy((ushort *)local_b8,(ushort *)L"Recipe-c.dat");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x6a8cc) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x6a8cc);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_1045f090(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463cc0();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10472abf Catch@10472abf

void Catch_10472abf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10472ad3 Catch@10472ad3

void Catch_10472ad3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CreditDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10472b50 FUN_10472b50

undefined4 FUN_10472b50(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  FOutputDevice local_13c [184];
  undefined4 local_84;
  undefined1 *local_44;
  void *local_40;
  undefined1 *puStack_3c;
  int local_38;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  uchar *local_c;
  FArchive *local_8;
  
  puStack_3c = &LAB_10813f41;
  local_40 = ExceptionList;
  local_44 = &stack0xfffffeb8;
  local_38 = 0;
  local_14 = 1;
  local_c = (uchar *)0x0;
  local_10 = 0;
  local_8 = (FArchive *)0x0;
  ExceptionList = &local_40;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_13c,(ushort *)L"Hennagrp");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  local_8 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10472ff5;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_13c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_13c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_18 = 0; local_18 < (int)param_1; local_18 = local_18 + 1) {
        local_20 = (undefined4 *)thunk_FUN_1032ffc0(0x38);
        local_38._0_1_ = 1;
        if (local_20 == (undefined4 *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_1044b910();
        }
        local_38 = (uint)local_38._1_3_ << 8;
        local_1c = iVar3;
        thunk_FUN_10446db0(pFVar2);
        thunk_FUN_104631d0(iVar3,&local_1c);
        pFVar1 = local_8;
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10472ff5;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_13c,(ushort *)L"Hennagrp");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_13c,0,*(undefined4 *)GNull_exref);
  iVar3 = 0;
  local_8 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
    pFVar1 = local_8;
  }
  else {
    thunk_FUN_104a14b0();
    local_38._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_10,(int)param_1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_8;
    }
    else {
      param_1 = local_c + 2;
      for (; local_24 = iVar3, iVar3 < 10; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_esymbol_begin_10ad858e + iVar3 * 0x101 + 1,
                           u_chan_name_10ad8790[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_84);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar3 = 0; local_28 = iVar3, iVar3 < (int)param_1; iVar3 = iVar3 + 1) {
          local_1c = thunk_FUN_1032ffc0(0x38);
          local_38._0_1_ = 3;
          if (local_1c == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)thunk_FUN_1044b910();
          }
          local_38._0_1_ = 2;
          local_20 = puVar4;
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"han_name",iVar3);
          FString::operator=((FString *)(puVar4 + 2),puVar5);
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"symbol_add_name",iVar3);
          FString::operator=((FString *)(puVar4 + 0xb),puVar5);
          uVar6 = thunk_FUN_104a0b70(L"symbol_id",iVar3);
          *puVar4 = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"dye_item_id",iVar3);
          puVar4[1] = uVar6;
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"symbol_icon",iVar3);
          FString::operator=((FString *)(puVar4 + 5),puVar5);
          puVar5 = (ushort *)thunk_FUN_104a0c30(L"symbol_description",iVar3);
          FString::operator=((FString *)(puVar4 + 8),puVar5);
          thunk_FUN_104631d0(puVar4,&local_20);
        }
        FOutputDevice::Logf(local_13c,*(ushort **)GWarn_exref);
        pFVar1 = local_8;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_38 = (uint)local_38._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_8;
    }
  }
LAB_10472ff5:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_40;
  return local_14;
}


// ==== 1047301c Catch@1047301c

void Catch_1047301c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_10914c48);
}


// ==== 10473030 Catch@10473030

void Catch_10473030(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HennaDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10473190 FUN_10473190

void FUN_10473190(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813f68;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_b8,(ushort *)L"Hennagrp");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x6a8d0) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x6a8d0);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_10446db0(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463d00();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104732dc Catch@104732dc

void Catch_104732dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104732f0 Catch@104732f0

void Catch_104732f0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HennaDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10473370 FUN_10473370

undefined4 FUN_10473370(uchar *param_1)

{
  FArray *this;
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 *puVar9;
  FOutputDevice *this_00;
  uint uVar10;
  EFindName EVar11;
  FOutputDevice local_23c [128];
  ushort local_1bc [94];
  undefined4 local_100;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [2];
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
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
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  FL2GameData *local_1c;
  undefined4 local_18;
  FArchive *local_14;
  int local_10;
  uchar *local_c;
  int local_8;
  
  puStack_80 = &LAB_10813fa1;
  local_84 = ExceptionList;
  local_88 = &stack0xfffffdb8;
  local_7c = 0;
  local_18 = 1;
  local_c = (uchar *)0x0;
  local_10 = 0;
  local_14 = (FArchive *)0x0;
  ExceptionList = &local_84;
  appStrcpy((ushort *)local_23c,(ushort *)L"SkillSoundgrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_23c,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_14 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10473e69;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_1c,pFVar2,&local_c,&local_10,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_10);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_23c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_1c,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_23c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_24 = 0; local_24 < (int)param_1; local_24 = local_24 + 1) {
        local_28 = thunk_FUN_1032ffc0(0xf4);
        local_7c._0_1_ = 1;
        if (local_28 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = thunk_FUN_1044b9b0();
        }
        local_7c = (uint)local_7c._1_3_ << 8;
        local_20 = iVar4;
        thunk_FUN_1044ec30(pFVar3);
        thunk_FUN_1045a500(iVar4,&local_20);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10473e69;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_23c,(ushort *)L"SkillSoundgrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_23c,0,*(undefined4 *)GNull_exref);
  local_14 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_18 = 0;
    pFVar2 = local_14;
  }
  else {
    thunk_FUN_104a14b0();
    local_7c._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_1c,pFVar2,&local_c,&local_10,(int)puVar1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_18 = 0;
      local_7c = (uint)local_7c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_14;
    }
    else {
      param_1 = local_c + 2;
      for (iVar4 = 0; local_a0 = iVar4, iVar4 < 0x3d; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_skillsound_begin_10ad99a8 + iVar4 * 0x101,
                           u_cskill_id_10ad9ba8[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_100);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_18 = 0;
      }
      else {
        local_20 = thunk_FUN_1049f840();
        local_a8 = 0;
        while (iVar4 = local_a8, local_a8 < local_20) {
          param_1 = (uchar *)thunk_FUN_1032ffc0(0xf4);
          local_7c._0_1_ = 3;
          if (param_1 == (uchar *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_1044b9b0();
          }
          local_7c._0_1_ = 2;
          uVar6 = thunk_FUN_104a0b70(L"skill_id",iVar4);
          *puVar5 = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"skill_level",iVar4);
          puVar5[1] = uVar6;
          iVar8 = 0;
          while (local_3c = iVar8, iVar8 < 3) {
            param_1 = (uchar *)(iVar8 + 1);
            appSprintf(local_1bc,(ushort *)L"spelleffect_sound_%d",param_1);
            EVar11 = 2;
            puVar7 = (ushort *)thunk_FUN_104a0c30(local_1bc,iVar4);
            L2FName::L2FName((L2FName *)&local_a4,puVar7,EVar11);
            puVar5[iVar8 + 2] = local_a4;
            appSprintf(local_1bc,(ushort *)L"spelleffect_sound_vol_%d",param_1);
            local_8 = thunk_FUN_104a0b70(local_1bc,iVar4);
            puVar5[iVar8 + 0xb] = (float)local_8;
            appSprintf(local_1bc,(ushort *)L"spelleffect_sound_rad_%d",param_1);
            local_8 = thunk_FUN_104a0b70(local_1bc,iVar4);
            puVar5[iVar8 + 0xe] = (float)local_8;
            appSprintf(local_1bc,(ushort *)L"shoteffect_sound_%d",param_1);
            EVar11 = 2;
            puVar7 = (ushort *)thunk_FUN_104a0c30(local_1bc,iVar4);
            L2FName::L2FName((L2FName *)&local_34,puVar7,EVar11);
            puVar5[iVar8 + 5] = local_34;
            appSprintf(local_1bc,(ushort *)L"shoteffect_sound_vol_%d",param_1);
            local_8 = thunk_FUN_104a0b70(local_1bc,iVar4);
            puVar5[iVar8 + 0x11] = (float)local_8;
            appSprintf(local_1bc,(ushort *)L"shoteffect_sound_rad_%d",param_1);
            local_8 = thunk_FUN_104a0b70(local_1bc,iVar4);
            puVar5[iVar8 + 0x14] = (float)local_8;
            appSprintf(local_1bc,(ushort *)L"expeffect_sound_%d",param_1);
            EVar11 = 2;
            puVar7 = (ushort *)thunk_FUN_104a0c30(local_1bc,iVar4);
            L2FName::L2FName((L2FName *)&local_8c,puVar7,EVar11);
            puVar5[iVar8 + 8] = local_8c;
            appSprintf(local_1bc,(ushort *)L"expeffect_sound_vol_%d",param_1);
            local_8 = thunk_FUN_104a0b70(local_1bc,iVar4);
            puVar5[iVar8 + 0x17] = (float)local_8;
            appSprintf(local_1bc,(ushort *)L"expeffect_sound_rad_%d",param_1);
            local_8 = thunk_FUN_104a0b70(local_1bc,iVar4);
            puVar5[iVar8 + 0x1a] = (float)local_8;
            iVar8 = (int)param_1;
          }
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mfighter_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_b8,puVar7,EVar11);
          puVar5[0x1d] = local_b8;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mfighter_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_44,puVar7,EVar11);
          puVar5[0x2c] = local_44;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"ffighter_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_94,puVar7,EVar11);
          puVar5[0x1e] = local_94;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"ffighter_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_4c,puVar7,EVar11);
          puVar5[0x2d] = local_4c;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mmagic_cast",iVar4);
          L2FName::L2FName((L2FName *)local_b4,puVar7,EVar11);
          puVar5[0x25] = local_b4[0];
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mmagic_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_54,puVar7,EVar11);
          puVar5[0x34] = local_54;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fmagic_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_9c,puVar7,EVar11);
          puVar5[0x26] = local_9c;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fmagic_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_5c,puVar7,EVar11);
          puVar5[0x35] = local_5c;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"melf_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_bc,puVar7,EVar11);
          puVar5[0x23] = local_bc;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"melf_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_64,puVar7,EVar11);
          puVar5[0x32] = local_64;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"felf_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_2c,puVar7,EVar11);
          puVar5[0x24] = local_2c;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"felf_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_6c,puVar7,EVar11);
          puVar5[0x33] = local_6c;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mdarkelf_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_c0,puVar7,EVar11);
          puVar5[0x1f] = local_c0;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mdarkelf_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_74,puVar7,EVar11);
          puVar5[0x2e] = local_74;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fdarkelf_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_ac,puVar7,EVar11);
          puVar5[0x20] = local_ac;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fdarkelf_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_30,puVar7,EVar11);
          puVar5[0x2f] = local_30;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mdwarf_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_38,puVar7,EVar11);
          puVar5[0x21] = local_38;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mdwarf_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_40,puVar7,EVar11);
          puVar5[0x30] = local_40;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fdwarf_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_48,puVar7,EVar11);
          puVar5[0x22] = local_48;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fdwarf_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_50,puVar7,EVar11);
          puVar5[0x31] = local_50;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"morc_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_58,puVar7,EVar11);
          puVar5[0x27] = local_58;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"morc_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_60,puVar7,EVar11);
          puVar5[0x36] = local_60;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"forc_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_68,puVar7,EVar11);
          puVar5[0x28] = local_68;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"forc_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_70,puVar7,EVar11);
          puVar5[0x37] = local_70;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mshaman_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_78,puVar7,EVar11);
          puVar5[0x29] = local_78;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"mshaman_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_90,puVar7,EVar11);
          puVar5[0x38] = local_90;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fshaman_cast",iVar4);
          L2FName::L2FName((L2FName *)&local_98,puVar7,EVar11);
          puVar5[0x2a] = local_98;
          EVar11 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"fshaman_magic",iVar4);
          L2FName::L2FName((L2FName *)&local_28,puVar7,EVar11);
          puVar5[0x39] = local_28;
          param_1 = (uchar *)thunk_FUN_104a0b70(L"cast_volume",iVar4);
          puVar5[0x3b] = (float)(int)param_1;
          param_1 = (uchar *)thunk_FUN_104a0b70(L"cast_rad",iVar4);
          puVar5[0x3c] = (float)(int)param_1;
          this = *(FArray **)(local_1c + 0x6a8d4);
          iVar8 = FArray::Add(this,1,0xc);
          puVar9 = (undefined4 *)(*(int *)this + iVar8 * 0xc);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9[1] = *puVar5;
            puVar9[2] = puVar5;
          }
          uVar10 = *(int *)(this + 0x10) - 1U & puVar9[1];
          *puVar9 = *(undefined4 *)(*(int *)(this + 0xc) + uVar10 * 4);
          *(int *)(*(int *)(this + 0xc) + uVar10 * 4) = *(int *)(this + 4) + -1;
          if (*(int *)(this + 0x10) * 2 + 8 < *(int *)(this + 4)) {
            *(int *)(this + 0x10) = *(int *)(this + 0x10) * 2;
            thunk_FUN_1045a3f0();
          }
          pFVar2 = local_14;
          local_a8 = iVar4 + 1;
        }
        FOutputDevice::Logf(local_23c,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_7c = (uint)local_7c._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_14;
    }
  }
LAB_10473e69:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_84;
  return local_18;
}


// ==== 10473e91 Catch@10473e91

void Catch_10473e91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0xc4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_10914c48);
}


// ==== 10473ea8 Catch@10473ea8

void Catch_10473ea8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SkillSndDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104741a0 FUN_104741a0

void FUN_104741a0(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10813fc8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  appStrcpy((ushort *)local_b8,(ushort *)L"SkillSoundgrp.dat");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x6a8d4) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x6a8d4);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_1044ec30(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463d40();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104742ef Catch@104742ef

void Catch_104742ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10474303 Catch@10474303

void Catch_10474303(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::SkillSndDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10474380 FUN_10474380

undefined4 FUN_10474380(uchar *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  FOutputDevice *this;
  EFindName EVar8;
  FOutputDevice local_148 [184];
  undefined4 local_90;
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  undefined4 local_38;
  int local_34;
  undefined4 local_30 [2];
  int local_28;
  undefined4 *local_24;
  FArchive *local_20;
  int local_1c;
  FL2GameData *local_18;
  undefined4 local_14;
  int local_10;
  uchar *local_c;
  int local_8;
  
  puStack_48 = &LAB_10814001;
  local_4c = ExceptionList;
  local_50 = &stack0xfffffeac;
  local_44 = 0;
  local_14 = 1;
  local_c = (uchar *)0x0;
  local_10 = 0;
  local_20 = (FArchive *)0x0;
  ExceptionList = &local_4c;
  appStrcpy((ushort *)local_148,(ushort *)L"EnterEventgrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_20 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10474873;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_18,pFVar2,&local_c,&local_10,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_10);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_18,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_148,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
        local_24 = (undefined4 *)thunk_FUN_1032ffc0(0x34);
        local_44._0_1_ = 1;
        if (local_24 == (undefined4 *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = thunk_FUN_1044bc70();
        }
        local_44 = (uint)local_44._1_3_ << 8;
        local_8 = iVar4;
        thunk_FUN_1044ede0(pFVar3);
        thunk_FUN_104632c0(iVar4,&local_8);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_10474873;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_148,(ushort *)L"EnterEventgrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_20 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_44._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_18,pFVar2,&local_c,&local_10,(int)puVar1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_c + 2;
      for (iVar4 = 0; local_28 = iVar4, iVar4 < 10; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_enterevent_begin_10ae1428 + iVar4 * 0x101,
                           (&DAT_10ae1628)[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_90);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar4 = 0; local_34 = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
          local_8 = thunk_FUN_1032ffc0(0x34);
          local_44._0_1_ = 3;
          if (local_8 == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_1044bc70();
          }
          local_44._0_1_ = 2;
          local_24 = puVar5;
          uVar6 = thunk_FUN_104a0b70(&DAT_1089600c,iVar4);
          *puVar5 = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"isrise",iVar4);
          puVar5[9] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"spawn_type",iVar4);
          puVar5[10] = uVar6;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"sound_name",iVar4);
          FString::operator=((FString *)(puVar5 + 4),puVar7);
          local_8 = thunk_FUN_104a0b70(L"sound_vol",iVar4);
          puVar5[7] = (float)local_8;
          local_8 = thunk_FUN_104a0b70(L"sound_rad",iVar4);
          puVar5[8] = (float)local_8;
          uVar6 = thunk_FUN_104a0b70(L"isrise",iVar4);
          puVar5[9] = uVar6;
          EVar8 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"effect_name",iVar4);
          L2FName::L2FName((L2FName *)&local_38,puVar7,EVar8);
          puVar5[0xb] = local_38;
          EVar8 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"anim_name",iVar4);
          L2FName::L2FName((L2FName *)local_30,puVar7,EVar8);
          puVar5[0xc] = local_30[0];
          thunk_FUN_104632c0(puVar5,&local_24);
        }
        FOutputDevice::Logf(local_148,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10474873:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_4c;
  return local_14;
}


// ==== 1047489b Catch@1047489b

void Catch_1047489b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 104748af Catch@104748af

void Catch_104748af(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::EnterEventDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10474a20 FUN_10474a20

void FUN_10474a20(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814028;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  appStrcpy((ushort *)local_b8,(ushort *)L"EnterEventgrp.dat");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x7dce8) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x7dce8);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_1044ede0(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463d80();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10474b6f Catch@10474b6f

void Catch_10474b6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10474b83 Catch@10474b83

void Catch_10474b83(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::EnterEventDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10474c00 FUN_10474c00

undefined4 FUN_10474c00(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  ushort *puVar4;
  uchar *puVar5;
  undefined4 uVar6;
  int iVar7;
  FL2GameData *in_ECX;
  FString *this;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  FOutputDevice local_144 [184];
  undefined4 local_8c;
  undefined1 *local_4c;
  void *local_48;
  undefined1 *puStack_44;
  int local_40;
  int local_34;
  int local_30;
  int local_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  ushort *local_10;
  FArchive *local_c;
  uchar *local_8;
  
  puStack_44 = &LAB_10814061;
  local_48 = ExceptionList;
  local_4c = &stack0xfffffeb0;
  local_40 = 0;
  local_18 = 1;
  local_8 = (uchar *)0x0;
  local_14 = 0;
  local_c = (FArchive *)0x0;
  ExceptionList = &local_48;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_144,(ushort *)L"CommandName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  local_c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10474dc2;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_10 = (ushort *)0x0;
    local_14 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_14,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_14);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_144,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&local_10,4);
      for (local_20 = 0; local_20 < (int)local_10; local_20 = local_20 + 1) {
        param_1 = (uchar *)thunk_FUN_1032ffc0(0x14);
        local_40._0_1_ = 1;
        if (param_1 == (uchar *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_10448270();
        }
        local_40 = (uint)local_40._1_3_ << 8;
        local_1c = iVar3;
        thunk_FUN_10447020(pFVar2);
        piVar9 = &local_1c;
        puVar4 = FString::operator*((FString *)(iVar3 + 8));
        thunk_FUN_10463340(puVar4,piVar9);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10474dc2;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_144,(ushort *)L"CommandName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  local_c = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_144,*(ushort **)GWarn_exref);
    local_18 = 0;
    pFVar1 = local_c;
  }
  else {
    thunk_FUN_104a14b0();
    local_40._0_1_ = 2;
    local_14 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_14,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_144,*(ushort **)GWarn_exref);
      local_18 = 0;
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_c;
    }
    else {
      param_1 = local_8 + 2;
      for (iVar3 = 0; local_30 = iVar3, iVar3 < 5; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_cmd_begin_10ae3e60 + iVar3 * 0x101,(&DAT_10ae4060)[iVar3 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_8c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_18 = 0;
      }
      else {
        local_1c = thunk_FUN_1049f840();
        local_28 = 0;
        while (iVar3 = local_28, local_28 < local_1c) {
          local_10 = (ushort *)thunk_FUN_1032ffc0(0x14);
          local_40._0_1_ = 3;
          if (local_10 == (ushort *)0x0) {
            puVar5 = (uchar *)0x0;
          }
          else {
            puVar5 = (uchar *)thunk_FUN_10448270();
          }
          local_40._0_1_ = 2;
          param_1 = puVar5;
          uVar6 = thunk_FUN_104a0b70(&DAT_1089600c,iVar3);
          *(undefined4 *)puVar5 = uVar6;
          local_10 = (ushort *)thunk_FUN_104a0c30(L"action",iVar3);
          for (iVar8 = 0; local_34 = iVar8, iVar8 < 0x72; iVar8 = iVar8 + 1) {
            iVar7 = appStricmp(local_10,(ushort *)(&DAT_10a8af78 + iVar8 * 0x204));
            if (iVar7 == 0) {
              *(undefined4 *)(param_1 + 4) = (&DAT_10a8b178)[iVar8 * 0x81];
              break;
            }
          }
          this = (FString *)(param_1 + 8);
          puVar4 = (ushort *)thunk_FUN_104a0c30(&DAT_1089a67c,iVar3);
          FString::operator=(this,puVar4);
          puVar10 = &param_1;
          puVar4 = FString::operator*(this);
          thunk_FUN_10463340(puVar4,puVar10);
          pFVar1 = local_c;
          local_28 = iVar3 + 1;
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar1 = local_c;
    }
  }
LAB_10474dc2:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_48;
  return local_18;
}


// ==== 104750e7 Catch@104750e7

void Catch_104750e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 104750fb Catch@104750fb

void Catch_104750fb(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CommandDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10475260 FUN_10475260

void FUN_10475260(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814088;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_b8,(ushort *)L"CommandName");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x3d14) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x3d14);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_10447020(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463c40();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 104753ac Catch@104753ac

void Catch_104753ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 104753c0 Catch@104753c0

void Catch_104753c0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CommandDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10475440 FUN_10475440

void FUN_10475440(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108140a8;
  local_10 = ExceptionList;
  iVar3 = 0;
  piVar1 = *(int **)(in_ECX + 0x3d14);
  if ((piVar1 != (int *)0x0) && (param_1 == 0)) {
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    ExceptionList = &local_10;
    for (; iVar3 < piVar1[1]; iVar3 = iVar3 + 1) {
      piVar2 = *(int **)(*piVar1 + 0x10 + iVar3 * 0x14);
      if (piVar2 != (int *)0x0) {
        FString::operator=((FString *)(in_ECX + 0x7357c + *piVar2 * 0xc),(FString *)(piVar2 + 2));
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463c40();
  }
  ExceptionList = local_10;
  return;
}


// ==== 104754e6 Catch@104754e6

void Catch_104754e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104754fa Catch@104754fa

void Catch_104754fa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::CommandStringLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10475550 FUN_10475550

undefined4 FUN_10475550(uchar *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  FOutputDevice *this;
  EFindName EVar8;
  FOutputDevice local_14c [184];
  undefined4 local_94;
  undefined1 *local_54;
  void *local_50;
  undefined1 *puStack_4c;
  int local_48;
  int local_3c;
  int local_38;
  int *local_34 [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  FL2GameData *local_18;
  undefined4 local_14;
  FArchive *local_10;
  int local_c;
  uchar *local_8;
  
  puStack_4c = &LAB_108140e1;
  local_50 = ExceptionList;
  local_54 = &stack0xfffffea8;
  local_48 = 0;
  local_14 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &local_50;
  appStrcpy((ushort *)local_14c,(ushort *)L"MusicInfo.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_14c,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_10 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_104759e7;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_18,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_14c,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_18,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_14c,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_24 = 0; local_24 < (int)param_1; local_24 = local_24 + 1) {
        local_28 = thunk_FUN_1032ffc0(0x2c);
        local_48._0_1_ = 1;
        if (local_28 == 0) {
          local_20 = 0;
        }
        else {
          local_20 = thunk_FUN_1044bd10();
        }
        local_48 = (uint)local_48._1_3_ << 8;
        local_1c = 0;
        (**(code **)(*(int *)pFVar3 + 4))(&local_1c,4);
        thunk_FUN_1044eef0(pFVar3);
        thunk_FUN_10463410(&local_1c,&local_20);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_104759e7;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_14c,(ushort *)L"MusicInfo.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_14c,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
    pFVar2 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_48._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_18,pFVar2,&local_8,&local_c,(int)puVar1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_48 = (uint)local_48._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_10;
    }
    else {
      param_1 = local_8 + 2;
      for (iVar4 = 0; local_2c = iVar4, iVar4 < 4; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_emusic_begin_10ae5076 + iVar4 * 0x101 + 1,
                           (&DAT_10ae5278)[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_94);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        local_38 = 0;
        while (iVar4 = local_38, local_38 < (int)param_1) {
          local_1c = thunk_FUN_1032ffc0(0x2c);
          local_48._0_1_ = 3;
          if (local_1c == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)thunk_FUN_1044bd10();
          }
          local_48._0_1_ = 2;
          local_34[0] = piVar5;
          local_28 = thunk_FUN_104a0b70(&DAT_1089600c,iVar4);
          iVar6 = thunk_FUN_104a0c90(L"title",iVar4);
          *piVar5 = iVar6;
          for (iVar6 = 0; local_3c = iVar6, iVar6 < *piVar5; iVar6 = iVar6 + 1) {
            EVar8 = 2;
            puVar7 = (ushort *)thunk_FUN_104a0cf0(L"title",iVar6,iVar4);
            L2FName::L2FName((L2FName *)&local_20,puVar7,EVar8);
            piVar5[iVar6 + 1] = local_20;
          }
          thunk_FUN_10463410(&local_28,local_34);
          pFVar2 = local_10;
          local_38 = iVar4 + 1;
        }
        FOutputDevice::Logf(local_14c,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_48 = (uint)local_48._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar2 = local_10;
    }
  }
LAB_104759e7:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_50;
  return local_14;
}


// ==== 10475a0e Catch@10475a0e

void Catch_10475a0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x14,&DAT_10914c48);
}


// ==== 10475a22 Catch@10475a22

void Catch_10475a22(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::MusicDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10475b80 FUN_10475b80

void FUN_10475b80(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  ushort local_b8 [68];
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814108;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  appStrcpy(local_b8,(ushort *)L"MusicInfo.dat");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x3d18) + 4);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
    local_30 = *(int **)(in_ECX + 0x3d18);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_2c = local_30;
    while (iVar1 = local_28, local_28 < local_2c[1]) {
      param_1 = *(int *)(*local_2c + local_28 * 0xc + 4);
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      thunk_FUN_1044eef0(pFVar2);
      in_ECX = local_20;
      local_28 = iVar1 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463dc0();
    FL2GameData::MakeSafePackage(in_ECX,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10475ceb Catch@10475ceb

void Catch_10475ceb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10475cff Catch@10475cff

void Catch_10475cff(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::MusicDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10475d90 FUN_10475d90

undefined4 FUN_10475d90(uchar *param_1)

{
  uchar *puVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  EFindName EVar8;
  FOutputDevice local_144 [184];
  undefined4 local_8c;
  undefined1 *local_4c;
  void *local_48;
  undefined1 *puStack_44;
  int local_40;
  int local_34;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  FArchive *local_20;
  undefined4 local_1c;
  int local_18;
  FL2GameData *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_44 = &LAB_10814141;
  local_48 = ExceptionList;
  local_4c = &stack0xfffffeb0;
  local_40 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_20 = (FArchive *)0x0;
  ExceptionList = &local_48;
  appStrcpy((ushort *)local_144,(ushort *)L"MobSkillAnimgrp.dat");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  puVar1 = param_1;
  local_20 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1047623c;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_8,&local_c,0);
    pFVar3 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar3 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_144,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar4 = FL2GameData::CheckSafePackage(local_14,pFVar3);
      if (iVar4 == 0) {
        FOutputDevice::Logf(local_144,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
      for (local_18 = 0; local_18 < (int)param_1; local_18 = local_18 + 1) {
        local_24 = (undefined4 *)thunk_FUN_1032ffc0(0x30);
        local_40._0_1_ = 1;
        if (local_24 == (undefined4 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = thunk_FUN_1044bd60();
        }
        local_40 = (uint)local_40._1_3_ << 8;
        local_1c = uVar5;
        thunk_FUN_1044efc0(pFVar3);
        thunk_FUN_1045ac10(uVar5,&local_1c);
      }
      (**(code **)(*(int *)pFVar3 + 0x58))();
    }
    (**(code **)(*(int *)pFVar2 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar3 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar3)(1);
    }
    goto LAB_1047623c;
  }
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar2 + 0x58))();
  }
  appStrcpy((ushort *)local_144,(ushort *)L"MobSkillAnimgrp.txt");
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_144,0,*(undefined4 *)GNull_exref);
  local_20 = pFVar2;
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_144,*(ushort **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_40._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar2 + 0x2c))();
    FL2GameData::GetTextInformation(local_14,pFVar2,&local_8,&local_c,(int)puVar1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(local_144,*(ushort **)GWarn_exref);
      local_10 = 0;
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (iVar4 = 0; local_28 = iVar4, iVar4 < 8; iVar4 = iVar4 + 1) {
        thunk_FUN_104a1120(u_eskill_begin_10ae587e + iVar4 * 0x101 + 1,
                           u_cskill_name_10ae5a80[iVar4 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar4 = thunk_FUN_104a1840();
      if (iVar4 == 0) {
        thunk_FUN_10445eb0(local_8c);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar4 = 0; local_2c = iVar4, iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
          local_34 = thunk_FUN_1032ffc0(0x30);
          local_40._0_1_ = 3;
          if (local_34 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)thunk_FUN_1044bd60();
          }
          local_40._0_1_ = 2;
          local_24 = puVar6;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"skill_name",iVar4);
          FString::operator=((FString *)(puVar6 + 3),puVar7);
          uVar5 = thunk_FUN_104a0b70(L"skill_id",iVar4);
          puVar6[1] = uVar5;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"npc_name",iVar4);
          FString::operator=((FString *)(puVar6 + 6),puVar7);
          uVar5 = thunk_FUN_104a0b70(L"npc_id",iVar4);
          *puVar6 = uVar5;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"npc_class",iVar4);
          FString::operator=((FString *)(puVar6 + 9),puVar7);
          EVar8 = 2;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"seq_name",iVar4);
          L2FName::L2FName((L2FName *)&local_1c,puVar7,EVar8);
          puVar6[2] = local_1c;
          thunk_FUN_1045ac10(puVar6,&local_24);
        }
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar2 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_40 = (uint)local_40._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_1047623c:
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_48;
  return local_10;
}


// ==== 10476263 Catch@10476263

void Catch_10476263(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10476277 Catch@10476277

void Catch_10476277(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::NpcSkillAnimDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104763e0 FUN_104763e0

void FUN_104763e0(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814168;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  appStrcpy((ushort *)local_b8,(ushort *)L"MobSkillAnimgrp.dat");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x3d28) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x3d28);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_1044efc0(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463f40();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1047652f Catch@1047652f

void Catch_1047652f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10476543 Catch@10476543

void Catch_10476543(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::NpcSkillAnimDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104765c0 FUN_104765c0

undefined4 FUN_104765c0(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  FName *pFVar3;
  ushort *puVar4;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  int iVar5;
  EFindName EVar6;
  FOutputDevice local_148 [184];
  undefined4 local_90;
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  int local_38;
  int local_34;
  FName *local_2c;
  FName *local_28;
  FArchive *local_24;
  int local_1c;
  FName *local_18;
  FName *local_14;
  undefined4 local_10;
  int local_c;
  uchar *local_8;
  
  puStack_48 = &LAB_108141a1;
  local_4c = ExceptionList;
  local_50 = &stack0xfffffeac;
  iVar5 = 0;
  local_44 = 0;
  local_10 = 1;
  local_8 = (uchar *)0x0;
  local_c = 0;
  local_24 = (FArchive *)0x0;
  ExceptionList = &local_4c;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_148,(ushort *)L"StaticObject");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_24 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10476793;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)0x0;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_8,local_c);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar5 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar5 == 0) {
        FOutputDevice::Logf(local_148,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
        pFVar3 = (FName *)thunk_FUN_1032ffc0(4);
        local_44._0_1_ = 1;
        local_28 = pFVar3;
        if (pFVar3 == (FName *)0x0) {
          local_14 = (FName *)0x0;
        }
        else {
          FName::FName(pFVar3);
          local_14 = pFVar3;
        }
        local_44 = (uint)local_44._1_3_ << 8;
        local_18 = (FName *)0x0;
        (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
        thunk_FUN_1044f2c0(pFVar2);
        thunk_FUN_10463500(&local_18,&local_14);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_8);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10476793;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_148,(ushort *)L"StaticObject");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_24 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_10 = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_44._0_1_ = 2;
    local_c = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_8,&local_c,(int)param_1);
    if (local_8 == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_10 = 0;
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_8 + 2;
      for (; local_38 = iVar5, iVar5 < 4; iVar5 = iVar5 + 1) {
        thunk_FUN_104a1120(u_estaticobject_begin_10ae688e + iVar5 * 0x101 + 1,
                           (&DAT_10ae6a90)[iVar5 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar5 = thunk_FUN_104a1840();
      if (iVar5 == 0) {
        thunk_FUN_10445eb0(local_90);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_10 = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        for (iVar5 = 0; local_34 = iVar5, iVar5 < (int)param_1; iVar5 = iVar5 + 1) {
          pFVar3 = (FName *)thunk_FUN_1032ffc0(4);
          local_44._0_1_ = 3;
          local_18 = pFVar3;
          if (pFVar3 == (FName *)0x0) {
            pFVar3 = (FName *)0x0;
          }
          else {
            FName::FName(pFVar3);
          }
          local_44._0_1_ = 2;
          local_2c = pFVar3;
          local_28 = (FName *)thunk_FUN_104a0b70(&DAT_1089600c,iVar5);
          EVar6 = 2;
          puVar4 = (ushort *)thunk_FUN_104a0c30(L"name",iVar5);
          L2FName::L2FName((L2FName *)&local_14,puVar4,EVar6);
          *(FName **)pFVar3 = local_14;
          thunk_FUN_10463500(&local_28,&local_2c);
        }
        FOutputDevice::Logf(local_148,*(ushort **)GWarn_exref);
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_8);
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10476793:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_4c;
  return local_10;
}


// ==== 10476a50 Catch@10476a50

void Catch_10476a50(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 10476a64 Catch@10476a64

void Catch_10476a64(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::LoadStaticObjectInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10476bc0 FUN_10476bc0

void FUN_10476bc0(int param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FL2GameData *in_ECX;
  ushort local_b8 [68];
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108141c8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,local_b8,(ushort *)L"StaticObject");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x6a8d8) + 4);
  pFVar2 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar2 == (FArchive *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar2 + 4))(&local_18,4);
    local_30 = *(int **)(in_ECX + 0x6a8d8);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_2c = local_30;
    while (iVar1 = local_28, local_28 < local_2c[1]) {
      param_1 = *(int *)(*local_2c + local_28 * 0xc + 4);
      (**(code **)(*(int *)pFVar2 + 4))(&param_1,4);
      thunk_FUN_1044f2c0(pFVar2);
      in_ECX = local_20;
      local_28 = iVar1 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463f80();
    FL2GameData::MakeSafePackage(in_ECX,pFVar2);
    (**(code **)(*(int *)pFVar2 + 0x58))();
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar2)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10476d2a Catch@10476d2a

void Catch_10476d2a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10476d3e Catch@10476d3e

void Catch_10476d3e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::LoadStaticObjectSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10476dd0 FUN_10476dd0

undefined4 FUN_10476dd0(uchar *param_1)

{
  FArchive *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  FL2GameData *in_ECX;
  FOutputDevice *this;
  float10 fVar8;
  FOutputDevice local_148 [184];
  undefined4 local_90;
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  int local_38;
  int local_34;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  FArchive *local_20;
  undefined4 local_1c;
  int local_14;
  int local_10;
  uchar *local_c;
  int local_8;
  
  puStack_48 = &LAB_10814201;
  local_4c = ExceptionList;
  local_50 = &stack0xfffffeac;
  local_44 = 0;
  local_1c = 1;
  local_c = (uchar *)0x0;
  local_10 = 0;
  local_20 = (FArchive *)0x0;
  ExceptionList = &local_4c;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_148,(ushort *)L"ZoneName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_20 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    if (param_1 == (uchar *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_10476fe2;
    }
  }
  else if (param_1 == (uchar *)0x0) {
    local_28 = 0;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_10,0);
    pFVar2 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_10);
    if (pFVar2 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar3 = FL2GameData::CheckSafePackage(in_ECX,pFVar2);
      if (iVar3 == 0) {
        FOutputDevice::Logf(local_148,*(ushort **)GError_exref);
      }
      (**(code **)(*(int *)pFVar2 + 4))(&local_28,4);
      for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
        local_2c = (undefined4 *)thunk_FUN_1032ffc0(0x4c);
        local_44._0_1_ = 1;
        if (local_2c == (undefined4 *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = thunk_FUN_10448310();
        }
        local_44 = (uint)local_44._1_3_ << 8;
        local_8 = iVar3;
        thunk_FUN_10447270(pFVar2);
        param_1 = (uchar *)thunk_FUN_1044bf90(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),
                                              *(undefined4 *)(iVar3 + 0xc));
        while ((iVar4 = thunk_FUN_10458e50(&param_1), iVar4 != 0 && (199 < *(int *)(iVar3 + 4)))) {
          param_1 = param_1 + 1;
        }
        thunk_FUN_104635b0(&param_1,&local_8);
        thunk_FUN_1042c300(local_8,&param_1);
      }
      (**(code **)(*(int *)pFVar2 + 0x58))();
    }
    (**(code **)(*(int *)pFVar1 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar2)(1);
    }
    goto LAB_10476fe2;
  }
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar1 + 0x58))();
  }
  FL2GameData::GetTextFileName(in_ECX,(ushort *)local_148,(ushort *)L"ZoneName");
  pFVar1 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_20 = pFVar1;
  if (pFVar1 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_1c = 0;
  }
  else {
    thunk_FUN_104a14b0();
    local_44._0_1_ = 2;
    local_10 = (**(code **)(*(int *)pFVar1 + 0x2c))();
    FL2GameData::GetTextInformation(in_ECX,pFVar1,&local_c,&local_10,(int)param_1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_1c = 0;
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
    else {
      param_1 = local_c + 2;
      for (iVar3 = 0; local_38 = iVar3, iVar3 < 0x11; iVar3 = iVar3 + 1) {
        thunk_FUN_104a1120(u_ZoneName_begin_10ae7ea8 + iVar3 * 0x101,(&DAT_10ae80a8)[iVar3 * 0x101])
        ;
      }
      thunk_FUN_1049f750(param_1);
      iVar3 = thunk_FUN_104a1840();
      if (iVar3 == 0) {
        thunk_FUN_10445eb0(local_90);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_1c = 0;
      }
      else {
        param_1 = (uchar *)thunk_FUN_1049f840();
        local_34 = 0;
        while (iVar3 = local_34, local_34 < (int)param_1) {
          local_8 = thunk_FUN_1032ffc0(0x4c);
          local_44._0_1_ = 3;
          if (local_8 == 0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)thunk_FUN_10448310();
          }
          local_44._0_1_ = 2;
          local_2c = puVar5;
          uVar6 = thunk_FUN_104a0b70(&DAT_1089ad14,iVar3);
          *puVar5 = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"Color",iVar3);
          puVar5[1] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"MapX",iVar3);
          puVar5[2] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"MapY",iVar3);
          puVar5[3] = uVar6;
          local_8 = thunk_FUN_104a0b70(&DAT_1089bca0,iVar3);
          puVar5[4] = (float)local_8;
          local_8 = thunk_FUN_104a0b70(L"Bottom",iVar3);
          puVar5[5] = (float)local_8;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"Name",iVar3);
          FString::operator=((FString *)(puVar5 + 6),puVar7);
          uVar6 = thunk_FUN_104a0b70(L"TownBtnLocX",iVar3);
          puVar5[9] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"TownBtnLocY",iVar3);
          puVar5[10] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"TownMapX",iVar3);
          puVar5[0xb] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"TownMapY",iVar3);
          puVar5[0xc] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"TownMapWidth",iVar3);
          puVar5[0xd] = uVar6;
          uVar6 = thunk_FUN_104a0b70(L"TownMapHeight",iVar3);
          puVar5[0xe] = uVar6;
          fVar8 = (float10)thunk_FUN_104a0bd0(L"TownMapScale",iVar3);
          puVar5[0xf] = (float)fVar8;
          puVar7 = (ushort *)thunk_FUN_104a0c30(L"TownMapTex",iVar3);
          FString::operator=((FString *)(puVar5 + 0x10),puVar7);
          local_14 = thunk_FUN_1044bf90(puVar5[1],puVar5[2],puVar5[3]);
          while ((iVar4 = thunk_FUN_10458e50(&local_14), iVar4 != 0 && (199 < (int)puVar5[1]))) {
            local_14 = local_14 + 1;
          }
          thunk_FUN_104635b0(&local_14,&local_2c);
          thunk_FUN_1042c300(puVar5,&local_14);
          pFVar1 = local_20;
          local_34 = iVar3 + 1;
        }
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar1 + 0x58))();
      thunk_FUN_103254a0(local_c);
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
    }
  }
LAB_10476fe2:
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar1)(1);
  }
  ExceptionList = local_4c;
  return local_1c;
}


// ==== 10477406 Catch@10477406

void Catch_10477406(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10914c48);
}


// ==== 1047741a Catch@1047741a

void Catch_1047741a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ZoneNameListLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104775d0 FUN_104775d0

void FUN_104775d0(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b8 [136];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  FL2GameData *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814228;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FL2GameData::GetBinFileName(in_ECX,(ushort *)local_b8,(ushort *)L"ZoneName");
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x7f9cc) + 4);
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b8,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
  }
  else {
    (**(code **)(*(int *)pFVar3 + 4))(&local_18,4);
    iVar1 = *(int *)(in_ECX + 0x7f9cc);
    local_24 = 0;
    local_8._0_1_ = 1;
    local_28 = 0;
    local_30 = iVar1;
    local_2c = iVar1;
    while (iVar2 = local_28, local_28 < *(int *)(iVar1 + 4)) {
      thunk_FUN_10447270(pFVar3);
      local_28 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463fc0();
    FL2GameData::MakeSafePackage(local_20,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b8,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1047771c Catch@1047771c

void Catch_1047771c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10477730 Catch@10477730

void Catch_10477730(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::ZoneNameListSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104777b0 FUN_104777b0

int FUN_104777b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  undefined4 uVar5;
  int iVar6;
  FOutputDevice *this;
  code *pcVar7;
  int iVar8;
  float10 fVar9;
  ushort local_548;
  undefined1 local_546 [1022];
  FOutputDevice local_148 [184];
  undefined4 local_90;
  undefined1 *local_50;
  void *local_4c;
  undefined1 *puStack_48;
  int local_44;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  FArchive *local_10;
  uchar *local_c;
  FL2GameData *local_8;
  
  pcVar7 = appStrcpy_exref;
  puStack_48 = &LAB_10814261;
  local_4c = ExceptionList;
  local_50 = &stack0xfffffaac;
  iVar8 = 0;
  local_44 = 0;
  local_14 = 1;
  local_c = (uchar *)0x0;
  local_1c = 0;
  local_10 = (FArchive *)0x0;
  ExceptionList = &local_4c;
  appStrcpy((ushort *)local_148,(ushort *)L"Hairaccessorylocgrp.dat");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    if (param_1 == (int *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x315);
      }
      goto LAB_1047796f;
    }
  }
  else if (param_1 == (int *)0x0) {
    local_1c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    FL2GameData::GetTextInformation(local_8,pFVar3,&local_c,&local_1c,0);
    pFVar4 = (FArchive *)(**(code **)(**(int **)GFileManager_exref + 4))(local_c,local_1c);
    if (pFVar4 == (FArchive *)0x0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(local_148,*(EName *)GLog_exref,(ushort *)0x315);
      }
    }
    else {
      iVar8 = FL2GameData::CheckSafePackage(local_8,pFVar4);
      if (iVar8 == 0) {
        FOutputDevice::Logf(local_148,*(ushort **)GError_exref);
      }
      local_18 = 0;
      (**(code **)(*(int *)pFVar4 + 4))(&local_18,4);
      for (local_20 = 0; local_20 < local_18; local_20 = local_20 + 1) {
        param_1 = (int *)thunk_FUN_1032ffc0(0x16c);
        local_44._0_1_ = 1;
        if (param_1 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = thunk_FUN_10457de0();
        }
        local_44 = (uint)local_44._1_3_ << 8;
        local_24 = iVar8;
        if (iVar8 != 0) {
          thunk_FUN_1044f360(pFVar4);
          thunk_FUN_10463660(iVar8,&local_24);
        }
      }
      (**(code **)(*(int *)pFVar4 + 0x58))();
    }
    (**(code **)(*(int *)pFVar3 + 0x58))();
    thunk_FUN_103254a0(local_c);
    if (pFVar4 != (FArchive *)0x0) {
      (*(code *)**(undefined4 **)pFVar4)(1);
    }
    goto LAB_1047796f;
  }
  if (pFVar3 != (FArchive *)0x0) {
    (**(code **)(*(int *)pFVar3 + 0x58))();
  }
  appStrcpy((ushort *)local_148,(ushort *)L"Hairaccessorylocgrp.txt");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 8))(local_148,0,*(undefined4 *)GNull_exref);
  local_10 = pFVar3;
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
    local_14 = 0;
    pFVar3 = local_10;
  }
  else {
    thunk_FUN_104a14b0();
    local_44._0_1_ = 2;
    local_1c = (**(code **)(*(int *)pFVar3 + 0x2c))();
    appStrcpy((ushort *)&DAT_10a9d99a,(ushort *)L"helmet_index");
    FL2GameData::GetTextInformation(local_8,pFVar3,&local_c,&local_1c,(int)param_1);
    if (local_c == (uchar *)0x0) {
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref);
      local_14 = 0;
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar3 = local_10;
    }
    else {
      param_1 = (int *)(local_c + 2);
      for (; local_28 = iVar8, iVar8 < 0x5d; iVar8 = iVar8 + 1) {
        thunk_FUN_104a1120(u_hairaccessory_begin_10aeaee0 + iVar8 * 0x101,
                           u_cmesh_name_10aeb0e0[iVar8 * 0x101]);
      }
      thunk_FUN_1049f750(param_1);
      iVar8 = thunk_FUN_104a1840();
      if (iVar8 == 0) {
        thunk_FUN_10445eb0(local_90);
        FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
        local_14 = 0;
      }
      else {
        local_24 = thunk_FUN_1049f840();
        local_2c = 0;
        while (iVar8 = local_2c, local_2c < local_24) {
          local_548 = 0;
          _memset(local_546,0,0x3fe);
          uVar5 = thunk_FUN_104a0c30(L"mesh_name",iVar8);
          (*pcVar7)(&local_548,uVar5);
          FName::FName((FName *)&local_18,&local_548,2);
          param_1 = (int *)thunk_FUN_10458eb0(&local_18);
          if (param_1 != (int *)0x0) {
            FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref);
          }
          local_38 = thunk_FUN_1032ffc0(0x16c);
          local_44._0_1_ = 3;
          if (local_38 == 0) {
            param_1 = (int *)0x0;
          }
          else {
            param_1 = (int *)thunk_FUN_10457de0();
          }
          local_44._0_1_ = 2;
          *param_1 = local_18;
          local_30 = 0;
          while (iVar2 = local_30, piVar1 = param_1, local_30 < 0xf) {
            appSprintf(&local_548,(ushort *)&DAT_1089bdc4,local_30);
            fVar9 = (float10)thunk_FUN_104a0bd0(&local_548,iVar8);
            piVar1[iVar2 * 3 + 1] = (int)(float)fVar9;
            appSprintf(&local_548,(ushort *)&DAT_1089bdb8,iVar2);
            fVar9 = (float10)thunk_FUN_104a0bd0(&local_548,iVar8);
            piVar1[iVar2 * 3 + 2] = (int)(float)fVar9;
            appSprintf(&local_548,(ushort *)&DAT_1089bdac,iVar2);
            fVar9 = (float10)thunk_FUN_104a0bd0(&local_548,iVar8);
            piVar1[iVar2 * 3 + 3] = (int)(float)fVar9;
            appSprintf(&local_548,(ushort *)L"Pitch%d",iVar2);
            iVar6 = thunk_FUN_104a0b70(&local_548,iVar8);
            piVar1[iVar2 * 3 + 0x2e] = iVar6;
            appSprintf(&local_548,(ushort *)L"Yaw%d",iVar2);
            iVar6 = thunk_FUN_104a0b70(&local_548,iVar8);
            piVar1[iVar2 * 3 + 0x2f] = iVar6;
            appSprintf(&local_548,(ushort *)L"Roll%d",iVar2);
            iVar6 = thunk_FUN_104a0b70(&local_548,iVar8);
            param_1[iVar2 * 3 + 0x30] = iVar6;
            local_30 = iVar2 + 1;
          }
          thunk_FUN_10463660(param_1,&param_1);
          pFVar3 = local_10;
          pcVar7 = appStrcpy_exref;
          local_2c = iVar8 + 1;
        }
      }
      thunk_FUN_104a16a0();
      (**(code **)(*(int *)pFVar3 + 0x58))();
      thunk_FUN_103254a0(local_c);
      if (local_14 != 0) {
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
      }
      local_44 = (uint)local_44._1_3_ << 8;
      thunk_FUN_104a1770();
      pFVar3 = local_10;
    }
  }
LAB_1047796f:
  if (pFVar3 != (FArchive *)0x0) {
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_4c;
  return local_14;
}


// ==== 10477de6 Catch@10477de6

void Catch_10477de6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0xc,&DAT_10914c48);
}


// ==== 10477dfa Catch@10477dfa

void Catch_10477dfa(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HairAcceLocDataLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10477fb0 FUN_10477fb0

void FUN_10477fb0(int param_1)

{
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  FL2GameData *in_ECX;
  FOutputDevice local_b4 [136];
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  FL2GameData *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814288;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff40;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  appStrcpy((ushort *)local_b4,(ushort *)L"Hairaccessorylocgrp.dat");
  pFVar3 = (FArchive *)
           (**(code **)(**(int **)GFileManager_exref + 0xc))
                     (local_b4,(-(uint)(param_1 != 0) & 0xfffffffe) + 2 | 4,
                      *(undefined4 *)GNull_exref);
  if (pFVar3 == (FArchive *)0x0) {
    FOutputDevice::Logf(local_b4,*(ushort **)GWarn_exref);
  }
  else {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x7f9d4) + 4);
    (**(code **)(*(int *)pFVar3 + 4))(&param_1,4);
    iVar1 = *(int *)(in_ECX + 0x7f9d4);
    local_20 = 0;
    local_8._0_1_ = 1;
    local_24 = 0;
    local_2c = iVar1;
    local_28 = iVar1;
    while (iVar2 = local_24, local_24 < *(int *)(iVar1 + 4)) {
      thunk_FUN_1044f360(pFVar3);
      local_24 = iVar2 + 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    thunk_FUN_10463e00();
    FL2GameData::MakeSafePackage(local_1c,pFVar3);
    (**(code **)(*(int *)pFVar3 + 0x58))();
    FOutputDevice::Logf(local_b4,*(ushort **)GWarn_exref);
    (*(code *)**(undefined4 **)pFVar3)(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10478100 Catch@10478100

void Catch_10478100(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10478114 Catch@10478114

void Catch_10478114(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::HairAcceLocDataSave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104781a0 FUN_104781a0

int FUN_104781a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108142b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)&local_18);
  local_4 = 1;
  thunk_FUN_10458920(&param_1,&local_18);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar1 = *(int *)(local_18 + iVar2 * 4);
      if (*(int *)(iVar1 + 0x1c) == param_2) {
        local_4 = 0xffffffff;
        thunk_FUN_10463e80();
        ExceptionList = local_c;
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  local_4 = 0xffffffff;
  thunk_FUN_10463e80();
  ExceptionList = local_c;
  return 0;
}


// ==== 10478280 FUN_10478280

int FUN_10478280(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108142e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)&local_18);
  local_4 = 1;
  iVar3 = 0;
  thunk_FUN_10458ba0(&param_1,&local_18);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar1 = *(int *)(local_18 + iVar2 * 4);
      if (*(int *)(iVar1 + 4) == param_2) {
        local_4 = 0xffffffff;
        thunk_FUN_10464000();
        ExceptionList = local_c;
        return iVar1;
      }
      if (*(int *)(iVar1 + 4) == 1) {
        iVar3 = iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  local_4 = 0xffffffff;
  thunk_FUN_10464000();
  ExceptionList = local_c;
  return iVar3;
}


// ==== 10478380 FUN_10478380

int FUN_10478380(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10814311;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)&local_18);
  local_4 = 1;
  thunk_FUN_10458d70(&param_1,&local_18);
  iVar2 = 0;
  if (0 < local_14) {
    do {
      iVar1 = *(int *)(local_18 + iVar2 * 4);
      if (*(int *)(iVar1 + 4) == param_2) {
        local_4 = 0xffffffff;
        thunk_FUN_104640c0();
        ExceptionList = local_c;
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  local_4 = 0xffffffff;
  thunk_FUN_104640c0();
  ExceptionList = local_c;
  return 0;
}


// ==== 10478460 FUN_10478460

void FUN_10478460(FOutputDevice *param_1,int param_2)

{
  int iVar1;
  FL2MagicSkillData *pFVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  UObject *pUVar8;
  int iVar9;
  int in_ECX;
  L2FName *this;
  int iVar10;
  undefined4 *unaff_FS_OFFSET;
  UObject *pUVar11;
  UObject *pUVar12;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  ushort *puVar13;
  ulong uVar14;
  UPackageMap *pUVar15;
  FString local_58 [12];
  FString local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814342;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  local_18 = in_ECX;
  iVar1 = thunk_FUN_10422f80();
  local_20 = iVar1;
  if (iVar1 == 0) {
    puVar3 = *(ushort **)GCheckGrpLog_exref;
  }
  else {
    pFVar2 = FL2GameData::GetMSData(&GL2GameData,*(int *)(in_ECX + 4),1);
    if (pFVar2 != (FL2MagicSkillData *)0x0) {
      if (param_2 != 0) {
        FString::FString(local_58);
        local_8._0_1_ = 1;
        FString::FString(local_4c);
        local_8._0_1_ = 2;
        FString::operator=(local_4c,(ushort *)L"Engine.PlayerController");
        pUVar15 = (UPackageMap *)0x0;
        uVar14 = 1;
        puVar13 = (ushort *)0x0;
        puVar3 = FString::operator*(local_4c);
        local_80 = 0x10478550;
        UObject::StaticLoadClass
                  (&AController::PrivateStaticClass,(UObject *)0x0,puVar3,puVar13,uVar14,pUVar15);
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        iVar5 = **(int **)(DAT_10c51044 + 0x19c);
        puVar4 = (undefined4 *)FRotator::FRotator((FRotator *)&local_40,0,0,0);
        local_84 = *puVar4;
        local_80 = puVar4[1];
        local_90 = local_34;
        local_8c = local_30;
        local_88 = local_2c;
        uStack_94 = local_2c;
        FName::FName((FName *)&uStack_94,0);
        iVar5 = (**(code **)(iVar5 + 0xc0))();
        pUVar15 = (UPackageMap *)0x0;
        uVar14 = 0;
        puVar13 = (ushort *)0x0;
        puVar3 = L2FName::operator*((L2FName *)(iVar1 + 0x20));
        uStack_b4 = 0x104785f6;
        pUVar6 = UObject::StaticLoadClass
                           (&APawn::PrivateStaticClass,(UObject *)0x0,puVar3,puVar13,uVar14,pUVar15)
        ;
        *(UClass **)(iVar5 + 0x4f8) = pUVar6;
        if (pUVar6 == (UClass *)0x0) {
          L2FName::operator*((L2FName *)(iVar1 + 0x20));
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
          local_8._0_1_ = 1;
          FString::~FString(local_4c);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_58);
          *unaff_FS_OFFSET = local_10;
          return;
        }
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        iVar10 = **(int **)(DAT_10c51044 + 0x19c);
        puVar4 = (undefined4 *)FRotator::FRotator((FRotator *)&local_34,0,0,0);
        uStack_b8 = *puVar4;
        uStack_b4 = puVar4[1];
        uStack_c4 = local_40;
        uStack_c0 = local_3c;
        uStack_bc = local_38;
        uStack_c8 = local_38;
        FName::FName((FName *)&uStack_c8,0);
        uVar7 = (**(code **)(iVar10 + 0xc0))(*(undefined4 *)(iVar5 + 0x4f8));
        *(undefined4 *)(iVar5 + 0x3bc) = uVar7;
        this = (L2FName *)(iVar1 + 0x24);
        iVar1 = 0;
        puVar3 = L2FName::operator*(this);
        pUVar8 = UObject::StaticFindObject
                           (&USkeletalMesh::PrivateStaticClass,(UObject *)0xffffffff,puVar3,iVar1);
        if (pUVar8 == (UObject *)0x0) {
          pUVar11 = pUVar8;
          pUVar12 = pUVar8;
          puVar3 = L2FName::operator*(this);
          pUVar8 = UObject::StaticLoadObject
                             (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,
                              (ushort *)pUVar8,(ulong)pUVar11,(UPackageMap *)pUVar12);
          if (pUVar8 == (UObject *)0x0) {
            pUVar11 = pUVar8;
            pUVar12 = pUVar8;
            puVar3 = L2FName::operator*(this);
            pUVar8 = UObject::StaticLoadObject
                               (&USkeletalMesh::PrivateStaticClass,(UObject *)0x0,puVar3,
                                (ushort *)pUVar8,(ulong)pUVar11,(UPackageMap *)pUVar12);
            if (pUVar8 == (UObject *)0x0) {
              L2FName::operator*(this);
              FOutputDevice::Logf((FOutputDevice *)GCheckGrpLog_exref,*(ushort **)GCheckGrpLog_exref
                                 );
            }
          }
        }
        iVar1 = *(int *)(pUVar8 + 0x248);
        if (iVar1 != 0) {
          for (iVar10 = 0; local_1c = iVar10, iVar10 < *(int *)(iVar1 + 0x70); iVar10 = iVar10 + 1)
          {
            iVar9 = FName::operator==((FName *)(iVar10 * 0x74 + *(int *)(iVar1 + 0x6c)),
                                      (FName *)(local_18 + 8));
            if (iVar9 != 0) goto LAB_104787d0;
          }
          L2FName::operator*((L2FName *)(local_18 + 8));
          FString::operator*((FString *)(local_20 + 4));
          FOutputDevice::Logf(param_1,*(ushort **)GCheckGrpLog_exref);
        }
LAB_104787d0:
        (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(*(undefined4 *)(iVar5 + 0x3bc),0);
        (**(code **)(**(int **)(DAT_10c51044 + 0x19c) + 0xac))(iVar5,0);
        local_8._0_1_ = 1;
        FString::~FString(local_4c);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_58);
      }
      *unaff_FS_OFFSET = local_10;
      return;
    }
    puVar3 = *(ushort **)GCheckGrpLog_exref;
    param_1 = (FOutputDevice *)GCheckGrpLog_exref;
  }
  FOutputDevice::Logf(param_1,puVar3);
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 1047883c Catch@1047883c

void Catch_1047883c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10478850 Catch@10478850

void Catch_10478850(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NpcSkillAnimData::CheckResource");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10478970 FUN_10478970

ushort * FUN_10478970(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FNameEntry *pFVar4;
  int iVar5;
  ushort *puVar6;
  int in_ECX;
  int *piVar7;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10814368;
  local_c = ExceptionList;
  local_24 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 0x3d30)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x3d2c) + local_24 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == param_1)) {
        piVar7 = &DAT_10a8b178;
        do {
          iVar3 = FName::GetIndex((FName *)(iVar1 + 0x40));
          pFVar4 = (FNameEntry *)0x0;
          if (iVar3 != 0) {
            iVar3 = FName::GetIndex((FName *)(iVar1 + 0x40));
            pFVar4 = FName::GetEntry(iVar3);
            pFVar4 = pFVar4 + 0xc;
          }
          iVar3 = appStricmp((ushort *)pFVar4,(ushort *)(piVar7 + -0x80));
          if (iVar3 == 0) {
            local_4 = 0;
            iVar3 = (*(int **)(in_ECX + 0x3d14))[1];
            if (0 < iVar3) {
              iVar5 = 0;
              do {
                iVar2 = *(int *)(**(int **)(in_ECX + 0x3d14) + 0x10 + iVar5 * 0x14);
                if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == *piVar7)) {
                  puVar6 = FString::operator*((FString *)(iVar2 + 8));
                  ExceptionList = local_c;
                  return puVar6;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar3);
            }
            local_4 = 0xffffffff;
          }
          piVar7 = piVar7 + 0x81;
        } while ((int)piVar7 < 0x10a99740);
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(in_ECX + 0x3d30));
  }
  ExceptionList = local_c;
  return (ushort *)0x0;
}


// ==== 10478b20 FUN_10478b20

int FUN_10478b20(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(int **)(in_ECX + 0x6a8cc))[1];
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(**(int **)(in_ECX + 0x6a8cc) + 8 + iVar3 * 0xc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


// ==== 10478be0 FUN_10478be0

int FUN_10478be0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(int **)(in_ECX + 0x6a8cc))[1];
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(**(int **)(in_ECX + 0x6a8cc) + 8 + iVar3 * 0xc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) == param_1)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


// ==== 10478ca0 FUN_10478ca0

int FUN_10478ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(int **)(in_ECX + 0x6a8cc))[1];
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(**(int **)(in_ECX + 0x6a8cc) + 8 + iVar3 * 0xc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x28) == param_1)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


// ==== 10478d60 FUN_10478d60

int FUN_10478d60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(int **)(in_ECX + 0x6a8cc))[1];
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(**(int **)(in_ECX + 0x6a8cc) + 8 + iVar3 * 0xc);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x28) == param_1)) &&
         (*(int *)(iVar2 + 0x34) == param_2)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


// ==== 10478e40 FUN_10478e40

int * FUN_10478e40(undefined4 param_1,int param_2)

{
  int *piVar1;
  int local_2c;
  int local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10814408;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10449910();
  local_8._0_1_ = 1;
  thunk_FUN_10458ac0(&param_1,&local_2c);
  local_18 = 0;
  while( true ) {
    if (local_28 <= local_18) {
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_10464180();
      ExceptionList = local_10;
      return (int *)0x0;
    }
    piVar1 = *(int **)(local_2c + local_18 * 4);
    if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (piVar1[2] == param_2)) break;
    local_18 = local_18 + 1;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10464180();
  ExceptionList = local_10;
  return piVar1;
}


// ==== 10478eef Catch@10478eef

void Catch_10478eef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10478f03 Catch@10478f03

void Catch_10478f03(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetQuestData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10478f60 FUN_10478f60

FString * FUN_10478f60(FString *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  FString local_84 [12];
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  int local_48;
  int local_44;
  FString local_3c [20];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10814478;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff70;
  iVar6 = 0;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(local_54);
  local_8._0_1_ = 2;
  FString::FString(local_6c);
  local_8._0_1_ = 3;
  FString::FString(local_60);
  local_8._0_1_ = 4;
  thunk_FUN_10368480();
  local_8._0_1_ = 5;
  local_1c = 0;
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,6);
  local_20 = thunk_FUN_10422ee0(&param_2);
  do {
    local_28 = iVar6;
    if (2 < iVar6) {
      FString::FString(param_1,local_3c);
LAB_10479029:
      local_18 = local_18 | 1;
      local_8._0_1_ = 5;
      FString::~FString(local_3c);
      local_8._0_1_ = 4;
      thunk_FUN_1032ce30();
      local_8._0_1_ = 3;
      FString::~FString(local_60);
      local_8._0_1_ = 2;
      FString::~FString(local_6c);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_54);
      ExceptionList = local_10;
      return param_1;
    }
    thunk_FUN_1032c1a0(0);
    FString::operator=(local_54,(FString *)(local_20 + 0x68 + iVar6 * 0x18));
    iVar1 = FString::Len(local_54);
    if (iVar1 < 1) {
      FString::FString(param_1,local_3c);
      goto LAB_10479029;
    }
    FString::ParseIntoArray(local_54,(ushort *)&DAT_1089c1c4,(TArray<FString> *)&local_48);
    iVar1 = 0;
    while (local_24 = iVar1, iVar1 < local_44) {
      local_1c = 1;
      puVar2 = FString::operator*((FString *)(local_48 + iVar1 * 0xc));
      iVar3 = appAtoi(puVar2);
      if ((param_4 == 0) || (iVar3 != param_2)) {
        if (param_3 == iVar6) {
          iVar4 = FString::Len(local_3c);
          if (0 < iVar4) {
            pFVar5 = (FString *)FString::operator+(local_3c,(ushort *)local_78);
            local_8._0_1_ = 7;
            FString::operator=(local_3c,pFVar5);
            local_8 = CONCAT31(local_8._1_3_,6);
            FString::~FString(local_78);
          }
          FL2GameData::GetItemName(&GL2GameData,iVar3);
          pFVar5 = (FString *)FString::operator+(local_3c,(ushort *)local_84);
          local_8._0_1_ = 8;
          FString::operator=(local_3c,pFVar5);
          local_8 = CONCAT31(local_8._1_3_,6);
          FString::~FString(local_84);
        }
        iVar1 = iVar1 + 1;
      }
      else {
        local_1c = 0;
        iVar1 = iVar1 + 1;
      }
    }
    if (param_3 == iVar6) {
      FString::FString(param_1,local_3c);
      goto LAB_10479029;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


// ==== 1047918f Catch@1047918f

void Catch_1047918f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 104791a3 Catch@104791a3

void Catch_104791a3(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetItemSetListName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10479260 FUN_10479260

void FUN_10479260(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_108144ab;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  iVar4 = 0;
  local_8 = 0;
  local_20 = param_1;
  ExceptionList = &local_10;
  local_18 = thunk_FUN_10459050(&local_20);
  if (local_18 == 0) {
    local_20 = thunk_FUN_1032ffc0(0x28);
    local_8._0_1_ = 1;
    if (local_20 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = thunk_FUN_1044bfc0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    for (; iVar4 < 0x20; iVar4 = iVar4 + 1) {
      thunk_FUN_1044c030(iVar4,*(undefined1 *)(iVar4 + param_2));
    }
    thunk_FUN_10463960(&param_1,&local_18);
  }
  else {
    for (; iVar4 < 0x20; iVar4 = iVar4 + 1) {
      thunk_FUN_1044c030(iVar4,*(undefined1 *)(iVar4 + param_2));
    }
  }
  iVar4 = *(int *)(DAT_10c51044 + 0x19c);
  local_20 = iVar4;
  for (iVar3 = 0; iVar3 < *(int *)(iVar4 + 0x11b4) + 1; iVar3 = iVar3 + 1) {
    iVar6 = iVar4;
    if (iVar3 != 0) {
      iVar6 = *(int *)(*(int *)(iVar4 + 0x11b0) + -4 + iVar3 * 4);
    }
    local_1c = iVar3;
    for (iVar5 = 0; iVar5 < *(int *)(iVar6 + 0x3c); iVar5 = iVar5 + 1) {
      iVar4 = *(int *)(*(int *)(iVar6 + 0x38) + iVar5 * 4);
      if ((((iVar4 != 0) && (iVar4 = thunk_FUN_1045c8b0(iVar4), iVar4 != 0)) &&
          ((*(byte *)(iVar4 + 0x3bc) & 1) != 0)) &&
         ((*(int *)(iVar4 + 0x3c0) == param_1 && (*(int *)(iVar4 + 0x3c4) - 1U < 0x1f)))) {
        bVar1 = *(byte *)(*(int *)(iVar4 + 0x3c4) + -1 + param_2);
        *(undefined4 *)(iVar4 + 0x3cc) = 0;
        for (iVar2 = 0; iVar3 = local_1c, iVar2 < *(int *)(iVar4 + 0x3d4); iVar2 = iVar2 + 1) {
          if (*(uint *)(*(int *)(iVar4 + 0x3d0) + iVar2 * 8) == (uint)bVar1) {
            *(int *)(iVar4 + 0x3cc) = iVar2 + 1;
          }
        }
      }
      iVar4 = local_20;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 104793fa Catch@104793fa

void Catch_104793fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 1047940e Catch@1047940e

void Catch_1047940e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::AddAgitInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104794a0 FUN_104794a0

void FUN_104794a0(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_10459050(&stack0x00000004);
  if (iVar1 != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
    thunk_FUN_104639e0(&stack0x00000000);
  }
  return;
}


// ==== 104794f0 FUN_104794f0

void FUN_104794f0(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_14;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108144cb;
  local_c = ExceptionList;
  local_14 = param_1;
  ExceptionList = &local_c;
  iVar1 = thunk_FUN_10459050(&local_14);
  if (iVar1 == 0) {
    puStack_10 = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(0x28,&DAT_10853a28);
    if (puStack_10 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puStack_10 + 2;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *puStack_10 = 0;
      puStack_10[1] = 0;
      local_14 = puStack_10;
    }
    uStack_4 = 0xffffffff;
    if (param_2 < 0x20) {
      *(undefined1 *)((int)local_14 + param_2 + 8) = param_3;
    }
    thunk_FUN_10463960(&param_1,&local_14);
  }
  else if (param_2 < 0x20) {
    *(undefined1 *)(iVar1 + 8 + param_2) = param_3;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10479630 FUN_10479630

void FUN_10479630(void *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  undefined4 *puStack_1c;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_108144eb;
  local_c = ExceptionList;
  puStack_1c = local_14;
  local_14[0] = param_1;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)thunk_FUN_10459050();
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    *puVar2 = 0;
    *puVar2 = uVar1;
    puVar2[1] = param_2;
    ExceptionList = local_c;
    return;
  }
  puStack_1c = (undefined4 *)&DAT_10853a28;
  puStack_1c = (undefined4 *)(**(code **)**(undefined4 **)GMalloc_exref)(0x28);
  if (puStack_1c == (undefined4 *)0x0) {
    puStack_1c = (undefined4 *)0x0;
  }
  else {
    puVar2 = puStack_1c + 2;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *puStack_1c = 0;
    puStack_1c[1] = 0;
  }
  local_c = (void *)0xffffffff;
  *puStack_1c = puStack_1c[1];
  puStack_1c[1] = unaff_retaddr;
  thunk_FUN_10463960(&uStack_4,&puStack_1c);
  ExceptionList = local_14[0];
  return;
}


// ==== 10479770 FUN_10479770

undefined4 FUN_10479770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_10459050(&param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


// ==== 104797a0 FUN_104797a0

ushort * FUN_104797a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FZoneNameInfo *pFVar5;
  FL2GameData *in_ECX;
  ushort *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10814500;
  local_10 = ExceptionList;
  puVar6 = (ushort *)0x0;
  local_8 = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0x7f9d0);
  if (*(int *)GIsEditor_exref == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_107a6660();
    iVar3 = FUN_107a6660();
    iVar4 = FUN_107a6660();
    pFVar5 = FL2GameData::processGetZoneNameInfo(in_ECX,iVar4,iVar3,iVar2);
    if (pFVar5 != (FZoneNameInfo *)0x0) {
      puVar6 = FString::operator*((FString *)(pFVar5 + 0x18));
    }
  }
  *(undefined4 *)(in_ECX + 0x7f9d0) = uVar1;
  ExceptionList = local_10;
  return puVar6;
}


// ==== 1047982b Catch@1047982b

void Catch_1047982b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1047983f Catch@1047983f

void Catch_1047983f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetZoneName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10479890 FUN_10479890

undefined4 FUN_10479890(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FZoneNameInfo *pFVar5;
  FL2GameData *in_ECX;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10814510;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0x7f9d0);
  uVar6 = 0xffffffff;
  if (*(int *)GIsEditor_exref == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_107a6660();
    iVar3 = FUN_107a6660();
    iVar4 = FUN_107a6660();
    pFVar5 = FL2GameData::processGetZoneNameInfo(in_ECX,iVar4,iVar3,iVar2);
    if (pFVar5 != (FZoneNameInfo *)0x0) {
      uVar6 = thunk_FUN_10422640(pFVar5);
    }
  }
  *(undefined4 *)(in_ECX + 0x7f9d0) = uVar1;
  ExceptionList = local_10;
  return uVar6;
}


// ==== 10479924 Catch@10479924

void Catch_10479924(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10479938 Catch@10479938

void Catch_10479938(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2GameData::GetZoneID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10479990 FUN_10479990

void FUN_10479990(int param_1)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  FString *pFVar4;
  FOutputDevice *in_ECX;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uVar7;
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  undefined1 local_48 [4];
  int local_44;
  FString local_3c [12];
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1081455e;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff7c;
  iVar5 = 0;
  local_8 = 0;
  if ((-1 < param_1) && (in_ECX = (FOutputDevice *)0x0, DAT_10b40588 != 0)) {
    local_14 = &stack0xffffff7c;
    piVar2 = (int *)thunk_FUN_10458d10(&param_1);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      FString::FString(local_3c);
      local_8._0_1_ = 1;
      local_18 = *(int *)*piVar2;
      for (; local_1c = iVar5, iVar5 < local_18; iVar5 = iVar5 + 1) {
        puVar3 = L2FName::operator*((L2FName *)(*piVar2 + 4 + iVar5 * 4));
        pFVar4 = (FString *)FString::FString(local_54,puVar3);
        local_8._0_1_ = 2;
        FString::operator=(local_3c,pFVar4);
        local_8._0_1_ = 1;
        FString::~FString(local_54);
        FString::FString(local_78,(ushort *)L".ogg");
        local_8._0_1_ = 3;
        pFVar4 = (FString *)FString::FString(local_6c,(ushort *)L"..\\Music\\");
        local_8._0_1_ = 4;
        pFVar4 = (FString *)FString::operator+(pFVar4,local_60);
        local_8._0_1_ = 5;
        FString::operator+(pFVar4,local_30);
        local_8._0_1_ = 7;
        FString::~FString(local_60);
        local_8._0_1_ = 8;
        FString::~FString(local_6c);
        local_8._0_1_ = 9;
        FString::~FString(local_78);
        iVar1 = **(int **)GFileManager_exref;
        uVar7 = 0;
        uVar6 = 1;
        puVar3 = FString::operator*(local_30);
        (**(code **)(iVar1 + 0x30))(local_48,puVar3,uVar6,uVar7);
        local_8._0_1_ = 10;
        if (local_44 == 0) {
          FOutputDevice::Logf(*(FOutputDevice **)GCheckGrpLog_exref,
                              (ushort *)*(FOutputDevice **)GCheckGrpLog_exref);
        }
        local_8._0_1_ = 9;
        thunk_FUN_1032ce30();
        local_8._0_1_ = 1;
        FString::~FString(local_30);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_3c);
    }
    *unaff_FS_OFFSET = local_10;
    return;
  }
  FOutputDevice::Logf(in_ECX,*(ushort **)GCheckGrpLog_exref);
  *unaff_FS_OFFSET = local_10;
  return;
}


