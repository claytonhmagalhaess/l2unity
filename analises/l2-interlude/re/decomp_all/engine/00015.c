// ==== 10351cd0 FUN_10351cd0

undefined4 FUN_10351cd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10351ce0 FUN_10351ce0

void FUN_10351ce0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5379;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMeshObject::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10351d50 FUN_10351d50

void FUN_10351d50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5399;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UMeshObject::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10351db0 FUN_10351db0

void FUN_10351db0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f53b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UMeshObject::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10351e20 FUN_10351e20

void FUN_10351e20(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  return;
}


// ==== 10351e40 FUN_10351e40

void FUN_10351e40(byte param_1)

{
  UMeshObject *in_ECX;
  
  UMeshObject::~UMeshObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 10351e70 FUN_10351e70

UMeshObject * FUN_10351e70(byte param_1)

{
  UMeshObject *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UMeshObject::~UMeshObject);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMeshObject::~UMeshObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10351ef0 FUN_10351ef0

UClass * FUN_10351ef0(void)

{
  return &UInteractions::PrivateStaticClass;
}


// ==== 10351f00 FUN_10351f00

void FUN_10351f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UInteractions::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10351f40 FUN_10351f40

undefined4 FUN_10351f40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10351f50 FUN_10351f50

void FUN_10351f50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f53d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UInteractions::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10351fc0 FUN_10351fc0

void FUN_10351fc0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f53f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UInteractions::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10352020 FUN_10352020

void FUN_10352020(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5419;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UInteractions::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10352090 FUN_10352090

void FUN_10352090(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  return;
}


// ==== 103520b0 FUN_103520b0

void FUN_103520b0(byte param_1)

{
  UInteractions *in_ECX;
  
  UInteractions::~UInteractions(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 103520e0 FUN_103520e0

UInteractions * FUN_103520e0(byte param_1)

{
  UInteractions *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UInteractions::~UInteractions)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UInteractions::~UInteractions(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10352160 FUN_10352160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10352160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar6 = 0;
  iVar1 = *in_ECX;
  puVar5 = &local_8;
  local_8 = param_1;
  uVar4 = 0;
  local_4 = param_2;
  uVar3 = _ENGINE_SetFocusTo;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 103521b0 FUN_103521b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103521b0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_RemoveInteraction;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 103521f0 FUN_103521f0

UClass * FUN_103521f0(void)

{
  return &UInteractionMaster::PrivateStaticClass;
}


// ==== 10352200 FUN_10352200

void FUN_10352200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UInteractionMaster::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10352240 FUN_10352240

undefined4 FUN_10352240(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10352250 FUN_10352250

void FUN_10352250(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5439;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103522a0 FUN_103522a0

void FUN_103522a0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5459;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103522f0 FUN_103522f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103522f0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_Initialized,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10352320 FUN_10352320

UClass * FUN_10352320(void)

{
  return &UInteraction::PrivateStaticClass;
}


// ==== 10352330 FUN_10352330

void FUN_10352330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UInteraction::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10352370 FUN_10352370

undefined4 FUN_10352370(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10352380 FUN_10352380

void FUN_10352380(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UInteraction::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UInteractions::~UInteractions((UInteractions *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103523f0 FUN_103523f0

void FUN_103523f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f54a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UInteractions::vftable;
  *(undefined ***)in_ECX = UInteraction::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10352460 FUN_10352460

void FUN_10352460(UInteractions *param_1)

{
  uint uVar1;
  UInteractions *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f54c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteractions::UInteractions(in_ECX,param_1);
  *(undefined ***)in_ECX = UInteraction::vftable;
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(in_ECX + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 2 ^ *(uint *)(in_ECX + 0x34);
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  *(uint *)(in_ECX + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 10352520 FUN_10352520

void FUN_10352520(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(in_ECX + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 2 ^ *(uint *)(in_ECX + 0x34);
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  *(uint *)(in_ECX + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 10352590 FUN_10352590

void FUN_10352590(byte param_1)

{
  UInteraction *in_ECX;
  
  UInteraction::~UInteraction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return;
}


// ==== 103525c0 FUN_103525c0

UInteraction * FUN_103525c0(byte param_1)

{
  UInteraction *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x40,*(int *)(in_ECX + -4),UInteraction::~UInteraction);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UInteraction::~UInteraction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return in_ECX;
}


// ==== 10352640 FUN_10352640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10352640(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  uVar6 = 0;
  puVar5 = &local_4;
  iVar1 = *in_ECX;
  uVar4 = 0;
  local_4 = 0;
  uVar3 = _ENGINE_NeedsMenuResolution;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return uVar4;
}


// ==== 10352690 FUN_10352690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10352690(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_InitializeController,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 103526c0 FUN_103526c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103526c0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_CloseAll;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10352700 FUN_10352700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10352700(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &local_8;
  uVar4 = 0;
  local_4 = 0;
  local_8 = param_1;
  uVar3 = _ENGINE_CloseMenu;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return puVar5;
}


// ==== 10352760 FUN_10352760

UClass * FUN_10352760(void)

{
  return &UBaseGUIController::PrivateStaticClass;
}


// ==== 10352770 FUN_10352770

void FUN_10352770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UBaseGUIController::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103527b0 FUN_103527b0

undefined4 FUN_103527b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103527c0 FUN_103527c0

void FUN_103527c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f54e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UBaseGUIController::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UInteraction::~UInteraction((UInteraction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352830 FUN_10352830

void FUN_10352830(void)

{
  UInteraction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteraction::UInteraction(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UBaseGUIController::vftable;
  FScriptDelegate::FScriptDelegate((FScriptDelegate *)(in_ECX + 0x4c));
  ExceptionList = local_c;
  return;
}


// ==== 103528a0 FUN_103528a0

void FUN_103528a0(UInteraction *param_1)

{
  UInteraction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteraction::UInteraction(in_ECX,param_1);
  *(undefined ***)in_ECX = UBaseGUIController::vftable;
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = local_c;
  return;
}


// ==== 10352930 FUN_10352930

void FUN_10352930(UInteraction *param_1)

{
  UInteraction *in_ECX;
  
  UInteraction::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}


// ==== 10352970 FUN_10352970

void FUN_10352970(byte param_1)

{
  UBaseGUIController *in_ECX;
  
  UBaseGUIController::~UBaseGUIController(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return;
}


// ==== 103529a0 FUN_103529a0

UBaseGUIController * FUN_103529a0(byte param_1)

{
  UBaseGUIController *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x54,*(int *)(in_ECX + -4),UBaseGUIController::~UBaseGUIController);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBaseGUIController::~UBaseGUIController(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return in_ECX;
}


// ==== 10352a20 FUN_10352a20

void FUN_10352a20(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5549;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352a70 FUN_10352a70

void FUN_10352a70(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5569;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352ac0 FUN_10352ac0

void FUN_10352ac0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f55a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString(in_ECX + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 10352b40 FUN_10352b40

void FUN_10352b40(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f55e1;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x18);
  local_4 = local_4 & 0xffffff00;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352bc0 FUN_10352bc0

void FUN_10352bc0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5621;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString(in_ECX + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 10352c40 FUN_10352c40

void FUN_10352c40(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f5661;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x18);
  local_4 = local_4 & 0xffffff00;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352cc0 FUN_10352cc0

void FUN_10352cc0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352d10 FUN_10352d10

void FUN_10352d10(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f56a9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352d60 FUN_10352d60

UClass * FUN_10352d60(void)

{
  return &UConsole::PrivateStaticClass;
}


// ==== 10352d70 FUN_10352d70

void FUN_10352d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UConsole::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10352db0 FUN_10352db0

undefined4 FUN_10352db0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10352dc0 FUN_10352dc0

void FUN_10352dc0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f56eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UConsole::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x5c,0xc,0x10,~FStringNoInit_exref);
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x50));
  local_4 = 0xffffffff;
  UInteraction::~UInteraction((UInteraction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10352e60 FUN_10352e60

void FUN_10352e60(void)

{
  UInteraction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f573b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteraction::UInteraction(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UConsole::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x50));
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(in_ECX + 0x5c,0xc,0x10,FStringNoInit_exref,~FStringNoInit_exref);
  ExceptionList = local_c;
  return;
}


// ==== 10352ef0 FUN_10352ef0

void FUN_10352ef0(UInteraction *param_1)

{
  UInteraction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5774;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteraction::UInteraction(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UConsole::vftable;
  in_ECX[0x40] = param_1[0x40];
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x50),(FStringNoInit *)(param_1 + 0x50));
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x5c,param_1 + 0x5c,0xc,0x10,FStringNoInit_exref,~FStringNoInit_exref);
  *(uint *)(in_ECX + 0x11c) =
       *(uint *)(in_ECX + 0x11c) ^ (*(uint *)(in_ECX + 0x11c) ^ *(uint *)(param_1 + 0x11c)) & 1;
  *(uint *)(in_ECX + 0x11c) =
       (*(uint *)(param_1 + 0x11c) ^ *(uint *)(in_ECX + 0x11c)) & 2 ^ *(uint *)(in_ECX + 0x11c);
  ExceptionList = local_c;
  return;
}


// ==== 10352ff0 FUN_10352ff0

void FUN_10352ff0(UInteraction *param_1)

{
  UInteraction *pUVar1;
  UInteraction *in_ECX;
  UInteraction *this;
  int iVar2;
  
  pUVar1 = param_1;
  UInteraction::operator=(in_ECX,param_1);
  in_ECX[0x40] = param_1[0x40];
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x50),(FStringNoInit *)(param_1 + 0x50));
  this = in_ECX + 0x5c;
  iVar2 = (int)param_1 - (int)in_ECX;
  param_1 = (UInteraction *)0x10;
  do {
    FStringNoInit::operator=((FStringNoInit *)this,(FStringNoInit *)(this + iVar2));
    this = this + 0xc;
    param_1 = (UInteraction *)((int)param_1 + -1);
  } while (param_1 != (UInteraction *)0x0);
  *(uint *)(in_ECX + 0x11c) =
       *(uint *)(in_ECX + 0x11c) ^ (*(uint *)(in_ECX + 0x11c) ^ *(uint *)(pUVar1 + 0x11c)) & 1;
  *(uint *)(in_ECX + 0x11c) =
       (*(uint *)(pUVar1 + 0x11c) ^ *(uint *)(in_ECX + 0x11c)) & 2 ^ *(uint *)(in_ECX + 0x11c);
  return;
}


// ==== 103530b0 FUN_103530b0

void FUN_103530b0(byte param_1)

{
  UConsole *in_ECX;
  
  UConsole::~UConsole(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x120);
  }
  return;
}


// ==== 103530e0 FUN_103530e0

UConsole * FUN_103530e0(byte param_1)

{
  UConsole *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x120,*(int *)(in_ECX + -4),UConsole::~UConsole);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UConsole::~UConsole(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x120);
  }
  return in_ECX;
}


// ==== 10353160 FUN_10353160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10353160(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  puVar5 = &param_1;
  iVar1 = *in_ECX;
  uVar4 = 0;
  uVar3 = _ENGINE_PlayerInput;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 103531a0 FUN_103531a0

UClass * FUN_103531a0(void)

{
  return &UPlayerInput::PrivateStaticClass;
}


// ==== 103531b0 FUN_103531b0

void FUN_103531b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPlayerInput::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 103531f0 FUN_103531f0

undefined4 FUN_103531f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10353200 FUN_10353200

void FUN_10353200(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5799;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPlayerInput::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10353270 FUN_10353270

void FUN_10353270(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f57b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UPlayerInput::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103532d0 FUN_103532d0

void FUN_103532d0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f57d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UPlayerInput::vftable;
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(in_ECX + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 2 ^ *(uint *)(in_ECX + 0x34);
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  *(uint *)(in_ECX + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x200 ^ uVar1;
  in_ECX[0x38] = param_1[0x38];
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  ExceptionList = local_c;
  return;
}


// ==== 103534a0 FUN_103534a0

void FUN_103534a0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(in_ECX + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 2 ^ *(uint *)(in_ECX + 0x34);
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  *(uint *)(in_ECX + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x200 ^ uVar1;
  in_ECX[0x38] = param_1[0x38];
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return;
}


// ==== 10353620 FUN_10353620

void FUN_10353620(byte param_1)

{
  UPlayerInput *in_ECX;
  
  UPlayerInput::~UPlayerInput(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x8c);
  }
  return;
}


// ==== 10353650 FUN_10353650

UPlayerInput * FUN_10353650(byte param_1)

{
  UPlayerInput *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x8c,*(int *)(in_ECX + -4),UPlayerInput::~UPlayerInput);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPlayerInput::~UPlayerInput(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x8c);
  }
  return in_ECX;
}


// ==== 103536d0 FUN_103536d0

UClass * FUN_103536d0(void)

{
  return &UCheatManager::PrivateStaticClass;
}


// ==== 103536e0 FUN_103536e0

void FUN_103536e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UCheatManager::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10353720 FUN_10353720

undefined4 FUN_10353720(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10353730 FUN_10353730

void FUN_10353730(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f57f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UCheatManager::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103537a0 FUN_103537a0

void FUN_103537a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5819;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UCheatManager::vftable;
  FRotator::FRotator((FRotator *)(in_ECX + 0x34));
  ExceptionList = local_c;
  return;
}


// ==== 10353810 FUN_10353810

void FUN_10353810(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5839;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UCheatManager::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 103538a0 FUN_103538a0

void FUN_103538a0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 103538e0 FUN_103538e0

void FUN_103538e0(byte param_1)

{
  UCheatManager *in_ECX;
  
  UCheatManager::~UCheatManager(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return;
}


// ==== 10353910 FUN_10353910

UCheatManager * FUN_10353910(byte param_1)

{
  UCheatManager *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x40,*(int *)(in_ECX + -4),UCheatManager::~UCheatManager)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCheatManager::~UCheatManager(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return in_ECX;
}


// ==== 10353990 FUN_10353990

UClass * FUN_10353990(void)

{
  return &UI3DL2Listener::PrivateStaticClass;
}


// ==== 103539a0 FUN_103539a0

void FUN_103539a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UI3DL2Listener::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103539e0 FUN_103539e0

undefined4 FUN_103539e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103539f0 FUN_103539f0

void FUN_103539f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5859;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UI3DL2Listener::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10353a60 FUN_10353a60

void FUN_10353a60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5879;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UI3DL2Listener::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10353ac0 FUN_10353ac0

void FUN_10353ac0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UI3DL2Listener::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(uint *)(in_ECX + 0x9c) =
       *(uint *)(in_ECX + 0x9c) ^ (*(uint *)(in_ECX + 0x9c) ^ *(uint *)(param_1 + 0x9c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ *(uint *)(in_ECX + 0x9c)) & 2 ^ *(uint *)(in_ECX + 0x9c);
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  *(uint *)(in_ECX + 0x9c) = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x80 ^ uVar1;
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  ExceptionList = local_c;
  return;
}


// ==== 10353d10 FUN_10353d10

void FUN_10353d10(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(uint *)(in_ECX + 0x9c) =
       *(uint *)(in_ECX + 0x9c) ^ (*(uint *)(in_ECX + 0x9c) ^ *(uint *)(param_1 + 0x9c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ *(uint *)(in_ECX + 0x9c)) & 2 ^ *(uint *)(in_ECX + 0x9c);
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x9c) = uVar1;
  *(uint *)(in_ECX + 0x9c) = (*(uint *)(param_1 + 0x9c) ^ uVar1) & 0x80 ^ uVar1;
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  return;
}


// ==== 10353f10 FUN_10353f10

void FUN_10353f10(byte param_1)

{
  UI3DL2Listener *in_ECX;
  
  UI3DL2Listener::~UI3DL2Listener(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xa8);
  }
  return;
}


// ==== 10353f40 FUN_10353f40

UI3DL2Listener * FUN_10353f40(byte param_1)

{
  UI3DL2Listener *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0xa8,*(int *)(in_ECX + -4),UI3DL2Listener::~UI3DL2Listener);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UI3DL2Listener::~UI3DL2Listener(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xa8);
  }
  return in_ECX;
}


// ==== 10353fc0 FUN_10353fc0

UClass * FUN_10353fc0(void)

{
  return &UExtraMeshData::PrivateStaticClass;
}


// ==== 10353fd0 FUN_10353fd0

void FUN_10353fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UExtraMeshData::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10354010 FUN_10354010

undefined4 FUN_10354010(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10354020 FUN_10354020

void FUN_10354020(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f58b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UExtraMeshData::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10354090 FUN_10354090

void FUN_10354090(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f58d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UExtraMeshData::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103540f0 FUN_103540f0

void FUN_103540f0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f58f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UExtraMeshData::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  ExceptionList = local_c;
  return;
}


// ==== 10354180 FUN_10354180

void FUN_10354180(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return;
}


// ==== 103541d0 FUN_103541d0

void FUN_103541d0(byte param_1)

{
  UExtraMeshData *in_ECX;
  
  UExtraMeshData::~UExtraMeshData(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x48);
  }
  return;
}


// ==== 10354200 FUN_10354200

UExtraMeshData * FUN_10354200(byte param_1)

{
  UExtraMeshData *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x48,*(int *)(in_ECX + -4),UExtraMeshData::~UExtraMeshData);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UExtraMeshData::~UExtraMeshData(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x48);
  }
  return in_ECX;
}


// ==== 10354280 FUN_10354280

UClass * FUN_10354280(void)

{
  return &ULevelSummary::PrivateStaticClass;
}


// ==== 10354290 FUN_10354290

void FUN_10354290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULevelSummary::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103542d0 FUN_103542d0

undefined4 FUN_103542d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103542e0 FUN_103542e0

void FUN_103542e0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f593d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULevelSummary::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x50));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x40));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x34));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10354380 FUN_10354380

void FUN_10354380(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f598d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = ULevelSummary::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x34));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x40));
  local_4 = CONCAT31(local_4._1_3_,2);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x50));
  ExceptionList = local_c;
  return;
}


// ==== 10354410 FUN_10354410

void FUN_10354410(void)

{
  UObject *this;
  ushort *puVar1;
  UObject *in_ECX;
  ushort *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f59b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostLoad(in_ECX);
  iVar3 = 1;
  puVar2 = (ushort *)0x0;
  this = UObject::GetOuter(in_ECX);
  puVar1 = UObject::GetName(this);
  puVar1 = Localize((ushort *)L"LevelInfo0",(ushort *)L"Title",puVar1,puVar2,iVar3);
  if (*puVar1 != 0) {
    FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x34),puVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10354490 Catch@10354490

void Catch_10354490(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103544a4 Catch@103544a4

void Catch_103544a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevelSummary::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103544f0 FUN_103544f0

void FUN_103544f0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f59ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = ULevelSummary::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x34),(FStringNoInit *)(param_1 + 0x34));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x40),(FStringNoInit *)(param_1 + 0x40));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x50),(FStringNoInit *)(param_1 + 0x50));
  ExceptionList = local_c;
  return;
}


// ==== 103545a0 FUN_103545a0

void FUN_103545a0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x34),(FStringNoInit *)(param_1 + 0x34));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x40),(FStringNoInit *)(param_1 + 0x40));
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x50),(FStringNoInit *)(param_1 + 0x50));
  return;
}


// ==== 10354600 FUN_10354600

void FUN_10354600(byte param_1)

{
  ULevelSummary *in_ECX;
  
  ULevelSummary::~ULevelSummary(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5c);
  }
  return;
}


// ==== 10354630 FUN_10354630

ULevelSummary * FUN_10354630(byte param_1)

{
  ULevelSummary *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x5c,*(int *)(in_ECX + -4),ULevelSummary::~ULevelSummary)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULevelSummary::~ULevelSummary(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5c);
  }
  return in_ECX;
}


// ==== 103546b0 FUN_103546b0

UClass * FUN_103546b0(void)

{
  return &UReachSpec::PrivateStaticClass;
}


// ==== 103546c0 FUN_103546c0

void FUN_103546c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UReachSpec::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10354700 FUN_10354700

undefined4 FUN_10354700(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10354710 FUN_10354710

void FUN_10354710(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5a19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UReachSpec::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10354780 FUN_10354780

undefined4 FUN_10354780(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0x40) < param_1) || (*(int *)(in_ECX + 0x44) < param_2)) ||
      ((*(uint *)(in_ECX + 0x48) & param_3) != *(uint *)(in_ECX + 0x48))) ||
     ((uVar1 = 1, param_4 < *(int *)(in_ECX + 0x4c) && ((*(byte *)(in_ECX + 0x54) & 1) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 103547d0 FUN_103547d0

void FUN_103547d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5a39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UReachSpec::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10354830 FUN_10354830

void FUN_10354830(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5a59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UReachSpec::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x50] = param_1[0x50];
  *(uint *)(in_ECX + 0x54) =
       *(uint *)(in_ECX + 0x54) ^ (*(uint *)(param_1 + 0x54) ^ *(uint *)(in_ECX + 0x54)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 103548f0 FUN_103548f0

void FUN_103548f0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x50] = param_1[0x50];
  *(uint *)(in_ECX + 0x54) =
       *(uint *)(in_ECX + 0x54) ^ (*(uint *)(param_1 + 0x54) ^ *(uint *)(in_ECX + 0x54)) & 1;
  return;
}


// ==== 10354960 FUN_10354960

void FUN_10354960(byte param_1)

{
  UReachSpec *in_ECX;
  
  UReachSpec::~UReachSpec(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58);
  }
  return;
}


// ==== 10354990 FUN_10354990

UReachSpec * FUN_10354990(byte param_1)

{
  UReachSpec *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x58,*(int *)(in_ECX + -4),UReachSpec::~UReachSpec);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UReachSpec::~UReachSpec(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58);
  }
  return in_ECX;
}


// ==== 10354a10 FUN_10354a10

UClass * FUN_10354a10(void)

{
  return &ULevelObject::PrivateStaticClass;
}


// ==== 10354a20 FUN_10354a20

void FUN_10354a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULevelObject::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10354a60 FUN_10354a60

undefined4 FUN_10354a60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10354a70 FUN_10354a70

void FUN_10354a70(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10354a90 FUN_10354a90

void FUN_10354a90(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5a79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULevelObject::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10354b00 FUN_10354b00

void FUN_10354b00(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5a99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = ULevelObject::vftable;
  FName::FName((FName *)(in_ECX + 0x38));
  ExceptionList = local_c;
  return;
}


// ==== 10354b70 FUN_10354b70

undefined4 FUN_10354b70(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x34) & 0x18) == 0) {
    return 0;
  }
  return 1;
}


// ==== 10354b90 FUN_10354b90

undefined4 FUN_10354b90(void)

{
  return 0;
}


// ==== 10354ba0 FUN_10354ba0

float10 FUN_10354ba0(void)

{
  return (float10)1;
}


// ==== 10354bb0 FUN_10354bb0

void FUN_10354bb0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5ab9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = ULevelObject::vftable;
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(in_ECX + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 2 ^ *(uint *)(in_ECX + 0x34);
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  *(uint *)(in_ECX + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  ExceptionList = local_c;
  return;
}


// ==== 10354d10 FUN_10354d10

void FUN_10354d10(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(in_ECX + 0x34) ^ *(uint *)(param_1 + 0x34)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 2 ^ *(uint *)(in_ECX + 0x34);
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x34) = uVar1;
  *(uint *)(in_ECX + 0x34) = (*(uint *)(param_1 + 0x34) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  return;
}


// ==== 10354e20 FUN_10354e20

void FUN_10354e20(byte param_1)

{
  ULevelObject *in_ECX;
  
  ULevelObject::~ULevelObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return;
}


// ==== 10354e50 FUN_10354e50

ULevelObject * FUN_10354e50(byte param_1)

{
  ULevelObject *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x68,*(int *)(in_ECX + -4),ULevelObject::~ULevelObject);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULevelObject::~ULevelObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return in_ECX;
}


// ==== 10354ed0 FUN_10354ed0

UClass * FUN_10354ed0(void)

{
  return &UAmbientSoundObject::PrivateStaticClass;
}


// ==== 10354ee0 FUN_10354ee0

void FUN_10354ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UAmbientSoundObject::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10354f20 FUN_10354f20

undefined4 FUN_10354f20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10354f30 FUN_10354f30

void FUN_10354f30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UAmbientSoundObject::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  ULevelObject::~ULevelObject((ULevelObject *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10354fa0 FUN_10354fa0

bool FUN_10354fa0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x74) != 0;
}


// ==== 10354fb0 FUN_10354fb0

void FUN_10354fb0(void)

