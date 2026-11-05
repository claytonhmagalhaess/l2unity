// ==== 10301064 UNetworkHandler::RequestDropItemFromPet callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestDropItemFromPet(struct ItemInfo,class
   FVector) */

void __thiscall
UNetworkHandler::RequestDropItemFromPet
          (UNetworkHandler *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x1064  7414
                       ?RequestDropItemFromPet@UNetworkHandler@@UAEXUItemInfo@@VFVector@@@Z */
  piVar1 = *(int **)(this + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cddddd",0x12,param_3,param_5,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030114f UNetworkHandler::RequestSetPledgeCrest callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestSetPledgeCrest(int,char *) */

int __thiscall
UNetworkHandler::RequestSetPledgeCrest(UNetworkHandler *this,int param_1,char *param_2)

{
                    /* 0x114f  7558  ?RequestSetPledgeCrest@UNetworkHandler@@UAEHHPAD@Z */
  if (param_1 == 0) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x53,0);
  }
  else if (param_1 == 0xc0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)this,*(ushort **)GLog_exref);
    }
  }
  else {
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),&DAT_1088029c,0x53,param_1,param_1,param_2);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10301172 UNetworkHandler::GetPledgeInfo callees=
// strings: 

/* public: virtual struct PledgeInfo * __thiscall UNetworkHandler::GetPledgeInfo(int) */

PledgeInfo * __thiscall UNetworkHandler::GetPledgeInfo(UNetworkHandler *this,int param_1)

{
  PledgeInfo *pPVar1;
  
                    /* 0x1172  4917  ?GetPledgeInfo@UNetworkHandler@@UAEPAUPledgeInfo@@H@Z */
  if ((0 < param_1) &&
     (pPVar1 = (PledgeInfo *)thunk_FUN_10422740(&param_1), pPVar1 != (PledgeInfo *)0x0)) {
    return pPVar1;
  }
  return (PledgeInfo *)0x0;
}


// ==== 10301181 UNetworkHandler::Exec callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::Exec(unsigned short const *,class FOutputDevice
   &) */

int __thiscall UNetworkHandler::Exec(UNetworkHandler *this,ushort *param_1,FOutputDevice *param_2)

{
                    /* 0x1181  4159  ?Exec@UNetworkHandler@@UAEHPBGAAVFOutputDevice@@@Z */
  return 0;
}


// ==== 1030123f UNetworkHandler::GetDistance callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual float __thiscall UNetworkHandler::GetDistance(class FObjectMap *,class FObjectMap
   *) */

float __thiscall
UNetworkHandler::GetDistance(UNetworkHandler *this,FObjectMap *param_1,FObjectMap *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x123f  4573  ?GetDistance@UNetworkHandler@@UAEMPAVFObjectMap@@0@Z */
  if (param_1 == (FObjectMap *)0x0) {
    return _DAT_10854358;
  }
  if (param_2 == (FObjectMap *)0x0) {
    return _DAT_10854358;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return _DAT_10854358;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    return _DAT_10854358;
  }
  iVar2 = *(int *)param_1;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  fStack_14 = 0.0;
  fStack_10 = 0.0;
  if (iVar2 == 1) {
    iVar3 = *(int *)(iVar3 + 0x204);
LAB_10407d5d:
    if (iVar3 == 0) {
      return _DAT_10854358;
    }
    fStack_24 = *(float *)(iVar3 + 0x1bc);
    fStack_20 = *(float *)(iVar3 + 0x1c0);
    fStack_1c = *(float *)(iVar3 + 0x1c4);
  }
  else {
    if (iVar2 == 2) {
      iVar3 = *(int *)(iVar3 + 0x10);
      goto LAB_10407d5d;
    }
    if (iVar2 == 3) {
      iVar3 = *(int *)(iVar3 + 4);
      goto LAB_10407d5d;
    }
  }
  iVar3 = *(int *)param_2;
  if (iVar3 == 1) {
    iVar3 = *(int *)(iVar1 + 0x204);
  }
  else if (iVar3 == 2) {
    iVar3 = *(int *)(iVar1 + 0x10);
  }
  else {
    if (iVar3 != 3) goto LAB_10407dc6;
    iVar3 = *(int *)(iVar1 + 4);
  }
  if (iVar3 == 0) {
    return _DAT_10854358;
  }
  fStack_18 = *(float *)(iVar3 + 0x1bc);
  fStack_14 = *(float *)(iVar3 + 0x1c0);
  fStack_10 = *(float *)(iVar3 + 0x1c4);
LAB_10407dc6:
  fStack_c = fStack_24 - fStack_18;
  fStack_8 = fStack_20 - fStack_14;
  fStack_4 = fStack_1c - fStack_10;
  fVar4 = FVector::Size((FVector *)&fStack_c);
  return fVar4;
}


// ==== 10301258 UNetworkHandler::RequestDuelStart callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestDuelStart(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestDuelStart(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1258  7418  ?RequestDuelStart@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080e790;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880a20,0xd0,0x27,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030133e UNetworkHandler::EndServerPingList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::EndServerPingList(void) */

void __thiscall UNetworkHandler::EndServerPingList(UNetworkHandler *this)

{
  uintptr_t uVar1;
  
                    /* 0x133e  4132  ?EndServerPingList@UNetworkHandler@@UAEXXZ */
  if (*(int *)((int)*(void **)(this + 0x184) + 0x84c) == 0) {
    uVar1 = __beginthread((_StartAddress *)&LAB_10302bd5,0,*(void **)(this + 0x184));
    *(uintptr_t *)(*(int *)(this + 0x184) + 0x84c) = uVar1;
  }
  return;
}


// ==== 10301721 UNetworkHandler::RequestJoinCastleSiege callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestJoinCastleSiege(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestJoinCastleSiege(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0x1721  7460
                       ?RequestJoinCastleSiege@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0xa4,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10301a2d UNetworkHandler::GetUserPassword callees=
// strings: 

/* public: virtual unsigned short * __thiscall UNetworkHandler::GetUserPassword(void) */

ushort * __thiscall UNetworkHandler::GetUserPassword(UNetworkHandler *this)

{
                    /* 0x1a2d  5276  ?GetUserPassword@UNetworkHandler@@UAEPAGXZ */
  return (ushort *)&DAT_10b20f72;
}


// ==== 10301a7d UNetworkHandler::MoveToPawn callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::MoveToPawn(int) */

void __thiscall UNetworkHandler::MoveToPawn(UNetworkHandler *this,int param_1)

{
                    /* 0x1a7d  6198  ?MoveToPawn@UNetworkHandler@@UAEXH@Z */
  return;
}


// ==== 10301c44 UNetworkHandler::GetPetInfo callees=
// strings: 

/* public: virtual struct PetInfo __thiscall UNetworkHandler::GetPetInfo(void) */

void __thiscall UNetworkHandler::GetPetInfo(UNetworkHandler *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  
                    /* 0x1c44  4900  ?GetPetInfo@UNetworkHandler@@UAE?AUPetInfo@@XZ */
  puVar2 = (undefined4 *)(*(int *)(this + 0x48) + 0x4f64);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000004 = *puVar2;
    puVar2 = puVar2 + 1;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}


// ==== 10301e60 UNetworkHandler::RequestRecipeItemDelete callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeItemDelete(int) */

void __thiscall UNetworkHandler::RequestRecipeItemDelete(UNetworkHandler *this,int param_1)

{
                    /* 0x1e60  7524  ?RequestRecipeItemDelete@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xad,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10301e74 UNetworkHandler::RequestRefineCancel callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRefineCancel(int) */

void __thiscall UNetworkHandler::RequestRefineCancel(UNetworkHandler *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e74  7538  ?RequestRefineCancel@UNetworkHandler@@UAEXH@Z */
  puStack_c = &LAB_1080e800;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x2e,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10301ed8 UNetworkHandler::RequestAllyCrest callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestAllyCrest(int) */

int __thiscall UNetworkHandler::RequestAllyCrest(UNetworkHandler *this,int param_1)

{
                    /* 0x1ed8  7369  ?RequestAllyCrest@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x88,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10301f96 UNetworkHandler::GetServerID callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::GetServerID(void) */

int __thiscall UNetworkHandler::GetServerID(UNetworkHandler *this)

{
                    /* 0x1f96  5066  ?GetServerID@UNetworkHandler@@UAEHXZ */
  return DAT_10b20f30;
}


// ==== 10302135 UNetworkHandler::RequestOustPledgeMember callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestOustPledgeMember(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestOustPledgeMember(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x2135  7490
                       ?RequestOustPledgeMember@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x27,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030225c UNetworkHandler::GetPledgeCrestTex callees=
// strings: 

/* public: virtual class UTexture * __thiscall UNetworkHandler::GetPledgeCrestTex(int) */

UTexture * __thiscall UNetworkHandler::GetPledgeCrestTex(UNetworkHandler *this,int param_1)

{
  int iVar1;
  
                    /* 0x225c  4914  ?GetPledgeCrestTex@UNetworkHandler@@UAEPAVUTexture@@H@Z */
  if (((0 < param_1) && (iVar1 = thunk_FUN_10422740(&param_1), iVar1 != 0)) &&
     (*(UTexture **)(iVar1 + 0xe0) != (UTexture *)0x0)) {
    return *(UTexture **)(iVar1 + 0xe0);
  }
  return (UTexture *)0x0;
}


// ==== 10302356 UNetworkHandler::RequestGetBossRecord callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestGetBossRecord(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestGetBossRecord(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x2356  7446  ?RequestGetBossRecord@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x18,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030276b UNetworkHandler::RequestConfirmTargetItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestConfirmTargetItem(int) */

void __thiscall UNetworkHandler::RequestConfirmTargetItem(UNetworkHandler *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x276b  7400  ?RequestConfirmTargetItem@UNetworkHandler@@UAEXH@Z */
  puStack_c = &LAB_1080e7b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x29,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030285b UNetworkHandler::RequestShortCutDel callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestShortCutDel(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestShortCutDel(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x285b  7561  ?RequestShortCutDel@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080e6f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x35,pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103029c3 UNetworkHandler::RequestCastleSiegeInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestCastleSiegeInfo(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestCastleSiegeInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x29c3  7387
                       ?RequestCastleSiegeInfo@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xa1,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103029c8 UNetworkHandler::RequestWithDrawalPledge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestWithDrawalPledge(void) */

int __thiscall UNetworkHandler::RequestWithDrawalPledge(UNetworkHandler *this)

{
                    /* 0x29c8  7586  ?RequestWithDrawalPledge@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x26);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10302a18 UNetworkHandler::RequestJoinPledge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestJoinPledge(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestJoinPledge(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x2a18  7464  ?RequestJoinPledge@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x24,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10302c1b UNetworkHandler::RequestRecipeShopMakeDo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopMakeDo(int,int,int) */

void __thiscall
UNetworkHandler::RequestRecipeShopMakeDo(UNetworkHandler *this,int param_1,int param_2,int param_3)

{
                    /* 0x2c1b  7528  ?RequestRecipeShopMakeDo@UNetworkHandler@@UAEXHHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0xb6,param_1,param_2,param_3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10302cbb UNetworkHandler::ChangeMoveType callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ChangeMoveType(int) */

void __thiscall UNetworkHandler::ChangeMoveType(UNetworkHandler *this,int param_1)

{
                    /* 0x2cbb  3500  ?ChangeMoveType@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x1c,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10302ce8 UNetworkHandler::RequestSurrenderAllianceWar callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSurrenderAllianceWar(class L2ParamStack
   &) */

void __thiscall
UNetworkHandler::RequestSurrenderAllianceWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x2ce8  7572
                       ?RequestSurrenderAllianceWar@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  return;
}


// ==== 10302ced UNetworkHandler::RequestSetCrop callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestSetCrop(class L2ParamStack *) */

void __thiscall UNetworkHandler::RequestSetCrop(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  FOutputDevice *this_00;
  int iVar4;
  undefined1 auStack_243c [9224];
  void *pvStack_34;
  void *pvStack_30;
  void *pvStack_28;
  void *pvStack_24;
  int iStack_20;
  UNetworkHandler *pUStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2ced  7557  ?RequestSetCrop@UNetworkHandler@@UAEXPAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080e6a0;
  pvStack_10 = ExceptionList;
  iStack_18 = 0x10406393;
  puStack_14 = &stack0xffffdbb8;
  iVar4 = 0;
  uStack_8 = 0;
  iStack_20 = 0;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  pvStack_24 = L2ParamStack::Top(param_1);
  pvStack_30 = L2ParamStack::Top(param_1);
  for (iStack_18 = 0; iStack_18 < (int)pvStack_30; iStack_18 = iStack_18 + 1) {
    pvStack_28 = L2ParamStack::Top(param_1);
    pvStack_34 = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    iVar3 = thunk_FUN_10402610(*(undefined4 *)(pUStack_1c + 0x48),auStack_243c + iVar4,
                               0x2400 - iVar4,&DAT_10881140,pvStack_28,pvStack_34,pvVar1,
                               (int)(char)pvVar2);
    iVar4 = iVar4 + iVar3;
    iStack_20 = iVar4;
  }
  (**(code **)(**(int **)(pUStack_1c + 0x48) + 0x68))
            (*(int **)(pUStack_1c + 0x48),"chddb",0xd0,0xb,pvStack_24,pvStack_30,iVar4,auStack_243c)
  ;
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10302d92 UNetworkHandler::operator= callees=
// strings: 

/* public: class UNetworkHandler & __thiscall UNetworkHandler::operator=(class UNetworkHandler const
   &) */

UNetworkHandler * __thiscall
UNetworkHandler::operator=(UNetworkHandler *this,UNetworkHandler *param_1)

{
  UNetworkHandler *pUVar1;
  int iVar2;
  
                    /* 0x2d92  2559  ??4UNetworkHandler@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_104229f0(param_1 + 0x3c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  pUVar1 = this + 100;
  iVar2 = 0x80;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)this];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  pUVar1 = this + 0xe8;
  iVar2 = 0x81;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)this];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 400);
  thunk_FUN_10423f00(param_1 + 0x194);
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  thunk_FUN_10423210();
  thunk_FUN_10424030(param_1 + 0x1a8);
  *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  thunk_FUN_104239a0();
  return this;
}


// ==== 10302f1d UNetworkHandler::GetPetNearestItem callees=
// strings: 

/* public: virtual struct Item * __thiscall UNetworkHandler::GetPetNearestItem(float,int) */

Item * __thiscall
UNetworkHandler::GetPetNearestItem(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x2f1d  4901  ?GetPetNearestItem@UNetworkHandler@@UAEPAUItem@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x534))(1,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((Item *)piVar1[1] != (Item *)0x0)) && (*piVar1 == 2)) {
    return (Item *)piVar1[1];
  }
  return (Item *)0x0;
}


// ==== 10302f31 UNetworkHandler::GetNearestObject callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class FObjectMap * __thiscall UNetworkHandler::GetNearestObject(int,float,int) */

FObjectMap * __thiscall
UNetworkHandler::GetNearestObject(UNetworkHandler *this,int param_1,float param_2,int param_3)

{
  float fVar1;
  FObjectMap *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float fStack_28;
  FObjectMap *pFStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2f31  4817  ?GetNearestObject@UNetworkHandler@@UAEPAVFObjectMap@@HMH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810428;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = thunk_FUN_104226e0(&DAT_10b1f530);
  iVar3 = DAT_10b1f538;
  iVar7 = 0;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    fStack_28 = param_2;
    pFStack_24 = (FObjectMap *)0x0;
    if (DAT_10b1f538 != 0) {
      piVar6 = (int *)(DAT_10b1f538 + 0x194);
      uStack_4 = 0;
      if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
        do {
          pFVar2 = *(FObjectMap **)(*piVar6 + 8 + iVar7 * 0xc);
          if (((pFVar2 != (FObjectMap *)0x0) && (*(int *)(pFVar2 + 4) != 0)) &&
             (iVar5 = (**(code **)(*(int *)this + 0x52c))(param_1,pFVar2), iVar5 != 0)) {
            fVar8 = (float10)(**(code **)(*(int *)this + 0x528))(pFVar2,iVar4);
            fVar1 = (float)fVar8;
            if ((((float)_DAT_10854b60 <= fVar1) && (fVar1 < fStack_28)) &&
               (iVar5 = thunk_FUN_103ffaa0(), iVar5 != param_3)) {
              fStack_28 = fVar1;
              pFStack_24 = pFVar2;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar3 + 0x198));
      }
    }
    ExceptionList = pvStack_c;
    return pFStack_24;
  }
  ExceptionList = pvStack_c;
  return (FObjectMap *)0x0;
}


// ==== 10302fc2 UNetworkHandler::RequestRecipeShopSellList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopSellList(int) */

void __thiscall UNetworkHandler::RequestRecipeShopSellList(UNetworkHandler *this,int param_1)

{
                    /* 0x2fc2  7534  ?RequestRecipeShopSellList@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xb7,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030303f UNetworkHandler::Say2 callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Say2(class L2ParamStack &) */

void __thiscall UNetworkHandler::Say2(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
                    /* 0x303f  7680  ?Say2@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  if (pvVar2 != (void *)0x0) {
    if (pvVar1 == (void *)0x2) {
      (**(code **)(**(int **)(this + 0x48) + 0x68))
                (*(int **)(this + 0x48),&DAT_108818b4,0x38,pvVar2,2,pvVar3);
    }
    else {
      (**(code **)(**(int **)(this + 0x48) + 0x68))
                (*(int **)(this + 0x48),&DAT_10880d2c,0x38,pvVar2,pvVar1);
    }
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  }
  return;
}


// ==== 103030df UNetworkHandler::RequestManagePartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestManagePartyRoom(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestManagePartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  FOutputDevice *this_00;
  
                    /* 0x30df  7475
                       ?RequestManagePartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddddS",0x70,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5,pvVar6);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10303111 UNetworkHandler::RequestWithdrawPartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestWithdrawPartyRoom(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestWithdrawPartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x3111  7589
                       ?RequestWithdrawPartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10880ab0,0xd0,3,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103032c4 UNetworkHandler::RequestHennaUnequipList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHennaUnequipList(void) */

void __thiscall UNetworkHandler::RequestHennaUnequipList(UNetworkHandler *this)

{
                    /* 0x32c4  7457  ?RequestHennaUnequipList@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xbd);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10303571 UNetworkHandler::RequestSurrenderPersonally callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestSurrenderPersonally(class L2ParamStack &)
    */

int __thiscall
UNetworkHandler::RequestSurrenderPersonally(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x3571  7573
                       ?RequestSurrenderPersonally@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  return 1;
}


// ==== 103035d5 UNetworkHandler::RequestJoinParty callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestJoinParty(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestJoinParty(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x35d5  7461  ?RequestJoinParty@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880d2c,0x29,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 103035df UNetworkHandler::GetUser callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetUser(unsigned short *) */

User * __thiscall UNetworkHandler::GetUser(UNetworkHandler *this,ushort *param_1)

{
  int *piVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  User *pUVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x35df  5272  ?GetUser@UNetworkHandler@@UAEPAUUser@@PAG@Z */
  puStack_8 = &LAB_108102c8;
  pvStack_c = ExceptionList;
  iVar5 = 0;
  pUVar6 = (User *)0x0;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(this + 0x198)) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x194) + 8 + iVar5 * 0xc);
      if ((((piVar1 != (int *)0x0) && (*piVar1 == 1)) && ((User *)piVar1[1] != (User *)0x0)) &&
         (puVar2 = User::GetName((User *)piVar1[1]), puVar2 != (ushort *)0x0)) {
        puVar2 = param_1;
        puVar3 = User::GetName((User *)piVar1[1]);
        iVar4 = appStricmp(puVar3,puVar2);
        if ((iVar4 == 0) && (pUVar6 = (User *)piVar1[1], *(int *)(pUVar6 + 0xc) == 0)) {
          uStack_4 = 0xffffffff;
          thunk_FUN_1042cca0();
          ExceptionList = pvStack_c;
          return pUVar6;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x198));
  }
  ExceptionList = pvStack_c;
  return pUVar6;
}


// ==== 10303666 UNetworkHandler::IsSurrender callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::IsSurrender(int,int) */

int __thiscall UNetworkHandler::IsSurrender(UNetworkHandler *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x3666  5954  ?IsSurrender@UNetworkHandler@@UAEHHH@Z */
  if (0 < param_1) {
    iVar1 = thunk_FUN_10422740(&param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x88) == param_2)) {
      return 1;
    }
  }
  return 0;
}


// ==== 10303706 UNetworkHandler::RequestDismissPartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestDismissPartyRoom(class L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestDismissPartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x3706  7411
                       ?RequestDismissPartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10880ab0,0xd0,2,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103037a6 UNetworkHandler::GetUserAccount callees=
// strings: 

/* public: virtual unsigned short * __thiscall UNetworkHandler::GetUserAccount(void) */

ushort * __thiscall UNetworkHandler::GetUserAccount(UNetworkHandler *this)

{
                    /* 0x37a6  5273  ?GetUserAccount@UNetworkHandler@@UAEPAGXZ */
  return (ushort *)&DAT_10b20f54;
}


// ==== 10303a49 UNetworkHandler::SendBypassBuildCmd callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendBypassBuildCmd(class L2ParamStack &) */

void __thiscall UNetworkHandler::SendBypassBuildCmd(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x3a49  7701  ?SendBypassBuildCmd@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x5b,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10303ab2 UNetworkHandler::Init callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Init(int,class UGameEngine *) */

void __thiscall UNetworkHandler::Init(UNetworkHandler *this,int param_1,UGameEngine *param_2)

{
  UObject *pUVar1;
  
                    /* 0x3ab2  5456  ?Init@UNetworkHandler@@UAEXHPAVUGameEngine@@@Z */
  *(undefined4 *)(this + 0x5c) = 0;
  *(UGameEngine **)(this + 0x54) = param_2;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  DAT_10b1f538 = this;
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_10b1ffa0,*(undefined4 *)(this + 0x18),0,1,0,*(undefined4 *)GError_exref,0
                      ,0);
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = (UObject *)thunk_FUN_1043c080();
  }
  *(UObject **)(this + 0x4c) = pUVar1;
  UObject::AddToRoot(pUVar1);
  if (param_1 == 0) {
    pUVar1 = UObject::StaticAllocateObject
                       (&DAT_10b204d0,*(undefined4 *)(this + 0x18),0,1,0,*(undefined4 *)GError_exref
                        ,0,0);
    if (pUVar1 != (UObject *)0x0) {
      pUVar1 = (UObject *)thunk_FUN_1043b8d0();
      goto LAB_1043c48c;
    }
  }
  else {
    pUVar1 = UObject::StaticAllocateObject
                       (&DAT_10b1f540,*(undefined4 *)(this + 0x18),0,1,0,*(undefined4 *)GError_exref
                        ,0,0);
    if (pUVar1 != (UObject *)0x0) {
      pUVar1 = (UObject *)thunk_FUN_1043c270();
      goto LAB_1043c48c;
    }
  }
  pUVar1 = (UObject *)0x0;
LAB_1043c48c:
  *(UObject **)(this + 0x48) = pUVar1;
  UObject::AddToRoot(pUVar1);
  pUVar1 = UObject::StaticAllocateObject
                     (&DAT_10b20a00,*(undefined4 *)(this + 0x18),0,1,0,*(undefined4 *)GError_exref,0
                      ,0);
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = (UObject *)thunk_FUN_103ffc50();
  }
  *(UObject **)(this + 0x184) = pUVar1;
  UObject::AddToRoot(pUVar1);
  *(undefined4 *)(this + 0x50) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x16c));
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  return;
}


