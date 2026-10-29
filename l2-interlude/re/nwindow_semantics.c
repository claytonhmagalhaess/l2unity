// ==== 100fb9c0 UUIEventManager::execParseString depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_100406e0@100406e0 FUN_1003fa00@1003fa00 FUN_1003fff0@1003fff0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

/* public: void __thiscall UUIEventManager::execParseString(struct FFrame &,void * const) */

void __thiscall
UUIEventManager::execParseString(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FString *pFVar3;
  uint uStack_5c;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfb9c0  1543  ?execParseString@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200053;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_40);
  local_8._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_40);
  FString::FString(local_34);
  local_8._0_1_ = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_34);
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFVar3 = local_28;
  }
  else {
    pFVar3 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_40);
  local_8._0_1_ = 4;
  uVar2 = FUN_100406e0(local_34,pFVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 3;
  FUN_1003fff0();
  local_8._0_1_ = 2;
  FString::~FString(local_28);
  local_8._0_1_ = 1;
  FString::~FString(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_40);
  ExceptionList = local_10;
  return;
}


// ==== 100fbb80 UUIEventManager::execParseInt depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_100404d0@100404d0 FUN_1003fa00@1003fa00 FUN_1003fff0@1003fff0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

/* public: void __thiscall UUIEventManager::execParseInt(struct FFrame &,void * const) */

void __thiscall UUIEventManager::execParseInt(UUIEventManager *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uStack_54;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfbb80  1542  ?execParseInt@UUIEventManager@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_1020008a;
  local_10 = ExceptionList;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
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
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FUN_1003fa00(local_38);
  local_8._0_1_ = 3;
  uVar2 = FUN_100404d0(local_2c,puVar3);
  *(undefined4 *)param_2 = uVar2;
  local_8._0_1_ = 2;
  FUN_1003fff0();
  local_8._0_1_ = 1;
  FString::~FString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_10;
  return;
}


// ==== 10106770 UUIEventManager::execParamAdd depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:000001a4 FUN_1003fa00@1003fa00 CORE.DLL::FString::operator=@EXTERNAL:000001a2 FUN_10040230@10040230 FUN_1003fff0@1003fff0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

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


// ==== 10100500 UUIScript::execProcessChatMessage depth=0 from=raiz callees=CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_1013c310@1013c310
// strings: 

/* public: void __thiscall UUIScript::execProcessChatMessage(struct FFrame &,void * const) */