{
  ULevelObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULevelObject::ULevelObject(in_ECX);
  *(undefined ***)in_ECX = UAmbientSoundObject::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10355010 FUN_10355010

void FUN_10355010(ULevelObject *param_1)

{
  ULevelObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULevelObject::ULevelObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UAmbientSoundObject::vftable;
  in_ECX[0x68] = param_1[0x68];
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  in_ECX[0x7c] = param_1[0x7c];
  in_ECX[0x7d] = param_1[0x7d];
  ExceptionList = local_c;
  return;
}


// ==== 103550b0 FUN_103550b0

void FUN_103550b0(ULevelObject *param_1)

{
  ULevelObject *in_ECX;
  
  ULevelObject::operator=(in_ECX,param_1);
  in_ECX[0x68] = param_1[0x68];
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  in_ECX[0x7c] = param_1[0x7c];
  in_ECX[0x7d] = param_1[0x7d];
  return;
}


// ==== 10355110 FUN_10355110

void FUN_10355110(byte param_1)

{
  UAmbientSoundObject *in_ECX;
  
  UAmbientSoundObject::~UAmbientSoundObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return;
}


// ==== 10355140 FUN_10355140

UAmbientSoundObject * FUN_10355140(byte param_1)

{
  UAmbientSoundObject *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x80,*(int *)(in_ECX + -4),UAmbientSoundObject::~UAmbientSoundObject);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UAmbientSoundObject::~UAmbientSoundObject(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return in_ECX;
}


// ==== 103551c0 FUN_103551c0

UClass * FUN_103551c0(void)

{
  return &UL2NTimeLight::PrivateStaticClass;
}


// ==== 103551d0 FUN_103551d0

void FUN_103551d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2NTimeLight::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10355210 FUN_10355210

undefined4 FUN_10355210(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355220 FUN_10355220

UClass * FUN_10355220(void)

{
  return &UL2NEnvLight::PrivateStaticClass;
}


// ==== 10355230 FUN_10355230

void FUN_10355230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2NEnvLight::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10355270 FUN_10355270

undefined4 FUN_10355270(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355280 FUN_10355280

void FUN_10355280(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 103552a0 FUN_103552a0

UClass * FUN_103552a0(void)

{
  return &USkillVisualEffect::PrivateStaticClass;
}


// ==== 103552b0 FUN_103552b0

void FUN_103552b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkillVisualEffect::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103552f0 FUN_103552f0

undefined4 FUN_103552f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355300 FUN_10355300

UClass * FUN_10355300(void)

{
  return &USkillAction::PrivateStaticClass;
}


// ==== 10355310 FUN_10355310

void FUN_10355310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkillAction::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10355350 FUN_10355350

undefined4 FUN_10355350(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355360 FUN_10355360

void FUN_10355360(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5b39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkillAction::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103553d0 FUN_103553d0

void FUN_103553d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5b59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = USkillAction::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10355430 FUN_10355430

void FUN_10355430(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5b79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = USkillAction::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 103554b0 FUN_103554b0

void FUN_103554b0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  return;
}


// ==== 103554f0 FUN_103554f0

void FUN_103554f0(byte param_1)

{
  USkillAction *in_ECX;
  
  USkillAction::~USkillAction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c);
  }
  return;
}


// ==== 10355520 FUN_10355520

USkillAction * FUN_10355520(byte param_1)

{
  USkillAction *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3c,*(int *)(in_ECX + -4),USkillAction::~USkillAction);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkillAction::~USkillAction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c);
  }
  return in_ECX;
}


// ==== 103555a0 FUN_103555a0

UClass * FUN_103555a0(void)

{
  return &USkillAction_SwordTrail::PrivateStaticClass;
}


// ==== 103555b0 FUN_103555b0

void FUN_103555b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkillAction_SwordTrail::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103555f0 FUN_103555f0

undefined4 FUN_103555f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355600 FUN_10355600

void FUN_10355600(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkillAction_SwordTrail::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USkillAction::~USkillAction((USkillAction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10355670 FUN_10355670

void FUN_10355670(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5bc1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = USkillAction::vftable;
  *(undefined ***)in_ECX = USkillAction_SwordTrail::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103556e0 FUN_103556e0

void FUN_103556e0(USkillAction *param_1)

{
  USkillAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USkillAction::USkillAction(in_ECX,param_1);
  *(undefined ***)in_ECX = USkillAction_SwordTrail::vftable;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(in_ECX + 0x40) =
       *(uint *)(in_ECX + 0x40) ^ (*(uint *)(param_1 + 0x40) ^ *(uint *)(in_ECX + 0x40)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 10355760 FUN_10355760

void FUN_10355760(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(in_ECX + 0x40) =
       *(uint *)(in_ECX + 0x40) ^ (*(uint *)(param_1 + 0x40) ^ *(uint *)(in_ECX + 0x40)) & 1;
  return;
}


// ==== 103557b0 FUN_103557b0

void FUN_103557b0(byte param_1)

{
  USkillAction_SwordTrail *in_ECX;
  
  USkillAction_SwordTrail::~USkillAction_SwordTrail(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return;
}


// ==== 103557e0 FUN_103557e0

USkillAction_SwordTrail * FUN_103557e0(byte param_1)

{
  USkillAction_SwordTrail *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x44,*(int *)(in_ECX + -4),USkillAction_SwordTrail::~USkillAction_SwordTrail);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkillAction_SwordTrail::~USkillAction_SwordTrail(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return in_ECX;
}


// ==== 10355860 FUN_10355860

UClass * FUN_10355860(void)

{
  return &USkillAction_LocateEffect::PrivateStaticClass;
}


// ==== 10355870 FUN_10355870

void FUN_10355870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkillAction_LocateEffect::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103558b0 FUN_103558b0

undefined4 FUN_103558b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103558c0 FUN_103558c0

void FUN_103558c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkillAction_LocateEffect::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USkillAction::~USkillAction((USkillAction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10355930 FUN_10355930

void FUN_10355930(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5c31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = USkillAction::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = USkillAction_LocateEffect::vftable;
  FName::FName((FName *)(in_ECX + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 103559b0 FUN_103559b0

void FUN_103559b0(USkillAction *param_1)

{
  uint uVar1;
  USkillAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USkillAction::USkillAction(in_ECX,param_1);
  *(undefined ***)in_ECX = USkillAction_LocateEffect::vftable;
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(uint *)(in_ECX + 0x44) =
       *(uint *)(in_ECX + 0x44) ^ (*(uint *)(param_1 + 0x44) ^ *(uint *)(in_ECX + 0x44)) & 1;
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(uint *)(in_ECX + 0x4c) =
       *(uint *)(in_ECX + 0x4c) ^ (*(uint *)(param_1 + 0x4c) ^ *(uint *)(in_ECX + 0x4c)) & 1;
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(uint *)(in_ECX + 0x5c) =
       *(uint *)(in_ECX + 0x5c) ^ (*(uint *)(in_ECX + 0x5c) ^ *(uint *)(param_1 + 0x5c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ *(uint *)(in_ECX + 0x5c)) & 2 ^ *(uint *)(in_ECX + 0x5c);
  *(uint *)(in_ECX + 0x5c) = uVar1;
  *(uint *)(in_ECX + 0x5c) = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 4 ^ uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 10355aa0 FUN_10355aa0

void FUN_10355aa0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(uint *)(in_ECX + 0x44) =
       *(uint *)(in_ECX + 0x44) ^ (*(uint *)(param_1 + 0x44) ^ *(uint *)(in_ECX + 0x44)) & 1;
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(uint *)(in_ECX + 0x4c) =
       *(uint *)(in_ECX + 0x4c) ^ (*(uint *)(param_1 + 0x4c) ^ *(uint *)(in_ECX + 0x4c)) & 1;
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(uint *)(in_ECX + 0x5c) =
       *(uint *)(in_ECX + 0x5c) ^ (*(uint *)(in_ECX + 0x5c) ^ *(uint *)(param_1 + 0x5c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x5c) ^ *(uint *)(in_ECX + 0x5c)) & 2 ^ *(uint *)(in_ECX + 0x5c);
  *(uint *)(in_ECX + 0x5c) = uVar1;
  *(uint *)(in_ECX + 0x5c) = (*(uint *)(param_1 + 0x5c) ^ uVar1) & 4 ^ uVar1;
  return;
}


// ==== 10355b50 FUN_10355b50

void FUN_10355b50(byte param_1)

{
  USkillAction_LocateEffect *in_ECX;
  
  USkillAction_LocateEffect::~USkillAction_LocateEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return;
}


// ==== 10355b80 FUN_10355b80

USkillAction_LocateEffect * FUN_10355b80(byte param_1)

{
  USkillAction_LocateEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x60,*(int *)(in_ECX + -4),
               USkillAction_LocateEffect::~USkillAction_LocateEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkillAction_LocateEffect::~USkillAction_LocateEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return in_ECX;
}


// ==== 10355c00 FUN_10355c00

UClass * FUN_10355c00(void)

{
  return &UKarmaParamsCollision::PrivateStaticClass;
}


// ==== 10355c10 FUN_10355c10

void FUN_10355c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UKarmaParamsCollision::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10355c50 FUN_10355c50

undefined4 FUN_10355c50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355c60 FUN_10355c60

void FUN_10355c60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5c79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UKarmaParamsCollision::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10355cd0 FUN_10355cd0

void FUN_10355cd0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5c99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UKarmaParamsCollision::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10355d30 FUN_10355d30

void FUN_10355d30(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5cb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UKarmaParamsCollision::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = local_c;
  return;
}


// ==== 10355de0 FUN_10355de0

void FUN_10355de0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}


// ==== 10355e40 FUN_10355e40

void FUN_10355e40(byte param_1)

{
  UKarmaParamsCollision *in_ECX;
  
  UKarmaParamsCollision::~UKarmaParamsCollision(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return;
}


// ==== 10355e70 FUN_10355e70

UKarmaParamsCollision * FUN_10355e70(byte param_1)

{
  UKarmaParamsCollision *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x54,*(int *)(in_ECX + -4),UKarmaParamsCollision::~UKarmaParamsCollision);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UKarmaParamsCollision::~UKarmaParamsCollision(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return in_ECX;
}


// ==== 10355ef0 FUN_10355ef0

UClass * FUN_10355ef0(void)

{
  return &UKarmaParams::PrivateStaticClass;
}


// ==== 10355f00 FUN_10355f00

void FUN_10355f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UKarmaParams::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10355f40 FUN_10355f40

undefined4 FUN_10355f40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10355f50 FUN_10355f50

void FUN_10355f50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UKarmaParams::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UKarmaParamsCollision::~UKarmaParamsCollision((UKarmaParamsCollision *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10355fc0 FUN_10355fc0

void FUN_10355fc0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5d01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UKarmaParamsCollision::vftable;
  *(undefined ***)in_ECX = UKarmaParams::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10356030 FUN_10356030

void FUN_10356030(UKarmaParamsCollision *param_1)

{
  uint uVar1;
  UKarmaParamsCollision *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UKarmaParamsCollision::UKarmaParamsCollision(in_ECX,param_1);
  *(undefined ***)in_ECX = UKarmaParams::vftable;
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(in_ECX + 0x70) =
       *(uint *)(in_ECX + 0x70) ^ (*(uint *)(param_1 + 0x70) ^ *(uint *)(in_ECX + 0x70)) & 1;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(uint *)(in_ECX + 0x8c) =
       *(uint *)(in_ECX + 0x8c) ^ (*(uint *)(param_1 + 0x8c) ^ *(uint *)(in_ECX + 0x8c)) & 1;
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(uint *)(in_ECX + 0x98) =
       *(uint *)(in_ECX + 0x98) ^ (*(uint *)(in_ECX + 0x98) ^ *(uint *)(param_1 + 0x98)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ *(uint *)(in_ECX + 0x98)) & 2 ^ *(uint *)(in_ECX + 0x98);
  *(uint *)(in_ECX + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x98) = uVar1;
  *(uint *)(in_ECX + 0x98) = (*(uint *)(param_1 + 0x98) ^ uVar1) & 0x20 ^ uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 103561f0 FUN_103561f0

void FUN_103561f0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(in_ECX + 0x70) =
       *(uint *)(in_ECX + 0x70) ^ (*(uint *)(param_1 + 0x70) ^ *(uint *)(in_ECX + 0x70)) & 1;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(uint *)(in_ECX + 0x8c) =
       *(uint *)(in_ECX + 0x8c) ^ (*(uint *)(param_1 + 0x8c) ^ *(uint *)(in_ECX + 0x8c)) & 1;
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(uint *)(in_ECX + 0x98) =
       *(uint *)(in_ECX + 0x98) ^ (*(uint *)(in_ECX + 0x98) ^ *(uint *)(param_1 + 0x98)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ *(uint *)(in_ECX + 0x98)) & 2 ^ *(uint *)(in_ECX + 0x98);
  *(uint *)(in_ECX + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x98) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x98) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x98) = uVar1;
  *(uint *)(in_ECX + 0x98) = (*(uint *)(param_1 + 0x98) ^ uVar1) & 0x20 ^ uVar1;
  return;
}


// ==== 103563a0 FUN_103563a0

void FUN_103563a0(byte param_1)

{
  UKarmaParams *in_ECX;
  
  UKarmaParams::~UKarmaParams(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x9c);
  }
  return;
}


// ==== 103563d0 FUN_103563d0

UKarmaParams * FUN_103563d0(byte param_1)

{
  UKarmaParams *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x9c,*(int *)(in_ECX + -4),UKarmaParams::~UKarmaParams);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UKarmaParams::~UKarmaParams(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x9c);
  }
  return in_ECX;
}


// ==== 10356450 FUN_10356450

UClass * FUN_10356450(void)

{
  return &UKarmaParamsSkel::PrivateStaticClass;
}


// ==== 10356460 FUN_10356460

void FUN_10356460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UKarmaParamsSkel::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103564a0 FUN_103564a0

undefined4 FUN_103564a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103564b0 FUN_103564b0

void FUN_103564b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f5d57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UKarmaParamsSkel::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x9c));
  local_4 = 0xffffffff;
  UKarmaParams::~UKarmaParams((UKarmaParams *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10356530 FUN_10356530

void FUN_10356530(void)

{
  UKarmaParams *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5d87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UKarmaParams::UKarmaParams(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UKarmaParamsSkel::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x9c));
  local_4 = CONCAT31(local_4._1_3_,1);
  FRange::FRange((FRange *)(in_ECX + 0xac));
  ExceptionList = local_c;
  return;
}


// ==== 103565b0 FUN_103565b0

void FUN_103565b0(UKarmaParams *param_1)

{
  UKarmaParams *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5db7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UKarmaParams::UKarmaParams(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UKarmaParamsSkel::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x9c),(FStringNoInit *)(param_1 + 0x9c));
  *(uint *)(in_ECX + 0xa8) =
       *(uint *)(in_ECX + 0xa8) ^ (*(uint *)(param_1 + 0xa8) ^ *(uint *)(in_ECX + 0xa8)) & 1;
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(uint *)(in_ECX + 0xd0) =
       *(uint *)(in_ECX + 0xd0) ^ (*(uint *)(param_1 + 0xd0) ^ *(uint *)(in_ECX + 0xd0)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 10356700 FUN_10356700

void FUN_10356700(UKarmaParams *param_1)

{
  UKarmaParams *in_ECX;
  
  UKarmaParams::operator=(in_ECX,param_1);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x9c),(FStringNoInit *)(param_1 + 0x9c));
  *(uint *)(in_ECX + 0xa8) =
       *(uint *)(in_ECX + 0xa8) ^ (*(uint *)(param_1 + 0xa8) ^ *(uint *)(in_ECX + 0xa8)) & 1;
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(uint *)(in_ECX + 0xd0) =
       *(uint *)(in_ECX + 0xd0) ^ (*(uint *)(param_1 + 0xd0) ^ *(uint *)(in_ECX + 0xd0)) & 1;
  return;
}


// ==== 103567f0 FUN_103567f0

void FUN_103567f0(byte param_1)

{
  UKarmaParamsSkel *in_ECX;
  
  UKarmaParamsSkel::~UKarmaParamsSkel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xd4);
  }
  return;
}


// ==== 10356820 FUN_10356820

UKarmaParamsSkel * FUN_10356820(byte param_1)

{
  UKarmaParamsSkel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0xd4,*(int *)(in_ECX + -4),UKarmaParamsSkel::~UKarmaParamsSkel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UKarmaParamsSkel::~UKarmaParamsSkel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xd4);
  }
  return in_ECX;
}


// ==== 103568a0 FUN_103568a0

UClass * FUN_103568a0(void)

{
  return &UKarmaParamsRBFull::PrivateStaticClass;
}


// ==== 103568b0 FUN_103568b0

void FUN_103568b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UKarmaParamsRBFull::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103568f0 FUN_103568f0

undefined4 FUN_103568f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10356900 FUN_10356900

void FUN_10356900(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UKarmaParamsRBFull::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UKarmaParams::~UKarmaParams((UKarmaParams *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10356970 FUN_10356970

void FUN_10356970(void)

{
  UKarmaParams *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UKarmaParams::UKarmaParams(in_ECX);
  *(undefined ***)in_ECX = UKarmaParamsRBFull::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103569d0 FUN_103569d0

void FUN_103569d0(UKarmaParams *param_1)

{
  UKarmaParams *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UKarmaParams::UKarmaParams(in_ECX,param_1);
  *(undefined ***)in_ECX = UKarmaParamsRBFull::vftable;
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  ExceptionList = local_c;
  return;
}


// ==== 10356ac0 FUN_10356ac0

void FUN_10356ac0(UKarmaParams *param_1)

{
  UKarmaParams *in_ECX;
  
  UKarmaParams::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return;
}


// ==== 10356b60 FUN_10356b60

void FUN_10356b60(byte param_1)

{
  UKarmaParamsRBFull *in_ECX;
  
  UKarmaParamsRBFull::~UKarmaParamsRBFull(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc0);
  }
  return;
}


// ==== 10356b90 FUN_10356b90

UKarmaParamsRBFull * FUN_10356b90(byte param_1)

{
  UKarmaParamsRBFull *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0xc0,*(int *)(in_ECX + -4),UKarmaParamsRBFull::~UKarmaParamsRBFull);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UKarmaParamsRBFull::~UKarmaParamsRBFull(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc0);
  }
  return in_ECX;
}


// ==== 10356c10 FUN_10356c10

void FUN_10356c10(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10356c30 FUN_10356c30

void FUN_10356c30(void)

{
  FURL *in_ECX;
  
  FURL::FURL(in_ECX,(ushort *)0x0);
  return;
}


// ==== 10356c40 FUN_10356c40

void FUN_10356c40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNetworkNotify::vftable;
  return;
}


// ==== 10356c50 FUN_10356c50

void FUN_10356c50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNetworkNotify::vftable;
  return;
}


// ==== 10356c60 FUN_10356c60

void FUN_10356c60(void)

{
  return;
}


// ==== 10356c70 FUN_10356c70

UClass * FUN_10356c70(void)

{
  return &ULevelBase::PrivateStaticClass;
}


// ==== 10356c80 FUN_10356c80

void FUN_10356c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULevelBase::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10356cc0 FUN_10356cc0

undefined4 FUN_10356cc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10356cd0 FUN_10356cd0

void FUN_10356cd0(void)

{
  return;
}


// ==== 10356ce0 FUN_10356ce0

void FUN_10356ce0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10356d10 FUN_10356d10

void FUN_10356d10(void)

{
  return;
}


// ==== 10356d20 FUN_10356d20

void FUN_10356d20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10356d40 FUN_10356d40

undefined4 FUN_10356d40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x20);
}


// ==== 10356d50 FUN_10356d50

undefined4 FUN_10356d50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 10356d60 FUN_10356d60

undefined4 FUN_10356d60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 10356d70 FUN_10356d70

void FUN_10356d70(void)

{
  return;
}


// ==== 10356d80 FUN_10356d80

void FUN_10356d80(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5e40;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10356dd0 FUN_10356dd0

void FUN_10356dd0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  *in_ECX = FStaticMeshBatchVertexStream::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  return;
}


// ==== 10356e80 FUN_10356e80

void FUN_10356e80(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


// ==== 10356ed0 FUN_10356ed0

void FUN_10356ed0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5e80;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10356f40 FUN_10356f40

FRenderResource * FUN_10356f40(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5ea0;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x24,*(int *)(in_ECX + -4),
               FStaticMeshBatchVertexStream::~FStaticMeshBatchVertexStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10357010 FUN_10357010

undefined4 FUN_10357010(void)

{
  return 1;
}


// ==== 10357020 FUN_10357020

undefined4 FUN_10357020(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 10357030 FUN_10357030

undefined4 FUN_10357030(void)

{
  return 2;
}


// ==== 10357040 FUN_10357040

void FUN_10357040(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5ec0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10357090 FUN_10357090

void FUN_10357090(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FIndexBuffer::vftable;
  *in_ECX = FStaticMeshBatchIndexBuffer::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 10357120 FUN_10357120

void FUN_10357120(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 10357150 FUN_10357150

void FUN_10357150(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5f00;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103571c0 FUN_103571c0

FRenderResource * FUN_103571c0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5f20;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FStaticMeshBatchIndexBuffer::~FStaticMeshBatchIndexBuffer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10357290 FUN_10357290

UClass * FUN_10357290(void)

{
  return &ULevel::PrivateStaticClass;
}


// ==== 103572a0 FUN_103572a0

void FUN_103572a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULevel::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103572e0 FUN_103572e0

undefined4 FUN_103572e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103572f0 FUN_103572f0

int FUN_103572f0(void)

{
  int in_ECX;
  
  return in_ECX + -0x34;
}


// ==== 10357300 FUN_10357300

wchar_t * FUN_10357300(void)

{
  return L"User";
}


// ==== 10357310 FUN_10357310

UClass * FUN_10357310(void)

{
  return &UInput::PrivateStaticClass;
}


// ==== 10357320 FUN_10357320

void FUN_10357320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UInput::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10357360 FUN_10357360

undefined4 FUN_10357360(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10357370 FUN_10357370

void FUN_10357370(UInput *param_1)

{
  if (param_1 != (UInput *)0x0) {
    UInput::UInput(param_1);
    return;
  }
  return;
}


// ==== 10357390 FUN_10357390

void FUN_10357390(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xec8) = param_2;
  *(undefined4 *)(in_ECX + 0xec4) = param_1;
  return;
}


// ==== 103573b0 FUN_103573b0

undefined4 FUN_103573b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xec4);
}


// ==== 103573c0 FUN_103573c0

float10 FUN_103573c0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0xec8);
}


// ==== 103573d0 FUN_103573d0

undefined1 FUN_103573d0(void)

{
  int in_ECX;
  
  if ((((*(char *)(in_ECX + 0xef1) == '\0') && (*(char *)(in_ECX + 0xef3) == '\0')) &&
      (*(char *)(in_ECX + 0xef2) == '\0')) && (*(char *)(in_ECX + 0xef4) == '\0')) {
    return 0;
  }
  return 1;
}


// ==== 10357410 FUN_10357410

void FUN_10357410(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f5f3c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10357460 FUN_10357460

void FUN_10357460(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5f5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 10357500 FUN_10357500

UClass * FUN_10357500(void)

{
  return &UPlayer::PrivateStaticClass;
}


// ==== 10357510 FUN_10357510

void FUN_10357510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPlayer::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return;
}


// ==== 10357550 FUN_10357550

undefined4 FUN_10357550(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10357560 FUN_10357560

UClass * FUN_10357560(void)

{
  return &UPackageCheckInfo::PrivateStaticClass;
}


// ==== 10357570 FUN_10357570

void FUN_10357570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPackageCheckInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103575b0 FUN_103575b0

undefined4 FUN_103575b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103575c0 FUN_103575c0

void FUN_103575c0(EName param_1)

{
  FName *in_ECX;
  
  FName::FName(in_ECX,param_1);
  return;
}


// ==== 103575e0 FUN_103575e0

void FUN_103575e0(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  return;
}


// ==== 103575f0 FUN_103575f0

void FUN_103575f0(ushort *param_1,EFindName param_2)

{
  FName *in_ECX;
  
  FName::FName(in_ECX,param_1,param_2);
  return;
}


// ==== 10357620 FUN_10357620

FNameEntry * FUN_10357620(void)

{
  int iVar1;
  FNameEntry *pFVar2;
  FName *in_ECX;
  
  iVar1 = FName::GetIndex(in_ECX);
  if (iVar1 == 0) {
    return (FNameEntry *)0x0;
  }
  iVar1 = FName::GetIndex(in_ECX);
  pFVar2 = FName::GetEntry(iVar1);
  return pFVar2 + 0xc;
}


// ==== 10357650 FUN_10357650

void FUN_10357650(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10357660 FUN_10357660

undefined1 FUN_10357660(void)

{
  return 0;
}


// ==== 10357670 FUN_10357670

void FUN_10357670(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x106; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10357690 FUN_10357690

void FUN_10357690(byte param_1)

{
  FL2GameData *in_ECX;
  
  FL2GameData::~FL2GameData(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x84e08);
  }
  return;
}


// ==== 103576c0 FUN_103576c0

FL2GameData * FUN_103576c0(byte param_1)

{
  FL2GameData *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x84e08,*(int *)(in_ECX + -4),FL2GameData::~FL2GameData);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FL2GameData::~FL2GameData(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x84e08);
  }
  return in_ECX;
}


// ==== 10357740 FUN_10357740

void FUN_10357740(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f5f94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FString::FString((FString *)(in_ECX + 2),(FString *)(param_1 + 2));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 5),(FString *)(param_1 + 5));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 8),(FString *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


// ==== 103577e0 FUN_103577e0

void FUN_103577e0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f5fd4;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x20));
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x14));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10357860 FUN_10357860

void FUN_10357860(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f602c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FString::FString((FString *)(in_ECX + 6),(FString *)(param_1 + 6));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  local_4._0_1_ = 2;
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  FString::FString((FString *)(in_ECX + 0x11),(FString *)(param_1 + 0x11));
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString((FString *)(in_ECX + 0x14),(FString *)(param_1 + 0x14));
  ExceptionList = local_c;
  return;
}


// ==== 10357960 FUN_10357960

void FUN_10357960(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f608c;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x50));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x44));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x24));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10357a00 FUN_10357a00

void FUN_10357a00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f60c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10357a80 FUN_10357a80