// ==== 10303d00 UNetworkHandler::RequestPetGetItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPetGetItem(int) */

void __thiscall UNetworkHandler::RequestPetGetItem(UNetworkHandler *this,int param_1)

{
                    /* 0x3d00  7494  ?RequestPetGetItem@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x8f,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10303d28 UNetworkHandler::RequestBuySeed callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall UNetworkHandler::RequestBuySeed(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestBuySeed(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  FOutputDevice *this_00;
  int iVar6;
  void *pvStack_2410;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x3d28  7383  ?RequestBuySeed@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  uStack_4 = 0x10404bfa;
  iVar6 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      pvStack_2410 = (void *)((int)pvStack_2410 + -1);
    } while (pvStack_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0xc4,pvVar1,pvVar2,iVar6,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10303dbe UNetworkHandler::RequestAnswerJoinParty callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestAnswerJoinParty(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestAnswerJoinParty(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x3dbe  7372
                       ?RequestAnswerJoinParty@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x2a,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10303fda UNetworkHandler::SendWareHouseWithdrawList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SendWareHouseWithdrawList(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::SendWareHouseWithdrawList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_2408;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x3fda  7714
                       ?SendWareHouseWithdrawList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x104069da;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvStack_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      pvStack_2408 = (void *)((int)pvStack_2408 + -1);
    } while (pvStack_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088029c,0x32,pvVar1,iVar5,auStack_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10304002 UNetworkHandler::IsEnemyPledge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::IsEnemyPledge(int,int) */

int __thiscall UNetworkHandler::IsEnemyPledge(UNetworkHandler *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x4002  5866  ?IsEnemyPledge@UNetworkHandler@@UAEHHH@Z */
  iVar1 = param_2;
  if ((0 < param_1) && (0 < param_2)) {
    iVar2 = thunk_FUN_10422740(&param_1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x84) == iVar1)) {
      return 1;
    }
  }
  return 0;
}


// ==== 1030407f UNetworkHandler::RequestFriendDel callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestFriendDel(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestFriendDel(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x407f  7440  ?RequestFriendDel@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x61,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030409d UNetworkHandler::RequestServerList callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestServerList(void) */

int __thiscall UNetworkHandler::RequestServerList(UNetworkHandler *this)

{
  int *piVar1;
  
                    /* 0x409d  7552  ?RequestServerList@UNetworkHandler@@UAEHXZ */
  piVar1 = *(int **)(this + 0x4c);
  if (piVar1[0xe] != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_1087f698,5,DAT_10b20f34,DAT_10b20f38,4);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10304115 UNetworkHandler::ServerExPacketCountStop callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ServerExPacketCountStop(void) */

void __thiscall UNetworkHandler::ServerExPacketCountStop(UNetworkHandler *this)

{
                    /* 0x4115  7775  ?ServerExPacketCountStop@UNetworkHandler@@UAEXXZ */
  if (*(int *)(this + 0x48) != 0) {
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef4) = 0;
  }
  return;
}


// ==== 103041b5 UNetworkHandler::MoveBackwardToLocation callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::MoveBackwardToLocation(class FVector,class
   FVector) */

void __thiscall UNetworkHandler::MoveBackwardToLocation(UNetworkHandler *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* 0x41b5  6187  ?MoveBackwardToLocation@UNetworkHandler@@UAEXVFVector@@0@Z */
  uVar1 = FUN_107a6660();
  uVar2 = FUN_107a6660();
  uVar3 = FUN_107a6660();
  uVar4 = FUN_107a6660();
  uVar5 = FUN_107a6660();
  uVar6 = FUN_107a6660();
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddddd",1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103041e2 UNetworkHandler::ServerPacketCountStart callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ServerPacketCountStart(void) */

void __thiscall UNetworkHandler::ServerPacketCountStart(UNetworkHandler *this)

{
  int iVar1;
  
                    /* 0x41e2  7779  ?ServerPacketCountStart@UNetworkHandler@@UAEXXZ */
  iVar1 = *(int *)(this + 0x48);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4ef0) = 1;
    appMemset((void *)(iVar1 + 0x4980),0,0x3fc);
  }
  return;
}


// ==== 103042a0 UNetworkHandler::RequestPrivateStoreManageCancel callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreManageCancel(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreManageCancel(UNetworkHandler *this)

{
                    /* 0x42a0  7517  ?RequestPrivateStoreManageCancel@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x75);
  return;
}


// ==== 1030441c UNetworkHandler::RequestExMPCCShowPartyMembersInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExMPCCShowPartyMembersInfo(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestExMPCCShowPartyMembersInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x441c  7432
                       ?RequestExMPCCShowPartyMembersInfo@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x26,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030474b UNetworkHandler::RequestDeleteMacro callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestDeleteMacro(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestDeleteMacro(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x474b  7405  ?RequestDeleteMacro@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xc2,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103048a9 UNetworkHandler::RequestDuelAnswerStart callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestDuelAnswerStart(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestDuelAnswerStart(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x48a9  7416
                       ?RequestDuelAnswerStart@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080e7a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chddd",0xd0,0x28,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103048ea UNetworkHandler::GetAllianceCrestTexFromAllianceCrestID callees=
// strings: 

/* public: virtual class UTexture * __thiscall
   UNetworkHandler::GetAllianceCrestTexFromAllianceCrestID(int) */

UTexture * __thiscall
UNetworkHandler::GetAllianceCrestTexFromAllianceCrestID(UNetworkHandler *this,int param_1)

{
  int iVar1;
  int iVar2;
  UTexture *pUVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x48ea  4344
                       ?GetAllianceCrestTexFromAllianceCrestID@UNetworkHandler@@UAEPAVUTexture@@H@Z
                        */
  puStack_8 = &LAB_10810328;
  pvStack_c = ExceptionList;
  if (0 < param_1) {
    iVar4 = 0;
    iVar1 = *(int *)(*(int *)(this + 0x48) + 0x4f2c);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(this + 0x48) + 0x4f28) + 8 + iVar4 * 0xc);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0xcc) == param_1)) {
          pUVar3 = *(UTexture **)(iVar2 + 0xe4);
          if (pUVar3 == (UTexture *)0x0) {
            uStack_4 = 0xffffffff;
            ExceptionList = &pvStack_c;
            thunk_FUN_1042cce0();
            ExceptionList = pvStack_c;
            return (UTexture *)0x0;
          }
          uStack_4 = 0xffffffff;
          ExceptionList = &pvStack_c;
          thunk_FUN_1042cce0();
          ExceptionList = pvStack_c;
          return pUVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return (UTexture *)0x0;
}


// ==== 10304b5b UNetworkHandler::RequestPledgePower callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgePower(int,int,unsigned char *) */

void __thiscall
UNetworkHandler::RequestPledgePower(UNetworkHandler *this,int param_1,int param_2,uchar *param_3)

{
  uchar uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
                    /* 0x4b5b  7504  ?RequestPledgePower@UNetworkHandler@@UAEXHHPAE@Z */
  if (param_2 == 1) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),&DAT_1087fb50,0xc0,param_1,1);
  }
  else if (param_2 == 2) {
    uVar4 = 0;
    pcVar2 = GLog_exref;
    if (param_3 != (uchar *)0x0) {
      iVar3 = 0x1f;
      do {
        uVar1 = param_3[iVar3];
        if (*(int *)pcVar2 != 0) {
          FOutputDevice::Logf2(*(FOutputDevice **)pcVar2,(ushort *)*(FOutputDevice **)pcVar2);
          pcVar2 = GLog_exref;
        }
        iVar3 = iVar3 + -1;
        uVar4 = (uVar4 | uVar1 != '\0') * 2;
      } while (0 < iVar3);
      uVar4 = uVar4 | *param_3;
    }
    if (*(int *)pcVar2 != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)pcVar2,(ushort *)*(FOutputDevice **)pcVar2);
    }
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),&DAT_1087fa3c,0xc0,param_1,2,uVar4);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10304dd6 UNetworkHandler::RequestExOustFromMPCC callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExOustFromMPCC(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestExOustFromMPCC(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x4dd6  7434  ?RequestExOustFromMPCC@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880bc4,0xd0,0xf,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10305060 UNetworkHandler::RequestAuthLogin callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall UNetworkHandler::RequestAuthLogin(unsigned short *,unsigned short
   *,int) */

int __thiscall
UNetworkHandler::RequestAuthLogin(UNetworkHandler *this,ushort *param_1,ushort *param_2,int param_3)

{
                    /* 0x5060  7377  ?RequestAuthLogin@UNetworkHandler@@UAEHPAG0H@Z */
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
  _wcsncpy((wchar_t *)&DAT_10b20f54,(wchar_t *)param_1,0xe);
  _wcsncpy((wchar_t *)&DAT_10b20f72,(wchar_t *)param_2,0x10);
  DAT_10b20f94 = param_3;
  *(undefined4 *)(*(int *)(this + 0x4c) + 0x50bc) = 1;
  *(undefined4 *)(*(int *)(this + 0x4c) + 0x50b8) = 1;
  thunk_FUN_10421670(*(int *)(this + 0x4c) + 0x4858,0x83a);
  *(undefined4 *)(this + 0x50) = 1;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10305358 UNetworkHandler::RequestSetAllyCrest callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestSetAllyCrest(int,char *) */

int __thiscall UNetworkHandler::RequestSetAllyCrest(UNetworkHandler *this,int param_1,char *param_2)

{
                    /* 0x5358  7554  ?RequestSetAllyCrest@UNetworkHandler@@UAEHHPAD@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088029c,0x87,param_1,param_1,param_2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10305434 UNetworkHandler::SendServerStatus callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendServerStatus(class L2ParamStack &) */

void __thiscall UNetworkHandler::SendServerStatus(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x5434  7710  ?SendServerStatus@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10881a1c,0x39,2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030549d UNetworkHandler::RequestCursedWeaponLocation callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestCursedWeaponLocation(void) */

void __thiscall UNetworkHandler::RequestCursedWeaponLocation(UNetworkHandler *this)

{
                    /* 0x549d  7404  ?RequestCursedWeaponLocation@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x23);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 103055dd UNetworkHandler::GetStaticObject callees=
// strings: 

/* public: virtual struct FServerStaticObject * __thiscall UNetworkHandler::GetStaticObject(int) */

FServerStaticObject * __thiscall UNetworkHandler::GetStaticObject(UNetworkHandler *this,int param_1)

{
  int *piVar1;
  
                    /* 0x55dd  5164
                       ?GetStaticObject@UNetworkHandler@@UAEPAUFServerStaticObject@@H@Z */
  if ((((-1 < param_1) && (DAT_10b1f538 != 0)) &&
      (piVar1 = (int *)thunk_FUN_104226e0(&param_1), piVar1 != (int *)0x0)) &&
     ((*piVar1 == 4 && ((FServerStaticObject *)piVar1[1] != (FServerStaticObject *)0x0)))) {
    return (FServerStaticObject *)piVar1[1];
  }
  return (FServerStaticObject *)0x0;
}


// ==== 10305673 UNetworkHandler::GetPetNearestObject callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class FObjectMap * __thiscall UNetworkHandler::GetPetNearestObject(int,float,int)
    */

FObjectMap * __thiscall
UNetworkHandler::GetPetNearestObject(UNetworkHandler *this,int param_1,float param_2,int param_3)

{
  float fVar1;
  FObjectMap *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float fStack_28;
  FObjectMap *pFStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5673  4902  ?GetPetNearestObject@UNetworkHandler@@UAEPAVFObjectMap@@HMH@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810408;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = thunk_FUN_104226e0(*(int *)(this + 0x48) + 0x4f68);
  iVar3 = DAT_10b1f538;
  iVar7 = 0;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
    fStack_28 = param_2;
    pFStack_24 = (FObjectMap *)0x0;
    if (DAT_10b1f538 != 0) {
      piVar6 = (int *)(DAT_10b1f538 + 0x194);
      uStack_4 = 0;
      if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
        do {
          pFVar2 = *(FObjectMap **)(*piVar6 + 8 + iVar7 * 0xc);
          if (((pFVar2 != (FObjectMap *)0x0) && (*(int *)(pFVar2 + 4) != 0)) &&
             (iVar5 = (**(code **)(*(int *)this + 0x52c))(param_1,pFVar2), iVar5 != 0)) {
            fVar8 = (float10)(**(code **)(*(int *)this + 0x528))(pFVar2,iVar4);
            fVar1 = (float)fVar8;
            if ((((float)_DAT_10854b60 <= fVar1) && (fVar1 < fStack_28)) &&
               (iVar5 = thunk_FUN_103ffaa0(), iVar5 != param_3)) {
              fStack_28 = fVar1;
              pFStack_24 = pFVar2;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar3 + 0x198));
      }
    }
    ExceptionList = pvStack_c;
    return pFStack_24;
  }
  ExceptionList = pvStack_c;
  return (FObjectMap *)0x0;
}


// ==== 103056c3 UNetworkHandler::Destroy callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Destroy(void) */

void __thiscall UNetworkHandler::Destroy(UNetworkHandler *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x56c3  3800  ?Destroy@UNetworkHandler@@UAEXXZ */
  iVar2 = 0;
  DAT_10b1f538 = 0;
  if (0 < *(int *)(this + 0x40)) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x3c) + iVar2 * 4);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 8) != 0) {
          (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(iVar1 + 8));
        }
        (**(code **)(**(int **)GMalloc_exref + 8))(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x40));
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  FArray::Realloc((FArray *)(this + 0x3c),4);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x16c));
                    /* WARNING: Could not recover jumptable at 0x1042bb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::Destroy((UObject *)this);
  return;
}


// ==== 103057b8 UNetworkHandler::SetPrivateStoreBuyMsg callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SetPrivateStoreBuyMsg(unsigned short *) */

void __thiscall UNetworkHandler::SetPrivateStoreBuyMsg(UNetworkHandler *this,ushort *param_1)

{
                    /* 0x57b8  7981  ?SetPrivateStoreBuyMsg@UNetworkHandler@@UAEXPAG@Z */
  if (param_1 != (ushort *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x94,param_1)
    ;
  }
  return;
}


// ==== 10305826 UNetworkHandler::UNetworkHandler callees=
// strings: 

/* public: __thiscall UNetworkHandler::UNetworkHandler(class UNetworkHandler const &) */

UNetworkHandler * __thiscall
UNetworkHandler::UNetworkHandler(UNetworkHandler *this,UNetworkHandler *param_1)

