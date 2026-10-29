// ==== 101047c0 UUIScript::execRequestDuelAnswerStart

/* public: void __thiscall UUIScript::execRequestDuelAnswerStart(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestDuelAnswerStart(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1047c0  1613  ?execRequestDuelAnswerStart@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201540;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  FUN_10144670(local_1c,local_18,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101048ac Catch@101048ac

void Catch_101048ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101048c0 Catch@101048c0

void Catch_101048c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestDuelAnswerStart");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101048e0 UUIScript::execRequestDuelSurrender

/* public: void __thiscall UUIScript::execRequestDuelSurrender(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestDuelSurrender(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1048e0  1615  ?execRequestDuelSurrender@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10144710();
  ExceptionList = local_10;
  return;
}


// ==== 10104960 Catch@10104960

void Catch_10104960(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10104974 Catch@10104974

void Catch_10104974(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestDuelSurrender");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101049a0 UUIScript::execToggleMsnWindow

/* public: void __thiscall UUIScript::execToggleMsnWindow(struct FFrame &,void * const) */

void __thiscall UUIScript::execToggleMsnWindow(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1049a0  1869  ?execToggleMsnWindow@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1013c9e0();
  ExceptionList = local_10;
  return;
}


// ==== 10104a25 Catch@10104a25

void Catch_10104a25(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10104a39 Catch@10104a39

void Catch_10104a39(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execToggleMsnWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104a60 UUIScript::execGetChatPrefix

/* public: void __thiscall UUIScript::execGetChatPrefix(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetChatPrefix(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x104a60  1165  ?execGetChatPrefix@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102015a9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 1;
  if (local_18 < 0x13) {
    FString::operator=(local_2c,(ushort *)(&PTR_DAT_10350b68)[local_18 * 2]);
  }
  FString::operator=(param_2,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10104b37 Catch@10104b37

void Catch_10104b37(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10104b4b Catch@10104b4b

void Catch_10104b4b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetChatPrefix");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104b70 UUIScript::execIsSameChatPrefix

/* public: void __thiscall UUIScript::execIsSameChatPrefix(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsSameChatPrefix(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [20];
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x104b70  1500  ?execIsSameChatPrefix@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102015e2;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
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
  uVar3 = 0;
  local_1c = 0;
  FString::FString(local_30);
  local_8._0_1_ = 2;
  if (local_18 < 0x13) {
    FString::operator=(local_30,(ushort *)(&PTR_DAT_10350b68)[local_18 * 2]);
    iVar2 = FString::operator==(local_30,local_3c);
    if (iVar2 == 0) {
      FString::operator=(local_30,(ushort *)(&PTR_DAT_10350b6c)[local_18 * 2]);
      iVar2 = FString::operator==(local_30,local_3c);
      if (iVar2 == 0) goto LAB_10104c7c;
    }
    uVar3 = 1;
    local_1c = 1;
  }
LAB_10104c7c:
  *(undefined4 *)param_2 = uVar3;
  local_8._0_1_ = 1;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 10104cb5 Catch@10104cb5

void Catch_10104cb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10104cc9 Catch@10104cc9

void Catch_10104cc9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsSameChatPrefix");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104cf0 UUIScript::execGetClickLocation

/* public: void __thiscall UUIScript::execGetClickLocation(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetClickLocation(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x104cf0  1175  ?execGetClickLocation@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = *(int *)(DAT_103663bc + 0x50);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x228);
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar1 + 0x22c);
  *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(iVar1 + 0x230);
  ExceptionList = local_10;
  return;
}


// ==== 10104d85 Catch@10104d85

void Catch_10104d85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10104d99 Catch@10104d99

void Catch_10104d99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetClickLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104dc0 UUIScript::execRequestLoadAllItem

/* public: void __thiscall UUIScript::execRequestLoadAllItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestLoadAllItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x104dc0  1637  ?execRequestLoadAllItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201620;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1016e410();
  ExceptionList = local_10;
  return;
}


// ==== 10104e40 Catch@10104e40

void Catch_10104e40(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10104e54 Catch@10104e54

void Catch_10104e54(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestLoadAllItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104e80 UUIScript::execGetSlotTypeString

/* public: void __thiscall UUIScript::execGetSlotTypeString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetSlotTypeString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x104e80  1393  ?execGetSlotTypeString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201640;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  FUN_10145ba0(local_1c,local_18,param_2,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10104f70 Catch@10104f70

void Catch_10104f70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10104f84 Catch@10104f84

void Catch_10104f84(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetSlotTypeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10104fb0 UUIScript::execGetWeaponTypeString

/* public: void __thiscall UUIScript::execGetWeaponTypeString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetWeaponTypeString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x104fb0  1439  ?execGetWeaponTypeString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201660;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_10145ab0(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10105063 Catch@10105063

void Catch_10105063(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10105077 Catch@10105077

void Catch_10105077(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetWeaponTypeString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101050a0 UUIScript::execGetPhysicalDamage

/* public: void __thiscall UUIScript::execGetPhysicalDamage(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPhysicalDamage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_3c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1050a0  1307  ?execGetPhysicalDamage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201680;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  local_20 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_1014e1f0(local_24,local_20,local_1c,local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 101051db Catch@101051db

void Catch_101051db(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101051ef Catch@101051ef

void Catch_101051ef(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPhysicalDamage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105210 UUIScript::execGetMagicalDamage

/* public: void __thiscall UUIScript::execGetMagicalDamage(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetMagicalDamage(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_3c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x105210  1249  ?execGetMagicalDamage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102016a0;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  local_20 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_1014e290(local_24,local_20,local_1c,local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 1010534b Catch@1010534b

void Catch_1010534b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1010535f Catch@1010535f

void Catch_1010535f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetMagicalDamage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105380 UUIScript::execGetAttackSpeedString

/* public: void __thiscall UUIScript::execGetAttackSpeedString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetAttackSpeedString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x105380  1161  ?execGetAttackSpeedString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102016c0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)FUN_10145ed0(local_18);
  FString::operator=(param_2,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10105433 Catch@10105433

void Catch_10105433(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10105447 Catch@10105447

void Catch_10105447(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetAttackSpeedString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105470 UUIScript::execGetShieldDefense

/* public: void __thiscall UUIScript::execGetShieldDefense(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetShieldDefense(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x105470  1391  ?execGetShieldDefense@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102016e0;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_1014e330(local_1c,local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10105561 Catch@10105561

void Catch_10105561(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10105575 Catch@10105575

void Catch_10105575(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetShieldDefense");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101055a0 UUIScript::execGetPhysicalDefense

/* public: void __thiscall UUIScript::execGetPhysicalDefense(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPhysicalDefense(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1055a0  1308  ?execGetPhysicalDefense@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201700;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_1014e330(local_1c,local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 10105691 Catch@10105691

void Catch_10105691(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101056a5 Catch@101056a5

void Catch_101056a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPhysicalDefense");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101056d0 UUIScript::execGetMagicalDefense

/* public: void __thiscall UUIScript::execGetMagicalDefense(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetMagicalDefense(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_34;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1056d0  1250  ?execGetMagicalDefense@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201720;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = FUN_1014e330(local_1c,local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 101057c1 Catch@101057c1

void Catch_101057c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101057d5 Catch@101057d5

void Catch_101057d5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetMagicalDefense");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105800 UUIScript::execIsMagicalArmor

/* public: void __thiscall UUIScript::execIsMagicalArmor(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsMagicalArmor(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x105800  1489  ?execIsMagicalArmor@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201740;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_10164d80(local_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 101058ae Catch@101058ae

void Catch_101058ae(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101058c2 Catch@101058c2

void Catch_101058c2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execIsMagicalArmor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101058e0 UUIScript::execGetRaceTicketString

/* public: void __thiscall UUIScript::execGetRaceTicketString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetRaceTicketString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  code *pcVar4;
  uint uStack_234;
  uint local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  undefined4 local_20c;
  ushort local_208 [256];
  uint local_8;
  
                    /* 0x1058e0  1325  ?execGetRaceTicketString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_210 = &LAB_10201760;
  local_214 = ExceptionList;
  uStack_234 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_234;
  ExceptionList = &local_214;
  local_20c = 0;
  local_21c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_234;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_21c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appMemset(local_208,0,0x100);
  uVar2 = (int)local_21c >> 4 & 0xfff;
  pcVar4 = appStrcat_exref;
  if ((local_21c & 0xf) != 0) {
    puVar3 = appItoa(local_21c & 0xf);
    pcVar4 = appStrcat_exref;
    appStrcat(local_208,puVar3);
  }
  if (uVar2 != 0) {
    (*pcVar4)(local_208,&DAT_10246d48);
    puVar3 = appItoa(uVar2);
    (*pcVar4)(local_208,puVar3);
  }
  FString::operator=(param_2,local_208);
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 10105a14 Catch@10105a14

void Catch_10105a14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10105a28 Catch@10105a28

void Catch_10105a28(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetRaceTicketString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105a50 FUN_10105a50

void FUN_10105a50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10201799;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10105aa0 UUIScript::execRequestAddTradeItem

/* public: void __thiscall UUIScript::execRequestAddTradeItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestAddTradeItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FFrame **ppFVar4;
  undefined4 *puVar5;
  undefined4 auStack_b8 [12];
  undefined4 uStack_88;
  FFrame *pFStack_84;
  undefined4 uStack_80;
  FFrame *pFStack_7c;
  FFrame **ppFStack_78;
  FFrame *pFStack_74;
  undefined4 *puStack_70;
  uint uStack_6c;
  FFrame *local_5c [17];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x105aa0  1565  ?execRequestAddTradeItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102017c0;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_70 = &local_18;
  pFStack_74 = param_1;
  ppFStack_78 = (FFrame **)0x10105af4;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  ppFStack_78 = &param_1;
  pFStack_7c = pFVar2;
  uStack_80 = 0x10105b15;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    uStack_80 = 0;
    pFStack_84 = pFVar2;
    uStack_88 = 0x10105b39;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_80 = 0x10105b41;
  FUN_1000eea0();
  local_5c[1] = (FFrame *)local_18;
  local_5c[3] = param_1;
  ppFVar4 = local_5c;
  puVar5 = auStack_b8;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *ppFVar4;
    ppFVar4 = ppFVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_10143170();
  ExceptionList = local_10;
  return;
}


// ==== 10105b82 Catch@10105b82

void Catch_10105b82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10105b96 Catch@10105b96

void Catch_10105b96(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestAddTradeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105bc0 FUN_10105bc0

void FUN_10105bc0(byte param_1)

{
  L2ParamStack *in_ECX;
  
  L2ParamStack::~L2ParamStack(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10105bf0 UUIScript::execRequestSetCrop

/* public: void __thiscall UUIScript::execRequestSetCrop(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestSetCrop(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  L2ParamStack *pLVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_90;
  FString local_80 [12];
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [32];
  int local_30;
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
  
                    /* 0x105bf0  1682  ?execRequestSetCrop@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201832;
  local_10 = ExceptionList;
  uStack_90 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_90;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  FString::FString(local_50);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_50);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_50);
  local_8._0_1_ = 2;
  FString::FString(local_5c,(ushort *)L"ManorID");
  local_8._0_1_ = 3;
  FUN_100404d0(local_5c,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_5c);
  FString::FString(local_5c,(ushort *)L"CropCnt");
  local_8._0_1_ = 4;
  FUN_100404d0(local_5c,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_5c);
  pLVar2 = (L2ParamStack *)FUN_10004ed0(0x10);
  local_8._0_1_ = 5;
  if (pLVar2 == (L2ParamStack *)0x0) {
    pLVar2 = (L2ParamStack *)0x0;
  }
  else {
    pLVar2 = (L2ParamStack *)L2ParamStack::L2ParamStack(pLVar2,0x400);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  L2ParamStack::PushBack(pLVar2,local_1c);
  L2ParamStack::PushBack(pLVar2,local_18);
  for (; local_30 = iVar4, iVar4 < (int)local_18; iVar4 = iVar4 + 1) {
    uVar3 = FString::Printf((ushort *)local_5c,L"CropID%d",iVar4);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 2;
    FString::~FString(local_5c);
    uVar3 = FString::Printf((ushort *)local_68,L"BuyCnt%d",iVar4);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8._0_1_ = 2;
    FString::~FString(local_68);
    uVar3 = FString::Printf((ushort *)local_74,L"Price%d",iVar4);
    local_8._0_1_ = 8;
    FUN_100404d0(uVar3,&local_28);
    local_8._0_1_ = 2;
    FString::~FString(local_74);
    uVar3 = FString::Printf((ushort *)local_80,L"ProcureType%d",iVar4);
    local_8._0_1_ = 9;
    FUN_100404d0(uVar3,&local_2c);
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_80);
    L2ParamStack::PushBack(pLVar2,local_20);
    L2ParamStack::PushBack(pLVar2,local_24);
    L2ParamStack::PushBack(pLVar2,local_28);
    L2ParamStack::PushBack(pLVar2,local_2c);
  }
  FUN_10149870(pLVar2);
  if (pLVar2 != (L2ParamStack *)0x0) {
    FUN_10105bc0(1);
  }
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_50);
  ExceptionList = local_10;
  return;
}


// ==== 10105e67 Catch@10105e67

void Catch_10105e67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 10105e7b Catch@10105e7b

void Catch_10105e7b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestSetCrop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10105ea0 UUIScript::execUseSkill

/* public: void __thiscall UUIScript::execUseSkill(struct FFrame &,void * const) */

void __thiscall UUIScript::execUseSkill(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FL2MagicSkillData *pFVar2;
  APawn *this_00;
  void *pvVar3;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x105ea0  1871  ?execUseSkill@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201859;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  pFVar2 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,(int)local_18,1);
  if (pFVar2 != (FL2MagicSkillData *)0x0) {
    if (*(int *)(pFVar2 + 0x30) == 0xc) {
      this_00 = (APawn *)FUN_1014ddb0();
      if (*(int *)(this_00 + 0x62c) != 5) {
        (**(code **)(**(int **)(this_00 + 0x14d8) + 800))();
        APawn::NActionStop(this_00);
        *(undefined4 *)(this_00 + 0x62c) = 6;
        *(void **)(this_00 + 0x648) = local_18;
      }
    }
    else {
      L2ParamStack::L2ParamStack(local_30,10);
      local_8._0_1_ = 1;
      L2ParamStack::PushBack(local_30,local_18);
      pvVar3 = (void *)(**(code **)(*DAT_103663bc + 0x590))();
      L2ParamStack::PushBack(local_30,pvVar3);
      bVar1 = UInput::KeyDown(*(UInput **)
                               (**(int **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38) + 0x78),0x10)
      ;
      L2ParamStack::PushBack(local_30,(void *)(uint)bVar1);
      FUN_10143b50(local_30);
      local_8 = (uint)local_8._1_3_ << 8;
      L2ParamStack::~L2ParamStack(local_30);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1010600d Catch@1010600d

void Catch_1010600d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10106021 Catch@10106021

void Catch_10106021(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execUseSkill");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106040 UUIScript::execGetSystemMsgInfo

/* public: void __thiscall UUIScript::execGetSystemMsgInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetSystemMsgInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  ushort *puVar3;
  FSystemMsgData *this_00;
  uint uStack_84;
  FSystemMsgData local_74 [92];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x106040  1404  ?execGetSystemMsgInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201888;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FSystemMsgData::FSystemMsgData(local_74);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_74);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_74;
  }
  else {
    this_00 = *(FSystemMsgData **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x240ec));
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x3c),puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x2412c));
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x48),puVar3);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(GL2GameData_exref + local_18 * 0x5c + 0x24118);
  *(undefined4 *)(this_00 + 0x34) = *(undefined4 *)(GL2GameData_exref + local_18 * 0x5c + 0x24124);
  *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(GL2GameData_exref + (local_18 + 0x646) * 0x5c);
  FColor::FColor((FColor *)&param_1,*(ulong *)(GL2GameData_exref + local_18 * 0x5c + 0x240fc));
  *(FFrame **)(this_00 + 0xc) = param_1;
  *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(GL2GameData_exref + local_18 * 0x5c + 0x24120);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x24100));
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x10),puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x2410c));
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x1c),puVar3);
  puVar3 = FString::operator*((FString *)(GL2GameData_exref + local_18 * 0x5c + 0x24138));
  FStringNoInit::operator=((FStringNoInit *)this_00,puVar3);
  local_8 = local_8 & 0xffffff00;
  FSystemMsgData::~FSystemMsgData(local_74);
  ExceptionList = local_10;
  return;
}


// ==== 10106264 Catch@10106264

void Catch_10106264(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10106278 Catch@10106278

void Catch_10106278(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetSystemMsgInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101062a0 UUIScript::execGetServerNo

/* public: void __thiscall UUIScript::execGetServerNo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetServerNo(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1062a0  1380  ?execGetServerNo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102018b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = *(undefined4 *)(DAT_103663bc + 0x5124);
  ExceptionList = local_10;
  return;
}


// ==== 10106325 Catch@10106325

void Catch_10106325(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10106339 Catch@10106339

void Catch_10106339(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetServerNo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106360 UUIScript::execGetServerType

/* public: void __thiscall UUIScript::execGetServerType(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetServerType(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x106360  1385  ?execGetServerType@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102018d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = *(undefined4 *)(DAT_103663bc + 0x5128);
  ExceptionList = local_10;
  return;
}


// ==== 101063e5 Catch@101063e5

void Catch_101063e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101063f9 Catch@101063f9

void Catch_101063f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetServerType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106420 UUIScript::execSetResolution

/* public: void __thiscall UUIScript::execSetResolution(struct FFrame &,void * const) */

void __thiscall UUIScript::execSetResolution(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  wchar_t *pwVar9;
  uint uStack_688;
  int local_678 [100];
  int local_4e8 [100];
  int local_358 [100];
  int local_1c8 [103];
  undefined4 *local_2c;
  int local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x106420  1787  ?execSetResolution@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102018f0;
  local_10 = ExceptionList;
  uStack_688 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_688;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  local_1c = (**(code **)(*(int *)**(undefined4 **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38) +
                         0x7c))();
  iVar7 = local_18;
  iVar4 = (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0x78))
                    (100,local_4e8,local_1c8,local_358);
  if ((-1 < iVar7) && (iVar7 < iVar4)) {
    iVar4 = local_4e8[iVar7];
    iVar6 = local_1c8[iVar7];
    local_28 = iVar6;
    iVar7 = local_358[iVar7];
    iVar5 = (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0x7c))
                      (100,iVar4,iVar6,iVar7,local_678);
    iVar3 = local_28;
    if ((-1 < (int)param_1) && ((int)param_1 < iVar5)) {
      local_20 = local_678[(int)param_1];
      if ((((*(int *)GSEKScreenX_exref != iVar4) || (*(int *)GSEKScreenY_exref != iVar6)) ||
          (*(int *)GColorBits_exref != iVar7)) || (*(int *)GRefreshRate_exref != local_20)) {
        local_2c = *(undefined4 **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38);
        iVar6 = (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0x70))
                          (*local_2c,iVar4,local_28,(int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                           local_20,local_1c,1);
        if (iVar6 == 0) {
          iVar7 = (**(code **)(**(int **)(DAT_103663bc[0x14] + 0x5c) + 0x70))
                            (**(undefined4 **)(*(int *)(DAT_103663bc[0x14] + 0x54) + 0x38),0x400,
                             0x300,4,0x3c,local_1c,1);
          if (iVar7 != 0) {
            *(undefined4 *)GColorBits_exref = 0x20;
            *(undefined4 *)GRefreshRate_exref = 0x3c;
          }
        }
        else {
          *(int *)GColorBits_exref = iVar7;
          *(int *)GRefreshRate_exref = local_20;
        }
        (**(code **)(*DAT_103663bc + 0x510))(iVar4,iVar3);
      }
      iVar7 = **(int **)GConfig_exref;
      pwVar9 = L"Option.ini";
      puVar8 = appItoa(*(int *)GSEKScreenX_exref);
      (**(code **)(iVar7 + 0x30))(L"Video",L"GamePlayViewportX",puVar8,pwVar9);
      iVar7 = **(int **)GConfig_exref;
      pwVar9 = L"Option.ini";
      puVar8 = appItoa(*(int *)GSEKScreenY_exref);
      (**(code **)(iVar7 + 0x30))(L"Video",L"GamePlayViewportY",puVar8,pwVar9);
      iVar7 = **(int **)GConfig_exref;
      pwVar9 = L"Option.ini";
      puVar8 = appItoa(*(int *)GColorBits_exref);
      (**(code **)(iVar7 + 0x30))(L"Video",L"ColorBits",puVar8,pwVar9);
      iVar7 = **(int **)GConfig_exref;
      pwVar9 = L"Option.ini";
      puVar8 = appItoa(*(int *)GRefreshRate_exref);
      (**(code **)(iVar7 + 0x30))(L"Video",L"RefreshRate",puVar8,pwVar9);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10106732 Catch@10106732

void Catch_10106732(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10106746 Catch@10106746

void Catch_10106746(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetResolution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106770 UUIEventManager::execParamAdd

/* public: void __thiscall UUIEventManager::execParamAdd(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execParamAdd(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *this_00;
  uint uStack_5c;
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x106770  1538  ?execParamAdd@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201933;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_4c;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_40);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(this_00);
  local_8._0_1_ = 4;
  FUN_10040230(local_40,local_34);
  FString::operator=(this_00,local_28);
  local_8._0_1_ = 3;
  FUN_1003fff0();
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 101068fc Catch@101068fc

void Catch_101068fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10106910 Catch@10106910

void Catch_10106910(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execParamAdd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106930 UUIEventManager::execParamAddInt64

/* public: void __thiscall UUIEventManager::execParamAddInt64(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execParamAddInt64(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *this_00;
  undefined1 *puVar2;
  uint uStack_58;
  FString local_48 [12];
  FString local_3c [12];
  FString local_30 [12];
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x106930  1539  ?execParamAddInt64@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020196a;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_48);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_48;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar2 = local_24;
  }
  else {
    puVar2 = *(undefined1 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(this_00);
  local_8._0_1_ = 3;
  FUN_10040320(local_3c,puVar2);
  FString::operator=(this_00,local_30);
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_48);
  ExceptionList = local_10;
  return;
}


// ==== 10106ad9 Catch@10106ad9

void Catch_10106ad9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10106aed Catch@10106aed

void Catch_10106aed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execParamAddInt64");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106b10 UUIScript::execGetPlayerInfo

/* public: void __thiscall UUIScript::execGetPlayerInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPlayerInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  User *pUVar2;
  FUserInfo *pFVar3;
  uint uStack_110;
  FUserInfo local_100 [232];
  UUIScript *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x106b10  1312  ?execGetPlayerInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020199b;
  local_10 = ExceptionList;
  uStack_110 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_110;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  FUserInfo::FUserInfo(local_100);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_100);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_100;
  }
  else {
    pFVar3 = *(FUserInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pUVar2 = (User *)FUN_1014dd00();
  if (pUVar2 == (User *)0x0) {
    pUVar2 = (User *)FUN_101412f0();
    if (pUVar2 == (User *)0x0) {
      *(undefined4 *)param_2 = 0;
      local_8 = local_8 & 0xffffff00;
      FUserInfo::~FUserInfo(local_100);
      ExceptionList = local_10;
      return;
    }
    User2FUserInfo(local_18,pUVar2,pFVar3);
    *(undefined4 *)param_2 = 1;
  }
  else {
    User2FUserInfo(local_18,pUVar2,pFVar3);
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FUserInfo::~FUserInfo(local_100);
  ExceptionList = local_10;
  return;
}


// ==== 10106c6a Catch@10106c6a

void Catch_10106c6a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10106c7e Catch@10106c7e

void Catch_10106c7e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPlayerInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106ca0 UUIScript::execGetTargetInfo

/* public: void __thiscall UUIScript::execGetTargetInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetTargetInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  User *pUVar2;
  FUserInfo *pFVar3;
  uint uStack_110;
  FUserInfo local_100 [228];
  UUIScript *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x106ca0  1409  ?execGetTargetInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102019cb;
  local_10 = ExceptionList;
  uStack_110 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_110;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  FUserInfo::FUserInfo(local_100);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_100);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_100;
  }
  else {
    pFVar3 = *(FUserInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pUVar2 = (User *)FUN_1014ddd0();
  if (pUVar2 == (User *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    User2FUserInfo(local_1c,pUVar2,pFVar3);
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FUserInfo::~FUserInfo(local_100);
  ExceptionList = local_10;
  return;
}


// ==== 10106dc2 Catch@10106dc2

void Catch_10106dc2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10106dd6 Catch@10106dd6

void Catch_10106dd6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetTargetInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106e00 UUIScript::execGetUserInfo

/* public: void __thiscall UUIScript::execGetUserInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetUserInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  User *pUVar2;
  FUserInfo *pFVar3;
  uint uStack_114;
  FUserInfo local_104 [228];
  UUIScript *local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x106e00  1434  ?execGetUserInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102019fb;
  local_10 = ExceptionList;
  uStack_114 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_114;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FUserInfo::FUserInfo(local_104);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_104);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_104;
  }
  else {
    pFVar3 = *(FUserInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pUVar2 = (User *)FUN_10145910(local_18);
  if (pUVar2 == (User *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    User2FUserInfo(local_20,pUVar2,pFVar3);
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FUserInfo::~FUserInfo(local_104);
  ExceptionList = local_10;
  return;
}


// ==== 10106f3b Catch@10106f3b

void Catch_10106f3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10106f4f Catch@10106f4f

void Catch_10106f4f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10106f70 UUIScript::execGetPetInfo

/* public: void __thiscall UUIScript::execGetPetInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPetInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FPetInfo *pFVar2;
  uint uStack_17c;
  FPetInfo local_16c [136];
  UUIScript *local_e4;
  undefined4 *local_dc;
  undefined1 *local_d8;
  void *local_d4;
  undefined1 *puStack_d0;
  uint local_cc;
  PetInfo local_c8 [4];
  int local_c4;
  uint local_8;
  
                    /* 0x106f70  1297  ?execGetPetInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_d0 = &LAB_10201a2b;
  local_d4 = ExceptionList;
  uStack_17c = DAT_103554c4 ^ (uint)local_c8;
  local_d8 = (undefined1 *)&uStack_17c;
  ExceptionList = &local_d4;
  local_dc = param_2;
  local_cc = 0;
  local_e4 = this;
  local_8 = uStack_17c;
  FPetInfo::FPetInfo(local_16c);
  local_cc = CONCAT31(local_cc._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_16c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar2 = local_16c;
  }
  else {
    pFVar2 = *(FPetInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101458e0(local_c8);
  if (local_c4 < 1) {
    *local_dc = 0;
  }
  else {
    Pet2FPetInfo(local_e4,local_c8,pFVar2);
    *local_dc = 1;
  }
  local_cc = local_cc & 0xffffff00;
  FPetInfo::~FPetInfo(local_16c);
  local_cc = 0xffffffff;
  ExceptionList = local_d4;
  __security_check_cookie(local_8 ^ (uint)local_c8);
  return;
}


// ==== 101070cc Catch@101070cc

void Catch_101070cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101070e0 Catch@101070e0

void Catch_101070e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPetInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107100 UUIScript::execGetSkillInfo

/* public: void __thiscall UUIScript::execGetSkillInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetSkillInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FL2MagicSkillData *pFVar3;
  FSkillInfo *pFVar4;
  uint uStack_c8;
  FSkillInfo local_b8 [152];
  UUIScript *local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x107100  1392  ?execGetSkillInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201a6b;
  local_10 = ExceptionList;
  uStack_c8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c8;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FSkillInfo::FSkillInfo(local_b8);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_b8);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar4 = local_b8;
  }
  else {
    pFVar4 = *(FSkillInfo **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  pFVar3 = FL2GameData::GetMSData((FL2GameData *)GL2GameData_exref,local_18,(int)param_1);
  if (pFVar3 == (FL2MagicSkillData *)0x0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    MagicSkillData2FSkillInfo(local_20,pFVar3,pFVar4);
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FSkillInfo::~FSkillInfo(local_b8);
  ExceptionList = local_10;
  return;
}


// ==== 10107261 Catch@10107261

void Catch_10107261(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10107275 Catch@10107275

void Catch_10107275(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetSkillInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101072a0 UUIScript::execGetPartyMemberCount

/* public: void __thiscall UUIScript::execGetPartyMemberCount(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPartyMemberCount(UUIScript *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1072a0  1286  ?execGetPartyMemberCount@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201a90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0xd4))(&param_1);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 4);
  ExceptionList = local_10;
  return;
}


// ==== 10107339 Catch@10107339

void Catch_10107339(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010734d Catch@1010734d

void Catch_1010734d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPartyMemberCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107370 UUIScript::execRequestClanLeave

/* public: void __thiscall UUIScript::execRequestClanLeave(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanLeave(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  User *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_f4;
  undefined4 local_e4 [3];
  undefined4 local_d8;
  undefined4 local_d4;
  FString local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x107370  1589  ?execRequestClanLeave@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201ac4;
  local_10 = ExceptionList;
  uStack_f4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f4;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (User *)FUN_1014dd00();
  if (this_00 != (User *)0x0) {
    iVar2 = User::IsPledgeMaster(this_00);
    if (iVar2 == 0) {
      FUN_1000ef40();
      local_8._0_1_ = 2;
      local_e4[0] = 0x1a;
      local_d8 = 1;
      local_d4 = 0;
      if (local_18 == -1) {
        uVar4 = 0x754;
      }
      else {
        uVar4 = 0x44;
      }
      FUN_1000dd30(uVar4);
      uVar5 = 0;
      uVar4 = 0;
      puVar3 = FString::operator*(local_28);
      FUN_1000dcb0(puVar3,uVar4,uVar5);
      FUN_1016e1b0(local_e4);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_1000e440();
      goto LAB_101074c6;
    }
  }
  FUN_10170650(0xef,0xffb09b79);
LAB_101074c6:
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101074ed Catch@101074ed

void Catch_101074ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10107501 Catch@10107501

void Catch_10107501(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanLeave");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107520 UUIScript::execRequestClanExpelMember

/* public: void __thiscall UUIScript::execRequestClanExpelMember(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanExpelMember(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_f4;
  undefined4 local_e4 [3];
  undefined4 local_d8;
  undefined4 local_d4;
  FString local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x107520  1587  ?execRequestClanExpelMember@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201b04;
  local_10 = ExceptionList;
  uStack_f4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_f4;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1000ef40();
  local_8._0_1_ = 2;
  local_e4[0] = 0x18;
  local_d8 = 1;
  local_d4 = 0;
  if (local_18 == -1) {
    uVar3 = 0x74f;
  }
  else {
    uVar3 = 0x45;
  }
  FUN_1000dd30(uVar3);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = FString::operator*(local_28);
  FUN_1000dcb0(puVar2,uVar3,uVar4);
  puVar2 = FString::operator*(local_28);
  FUN_1000de70(puVar2);
  FUN_1016e1b0(local_e4);
  local_8._0_1_ = 1;
  FUN_1000e440();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010767a Catch@1010767a

void Catch_1010767a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010768e Catch@1010768e

void Catch_1010768e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanExpelMember");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101076b0 UUIScript::execRequestClanDeclareWar

/* public: void __thiscall UUIScript::execRequestClanDeclareWar(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanDeclareWar(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1076b0  1583  ?execRequestClanDeclareWar@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201b3b;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1000ef40();
  local_8._0_1_ = 1;
  local_d4 = 0x12;
  local_c8 = 1;
  local_c4 = 1;
  local_d0 = 0;
  FUN_1000dd30(0x5fb);
  FUN_1016e1b0(&local_d4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 10107783 Catch@10107783

void Catch_10107783(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10107797 Catch@10107797

void Catch_10107797(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanDeclareWar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101077c0 UUIScript::execRequestClanWithdrawWar

/* public: void __thiscall UUIScript::execRequestClanWithdrawWar(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestClanWithdrawWar(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1077c0  1598  ?execRequestClanWithdrawWar@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201b6b;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1000ef40();
  local_8._0_1_ = 1;
  local_d4 = 0x14;
  local_c8 = 1;
  local_c4 = 1;
  local_d0 = 0;
  FUN_1000dd30(0x5fc);
  FUN_1016e1b0(&local_d4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 10107893 Catch@10107893

void Catch_10107893(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101078a7 Catch@101078a7

void Catch_101078a7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanWithdrawWar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101078d0 UUIScript::execRequestClanRegisterCrest

/* public: void __thiscall UUIScript::execRequestClanRegisterCrest(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestClanRegisterCrest(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1078d0  1592  ?execRequestClanRegisterCrest@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201b9b;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1000ef40();
  local_8._0_1_ = 1;
  local_d4 = 0x11;
  local_c8 = 1;
  local_c4 = 1;
  local_d0 = 0;
  FUN_1000dd30(0xd0);
  FUN_1016e1b0(&local_d4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 101079a3 Catch@101079a3

void Catch_101079a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101079b7 Catch@101079b7

void Catch_101079b7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanRegisterCrest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101079e0 UUIScript::execRequestClanUnregisterCrest

/* public: void __thiscall UUIScript::execRequestClanUnregisterCrest(struct FFrame &,void * const)
    */

void __thiscall
UUIScript::execRequestClanUnregisterCrest(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_e4;
  undefined4 local_d4 [3];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1079e0  1595
                       ?execRequestClanUnregisterCrest@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201bcb;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1000ef40();
  local_8._0_1_ = 1;
  local_d4[0] = 0x49;
  local_c8 = 1;
  local_c4 = 0;
  FUN_1000dd30(0x49e);
  FUN_1016e1b0(local_d4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 10107aad Catch@10107aad

void Catch_10107aad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10107ac1 Catch@10107ac1

void Catch_10107ac1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanUnregisterCrest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107ae0 UUIScript::execRequestClanRegisterEmblem

/* public: void __thiscall UUIScript::execRequestClanRegisterEmblem(struct FFrame &,void * const) */

void __thiscall
UUIScript::execRequestClanRegisterEmblem(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x107ae0  1593
                       ?execRequestClanRegisterEmblem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201bfb;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1000ef40();
  local_8._0_1_ = 1;
  local_d4 = 0x54;
  local_c8 = 1;
  local_c4 = 1;
  local_d0 = 0;
  FUN_1000dd30(0xd0);
  FUN_1016e1b0(&local_d4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 10107bb3 Catch@10107bb3

void Catch_10107bb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10107bc7 Catch@10107bc7

void Catch_10107bc7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanRegisterEmblem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107bf0 UUIScript::execRequestClanUnregisterEmblem

/* public: void __thiscall UUIScript::execRequestClanUnregisterEmblem(struct FFrame &,void * const)
    */

void __thiscall
UUIScript::execRequestClanUnregisterEmblem(UUIScript *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_e4;
  undefined4 local_d4 [3];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x107bf0  1596
                       ?execRequestClanUnregisterEmblem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201c2b;
  local_10 = ExceptionList;
  uStack_e4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_e4;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_e4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  FUN_1000ef40();
  local_8._0_1_ = 1;
  local_d4[0] = 0x55;
  local_c8 = 1;
  local_c4 = 0;
  FUN_1000dd30(0x49e);
  FUN_1016e1b0(local_d4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e440();
  ExceptionList = local_10;
  return;
}


// ==== 10107cbd Catch@10107cbd

void Catch_10107cbd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10107cd1 Catch@10107cd1

void Catch_10107cd1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanUnregisterEmblem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107cf0 UUIScript::execRequestProcureCropList

/* public: void __thiscall UUIScript::execRequestProcureCropList(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestProcureCropList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  L2ParamStack *pLVar2;
  FString *pFVar3;
  int iVar4;
  uint uStack_8c;
  FString local_7c [12];
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [24];
  FString local_34 [20];
  int local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x107cf0  1660  ?execRequestProcureCropList@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10201ca2;
  local_10 = ExceptionList;
  uStack_8c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_8c;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pLVar2 = (L2ParamStack *)FUN_10004ed0(0x10);
  local_8._0_1_ = 2;
  if (pLVar2 == (L2ParamStack *)0x0) {
    pLVar2 = (L2ParamStack *)0x0;
  }
  else {
    pLVar2 = (L2ParamStack *)L2ParamStack::L2ParamStack(pLVar2,0x400);
  }
  local_8._0_1_ = 1;
  FUN_1003fa00(local_4c);
  local_8._0_1_ = 3;
  FString::FString(local_58,(ushort *)L"CropCnt");
  local_8._0_1_ = 4;
  FUN_100404d0(local_58,&local_1c);
  local_8._0_1_ = 3;
  FString::~FString(local_58);
  L2ParamStack::PushBack(pLVar2,local_1c);
  FString::FString(local_34);
  local_8._0_1_ = 5;
  for (; local_20 = iVar4, iVar4 < (int)local_1c; iVar4 = iVar4 + 1) {
    pFVar3 = (FString *)FString::Printf((ushort *)local_58,L"CropServerID%d",iVar4);
    local_8._0_1_ = 6;
    FString::operator=(local_34,pFVar3);
    local_8._0_1_ = 5;
    FString::~FString(local_58);
    FUN_100404d0(local_34,&local_18);
    L2ParamStack::PushBack(pLVar2,local_18);
    pFVar3 = (FString *)FString::Printf((ushort *)local_64,L"CropID%d",iVar4);
    local_8._0_1_ = 7;
    FString::operator=(local_34,pFVar3);
    local_8._0_1_ = 5;
    FString::~FString(local_64);
    FUN_100404d0(local_34,&local_18);
    L2ParamStack::PushBack(pLVar2,local_18);
    pFVar3 = (FString *)FString::Printf((ushort *)local_70,L"ManorID%d",iVar4);
    local_8._0_1_ = 8;
    FString::operator=(local_34,pFVar3);
    local_8._0_1_ = 5;
    FString::~FString(local_70);
    FUN_100404d0(local_34,&local_18);
    L2ParamStack::PushBack(pLVar2,local_18);
    pFVar3 = (FString *)FString::Printf((ushort *)local_7c,L"SellCount%d",iVar4);
    local_8._0_1_ = 9;
    FString::operator=(local_34,pFVar3);
    local_8._0_1_ = 5;
    FString::~FString(local_7c);
    FUN_100404d0(local_34,&local_18);
    L2ParamStack::PushBack(pLVar2,local_18);
  }
  FUN_10149730(pLVar2);
  if (pLVar2 != (L2ParamStack *)0x0) {
    FUN_10105bc0(1);
  }
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 10107f7e Catch@10107f7e

void Catch_10107f7e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10107f92 Catch@10107f92

void Catch_10107f92(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestProcureCropList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10107fb0 UUIScript::execRequestDropItem

/* public: void __thiscall UUIScript::execRequestDropItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestDropItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FFrame **ppFVar4;
  undefined4 *puVar5;
  undefined4 auStack_d8 [14];
  undefined4 uStack_a0;
  ushort *puStack_9c;
  FFrame *pFStack_98;
  undefined4 uStack_94;
  FFrame *pFStack_90;
  undefined4 *puStack_8c;
  FFrame *pFStack_88;
  FFrame **ppFStack_84;
  FFrame *pFStack_80;
  undefined4 *puStack_7c;
  uint uStack_78;
  FFrame *local_68 [15];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x107fb0  1612  ?execRequestDropItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201cc0;
  local_10 = ExceptionList;
  uStack_78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_7c = &local_18;
  pFStack_80 = param_1;
  ppFStack_84 = (FFrame **)0x10108004;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  ppFStack_84 = &param_1;
  pFStack_88 = pFVar2;
  puStack_8c = (undefined4 *)0x10108025;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  puStack_8c = &local_2c;
  pFStack_90 = pFVar2;
  uStack_94 = 0x10108043;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    uStack_94 = 0;
    pFStack_98 = pFVar2;
    puStack_9c = (ushort *)0x1010806a;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_94 = 0x10108072;
  FUN_1000eea0();
  local_68[1] = (FFrame *)local_18;
  local_68[3] = param_1;
  uStack_94 = 0x10108089;
  iVar3 = FUN_1014dd00();
  if ((*(byte *)(*(int *)(iVar3 + 0x204) + 0x6ac) & 1) == 0) {
    puStack_9c = (ushort *)local_2c;
    pFStack_98 = (FFrame *)local_28;
    uStack_94 = local_24;
    ppFVar4 = local_68;
    puVar5 = auStack_d8;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *ppFVar4;
      ppFVar4 = ppFVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_1014c430();
  }
  else {
    uStack_94 = 0xffdcdcdc;
    pFStack_98 = (FFrame *)0x0;
    puStack_9c = (ushort *)0x101080af;
    puStack_9c = FString::operator*((FString *)(GL2GameData_exref + 0x28140));
    uStack_a0 = 0x101080c0;
    FUN_1013e640();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1010810d Catch@1010810d

void Catch_1010810d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10108121 Catch@10108121

void Catch_10108121(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestDropItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108140 UUIScript::execRequestDestroyItem

/* public: void __thiscall UUIScript::execRequestDestroyItem(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestDestroyItem(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  int iVar4;
  FFrame **ppFVar5;
  undefined4 *puVar6;
  undefined4 auStack_b8 [12];
  undefined4 uStack_88;
  FFrame *pFStack_84;
  undefined4 uStack_80;
  FFrame *pFStack_7c;
  FFrame **ppFStack_78;
  FFrame *pFStack_74;
  undefined4 *puStack_70;
  uint uStack_6c;
  FFrame *local_5c [17];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar3 = param_1;
                    /* 0x108140  1609  ?execRequestDestroyItem@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201ce0;
  local_10 = ExceptionList;
  uStack_6c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_6c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_70 = &local_18;
  pFStack_74 = param_1;
  ppFStack_78 = (FFrame **)0x10108194;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar3 + 0xc);
  *(byte **)(pFVar3 + 0xc) = *(byte **)(pFVar3 + 0xc) + 1;
  ppFStack_78 = &param_1;
  pFStack_7c = pFVar3;
  uStack_80 = 0x101081b5;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(pFVar3 + 0xc) = *(int *)(pFVar3 + 0xc) + 1;
  if (**(char **)(pFVar3 + 0xc) == 'B') {
    *(char **)(pFVar3 + 0xc) = *(char **)(pFVar3 + 0xc) + 1;
    uStack_80 = 0;
    pFStack_84 = pFVar3;
    uStack_88 = 0x101081d9;
    (**(code **)(GNatives_exref + 0x108))();
  }
  uStack_80 = 0x101081e1;
  FUN_1000eea0();
  local_5c[1] = (FFrame *)local_18;
  local_5c[3] = param_1;
  iVar2 = *DAT_103663bc;
  ppFVar5 = local_5c;
  puVar6 = auStack_b8;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *ppFVar5;
    ppFVar5 = ppFVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(iVar2 + 0x7cc))();
  ExceptionList = local_10;
  return;
}


// ==== 10108228 Catch@10108228

void Catch_10108228(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010823c Catch@1010823c

void Catch_1010823c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestDestroyItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108260 UUIScript::execGetQuestLocation

/* public: void __thiscall UUIScript::execGetQuestLocation(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetQuestLocation(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  uint uStack_44;
  float local_34 [4];
  float local_24;
  float local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x108260  1321  ?execGetQuestLocation@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201d00;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pfVar3 = local_34;
  }
  else {
    pfVar3 = *(float **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = *(int *)(DAT_103663bc + 0x5110);
  local_24 = *(float *)(iVar2 + 0x68);
  local_20 = *(float *)(iVar2 + 0x6c);
  if (((*(float *)(iVar2 + 100) == 0.0) && (local_24 == 0.0)) && (local_20 == 0.0)) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *pfVar3 = *(float *)(iVar2 + 100);
    pfVar3[1] = local_24;
    pfVar3[2] = local_20;
    *(undefined4 *)param_2 = 1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1010839c Catch@1010839c

void Catch_1010839c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101083b0 Catch@101083b0

void Catch_101083b0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetQuestLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101083d0 UUIScript::execGetPawnFrameCount

/* public: void __thiscall UUIScript::execGetPawnFrameCount(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPawnFrameCount(UUIScript *this,FFrame *param_1,void *param_2)

{
  APawn *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1083d0  1289  ?execGetPawnFrameCount@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201d20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = *(APawn **)
             (*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c) +
             0x3bc);
  param_1 = (FFrame *)0x0;
  if (*(int *)(this_00 + 0x134) != 0) {
    iVar1 = **(int **)(this_00 + 0x134);
    puVar2 = (undefined4 *)APawn::GetCurAnimName(this_00,(int)&param_1);
    uVar3 = (**(code **)(iVar1 + 0xb8))(*puVar2);
    fVar4 = (float10)(**(code **)(iVar1 + 200))(uVar3);
    param_1 = (FFrame *)(float)fVar4;
  }
  *(FFrame **)param_2 = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 101084a5 Catch@101084a5

void Catch_101084a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101084b9 Catch@101084b9

void Catch_101084b9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPawnFrameCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101084e0 UUIScript::execGetPawnCurrentFrame

/* public: void __thiscall UUIScript::execGetPawnCurrentFrame(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPawnCurrentFrame(UUIScript *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1084e0  1288  ?execGetPawnCurrentFrame@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(DAT_103663bc + 0x50) + 0x54) + 0x38) + 0x3c
                           ) + 0x3bc);
  param_1 = (FFrame *)0x0;
  if (*(int *)(iVar1 + 0x134) != 0) {
    param_1 = *(FFrame **)(*(int *)(*(int *)(iVar1 + 0x134) + 0x184) + 0x10);
  }
  *(FFrame **)param_2 = param_1;
  ExceptionList = local_10;
  return;
}


// ==== 10108598 Catch@10108598

void Catch_10108598(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101085ac Catch@101085ac

void Catch_101085ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPawnCurrentFrame");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101085d0 FUN_101085d0

void FUN_101085d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10201d60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[3] = 0;
  local_8 = 0;
  uVar1 = FUN_100536d0(param_2,0,*(int *)(in_ECX[1] + 4) + -1);
  in_ECX[2] = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1010864b Catch@1010864b

void Catch_1010864b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010865f Catch@1010865f

void Catch_1010865f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"TMapBase<int,struct PartyInfo *>::TIterator::TIterator");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108680 UUIScript::execRequestTest

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


// ==== 101087f6 Catch@101087f6

void Catch_101087f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010880a Catch@1010880a

void Catch_1010880a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestTest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108830 UUIScript::execRequestSetSeed

/* public: void __thiscall UUIScript::execRequestSetSeed(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestSetSeed(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  L2ParamStack *pLVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_80;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [32];
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
  
                    /* 0x108830  1683  ?execRequestSetSeed@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201e19;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  FString::FString(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_4c);
  local_8._0_1_ = 2;
  FString::FString(local_58,(ushort *)L"ManorID");
  local_8._0_1_ = 3;
  FUN_100404d0(local_58,&local_1c);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  FString::FString(local_58,(ushort *)L"SeedCnt");
  local_8._0_1_ = 4;
  FUN_100404d0(local_58,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_58);
  pLVar2 = (L2ParamStack *)FUN_10004ed0(0x10);
  local_8._0_1_ = 5;
  if (pLVar2 == (L2ParamStack *)0x0) {
    pLVar2 = (L2ParamStack *)0x0;
  }
  else {
    pLVar2 = (L2ParamStack *)L2ParamStack::L2ParamStack(pLVar2,0x400);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  L2ParamStack::PushBack(pLVar2,local_1c);
  L2ParamStack::PushBack(pLVar2,local_18);
  for (; local_2c = iVar4, iVar4 < (int)local_18; iVar4 = iVar4 + 1) {
    uVar3 = FString::Printf((ushort *)local_58,L"SeedID%d",iVar4);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8._0_1_ = 2;
    FString::~FString(local_58);
    uVar3 = FString::Printf((ushort *)local_64,L"TomorrowSalesVolume%d",iVar4);
    local_8._0_1_ = 7;
    FUN_100404d0(uVar3,&local_24);
    local_8._0_1_ = 2;
    FString::~FString(local_64);
    uVar3 = FString::Printf((ushort *)local_70,L"TomorrowPrice%d",iVar4);
    local_8._0_1_ = 8;
    FUN_100404d0(uVar3,&local_28);
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_70);
    L2ParamStack::PushBack(pLVar2,local_20);
    L2ParamStack::PushBack(pLVar2,local_24);
    L2ParamStack::PushBack(pLVar2,local_28);
  }
  FUN_101497d0(pLVar2);
  if (pLVar2 != (L2ParamStack *)0x0) {
    FUN_10105bc0(1);
  }
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 10108a6e Catch@10108a6e

void Catch_10108a6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10108a82 Catch@10108a82

void Catch_10108a82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestSetSeed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108aa0 UUIScript::execDebug

/* public: void __thiscall UUIScript::execDebug(struct FFrame &,void * const) */

void __thiscall UUIScript::execDebug(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *pFVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x108aa0  1121  ?execDebug@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201e49;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = local_28;
  FUN_10005c30(pFVar2);
  FUN_100d0350(pFVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10108b5e Catch@10108b5e

void Catch_10108b5e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10108b72 Catch@10108b72

void Catch_10108b72(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execDebug");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108b90 UUIScript::execExecuteCommand

/* public: void __thiscall UUIScript::execExecuteCommand(struct FFrame &,void * const) */

void __thiscall UUIScript::execExecuteCommand(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  FString *pFVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x108b90  1147  ?execExecuteCommand@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201e82;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar4 = local_34;
  FString::Caps(local_28);
  local_8._0_1_ = 2;
  iVar2 = FString::operator==(local_34,(ushort *)L"///RELOADUI");
  if (iVar2 != 0) {
    FUN_10005c30();
    FUN_100d0400();
    local_8._0_1_ = 1;
    FString::~FString(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    ExceptionList = local_10;
    return;
  }
  iVar2 = **(int **)GL2Console_exref;
  puVar3 = FString::operator*(local_28);
  (**(code **)(iVar2 + 0x738))(puVar3,pFVar4);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10108cc9 Catch@10108cc9

void Catch_10108cc9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10108cdd Catch@10108cdd

void Catch_10108cdd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execExecuteCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108d00 UUIScript::execRequestChangePetName

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


// ==== 10108ee0 Catch@10108ee0

void Catch_10108ee0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10108ef4 Catch@10108ef4

void Catch_10108ef4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestChangePetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10108f20 UUIScript::execGetRefreshRateList

/* public: void __thiscall UUIScript::execGetRefreshRateList(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetRefreshRateList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  FArray *this_00;
  uint uStack_dd4;
  FArray local_dc4 [3072];
  undefined4 local_1c4 [100];
  FString local_34 [16];
  int local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x108f20  1354  ?execGetRefreshRateList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201f12;
  local_10 = ExceptionList;
  uStack_dd4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_dd4;
  ExceptionList = &local_10;
  local_8 = 0;
  _eh_vector_constructor_iterator_(local_dc4,0xc,0x100,FUN_10038f80,FUN_10039be0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_dc4);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_dc4;
  }
  else {
    this_00 = *(FArray **)GPropAddr_exref;
  }
  local_1c = *(undefined4 *)GSEKScreenX_exref;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = *(undefined4 *)GSEKScreenY_exref;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0x7c))
                    (100,local_1c,local_18,*(undefined4 *)GColorBits_exref,local_1c4);
  FArray::Empty(this_00,4,0);
  for (iVar3 = 0; local_24 = iVar3, iVar3 < iVar2; iVar3 = iVar3 + 1) {
    FString::FString(local_34);
    local_8._0_1_ = 2;
    FArray::AddZeroed(this_00,4,1);
    *(undefined4 *)(*(int *)this_00 + iVar3 * 4) = local_1c4[iVar3];
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_34);
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_dc4,0xc,0x100,FUN_10039be0);
  ExceptionList = local_10;
  return;
}


// ==== 101090fd Catch@101090fd

void Catch_101090fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10109111 Catch@10109111

void Catch_10109111(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetRefreshRateList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109130 UUIEventManager::execRegisterEvent

/* public: void __thiscall UUIEventManager::execRegisterEvent(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execRegisterEvent(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x109130  1558  ?execRegisterEvent@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201f30;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = FUN_1001eeb0(this);
  FUN_10150300(local_18,uVar2);
  ExceptionList = local_10;
  return;
}


// ==== 101091e5 Catch@101091e5

void Catch_101091e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101091f9 Catch@101091f9

void Catch_101091f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execRegisterEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109220 UUIEventManager::execExecuteEvent

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


// ==== 10109303 Catch@10109303

void Catch_10109303(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10109317 Catch@10109317

void Catch_10109317(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIEventManager::execExecuteEvent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109340 UUIScript::execGetScript

/* public: void __thiscall UUIScript::execGetScript(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetScript(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  FString *pFVar3;
  undefined4 uVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x109340  1364  ?execGetScript@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201f89;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 0;
  pFVar3 = local_28;
  FUN_10005c30(pFVar3,0);
  piVar2 = (int *)FUN_100d0cb0(pFVar3,uVar4);
  if (piVar2 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar2 + 0xc4))();
    *(undefined4 *)param_2 = uVar4;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10109415 Catch@10109415

void Catch_10109415(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10109429 Catch@10109429

void Catch_10109429(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetScript");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109450 UUIScript::execRequestEditClanAuth

/* public: void __thiscall UUIScript::execRequestEditClanAuth(struct FFrame &,void * const) */

void __thiscall UUIScript::execRequestEditClanAuth(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uStack_c5c;
  int local_c4c [770];
  int local_44;
  undefined4 local_3c;
  undefined1 local_38 [32];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x109450  1616  ?execRequestEditClanAuth@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10201fc9;
  local_10 = ExceptionList;
  uStack_c5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c5c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_3c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_18 = uStack_c5c;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_3c);
  _eh_vector_constructor_iterator_(local_c4c,0xc,0x100,FUN_10038f80,FUN_10039be0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_c4c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    piVar2 = local_c4c;
  }
  else {
    piVar2 = *(int **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  for (local_44 = 0; local_44 < 0x20; local_44 = local_44 + 1) {
    local_38[local_44] = *(int *)(*piVar2 + local_44 * 4) != 0;
  }
  (**(code **)(*DAT_103663bc + 0x7f8))(local_3c,2,local_38);
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_c4c,0xc,0x100,FUN_10039be0);
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101095bf Catch@101095bf

void Catch_101095bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 101095d3 Catch@101095d3

void Catch_101095d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execRequestClanPenalty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101095f0 UUIScript::execSetChatMessage

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


// ==== 101096f9 Catch@101096f9

void Catch_101096f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010970d Catch@1010970d

void Catch_1010970d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSetChatMessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109730 UUIScript::execGetHandle

/* public: void __thiscall UUIScript::execGetHandle(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetHandle(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x109730  1207  ?execGetHandle@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202049;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString((FString *)&local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(this + 0x34) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10010290(*(undefined4 *)(*(int *)(this + 0x34) + 0x34));
  }
  puVar4 = &local_28;
  FUN_10005c30(puVar4,uVar2);
  iVar3 = FUN_100d0cb0(puVar4,uVar2);
  if (iVar3 == 0) {
    uVar2 = FUN_10005c30(L"Failed to find window handle(%s)",local_28,local_24,local_20);
    FUN_100d01f0(uVar2);
  }
  else {
    uVar2 = FUN_100580a0();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString((FString *)&local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10109843 Catch@10109843

void Catch_10109843(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10109857 Catch@10109857

void Catch_10109857(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetHandle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109880 UUIScript::execSaveInventoryOrder

/* public: void __thiscall UUIScript::execSaveInventoryOrder(struct FFrame &,void * const) */

void __thiscall UUIScript::execSaveInventoryOrder(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_c40;
  int local_c30 [770];
  FString local_28 [12];
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x109880  1707  ?execSaveInventoryOrder@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202092;
  local_10 = ExceptionList;
  uStack_c40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c40;
  ExceptionList = &local_10;
  local_8 = 0;
  _eh_vector_constructor_iterator_(local_c30,0xc,0x100,FUN_10038f80,FUN_10039be0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_c30);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    piVar5 = local_c30;
  }
  else {
    piVar5 = *(int **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10065890(local_28);
  iVar2 = (**(code **)(**(int **)GFileManager_exref + 0x28))(L"..\\iwo",0);
  if (iVar2 != 0) {
    iVar2 = **(int **)GFileManager_exref;
    uVar7 = *(undefined4 *)GNull_exref;
    uVar6 = 4;
    puVar3 = FString::operator*(local_28);
    piVar4 = (int *)(**(code **)(iVar2 + 0xc))(puVar3,uVar6,uVar7);
    if (piVar4 != (int *)0x0) {
      for (iVar2 = 0; local_1c = iVar2, iVar2 < piVar5[1]; iVar2 = iVar2 + 1) {
        FUN_100052e0(piVar4,*piVar5 + iVar2 * 4);
      }
      (**(code **)(*piVar4 + 0x58))();
      (**(code **)*piVar4)(1);
    }
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  _eh_vector_destructor_iterator_(local_c30,0xc,0x100,FUN_10039be0);
  ExceptionList = local_10;
  return;
}


// ==== 10109a38 Catch@10109a38

void Catch_10109a38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10109a4c Catch@10109a4c

void Catch_10109a4c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execSaveInventoryOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109a70 UUIScript::execLoadInventoryOrder

/* public: void __thiscall UUIScript::execLoadInventoryOrder(struct FFrame &,void * const) */

void __thiscall UUIScript::execLoadInventoryOrder(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  void *_Dst;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uStack_c4c;
  FFrame local_c3c [3080];
  FString local_34 [12];
  uint local_28;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar3 = param_1;
                    /* 0x109a70  1518  ?execLoadInventoryOrder@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102020d2;
  local_10 = ExceptionList;
  uStack_c4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c4c;
  ExceptionList = &local_10;
  local_8 = 0;
  _eh_vector_constructor_iterator_(local_c3c,0xc,0x100,FUN_10038f80,FUN_10039be0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_c3c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = local_c3c;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  *(int *)(pFVar3 + 0xc) = *(int *)(pFVar3 + 0xc) + 1;
  if (**(char **)(pFVar3 + 0xc) == 'B') {
    *(char **)(pFVar3 + 0xc) = *(char **)(pFVar3 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar3,0);
  }
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10065890(local_34);
  iVar2 = **(int **)GFileManager_exref;
  uVar8 = *(undefined4 *)GNull_exref;
  uVar7 = 0;
  puVar4 = FString::operator*(local_34);
  piVar5 = (int *)(**(code **)(iVar2 + 8))(puVar4,uVar7,uVar8);
  if (piVar5 != (int *)0x0) {
    FArray::Empty((FArray *)param_1,4,0);
    uVar6 = (**(code **)(*piVar5 + 0x2c))();
    _Dst = (void *)FUN_10004ed0(uVar6 + 2);
    _memset(_Dst,0,uVar6 + 2);
    (**(code **)(*piVar5 + 4))(_Dst,uVar6);
    local_1c = (int *)(**(code **)(**(int **)GFileManager_exref + 4))(_Dst,uVar6);
    if (local_1c != (int *)0x0) {
      local_28 = uVar6 >> 2;
      local_20 = 0;
      while (iVar2 = local_20, local_20 < (int)local_28) {
        local_18 = 0;
        FUN_100052e0(local_1c,&local_18);
        FUN_100d9a30(&local_18);
        local_20 = iVar2 + 1;
      }
      (**(code **)(*local_1c + 0x58))();
    }
    (**(code **)(*piVar5 + 0x58))();
    (**(code **)*piVar5)(1);
    FUN_10024ca0(_Dst);
    if (local_1c != (int *)0x0) {
      (**(code **)*local_1c)(1);
    }
  }
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  _eh_vector_destructor_iterator_(local_c3c,0xc,0x100,FUN_10039be0);
  ExceptionList = local_10;
  return;
}


// ==== 10109cab Catch@10109cab

void Catch_10109cab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10109cbf Catch@10109cbf

void Catch_10109cbf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execLoadInventoryOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109ce0 UUIScript::execGetLottoString

/* public: void __thiscall UUIScript::execGetLottoString(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetLottoString(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  float10 fVar6;
  uint uStack_268;
  int local_240;
  int local_23c;
  int local_238;
  uint local_230;
  uint local_22c;
  uint local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  uint local_20c;
  ushort local_208 [256];
  uint local_8;
  
                    /* 0x109ce0  1246  ?execGetLottoString@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_210 = &LAB_102020f8;
  local_214 = ExceptionList;
  uStack_268 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_268;
  ExceptionList = &local_214;
  local_20c = 0;
  local_230 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_268;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_230);
  local_22c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_22c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appMemset(local_208,0,0x100);
  FUN_10038f80();
  local_20c = CONCAT31(local_20c._1_3_,1);
  for (iVar5 = 0; iVar5 < 0x10; iVar5 = iVar5 + 1) {
    fVar6 = (float10)FUN_10071050(0x40000000,iVar5);
    local_21c = (float)fVar6;
    uVar2 = FUN_101c19e0();
    if ((local_230 & uVar2) != 0) {
      local_224 = (float)(iVar5 + 1);
      FUN_100d9a30(&local_224);
    }
  }
  for (uVar2 = 0; (int)uVar2 < 0x10; uVar2 = uVar2 + 1) {
    local_21c = 2.0;
    local_228 = uVar2;
    if ((int)uVar2 < 0) {
      local_228 = -uVar2;
    }
    local_220 = 1.0;
    while( true ) {
      if ((local_228 & 1) != 0) {
        local_220 = local_220 * local_21c;
      }
      local_228 = local_228 >> 1;
      if (local_228 == 0) break;
      local_21c = local_21c * local_21c;
    }
    local_224 = local_220;
    if ((int)uVar2 < 0) {
      local_224 = 1.0 / local_220;
    }
    uVar3 = FUN_101c19e0();
    if ((local_22c & uVar3) != 0) {
      local_240 = uVar2 + 0x11;
      FUN_100d9a30(&local_240);
    }
  }
  for (iVar5 = 0; iVar5 < local_238; iVar5 = iVar5 + 1) {
    puVar4 = appItoa(*(int *)(local_23c + iVar5 * 4));
    appStrcat(local_208,puVar4);
    if (iVar5 < local_238 + -1) {
      appStrcat(local_208,(ushort *)&DAT_10246d48);
    }
  }
  FArray::Empty((FArray *)&local_23c,4,0);
  FString::operator=(param_2,local_208);
  local_20c = local_20c & 0xffffff00;
  FUN_10039be0();
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 10109f0e Catch@10109f0e

void Catch_10109f0e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102a47f0);
}


// ==== 10109f22 Catch@10109f22

void Catch_10109f22(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetLottoString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10109f40 FUN_10109f40

void FUN_10109f40(int *param_1)

{
  FString *this;
  int *in_ECX;
  int iVar1;
  int iVar2;
  
  if (in_ECX == param_1) {
    return;
  }
  FUN_100520c0(param_1[1]);
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      this = (FString *)FUN_10083a80(0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(*param_1 + iVar1));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < param_1[1]);
    return;
  }
  return;
}


// ==== 10109fa0 FUN_10109fa0

void FUN_10109fa0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10202129;
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


// ==== 1010a040 UUIScript::execGetResolutionList

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: void __thiscall UUIScript::execGetResolutionList(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetResolutionList(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  FArray *this_00;
  uint uStack_10e8;
  FArray local_10d8 [3072];
  undefined4 local_4d8 [100];
  undefined4 local_348 [100];
  undefined4 local_1b8 [103];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10a040  1359  ?execGetResolutionList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202169;
  local_10 = ExceptionList;
  local_18 = 0x1010a05c;
  uStack_10e8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_10e8;
  ExceptionList = &local_10;
  local_8 = 0;
  _eh_vector_constructor_iterator_(local_10d8,0xc,0x100,FUN_10105a50,FUN_10109fa0);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,local_10d8);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_10d8;
  }
  else {
    this_00 = *(FArray **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  for (local_1c = 0; local_1c < *(int *)(this_00 + 4); local_1c = local_1c + 1) {
  }
  FArray::Empty(this_00,0xc,0);
  iVar3 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x5c) + 0x78))
                    (100,local_4d8,local_1b8,local_348);
  for (iVar4 = 0; local_18 = iVar4, iVar4 < iVar3; iVar4 = iVar4 + 1) {
    FArray::AddZeroed(this_00,0xc,1);
    puVar1 = (undefined4 *)(*(int *)this_00 + iVar4 * 0xc);
    *puVar1 = local_4d8[iVar4];
    puVar1[1] = local_1b8[iVar4];
    puVar1[2] = local_348[iVar4];
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_10d8,0xc,0x100,FUN_10109fa0);
  ExceptionList = local_10;
  return;
}


// ==== 1010a1de Catch@1010a1de

void Catch_1010a1de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010a1f2 Catch@1010a1f2

void Catch_1010a1f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetResolutionList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010a210 UUIScript::execGetPartyMemberLocation

/* public: void __thiscall UUIScript::execGetPartyMemberLocation(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetPartyMemberLocation(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  float *pfVar4;
  uint uStack_64;
  int *local_50;
  int local_4c;
  float local_44 [3];
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar3 = param_1;
                    /* 0x10a210  1287  ?execGetPartyMemberLocation@UUIScript@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202198;
  local_10 = ExceptionList;
  uStack_64 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar3 + 0xc);
  *(byte **)(pFVar3 + 0xc) = *(byte **)(pFVar3 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar3,local_44);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pfVar4 = local_44;
  }
  else {
    pfVar4 = *(float **)GPropAddr_exref;
  }
  *(int *)(pFVar3 + 0xc) = *(int *)(pFVar3 + 0xc) + 1;
  if (**(char **)(pFVar3 + 0xc) == 'B') {
    *(char **)(pFVar3 + 0xc) = *(char **)(pFVar3 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar3,0);
  }
  (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0xd4))(&param_1);
  if ((local_18 < 0) || (*(int *)(param_1 + 4) < local_18)) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    FUN_101085d0(param_1,local_18);
    local_8 = local_8 & 0xffffff00;
    iVar2 = *(int *)(*local_50 + 8 + local_4c * 0xc);
    if (iVar2 != 0) {
      local_38 = (float)*(int *)(iVar2 + 4);
      local_34 = (float)*(int *)(iVar2 + 8);
      local_30 = (float)*(int *)(iVar2 + 0xc);
      local_24 = local_30;
      local_20 = local_34;
      local_1c = local_38;
      *pfVar4 = local_38;
      pfVar4[1] = local_34;
      pfVar4[2] = local_30;
    }
    *(undefined4 *)param_2 = 1;
    local_8 = local_8 & 0xffffff00;
    FUN_100d10a0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1010a390 Catch@1010a390

void Catch_1010a390(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1010a3a4 Catch@1010a3a4

void Catch_1010a3a4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetPartyMemberLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010a3d0 UUIScript::execGetFileList

/* public: void __thiscall UUIScript::execGetFileList(struct FFrame &,void * const) */

void __thiscall UUIScript::execGetFileList(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uStack_e54;
  undefined1 local_e44 [3072];
  undefined1 local_244 [16];
  FString local_234 [12];
  FString local_228 [16];
  undefined1 *local_218;
  void *local_214;
  undefined1 *puStack_210;
  int local_20c;
  ushort local_208 [256];
  uint local_8;
  
                    /* 0x10a3d0  1200  ?execGetFileList@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_210 = &LAB_102021f3;
  local_214 = ExceptionList;
  uStack_e54 = DAT_103554c4 ^ (uint)local_208;
  local_218 = (undefined1 *)&uStack_e54;
  ExceptionList = &local_214;
  local_20c = 0;
  local_8 = uStack_e54;
  _eh_vector_constructor_iterator_(local_e44,0xc,0x100,FUN_10051aa0,FUN_10052740);
  local_20c = CONCAT31(local_20c._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_e44);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  FString::FString(local_228);
  local_20c._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_228);
  FString::FString(local_234);
  local_20c = CONCAT31(local_20c._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_234);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_234);
  puVar5 = &DAT_10270cc4;
  puVar3 = FString::operator*(local_228);
  appSprintf(local_208,(ushort *)L"%s%s%s",puVar3,puVar5,puVar2);
  uVar4 = (**(code **)(**(int **)GFileManager_exref + 0x30))(local_244,local_208,1,0);
  local_20c._0_1_ = 4;
  FUN_10109f40(uVar4);
  local_20c._0_1_ = 3;
  FUN_10052740();
  local_20c._0_1_ = 2;
  FString::~FString(local_234);
  local_20c._0_1_ = 1;
  FString::~FString(local_228);
  local_20c = (uint)local_20c._1_3_ << 8;
  _eh_vector_destructor_iterator_(local_e44,0xc,0x100,FUN_10052740);
  local_20c = 0xffffffff;
  ExceptionList = local_214;
  __security_check_cookie(local_8 ^ (uint)local_208);
  return;
}


// ==== 1010a5d9 Catch@1010a5d9

void Catch_1010a5d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010a5ed Catch@1010a5ed

void Catch_1010a5ed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execGetFileList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010a610 UUIScript::execReturnTooltipInfo

/* public: void __thiscall UUIScript::execReturnTooltipInfo(struct FFrame &,void * const) */

void __thiscall UUIScript::execReturnTooltipInfo(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  FCustomTooltip local_30 [28];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10a610  1701  ?execReturnTooltipInfo@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202228;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FCustomTooltip::FCustomTooltip(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101b9500(local_30);
  local_8 = local_8 & 0xffffff00;
  FCustomTooltip::~FCustomTooltip(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010a6d1 Catch@1010a6d1

void Catch_1010a6d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010a6e5 Catch@1010a6e5

void Catch_1010a6e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIScript::execReturnTooltipInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010a710 FUN_1010a710

UObject * FUN_1010a710(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10357340);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010a740 UUIAPI_BARCTRL::execSetValue

/* public: void __thiscall UUIAPI_BARCTRL::execSetValue(struct FFrame &,void * const) */

void __thiscall UUIAPI_BARCTRL::execSetValue(UUIAPI_BARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10a740  1839  ?execSetValue@UUIAPI_BARCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202259;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_1010a710(uVar2);
  if (iVar3 != 0) {
    FUN_10002d70(local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010a85c Catch@1010a85c

void Catch_1010a85c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010a870 Catch@1010a870

void Catch_1010a870(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_BARCTRL::execSetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010a890 UUIAPI_BARCTRL::execGetValue

/* public: void __thiscall UUIAPI_BARCTRL::execGetValue(struct FFrame &,void * const) */

void __thiscall UUIAPI_BARCTRL::execGetValue(UUIAPI_BARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x10a890  1438  ?execGetValue@UUIAPI_BARCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202289;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar5 = &local_1c;
  }
  else {
    puVar5 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  uVar3 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar4 = FUN_1010a710(uVar3);
  if (iVar4 != 0) {
    FUN_10002e00(param_1,puVar5);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010aa12 Catch@1010aa12

void Catch_1010aa12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010aa26 Catch@1010aa26

void Catch_1010aa26(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_BARCTRL::execGetValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010aa50 UUIAPI_BARCTRL::execClear

/* public: void __thiscall UUIAPI_BARCTRL::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_BARCTRL::execClear(UUIAPI_BARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10aa50  1096  ?execClear@UUIAPI_BARCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102022b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010a710(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010ab2c Catch@1010ab2c

void Catch_1010ab2c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010ab40 Catch@1010ab40

void Catch_1010ab40(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_BARCTRL::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ab60 FUN_1010ab60

UObject * FUN_1010ab60(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10359260);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010ab90 UUIAPI_EFFECTBUTTON::execBeginEffect

/* public: void __thiscall UUIAPI_EFFECTBUTTON::execBeginEffect(struct FFrame &,void * const) */

void __thiscall
UUIAPI_EFFECTBUTTON::execBeginEffect(UUIAPI_EFFECTBUTTON *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ab90  1080  ?execBeginEffect@UUIAPI_EFFECTBUTTON@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102022e9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ab60(uVar2);
  if (iVar3 != 0) {
    FUN_100051e0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010ac88 Catch@1010ac88

void Catch_1010ac88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010ac9c Catch@1010ac9c

void Catch_1010ac9c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EFFECTBUTTON::execBeginEffect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010acc0 FUN_1010acc0

UObject * FUN_1010acc0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036fa50);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010acf0 FUN_1010acf0

UObject * FUN_1010acf0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036eff0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010ad20 UUIAPI_HTMLCTRL::execLoadHtml

/* public: void __thiscall UUIAPI_HTMLCTRL::execLoadHtml(struct FFrame &,void * const) */

void __thiscall UUIAPI_HTMLCTRL::execLoadHtml(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  ushort *puVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10ad20  1515  ?execLoadHtml@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202322;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      puVar3 = FString::operator*(local_28);
      FUN_1010acf0(this_00,puVar3);
    }
    else {
      puVar3 = FString::operator*(local_28);
      FUN_1010acc0(this_00,puVar3);
    }
    FUN_10088300(puVar3);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010ae59 Catch@1010ae59

void Catch_1010ae59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010ae6d Catch@1010ae6d

void Catch_1010ae6d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execLoadHtml");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ae90 UUIAPI_HTMLCTRL::execLoadHtmlFromString

/* public: void __thiscall UUIAPI_HTMLCTRL::execLoadHtmlFromString(struct FFrame &,void * const) */

void __thiscall
UUIAPI_HTMLCTRL::execLoadHtmlFromString(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  ushort *puVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10ae90  1517  ?execLoadHtmlFromString@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202352;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      puVar3 = FString::operator*(local_28);
      FUN_1010acf0(this_00,puVar3);
      FUN_10088440(puVar3);
    }
    else {
      puVar3 = FString::operator*(local_28);
      FUN_1010acc0(this_00,puVar3);
      FUN_10088c30(puVar3);
    }
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010afd3 Catch@1010afd3

void Catch_1010afd3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010afe7 Catch@1010afe7

void Catch_1010afe7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execLoadHtmlFromString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b010 UUIAPI_HTMLCTRL::execClear

/* public: void __thiscall UUIAPI_HTMLCTRL::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_HTMLCTRL::execClear(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10b010  1099  ?execClear@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202379;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      FUN_1010acf0(this_00);
    }
    else {
      FUN_1010acc0();
    }
    FUN_100867e0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010b101 Catch@1010b101

void Catch_1010b101(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010b115 Catch@1010b115

void Catch_1010b115(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b140 UUIAPI_HTMLCTRL::execGetFrameMaxHeight

/* public: void __thiscall UUIAPI_HTMLCTRL::execGetFrameMaxHeight(struct FFrame &,void * const) */

void __thiscall
UUIAPI_HTMLCTRL::execGetFrameMaxHeight(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  undefined4 uVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10b140  1206  ?execGetFrameMaxHeight@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102023a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      FUN_1010acf0(this_00);
    }
    else {
      FUN_1010acc0();
    }
    uVar3 = FUN_100835e0();
  }
  *(undefined4 *)param_2 = uVar3;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010b235 Catch@1010b235

void Catch_1010b235(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010b249 Catch@1010b249

void Catch_1010b249(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execGetFrameMaxHeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b270 UUIAPI_HTMLCTRL::execControllerExecution

/* public: void __thiscall UUIAPI_HTMLCTRL::execControllerExecution(struct FFrame &,void * const) */

void __thiscall
UUIAPI_HTMLCTRL::execControllerExecution(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10b270  1117
                       ?execControllerExecution@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102023e2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar4 = FUN_1010acf0(uVar3);
  if (iVar4 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    iVar2 = *DAT_103663bc;
    puVar5 = FString::operator*(local_28);
    uVar3 = (**(code **)(iVar2 + 0x7f0))(puVar5,iVar4);
    *(undefined4 *)param_2 = uVar3;
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010b3a7 Catch@1010b3a7

void Catch_1010b3a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010b3bb Catch@1010b3bb

void Catch_1010b3bb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execControllerExecution");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b3e0 UUIAPI_HTMLCTRL::execSetHtmlBuffData

/* public: void __thiscall UUIAPI_HTMLCTRL::execSetHtmlBuffData(struct FFrame &,void * const) */

void __thiscall
UUIAPI_HTMLCTRL::execSetHtmlBuffData(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  ushort *puVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10b3e0  1744  ?execSetHtmlBuffData@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202412;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 == 0) {
      local_8._0_1_ = 1;
      FString::~FString(local_28);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_34);
      ExceptionList = local_10;
      return;
    }
    puVar3 = FString::operator*(local_28);
    FUN_1010acc0(this_00,puVar3);
    FUN_1008b0b0(puVar3);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010b537 Catch@1010b537

void Catch_1010b537(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010b54b Catch@1010b54b

void Catch_1010b54b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execSetHtmlBuffData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b570 UUIAPI_HTMLCTRL::execSetPageLock

/* public: void __thiscall UUIAPI_HTMLCTRL::execSetPageLock(struct FFrame &,void * const) */

void __thiscall
UUIAPI_HTMLCTRL::execSetPageLock(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  UObject *this_00;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10b570  1773  ?execSetPageLock@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202439;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  if (this_00 != (UObject *)0x0) {
    iVar3 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    uVar2 = local_18;
    if (iVar3 != 0) {
      iVar3 = FUN_1010acc0(this_00);
      *(undefined4 *)(iVar3 + 0x25c) = uVar2;
    }
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010b679 Catch@1010b679

void Catch_1010b679(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010b68d Catch@1010b68d

void Catch_1010b68d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execSetPageLock");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b6b0 UUIAPI_HTMLCTRL::execIsPageLock

/* public: void __thiscall UUIAPI_HTMLCTRL::execIsPageLock(struct FFrame &,void * const) */

void __thiscall UUIAPI_HTMLCTRL::execIsPageLock(UUIAPI_HTMLCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *this_00;
  int iVar2;
  undefined4 uVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10b6b0  1498  ?execIsPageLock@UUIAPI_HTMLCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202469;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_18 = 0;
  this_00 = (UObject *)(**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  if (this_00 != (UObject *)0x0) {
    iVar2 = UObject::IsA(this_00,(UClass *)&DAT_1036fa50);
    if (iVar2 != 0) {
      iVar2 = FUN_1010acc0(this_00);
      uVar3 = *(undefined4 *)(iVar2 + 0x25c);
      local_18 = uVar3;
    }
  }
  *(undefined4 *)param_2 = uVar3;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010b7a1 Catch@1010b7a1

void Catch_1010b7a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010b7b5 Catch@1010b7b5

void Catch_1010b7b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_HTMLCTRL::execIsPageLock");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b7e0 FUN_1010b7e0

UObject * FUN_1010b7e0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103a0ee0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010b810 UUIAPI_INVENWEIGHT::execAddWeight

/* public: void __thiscall UUIAPI_INVENWEIGHT::execAddWeight(struct FFrame &,void * const) */

void __thiscall
UUIAPI_INVENWEIGHT::execAddWeight(UUIAPI_INVENWEIGHT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10b810  1076  ?execAddWeight@UUIAPI_INVENWEIGHT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202499;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010b7e0(uVar2);
  if (iVar3 != 0) {
    FUN_10179530(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010b908 Catch@1010b908

void Catch_1010b908(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010b91c Catch@1010b91c

void Catch_1010b91c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_INVENWEIGHT::execAddWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010b940 UUIAPI_INVENWEIGHT::execReduceWeight

/* public: void __thiscall UUIAPI_INVENWEIGHT::execReduceWeight(struct FFrame &,void * const) */

void __thiscall
UUIAPI_INVENWEIGHT::execReduceWeight(UUIAPI_INVENWEIGHT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10b940  1556  ?execReduceWeight@UUIAPI_INVENWEIGHT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102024c9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010b7e0(uVar2);
  if (iVar3 != 0) {
    FUN_101795c0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010ba38 Catch@1010ba38

void Catch_1010ba38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010ba4c Catch@1010ba4c

void Catch_1010ba4c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_INVENWEIGHT::execReduceWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ba70 UUIAPI_INVENWEIGHT::execZeroWeight

/* public: void __thiscall UUIAPI_INVENWEIGHT::execZeroWeight(struct FFrame &,void * const) */

void __thiscall
UUIAPI_INVENWEIGHT::execZeroWeight(UUIAPI_INVENWEIGHT *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ba70  1872  ?execZeroWeight@UUIAPI_INVENWEIGHT@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102024f9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010b7e0(uVar2);
  if (iVar3 != 0) {
    FUN_10179520();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010bb47 Catch@1010bb47

void Catch_1010bb47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010bb5b Catch@1010bb5b

void Catch_1010bb5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_INVENWEIGHT::execZeroWeight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010bb80 FUN_1010bb80

UObject * FUN_1010bb80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10364488);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010bbb0 UUIAPI_ITEMWINDOW::execGetSelectedNum

/* public: void __thiscall UUIAPI_ITEMWINDOW::execGetSelectedNum(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execGetSelectedNum(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10bbb0  1375  ?execGetSelectedNum@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202529;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010bb80(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_1002d090();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010bc8c Catch@1010bc8c

void Catch_1010bc8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010bca0 Catch@1010bca0

void Catch_1010bca0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execGetSelectedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010bcc0 UUIAPI_ITEMWINDOW::execGetItemNum

/* public: void __thiscall UUIAPI_ITEMWINDOW::execGetItemNum(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execGetItemNum(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10bcc0  1241  ?execGetItemNum@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202559;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010bb80(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_1002d0b0();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010bd9c Catch@1010bd9c

void Catch_1010bd9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010bdb0 Catch@1010bdb0

void Catch_1010bdb0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execGetItemNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010bdd0 UUIAPI_ITEMWINDOW::execClearSelect

/* public: void __thiscall UUIAPI_ITEMWINDOW::execClearSelect(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execClearSelect(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10bdd0  1111  ?execClearSelect@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202589;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x234))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010beac Catch@1010beac

void Catch_1010beac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010bec0 Catch@1010bec0

void Catch_1010bec0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execClearSelect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010bee0 UUIAPI_ITEMWINDOW::execAddItem

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: void __thiscall UUIAPI_ITEMWINDOW::execAddItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execAddItem(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_1e54;
  FItemInfo local_1e44 [312];
  FString local_1d0c [16];
  undefined1 *local_1cfc;
  void *local_1cf8;
  undefined1 *puStack_1cf4;
  int local_1cf0;
  undefined1 local_1cec [7396];
  uint local_8;
  
                    /* 0x10bee0  1060  ?execAddItem@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_1cf4 = &LAB_102025c4;
  local_1cf8 = ExceptionList;
  uStack_1e54 = DAT_103554c4 ^ (uint)local_1cec;
  local_1cfc = (undefined1 *)&uStack_1e54;
  ExceptionList = &local_1cf8;
  local_1cf0 = 0;
  local_8 = uStack_1e54;
  FString::FString(local_1d0c);
  local_1cf0._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_1d0c);
  FItemInfo::FItemInfo(local_1e44);
  local_1cf0 = CONCAT31(local_1cf0._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_1e44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_1d0c);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    FUN_1002c0b0(local_1e44);
    (**(code **)(*piVar3 + 0x204))(local_1cec);
  }
  local_1cf0._0_1_ = 1;
  FItemInfo::~FItemInfo(local_1e44);
  local_1cf0 = (uint)local_1cf0._1_3_ << 8;
  FString::~FString(local_1d0c);
  local_1cf0 = 0xffffffff;
  ExceptionList = local_1cf8;
  __security_check_cookie(local_8 ^ (uint)local_1cec);
  return;
}


// ==== 1010c03c Catch@1010c03c

void Catch_1010c03c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010c050 Catch@1010c050

void Catch_1010c050(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execAddItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c070 UUIAPI_ITEMWINDOW::execDeleteItem

/* public: void __thiscall UUIAPI_ITEMWINDOW::execDeleteItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execDeleteItem(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10c070  1130  ?execDeleteItem@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102025f9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x208))(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010c16d Catch@1010c16d

void Catch_1010c16d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010c181 Catch@1010c181

void Catch_1010c181(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execDeleteItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c1a0 UUIAPI_ITEMWINDOW::execSetItem

/* public: void __thiscall UUIAPI_ITEMWINDOW::execSetItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execSetItem(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_174;
  FItemInfo local_164 [316];
  FString local_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10c1a0  1754  ?execSetItem@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202634;
  local_10 = ExceptionList;
  uStack_174 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_174;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FItemInfo::FItemInfo(local_164);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_164);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x20c))(local_18,local_164);
  }
  local_8._0_1_ = 1;
  FItemInfo::~FItemInfo(local_164);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010c2e5 Catch@1010c2e5

void Catch_1010c2e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010c2f9 Catch@1010c2f9

void Catch_1010c2f9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execSetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c320 UUIAPI_ITEMWINDOW::execGetSelectedItem

/* public: void __thiscall UUIAPI_ITEMWINDOW::execGetSelectedItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execGetSelectedItem(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  FItemInfo *pFVar5;
  uint uStack_170;
  FItemInfo local_160 [316];
  FString local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10c320  1369  ?execGetSelectedItem@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202674;
  local_10 = ExceptionList;
  uStack_170 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_170;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_24);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  FItemInfo::FItemInfo(local_160);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_160);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar5 = local_160;
  }
  else {
    pFVar5 = *(FItemInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_24);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x210))(pFVar5);
    *(bool *)param_2 = iVar4 != 0;
  }
  local_8._0_1_ = 1;
  FItemInfo::~FItemInfo(local_160);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_24);
  ExceptionList = local_10;
  return;
}


// ==== 1010c485 Catch@1010c485

void Catch_1010c485(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010c499 Catch@1010c499

void Catch_1010c499(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execGetSelectedItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c4c0 UUIAPI_ITEMWINDOW::execGetItem

/* public: void __thiscall UUIAPI_ITEMWINDOW::execGetItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execGetItem(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  FItemInfo *pFVar5;
  uint uStack_174;
  FItemInfo local_164 [316];
  FString local_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10c4c0  1229  ?execGetItem@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102026b4;
  local_10 = ExceptionList;
  uStack_174 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_174;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FItemInfo::FItemInfo(local_164);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_164);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar5 = local_164;
  }
  else {
    pFVar5 = *(FItemInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x21c))(local_18,pFVar5);
    *(bool *)param_2 = iVar4 != 0;
  }
  local_8._0_1_ = 1;
  FItemInfo::~FItemInfo(local_164);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010c640 Catch@1010c640

void Catch_1010c640(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010c654 Catch@1010c654

void Catch_1010c654(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execGetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c680 UUIAPI_ITEMWINDOW::execClear

/* public: void __thiscall UUIAPI_ITEMWINDOW::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_ITEMWINDOW::execClear(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10c680  1100  ?execClear@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102026e9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010c75c Catch@1010c75c

void Catch_1010c75c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010c770 Catch@1010c770

void Catch_1010c770(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c790 UUIAPI_ITEMWINDOW::execGetSelectedItemID

/* public: void __thiscall UUIAPI_ITEMWINDOW::execGetSelectedItemID(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execGetSelectedItemID(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uStack_170;
  FItemInfo local_160 [148];
  undefined4 local_cc;
  FString local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10c790  1371
                       ?execGetSelectedItemID@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202724;
  local_10 = ExceptionList;
  uStack_170 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_170;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_24);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_24);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    FItemInfo::FItemInfo(local_160);
    local_8._0_1_ = 2;
    iVar4 = (**(code **)(*piVar3 + 0x210))(local_160);
    if (iVar4 == 0) {
      *(undefined4 *)param_2 = 0xffffffff;
    }
    else {
      *(undefined4 *)param_2 = local_cc;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FItemInfo::~FItemInfo(local_160);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_24);
  ExceptionList = local_10;
  return;
}


// ==== 1010c8af Catch@1010c8af

void Catch_1010c8af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010c8c3 Catch@1010c8c3

void Catch_1010c8c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execGetSelectedItemID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010c8e0 UUIAPI_ITEMWINDOW::execFindItemWithServerID

/* public: void __thiscall UUIAPI_ITEMWINDOW::execFindItemWithServerID(struct FFrame &,void * const)
    */

void __thiscall
UUIAPI_ITEMWINDOW::execFindItemWithServerID(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uStack_40;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10c8e0  1153
                       ?execFindItemWithServerID@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202759;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)param_2 = 0xffffffff;
    iVar4 = FUN_1002d0b0();
    for (iVar6 = 0; local_1c = iVar6, iVar6 < iVar4; iVar6 = iVar6 + 1) {
      iVar5 = (**(code **)(*piVar3 + 0x214))(iVar6);
      if (*(int *)(iVar5 + 0x1e58) == local_18) {
        *(int *)param_2 = iVar6;
        break;
      }
    }
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010ca0c Catch@1010ca0c

void Catch_1010ca0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010ca20 Catch@1010ca20

void Catch_1010ca20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execFindItemWithServerID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ca40 UUIAPI_ITEMWINDOW::execFindItemWithClassID

/* public: void __thiscall UUIAPI_ITEMWINDOW::execFindItemWithClassID(struct FFrame &,void * const)
    */

void __thiscall
UUIAPI_ITEMWINDOW::execFindItemWithClassID(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uStack_40;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ca40  1151
                       ?execFindItemWithClassID@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202789;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_1010bb80(uVar2);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)param_2 = 0xffffffff;
    iVar4 = FUN_1002d0b0();
    for (iVar6 = 0; local_1c = iVar6, iVar6 < iVar4; iVar6 = iVar6 + 1) {
      iVar5 = (**(code **)(*piVar3 + 0x214))(iVar6);
      if (*(int *)(iVar5 + 0x1e5c) == local_18) {
        *(int *)param_2 = iVar6;
        break;
      }
    }
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010cb6c Catch@1010cb6c

void Catch_1010cb6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010cb80 Catch@1010cb80

void Catch_1010cb80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execFindItemWithClassID");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010cba0 UUIAPI_ITEMWINDOW::execSetFaded

/* public: void __thiscall UUIAPI_ITEMWINDOW::execSetFaded(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execSetFaded(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10cba0  1735  ?execSetFaded@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102027b9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010bb80(uVar2);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x2ac) = local_18;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010cc96 Catch@1010cc96

void Catch_1010cc96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010ccaa Catch@1010ccaa

void Catch_1010ccaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execSetFaded");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ccd0 UUIAPI_ITEMWINDOW::execShowScrollBar

/* public: void __thiscall UUIAPI_ITEMWINDOW::execShowScrollBar(struct FFrame &,void * const) */

void __thiscall
UUIAPI_ITEMWINDOW::execShowScrollBar(UUIAPI_ITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ccd0  1853  ?execShowScrollBar@UUIAPI_ITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102027e9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010bb80(uVar2);
  if (iVar3 != 0) {
    FUN_10043c10(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010cdc8 Catch@1010cdc8

void Catch_1010cdc8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010cddc Catch@1010cddc

void Catch_1010cddc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_ITEMWINDOW::execShowScrollBar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ce00 FUN_1010ce00

UObject * FUN_1010ce00(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103a61e0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010ce30 UUIAPI_MINIMAPCTRL::execAdjustMapView

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execAdjustMapView(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execAdjustMapView(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uStack_4c;
  FString local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ce30  1077  ?execAdjustMapView@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202819;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_3c);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    uVar7 = (uint)(local_1c == 0);
    uVar2 = local_18;
    uVar4 = FUN_101c19e0(uVar7,local_18);
    uVar5 = FUN_101c19e0(uVar4);
    uVar6 = FUN_101c19e0(uVar5);
    FUN_1018a680(uVar6,uVar5,uVar4,uVar7,uVar2);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 1010cf8d Catch@1010cf8d

void Catch_1010cf8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010cfa1 Catch@1010cfa1

void Catch_1010cfa1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execAdjustMapView");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010cfc0 UUIAPI_MINIMAPCTRL::execInitPosition

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execInitPosition(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execInitPosition(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10cfc0  1451  ?execInitPosition@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202849;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x264) = 0;
    *(undefined4 *)(iVar3 + 0x268) = 0;
    FUN_1018a480();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010d0a0 Catch@1010d0a0

void Catch_1010d0a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010d0b4 Catch@1010d0b4

void Catch_1010d0b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execInitPosition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d0e0 UUIAPI_MINIMAPCTRL::execAddTarget

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execAddTarget(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execAddTarget(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10d0e0  1074  ?execAddTarget@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202879;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_101c19e0();
    uVar4 = FUN_101c19e0(uVar2);
    uVar5 = FUN_101c19e0(uVar4);
    FUN_101884c0(uVar5,uVar4,uVar2);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010d1f3 Catch@1010d1f3

void Catch_1010d1f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010d207 Catch@1010d207

void Catch_1010d207(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execAddTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d230 UUIAPI_MINIMAPCTRL::execDeleteTarget

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execDeleteTarget(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execDeleteTarget(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_44;
  FString local_34 [12];
  undefined1 local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10d230  1134  ?execDeleteTarget@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102028a9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_101c19e0();
    uVar4 = FUN_101c19e0(uVar2);
    uVar5 = FUN_101c19e0(uVar4);
    FUN_10188570(uVar5,uVar4,uVar2);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010d343 Catch@1010d343

void Catch_1010d343(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010d357 Catch@1010d357

void Catch_1010d357(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execDeleteTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d380 UUIAPI_MINIMAPCTRL::execDeleteAllTarget

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execDeleteAllTarget(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execDeleteAllTarget(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10d380  1127  ?execDeleteAllTarget@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102028d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010ce00(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010d45c Catch@1010d45c

void Catch_1010d45c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010d470 Catch@1010d470

void Catch_1010d470(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execDeleteAllTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d490 UUIAPI_MINIMAPCTRL::execSetShowQuest

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execSetShowQuest(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execSetShowQuest(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10d490  1800  ?execSetShowQuest@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202909;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    FUN_101876a0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010d588 Catch@1010d588

void Catch_1010d588(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010d59c Catch@1010d59c

void Catch_1010d59c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execSetShowQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d5c0 UUIAPI_MINIMAPCTRL::execSetSSQStatus

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execSetSSQStatus(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execSetSSQStatus(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10d5c0  1789  ?execSetSSQStatus@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202939;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    FUN_10186fd0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010d6b8 Catch@1010d6b8

void Catch_1010d6b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010d6cc Catch@1010d6cc

void Catch_1010d6cc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execSetSSQStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d6f0 UUIAPI_MINIMAPCTRL::execDrawGridIcon

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execDrawGridIcon(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execDrawGridIcon(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  FString aFStack_fc [4];
  undefined4 uStack_f8;
  FString aFStack_f0 [12];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FString aFStack_cc [4];
  undefined4 uStack_c8;
  FFrame *pFStack_c4;
  FString *pFStack_c0;
  FFrame *pFStack_bc;
  uint uStack_7c;
  undefined4 local_6c [3];
  FString local_60 [12];
  FString local_54 [12];
  FString local_48 [12];
  FString local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10d6f0  1139  ?execDrawGridIcon@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020299f;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_60);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  FString::FString(local_54);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  FString::FString(local_48);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))();
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_6c;
  }
  else {
    puVar3 = *(undefined4 **)GPropAddr_exref;
  }
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_bc = (FFrame *)0x1010d867;
  FString::FString(local_3c,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,4);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_bc = param_1;
  pFStack_c0 = (FString *)0x1010d889;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    pFStack_c0 = (FString *)0x0;
    pFStack_c4 = param_1;
    uStack_c8 = 0x1010d8ad;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_c0 = local_60;
  pFStack_c4 = (FFrame *)0x1010d8c2;
  pFStack_c4 = (FFrame *)(**(code **)(**(int **)GL2Console_exref + 0x778))();
  uStack_c8 = 0x1010d8c8;
  iVar2 = FUN_1010ce00();
  if (iVar2 != 0) {
    uStack_d4 = 0x1010d8e3;
    FString::FString(aFStack_cc,local_3c);
    local_8._0_1_ = 5;
    uStack_d4 = local_1c;
    uStack_d8 = local_20;
    uStack_e4 = *puVar3;
    uStack_e0 = puVar3[1];
    uStack_dc = puVar3[2];
    local_28 = aFStack_f0;
    uStack_f8 = 0x1010d91a;
    FString::FString(aFStack_f0,local_48);
    local_8._0_1_ = 6;
    local_2c = aFStack_fc;
    FString::FString(aFStack_fc,local_54);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_10188d90();
  }
  local_8._0_1_ = 3;
  pFStack_c4 = (FFrame *)0x1010d94c;
  FString::~FString(local_3c);
  local_8._0_1_ = 2;
  pFStack_c4 = (FFrame *)0x1010d959;
  FString::~FString(local_48);
  local_8._0_1_ = 1;
  pFStack_c4 = (FFrame *)0x1010d966;
  FString::~FString(local_54);
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_c4 = (FFrame *)0x1010d972;
  FString::~FString(local_60);
  ExceptionList = local_10;
  return;
}


// ==== 1010d98d Catch@1010d98d

void Catch_1010d98d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1010d9a1 Catch@1010d9a1

void Catch_1010d9a1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execDrawGridIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010d9c0 UUIAPI_MINIMAPCTRL::execRequestReduceBtn

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execRequestReduceBtn(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execRequestReduceBtn(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10d9c0  1674
                       ?execRequestReduceBtn@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102029c9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    FUN_1018a8d0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010da97 Catch@1010da97

void Catch_1010da97(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010daab Catch@1010daab

void Catch_1010daab(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execRequestReduceBtn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010dad0 UUIAPI_MINIMAPCTRL::execIsOverlapped

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execIsOverlapped(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execIsOverlapped(UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_48;
  FString local_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10dad0  1495  ?execIsOverlapped@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102029f9;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_38);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_1018b4f0(local_24,local_20,local_1c,local_18);
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 1010dc3b Catch@1010dc3b

void Catch_1010dc3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 1010dc4f Catch@1010dc4f

void Catch_1010dc4f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execIsOverlapped");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010dc70 UUIAPI_MINIMAPCTRL::execDeleteAllCursedWeaponIcon

/* public: void __thiscall UUIAPI_MINIMAPCTRL::execDeleteAllCursedWeaponIcon(struct FFrame &,void *
   const) */

void __thiscall
UUIAPI_MINIMAPCTRL::execDeleteAllCursedWeaponIcon
          (UUIAPI_MINIMAPCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10dc70  1124
                       ?execDeleteAllCursedWeaponIcon@UUIAPI_MINIMAPCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202a29;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010ce00(uVar2);
  if (iVar3 != 0) {
    FUN_10188fd0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010dd47 Catch@1010dd47

void Catch_1010dd47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010dd5b Catch@1010dd5b

void Catch_1010dd5b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MINIMAPCTRL::execDeleteAllCursedWeaponIcon");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010dd80 FUN_1010dd80

UObject * FUN_1010dd80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103a47f0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010ddb0 UUIAPI_MULTISELLITEMINFO::execClear

/* public: void __thiscall UUIAPI_MULTISELLITEMINFO::execClear(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MULTISELLITEMINFO::execClear(UUIAPI_MULTISELLITEMINFO *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ddb0  1101  ?execClear@UUIAPI_MULTISELLITEMINFO@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202a59;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010dd80(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010de8c Catch@1010de8c

void Catch_1010de8c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010dea0 Catch@1010dea0

void Catch_1010dea0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MULTISELLITEMINFO::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010dec0 UUIAPI_MULTISELLITEMINFO::execSetItemInfo

/* public: void __thiscall UUIAPI_MULTISELLITEMINFO::execSetItemInfo(struct FFrame &,void * const)
    */

void __thiscall
UUIAPI_MULTISELLITEMINFO::execSetItemInfo
          (UUIAPI_MULTISELLITEMINFO *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_174;
  FItemInfo local_164 [316];
  FString local_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10dec0  1755
                       ?execSetItemInfo@UUIAPI_MULTISELLITEMINFO@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202a94;
  local_10 = ExceptionList;
  uStack_174 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_174;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FItemInfo::FItemInfo(local_164);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_164);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010dd80(uVar2);
  if (iVar3 != 0) {
    FUN_10184e20(local_18,local_164);
  }
  local_8._0_1_ = 1;
  FItemInfo::~FItemInfo(local_164);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010e000 Catch@1010e000

void Catch_1010e000(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010e014 Catch@1010e014

void Catch_1010e014(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MULTISELLITEMINFO::execSetItemInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e040 FUN_1010e040

void FUN_1010e040(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)(in_ECX + 0x83) = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x82] = 0;
  *in_ECX = 0;
  in_ECX[0xc3] = 0;
  in_ECX[0xc4] = 0;
  return;
}


// ==== 1010e070 FUN_1010e070

UObject * FUN_1010e070(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103a42c0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010e0a0 UUIAPI_MULTISELLNEEDEDITEM::execAddData

/* public: void __thiscall UUIAPI_MULTISELLNEEDEDITEM::execAddData(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MULTISELLNEEDEDITEM::execAddData
          (UUIAPI_MULTISELLNEEDEDITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uStack_394;
  FString local_380 [12];
  FString local_374 [12];
  FString local_368 [12];
  FString local_35c [28];
  FString local_340 [12];
  undefined4 local_334;
  undefined1 *local_330;
  void *local_32c;
  undefined1 *puStack_328;
  int local_324;
  undefined4 local_320;
  ushort local_31c [256];
  undefined4 local_11c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
                    /* 0x10e0a0  1058  ?execAddData@UUIAPI_MULTISELLNEEDEDITEM@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_328 = &LAB_10202b2b;
  local_32c = ExceptionList;
  uStack_394 = DAT_103554c4 ^ (uint)&local_320;
  local_330 = (undefined1 *)&uStack_394;
  ExceptionList = &local_32c;
  local_324 = 0;
  local_8 = uStack_394;
  FString::FString(local_368);
  local_324._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_368);
  FString::FString(local_380);
  local_324 = CONCAT31(local_324._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_380);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_368);
  iVar3 = FUN_1010e070(uVar2);
  if (iVar3 != 0) {
    FUN_1003fa00(local_380);
    local_324._0_1_ = 3;
    FString::FString(local_374);
    local_324._0_1_ = 4;
    FString::FString(local_35c);
    local_324._0_1_ = 5;
    FString::FString(local_340,(ushort *)L"Name");
    local_324._0_1_ = 6;
    FUN_100406e0(local_340,local_374);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    FUN_1010e040();
    puVar4 = FString::operator*(local_374);
    appStrcpy(local_31c,puVar4);
    FString::FString(local_340,(ushort *)&DAT_1025ae84);
    local_324._0_1_ = 7;
    FUN_100404d0(local_340,&local_334);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    local_320 = local_334;
    FString::FString(local_340,(ushort *)&DAT_10246480);
    local_324._0_1_ = 8;
    FUN_100404d0(local_340,&local_334);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    local_11c = local_334;
    FString::FString(local_340,(ushort *)L"Icon");
    local_324._0_1_ = 9;
    FUN_100406e0(local_340,local_35c);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    FString::FString(local_340,(ushort *)L"Enchant");
    local_324._0_1_ = 10;
    FUN_100404d0(local_340,&local_334);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    local_14 = local_334;
    FString::FString(local_340,(ushort *)L"CrystalType");
    local_324._0_1_ = 0xb;
    FUN_100404d0(local_340,&local_334);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    local_10 = local_334;
    FString::FString(local_340,(ushort *)L"ItemType");
    local_324._0_1_ = 0xc;
    FUN_100404d0(local_340,&local_334);
    local_324._0_1_ = 5;
    FString::~FString(local_340);
    local_c = local_334;
    FUN_10185050(&local_320,local_35c);
    local_324._0_1_ = 4;
    FString::~FString(local_35c);
    local_324._0_1_ = 3;
    FString::~FString(local_374);
    local_324 = CONCAT31(local_324._1_3_,2);
    FUN_1003fff0();
  }
  local_324._0_1_ = 1;
  FString::~FString(local_380);
  local_324 = (uint)local_324._1_3_ << 8;
  FString::~FString(local_368);
  local_324 = 0xffffffff;
  ExceptionList = local_32c;
  __security_check_cookie(local_8 ^ (uint)&local_320);
  return;
}


// ==== 1010e3bf Catch@1010e3bf

void Catch_1010e3bf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -100);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 1010e3d3 Catch@1010e3d3

void Catch_1010e3d3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MULTISELLNEEDEDITEM::execAddData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e3f0 UUIAPI_MULTISELLNEEDEDITEM::execClear

/* public: void __thiscall UUIAPI_MULTISELLNEEDEDITEM::execClear(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MULTISELLNEEDEDITEM::execClear
          (UUIAPI_MULTISELLNEEDEDITEM *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10e3f0  1102  ?execClear@UUIAPI_MULTISELLNEEDEDITEM@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202b69;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010e070(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010e4cc Catch@1010e4cc

void Catch_1010e4cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010e4e0 Catch@1010e4e0

void Catch_1010e4e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MULTISELLNEEDEDITEM::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e500 FUN_1010e500

UObject * FUN_1010e500(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10366910);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010e530 UUIAPI_RADAR::execAddTarget

/* public: void __thiscall UUIAPI_RADAR::execAddTarget(struct FFrame &,void * const) */

void __thiscall UUIAPI_RADAR::execAddTarget(UUIAPI_RADAR *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10e530  1075  ?execAddTarget@UUIAPI_RADAR@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202b99;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_1010e500(uVar2);
  if (iVar3 != 0) {
    FUN_10042ec0(local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010e671 Catch@1010e671

void Catch_1010e671(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1010e685 Catch@1010e685

void Catch_1010e685(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_RADAR::execAddTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e6b0 UUIAPI_RADAR::execDeleteTarget

/* public: void __thiscall UUIAPI_RADAR::execDeleteTarget(struct FFrame &,void * const) */

void __thiscall UUIAPI_RADAR::execDeleteTarget(UUIAPI_RADAR *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10e6b0  1135  ?execDeleteTarget@UUIAPI_RADAR@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202bc9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_1010e500(uVar2);
  if (iVar3 != 0) {
    FUN_10042f60(local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010e7f1 Catch@1010e7f1

void Catch_1010e7f1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1010e805 Catch@1010e805

void Catch_1010e805(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_RADAR::execDeleteTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e830 UUIAPI_RADAR::execDeleteAllTarget

/* public: void __thiscall UUIAPI_RADAR::execDeleteAllTarget(struct FFrame &,void * const) */

void __thiscall UUIAPI_RADAR::execDeleteAllTarget(UUIAPI_RADAR *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10e830  1128  ?execDeleteAllTarget@UUIAPI_RADAR@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202bf9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010e500(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010e90c Catch@1010e90c

void Catch_1010e90c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010e920 Catch@1010e920

void Catch_1010e920(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_RADAR::execDeleteAllTarget");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e940 UUIAPI_RADAR::execSetRadarColor

/* public: void __thiscall UUIAPI_RADAR::execSetRadarColor(struct FFrame &,void * const) */

void __thiscall UUIAPI_RADAR::execSetRadarColor(UUIAPI_RADAR *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10e940  1782  ?execSetRadarColor@UUIAPI_RADAR@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202c29;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  FColor::FColor((FColor *)&local_1c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_1010e500(uVar2);
  if (iVar3 != 0) {
    FUN_10042a50(local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010ea6c Catch@1010ea6c

void Catch_1010ea6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010ea80 Catch@1010ea80

void Catch_1010ea80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_RADAR::execSetRadarColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010eaa0 UUIAPI_SHORTCUTITEMWINDOW::execUpdateShortcut

/* public: void __thiscall UUIAPI_SHORTCUTITEMWINDOW::execUpdateShortcut(struct FFrame &,void *
   const) */

void __thiscall
UUIAPI_SHORTCUTITEMWINDOW::execUpdateShortcut
          (UUIAPI_SHORTCUTITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10eaa0  1870
                       ?execUpdateShortcut@UUIAPI_SHORTCUTITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202c59;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_100181a0(uVar2);
  if (iVar3 != 0) {
    FUN_10047a40(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010eb98 Catch@1010eb98

void Catch_1010eb98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010ebac Catch@1010ebac

void Catch_1010ebac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_SHORTCUTITEMWINDOW::execUpdateShortcut");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ebd0 UUIAPI_SHORTCUTITEMWINDOW::execClear

/* public: void __thiscall UUIAPI_SHORTCUTITEMWINDOW::execClear(struct FFrame &,void * const) */

void __thiscall
UUIAPI_SHORTCUTITEMWINDOW::execClear(UUIAPI_SHORTCUTITEMWINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ebd0  1103  ?execClear@UUIAPI_SHORTCUTITEMWINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202c89;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_100181a0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010ecac Catch@1010ecac

void Catch_1010ecac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010ecc0 Catch@1010ecc0

void Catch_1010ecc0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_SHORTCUTITEMWINDOW::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ece0 FUN_1010ece0

UObject * FUN_1010ece0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10369290);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010ed10 UUIAPI_SLIDERCTRL::execGetCurrentTick

/* public: void __thiscall UUIAPI_SLIDERCTRL::execGetCurrentTick(struct FFrame &,void * const) */

void __thiscall
UUIAPI_SLIDERCTRL::execGetCurrentTick(UUIAPI_SLIDERCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ed10  1185  ?execGetCurrentTick@UUIAPI_SLIDERCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202cb9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010ece0(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_1004a5b0();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010edec Catch@1010edec

void Catch_1010edec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010ee00 Catch@1010ee00

void Catch_1010ee00(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_SLIDERCTRL::execGetCurrentTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ee20 UUIAPI_SLIDERCTRL::execSetCurrentTick

/* public: void __thiscall UUIAPI_SLIDERCTRL::execSetCurrentTick(struct FFrame &,void * const) */

void __thiscall
UUIAPI_SLIDERCTRL::execSetCurrentTick(UUIAPI_SLIDERCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ee20  1723  ?execSetCurrentTick@UUIAPI_SLIDERCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202ce9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ece0(uVar2);
  if (iVar3 != 0) {
    FUN_1004c0d0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010ef18 Catch@1010ef18

void Catch_1010ef18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010ef2c Catch@1010ef2c

void Catch_1010ef2c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_SLIDERCTRL::execSetCurrentTick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010ef50 FUN_1010ef50

UObject * FUN_1010ef50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036a750);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010ef80 UUIAPI_STATUSICONCTRL::execAddRow

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execAddRow(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execAddRow(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10ef80  1062  ?execAddRow@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202d19;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    FUN_1004ec30(0xffffffff);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010f059 Catch@1010f059

void Catch_1010f059(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010f06d Catch@1010f06d

void Catch_1010f06d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execAddRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f090 UUIAPI_STATUSICONCTRL::execInsertRow

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execInsertRow(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execInsertRow(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10f090  1462  ?execInsertRow@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202d49;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    FUN_1004ec30(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010f188 Catch@1010f188

void Catch_1010f188(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010f19c Catch@1010f19c

void Catch_1010f19c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execInsertRow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f1c0 UUIAPI_STATUSICONCTRL::execInsertCol

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execInsertCol(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execInsertCol(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_84;
  FStatusIconInfo local_74 [68];
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10f1c0  1455  ?execInsertCol@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202d81;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FStatusIconInfo::FStatusIconInfo(local_74);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_74);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    FUN_1004e370(local_1c,local_18,local_74);
  }
  local_8._0_1_ = 1;
  FStatusIconInfo::~FStatusIconInfo(local_74);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010f316 Catch@1010f316

void Catch_1010f316(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010f32a Catch@1010f32a

void Catch_1010f32a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execInsertCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f350 UUIAPI_STATUSICONCTRL::execAddCol

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execAddCol(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execAddCol(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_80;
  FStatusIconInfo local_70 [68];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10f350  1057  ?execAddCol@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202db1;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FStatusIconInfo::FStatusIconInfo(local_70);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_70);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    FUN_1004ecc0(local_18,local_70);
  }
  local_8._0_1_ = 1;
  FStatusIconInfo::~FStatusIconInfo(local_70);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010f481 Catch@1010f481

void Catch_1010f481(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010f495 Catch@1010f495

void Catch_1010f495(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execAddCol");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f4c0 UUIAPI_STATUSICONCTRL::execGetRowCount

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execGetRowCount(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execGetRowCount(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10f4c0  1362  ?execGetRowCount@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202dd9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 0;
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    uVar4 = FUN_1004d3f0();
  }
  *(undefined4 *)param_2 = uVar4;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010f5a0 Catch@1010f5a0

void Catch_1010f5a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010f5b4 Catch@1010f5b4

void Catch_1010f5b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execGetRowCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f5e0 UUIAPI_STATUSICONCTRL::execGetColCount

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execGetColCount(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execGetColCount(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10f5e0  1177  ?execGetColCount@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10202e09;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 0;
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    uVar4 = FUN_1004e450(local_18);
  }
  *(undefined4 *)param_2 = uVar4;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010f6e1 Catch@1010f6e1

void Catch_1010f6e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010f6f5 Catch@1010f6f5

void Catch_1010f6f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execGetColCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f720 UUIAPI_STATUSICONCTRL::execGetItem

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execGetItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execGetItem(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  FStatusIconInfo *this_00;
  uint uStack_84;
  FStatusIconInfo local_74 [68];
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10f720  1230  ?execGetItem@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202e41;
  local_10 = ExceptionList;
  uStack_84 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_84;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FStatusIconInfo::FStatusIconInfo(local_74);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_74);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_74;
  }
  else {
    this_00 = *(FStatusIconInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar4 = FUN_1010ef50(uVar3);
  FStringNoInit::operator=((FStringNoInit *)this_00,(ushort *)&DAT_1022f9f8);
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0xc),(ushort *)&DAT_1022f9f8);
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x1c),(ushort *)&DAT_1022f9f8);
  FStringNoInit::operator=((FStringNoInit *)(this_00 + 0x28),(ushort *)&DAT_1022f9f8);
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0;
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined4 *)(this_00 + 0x3c) = 0;
  *(uint *)(this_00 + 0x40) = *(uint *)(this_00 + 0x40) & 0xfffffffe;
  uVar2 = *(uint *)(this_00 + 0x40);
  *(uint *)(this_00 + 0x40) = uVar2 & 0xfffffffd;
  *(uint *)(this_00 + 0x40) = uVar2 & 0xfffffff9;
  *(uint *)(this_00 + 0x40) = uVar2 & 0xfffffff1;
  if (iVar4 != 0) {
    FUN_1004e4e0(local_1c,local_18,this_00);
  }
  local_8._0_1_ = 1;
  FStatusIconInfo::~FStatusIconInfo(local_74);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010f905 Catch@1010f905

void Catch_1010f905(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010f919 Catch@1010f919

void Catch_1010f919(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execGetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010f940 UUIAPI_STATUSICONCTRL::execDelItem

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execDelItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execDelItem(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10f940  1123  ?execDelItem@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202e69;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_1010ef50(uVar2);
  if (iVar3 != 0) {
    FUN_1004f210(local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1010fa5c Catch@1010fa5c

void Catch_1010fa5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1010fa70 Catch@1010fa70

void Catch_1010fa70(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execDelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010fa90 UUIAPI_STATUSICONCTRL::execClear

/* public: void __thiscall UUIAPI_STATUSICONCTRL::execClear(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSICONCTRL::execClear(UUIAPI_STATUSICONCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10fa90  1104  ?execClear@UUIAPI_STATUSICONCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202e99;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_1010ef50(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1010fb6c Catch@1010fb6c

void Catch_1010fb6c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010fb80 Catch@1010fb80

void Catch_1010fb80(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSICONCTRL::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010fba0 FUN_1010fba0

FString * FUN_1010fba0(FString *param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10202eda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(FString *)(in_ECX + 0x2e0));
  ExceptionList = local_c;
  return param_1;
}


// ==== 1010fc10 FUN_1010fc10

UObject * FUN_1010fc10(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036b1b0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 1010fc40 UUIAPI_TEXTBOX::execSetAlign

/* public: void __thiscall UUIAPI_TEXTBOX::execSetAlign(struct FFrame &,void * const) */

void __thiscall UUIAPI_TEXTBOX::execSetAlign(UUIAPI_TEXTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10fc40  1710  ?execSetAlign@UUIAPI_TEXTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202f09;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010fc10(uVar2);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x2ec) = local_18;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010fd36 Catch@1010fd36

void Catch_1010fd36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010fd4a Catch@1010fd4a

void Catch_1010fd4a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTBOX::execSetAlign");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010fd70 UUIAPI_TEXTBOX::execSetTextColor

/* public: void __thiscall UUIAPI_TEXTBOX::execSetTextColor(struct FFrame &,void * const) */

void __thiscall UUIAPI_TEXTBOX::execSetTextColor(UUIAPI_TEXTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x10fd70  1810  ?execSetTextColor@UUIAPI_TEXTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202f39;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  FColor::FColor((FColor *)&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_1010fc10(uVar2);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x348) =
         ((local_18 >> 0x10 & 0xff | 0xffffff00) << 8 | local_18 >> 8 & 0xff) << 8 | local_18 & 0xff
    ;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1010fe89 Catch@1010fe89

void Catch_1010fe89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1010fe9d Catch@1010fe9d

void Catch_1010fe9d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTBOX::execSetTextColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010fec0 UUIAPI_TEXTBOX::execSetText

/* public: void __thiscall UUIAPI_TEXTBOX::execSetText(struct FFrame &,void * const) */

void __thiscall UUIAPI_TEXTBOX::execSetText(UUIAPI_TEXTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString aFStack_64 [4];
  undefined4 uStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  FFrame *pFStack_4c;
  FString *pFStack_48;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10fec0  1808  ?execSetText@UUIAPI_TEXTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202f7b;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_48 = (FString *)0x1010fefb;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_48 = local_34;
  pFStack_4c = param_1;
  pFStack_50 = (FString *)0x1010ff23;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_50 = (FString *)0x1010ff2c;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_28;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x1010ff4d;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    pFStack_58 = (FString *)0x0;
    pFStack_5c = param_1;
    uStack_60 = 0x1010ff70;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_58 = local_34;
  pFStack_5c = (FFrame *)0x1010ff85;
  pFStack_5c = (FFrame *)(**(code **)(**(int **)GL2Console_exref + 0x778))();
  uStack_60 = 0x1010ff8b;
  iVar2 = FUN_1010fc10();
  if (iVar2 != 0) {
    FString::FString(aFStack_64,local_28);
    local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
    FUN_10052970();
  }
  local_8._0_1_ = 1;
  pFStack_5c = (FFrame *)0x1010ffc1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_5c = (FFrame *)0x1010ffce;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1010ffe9 Catch@1010ffe9

void Catch_1010ffe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1010fffd Catch@1010fffd

void Catch_1010fffd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTBOX::execSetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110020 UUIAPI_TEXTBOX::execGetText

/* public: void __thiscall UUIAPI_TEXTBOX::execGetText(struct FFrame &,void * const) */

void __thiscall UUIAPI_TEXTBOX::execGetText(UUIAPI_TEXTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x110020  1421  ?execGetText@UUIAPI_TEXTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202fb2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_1010fc10(uVar2);
  if (iVar3 != 0) {
    pFVar4 = (FString *)FUN_1010fba0(local_34);
    local_8._0_1_ = 2;
    FString::operator=(param_2,pFVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_34);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10110115 Catch@10110115

void Catch_10110115(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10110129 Catch@10110129

void Catch_10110129(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTBOX::execGetText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110150 UUIAPI_TEXTBOX::execSetInt

/* public: void __thiscall UUIAPI_TEXTBOX::execSetInt(struct FFrame &,void * const) */

void __thiscall UUIAPI_TEXTBOX::execSetInt(UUIAPI_TEXTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  FString aFStack_68 [4];
  undefined4 uStack_64;
  FFrame *pFStack_60;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x110150  1751  ?execSetInt@UUIAPI_TEXTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10202feb;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
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
    pFStack_60 = param_1;
    uStack_64 = 0x101101f3;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_60 = (FFrame *)0x101101fd;
  puVar2 = appItoa(local_18);
  pFStack_60 = (FFrame *)0x1011020a;
  FString::FString(local_38,puVar2);
  local_8._0_1_ = 2;
  pFStack_60 = (FFrame *)0x10110224;
  pFStack_60 = (FFrame *)(**(code **)(**(int **)GL2Console_exref + 0x778))();
  uStack_64 = 0x1011022a;
  iVar3 = FUN_1010fc10();
  if (iVar3 != 0) {
    FString::FString(aFStack_68,local_38);
    local_8._0_1_ = 2;
    FUN_10052970();
  }
  local_8._0_1_ = 1;
  pFStack_60 = (FFrame *)0x10110261;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_60 = (FFrame *)0x1011026d;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10110288 Catch@10110288

void Catch_10110288(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011029c Catch@1011029c

void Catch_1011029c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTBOX::execSetInt");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101102c0 UUIAPI_TEXTBOX::execSetTooltipString

/* public: void __thiscall UUIAPI_TEXTBOX::execSetTooltipString(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TEXTBOX::execSetTooltipString(UUIAPI_TEXTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1102c0  1827  ?execSetTooltipString@UUIAPI_TEXTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203022;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_1010fc10(uVar2);
  if (iVar3 != 0) {
    puVar4 = FString::operator*(local_28);
    FUN_100519c0(puVar4);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101103d9 Catch@101103d9

void Catch_101103d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101103ed Catch@101103ed

void Catch_101103ed(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTBOX::execSetTooltipString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110410 FUN_10110410

UObject * FUN_10110410(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036b6e0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10110440 UUIAPI_TEXTURECTRL::execSetUV

/* public: void __thiscall UUIAPI_TEXTURECTRL::execSetUV(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TEXTURECTRL::execSetUV(UUIAPI_TEXTURECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x110440  1837  ?execSetUV@UUIAPI_TEXTURECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203049;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10110410(uVar2);
  if (iVar3 != 0) {
    FUN_100532f0(local_18);
    FUN_10053380(local_1c);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10110565 Catch@10110565

void Catch_10110565(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10110579 Catch@10110579

void Catch_10110579(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTURECTRL::execSetUV");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101105a0 UUIAPI_TEXTURECTRL::execSetTexture

/* public: void __thiscall UUIAPI_TEXTURECTRL::execSetTexture(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TEXTURECTRL::execSetTexture(UUIAPI_TEXTURECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString aFStack_64 [4];
  undefined4 uStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  FFrame *pFStack_4c;
  FString *pFStack_48;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1105a0  1813  ?execSetTexture@UUIAPI_TEXTURECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020308b;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_48 = (FString *)0x101105db;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_48 = local_34;
  pFStack_4c = param_1;
  pFStack_50 = (FString *)0x10110603;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_50 = (FString *)0x1011060c;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_28;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x1011062d;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    pFStack_58 = (FString *)0x0;
    pFStack_5c = param_1;
    uStack_60 = 0x10110650;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_58 = local_34;
  pFStack_5c = (FFrame *)0x10110665;
  pFStack_5c = (FFrame *)(**(code **)(**(int **)GL2Console_exref + 0x778))();
  uStack_60 = 0x1011066b;
  iVar2 = FUN_10110410();
  if (iVar2 != 0) {
    FString::FString(aFStack_64,local_28);
    local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
    FUN_10052e50();
  }
  local_8._0_1_ = 1;
  pFStack_5c = (FFrame *)0x101106a1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_5c = (FFrame *)0x101106ae;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101106c9 Catch@101106c9

void Catch_101106c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101106dd Catch@101106dd

void Catch_101106dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTURECTRL::execSetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110700 UUIAPI_TEXTURECTRL::execSetTextureWithObject

/* public: void __thiscall UUIAPI_TEXTURECTRL::execSetTextureWithObject(struct FFrame &,void *
   const) */

void __thiscall
UUIAPI_TEXTURECTRL::execSetTextureWithObject(UUIAPI_TEXTURECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x110700  1821
                       ?execSetTextureWithObject@UUIAPI_TEXTURECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102030b9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10110410(uVar2);
  if (iVar3 != 0) {
    FUN_10052f30(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101107f8 Catch@101107f8

void Catch_101107f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011080c Catch@1011080c

void Catch_1011080c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTURECTRL::execSetTexture");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110830 UUIAPI_TEXTURECTRL::execSetTextureCtrlType

/* public: void __thiscall UUIAPI_TEXTURECTRL::execSetTextureCtrlType(struct FFrame &,void * const)
    */

void __thiscall
UUIAPI_TEXTURECTRL::execSetTextureCtrlType(UUIAPI_TEXTURECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x110830  1815
                       ?execSetTextureCtrlType@UUIAPI_TEXTURECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102030e9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10110410(uVar2);
  if (iVar3 != 0) {
    FUN_100531e0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10110928 Catch@10110928

void Catch_10110928(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011093c Catch@1011093c

void Catch_1011093c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTURECTRL::execSetTextureCtrlType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110960 UUIAPI_TEXTURECTRL::execSetTextureWithClanCrest

/* public: void __thiscall UUIAPI_TEXTURECTRL::execSetTextureWithClanCrest(struct FFrame &,void *
   const) */

void __thiscall
UUIAPI_TEXTURECTRL::execSetTextureWithClanCrest
          (UUIAPI_TEXTURECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x110960  1819
                       ?execSetTextureWithClanCrest@UUIAPI_TEXTURECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203119;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10110410(uVar2);
  if (iVar3 != 0) {
    FUN_10052fc0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10110a58 Catch@10110a58

void Catch_10110a58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10110a6c Catch@10110a6c

void Catch_10110a6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTURECTRL::execSetTextureType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110a90 UUIAPI_TEXTURECTRL::execGetTextureName

/* public: void __thiscall UUIAPI_TEXTURECTRL::execGetTextureName(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TEXTURECTRL::execGetTextureName(UUIAPI_TEXTURECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  UObject *this_00;
  ushort *puVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x110a90  1425  ?execGetTextureName@UUIAPI_TEXTURECTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10203152;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
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
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10110410(uVar2);
  if (piVar3 != (int *)0x0) {
    this_00 = (UObject *)(**(code **)(*piVar3 + 0x1f8))();
    if (this_00 != (UObject *)0x0) {
      puVar4 = UObject::GetName(this_00);
      FString::operator=(local_28,puVar4);
    }
  }
  FString::operator=(param_2,local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10110bad Catch@10110bad

void Catch_10110bad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10110bc1 Catch@10110bc1

void Catch_10110bc1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTURECTRL::execGetTextureName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110be0 FUN_10110be0

UObject * FUN_10110be0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1036dc38);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10110c10 UUIAPI_TREECTRL::execInsertNodeItem

/* public: void __thiscall UUIAPI_TREECTRL::execInsertNodeItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execInsertNodeItem(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_a4;
  FXMLTreeNodeItemInfo local_94 [96];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x110c10  1458  ?execInsertNodeItem@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020318d;
  local_10 = ExceptionList;
  uStack_a4 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_a4;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo(local_94);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_94);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 != 0) {
    FUN_1006b560(local_28,local_94);
  }
  local_8._0_1_ = 2;
  FXMLTreeNodeItemInfo::~FXMLTreeNodeItemInfo(local_94);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10110d69 Catch@10110d69

void Catch_10110d69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10110d7d Catch@10110d7d

void Catch_10110d7d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execInsertNodeItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110da0 UUIAPI_TREECTRL::execClear

/* public: void __thiscall UUIAPI_TREECTRL::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_TREECTRL::execClear(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x110da0  1106  ?execClear@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102031b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10110be0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10110e7c Catch@10110e7c

void Catch_10110e7c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10110e90 Catch@10110e90

void Catch_10110e90(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10110eb0 UUIAPI_TREECTRL::execSetNodeItemText

/* public: void __thiscall UUIAPI_TREECTRL::execSetNodeItemText(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execSetNodeItemText(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x110eb0  1766  ?execSetNodeItemText@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102031fb;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_44);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 != 0) {
    FUN_1006b770(local_38,local_18,local_2c);
  }
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 1011101f Catch@1011101f

void Catch_1011101f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10111033 Catch@10111033

void Catch_10111033(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execSetNodeItemText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111050 UUIAPI_TREECTRL::execSetExpandedNode

/* public: void __thiscall UUIAPI_TREECTRL::execSetExpandedNode(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execSetExpandedNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x111050  1733  ?execSetExpandedNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203232;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_38);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 != 0) {
    FUN_1006bb70(local_2c,local_18);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10111183 Catch@10111183

void Catch_10111183(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10111197 Catch@10111197

void Catch_10111197(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execSetExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101111c0 UUIAPI_TREECTRL::execIsNodeNameExist

/* public: void __thiscall UUIAPI_TREECTRL::execIsNodeNameExist(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execIsNodeNameExist(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1111c0  1493  ?execIsNodeNameExist@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203262;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = FUN_1006b830(local_28);
    *(undefined4 *)param_2 = uVar2;
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101112e1 Catch@101112e1

void Catch_101112e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101112f5 Catch@101112f5

void Catch_101112f5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execIsNodeNameExist");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111320 UUIAPI_TREECTRL::execGetChildNode

/* public: void __thiscall UUIAPI_TREECTRL::execGetChildNode(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execGetChildNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x111320  1166  ?execGetChildNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020329b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 == 0) {
    FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    pFVar4 = (FString *)FUN_1006b9b0(local_40,local_28);
    local_8._0_1_ = 3;
    FString::operator=(param_2,pFVar4);
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_40);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10111460 Catch@10111460

void Catch_10111460(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10111474 Catch@10111474

void Catch_10111474(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execGetChildNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101114a0 UUIAPI_TREECTRL::execIsExpandedNode

/* public: void __thiscall UUIAPI_TREECTRL::execIsExpandedNode(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execIsExpandedNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1114a0  1483  ?execIsExpandedNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102032d2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = FUN_1006b8f0(local_28);
    *(undefined4 *)param_2 = uVar2;
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101115c1 Catch@101115c1

void Catch_101115c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101115d5 Catch@101115d5

void Catch_101115d5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execIsExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111600 UUIAPI_TREECTRL::execGetParentNode

/* public: void __thiscall UUIAPI_TREECTRL::execGetParentNode(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execGetParentNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x111600  1282  ?execGetParentNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020330b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 == 0) {
    FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    pFVar4 = (FString *)FUN_1006baa0(local_40,local_28);
    local_8._0_1_ = 3;
    FString::operator=(param_2,pFVar4);
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_40);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10111740 Catch@10111740

void Catch_10111740(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10111754 Catch@10111754

void Catch_10111754(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execGetParentNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111780 UUIAPI_TREECTRL::execDeleteNode

/* public: void __thiscall UUIAPI_TREECTRL::execDeleteNode(struct FFrame &,void * const) */

void __thiscall UUIAPI_TREECTRL::execDeleteNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x111780  1131  ?execDeleteNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203342;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar2 = FUN_1006d820(local_28);
    *(undefined4 *)param_2 = uVar2;
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101118a1 Catch@101118a1

void Catch_101118a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101118b5 Catch@101118b5

void Catch_101118b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execDeleteNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101118e0 UUIAPI_TREECTRL::execGetExpandedNode

/* public: void __thiscall UUIAPI_TREECTRL::execGetExpandedNode(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execGetExpandedNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1118e0  1199  ?execGetExpandedNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020337b;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 == 0) {
    FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    pFVar4 = (FString *)FUN_1006bc20(local_40,local_28);
    local_8._0_1_ = 3;
    FString::operator=(param_2,pFVar4);
    local_8 = CONCAT31(local_8._1_3_,2);
    FString::~FString(local_40);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10111a20 Catch@10111a20

void Catch_10111a20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10111a34 Catch@10111a34

void Catch_10111a34(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execGetExpandedNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111a60 UUIAPI_TREECTRL::execShowScrollBar

/* public: void __thiscall UUIAPI_TREECTRL::execShowScrollBar(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TREECTRL::execShowScrollBar(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x111a60  1855  ?execShowScrollBar@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102033a9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10110be0(uVar2);
  if (iVar3 != 0) {
    FUN_10043c10(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10111b58 Catch@10111b58

void Catch_10111b58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10111b6c Catch@10111b6c

void Catch_10111b6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execShowScrollBar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111b90 UUIAPI_TREECTRL::execInsertNode

/* public: void __thiscall UUIAPI_TREECTRL::execInsertNode(struct FFrame &,void * const) */

void __thiscall UUIAPI_TREECTRL::execInsertNode(UUIAPI_TREECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_124;
  FXMLTreeNodeInfo local_114 [200];
  FString local_4c [16];
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x111b90  1457  ?execInsertNode@UUIAPI_TREECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102033ff;
  local_10 = ExceptionList;
  uStack_124 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_124;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  FString::FString(local_24);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  FXMLTreeNodeInfo::FXMLTreeNodeInfo(local_114);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_114);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10110be0(uVar2);
  FString::FString(local_3c);
  local_8._0_1_ = 4;
  if (iVar3 == 0) {
    FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  }
  else {
    pFVar4 = (FString *)FUN_1006d2d0(local_4c,local_24,local_114);
    local_8._0_1_ = 5;
    FString::operator=(local_3c,pFVar4);
    local_8._0_1_ = 4;
    FString::~FString(local_4c);
    FString::operator=(param_2,local_3c);
  }
  local_8._0_1_ = 3;
  FString::~FString(local_3c);
  local_8._0_1_ = 2;
  FXMLTreeNodeInfo::~FXMLTreeNodeInfo(local_114);
  local_8._0_1_ = 1;
  FString::~FString(local_24);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10111d41 Catch@10111d41

void Catch_10111d41(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10111d55 Catch@10111d55

void Catch_10111d55(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TREECTRL::execInsertNode");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111d80 UUIAPI_WINDOW::execIsShowWindow

/* public: void __thiscall UUIAPI_WINDOW::execIsShowWindow(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execIsShowWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x111d80  1502  ?execIsShowWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203429;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar3 + 0xfc))(0);
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10111e63 Catch@10111e63

void Catch_10111e63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10111e77 Catch@10111e77

void Catch_10111e77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execIsShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111ea0 UUIAPI_WINDOW::execIsMinimizedWindow

/* public: void __thiscall UUIAPI_WINDOW::execIsMinimizedWindow(struct FFrame &,void * const) */

void __thiscall
UUIAPI_WINDOW::execIsMinimizedWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x111ea0  1491  ?execIsMinimizedWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203459;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 0;
  local_18 = 0;
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10010290(uVar2);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x50) != 0)) {
    uVar4 = (**(code **)(**(int **)(iVar3 + 0x50) + 0xfc))(0);
    local_18 = uVar4;
  }
  *(undefined4 *)param_2 = uVar4;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10111f94 Catch@10111f94

void Catch_10111f94(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10111fa8 Catch@10111fa8

void Catch_10111fa8(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execIsMinimizedWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10111fd0 UUIAPI_WINDOW::execHideWindow

/* public: void __thiscall UUIAPI_WINDOW::execHideWindow(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execHideWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x111fd0  1447  ?execHideWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203489;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x13c))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101120ac Catch@101120ac

void Catch_101120ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101120c0 Catch@101120c0

void Catch_101120c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execHideWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101120e0 UUIAPI_WINDOW::execShowWindow

/* public: void __thiscall UUIAPI_WINDOW::execShowWindow(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execShowWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1120e0  1856  ?execShowWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102034b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x138))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101121bc Catch@101121bc

void Catch_101121bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101121d0 Catch@101121d0

void Catch_101121d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execShowWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101121f0 UUIAPI_WINDOW::execClear

/* public: void __thiscall UUIAPI_WINDOW::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execClear(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1121f0  1107  ?execClear@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102034e9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101122cc Catch@101122cc

void Catch_101122cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101122e0 Catch@101122e0

void Catch_101122e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112300 UUIAPI_WINDOW::execSetTooltipType

/* public: void __thiscall UUIAPI_WINDOW::execSetTooltipType(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetTooltipType(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x112300  1830  ?execSetTooltipType@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203522;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xac))(local_28);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10112416 Catch@10112416

void Catch_10112416(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011242a Catch@1011242a

void Catch_1011242a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetTooltipType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112450 UUIAPI_WINDOW::execSetTooltipText

/* public: void __thiscall UUIAPI_WINDOW::execSetTooltipText(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetTooltipText(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  FString aFStack_64 [4];
  undefined4 uStack_60;
  FFrame *pFStack_5c;
  FString *pFStack_58;
  FFrame *pFStack_54;
  FString *pFStack_50;
  FFrame *pFStack_4c;
  FString *pFStack_48;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x112450  1828  ?execSetTooltipText@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020355b;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  pFStack_48 = (FString *)0x1011248b;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_48 = local_34;
  pFStack_4c = param_1;
  pFStack_50 = (FString *)0x101124b3;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_50 = (FString *)0x101124bc;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_50 = local_28;
  pFStack_54 = param_1;
  pFStack_58 = (FString *)0x101124dd;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    pFStack_58 = (FString *)0x0;
    pFStack_5c = param_1;
    uStack_60 = 0x10112500;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_58 = local_34;
  pFStack_5c = (FFrame *)0x10112515;
  pFStack_5c = (FFrame *)(**(code **)(**(int **)GL2Console_exref + 0x778))();
  uStack_60 = 0x1011251b;
  piVar2 = (int *)FUN_10010290();
  if (piVar2 != (int *)0x0) {
    FString::FString(aFStack_64,local_28);
    local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
    (**(code **)(*piVar2 + 0xb0))();
  }
  local_8._0_1_ = 1;
  pFStack_5c = (FFrame *)0x10112556;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  pFStack_5c = (FFrame *)0x10112563;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011257e Catch@1011257e

void Catch_1011257e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10112592 Catch@10112592

void Catch_10112592(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101125b0 UUIAPI_WINDOW::execGetTooltipText

/* public: void __thiscall UUIAPI_WINDOW::execGetTooltipText(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execGetTooltipText(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  FString *pFVar4;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1125b0  1428  ?execGetTooltipText@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020359b;
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
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8._0_1_ = 2;
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    pFVar4 = (FString *)(**(code **)(*piVar3 + 0xb8))(local_40);
    local_8._0_1_ = 3;
    FString::operator=(local_28,pFVar4);
    local_8._0_1_ = 2;
    FString::~FString(local_40);
  }
  FString::operator=(param_2,local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101126d6 Catch@101126d6

void Catch_101126d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101126ea Catch@101126ea

void Catch_101126ea(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execGetTooltipText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112710 UUIAPI_WINDOW::execGetRect

/* public: void __thiscall UUIAPI_WINDOW::execGetRect(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execGetRect(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_58;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112710  1351  ?execGetRect@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102035c9;
  local_10 = ExceptionList;
  uStack_58 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_58;
  ExceptionList = &local_10;
  uVar6 = 0;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar5 = 0;
  uVar4 = 0;
  local_3c = 0;
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10010290(uVar2);
  if (iVar3 != 0) {
    local_34 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_10058770(&local_38);
    uVar6 = local_34;
    uVar5 = local_38;
    uVar4 = FUN_101c19e0();
    local_3c = FUN_101c19e0();
  }
  *(undefined4 *)param_2 = uVar5;
  *(undefined4 *)((int)param_2 + 4) = uVar6;
  *(undefined4 *)((int)param_2 + 8) = uVar4;
  *(undefined4 *)((int)param_2 + 0xc) = local_3c;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011283f Catch@1011283f

void Catch_1011283f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10112853 Catch@10112853

void Catch_10112853(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execGetRect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112870 UUIAPI_WINDOW::execSetUITimer

/* public: void __thiscall UUIAPI_WINDOW::execSetUITimer(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetUITimer(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112870  1835  ?execSetUITimer@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102035f9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10010290(uVar2);
  if (iVar3 != 0) {
    FUN_10150550(local_1c,local_18,iVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10112991 Catch@10112991

void Catch_10112991(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101129a5 Catch@101129a5

void Catch_101129a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetUITimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101129d0 UUIAPI_WINDOW::execKillUITimer

/* public: void __thiscall UUIAPI_WINDOW::execKillUITimer(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execKillUITimer(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1129d0  1513  ?execKillUITimer@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203629;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10010290(uVar2);
  if (iVar3 != 0) {
    FUN_1014b5f0(local_18,iVar3);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10112acd Catch@10112acd

void Catch_10112acd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10112ae1 Catch@10112ae1

void Catch_10112ae1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execKillUITimer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112b00 UUIAPI_WINDOW::execSetWindowTitle

/* public: void __thiscall UUIAPI_WINDOW::execSetWindowTitle(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetWindowTitle(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112b00  1848  ?execSetWindowTitle@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203659;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x164))(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10112bfd Catch@10112bfd

void Catch_10112bfd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10112c11 Catch@10112c11

void Catch_10112c11(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetWindowTitle");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112c30 UUIAPI_WINDOW::execEnableWindow

/* public: void __thiscall UUIAPI_WINDOW::execEnableWindow(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execEnableWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112c30  1141  ?execEnableWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203689;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x118))(1);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10112d0d Catch@10112d0d

void Catch_10112d0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10112d21 Catch@10112d21

void Catch_10112d21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execEnableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112d40 UUIAPI_WINDOW::execDisableWindow

/* public: void __thiscall UUIAPI_WINDOW::execDisableWindow(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execDisableWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112d40  1136  ?execDisableWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102036b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x118))(0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10112e1e Catch@10112e1e

void Catch_10112e1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10112e32 Catch@10112e32

void Catch_10112e32(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execDisableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112e50 UUIAPI_WINDOW::execIsEnableWindow

/* public: void __thiscall UUIAPI_WINDOW::execIsEnableWindow(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execIsEnableWindow(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112e50  1481  ?execIsEnableWindow@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102036e9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar3 + 0x6c))();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10112f34 Catch@10112f34

void Catch_10112f34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10112f48 Catch@10112f48

void Catch_10112f48(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execIsEnableWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10112f70 UUIAPI_WINDOW::execSetAlwaysOnTop

/* public: void __thiscall UUIAPI_WINDOW::execSetAlwaysOnTop(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetAlwaysOnTop(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x112f70  1713  ?execSetAlwaysOnTop@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203719;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    if (local_18 == 0) {
      pcVar4 = *(code **)(*piVar3 + 0x124);
    }
    else {
      pcVar4 = *(code **)(*piVar3 + 0x120);
    }
    (*pcVar4)(0x800000);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011307b Catch@1011307b

void Catch_1011307b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011308f Catch@1011308f

void Catch_1011308f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetAlwaysOnTop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101130b0 UUIAPI_WINDOW::execSetAlpha

/* public: void __thiscall UUIAPI_WINDOW::execSetAlpha(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetAlpha(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1130b0  1711  ?execSetAlpha@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203749;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xe8))(local_1c,local_18,1);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 101131da Catch@101131da

void Catch_101131da(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101131ee Catch@101131ee

void Catch_101131ee(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetAlpha");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113210 UUIAPI_WINDOW::execMoveTo

/* public: void __thiscall UUIAPI_WINDOW::execMoveTo(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execMoveTo(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113210  1534  ?execMoveTo@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203779;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x144))(local_1c,local_18,0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10113339 Catch@10113339

void Catch_10113339(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1011334d Catch@1011334d

void Catch_1011334d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execMoveTo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113370 UUIAPI_WINDOW::execMoveEx

/* public: void __thiscall UUIAPI_WINDOW::execMoveEx(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execMoveEx(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113370  1530  ?execMoveEx@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102037a9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14c))(local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10113491 Catch@10113491

void Catch_10113491(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101134a5 Catch@101134a5

void Catch_101134a5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execMoveEx");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101134d0 UUIAPI_WINDOW::execIconize

/* public: void __thiscall UUIAPI_WINDOW::execIconize(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execIconize(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1134d0  1449  ?execIconize@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102037e2;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_38);
  iVar3 = FUN_10010290(uVar2);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x50) != 0)) {
    uVar5 = 0;
    uVar2 = local_18;
    puVar4 = FString::operator*(local_2c);
    FUN_10023870(puVar4,uVar2,uVar5);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10113612 Catch@10113612

void Catch_10113612(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10113626 Catch@10113626

void Catch_10113626(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execIconize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113650 UUIAPI_WINDOW::execNotifyAlarm

/* public: void __thiscall UUIAPI_WINDOW::execNotifyAlarm(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execNotifyAlarm(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113650  1536  ?execNotifyAlarm@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203809;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10010290(uVar2);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x50) != 0)) {
    (**(code **)(**(int **)(iVar3 + 0x50) + 0x17c))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10113735 Catch@10113735

void Catch_10113735(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10113749 Catch@10113749

void Catch_10113749(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execNotifyAlarm");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113770 UUIAPI_WINDOW::execSetFocus

/* public: void __thiscall UUIAPI_WINDOW::execSetFocus(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetFocus(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113770  1736  ?execSetFocus@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203839;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x78))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10113849 Catch@10113849

void Catch_10113849(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011385d Catch@1011385d

void Catch_1011385d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetFocus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113880 UUIAPI_WINDOW::execIsFocused

/* public: void __thiscall UUIAPI_WINDOW::execIsFocused(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execIsFocused(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113880  1484  ?execIsFocused@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203869;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar3 + 0x74))();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011395e Catch@1011395e

void Catch_1011395e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10113972 Catch@10113972

void Catch_10113972(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execIsFocused");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113990 UUIAPI_WINDOW::execSetWindowSizeRel43

/* public: void __thiscall UUIAPI_WINDOW::execSetWindowSizeRel43(struct FFrame &,void * const) */

void __thiscall
UUIAPI_WINDOW::execSetWindowSizeRel43(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_48;
  FString local_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113990  1844  ?execSetWindowSizeRel43@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10203899;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_38);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x134))(local_24,local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10113b09 Catch@10113b09

void Catch_10113b09(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10113b1d Catch@10113b1d

void Catch_10113b1d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetWindowSizeRel43");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113b40 UUIAPI_WINDOW::execSetWindowSize

/* public: void __thiscall UUIAPI_WINDOW::execSetWindowSize(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetWindowSize(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_40;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113b40  1842  ?execSetWindowSize@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102038c9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x128))((float)local_1c,(float)local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10113c6b Catch@10113c6b

void Catch_10113c6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10113c7f Catch@10113c7f

void Catch_10113c7f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetWindowSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113ca0 UUIAPI_WINDOW::execSetWindowSizeRel

/* public: void __thiscall UUIAPI_WINDOW::execSetWindowSizeRel(struct FFrame &,void * const) */

void __thiscall
UUIAPI_WINDOW::execSetWindowSizeRel(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_48;
  FString local_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113ca0  1846  ?execSetWindowSizeRel@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102038f9;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  local_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_38);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x130))(local_24,local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10113e19 Catch@10113e19

void Catch_10113e19(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 10113e2d Catch@10113e2d

void Catch_10113e2d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetWindowSizeRel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113e50 UUIAPI_WINDOW::execSetFrameSize

/* public: void __thiscall UUIAPI_WINDOW::execSetFrameSize(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetFrameSize(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_40;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113e50  1738  ?execSetFrameSize@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203929;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xa8))((float)local_1c,(float)local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10113f7b Catch@10113f7b

void Catch_10113f7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10113f8f Catch@10113f8f

void Catch_10113f8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113fb0 UUIAPI_WINDOW::execSetResizeFrameSize

/* public: void __thiscall UUIAPI_WINDOW::execSetResizeFrameSize(struct FFrame &,void * const) */

void __thiscall
UUIAPI_WINDOW::execSetResizeFrameSize(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x113fb0  1785  ?execSetResizeFrameSize@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10203959;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10010290(uVar2);
  if (iVar3 != 0) {
    FUN_10057f80(&local_40);
    local_38 = (float)local_18;
    local_34 = (float)local_1c;
    FUN_1005c050(local_40,local_3c,local_38,local_34);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 101140fb Catch@101140fb

void Catch_101140fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1011410f Catch@1011410f

void Catch_1011410f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetResizeFrameSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114130 UUIAPI_WINDOW::execSetWindowTitleByText

/* public: void __thiscall UUIAPI_WINDOW::execSetWindowTitleByText(struct FFrame &,void * const) */

void __thiscall
UUIAPI_WINDOW::execSetWindowTitleByText(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort *puVar5;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x114130  1850  ?execSetWindowTitleByText@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10203992;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar4 = (int *)FUN_10010290(uVar3);
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    puVar5 = FString::operator*(local_28);
    (**(code **)(iVar2 + 0x168))(puVar5);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011424e Catch@1011424e

void Catch_1011424e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10114262 Catch@10114262

void Catch_10114262(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetWindowTitleByText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114280 UUIAPI_WINDOW::execMoveShake

/* public: void __thiscall UUIAPI_WINDOW::execMoveShake(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execMoveShake(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  FString *this_00;
  ushort *puVar5;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x114280  1532  ?execMoveShake@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102039c2;
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
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_1005a330();
    if (iVar4 != 0) {
      this_00 = (FString *)FUN_10057590(local_40);
      local_8._0_1_ = 2;
      puVar5 = FString::operator*(this_00);
      uVar2 = FUN_10005c30(L"Cannot move anchored window(%s)",puVar5);
      FUN_100d01f0(uVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_40);
    }
    (**(code **)(*piVar3 + 0x150))(local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10114412 Catch@10114412

void Catch_10114412(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10114426 Catch@10114426

void Catch_10114426(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execMoveShake");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114450 UUIAPI_WINDOW::execMove

/* public: void __thiscall UUIAPI_WINDOW::execMove(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execMove(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  uint uStack_44;
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x114450  1528  ?execMove@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102039e9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10010290(uVar2);
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_1005a330();
    if (iVar4 != 0) {
      puVar5 = FString::operator*(local_34);
      uVar2 = FUN_10005c30(L"Cannot move anchored window(%s)",puVar5);
      FUN_100d01f0(uVar2);
    }
    (**(code **)(*piVar3 + 0x148))(local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 101145c7 Catch@101145c7

void Catch_101145c7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101145db Catch@101145db

void Catch_101145db(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execMove");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114600 UUIAPI_WINDOW::execSetAnchor

/* public: void __thiscall UUIAPI_WINDOW::execSetAnchor(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetAnchor(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uStack_80;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [20];
  int *local_2c;
  FString local_28 [4];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x114600  1714  ?execSetAnchor@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203ad6;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_64);
  local_8._0_1_ = 1;
  bVar5 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar5 * 4))(param_1,local_64);
  FString::FString(local_58);
  local_8._0_1_ = 2;
  bVar5 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar5 * 4))(param_1,local_58);
  FString::FString(local_4c);
  local_8._0_1_ = 3;
  bVar5 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar5 * 4))(param_1,local_4c);
  FString::FString(local_40);
  local_8._0_1_ = 4;
  bVar5 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar5 * 4))(param_1,local_40);
  local_18 = 0;
  bVar5 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar5 * 4))(param_1,&local_18);
  local_1c = 0;
  bVar5 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar5 * 4))(param_1,&local_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar7 = 0;
  pFVar3 = local_64;
  FUN_10005c30(pFVar3,0);
  piVar1 = (int *)FUN_100d0cb0(pFVar3,uVar7);
  local_2c = piVar1;
  iVar2 = FString::Len(local_58);
  if (iVar2 == 0) {
    iVar2 = *(int *)(DAT_103663bc + 0x50ac);
  }
  else {
    uVar7 = 0;
    pFVar3 = local_58;
    FUN_10005c30(pFVar3,0);
    iVar2 = FUN_100d0cb0(pFVar3,uVar7);
  }
  if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
    pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopLeft");
    local_8._0_1_ = 5;
    iVar4 = FString::operator==(local_4c,pFVar3);
    local_8._0_1_ = 4;
    FString::~FString(local_28);
    if (iVar4 == 0) {
      pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopCenter");
      local_8._0_1_ = 6;
      iVar4 = FString::operator==(local_4c,pFVar3);
      local_8._0_1_ = 4;
      FString::~FString(local_28);
      if (iVar4 == 0) {
        pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"TopRight");
        local_8._0_1_ = 7;
        iVar4 = FString::operator==(local_4c,pFVar3);
        local_8._0_1_ = 4;
        FString::~FString(local_28);
        if (iVar4 == 0) {
          pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterLeft");
          local_8._0_1_ = 8;
          iVar4 = FString::operator==(local_4c,pFVar3);
          local_8._0_1_ = 4;
          FString::~FString(local_28);
          if (iVar4 == 0) {
            pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterCenter");
            local_8._0_1_ = 9;
            iVar4 = FString::operator==(local_4c,pFVar3);
            local_8._0_1_ = 4;
            FString::~FString(local_28);
            if (iVar4 == 0) {
              pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"CenterRight");
              local_8._0_1_ = 10;
              iVar4 = FString::operator==(local_4c,pFVar3);
              local_8._0_1_ = 4;
              FString::~FString(local_28);
              if (iVar4 == 0) {
                pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomLeft");
                local_8._0_1_ = 0xb;
                iVar4 = FString::operator==(local_4c,pFVar3);
                local_8._0_1_ = 4;
                FString::~FString(local_28);
                if (iVar4 == 0) {
                  pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomCenter");
                  local_8._0_1_ = 0xc;
                  iVar4 = FString::operator==(local_4c,pFVar3);
                  local_8._0_1_ = 4;
                  FString::~FString(local_28);
                  if (iVar4 == 0) {
                    pFVar3 = (FString *)FString::FString(local_28,(ushort *)L"BottomRight");
                    local_8._0_1_ = 0xd;
                    iVar4 = FString::operator==(local_4c,pFVar3);
                    local_8._0_1_ = 4;
                    FString::~FString(local_28);
                    bVar5 = -(iVar4 != 0) & 9;
                  }
                  else {
                    bVar5 = 8;
                  }
                }
                else {
                  bVar5 = 7;
                }
              }
              else {
                bVar5 = 6;
              }
            }
            else {
              bVar5 = 5;
            }
          }
          else {
            bVar5 = 4;
          }
        }
        else {
          bVar5 = 3;
        }
      }
      else {
        bVar5 = 2;
      }
    }
    else {
      bVar5 = 1;
    }
    pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"TopLeft");
    local_8._0_1_ = 0xe;
    local_20 = FString::operator==(local_40,pFVar3);
    local_8._0_1_ = 4;
    FString::~FString(local_70);
    if (local_20 == 0) {
      pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"TopCenter");
      local_8._0_1_ = 0xf;
      local_20 = FString::operator==(local_40,pFVar3);
      local_8._0_1_ = 4;
      FString::~FString(local_70);
      if (local_20 == 0) {
        pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"TopRight");
        local_8._0_1_ = 0x10;
        local_20 = FString::operator==(local_40,pFVar3);
        local_8._0_1_ = 4;
        FString::~FString(local_70);
        if (local_20 == 0) {
          pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"CenterLeft");
          local_8._0_1_ = 0x11;
          local_20 = FString::operator==(local_40,pFVar3);
          local_8._0_1_ = 4;
          FString::~FString(local_70);
          if (local_20 == 0) {
            pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"CenterCenter");
            local_8._0_1_ = 0x12;
            iVar4 = FString::operator==(local_40,pFVar3);
            local_8._0_1_ = 4;
            FString::~FString(local_70);
            if (iVar4 == 0) {
              pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"CenterRight");
              local_8._0_1_ = 0x13;
              iVar4 = FString::operator==(local_40,pFVar3);
              local_8._0_1_ = 4;
              FString::~FString(local_70);
              if (iVar4 == 0) {
                pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"BottomLeft");
                local_8._0_1_ = 0x14;
                iVar4 = FString::operator==(local_40,pFVar3);
                local_8._0_1_ = 4;
                FString::~FString(local_70);
                if (iVar4 == 0) {
                  pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"BottomCenter");
                  local_8._0_1_ = 0x15;
                  iVar4 = FString::operator==(local_40,pFVar3);
                  local_8._0_1_ = 4;
                  FString::~FString(local_70);
                  if (iVar4 == 0) {
                    pFVar3 = (FString *)FString::FString(local_70,(ushort *)L"BottomRight");
                    local_8._0_1_ = 0x16;
                    iVar4 = FString::operator==(local_40,pFVar3);
                    local_8._0_1_ = 4;
                    FString::~FString(local_70);
                    bVar6 = -(iVar4 != 0) & 9;
                  }
                  else {
                    bVar6 = 8;
                  }
                }
                else {
                  bVar6 = 7;
                }
              }
              else {
                bVar6 = 6;
              }
            }
            else {
              bVar6 = 5;
            }
          }
          else {
            bVar6 = 4;
          }
        }
        else {
          bVar6 = 3;
        }
      }
      else {
        bVar6 = 2;
      }
    }
    else {
      bVar6 = 1;
    }
    local_24 = local_18;
    (**(code **)(*local_2c + 0xd4))(bVar6,bVar5,iVar2,local_18,local_1c,0);
  }
  local_8._0_1_ = 3;
  FString::~FString(local_40);
  local_8._0_1_ = 2;
  FString::~FString(local_4c);
  local_8._0_1_ = 1;
  FString::~FString(local_58);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_64);
  ExceptionList = local_10;
  return;
}


// ==== 10114beb Catch@10114beb

void Catch_10114beb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_102a47f0);
}


// ==== 10114bff Catch@10114bff

void Catch_10114bff(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114c20 UUIAPI_WINDOW::execClearAnchor

/* public: void __thiscall UUIAPI_WINDOW::execClearAnchor(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execClearAnchor(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  FString *pFVar3;
  undefined4 uVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x114c20  1108  ?execClearAnchor@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203b09;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = 0;
  pFVar3 = local_28;
  FUN_10005c30(pFVar3,0);
  piVar2 = (int *)FUN_100d0cb0(pFVar3,uVar4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xe4))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10114cf0 Catch@10114cf0

void Catch_10114cf0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10114d04 Catch@10114d04

void Catch_10114d04(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execClearAnchor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114d30 UUIAPI_WINDOW::execSetTabOrder

/* public: void __thiscall UUIAPI_WINDOW::execSetTabOrder(struct FFrame &,void * const) */

void __thiscall UUIAPI_WINDOW::execSetTabOrder(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  undefined4 uVar6;
  uint uStack_54;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x114d30  1805  ?execSetTabOrder@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203b4b;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  FString::FString(local_38);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar6 = 0;
  pFVar5 = local_44;
  FUN_10005c30(pFVar5,0);
  piVar2 = (int *)FUN_100d0cb0(pFVar5,uVar6);
  uVar6 = 0;
  pFVar5 = local_38;
  FUN_10005c30(pFVar5,0);
  iVar3 = FUN_100d0cb0(pFVar5,uVar6);
  uVar6 = 0;
  pFVar5 = local_2c;
  FUN_10005c30(pFVar5,0);
  iVar4 = FUN_100d0cb0(pFVar5,uVar6);
  local_18 = 0;
  param_1 = (FFrame *)0x0;
  if (iVar3 != 0) {
    local_18 = FUN_10058020();
  }
  if (iVar4 != 0) {
    param_1 = (FFrame *)FUN_10058020();
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10c))(local_18,param_1);
  }
  local_8._0_1_ = 2;
  FString::~FString(local_2c);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 10114ec5 Catch@10114ec5

void Catch_10114ec5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10114ed9 Catch@10114ed9

void Catch_10114ed9(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execSetTabOrder");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10114f00 UUIAPI_WINDOW::execGetSelectedRadioButtonName

/* public: void __thiscall UUIAPI_WINDOW::execGetSelectedRadioButtonName(struct FFrame &,void *
   const) */

void __thiscall
UUIAPI_WINDOW::execGetSelectedRadioButtonName(UUIAPI_WINDOW *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *pFVar3;
  undefined4 uVar4;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x114f00  1376
                       ?execGetSelectedRadioButtonName@UUIAPI_WINDOW@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203b82;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(param_2,(ushort *)&DAT_1022f9f8);
  uVar4 = 0;
  pFVar3 = local_2c;
  FUN_10005c30(pFVar3,0);
  uVar4 = FUN_100d0cb0(pFVar3,uVar4);
  iVar2 = FUN_10005c80(uVar4);
  if (iVar2 != 0) {
    iVar2 = FUN_1001f340(local_18);
    if (iVar2 != 0) {
      pFVar3 = (FString *)FUN_10057590(local_38);
      local_8._0_1_ = 2;
      FString::operator=(param_2,pFVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_38);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011502c Catch@1011502c

void Catch_1011502c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10115040 Catch@10115040

void Catch_10115040(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_WINDOW::execGetSelectedRadioButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115060 FItemInfo::FItemInfo

/* public: __thiscall FItemInfo::FItemInfo(void) */

FItemInfo * __thiscall FItemInfo::FItemInfo(FItemInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x115060  19  ??0FItemInfo@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10203c21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x24));
  local_4._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x30));
  local_4._0_1_ = 4;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4._0_1_ = 5;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4._0_1_ = 6;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x54));
  local_4._0_1_ = 7;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x60));
  local_4._0_1_ = 8;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x6c));
  local_4._0_1_ = 9;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x7c));
  local_4 = CONCAT31(local_4._1_3_,10);
  appMemset(this,0,0xc);
  appMemset((FStringNoInit *)(this + 0xc),0,0xc);
  appMemset((FStringNoInit *)(this + 0x18),0,0xc);
  appMemset(this + 0x24,0,0xc);
  appMemset(this + 0x30,0,0xc);
  appMemset(this + 0x3c,0,0xc);
  appMemset(this + 0x48,0,0xc);
  appMemset(this + 0x54,0,0xc);
  appMemset(this + 0x60,0,0xc);
  appMemset(this + 0x6c,0,0xc);
  appMemset(this + 0x7c,0,0xc);
  *(uint *)(this + 0x130) = *(uint *)(this + 0x130) & 0xffffffdf;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  *(undefined4 *)(this + 300) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 10115210 FLVTexture::FLVTexture

/* public: __thiscall FLVTexture::FLVTexture(void) */

void __thiscall FLVTexture::FLVTexture(FLVTexture *this)

{
                    /* 0x115210  24  ??0FLVTexture@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


// ==== 10115230 FUserInfo::FUserInfo

/* public: __thiscall FUserInfo::FUserInfo(void) */

FUserInfo * __thiscall FUserInfo::FUserInfo(FUserInfo *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115230  36  ??0FUserInfo@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203c58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4));
  local_8 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10));
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  appMemset((FStringNoInit *)(this + 4),0,0xc);
  appMemset(this + 0x10,0,0xc);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) & 0xfffffffe;
  uVar1 = *(uint *)(this + 0xcc);
  *(uint *)(this + 0xcc) = uVar1 & 0xfffffffd;
  *(uint *)(this + 0xcc) = uVar1 & 0xfffffff9;
  *(uint *)(this + 0xcc) = uVar1 & 0xfffffff1;
  *(uint *)(this + 0xcc) = uVar1 & 0xffffffe1;
  ExceptionList = local_10;
  return this;
}


// ==== 101153a8 Catch@101153a8

void Catch_101153a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101153bc Catch@101153bc

void Catch_101153bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FUserInfo::FUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101153e0 FSkillInfo::FSkillInfo

/* public: __thiscall FSkillInfo::FSkillInfo(void) */

FSkillInfo * __thiscall FSkillInfo::FSkillInfo(FSkillInfo *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1153e0  30  ??0FSkillInfo@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203cd1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)this);
  local_8 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  local_8._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x40));
  local_8._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x4c));
  local_8._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x58));
  local_8._0_1_ = 4;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x68));
  local_8._0_1_ = 5;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x74));
  local_8 = CONCAT31(local_8._1_3_,7);
  appMemset(this,0,0xc);
  appMemset(this + 0xc,0,0xc);
  appMemset(this + 0x40,0,0xc);
  appMemset(this + 0x4c,0,0xc);
  appMemset(this + 0x58,0,0xc);
  appMemset(this + 0x68,0,0xc);
  appMemset(this + 0x74,0,0xc);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(uint *)(this + 0x38) = *(uint *)(this + 0x38) & 0xfffffffe;
  *(undefined4 *)(this + 0x3c) = 0;
  *(uint *)(this + 100) = *(uint *)(this + 100) & 0xfffffffe;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  ExceptionList = local_10;
  return this;
}


// ==== 10115512 Catch@10115512

void Catch_10115512(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10115526 Catch@10115526

void Catch_10115526(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FSkillInfo::FSkillInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115550 FHennaInfo::FHennaInfo

/* public: __thiscall FHennaInfo::FHennaInfo(void) */

void __thiscall FHennaInfo::FHennaInfo(FHennaInfo *this)

{
                    /* 0x115550  17  ??0FHennaInfo@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


// ==== 101155cd Catch@101155cd

void Catch_101155cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101155e1 Catch@101155e1

void Catch_101155e1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FHennaInfo::FHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115600 FMacroInfo::FMacroInfo

/* public: __thiscall FMacroInfo::FMacroInfo(void) */

FMacroInfo * __thiscall FMacroInfo::FMacroInfo(FMacroInfo *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115600  26  ??0FMacroInfo@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203d57;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4));
  local_8 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10));
  local_8._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x1c));
  local_8._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x28));
  local_8._0_1_ = 3;
  _eh_vector_constructor_iterator_(this + 0x34,0xc,0xc,FStringNoInit_exref,~FStringNoInit_exref);
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined4 *)this = 0;
  appMemset((FStringNoInit *)(this + 4),0,0xc);
  appMemset((FStringNoInit *)(this + 0x10),0,0xc);
  appMemset(this + 0x1c,0,0xc);
  appMemset(this + 0x28,0,0xc);
  appMemset(this + 0x34,0,0x90);
  ExceptionList = local_10;
  return this;
}


// ==== 101156e7 Catch@101156e7

void Catch_101156e7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101156fb Catch@101156fb

void Catch_101156fb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FMacroInfo::FMacroInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115720 FSystemMsgData::FSystemMsgData

/* public: __thiscall FSystemMsgData::FSystemMsgData(void) */

FSystemMsgData * __thiscall FSystemMsgData::FSystemMsgData(FSystemMsgData *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115720  34  ??0FSystemMsgData@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203db9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)this);
  local_8 = 0;
  FColor::FColor((FColor *)(this + 0xc));
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10));
  local_8._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x1c));
  local_8._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_8._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48));
  local_8 = CONCAT31(local_8._1_3_,5);
  appMemset(this,0,0xc);
  appMemset((FStringNoInit *)(this + 0x10),0,0xc);
  appMemset(this + 0x1c,0,0xc);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  appMemset(this + 0x3c,0,0xc);
  appMemset(this + 0x48,0,0xc);
  ExceptionList = local_10;
  return this;
}


// ==== 101157fe Catch@101157fe

void Catch_101157fe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10115812 Catch@10115812

void Catch_10115812(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FSystemMsgData::FSystemMsgData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115830 FPetInfo::FPetInfo

/* public: __thiscall FPetInfo::FPetInfo(void) */

FPetInfo * __thiscall FPetInfo::FPetInfo(FPetInfo *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115830  28  ??0FPetInfo@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203dec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4));
  local_8 = 1;
  *(undefined4 *)this = 0;
  appMemset((FStringNoInit *)(this + 4),0,0xc);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(uint *)(this + 0x80) = *(uint *)(this + 0x80) & 0xfffffffe;
  ExceptionList = local_10;
  return this;
}


// ==== 101158f9 Catch@101158f9

void Catch_101158f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011590d Catch@1011590d

void Catch_1011590d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FPetInfo::FPetInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115930 FDrawItemInfo::FDrawItemInfo

/* public: __thiscall FDrawItemInfo::FDrawItemInfo(void) */

FDrawItemInfo * __thiscall FDrawItemInfo::FDrawItemInfo(FDrawItemInfo *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  FColor local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x115930  8  ??0FDrawItemInfo@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10203e34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18));
  local_4 = 0;
  FColor::FColor((FColor *)(this + 0x24));
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffe;
  *this = (FDrawItemInfo)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  puVar2 = (undefined4 *)FColor::FColor(local_10,0xff,0xff,0xff,0xff);
  uVar1 = *puVar2;
  *(uint *)(this + 0x28) = *(uint *)(this + 0x28) & 0xfffffffe;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  appMemset((FStringNoInit *)(this + 0x18),0,0xc);
  appMemset(this + 0x3c,0,0xc);
  appMemset(this + 0x48,0,0xc);
  ExceptionList = local_c;
  return this;
}


// ==== 10115a20 FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo

/* public: __thiscall FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo(void) */

FXMLTreeNodeItemInfo * __thiscall
FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo(FXMLTreeNodeItemInfo *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  FColor local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x115a20  40  ??0FXMLTreeNodeItemInfo@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10203e80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18));
  local_4 = 0;
  FColor::FColor((FColor *)(this + 0x24));
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x3c));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x48));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x54));
  local_4 = CONCAT31(local_4._1_3_,3);
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffc;
  *this = (FXMLTreeNodeItemInfo)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  puVar2 = (undefined4 *)FColor::FColor(local_10,0xff,0xff,0xff,0xff);
  uVar1 = *puVar2;
  *(uint *)(this + 0x28) = *(uint *)(this + 0x28) & 0xfffffffe;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  appMemset((FStringNoInit *)(this + 0x18),0,0xc);
  appMemset(this + 0x3c,0,0xc);
  appMemset(this + 0x48,0,0xc);
  appMemset(this + 0x54,0,0xc);
  ExceptionList = local_c;
  return this;
}


// ==== 10115b20 FStatusIconInfo::FStatusIconInfo

/* public: __thiscall FStatusIconInfo::FStatusIconInfo(void) */

FStatusIconInfo * __thiscall FStatusIconInfo::FStatusIconInfo(FStatusIconInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x115b20  32  ??0FStatusIconInfo@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10203ecd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x1c));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x28));
  local_4 = CONCAT31(local_4._1_3_,3);
  appMemset(this,0,0xc);
  appMemset((FStringNoInit *)(this + 0xc),0,0xc);
  appMemset((FStringNoInit *)(this + 0x1c),0,0xc);
  appMemset(this + 0x28,0,0xc);
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xfffffff0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 10115be0 FGameTipData::FGameTipData

/* public: __thiscall FGameTipData::FGameTipData(void) */

FGameTipData * __thiscall FGameTipData::FGameTipData(FGameTipData *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115be0  16  ??0FGameTipData@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203efc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x10));
  local_8 = 1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffe;
  appMemset((FStringNoInit *)(this + 0x10),0,0xc);
  ExceptionList = local_10;
  return this;
}


// ==== 10115c58 Catch@10115c58

void Catch_10115c58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10115c6c Catch@10115c6c

void Catch_10115c6c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FGameTipData::FGameTipData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115c90 FClanMemberInfo::FClanMemberInfo

/* public: __thiscall FClanMemberInfo::FClanMemberInfo(void) */

FClanMemberInfo * __thiscall FClanMemberInfo::FClanMemberInfo(FClanMemberInfo *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115c90  4  ??0FClanMemberInfo@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10203f2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4));
  local_8 = 1;
  appMemset((FStringNoInit *)(this + 4),0,0xc);
  ExceptionList = local_10;
  return this;
}


// ==== 10115cff Catch@10115cff

void Catch_10115cff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10115d13 Catch@10115d13

void Catch_10115d13(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FClanMemberInfo::FClanMemberInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115d30 FUN_10115d30

void FUN_10115d30(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10203f59;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x2e8),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10115d90 FUN_10115d90

UObject * FUN_10115d90(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10357870);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115dc0 FUN_10115dc0

UObject * FUN_10115dc0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035d5e0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115df0 FUN_10115df0

UObject * FUN_10115df0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035ac50);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115e20 FUN_10115e20

UObject * FUN_10115e20(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035a1f0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115e50 FUN_10115e50

UObject * FUN_10115e50(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_1035bbe0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115e80 FUN_10115e80

UObject * FUN_10115e80(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10365e80);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115eb0 FUN_10115eb0

UObject * FUN_10115eb0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10365950);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115ee0 FUN_10115ee0

UObject * FUN_10115ee0(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103649c0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115f10 FUN_10115f10

UObject * FUN_10115f10(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_103697c0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115f40 FUN_10115f40

UObject * FUN_10115f40(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10369cf0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115f70 FUN_10115f70

UObject * FUN_10115f70(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,(UClass *)&DAT_10364ef0);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 10115fa0 UUIAPI_BUTTON::execSetButtonName

/* public: void __thiscall UUIAPI_BUTTON::execSetButtonName(struct FFrame &,void * const) */

void __thiscall UUIAPI_BUTTON::execSetButtonName(UUIAPI_BUTTON *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x115fa0  1718  ?execSetButtonName@UUIAPI_BUTTON@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203f89;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115d90(uVar2);
  if (iVar3 != 0) {
    FUN_10003cf0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10116098 Catch@10116098

void Catch_10116098(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101160ac Catch@101160ac

void Catch_101160ac(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_BUTTON::execSetButtonName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101160d0 UUIAPI_EDITBOX::execGetString

/* public: void __thiscall UUIAPI_EDITBOX::execGetString(struct FFrame &,void * const) */

void __thiscall UUIAPI_EDITBOX::execGetString(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  ushort *puVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1160d0  1401  ?execGetString@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203fb9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10115dc0(uVar2);
  if ((piVar3 == (int *)0x0) ||
     (puVar4 = (ushort *)(**(code **)(*piVar3 + 0x1f8))(), puVar4 == (ushort *)0x0)) {
    puVar4 = (ushort *)&DAT_1022f9f8;
  }
  FString::operator=(param_2,puVar4);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101161c1 Catch@101161c1

void Catch_101161c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101161d5 Catch@101161d5

void Catch_101161d5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execGetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10116200 UUIAPI_EDITBOX::execSetString

/* public: void __thiscall UUIAPI_EDITBOX::execSetString(struct FFrame &,void * const) */

void __thiscall UUIAPI_EDITBOX::execSetString(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  ushort *puVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x116200  1803  ?execSetString@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10203ff2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10115dc0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
    uVar2 = 1;
    puVar4 = FString::operator*(local_28);
    FUN_10016ea0(puVar4,uVar2);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10116326 Catch@10116326

void Catch_10116326(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011633a Catch@1011633a

void Catch_1011633a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execSetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10116360 UUIAPI_EDITBOX::execAddString

/* public: void __thiscall UUIAPI_EDITBOX::execAddString(struct FFrame &,void * const) */

void __thiscall UUIAPI_EDITBOX::execAddString(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x116360  1067  ?execAddString@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204022;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10115dc0(uVar2);
  if (iVar3 != 0) {
    uVar2 = 1;
    puVar4 = FString::operator*(local_28);
    FUN_10016ea0(puVar4,uVar2);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011647a Catch@1011647a

void Catch_1011647a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011648e Catch@1011648e

void Catch_1011648e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execAddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101164b0 UUIAPI_EDITBOX::execClear

/* public: void __thiscall UUIAPI_EDITBOX::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_EDITBOX::execClear(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1164b0  1098  ?execClear@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204049;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10115dc0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011658c Catch@1011658c

void Catch_1011658c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101165a0 Catch@101165a0

void Catch_101165a0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101165c0 UUIAPI_EDITBOX::execSetEditType

/* public: void __thiscall UUIAPI_EDITBOX::execSetEditType(struct FFrame &,void * const) */

void __thiscall UUIAPI_EDITBOX::execSetEditType(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1165c0  1732  ?execSetEditType@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020409d;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10115dc0(uVar2);
  if (iVar3 != 0) {
    pFVar4 = (FString *)FString::FString(local_40,(ushort *)L"normal");
    local_8._0_1_ = 3;
    iVar3 = FString::operator==(local_28,pFVar4);
    local_8._0_1_ = 2;
    FString::~FString(local_40);
    if (iVar3 == 0) {
      pFVar4 = (FString *)FString::FString(local_40,(ushort *)L"number");
      local_8._0_1_ = 4;
      iVar3 = FString::operator==(local_28,pFVar4);
      local_8._0_1_ = 2;
      FString::~FString(local_40);
      if (iVar3 == 0) {
        pFVar4 = (FString *)FString::FString(local_40,(ushort *)L"password");
        local_8._0_1_ = 5;
        iVar3 = FString::operator==(local_28,pFVar4);
        local_8._0_1_ = 2;
        FString::~FString(local_40);
        if (iVar3 == 0) {
          appFailAssert("false",".\\UIScript\\UIAPINative.cpp",0x22a);
        }
        else {
          FUN_10014b00(2);
        }
      }
      else {
        FUN_10014b00(3);
      }
    }
    else {
      FUN_10014b00(0);
    }
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10116796 Catch@10116796

void Catch_10116796(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101167aa Catch@101167aa

void Catch_101167aa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execSetEditType");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101167d0 UUIAPI_EDITBOX::execSetHighLight

/* public: void __thiscall UUIAPI_EDITBOX::execSetHighLight(struct FFrame &,void * const) */

void __thiscall UUIAPI_EDITBOX::execSetHighLight(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1167d0  1742  ?execSetHighLight@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102040c9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115dc0(uVar2);
  if (iVar3 != 0) {
    FUN_10014390(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101168c8 Catch@101168c8

void Catch_101168c8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101168dc Catch@101168dc

void Catch_101168dc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execSetHighLight");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10116900 UUIAPI_EDITBOX::execSimulateBackspace

/* public: void __thiscall UUIAPI_EDITBOX::execSimulateBackspace(struct FFrame &,void * const) */

void __thiscall
UUIAPI_EDITBOX::execSimulateBackspace(UUIAPI_EDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x116900  1859  ?execSimulateBackspace@UUIAPI_EDITBOX@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102040f9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10115dc0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x68))(0x100,8,0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101169e2 Catch@101169e2

void Catch_101169e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101169f6 Catch@101169f6

void Catch_101169f6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_EDITBOX::execSimulateBackspace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10116a20 UUIAPI_COMBOBOX::execAddString

/* public: void __thiscall UUIAPI_COMBOBOX::execAddString(struct FFrame &,void * const) */

void __thiscall UUIAPI_COMBOBOX::execAddString(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puStack_38;
  FFrame *pFStack_34;
  uint *puStack_30;
  uint uStack_2c;
  void *pvStack_20;
  uint local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x116a20  1066  ?execAddString@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204132;
  local_c = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  puStack_30 = (uint *)0x10116a4e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_30 = local_18;
  pFStack_34 = param_1;
  puStack_38 = (uint *)0x10116a79;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  puStack_38 = (uint *)0x10116a83;
  FString::FString((FString *)&uStack_2c);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &uStack_2c;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&stack0xffffffd8);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    puVar4 = FString::operator*((FString *)&puStack_38);
    FUN_1000b3d0(puVar4);
  }
  local_18[0] = local_18[0] & 0xffffff00;
  FString::~FString((FString *)&puStack_38);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_2c);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10116b40 UUIAPI_COMBOBOX::execSYS_AddString

/* public: void __thiscall UUIAPI_COMBOBOX::execSYS_AddString(struct FFrame &,void * const) */

void __thiscall
UUIAPI_COMBOBOX::execSYS_AddString(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_ESI;
  uint *puVar4;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x116b40  1704  ?execSYS_AddString@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204159;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x10116b6e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puVar4 = &uStack_24;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,puVar4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    FUN_1000b110(puVar4);
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10116c40 UUIAPI_COMBOBOX::execAddStringWithReserved

/* public: void __thiscall UUIAPI_COMBOBOX::execAddStringWithReserved(struct FFrame &,void * const)
    */

void __thiscall
UUIAPI_COMBOBOX::execAddStringWithReserved(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  FFrame **ppFVar5;
  FFrame *pFStack_40;
  undefined1 *puStack_3c;
  FFrame *pFStack_38;
  FString *pFStack_34;
  uint uStack_30;
  void *pvStack_28;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x116c40  1071
                       ?execAddStringWithReserved@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204192;
  local_c = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  pFStack_34 = (FString *)0x10116c6e;
  FString::FString(local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_34 = local_18;
  pFStack_38 = param_1;
  puStack_3c = (undefined1 *)0x10116c99;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  puStack_3c = (undefined1 *)0x10116ca3;
  FString::FString((FString *)&stack0xffffffd4);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_3c = &stack0xffffffd4;
  pFStack_40 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_38 = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppFVar5 = &pFStack_38;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,ppFVar5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_30);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    puVar4 = FString::operator*((FString *)&pFStack_40);
    FUN_1000b480(puVar4,ppFVar5);
  }
  FString::~FString((FString *)&pFStack_40);
  FString::~FString((FString *)&pFStack_34);
  ExceptionList = pvStack_28;
  return;
}


// ==== 10116d90 UUIAPI_COMBOBOX::execSYS_AddStringWithReserved

/* public: void __thiscall UUIAPI_COMBOBOX::execSYS_AddStringWithReserved(struct FFrame &,void *
   const) */

void __thiscall
UUIAPI_COMBOBOX::execSYS_AddStringWithReserved(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FFrame **ppFVar4;
  FFrame *pFVar5;
  undefined1 *puStack_34;
  FFrame *pFStack_30;
  FString *pFStack_2c;
  void *pvStack_28;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x116d90  1706
                       ?execSYS_AddStringWithReserved@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102041b9;
  local_c = ExceptionList;
  pvStack_28 = (void *)(DAT_103554c4 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  pFStack_2c = (FString *)0x10116dbe;
  FString::FString(local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_2c = local_18;
  pFStack_30 = param_1;
  puStack_34 = (undefined1 *)0x10116de9;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_34 = &stack0xffffffdc;
  pFVar5 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  pFStack_30 = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppFVar4 = &pFStack_30;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,ppFVar4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&pFStack_30);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    FUN_1000b1c0(pFVar5,ppFVar4);
  }
  FString::~FString((FString *)&puStack_34);
  ExceptionList = pvStack_28;
  return;
}


// ==== 10116ec0 UUIAPI_COMBOBOX::execGetString

/* public: void __thiscall UUIAPI_COMBOBOX::execGetString(struct FFrame &,void * const) */

void __thiscall UUIAPI_COMBOBOX::execGetString(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  void *unaff_ESI;
  uint *puVar5;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  FString *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x116ec0  1400  ?execGetString@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102041e9;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x10116eee;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puVar5 = &uStack_24;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,puVar5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    puVar4 = (ushort *)FUN_1000ac40(puVar5);
    FString::operator=(local_c,puVar4);
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10116fd0 UUIAPI_COMBOBOX::execGetReserved

/* public: void __thiscall UUIAPI_COMBOBOX::execGetReserved(struct FFrame &,void * const) */

void __thiscall
UUIAPI_COMBOBOX::execGetReserved(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_ESI;
  uint *puVar4;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x116fd0  1357  ?execGetReserved@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204219;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x10116ffe;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puVar4 = &uStack_24;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,puVar4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_1000ac70(puVar4);
    *local_c = uVar2;
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 101170d0 UUIAPI_COMBOBOX::execGetSelectedNum

/* public: void __thiscall UUIAPI_COMBOBOX::execGetSelectedNum(struct FFrame &,void * const) */

void __thiscall
UUIAPI_COMBOBOX::execGetSelectedNum(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
                    /* 0x1170d0  1374  ?execGetSelectedNum@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_10204249;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x101170fe;
  FString::FString((FString *)local_18);
  local_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    *local_4 = *(undefined4 *)(iVar3 + 0x324);
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 101171b0 UUIAPI_COMBOBOX::execSetSelectedNum

/* public: void __thiscall UUIAPI_COMBOBOX::execSetSelectedNum(struct FFrame &,void * const) */

void __thiscall
UUIAPI_COMBOBOX::execSetSelectedNum(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1171b0  1795  ?execSetSelectedNum@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204279;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    FUN_10009f70(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101172a8 Catch@101172a8

void Catch_101172a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101172bc Catch@101172bc

void Catch_101172bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_COMBOBOX::execSetSelectedNum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101172e0 UUIAPI_COMBOBOX::execClear

/* public: void __thiscall UUIAPI_COMBOBOX::execClear(struct FFrame &,void * const) */

void __thiscall UUIAPI_COMBOBOX::execClear(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1172e0  1097  ?execClear@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102042a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  piVar3 = (int *)FUN_10115df0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101173bc Catch@101173bc

void Catch_101173bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101173d0 Catch@101173d0

void Catch_101173d0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_COMBOBOX::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101173f0 UUIAPI_COMBOBOX::execGetNumOfItems

/* public: void __thiscall UUIAPI_COMBOBOX::execGetNumOfItems(struct FFrame &,void * const) */

void __thiscall
UUIAPI_COMBOBOX::execGetNumOfItems(UUIAPI_COMBOBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1173f0  1273  ?execGetNumOfItems@UUIAPI_COMBOBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102042d9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10115df0(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_10009d00();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101174cc Catch@101174cc

void Catch_101174cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101174e0 Catch@101174e0

void Catch_101174e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_COMBOBOX::execGetNumOfItems");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10117500 UUIAPI_CHECKBOX::execSetTitle

/* public: void __thiscall UUIAPI_CHECKBOX::execSetTitle(struct FFrame &,void * const) */

void __thiscall UUIAPI_CHECKBOX::execSetTitle(UUIAPI_CHECKBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  FFrame *pFStack_44;
  undefined1 *puStack_40;
  FFrame *pFStack_3c;
  uint *puStack_38;
  FFrame *pFStack_34;
  uint *puStack_30;
  uint uStack_2c;
  void *pvStack_20;
  uint local_18 [2];
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117500  1824  ?execSetTitle@UUIAPI_CHECKBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1020431b;
  local_c = ExceptionList;
  uStack_2c = DAT_103554c4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  puStack_30 = (uint *)0x1011752e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_30 = local_18;
  pFStack_34 = param_1;
  puStack_38 = (uint *)0x10117559;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  puStack_38 = (uint *)0x10117563;
  FString::FString((FString *)&uStack_2c);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &uStack_2c;
  pFStack_3c = param_1;
  puStack_40 = (undefined1 *)0x10117587;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    puStack_40 = (undefined1 *)0x0;
    pFStack_44 = param_1;
    uStack_48 = 0x101175ac;
    (**(code **)(GNatives_exref + 0x108))();
  }
  puStack_40 = &stack0xffffffd8;
  pFStack_44 = (FFrame *)0x101175c2;
  pFStack_44 = (FFrame *)(**(code **)(**(int **)GL2Console_exref + 0x778))();
  uStack_48 = 0x101175c8;
  iVar2 = FUN_10115e20();
  if (iVar2 != 0) {
    puStack_10 = aFStack_4c;
    FString::FString(aFStack_4c,(FString *)&puStack_38);
    local_18[0] = CONCAT31((int3)(local_18[0] >> 8),1);
    FUN_10115d30();
  }
  local_18[0] = local_18[0] & 0xffffff00;
  pFStack_44 = (FFrame *)0x10117605;
  FString::~FString((FString *)&puStack_38);
  local_18[0] = 0xffffffff;
  pFStack_44 = (FFrame *)0x10117617;
  FString::~FString((FString *)&uStack_2c);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10117630 UUIAPI_CHECKBOX::execSetCheck

/* public: void __thiscall UUIAPI_CHECKBOX::execSetCheck(struct FFrame &,void * const) */

void __thiscall UUIAPI_CHECKBOX::execSetCheck(UUIAPI_CHECKBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_ESI;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117630  1721  ?execSetCheck@UUIAPI_CHECKBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204349;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x1011765e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115e20(uVar2);
  if (iVar3 != 0) {
    *(uint **)(iVar3 + 0x2fc) = &uStack_24;
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10117730 UUIAPI_CHECKBOX::execIsChecked

/* public: void __thiscall UUIAPI_CHECKBOX::execIsChecked(struct FFrame &,void * const) */

void __thiscall UUIAPI_CHECKBOX::execIsChecked(UUIAPI_CHECKBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
                    /* 0x117730  1472  ?execIsChecked@UUIAPI_CHECKBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_10204379;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x1011775e;
  FString::FString((FString *)local_18);
  local_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e20(uVar2);
  if (iVar3 != 0) {
    *local_4 = *(undefined4 *)(iVar3 + 0x2fc);
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 10117810 UUIAPI_CHECKBOX::execIsDisable

/* public: void __thiscall UUIAPI_CHECKBOX::execIsDisable(struct FFrame &,void * const) */

void __thiscall UUIAPI_CHECKBOX::execIsDisable(UUIAPI_CHECKBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
                    /* 0x117810  1477  ?execIsDisable@UUIAPI_CHECKBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_102043a9;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x1011783e;
  FString::FString((FString *)local_18);
  local_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e20(uVar2);
  if (iVar3 != 0) {
    *local_4 = *(undefined4 *)(iVar3 + 0x300);
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 101178f0 UUIAPI_CHECKBOX::execSetDisable

/* public: void __thiscall UUIAPI_CHECKBOX::execSetDisable(struct FFrame &,void * const) */

void __thiscall UUIAPI_CHECKBOX::execSetDisable(UUIAPI_CHECKBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_ESI;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1178f0  1727  ?execSetDisable@UUIAPI_CHECKBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102043d9;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x1011791e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115e20(uVar2);
  if (iVar3 != 0) {
    *(uint **)(iVar3 + 0x300) = &uStack_24;
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 101179f0 UUIAPI_CHECKBOX::execToggleDisable

/* public: void __thiscall UUIAPI_CHECKBOX::execToggleDisable(struct FFrame &,void * const) */

void __thiscall
UUIAPI_CHECKBOX::execToggleDisable(UUIAPI_CHECKBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1179f0  1868  ?execToggleDisable@UUIAPI_CHECKBOX@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204409;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x10117a1e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e20(uVar2);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x300) = (uint)(*(int *)(iVar3 + 0x300) == 0);
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 10117ad0 UUIAPI_PROGRESSCTRL::execSetProgressTime

/* public: void __thiscall UUIAPI_PROGRESSCTRL::execSetProgressTime(struct FFrame &,void * const) */

void __thiscall
UUIAPI_PROGRESSCTRL::execSetProgressTime(UUIAPI_PROGRESSCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_ESI;
  uint *puVar4;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117ad0  1780
                       ?execSetProgressTime@UUIAPI_PROGRESSCTRL@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204439;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x10117afe;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puVar4 = &uStack_24;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,puVar4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115e50(uVar2);
  if (iVar3 != 0) {
    FUN_1000cf70(puVar4);
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10117bd0 UUIAPI_PROGRESSCTRL::execSetPos

/* public: void __thiscall UUIAPI_PROGRESSCTRL::execSetPos(struct FFrame &,void * const) */

void __thiscall
UUIAPI_PROGRESSCTRL::execSetPos(UUIAPI_PROGRESSCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void *unaff_ESI;
  uint *puVar4;
  FFrame *pFStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117bd0  1778  ?execSetPos@UUIAPI_PROGRESSCTRL@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204469;
  local_c = ExceptionList;
  uStack_24 = DAT_103554c4 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puStack_28 = (undefined4 *)0x10117bfe;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = local_18;
  pFStack_2c = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  uStack_24 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puVar4 = &uStack_24;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,puVar4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&puStack_28);
  iVar3 = FUN_10115e50(uVar2);
  if (iVar3 != 0) {
    FUN_1000cf50(puVar4);
  }
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10117cd0 UUIAPI_PROGRESSCTRL::execReset

/* public: void __thiscall UUIAPI_PROGRESSCTRL::execReset(struct FFrame &,void * const) */

void __thiscall
UUIAPI_PROGRESSCTRL::execReset(UUIAPI_PROGRESSCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117cd0  1699  ?execReset@UUIAPI_PROGRESSCTRL@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204499;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x10117cfe;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e50(uVar2);
  if (iVar3 != 0) {
    FUN_1000cf80();
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 10117da0 UUIAPI_PROGRESSCTRL::execStart

/* public: void __thiscall UUIAPI_PROGRESSCTRL::execStart(struct FFrame &,void * const) */

void __thiscall
UUIAPI_PROGRESSCTRL::execStart(UUIAPI_PROGRESSCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117da0  1860  ?execStart@UUIAPI_PROGRESSCTRL@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102044c9;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x10117dce;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e50(uVar2);
  if (iVar3 != 0) {
    FUN_1000cfd0();
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 10117e70 UUIAPI_PROGRESSCTRL::execResume

/* public: void __thiscall UUIAPI_PROGRESSCTRL::execResume(struct FFrame &,void * const) */

void __thiscall
UUIAPI_PROGRESSCTRL::execResume(UUIAPI_PROGRESSCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117e70  1700  ?execResume@UUIAPI_PROGRESSCTRL@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102044f9;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x10117e9e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e50(uVar2);
  if (iVar3 != 0) {
    FUN_1000cfb0();
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 10117f40 UUIAPI_PROGRESSCTRL::execStop

/* public: void __thiscall UUIAPI_PROGRESSCTRL::execStop(struct FFrame &,void * const) */

void __thiscall
UUIAPI_PROGRESSCTRL::execStop(UUIAPI_PROGRESSCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  void **ppvStack_24;
  uint uStack_20;
  void *local_18 [2];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x117f40  1862  ?execStop@UUIAPI_PROGRESSCTRL@@QAEXAAUFFrame@@QAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204529;
  local_c = ExceptionList;
  uStack_20 = DAT_103554c4 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  ppvStack_24 = (void **)0x10117f6e;
  FString::FString((FString *)local_18);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvStack_24 = local_18;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(&uStack_20);
  iVar3 = FUN_10115e50(uVar2);
  if (iVar3 != 0) {
    FUN_1000cfa0();
  }
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_24);
  ExceptionList = local_18[0];
  return;
}


// ==== 10118010 UUIAPI_MULTIEDITBOX::execGetString

/* public: void __thiscall UUIAPI_MULTIEDITBOX::execGetString(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MULTIEDITBOX::execGetString(UUIAPI_MULTIEDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x118010  1402  ?execGetString@UUIAPI_MULTIEDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204562;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
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
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10115e80(uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_1003bd20();
    if (iVar3 != 0) {
      puVar4 = (ushort *)FUN_1003bd20();
      FString::operator=(local_28,puVar4);
    }
  }
  FString::operator=(param_2,local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10118129 Catch@10118129

void Catch_10118129(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011813d Catch@1011813d

void Catch_1011813d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MULTIEDITBOX::execGetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118160 UUIAPI_MULTIEDITBOX::execSetString

/* public: void __thiscall UUIAPI_MULTIEDITBOX::execSetString(struct FFrame &,void * const) */

void __thiscall
UUIAPI_MULTIEDITBOX::execSetString(UUIAPI_MULTIEDITBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  ushort *puVar4;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x118160  1804  ?execSetString@UUIAPI_MULTIEDITBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204592;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar3 = (int *)FUN_10115e80(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
    puVar4 = FString::operator*(local_28);
    FUN_1003c4f0(puVar4);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10118285 Catch@10118285

void Catch_10118285(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10118299 Catch@10118299

void Catch_10118299(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_MULTIEDITBOX::execGetString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101182c0 UUIAPI_LISTCTRL::execGetSelectedRecord

/* public: void __thiscall UUIAPI_LISTCTRL::execGetSelectedRecord(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execGetSelectedRecord(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1182c0  1378  ?execGetSelectedRecord@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102045b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    FUN_10037540(param_2);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011839b Catch@1011839b

void Catch_1011839b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101183af Catch@101183af

void Catch_101183af(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execGetSelectedRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101183d0 UUIAPI_LISTCTRL::execGetRecord

/* public: void __thiscall UUIAPI_LISTCTRL::execGetRecord(struct FFrame &,void * const) */

void __thiscall UUIAPI_LISTCTRL::execGetRecord(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1183d0  1348  ?execGetRecord@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102045e9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    FUN_10037260(local_18,param_2);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101184cc Catch@101184cc

void Catch_101184cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101184e0 Catch@101184e0

void Catch_101184e0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execGetRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118500 UUIAPI_LISTCTRL::execDeleteAllItem

/* public: void __thiscall UUIAPI_LISTCTRL::execDeleteAllItem(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execDeleteAllItem(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x118500  1126  ?execDeleteAllItem@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204619;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    FUN_100364c0();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101185d7 Catch@101185d7

void Catch_101185d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101185eb Catch@101185eb

void Catch_101185eb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execDeleteAllItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118610 UUIAPI_LISTCTRL::execDeleteRecord

/* public: void __thiscall UUIAPI_LISTCTRL::execDeleteRecord(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execDeleteRecord(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x118610  1133  ?execDeleteRecord@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204649;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    FUN_100364a0(local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10118708 Catch@10118708

void Catch_10118708(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011871c Catch@1011871c

void Catch_1011871c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execDeleteRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118740 UUIAPI_LISTCTRL::execGetRecordCount

/* public: void __thiscall UUIAPI_LISTCTRL::execGetRecordCount(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execGetRecordCount(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x118740  1350  ?execGetRecordCount@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204679;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_10034fa0();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011881c Catch@1011881c

void Catch_1011881c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10118830 Catch@10118830

void Catch_10118830(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execGetRecordCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118850 UUIAPI_LISTCTRL::execGetSelectedIndex

/* public: void __thiscall UUIAPI_LISTCTRL::execGetSelectedIndex(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execGetSelectedIndex(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x118850  1367  ?execGetSelectedIndex@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102046a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10115eb0(uVar2);
  *(undefined4 *)param_2 = 0xffffffff;
  if (iVar3 != 0) {
    uVar2 = FUN_10034d80();
    *(undefined4 *)param_2 = uVar2;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10118932 Catch@10118932

void Catch_10118932(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10118946 Catch@10118946

void Catch_10118946(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execGetSelectedIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118970 UUIAPI_LISTCTRL::execSetSelectedIndex

/* public: void __thiscall UUIAPI_LISTCTRL::execSetSelectedIndex(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execSetSelectedIndex(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x118970  1793  ?execSetSelectedIndex@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102046d9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    FUN_10034fb0(local_1c,local_18 != 0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10118a8f Catch@10118a8f

void Catch_10118a8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10118aa3 Catch@10118aa3

void Catch_10118aa3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execSetSelectedIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118ac0 UUIAPI_LISTCTRL::execShowScrollBar

/* public: void __thiscall UUIAPI_LISTCTRL::execShowScrollBar(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execShowScrollBar(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  uint uStack_3c;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x118ac0  1854  ?execShowScrollBar@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204709;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    if (local_18 == 0) {
      (**(code **)(**(int **)(iVar3 + 0x314) + 0x13c))();
      (**(code **)(**(int **)(iVar3 + 0x318) + 0x13c))();
      pcVar4 = *(code **)(**(int **)(iVar3 + 0x31c) + 0x13c);
    }
    else {
      (**(code **)(**(int **)(iVar3 + 0x314) + 0x138))();
      (**(code **)(**(int **)(iVar3 + 0x318) + 0x138))();
      pcVar4 = *(code **)(**(int **)(iVar3 + 0x31c) + 0x138);
    }
    (*pcVar4)();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10118c0c Catch@10118c0c

void Catch_10118c0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10118c20 Catch@10118c20

void Catch_10118c20(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execShowScrollBar");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118c40 UUIAPI_LISTBOX::execAddString

/* public: void __thiscall UUIAPI_LISTBOX::execAddString(struct FFrame &,void * const) */

void __thiscall UUIAPI_LISTBOX::execAddString(UUIAPI_LISTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x118c40  1068  ?execAddString@UUIAPI_LISTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204742;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  piVar4 = (int *)FUN_10115ee0(uVar3);
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    uVar6 = 0xffffffff;
    uVar3 = 0xffdcdcdc;
    puVar5 = FString::operator*(local_28);
    (**(code **)(iVar2 + 0x1fc))(puVar5,uVar3,uVar6);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10118d65 Catch@10118d65

void Catch_10118d65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10118d79 Catch@10118d79

void Catch_10118d79(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execAddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118da0 UUIAPI_NAMECTRL::execSetName

/* public: void __thiscall UUIAPI_NAMECTRL::execSetName(struct FFrame &,void * const) */

void __thiscall UUIAPI_NAMECTRL::execSetName(UUIAPI_NAMECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_4c;
  FString local_3c [12];
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x118da0  1763  ?execSetName@UUIAPI_NAMECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204772;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_3c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_3c);
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_3c);
  iVar3 = FUN_10115f10(uVar2);
  if (iVar3 != 0) {
    uVar6 = 0xffdcdcdc;
    uVar2 = local_1c;
    uVar5 = local_18;
    puVar4 = FString::operator*(local_30);
    FUN_1004a630(puVar4,uVar2,uVar5,uVar6);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 10118f05 Catch@10118f05

void Catch_10118f05(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10118f19 Catch@10118f19

void Catch_10118f19(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_NAMECTRL::execSetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118f40 UUIAPI_NAMECTRL::execSetNameWithColor

/* public: void __thiscall UUIAPI_NAMECTRL::execSetNameWithColor(struct FFrame &,void * const) */

void __thiscall
UUIAPI_NAMECTRL::execSetNameWithColor(UUIAPI_NAMECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  FColor local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x118f40  1765  ?execSetNameWithColor@UUIAPI_NAMECTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102047a2;
  local_10 = ExceptionList;
  uStack_50 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_40);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  FColor::FColor(local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_40);
  iVar3 = FUN_10115f10(uVar2);
  if (iVar3 != 0) {
    uVar4 = FColor::operator_unsigned_long(local_18);
    uVar2 = local_20;
    uVar6 = local_1c;
    puVar5 = FString::operator*(local_34);
    FUN_1004a630(puVar5,uVar2,uVar6,uVar4);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 101190d1 Catch@101190d1

void Catch_101190d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101190e5 Catch@101190e5

void Catch_101190e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_NAMECTRL::execSetNameWithColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119110 UUIAPI_NAMECTRL::execGetName

/* public: void __thiscall UUIAPI_NAMECTRL::execGetName(struct FFrame &,void * const) */

void __thiscall UUIAPI_NAMECTRL::execGetName(UUIAPI_NAMECTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x119110  1264  ?execGetName@UUIAPI_NAMECTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102047d2;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
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
  FString::FString(local_28,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10115f10(uVar2);
  if (iVar3 != 0) {
    FString::operator=(local_28,(FString *)(iVar3 + 0x2e0));
  }
  FString::operator=(param_2,local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011921a Catch@1011921a

void Catch_1011921a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011922e Catch@1011922e

void Catch_1011922e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_NAMECTRL::execGetName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119250 UUIAPI_STATUSBARCTRL::execSetPoint

/* public: void __thiscall UUIAPI_STATUSBARCTRL::execSetPoint(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSBARCTRL::execSetPoint(UUIAPI_STATUSBARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119250  1775  ?execSetPoint@UUIAPI_STATUSBARCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102047f9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10115f40(uVar2);
  if (iVar3 != 0) {
    FUN_1004cd70(local_1c,local_1c >> 0x1f,local_18,local_18 >> 0x1f);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10119370 Catch@10119370

void Catch_10119370(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10119384 Catch@10119384

void Catch_10119384(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSBARCTRL::execSetPoint");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101193b0 UUIAPI_STATUSBARCTRL::execSetPointPercent

/* public: void __thiscall UUIAPI_STATUSBARCTRL::execSetPointPercent(struct FFrame &,void * const)
    */

void __thiscall
UUIAPI_STATUSBARCTRL::execSetPointPercent(UUIAPI_STATUSBARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uStack_60;
  FString local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1193b0  1777
                       ?execSetPointPercent@UUIAPI_STATUSBARCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204829;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_50);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_50);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_2c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_3c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_34);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = FUN_10063120(local_2c,local_28);
  uVar5 = FUN_10063120(local_34,local_30);
  local_40 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_24 = FUN_10063120(local_3c,local_38);
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_50);
  iVar3 = FUN_10115f40(uVar2);
  if (iVar3 != 0) {
    FUN_1004ccb0(uVar4,local_24,(int)uVar5,local_40);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_50);
  ExceptionList = local_10;
  return;
}


// ==== 10119526 Catch@10119526

void Catch_10119526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011953a Catch@1011953a

void Catch_1011953a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSBARCTRL::execSetPointPercent");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119560 UUIAPI_STATUSBARCTRL::execSetPointExp

/* public: void __thiscall UUIAPI_STATUSBARCTRL::execSetPointExp(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSBARCTRL::execSetPointExp(UUIAPI_STATUSBARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uStack_44;
  FString local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119560  1776  ?execSetPointExp@UUIAPI_STATUSBARCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10204859;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_28);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar4 = FUN_10063120(local_28,local_24);
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10115f40(uVar2);
  if (iVar3 != 0) {
    FUN_1004ce20(uVar4,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011968c Catch@1011968c

void Catch_1011968c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101196a0 Catch@101196a0

void Catch_101196a0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSBARCTRL::execSetPointExp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101196c0 UUIAPI_STATUSBARCTRL::execSetRegenInfo

/* public: void __thiscall UUIAPI_STATUSBARCTRL::execSetRegenInfo(struct FFrame &,void * const) */

void __thiscall
UUIAPI_STATUSBARCTRL::execSetRegenInfo(UUIAPI_STATUSBARCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_44;
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1196c0  1784  ?execSetRegenInfo@UUIAPI_STATUSBARCTRL@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10204889;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_34);
  iVar3 = FUN_10115f40(uVar2);
  if (iVar3 != 0) {
    FUN_1004cc90(local_20,local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10119808 Catch@10119808

void Catch_10119808(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011981c Catch@1011981c

void Catch_1011981c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_STATUSBARCTRL::execSetRegenInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119840 UUIAPI_TABCTRL::execInitTabCtrl

/* public: void __thiscall UUIAPI_TABCTRL::execInitTabCtrl(struct FFrame &,void * const) */

void __thiscall UUIAPI_TABCTRL::execInitTabCtrl(UUIAPI_TABCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119840  1453  ?execInitTabCtrl@UUIAPI_TABCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102048b9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10005ce0(uVar2);
  if (iVar3 != 0) {
    FUN_10050ec0(0,1);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011991a Catch@1011991a

void Catch_1011991a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011992e Catch@1011992e

void Catch_1011992e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TABCTRL::execInitTabCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119950 UUIAPI_TABCTRL::execSetTopOrder

/* public: void __thiscall UUIAPI_TABCTRL::execSetTopOrder(struct FFrame &,void * const) */

void __thiscall UUIAPI_TABCTRL::execSetTopOrder(UUIAPI_TABCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119950  1833  ?execSetTopOrder@UUIAPI_TABCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102048e9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10005ce0(uVar2);
  if (iVar3 != 0) {
    FUN_10050ec0(local_1c,local_18 != 0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10119a6f Catch@10119a6f

void Catch_10119a6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10119a83 Catch@10119a83

void Catch_10119a83(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TABCTRL::execInitTabCtrl");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119aa0 UUIAPI_TABCTRL::execGetTopIndex

/* public: void __thiscall UUIAPI_TABCTRL::execGetTopIndex(struct FFrame &,void * const) */

void __thiscall UUIAPI_TABCTRL::execGetTopIndex(UUIAPI_TABCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119aa0  1431  ?execGetTopIndex@UUIAPI_TABCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204919;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10005ce0(uVar2);
  if (iVar3 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 0x308);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10119b7b Catch@10119b7b

void Catch_10119b7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10119b8f Catch@10119b8f

void Catch_10119b8f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TABCTRL::execGetTopIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119bb0 UUIAPI_TABCTRL::execSetDisable

/* public: void __thiscall UUIAPI_TABCTRL::execSetDisable(struct FFrame &,void * const) */

void __thiscall UUIAPI_TABCTRL::execSetDisable(UUIAPI_TABCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_40;
  FString local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119bb0  1728  ?execSetDisable@UUIAPI_TABCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204949;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_30);
  iVar3 = FUN_10005ce0(uVar2);
  if (iVar3 != 0) {
    FUN_1004fc20(local_1c,local_18);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 10119ccc Catch@10119ccc

void Catch_10119ccc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10119ce0 Catch@10119ce0

void Catch_10119ce0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TABCTRL::execSetDisable");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119d00 UUIAPI_TEXTLISTBOX::execAddString

/* public: void __thiscall UUIAPI_TEXTLISTBOX::execAddString(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TEXTLISTBOX::execAddString(UUIAPI_TEXTLISTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  uint uStack_48;
  FString local_38 [12];
  FString local_2c [20];
  FColor local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x119d00  1069  ?execAddString@UUIAPI_TEXTLISTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204982;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_38);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  FColor::FColor(local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = (**(code **)(*DAT_103663bc + 0x778))(local_38);
  piVar4 = (int *)FUN_10115f70(uVar3);
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    uVar7 = 0xc;
    uVar3 = 0xffffffff;
    uVar5 = FColor::operator_unsigned_long(local_18);
    puVar6 = FString::operator*(local_2c);
    (**(code **)(iVar2 + 0x210))(puVar6,uVar5,uVar3,uVar7);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10119e51 Catch@10119e51

void Catch_10119e51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10119e65 Catch@10119e65

void Catch_10119e65(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTLISTBOX::execAddString");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119e90 UUIAPI_TEXTLISTBOX::execClear

/* public: void __thiscall UUIAPI_TEXTLISTBOX::execClear(struct FFrame &,void * const) */

void __thiscall
UUIAPI_TEXTLISTBOX::execClear(UUIAPI_TEXTLISTBOX *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x119e90  1105  ?execClear@UUIAPI_TEXTLISTBOX@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102049a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(*DAT_103663bc + 0x778))(local_28);
  piVar3 = (int *)FUN_10115f70(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x174))();
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10119f6b Catch@10119f6b

void Catch_10119f6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 10119f7f Catch@10119f7f

void Catch_10119f7f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_TEXTLISTBOX::execClear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10119fa0 FEventMatchUserData::FEventMatchUserData

/* public: __thiscall FEventMatchUserData::FEventMatchUserData(void) */

FEventMatchUserData * __thiscall FEventMatchUserData::FEventMatchUserData(FEventMatchUserData *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x119fa0  14  ??0FEventMatchUserData@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10204a14;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4));
  local_8 = 0;
  FArray::FArray((FArray *)(this + 0x38),0);
  local_8._0_1_ = 3;
  FArray::FArray((FArray *)(this + 0x44),0);
  local_8 = CONCAT31(local_8._1_3_,7);
  *(undefined4 *)this = 0xffffffff;
  appMemset((FStringNoInit *)(this + 4),0,0xc);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  appMemset(this + 0x38,0,0xc);
  appMemset(this + 0x44,0,0xc);
  ExceptionList = local_10;
  return this;
}


// ==== 1011a06a Catch@1011a06a

void Catch_1011a06a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011a07e Catch@1011a07e

void Catch_1011a07e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FEventMatchUserData::FEventMatchUserData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011a0a0 FEventMatchTeamData::FEventMatchTeamData

/* public: __thiscall FEventMatchTeamData::FEventMatchTeamData(void) */

FEventMatchTeamData * __thiscall FEventMatchTeamData::FEventMatchTeamData(FEventMatchTeamData *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11a0a0  12  ??0FEventMatchTeamData@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10204a52;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 4));
  local_8 = 0;
  _eh_vector_constructor_iterator_
            (this + 0x14,0x50,9,FEventMatchUserData::FEventMatchUserData,
             FEventMatchUserData::~FEventMatchUserData);
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  *(undefined4 *)this = 0;
  appMemset((FStringNoInit *)(this + 4),0,0xc);
  ExceptionList = local_10;
  return this;
}


// ==== 1011a130 Catch@1011a130

void Catch_1011a130(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011a144 Catch@1011a144

void Catch_1011a144(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FEventMatchTeamData::FEventMatchTeamData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011a170 FLVData::FLVData

/* public: __thiscall FLVData::FLVData(void) */

FLVData * __thiscall FLVData::FLVData(FLVData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11a170  21  ??0FLVData@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204aad;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4._0_1_ = 1;
  FColor::FColor((FColor *)(this + 0x1c));
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x2c));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(this + 0x40),0);
  local_4 = CONCAT31(local_4._1_3_,5);
  appMemset(this,0,0xc);
  appMemset((FStringNoInit *)(this + 0xc),0,0xc);
  appMemset((FStringNoInit *)(this + 0x2c),0,0xc);
  appMemset(this + 0x40,0,0xc);
  ExceptionList = local_c;
  return this;
}


// ==== 1011a230 FCustomTooltip::FCustomTooltip

/* public: __thiscall FCustomTooltip::FCustomTooltip(void) */

FCustomTooltip * __thiscall FCustomTooltip::FCustomTooltip(FCustomTooltip *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11a230  6  ??0FCustomTooltip@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204aec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(this + 8),0);
  local_4 = 2;
  *(undefined4 *)(this + 4) = 1;
  appMemset((FArray *)(this + 8),0,0xc);
  ExceptionList = local_c;
  return this;
}


// ==== 1011a2b0 FClanInfo::FClanInfo

/* public: __thiscall FClanInfo::FClanInfo(void) */

FClanInfo * __thiscall FClanInfo::FClanInfo(FClanInfo *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11a2b0  2  ??0FClanInfo@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10204b41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FArray::FArray((FArray *)this,0);
  local_8 = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  local_8._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x18));
  local_8 = CONCAT31(local_8._1_3_,5);
  appMemset(this,0,0xc);
  appMemset((FStringNoInit *)(this + 0xc),0,0xc);
  appMemset(this + 0x18,0,0xc);
  ExceptionList = local_10;
  return this;
}


// ==== 1011a34b Catch@1011a34b

void Catch_1011a34b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011a35f Catch@1011a35f

void Catch_1011a35f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"FClanInfo::FClanInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011a380 FXMLTreeNodeInfo::FXMLTreeNodeInfo

/* public: __thiscall FXMLTreeNodeInfo::FXMLTreeNodeInfo(void) */

FXMLTreeNodeInfo * __thiscall FXMLTreeNodeInfo::FXMLTreeNodeInfo(FXMLTreeNodeInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11a380  38  ??0FXMLTreeNodeInfo@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204bcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit((FStringNoInit *)this);
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x34));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x40));
  local_4._0_1_ = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x80));
  local_4._0_1_ = 3;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x8c));
  local_4._0_1_ = 4;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0x98));
  local_4._0_1_ = 5;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xa4));
  local_4._0_1_ = 6;
  FCustomTooltip::FCustomTooltip((FCustomTooltip *)(this + 0xb0));
  local_4 = CONCAT31(local_4._1_3_,7);
  appMemset(this,0,0xc);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x12;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  appMemset((FStringNoInit *)(this + 0x34),0,0xc);
  appMemset(this + 0x40,0,0xc);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  appMemset(this + 0x80,0,0xc);
  appMemset(this + 0x8c,0,0xc);
  appMemset(this + 0x98,0,0xc);
  appMemset(this + 0xa4,0,0xc);
  appMemset(this + 0xb0,0,0x14);
  *(uint *)(this + 0xc4) = *(uint *)(this + 0xc4) & 0xfffffffe;
  ExceptionList = local_c;
  return this;
}


// ==== 1011a500 FLVDataRecord::FLVDataRecord

/* public: __thiscall FLVDataRecord::FLVDataRecord(void) */

FLVDataRecord * __thiscall FLVDataRecord::FLVDataRecord(FLVDataRecord *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11a500  23  ??0FLVDataRecord@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10204c15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)this,0);
  local_4 = 2;
  FStringNoInit::FStringNoInit((FStringNoInit *)(this + 0xc));
  local_4 = CONCAT31(local_4._1_3_,3);
  appMemset(this,0,0xc);
  appMemset((FStringNoInit *)(this + 0xc),0,0xc);
  ExceptionList = local_c;
  return this;
}


// ==== 1011a580 UUIAPI_LISTCTRL::execInsertRecord

/* public: void __thiscall UUIAPI_LISTCTRL::execInsertRecord(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execInsertRecord(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_5c;
  FLVDataRecord local_4c [36];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11a580  1460  ?execInsertRecord@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204c41;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  FLVDataRecord::FLVDataRecord(local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_4c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_28);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 != 0) {
    FUN_10036fe0(local_4c);
  }
  local_8._0_1_ = 1;
  FLVDataRecord::~FLVDataRecord(local_4c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011a68f Catch@1011a68f

void Catch_1011a68f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011a6a3 Catch@1011a6a3

void Catch_1011a6a3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execInsertRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011a6c0 UUIAPI_LISTCTRL::execModifyRecord

/* public: void __thiscall UUIAPI_LISTCTRL::execModifyRecord(struct FFrame &,void * const) */

void __thiscall
UUIAPI_LISTCTRL::execModifyRecord(UUIAPI_LISTCTRL *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_60;
  FLVDataRecord local_50 [36];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11a6c0  1527  ?execModifyRecord@UUIAPI_LISTCTRL@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204c71;
  local_10 = ExceptionList;
  uStack_60 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FLVDataRecord::FLVDataRecord(local_50);
  local_8 = CONCAT31(local_8._1_3_,2);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_50);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(**(int **)GL2Console_exref + 0x778))(local_2c);
  iVar3 = FUN_10115eb0(uVar2);
  if (iVar3 == 0) {
    *(undefined4 *)param_2 = 0;
    local_8._0_1_ = 1;
    FLVDataRecord::~FLVDataRecord(local_50);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
    ExceptionList = local_10;
    return;
  }
  uVar2 = FUN_100373b0(local_18,local_50);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 1;
  FLVDataRecord::~FLVDataRecord(local_50);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011a827 Catch@1011a827

void Catch_1011a827(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011a83b Catch@1011a83b

void Catch_1011a83b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UUIAPI_LISTCTRL::execModifyRecord");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011a860 UActionAPI::execRequestActionList

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


// ==== 1011aca2 Catch@1011aca2

void Catch_1011aca2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_102a47f0);
}


// ==== 1011acb6 Catch@1011acb6

void Catch_1011acb6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UActionAPI::execRequestActionList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ace0 UActionAPI::execRequestPetActionList

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


// ==== 1011b157 Catch@1011b157

void Catch_1011b157(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1011b16b Catch@1011b16b

void Catch_1011b16b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UActionAPI::execRequestPetActionList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011b190 UActionAPI::execRequestSummonedActionList

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


// ==== 1011b617 Catch@1011b617

void Catch_1011b617(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_102a47f0);
}


// ==== 1011b62b Catch@1011b62b

void Catch_1011b62b(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UActionAPI::execRequestSummonedActionList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011b650 UAudioAPI::execPlaySound

/* public: void __thiscall UAudioAPI::execPlaySound(struct FFrame &,void * const) */

void __thiscall UAudioAPI::execPlaySound(UAudioAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x11b650  1548  ?execPlaySound@UAudioAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204eb9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_28);
  FUN_10147e60(puVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011b713 Catch@1011b713

void Catch_1011b713(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011b727 Catch@1011b727

void Catch_1011b727(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAudioAPI::execPlaySound");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011b750 UAudioAPI::execPlayMusic

/* public: void __thiscall UAudioAPI::execPlayMusic(struct FFrame &,void * const) */

void __thiscall UAudioAPI::execPlayMusic(UAudioAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_50;
  FString local_40 [12];
  FString local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11b750  1547  ?execPlayMusic@UAudioAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204ef2;
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
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_34);
  FString::FString(local_40,puVar2);
  local_8._0_1_ = 2;
  FUN_10147fa0(local_40,local_20,local_1c,local_18);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011b8a2 Catch@1011b8a2

void Catch_1011b8a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011b8b6 Catch@1011b8b6

void Catch_1011b8b6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAudioAPI::execPlayMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011b8e0 UAudioAPI::execStopMusic

/* public: void __thiscall UAudioAPI::execStopMusic(struct FFrame &,void * const) */

void __thiscall UAudioAPI::execStopMusic(UAudioAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11b8e0  1863  ?execStopMusic@UAudioAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10148090();
  ExceptionList = local_10;
  return;
}


// ==== 1011b960 Catch@1011b960

void Catch_1011b960(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011b974 Catch@1011b974

void Catch_1011b974(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAudioAPI::execStopMusic");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011b9a0 UAudioAPI::execStopVoice

/* public: void __thiscall UAudioAPI::execStopVoice(struct FFrame &,void * const) */

void __thiscall UAudioAPI::execStopVoice(UAudioAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11b9a0  1865  ?execStopVoice@UAudioAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10148130();
  ExceptionList = local_10;
  return;
}


// ==== 1011ba20 Catch@1011ba20

void Catch_1011ba20(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011ba34 Catch@1011ba34

void Catch_1011ba34(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UAudioAPI::execStopVoice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ba60 UCommandChannelAPI::execRequestCommandChannelInfo

/* public: void __thiscall UCommandChannelAPI::execRequestCommandChannelInfo(struct FFrame &,void *
   const) */

void __thiscall
UCommandChannelAPI::execRequestCommandChannelInfo
          (UCommandChannelAPI *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11ba60  1601
                       ?execRequestCommandChannelInfo@UCommandChannelAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10204f59;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,(void *)0x61);
  FUN_101453e0(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011bb0d Catch@1011bb0d

void Catch_1011bb0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011bb21 Catch@1011bb21

void Catch_1011bb21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UCommandChannelAPI::execRequestCommandChannelInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011bb40 UCommandChannelAPI::execRequestCommandChannelBanParty

/* public: void __thiscall UCommandChannelAPI::execRequestCommandChannelBanParty(struct FFrame
   &,void * const) */

void __thiscall
UCommandChannelAPI::execRequestCommandChannelBanParty
          (UCommandChannelAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_48;
  L2ParamStack local_38 [16];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11bb40  1600
                       ?execRequestCommandChannelBanParty@UCommandChannelAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10204f92;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_38,10);
  local_8._0_1_ = 2;
  puVar2 = FString::operator*(local_28);
  L2ParamStack::PushBack(local_38,puVar2);
  FUN_10143a30(local_38);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011bc2b Catch@1011bc2b

void Catch_1011bc2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011bc3f Catch@1011bc3f

void Catch_1011bc3f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UCommandChannelAPI::execRequestCommandChannelBanParty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011bc60 UCommandChannelAPI::execRequestCommandChannelWithdraw

/* public: void __thiscall UCommandChannelAPI::execRequestCommandChannelWithdraw(struct FFrame
   &,void * const) */

void __thiscall
UCommandChannelAPI::execRequestCommandChannelWithdraw
          (UCommandChannelAPI *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11bc60  1603
                       ?execRequestCommandChannelWithdraw@UCommandChannelAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10204fb9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_2c,(void *)0x60);
  FUN_101453e0(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011bd0d Catch@1011bd0d

void Catch_1011bd0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011bd21 Catch@1011bd21

void Catch_1011bd21(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UCommandChannelAPI::execRequestCommandChannelWithdraw");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011bd40 UCommandChannelAPI::execRequestCommandChannelPartyMembersInfo

/* public: void __thiscall UCommandChannelAPI::execRequestCommandChannelPartyMembersInfo(struct
   FFrame &,void * const) */

void __thiscall
UCommandChannelAPI::execRequestCommandChannelPartyMembersInfo
          (UCommandChannelAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11bd40  1602
                       ?execRequestCommandChannelPartyMembersInfo@UCommandChannelAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10204fe9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  FUN_10143a40(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1011be0a Catch@1011be0a

void Catch_1011be0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011be1e Catch@1011be1e

void Catch_1011be1e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,
             L"UCommandChannelAPI::execRequestCommandChannelPartyMembersInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011be40 UEnchantAPI::execRequestEnchantItem

/* public: void __thiscall UEnchantAPI::execRequestEnchantItem(struct FFrame &,void * const) */

void __thiscall UEnchantAPI::execRequestEnchantItem(UEnchantAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11be40  1617  ?execRequestEnchantItem@UEnchantAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205010;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x7c8))(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 1011beee Catch@1011beee

void Catch_1011beee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011bf02 Catch@1011bf02

void Catch_1011bf02(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEnchantAPI::execRequestEnchantItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011bf20 UEventMatchAPI::execGetScore

/* public: void __thiscall UEventMatchAPI::execGetScore(struct FFrame &,void * const) */

void __thiscall UEventMatchAPI::execGetScore(UEventMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11bf20  1363  ?execGetScore@UEventMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205030;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_101ad070();
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar3 = FUN_101b1180(local_18);
    *(undefined4 *)param_2 = uVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011bfe9 Catch@1011bfe9

void Catch_1011bfe9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011bffd Catch@1011bffd

void Catch_1011bffd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEventMatchAPI::execGetScore");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c020 UEventMatchAPI::execGetTeamName

/* public: void __thiscall UEventMatchAPI::execGetTeamName(struct FFrame &,void * const) */

void __thiscall UEventMatchAPI::execGetTeamName(UEventMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FString *pFVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11c020  1419  ?execGetTeamName@UEventMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205059;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_101ad070();
  if (iVar2 == 0) {
    FString::operator=(param_2,(ushort *)0x0);
  }
  else {
    pFVar3 = (FString *)FUN_101b12e0(local_2c,local_18);
    local_8._0_1_ = 1;
    FString::operator=(param_2,pFVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011c0fc Catch@1011c0fc

void Catch_1011c0fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011c110 Catch@1011c110

void Catch_1011c110(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEventMatchAPI::execGetTeamName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c130 UEventMatchAPI::execGetPartyMemberCount

/* public: void __thiscall UEventMatchAPI::execGetPartyMemberCount(struct FFrame &,void * const) */

void __thiscall
UEventMatchAPI::execGetPartyMemberCount(UEventMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11c130  1285  ?execGetPartyMemberCount@UEventMatchAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205080;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  iVar2 = FUN_101ad070();
  if (iVar2 != 0) {
    uVar3 = FUN_101b13a0(local_18);
    *(undefined4 *)param_2 = uVar3;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011c1f4 Catch@1011c1f4

void Catch_1011c1f4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011c208 Catch@1011c208

void Catch_1011c208(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEventMatchAPI::execGetPartyMemberCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c230 UEventMatchAPI::execSetSelectedUser

/* public: void __thiscall UEventMatchAPI::execSetSelectedUser(struct FFrame &,void * const) */

void __thiscall
UEventMatchAPI::execSetSelectedUser(UEventMatchAPI *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  FFrame *pFVar5;
  AppendixVisualEffectBitType AVar6;
  uint uStack_38;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar5 = param_1;
                    /* 0x11c230  1796  ?execSetSelectedUser@UEventMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102050a0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar2 = **(byte **)(pFVar5 + 0xc);
  *(byte **)(pFVar5 + 0xc) = *(byte **)(pFVar5 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(pFVar5,&param_1);
  *(int *)(pFVar5 + 0xc) = *(int *)(pFVar5 + 0xc) + 1;
  if (**(char **)(pFVar5 + 0xc) == 'B') {
    *(char **)(pFVar5 + 0xc) = *(char **)(pFVar5 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar5,0);
  }
  iVar3 = FUN_101ad070();
  if (iVar3 == 0) {
    ExceptionList = local_10;
    return;
  }
  if (local_18 == 0) {
    AVar6 = 0x20;
  }
  else {
    if (local_18 != 1) {
      ExceptionList = local_10;
      return;
    }
    AVar6 = 0x10;
  }
  pFVar5 = (FFrame *)0x0;
  do {
    while( true ) {
      if (8 < (int)pFVar5) {
        ExceptionList = local_10;
        return;
      }
      piVar4 = (int *)FUN_101b0fa0(local_18,pFVar5);
      if (((piVar4 != (int *)0x0) && (*piVar4 != -1)) &&
         (iVar3 = (**(code **)(**(int **)(*(int *)(DAT_103663bc + 0x50) + 0x60) + 0x94))(*piVar4),
         iVar3 != 0)) break;
LAB_1011c382:
      pFVar5 = pFVar5 + 1;
    }
    if (pFVar5 != param_1) {
      puVar1 = (uint *)(*(int *)(iVar3 + 0x204) + 0x1860);
      *puVar1 = *puVar1 & 0xfffffffe;
      APawn::DeleteAppendixEffect(*(APawn **)(iVar3 + 0x204),AVar6);
      goto LAB_1011c382;
    }
    puVar1 = (uint *)(*(int *)(iVar3 + 0x204) + 0x1860);
    *puVar1 = *puVar1 | 1;
    APawn::AddAppendixEffect(*(APawn **)(iVar3 + 0x204),AVar6);
    pFVar5 = pFVar5 + 1;
  } while( true );
}


// ==== 1011c3a8 Catch@1011c3a8

void Catch_1011c3a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011c3bc Catch@1011c3bc

void Catch_1011c3bc(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEventMatchAPI::execSetSelectedUser");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c3e0 UEventMatchAPI::execGetEventMatchData

/* public: void __thiscall UEventMatchAPI::execGetEventMatchData(struct FFrame &,void * const) */

void __thiscall
UEventMatchAPI::execGetEventMatchData(UEventMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FEventMatchData *pFVar3;
  FEventMatchData *this_00;
  uint uStack_5f8;
  FEventMatchData local_5e8 [1492];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x11c3e0  1196  ?execGetEventMatchData@UEventMatchAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102050cb;
  local_10 = ExceptionList;
  uStack_5f8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5f8;
  ExceptionList = &local_10;
  local_8 = 0;
  FEventMatchData::FEventMatchData(local_5e8);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_5e8);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_5e8;
  }
  else {
    this_00 = *(FEventMatchData **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_101ad070();
  if (iVar2 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    pFVar3 = (FEventMatchData *)FUN_101b1060();
    FEventMatchData::operator=(this_00,pFVar3);
    *(undefined4 *)param_2 = 1;
  }
  local_8 = local_8 & 0xffffff00;
  FEventMatchData::~FEventMatchData(local_5e8);
  ExceptionList = local_10;
  return;
}


// ==== 1011c509 Catch@1011c509

void Catch_1011c509(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011c51d Catch@1011c51d

void Catch_1011c51d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEventMatchAPI::execGetEventMatchData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c540 UEventMatchAPI::execGetUserData

/* public: void __thiscall UEventMatchAPI::execGetUserData(struct FFrame &,void * const) */

void __thiscall UEventMatchAPI::execGetUserData(UEventMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FEventMatchUserData *pFVar4;
  FEventMatchUserData *this_00;
  uint uStack_80;
  FEventMatchUserData local_70 [88];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  pFVar2 = param_1;
                    /* 0x11c540  1433  ?execGetUserData@UEventMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102050f8;
  local_10 = ExceptionList;
  uStack_80 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FEventMatchUserData::FEventMatchUserData(local_70);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,local_70);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_70;
  }
  else {
    this_00 = *(FEventMatchUserData **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_101ad070();
  if (iVar3 != 0) {
    iVar3 = FUN_101b0fa0(local_18,param_1);
    if (iVar3 != 0) {
      pFVar4 = (FEventMatchUserData *)FUN_101b0fa0(local_18,param_1);
      FEventMatchUserData::operator=(this_00,pFVar4);
      *(undefined4 *)param_2 = 1;
      local_8 = local_8 & 0xffffff00;
      FEventMatchUserData::~FEventMatchUserData(local_70);
      ExceptionList = local_10;
      return;
    }
  }
  *(undefined4 *)param_2 = 0;
  local_8 = local_8 & 0xffffff00;
  FEventMatchUserData::~FEventMatchUserData(local_70);
  ExceptionList = local_10;
  return;
}


// ==== 1011c6ca Catch@1011c6ca

void Catch_1011c6ca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011c6de Catch@1011c6de

void Catch_1011c6de(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UEventMatchAPI::execGetUserData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c700 UGMAPI::execBeginGMChangeServer

/* public: void __thiscall UGMAPI::execBeginGMChangeServer(struct FFrame &,void * const) */

void __thiscall UGMAPI::execBeginGMChangeServer(UGMAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11c700  1081  ?execBeginGMChangeServer@UGMAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205120;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x740))(local_18,local_2c,local_28,local_24);
  ExceptionList = local_10;
  return;
}


// ==== 1011c7e2 Catch@1011c7e2

void Catch_1011c7e2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011c7f6 Catch@1011c7f6

void Catch_1011c7f6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UGMAPI::execBeginGMChangeServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c820 UGMAPI::execRequestGMCommand

/* public: void __thiscall UGMAPI::execRequestGMCommand(struct FFrame &,void * const) */

void __thiscall UGMAPI::execRequestGMCommand(UGMAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x11c820  1623  ?execRequestGMCommand@UGMAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205149;
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
  FUN_10144cf0(local_18,local_2c);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011c902 Catch@1011c902

void Catch_1011c902(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011c916 Catch@1011c916

void Catch_1011c916(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UGMAPI::execRequestGMCommand");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011c940 UGMAPI::execRequestSnoopEnd

/* public: void __thiscall UGMAPI::execRequestSnoopEnd(struct FFrame &,void * const) */

void __thiscall UGMAPI::execRequestSnoopEnd(UGMAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11c940  1685  ?execRequestSnoopEnd@UGMAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205170;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101452f0(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 1011c9e9 Catch@1011c9e9

void Catch_1011c9e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011c9fd Catch@1011c9fd

void Catch_1011c9fd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UGMAPI::execRequestSnoopEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ca20 UGMAPI::execGetObservingUserInfo

/* public: void __thiscall UGMAPI::execGetObservingUserInfo(struct FFrame &,void * const) */

void __thiscall UGMAPI::execGetObservingUserInfo(UGMAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FUserInfo *pFVar3;
  uint uStack_424;
  FUserInfo local_414 [228];
  undefined4 *local_330;
  undefined1 *local_32c;
  void *local_328;
  undefined1 *puStack_324;
  uint local_320;
  undefined1 local_31c [788];
  uint local_8;
  
                    /* 0x11ca20  1275  ?execGetObservingUserInfo@UGMAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_324 = &LAB_1020519b;
  local_328 = ExceptionList;
  uStack_424 = DAT_103554c4 ^ (uint)local_31c;
  local_32c = (undefined1 *)&uStack_424;
  ExceptionList = &local_328;
  local_330 = param_2;
  local_320 = 0;
  local_8 = uStack_424;
  FUserInfo::FUserInfo(local_414);
  local_320 = CONCAT31(local_320._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_414);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_414;
  }
  else {
    pFVar3 = *(FUserInfo **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar2 = FUN_101ad0f0();
  if (iVar2 == 0) {
    *local_330 = 0;
    local_320 = local_320 & 0xffffff00;
    FUserInfo::~FUserInfo(local_414);
  }
  else {
    FUN_101b1a20(local_31c);
    FUN_10064ca0(local_31c,pFVar3);
    *local_330 = 1;
    local_320 = local_320 & 0xffffff00;
    FUserInfo::~FUserInfo(local_414);
    local_320 = 0xffffffff;
  }
  ExceptionList = local_328;
  __security_check_cookie(local_8 ^ (uint)local_31c);
  return;
}


// ==== 1011cb85 Catch@1011cb85

void Catch_1011cb85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011cb99 Catch@1011cb99

void Catch_1011cb99(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UGMAPI::execGetObservingUserInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011cbc0 UHennaAPI::execGetHennaInfoCount

/* public: void __thiscall UHennaAPI::execGetHennaInfoCount(struct FFrame &,void * const) */

void __thiscall UHennaAPI::execGetHennaInfoCount(UHennaAPI *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11cbc0  1209  ?execGetHennaInfoCount@UHennaAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102051d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = FUN_101ad170();
  if (iVar1 == 0) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  uVar2 = FUN_101b1c10();
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1011cc6e Catch@1011cc6e

void Catch_1011cc6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011cc82 Catch@1011cc82

void Catch_1011cc82(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHennaAPI::execGetHennaInfoCount");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011cca0 UHennaAPI::execGetHennaInfo

/* public: void __thiscall UHennaAPI::execGetHennaInfo(struct FFrame &,void * const) */

void __thiscall UHennaAPI::execGetHennaInfo(UHennaAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x11cca0  1208  ?execGetHennaInfo@UHennaAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102051f0;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_18 = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = (FFrame *)&local_18;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  local_1c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar5 = &local_1c;
  }
  else {
    puVar5 = *(undefined4 **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  iVar3 = FUN_101ad170();
  if (iVar3 == 0) {
    *(undefined4 *)param_1 = 0xffffffff;
    *puVar5 = 0xffffffff;
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = (undefined4 *)FUN_101b1c90(local_20);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)param_1 = 0xffffffff;
    *puVar5 = 0xffffffff;
    *(undefined4 *)param_2 = 0;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)param_1 = *puVar4;
  *puVar5 = puVar4[1];
  *(undefined4 *)param_2 = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1011ce63 Catch@1011ce63

void Catch_1011ce63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011ce77 Catch@1011ce77

void Catch_1011ce77(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHennaAPI::execGetHennaInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011cea0 UHeroTowerAPI::execRequestWriteHeroWords

/* public: void __thiscall UHeroTowerAPI::execRequestWriteHeroWords(struct FFrame &,void * const) */

void __thiscall
UHeroTowerAPI::execRequestWriteHeroWords(UHeroTowerAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uStack_854;
  uint uStack_840;
  FString local_828 [16];
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  int local_80c;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0x11cea0  1698
                       ?execRequestWriteHeroWords@UHeroTowerAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_810 = &LAB_10205222;
  local_814 = ExceptionList;
  uStack_840 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_840;
  ExceptionList = &local_814;
  local_80c = 0;
  local_8 = uStack_840;
  FString::FString(local_828);
  local_80c = CONCAT31(local_80c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    uStack_854 = 0x1011cf3a;
    (**(code **)(GNatives_exref + 0x108))();
  }
  puVar2 = FString::operator*(local_828);
  uStack_854 = 0x1011cf4e;
  appStrcpy(local_808,puVar2);
  FUN_1014cff0();
  FString::FString((FString *)&uStack_854,local_808);
  local_80c._1_3_ = (uint3)((uint)local_80c >> 8);
  local_80c._0_1_ = 1;
  FUN_10149910();
  local_80c = (uint)local_80c._1_3_ << 8;
  FString::~FString(local_828);
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 1011cfbf Catch@1011cfbf

void Catch_1011cfbf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011cfd3 Catch@1011cfd3

void Catch_1011cfd3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UHeroTowerAPI::execRequestWriteHeroWords");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011cff0 UMacroAPI::execRequestUseMacro

/* public: void __thiscall UMacroAPI::execRequestUseMacro(struct FFrame &,void * const) */

void __thiscall UMacroAPI::execRequestUseMacro(UMacroAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11cff0  1694  ?execRequestUseMacro@UMacroAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205250;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101aefc0(local_18,1);
  ExceptionList = local_10;
  return;
}


// ==== 1011d0a1 Catch@1011d0a1

void Catch_1011d0a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011d0b5 Catch@1011d0b5

void Catch_1011d0b5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMacroAPI::execRequestUseMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011d0e0 UMacroAPI::IsSafeMacro

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: int __thiscall UMacroAPI::IsSafeMacro(class TArray<class FString> &) */

int __thiscall UMacroAPI::IsSafeMacro(UMacroAPI *this,TArray<FString> *param_1)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  void *local_1814;
  undefined1 *puStack_1810;
  undefined4 local_180c;
  ushort local_1808 [3072];
  uint local_8;
  
                    /* 0x11d0e0  782  ?IsSafeMacro@UMacroAPI@@QAEHAAV?$TArray@VFString@@@@@Z */
  puStack_1810 = &LAB_10205270;
  local_1814 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_1808;
  ExceptionList = &local_1814;
  iVar5 = 0;
  local_180c = 0;
  bVar1 = true;
  iVar2 = FUN_101acff0();
  if (iVar2 != 0) {
    while (iVar5 < 0xc) {
      puVar3 = FString::operator*((FString *)(*(int *)param_1 + iVar5 * 0xc));
      if ((puVar3 == (ushort *)0x0) || (iVar2 = appStrlen(puVar3), iVar2 < 1)) {
        if (!bVar1) goto LAB_1011d2c1;
        if (iVar5 == 0) break;
        bVar1 = false;
        iVar5 = iVar5 + 1;
      }
      else {
        if (bVar1) {
          appStrcpy(local_1808,puVar3);
          iVar2 = FUN_101358a0(local_1808);
          if (iVar2 < 0x4d) {
            if (iVar2 == 0x4c) {
              iVar2 = FUN_10135980();
              if ((iVar2 != 0) && (iVar2 = thunk_FUN_101c1b01(iVar2), 0 < iVar2)) goto LAB_1011d2d7;
              break;
            }
            if ((((iVar2 < 0x1b) || ((0x1d < iVar2 || (iVar2 = FUN_10135980(), iVar2 == 0)))) ||
                (iVar2 = thunk_FUN_101c1b01(iVar2), 9 < iVar2 - 1U)) ||
               ((iVar4 = FUN_10135980(), iVar4 == 0 ||
                (iVar4 = thunk_FUN_101c1b01(iVar4), 0xb < iVar4 - 1U)))) break;
            iVar2 = FUN_10141370(iVar4 + -0xd + iVar2 * 0xc);
            bVar6 = *(int *)(iVar2 + 0x1e54) == 4;
          }
          else {
            if (((iVar2 < 0x10000000) || (0x10000001 < iVar2)) ||
               (iVar2 = FUN_1014dd00(), iVar2 == 0)) break;
            bVar6 = *(int *)(iVar2 + 0x250) == 0;
          }
          if (bVar6) break;
        }
        else {
LAB_1011d2c1:
          if ((puVar3 != (ushort *)0x0) && (iVar2 = appStrlen(puVar3), 0 < iVar2)) break;
        }
LAB_1011d2d7:
        iVar5 = iVar5 + 1;
      }
    }
  }
  ExceptionList = local_1814;
  iVar2 = __security_check_cookie(local_8 ^ (uint)local_1808);
  return iVar2;
}


// ==== 1011d2df Catch@1011d2df

void Catch_1011d2df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011d2f3 Catch@1011d2f3

void Catch_1011d2f3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMacroAPI::IsSafeMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011d310 UMacroAPI::SaveMacroFromCommandList

/* public: void __thiscall UMacroAPI::SaveMacroFromCommandList(class L2ParamStack *,class
   TArray<class FString> &) */

void __thiscall
UMacroAPI::SaveMacroFromCommandList(UMacroAPI *this,L2ParamStack *param_1,TArray<FString> *param_2)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FL2MagicSkillCommandData *pFVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  void *local_288;
  int local_284;
  void *local_280;
  void *local_27c;
  TArray<FString> *local_278;
  FString local_274 [12];
  ushort local_268 [300];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11d310  918
                       ?SaveMacroFromCommandList@UMacroAPI@@QAEXPAVL2ParamStack@@AAV?$TArray@VFString@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_102052ac;
  local_c = ExceptionList;
  local_10 = DAT_103554c4 ^ (uint)&local_288;
  ExceptionList = &local_c;
  local_278 = param_2;
  if ((param_1 != (L2ParamStack *)0x0) &&
     (local_284 = FUN_101acff0(DAT_103554c4 ^ (uint)&stack0xfffffd68), local_284 != 0)) {
    local_288 = (void *)0x0;
    iVar9 = 0;
    do {
      iVar1 = FString::Len((FString *)(*(int *)local_278 + iVar9));
      if (iVar1 < 1) {
        L2ParamStack::PushBack(param_1,local_288);
        break;
      }
      local_288 = (void *)((int)local_288 + 1);
      iVar9 = iVar9 + 0xc;
    } while (iVar9 < 0x90);
    if (local_288 == (void *)0xc) {
      L2ParamStack::PushBack(param_1,(void *)0xc);
    }
    local_288 = (void *)0x0;
    pvVar7 = (void *)0x0;
    do {
      puVar2 = FString::operator*((FString *)(*(int *)local_278 + (int)local_288));
      FString::FString(local_274);
      local_4 = 0;
      pvVar8 = pvVar7;
      if ((puVar2 != (ushort *)0x0) && (iVar9 = appStrlen(puVar2), 0 < iVar9)) {
        FString::operator=(local_274,puVar2);
        puVar3 = FString::operator*(local_274);
        iVar9 = FUN_101358a0(puVar3);
        if (0x4c < iVar9) {
          if (iVar9 < 0x10000000) goto switchD_1011d442_default;
          if (iVar9 < 0x10000002) {
            iVar9 = FUN_1014dd00();
            if ((iVar9 == 0) || (*(int *)(iVar9 + 0x250) == 0)) goto LAB_1011d5e2;
          }
          else if (iVar9 != 0x20000000) goto switchD_1011d442_default;
          goto switchD_1011d442_caseD_19;
        }
        if (iVar9 != 0x4c) goto LAB_1011d436;
        pvVar8 = (void *)((int)pvVar7 + 1);
        iVar9 = FUN_10135980();
        if ((iVar9 == 0) || (pvVar6 = (void *)thunk_FUN_101c1b01(iVar9), (int)pvVar6 < 1))
        goto LAB_1011d5e2;
        L2ParamStack::PushBack(param_1,pvVar8);
        L2ParamStack::PushBack(param_1,(void *)0x6);
        L2ParamStack::PushBack(param_1,pvVar6);
        L2ParamStack::PushBack(param_1,(void *)0x0);
        puVar2 = (ushort *)0x0;
        goto LAB_1011d5de;
      }
      FString::operator=(local_274,(ushort *)&DAT_1022f9f8);
      iVar9 = -1;
LAB_1011d436:
      switch(iVar9) {
      case 0x18:
        local_27c = (void *)0x0;
        local_280 = (void *)0x0;
        uVar4 = FUN_10135980();
        appSprintf(local_268,(ushort *)&DAT_1022dde0,uVar4);
        iVar9 = FUN_10135980();
        while (iVar9 != 0) {
          appSprintf(local_268,(ushort *)L"%s %s",local_268,iVar9);
          iVar9 = FUN_10135980();
        }
        pFVar5 = FL2GameData::GetMSCommandData((FL2GameData *)GL2GameData_exref,local_268);
        pvVar8 = local_280;
        if (pFVar5 != (FL2MagicSkillCommandData *)0x0) {
          local_27c = (void *)0x1;
          pvVar8 = *(void **)pFVar5;
        }
        L2ParamStack::PushBack(param_1,(void *)((int)pvVar7 + 1));
        L2ParamStack::PushBack(param_1,(void *)0x1);
        L2ParamStack::PushBack(param_1,pvVar8);
        L2ParamStack::PushBack(param_1,local_27c);
        puVar2 = (ushort *)0x0;
        goto LAB_1011d5de;
      case 0x19:
      case 0x1a:
switchD_1011d442_caseD_19:
        L2ParamStack::PushBack(param_1,(void *)((int)pvVar7 + 1));
        L2ParamStack::PushBack(param_1,(void *)0x3);
        L2ParamStack::PushBack(param_1,(void *)0x0);
        L2ParamStack::PushBack(param_1,(void *)0x0);
LAB_1011d5de:
        L2ParamStack::PushBack(param_1,puVar2);
        pvVar8 = (void *)((int)pvVar7 + 1);
        break;
      case 0x1b:
        pvVar8 = (void *)((int)pvVar7 + 1);
        iVar9 = FUN_10135980();
        if (iVar9 != 0) {
          iVar9 = thunk_FUN_101c1b01(iVar9);
          local_280 = (void *)(iVar9 - 1);
          if ((local_280 < (void *)0xa) && (iVar9 = FUN_10135980(), iVar9 != 0)) {
            iVar9 = thunk_FUN_101c1b01(iVar9);
            if ((void *)(iVar9 + -1) < (void *)0xc) {
              L2ParamStack::PushBack(param_1,pvVar8);
              L2ParamStack::PushBack(param_1,(void *)0x4);
              L2ParamStack::PushBack(param_1,local_280);
              L2ParamStack::PushBack(param_1,(void *)(iVar9 + -1));
              puVar2 = (ushort *)0x0;
              goto LAB_1011d5de;
            }
          }
        }
        break;
      default:
switchD_1011d442_default:
        if (iVar9 < 0x72) goto switchD_1011d442_caseD_19;
      }
LAB_1011d5e2:
      local_4 = 0xffffffff;
      FString::~FString(local_274);
      local_288 = (void *)((int)local_288 + 0xc);
      pvVar7 = pvVar8;
    } while ((int)local_288 < 0x90);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_288);
  return;
}


// ==== 1011d670 UMacroAPI::execRequestMacroList

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


// ==== 1011d932 Catch@1011d932

void Catch_1011d932(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x60) = *(undefined4 *)(unaff_EBP + 0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x60,&DAT_102a47f0);
}


// ==== 1011d946 Catch@1011d946

void Catch_1011d946(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMacroAPI::execRequestMacroList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011d970 UMacroAPI::execRequestDeleteMacro

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


// ==== 1011da96 Catch@1011da96

void Catch_1011da96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011daaa Catch@1011daaa

void Catch_1011daaa(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMacroAPI::execRequestDeleteMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011dad0 UMacroAPI::execRequestMakeMacro

/* public: void __thiscall UMacroAPI::execRequestMakeMacro(struct FFrame &,void * const) */

void __thiscall UMacroAPI::execRequestMakeMacro(UMacroAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  void *pvVar6;
  uint uStack_c78;
  FFrame local_c68 [3080];
  FString local_60 [12];
  FString local_54 [12];
  int local_48;
  FString local_40 [12];
  UMacroAPI *local_34;
  void *local_30;
  L2ParamStack local_2c [4];
  FString local_28 [12];
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11dad0  1639  ?execRequestMakeMacro@UMacroAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102053e6;
  local_10 = ExceptionList;
  uStack_c78 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_c78;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_34 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  FString::FString(local_40);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_54);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_54);
  local_30 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_30);
  FString::FString(local_60);
  local_8._0_1_ = 3;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_60);
  _eh_vector_constructor_iterator_(local_c68,0xc,0x100,FUN_10051aa0,FUN_10052740);
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_c68);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    param_1 = local_c68;
  }
  else {
    param_1 = *(FFrame **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  local_18 = 0;
  iVar3 = IsSafeMacro(local_34,(TArray<FString> *)param_1);
  if (iVar3 == 0) {
    FUN_10170650(0x32a,0xffb09b79);
    local_18 = 1;
  }
  else {
    iVar3 = FString::Len(local_40);
    if (iVar3 < 1) {
      FUN_10170650(0x346,0xffb09b79);
      local_18 = 1;
    }
    else {
      for (iVar3 = 0; local_48 = iVar3, iVar4 = FUN_101acf70(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        iVar4 = FUN_101adb70(iVar3);
        if ((iVar4 != 0) && (puVar5 = (ushort *)FUN_101b3e80(), puVar5 != (ushort *)0x0)) {
          FString::FString(local_28,puVar5);
          local_8 = CONCAT31(local_8._1_3_,5);
          iVar4 = FString::operator==(local_28,local_40);
          if ((iVar4 != 0) &&
             (((int)local_1c < 1 || (pvVar6 = (void *)FUN_101b3e00(), local_1c != pvVar6)))) {
            local_8 = CONCAT31(local_8._1_3_,4);
            FString::~FString(local_28);
            FUN_10170650(0x347,0xffb09b79);
            local_18 = 1;
            goto LAB_1011de46;
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          FString::~FString(local_28);
        }
      }
      if (local_18 == 0) {
        L2ParamStack::L2ParamStack(local_2c,0x44);
        local_8 = CONCAT31(local_8._1_3_,6);
        pvVar6 = local_1c;
        if ((int)local_1c < 1) {
          pvVar6 = (void *)0x0;
        }
        L2ParamStack::PushBack(local_2c,pvVar6);
        iVar3 = FString::Len(local_40);
        if (iVar3 < 1) {
          puVar5 = (ushort *)0x0;
        }
        else {
          puVar5 = FString::operator*(local_40);
        }
        L2ParamStack::PushBack(local_2c,puVar5);
        iVar3 = FString::Len(local_60);
        if (iVar3 < 1) {
          puVar5 = (ushort *)0x0;
        }
        else {
          puVar5 = FString::operator*(local_60);
        }
        L2ParamStack::PushBack(local_2c,puVar5);
        iVar3 = FString::Len(local_54);
        if (iVar3 < 1) {
          puVar5 = (ushort *)0x0;
        }
        else {
          puVar5 = FString::operator*(local_54);
        }
        L2ParamStack::PushBack(local_2c,puVar5);
        L2ParamStack::PushBack(local_2c,local_30);
        SaveMacroFromCommandList(local_34,local_2c,(TArray<FString> *)param_1);
        FUN_10143b20(local_2c);
        local_8 = CONCAT31(local_8._1_3_,4);
        L2ParamStack::~L2ParamStack(local_2c);
      }
    }
  }
LAB_1011de46:
  *(uint *)param_2 = (uint)(local_18 == 0);
  local_8._0_1_ = 3;
  _eh_vector_destructor_iterator_(local_c68,0xc,0x100,FUN_10052740);
  local_8._0_1_ = 2;
  FString::~FString(local_60);
  local_8._0_1_ = 1;
  FString::~FString(local_54);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 1011dea9 Catch@1011dea9

void Catch_1011dea9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_102a47f0);
}


// ==== 1011debd Catch@1011debd

void Catch_1011debd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMacroAPI::execRequestMakeMacro");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011dee0 UMiniMapAPI::execRequestCursedWeaponList

/* public: void __thiscall UMiniMapAPI::execRequestCursedWeaponList(struct FFrame &,void * const) */

void __thiscall
UMiniMapAPI::execRequestCursedWeaponList(UMiniMapAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11dee0  1606
                       ?execRequestCursedWeaponList@UMiniMapAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10149b50();
  ExceptionList = local_10;
  return;
}


// ==== 1011df60 Catch@1011df60

void Catch_1011df60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011df74 Catch@1011df74

void Catch_1011df74(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMiniMapAPI::execRequestCursedWeaponList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011dfa0 UMiniMapAPI::execRequestCursedWeaponLocation

/* public: void __thiscall UMiniMapAPI::execRequestCursedWeaponLocation(struct FFrame &,void *
   const) */

void __thiscall
UMiniMapAPI::execRequestCursedWeaponLocation(UMiniMapAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11dfa0  1607
                       ?execRequestCursedWeaponLocation@UMiniMapAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10149b60();
  ExceptionList = local_10;
  return;
}


// ==== 1011e020 Catch@1011e020

void Catch_1011e020(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011e034 Catch@1011e034

void Catch_1011e034(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UMiniMapAPI::execRequestCursedWeaponLocation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e060 UOlympiadAPI::execRequestOlympiadObserverEnd

/* public: void __thiscall UOlympiadAPI::execRequestOlympiadObserverEnd(struct FFrame &,void *
   const) */

void __thiscall
UOlympiadAPI::execRequestOlympiadObserverEnd(UOlympiadAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11e060  1644
                       ?execRequestOlympiadObserverEnd@UOlympiadAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101499d0();
  ExceptionList = local_10;
  return;
}


// ==== 1011e0e0 Catch@1011e0e0

void Catch_1011e0e0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011e0f4 Catch@1011e0f4

void Catch_1011e0f4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UOlympiadAPI::execRequestOlympiadObserverEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e120 UOlympiadAPI::execRequestOlympiadMatchList

/* public: void __thiscall UOlympiadAPI::execRequestOlympiadMatchList(struct FFrame &,void * const)
    */

void __thiscall
UOlympiadAPI::execRequestOlympiadMatchList(UOlympiadAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11e120  1643
                       ?execRequestOlympiadMatchList@UOlympiadAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10149a60();
  ExceptionList = local_10;
  return;
}


// ==== 1011e1a0 Catch@1011e1a0

void Catch_1011e1a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011e1b4 Catch@1011e1b4

void Catch_1011e1b4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UOlympiadAPI::execRequestOlympiadMatchList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e1e0 UPartyMatchAPI::execRequestOpenPartyMatch

/* public: void __thiscall UPartyMatchAPI::execRequestOpenPartyMatch(struct FFrame &,void * const)
    */

void __thiscall
UPartyMatchAPI::execRequestOpenPartyMatch(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11e1e0  1646
                       ?execRequestOpenPartyMatch@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10170860(0xb,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1011e266 Catch@1011e266

void Catch_1011e266(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011e27a Catch@1011e27a

void Catch_1011e27a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestOpenPartyMatch");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e2a0 UPartyMatchAPI::execRequestPartyRoomList

/* public: void __thiscall UPartyMatchAPI::execRequestPartyRoomList(struct FFrame &,void * const) */

void __thiscall
UPartyMatchAPI::execRequestPartyRoomList(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11e2a0  1651
                       ?execRequestPartyRoomList@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102054b9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_34,local_18);
  L2ParamStack::PushBack(local_34,param_1);
  L2ParamStack::PushBack(local_34,local_1c);
  FUN_10149af0(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011e3c0 Catch@1011e3c0

void Catch_1011e3c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1011e3d4 Catch@1011e3d4

void Catch_1011e3d4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestPartyRoomList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e400 UPartyMatchAPI::execRequestJoinPartyRoom

/* public: void __thiscall UPartyMatchAPI::execRequestJoinPartyRoom(struct FFrame &,void * const) */

void __thiscall
UPartyMatchAPI::execRequestJoinPartyRoom(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11e400  1635
                       ?execRequestJoinPartyRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102054e9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  L2ParamStack::PushBack(local_30,(void *)0x0);
  L2ParamStack::PushBack(local_30,(void *)0x0);
  L2ParamStack::PushBack(local_30,(void *)0x0);
  FUN_10149b10(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1011e4de Catch@1011e4de

void Catch_1011e4de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011e4f2 Catch@1011e4f2

void Catch_1011e4f2(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestJoinPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e510 UPartyMatchAPI::execRequestJoinPartyRoomAuto

/* public: void __thiscall UPartyMatchAPI::execRequestJoinPartyRoomAuto(struct FFrame &,void *
   const) */

void __thiscall
UPartyMatchAPI::execRequestJoinPartyRoomAuto(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11e510  1636
                       ?execRequestJoinPartyRoomAuto@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205519;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_1c);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  L2ParamStack::L2ParamStack(local_34,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_34,(void *)0x0);
  L2ParamStack::PushBack(local_34,param_1);
  L2ParamStack::PushBack(local_34,local_18);
  L2ParamStack::PushBack(local_34,local_1c);
  FUN_10149b10(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_34);
  ExceptionList = local_10;
  return;
}


// ==== 1011e636 Catch@1011e636

void Catch_1011e636(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1011e64a Catch@1011e64a

void Catch_1011e64a(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestJoinPartyRoomAuto");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e670 UPartyMatchAPI::execRequestDismissPartyRoom

/* public: void __thiscall UPartyMatchAPI::execRequestDismissPartyRoom(struct FFrame &,void * const)
    */

void __thiscall
UPartyMatchAPI::execRequestDismissPartyRoom(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11e670  1611
                       ?execRequestDismissPartyRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205549;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  FUN_10149b30(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1011e73a Catch@1011e73a

void Catch_1011e73a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011e74e Catch@1011e74e

void Catch_1011e74e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestDismissPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e770 UPartyMatchAPI::execRequestWithdrawPartyRoom

/* public: void __thiscall UPartyMatchAPI::execRequestWithdrawPartyRoom(struct FFrame &,void *
   const) */

void __thiscall
UPartyMatchAPI::execRequestWithdrawPartyRoom(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11e770  1697
                       ?execRequestWithdrawPartyRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205579;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  FUN_10149b40(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1011e83a Catch@1011e83a

void Catch_1011e83a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011e84e Catch@1011e84e

void Catch_1011e84e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestWithdrawPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e870 UPartyMatchAPI::execRequestBanFromPartyRoom

/* public: void __thiscall UPartyMatchAPI::execRequestBanFromPartyRoom(struct FFrame &,void * const)
    */

void __thiscall
UPartyMatchAPI::execRequestBanFromPartyRoom(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11e870  1571
                       ?execRequestBanFromPartyRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102055a9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  FUN_10149b20(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1011e93a Catch@1011e93a

void Catch_1011e93a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011e94e Catch@1011e94e

void Catch_1011e94e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestBanFromPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011e970 UPartyMatchAPI::execRequestPartyMatchWaitList

/* public: void __thiscall UPartyMatchAPI::execRequestPartyMatchWaitList(struct FFrame &,void *
   const) */

void __thiscall
UPartyMatchAPI::execRequestPartyMatchWaitList(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_48;
  L2ParamStack local_38 [24];
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11e970  1650
                       ?execRequestPartyMatchWaitList@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102055d9;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_20 = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_20);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  L2ParamStack::L2ParamStack(local_38,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_38,local_18);
  L2ParamStack::PushBack(local_38,param_1);
  L2ParamStack::PushBack(local_38,local_1c);
  L2ParamStack::PushBack(local_38,local_20);
  FUN_1014a1a0(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 1011eaba Catch@1011eaba

void Catch_1011eaba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011eace Catch@1011eace

void Catch_1011eace(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestPartyMatchWaitList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011eaf0 UPartyMatchAPI::execRequestExitPartyMatchingWaitingRoom

/* public: void __thiscall UPartyMatchAPI::execRequestExitPartyMatchingWaitingRoom(struct FFrame
   &,void * const) */

void __thiscall
UPartyMatchAPI::execRequestExitPartyMatchingWaitingRoom
          (UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  uint *puVar1;
  uint uStack_3c;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11eaf0  1621
                       ?execRequestExitPartyMatchingWaitingRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205609;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &uStack_3c;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  FUN_1014a1b0(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011eb92 Catch@1011eb92

void Catch_1011eb92(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011eba6 Catch@1011eba6

void Catch_1011eba6(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestExitPartyMatchingWaitingRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ebd0 UPartyMatchAPI::execRequestAskJoinPartyRoom

/* public: void __thiscall UPartyMatchAPI::execRequestAskJoinPartyRoom(struct FFrame &,void * const)
    */

void __thiscall
UPartyMatchAPI::execRequestAskJoinPartyRoom(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_48;
  L2ParamStack local_38 [16];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11ebd0  1566
                       ?execRequestAskJoinPartyRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205642;
  local_10 = ExceptionList;
  uStack_48 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_38,10);
  local_8._0_1_ = 2;
  puVar2 = FString::operator*(local_28);
  L2ParamStack::PushBack(local_38,puVar2);
  FUN_1014a180(local_38);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1011ecbb Catch@1011ecbb

void Catch_1011ecbb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011eccf Catch@1011eccf

void Catch_1011eccf(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestAskJoinPartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ecf0 UPartyMatchAPI::execRequestManagePartyRoom

/* public: void __thiscall UPartyMatchAPI::execRequestManagePartyRoom(struct FFrame &,void * const)
    */

void __thiscall
UPartyMatchAPI::execRequestManagePartyRoom(UPartyMatchAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  void *pvVar4;
  uint uStack_860;
  FString local_84c [16];
  void *local_83c;
  L2ParamStack local_838 [16];
  undefined4 local_828;
  void *local_824;
  void *local_820;
  void *local_81c;
  undefined1 *local_818;
  void *local_814;
  undefined1 *puStack_810;
  int local_80c;
  ushort local_808 [1024];
  uint local_8;
  
                    /* 0x11ecf0  1640
                       ?execRequestManagePartyRoom@UPartyMatchAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_810 = &LAB_10205672;
  local_814 = ExceptionList;
  uStack_860 = DAT_103554c4 ^ (uint)local_808;
  local_818 = (undefined1 *)&uStack_860;
  ExceptionList = &local_814;
  local_80c = 0;
  local_81c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  local_8 = uStack_860;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_81c);
  local_820 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_820);
  local_824 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_824);
  local_828 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_828);
  FString::FString(local_84c);
  local_80c = CONCAT31(local_80c._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_84c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pvVar4 = (void *)0x1;
  if ((0 < (int)local_824) && (pvVar4 = local_824, 0x4f < (int)local_824)) {
    pvVar4 = (void *)0x50;
  }
  local_83c = (void *)FUN_100536d0(local_828,pvVar4,0x50);
  L2ParamStack::L2ParamStack(local_838,10);
  local_80c = CONCAT31(local_80c._1_3_,2);
  L2ParamStack::PushBack(local_838,local_81c);
  L2ParamStack::PushBack(local_838,local_820);
  L2ParamStack::PushBack(local_838,pvVar4);
  L2ParamStack::PushBack(local_838,local_83c);
  L2ParamStack::PushBack(local_838,*(void **)GL2PartyLooting_exref);
  iVar2 = FString::operator!=(local_84c,(ushort *)&DAT_1022f9f8);
  if (iVar2 == 0) {
    puVar3 = FString::operator*((FString *)(GL2GameData_exref + 0x43754));
  }
  else {
    puVar3 = FString::operator*(local_84c);
    appStrcpy(local_808,puVar3);
    FUN_1014cff0(local_808);
    puVar3 = local_808;
  }
  L2ParamStack::PushBack(local_838,puVar3);
  FUN_10149b00(local_838);
  local_80c._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_838);
  local_80c = (uint)local_80c._1_3_ << 8;
  FString::~FString(local_84c);
  local_80c = 0xffffffff;
  ExceptionList = local_814;
  __security_check_cookie(local_8 ^ (uint)local_808);
  return;
}


// ==== 1011ef22 Catch@1011ef22

void Catch_1011ef22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_102a47f0);
}


// ==== 1011ef36 Catch@1011ef36

void Catch_1011ef36(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPartyMatchAPI::execRequestManagePartyRoom");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ef60 UPetAPI::execRequestPetUseItem

/* public: void __thiscall UPetAPI::execRequestPetUseItem(struct FFrame &,void * const) */

void __thiscall UPetAPI::execRequestPetUseItem(UPetAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11ef60  1654  ?execRequestPetUseItem@UPetAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102056a0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (0 < local_18) {
    FUN_10144cb0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011f00d Catch@1011f00d

void Catch_1011f00d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011f021 Catch@1011f021

void Catch_1011f021(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetAPI::execRequestPetUseItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f040 UPetAPI::execRequestGiveItemToPet

/* public: void __thiscall UPetAPI::execRequestGiveItemToPet(struct FFrame &,void * const) */

void __thiscall UPetAPI::execRequestGiveItemToPet(UPetAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11f040  1625  ?execRequestGiveItemToPet@UPetAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102056c9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if ((0 < (int)local_18) && (0 < (int)param_1)) {
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_30,local_18);
    L2ParamStack::PushBack(local_30,param_1);
    FUN_10144cc0(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011f140 Catch@1011f140

void Catch_1011f140(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011f154 Catch@1011f154

void Catch_1011f154(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetAPI::execRequestGiveItemToPet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f180 UPetAPI::execRequestGetItemFromPet

/* public: void __thiscall UPetAPI::execRequestGetItemFromPet(struct FFrame &,void * const) */

void __thiscall UPetAPI::execRequestGetItemFromPet(UPetAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11f180  1624  ?execRequestGetItemFromPet@UPetAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102056f9;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if ((0 < (int)local_18) && (0 < (int)param_1)) {
    L2ParamStack::L2ParamStack(local_34,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_34,local_18);
    L2ParamStack::PushBack(local_34,param_1);
    L2ParamStack::PushBack(local_34,(void *)(uint)(local_1c != 0));
    FUN_10144cd0(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_34);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011f2af Catch@1011f2af

void Catch_1011f2af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1011f2c3 Catch@1011f2c3

void Catch_1011f2c3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetAPI::execRequestGetItemFromPet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f2e0 UPetAPI::execRequestPetInventoryItemList

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


// ==== 1011f3fd Catch@1011f3fd

void Catch_1011f3fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011f411 Catch@1011f411

void Catch_1011f411(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetAPI::execRequestPetInventoryItemList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f430 UPetitionAPI::execRequestPetitionCancel

/* public: void __thiscall UPetitionAPI::execRequestPetitionCancel(struct FFrame &,void * const) */

void __thiscall
UPetitionAPI::execRequestPetitionCancel(UPetitionAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11f430  1656  ?execRequestPetitionCancel@UPetitionAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10144db0();
  ExceptionList = local_10;
  return;
}


// ==== 1011f4b0 Catch@1011f4b0

void Catch_1011f4b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011f4c4 Catch@1011f4c4

void Catch_1011f4c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetitionAPI::execRequestPetitionCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f4f0 UPetitionAPI::execRequestPetition

/* public: void __thiscall UPetitionAPI::execRequestPetition(struct FFrame &,void * const) */

void __thiscall UPetitionAPI::execRequestPetition(UPetitionAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x11f4f0  1655  ?execRequestPetition@UPetitionAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205779;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar3 = local_18;
  puVar2 = FString::operator*(local_2c);
  FUN_10144da0(puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011f5d3 Catch@1011f5d3

void Catch_1011f5d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011f5e7 Catch@1011f5e7

void Catch_1011f5e7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetitionAPI::execRequestPetition");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f610 UPetitionAPI::execRequestPetitionFeedBack

/* public: void __thiscall UPetitionAPI::execRequestPetitionFeedBack(struct FFrame &,void * const)
    */

void __thiscall
UPetitionAPI::execRequestPetitionFeedBack(UPetitionAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_4c;
  L2ParamStack local_3c [16];
  FString local_2c [20];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x11f610  1657
                       ?execRequestPetitionFeedBack@UPetitionAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102057b2;
  local_10 = ExceptionList;
  uStack_4c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  L2ParamStack::L2ParamStack(local_3c,10);
  local_8._0_1_ = 2;
  L2ParamStack::PushBack(local_3c,local_18);
  puVar2 = FString::operator*(local_2c);
  L2ParamStack::PushBack(local_3c,puVar2);
  FUN_10148670(local_3c);
  local_8._0_1_ = 1;
  L2ParamStack::~L2ParamStack(local_3c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 1011f723 Catch@1011f723

void Catch_1011f723(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011f737 Catch@1011f737

void Catch_1011f737(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UPetitionAPI::execRequestPetitionFeedBack");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f760 UQuestAPI::execSetQuestTargetInfo

/* public: void __thiscall UQuestAPI::execSetQuestTargetInfo(struct FFrame &,void * const) */

void __thiscall UQuestAPI::execSetQuestTargetInfo(UQuestAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FString aFStack_98 [8];
  undefined4 uStack_90;
  FFrame *pFStack_8c;
  FFrame *pFStack_88;
  FFrame *pFStack_84;
  undefined4 *puStack_80;
  FFrame *pFStack_7c;
  undefined4 *puStack_78;
  FFrame *pFStack_74;
  FString *pFStack_70;
  FFrame *pFStack_6c;
  undefined4 *puStack_68;
  FFrame *pFStack_64;
  FFrame **ppFStack_60;
  FFrame *pFStack_5c;
  undefined4 *puStack_58;
  uint uStack_54;
  FString local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x11f760  1781  ?execSetQuestTargetInfo@UQuestAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102057e2;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_58 = &local_18;
  pFStack_5c = param_1;
  ppFStack_60 = (FFrame **)0x1011f7b4;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  ppFStack_60 = &param_1;
  pFStack_64 = pFVar2;
  puStack_68 = (undefined4 *)0x1011f7d5;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  puStack_68 = &local_1c;
  pFStack_6c = pFVar2;
  pFStack_70 = (FString *)0x1011f7f6;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_70 = (FString *)0x1011f7ff;
  FString::FString(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  pFStack_70 = local_44;
  pFStack_74 = pFVar2;
  puStack_78 = (undefined4 *)0x1011f821;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  puStack_78 = &local_38;
  pFStack_7c = pFVar2;
  puStack_80 = (undefined4 *)0x1011f83f;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  local_20 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  puStack_80 = &local_20;
  pFStack_84 = pFVar2;
  pFStack_88 = (FFrame *)0x1011f860;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    pFStack_88 = (FFrame *)0x0;
    pFStack_8c = pFVar2;
    uStack_90 = 0x1011f884;
    (**(code **)(GNatives_exref + 0x108))();
  }
  pFStack_88 = (FFrame *)local_18;
  pFStack_8c = (FFrame *)0x1011f893;
  FUN_10165630();
  pFStack_88 = param_1;
  pFStack_8c = (FFrame *)0x1011f8a7;
  (**(code **)(*DAT_103663bc + 0x67c))();
  pFStack_8c = (FFrame *)local_1c;
  uStack_90 = 0x1011f8bb;
  (**(code **)(*DAT_103663bc + 0x684))();
  local_28 = aFStack_98;
  FString::FString(aFStack_98,local_44);
  local_8._1_3_ = (uint3)((uint)local_8 >> 8);
  local_8._0_1_ = 1;
  (**(code **)(*DAT_103663bc + 0x68c))();
  (**(code **)(*DAT_103663bc + 0x694))(local_38,local_34,local_30);
  (**(code **)(*DAT_103663bc + 0x69c))(local_20);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 1011f94b Catch@1011f94b

void Catch_1011f94b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 1011f95f Catch@1011f95f

void Catch_1011f95f(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UQuestAPI::execSetQuestTargetInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011f980 UQuestAPI::execRequestDestroyQuest

/* public: void __thiscall UQuestAPI::execRequestDestroyQuest(struct FFrame &,void * const) */

void __thiscall UQuestAPI::execRequestDestroyQuest(UQuestAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11f980  1610  ?execRequestDestroyQuest@UQuestAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205800;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(*DAT_103663bc + 0x7dc))(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 1011fa2e Catch@1011fa2e

void Catch_1011fa2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011fa42 Catch@1011fa42

void Catch_1011fa42(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UQuestAPI::execRequestDestroyQuest");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011fa60 UQuestAPI::execRequestQuestList

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


// ==== 1011fb4e Catch@1011fb4e

void Catch_1011fb4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 1011fb62 Catch@1011fb62

void Catch_1011fb62(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UQuestAPI::execRequestQuestList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011fb80 URecipeAPI::execRequestRecipeShopMakeInfo

/* public: void __thiscall URecipeAPI::execRequestRecipeShopMakeInfo(struct FFrame &,void * const)
    */

void __thiscall
URecipeAPI::execRequestRecipeShopMakeInfo(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x11fb80  1670
                       ?execRequestRecipeShopMakeInfo@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205850;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if ((0 < local_18) && (0 < (int)param_1)) {
    FUN_10143c10(local_18,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011fc4f Catch@1011fc4f

void Catch_1011fc4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011fc63 Catch@1011fc63

void Catch_1011fc63(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeShopMakeInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011fc80 URecipeAPI::execRequestRecipeShopSellList

/* public: void __thiscall URecipeAPI::execRequestRecipeShopSellList(struct FFrame &,void * const)
    */

void __thiscall
URecipeAPI::execRequestRecipeShopSellList(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11fc80  1673
                       ?execRequestRecipeShopSellList@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205870;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (0 < local_18) {
    FUN_10143c00(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011fd2d Catch@1011fd2d

void Catch_1011fd2d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011fd41 Catch@1011fd41

void Catch_1011fd41(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeShopSellList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011fd60 URecipeAPI::execRequestRecipeShopMakeDo

/* public: void __thiscall URecipeAPI::execRequestRecipeShopMakeDo(struct FFrame &,void * const) */

void __thiscall
URecipeAPI::execRequestRecipeShopMakeDo(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_34;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x11fd60  1669  ?execRequestRecipeShopMakeDo@URecipeAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205890;
  local_10 = ExceptionList;
  uStack_34 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if ((0 < local_18) && (0 < (int)param_1)) {
    FUN_10143c20(local_18,param_1,local_1c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011fe54 Catch@1011fe54

void Catch_1011fe54(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 1011fe68 Catch@1011fe68

void Catch_1011fe68(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeShopMakeDo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011fe90 URecipeAPI::execRequestRecipeItemMakeSelf

/* public: void __thiscall URecipeAPI::execRequestRecipeItemMakeSelf(struct FFrame &,void * const)
    */

void __thiscall
URecipeAPI::execRequestRecipeItemMakeSelf(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11fe90  1667
                       ?execRequestRecipeItemMakeSelf@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102058b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (0 < local_18) {
    FUN_10143bc0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011ff3d Catch@1011ff3d

void Catch_1011ff3d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1011ff51 Catch@1011ff51

void Catch_1011ff51(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeItemMakeSelf");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1011ff70 URecipeAPI::execRequestRecipeItemMakeInfo

/* public: void __thiscall URecipeAPI::execRequestRecipeItemMakeInfo(struct FFrame &,void * const)
    */

void __thiscall
URecipeAPI::execRequestRecipeItemMakeInfo(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x11ff70  1666
                       ?execRequestRecipeItemMakeInfo@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102058d0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (0 < local_18) {
    FUN_10143bb0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012001d Catch@1012001d

void Catch_1012001d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120031 Catch@10120031

void Catch_10120031(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeItemMakeInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120050 URecipeAPI::execRequestRecipeBookOpen

/* public: void __thiscall URecipeAPI::execRequestRecipeBookOpen(struct FFrame &,void * const) */

void __thiscall
URecipeAPI::execRequestRecipeBookOpen(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x120050  1664  ?execRequestRecipeBookOpen@URecipeAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_102058f9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  L2ParamStack::L2ParamStack(local_30,10);
  local_8._0_1_ = 1;
  L2ParamStack::PushBack(local_30,local_18);
  FUN_10143b90(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1012011a Catch@1012011a

void Catch_1012011a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012012e Catch@1012012e

void Catch_1012012e(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeBookOpen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120150 URecipeAPI::execRequestRecipeItemDelete

/* public: void __thiscall URecipeAPI::execRequestRecipeItemDelete(struct FFrame &,void * const) */

void __thiscall
URecipeAPI::execRequestRecipeItemDelete(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x120150  1665  ?execRequestRecipeItemDelete@URecipeAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205920;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (0 < local_18) {
    FUN_10143ba0(local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101201fd Catch@101201fd

void Catch_101201fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120211 Catch@10120211

void Catch_10120211(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeItemDelete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120230 URecipeAPI::execRequestRecipeShopManageQuit

/* public: void __thiscall URecipeAPI::execRequestRecipeShopManageQuit(struct FFrame &,void * const)
    */

void __thiscall
URecipeAPI::execRequestRecipeShopManageQuit(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x120230  1671
                       ?execRequestRecipeShopManageQuit@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10143bf0();
  ExceptionList = local_10;
  return;
}


// ==== 101202b0 Catch@101202b0

void Catch_101202b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101202c4 Catch@101202c4

void Catch_101202c4(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeShopManageQuit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101202f0 URecipeAPI::execRequestRecipeShopMessageSet

/* public: void __thiscall URecipeAPI::execRequestRecipeShopMessageSet(struct FFrame &,void * const)
    */

void __thiscall
URecipeAPI::execRequestRecipeShopMessageSet(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x1202f0  1672
                       ?execRequestRecipeShopMessageSet@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205969;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = FString::operator*(local_28);
  FUN_10143bd0(puVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 101203b3 Catch@101203b3

void Catch_101203b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_102a47f0);
}


// ==== 101203c7 Catch@101203c7

void Catch_101203c7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeShopMessageSet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101203f0 URecipeAPI::execRequestRecipeShopListSet

/* public: void __thiscall URecipeAPI::execRequestRecipeShopListSet(struct FFrame &,void * const) */

void __thiscall
URecipeAPI::execRequestRecipeShopListSet(URecipeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_7c;
  L2ParamStack local_6c [16];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [32];
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1203f0  1668
                       ?execRequestRecipeShopListSet@URecipeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102059c5;
  local_10 = ExceptionList;
  uStack_7c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_18 = (void *)0x0;
  FUN_1003fa00(local_44);
  local_8._0_1_ = 2;
  FString::FString(local_50,"Max");
  local_8._0_1_ = 3;
  FUN_100404d0(local_50,&local_18);
  local_8._0_1_ = 2;
  FString::~FString(local_50);
  L2ParamStack::L2ParamStack(local_6c,(int)local_18 * 3 + 1);
  local_8 = CONCAT31(local_8._1_3_,4);
  L2ParamStack::PushBack(local_6c,local_18);
  local_24 = 0;
  while (iVar2 = local_24, local_24 < (int)local_18) {
    uVar3 = FString::Printf((ushort *)local_50,L"ServerID_%d",local_24);
    local_8._0_1_ = 5;
    FUN_100404d0(uVar3,&local_1c);
    local_8._0_1_ = 4;
    FString::~FString(local_50);
    uVar3 = FString::Printf((ushort *)local_5c,L"Price_%d",iVar2);
    local_8._0_1_ = 6;
    FUN_100404d0(uVar3,&local_20);
    local_8 = CONCAT31(local_8._1_3_,4);
    FString::~FString(local_5c);
    L2ParamStack::PushBack(local_6c,local_1c);
    L2ParamStack::PushBack(local_6c,local_20);
    local_24 = iVar2 + 1;
  }
  FUN_10143be0(local_6c);
  local_8._0_1_ = 2;
  L2ParamStack::~L2ParamStack(local_6c);
  local_8._0_1_ = 1;
  FUN_1003fff0();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_44);
  ExceptionList = local_10;
  return;
}


// ==== 101205ac Catch@101205ac

void Catch_101205ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_102a47f0);
}


// ==== 101205c0 Catch@101205c0

void Catch_101205c0(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URecipeAPI::execRequestRecipeShopListSet");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101205e0 URefineryAPI::execConfirmTargetItem

/* public: void __thiscall URefineryAPI::execConfirmTargetItem(struct FFrame &,void * const) */

void __thiscall
URefineryAPI::execConfirmTargetItem(URefineryAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1205e0  1115  ?execConfirmTargetItem@URefineryAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_102059e0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10144e80(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10120689 Catch@10120689

void Catch_10120689(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012069d Catch@1012069d

void Catch_1012069d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URefineryAPI::execConfirmTargetItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101206c0 URefineryAPI::execConfirmRefinerItem

/* public: void __thiscall URefineryAPI::execConfirmRefinerItem(struct FFrame &,void * const) */

void __thiscall
URefineryAPI::execConfirmRefinerItem(URefineryAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1206c0  1114  ?execConfirmRefinerItem@URefineryAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205a00;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  FUN_10144f20(local_18,param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10120788 Catch@10120788

void Catch_10120788(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 1012079c Catch@1012079c

void Catch_1012079c(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URefineryAPI::execConfirmRefinerItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101207c0 URefineryAPI::execConfirmGemStone

/* public: void __thiscall URefineryAPI::execConfirmGemStone(struct FFrame &,void * const) */

void __thiscall URefineryAPI::execConfirmGemStone(URefineryAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x1207c0  1113  ?execConfirmGemStone@URefineryAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205a20;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  FUN_10144fc0(local_20,local_1c,local_18,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 101208d1 Catch@101208d1

void Catch_101208d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 101208e5 Catch@101208e5

void Catch_101208e5(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URefineryAPI::execConfirmGemStone");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120910 URefineryAPI::execRequestRefine

/* public: void __thiscall URefineryAPI::execRequestRefine(struct FFrame &,void * const) */

void __thiscall URefineryAPI::execRequestRefine(URefineryAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x120910  1675  ?execRequestRefine@URefineryAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205a40;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_20);
  local_1c = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  local_18 = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  FUN_10145060(local_20,local_1c,local_18,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10120a21 Catch@10120a21

void Catch_10120a21(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_102a47f0);
}


// ==== 10120a35 Catch@10120a35

void Catch_10120a35(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URefineryAPI::execRequestRefine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120a60 URefineryAPI::execConfirmCancelItem

/* public: void __thiscall URefineryAPI::execConfirmCancelItem(struct FFrame &,void * const) */

void __thiscall
URefineryAPI::execConfirmCancelItem(URefineryAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x120a60  1112  ?execConfirmCancelItem@URefineryAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205a60;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10145100(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10120b09 Catch@10120b09

void Catch_10120b09(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120b1d Catch@10120b1d

void Catch_10120b1d(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URefineryAPI::execConfirmCancelItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120b40 URefineryAPI::execRequestRefineCancel

/* public: void __thiscall URefineryAPI::execRequestRefineCancel(struct FFrame &,void * const) */

void __thiscall
URefineryAPI::execRequestRefineCancel(URefineryAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x120b40  1676  ?execRequestRefineCancel@URefineryAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205a80;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_101451a0(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10120be9 Catch@10120be9

void Catch_10120be9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120bfd Catch@10120bfd

void Catch_10120bfd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"URefineryAPI::execRequestRefineCancel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120c20 UShortcutAPI::execSetShortcutPage

/* public: void __thiscall UShortcutAPI::execSetShortcutPage(struct FFrame &,void * const) */

void __thiscall UShortcutAPI::execSetShortcutPage(UShortcutAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x120c20  1799  ?execSetShortcutPage@UShortcutAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205aa0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10047070(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 10120ccf Catch@10120ccf

void Catch_10120ccf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120ce3 Catch@10120ce3

void Catch_10120ce3(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"UShortcutAPI::execSetShortcutPage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120d00 USiegeAPI::execRequestCastleSiegeAttackerList

/* public: void __thiscall USiegeAPI::execRequestCastleSiegeAttackerList(struct FFrame &,void *
   const) */

void __thiscall
USiegeAPI::execRequestCastleSiegeAttackerList(USiegeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x120d00  1575
                       ?execRequestCastleSiegeAttackerList@USiegeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205ac9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  if (0 < (int)local_18) {
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_30,local_18);
    (**(code **)(*DAT_103663bc + 0x47c))(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10120dd7 Catch@10120dd7

void Catch_10120dd7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120deb Catch@10120deb

void Catch_10120deb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"USiegeAPI::execRequestCastleSiegeAttackerList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120e10 USiegeAPI::execRequestCastleSiegeDefenderList

/* public: void __thiscall USiegeAPI::execRequestCastleSiegeDefenderList(struct FFrame &,void *
   const) */

void __thiscall
USiegeAPI::execRequestCastleSiegeDefenderList(USiegeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x120e10  1576
                       ?execRequestCastleSiegeDefenderList@USiegeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205af9;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
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
  if (0 < (int)local_18) {
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_30,local_18);
    (**(code **)(*DAT_103663bc + 0x480))(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10120ee7 Catch@10120ee7

void Catch_10120ee7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 10120efb Catch@10120efb

void Catch_10120efb(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"USiegeAPI::execRequestCastleSiegeDefenderList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10120f20 USiegeAPI::execRequestJoinCastleSiege

/* public: void __thiscall USiegeAPI::execRequestJoinCastleSiege(struct FFrame &,void * const) */

void __thiscall USiegeAPI::execRequestJoinCastleSiege(USiegeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x120f20  1634  ?execRequestJoinCastleSiege@USiegeAPI@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10205b29;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (0 < (int)local_18) {
    L2ParamStack::L2ParamStack(local_34,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_34,local_18);
    L2ParamStack::PushBack(local_34,param_1);
    L2ParamStack::PushBack(local_34,local_1c);
    (**(code **)(*DAT_103663bc + 0x484))(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_34);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012104d Catch@1012104d

void Catch_1012104d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 10121061 Catch@10121061

void Catch_10121061(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"USiegeAPI::execRequestJoinCastleSiege");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121080 USiegeAPI::execRequestConfirmCastleSiegeWaitingList

/* public: void __thiscall USiegeAPI::execRequestConfirmCastleSiegeWaitingList(struct FFrame &,void
   * const) */

void __thiscall
USiegeAPI::execRequestConfirmCastleSiegeWaitingList(USiegeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_44;
  L2ParamStack local_34 [24];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x121080  1604
                       ?execRequestConfirmCastleSiegeWaitingList@USiegeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205b59;
  local_10 = ExceptionList;
  uStack_44 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  local_1c = (void *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&local_1c);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (0 < (int)local_18) {
    L2ParamStack::L2ParamStack(local_34,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_34,local_18);
    L2ParamStack::PushBack(local_34,param_1);
    L2ParamStack::PushBack(local_34,local_1c);
    (**(code **)(*DAT_103663bc + 0x488))(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_34);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101211ad Catch@101211ad

void Catch_101211ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_102a47f0);
}


// ==== 101211c1 Catch@101211c1

void Catch_101211c1(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"USiegeAPI::execRequestConfirmCastleSiegeWaitingList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101211e0 USiegeAPI::execRequestSetCastleSiegeTime

/* public: void __thiscall USiegeAPI::execRequestSetCastleSiegeTime(struct FFrame &,void * const) */

void __thiscall
USiegeAPI::execRequestSetCastleSiegeTime(USiegeAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  uint uStack_40;
  L2ParamStack local_30 [24];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar2 = param_1;
                    /* 0x1211e0  1681
                       ?execRequestSetCastleSiegeTime@USiegeAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205b89;
  local_10 = ExceptionList;
  uStack_40 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (0 < (int)local_18) {
    L2ParamStack::L2ParamStack(local_30,10);
    local_8._0_1_ = 1;
    L2ParamStack::PushBack(local_30,local_18);
    L2ParamStack::PushBack(local_30,param_1);
    (**(code **)(*DAT_103663bc + 0x48c))(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    L2ParamStack::~L2ParamStack(local_30);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101212e3 Catch@101212e3

void Catch_101212e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101212f7 Catch@101212f7

void Catch_101212f7(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"USiegeAPI::execRequestSetCastleSiegeTime");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121320 USSQAPI::execRequestSSQStatus

/* public: void __thiscall USSQAPI::execRequestSSQStatus(struct FFrame &,void * const) */

void __thiscall USSQAPI::execRequestSSQStatus(USSQAPI *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x121320  1678  ?execRequestSSQStatus@USSQAPI@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205bb0;
  local_10 = ExceptionList;
  uStack_30 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_10148600(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101213c9 Catch@101213c9

void Catch_101213c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


// ==== 101213dd Catch@101213dd

void Catch_101213dd(void)

{
  appUnwindf((ushort *)&DAT_1022dde0,L"USSQAPI::execRequestSSQStatus");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10121400 UUIDATA_CLAN::execGetName

/* public: void __thiscall UUIDATA_CLAN::execGetName(struct FFrame &,void * const) */

void __thiscall UUIDATA_CLAN::execGetName(UUIDATA_CLAN *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uStack_3c;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x121400  1265  ?execGetName@UUIDATA_CLAN@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10205bd9;
  local_10 = ExceptionList;
  uStack_3c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::FString(local_2c,(ushort *)&DAT_1022f9f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FUN_10145a60(local_18);
  if (iVar2 != 0) {
    FString::operator=(local_2c,(ushort *)(iVar2 + 4));
  }
  FString::operator=(param_2,local_2c);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 101214de Catch@101214de

void Catch_101214de(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_102a47f0);
}