void FUN_10357a80(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f60f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10357af0 FUN_10357af0

void FUN_10357af0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6119;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10357b50 FUN_10357b50

void FUN_10357b50(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6139;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10357ba0 FUN_10357ba0

void FUN_10357ba0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6159;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10357c00 FUN_10357c00

void FUN_10357c00(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6179;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10357c50 FUN_10357c50

void FUN_10357c50(FStringNoInit *param_1)

{
  FStringNoInit *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f61b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FStringNoInit::FStringNoInit(in_ECX,param_1);
  local_4 = 0;
  FStringNoInit::FStringNoInit(in_ECX + 0xc,param_1 + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FStringNoInit::FStringNoInit(in_ECX + 0x18,param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 10357ce0 FUN_10357ce0

void FUN_10357ce0(void)

{
  FStringNoInit *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f61f1;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FStringNoInit::~FStringNoInit(in_ECX + 0x18);
  local_4 = local_4 & 0xffffff00;
  FStringNoInit::~FStringNoInit(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10357d60 FUN_10357d60

void FUN_10357d60(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6234;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FString::FString((FString *)(in_ECX + 2),(FString *)(param_1 + 2));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 5),(FString *)(param_1 + 5));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 8),(FString *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10357e00 FUN_10357e00

void FUN_10357e00(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f6274;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x20));
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x14));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10357e80 FUN_10357e80

void FUN_10357e80(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f62a5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 10357f10 FUN_10357f10

void FUN_10357f10(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f62d5;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10357f80 FUN_10357f80

void FUN_10357f80(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6341;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  local_4._0_1_ = 1;
  FString::FString(in_ECX + 0x18,param_1 + 0x18);
  local_4._0_1_ = 2;
  FString::FString(in_ECX + 0x24,param_1 + 0x24);
  local_4._0_1_ = 3;
  FString::FString(in_ECX + 0x30,param_1 + 0x30);
  local_4._0_1_ = 4;
  FString::FString(in_ECX + 0x3c,param_1 + 0x3c);
  local_4 = CONCAT31(local_4._1_3_,5);
  FString::FString(in_ECX + 0x48,param_1 + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 10358070 FUN_10358070

void FUN_10358070(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f63c1;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x48);
  local_4._0_1_ = 4;
  FString::~FString(in_ECX + 0x3c);
  local_4._0_1_ = 3;
  FString::~FString(in_ECX + 0x30);
  local_4._0_1_ = 2;
  FString::~FString(in_ECX + 0x24);
  local_4._0_1_ = 1;
  FString::~FString(in_ECX + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10358130 FUN_10358130

void FUN_10358130(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f63fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 103581a0 FUN_103581a0

void FUN_103581a0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f641c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 103581f0 FUN_103581f0

void FUN_103581f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f643c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 10358260 FUN_10358260

void FUN_10358260(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f645c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 103582b0 FUN_103582b0

void FUN_103582b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f647c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  FString::FString((FString *)(in_ECX + 7),(FString *)(param_1 + 7));
  ExceptionList = local_c;
  return;
}


// ==== 10358340 FUN_10358340

void FUN_10358340(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f649c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 103583e0 FUN_103583e0

void FUN_103583e0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  FString::operator=((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FString::operator=((FString *)(in_ECX + 6),(FString *)(param_1 + 6));
  FString::operator=((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  FString::operator=((FString *)(in_ECX + 0x11),(FString *)(param_1 + 0x11));
  FString::operator=((FString *)(in_ECX + 0x14),(FString *)(param_1 + 0x14));
  return;
}


// ==== 10358710 FUN_10358710

void FUN_10358710(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}


// ==== 10358720 FUN_10358720

bool FUN_10358720(void)

{
  int *in_ECX;
  
  return *in_ECX == 0;
}


// ==== 10358730 FUN_10358730

void FUN_10358730(int param_1,int param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = 1;
  in_ECX[1] = (float)param_2;
  in_ECX[2] = (float)param_2 - (float)param_1;
  return;
}


// ==== 10358760 FUN_10358760

void FUN_10358760(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}


// ==== 10358770 FUN_10358770

float10 FUN_10358770(float param_1)

{
  int in_ECX;
  
  return (float10)(((*(float *)(in_ECX + 4) - *(float *)(in_ECX + 8)) * param_1) /
                  *(float *)(in_ECX + 4));
}


// ==== 103587a0 FUN_103587a0

void FUN_103587a0(float param_1)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    param_1 = (float)in_ECX[2] + param_1;
    in_ECX[2] = (int)param_1;
    if ((float)in_ECX[1] < param_1 != ((float)in_ECX[1] == param_1)) {
      *in_ECX = 0;
    }
  }
  return;
}


// ==== 103587e0 FUN_103587e0

void FUN_103587e0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 10358800 FUN_10358800

void FUN_10358800(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)((int)in_ECX + 0x32) = 0;
  *(undefined4 *)((int)in_ECX + 0x42) = 0;
  *(undefined4 *)((int)in_ECX + 0x46) = 0;
  *(undefined4 *)((int)in_ECX + 0x4a) = 0;
  *(undefined4 *)((int)in_ECX + 0x4e) = 0;
  *(undefined1 *)((int)in_ECX + 0x52) = 0;
  in_ECX[0x19] = 0;
  return;
}


// ==== 10358860 FUN_10358860

void FUN_10358860(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10358910 FUN_10358910

void FUN_10358910(void)

{
  void *in_ECX;
  
  *(undefined4 *)((int)in_ECX + 0x1d4) = 0;
  *(undefined4 *)((int)in_ECX + 0x1e0) = 0;
  *(undefined4 *)((int)in_ECX + 0x1ec) = 0;
  *(undefined4 *)((int)in_ECX + 0x1f8) = 0;
  *(undefined1 *)((int)in_ECX + 0x2d8) = 0;
  *(undefined1 *)((int)in_ECX + 0x2d9) = 0;
  *(undefined1 *)((int)in_ECX + 0x2da) = 0;
  *(undefined1 *)((int)in_ECX + 0x2db) = 0;
  *(undefined1 *)((int)in_ECX + 0x2dc) = 0;
  *(undefined1 *)((int)in_ECX + 0x2dd) = 0;
  *(undefined1 *)((int)in_ECX + 0x2de) = 0;
  appMemset(in_ECX,0,0x314);
  *(undefined4 *)((int)in_ECX + 0x308) = 0xffffffff;
  return;
}


// ==== 10358990 FUN_10358990

undefined4 FUN_10358990(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x284);
}


// ==== 103589a0 FUN_103589a0

undefined4 FUN_103589a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x29c);
}


// ==== 103589b0 FUN_103589b0

undefined4 FUN_103589b0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 103589c0 FUN_103589c0

undefined4 FUN_103589c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 103589d0 FUN_103589d0

uint FUN_103589d0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x294) >> 8 & 1;
}


// ==== 103589e0 FUN_103589e0

uint FUN_103589e0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x294) >> 5 & 1;
}


// ==== 103589f0 FUN_103589f0

uint FUN_103589f0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x294) >> 4 & 1;
}


// ==== 10358a00 FUN_10358a00

undefined4 FUN_10358a00(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x294) & 0x18) == 0) {
    return 0;
  }
  return 1;
}


// ==== 10358a20 FUN_10358a20

uint FUN_10358a20(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x294) >> 6 & 1;
}


// ==== 10358a30 FUN_10358a30

undefined4 FUN_10358a30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x194);
}


// ==== 10358a40 FUN_10358a40

undefined4 FUN_10358a40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x198);
}


// ==== 10358a50 FUN_10358a50

int FUN_10358a50(void)

{
  int in_ECX;
  
  return (int)*(short *)(in_ECX + 0x2b0);
}


// ==== 10358a60 FUN_10358a60

undefined4 FUN_10358a60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 400);
}


// ==== 10358a70 FUN_10358a70

undefined4 FUN_10358a70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x308);
}


// ==== 10358a80 FUN_10358a80

void FUN_10358a80(uint param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x298) != 0) {
    *(undefined1 *)(in_ECX + 0x2d8) = 1;
    *(undefined1 *)(in_ECX + 0x2d9) = 1;
    *(undefined1 *)(in_ECX + 0x2da) = 1;
    return;
  }
  *(byte *)(in_ECX + 0x2d8) = (byte)(param_1 >> 1) & 1;
  *(byte *)(in_ECX + 0x2d9) = (byte)(param_1 >> 2) & 1;
  *(byte *)(in_ECX + 0x2da) = (byte)(param_1 >> 7) & 1;
  *(byte *)(in_ECX + 0x2db) = (byte)(param_1 >> 5) & 1;
  *(byte *)(in_ECX + 0x2dc) = (byte)(param_1 >> 4) & 1;
  *(byte *)(in_ECX + 0x2dd) = (byte)(param_1 >> 8) & 1;
  *(byte *)(in_ECX + 0x2de) = (byte)(param_1 >> 6) & 1;
  return;
}


// ==== 10358b30 FUN_10358b30

void FUN_10358b30(ushort *param_1)

{
  FString *pFVar1;
  int iVar2;
  int in_ECX;
  FString local_24 [4];
  FString local_20 [4];
  FString local_1c [8];
  void *local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_107f64e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x2d4) = 0;
  if ((param_1 != (ushort *)0x0) && (*param_1 != 0)) {
    FString::FString(local_24,param_1);
    local_4 = 0;
    pFVar1 = (FString *)FString::Caps(local_24);
    local_8._0_1_ = 1;
    FString::operator=((FString *)&stack0xffffffd8,pFVar1);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    FString::~FString(local_1c);
    if ((*(short *)(in_ECX + 0x2b0) == 1) && (*(int *)(in_ECX + 0x204) != 0)) {
      iVar2 = FString::operator_int((FString *)(*(int *)(in_ECX + 0x204) + 0x17ac));
      if (iVar2 != 0) {
        FString::Caps((FString *)(*(int *)(in_ECX + 0x204) + 0x17ac));
        local_c._0_1_ = 2;
        iVar2 = FString::InStr(local_20,(FString *)&stack0xffffffd4,0);
        if (iVar2 != -1) {
          *(undefined4 *)(in_ECX + 0x2d4) = 1;
        }
        local_c = (void *)((uint)local_c._1_3_ << 8);
        FString::~FString(local_20);
      }
    }
    if ((*(short *)(in_ECX + 0x2b0) == 3) && (*(int *)(in_ECX + 0x204) != 0)) {
      iVar2 = FString::operator_int((FString *)(*(int *)(in_ECX + 0x204) + 0x17b8));
      if (iVar2 != 0) {
        FString::Caps((FString *)(*(int *)(in_ECX + 0x204) + 0x17b8));
        local_10 = 3;
        iVar2 = FString::InStr(local_24,(FString *)&stack0xffffffd0,0);
        if (iVar2 != -1) {
          *(undefined4 *)(in_ECX + 0x2d4) = 2;
        }
        local_10 = 0;
        FString::~FString(local_24);
      }
    }
    if ((*(short *)(in_ECX + 0x2b0) == 5) && (*(int *)(in_ECX + 0x204) != 0)) {
      iVar2 = FString::operator_int((FString *)(*(int *)(in_ECX + 0x204) + 0x17c4));
      if (iVar2 != 0) {
        FString::Caps((FString *)(*(int *)(in_ECX + 0x204) + 0x17c4));
        local_10 = 4;
        iVar2 = FString::InStr(local_24,(FString *)&stack0xffffffd0,0);
        if (iVar2 != -1) {
          *(undefined4 *)(in_ECX + 0x2d4) = 3;
        }
        local_10 = 0;
        FString::~FString(local_24);
      }
    }
    if ((*(short *)(in_ECX + 0x2b0) == 8) && (*(int *)(in_ECX + 0x204) != 0)) {
      iVar2 = FString::operator_int((FString *)(*(int *)(in_ECX + 0x204) + 0x17ac));
      if (iVar2 != 0) {
        FString::Caps((FString *)(*(int *)(in_ECX + 0x204) + 0x17ac));
        local_10 = 5;
        iVar2 = FString::InStr(local_24,(FString *)&stack0xffffffd0,0);
        if (iVar2 != -1) {
          *(undefined4 *)(in_ECX + 0x2d4) = 4;
        }
        local_10 = 0;
        FString::~FString(local_24);
      }
    }
    local_c = (void *)0xffffffff;
    FString::~FString((FString *)&stack0xffffffd4);
  }
  ExceptionList = local_14;
  return;
}


// ==== 10358e30 FUN_10358e30

void FUN_10358e30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10358e50 FUN_10358e50

void FUN_10358e50(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  in_ECX[6] = 0;
  *in_ECX = 0xffffffff;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


// ==== 10358e70 FUN_10358e70

void FUN_10358e70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10358e90 FUN_10358e90

UClass * FUN_10358e90(void)

{
  return &UL2NetHandler::PrivateStaticClass;
}


// ==== 10358ea0 FUN_10358ea0

void FUN_10358ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2NetHandler::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10358ee0 FUN_10358ee0

undefined4 FUN_10358ee0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10358ef0 FUN_10358ef0

void FUN_10358ef0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6509;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2NetHandler::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2NetHandler::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10358f60 FUN_10358f60

void FUN_10358f60(void)

{
  return;
}


// ==== 10358f70 FUN_10358f70

void FUN_10358f70(void)

{
  return;
}


// ==== 10358f80 FUN_10358f80

void FUN_10358f80(void)

{
  return;
}


// ==== 10358f90 FUN_10358f90

void FUN_10358f90(void)

{
  return;
}


// ==== 10358fa0 FUN_10358fa0

void FUN_10358fa0(void)

{
  return;
}


// ==== 10358fb0 FUN_10358fb0

void FUN_10358fb0(void)

{
  return;
}


// ==== 10358fc0 FUN_10358fc0

void FUN_10358fc0(void)

{
  return;
}


// ==== 10358fd0 FUN_10358fd0

void FUN_10358fd0(void)

{
  return;
}


// ==== 10358fe0 FUN_10358fe0

void FUN_10358fe0(void)

{
  return;
}


// ==== 10358ff0 FUN_10358ff0

void FUN_10358ff0(void)

{
  return;
}


// ==== 10359000 FUN_10359000

void FUN_10359000(void)

{
  return;
}


// ==== 10359010 FUN_10359010

void FUN_10359010(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6529;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10359060 FUN_10359060

void FUN_10359060(void)

{
  return;
}


// ==== 10359070 FUN_10359070

void FUN_10359070(void)

{
  return;
}


// ==== 10359080 FUN_10359080

void FUN_10359080(void)

{
  return;
}


// ==== 10359090 FUN_10359090

void FUN_10359090(void)

{
  return;
}


// ==== 103590a0 FUN_103590a0

void FUN_103590a0(void)

{
  return;
}


// ==== 103590b0 FUN_103590b0

void FUN_103590b0(void)

{
  return;
}


// ==== 103590c0 FUN_103590c0

void FUN_103590c0(void)

{
  return;
}


// ==== 103590d0 FUN_103590d0

void FUN_103590d0(void)

{
  return;
}


// ==== 103590e0 FUN_103590e0

void FUN_103590e0(void)

{
  return;
}


// ==== 103590f0 FUN_103590f0

void FUN_103590f0(void)

{
  return;
}


// ==== 10359100 FUN_10359100

void FUN_10359100(void)

{
  return;
}


// ==== 10359110 FUN_10359110

void FUN_10359110(void)

{
  return;
}


// ==== 10359120 FUN_10359120

void FUN_10359120(void)

{
  return;
}


// ==== 10359130 FUN_10359130

void FUN_10359130(void)

{
  return;
}


// ==== 10359140 FUN_10359140

void FUN_10359140(void)

{
  return;
}


// ==== 10359150 FUN_10359150

void FUN_10359150(void)

{
  return;
}


// ==== 10359160 FUN_10359160

void FUN_10359160(void)

{
  return;
}


// ==== 10359170 FUN_10359170

void FUN_10359170(void)

{
  return;
}


// ==== 10359180 FUN_10359180

void FUN_10359180(void)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6549;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX);
  *(undefined ***)in_ECX = UL2NetHandler::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2NetHandler::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 103591f0 FUN_103591f0

void FUN_103591f0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  *(undefined ***)in_ECX = UL2NetHandler::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2NetHandler::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 10359260 FUN_10359260

void FUN_10359260(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  return;
}


// ==== 10359280 FUN_10359280

void FUN_10359280(byte param_1)

{
  UL2NetHandler *in_ECX;
  
  UL2NetHandler::~UL2NetHandler(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 103592b0 FUN_103592b0

UL2NetHandler * FUN_103592b0(byte param_1)

{
  UL2NetHandler *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UL2NetHandler::~UL2NetHandler)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2NetHandler::~UL2NetHandler(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10359330 FUN_10359330

UClass * FUN_10359330(void)

{
  return &UL2NEnvManager::PrivateStaticClass;
}


// ==== 10359340 FUN_10359340

void FUN_10359340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2NEnvManager::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10359380 FUN_10359380

undefined4 FUN_10359380(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10359390 FUN_10359390

void FUN_10359390(UL2NEnvManager *param_1)

{
  if (param_1 != (UL2NEnvManager *)0x0) {
    UL2NEnvManager::UL2NEnvManager(param_1);
    return;
  }
  return;
}


// ==== 103593b0 FUN_103593b0

void FUN_103593b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x168) = param_1;
  return;
}


// ==== 103593c0 FUN_103593c0

UClass * FUN_103593c0(void)

{
  return &UEngine::PrivateStaticClass;
}


// ==== 103593d0 FUN_103593d0

void FUN_103593d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UEngine::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return;
}


// ==== 10359410 FUN_10359410

undefined4 FUN_10359410(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10359420 FUN_10359420

void FUN_10359420(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6589;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UEngine::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UEngine::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10359490 FUN_10359490

void FUN_10359490(void)

{
  return;
}


// ==== 103594a0 FUN_103594a0

void FUN_103594a0(void)

{
  return;
}


// ==== 103594b0 FUN_103594b0

undefined4 FUN_103594b0(void)

{
  return 0;
}


// ==== 103594c0 FUN_103594c0

undefined4 FUN_103594c0(void)

{
  return 0;
}


// ==== 103594d0 FUN_103594d0

undefined4 FUN_103594d0(void)

{
  return 0;
}


// ==== 103594e0 FUN_103594e0

void FUN_103594e0(void)

{
  return;
}


// ==== 103594f0 FUN_103594f0

undefined4 FUN_103594f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x68);
}


// ==== 10359500 FUN_10359500

void FUN_10359500(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x104) = 1;
  return;
}


// ==== 10359510 FUN_10359510

void FUN_10359510(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x104) = 0;
  return;
}


// ==== 10359520 FUN_10359520

void FUN_10359520(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f65a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  *(undefined ***)in_ECX = UEngine::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UEngine::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(uint *)(in_ECX + 0xcc) =
       *(uint *)(in_ECX + 0xcc) ^ (*(uint *)(param_1 + 0xcc) ^ *(uint *)(in_ECX + 0xcc)) & 1;
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
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
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  ExceptionList = local_c;
  return;
}


// ==== 10359a50 FUN_10359a50

void FUN_10359a50(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(uint *)(in_ECX + 0xcc) =
       *(uint *)(in_ECX + 0xcc) ^ (*(uint *)(param_1 + 0xcc) ^ *(uint *)(in_ECX + 0xcc)) & 1;
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
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
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  return;
}


// ==== 10359f30 FUN_10359f30

void FUN_10359f30(byte param_1)

{
  UEngine *in_ECX;
  
  UEngine::~UEngine(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x19c);
  }
  return;
}


// ==== 10359f60 FUN_10359f60

UEngine * FUN_10359f60(byte param_1)

{
  UEngine *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x19c,*(int *)(in_ECX + -4),UEngine::~UEngine);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UEngine::~UEngine(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x19c);
  }
  return in_ECX;
}


// ==== 10359fe0 FUN_10359fe0

UClass * FUN_10359fe0(void)

{
  return &UGameEngine::PrivateStaticClass;
}


// ==== 10359ff0 FUN_10359ff0

void FUN_10359ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UGameEngine::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1035a030 FUN_1035a030

undefined4 FUN_1035a030(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035a040 FUN_1035a040

void FUN_1035a040(UGameEngine *param_1)

{
  if (param_1 != (UGameEngine *)0x0) {
    UGameEngine::UGameEngine(param_1);
    return;
  }
  return;
}


// ==== 1035a060 FUN_1035a060

void FUN_1035a060(APawn *param_1)

{
  FLandMark *in_ECX;
  
  *(undefined ***)in_ECX = FLandMark::vftable;
  FLandMark::SetOwner(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 1035a090 FUN_1035a090

void FUN_1035a090(void)

{
  FLandMark *in_ECX;
  
  *(undefined ***)in_ECX = FLandMark::vftable;
  FLandMark::DeleteLandMark(in_ECX,1);
  return;
}


// ==== 1035a0b0 FUN_1035a0b0

void FUN_1035a0b0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FLandMark::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1035a100 FUN_1035a100

void FUN_1035a100(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1035a140 FUN_1035a140

void FUN_1035a140(byte param_1)

{
  FLandMark *in_ECX;
  
  *(undefined ***)in_ECX = FLandMark::vftable;
  FLandMark::DeleteLandMark(in_ECX,1);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1035a180 FUN_1035a180

FLandMark * FUN_1035a180(byte param_1)

{
  FLandMark *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1c,*(int *)(in_ECX + -4),FLandMark::~FLandMark);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  *(undefined ***)in_ECX = FLandMark::vftable;
  FLandMark::DeleteLandMark(in_ECX,1);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1035a210 FUN_1035a210

void FUN_1035a210(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1035a230 FUN_1035a230

UClass * FUN_1035a230(void)

{
  return &UL2Font::PrivateStaticClass;
}


// ==== 1035a240 FUN_1035a240

void FUN_1035a240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2Font::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return;
}


// ==== 1035a280 FUN_1035a280

undefined4 FUN_1035a280(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035a290 FUN_1035a290

void FUN_1035a290(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f65c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2Font::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2Font::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035a300 FUN_1035a300

void FUN_1035a300(void)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f65e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX);
  *(undefined ***)in_ECX = UL2Font::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2Font::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 1035a370 FUN_1035a370

void FUN_1035a370(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  *(undefined ***)in_ECX = UL2Font::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2Font::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 1035a3e0 FUN_1035a3e0

void FUN_1035a3e0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  return;
}


// ==== 1035a400 FUN_1035a400

void FUN_1035a400(byte param_1)

{
  UL2Font *in_ECX;
  
  UL2Font::~UL2Font(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 1035a430 FUN_1035a430

UL2Font * FUN_1035a430(byte param_1)

{
  UL2Font *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UL2Font::~UL2Font);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2Font::~UL2Font(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 1035a4b0 FUN_1035a4b0

void FUN_1035a4b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  return;
}


// ==== 1035a4c0 FUN_1035a4c0

void FUN_1035a4c0(void)

{
  int in_ECX;
  
  FRotator::FRotator((FRotator *)(in_ECX + 0xc));
  return;
}


// ==== 1035a4e0 FUN_1035a4e0

void FUN_1035a4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *unaff_EDI;
  undefined4 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107f662b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FRotator::FRotator((FRotator *)(in_ECX + 3));
  in_ECX[6] = param_10;
  in_ECX[7] = param_3;
  *in_ECX = param_4;
  in_ECX[1] = param_5;
  in_ECX[2] = param_6;
  in_ECX[3] = param_7;
  in_ECX[4] = param_8;
  in_ECX[5] = param_9;
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x20,&DAT_10853a28);
  pvStack_c = (void *)0x0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_10682720(uStack_4,unaff_retaddr,5);
  }
  in_ECX[8] = uVar2;
  ExceptionList = unaff_EDI;
  return;
}


// ==== 1035a5d0 FUN_1035a5d0

void FUN_1035a5d0(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x20))(1);
  }
  return;
}


// ==== 1035a5f0 FUN_1035a5f0

void FUN_1035a5f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1035a610 FUN_1035a610

UClass * FUN_1035a610(void)

{
  return &UCanvas::PrivateStaticClass;
}


// ==== 1035a620 FUN_1035a620

void FUN_1035a620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UCanvas::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return;
}


// ==== 1035a660 FUN_1035a660

undefined4 FUN_1035a660(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035a670 FUN_1035a670

void FUN_1035a670(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f6676;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UCanvas::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x98));
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x8c));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x80));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035a720 FUN_1035a720

void FUN_1035a720(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f66c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UCanvas::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x80));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x8c));
  local_4 = CONCAT31(local_4._1_3_,2);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x98));
  ExceptionList = local_c;
  return;
}


// ==== 1035a7c0 FUN_1035a7c0

void FUN_1035a7c0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  FName aFStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  iVar1 = *in_ECX;
  FName::FName(aFStack_18,(ushort *)L"Reset",1);
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1035a800 FUN_1035a800

void FUN_1035a800(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6716;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UCanvas::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x5c] = param_1[0x5c];
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(uint *)(in_ECX + 0x68) =
       *(uint *)(in_ECX + 0x68) ^ (*(uint *)(in_ECX + 0x68) ^ *(uint *)(param_1 + 0x68)) & 1;
  *(uint *)(in_ECX + 0x68) =
       (*(uint *)(param_1 + 0x68) ^ *(uint *)(in_ECX + 0x68)) & 2 ^ *(uint *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x80),(FStringNoInit *)(param_1 + 0x80));
  local_4._0_1_ = 1;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x8c),(FStringNoInit *)(param_1 + 0x8c));
  local_4 = CONCAT31(local_4._1_3_,2);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x98),(FStringNoInit *)(param_1 + 0x98));
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(uint *)(in_ECX + 0x120) =
       *(uint *)(in_ECX + 0x120) ^ (*(uint *)(in_ECX + 0x120) ^ *(uint *)(param_1 + 0x120)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x120) ^ *(uint *)(in_ECX + 0x120)) & 2 ^ *(uint *)(in_ECX + 0x120);
  *(uint *)(in_ECX + 0x120) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x120) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x120) = uVar1;
  *(uint *)(in_ECX + 0x120) = (*(uint *)(param_1 + 0x120) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  pUVar3 = param_1 + 0x168;
  pUVar4 = in_ECX + 0x168;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar3 = param_1 + 0x18c;
  pUVar4 = in_ECX + 0x18c;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(uint *)(in_ECX + 0x1cc) =
       *(uint *)(in_ECX + 0x1cc) ^ (*(uint *)(in_ECX + 0x1cc) ^ *(uint *)(param_1 + 0x1cc)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1cc) ^ *(uint *)(in_ECX + 0x1cc)) & 2 ^ *(uint *)(in_ECX + 0x1cc);
  *(uint *)(in_ECX + 0x1cc) = uVar1;
  *(uint *)(in_ECX + 0x1cc) = (*(uint *)(param_1 + 0x1cc) ^ uVar1) & 4 ^ uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 1035ada0 FUN_1035ada0