void __thiscall UUIScript::execProcessChatMessage(UUIScript *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x100500  1551  ?execProcessChatMessage@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200b59;
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
  FUN_1013c310(puVar2,uVar3);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 100f5560 UUIScript::execIsPKMode depth=0 from=raiz callees=
// strings: 

/* public: void __thiscall UUIScript::execIsPKMode(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsPKMode(UUIScript *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf5560  1496  ?execIsPKMode@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101ff0b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar1 = (**(code **)(*DAT_103663bc + 0x590))();
  *(undefined4 *)param_2 = uVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10100fd0 UUIScript::execIsDebuff depth=0 from=raiz callees=FUN_10164a20@10164a20
// strings: 

/* public: void __thiscall UUIScript::execIsDebuff(struct FFrame &,void * const) */

void __thiscall UUIScript::execIsDebuff(UUIScript *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  uint uStack_30;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_1;
                    /* 0x100fd0  1475  ?execIsDebuff@UUIScript@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10200d10;
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
  uVar3 = FUN_10164a20(local_18,param_1);
  *(undefined4 *)param_2 = uVar3;
  ExceptionList = local_10;
  return;
}


// ==== 100406e0 FUN_100406e0 depth=1 from=UUIEventManager::execParseString callees=FUN_1003fc20@1003fc20 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::FString::Len@EXTERNAL:000001a8
// strings: 

undefined4 __thiscall FUN_100406e0(FString *param_1,FString *param_2,undefined4 param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_2);
  if (iVar1 != 0) {
    iVar1 = FString::Len(param_1);
    if (iVar1 != 0) {
      puVar2 = FString::operator*(param_2);
      puVar3 = FString::operator*(param_1);
      iVar1 = FUN_1003fc20(puVar3,puVar2,param_3);
      if (iVar1 != 0) {
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1003fa00 FUN_1003fa00 depth=1 from=UUIEventManager::execParseString callees=CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator=@EXTERNAL:000001a2
// strings: 

FString * __thiscall FUN_1003fa00(FString *param_1,FString *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101de109;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FString::FString(param_1);
  local_8 = 1;
  FString::operator=(param_1,param_2);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1003fff0 FUN_1003fff0 depth=1 from=UUIEventManager::execParseString callees=FUN_1003faa0@1003faa0 CORE.DLL::FString::~FString@EXTERNAL:00000197
// strings: 

void __fastcall FUN_1003fff0(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de219;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_1003faa0();
  local_8 = 0xffffffff;
  FString::~FString(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 100404d0 FUN_100404d0 depth=1 from=UUIEventManager::execParseInt callees=FUN_1003fc20@1003fc20 CORE.DLL::FString::FString@EXTERNAL:000001a4 CORE.DLL::FString::operator*@EXTERNAL:0000019f CORE.DLL::appAtoi@EXTERNAL:000001bc CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::Len@EXTERNAL:000001a8
// strings: 

undefined4 __thiscall FUN_100404d0(FString *param_1,FString *param_2,int *param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *pFVar4;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de339;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  iVar1 = FString::Len(param_2);
  if (iVar1 != 0) {
    iVar1 = FString::Len(param_1);
    if (iVar1 != 0) {
      pFVar4 = local_28;
      puVar2 = FString::operator*(param_2);
      puVar3 = FString::operator*(param_1);
      iVar1 = FUN_1003fc20(puVar3,puVar2,pFVar4);
      if (iVar1 != 0) {
        puVar2 = FString::operator*(local_28);
        iVar1 = appAtoi(puVar2);
        *param_3 = iVar1;
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return 0;
}


// ==== 10040230 FUN_10040230 depth=1 from=UUIEventManager::execParamAdd callees=CORE.DLL::FString::Printf@EXTERNAL:000001a7 CORE.DLL::FString::~FString@EXTERNAL:00000197 CORE.DLL::FString::Len@EXTERNAL:000001a8 FUN_1003fb30@1003fb30
// strings: 

void FUN_10040230(FString *param_1,FString *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101de2a9;
  local_10 = ExceptionList;
  uStack_38 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::Len(param_1);
  if (iVar1 != 0) {
    iVar1 = FString::Len(param_2);
    if (iVar1 != 0) {
      uVar2 = FString::Printf((ushort *)local_28,&DAT_1022dde0,*(undefined4 *)param_2,
                              *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
      local_8._0_1_ = 1;
      FUN_1003fb30(param_1,uVar2,1);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013c310 FUN_1013c310 depth=1 from=UUIScript::execProcessChatMessage callees=FUN_1013a320@1013a320 FUN_101358a0@101358a0 FUN_10139c50@10139c50 FUN_101382a0@101382a0
// strings: 

void FUN_1013c310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10209520;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101358a0(param_1);
  if (iVar1 == 0x20000000) {
    FUN_10139c50(param_1,param_2);
  }
  else if ((iVar1 == 0x10000001) || (iVar1 == 0x10000000)) {
    FUN_101382a0(iVar1,param_1);
  }
  else {
    FUN_1013a320(iVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10164a20 FUN_10164a20 depth=1 from=UUIScript::execIsDebuff callees=FUN_101b5720@101b5720 FUN_1002f160@1002f160
// strings: 

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


// ==== 1003fc20 FUN_1003fc20 depth=2 from=FUN_100406e0 callees=CORE.DLL::FString::operator+=@EXTERNAL:000001e0 CORE.DLL::appStrlen@EXTERNAL:000001b4 CORE.DLL::appStrfind@EXTERNAL:000001e1 CORE.DLL::FString::Empty@EXTERNAL:000001a5
// strings: 

undefined4 FUN_1003fc20(ushort *param_1,ushort *param_2,FString *param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = appStrfind(param_1,param_2);
  iVar2 = appStrlen(param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  while (puVar1 = puVar1 + iVar2, *puVar1 != 0x3d) {
    puVar1 = appStrfind(puVar1,param_2);
    if (puVar1 == (ushort *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  puVar3 = puVar1 + 1;
  if (*puVar3 == 0x7f) {
    puVar3 = puVar1 + 2;
    param_2._0_2_ = 0x7f;
  }
  else {
    param_2._0_2_ = 0x20;
  }
  FString::Empty(param_3);
  for (iVar2 = 0; (iVar2 < 0x1000 && (puVar3[iVar2] != (ushort)param_2)); iVar2 = iVar2 + 1) {
    FString::operator+=(param_3,puVar3[iVar2]);
    if (puVar3[iVar2] == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1003faa0 FUN_1003faa0 depth=2 from=FUN_1003fff0 callees=CORE.DLL::FString::Empty@EXTERNAL:000001a5
// strings: 

void __fastcall FUN_1003faa0(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de130;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FString::Empty(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1003fb30 FUN_1003fb30 depth=2 from=FUN_10040230 callees=CORE.DLL::FString::operator+=@EXTERNAL:000001e0 CORE.DLL::FString::operator_int@EXTERNAL:000001a1 CORE.DLL::FString::operator+=@EXTERNAL:000001c5 CORE.DLL::FString::operator+=@EXTERNAL:000001bd
// strings: 

void __thiscall FUN_1003fb30(FString *param_1,FString *param_2,FString *param_3,int param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101de150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FString::operator_int(param_1);
  if (iVar1 != 0) {
    FString::operator+=(param_1,&DAT_1023d5d0);
  }
  FString::operator+=(param_1,param_2);
  FString::operator+=(param_1,(ushort *)&DAT_1023d5cc);
  if (param_4 == 0) {
    FString::operator+=(param_1,param_3);
  }
  else {
    FString::operator+=(param_1,0x7f);
    FString::operator+=(param_1,param_3);
    FString::operator+=(param_1,0x7f);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013a320 FUN_1013a320 depth=2 from=FUN_1013c310 callees=FUN_10149af0@10149af0 FUN_1014cff0@1014cff0 CORE.DLL::FString::operator*@EXTERNAL:0000019f FUN_10144280@10144280 FUN_1014c6a0@1014c6a0 FUN_10040230@10040230 FUN_10143a30@10143a30 FUN_101447e0@101447e0 FUN_10144890@10144890 FUN_10145900@10145900 FUN_10144c60@10144c60 FUN_101447b0@101447b0 FUN_10144710@10144710 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10144860@10144860 FUN_10143b50@10143b50 FUN_101440d0@101440d0 FUN_101445d0@101445d0 CORE.DLL::appStrcat@EXTERNAL:000001d4 FUN_100d1790@100d1790 FUN_1014ddd0@1014ddd0 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:000001b9 CORE.DLL::appMemset@EXTERNAL:000001d0 FUN_10145290@10145290 FUN_1000ef40@1000ef40 CORE.DLL::appStrncpy@EXTERNAL:000001ce FUN_1014ddb0@1014ddb0 FUN_10144110@10144110 FUN_10170650@10170650 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:000001b8 FUN_10144120@10144120 FUN_1003fff0@1003fff0 FUN_10144130@10144130 FUN_101453f0@101453f0 FUN_1000e440@1000e440 FUN_10144490@10144490 FUN_10170860@10170860 FUN_101441a0@101441a0 ENGINE.DLL::FParser::GetRemainStr@EXTERNAL:00000056 __security_check_cookie@101c16c2 FUN_1015a2d0@1015a2d0 CORE.DLL::appStrlen@EXTERNAL:000001b4 FUN_10144db0@10144db0 FUN_1016e1b0@1016e1b0 FUN_1015a770@1015a770 FUN_1000dd30@1000dd30 FUN_10135980@10135980 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:000001b7 ENGINE.DLL::User::GetName@EXTERNAL:0000009f CORE.DLL::FString::FString@EXTERNAL:000001b0 FUN_101430e0@101430e0 FUN_10171680@10171680 CORE.DLL::appStrcpy@EXTERNAL:000001c3 FUN_101440c0@101440c0 FUN_10144dc0@10144dc0 FUN_10005c30@10005c30 ENGINE.DLL::FL2GameData::GetMSData@EXTERNAL:00000089 FUN_10143a10@10143a10 FUN_10064bd0@10064bd0 FUN_1014c720@1014c720 FUN_10149690@10149690 FUN_1003f970@1003f970 FUN_101447f0@101447f0 FUN_1014ca10@1014ca10 FUN_101453e0@101453e0 FUN_10135a20@10135a20 FUN_10145240@10145240 FUN_10144880@10144880 ENGINE.DLL::APawn::NActionStop@EXTERNAL:0000006f FUN_101392c0@101392c0 thunk_FUN_101c1b01@101c1b12 FUN_1014c7c0@1014c7c0 ENGINE.DLL::FL2GameData::GetMSCommandData@EXTERNAL:00000069 FUN_10144460@10144460 FUN_101447c0@101447c0 ENGINE.DLL::FL2ReplayManager::OnSaveStart@EXTERNAL:00000057 ENGINE.DLL::FL2ReplayManager::OnSaveStop@EXTERNAL:00000058 FUN_1014dd00@1014dd00
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


// ==== 101358a0 FUN_101358a0 depth=2 from=FUN_1013c310 callees=ENGINE.DLL::FParser::SetString@EXTERNAL:0000005a ENGINE.DLL::FL2GameData::GetCommandType@EXTERNAL:0000005b
// strings: 

int __thiscall FUN_101358a0(FParser *param_1,ushort *param_2)

{
  ushort *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10208800;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == (ushort *)0x0) {
    return -1;
  }
  if ((*param_2 != *(ushort *)PTR_DAT_10350dbc) && (*param_2 != *(ushort *)PTR_DAT_10350dc0)) {
    return 0x20000000;
  }
  ExceptionList = &local_10;
  puVar1 = FParser::SetString(param_1,param_2);
  iVar2 = FL2GameData::GetCommandType((FL2GameData *)GL2GameData_exref,puVar1);
  ExceptionList = local_10;
  return iVar2;
}


// ==== 10139c50 FUN_10139c50 depth=2 from=FUN_1013c310 callees=FUN_10170650@10170650 FUN_101394d0@101394d0 FUN_10136f10@10136f10 CORE.DLL::appStrlen@EXTERNAL:000001b4 _wcsncpy@101c3d3c FUN_10137b70@10137b70 FUN_10141990@10141990 FUN_10138860@10138860 FUN_10137a90@10137a90 __security_check_cookie@101c16c2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_10139c50(undefined4 param_1,undefined4 param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  size_t _Count;
  void *local_914;
  undefined1 *puStack_910;
  undefined4 local_90c;
  wchar_t local_908 [1024];
  wchar_t local_108 [128];
  uint local_8;
  
  puStack_910 = &LAB_10209270;
  local_914 = ExceptionList;
  local_8 = DAT_103554c4 ^ (uint)local_908;
  ExceptionList = &local_914;
  iVar5 = 0;
  local_90c = 0;
  FUN_10137b70(local_908,param_1);
  iVar2 = appStrlen((ushort *)local_908);
  if (iVar2 == 0) goto LAB_1013a04b;
  pwVar4 = local_908 + 1;
  iVar2 = *(int *)GIsOldChat_exref;
  if (iVar2 == 0) {
    switch(param_2) {
    case 0:
      break;
    case 1:
      iVar5 = 8;
      break;
    case 2:
      iVar5 = 3;
      break;
    case 3:
      iVar5 = 4;
      break;
    case 4:
      iVar5 = 9;
      break;
    default:
      goto switchD_10139cdc_default;
    }
  }
switchD_10139cdc_default:
  if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e20) ||
     (local_908[0] == *(wchar_t *)PTR_DAT_10350e24)) {
    iVar5 = 1;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e38) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e3c)) {
    iVar5 = 4;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e30) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e34)) {
    iVar5 = 3;
  }
  else if (((local_908[0] == L'＂') || (local_908[0] == *(wchar_t *)PTR_DAT_10350e28)) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e2c)) {
    iVar5 = 2;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e48) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e4c)) {
    iVar5 = 6;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e50) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e54)) {
    iVar5 = 7;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e58) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e5c)) {
    iVar5 = 8;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e60) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e64)) {
    iVar5 = 9;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350ea0) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350ea4)) {
    iVar5 = 0x11;
  }
  else if (((local_908[0] == *(wchar_t *)PTR_DAT_10350e90) &&
           (local_908[1] == *(short *)(PTR_DAT_10350e90 + 2))) ||
          ((local_908[0] == *(wchar_t *)PTR_DAT_10350e94 &&
           (local_908[1] == *(short *)(PTR_DAT_10350e94 + 2))))) {
    iVar5 = 0xf;
  }
  else if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e98) ||
          (local_908[0] == *(wchar_t *)PTR_DAT_10350e9c)) {
    iVar5 = 0x10;
  }
  if (iVar2 == 0) {
    if ((local_908[0] == *(wchar_t *)PTR_DAT_10350e18) ||
       (local_908[0] == *(wchar_t *)PTR_DAT_10350e1c)) {
      iVar5 = 0;
    }
LAB_10139ec4:
    if (iVar5 == 2) {
      for (_Count = 0; (pwVar4[_Count] != L' ' && (pwVar4[_Count] != L'\x3000'));
          _Count = _Count + 1) {
        pwVar3 = pwVar4;
        do {
          wVar1 = *pwVar3;
          pwVar3 = pwVar3 + 1;
        } while (wVar1 != L'\0');
        if ((int)pwVar3 - (int)(local_908 + 2) >> 1 <= (int)_Count) break;
      }
      if (_Count == 0) {
        pwVar4 = local_908;
        iVar2 = appStrlen((ushort *)local_908);
        FUN_10138860(iVar2,pwVar4);
        iVar2 = FUN_10136f10();
        if (iVar2 == 0) {
          FUN_10141990(2,local_908,0);
        }
        else {
          FUN_10170650(0x3c6,0xffb09b79);
        }
        goto LAB_1013a04b;
      }
      _wcsncpy(local_108,pwVar4,_Count);
      local_108[_Count] = L'\0';
      pwVar4 = local_908;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      if (((int)pwVar4 - (int)(local_908 + 1) >> 1 <= (int)(_Count + 2)) ||
         (pwVar4 = local_908 + _Count + 2, pwVar4 == (wchar_t *)0x0)) goto LAB_1013a04b;
      FUN_10137a90(local_108);
      FUN_101394d0(local_108);
      pwVar3 = pwVar4;
      iVar2 = appStrlen((ushort *)pwVar4);
      FUN_10138860(iVar2,pwVar3);
      iVar2 = FUN_10136f10();
      if (iVar2 == 0) {
        FUN_10141990(2,pwVar4,local_108);
        local_90c = 0xffffffff;
        goto LAB_1013a04b;
      }
      goto LAB_1013a2be;
    }
    if ((iVar5 != 0) || (iVar2 == 0)) {
      if (iVar2 == 0) {
        if (((local_908[0] == *(wchar_t *)PTR_DAT_10350e90) &&
            (local_908[1] == *(short *)(PTR_DAT_10350e90 + 2))) ||
           ((local_908[0] == *(wchar_t *)PTR_DAT_10350e94 &&
            (local_908[1] == *(short *)(PTR_DAT_10350e94 + 2))))) {
LAB_1013a217:
          pwVar4 = local_908 + 2;
        }
        else if ((((((((local_908[0] == *(wchar_t *)PTR_DAT_10350e20) ||
                      (local_908[0] == *(wchar_t *)PTR_DAT_10350e24)) ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e38)) ||
                    ((local_908[0] == *(wchar_t *)PTR_DAT_10350e3c ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e30)))) ||
                   (local_908[0] == *(wchar_t *)PTR_DAT_10350e34)) ||
                  (((local_908[0] == *(wchar_t *)PTR_DAT_10350e28 ||
                    (local_908[0] == *(wchar_t *)PTR_DAT_10350e2c)) ||
                   ((local_908[0] == *(wchar_t *)PTR_DAT_10350e48 ||
                    (((local_908[0] == *(wchar_t *)PTR_DAT_10350e4c ||
                      (local_908[0] == *(wchar_t *)PTR_DAT_10350e50)) ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e54)))))))) ||
                 ((local_908[0] == *(wchar_t *)PTR_DAT_10350e58 ||
                  (local_908[0] == *(wchar_t *)PTR_DAT_10350e5c)))) ||
                ((local_908[0] == *(wchar_t *)PTR_DAT_10350e60 ||
                 ((((local_908[0] == *(wchar_t *)PTR_DAT_10350e64 ||
                    (local_908[0] == *(wchar_t *)PTR_DAT_10350e18)) ||
                   ((local_908[0] == *(wchar_t *)PTR_DAT_10350e1c ||
                    (((local_908[0] == *(wchar_t *)PTR_DAT_10350ea0 ||
                      (local_908[0] == *(wchar_t *)PTR_DAT_10350ea4)) ||
                     (local_908[0] == *(wchar_t *)PTR_DAT_10350e98)))))) ||
                  (pwVar4 = local_908, local_908[0] == *(wchar_t *)PTR_DAT_10350e9c)))))) {
          pwVar4 = local_908 + 1;
        }
      }
      else if (((local_908[0] == *(wchar_t *)PTR_DAT_10350e90) &&
               (local_908[1] == *(short *)(PTR_DAT_10350e90 + 2))) ||
              ((local_908[0] == *(wchar_t *)PTR_DAT_10350e94 &&
               (local_908[1] == *(short *)(PTR_DAT_10350e94 + 2))))) goto LAB_1013a217;
      if (*pwVar4 != L'\0') {
        if ((iVar5 == 1) || (iVar5 == 8)) {
          pwVar3 = pwVar4;
          iVar2 = appStrlen((ushort *)pwVar4);
          FUN_10138860(iVar2,pwVar3);
          iVar2 = FUN_10136f10();
          if (iVar2 != 0) goto LAB_1013a2be;
        }
        else if (iVar5 == 0) {
          pwVar3 = pwVar4;
          iVar2 = appStrlen((ushort *)pwVar4);
          FUN_10138860(iVar2,pwVar3);
          iVar2 = FUN_10136f10();
          if (iVar2 == 0) {
            FUN_10141990(0,pwVar4,0);
            local_90c = 0xffffffff;
            goto LAB_1013a04b;
          }
          goto LAB_1013a2be;
        }
        FUN_10141990(iVar5,pwVar4,0);
        local_90c = 0xffffffff;
        goto LAB_1013a04b;
      }
    }
  }
  else {
    if (iVar5 != 0) goto LAB_10139ec4;
    pwVar4 = local_908;
    iVar2 = appStrlen((ushort *)local_908);
    FUN_10138860(iVar2,pwVar4);
    iVar2 = FUN_10136f10();
    if (iVar2 == 0) {
      FUN_10141990(0,local_908,0);
      local_90c = 0xffffffff;
      goto LAB_1013a04b;
    }
LAB_1013a2be:
    FUN_10170650(0x3c6,0xffb09b79);
  }
  local_90c = 0xffffffff;
LAB_1013a04b:
  ExceptionList = local_914;
  __security_check_cookie(local_8 ^ (uint)local_908);
  return;
}


// ==== 101382a0 FUN_101382a0 depth=2 from=FUN_1013c310 callees=CORE.DLL::FString::FString@EXTERNAL:000001b0 CORE.DLL::FString::operator=@EXTERNAL:000001a3 FUN_101652c0@101652c0 FUN_1014e820@1014e820 CORE.DLL::L2ParamStack::PushBack@EXTERNAL:000001b8 CORE.DLL::L2ParamStack::~L2ParamStack@EXTERNAL:000001b7 FUN_100488e0@100488e0 FUN_101654b0@101654b0 CORE.DLL::L2ParamStack::L2ParamStack@EXTERNAL:000001b9 FUN_10048880@10048880 CORE.DLL::FString::~FString@EXTERNAL:00000197 FUN_10048820@10048820 FUN_10172350@10172350
// strings: 

void FUN_101382a0(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uStack_5c;
  FString local_4c [8];
  L2ParamStack local_44 [4];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10208e9b;
  local_10 = ExceptionList;
  uStack_5c = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_1014e820();
  if (iVar1 != 0) {
    if (param_1 == 0x10000000) {
      if ((void *)(param_2 + 4) != (void *)0x0) {
        L2ParamStack::L2ParamStack(local_44,10);
        local_8._0_1_ = 1;
        L2ParamStack::PushBack(local_44,(void *)(param_2 + 4));
        (**(code **)(*DAT_103663bc + 0x360))();
        local_8 = (uint)local_8._1_3_ << 8;
        L2ParamStack::~L2ParamStack(local_44);
      }
    }
    else if (param_1 == 0x10000001) {
      puVar2 = (ushort *)(param_2 + 6);
      FUN_10048820();
      local_8._0_1_ = 2;
      FString::operator=(local_4c,(ushort *)&DAT_1022f9f8);
      FString::operator=(local_40,puVar2);
      FUN_100488e0(local_4c);
      local_8._0_1_ = 2;
      FUN_10172350();
      FString::FString(local_28,puVar2);
      local_8._0_1_ = 4;
      iVar1 = FUN_101652c0();
      local_8._0_1_ = 2;
      FString::~FString(local_28);
      if (iVar1 != 0) {
        FString::FString(local_34,puVar2);
        local_8._0_1_ = 5;
        FUN_101654b0();
        local_8._0_1_ = 2;
        FString::~FString(local_34);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10048880();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101b5720 FUN_101b5720 depth=2 from=FUN_10164a20 callees=FUN_101b5360@101b5360
// strings: 

undefined4 FUN_101b5720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10219ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_101b5360(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4c) != 0)) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1002f160 FUN_1002f160 depth=2 from=FUN_10164a20 callees=FUN_1002db10@1002db10
// strings: 

int FUN_1002f160(void)

{
  if (DAT_10363f48 == 0) {
    FUN_1002db10();
  }
  return DAT_10363f48;
}