{
  int iVar1;
  UNetworkHandler *pUVar2;
  UNetworkHandler *pUVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x5826  848  ??0UNetworkHandler@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810d4f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UL2NetHandler::UL2NetHandler((UL2NetHandler *)this,(UL2NetHandler *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_10422860(param_1 + 0x3c);
  uStack_4._0_1_ = 1;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  pUVar2 = param_1 + 100;
  pUVar3 = this + 100;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  pUVar2 = param_1 + 0xe8;
  pUVar3 = this + 0xe8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *pUVar3 = *pUVar2;
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 400);
  thunk_FUN_10433850(param_1 + 0x194);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  thunk_FUN_10433c00(param_1 + 0x1a8);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10305916 UNetworkHandler::RequestAllyInfo callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestAllyInfo(void) */

int __thiscall UNetworkHandler::RequestAllyInfo(UNetworkHandler *this)

{
                    /* 0x5916  7370  ?RequestAllyInfo@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x8e);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 103059ac UNetworkHandler::RequestAddTradeItem callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestAddTradeItem(struct ItemInfo) */

int __thiscall
UNetworkHandler::RequestAddTradeItem
          (UNetworkHandler *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
                    /* 0x59ac  7368  ?RequestAddTradeItem@UNetworkHandler@@UAEHUItemInfo@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0x16,1,param_3,param_5);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10305b69 UNetworkHandler::RequestUseItem callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestUseItem(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestUseItem(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x5b69  7584  ?RequestUseItem@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x14,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10305df8 UNetworkHandler::RequestQuestList callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestQuestList(void) */

int __thiscall UNetworkHandler::RequestQuestList(UNetworkHandler *this)

{
                    /* 0x5df8  7522  ?RequestQuestList@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,99);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10305e7a UNetworkHandler::ReplyGameGuardQuery callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ReplyGameGuardQuery(unsigned long,unsigned
   long,unsigned long,unsigned long) */

void __thiscall
UNetworkHandler::ReplyGameGuardQuery
          (UNetworkHandler *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
                    /* 0x5e7a  7362  ?ReplyGameGuardQuery@UNetworkHandler@@UAEXKKKK@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddd",0xca,param_1,param_2,param_3,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030602d UNetworkHandler::ContinueServerClose callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ContinueServerClose(void) */

void __thiscall UNetworkHandler::ContinueServerClose(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x602d  3688  ?ContinueServerClose@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_108103d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10431700();
  thunk_FUN_10431960();
  thunk_FUN_104319c0();
  thunk_FUN_103ff8a0();
  thunk_FUN_1042d1c0();
  ExceptionList = pvStack_10;
  return;
}


// ==== 10306050 UNetworkHandler::RequestDestroyItem callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestDestroyItem(struct ItemInfo) */

int __thiscall
UNetworkHandler::RequestDestroyItem
          (UNetworkHandler *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
                    /* 0x6050  7406  ?RequestDestroyItem@UNetworkHandler@@UAEHUItemInfo@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x59,param_3,param_5);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10306113 UNetworkHandler::RequestOpenMinimap callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestOpenMinimap(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestOpenMinimap(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x6113  7485  ?RequestOpenMinimap@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xcd);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 103062e9 UNetworkHandler::SetPrivateStoreBuyList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SetPrivateStoreBuyList(class L2ParamStack &) */

void __thiscall UNetworkHandler::SetPrivateStoreBuyList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  void *pvStack_2418;
  short sStack_2410;
  short sStack_240c;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x62e9  7980
                       ?SetPrivateStoreBuyList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x10408f2a;
  iVar8 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvStack_2418 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      pvVar6 = L2ParamStack::Top(param_1);
      sStack_240c = (short)pvVar3;
      sStack_2410 = (short)pvVar4;
      iVar7 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar8,0x2400 - iVar8,
                                 "dhhdd",pvVar2,(int)sStack_240c,(int)sStack_2410,pvVar5,pvVar6);
      iVar8 = iVar8 + iVar7;
      pvStack_2418 = (void *)((int)pvStack_2418 + -1);
    } while (pvStack_2418 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088029c,0x91,pvVar1,iVar8,auStack_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10306307 UNetworkHandler::RequestConfirmRefinerItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestConfirmRefinerItem(int,int) */

void __thiscall
UNetworkHandler::RequestConfirmRefinerItem(UNetworkHandler *this,int param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x6307  7398  ?RequestConfirmRefinerItem@UNetworkHandler@@UAEXHH@Z */
  puStack_c = &LAB_1080e7c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880ab0,0xd0,0x2a,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10306343 UNetworkHandler::RequestRemainTime callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRemainTime(void) */

void __thiscall UNetworkHandler::RequestRemainTime(UNetworkHandler *this)

{
                    /* 0x6343  7540  ?RequestRemainTime@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xa9);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10306447 UNetworkHandler::RequestSellItem callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall UNetworkHandler::RequestSellItem(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestSellItem(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  FOutputDevice *this_00;
  int iVar7;
  void *pvStack_2414;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x6447  7549  ?RequestSellItem@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  uStack_4 = 0x104047ea;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      pvStack_2414 = (void *)((int)pvStack_2414 + -1);
    } while (pvStack_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x1e,pvVar1,pvVar2,iVar7,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030653c UNetworkHandler::ReplyStartAllianceWar callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ReplyStartAllianceWar(class L2ParamStack &) */

void __thiscall UNetworkHandler::ReplyStartAllianceWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x653c  7363  ?ReplyStartAllianceWar@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  return;
}


// ==== 10306555 UNetworkHandler::RequestPledgeInfo callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestPledgeInfo(int) */

int __thiscall UNetworkHandler::RequestPledgeInfo(UNetworkHandler *this,int param_1)

{
  int iStack00000008;
  
                    /* 0x6555  7500  ?RequestPledgeInfo@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x66,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  iStack00000008 = param_1;
  thunk_FUN_1042c300(&stack0x00000008,&stack0x00000008);
  return 1;
}


// ==== 103065d7 UNetworkHandler::RequestRecipeItemMakeInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeItemMakeInfo(int) */

void __thiscall UNetworkHandler::RequestRecipeItemMakeInfo(UNetworkHandler *this,int param_1)

{
                    /* 0x65d7  7525  ?RequestRecipeItemMakeInfo@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xae,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10306681 UNetworkHandler::RequestRecipeShopManageCancel callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopManageCancel(void) */

void __thiscall UNetworkHandler::RequestRecipeShopManageCancel(UNetworkHandler *this)

{
                    /* 0x6681  7530  ?RequestRecipeShopManageCancel@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xb4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030670d UNetworkHandler::RequestExEnchantSkillInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExEnchantSkillInfo(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestExEnchantSkillInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x670d  7429
                       ?RequestExEnchantSkillInfo@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880ab0,0xd0,6,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10306843 UNetworkHandler::RequestBypassToServer callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestBypassToServer(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestBypassToServer(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x6843  7384  ?RequestBypassToServer@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x21,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10306960 UNetworkHandler::BypassUserCmd callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::BypassUserCmd(class L2ParamStack &) */

void __thiscall UNetworkHandler::BypassUserCmd(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x6960  3450  ?BypassUserCmd@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xaa,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103069ec UNetworkHandler::GetNearestParty callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNearestParty(float,int) */

User * __thiscall UNetworkHandler::GetNearestParty(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x69ec  4818  ?GetNearestParty@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x538))(4,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 10306c1c UNetworkHandler::RequestMagicSkillUse callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestMagicSkillUse(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestMagicSkillUse(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0x6c1c  7472  ?RequestMagicSkillUse@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087f698,0x2f,pvVar1,pvVar2,(uint)pvVar3 & 0xff);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10306dca UNetworkHandler::RequestBBSWrite callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestBBSWrite(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestBBSWrite(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  FOutputDevice *this_00;
  
                    /* 0x6dca  7380  ?RequestBBSWrite@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cSSSSSS",0x22,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5,pvVar6);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10306f0f UNetworkHandler::GetOnVehicle callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::GetOnVehicle(int,class FVector) */

void __thiscall UNetworkHandler::GetOnVehicle(UNetworkHandler *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x6f0f  4857  ?GetOnVehicle@UNetworkHandler@@UAEXHVFVector@@@Z */
  piVar1 = *(int **)(this + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cdddd",0x42,param_1,uVar3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10306fc3 UNetworkHandler::RequestManorList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestManorList(void) */

void __thiscall UNetworkHandler::RequestManorList(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x6fc3  7477  ?RequestManorList@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_1080e680;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10306fe6 UNetworkHandler::ReplyStopAllianceWar callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ReplyStopAllianceWar(class L2ParamStack &) */

void __thiscall UNetworkHandler::ReplyStopAllianceWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x6fe6  7364  ?ReplyStopAllianceWar@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  return;
}


// ==== 103071b7 UNetworkHandler::RequestExSetPledgeCrestLarge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestExSetPledgeCrestLarge(int,char *) */

int __thiscall
UNetworkHandler::RequestExSetPledgeCrestLarge(UNetworkHandler *this,int param_1,char *param_2)

{
  int *piVar1;
  
                    /* 0x71b7  7436  ?RequestExSetPledgeCrestLarge@UNetworkHandler@@UAEHHPAD@Z */
  piVar1 = *(int **)(this + 0x48);
  if (param_1 == 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_1088038c,0xd0,0x11,0);
  }
  else {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_10880384,0xd0,0x11,param_1,param_1,param_2);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 103074dc UNetworkHandler::RequestBlock callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestBlock(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestBlock(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
                    /* 0x74dc  7381  ?RequestBlock@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  switch(pvVar1) {
  case (void *)0x0:
    pvVar1 = L2ParamStack::Top(param_1);
    uVar2 = 0;
    break;
  case (void *)0x1:
    pvVar1 = L2ParamStack::Top(param_1);
    uVar2 = 1;
    break;
  case (void *)0x2:
  case (void *)0x3:
  case (void *)0x4:
    (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xa0,pvVar1);
  default:
    goto switchD_10405ce8_default;
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880cf0,0xa0,uVar2,pvVar1);
switchD_10405ce8_default:
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10307694 UNetworkHandler::RequestMagicItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestMagicItem(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestMagicItem(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x7694  7470  ?RequestMagicItem@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x3e);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030772f UNetworkHandler::RequestPetitionCancel callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestPetitionCancel(void) */

int __thiscall UNetworkHandler::RequestPetitionCancel(UNetworkHandler *this)

{
                    /* 0x772f  7497  ?RequestPetitionCancel@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x80);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10307c5c UNetworkHandler::RequestWriteHeroWords callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestWriteHeroWords(class FString) */

void __thiscall UNetworkHandler::RequestWriteHeroWords(UNetworkHandler *this)

{
  ushort *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x7c5c  7591  ?RequestWriteHeroWords@UNetworkHandler@@UAEXVFString@@@Z */
  puStack_c = &LAB_1080e6b9;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880bc4,0xd0,0xc,puVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10307c70 UNetworkHandler::SendSummonCmd callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendSummonCmd(class L2ParamStack &) */

void __thiscall UNetworkHandler::SendSummonCmd(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x7c70  7711  ?SendSummonCmd@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10881940,0x39,1,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10307d4c UNetworkHandler::RequestGetItemFromPet callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestGetItemFromPet(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestGetItemFromPet(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
                    /* 0x7d4c  7447  ?RequestGetItemFromPet@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0x8c,pvVar1,pvVar2,pvVar3);
  return;
}


// ==== 10307de2 UNetworkHandler::RequestTargetCancel callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestTargetCancel(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestTargetCancel(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x7de2  7575  ?RequestTargetCancel@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088095c,0x37,(int)(short)pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10307f09 UNetworkHandler::GetVehicle callees=
// strings: 

/* public: virtual struct FVehicle * __thiscall UNetworkHandler::GetVehicle(int) */

FVehicle * __thiscall UNetworkHandler::GetVehicle(UNetworkHandler *this,int param_1)

{
  int *piVar1;
  
                    /* 0x7f09  5289  ?GetVehicle@UNetworkHandler@@UAEPAUFVehicle@@H@Z */
  if ((((DAT_10b1f538 != 0) && (piVar1 = (int *)thunk_FUN_104226e0(&param_1), piVar1 != (int *)0x0))
      && (*piVar1 == 3)) && ((FVehicle *)piVar1[1] != (FVehicle *)0x0)) {
    return (FVehicle *)piVar1[1];
  }
  return (FVehicle *)0x0;
}


// ==== 10307fb8 UNetworkHandler::RequestTutorialPassCmdToServer callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTutorialPassCmdToServer(class L2ParamStack
   &) */

int __thiscall
UNetworkHandler::RequestTutorialPassCmdToServer(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x7fb8  7581
                       ?RequestTutorialPassCmdToServer@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x7c,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 103082dd UNetworkHandler::RequestSendL2FriendSay callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSendL2FriendSay(unsigned short *,unsigned
   short *) */

void __thiscall
UNetworkHandler::RequestSendL2FriendSay(UNetworkHandler *this,ushort *param_1,ushort *param_2)

{
                    /* 0x82dd  7550  ?RequestSendL2FriendSay@UNetworkHandler@@UAEXPAG0@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_108806cc,0xcc,param_2,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030849f UNetworkHandler::SendCharacterInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendCharacterInfo(class L2ParamStack &) */

void __thiscall UNetworkHandler::SendCharacterInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x849f  7702  ?SendCharacterInfo@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10881940,0x39,0,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030855d UNetworkHandler::RequestTradeDone callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTradeDone(int) */

int __thiscall UNetworkHandler::RequestTradeDone(UNetworkHandler *this,int param_1)

{
                    /* 0x855d  7578  ?RequestTradeDone@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x17,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10308698 UNetworkHandler::RequestPackageSendableItemList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPackageSendableItemList(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestPackageSendableItemList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x8698  7493
                       ?RequestPackageSendableItemList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x9e,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103086bb UNetworkHandler::RequestRecipeBookOpen callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeBookOpen(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestRecipeBookOpen(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x86bb  7523  ?RequestRecipeBookOpen@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xac,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103087ab UNetworkHandler::RequestHennaUnequipInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHennaUnequipInfo(int) */

void __thiscall UNetworkHandler::RequestHennaUnequipInfo(UNetworkHandler *this,int param_1)

{
                    /* 0x87ab  7456  ?RequestHennaUnequipInfo@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xbe,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103089bd UNetworkHandler::RequestSendMsnChatLog callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSendMsnChatLog(unsigned short *,unsigned
   short *,int) */

void __thiscall
UNetworkHandler::RequestSendMsnChatLog
          (UNetworkHandler *this,ushort *param_1,ushort *param_2,int param_3)

{
                    /* 0x89bd  7551  ?RequestSendMsnChatLog@UNetworkHandler@@UAEXPAG0H@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10883274,0xce,param_2,param_1,param_3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10308af3 UNetworkHandler::RequestExEnchantSkill callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExEnchantSkill(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestExEnchantSkill(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x8af3  7428  ?RequestExEnchantSkill@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880ab0,0xd0,7,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10308b8e UNetworkHandler::Action callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Action(int,class FVector,int) */

void __thiscall UNetworkHandler::Action(UNetworkHandler *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_stack_00000014;
  
                    /* 0x8b8e  3227  ?Action@UNetworkHandler@@UAEXHVFVector@@H@Z */
  if (0 < param_1) {
    uVar1 = FUN_107a6660();
    uVar2 = FUN_107a6660();
    uVar3 = FUN_107a6660();
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),"cddddc",4,param_1,uVar1,uVar2,uVar3,in_stack_00000014);
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  }
  return;
}


// ==== 10308bbb UNetworkHandler::RequestJoinPartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestJoinPartyRoom(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestJoinPartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  FOutputDevice *this_00;
  
                    /* 0x8bbb  7463  ?RequestJoinPartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddd",0x71,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10308cba UNetworkHandler::RequestRecipeShopMessageSet callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopMessageSet(unsigned short *) */

void __thiscall UNetworkHandler::RequestRecipeShopMessageSet(UNetworkHandler *this,ushort *param_1)

{
                    /* 0x8cba  7533  ?RequestRecipeShopMessageSet@UNetworkHandler@@UAEXPAG@Z */
  if (param_1 != (ushort *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0xb1,param_1)
    ;
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10308eae UNetworkHandler::RequestGMList callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestGMList(void) */

int __thiscall UNetworkHandler::RequestGMList(UNetworkHandler *this)

{
                    /* 0x8eae  7444  ?RequestGMList@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x81);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1030905c UNetworkHandler::AuthReconnect callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::AuthReconnect(void) */

void __thiscall UNetworkHandler::AuthReconnect(UNetworkHandler *this)

{
  int iVar1;
  
                    /* 0x905c  3416  ?AuthReconnect@UNetworkHandler@@UAEXXZ */
  *(undefined4 *)(this + 0x50) = 0;
  iVar1 = *(int *)(DAT_10b1f538 + 0x4c);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
  iVar1 = *(int *)(this + 0x48);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  if (*(int *)(iVar1 + 0x495c) != 0) {
    *(undefined4 *)(iVar1 + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  *(undefined4 *)(*(int *)(this + 0x48) + 0x38) = 0;
  *(undefined4 *)(*(int *)(this + 0x48) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(this + 0x48) + 0x4854) = 0;
  *(undefined4 *)(*(int *)(this + 0x48) + 0x50bc) = 0;
  return;
}


// ==== 10309241 UNetworkHandler::RequestConfirmCastleSiegeWaitingList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestConfirmCastleSiegeWaitingList(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestConfirmCastleSiegeWaitingList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0x9241  7394
                       ?RequestConfirmCastleSiegeWaitingList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0xa5,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030943f UNetworkHandler::RequestRefine callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRefine(int,int,int,int) */

void __thiscall
UNetworkHandler::RequestRefine
          (UNetworkHandler *this,int param_1,int param_2,int param_3,int param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x943f  7536  ?RequestRefine@UNetworkHandler@@UAEXHHHH@Z */
  puStack_c = &LAB_1080e7e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdddd",0xd0,0x2c,param_1,param_2,param_3,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103095e8 UNetworkHandler::NotifyQuestMark callees=
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


// ==== 103095ed UNetworkHandler::RequestStartPledgeWar callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestStartPledgeWar(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestStartPledgeWar(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x95ed  7569  ?RequestStartPledgeWar@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x4d,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10309679 UNetworkHandler::RequestListPartyMatchingWaitingRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestListPartyMatchingWaitingRoom(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestListPartyMatchingWaitingRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x9679  7467
                       ?RequestListPartyMatchingWaitingRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  puStack_c = &LAB_1080e760;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdddd",0xd0,0x16,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103096a1 UNetworkHandler::RequestBuyItem callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall UNetworkHandler::RequestBuyItem(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestBuyItem(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  FOutputDevice *this_00;
  int iVar6;
  void *pvStack_2410;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x96a1  7382  ?RequestBuyItem@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  uStack_4 = 0x104048fa;
  iVar6 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      pvStack_2410 = (void *)((int)pvStack_2410 + -1);
    } while (pvStack_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x1f,pvVar1,pvVar2,iVar6,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 103097a0 UNetworkHandler::Atk callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Atk(int,class FVector,int) */

void __thiscall UNetworkHandler::Atk(UNetworkHandler *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_stack_00000014;
  
                    /* 0x97a0  3396  ?Atk@UNetworkHandler@@UAEXHVFVector@@H@Z */
  if (0 < param_1) {
    uVar1 = FUN_107a6660();
    uVar2 = FUN_107a6660();
    uVar3 = FUN_107a6660();
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),"cddddc",10,param_1,uVar1,uVar2,uVar3,in_stack_00000014);
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  }
  return;
}


// ==== 103097be UNetworkHandler::RequestOustFromPartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestOustFromPartyRoom(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestOustFromPartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x97be  7488
                       ?RequestOustFromPartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088038c,0xd0,1,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10309822 UNetworkHandler::RequestCursedWeaponList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestCursedWeaponList(void) */

void __thiscall UNetworkHandler::RequestCursedWeaponList(UNetworkHandler *this)

{
                    /* 0x9822  7403  ?RequestCursedWeaponList@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x22);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 103098ea UNetworkHandler::FinishRotating callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::FinishRotating(int) */

void __thiscall UNetworkHandler::FinishRotating(UNetworkHandler *this,int param_1)

{
                    /* 0x98ea  4248  ?FinishRotating@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087fb50,0x4b,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10309a7f UNetworkHandler::GetOffVehicle callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::GetOffVehicle(int,class FVector) */

void __thiscall UNetworkHandler::GetOffVehicle(UNetworkHandler *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x9a7f  4854  ?GetOffVehicle@UNetworkHandler@@UAEXHVFVector@@@Z */
  piVar1 = *(int **)(this + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cdddd",0x43,param_1,uVar3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10309afc UNetworkHandler::RequestDuelSurrender callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestDuelSurrender(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestDuelSurrender(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x9afc  7420  ?RequestDuelSurrender@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  puStack_c = &LAB_1080e810;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x30);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10309c00 UNetworkHandler::StaticClass callees=
// strings: 

/* public: static class UClass * __cdecl UNetworkHandler::StaticClass(void) */

UClass * __cdecl UNetworkHandler::StaticClass(void)

{
                    /* 0x9c00  8435  ?StaticClass@UNetworkHandler@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10309c46 UNetworkHandler::MoveWithDelta callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::MoveWithDelta(class FVector) */

void __thiscall UNetworkHandler::MoveWithDelta(UNetworkHandler *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x9c46  6201  ?MoveWithDelta@UNetworkHandler@@UAEXVFVector@@@Z */
  uVar1 = FUN_107a6660();
  uVar2 = FUN_107a6660();
  uVar3 = FUN_107a6660();
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0x41,uVar1,uVar2,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10309dfe UNetworkHandler::RequestTutorialLinkHtml callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTutorialLinkHtml(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestTutorialLinkHtml(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x9dfe  7580
                       ?RequestTutorialLinkHtml@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x7b,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10309e17 UNetworkHandler::GetItem callees=
// strings: 

/* public: virtual struct Item * __thiscall UNetworkHandler::GetItem(int) */

Item * __thiscall UNetworkHandler::GetItem(UNetworkHandler *this,int param_1)

{
  int *piVar1;
  
                    /* 0x9e17  4667  ?GetItem@UNetworkHandler@@UAEPAUItem@@H@Z */
  if ((((DAT_10b1f538 != 0) && (piVar1 = (int *)thunk_FUN_104226e0(&param_1), piVar1 != (int *)0x0))
      && (*piVar1 == 2)) && ((Item *)piVar1[1] != (Item *)0x0)) {
    return (Item *)piVar1[1];
  }
  return (Item *)0x0;
}


// ==== 10309f4d UNetworkHandler::RequestFriendAddReply callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestFriendAddReply(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestFriendAddReply(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x9f4d  7439  ?RequestFriendAddReply@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x5f,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10309f8e UNetworkHandler::RequestGameStart callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestGameStart(int,short,int,int,int) */

int __thiscall
UNetworkHandler::RequestGameStart
          (UNetworkHandler *this,int param_1,short param_2,int param_3,int param_4,int param_5)

{
                    /* 0x9f8e  7445  ?RequestGameStart@UNetworkHandler@@UAEHHFHHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdhddd",0xd,param_1,(int)param_2,param_3,param_4,param_5);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030a060 UNetworkHandler::RequestShortCutUse callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestShortCutUse(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestShortCutUse(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0xa060  7563  ?RequestShortCutUse@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087f698,0x34,pvVar1,pvVar2,(uint)pvVar3 & 0xff);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030a51a UNetworkHandler::RequestSSQStatus callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSSQStatus(int) */

void __thiscall UNetworkHandler::RequestSSQStatus(UNetworkHandler *this,int param_1)

{
                    /* 0xa51a  7548  ?RequestSSQStatus@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10881a1c,199,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030a641 UNetworkHandler::ShowQuestList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ShowQuestList(void) */

void __thiscall UNetworkHandler::ShowQuestList(UNetworkHandler *this)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xa641  8118  ?ShowQuestList@UNetworkHandler@@UAEXXZ */
  puStack_8 = &LAB_108104a8;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(this + 0x48);
  iVar3 = 0;
  uStack_4 = 0;
  ppvVar2 = &pvStack_c;
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
  ExceptionList = pvStack_c;
  return;
}


// ==== 1030a6d2 UNetworkHandler::RequestRestart callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRestart(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestRestart(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xa6d2  7544  ?RequestRestart@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x46);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030a79a UNetworkHandler::GetNearestNPC callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNearestNPC(float,int) */

User * __thiscall UNetworkHandler::GetNearestNPC(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xa79a  4816  ?GetNearestNPC@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x538))(5,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030a858 UNetworkHandler::GetNextFriend callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNextFriend(float,int) */

User * __thiscall UNetworkHandler::GetNextFriend(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xa858  4826  ?GetNextFriend@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x53c))(3,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030a94d UNetworkHandler::RequestHennaItemList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHennaItemList(void) */

void __thiscall UNetworkHandler::RequestHennaItemList(UNetworkHandler *this)

{
                    /* 0xa94d  7454  ?RequestHennaItemList@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xba);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030a9f7 UNetworkHandler::RequestHennaItemInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHennaItemInfo(int) */

void __thiscall UNetworkHandler::RequestHennaItemInfo(UNetworkHandler *this,int param_1)

{
                    /* 0xa9f7  7453  ?RequestHennaItemInfo@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xbb,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030aaa6 UNetworkHandler::RequestShortCutReg callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestShortCutReg(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestShortCutReg(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
                    /* 0xaaa6  7562  ?RequestShortCutReg@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddd",0x33,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030ac22 UNetworkHandler::RequestOustAlly callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestOustAlly(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestOustAlly(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xac22  7486  ?RequestOustAlly@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x85,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030ac31 UNetworkHandler::RequestChangePetName callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestChangePetName(unsigned short *) */

void __thiscall UNetworkHandler::RequestChangePetName(UNetworkHandler *this,ushort *param_1)

{
                    /* 0xac31  7388  ?RequestChangePetName@UNetworkHandler@@UAEXPAG@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x89,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030ac3b UNetworkHandler::RequestHennaEquip callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHennaEquip(int) */

void __thiscall UNetworkHandler::RequestHennaEquip(UNetworkHandler *this,int param_1)

{
                    /* 0xac3b  7452  ?RequestHennaEquip@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xbc,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030ad2b UNetworkHandler::RequestCreatePledge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestCreatePledge(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestCreatePledge(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xad2b  7401  ?RequestCreatePledge@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x23,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030adf3 UNetworkHandler::SAP callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SAP(void) */

void __thiscall UNetworkHandler::SAP(UNetworkHandler *this)

{
                    /* 0xadf3  7663  ?SAP@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x30);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030ae2f UNetworkHandler::RequestLinkHtml callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestLinkHtml(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestLinkHtml(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xae2f  7465  ?RequestLinkHtml@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x20,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030af7e UNetworkHandler::RequestExFishRanking callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExFishRanking(void) */

void __thiscall UNetworkHandler::RequestExFishRanking(UNetworkHandler *this)

{
                    /* 0xaf7e  7431  ?RequestExFishRanking@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x1f);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030b00f UNetworkHandler::SendLogOutPacket callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendLogOutPacket(void) */

void __thiscall UNetworkHandler::SendLogOutPacket(UNetworkHandler *this)

{
                    /* 0xb00f  7705  ?SendLogOutPacket@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,9);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030b0fa UNetworkHandler::RequestPrivateStoreManage callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreManage(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreManage(UNetworkHandler *this)

{
                    /* 0xb0fa  7516  ?RequestPrivateStoreManage@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x73);
  return;
}


// ==== 1030b118 UNetworkHandler::RequestRecipeShopManageQuit callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopManageQuit(void) */

void __thiscall UNetworkHandler::RequestRecipeShopManageQuit(UNetworkHandler *this)

{
                    /* 0xb118  7532  ?RequestRecipeShopManageQuit@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xb3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030b17c UNetworkHandler::GetNextEnemy callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNextEnemy(float,int) */

User * __thiscall UNetworkHandler::GetNextEnemy(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xb17c  4825  ?GetNextEnemy@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x53c))(2,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030b19f UNetworkHandler::RequestSkillItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSkillItem(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestSkillItem(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xb19f  7567  ?RequestSkillItem@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x3f);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030b1d1 UNetworkHandler::GetNextParty callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNextParty(float,int) */

User * __thiscall UNetworkHandler::GetNextParty(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xb1d1  4831  ?GetNextParty@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x53c))(4,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030b29e UNetworkHandler::RequestGiveItemToPet callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestGiveItemToPet(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestGiveItemToPet(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0xb29e  7448  ?RequestGiveItemToPet@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x8b,pvVar1,pvVar2);
  return;
}


// ==== 1030b46a UNetworkHandler::RequestMagicSkillList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestMagicSkillList(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestMagicSkillList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0xb46a  7471  ?RequestMagicSkillList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff0c,0x2e,pvVar2,pvVar1,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030b500 UNetworkHandler::RequestHandOverPartyMaster callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHandOverPartyMaster(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestHandOverPartyMaster(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xb500  7451
                       ?RequestHandOverPartyMaster@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_10880bc4,0xd0,4,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030b550 UNetworkHandler::GetQuestList callees=
// strings: 

/* public: virtual struct MyQuestInfo & __thiscall UNetworkHandler::GetQuestList(void) */

MyQuestInfo * __thiscall UNetworkHandler::GetQuestList(UNetworkHandler *this)

{
                    /* 0xb550  4937  ?GetQuestList@UNetworkHandler@@UAEAAUMyQuestInfo@@XZ */
  return (MyQuestInfo *)(*(int *)(this + 0x48) + 0x5024);
}


// ==== 1030b71c UNetworkHandler::RequestJoinAlly callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestJoinAlly(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestJoinAlly(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xb71c  7459  ?RequestJoinAlly@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x82,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030b861 UNetworkHandler::SendPrivateStoreBuyList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SendPrivateStoreBuyList(class L2ParamStack &) */

void __thiscall
UNetworkHandler::SendPrivateStoreBuyList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  FOutputDevice *this_00;
  int iVar7;
  void *pvStack_2414;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0xb861  7708
                       ?SendPrivateStoreBuyList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x10408dda;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      pvStack_2414 = (void *)((int)pvStack_2414 + -1);
    } while (pvStack_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x79,pvVar1,pvVar2,iVar7,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030b93d UNetworkHandler::RequestTutorialClientEvent callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTutorialClientEvent(int) */

int __thiscall UNetworkHandler::RequestTutorialClientEvent(UNetworkHandler *this,int param_1)

{
                    /* 0xb93d  7579  ?RequestTutorialClientEvent@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x7e,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030baaf UNetworkHandler::RequestSCCheck callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall UNetworkHandler::RequestSCCheck(int,int) */

int __thiscall UNetworkHandler::RequestSCCheck(UNetworkHandler *this,int param_1,int param_2)

{
  byte *_Dst;
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uStack_4210;
  undefined2 uStack_420c;
  undefined1 auStack_4208 [4];
  undefined1 auStack_4204 [128];
  char acStack_4184 [196];
  byte abStack_40c0 [64];
  byte abStack_4080 [13];
  uint auStack_4073 [9];
  uint auStack_404c [3];
  byte abStack_4040 [13];
  undefined4 auStack_4033 [12];
  undefined1 auStack_4000 [16380];
  undefined4 uStack_4;
  
                    /* 0xbaaf  7546  ?RequestSCCheck@UNetworkHandler@@UAEHHH@Z */
  uStack_4 = 0x1040380a;
  uVar4 = appRand();
  uVar4 = uVar4 & 0x8000007f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffff80) + 1;
  }
  iVar7 = 0;
  do {
    iVar5 = appRand();
    (&DAT_10b1b490)[iVar7] = (char)iVar5;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x80);
  iVar5 = uVar4 * 0x81;
  _Dst = abStack_4080 + iVar5;
  _memcpy(_Dst,&DAT_10b1b490,0x80);
  auStack_4000[iVar5] = 0;
  _memcpy(_Dst,this + 0xe8,0x80);
  iVar7 = 0x40;
  do {
    _Dst[iVar7] = _Dst[iVar7] ^ abStack_40c0[iVar7 + iVar5];
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x80);
  *(uint *)((int)auStack_4073 + iVar5) =
       *(uint *)((int)auStack_4073 + iVar5) ^ *(uint *)((int)auStack_404c + iVar5);
  iVar7 = 0;
  do {
    _Dst[iVar7] = _Dst[iVar7] ^ abStack_4040[iVar7 + iVar5];
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  uVar1 = *(undefined4 *)((int)auStack_4033 + iVar5);
  *(undefined4 *)((int)auStack_4033 + iVar5) = *(undefined4 *)_Dst;
  *(undefined4 *)_Dst = uVar1;
  uStack_4210 = DAT_1087f648;
  uStack_420c = DAT_1087f64c;
  acStack_4184[0] = '\0';
  _memset(acStack_4184 + 1,0,0x100);
  iVar7 = 0;
  pcVar6 = acStack_4184;
  do {
    bVar2 = _Dst[iVar7] >> 4;
    if (bVar2 < 10) {
      cVar3 = bVar2 + 0x30;
    }
    else {
      cVar3 = bVar2 + 0x37;
    }
    bVar2 = _Dst[iVar7] & 0xf;
    *pcVar6 = cVar3;
    if (bVar2 < 10) {
      cVar3 = bVar2 + 0x30;
    }
    else {
      cVar3 = bVar2 + 0x37;
    }
    pcVar6[1] = cVar3;
    iVar7 = iVar7 + 1;
    pcVar6 = pcVar6 + 2;
  } while (iVar7 < 0x80);
  appMemset(auStack_4204,0,0x80);
  if (*(int *)GL2CurrentTxtCodec_exref != 0) {
    (**(code **)(**(int **)GL2CurrentTxtCodec_exref + 8))
              (acStack_4184,&uStack_4210,&param_2,4,auStack_4204,auStack_4208,4);
  }
  (**(code **)(**(int **)(this + 0x4c) + 0x68))
            (*(int **)(this + 0x4c),&DAT_1087f644,6,param_1,0x80,auStack_4204);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030bac3 UNetworkHandler::RequestReplySurrenderPledgeWar callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestReplySurrenderPledgeWar(class L2ParamStack
   &) */

int __thiscall
UNetworkHandler::RequestReplySurrenderPledgeWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xbac3  7543
                       ?RequestReplySurrenderPledgeWar@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  return 1;
}


// ==== 1030bae6 UNetworkHandler::RequestProcureCrop callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall UNetworkHandler::RequestProcureCrop(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestProcureCrop(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  FOutputDevice *this_00;
  int iVar7;
  void *pvStack_2414;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0xbae6  7519  ?RequestProcureCrop@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  uStack_4 = 0x10404aea;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      pvStack_2414 = (void *)((int)pvStack_2414 + -1);
    } while (pvStack_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0xc3,pvVar1,pvVar2,iVar7,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030bb04 UNetworkHandler::RequestServerLogin callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestServerLogin(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestServerLogin(UNetworkHandler *this,L2ParamStack *param_1)

{
  int *piVar1;
  
                    /* 0xbb04  7553  ?RequestServerLogin@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  DAT_10b20f30 = L2ParamStack::Top(param_1);
  DAT_10b20f44 = L2ParamStack::Top(param_1);
  DAT_10b20f48 = L2ParamStack::Top(param_1);
  piVar1 = *(int **)(DAT_10b1f538 + 0x4c);
  if (piVar1[0xe] != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_1087f698,2,DAT_10b20f34,DAT_10b20f38,DAT_10b20f30);
  }
  return 1;
}


// ==== 1030bb7c UNetworkHandler::RequestMultiSellChoose callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestMultiSellChoose(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestMultiSellChoose(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  FOutputDevice *this_00;
  
                    /* 0xbb7c  7478
                       ?RequestMultiSellChoose@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cddddd",0xa7,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030bbc7 UNetworkHandler::ServerExPacketCountStart callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ServerExPacketCountStart(void) */

void __thiscall UNetworkHandler::ServerExPacketCountStart(UNetworkHandler *this)

{
  int iVar1;
  
                    /* 0xbbc7  7774  ?ServerExPacketCountStart@UNetworkHandler@@UAEXXZ */
  iVar1 = *(int *)(this + 0x48);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4ef4) = 1;
    appMemset((void *)(iVar1 + 0x4d7c),0,0x174);
  }
  return;
}


// ==== 1030bccb UNetworkHandler::RequestPrivateStoreBuyQuit callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreBuyQuit(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreBuyQuit(UNetworkHandler *this)

{
                    /* 0xbccb  7514  ?RequestPrivateStoreBuyQuit@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x93);
  return;
}


// ==== 1030bdb1 UNetworkHandler::GetNextObject callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class FObjectMap * __thiscall UNetworkHandler::GetNextObject(int,float,int) */

FObjectMap * __thiscall
UNetworkHandler::GetNextObject(UNetworkHandler *this,int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  FObjectMap *pFVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  FObjectMap *pFStack_34;
  float fStack_30;
  float fStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xbdb1  4830  ?GetNextObject@UNetworkHandler@@UAEPAVFObjectMap@@HMH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810448;
  pvStack_c = ExceptionList;
  if (param_1 == 0) {
    return (FObjectMap *)0x0;
  }
  ExceptionList = &pvStack_c;
  if (param_1 != *(int *)(this + 0x58)) {
    ExceptionList = &pvStack_c;
    *(int *)(this + 0x58) = param_1;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0xffffffff;
  }
  iVar4 = thunk_FUN_104226e0(&DAT_10b1f530);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == 0)) {
    ExceptionList = pvStack_c;
    return (FObjectMap *)0x0;
  }
  fStack_30 = 0.0;
  if (0 < *(int *)(this + 0x60)) {
    iVar2 = *(int *)this;
    iVar7 = iVar4;
    uVar5 = thunk_FUN_104226e0(this + 0x60);
    fVar9 = (float10)(**(code **)(iVar2 + 0x528))(uVar5,iVar7);
    fStack_30 = (float)fVar9;
    if (fStack_30 < 0.0) {
      fStack_30 = 0.0;
    }
  }
  iVar2 = DAT_10b1f538;
  iVar7 = 0;
  fStack_28 = param_2;
  pFStack_34 = (FObjectMap *)0x0;
  if (DAT_10b1f538 != 0) {
    piVar8 = (int *)(DAT_10b1f538 + 0x194);
    uStack_4 = 0;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        pFVar3 = *(FObjectMap **)(*piVar8 + 8 + iVar7 * 0xc);
        if (((pFVar3 != (FObjectMap *)0x0) && (*(int *)(pFVar3 + 4) != 0)) &&
           (iVar6 = (**(code **)(*(int *)this + 0x52c))(param_1,pFVar3), iVar6 != 0)) {
          fVar9 = (float10)(**(code **)(*(int *)this + 0x528))(pFVar3,iVar4);
          fVar1 = (float)fVar9;
          if ((((float)_DAT_10854b60 <= fVar1) && (fStack_30 < fVar1)) &&
             ((fVar1 < fStack_28 && (iVar6 = thunk_FUN_103ffaa0(), iVar6 != param_3)))) {
            pFStack_34 = pFVar3;
            fStack_28 = fVar1;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar2 + 0x198));
    }
    uStack_4 = 0xffffffff;
    thunk_FUN_1042cca0();
    if (pFStack_34 != (FObjectMap *)0x0) goto LAB_10432d9a;
  }
  pFStack_34 = (FObjectMap *)(**(code **)(*(int *)this + 0x538))(param_1,param_2,param_3);
  if (pFStack_34 == (FObjectMap *)0x0) {
    ExceptionList = pvStack_c;
    return (FObjectMap *)0x0;
  }
LAB_10432d9a:
  uVar5 = thunk_FUN_103ffaa0();
  *(undefined4 *)(this + 0x60) = uVar5;
  ExceptionList = pvStack_c;
  return pFStack_34;
}


// ==== 1030bf28 UNetworkHandler::RequestRecipeItemMakeSelf callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeItemMakeSelf(int) */

void __thiscall UNetworkHandler::RequestRecipeItemMakeSelf(UNetworkHandler *this,int param_1)

{
                    /* 0xbf28  7526  ?RequestRecipeItemMakeSelf@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xaf,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030bf50 UNetworkHandler::GetNextNPC callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNextNPC(float,int) */

User * __thiscall UNetworkHandler::GetNextNPC(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xbf50  4829  ?GetNextNPC@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x53c))(5,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030bf6e UNetworkHandler::GMSnoopEnd callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::GMSnoopEnd(int) */

void __thiscall UNetworkHandler::GMSnoopEnd(UNetworkHandler *this,int param_1)

{
                    /* 0xbf6e  4281  ?GMSnoopEnd@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xab,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030bfff UNetworkHandler::GetNearestFriend callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNearestFriend(float,int) */

User * __thiscall UNetworkHandler::GetNearestFriend(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xbfff  4813  ?GetNearestFriend@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x538))(3,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030c1d5 UNetworkHandler::RequestExChangeName callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExChangeName(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestExChangeName(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xc1d5  7427  ?RequestExChangeName@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  puStack_c = &LAB_1080e780;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdSd",0xd0,0x31,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030c1f3 UNetworkHandler::RequestDismissParty callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestDismissParty(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestDismissParty(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xc1f3  7409  ?RequestDismissParty@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x2d);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1030c207 UNetworkHandler::RequestExPledgeCrestLarge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestExPledgeCrestLarge(int) */

int __thiscall UNetworkHandler::RequestExPledgeCrestLarge(UNetworkHandler *this,int param_1)

{
                    /* 0xc207  7435  ?RequestExPledgeCrestLarge@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x10,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030c248 UNetworkHandler::RequestPledgePowerGradeList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgePowerGradeList(void) */

void __thiscall UNetworkHandler::RequestPledgePowerGradeList(UNetworkHandler *this)

{
                    /* 0xc248  7505  ?RequestPledgePowerGradeList@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x1a);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030c270 UNetworkHandler::RequestWithdrawAlly callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestWithdrawAlly(void) */

int __thiscall UNetworkHandler::RequestWithdrawAlly(UNetworkHandler *this)

{
                    /* 0xc270  7587  ?RequestWithdrawAlly@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x84);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1030c473 UNetworkHandler::RequestShowboard callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestShowboard(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestShowboard(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xc473  7564  ?RequestShowboard@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x57,1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030c4d2 UNetworkHandler::RequestDestroyQuest callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestDestroyQuest(int) */

int __thiscall UNetworkHandler::RequestDestroyQuest(UNetworkHandler *this,int param_1)

{
                    /* 0xc4d2  7407  ?RequestDestroyQuest@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,100,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030c635 UNetworkHandler::AnswerJoinPartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::AnswerJoinPartyRoom(class L2ParamStack &) */

void __thiscall UNetworkHandler::AnswerJoinPartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xc635  3381  ?AnswerJoinPartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  puStack_c = &LAB_1080e750;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x15,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030c685 UNetworkHandler::RequestGMCommand callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestGMCommand(unsigned short const *,int) */

int __thiscall UNetworkHandler::RequestGMCommand(UNetworkHandler *this,ushort *param_1,int param_2)

{
                    /* 0xc685  7443  ?RequestGMCommand@UNetworkHandler@@UAEHPBGH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10882338,0x6e,param_1,param_2,0);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030c702 UNetworkHandler::ChangeWaitType callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ChangeWaitType(int) */

void __thiscall UNetworkHandler::ChangeWaitType(UNetworkHandler *this,int param_1)

{
                    /* 0xc702  3504  ?ChangeWaitType@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x1d,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030c83d UNetworkHandler::RequestExAcceptJoinMPCC callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExAcceptJoinMPCC(class L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestExAcceptJoinMPCC(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0xc83d  7424
                       ?RequestExAcceptJoinMPCC@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880ab0,0xd0,0xe,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030c8b5 UNetworkHandler::GetPartyInfoMap callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::GetPartyInfoMap(class TMap<int,struct PartyInfo
   *> * &) */

void __thiscall
UNetworkHandler::GetPartyInfoMap(UNetworkHandler *this,TMap<int,PartyInfo*> **param_1)

{
                    /* 0xc8b5  4883
                       ?GetPartyInfoMap@UNetworkHandler@@UAEXAAPAV?$TMap@HPAUPartyInfo@@@@@Z */
  *param_1 = (TMap<int,PartyInfo*> *)(*(int *)(this + 0x48) + 0x4f50);
  return;
}


// ==== 1030c969 UNetworkHandler::SetMatchedStore callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SetMatchedStore(unsigned short *) */

void __thiscall UNetworkHandler::SetMatchedStore(UNetworkHandler *this,ushort *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xc969  7917  ?SetMatchedStore@UNetworkHandler@@UAEXPAG@Z */
  puStack_8 = &LAB_108102e8;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  uStack_4 = 0;
  ppvVar2 = &pvStack_c;
  if (*(int *)(this + 0x198) < 1) {
    return;
  }
  do {
    ExceptionList = ppvVar2;
    piVar1 = *(int **)(*(int *)(this + 0x194) + 8 + iVar3 * 0xc);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 1)) && ((User *)piVar1[1] != (User *)0x0)) {
      User::IsMatchedStoreMsg((User *)piVar1[1],param_1);
    }
    iVar3 = iVar3 + 1;
    ppvVar2 = ExceptionList;
  } while (iVar3 < *(int *)(this + 0x198));
  ExceptionList = pvStack_c;
  return;
}


// ==== 1030ca2c UNetworkHandler::RequestSiegeInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSiegeInfo(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestSiegeInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xca2c  7565  ?RequestSiegeInfo@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x47);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030ca31 UNetworkHandler::StartRotating callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::StartRotating(int,int) */

void __thiscall UNetworkHandler::StartRotating(UNetworkHandler *this,int param_1,int param_2)

{
                    /* 0xca31  8199  ?StartRotating@UNetworkHandler@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x4a,param_1,param_2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030cc5c UNetworkHandler::RequestFriendInvite callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestFriendInvite(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestFriendInvite(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xcc5c  7441  ?RequestFriendInvite@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x5e,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030cd15 UNetworkHandler::RequestAcquireSkillInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestAcquireSkillInfo(class L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestAcquireSkillInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0xcd15  7366
                       ?RequestAcquireSkillInfo@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0x6b,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030d0a8 UNetworkHandler::RequestAttack callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestAttack(int,class FVector) */

void __thiscall UNetworkHandler::RequestAttack(UNetworkHandler *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0xd0a8  7376  ?RequestAttack@UNetworkHandler@@UAEXHVFVector@@@Z */
  uVar1 = FUN_107a6660();
  uVar2 = FUN_107a6660();
  uVar3 = FUN_107a6660();
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddd",4,param_1,uVar1,uVar2,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030d12a UNetworkHandler::GetUserIDList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::GetUserIDList(class TArray<int> *) */

void __thiscall UNetworkHandler::GetUserIDList(UNetworkHandler *this,TArray<int> *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_28;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0xd12a  5274  ?GetUserIDList@UNetworkHandler@@UAEXPAV?$TArray@H@@@Z */
  puStack_c = &LAB_10810488;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  iStack_28 = 0;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  iVar3 = DAT_10b1f538;
  ExceptionList = &pvStack_10;
  do {
    if (*(int *)(this + 0x198) <= iStack_28) {
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_1042cca0();
      ExceptionList = pvStack_10;
      return;
    }
    uStack_18 = thunk_FUN_103ffaa0();
    if (iVar3 != 0) {
      iVar1 = thunk_FUN_104226e0(&uStack_18);
      if (iVar1 != 0) {
        piVar2 = (int *)thunk_FUN_104226e0(&uStack_18);
        if (*piVar2 == 1) {
          iVar1 = thunk_FUN_104226e0(&uStack_18);
          if (*(int *)(iVar1 + 4) != 0) {
            iVar1 = thunk_FUN_104226e0(&uStack_18);
            if (*(int *)(iVar1 + 4) != 0) {
              thunk_FUN_104225e0(&uStack_18);
              iVar3 = DAT_10b1f538;
            }
          }
        }
      }
      if (iVar3 != 0) {
        iVar1 = thunk_FUN_104226e0(&uStack_18);
        if (iVar1 != 0) {
          piVar2 = (int *)thunk_FUN_104226e0(&uStack_18);
          if (*piVar2 == 2) {
            iVar1 = thunk_FUN_104226e0(&uStack_18);
            if (*(int *)(iVar1 + 4) != 0) {
              iVar1 = thunk_FUN_104226e0(&uStack_18);
              if (*(int *)(iVar1 + 4) != 0) {
                iVar1 = thunk_FUN_104226e0(&uStack_18);
                if (iVar1 == 0) {
LAB_104332cf:
                  iVar1 = 0;
                }
                else {
                  piVar2 = (int *)thunk_FUN_104226e0(&uStack_18);
                  if (*piVar2 != 2) goto LAB_104332cf;
                  iVar1 = thunk_FUN_104226e0(&uStack_18);
                  if (*(int *)(iVar1 + 4) == 0) goto LAB_104332cf;
                  iVar1 = thunk_FUN_104226e0(&uStack_18);
                  iVar1 = *(int *)(iVar1 + 4);
                }
                if (*(int *)(iVar1 + 0x10) != 0) {
                  thunk_FUN_104225e0(&uStack_18);
                  iVar3 = DAT_10b1f538;
                }
              }
            }
          }
        }
        if (iVar3 != 0) {
          iVar1 = thunk_FUN_104226e0(&uStack_18);
          if (iVar1 != 0) {
            piVar2 = (int *)thunk_FUN_104226e0(&uStack_18);
            if (*piVar2 == 3) {
              iVar1 = thunk_FUN_104226e0(&uStack_18);
              if (*(int *)(iVar1 + 4) != 0) {
                iVar1 = thunk_FUN_104226e0(&uStack_18);
                if (*(int *)(iVar1 + 4) != 0) {
                  thunk_FUN_104225e0(&uStack_18);
                  iVar3 = DAT_10b1f538;
                }
              }
            }
          }
          if (iVar3 != 0) {
            iVar1 = thunk_FUN_104226e0(&uStack_18);
            if (iVar1 != 0) {
              piVar2 = (int *)thunk_FUN_104226e0(&uStack_18);
              if (*piVar2 == 4) {
                iVar1 = thunk_FUN_104226e0(&uStack_18);
                if (*(int *)(iVar1 + 4) != 0) {
                  iVar1 = thunk_FUN_104226e0(&uStack_18);
                  if (*(int *)(iVar1 + 4) != 0) {
                    thunk_FUN_104225e0(&uStack_18);
                    iVar3 = DAT_10b1f538;
                  }
                }
              }
            }
            if (iVar3 != 0) {
              iVar1 = thunk_FUN_104226e0(&uStack_18);
              if (iVar1 != 0) {
                piVar2 = (int *)thunk_FUN_104226e0(&uStack_18);
                if (*piVar2 == 5) {
                  iVar1 = thunk_FUN_104226e0(&uStack_18);
                  if (*(int *)(iVar1 + 4) != 0) {
                    iVar1 = thunk_FUN_104226e0(&uStack_18);
                    if (*(int *)(iVar1 + 4) != 0) {
                      thunk_FUN_104225e0(&uStack_18);
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
    iStack_28 = iStack_28 + 1;
  } while( true );
}


// ==== 1030d170 UNetworkHandler::RefreshWSAAsyncSelect callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RefreshWSAAsyncSelect(void) */

void __thiscall UNetworkHandler::RefreshWSAAsyncSelect(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xd170  7280  ?RefreshWSAAsyncSelect@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_1080e650;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x48) != 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_10401ac0();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030d20b UNetworkHandler::RequestStopPledgeWar callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestStopPledgeWar(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestStopPledgeWar(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xd20b  7571  ?RequestStopPledgeWar@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x4f,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030d535 UNetworkHandler::RequestSetSeed callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestSetSeed(class L2ParamStack *) */

void __thiscall UNetworkHandler::RequestSetSeed(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  FOutputDevice *this_00;
  int iVar4;
  undefined1 auStack_2438 [9224];
  int iStack_30;
  void *pvStack_2c;
  void *pvStack_24;
  void *pvStack_20;
  UNetworkHandler *pUStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xd535  7560  ?RequestSetSeed@UNetworkHandler@@UAEXPAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080ef60;
  pvStack_10 = ExceptionList;
  iStack_18 = 0x10413cf3;
  puStack_14 = &stack0xffffdbbc;
  iVar4 = 0;
  uStack_8 = 0;
  iStack_30 = 0;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  pvStack_24 = L2ParamStack::Top(param_1);
  pvStack_20 = L2ParamStack::Top(param_1);
  for (iStack_18 = 0; iStack_18 < (int)pvStack_20; iStack_18 = iStack_18 + 1) {
    pvStack_2c = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    iVar3 = thunk_FUN_10402610(*(undefined4 *)(pUStack_1c + 0x48),auStack_2438 + iVar4,
                               0x2400 - iVar4,&DAT_1087ff0c,pvStack_2c,pvVar1,pvVar2);
    iVar4 = iVar4 + iVar3;
    iStack_30 = iVar4;
  }
  (**(code **)(**(int **)(pUStack_1c + 0x48) + 0x68))
            (*(int **)(pUStack_1c + 0x48),"chddb",0xd0,10,pvStack_24,pvStack_20,iVar4,auStack_2438);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030d6bb UNetworkHandler::VoteSociality callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::VoteSociality(int) */

void __thiscall UNetworkHandler::VoteSociality(UNetworkHandler *this,int param_1)

{
                    /* 0xd6bb  8826  ?VoteSociality@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xb9,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030d760 UNetworkHandler::RequestAcquireSkill callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestAcquireSkill(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestAcquireSkill(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0xd760  7365  ?RequestAcquireSkill@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0x6c,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030d909 UNetworkHandler::RequestListPartyWating callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestListPartyWating(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestListPartyWating(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0xd909  7469
                       ?RequestListPartyWating@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0x6f,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030d9f9 UNetworkHandler::GetUserOneTimePassword callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::GetUserOneTimePassword(void) */

int __thiscall UNetworkHandler::GetUserOneTimePassword(UNetworkHandler *this)

{
                    /* 0xd9f9  5275  ?GetUserOneTimePassword@UNetworkHandler@@UAEHXZ */
  return DAT_10b20f94;
}


// ==== 1030da17 UNetworkHandler::RequestEnterWorldPacket callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestEnterWorldPacket(int,int *,unsigned
   long,unsigned long,unsigned long,unsigned long) */

int __thiscall
UNetworkHandler::RequestEnterWorldPacket
          (UNetworkHandler *this,int param_1,int *param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
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
  
                    /* 0xda17  7422  ?RequestEnterWorldPacket@UNetworkHandler@@UAEHHPAHKKKK@Z */
  if (DAT_10b1f52c != '\0') {
    WaitForSingleObject(DAT_10b1f524,10000);
    CloseHandle(DAT_10b1f524);
  }
  uVar11 = (uint)DAT_10b1f523;
  uVar12 = (uint)DAT_10b1f520;
  DAT_10b1f52c = '\0';
  iVar1 = **(int **)(this + 0x48);
  piVar2 = *(int **)(DAT_10c51044 + 0x70);
  uVar18 = (uint)DAT_10b1f522;
  uVar3 = (uint)DAT_10b1f521;
  uVar19 = (uint)DAT_10b1f51f;
  uVar4 = (uint)DAT_10b1f51e;
  uVar13 = (uint)DAT_10b1f51d;
  uVar20 = (uint)DAT_10b1f51c;
  uVar5 = (uint)DAT_10b1f51b;
  uVar14 = (uint)DAT_10b1f51a;
  uVar21 = (uint)DAT_10b1f519;
  uVar6 = (uint)DAT_10b1f518;
  uVar15 = (uint)DAT_10b1f517;
  uVar22 = (uint)DAT_10b1f516;
  uVar7 = (uint)DAT_10b1f515;
  uVar16 = (uint)DAT_10b1f514;
  uVar23 = (uint)DAT_10b1f513;
  uVar8 = (uint)DAT_10b1f512;
  uVar17 = (uint)DAT_10b1f511;
  uVar24 = (uint)DAT_10b1f510;
  iVar9 = _rand();
  uVar10 = (**(code **)(*piVar2 + 0x6c))
                     (iVar9,uVar24,uVar17,uVar8,uVar23,uVar16,uVar7,uVar22,uVar15,uVar6,uVar21,
                      uVar14,uVar5,uVar20,uVar13,uVar4,uVar19,uVar12,uVar3,uVar18,uVar11);
  (**(code **)(iVar1 + 0x68))
            (*(undefined4 *)(this + 0x48),"cbddddbdcccccccccccccccccccc",3,param_1 * 4,param_2,
             param_3,param_4,param_5,param_6,0x40,uVar10);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1030db02 UNetworkHandler::RequestExMagicSkillUseGround callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExMagicSkillUseGround(class L2ParamStack
   &) */

void __thiscall
UNetworkHandler::RequestExMagicSkillUseGround(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  FOutputDevice *this_00;
  
                    /* 0xdb02  7433
                       ?RequestExMagicSkillUseGround@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdddddc",0xd0,0x2f,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5,
             (uint)pvVar6 & 0xff);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030db75 UNetworkHandler::GetNextPartyUsingJoyPad callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNextPartyUsingJoyPad(float,int) */

User * __thiscall
UNetworkHandler::GetNextPartyUsingJoyPad(UNetworkHandler *this,float param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
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
  
                    /* 0xdb75  4832  ?GetNextPartyUsingJoyPad@UNetworkHandler@@UAEPAUUser@@MH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810468;
  pvStack_c = ExceptionList;
  iVar8 = 1;
  ExceptionList = &pvStack_c;
  aiStack_60[0] = (**(code **)(*(int *)this + 0x94))(DAT_10b1f530);
  if (0 < *(int *)(*(int *)(this + 0x48) + 0x4f68)) {
    aiStack_60[1] = (**(code **)(*(int *)this + 0x94))(*(int *)(*(int *)(this + 0x48) + 0x4f68));
    iVar8 = 2;
  }
  iVar1 = *(int *)(this + 0x48);
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
        iVar7 = (**(code **)(*(int *)this + 0x94))(*puVar2);
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
  if (iVar1 < *(int *)(this + 400)) {
    *(undefined4 *)(this + 400) = 0;
  }
  iVar7 = *(int *)(this + 400);
  if (param_1 == 0.0) {
    for (; iVar7 < iVar8; iVar7 = iVar7 + -1) {
      iVar6 = *(int *)(aiStack_60[iVar7] + 0x204);
      piStack_70 = (int *)(fVar3 - *(float *)(iVar6 + 0x1bc));
      piStack_6c = (int *)(fVar4 - *(float *)(iVar6 + 0x1c0));
      fStack_68 = fVar5 - *(float *)(iVar6 + 0x1c4);
      fVar10 = FVector::Size((FVector *)&piStack_70);
      if (fVar10 < unaff_retaddr) {
        *(int *)(this + 400) = iVar7 + -1;
        if (iVar7 + -1 < 0) {
          *(int *)(this + 400) = iVar1;
        }
        ExceptionList = pvStack_10;
        return (User *)aiStack_60[iVar7];
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
        *(int *)(this + 400) = iVar7 + 1;
        if (iVar1 < iVar7 + 1) {
          *(undefined4 *)(this + 400) = 0;
        }
        ExceptionList = pvStack_10;
        return (User *)aiStack_60[iVar7];
      }
      if (iVar1 < iVar7) {
        iVar7 = 0;
      }
    }
  }
  ExceptionList = pvStack_10;
  return (User *)0x0;
}


// ==== 1030dbbb UNetworkHandler::RequestSurrenderPledgeWar callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestSurrenderPledgeWar(class L2ParamStack &)
    */

int __thiscall
UNetworkHandler::RequestSurrenderPledgeWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xdbbb  7574
                       ?RequestSurrenderPledgeWar@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  return 1;
}


// ==== 1030dcfb UNetworkHandler::RequestUnEquipItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestUnEquipItem(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestUnEquipItem(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xdcfb  7583  ?RequestUnEquipItem@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x11,pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030dd37 UNetworkHandler::RequestStopAllianceWar callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestStopAllianceWar(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestStopAllianceWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0xdd37  7570
                       ?RequestStopAllianceWar@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  return;
}


// ==== 1030dee0 UNetworkHandler::RequestDismissAlly callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestDismissAlly(void) */

int __thiscall UNetworkHandler::RequestDismissAlly(UNetworkHandler *this)

{
                    /* 0xdee0  7408  ?RequestDismissAlly@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x86);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1030df9e UNetworkHandler::RequestCastleSiegeAttackerList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestCastleSiegeAttackerList(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestCastleSiegeAttackerList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xdf9e  7385
                       ?RequestCastleSiegeAttackerList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xa2,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030e101 UNetworkHandler::RequestRecipeShopMakeInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopMakeInfo(int,int) */

void __thiscall
UNetworkHandler::RequestRecipeShopMakeInfo(UNetworkHandler *this,int param_1,int param_2)

{
                    /* 0xe101  7529  ?RequestRecipeShopMakeInfo@UNetworkHandler@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0xb5,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030e142 UNetworkHandler::SetImportedPledgeCrestID callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SetImportedPledgeCrestID(int,class UTexture *)
    */

void __thiscall
UNetworkHandler::SetImportedPledgeCrestID(UNetworkHandler *this,int param_1,UTexture *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xe142  7882  ?SetImportedPledgeCrestID@UNetworkHandler@@UAEXHPAVUTexture@@@Z
                        */
  iVar3 = 0;
  if (0 < param_1) {
    iVar1 = *(int *)(this + 0x48);
    if (0 < *(int *)(iVar1 + 0x4f2c)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x4f28) + 8 + iVar3 * 0xc);
        if (*(int *)(iVar2 + 0x80) == param_1) {
          *(UTexture **)(iVar2 + 0xe0) = param_2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x4f2c));
    }
  }
  return;
}


// ==== 1030e264 UNetworkHandler::RL callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RL(void) */

int __thiscall UNetworkHandler::RL(UNetworkHandler *this)

{
  code cVar1;
  int *piVar2;
  size_t _Size;
  char *_Str;
  long lVar3;
  undefined4 *_Memory;
  short sVar4;
  UNetworkHandler *unaff_EBP;
  wchar_t awStack_18 [2];
  wchar_t awStack_14 [2];
  wchar_t awStack_10 [2];
  wchar_t awStack_c [2];
  wchar_t awStack_8 [2];
  wchar_t awStack_4 [2];
  
                    /* 0xe264  7230  ?RL@UNetworkHandler@@UAEHXZ */
  if ((*(int *)GLanguageType_exref == 0) || (*(int *)GLanguageType_exref == 2)) {
    DAT_10b1f52c = 1;
    DAT_10b1f524 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10400220,&DAT_10b1f528,0,
                                (LPDWORD)0x0);
  }
  if (*(int *)(*(int *)(this + 0x4c) + 0x38) != 0) {
    cVar1 = *GL2ClientOrder_exref;
    awStack_18[0] = u_package_dat_1087f560[0];
    awStack_18[1] = u_package_dat_1087f560[1];
    awStack_10[0] = u_package_dat_1087f560[4];
    awStack_10[1] = u_package_dat_1087f560[5];
    awStack_c[0] = u_package_dat_1087f560[6];
    awStack_c[1] = u_package_dat_1087f560[7];
    awStack_14[0] = u_package_dat_1087f560[2];
    awStack_14[1] = u_package_dat_1087f560[3];
    awStack_4[0] = u_package_dat_1087f560[10];
    awStack_4[1] = u_package_dat_1087f560[0xb];
    awStack_8[0] = u_package_dat_1087f560[8];
    awStack_8[1] = u_package_dat_1087f560[9];
    sVar4 = 0;
    piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))(awStack_18,0);
    if (piVar2 != (int *)0x0) {
      _Size = (**(code **)(*piVar2 + 0x2c))();
      _Str = _malloc(_Size);
      (**(code **)(*piVar2 + 4))(_Str,_Size);
      lVar3 = _atol(_Str);
      sVar4 = (short)lVar3;
      (**(code **)*piVar2)(1);
      _free(_Str);
      this = unaff_EBP;
      piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))
                                (&stack0xffffffd0,0,*(undefined4 *)GNull_exref);
      if (piVar2 != (int *)0x0) {
        _Memory = _malloc(4);
        *_Memory = 0x39393939;
        (**(code **)(*piVar2 + 4))(_Memory,4);
        (**(code **)(*piVar2 + 0x54))();
        (**(code **)*piVar2)(1);
        _free(_Memory);
      }
    }
    (**(code **)(**(int **)(this + 0x4c) + 0x68))
              (*(int **)(this + 0x4c),"cxddddddhc",0,0x80,DAT_10b1f538 + 100,
               *(undefined4 *)(this + 0xe4),*(undefined4 *)(DAT_10c51044 + 0x36c),
               *(undefined4 *)(DAT_10c51044 + 0x370),*(undefined4 *)(DAT_10c51044 + 0x374),
               *(undefined4 *)(DAT_10c51044 + 0x378),8,(int)sVar4,(int)(char)((char)cVar1 + -1));
    appMemset((void *)(DAT_10b1f538 + 100),0,0x80);
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)(DAT_10c51044 + 0x36c),*(ushort **)GLog_exref);
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030e318 UNetworkHandler::AddNetworkQueue callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::AddNetworkQueue(struct NetworkPacket *) */

int __thiscall UNetworkHandler::AddNetworkQueue(UNetworkHandler *this,NetworkPacket *param_1)

{
  int iVar1;
  
                    /* 0xe318  3307  ?AddNetworkQueue@UNetworkHandler@@UAEHPAUNetworkPacket@@@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x16c));
  iVar1 = FArray::Add((FArray *)(this + 0x3c),1,4);
  *(NetworkPacket **)(*(int *)(this + 0x3c) + iVar1 * 4) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x16c));
  return iVar1;
}


// ==== 1030e386 UNetworkHandler::operator_new callees=
// strings: 

/* public: static void * __cdecl UNetworkHandler::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UNetworkHandler::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0xe386  1966  ??2UNetworkHandler@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1030e46c UNetworkHandler::RequestAnswerJoinAlly callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestAnswerJoinAlly(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestAnswerJoinAlly(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xe46c  7371  ?RequestAnswerJoinAlly@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x83,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030e485 UNetworkHandler::RequestEquipItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestEquipItem(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestEquipItem(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0xe485  7423  ?RequestEquipItem@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x10,pvVar1,pvVar2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030e48f UNetworkHandler::RequestOustPartyMember callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestOustPartyMember(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestOustPartyMember(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xe48f  7489
                       ?RequestOustPartyMember@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x2c,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030e534 UNetworkHandler::RequestActionUse callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestActionUse(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestActionUse(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0xe534  7367  ?RequestActionUse@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087f698,0x45,pvVar1,pvVar2,(uint)pvVar3 & 0xff);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030e5ac UNetworkHandler::RequestPledgeSetAcademyMasterPupil callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeSetAcademyMasterPupil(int,unsigned
   short const *,unsigned short const *) */

void __thiscall
UNetworkHandler::RequestPledgeSetAcademyMasterPupil
          (UNetworkHandler *this,int param_1,ushort *param_2,ushort *param_3)

{
                    /* 0xe5ac  7507
                       ?RequestPledgeSetAcademyMasterPupil@UNetworkHandler@@UAEXHPBG0@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdSS",0xd0,0x19,param_1,param_2,param_3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030e69c UNetworkHandler::RequestPrivateStoreList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreList(int) */

void __thiscall UNetworkHandler::RequestPrivateStoreList(UNetworkHandler *this,int param_1)

{
                    /* 0xe69c  7515  ?RequestPrivateStoreList@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x78,param_1);
  return;
}


// ==== 1030e7be UNetworkHandler::RequestDropItem callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestDropItem(struct ItemInfo,class FVector) */

int __thiscall
UNetworkHandler::RequestDropItem
          (UNetworkHandler *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0xe7be  7413  ?RequestDropItem@UNetworkHandler@@UAEHUItemInfo@@VFVector@@@Z
                        */
  piVar1 = *(int **)(this + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cddddd",0x12,param_3,param_5,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1030e9f8 UNetworkHandler::GetNearestEnemy callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNearestEnemy(float,int) */

User * __thiscall UNetworkHandler::GetNearestEnemy(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xe9f8  4812  ?GetNearestEnemy@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x538))(2,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030eb5b UNetworkHandler::ServerPacketCountStop callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ServerPacketCountStop(void) */

void __thiscall UNetworkHandler::ServerPacketCountStop(UNetworkHandler *this)

{
                    /* 0xeb5b  7780  ?ServerPacketCountStop@UNetworkHandler@@UAEXXZ */
  if (*(int *)(this + 0x48) != 0) {
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef0) = 0;
  }
  return;
}


// ==== 1030ec23 UNetworkHandler::RequestConfirmGemStone callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestConfirmGemStone(int,int,int,int) */

void __thiscall
UNetworkHandler::RequestConfirmGemStone
          (UNetworkHandler *this,int param_1,int param_2,int param_3,int param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xec23  7396  ?RequestConfirmGemStone@UNetworkHandler@@UAEXHHHH@Z */
  puStack_c = &LAB_1080e7d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdddd",0xd0,0x2b,param_1,param_2,param_3,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030ed0e UNetworkHandler::RequestRestartPoint callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRestartPoint(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestRestartPoint(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0xed0e  7545  ?RequestRestartPoint@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x6d,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030f245 UNetworkHandler::RequestPrivateStoreQuit callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreQuit(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreQuit(UNetworkHandler *this)

{
                    /* 0xf245  7518  ?RequestPrivateStoreQuit@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x76);
  return;
}


// ==== 1030f2ae UNetworkHandler::RequestRecipeShopManageList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopManageList(void) */

void __thiscall UNetworkHandler::RequestRecipeShopManageList(UNetworkHandler *this)

{
                    /* 0xf2ae  7531  ?RequestRecipeShopManageList@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xb0);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1030f399 UNetworkHandler::SendL2ParamSetting callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendL2ParamSetting(class L2ParamStack &) */

void __thiscall UNetworkHandler::SendL2ParamSetting(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0xf399  7704  ?SendL2ParamSetting@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_108819c8,0x39,3,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1030f8b2 UNetworkHandler::GetNearestCreature callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNearestCreature(float,int) */

User * __thiscall
UNetworkHandler::GetNearestCreature(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xf8b2  4811  ?GetNearestCreature@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x538))(6,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 1030f961 UNetworkHandler::RequestEnchantItem callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestEnchantItem(int) */

int __thiscall UNetworkHandler::RequestEnchantItem(UNetworkHandler *this,int param_1)

{
                    /* 0xf961  7421  ?RequestEnchantItem@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x58,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 1030f99d UNetworkHandler::Tick callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UNetworkHandler::Tick(float) */

void __thiscall UNetworkHandler::Tick(UNetworkHandler *this,float param_1)

{
  UNetworkHandler *pUVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  uint uStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xf99d  8622  ?Tick@UNetworkHandler@@UAEXM@Z */
  puStack_c = &LAB_1080fbe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  fVar2 = (float)*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4);
  if (*(int *)(DAT_10ddd7ec + DAT_10ddd91c * 4) < 0) {
    fVar2 = fVar2 + (float)_DAT_10888818;
  }
  fVar2 = fVar2 * (float)*(double *)GSecondsPerCycleQPF_exref;
  if (*(float *)(this + 0x18c) != 0.0) {
    fVar2 = fVar2 * (float)_DAT_108887f8 + *(float *)(this + 0x18c) * (float)_DAT_10888808;
  }
  ExceptionList = &pvStack_10;
  *(float *)(this + 0x18c) = fVar2;
  if ((*(int *)(DAT_10b1f538 + 0x50) == 2) && (iVar5 = *(int *)(this + 0x48), iVar5 != 0)) {
    *(float *)(iVar5 + 0x4960) = param_1 + *(float *)(iVar5 + 0x4960);
    *(float *)(*(int *)(this + 0x48) + 0x4964) =
         param_1 + *(float *)(*(int *)(this + 0x48) + 0x4964);
    iVar5 = *(int *)(this + 0x48);
    dVar4 = (double)*(int *)(iVar5 + 0x4970);
    if (*(int *)(iVar5 + 0x4970) < 0) {
      dVar4 = dVar4 + _DAT_10888818;
    }
    uStack_20 = (uint)(longlong)ROUND(dVar4 / (double)*(float *)(iVar5 + 0x4960));
    *(uint *)(DAT_10ddd7e0 + *(int *)(iVar5 + 0x50f4) * 4) = uStack_20;
    iVar5 = *(int *)(this + 0x48);
    dVar4 = (double)*(int *)(iVar5 + 0x4978);
    if (*(int *)(iVar5 + 0x4978) < 0) {
      dVar4 = dVar4 + _DAT_10888818;
    }
    uStack_20 = (uint)(longlong)ROUND(dVar4 / (double)*(float *)(iVar5 + 0x4960));
    *(uint *)(DAT_10ddd7e0 + *(int *)(iVar5 + 0x50fc) * 4) = uStack_20;
    iVar5 = *(int *)(this + 0x48);
    fVar2 = *(float *)(iVar5 + 0x4964);
    if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
      dVar4 = (double)*(int *)(iVar5 + 0x4974);
      if (*(int *)(iVar5 + 0x4974) < 0) {
        dVar4 = dVar4 + _DAT_10888818;
      }
      uStack_20 = (uint)(longlong)ROUND(dVar4 / (double)*(float *)(iVar5 + 0x4964));
      if (*(uint *)(iVar5 + 0x4968) < uStack_20) {
        *(uint *)(iVar5 + 0x4968) = uStack_20;
      }
      iVar5 = *(int *)(this + 0x48);
      dVar4 = (double)*(int *)(iVar5 + 0x497c);
      if (*(int *)(iVar5 + 0x497c) < 0) {
        dVar4 = dVar4 + _DAT_10888818;
      }
      uStack_20 = (uint)(longlong)ROUND(dVar4 / (double)*(float *)(iVar5 + 0x4964));
      if (*(uint *)(iVar5 + 0x496c) < uStack_20) {
        *(uint *)(iVar5 + 0x496c) = uStack_20;
      }
      *(undefined4 *)(*(int *)(this + 0x48) + 0x4964) = 0;
      *(undefined4 *)(*(int *)(this + 0x48) + 0x4974) = 0;
      *(undefined4 *)(*(int *)(this + 0x48) + 0x497c) = 0;
    }
    *(undefined4 *)(DAT_10ddd7e0 + *(int *)(*(int *)(this + 0x48) + 0x50f8) * 4) =
         *(undefined4 *)(*(int *)(this + 0x48) + 0x4968);
    *(undefined4 *)(DAT_10ddd7e0 + *(int *)(*(int *)(this + 0x48) + 0x5100) * 4) =
         *(undefined4 *)(*(int *)(this + 0x48) + 0x496c);
  }
  do {
    do {
      while( true ) {
        pUVar1 = this + 0x38;
        iVar5 = (**(code **)(*(int *)this + 0x80))(pUVar1);
        if (iVar5 == 0) {
          (**(code **)(*(int *)this + 0x530))(param_1);
          if ((*(int *)(DAT_10b1f538 + 0x50) == 2) && (*(int *)(this + 0x48) != 0)) {
            for (iVar5 = 0; iVar5 < 0xff; iVar5 = iVar5 + 1) {
              *(undefined4 *)
               (DAT_10ddd7e0 + *(int *)(*(int *)(this + 0x48) + 0x5108 + iVar5 * 4) * 4) =
                   *(undefined4 *)(*(int *)(this + 0x48) + 0x4980 + iVar5 * 4);
            }
            for (iVar5 = 0; iVar5 < 0x5d; iVar5 = iVar5 + 1) {
              *(undefined4 *)
               (DAT_10ddd7e0 + *(int *)(*(int *)(this + 0x48) + 0x5900 + iVar5 * 4) * 4) =
                   *(undefined4 *)(*(int *)(this + 0x48) + 0x4d7c + iVar5 * 4);
            }
          }
          ExceptionList = pvStack_10;
          return;
        }
        if (*(int *)(DAT_10b1f538 + 0x50) != 1) break;
        if (0xb < **(byte **)pUVar1) {
          **(byte **)pUVar1 = 0xc;
        }
        *(int *)(*(int *)(this + 0x4c) + 0x4ef8) =
             *(int *)(*(int *)pUVar1 + 8) + *(int *)(*(int *)pUVar1 + 4);
        (*(code *)(&PTR_LAB_10a572c0)[**(byte **)pUVar1])
                  (this,*(undefined4 *)(*(byte **)pUVar1 + 8));
        *(undefined4 *)(*(int *)(this + 0x4c) + 0x4ef8) = 0;
        (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(*(int *)pUVar1 + 8));
        (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)pUVar1);
      }
    } while ((*(int *)(DAT_10b1f538 + 0x50) != 2) && (*(int *)GL2ReplayMode_exref == 0));
    if ((*(int *)GL2UseReplayManager_exref != 0) &&
       ((*(int *)(DAT_10c51044 + 0x198) != 0 &&
        (iVar5 = FL2ReplayManager::GetState(*(FL2ReplayManager **)(DAT_10c51044 + 0x198)),
        iVar5 == 2)))) {
      FL2ReplayManager::AddPacketData
                (*(FL2ReplayManager **)(DAT_10c51044 + 0x198),*(NetworkPacket **)pUVar1);
    }
    if (**(char **)pUVar1 == -1) {
      **(char **)pUVar1 = -1;
    }
    iVar5 = *(int *)(this + 0x48);
    if (**(byte **)pUVar1 == 0xfe) {
      if (*(int *)(iVar5 + 0x4ef0) != 0) {
        piVar6 = (int *)(DAT_10ddd7e0 + *(int *)(iVar5 + 0x58fc) * 4);
        uVar3 = rdtsc();
        *piVar6 = *piVar6 - (int)uVar3;
        piVar6 = (int *)(DAT_10ddd7e0 +
                        *(int *)(*(int *)(this + 0x48) + 0x5a74 + *(short *)(*(int *)pUVar1 + 2) * 4
                                ) * 4);
        uVar3 = rdtsc();
        *piVar6 = *piVar6 - (int)uVar3;
      }
      *(int *)(*(int *)(this + 0x48) + 0x4ef8) =
           *(int *)(*(int *)pUVar1 + 8) + *(int *)(*(int *)pUVar1 + 4);
      (*(code *)(&PTR_LAB_10a67610)[*(short *)(*(int *)pUVar1 + 2) * 0x41])
                (this,*(undefined4 *)(*(int *)pUVar1 + 8));
      *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
      iVar5 = *(int *)(this + 0x48);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x4ef0) != 0)) {
        piVar6 = (int *)(iVar5 + 0x4980 + (uint)**(byte **)pUVar1 * 4);
        *piVar6 = *piVar6 + 1;
        piVar6 = (int *)(DAT_10ddd7e0 +
                        *(int *)(*(int *)(this + 0x48) + 0x5504 + (uint)**(byte **)pUVar1 * 4) * 4);
        uVar3 = rdtsc();
        *piVar6 = *piVar6 + (int)uVar3 + -0xc;
        piVar6 = (int *)(*(int *)(this + 0x48) + 0x4d7c + *(short *)(*(int *)pUVar1 + 2) * 4);
        *piVar6 = *piVar6 + 1;
        piVar6 = (int *)(DAT_10ddd7e0 +
                        *(int *)(*(int *)(this + 0x48) + 0x5a74 + *(short *)(*(int *)pUVar1 + 2) * 4
                                ) * 4);
        uVar3 = rdtsc();
        iVar5 = (int)uVar3;
LAB_10421d57:
        *piVar6 = *piVar6 + iVar5 + -0xc;
      }
    }
    else {
      if (*(int *)(iVar5 + 0x4ef0) != 0) {
        piVar6 = (int *)(DAT_10ddd7e0 + *(int *)(iVar5 + 0x5504 + (uint)**(byte **)pUVar1 * 4) * 4);
        uVar3 = rdtsc();
        *piVar6 = *piVar6 - (int)uVar3;
      }
      *(int *)(*(int *)(this + 0x48) + 0x4ef8) =
           *(int *)(*(int *)pUVar1 + 8) + *(int *)(*(int *)pUVar1 + 4);
      (*(code *)(&PTR_LAB_10a57310)[(uint)**(byte **)pUVar1 * 0x41])
                (this,*(undefined4 *)(*(byte **)pUVar1 + 8));
      *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
      iVar5 = *(int *)(this + 0x48);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x4ef0) != 0)) {
        piVar6 = (int *)(iVar5 + 0x4980 + (uint)**(byte **)pUVar1 * 4);
        *piVar6 = *piVar6 + 1;
        piVar6 = (int *)(DAT_10ddd7e0 +
                        *(int *)(*(int *)(this + 0x48) + 0x5504 + (uint)**(byte **)pUVar1 * 4) * 4);
        uVar3 = rdtsc();
        iVar5 = (int)uVar3;
        goto LAB_10421d57;
      }
    }
    (**(code **)(**(int **)GMalloc_exref + 8))(*(undefined4 *)(*(int *)pUVar1 + 8));
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)pUVar1);
  } while( true );
}


// ==== 1030f9ac UNetworkHandler::RequestPCCafeCouponUse callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPCCafeCouponUse(class FString) */

void __thiscall UNetworkHandler::RequestPCCafeCouponUse(UNetworkHandler *this)

{
  int iVar1;
  ushort *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xf9ac  7491  ?RequestPCCafeCouponUse@UNetworkHandler@@UAEXVFString@@@Z */
  puStack_c = &LAB_1080e669;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  iVar1 = **(int **)(this + 0x48);
  ExceptionList = &pvStack_10;
  puVar2 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(iVar1 + 0x68))(*(undefined4 *)(this + 0x48),&DAT_10880bc4,0xd0,0x20,puVar2);
  FString::operator*((FString *)&stack0x00000004);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1030fa01 UNetworkHandler::DispatchNetworkQueue callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::DispatchNetworkQueue(struct NetworkPacket * *) */

int __thiscall UNetworkHandler::DispatchNetworkQueue(UNetworkHandler *this,NetworkPacket **param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0xfa01  3835
                       ?DispatchNetworkQueue@UNetworkHandler@@UAEHPAPAUNetworkPacket@@@Z */
  puStack_c = &LAB_1080fdf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x16c);
  ExceptionList = &pvStack_10;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x40) != 0) {
    *param_1 = (NetworkPacket *)**(undefined4 **)(this + 0x3c);
    thunk_FUN_10422920(0,1);
    iVar1 = *(int *)(this + 0x40);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = pvStack_10;
    return iVar1 + 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1030fb32 UNetworkHandler::GetNextItem callees=
// strings: 

/* public: virtual struct Item * __thiscall UNetworkHandler::GetNextItem(float,int) */

Item * __thiscall UNetworkHandler::GetNextItem(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0xfb32  4827  ?GetNextItem@UNetworkHandler@@UAEPAUItem@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x53c))(1,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((Item *)piVar1[1] != (Item *)0x0)) && (*piVar1 == 2)) {
    return (Item *)piVar1[1];
  }
  return (Item *)0x0;
}


// ==== 1030fbb9 UNetworkHandler::UpdateLargePledgeCrest callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::UpdateLargePledgeCrest(int,int) */

void __thiscall
UNetworkHandler::UpdateLargePledgeCrest(UNetworkHandler *this,int param_1,int param_2)

{
  User *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xfbb9  8742  ?UpdateLargePledgeCrest@UNetworkHandler@@UAEXHH@Z */
  iVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810368;
  pvStack_c = ExceptionList;
  if (param_1 < 1) {
    if (0 < param_2) {
      iVar3 = 0;
      uStack_4 = 0;
      ExceptionList = &pvStack_c;
      if (0 < *(int *)(this + 0x198)) {
        do {
          piVar2 = *(int **)(*(int *)(this + 0x194) + 8 + iVar3 * 0xc);
          if (((*piVar2 == 1) && (this_00 = (User *)piVar2[1], this_00 != (User *)0x0)) &&
             (*(int *)(this_00 + 0x284) == iVar1)) {
            User::SetPawnResource(this_00);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(this + 0x198));
      }
    }
  }
  else if (((DAT_10b1f538 != 0) &&
           (ExceptionList = &pvStack_c, piVar2 = (int *)thunk_FUN_104226e0(&param_1),
           piVar2 != (int *)0x0)) && ((*piVar2 == 1 && ((User *)piVar2[1] != (User *)0x0)))) {
    User::SetPawnResource((User *)piVar2[1]);
    ExceptionList = pvStack_c;
    return;
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 1030fd7b UNetworkHandler::RequestPreviewItem callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall UNetworkHandler::RequestPreviewItem(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestPreviewItem(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *pvStack_2410;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0xfd7b  7510  ?RequestPreviewItem@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  uStack_4 = 0x104049fa;
  iVar6 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvStack_2410 = pvVar3;
  if (0 < (int)pvVar3) {
    do {
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff8c,pvVar4);
      iVar6 = iVar6 + iVar5;
      pvStack_2410 = (void *)((int)pvStack_2410 + -1);
    } while (pvStack_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdddb",0xc6,pvVar1,pvVar2,pvVar3,iVar6,auStack_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 103100be UNetworkHandler::IsGNOMatch callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::IsGNOMatch(int,class FObjectMap *) */

int __thiscall UNetworkHandler::IsGNOMatch(UNetworkHandler *this,int param_1,FObjectMap *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x100be  5868  ?IsGNOMatch@UNetworkHandler@@UAEHHPAVFObjectMap@@@Z */
  if (param_2 == (FObjectMap *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  switch(param_1) {
  case 1:
    if (*(int *)param_2 == 2) {
      return 1;
    }
    break;
  case 2:
    if (((*(int *)param_2 == 1) && (*(int *)(iVar1 + 0x10) != 0)) &&
       ((*(int *)(iVar1 + 0x204) != 0 &&
        ((iVar1 = *(int *)(*(int *)(iVar1 + 0x204) + 0x14d8), iVar1 != 0 &&
         ((*(byte *)(iVar1 + 0x41c) & 1) == 0)))))) {
      return 1;
    }
    break;
  case 3:
    if (((*(int *)param_2 == 1) && (*(int *)(iVar1 + 8) == 0)) && (*(int *)(iVar1 + 0x10) == 0)) {
      return 1;
    }
    break;
  case 4:
    if (*(int *)param_2 != 1) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x24c);
    goto LAB_10407ee8;
  case 5:
    if (*(int *)param_2 != 1) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 8);
LAB_10407ee8:
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x10);
LAB_10407eee:
      if (iVar1 == 0) {
        return 1;
      }
    }
    break;
  case 6:
    iVar1 = *(int *)param_2 + -1;
    goto LAB_10407eee;
  }
  return 0;
}


// ==== 10310285 UNetworkHandler::RequestSetCastleSiegeTime callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSetCastleSiegeTime(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestSetCastleSiegeTime(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x10285  7555
                       ?RequestSetCastleSiegeTime@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0xa6,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103104b0 UNetworkHandler::RequestNewCharacter callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestNewCharacter(void) */

int __thiscall UNetworkHandler::RequestNewCharacter(UNetworkHandler *this)

{
                    /* 0x104b0  7479  ?RequestNewCharacter@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xe);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 103105a0 UNetworkHandler::RequestReplyStartPledgeWar callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestReplyStartPledgeWar(class L2ParamStack &)
    */

int __thiscall
UNetworkHandler::RequestReplyStartPledgeWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x105a0  7541
                       ?RequestReplyStartPledgeWar@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  return 1;
}


// ==== 103105a5 UNetworkHandler::Ride callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Ride(int,int) */

void __thiscall UNetworkHandler::Ride(UNetworkHandler *this,int param_1,int param_2)

{
                    /* 0x105a5  7653  ?Ride@UNetworkHandler@@UAEXHH@Z */
  return;
}


// ==== 1031070d UNetworkHandler::RequestReload callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestReload(void) */

void __thiscall UNetworkHandler::RequestReload(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1070d  7539  ?RequestReload@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_1080e730;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xcf);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1031073f UNetworkHandler::SocialAction callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SocialAction(int) */

void __thiscall UNetworkHandler::SocialAction(UNetworkHandler *this,int param_1)

{
                    /* 0x1073f  8147  ?SocialAction@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x1b,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1031085c UNetworkHandler::RequestCastleSiegeDefenderList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestCastleSiegeDefenderList(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestCastleSiegeDefenderList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x1085c  7386
                       ?RequestCastleSiegeDefenderList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xa3,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103108d9 UNetworkHandler::RequestSkillCoolTime callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSkillCoolTime(void) */

void __thiscall UNetworkHandler::RequestSkillCoolTime(UNetworkHandler *this)

{
                    /* 0x108d9  7566  ?RequestSkillCoolTime@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x9d);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1031090b UNetworkHandler::RequestPrivateStoreBuyManageCancel callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreBuyManageCancel(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreBuyManageCancel(UNetworkHandler *this)

{
                    /* 0x1090b  7513  ?RequestPrivateStoreBuyManageCancel@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x92);
  return;
}


// ==== 103109e2 UNetworkHandler::RequestTeleport callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTeleport(int,int,int,int,int) */

int __thiscall
UNetworkHandler::RequestTeleport
          (UNetworkHandler *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* 0x109e2  7576  ?RequestTeleport@UNetworkHandler@@UAEHHHHHH@Z */
  if (param_2 == 2) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),"cdddd",0x1a,param_1,2,param_3,param_4);
  }
  else if (param_2 == 3) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),"cddddd",0x1a,param_1,3,param_3,param_4,param_5);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10310be5 UNetworkHandler::GetNextCreature callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetNextCreature(float,int) */

User * __thiscall UNetworkHandler::GetNextCreature(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x10be5  4824  ?GetNextCreature@UNetworkHandler@@UAEPAUUser@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x53c))(6,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((User *)piVar1[1] != (User *)0x0)) && (*piVar1 == 1)) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 10310d48 UNetworkHandler::RequestAutoSoulShot callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestAutoSoulShot(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestAutoSoulShot(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x10d48  7379  ?RequestAutoSoulShot@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880ab0,0xd0,5,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10310e92 UNetworkHandler::RequestCrystallizeItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestCrystallizeItem(int,int) */

void __thiscall
UNetworkHandler::RequestCrystallizeItem(UNetworkHandler *this,int param_1,int param_2)

{
                    /* 0x10e92  7402  ?RequestCrystallizeItem@UNetworkHandler@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x72,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10310f46 UNetworkHandler::ClearObjectMap callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ClearObjectMap(struct User *) */

void __thiscall UNetworkHandler::ClearObjectMap(UNetworkHandler *this,User *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  User *pUVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10f46  3640  ?ClearObjectMap@UNetworkHandler@@UAEXPAUUser@@@Z */
  iVar5 = DAT_10b1f538;
  puStack_8 = &LAB_108103b3;
  pvStack_c = ExceptionList;
  ppvVar4 = &pvStack_c;
  if (DAT_10b1f538 != 0) {
    piVar1 = (int *)(DAT_10b1f538 + 0x194);
    iVar6 = 0;
    uStack_4 = 0;
    ExceptionList = &pvStack_c;
    ppvVar4 = &pvStack_c;
    if (0 < *(int *)(DAT_10b1f538 + 0x198)) {
      do {
        piVar2 = *(int **)(*piVar1 + 8 + iVar6 * 0xc);
        if (piVar2 != (int *)0x0) {
          iVar3 = *piVar2;
          if (iVar3 == 1) {
            pUVar7 = (User *)piVar2[1];
            if ((pUVar7 != (User *)0x0) && (param_1 != pUVar7)) {
              thunk_FUN_1042c850(pUVar7 + 0x18);
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x24c))(pUVar7,0,0);
              goto LAB_104322ee;
            }
          }
          else {
            if (iVar3 == 2) {
              pUVar7 = (User *)piVar2[1];
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x250))(pUVar7);
            }
            else if (iVar3 == 3) {
              pUVar7 = (User *)piVar2[1];
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2a0))(pUVar7);
            }
            else {
              if (iVar3 != 4) {
                if ((iVar3 == 5) &&
                   (iVar3 = piVar2[1],
                   (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6f8))(iVar3,0), iVar3 != 0)) {
                  thunk_FUN_1042f860(1);
                }
                goto LAB_10432388;
              }
              pUVar7 = (User *)piVar2[1];
              (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x650))(pUVar7);
            }
LAB_104322ee:
            (**(code **)(**(int **)GMalloc_exref + 8))(pUVar7);
          }
LAB_10432388:
          (**(code **)(**(int **)GMalloc_exref + 8))(piVar2);
        }
        iVar6 = iVar6 + 1;
        ppvVar4 = ExceptionList;
      } while (iVar6 < *(int *)(iVar5 + 0x198));
    }
  }
  ExceptionList = ppvVar4;
  uStack_4 = 0xffffffff;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  FArray::Realloc((FArray *)(this + 0x194),0xc);
  *(undefined4 *)(this + 0x1a4) = 8;
  thunk_FUN_10423210();
  pUVar7 = param_1;
  if (((param_1 != (User *)0x0) && (0 < *(int *)(*(int *)(param_1 + 0x204) + 0x60))) &&
     (DAT_10b1f538 != 0)) {
    iVar5 = thunk_FUN_104226e0((int *)(*(int *)(param_1 + 0x204) + 0x60));
    if (iVar5 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar5);
      thunk_FUN_1042c470(*(int *)(pUVar7 + 0x204) + 0x60);
    }
    param_1 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)(8,&DAT_10853a28);
    if (param_1 == (User *)0x0) {
      param_1 = (User *)0x0;
    }
    else {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    uStack_4 = 0xffffffff;
    if (param_1 != (User *)0x0) {
      *(User **)(param_1 + 4) = pUVar7;
      *(undefined4 *)param_1 = 1;
    }
    thunk_FUN_1042c3f0(*(int *)(pUVar7 + 0x204) + 0x60,&param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 10311031 UNetworkHandler::RequestObserverEndPacket callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestObserverEndPacket(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestObserverEndPacket(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x11031  7480
                       ?RequestObserverEndPacket@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xb8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 1031125c UNetworkHandler::RequestPetUseItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPetUseItem(int) */

void __thiscall UNetworkHandler::RequestPetUseItem(UNetworkHandler *this,int param_1)

{
                    /* 0x1125c  7495  ?RequestPetUseItem@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x8a,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103113b0 UNetworkHandler::IsNotYetLogin callees=
// strings: 

/* public: virtual bool __thiscall UNetworkHandler::IsNotYetLogin(void) */

bool __thiscall UNetworkHandler::IsNotYetLogin(UNetworkHandler *this)

{
                    /* 0x113b0  5909  ?IsNotYetLogin@UNetworkHandler@@UAE_NXZ */
  return *(int *)(this + 0x50) == 0;
}


// ==== 10311554 UNetworkHandler::GetUser callees=
// strings: 

/* public: virtual struct User * __thiscall UNetworkHandler::GetUser(int) */

User * __thiscall UNetworkHandler::GetUser(UNetworkHandler *this,int param_1)

{
  int *piVar1;
  
                    /* 0x11554  5271  ?GetUser@UNetworkHandler@@UAEPAUUser@@H@Z */
  if ((((-1 < param_1) && (DAT_10b1f538 != 0)) &&
      (piVar1 = (int *)thunk_FUN_104226e0(&param_1), piVar1 != (int *)0x0)) &&
     ((*piVar1 == 1 && ((User *)piVar1[1] != (User *)0x0)))) {
    return (User *)piVar1[1];
  }
  return (User *)0x0;
}


// ==== 10311577 UNetworkHandler::RequestPledgeMemberInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeMemberInfo(int,unsigned short const
   *) */

void __thiscall
UNetworkHandler::RequestPledgeMemberInfo(UNetworkHandler *this,int param_1,ushort *param_2)

{
                    /* 0x11577  7501  ?RequestPledgeMemberInfo@UNetworkHandler@@UAEXHPBG@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_108809b4,0xd0,0x1d,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10311608 UNetworkHandler::RequestConfirmCancelItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestConfirmCancelItem(int) */

void __thiscall UNetworkHandler::RequestConfirmCancelItem(UNetworkHandler *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x11608  7393  ?RequestConfirmCancelItem@UNetworkHandler@@UAEXH@Z */
  puStack_c = &LAB_1080e7f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088038c,0xd0,0x2d,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10311685 UNetworkHandler::RequestCharacterCreate callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestCharacterCreate(struct CharacterInfo) */

int __thiscall UNetworkHandler::RequestCharacterCreate(UNetworkHandler *this)

{
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  
                    /* 0x11685  7389
                       ?RequestCharacterCreate@UNetworkHandler@@UAEHUCharacterInfo@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cSdddddddddddd",0xb,&stack0x00000004,in_stack_00000034,
             in_stack_0000003c,in_stack_00000038,in_stack_0000004c,in_stack_00000040,
             in_stack_00000048,in_stack_00000054,in_stack_00000044,in_stack_00000050,
             in_stack_00000058,in_stack_0000005c,in_stack_00000060);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10311761 UNetworkHandler::operator_new callees=
// strings: 

/* public: static void * __cdecl UNetworkHandler::operator new(unsigned int,enum EInternal *) */

void * __cdecl UNetworkHandler::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x11761  1967  ??2UNetworkHandler@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1031177a UNetworkHandler::SendWareHouseDepositList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SendWareHouseDepositList(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::SendWareHouseDepositList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_2408;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x1177a  7713
                       ?SendWareHouseDepositList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x104068fa;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvStack_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      pvStack_2408 = (void *)((int)pvStack_2408 + -1);
    } while (pvStack_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088029c,0x31,pvVar1,iVar5,auStack_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1031188d UNetworkHandler::IsPawnCreatePacket callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::IsPawnCreatePacket(struct NetworkPacket,int &) */

int __thiscall
UNetworkHandler::IsPawnCreatePacket
          (UNetworkHandler *this,byte param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined1 auStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1188d  5923  ?IsPawnCreatePacket@UNetworkHandler@@UAEHUNetworkPacket@@AAH@Z
                        */
  puStack_c = &LAB_1080fe00;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  uVar1 = (uint)param_2;
  if (0x108 < uVar1) {
    return 0;
  }
  if (uVar1 == 0x108) {
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff8c,&param_4);
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    if (*piVar3 != 5) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    iVar2 = *(int *)(iVar2 + 4);
    goto joined_r0x1042c00d;
  }
  switch(uVar1) {
  case 3:
  case 4:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,"ddddd",auStack_18,auStack_18,auStack_18
                       ,auStack_18,&param_4);
    goto LAB_1042bc39;
  default:
    goto switchD_1042bc02_caseD_5;
  case 0xb:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff8c,&param_4);
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    bVar4 = *piVar3 == 2;
    break;
  case 0x16:
  case 0x8c:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff8c,&param_4);
    goto LAB_1042bc39;
  case 0x4c:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff8c,&param_4);
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    bVar4 = *piVar3 == 4;
    break;
  case 0x59:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff8c,&param_4);
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    bVar4 = *piVar3 == 3;
    break;
  case 0x99:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff44,auStack_18,&param_4);
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    if (*piVar3 != 4) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    iVar2 = *(int *)(iVar2 + 4);
    goto joined_r0x1042c00d;
  case 0xb1:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_1087ff44,auStack_18,&param_4);
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    if (*piVar3 != 1) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    iVar2 = *(int *)(iVar2 + 4);
joined_r0x1042c00d:
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    goto LAB_1042bc8c;
  case 0xdd:
    ExceptionList = &pvStack_10;
    *(int *)(*(int *)(this + 0x48) + 0x4ef8) = param_3 + param_4;
    puStack_14 = &stack0xffffffd4;
    thunk_FUN_104026b0(*(undefined4 *)(this + 0x48),param_4,&DAT_108810b0,auStack_18,auStack_18,
                       auStack_18,&param_4);
LAB_1042bc39:
    *(undefined4 *)(*(int *)(this + 0x48) + 0x4ef8) = 0;
    *param_5 = param_4;
    if (DAT_10b1f538 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    piVar3 = (int *)thunk_FUN_104226e0(&param_4);
    bVar4 = *piVar3 == 1;
  }
  if ((bVar4) && (iVar2 = thunk_FUN_104226e0(&param_4), *(int *)(iVar2 + 4) != 0)) {
LAB_1042bc8c:
    iVar2 = thunk_FUN_104226e0(&param_4);
    if (*(int *)(iVar2 + 4) != 0) {
switchD_1042bc02_caseD_5:
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 103118c4 UNetworkHandler::ConfirmDlg callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ConfirmDlg(class L2ParamStack &) */

void __thiscall UNetworkHandler::ConfirmDlg(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0x118c4  3683  ?ConfirmDlg@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fa3c,0xc5,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10311996 UNetworkHandler::Say callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::Say(unsigned short *) */

void __thiscall UNetworkHandler::Say(UNetworkHandler *this,ushort *param_1)

{
                    /* 0x11996  7681  ?Say@UNetworkHandler@@UAEXPAG@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,2,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10311a04 UNetworkHandler::SendTimeCheckPacket callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendTimeCheckPacket(class L2ParamStack &) */

void __thiscall UNetworkHandler::SendTimeCheckPacket(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x11a04  7712  ?SendTimeCheckPacket@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x97,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10311b3f UNetworkHandler::GetRequestedPledgeID callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::GetRequestedPledgeID(int) */

int __thiscall UNetworkHandler::GetRequestedPledgeID(UNetworkHandler *this,int param_1)

{
  int iVar1;
  
                    /* 0x11b3f  5002  ?GetRequestedPledgeID@UNetworkHandler@@UAEHH@Z */
  if (0 < param_1) {
    iVar1 = thunk_FUN_10422640(&param_1);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== 10311db0 UNetworkHandler::NetPing callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::NetPing(int) */

void __thiscall UNetworkHandler::NetPing(UNetworkHandler *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x11db0  6222  ?NetPing@UNetworkHandler@@UAEXH@Z */
  piVar1 = *(int **)(this + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,&DAT_1087fa3c,0xa8,param_1,uVar3);
  *(undefined4 *)(this + 0x18c) = 0;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10311e46 UNetworkHandler::RequestAskJoinPartyRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestAskJoinPartyRoom(class L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestAskJoinPartyRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x11e46  7375
                       ?RequestAskJoinPartyRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080e740;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880bc4,0xd0,0x14,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10311e82 UNetworkHandler::RequestFriendList callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestFriendList(void) */

int __thiscall UNetworkHandler::RequestFriendList(UNetworkHandler *this)

{
                    /* 0x11e82  7442  ?RequestFriendList@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x60);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10311e87 UNetworkHandler::RequestWithDrawalParty callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestWithDrawalParty(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestWithDrawalParty(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x11e87  7585
                       ?RequestWithDrawalParty@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x2b);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10311ecd UNetworkHandler::RequestPledgeMemberList callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestPledgeMemberList(void) */

int __thiscall UNetworkHandler::RequestPledgeMemberList(UNetworkHandler *this)

{
                    /* 0x11ecd  7502  ?RequestPledgeMemberList@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x3c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10311f7c UNetworkHandler::SetImportedAllyCrestID callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SetImportedAllyCrestID(int,class UTexture *) */

void __thiscall
UNetworkHandler::SetImportedAllyCrestID(UNetworkHandler *this,int param_1,UTexture *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x11f7c  7881  ?SetImportedAllyCrestID@UNetworkHandler@@UAEXHPAVUTexture@@@Z
                        */
  iVar3 = 0;
  if (0 < param_1) {
    iVar1 = *(int *)(this + 0x48);
    if (0 < *(int *)(iVar1 + 0x4f2c)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x4f28) + 8 + iVar3 * 0xc);
        if (*(int *)(iVar2 + 0xcc) == param_1) {
          *(UTexture **)(iVar2 + 0xe4) = param_2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x4f2c));
    }
  }
  return;
}


// ==== 10311fe0 UNetworkHandler::SetPrivateStoreMsg callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SetPrivateStoreMsg(unsigned short *) */

void __thiscall UNetworkHandler::SetPrivateStoreMsg(UNetworkHandler *this,ushort *param_1)

{
                    /* 0x11fe0  7983  ?SetPrivateStoreMsg@UNetworkHandler@@UAEXPAG@Z */
  if (param_1 != (ushort *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x77,param_1)
    ;
  }
  return;
}


// ==== 103120f8 UNetworkHandler::AnswerTradeRequest callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::AnswerTradeRequest(class L2ParamStack &) */

void __thiscall UNetworkHandler::AnswerTradeRequest(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x120f8  3382  ?AnswerTradeRequest@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x44,pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 103121e3 UNetworkHandler::CanNotMoveAnymore callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::CanNotMoveAnymore(class AActor *,class
   FVector,int,int) */

void __thiscall
UNetworkHandler::CanNotMoveAnymore
          (UNetworkHandler *this,int param_1,float param_3,float param_4,float param_5,
          undefined4 param_6,int param_7)

{
  int iVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
                    /* 0x121e3  3488
                       ?CanNotMoveAnymore@UNetworkHandler@@UAEXPAVAActor@@VFVector@@HH@Z */
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0)) {
    for (pUVar2 = *(UClass **)(iVar1 + 0x24); pUVar2 != (UClass *)0x0;
        pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
      if (pUVar2 == &AVehicle::PrivateStaticClass) {
        param_3 = param_3 - *(float *)(iVar1 + 0x1bc);
        puVar7 = &uStack_18;
        param_4 = param_4 - *(float *)(iVar1 + 0x1c0);
        param_5 = param_5 - *(float *)(iVar1 + 0x1c4);
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0x3f800000;
        iVar6 = FVector::RotateAngleAxis
                          ((FVector *)&param_3,(int)auStack_c,
                           (FVector *)-(*(uint *)(iVar1 + 0x1cc) & 0xffff));
        param_3 = *(float *)(iVar6 + 4);
        param_4 = *(float *)(iVar6 + 8);
        uVar3 = FUN_107a6660(puVar7);
        uVar4 = FUN_107a6660();
        uVar5 = FUN_107a6660();
        (**(code **)(**(int **)(unaff_EBX + 0x48) + 0x68))
                  (*(int **)(unaff_EBX + 0x48),"cddddd",0x5d,*(undefined4 *)(iVar1 + 0x60),uVar3,
                   uVar4,uVar5,param_5);
        FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
        return;
      }
    }
  }
  if (param_7 == 0) {
    uVar3 = FUN_107a6660();
    uVar4 = FUN_107a6660();
    uVar5 = FUN_107a6660();
    (**(code **)(**(int **)(this + 0x48) + 0x68))
              (*(int **)(this + 0x48),"cdddd",0x36,uVar3,uVar4,uVar5,param_6);
    FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                        (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  }
  return;
}


// ==== 103123dc UNetworkHandler::RequestMakeMacro callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestMakeMacro(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestMakeMacro(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  FOutputDevice *this_00;
  int iVar13;
  uint uStack_2018;
  undefined1 auStack_2000 [8188];
  undefined4 uStack_4;
  
                    /* 0x123dc  7473  ?RequestMakeMacro@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x10406cfa;
  iVar13 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  if ((char)pvVar6 != '\0') {
    uStack_2018 = (uint)pvVar6 & 0xff;
    do {
      pvVar7 = L2ParamStack::Top(param_1);
      pvVar8 = L2ParamStack::Top(param_1);
      pvVar9 = L2ParamStack::Top(param_1);
      pvVar10 = L2ParamStack::Top(param_1);
      pvVar11 = L2ParamStack::Top(param_1);
      iVar12 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2000 + iVar13,0x2000 - iVar13
                                  ,"ccdcS",(uint)pvVar7 & 0xff,(uint)pvVar8 & 0xff,pvVar9,
                                  (uint)pvVar10 & 0xff,pvVar11);
      iVar13 = iVar13 + iVar12;
      uStack_2018 = uStack_2018 - 1;
    } while (uStack_2018 != 0);
    pvVar6 = (void *)((uint)pvVar6 & 0xff);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"cdSSSccb",0xc1,pvVar1,pvVar2,pvVar3,pvVar4,(uint)pvVar5 & 0xff,
             (uint)pvVar6 & 0xff,iVar13,auStack_2000);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10312562 UNetworkHandler::ValidatePosition callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ValidatePosition(class FVector,int,int) */

void __thiscall UNetworkHandler::ValidatePosition(UNetworkHandler *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
                    /* 0x12562  8799  ?ValidatePosition@UNetworkHandler@@UAEXVFVector@@HH@Z */
  piVar1 = *(int **)(this + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660(in_stack_00000010,in_stack_00000014);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cddddd",0x48,uVar3);
  return;
}


// ==== 1031282d UNetworkHandler::GetAllyCrestTex callees=
// strings: 

/* public: virtual class UTexture * __thiscall UNetworkHandler::GetAllyCrestTex(int) */

UTexture * __thiscall UNetworkHandler::GetAllyCrestTex(UNetworkHandler *this,int param_1)

{
  int iVar1;
  
                    /* 0x1282d  4345  ?GetAllyCrestTex@UNetworkHandler@@UAEPAVUTexture@@H@Z */
  if (((0 < param_1) && (iVar1 = thunk_FUN_10422740(&param_1), iVar1 != 0)) &&
     (*(UTexture **)(iVar1 + 0xe4) != (UTexture *)0x0)) {
    return *(UTexture **)(iVar1 + 0xe4);
  }
  return (UTexture *)0x0;
}


// ==== 10312850 UNetworkHandler::EW callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::EW(int) */

void __thiscall UNetworkHandler::EW(UNetworkHandler *this,int param_1)

{
  short sVar1;
  User *this_00;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  UNetworkHandler *pUStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x12850  4111  ?EW@UNetworkHandler@@UAEXH@Z */
  iStack_4 = -1;
  puStack_8 = &LAB_108103eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pUStack_10 = this;
  this_00 = (User *)(**(code **)**(undefined4 **)GMalloc_exref)();
  if (this_00 == (User *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = User::User(this_00);
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
    iVar4 = thunk_FUN_104226e0(&pUStack_10);
    if (iVar4 != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(iVar4);
      thunk_FUN_1042c470(&pUStack_10);
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
    thunk_FUN_1042c3f0(&pUStack_10,&stack0xffffffdc);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,3,L"narcasse");
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = u_EnterWorld_1088ac58;
  return;
}


// ==== 10312bcf UNetworkHandler::AddServerPingList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::AddServerPingList(int,int,int) */

void __thiscall
UNetworkHandler::AddServerPingList(UNetworkHandler *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
                    /* 0x12bcf  3324  ?AddServerPingList@UNetworkHandler@@UAEXHHH@Z */
  if ((-1 < param_1) && (param_1 < 0x80)) {
    piVar1 = (int *)(*(int *)(this + 0x184) + 0x34 + param_1 * 0x10);
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = 0;
  }
  return;
}


// ==== 10312bf2 UNetworkHandler::RequestPetition callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestPetition(unsigned short *,int) */

int __thiscall UNetworkHandler::RequestPetition(UNetworkHandler *this,ushort *param_1,int param_2)

{
                    /* 0x12bf2  7496  ?RequestPetition@UNetworkHandler@@UAEHPAGH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880d2c,0x7f,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10312c2e UNetworkHandler::GNOManager callees=
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UNetworkHandler::GNOManager(float) */

void __thiscall UNetworkHandler::GNOManager(UNetworkHandler *this,float param_1)

{
  float fVar1;
  
                    /* 0x12c2e  4286  ?GNOManager@UNetworkHandler@@UAEXM@Z */
  fVar1 = *(float *)(this + 0x5c);
  *(float *)(this + 0x5c) = param_1 + fVar1;
  if (_DAT_108822fc < param_1 + fVar1) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0xffffffff;
  }
  return;
}


// ==== 10312c60 UNetworkHandler::RequestItemList callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestItemList(void) */

int __thiscall UNetworkHandler::RequestItemList(UNetworkHandler *this)

{
                    /* 0x12c60  7458  ?RequestItemList@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0xf);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 1031321e UNetworkHandler::RequestHennaUnequip callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestHennaUnequip(int) */

void __thiscall UNetworkHandler::RequestHennaUnequip(UNetworkHandler *this,int param_1)

{
                    /* 0x1321e  7455  ?RequestHennaUnequip@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xbf,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103132c3 UNetworkHandler::RequestReplyStopPledgeWar callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestReplyStopPledgeWar(class L2ParamStack &)
    */

int __thiscall
UNetworkHandler::RequestReplyStopPledgeWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x132c3  7542
                       ?RequestReplyStopPledgeWar@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  return 1;
}


// ==== 10313318 UNetworkHandler::SetPrivateStoreList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SetPrivateStoreList(class L2ParamStack &) */

void __thiscall UNetworkHandler::SetPrivateStoreList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  FOutputDevice *this_00;
  int iVar7;
  void *pvStack_2414;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x13318  7982  ?SetPrivateStoreList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  uStack_4 = 0x10408c2a;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      pvStack_2414 = (void *)((int)pvStack_2414 + -1);
    } while (pvStack_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x74,pvVar1,pvVar2,iVar7,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10313520 UNetworkHandler::SendDestroyItem callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::SendDestroyItem(int,int) */

void __thiscall UNetworkHandler::SendDestroyItem(UNetworkHandler *this,int param_1,int param_2)

{
                    /* 0x13520  7703  ?SendDestroyItem@UNetworkHandler@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x59,param_1,param_2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10313651 UNetworkHandler::RequestPledgeReorganizeMember callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeReorganizeMember(class L2ParamStack
   &) */

void __thiscall
UNetworkHandler::RequestPledgeReorganizeMember(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  FOutputDevice *this_00;
  
                    /* 0x13651  7506
                       ?RequestPledgeReorganizeMember@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),"chdSdS",0xd0,0x24,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1031366f UNetworkHandler::RequestOlympiadMatchList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestOlympiadMatchList(void) */

void __thiscall UNetworkHandler::RequestOlympiadMatchList(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1366f  7482  ?RequestOlympiadMatchList@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_1080e6e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x13);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 103137be UNetworkHandler::RequestGiveNickName callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestGiveNickName(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestGiveNickName(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x137be  7449  ?RequestGiveNickName@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_108806cc,0x55,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10313976 UNetworkHandler::ResponseAuthGameGuard callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::ResponseAuthGameGuard(void) */

int __thiscall UNetworkHandler::ResponseAuthGameGuard(UNetworkHandler *this)

{
  int *piVar1;
  
                    /* 0x13976  7640  ?ResponseAuthGameGuard@UNetworkHandler@@UAEHXZ */
  piVar1 = *(int **)(this + 0x4c);
  if (piVar1[0xe] != 0) {
    (**(code **)(*piVar1 + 0x68))
              (piVar1,"cddddd",7,*(undefined4 *)(this + 0xe4),*(undefined4 *)(DAT_10c51044 + 0x36c),
               *(undefined4 *)(DAT_10c51044 + 0x370),*(undefined4 *)(DAT_10c51044 + 0x374),
               *(undefined4 *)(DAT_10c51044 + 0x378));
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10313b10 UNetworkHandler::RequestAnswerJoinPledge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestAnswerJoinPledge(class L2ParamStack &) */

int __thiscall UNetworkHandler::RequestAnswerJoinPledge(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x13b10  7373
                       ?RequestAnswerJoinPledge@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x25,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10313d04 UNetworkHandler::RequestProcureCropList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestProcureCropList(class L2ParamStack *) */

void __thiscall UNetworkHandler::RequestProcureCropList(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_2438 [9224];
  void *pvStack_30;
  void *pvStack_2c;
  void *pvStack_24;
  int iStack_20;
  UNetworkHandler *pUStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13d04  7521
                       ?RequestProcureCropList@UNetworkHandler@@UAEXPAVL2ParamStack@@@Z */
  puStack_c = &LAB_1080e690;
  pvStack_10 = ExceptionList;
  iStack_18 = 0x10406213;
  puStack_14 = &stack0xffffdbbc;
  iVar4 = 0;
  uStack_8 = 0;
  iStack_20 = 0;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  pvStack_24 = L2ParamStack::Top(param_1);
  for (iStack_18 = 0; iStack_18 < (int)pvStack_24; iStack_18 = iStack_18 + 1) {
    pvStack_30 = L2ParamStack::Top(param_1);
    pvStack_2c = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    iVar3 = thunk_FUN_10402610(*(undefined4 *)(pUStack_1c + 0x48),auStack_2438 + iVar4,
                               0x2400 - iVar4,&DAT_108810b0,pvStack_30,pvStack_2c,pvVar1,pvVar2);
    iVar4 = iVar4 + iVar3;
    iStack_20 = iVar4;
  }
  (**(code **)(**(int **)(pUStack_1c + 0x48) + 0x68))
            (*(int **)(pUStack_1c + 0x48),&DAT_10880384,0xd0,9,pvStack_24,iVar4,auStack_2438);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10313def UNetworkHandler::RequestExitPartyMatchingWaitingRoom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExitPartyMatchingWaitingRoom(class
   L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestExitPartyMatchingWaitingRoom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13def  7438
                       ?RequestExitPartyMatchingWaitingRoom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  puStack_c = &LAB_1080e770;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x17);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10313e0d UNetworkHandler::RequestTutorialQuestionMarkPressed callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTutorialQuestionMarkPressed(int) */

int __thiscall
UNetworkHandler::RequestTutorialQuestionMarkPressed(UNetworkHandler *this,int param_1)

{
                    /* 0x13e0d  7582  ?RequestTutorialQuestionMarkPressed@UNetworkHandler@@UAEHH@Z
                        */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x7d,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10313e62 UNetworkHandler::RequestCharacterRestore callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestCharacterRestore(int) */

int __thiscall UNetworkHandler::RequestCharacterRestore(UNetworkHandler *this,int param_1)

{
                    /* 0x13e62  7391  ?RequestCharacterRestore@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x62,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10313ef3 UNetworkHandler::RequestPledgeWarList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeWarList(int,int) */

void __thiscall UNetworkHandler::RequestPledgeWarList(UNetworkHandler *this,int param_1,int param_2)

{
                    /* 0x13ef3  7509  ?RequestPledgeWarList@UNetworkHandler@@UAEXHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880ab0,0xd0,0x1e,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10313fb1 UNetworkHandler::GetNearestItem callees=
// strings: 

/* public: virtual struct Item * __thiscall UNetworkHandler::GetNearestItem(float,int) */

Item * __thiscall UNetworkHandler::GetNearestItem(UNetworkHandler *this,float param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x13fb1  4815  ?GetNearestItem@UNetworkHandler@@UAEPAUItem@@MH@Z */
  piVar1 = (int *)(**(code **)(*(int *)this + 0x538))(1,param_1,param_2);
  if (((piVar1 != (int *)0x0) && ((Item *)piVar1[1] != (Item *)0x0)) && (*piVar1 == 2)) {
    return (Item *)piVar1[1];
  }
  return (Item *)0x0;
}


// ==== 103140dd UNetworkHandler::RequestPledgeMemberPowerInfo callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeMemberPowerInfo(int,unsigned short
   const *) */

void __thiscall
UNetworkHandler::RequestPledgeMemberPowerInfo(UNetworkHandler *this,int param_1,ushort *param_2)

{
                    /* 0x140dd  7503  ?RequestPledgeMemberPowerInfo@UNetworkHandler@@UAEXHPBG@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_108809b4,0xd0,0x1b,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 103140f1 UNetworkHandler::PetitionVote callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::PetitionVote(class L2ParamStack &) */

void __thiscall UNetworkHandler::PetitionVote(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x140f1  6702  ?PetitionVote@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10883060,200,1,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314295 UNetworkHandler::RequestStartAllianceWar callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestStartAllianceWar(class L2ParamStack &) */

void __thiscall
UNetworkHandler::RequestStartAllianceWar(UNetworkHandler *this,L2ParamStack *param_1)

{
                    /* 0x14295  7568
                       ?RequestStartAllianceWar@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  return;
}


// ==== 103142d6 UNetworkHandler::RequestPrivateStoreBuyList callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreBuyList(int) */

void __thiscall UNetworkHandler::RequestPrivateStoreBuyList(UNetworkHandler *this,int param_1)

{
                    /* 0x142d6  7511  ?RequestPrivateStoreBuyList@UNetworkHandler@@UAEXH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x95,param_1);
  return;
}


// ==== 103142db UNetworkHandler::RequestPledgeCrest callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestPledgeCrest(int) */

int __thiscall UNetworkHandler::RequestPledgeCrest(UNetworkHandler *this,int param_1)

{
                    /* 0x142db  7498  ?RequestPledgeCrest@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x68,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10314592 UNetworkHandler::RequestCharacterDelete callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestCharacterDelete(int) */

int __thiscall UNetworkHandler::RequestCharacterDelete(UNetworkHandler *this,int param_1)

{
                    /* 0x14592  7390  ?RequestCharacterDelete@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0xc,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10314759 UNetworkHandler::UNetworkHandler callees=
// strings: 

/* public: __thiscall UNetworkHandler::UNetworkHandler(void) */

UNetworkHandler * __thiscall UNetworkHandler::UNetworkHandler(UNetworkHandler *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14759  849  ??0UNetworkHandler@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10810ce8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UL2NetHandler::UL2NetHandler((UL2NetHandler *)this);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  uStack_4._0_1_ = 2;
  uStack_4._1_3_ = 0;
  thunk_FUN_104337e0();
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  thunk_FUN_10433b90();
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10314808 UNetworkHandler::~UNetworkHandler callees=
// strings: 

/* public: virtual __thiscall UNetworkHandler::~UNetworkHandler(void) */

void __thiscall UNetworkHandler::~UNetworkHandler(UNetworkHandler *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x14808  1409  ??1UNetworkHandler@@UAE@XZ */
  puStack_8 = &LAB_10810c7f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  iStack_4 = 3;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4._0_1_ = 2;
  thunk_FUN_10433c80();
  iStack_4._0_1_ = 1;
  thunk_FUN_104338d0();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_1042c710();
  iStack_4 = 0xffffffff;
  UL2NetHandler::~UL2NetHandler((UL2NetHandler *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10314817 UNetworkHandler::SendPrivateStoreBuyBuyList callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::SendPrivateStoreBuyBuyList(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::SendPrivateStoreBuyBuyList(UNetworkHandler *this,L2ParamStack *param_1)

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
  FOutputDevice *this_00;
  int iVar10;
  void *pvStack_2420;
  short sStack_2418;
  short sStack_2404;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x14817  7707
                       ?SendPrivateStoreBuyBuyList@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x104090ea;
  iVar10 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvStack_2420 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      pvVar6 = L2ParamStack::Top(param_1);
      pvVar7 = L2ParamStack::Top(param_1);
      pvVar8 = L2ParamStack::Top(param_1);
      sStack_2418 = (short)pvVar5;
      sStack_2404 = (short)pvVar6;
      iVar9 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar10,0x2400 - iVar10,
                                 "ddhhdd",pvVar3,pvVar4,(int)sStack_2418,(int)sStack_2404,pvVar7,
                                 pvVar8);
      iVar10 = iVar10 + iVar9;
      pvStack_2420 = (void *)((int)pvStack_2420 + -1);
    } while (pvStack_2420 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x96,pvVar1,pvVar2,iVar10,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 1031492a UNetworkHandler::MTL callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::MTL(class AActor *,class FVector,class
   FVector,class AActor *,int) */

void __thiscall
UNetworkHandler::MTL
          (UNetworkHandler *this,int param_1,float param_3,float param_4,float param_5,float param_6
          ,FOutputDevice *param_7,float param_8,int param_9,int param_10)

{
  UClass *pUVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_EDI;
  UNetworkHandler **ppUVar9;
  undefined4 *puVar10;
  UNetworkHandler *pUStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  undefined4 uStack_4;
  
                    /* 0x1492a  6079  ?MTL@UNetworkHandler@@UAEXPAVAActor@@VFVector@@10H@Z */
  pUStack_1c = this;
  if (param_10 == 0) {
    if (param_9 != 0) {
      for (pUVar1 = *(UClass **)(param_9 + 0x24); pUVar1 != (UClass *)0x0;
          pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
        iVar8 = param_9;
        if (pUVar1 == &AVehicle::PrivateStaticClass) {
LAB_104221b3:
          param_3 = param_3 - *(float *)(iVar8 + 0x1bc);
          puVar10 = &uStack_18;
          param_4 = param_4 - *(float *)(iVar8 + 0x1c0);
          param_5 = param_5 - *(float *)(iVar8 + 0x1c4);
          param_6 = param_6 - *(float *)(iVar8 + 0x1bc);
          param_7 = (FOutputDevice *)((float)param_7 - *(float *)(iVar8 + 0x1c0));
          param_8 = param_8 - *(float *)(iVar8 + 0x1c4);
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0x3f800000;
          iVar4 = FVector::RotateAngleAxis
                            ((FVector *)&param_3,(int)auStack_c,
                             (FVector *)-(*(uint *)(iVar8 + 0x1cc) & 0xffff));
          param_3 = *(float *)(iVar4 + 4);
          param_4 = *(float *)(iVar4 + 8);
          pUStack_1c = (UNetworkHandler *)0x0;
          uStack_18 = 0;
          ppUVar9 = &pUStack_1c;
          uStack_14 = 0x3f800000;
          puVar5 = (undefined4 *)
                   FVector::RotateAngleAxis
                             ((FVector *)&param_5,(int)&uStack_10,
                              (FVector *)-(*(uint *)(iVar8 + 0x1cc) & 0xffff));
          param_4 = (float)*puVar5;
          param_5 = (float)puVar5[1];
          param_6 = (float)puVar5[2];
          uVar3 = FUN_107a6660(ppUVar9,puVar10);
          uVar6 = FUN_107a6660();
          uVar7 = FUN_107a6660();
          param_7 = (FOutputDevice *)FUN_107a6660();
          param_8 = (float)FUN_107a6660();
          uStack_4 = FUN_107a6660();
          (**(code **)(**(int **)(unaff_EDI + 0x48) + 0x68))
                    (*(int **)(unaff_EDI + 0x48),"cddddddd",0x5c,*(undefined4 *)(iVar8 + 0x60),uVar3
                     ,uVar6,uVar7,param_7,param_8,uStack_4);
          FOutputDevice::Logf(param_7,*(ushort **)GNetworkLog_exref);
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
  piVar2 = *(int **)(this + 0x48);
  iVar8 = *piVar2;
  uVar3 = FUN_107a6660(param_10 == 0);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar8 + 0x68))(piVar2,"cddddddd",1,uVar3);
  return;
}


// ==== 103149b6 UNetworkHandler::RequestTrade callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestTrade(int) */

int __thiscall UNetworkHandler::RequestTrade(UNetworkHandler *this,int param_1)

{
                    /* 0x149b6  7577  ?RequestTrade@UNetworkHandler@@UAEHH@Z */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8f8,0x15,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 103149c0 UNetworkHandler::InternalConstructor callees=
// strings: 

/* public: static void __cdecl UNetworkHandler::InternalConstructor(void *) */

void __cdecl UNetworkHandler::InternalConstructor(void *param_1)

{
                    /* 0x149c0  5719  ?InternalConstructor@UNetworkHandler@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UNetworkHandler(param_1);
    return;
  }
  return;
}


// ==== 10314ac4 UNetworkHandler::GetPledgeCrestTexFromPledgeCrestID callees=
// strings: 

/* public: virtual class UTexture * __thiscall
   UNetworkHandler::GetPledgeCrestTexFromPledgeCrestID(int) */

UTexture * __thiscall
UNetworkHandler::GetPledgeCrestTexFromPledgeCrestID(UNetworkHandler *this,int param_1)

{
  int iVar1;
  int iVar2;
  UTexture *pUVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ac4  4915
                       ?GetPledgeCrestTexFromPledgeCrestID@UNetworkHandler@@UAEPAVUTexture@@H@Z */
  puStack_8 = &LAB_10810308;
  pvStack_c = ExceptionList;
  if (0 < param_1) {
    iVar4 = 0;
    iVar1 = *(int *)(*(int *)(this + 0x48) + 0x4f2c);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(this + 0x48) + 0x4f28) + 8 + iVar4 * 0xc);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x80) == param_1)) {
          pUVar3 = *(UTexture **)(iVar2 + 0xe0);
          if (pUVar3 == (UTexture *)0x0) {
            uStack_4 = 0xffffffff;
            ExceptionList = &pvStack_c;
            thunk_FUN_1042cce0();
            ExceptionList = pvStack_c;
            return (UTexture *)0x0;
          }
          uStack_4 = 0xffffffff;
          ExceptionList = &pvStack_c;
          thunk_FUN_1042cce0();
          ExceptionList = pvStack_c;
          return pUVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return (UTexture *)0x0;
}


// ==== 10314b3c UNetworkHandler::RequestExAskJoinMPCC callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestExAskJoinMPCC(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestExAskJoinMPCC(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x14b3c  7425  ?RequestExAskJoinMPCC@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880bc4,0xd0,0xd,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314b8c UNetworkHandler::RequestDismissPledge callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestDismissPledge(void) */

int __thiscall UNetworkHandler::RequestDismissPledge(UNetworkHandler *this)

{
                    /* 0x14b8c  7412  ?RequestDismissPledge@UNetworkHandler@@UAEHXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x28);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10314c72 UNetworkHandler::RequestPledgeExtendedInfo callees=
// strings: 

/* public: virtual int __thiscall UNetworkHandler::RequestPledgeExtendedInfo(class L2ParamStack &)
    */

int __thiscall
UNetworkHandler::RequestPledgeExtendedInfo(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  
                    /* 0x14c72  7499
                       ?RequestPledgeExtendedInfo@UNetworkHandler@@UAEHAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f8a0,0x67,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10314d76 UNetworkHandler::RequestPrivateStoreBuyManage callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPrivateStoreBuyManage(void) */

void __thiscall UNetworkHandler::RequestPrivateStoreBuyManage(UNetworkHandler *this)

{
                    /* 0x14d76  7512  ?RequestPrivateStoreBuyManage@UNetworkHandler@@UAEXXZ */
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1087f9dc,0x90);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10314dcb UNetworkHandler::RequestPledgeSetMemberPowerGrade callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestPledgeSetMemberPowerGrade(unsigned short
   const *,int) */

void __thiscall
UNetworkHandler::RequestPledgeSetMemberPowerGrade(UNetworkHandler *this,ushort *param_1,int param_2)

{
                    /* 0x14dcb  7508  ?RequestPledgeSetMemberPowerGrade@UNetworkHandler@@UAEXPBGH@Z
                        */
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_10880a20,0xd0,0x1c,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314de9 UNetworkHandler::RequestRecipeShopListSet callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestRecipeShopListSet(class L2ParamStack &)
    */

void __thiscall
UNetworkHandler::RequestRecipeShopListSet(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_2408;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x14de9  7527
                       ?RequestRecipeShopListSet@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  uStack_4 = 0x104087fa;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvStack_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      pvStack_2408 = (void *)((int)pvStack_2408 + -1);
    } while (pvStack_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1088029c,0xb2,pvVar1,iVar5,auStack_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10314e25 UNetworkHandler::RequestOlympiadObserverEnd callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestOlympiadObserverEnd(void) */

void __thiscall UNetworkHandler::RequestOlympiadObserverEnd(UNetworkHandler *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e25  7484  ?RequestOlympiadObserverEnd@UNetworkHandler@@UAEXXZ */
  puStack_c = &LAB_1080e6d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x48) + 0x68))(*(int **)(this + 0x48),&DAT_1088095c,0xd0,0x12);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10314ebb UNetworkHandler::RequestPackageSend callees=
// strings: 

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall UNetworkHandler::RequestPackageSend(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestPackageSend(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  FOutputDevice *this_00;
  int iVar6;
  void *pvStack_2410;
  undefined1 auStack_2400 [9212];
  undefined4 uStack_4;
  
                    /* 0x14ebb  7492  ?RequestPackageSend@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z
                        */
  uStack_4 = 0x104095da;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  iVar6 = 0;
  pvStack_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(this + 0x48),auStack_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      pvStack_2410 = (void *)((int)pvStack_2410 + -1);
    } while (pvStack_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087ff04,0x9f,pvVar1,pvVar2,iVar6,auStack_2400);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10315014 UNetworkHandler::ReviveReply callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::ReviveReply(class L2ParamStack &) */

void __thiscall UNetworkHandler::ReviveReply(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  FOutputDevice *this_00;
  
                    /* 0x15014  7651  ?ReviveReply@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087f8f8,0x7a,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this_00,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10315131 UNetworkHandler::RequestSEKCustom callees=
// strings: 

/* public: virtual void __thiscall UNetworkHandler::RequestSEKCustom(class L2ParamStack &) */

void __thiscall UNetworkHandler::RequestSEKCustom(UNetworkHandler *this,L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x15131  7547  ?RequestSEKCustom@UNetworkHandler@@UAEXAAVL2ParamStack@@@Z */
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(this + 0x48) + 0x68))
            (*(int **)(this + 0x48),&DAT_1087fb50,0x49,pvVar1,pvVar2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