void FUN_1035ada0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x5c] = param_1[0x5c];
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(uint *)(in_ECX + 0x68) =
       *(uint *)(in_ECX + 0x68) ^ (*(uint *)(in_ECX + 0x68) ^ *(uint *)(param_1 + 0x68)) & 1;
  *(uint *)(in_ECX + 0x68) =
       (*(uint *)(param_1 + 0x68) ^ *(uint *)(in_ECX + 0x68)) & 2 ^ *(uint *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x80),(FStringNoInit *)(param_1 + 0x80));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x8c),(FStringNoInit *)(param_1 + 0x8c));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x98),(FStringNoInit *)(param_1 + 0x98));
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(uint *)(in_ECX + 0x120) =
       *(uint *)(in_ECX + 0x120) ^ (*(uint *)(in_ECX + 0x120) ^ *(uint *)(param_1 + 0x120)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x120) ^ *(uint *)(in_ECX + 0x120)) & 2 ^ *(uint *)(in_ECX + 0x120);
  *(uint *)(in_ECX + 0x120) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x120) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x120) = uVar1;
  *(uint *)(in_ECX + 0x120) = (*(uint *)(param_1 + 0x120) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
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
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(uint *)(in_ECX + 0x1cc) =
       *(uint *)(in_ECX + 0x1cc) ^ (*(uint *)(in_ECX + 0x1cc) ^ *(uint *)(param_1 + 0x1cc)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1cc) ^ *(uint *)(in_ECX + 0x1cc)) & 2 ^ *(uint *)(in_ECX + 0x1cc);
  *(uint *)(in_ECX + 0x1cc) = uVar1;
  *(uint *)(in_ECX + 0x1cc) = (*(uint *)(param_1 + 0x1cc) ^ uVar1) & 4 ^ uVar1;
  return;
}


// ==== 1035b3b0 FUN_1035b3b0

void FUN_1035b3b0(byte param_1)

{
  UCanvas *in_ECX;
  
  UCanvas::~UCanvas(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d0);
  }
  return;
}


// ==== 1035b3e0 FUN_1035b3e0

UCanvas * FUN_1035b3e0(byte param_1)

{
  UCanvas *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1d0,*(int *)(in_ECX + -4),UCanvas::~UCanvas);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCanvas::~UCanvas(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1d0);
  }
  return in_ECX;
}


// ==== 1035b460 FUN_1035b460

UClass * FUN_1035b460(void)

{
  return &UL2TextureFactory::PrivateStaticClass;
}


// ==== 1035b470 FUN_1035b470

void FUN_1035b470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2TextureFactory::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035b4b0 FUN_1035b4b0

undefined4 FUN_1035b4b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035b4c0 FUN_1035b4c0

void FUN_1035b4c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6739;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2TextureFactory::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UFactory::~UFactory((UFactory *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035b530 FUN_1035b530

void FUN_1035b530(UL2TextureFactory *param_1)

{
  if (param_1 != (UL2TextureFactory *)0x0) {
    UL2TextureFactory::UL2TextureFactory(param_1);
    return;
  }
  return;
}


// ==== 1035b550 FUN_1035b550

void FUN_1035b550(UFactory *param_1)

{
  UFactory *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6759;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UFactory::UFactory(in_ECX,param_1);
  *(undefined ***)in_ECX = UL2TextureFactory::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035b5c0 FUN_1035b5c0

void FUN_1035b5c0(UFactory *param_1)

{
  UFactory *in_ECX;
  
  UFactory::operator=(in_ECX,param_1);
  return;
}


// ==== 1035b5e0 FUN_1035b5e0

void FUN_1035b5e0(byte param_1)

{
  UL2TextureFactory *in_ECX;
  
  UL2TextureFactory::~UL2TextureFactory(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return;
}


// ==== 1035b610 FUN_1035b610

UL2TextureFactory * FUN_1035b610(byte param_1)

{
  UL2TextureFactory *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x74,*(int *)(in_ECX + -4),UL2TextureFactory::~UL2TextureFactory);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2TextureFactory::~UL2TextureFactory(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return in_ECX;
}


// ==== 1035b690 FUN_1035b690

void FUN_1035b690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_4;
  *in_ECX = param_1;
  in_ECX[4] = param_5;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1035b6c0 FUN_1035b6c0

void FUN_1035b6c0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 1035b6f0 FUN_1035b6f0

void FUN_1035b6f0(void)

{
  return;
}


// ==== 1035b700 FUN_1035b700

void FUN_1035b700(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FHitObserver::vftable;
  return;
}


// ==== 1035b710 FUN_1035b710

void FUN_1035b710(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FHitObserver::vftable;
  return;
}


// ==== 1035b720 FUN_1035b720

void FUN_1035b720(void)

{
  return;
}


// ==== 1035b730 FUN_1035b730

void FUN_1035b730(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6788;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035b780 FUN_1035b780

void FUN_1035b780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UViewport::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1035b7c0 FUN_1035b7c0

undefined4 FUN_1035b7c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035b7d0 CORE.DLL::UObject::GetOuter thunk -> EXTERNAL:000000dc

// ==== 1035b7e0 FUN_1035b7e0

void FUN_1035b7e0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x108) != 0) {
    *(int *)(in_ECX + 0x10c) = param_1;
    if (param_1 != 0) {
      iVar1 = *(int *)(in_ECX + 0x3c);
      *(undefined4 *)(iVar1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined4 *)(iVar1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
      iVar1 = *(int *)(in_ECX + 0x3c);
      *(undefined4 *)(iVar1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
      *(undefined4 *)(iVar1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined4 *)(iVar1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
    }
  }
  return;
}


// ==== 1035b860 FUN_1035b860

void FUN_1035b860(void)

{
  return;
}


// ==== 1035b870 FUN_1035b870

undefined4 FUN_1035b870(void)

{
  return 0;
}


// ==== 1035b880 FUN_1035b880

int FUN_1035b880(int param_1,int param_2)

{
  int in_ECX;
  
  return (*(int *)(in_ECX + 0x150) * param_2 + param_1) * *(int *)(in_ECX + 0xa4) +
         *(int *)(in_ECX + 0x14c);
}


// ==== 1035b8b0 FUN_1035b8b0

undefined4 FUN_1035b8b0(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     ((((iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x5b8), iVar1 == 0xd || (iVar1 == 0xe)) ||
       (iVar1 == 0xf)) || ((iVar1 == 0x10 || (iVar1 == 0x11)))))) {
    return 1;
  }
  return 0;
}


// ==== 1035b8f0 FUN_1035b8f0

undefined4 FUN_1035b8f0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  if ((iVar1 != 0) &&
     ((((((iVar2 = *(int *)(iVar1 + 0x5b8), iVar2 == 1 || (iVar2 == 2)) || (iVar2 == 3)) ||
        ((iVar2 == 4 || (iVar2 == 5)))) || ((iVar2 == 6 || ((iVar2 == 7 || (iVar2 == 0x1f)))))) ||
      ((iVar2 == 0x12 && (*(int *)(iVar1 + 0x5b0) != 0)))))) {
    return 1;
  }
  return 0;
}


// ==== 1035b950 FUN_1035b950

undefined4 FUN_1035b950(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     (((iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x5b8), iVar1 == 0xd || (iVar1 == 0x23)) ||
      (iVar1 == 0x24)))) {
    return 1;
  }
  return 0;
}


// ==== 1035b980 FUN_1035b980

undefined4 FUN_1035b980(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) && ((*(uint *)(*(int *)(in_ECX + 0x3c) + 0x5ac) & 0x4800) != 0)
     ) {
    return 1;
  }
  return 0;
}


// ==== 1035b9b0 FUN_1035b9b0

undefined4 FUN_1035b9b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  if ((iVar1 != 0) &&
     (((((iVar2 = *(int *)(iVar1 + 0x5b8), iVar2 == 5 || (iVar2 == 7)) || (iVar2 == 8)) ||
       (iVar2 == 0x1f)) ||
      (((iVar2 == 0x12 && (*(int *)(iVar1 + 0x5b0) != 0)) ||
       ((iVar2 == 0x23 || ((iVar2 == 0x14 || (iVar2 == 0x1b)))))))))) {
    return 1;
  }
  return 0;
}


// ==== 1035ba10 FUN_1035ba10

undefined4 FUN_1035ba10(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(int *)(*(int *)(in_ECX + 0x3c) + 0x5b8) == 8)) {
    return 1;
  }
  return 0;
}


// ==== 1035ba30 FUN_1035ba30

undefined4 FUN_1035ba30(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     (((((iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x5b8), iVar1 == 0xd || (iVar1 == 0xe)) ||
        (iVar1 == 0xf)) ||
       (((iVar1 == 0x10 || (iVar1 == 0x11)) || ((iVar1 == 1 || ((iVar1 == 2 || (iVar1 == 3))))))))
      || ((iVar1 == 4 || ((((iVar1 == 5 || (iVar1 == 6)) || (iVar1 == 7)) || (iVar1 == 8)))))))) {
    return 1;
  }
  return 0;
}


// ==== 1035baa0 FUN_1035baa0

void FUN_1035baa0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1a4) = param_1;
  return;
}


// ==== 1035bab0 FUN_1035bab0

void FUN_1035bab0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1a8) = param_1;
  return;
}


// ==== 1035bac0 FUN_1035bac0

void FUN_1035bac0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FRenderTarget::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035bb50 FUN_1035bb50

void FUN_1035bb50(void)

{
  return;
}


// ==== 1035bb90 FUN_1035bb90

wchar_t * FUN_1035bb90(void)

{
  return L"HHitProxy";
}


// ==== 1035bba0 FUN_1035bba0

bool FUN_1035bba0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
  return iVar1 == 0;
}


// ==== 1035bbd0 FUN_1035bbd0

void FUN_1035bbd0(undefined4 *param_1)

{
  (*(code *)**(undefined4 **)*param_1)(param_1);
  return;
}


// ==== 1035bbf0 FUN_1035bbf0

undefined4 FUN_1035bbf0(void)

{
  return 0;
}


// ==== 1035bc00 FUN_1035bc00

void FUN_1035bc00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  return;
}


// ==== 1035bc10 FUN_1035bc10

void FUN_1035bc10(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 1035bc40 FUN_1035bc40

void FUN_1035bc40(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 1035bc70 FUN_1035bc70

UClass * FUN_1035bc70(void)

{
  return &UClient::PrivateStaticClass;
}


// ==== 1035bc80 FUN_1035bc80

void FUN_1035bc80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UClient::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return;
}


// ==== 1035bcc0 FUN_1035bcc0

undefined4 FUN_1035bcc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035bcd0 FUN_1035bcd0

UClass * FUN_1035bcd0(void)

{
  return &UCameraEffect::PrivateStaticClass;
}


// ==== 1035bce0 FUN_1035bce0

void FUN_1035bce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UCameraEffect::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035bd20 FUN_1035bd20

undefined4 FUN_1035bd20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035bd30 FUN_1035bd30

void FUN_1035bd30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f67c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035bda0 FUN_1035bda0

void FUN_1035bda0(void)

{
  return;
}


// ==== 1035bdb0 FUN_1035bdb0

void FUN_1035bdb0(void)

{
  return;
}


// ==== 1035bdc0 FUN_1035bdc0

void FUN_1035bdc0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f67e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035be20 FUN_1035be20

void FUN_1035be20(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 1035bea0 FUN_1035bea0

void FUN_1035bea0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  return;
}


// ==== 1035bee0 FUN_1035bee0

void FUN_1035bee0(byte param_1)

{
  UCameraEffect *in_ECX;
  
  UCameraEffect::~UCameraEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c);
  }
  return;
}


// ==== 1035bf10 FUN_1035bf10

UCameraEffect * FUN_1035bf10(byte param_1)

{
  UCameraEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3c,*(int *)(in_ECX + -4),UCameraEffect::~UCameraEffect)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCameraEffect::~UCameraEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c);
  }
  return in_ECX;
}


// ==== 1035bf90 FUN_1035bf90

UClass * FUN_1035bf90(void)

{
  return &UMotionBlur::PrivateStaticClass;
}


// ==== 1035bfa0 FUN_1035bfa0

void FUN_1035bfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UMotionBlur::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1035bfe0 FUN_1035bfe0

undefined4 FUN_1035bfe0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035bff0 FUN_1035bff0

void FUN_1035bff0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMotionBlur::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UCameraEffect::~UCameraEffect((UCameraEffect *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035c060 FUN_1035c060

void FUN_1035c060(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6851;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined ***)in_ECX = UMotionBlur::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035c0d0 FUN_1035c0d0

void FUN_1035c0d0(UCameraEffect *param_1)

{
  UCameraEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCameraEffect::UCameraEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = UMotionBlur::vftable;
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 1035c160 FUN_1035c160

void FUN_1035c160(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}


// ==== 1035c1b0 FUN_1035c1b0

void FUN_1035c1b0(byte param_1)

{
  UMotionBlur *in_ECX;
  
  UMotionBlur::~UMotionBlur(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 1035c1e0 FUN_1035c1e0

UMotionBlur * FUN_1035c1e0(byte param_1)

{
  UMotionBlur *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),UMotionBlur::~UMotionBlur);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMotionBlur::~UMotionBlur(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 1035c260 FUN_1035c260

UClass * FUN_1035c260(void)

{
  return &UUnderWaterEffect::PrivateStaticClass;
}


// ==== 1035c270 FUN_1035c270

void FUN_1035c270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UUnderWaterEffect::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035c2b0 FUN_1035c2b0

undefined4 FUN_1035c2b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035c2c0 FUN_1035c2c0

void FUN_1035c2c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UUnderWaterEffect::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMotionBlur::~UMotionBlur((UMotionBlur *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035c330 FUN_1035c330

void FUN_1035c330(UUnderWaterEffect *param_1)

{
  if (param_1 != (UUnderWaterEffect *)0x0) {
    UUnderWaterEffect::UUnderWaterEffect(param_1);
    return;
  }
  return;
}


// ==== 1035c350 FUN_1035c350

void FUN_1035c350(UMotionBlur *param_1)

{
  UMotionBlur *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f68b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMotionBlur::UMotionBlur(in_ECX,param_1);
  *(undefined ***)in_ECX = UUnderWaterEffect::vftable;
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  ExceptionList = local_c;
  return;
}


// ==== 1035c3f0 FUN_1035c3f0

void FUN_1035c3f0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  in_ECX[0x3c] = param_1[0x3c];
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  return;
}


// ==== 1035c480 FUN_1035c480

void FUN_1035c480(byte param_1)

{
  UUnderWaterEffect *in_ECX;
  
  UUnderWaterEffect::~UUnderWaterEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return;
}


// ==== 1035c4b0 FUN_1035c4b0

UUnderWaterEffect * FUN_1035c4b0(byte param_1)

{
  UUnderWaterEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UUnderWaterEffect::~UUnderWaterEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUnderWaterEffect::~UUnderWaterEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return in_ECX;
}


// ==== 1035c530 FUN_1035c530

UClass * FUN_1035c530(void)

{
  return &UBlackWhite::PrivateStaticClass;
}


// ==== 1035c540 FUN_1035c540

void FUN_1035c540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UBlackWhite::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1035c580 FUN_1035c580

undefined4 FUN_1035c580(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035c590 FUN_1035c590

void FUN_1035c590(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f68d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UBlackWhite::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UCameraEffect::~UCameraEffect((UCameraEffect *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035c600 FUN_1035c600

void FUN_1035c600(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6901;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined ***)in_ECX = UBlackWhite::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035c670 FUN_1035c670

void FUN_1035c670(UCameraEffect *param_1)

{
  UCameraEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCameraEffect::UCameraEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = UBlackWhite::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035c6e0 FUN_1035c6e0

void FUN_1035c6e0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  return;
}


// ==== 1035c720 FUN_1035c720

void FUN_1035c720(byte param_1)

{
  UBlackWhite *in_ECX;
  
  UBlackWhite::~UBlackWhite(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c);
  }
  return;
}


// ==== 1035c750 FUN_1035c750

UBlackWhite * FUN_1035c750(byte param_1)

{
  UBlackWhite *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3c,*(int *)(in_ECX + -4),UBlackWhite::~UBlackWhite);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBlackWhite::~UBlackWhite(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c);
  }
  return in_ECX;
}


// ==== 1035c7d0 FUN_1035c7d0

UClass * FUN_1035c7d0(void)

{
  return &UFadeBlackWhite::PrivateStaticClass;
}


// ==== 1035c7e0 FUN_1035c7e0

void FUN_1035c7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UFadeBlackWhite::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035c820 FUN_1035c820

undefined4 FUN_1035c820(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035c830 FUN_1035c830

void FUN_1035c830(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFadeBlackWhite::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UCameraEffect::~UCameraEffect((UCameraEffect *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035c8a0 FUN_1035c8a0

void FUN_1035c8a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6971;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined ***)in_ECX = UFadeBlackWhite::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035c910 FUN_1035c910

void FUN_1035c910(UCameraEffect *param_1)

{
  UCameraEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCameraEffect::UCameraEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = UFadeBlackWhite::vftable;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 1035c9a0 FUN_1035c9a0

void FUN_1035c9a0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}


// ==== 1035c9f0 FUN_1035c9f0

void FUN_1035c9f0(byte param_1)

{
  UFadeBlackWhite *in_ECX;
  
  UFadeBlackWhite::~UFadeBlackWhite(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 1035ca20 FUN_1035ca20

UFadeBlackWhite * FUN_1035ca20(byte param_1)

{
  UFadeBlackWhite *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x4c,*(int *)(in_ECX + -4),UFadeBlackWhite::~UFadeBlackWhite);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFadeBlackWhite::~UFadeBlackWhite(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 1035caa0 FUN_1035caa0

UClass * FUN_1035caa0(void)

{
  return &UHDREffect::PrivateStaticClass;
}


// ==== 1035cab0 FUN_1035cab0

void FUN_1035cab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UHDREffect::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 1035caf0 FUN_1035caf0

undefined4 FUN_1035caf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035cb00 FUN_1035cb00

void FUN_1035cb00(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f69b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UHDREffect::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UCameraEffect::~UCameraEffect((UCameraEffect *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035cb70 FUN_1035cb70

void FUN_1035cb70(UHDREffect *param_1)

{
  if (param_1 != (UHDREffect *)0x0) {
    UHDREffect::UHDREffect(param_1);
    return;
  }
  return;
}


// ==== 1035cb90 FUN_1035cb90

void FUN_1035cb90(UCameraEffect *param_1)

{
  UCameraEffect *in_ECX;
  int iVar1;
  UCameraEffect *pUVar2;
  UCameraEffect *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f69d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCameraEffect::UCameraEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = UHDREffect::vftable;
  pUVar2 = param_1 + 0x3c;
  pUVar3 = in_ECX + 0x3c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  ExceptionList = local_c;
  return;
}


// ==== 1035cc50 FUN_1035cc50

void FUN_1035cc50(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  return;
}


// ==== 1035cd00 FUN_1035cd00

void FUN_1035cd00(byte param_1)

{
  UHDREffect *in_ECX;
  
  UHDREffect::~UHDREffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1035cd30 FUN_1035cd30

UHDREffect * FUN_1035cd30(byte param_1)

{
  UHDREffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x78,*(int *)(in_ECX + -4),UHDREffect::~UHDREffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UHDREffect::~UHDREffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1035cdb0 FUN_1035cdb0

UClass * FUN_1035cdb0(void)

{
  return &UGlowEffect::PrivateStaticClass;
}


// ==== 1035cdc0 FUN_1035cdc0

void FUN_1035cdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UGlowEffect::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1035ce00 FUN_1035ce00

undefined4 FUN_1035ce00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035ce10 FUN_1035ce10

void FUN_1035ce10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f69f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UGlowEffect::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UCameraEffect::~UCameraEffect((UCameraEffect *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035ce80 FUN_1035ce80

void FUN_1035ce80(UGlowEffect *param_1)

{
  if (param_1 != (UGlowEffect *)0x0) {
    UGlowEffect::UGlowEffect(param_1);
    return;
  }
  return;
}


// ==== 1035cea0 FUN_1035cea0

void FUN_1035cea0(UCameraEffect *param_1)

{
  UCameraEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCameraEffect::UCameraEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = UGlowEffect::vftable;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1035cf80 FUN_1035cf80

void FUN_1035cf80(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1035d030 FUN_1035d030

void FUN_1035d030(byte param_1)

{
  UGlowEffect *in_ECX;
  
  UGlowEffect::~UGlowEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1035d060 FUN_1035d060

UGlowEffect * FUN_1035d060(byte param_1)

{
  UGlowEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x7c,*(int *)(in_ECX + -4),UGlowEffect::~UGlowEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UGlowEffect::~UGlowEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1035d0e0 FUN_1035d0e0

UClass * FUN_1035d0e0(void)

{
  return &UCameraOverlay::PrivateStaticClass;
}


// ==== 1035d0f0 FUN_1035d0f0

void FUN_1035d0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UCameraOverlay::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035d130 FUN_1035d130

undefined4 FUN_1035d130(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035d140 FUN_1035d140

void FUN_1035d140(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UCameraOverlay::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UCameraEffect::~UCameraEffect((UCameraEffect *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035d1b0 FUN_1035d1b0

void FUN_1035d1b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6a61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UCameraEffect::vftable;
  *(undefined ***)in_ECX = UCameraOverlay::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035d220 FUN_1035d220

void FUN_1035d220(UCameraEffect *param_1)

{
  UCameraEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UCameraEffect::UCameraEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = UCameraOverlay::vftable;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 1035d2a0 FUN_1035d2a0

void FUN_1035d2a0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)(in_ECX + 0x38) =
       *(uint *)(in_ECX + 0x38) ^ (*(uint *)(param_1 + 0x38) ^ *(uint *)(in_ECX + 0x38)) & 1;
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return;
}


// ==== 1035d2f0 FUN_1035d2f0

void FUN_1035d2f0(byte param_1)

{
  UCameraOverlay *in_ECX;
  
  UCameraOverlay::~UCameraOverlay(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return;
}


// ==== 1035d320 FUN_1035d320

UCameraOverlay * FUN_1035d320(byte param_1)

{
  UCameraOverlay *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x44,*(int *)(in_ECX + -4),UCameraOverlay::~UCameraOverlay);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCameraOverlay::~UCameraOverlay(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return in_ECX;
}


// ==== 1035d3a0 FUN_1035d3a0

UClass * FUN_1035d3a0(void)

{
  return &USubActionCameraEffect::PrivateStaticClass;
}


// ==== 1035d3b0 FUN_1035d3b0

void FUN_1035d3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USubActionCameraEffect::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035d3f0 FUN_1035d3f0

undefined4 FUN_1035d3f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035d400 FUN_1035d400

void FUN_1035d400(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USubActionCameraEffect::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMatSubAction::~UMatSubAction((UMatSubAction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035d470 FUN_1035d470

void FUN_1035d470(void)

{
  UMatSubAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatSubAction::UMatSubAction(in_ECX);
  *(undefined ***)in_ECX = USubActionCameraEffect::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035d4d0 FUN_1035d4d0

void FUN_1035d4d0(UMatSubAction *param_1)

{
  UMatSubAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatSubAction::UMatSubAction(in_ECX,param_1);
  *(undefined ***)in_ECX = USubActionCameraEffect::vftable;
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(uint *)(in_ECX + 0x68) =
       *(uint *)(in_ECX + 0x68) ^ (*(uint *)(param_1 + 0x68) ^ *(uint *)(in_ECX + 0x68)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 1035d560 FUN_1035d560

void FUN_1035d560(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x40] = param_1[0x40];
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x44),(FStringNoInit *)(param_1 + 0x44));
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(uint *)(in_ECX + 0x68) =
       *(uint *)(in_ECX + 0x68) ^ (*(uint *)(param_1 + 0x68) ^ *(uint *)(in_ECX + 0x68)) & 1;
  return;
}


// ==== 1035d5f0 FUN_1035d5f0

void FUN_1035d5f0(byte param_1)

{
  USubActionCameraEffect *in_ECX;
  
  USubActionCameraEffect::~USubActionCameraEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x6c);
  }
  return;
}


// ==== 1035d620 FUN_1035d620

USubActionCameraEffect * FUN_1035d620(byte param_1)

{
  USubActionCameraEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x6c,*(int *)(in_ECX + -4),USubActionCameraEffect::~USubActionCameraEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USubActionCameraEffect::~USubActionCameraEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x6c);
  }
  return in_ECX;
}


// ==== 1035d6a0 FUN_1035d6a0

void FUN_1035d6a0(void)

{
  return;
}


// ==== 1035d6b0 FUN_1035d6b0

undefined4 FUN_1035d6b0(void)

{
  return 0;
}


// ==== 1035d6c0 FUN_1035d6c0

undefined4 FUN_1035d6c0(void)

{
  return 0;
}


// ==== 1035d6d0 FUN_1035d6d0

undefined4 FUN_1035d6d0(void)

{
  return 0;
}


// ==== 1035d6e0 FUN_1035d6e0

undefined4 FUN_1035d6e0(void)

{
  return 0;
}


// ==== 1035d6f0 FUN_1035d6f0

undefined4 FUN_1035d6f0(void)

{
  return 0;
}


// ==== 1035d700 FUN_1035d700

undefined4 FUN_1035d700(void)

{
  return 0;
}


// ==== 1035d710 FUN_1035d710

undefined4 FUN_1035d710(void)

{
  return 0;
}


// ==== 1035d720 FUN_1035d720

void FUN_1035d720(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = FSceneNode::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x14);
  puVar3 = in_ECX + 5;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x54);
  puVar3 = in_ECX + 0x15;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x94);
  puVar3 = in_ECX + 0x25;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd4);
  puVar3 = in_ECX + 0x35;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x114);
  puVar3 = in_ECX + 0x45;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x154);
  puVar3 = in_ECX + 0x55;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x65] = *(undefined4 *)(param_1 + 0x194);
  in_ECX[0x66] = *(undefined4 *)(param_1 + 0x198);
  in_ECX[0x67] = *(undefined4 *)(param_1 + 0x19c);
  in_ECX[0x68] = *(undefined4 *)(param_1 + 0x1a0);
  in_ECX[0x69] = *(undefined4 *)(param_1 + 0x1a4);
  in_ECX[0x6a] = *(undefined4 *)(param_1 + 0x1a8);
  in_ECX[0x6b] = *(undefined4 *)(param_1 + 0x1ac);
  in_ECX[0x6c] = *(undefined4 *)(param_1 + 0x1b0);
  in_ECX[0x6d] = *(undefined4 *)(param_1 + 0x1b4);
  in_ECX[0x6e] = *(undefined4 *)(param_1 + 0x1b8);
  in_ECX[0x6f] = *(undefined4 *)(param_1 + 0x1bc);
  in_ECX[0x70] = *(undefined4 *)(param_1 + 0x1c0);
  in_ECX[0x71] = *(undefined4 *)(param_1 + 0x1c4);
  in_ECX[0x72] = *(undefined4 *)(param_1 + 0x1c8);
  return;
}


// ==== 1035d910 FUN_1035d910

void FUN_1035d910(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)(in_ECX + 0x14);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x54);
  puVar3 = (undefined4 *)(in_ECX + 0x54);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x94);
  puVar3 = (undefined4 *)(in_ECX + 0x94);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd4);
  puVar3 = (undefined4 *)(in_ECX + 0xd4);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x114);
  puVar3 = (undefined4 *)(in_ECX + 0x114);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x154);
  puVar3 = (undefined4 *)(in_ECX + 0x154);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  return;
}


// ==== 1035da90 FUN_1035da90

void FUN_1035da90(byte param_1)

{
  FSceneNode *in_ECX;
  
  FSceneNode::~FSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1035dac0 FUN_1035dac0

FSceneNode * FUN_1035dac0(byte param_1)

{
  FSceneNode *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1cc,*(int *)(in_ECX + -4),FSceneNode::~FSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FSceneNode::~FSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1035db40 FUN_1035db40

void FUN_1035db40(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  *(undefined1 *)(in_ECX + 0xd) = *(undefined1 *)(param_1 + 0xd);
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  return;
}


// ==== 1035dc30 FUN_1035dc30

void FUN_1035dc30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1035dc50 FUN_1035dc50

void FUN_1035dc50(void)

{
  FDynamicLight *in_ECX;
  
  FDynamicLight::FDynamicLight(in_ECX,(ALight *)0x0);
  return;
}


// ==== 1035dc60 FUN_1035dc60

void FUN_1035dc60(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6b98;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x48));
  local_4 = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 1035dcd0 FUN_1035dcd0

void FUN_1035dcd0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  puVar2 = param_1 + 2;
  puVar3 = in_ECX + 2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x12;
  puVar3 = in_ECX + 0x12;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 1;
  in_ECX[0x22] = param_1[0x22];
  puVar2 = param_1 + 0x23;
  puVar3 = in_ECX + 0x23;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FSphere::FSphere((FSphere *)(in_ECX + 0x2a),(FSphere *)(param_1 + 0x2a));
  in_ECX[0x2e] = param_1[0x2e];
  in_ECX[0x2f] = param_1[0x2f];
  in_ECX[0x30] = param_1[0x30];
  in_ECX[0x31] = param_1[0x31];
  in_ECX[0x32] = param_1[0x32];
  puVar2 = param_1 + 0x33;
  puVar3 = in_ECX + 0x33;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x3a] = param_1[0x3a];
  in_ECX[0x3b] = param_1[0x3b];
  in_ECX[0x3c] = param_1[0x3c];
  in_ECX[0x3d] = param_1[0x3d];
  ExceptionList = local_c;
  return;
}


// ==== 1035de40 FUN_1035de40

void FUN_1035de40(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1035de60 FUN_1035de60

undefined4 FUN_1035de60(void)

{
  return 1;
}


// ==== 1035de70 FUN_1035de70

void FUN_1035de70(void)

{
  return;
}


// ==== 1035de80 FUN_1035de80

void FUN_1035de80(FSceneNode *param_1)

{
  FSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FSceneNode::FSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FLevelSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  ExceptionList = local_c;
  return;
}


// ==== 1035df50 FUN_1035df50

void FUN_1035df50(FSceneNode *param_1)

{
  FSceneNode *in_ECX;
  
  FSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  return;
}


// ==== 1035dfd0 FUN_1035dfd0

void FUN_1035dfd0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1035e000 FUN_1035e000

FLevelSceneNode * FUN_1035e000(byte param_1)

{
  FLevelSceneNode *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1e4,*(int *)(in_ECX + -4),FLevelSceneNode::~FLevelSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1035e080 FUN_1035e080

void FUN_1035e080(void)

{
  return;
}


// ==== 1035e090 FUN_1035e090

void FUN_1035e090(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FCameraSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  ExceptionList = local_c;
  return;
}


// ==== 1035e140 FUN_1035e140

void FUN_1035e140(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  return;
}


// ==== 1035e1a0 FUN_1035e1a0

void FUN_1035e1a0(byte param_1)

{
  FCameraSceneNode *in_ECX;
  
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1035e1d0 FUN_1035e1d0

FCameraSceneNode * FUN_1035e1d0(byte param_1)

{
  FCameraSceneNode *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,500,*(int *)(in_ECX + -4),FCameraSceneNode::~FCameraSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1035e250 FUN_1035e250

void FUN_1035e250(void)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6c28;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035e2a0 FUN_1035e2a0

void FUN_1035e2a0(FCameraSceneNode *param_1)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6c48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FCameraSceneNode::FCameraSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FPlayerSceneNode::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035e310 FUN_1035e310

void FUN_1035e310(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  return;
}


// ==== 1035e370 FUN_1035e370

void FUN_1035e370(byte param_1)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6c68;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1035e3e0 FUN_1035e3e0

FCameraSceneNode * FUN_1035e3e0(byte param_1)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6c88;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,500,*(int *)(in_ECX + -4),FPlayerSceneNode::~FPlayerSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1035e4b0 FUN_1035e4b0

void FUN_1035e4b0(void)

{
  return;
}


// ==== 1035e4c0 FUN_1035e4c0

void FUN_1035e4c0(void)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6ca8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035e510 FUN_1035e510

void FUN_1035e510(FCameraSceneNode *param_1)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FCameraSceneNode::FCameraSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FActorSceneNode::vftable;
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  ExceptionList = local_c;
  return;
}


// ==== 1035e590 FUN_1035e590

void FUN_1035e590(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  return;
}


// ==== 1035e600 FUN_1035e600

void FUN_1035e600(byte param_1)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6ce8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1035e670 FUN_1035e670

FCameraSceneNode * FUN_1035e670(byte param_1)

{
  FCameraSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6d08;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x1f8,*(int *)(in_ECX + -4),FActorSceneNode::~FActorSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FCameraSceneNode::~FCameraSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1035e740 FUN_1035e740

void FUN_1035e740(void)

{
  return;
}


// ==== 1035e750 FUN_1035e750

void FUN_1035e750(void)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6d28;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035e7a0 FUN_1035e7a0

void FUN_1035e7a0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FSkySceneNode::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035e810 FUN_1035e810

void FUN_1035e810(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  return;
}


// ==== 1035e830 FUN_1035e830

void FUN_1035e830(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6d68;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1035e8a0 FUN_1035e8a0

FLevelSceneNode * FUN_1035e8a0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6d88;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x1e4,*(int *)(in_ECX + -4),FSkySceneNode::~FSkySceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1035e970 FUN_1035e970

void FUN_1035e970(void)

{
  return;
}


// ==== 1035e980 FUN_1035e980

void FUN_1035e980(void)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6da8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035e9d0 FUN_1035e9d0

void FUN_1035e9d0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FMirrorSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  ExceptionList = local_c;
  return;
}


// ==== 1035ea50 FUN_1035ea50

void FUN_1035ea50(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  return;
}


// ==== 1035ea80 FUN_1035ea80

void FUN_1035ea80(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6de8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1035eaf0 FUN_1035eaf0

FLevelSceneNode * FUN_1035eaf0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6e08;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x1e8,*(int *)(in_ECX + -4),FMirrorSceneNode::~FMirrorSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1035ebc0 FUN_1035ebc0

void FUN_1035ebc0(void)

{
  return;
}


// ==== 1035ebd0 FUN_1035ebd0

void FUN_1035ebd0(byte param_1)

{
  FWaterSheetSceneNode *in_ECX;
  
  FWaterSheetSceneNode::~FWaterSheetSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1035ec00 FUN_1035ec00

FWaterSheetSceneNode * FUN_1035ec00(byte param_1)

{
  FWaterSheetSceneNode *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x218,*(int *)(in_ECX + -4),FWaterSheetSceneNode::~FWaterSheetSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FWaterSheetSceneNode::~FWaterSheetSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1035ec80 FUN_1035ec80

void FUN_1035ec80(void)

{
  return;
}


// ==== 1035ec90 FUN_1035ec90

void FUN_1035ec90(void)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6e28;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035ece0 FUN_1035ece0

void FUN_1035ece0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1);
  *(undefined ***)in_ECX = FWarpZoneSceneNode::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035ed50 FUN_1035ed50

void FUN_1035ed50(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  return;
}


// ==== 1035ed70 FUN_1035ed70

void FUN_1035ed70(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6e68;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1035ede0 FUN_1035ede0

FLevelSceneNode * FUN_1035ede0(byte param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6e88;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x1e4,*(int *)(in_ECX + -4),FWarpZoneSceneNode::~FWarpZoneSceneNode);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FLevelSceneNode::~FLevelSceneNode(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1035eeb0 FUN_1035eeb0

wchar_t * FUN_1035eeb0(void)

{
  return L"HLevelObject";
}


// ==== 1035eec0 FUN_1035eec0

undefined4 FUN_1035eec0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HLevelObject",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035ef10 FUN_1035ef10

void FUN_1035ef10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HLevelObject::vftable;
  in_ECX[3] = param_1;
  return;
}


// ==== 1035ef30 FUN_1035ef30

undefined4 FUN_1035ef30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1035ef40 FUN_1035ef40

void FUN_1035ef40(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HLevelObject::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035ef80 FUN_1035ef80

void FUN_1035ef80(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035efb0 FUN_1035efb0

wchar_t * FUN_1035efb0(void)

{
  return L"HBspSurf";
}


// ==== 1035efc0 FUN_1035efc0

undefined4 FUN_1035efc0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HBspSurf",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f010 FUN_1035f010

void FUN_1035f010(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HBspSurf::vftable;
  in_ECX[3] = param_1;
  return;
}


// ==== 1035f030 FUN_1035f030

void FUN_1035f030(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HBspSurf::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f070 FUN_1035f070

void FUN_1035f070(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f0a0 FUN_1035f0a0

wchar_t * FUN_1035f0a0(void)

{
  return L"HActor";
}


// ==== 1035f0b0 FUN_1035f0b0

undefined4 FUN_1035f0b0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HActor",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f100 FUN_1035f100

void FUN_1035f100(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HActor::vftable;
  in_ECX[3] = param_1;
  return;
}


// ==== 1035f120 FUN_1035f120

undefined4 FUN_1035f120(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1035f130 FUN_1035f130

void FUN_1035f130(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HActor::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f170 FUN_1035f170

void FUN_1035f170(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f1a0 FUN_1035f1a0

wchar_t * FUN_1035f1a0(void)

{
  return L"HCoords";
}


// ==== 1035f1b0 FUN_1035f1b0

undefined4 FUN_1035f1b0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HCoords",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f200 FUN_1035f200

void FUN_1035f200(FSceneNode *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *in_ECX;
  undefined1 local_c [12];
  
  *in_ECX = HCoords::vftable;
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(iVar6 + 0x178);
  iVar8 = *(int *)(iVar6 + 0x94);
  iVar9 = *(int *)(iVar6 + 0x170);
  iVar10 = *(int *)(iVar6 + 0x17c);
  iVar11 = *(int *)(iVar6 + 0x98);
  iVar6 = *(int *)(iVar6 + 0x174);
  in_ECX[3] = *(undefined4 *)(param_1 + 0x194);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x198);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x19c);
  if ((*(int *)(*(int *)(param_1 + 4) + 0x3c) == 0) ||
     ((((iVar12 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x5b8), iVar12 != 0xd &&
        (iVar12 != 0xe)) && (iVar12 != 0xf)) && ((iVar12 != 0x10 && (iVar12 != 0x11)))))) {
    uVar1 = *(undefined4 *)NEAR_CLIPPING_PLANE_exref;
  }
  else {
    uVar1 = 0x3f800000;
  }
  pfVar13 = (float *)FSceneNode::Deproject
                               (param_1,local_c,
                                (float)((iVar7 / 2 + iVar9) - iVar8 / 2) / ((float)iVar8 * 0.5),
                                -((float)((iVar10 / 2 - iVar11 / 2) + iVar6) / ((float)iVar11 * 0.5)
                                 ),0,uVar1);
  fVar2 = pfVar13[1];
  fVar3 = *(float *)(param_1 + 0x198);
  fVar4 = pfVar13[2];
  fVar5 = *(float *)(param_1 + 0x19c);
  in_ECX[6] = *pfVar13 - *(float *)(param_1 + 0x194);
  in_ECX[7] = fVar2 - fVar3;
  in_ECX[8] = fVar4 - fVar5;
  return;
}


// ==== 1035f3b0 FUN_1035f3b0

void FUN_1035f3b0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HCoords::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  return;
}


// ==== 1035f410 FUN_1035f410

void FUN_1035f410(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


// ==== 1035f470 FUN_1035f470

wchar_t * FUN_1035f470(void)

{
  return L"HTerrain";
}


// ==== 1035f480 FUN_1035f480

undefined4 FUN_1035f480(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HTerrain",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f4d0 FUN_1035f4d0

void FUN_1035f4d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HTerrain::vftable;
  in_ECX[3] = param_1;
  return;
}


// ==== 1035f4f0 FUN_1035f4f0

undefined4 FUN_1035f4f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1035f500 FUN_1035f500

void FUN_1035f500(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HTerrain::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f540 FUN_1035f540

void FUN_1035f540(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f570 FUN_1035f570

wchar_t * FUN_1035f570(void)

{
  return L"HTerrainToolLayer";
}


// ==== 1035f580 FUN_1035f580

undefined4 FUN_1035f580(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HTerrainToolLayer",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f5d0 FUN_1035f5d0

void FUN_1035f5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *in_ECX = HTerrainToolLayer::vftable;
  in_ECX[4] = param_3;
  in_ECX[5] = param_2;
  return;
}


// ==== 1035f600 FUN_1035f600

void FUN_1035f600(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HTerrainToolLayer::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 1035f650 FUN_1035f650

void FUN_1035f650(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 1035f690 FUN_1035f690

wchar_t * FUN_1035f690(void)

{
  return L"HMatineeTimePath";
}


// ==== 1035f6a0 FUN_1035f6a0

undefined4 FUN_1035f6a0(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HMatineeTimePath",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f6f0 FUN_1035f6f0

void FUN_1035f6f0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HMatineeTimePath::vftable;
  in_ECX[3] = param_1;
  return;
}


// ==== 1035f710 FUN_1035f710

void FUN_1035f710(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HMatineeTimePath::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f750 FUN_1035f750

void FUN_1035f750(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f780 FUN_1035f780

wchar_t * FUN_1035f780(void)

{
  return L"HMatineeScene";
}


// ==== 1035f790 FUN_1035f790

undefined4 FUN_1035f790(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HMatineeScene",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f7e0 FUN_1035f7e0

void FUN_1035f7e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HMatineeScene::vftable;
  in_ECX[3] = param_1;
  return;
}


// ==== 1035f800 FUN_1035f800

void FUN_1035f800(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HMatineeScene::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f840 FUN_1035f840

void FUN_1035f840(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 1035f870 FUN_1035f870

wchar_t * FUN_1035f870(void)

{
  return L"HMatineeAction";
}


// ==== 1035f880 FUN_1035f880

undefined4 FUN_1035f880(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HMatineeAction",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f8d0 FUN_1035f8d0

void FUN_1035f8d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = HMatineeAction::vftable;
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  return;
}


// ==== 1035f8f0 FUN_1035f8f0

void FUN_1035f8f0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HMatineeAction::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1035f930 FUN_1035f930

void FUN_1035f930(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1035f960 FUN_1035f960

wchar_t * FUN_1035f960(void)

{
  return L"HMatineeSubAction";
}


// ==== 1035f970 FUN_1035f970

undefined4 FUN_1035f970(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HMatineeSubAction",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035f9c0 FUN_1035f9c0

void FUN_1035f9c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = HMatineeSubAction::vftable;
  in_ECX[3] = param_2;
  in_ECX[4] = param_1;
  return;
}


// ==== 1035f9e0 FUN_1035f9e0

void FUN_1035f9e0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HMatineeSubAction::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1035fa20 FUN_1035fa20

void FUN_1035fa20(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1035fa50 FUN_1035fa50

wchar_t * FUN_1035fa50(void)

{
  return L"HMaterialTree";
}


// ==== 1035fa60 FUN_1035fa60

undefined4 FUN_1035fa60(ushort *param_1)

{
  int iVar1;
  
  iVar1 = appStricmp((ushort *)L"HMaterialTree",param_1);
  if (iVar1 != 0) {
    iVar1 = appStricmp((ushort *)L"HHitProxy",param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1035fab0 FUN_1035fab0

void FUN_1035fab0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = HMaterialTree::vftable;
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  return;
}


// ==== 1035fad0 FUN_1035fad0

void FUN_1035fad0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = HHitProxy::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = HMaterialTree::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1035fb10 FUN_1035fb10

void FUN_1035fb10(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1035fb40 FUN_1035fb40

void FUN_1035fb40(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_2 + 0x18);
  (**(code **)(*piVar1 + 0x18))(param_2 + 0x1c);
  return;
}


// ==== 1035fb70 FUN_1035fb70

void FUN_1035fb70(void)

{
  return;
}


// ==== 1035fb80 FUN_1035fb80

void FUN_1035fb80(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 1035fbb0 FUN_1035fbb0

void FUN_1035fbb0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1035fbd0 FUN_1035fbd0

void FUN_1035fbd0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)(**(code **)(*param_1 + 0x18))(iVar1 + 0x18);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x18))(iVar1 + 0x1c);
  (**(code **)(*piVar2 + 0x18))(param_2 + 1);
  return;
}


// ==== 1035fc20 FUN_1035fc20

UClass * FUN_1035fc20(void)

{
  return &UProjectorPrimitive::PrivateStaticClass;
}


// ==== 1035fc30 FUN_1035fc30

void FUN_1035fc30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UProjectorPrimitive::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035fc70 FUN_1035fc70

undefined4 FUN_1035fc70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035fc80 FUN_1035fc80

void FUN_1035fc80(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UProjectorPrimitive::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1035fcf0 FUN_1035fcf0

undefined4 FUN_1035fcf0(undefined4 param_1,undefined4 param_2)

{
  FBox *this;
  int *in_ECX;
  undefined1 local_1c [28];
  
  this = (FBox *)(**(code **)(*in_ECX + 0x78))(local_1c,param_2,param_1);
  FBox::GetExtent(this);
  return param_1;
}


// ==== 1035fd30 FUN_1035fd30

undefined4 FUN_1035fd30(undefined4 param_1,undefined4 param_2)

{
  FBox *this;
  int *in_ECX;
  undefined1 local_1c [28];
  
  this = (FBox *)(**(code **)(*in_ECX + 0x78))(local_1c,param_2,param_1);
  FBox::GetCenter(this);
  return param_1;
}


// ==== 1035fd70 FUN_1035fd70

void FUN_1035fd70(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UProjectorPrimitive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035fdd0 FUN_1035fdd0

void FUN_1035fdd0(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  *(undefined ***)in_ECX = UProjectorPrimitive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1035fe40 FUN_1035fe40

void FUN_1035fe40(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  return;
}


// ==== 1035fea0 FUN_1035fea0

void FUN_1035fea0(byte param_1)

{
  UProjectorPrimitive *in_ECX;
  
  UProjectorPrimitive::~UProjectorPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return;
}


// ==== 1035fed0 FUN_1035fed0

UProjectorPrimitive * FUN_1035fed0(byte param_1)

{
  UProjectorPrimitive *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x60,*(int *)(in_ECX + -4),UProjectorPrimitive::~UProjectorPrimitive);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UProjectorPrimitive::~UProjectorPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return in_ECX;
}


// ==== 1035ff50 FUN_1035ff50

UClass * FUN_1035ff50(void)

{
  return &UMesh::PrivateStaticClass;
}


// ==== 1035ff60 FUN_1035ff60

void FUN_1035ff60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UMesh::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1035ffa0 FUN_1035ffa0

undefined4 FUN_1035ffa0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1035ffd0 FUN_1035ffd0

void FUN_1035ffd0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMesh::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10360040 FUN_10360040

void FUN_10360040(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UMesh::vftable;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103600a0 FUN_103600a0

undefined4 FUN_103600a0(void)

{
  return 0;
}


// ==== 103600b0 FUN_103600b0

undefined4 FUN_103600b0(void)

{
  return 0;
}


// ==== 103600c0 FUN_103600c0

undefined4 FUN_103600c0(void)

{
  return 0;
}


// ==== 103600d0 FUN_103600d0

void FUN_103600d0(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  *(undefined ***)in_ECX = UMesh::vftable;
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return;
}


// ==== 10360140 FUN_10360140

void FUN_10360140(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


// ==== 103601a0 FUN_103601a0

void FUN_103601a0(byte param_1)

{
  UMesh *in_ECX;
  
  UMesh::~UMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,100);
  }
  return;
}


// ==== 103601d0 FUN_103601d0

UMesh * FUN_103601d0(byte param_1)

{
  UMesh *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,100,*(int *)(in_ECX + -4),UMesh::~UMesh);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMesh::~UMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,100);
  }
  return in_ECX;
}


// ==== 10360250 FUN_10360250

UClass * FUN_10360250(void)

{
  return &UMeshInstance::PrivateStaticClass;
}


// ==== 10360260 FUN_10360260

void FUN_10360260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103602a0 FUN_103602a0

undefined4 FUN_103602a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103602b0 FUN_103602b0

void FUN_103602b0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 103602d0 FUN_103602d0

void FUN_103602d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMeshInstance::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10360340 FUN_10360340

undefined4 FUN_10360340(void)

{
  return 0;
}


// ==== 10360350 FUN_10360350

void FUN_10360350(void)

{
  return;
}


// ==== 10360360 FUN_10360360

undefined4 FUN_10360360(void)

{
  return 0;
}


// ==== 10360370 FUN_10360370

void FUN_10360370(void)

{
  return;
}


// ==== 10360380 FUN_10360380

void FUN_10360380(void)

{
  return;
}


// ==== 10360390 FUN_10360390

void FUN_10360390(void)

{
  return;
}


// ==== 103603a0 FUN_103603a0

undefined4 FUN_103603a0(void)

{
  return 0;
}


// ==== 103603b0 FUN_103603b0

undefined4 FUN_103603b0(void)

{
  return 0;
}


// ==== 103603c0 FUN_103603c0

undefined4 FUN_103603c0(void)

{
  return 0;
}


// ==== 103603d0 FUN_103603d0

undefined4 FUN_103603d0(void)

{
  return 0;
}


// ==== 103603e0 FUN_103603e0

undefined4 FUN_103603e0(void)

{
  return 0;
}


// ==== 103603f0 FUN_103603f0

undefined4 FUN_103603f0(void)

{
  return 0;
}


// ==== 10360400 FUN_10360400

FName * FUN_10360400(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10360420 FUN_10360420

FName * FUN_10360420(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10360440 FUN_10360440

undefined4 FUN_10360440(void)

{
  return 0;
}


// ==== 10360450 FUN_10360450

float10 FUN_10360450(void)

{
  return (float10)0;
}


// ==== 10360460 FUN_10360460

float10 FUN_10360460(void)

{
  return (float10)15.0;
}


// ==== 10360470 FUN_10360470

undefined4 FUN_10360470(void)

{
  return 0;
}


// ==== 10360480 FUN_10360480

float10 FUN_10360480(void)

{
  return (float10)0;
}


// ==== 10360490 FUN_10360490

undefined * FUN_10360490(void)

{
  return &DAT_10853d94;
}


// ==== 103604a0 FUN_103604a0

undefined4 FUN_103604a0(void)

{
  return 0;
}


// ==== 103604b0 FUN_103604b0

undefined4 FUN_103604b0(void)

{
  return 0;
}


// ==== 103604c0 FUN_103604c0

undefined4 FUN_103604c0(void)

{
  return 0;
}


// ==== 103604d0 FUN_103604d0

undefined4 FUN_103604d0(void)

{
  return 0;
}


// ==== 103604e0 FUN_103604e0

undefined4 FUN_103604e0(void)

{
  return 0;
}


// ==== 103604f0 FUN_103604f0

undefined4 FUN_103604f0(void)

{
  return 0;
}


// ==== 10360500 FUN_10360500

undefined4 FUN_10360500(void)

{
  return 0;
}


// ==== 10360510 FUN_10360510

undefined4 FUN_10360510(void)

{
  return 0;
}


// ==== 10360520 FUN_10360520

FName * FUN_10360520(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10360540 FUN_10360540

float10 FUN_10360540(void)

{
  return (float10)0;
}


// ==== 10360550 FUN_10360550

float10 FUN_10360550(void)

{
  return (float10)0;
}


// ==== 10360560 FUN_10360560

void FUN_10360560(void)

{
  return;
}


// ==== 10360570 FUN_10360570

undefined4 FUN_10360570(void)

{
  return 0;
}


// ==== 10360580 FUN_10360580

void FUN_10360580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x94))();
  (**(code **)(*piVar1 + 0x68))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


// ==== 103605f0 FUN_103605f0

void FUN_103605f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x94))();
  (**(code **)(*piVar1 + 0x6c))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13);
  return;
}


// ==== 10360690 FUN_10360690

undefined4 FUN_10360690(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x94))();
  (**(code **)(*piVar1 + 0x70))(param_1,param_2);
  return param_1;
}


// ==== 103606c0 FUN_103606c0

undefined4 FUN_103606c0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x94))();
  (**(code **)(*piVar1 + 0x74))(param_1,param_2);
  return param_1;
}


// ==== 103606f0 FUN_103606f0

undefined4 FUN_103606f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x94))();
  (**(code **)(*piVar1 + 0x78))(param_1,param_2);
  return param_1;
}


// ==== 10360720 FUN_10360720

undefined4 FUN_10360720(void)

{
  return 0;
}


// ==== 10360730 FUN_10360730

undefined4 FUN_10360730(void)

{
  return 0;
}


// ==== 10360740 FUN_10360740

undefined4 FUN_10360740(void)

{
  return 0;
}


// ==== 10360750 FUN_10360750

void FUN_10360750(void)

{
  return;
}


// ==== 10360760 FUN_10360760

void FUN_10360760(void)

{
  return;
}


// ==== 10360770 FUN_10360770

void FUN_10360770(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = Identity_exref;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 103607e0 FUN_103607e0

void FUN_103607e0(void)

{
  return;
}


// ==== 103607f0 FUN_103607f0

void FUN_103607f0(void)

{
  return;
}


// ==== 10360800 FUN_10360800

void FUN_10360800(void)

{
  return;
}


// ==== 10360810 FUN_10360810

undefined4 FUN_10360810(void)

{
  return 0xffffffff;
}


// ==== 10360820 FUN_10360820

void FUN_10360820(void)

{
  return;
}


// ==== 10360830 FUN_10360830

void FUN_10360830(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UMeshInstance::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10360890 FUN_10360890

void FUN_10360890(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f6fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  *(undefined ***)in_ECX = UMeshInstance::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10360900 FUN_10360900

void FUN_10360900(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  return;
}


// ==== 10360960 FUN_10360960

void FUN_10360960(byte param_1)

{
  UMeshInstance *in_ECX;
  
  UMeshInstance::~UMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return;
}


// ==== 10360990 FUN_10360990

UMeshInstance * FUN_10360990(byte param_1)

{
  UMeshInstance *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x60,*(int *)(in_ECX + -4),UMeshInstance::~UMeshInstance)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMeshInstance::~UMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60);
  }
  return in_ECX;
}


// ==== 10360a10 FUN_10360a10

FArchive * FUN_10360a10(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x1c),4);
  return param_1;
}


// ==== 10360ab0 FUN_10360ab0

undefined4 FUN_10360ab0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 10360ac0 FUN_10360ac0

int FUN_10360ac0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  return iVar1 << 5;
}


// ==== 10360ad0 FUN_10360ad0

undefined4 FUN_10360ad0(void)

{
  return 0x20;
}


// ==== 10360ae0 FUN_10360ae0

undefined4 FUN_10360ae0(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 2;
  param_1[5] = 4;
  return 3;
}


// ==== 10360b20 FUN_10360b20

void FUN_10360b20(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


// ==== 10360b50 FUN_10360b50

void FUN_10360b50(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10360b80 FUN_10360b80

UClass * FUN_10360b80(void)

{
  return &ULodMeshInstance::PrivateStaticClass;
}


// ==== 10360b90 FUN_10360b90

void FUN_10360b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULodMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10360bd0 FUN_10360bd0

undefined4 FUN_10360bd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10360be0 FUN_10360be0

void FUN_10360be0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f6ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULodMeshInstance::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMeshInstance::~UMeshInstance((UMeshInstance *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10360c50 FUN_10360c50

void FUN_10360c50(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7020;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UMeshInstance::vftable;
  *(undefined ***)in_ECX = ULodMeshInstance::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10360cc0 FUN_10360cc0

void FUN_10360cc0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x68) = param_1;
  return;
}


// ==== 10360cd0 FUN_10360cd0

undefined4 FUN_10360cd0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x68);
}


// ==== 10360ce0 FUN_10360ce0

void FUN_10360ce0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x60) = param_1;
  return;
}


// ==== 10360cf0 FUN_10360cf0

undefined4 FUN_10360cf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x60);
}


// ==== 10360d00 FUN_10360d00

void FUN_10360d00(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10360d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 100) + 0x25c))();
  return;
}


// ==== 10360d20 FUN_10360d20

void FUN_10360d20(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10360d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 100) + 0x260))();
  return;
}


// ==== 10360d30 FUN_10360d30

void FUN_10360d30(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10360d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 100) + 0x264))();
  return;
}


// ==== 10360d40 FUN_10360d40

void FUN_10360d40(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10360d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 100) + 0x268))();
  return;
}


// ==== 10360d50 FUN_10360d50

void FUN_10360d50(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10360d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 100) + 0x26c))();
  return;
}


// ==== 10360d60 FUN_10360d60

undefined4 FUN_10360d60(void)

{
  return 0xffffffff;
}


// ==== 10360d70 FUN_10360d70

void FUN_10360d70(void)

{
  return;
}


// ==== 10360d80 FUN_10360d80

undefined4 FUN_10360d80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 100);
}


// ==== 10360d90 FUN_10360d90

void FUN_10360d90(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 100) = param_1;
  return;
}


// ==== 10360da0 FUN_10360da0

void FUN_10360da0(void)

{
  return;
}


// ==== 10360db0 FUN_10360db0

void FUN_10360db0(void)

{
  return;
}


// ==== 10360dc0 FUN_10360dc0

void FUN_10360dc0(void)

{
  return;
}


// ==== 10360dd0 FUN_10360dd0

undefined4 FUN_10360dd0(void)

{
  return 0;
}


// ==== 10360de0 FUN_10360de0

undefined4 FUN_10360de0(void)

{
  return 0;
}


// ==== 10360df0 FUN_10360df0

void FUN_10360df0(UMeshInstance *param_1)

{
  UMeshInstance *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMeshInstance::UMeshInstance(in_ECX,param_1);
  *(undefined ***)in_ECX = ULodMeshInstance::vftable;
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  ExceptionList = local_c;
  return;
}


// ==== 10360ec0 FUN_10360ec0

void FUN_10360ec0(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  return;
}


// ==== 10360f70 FUN_10360f70

void FUN_10360f70(byte param_1)

{
  ULodMeshInstance *in_ECX;
  
  ULodMeshInstance::~ULodMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x88);
  }
  return;
}


// ==== 10360fa0 FUN_10360fa0

ULodMeshInstance * FUN_10360fa0(byte param_1)

{
  ULodMeshInstance *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x88,*(int *)(in_ECX + -4),ULodMeshInstance::~ULodMeshInstance);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULodMeshInstance::~ULodMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x88);
  }
  return in_ECX;
}


// ==== 10361020 FUN_10361020

UClass * FUN_10361020(void)

{
  return &ULodMesh::PrivateStaticClass;
}


// ==== 10361030 FUN_10361030

void FUN_10361030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULodMesh::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10361070 FUN_10361070

undefined4 FUN_10361070(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10361080 FUN_10361080

UClass * FUN_10361080(void)

{
  return &ULodMeshInstance::PrivateStaticClass;
}


// ==== 10361090 FUN_10361090

UClass * FUN_10361090(void)

{
  return &ULodMeshInstance::PrivateStaticClass;
}


// ==== 103610a0 FUN_103610a0

UClass * FUN_103610a0(void)

{
  return &ULodMeshInstance::PrivateStaticClass;
}


// ==== 103610b0 FUN_103610b0

undefined4 FUN_103610b0(void)

{
  return 0;
}


// ==== 103610c0 FUN_103610c0

void FUN_103610c0(void)

{
  int in_ECX;
  
  FRotator::FRotator((FRotator *)(in_ECX + 0x10));
  return;
}


// ==== 103610e0 FUN_103610e0

void FUN_103610e0(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = NCClothSimul::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x44);
  in_ECX[0x12] = *(undefined4 *)(param_1 + 0x48);
  in_ECX[0x13] = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  in_ECX[0x16] = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x17] = *(undefined4 *)(param_1 + 0x5c);
  _memcpy(in_ECX + 0x18,(void *)(param_1 + 0x60),0x1000);
  in_ECX[0x418] = *(undefined4 *)(param_1 + 0x1060);
  in_ECX[0x419] = *(undefined4 *)(param_1 + 0x1064);
  in_ECX[0x41a] = *(undefined4 *)(param_1 + 0x1068);
  in_ECX[0x41b] = *(undefined4 *)(param_1 + 0x106c);
  in_ECX[0x41c] = *(undefined4 *)(param_1 + 0x1070);
  in_ECX[0x41d] = *(undefined4 *)(param_1 + 0x1074);
  in_ECX[0x41e] = *(undefined4 *)(param_1 + 0x1078);
  in_ECX[0x41f] = *(undefined4 *)(param_1 + 0x107c);
  in_ECX[0x420] = *(undefined4 *)(param_1 + 0x1080);
  in_ECX[0x421] = *(undefined4 *)(param_1 + 0x1084);
  in_ECX[0x422] = *(undefined4 *)(param_1 + 0x1088);
  in_ECX[0x423] = *(undefined4 *)(param_1 + 0x108c);
  in_ECX[0x424] = *(undefined4 *)(param_1 + 0x1090);
  in_ECX[0x425] = *(undefined4 *)(param_1 + 0x1094);
  in_ECX[0x426] = *(undefined4 *)(param_1 + 0x1098);
  in_ECX[0x427] = *(undefined4 *)(param_1 + 0x109c);
  in_ECX[0x428] = *(undefined4 *)(param_1 + 0x10a0);
  in_ECX[0x429] = *(undefined4 *)(param_1 + 0x10a4);
  in_ECX[0x42a] = *(undefined4 *)(param_1 + 0x10a8);
  in_ECX[0x42b] = *(undefined4 *)(param_1 + 0x10ac);
  in_ECX[0x42c] = *(undefined4 *)(param_1 + 0x10b0);
  in_ECX[0x42d] = *(undefined4 *)(param_1 + 0x10b4);
  in_ECX[0x42e] = *(undefined4 *)(param_1 + 0x10b8);
  in_ECX[0x42f] = *(undefined4 *)(param_1 + 0x10bc);
  in_ECX[0x430] = *(undefined4 *)(param_1 + 0x10c0);
  in_ECX[0x431] = *(undefined4 *)(param_1 + 0x10c4);
  in_ECX[0x432] = *(undefined4 *)(param_1 + 0x10c8);
  in_ECX[0x433] = *(undefined4 *)(param_1 + 0x10cc);
  in_ECX[0x434] = *(undefined4 *)(param_1 + 0x10d0);
  in_ECX[0x435] = *(undefined4 *)(param_1 + 0x10d4);
  in_ECX[0x436] = *(undefined4 *)(param_1 + 0x10d8);
  in_ECX[0x437] = *(undefined4 *)(param_1 + 0x10dc);
  in_ECX[0x438] = *(undefined4 *)(param_1 + 0x10e0);
  in_ECX[0x439] = *(undefined4 *)(param_1 + 0x10e4);
  in_ECX[0x43a] = *(undefined4 *)(param_1 + 0x10e8);
  in_ECX[0x43b] = *(undefined4 *)(param_1 + 0x10ec);
  in_ECX[0x43c] = *(undefined4 *)(param_1 + 0x10f0);
  in_ECX[0x43d] = *(undefined4 *)(param_1 + 0x10f4);
  in_ECX[0x43e] = *(undefined4 *)(param_1 + 0x10f8);
  in_ECX[0x43f] = *(undefined4 *)(param_1 + 0x10fc);
  in_ECX[0x440] = *(undefined4 *)(param_1 + 0x1100);
  in_ECX[0x441] = *(undefined4 *)(param_1 + 0x1104);
  in_ECX[0x442] = *(undefined4 *)(param_1 + 0x1108);
  in_ECX[0x443] = *(undefined4 *)(param_1 + 0x110c);
  in_ECX[0x444] = *(undefined4 *)(param_1 + 0x1110);
  in_ECX[0x445] = *(undefined4 *)(param_1 + 0x1114);
  in_ECX[0x446] = *(undefined4 *)(param_1 + 0x1118);
  in_ECX[0x447] = *(undefined4 *)(param_1 + 0x111c);
  in_ECX[0x448] = *(undefined4 *)(param_1 + 0x1120);
  puVar2 = (undefined4 *)(param_1 + 0x1124);
  puVar3 = in_ECX + 0x449;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1154);
  puVar3 = in_ECX + 0x455;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1184);
  puVar3 = in_ECX + 0x461;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x11b4);
  puVar3 = in_ECX + 0x46d;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x11e4);
  puVar3 = in_ECX + 0x479;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1214);
  puVar3 = in_ECX + 0x485;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1244);
  puVar3 = in_ECX + 0x491;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x49d] = *(undefined4 *)(param_1 + 0x1274);
  in_ECX[0x49e] = *(undefined4 *)(param_1 + 0x1278);
  in_ECX[0x49f] = *(undefined4 *)(param_1 + 0x127c);
  return;
}


// ==== 10361580 FUN_10361580

void FUN_10361580(int param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  puVar1 = (undefined4 *)(in_ECX + 0x60);
  iVar2 = 0x400;
  do {
    *puVar1 = *(undefined4 *)((param_1 - in_ECX) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x1060) = *(undefined4 *)(param_1 + 0x1060);
  *(undefined4 *)(in_ECX + 0x1064) = *(undefined4 *)(param_1 + 0x1064);
  *(undefined4 *)(in_ECX + 0x1068) = *(undefined4 *)(param_1 + 0x1068);
  *(undefined4 *)(in_ECX + 0x106c) = *(undefined4 *)(param_1 + 0x106c);
  *(undefined4 *)(in_ECX + 0x1070) = *(undefined4 *)(param_1 + 0x1070);
  *(undefined4 *)(in_ECX + 0x1074) = *(undefined4 *)(param_1 + 0x1074);
  *(undefined4 *)(in_ECX + 0x1078) = *(undefined4 *)(param_1 + 0x1078);
  *(undefined4 *)(in_ECX + 0x107c) = *(undefined4 *)(param_1 + 0x107c);
  *(undefined4 *)(in_ECX + 0x1080) = *(undefined4 *)(param_1 + 0x1080);
  *(undefined4 *)(in_ECX + 0x1084) = *(undefined4 *)(param_1 + 0x1084);
  *(undefined4 *)(in_ECX + 0x1088) = *(undefined4 *)(param_1 + 0x1088);
  *(undefined4 *)(in_ECX + 0x108c) = *(undefined4 *)(param_1 + 0x108c);
  *(undefined4 *)(in_ECX + 0x1090) = *(undefined4 *)(param_1 + 0x1090);
  *(undefined4 *)(in_ECX + 0x1094) = *(undefined4 *)(param_1 + 0x1094);
  *(undefined4 *)(in_ECX + 0x1098) = *(undefined4 *)(param_1 + 0x1098);
  *(undefined4 *)(in_ECX + 0x109c) = *(undefined4 *)(param_1 + 0x109c);
  *(undefined4 *)(in_ECX + 0x10a0) = *(undefined4 *)(param_1 + 0x10a0);
  *(undefined4 *)(in_ECX + 0x10a4) = *(undefined4 *)(param_1 + 0x10a4);
  *(undefined4 *)(in_ECX + 0x10a8) = *(undefined4 *)(param_1 + 0x10a8);
  *(undefined4 *)(in_ECX + 0x10ac) = *(undefined4 *)(param_1 + 0x10ac);
  *(undefined4 *)(in_ECX + 0x10b0) = *(undefined4 *)(param_1 + 0x10b0);
  *(undefined4 *)(in_ECX + 0x10b4) = *(undefined4 *)(param_1 + 0x10b4);
  *(undefined4 *)(in_ECX + 0x10b8) = *(undefined4 *)(param_1 + 0x10b8);
  *(undefined4 *)(in_ECX + 0x10bc) = *(undefined4 *)(param_1 + 0x10bc);
  *(undefined4 *)(in_ECX + 0x10c0) = *(undefined4 *)(param_1 + 0x10c0);
  *(undefined4 *)(in_ECX + 0x10c4) = *(undefined4 *)(param_1 + 0x10c4);
  *(undefined4 *)(in_ECX + 0x10c8) = *(undefined4 *)(param_1 + 0x10c8);
  *(undefined4 *)(in_ECX + 0x10cc) = *(undefined4 *)(param_1 + 0x10cc);
  *(undefined4 *)(in_ECX + 0x10d0) = *(undefined4 *)(param_1 + 0x10d0);
  *(undefined4 *)(in_ECX + 0x10d4) = *(undefined4 *)(param_1 + 0x10d4);
  *(undefined4 *)(in_ECX + 0x10d8) = *(undefined4 *)(param_1 + 0x10d8);
  *(undefined4 *)(in_ECX + 0x10dc) = *(undefined4 *)(param_1 + 0x10dc);
  *(undefined4 *)(in_ECX + 0x10e0) = *(undefined4 *)(param_1 + 0x10e0);
  *(undefined4 *)(in_ECX + 0x10e4) = *(undefined4 *)(param_1 + 0x10e4);
  *(undefined4 *)(in_ECX + 0x10e8) = *(undefined4 *)(param_1 + 0x10e8);
  *(undefined4 *)(in_ECX + 0x10ec) = *(undefined4 *)(param_1 + 0x10ec);
  *(undefined4 *)(in_ECX + 0x10f0) = *(undefined4 *)(param_1 + 0x10f0);
  *(undefined4 *)(in_ECX + 0x10f4) = *(undefined4 *)(param_1 + 0x10f4);
  *(undefined4 *)(in_ECX + 0x10f8) = *(undefined4 *)(param_1 + 0x10f8);
  *(undefined4 *)(in_ECX + 0x10fc) = *(undefined4 *)(param_1 + 0x10fc);
  *(undefined4 *)(in_ECX + 0x1100) = *(undefined4 *)(param_1 + 0x1100);
  *(undefined4 *)(in_ECX + 0x1104) = *(undefined4 *)(param_1 + 0x1104);
  *(undefined4 *)(in_ECX + 0x1108) = *(undefined4 *)(param_1 + 0x1108);
  *(undefined4 *)(in_ECX + 0x110c) = *(undefined4 *)(param_1 + 0x110c);
  *(undefined4 *)(in_ECX + 0x1110) = *(undefined4 *)(param_1 + 0x1110);
  *(undefined4 *)(in_ECX + 0x1114) = *(undefined4 *)(param_1 + 0x1114);
  *(undefined4 *)(in_ECX + 0x1118) = *(undefined4 *)(param_1 + 0x1118);
  *(undefined4 *)(in_ECX + 0x111c) = *(undefined4 *)(param_1 + 0x111c);
  *(undefined4 *)(in_ECX + 0x1120) = *(undefined4 *)(param_1 + 0x1120);
  puVar1 = (undefined4 *)(param_1 + 0x1124);
  puVar3 = (undefined4 *)(in_ECX + 0x1124);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1154);
  puVar3 = (undefined4 *)(in_ECX + 0x1154);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1184);
  puVar3 = (undefined4 *)(in_ECX + 0x1184);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x11b4);
  puVar3 = (undefined4 *)(in_ECX + 0x11b4);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x11e4);
  puVar3 = (undefined4 *)(in_ECX + 0x11e4);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1214);
  puVar3 = (undefined4 *)(in_ECX + 0x1214);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1244);
  puVar3 = (undefined4 *)(in_ECX + 0x1244);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ECX + 0x1274) = *(undefined4 *)(param_1 + 0x1274);
  *(undefined4 *)(in_ECX + 0x1278) = *(undefined4 *)(param_1 + 0x1278);
  *(undefined4 *)(in_ECX + 0x127c) = *(undefined4 *)(param_1 + 0x127c);
  return;
}


// ==== 10361a20 FUN_10361a20

void FUN_10361a20(byte param_1)

{
  NCClothSimul *in_ECX;
  
  NCClothSimul::~NCClothSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10361a50 FUN_10361a50

NCClothSimul * FUN_10361a50(byte param_1)

{
  NCClothSimul *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1280,*(int *)(in_ECX + -4),NCClothSimul::~NCClothSimul)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  NCClothSimul::~NCClothSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10361ad0 FUN_10361ad0

void FUN_10361ad0(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = NCBoneSimul::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar3 = in_ECX + 6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x26] = *(undefined4 *)(param_1 + 0x98);
  in_ECX[0x27] = *(undefined4 *)(param_1 + 0x9c);
  in_ECX[0x28] = *(undefined4 *)(param_1 + 0xa0);
  in_ECX[0x29] = *(undefined4 *)(param_1 + 0xa4);
  in_ECX[0x2a] = *(undefined4 *)(param_1 + 0xa8);
  puVar2 = (undefined4 *)(param_1 + 0xac);
  puVar3 = in_ECX + 0x2b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xdc);
  puVar3 = in_ECX + 0x37;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x1b7] = *(undefined4 *)(param_1 + 0x6dc);
  in_ECX[0x1b8] = *(undefined4 *)(param_1 + 0x6e0);
  in_ECX[0x1b9] = *(undefined4 *)(param_1 + 0x6e4);
  in_ECX[0x1ba] = *(undefined4 *)(param_1 + 0x6e8);
  in_ECX[0x1bb] = *(undefined4 *)(param_1 + 0x6ec);
  in_ECX[0x1bc] = *(undefined4 *)(param_1 + 0x6f0);
  in_ECX[0x1bd] = *(undefined4 *)(param_1 + 0x6f4);
  in_ECX[0x1be] = *(undefined4 *)(param_1 + 0x6f8);
  in_ECX[0x1bf] = *(undefined4 *)(param_1 + 0x6fc);
  in_ECX[0x1c0] = *(undefined4 *)(param_1 + 0x700);
  in_ECX[0x1c1] = *(undefined4 *)(param_1 + 0x704);
  in_ECX[0x1c2] = *(undefined4 *)(param_1 + 0x708);
  in_ECX[0x1c3] = *(undefined4 *)(param_1 + 0x70c);
  in_ECX[0x1c4] = *(undefined4 *)(param_1 + 0x710);
  in_ECX[0x1c5] = *(undefined4 *)(param_1 + 0x714);
  in_ECX[0x1c6] = *(undefined4 *)(param_1 + 0x718);
  in_ECX[0x1c7] = *(undefined4 *)(param_1 + 0x71c);
  in_ECX[0x1c8] = *(undefined4 *)(param_1 + 0x720);
  in_ECX[0x1c9] = *(undefined4 *)(param_1 + 0x724);
  in_ECX[0x1ca] = *(undefined4 *)(param_1 + 0x728);
  in_ECX[0x1cb] = *(undefined4 *)(param_1 + 0x72c);
  in_ECX[0x1cc] = *(undefined4 *)(param_1 + 0x730);
  in_ECX[0x1cd] = *(undefined4 *)(param_1 + 0x734);
  in_ECX[0x1ce] = *(undefined4 *)(param_1 + 0x738);
  in_ECX[0x1cf] = *(undefined4 *)(param_1 + 0x73c);
  in_ECX[0x1d0] = *(undefined4 *)(param_1 + 0x740);
  in_ECX[0x1d1] = *(undefined4 *)(param_1 + 0x744);
  in_ECX[0x1d2] = *(undefined4 *)(param_1 + 0x748);
  in_ECX[0x1d3] = *(undefined4 *)(param_1 + 0x74c);
  in_ECX[0x1d4] = *(undefined4 *)(param_1 + 0x750);
  in_ECX[0x1d5] = *(undefined4 *)(param_1 + 0x754);
  in_ECX[0x1d6] = *(undefined4 *)(param_1 + 0x758);
  in_ECX[0x1d7] = *(undefined4 *)(param_1 + 0x75c);
  in_ECX[0x1d8] = *(undefined4 *)(param_1 + 0x760);
  in_ECX[0x1d9] = *(undefined4 *)(param_1 + 0x764);
  in_ECX[0x1da] = *(undefined4 *)(param_1 + 0x768);
  in_ECX[0x1db] = *(undefined4 *)(param_1 + 0x76c);
  in_ECX[0x1dc] = *(undefined4 *)(param_1 + 0x770);
  in_ECX[0x1dd] = *(undefined4 *)(param_1 + 0x774);
  in_ECX[0x1de] = *(undefined4 *)(param_1 + 0x778);
  in_ECX[0x1df] = *(undefined4 *)(param_1 + 0x77c);
  in_ECX[0x1e0] = *(undefined4 *)(param_1 + 0x780);
  in_ECX[0x1e1] = *(undefined4 *)(param_1 + 0x784);
  in_ECX[0x1e2] = *(undefined4 *)(param_1 + 0x788);
  in_ECX[0x1e3] = *(undefined4 *)(param_1 + 0x78c);
  in_ECX[0x1e4] = *(undefined4 *)(param_1 + 0x790);
  in_ECX[0x1e5] = *(undefined4 *)(param_1 + 0x794);
  in_ECX[0x1e6] = *(undefined4 *)(param_1 + 0x798);
  in_ECX[0x1e7] = *(undefined4 *)(param_1 + 0x79c);
  in_ECX[0x1e8] = *(undefined4 *)(param_1 + 0x7a0);
  in_ECX[0x1e9] = *(undefined4 *)(param_1 + 0x7a4);
  in_ECX[0x1ea] = *(undefined4 *)(param_1 + 0x7a8);
  in_ECX[0x1eb] = *(undefined4 *)(param_1 + 0x7ac);
  in_ECX[0x1ec] = *(undefined4 *)(param_1 + 0x7b0);
  in_ECX[0x1ed] = *(undefined4 *)(param_1 + 0x7b4);
  in_ECX[0x1ee] = *(undefined4 *)(param_1 + 0x7b8);
  puVar2 = (undefined4 *)(param_1 + 0x7bc);
  puVar3 = in_ECX + 0x1ef;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x7ec);
  puVar3 = in_ECX + 0x1fb;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x81c);
  puVar3 = in_ECX + 0x207;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x84c);
  puVar3 = in_ECX + 0x213;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x87c);
  puVar3 = in_ECX + 0x21f;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x8ac);
  puVar3 = in_ECX + 0x22b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x237] = *(undefined4 *)(param_1 + 0x8dc);
  in_ECX[0x238] = *(undefined4 *)(param_1 + 0x8e0);
  in_ECX[0x239] = *(undefined4 *)(param_1 + 0x8e4);
  in_ECX[0x23a] = *(undefined4 *)(param_1 + 0x8e8);
  in_ECX[0x23b] = *(undefined4 *)(param_1 + 0x8ec);
  in_ECX[0x23c] = *(undefined4 *)(param_1 + 0x8f0);
  in_ECX[0x23d] = *(undefined4 *)(param_1 + 0x8f4);
  in_ECX[0x23e] = *(undefined4 *)(param_1 + 0x8f8);
  return;
}


// ==== 10361ff0 FUN_10361ff0

void FUN_10361ff0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(in_ECX + 0x18);
  iVar3 = param_1 - in_ECX;
  iVar4 = 0x20;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  puVar2 = (undefined4 *)(param_1 + 0xac);
  puVar5 = (undefined4 *)(in_ECX + 0xac);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1 = 0x20;
  puVar2 = (undefined4 *)(in_ECX + 0xdc);
  do {
    param_1 = param_1 + -1;
    puVar5 = (undefined4 *)((int)puVar2 + iVar3);
    puVar6 = puVar2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = puVar2 + 0xc;
  } while (param_1 != 0);
  *(undefined4 *)(in_ECX + 0x6dc) = *(undefined4 *)(iVar1 + 0x6dc);
  *(undefined4 *)(in_ECX + 0x6e0) = *(undefined4 *)(iVar1 + 0x6e0);
  *(undefined4 *)(in_ECX + 0x6e4) = *(undefined4 *)(iVar1 + 0x6e4);
  *(undefined4 *)(in_ECX + 0x6e8) = *(undefined4 *)(iVar1 + 0x6e8);
  *(undefined4 *)(in_ECX + 0x6ec) = *(undefined4 *)(iVar1 + 0x6ec);
  *(undefined4 *)(in_ECX + 0x6f0) = *(undefined4 *)(iVar1 + 0x6f0);
  *(undefined4 *)(in_ECX + 0x6f4) = *(undefined4 *)(iVar1 + 0x6f4);
  *(undefined4 *)(in_ECX + 0x6f8) = *(undefined4 *)(iVar1 + 0x6f8);
  *(undefined4 *)(in_ECX + 0x6fc) = *(undefined4 *)(iVar1 + 0x6fc);
  *(undefined4 *)(in_ECX + 0x700) = *(undefined4 *)(iVar1 + 0x700);
  *(undefined4 *)(in_ECX + 0x704) = *(undefined4 *)(iVar1 + 0x704);
  *(undefined4 *)(in_ECX + 0x708) = *(undefined4 *)(iVar1 + 0x708);
  *(undefined4 *)(in_ECX + 0x70c) = *(undefined4 *)(iVar1 + 0x70c);
  *(undefined4 *)(in_ECX + 0x710) = *(undefined4 *)(iVar1 + 0x710);
  *(undefined4 *)(in_ECX + 0x714) = *(undefined4 *)(iVar1 + 0x714);
  *(undefined4 *)(in_ECX + 0x718) = *(undefined4 *)(iVar1 + 0x718);
  *(undefined4 *)(in_ECX + 0x71c) = *(undefined4 *)(iVar1 + 0x71c);
  *(undefined4 *)(in_ECX + 0x720) = *(undefined4 *)(iVar1 + 0x720);
  *(undefined4 *)(in_ECX + 0x724) = *(undefined4 *)(iVar1 + 0x724);
  *(undefined4 *)(in_ECX + 0x728) = *(undefined4 *)(iVar1 + 0x728);
  *(undefined4 *)(in_ECX + 0x72c) = *(undefined4 *)(iVar1 + 0x72c);
  *(undefined4 *)(in_ECX + 0x730) = *(undefined4 *)(iVar1 + 0x730);
  *(undefined4 *)(in_ECX + 0x734) = *(undefined4 *)(iVar1 + 0x734);
  *(undefined4 *)(in_ECX + 0x738) = *(undefined4 *)(iVar1 + 0x738);
  *(undefined4 *)(in_ECX + 0x73c) = *(undefined4 *)(iVar1 + 0x73c);
  *(undefined4 *)(in_ECX + 0x740) = *(undefined4 *)(iVar1 + 0x740);
  *(undefined4 *)(in_ECX + 0x744) = *(undefined4 *)(iVar1 + 0x744);
  *(undefined4 *)(in_ECX + 0x748) = *(undefined4 *)(iVar1 + 0x748);
  *(undefined4 *)(in_ECX + 0x74c) = *(undefined4 *)(iVar1 + 0x74c);
  *(undefined4 *)(in_ECX + 0x750) = *(undefined4 *)(iVar1 + 0x750);
  *(undefined4 *)(in_ECX + 0x754) = *(undefined4 *)(iVar1 + 0x754);
  *(undefined4 *)(in_ECX + 0x758) = *(undefined4 *)(iVar1 + 0x758);
  *(undefined4 *)(in_ECX + 0x75c) = *(undefined4 *)(iVar1 + 0x75c);
  *(undefined4 *)(in_ECX + 0x760) = *(undefined4 *)(iVar1 + 0x760);
  *(undefined4 *)(in_ECX + 0x764) = *(undefined4 *)(iVar1 + 0x764);
  *(undefined4 *)(in_ECX + 0x768) = *(undefined4 *)(iVar1 + 0x768);
  *(undefined4 *)(in_ECX + 0x76c) = *(undefined4 *)(iVar1 + 0x76c);
  *(undefined4 *)(in_ECX + 0x770) = *(undefined4 *)(iVar1 + 0x770);
  *(undefined4 *)(in_ECX + 0x774) = *(undefined4 *)(iVar1 + 0x774);
  *(undefined4 *)(in_ECX + 0x778) = *(undefined4 *)(iVar1 + 0x778);
  *(undefined4 *)(in_ECX + 0x77c) = *(undefined4 *)(iVar1 + 0x77c);
  *(undefined4 *)(in_ECX + 0x780) = *(undefined4 *)(iVar1 + 0x780);
  *(undefined4 *)(in_ECX + 0x784) = *(undefined4 *)(iVar1 + 0x784);
  *(undefined4 *)(in_ECX + 0x788) = *(undefined4 *)(iVar1 + 0x788);
  *(undefined4 *)(in_ECX + 0x78c) = *(undefined4 *)(iVar1 + 0x78c);
  *(undefined4 *)(in_ECX + 0x790) = *(undefined4 *)(iVar1 + 0x790);
  *(undefined4 *)(in_ECX + 0x794) = *(undefined4 *)(iVar1 + 0x794);
  *(undefined4 *)(in_ECX + 0x798) = *(undefined4 *)(iVar1 + 0x798);
  *(undefined4 *)(in_ECX + 0x79c) = *(undefined4 *)(iVar1 + 0x79c);
  *(undefined4 *)(in_ECX + 0x7a0) = *(undefined4 *)(iVar1 + 0x7a0);
  *(undefined4 *)(in_ECX + 0x7a4) = *(undefined4 *)(iVar1 + 0x7a4);
  *(undefined4 *)(in_ECX + 0x7a8) = *(undefined4 *)(iVar1 + 0x7a8);
  *(undefined4 *)(in_ECX + 0x7ac) = *(undefined4 *)(iVar1 + 0x7ac);
  *(undefined4 *)(in_ECX + 0x7b0) = *(undefined4 *)(iVar1 + 0x7b0);
  *(undefined4 *)(in_ECX + 0x7b4) = *(undefined4 *)(iVar1 + 0x7b4);
  *(undefined4 *)(in_ECX + 0x7b8) = *(undefined4 *)(iVar1 + 0x7b8);
  puVar2 = (undefined4 *)(iVar1 + 0x7bc);
  puVar5 = (undefined4 *)(in_ECX + 0x7bc);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x7ec);
  puVar5 = (undefined4 *)(in_ECX + 0x7ec);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x81c);
  puVar5 = (undefined4 *)(in_ECX + 0x81c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x84c);
  puVar5 = (undefined4 *)(in_ECX + 0x84c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x87c);
  puVar5 = (undefined4 *)(in_ECX + 0x87c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x8ac);
  puVar5 = (undefined4 *)(in_ECX + 0x8ac);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(in_ECX + 0x8dc) = *(undefined4 *)(iVar1 + 0x8dc);
  *(undefined4 *)(in_ECX + 0x8e0) = *(undefined4 *)(iVar1 + 0x8e0);
  *(undefined4 *)(in_ECX + 0x8e4) = *(undefined4 *)(iVar1 + 0x8e4);
  *(undefined4 *)(in_ECX + 0x8e8) = *(undefined4 *)(iVar1 + 0x8e8);
  *(undefined4 *)(in_ECX + 0x8ec) = *(undefined4 *)(iVar1 + 0x8ec);
  *(undefined4 *)(in_ECX + 0x8f0) = *(undefined4 *)(iVar1 + 0x8f0);
  *(undefined4 *)(in_ECX + 0x8f4) = *(undefined4 *)(iVar1 + 0x8f4);
  *(undefined4 *)(in_ECX + 0x8f8) = *(undefined4 *)(iVar1 + 0x8f8);
  return;
}


// ==== 10362530 FUN_10362530

void FUN_10362530(byte param_1)

{
  NCBoneSimul *in_ECX;
  
  NCBoneSimul::~NCBoneSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10362560 FUN_10362560

NCBoneSimul * FUN_10362560(byte param_1)

{
  NCBoneSimul *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x8fc,*(int *)(in_ECX + -4),NCBoneSimul::~NCBoneSimul);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  NCBoneSimul::~NCBoneSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103625e0 FUN_103625e0

void FUN_103625e0(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = NCCloakSimul::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar3 = in_ECX + 6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x26] = *(undefined4 *)(param_1 + 0x98);
  in_ECX[0x27] = *(undefined4 *)(param_1 + 0x9c);
  in_ECX[0x28] = *(undefined4 *)(param_1 + 0xa0);
  in_ECX[0x29] = *(undefined4 *)(param_1 + 0xa4);
  in_ECX[0x2a] = *(undefined4 *)(param_1 + 0xa8);
  puVar2 = (undefined4 *)(param_1 + 0xac);
  puVar3 = in_ECX + 0x2b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xdc);
  puVar3 = in_ECX + 0x37;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x1b7] = *(undefined4 *)(param_1 + 0x6dc);
  in_ECX[0x1b8] = *(undefined4 *)(param_1 + 0x6e0);
  in_ECX[0x1b9] = *(undefined4 *)(param_1 + 0x6e4);
  in_ECX[0x1ba] = *(undefined4 *)(param_1 + 0x6e8);
  in_ECX[0x1bb] = *(undefined4 *)(param_1 + 0x6ec);
  in_ECX[0x1bc] = *(undefined4 *)(param_1 + 0x6f0);
  in_ECX[0x1bd] = *(undefined4 *)(param_1 + 0x6f4);
  in_ECX[0x1be] = *(undefined4 *)(param_1 + 0x6f8);
  in_ECX[0x1bf] = *(undefined4 *)(param_1 + 0x6fc);
  in_ECX[0x1c0] = *(undefined4 *)(param_1 + 0x700);
  in_ECX[0x1c1] = *(undefined4 *)(param_1 + 0x704);
  in_ECX[0x1c2] = *(undefined4 *)(param_1 + 0x708);
  in_ECX[0x1c3] = *(undefined4 *)(param_1 + 0x70c);
  in_ECX[0x1c4] = *(undefined4 *)(param_1 + 0x710);
  in_ECX[0x1c5] = *(undefined4 *)(param_1 + 0x714);
  in_ECX[0x1c6] = *(undefined4 *)(param_1 + 0x718);
  in_ECX[0x1c7] = *(undefined4 *)(param_1 + 0x71c);
  in_ECX[0x1c8] = *(undefined4 *)(param_1 + 0x720);
  in_ECX[0x1c9] = *(undefined4 *)(param_1 + 0x724);
  in_ECX[0x1ca] = *(undefined4 *)(param_1 + 0x728);
  in_ECX[0x1cb] = *(undefined4 *)(param_1 + 0x72c);
  in_ECX[0x1cc] = *(undefined4 *)(param_1 + 0x730);
  in_ECX[0x1cd] = *(undefined4 *)(param_1 + 0x734);
  in_ECX[0x1ce] = *(undefined4 *)(param_1 + 0x738);
  in_ECX[0x1cf] = *(undefined4 *)(param_1 + 0x73c);
  in_ECX[0x1d0] = *(undefined4 *)(param_1 + 0x740);
  in_ECX[0x1d1] = *(undefined4 *)(param_1 + 0x744);
  in_ECX[0x1d2] = *(undefined4 *)(param_1 + 0x748);
  in_ECX[0x1d3] = *(undefined4 *)(param_1 + 0x74c);
  in_ECX[0x1d4] = *(undefined4 *)(param_1 + 0x750);
  in_ECX[0x1d5] = *(undefined4 *)(param_1 + 0x754);
  in_ECX[0x1d6] = *(undefined4 *)(param_1 + 0x758);
  in_ECX[0x1d7] = *(undefined4 *)(param_1 + 0x75c);
  in_ECX[0x1d8] = *(undefined4 *)(param_1 + 0x760);
  in_ECX[0x1d9] = *(undefined4 *)(param_1 + 0x764);
  in_ECX[0x1da] = *(undefined4 *)(param_1 + 0x768);
  in_ECX[0x1db] = *(undefined4 *)(param_1 + 0x76c);
  in_ECX[0x1dc] = *(undefined4 *)(param_1 + 0x770);
  in_ECX[0x1dd] = *(undefined4 *)(param_1 + 0x774);
  in_ECX[0x1de] = *(undefined4 *)(param_1 + 0x778);
  in_ECX[0x1df] = *(undefined4 *)(param_1 + 0x77c);
  in_ECX[0x1e0] = *(undefined4 *)(param_1 + 0x780);
  in_ECX[0x1e1] = *(undefined4 *)(param_1 + 0x784);
  in_ECX[0x1e2] = *(undefined4 *)(param_1 + 0x788);
  in_ECX[0x1e3] = *(undefined4 *)(param_1 + 0x78c);
  in_ECX[0x1e4] = *(undefined4 *)(param_1 + 0x790);
  in_ECX[0x1e5] = *(undefined4 *)(param_1 + 0x794);
  in_ECX[0x1e6] = *(undefined4 *)(param_1 + 0x798);
  in_ECX[0x1e7] = *(undefined4 *)(param_1 + 0x79c);
  in_ECX[0x1e8] = *(undefined4 *)(param_1 + 0x7a0);
  in_ECX[0x1e9] = *(undefined4 *)(param_1 + 0x7a4);
  in_ECX[0x1ea] = *(undefined4 *)(param_1 + 0x7a8);
  in_ECX[0x1eb] = *(undefined4 *)(param_1 + 0x7ac);
  in_ECX[0x1ec] = *(undefined4 *)(param_1 + 0x7b0);
  in_ECX[0x1ed] = *(undefined4 *)(param_1 + 0x7b4);
  in_ECX[0x1ee] = *(undefined4 *)(param_1 + 0x7b8);
  puVar2 = (undefined4 *)(param_1 + 0x7bc);
  puVar3 = in_ECX + 0x1ef;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x7ec);
  puVar3 = in_ECX + 0x1fb;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x81c);
  puVar3 = in_ECX + 0x207;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x84c);
  puVar3 = in_ECX + 0x213;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x87c);
  puVar3 = in_ECX + 0x21f;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x8ac);
  puVar3 = in_ECX + 0x22b;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x237] = *(undefined4 *)(param_1 + 0x8dc);
  return;
}


// ==== 10362a90 FUN_10362a90

void FUN_10362a90(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(in_ECX + 0x18);
  iVar3 = param_1 - in_ECX;
  iVar4 = 0x20;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  puVar2 = (undefined4 *)(param_1 + 0xac);
  puVar5 = (undefined4 *)(in_ECX + 0xac);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1 = 0x20;
  puVar2 = (undefined4 *)(in_ECX + 0xdc);
  do {
    param_1 = param_1 + -1;
    puVar5 = (undefined4 *)((int)puVar2 + iVar3);
    puVar6 = puVar2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = puVar2 + 0xc;
  } while (param_1 != 0);
  *(undefined4 *)(in_ECX + 0x6dc) = *(undefined4 *)(iVar1 + 0x6dc);
  *(undefined4 *)(in_ECX + 0x6e0) = *(undefined4 *)(iVar1 + 0x6e0);
  *(undefined4 *)(in_ECX + 0x6e4) = *(undefined4 *)(iVar1 + 0x6e4);
  *(undefined4 *)(in_ECX + 0x6e8) = *(undefined4 *)(iVar1 + 0x6e8);
  *(undefined4 *)(in_ECX + 0x6ec) = *(undefined4 *)(iVar1 + 0x6ec);
  *(undefined4 *)(in_ECX + 0x6f0) = *(undefined4 *)(iVar1 + 0x6f0);
  *(undefined4 *)(in_ECX + 0x6f4) = *(undefined4 *)(iVar1 + 0x6f4);
  *(undefined4 *)(in_ECX + 0x6f8) = *(undefined4 *)(iVar1 + 0x6f8);
  *(undefined4 *)(in_ECX + 0x6fc) = *(undefined4 *)(iVar1 + 0x6fc);
  *(undefined4 *)(in_ECX + 0x700) = *(undefined4 *)(iVar1 + 0x700);
  *(undefined4 *)(in_ECX + 0x704) = *(undefined4 *)(iVar1 + 0x704);
  *(undefined4 *)(in_ECX + 0x708) = *(undefined4 *)(iVar1 + 0x708);
  *(undefined4 *)(in_ECX + 0x70c) = *(undefined4 *)(iVar1 + 0x70c);
  *(undefined4 *)(in_ECX + 0x710) = *(undefined4 *)(iVar1 + 0x710);
  *(undefined4 *)(in_ECX + 0x714) = *(undefined4 *)(iVar1 + 0x714);
  *(undefined4 *)(in_ECX + 0x718) = *(undefined4 *)(iVar1 + 0x718);
  *(undefined4 *)(in_ECX + 0x71c) = *(undefined4 *)(iVar1 + 0x71c);
  *(undefined4 *)(in_ECX + 0x720) = *(undefined4 *)(iVar1 + 0x720);
  *(undefined4 *)(in_ECX + 0x724) = *(undefined4 *)(iVar1 + 0x724);
  *(undefined4 *)(in_ECX + 0x728) = *(undefined4 *)(iVar1 + 0x728);
  *(undefined4 *)(in_ECX + 0x72c) = *(undefined4 *)(iVar1 + 0x72c);
  *(undefined4 *)(in_ECX + 0x730) = *(undefined4 *)(iVar1 + 0x730);
  *(undefined4 *)(in_ECX + 0x734) = *(undefined4 *)(iVar1 + 0x734);
  *(undefined4 *)(in_ECX + 0x738) = *(undefined4 *)(iVar1 + 0x738);
  *(undefined4 *)(in_ECX + 0x73c) = *(undefined4 *)(iVar1 + 0x73c);
  *(undefined4 *)(in_ECX + 0x740) = *(undefined4 *)(iVar1 + 0x740);
  *(undefined4 *)(in_ECX + 0x744) = *(undefined4 *)(iVar1 + 0x744);
  *(undefined4 *)(in_ECX + 0x748) = *(undefined4 *)(iVar1 + 0x748);
  *(undefined4 *)(in_ECX + 0x74c) = *(undefined4 *)(iVar1 + 0x74c);
  *(undefined4 *)(in_ECX + 0x750) = *(undefined4 *)(iVar1 + 0x750);
  *(undefined4 *)(in_ECX + 0x754) = *(undefined4 *)(iVar1 + 0x754);
  *(undefined4 *)(in_ECX + 0x758) = *(undefined4 *)(iVar1 + 0x758);
  *(undefined4 *)(in_ECX + 0x75c) = *(undefined4 *)(iVar1 + 0x75c);
  *(undefined4 *)(in_ECX + 0x760) = *(undefined4 *)(iVar1 + 0x760);
  *(undefined4 *)(in_ECX + 0x764) = *(undefined4 *)(iVar1 + 0x764);
  *(undefined4 *)(in_ECX + 0x768) = *(undefined4 *)(iVar1 + 0x768);
  *(undefined4 *)(in_ECX + 0x76c) = *(undefined4 *)(iVar1 + 0x76c);
  *(undefined4 *)(in_ECX + 0x770) = *(undefined4 *)(iVar1 + 0x770);
  *(undefined4 *)(in_ECX + 0x774) = *(undefined4 *)(iVar1 + 0x774);
  *(undefined4 *)(in_ECX + 0x778) = *(undefined4 *)(iVar1 + 0x778);
  *(undefined4 *)(in_ECX + 0x77c) = *(undefined4 *)(iVar1 + 0x77c);
  *(undefined4 *)(in_ECX + 0x780) = *(undefined4 *)(iVar1 + 0x780);
  *(undefined4 *)(in_ECX + 0x784) = *(undefined4 *)(iVar1 + 0x784);
  *(undefined4 *)(in_ECX + 0x788) = *(undefined4 *)(iVar1 + 0x788);
  *(undefined4 *)(in_ECX + 0x78c) = *(undefined4 *)(iVar1 + 0x78c);
  *(undefined4 *)(in_ECX + 0x790) = *(undefined4 *)(iVar1 + 0x790);
  *(undefined4 *)(in_ECX + 0x794) = *(undefined4 *)(iVar1 + 0x794);
  *(undefined4 *)(in_ECX + 0x798) = *(undefined4 *)(iVar1 + 0x798);
  *(undefined4 *)(in_ECX + 0x79c) = *(undefined4 *)(iVar1 + 0x79c);
  *(undefined4 *)(in_ECX + 0x7a0) = *(undefined4 *)(iVar1 + 0x7a0);
  *(undefined4 *)(in_ECX + 0x7a4) = *(undefined4 *)(iVar1 + 0x7a4);
  *(undefined4 *)(in_ECX + 0x7a8) = *(undefined4 *)(iVar1 + 0x7a8);
  *(undefined4 *)(in_ECX + 0x7ac) = *(undefined4 *)(iVar1 + 0x7ac);
  *(undefined4 *)(in_ECX + 0x7b0) = *(undefined4 *)(iVar1 + 0x7b0);
  *(undefined4 *)(in_ECX + 0x7b4) = *(undefined4 *)(iVar1 + 0x7b4);
  *(undefined4 *)(in_ECX + 0x7b8) = *(undefined4 *)(iVar1 + 0x7b8);
  puVar2 = (undefined4 *)(iVar1 + 0x7bc);
  puVar5 = (undefined4 *)(in_ECX + 0x7bc);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x7ec);
  puVar5 = (undefined4 *)(in_ECX + 0x7ec);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x81c);
  puVar5 = (undefined4 *)(in_ECX + 0x81c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x84c);
  puVar5 = (undefined4 *)(in_ECX + 0x84c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x87c);
  puVar5 = (undefined4 *)(in_ECX + 0x87c);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x8ac);
  puVar5 = (undefined4 *)(in_ECX + 0x8ac);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(in_ECX + 0x8dc) = *(undefined4 *)(iVar1 + 0x8dc);
  return;
}


// ==== 10362f70 FUN_10362f70

void FUN_10362f70(byte param_1)

{
  NCCloakSimul *in_ECX;
  
  NCCloakSimul::~NCCloakSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10362fa0 FUN_10362fa0

NCCloakSimul * FUN_10362fa0(byte param_1)

{
  NCCloakSimul *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x8e0,*(int *)(in_ECX + -4),NCCloakSimul::~NCCloakSimul);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  NCCloakSimul::~NCCloakSimul(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10363020 FUN_10363020

FArchive * FUN_10363020(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0xe,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0xd,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0xc,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0xf,1);
  return param_1;
}


// ==== 103630b0 FUN_103630b0

UClass * FUN_103630b0(void)

{
  return &ANLine::PrivateStaticClass;
}


// ==== 103630c0 FUN_103630c0

void FUN_103630c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ANLine::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363100 FUN_10363100

undefined4 FUN_10363100(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363110 FUN_10363110

undefined4 FUN_10363110(int *param_1)

{
  int in_ECX;
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 4))();
  *(undefined8 *)(in_ECX + 0x2c) = uVar1;
  return 1;
}


// ==== 10363140 FUN_10363140

undefined4 FUN_10363140(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 10363150 FUN_10363150

undefined4 FUN_10363150(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 10363160 FUN_10363160

undefined4 FUN_10363160(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 2;
  param_1[5] = 4;
  return 3;
}


// ==== 103631a0 FUN_103631a0

void FUN_103631a0(byte param_1)

{
  FSkinVertexStream *in_ECX;
  
  FSkinVertexStream::~FSkinVertexStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103631d0 FUN_103631d0

FSkinVertexStream * FUN_103631d0(byte param_1)

{
  FSkinVertexStream *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x3c,*(int *)(in_ECX + -4),FSkinVertexStream::~FSkinVertexStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FSkinVertexStream::~FSkinVertexStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10363250 FUN_10363250

void FUN_10363250(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7060;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  in_ECX[3] = 1;
  in_ECX[4] = 0;
  *in_ECX = FGPUSkinVertexStream::vftable;
  pcVar3 = GMakeCacheIDIndex_exref;
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe1;
  ExceptionList = local_c;
  return;
}


// ==== 10363320 FUN_10363320

void FUN_10363320(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7080;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FGPUSkinVertexStream::vftable;
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10363370 FUN_10363370

void FUN_10363370(void)

{
  return;
}


// ==== 10363380 FUN_10363380

undefined4 FUN_10363380(void)

{
  return 0x34;
}


// ==== 10363390 FUN_10363390

undefined4 FUN_10363390(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 103633a0 FUN_103633a0

undefined4 FUN_103633a0(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 2;
  param_1[5] = 4;
  param_1[6] = 5;
  param_1[7] = 0xf;
  param_1[8] = 0;
  param_1[9] = 0xe;
  return 5;
}


// ==== 10363400 FUN_10363400

void FUN_10363400(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  *in_ECX = FGPUSkinVertexStream::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 10363490 FUN_10363490

void FUN_10363490(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 103634c0 FUN_103634c0

void FUN_103634c0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f70c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FGPUSkinVertexStream::vftable;
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10363530 FUN_10363530

FRenderResource * FUN_10363530(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f70e0;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),FGPUSkinVertexStream::~FGPUSkinVertexStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FGPUSkinVertexStream::vftable;
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10363600 FUN_10363600

void FUN_10363600(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  FName::FName(in_ECX + 8);
  FName::FName(in_ECX + 0x6c);
  return;
}


// ==== 10363640 FUN_10363640

void FUN_10363640(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 7) = *(undefined1 *)((int)param_1 + 7);
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 3);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 103636aa Catch@103636aa

void Catch_103636aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103636be Catch@103636be

void Catch_103636be(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"VTriangle::operator=");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10363710 FUN_10363710

UClass * FUN_10363710(void)

{
  return &USubSkeletalMeshInstance::PrivateStaticClass;
}


// ==== 10363720 FUN_10363720

void FUN_10363720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USubSkeletalMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363760 FUN_10363760

undefined4 FUN_10363760(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363770 FUN_10363770

void FUN_10363770(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x13c) = param_1;
  return;
}


// ==== 10363780 FUN_10363780

UClass * FUN_10363780(void)

{
  return &USkeletalMeshInstance::PrivateStaticClass;
}


// ==== 10363790 FUN_10363790

void FUN_10363790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkeletalMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103637d0 FUN_103637d0

undefined4 FUN_103637d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103637e0 FUN_103637e0

UClass * FUN_103637e0(void)

{
  return &UExtraSkeletalMeshInstance::PrivateStaticClass;
}


// ==== 103637f0 FUN_103637f0

void FUN_103637f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UExtraSkeletalMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363830 FUN_10363830

undefined4 FUN_10363830(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363840 FUN_10363840

UClass * FUN_10363840(void)

{
  return &USkeletalMesh::PrivateStaticClass;
}


// ==== 10363850 FUN_10363850

void FUN_10363850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkeletalMesh::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363890 FUN_10363890

undefined4 FUN_10363890(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103638a0 FUN_103638a0

UClass * FUN_103638a0(void)

{
  return &USkeletalMeshInstance::PrivateStaticClass;
}


// ==== 103638b0 FUN_103638b0

UClass * FUN_103638b0(void)

{
  return &USubSkeletalMeshInstance::PrivateStaticClass;
}


// ==== 103638c0 FUN_103638c0

UClass * FUN_103638c0(void)

{
  return &UExtraSkeletalMeshInstance::PrivateStaticClass;
}


// ==== 103638d0 FUN_103638d0

void FUN_103638d0(int param_1)

{
  TArray<unsigned_short> *pTVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f710c;
  local_c = ExceptionList;
  if (param_1 == 0) {
    pTVar1 = (TArray<unsigned_short> *)0x0;
  }
  else {
    pTVar1 = (TArray<unsigned_short> *)(param_1 + 0xc);
  }
  ExceptionList = &local_c;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 3),pTVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<unsigned_short>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103639b0 FUN_103639b0

UClass * FUN_103639b0(void)

{
  return &UAnimation::PrivateStaticClass;
}


// ==== 103639c0 FUN_103639c0

void FUN_103639c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UAnimation::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10363a00 FUN_10363a00

undefined4 FUN_10363a00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363a10 FUN_10363a10

void FUN_10363a10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7129;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UAnimation::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10363a80 FUN_10363a80

void FUN_10363a80(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7149;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UAnimation::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10363ae0 FUN_10363ae0

void FUN_10363ae0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7169;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UAnimation::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10363b50 FUN_10363b50

void FUN_10363b50(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  return;
}


// ==== 10363b70 FUN_10363b70

void FUN_10363b70(byte param_1)

{
  UAnimation *in_ECX;
  
  UAnimation::~UAnimation(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return;
}


// ==== 10363ba0 FUN_10363ba0

UAnimation * FUN_10363ba0(byte param_1)

{
  UAnimation *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x34,*(int *)(in_ECX + -4),UAnimation::~UAnimation);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UAnimation::~UAnimation(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x34);
  }
  return in_ECX;
}


// ==== 10363c20 FUN_10363c20

UClass * FUN_10363c20(void)

{
  return &UMeshAnimation::PrivateStaticClass;
}


// ==== 10363c30 FUN_10363c30

void FUN_10363c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UMeshAnimation::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363c70 FUN_10363c70

undefined4 FUN_10363c70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363c80 FUN_10363c80

void FUN_10363c80(UMeshAnimation *param_1)

{
  if (param_1 != (UMeshAnimation *)0x0) {
    UMeshAnimation::UMeshAnimation(param_1);
    return;
  }
  return;
}


// ==== 10363ca0 FUN_10363ca0

UClass * FUN_10363ca0(void)

{
  return &UVertMeshInstance::PrivateStaticClass;
}


// ==== 10363cb0 FUN_10363cb0

void FUN_10363cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363cf0 FUN_10363cf0

undefined4 FUN_10363cf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363d00 FUN_10363d00

UClass * FUN_10363d00(void)

{
  return &UVertMesh::PrivateStaticClass;
}


// ==== 10363d10 FUN_10363d10

void FUN_10363d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertMesh::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 10363d50 FUN_10363d50

undefined4 FUN_10363d50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363d60 FUN_10363d60

UClass * FUN_10363d60(void)

{
  return &UVertMeshInstance::PrivateStaticClass;
}


// ==== 10363d70 FUN_10363d70

UClass * FUN_10363d70(void)

{
  return &UVertMeshEmitter::PrivateStaticClass;
}


// ==== 10363d80 FUN_10363d80

void FUN_10363d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertMeshEmitter::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10363dc0 FUN_10363dc0

undefined4 FUN_10363dc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10363dd0 FUN_10363dd0

undefined4 FUN_10363dd0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x9e] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x2e0))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 10363e00 FUN_10363e00

undefined4 FUN_10363e00(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x9e] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x2e0))();
    if ((iVar1 != 0) && ((*(byte *)(in_ECX + 0x19) & 0x10) != 0)) {
      iVar1 = (**(code **)(*in_ECX + 0x2e8))();
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10363e50 FUN_10363e50

undefined4 FUN_10363e50(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0xe] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x2e4))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 10363e80 FUN_10363e80

undefined4 FUN_10363e80(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x9e] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x2e8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 10363eb0 FUN_10363eb0

undefined4 FUN_10363eb0(void)

{
  int iVar1;
  UObject *in_ECX;
  
  if (((byte)in_ECX[0x2f8] & 1) != 0) {
    if ((*(int *)(in_ECX + 0x38) != 0) &&
       (iVar1 = (**(code **)(*(int *)in_ECX + 0x2e4))(), iVar1 != 0)) {
      return 1;
    }
    if (in_ECX[0x34] == (UObject)0xe) {
      return 1;
    }
    if ((in_ECX[0x34] == (UObject)0xd) &&
       (iVar1 = UObject::IsA(in_ECX,&AKConstraint::PrivateStaticClass), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}


// ==== 10363f10 FUN_10363f10

undefined4 FUN_10363f10(int param_1)

{
  int in_ECX;
  
  while( true ) {
    if (in_ECX == 0) {
      return 0;
    }
    if (in_ECX == param_1) break;
    in_ECX = *(int *)(in_ECX + 0x3c);
  }
  return 1;
}


// ==== 10363f40 FUN_10363f40

bool FUN_10363f40(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xec) != *(int *)(in_ECX + 0xe0)) {
    return *(int *)(in_ECX + 0xec) == param_1;
  }
  return true;
}


// ==== 10363f70 FUN_10363f70

undefined4 FUN_10363f70(int param_1)

{
  int in_ECX;
  
  while( true ) {
    if (in_ECX == 0) {
      return 0;
    }
    if (in_ECX == param_1) break;
    in_ECX = *(int *)(in_ECX + 0x40);
  }
  return 1;
}


// ==== 10363fda Catch@10363fda

void Catch_10363fda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10363fee Catch@10363fee

void Catch_10363fee(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::IsBasedOn");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10364040 FUN_10364040

undefined4 FUN_10364040(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xe4);
}


// ==== 10364050 FUN_10364050

void FUN_10364050(undefined4 *param_1)

{
  undefined4 uVar1;
  UObject *pUVar2;
  int iVar3;
  UObject *in_ECX;
  
  iVar3 = UObject::IsA(in_ECX,&APawn::PrivateStaticClass);
  if ((iVar3 == 0) ||
     (pUVar2 = *(UObject **)(in_ECX + 0x14d8), *(UObject **)(in_ECX + 0x14d8) == (UObject *)0x0)) {
    pUVar2 = in_ECX;
  }
  *param_1 = *(undefined4 *)(pUVar2 + 0x1c8);
  uVar1 = *(undefined4 *)(pUVar2 + 0x1d0);
  param_1[1] = *(undefined4 *)(pUVar2 + 0x1cc);
  param_1[2] = uVar1;
  return;
}


// ==== 103640a0 FUN_103640a0

UClass * FUN_103640a0(void)

{
  return &UAudioSubsystem::PrivateStaticClass;
}


// ==== 103640b0 FUN_103640b0

void FUN_103640b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UAudioSubsystem::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103640f0 FUN_103640f0

undefined4 FUN_103640f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10364100 FUN_10364100

void FUN_10364100(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7199;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UAudioSubsystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UAudioSubsystem::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10364170 FUN_10364170

void FUN_10364170(void)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f71b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX);
  *(undefined ***)in_ECX = UAudioSubsystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UAudioSubsystem::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 103641e0 FUN_103641e0

void FUN_103641e0(void)

{
  return;
}


// ==== 103641f0 FUN_103641f0

void FUN_103641f0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f71d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  *(undefined ***)in_ECX = UAudioSubsystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UAudioSubsystem::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 10364260 FUN_10364260

void FUN_10364260(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  return;
}


// ==== 10364280 FUN_10364280

void FUN_10364280(byte param_1)

{
  UAudioSubsystem *in_ECX;
  
  UAudioSubsystem::~UAudioSubsystem(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 103642b0 FUN_103642b0

UAudioSubsystem * FUN_103642b0(byte param_1)

{
  UAudioSubsystem *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),UAudioSubsystem::~UAudioSubsystem);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UAudioSubsystem::~UAudioSubsystem(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10364330 FUN_10364330

UClass * FUN_10364330(void)

{
  return &UDummyAudio::PrivateStaticClass;
}


// ==== 10364340 FUN_10364340

void FUN_10364340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UDummyAudio::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 10364380 FUN_10364380

undefined4 FUN_10364380(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10364390 FUN_10364390

void FUN_10364390(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f71f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UDummyAudio::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDummyAudio::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UAudioSubsystem::~UAudioSubsystem((UAudioSubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10364400 FUN_10364400

undefined4 FUN_10364400(void)

{
  return 0;
}


// ==== 10364410 FUN_10364410

void FUN_10364410(void)

{
  return;
}


// ==== 10364420 FUN_10364420

undefined4 FUN_10364420(void)

{
  return 0;
}


// ==== 10364430 FUN_10364430

void FUN_10364430(void)

{
  return;
}


// ==== 10364440 FUN_10364440

void FUN_10364440(void)

{
  return;
}


// ==== 10364450 FUN_10364450

void FUN_10364450(void)

{
  return;
}


// ==== 10364460 FUN_10364460

undefined4 FUN_10364460(void)

{
  return 0;
}


// ==== 10364470 FUN_10364470

undefined4 FUN_10364470(void)

{
  return 0;
}


// ==== 10364480 FUN_10364480

undefined4 FUN_10364480(void)

{
  return 0;
}


// ==== 10364490 FUN_10364490

undefined4 FUN_10364490(void)

{
  return 0;
}


// ==== 103644a0 FUN_103644a0

undefined4 FUN_103644a0(void)

{
  return 0;
}


// ==== 103644b0 FUN_103644b0

void FUN_103644b0(void)

{
  return;
}


// ==== 103644c0 FUN_103644c0

void FUN_103644c0(void)

{
  return;
}


// ==== 103644d0 FUN_103644d0

void FUN_103644d0(void)

{
  return;
}


// ==== 103644e0 FUN_103644e0

void FUN_103644e0(void)

{
  return;
}


// ==== 103644f0 FUN_103644f0

void FUN_103644f0(void)

{
  return;
}


// ==== 10364500 FUN_10364500

float10 FUN_10364500(void)

{
  return (float10)0;
}


// ==== 10364510 FUN_10364510

float10 FUN_10364510(void)

{
  return (float10)0;
}


// ==== 10364520 FUN_10364520

float10 FUN_10364520(void)

{
  return (float10)0;
}


// ==== 10364530 FUN_10364530

float10 FUN_10364530(void)

{
  return (float10)0;
}


// ==== 10364540 FUN_10364540

undefined4 FUN_10364540(void)

{
  return 0;
}


// ==== 10364550 FUN_10364550

undefined4 FUN_10364550(void)

{
  return 0;
}


// ==== 10364560 FUN_10364560

undefined4 FUN_10364560(void)

{
  return 0;
}


// ==== 10364570 FUN_10364570

undefined4 FUN_10364570(void)

{
  return 0;
}


// ==== 10364580 FUN_10364580

undefined4 FUN_10364580(void)

{
  return 0;
}


// ==== 10364590 FUN_10364590

undefined4 FUN_10364590(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7219;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 103645e0 FUN_103645e0

undefined4 FUN_103645e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7239;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 10364630 FUN_10364630

undefined4 FUN_10364630(void)

{
  return 0;
}


// ==== 10364640 FUN_10364640

undefined4 FUN_10364640(void)

{
  return 0;
}


// ==== 10364650 FUN_10364650

undefined4 FUN_10364650(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7259;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return 0;
}


// ==== 103646a0 FUN_103646a0

undefined4 FUN_103646a0(void)

{
  return 0;
}


// ==== 103646b0 FUN_103646b0

void FUN_103646b0(void)

{
  return;
}


// ==== 103646c0 FUN_103646c0

void FUN_103646c0(void)

{
  return;
}


// ==== 103646d0 FUN_103646d0

void FUN_103646d0(void)

{
  return;
}


// ==== 103646e0 FUN_103646e0

undefined4 FUN_103646e0(void)

{
  return 0;
}


// ==== 103646f0 FUN_103646f0

void FUN_103646f0(void)

{
  return;
}


// ==== 10364700 FUN_10364700

void FUN_10364700(void)

{
  return;
}


// ==== 10364710 FUN_10364710

undefined4 FUN_10364710(void)

{
  return 0;
}


// ==== 10364720 FUN_10364720

void FUN_10364720(void)

{
  return;
}


// ==== 10364730 FUN_10364730

undefined4 FUN_10364730(void)

{
  return 0;
}


// ==== 10364740 FUN_10364740

void FUN_10364740(void)

{
  return;
}


// ==== 10364750 FUN_10364750

void FUN_10364750(void)

{
  UAudioSubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UAudioSubsystem::UAudioSubsystem(in_ECX);
  *(undefined ***)in_ECX = UDummyAudio::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDummyAudio::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 103647c0 FUN_103647c0

void FUN_103647c0(UAudioSubsystem *param_1)

{
  UAudioSubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UAudioSubsystem::UAudioSubsystem(in_ECX,param_1);
  *(undefined ***)in_ECX = UDummyAudio::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UDummyAudio::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 10364830 FUN_10364830

void FUN_10364830(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  return;
}


// ==== 10364850 FUN_10364850

void FUN_10364850(byte param_1)

{
  UDummyAudio *in_ECX;
  
  UDummyAudio::~UDummyAudio(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 10364880 FUN_10364880

UDummyAudio * FUN_10364880(byte param_1)

{
  UDummyAudio *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UDummyAudio::~UDummyAudio);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UDummyAudio::~UDummyAudio(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10364900 FUN_10364900

void FUN_10364900(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}


// ==== 10364910 FUN_10364910

uint FUN_10364910(int param_1)

{
  return param_1 + 1U & 0xfffffffe;
}


// ==== 10364920 FUN_10364920

void FUN_10364920(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10364940 FUN_10364940

FArchive * FUN_10364940(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0x1a,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0x19,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0x18,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 0x1b,1);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x20),4);
  return param_1;
}


// ==== 10364a30 FUN_10364a30

UClass * FUN_10364a30(void)

{
  return &UTerrainSector::PrivateStaticClass;
}


// ==== 10364a40 FUN_10364a40

void FUN_10364a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTerrainSector::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10364a80 FUN_10364a80

undefined4 FUN_10364a80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10364a90 FUN_10364a90

int FUN_10364a90(int param_1,int param_2)

{
  int in_ECX;
  
  return (*(int *)(in_ECX + 0x6c) + 1) * param_2 + param_1;
}


// ==== 10364ab0 FUN_10364ab0

UClass * FUN_10364ab0(void)

{
  return &UTerrainPrimitive::PrivateStaticClass;
}


// ==== 10364ac0 FUN_10364ac0

void FUN_10364ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTerrainPrimitive::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10364b00 FUN_10364b00

undefined4 FUN_10364b00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10364b10 FUN_10364b10

void FUN_10364b10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f72b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTerrainPrimitive::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10364b80 FUN_10364b80

void FUN_10364b80(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f72d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UTerrainPrimitive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10364be0 FUN_10364be0

void FUN_10364be0(undefined4 param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f72f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UTerrainPrimitive::vftable;
  *(undefined4 *)(in_ECX + 0x60) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10364c50 FUN_10364c50

void FUN_10364c50(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainPrimitive::vftable;
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return;
}


// ==== 10364cc0 FUN_10364cc0

void FUN_10364cc0(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


// ==== 10364d20 FUN_10364d20

void FUN_10364d20(byte param_1)

{
  UTerrainPrimitive *in_ECX;
  
  UTerrainPrimitive::~UTerrainPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,100);
  }
  return;
}


// ==== 10364d50 FUN_10364d50

UTerrainPrimitive * FUN_10364d50(byte param_1)

{
  UTerrainPrimitive *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,100,*(int *)(in_ECX + -4),UTerrainPrimitive::~UTerrainPrimitive);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainPrimitive::~UTerrainPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,100);
  }
  return in_ECX;
}


// ==== 10364dd0 FUN_10364dd0

UClass * FUN_10364dd0(void)

{
  return &ATerrainInfo::PrivateStaticClass;
}


// ==== 10364de0 FUN_10364de0

void FUN_10364de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ATerrainInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10364e20 FUN_10364e20

undefined4 FUN_10364e20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10364e30 FUN_10364e30

void FUN_10364e30(ATerrainInfo *param_1)

{
  if (param_1 != (ATerrainInfo *)0x0) {
    ATerrainInfo::ATerrainInfo(param_1);
    return;
  }
  return;
}


// ==== 10364e50 FUN_10364e50

void FUN_10364e50(void)

{
  UObject *this;
  undefined4 uVar1;
  AActor *in_ECX;
  FName local_4 [4];
  
  if (*(int *)(in_ECX + 0x20f8) == 0) {
    AActor::GetPrimitive(in_ECX);
  }
  else if (*(int *)(in_ECX + 0x211c) == 0) {
    FName::FName(local_4,0);
    this = UObject::StaticAllocateObject(&UTerrainPrimitive::PrivateStaticClass);
    if (this != (UObject *)0x0) {
      uVar1 = UTerrainPrimitive::UTerrainPrimitive((UTerrainPrimitive *)this,(ATerrainInfo *)in_ECX)
      ;
      *(undefined4 *)(in_ECX + 0x211c) = uVar1;
      return;
    }
    *(undefined4 *)(in_ECX + 0x211c) = 0;
    return;
  }
  return;
}


// ==== 10364ee0 FUN_10364ee0

FCoords * FUN_10364ee0(FCoords *param_1)

{
  FVector::TransformPointBy((FVector *)&stack0x00000008,param_1);
  return param_1;
}


// ==== 10364f10 FUN_10364f10

FCoords * FUN_10364f10(FCoords *param_1)

{
  FVector::TransformPointBy((FVector *)&stack0x00000008,param_1);
  return param_1;
}


// ==== 10364f40 FUN_10364f40

void FUN_10364f40(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f733c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x2c));
  ExceptionList = local_c;
  return;
}


// ==== 10364f90 FUN_10364f90

void FUN_10364f90(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = UTerrainBrush::vftable;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4),(FString *)(param_1 + 0x10));
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x44);
  in_ECX[0x12] = *(undefined4 *)(param_1 + 0x48);
  in_ECX[0x13] = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  in_ECX[0x16] = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x17] = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x18] = *(undefined4 *)(param_1 + 0x60);
  in_ECX[0x19] = *(undefined4 *)(param_1 + 100);
  ExceptionList = local_c;
  return;
}


// ==== 103650b0 FUN_103650b0

void FUN_103650b0(int param_1)

{
  int in_ECX;
  
  FString::operator=((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  FString::operator=((FString *)(in_ECX + 0x10),(FString *)(param_1 + 0x10));
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  return;
}


// ==== 10365180 FUN_10365180

void FUN_10365180(byte param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::~UTerrainBrush(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103651b0 FUN_103651b0

UTerrainBrush * FUN_103651b0(byte param_1)

{
  UTerrainBrush *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrush::~UTerrainBrush)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrush::~UTerrainBrush(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365230 FUN_10365230

void FUN_10365230(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushVertexEdit::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103652a0 FUN_103652a0

void FUN_103652a0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 103652c0 FUN_103652c0

void FUN_103652c0(byte param_1)

{
  UTerrainBrushVertexEdit *in_ECX;
  
  UTerrainBrushVertexEdit::~UTerrainBrushVertexEdit(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103652f0 FUN_103652f0

UTerrainBrushVertexEdit * FUN_103652f0(byte param_1)

{
  UTerrainBrushVertexEdit *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushVertexEdit::~UTerrainBrushVertexEdit);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushVertexEdit::~UTerrainBrushVertexEdit(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365370 FUN_10365370

void FUN_10365370(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f73a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushPaint::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103653e0 FUN_103653e0

void FUN_103653e0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365400 FUN_10365400

void FUN_10365400(byte param_1)

{
  UTerrainBrushPaint *in_ECX;
  
  UTerrainBrushPaint::~UTerrainBrushPaint(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365430 FUN_10365430

UTerrainBrushPaint * FUN_10365430(byte param_1)

{
  UTerrainBrushPaint *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushPaint::~UTerrainBrushPaint);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushPaint::~UTerrainBrushPaint(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103654b0 FUN_103654b0

void FUN_103654b0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f73c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushColor::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365520 FUN_10365520

void FUN_10365520(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365540 FUN_10365540

void FUN_10365540(byte param_1)

{
  UTerrainBrushColor *in_ECX;
  
  UTerrainBrushColor::~UTerrainBrushColor(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365570 FUN_10365570

UTerrainBrushColor * FUN_10365570(byte param_1)

{
  UTerrainBrushColor *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushColor::~UTerrainBrushColor);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushColor::~UTerrainBrushColor(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103655f0 FUN_103655f0

void FUN_103655f0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f73e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushSmooth::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365660 FUN_10365660

void FUN_10365660(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365680 FUN_10365680

void FUN_10365680(byte param_1)

{
  UTerrainBrushSmooth *in_ECX;
  
  UTerrainBrushSmooth::~UTerrainBrushSmooth(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103656b0 FUN_103656b0

UTerrainBrushSmooth * FUN_103656b0(byte param_1)

{
  UTerrainBrushSmooth *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushSmooth::~UTerrainBrushSmooth);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushSmooth::~UTerrainBrushSmooth(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365730 FUN_10365730

void FUN_10365730(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushNoise::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103657a0 FUN_103657a0

void FUN_103657a0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 103657c0 FUN_103657c0

void FUN_103657c0(byte param_1)

{
  UTerrainBrushNoise *in_ECX;
  
  UTerrainBrushNoise::~UTerrainBrushNoise(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103657f0 FUN_103657f0

UTerrainBrushNoise * FUN_103657f0(byte param_1)

{
  UTerrainBrushNoise *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushNoise::~UTerrainBrushNoise);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushNoise::~UTerrainBrushNoise(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


