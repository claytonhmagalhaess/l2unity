// ==== 10701005 AMasterServerLink::operator_new

/* public: static void * __cdecl AMasterServerLink::operator new(unsigned int,enum EInternal *) */

void * __cdecl AMasterServerLink::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1005  74  ??2AMasterServerLink@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1070100a thunk_FUN_10714450 thunk -> 10714450

// ==== 1070100f thunk_FUN_10709a20 thunk -> 10709a20

// ==== 10701014 FUdpLink::FUdpLink

/* public: __thiscall FUdpLink::FUdpLink(void) */

FUdpLink * __thiscall FUdpLink::FUdpLink(FUdpLink *this)

{
  SOCKET SVar1;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1014  42  ??0FUdpLink@@QAE@XZ */
  puStack_c = &LAB_10742af9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  iStack_8 = 0;
  FString::FString(aFStack_28);
  iStack_8._0_1_ = 1;
  thunk_FUN_1071af40();
  *(undefined2 *)(this + 4) = 2;
  SVar1 = socket(2,2,0x11);
  *(SOCKET *)(this + 0x18) = SVar1;
  thunk_FUN_1071b710(SVar1,1);
  thunk_FUN_1071b6e0(*(SOCKET *)(this + 0x18));
  thunk_FUN_1071b780();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10701019 FArchiveTcpSocket::operator=

/* public: struct FArchiveTcpSocket & __thiscall FArchiveTcpSocket::operator=(struct
   FArchiveTcpSocket const &) */

FArchiveTcpSocket * __thiscall
FArchiveTcpSocket::operator=(FArchiveTcpSocket *this,FArchiveTcpSocket *param_1)

{
                    /* 0x1019  96  ??4FArchiveTcpSocket@@QAEAAU0@ABU0@@Z */
  FArchive::operator=((FArchive *)this,(FArchive *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


// ==== 1070101e UTcpipConnection::operator_new

/* public: static void * __cdecl UTcpipConnection::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTcpipConnection::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x101e  85  ??2UTcpipConnection@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10701023 thunk_FUN_1070f100 thunk -> 1070f100

// ==== 10701028 AInternetLink::execIsDataPending

/* public: void __thiscall AInternetLink::execIsDataPending(struct FFrame &,void * const) */

void __thiscall AInternetLink::execIsDataPending(AInternetLink *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1028  297  ?execIsDataPending@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742890;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(this + 0x3d0) != 0) {
    *(undefined4 *)param_2 = 1;
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070102d thunk_FUN_10713cc0 thunk -> 10713cc0

// ==== 10701032 thunk_FUN_107128a0 thunk -> 107128a0

// ==== 10701037 thunk_FUN_1070f240 thunk -> 1070f240

// ==== 1070103c UTcpNetDriver::InitListen

/* public: virtual int __thiscall UTcpNetDriver::InitListen(class FNetworkNotify *,class FURL
   &,class FString &) */

int __thiscall
UTcpNetDriver::InitListen
          (UTcpNetDriver *this,FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  u_short uVar1;
  int iVar2;
  FString *pFVar3;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x103c  183
                       ?InitListen@UTcpNetDriver@@UAEHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */
  puStack_c = &LAB_10743d29;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar2 = UNetDriver::InitListen((UNetDriver *)this,param_1,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = InitBase(this,0,param_1,param_2,param_3);
    if (iVar2 != 0) {
      pFVar3 = thunk_FUN_1071b5d0(aFStack_28,*(uint *)(this + 0xb0),0);
      iStack_8._0_1_ = 1;
      FString::operator=((FString *)(param_2 + 0xc),pFVar3);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_28);
      uVar1 = ntohs(*(u_short *)(this + 0xae));
      *(uint *)(param_2 + 0x18) = (uint)uVar1;
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  ((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x304,
                   L"TcpNetDriver on port %i",(uint)uVar1);
      }
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10701041 ATcpLink::execSendBinary

/* public: void __thiscall ATcpLink::execSendBinary(struct FFrame &,void * const) */

void __thiscall ATcpLink::execSendBinary(ATcpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  FArray *this_00;
  undefined1 auStack_130 [264];
  int iStack_28;
  int iStack_20;
  ATcpLink *pAStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1041  311  ?execSendBinary@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743b80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffec4;
  uStack_8 = 0;
  iStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pAStack_1c = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&iStack_18);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,auStack_130);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = auStack_130;
  }
  else {
    puVar3 = *(undefined1 **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 != 0) && (*(int *)(pAStack_1c + 0x3c0) != -1)) {
    this_00 = (FArray *)(pAStack_1c + 1000);
    iVar2 = FArray::Add(this_00,iStack_18,1);
    iStack_20 = 0;
    while( true ) {
      if (iStack_18 <= iStack_20) break;
      iStack_28 = iStack_20;
      *(undefined1 *)(*(int *)this_00 + iStack_20 + iVar2) = puVar3[iStack_20];
      iStack_20 = iStack_20 + 1;
    }
    *(int *)param_2 = iStack_18;
    FlushSendBuffer(pAStack_1c);
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701046 thunk_FUN_107136b0 thunk -> 107136b0

// ==== 1070104b thunk_FUN_10705910 thunk -> 10705910

// ==== 1070105a FMD5UpdateData::~FMD5UpdateData

/* public: __thiscall FMD5UpdateData::~FMD5UpdateData(void) */

void __thiscall FMD5UpdateData::~FMD5UpdateData(FMD5UpdateData *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x105a  61  ??1FMD5UpdateData@@QAE@XZ */
  puStack_8 = &LAB_10741c65;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0xc));
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070105f thunk_FUN_10712480 thunk -> 10712480

// ==== 10701064 ATcpLink::operator_new

/* public: static void * __cdecl ATcpLink::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
ATcpLink::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1064  79  ??2ATcpLink@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10701069 thunk_FUN_107141d0 thunk -> 107141d0

// ==== 1070106e AInternetLink::execStringToIpAddr

/* public: void __thiscall AInternetLink::execStringToIpAddr(struct FFrame &,void * const) */

void __thiscall AInternetLink::execStringToIpAddr(AInternetLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ulong hostlong;
  u_long uVar3;
  u_long *puVar4;
  char *pcVar5;
  FString aFStack_30 [12];
  u_long auStack_24 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x106e  317  ?execStringToIpAddr@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742919;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_30);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_30);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,auStack_24);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = auStack_24;
  }
  else {
    puVar4 = *(u_long **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pcVar5 = (char *)0x0;
  puVar2 = FString::operator*(aFStack_30);
  pcVar5 = appToAnsi(puVar2,pcVar5);
  hostlong = inet_addr(pcVar5);
  if (hostlong != 0xffffffff) {
    uVar3 = htonl(hostlong);
    *puVar4 = uVar3;
    puVar4[1] = 0;
    *(undefined4 *)param_2 = 1;
    uStack_8 = uStack_8 & 0xffffff00;
    FString::~FString(aFStack_30);
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_30);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070107d FArchiveTcpReader::FArchiveTcpReader

/* public: __thiscall FArchiveTcpReader::FArchiveTcpReader(class FTcpLink *) */

FArchiveTcpReader * __thiscall
FArchiveTcpReader::FArchiveTcpReader(FArchiveTcpReader *this,FTcpLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x107d  18  ??0FArchiveTcpReader@@QAE@PAVFTcpLink@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742c9c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchiveTcpSocket::FArchiveTcpSocket((FArchiveTcpSocket *)this,param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701082 AServerQueryClient::Init

/* public: void __thiscall AServerQueryClient::Init(void) */

void __thiscall AServerQueryClient::Init(AServerQueryClient *this)

{
  void *this_00;
  FUdpLink *pFVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1082  180  ?Init@AServerQueryClient@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107432ab;
  pvStack_c = ExceptionList;
  if ((*(int *)(this + 0x3bc) == 0) &&
     ((((byte)this[0x41c] & 1) == 0 || (-1 < *(int *)(this + 0x3c0))))) {
    ExceptionList = &pvStack_c;
    this_00 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x38,&DAT_10749b4c);
    uStack_4 = 0;
    if (this_00 == (void *)0x0) {
      pFVar1 = (FUdpLink *)0x0;
    }
    else if (((byte)this[0x41c] & 1) == 0) {
      pFVar1 = thunk_FUN_107102f0(this_00,this,0);
    }
    else {
      pFVar1 = thunk_FUN_107102f0(this_00,this,*(int *)(this + 0x3c0));
    }
    *(FUdpLink **)(this + 0x3bc) = pFVar1;
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070108c thunk_FUN_10710980 thunk -> 10710980

// ==== 10701091 ATcpLink::InternalConstructor

/* public: static void __cdecl ATcpLink::InternalConstructor(void *) */

void __cdecl ATcpLink::InternalConstructor(void *param_1)

{
                    /* 0x1091  190  ?InternalConstructor@ATcpLink@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    ATcpLink(param_1);
    return;
  }
  return;
}


// ==== 10701096 thunk_FUN_107098c0 thunk -> 107098c0

// ==== 1070109b FArchiveUdpReader::FArchiveUdpReader

/* public: __thiscall FArchiveUdpReader::FArchiveUdpReader(unsigned char *,int) */

FArchiveUdpReader * __thiscall
FArchiveUdpReader::FArchiveUdpReader(FArchiveUdpReader *this,uchar *param_1,int param_2)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x109b  24  ??0FArchiveUdpReader@@QAE@PAEH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742b59;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this);
  *(undefined ***)this = vftable;
  *(uchar **)(this + 0x38) = param_1;
  *(int *)(this + 0x3c) = param_2;
  *(undefined4 *)(this + 0x10) = 1;
  if ((uint)param_2 < 4) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0x80000000;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  else {
    uVar1 = *(uint *)param_1;
    *(uint *)(this + 4) = uVar1;
    *(uchar **)(this + 0x38) = param_1 + 4;
    *(int *)(this + 0x3c) = param_2 + -4;
    *(uint *)(this + 8) = uVar1 | 0x80000000;
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107010a0 ATcpLink::eventReceivedBinary

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::eventReceivedBinary(int,unsigned char *) */

void __thiscall ATcpLink::eventReceivedBinary(ATcpLink *this,int param_1,uchar *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *piVar3;
  undefined4 uVar4;
  int iStack_104;
  undefined1 auStack_100 [256];
  
                    /* 0x10a0  278  ?eventReceivedBinary@ATcpLink@@QAEXHPAE@Z */
  iStack_104 = param_1;
  _memcpy(auStack_100,&param_2,0xff);
  iVar1 = *(int *)this;
  uVar4 = 0;
  piVar3 = &iStack_104;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ReceivedBinary,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,piVar3,uVar4);
  return;
}


// ==== 107010a5 thunk_FUN_1070f1a0 thunk -> 1070f1a0

// ==== 107010af ATcpLink::execListen

/* public: void __thiscall ATcpLink::execListen(struct FFrame &,void * const) */

void __thiscall ATcpLink::execListen(ATcpLink *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10af  299  ?execListen@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743a50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 == 0) || (*(SOCKET *)(this + 0x3c0) == 0xffffffff)) {
    *(undefined4 *)param_2 = 1;
    ExceptionList = pvStack_10;
    return;
  }
  if (this[0x3d8] != (ATcpLink)0x7) {
    if (this[0x3d8] != (ATcpLink)0x1) {
      *(undefined4 *)param_2 = 0;
      ExceptionList = pvStack_10;
      return;
    }
    iVar1 = listen(*(SOCKET *)(this + 0x3c0),(-(uint)(*(int *)(this + 0x3e4) != 0) & 9) + 1);
    if (iVar1 == -1) {
      FOutputDevice::Logf(this_00,(ushort *)param_1,L"Listen: listen failed");
      *(undefined4 *)param_2 = 0;
      ExceptionList = pvStack_10;
      return;
    }
  }
  this[0x3d8] = (ATcpLink)0x2;
  TArray<unsigned_char>::Empty((TArray<unsigned_char> *)(this + 1000),0);
  *(undefined4 *)param_2 = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 107010b9 AMasterServerClient::StaticClass

/* public: static class UClass * __cdecl AMasterServerClient::StaticClass(void) */

UClass * __cdecl AMasterServerClient::StaticClass(void)

{
                    /* 0x10b9  247  ?StaticClass@AMasterServerClient@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 107010be AMasterServerUplink::Destroy

/* public: virtual void __thiscall AMasterServerUplink::Destroy(void) */

void __thiscall AMasterServerUplink::Destroy(AMasterServerUplink *this)

{
                    /* 0x10be  147  ?Destroy@AMasterServerUplink@@UAEXXZ */
  if (*(int **)(this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3bc) + 0xc))(1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x10712693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::Destroy((AActor *)this);
  return;
}


// ==== 107010c3 AUdpLink::AUdpLink

/* public: __thiscall AUdpLink::AUdpLink(class AUdpLink const &) */

AUdpLink * __thiscall AUdpLink::AUdpLink(AUdpLink *this,AUdpLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10c3  15  ??0AUdpLink@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741968;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInternetLink::AInternetLink((AInternetLink *)this,(AInternetLink *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107010c8 UTcpipConnection::operator_new

/* public: static void * __cdecl UTcpipConnection::operator new(unsigned int,enum EInternal *) */

void * __cdecl UTcpipConnection::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x10c8  86  ??2UTcpipConnection@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 107010cd AMasterServerUplink::eventLogStatLine

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned long __thiscall AMasterServerUplink::eventLogStatLine(class FString const &) */

ulong __thiscall AMasterServerUplink::eventLogStatLine(AMasterServerUplink *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  ulong *puVar3;
  ulong uStack_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10cd  276  ?eventLogStatLine@AMasterServerUplink@@QAEKABVFString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074216a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)&uStack_1c);
  uStack_4 = 1;
  uStack_10 = 0;
  FString::operator=((FString *)&uStack_1c,param_1);
  iVar1 = *(int *)this;
  puVar3 = &uStack_1c;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_LogStatLine,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffd8);
  ExceptionList = pvStack_18;
  return uStack_1c;
}


// ==== 107010d2 thunk_FUN_10712430 thunk -> 10712430

// ==== 107010dc ATcpLink::execClose

/* public: void __thiscall ATcpLink::execClose(struct FFrame &,void * const) */

void __thiscall ATcpLink::execClose(ATcpLink *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10dc  290  ?execClose@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743a80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 != 0) && (*(int *)(this + 0x3c0) != -1)) {
    if (this[0x3d8] == (ATcpLink)0x2) {
      this[0x3d8] = (ATcpLink)((*(int *)(this + 0x3c8) == -1) * '\x02' + '\x05');
    }
    else {
      this[0x3d8] = (ATcpLink)0x6;
    }
  }
  *(undefined4 *)param_2 = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 107010e1 AMasterServerLink::~AMasterServerLink

/* public: virtual __thiscall AMasterServerLink::~AMasterServerLink(void) */

void __thiscall AMasterServerLink::~AMasterServerLink(AMasterServerLink *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x10e1  51  ??1AMasterServerLink@@UAE@XZ */
  puStack_8 = &LAB_10741b63;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(this + 0x3e0,0xc,5,~FStringNoInit_exref);
  uStack_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 107010e6 AInternetLink::operator=

/* public: class AInternetLink & __thiscall AInternetLink::operator=(class AInternetLink const &) */

AInternetLink * __thiscall AInternetLink::operator=(AInternetLink *this,AInternetLink *param_1)

{
                    /* 0x10e6  87  ??4AInternetLink@@QAEAAV0@ABV0@@Z */
  AInternetInfo::operator=((AInternetInfo *)this,(AInternetInfo *)param_1);
  this[0x3bc] = param_1[0x3bc];
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  this[0x3d4] = param_1[0x3d4];
  return this;
}


// ==== 107010f0 AInternetLink::Tick

/* public: virtual int __thiscall AInternetLink::Tick(float,enum ELevelTick) */

int __thiscall AInternetLink::Tick(AInternetLink *this,float param_1,ELevelTick param_2)

{
  uint *puVar1;
  int iVar2;
  FString *this_00;
  ushort *puVar3;
  undefined4 uVar4;
  FString aFStack_30 [12];
  u_long auStack_24 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x10f0  261  ?Tick@AInternetLink@@UAEHMW4ELevelTick@@@Z */
  puStack_c = &LAB_10742be9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar2 = AActor::Tick((AActor *)this,param_1,param_2);
  puVar1 = *(uint **)(this + 0x3cc);
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == 0)) {
    if (((short)puVar1[0x42] == 0) || (puVar1 + 0x42 == (uint *)0x0)) {
      if (*(int *)GLog_exref != 0) {
        this_00 = thunk_FUN_1071b5d0(aFStack_30,*puVar1,0);
        iStack_8._0_1_ = 1;
        puVar3 = FString::operator*(this_00);
        uVar4 = thunk_FUN_10703910(*(int *)(this + 0x3cc));
        FOutputDevice::Logf2
                  ((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref,L"Resolved %s (%s)",uVar4,
                   puVar3);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_30);
      }
      thunk_FUN_1071b5b0(**(undefined4 **)(this + 0x3cc),auStack_24);
      auStack_24[0] = htonl(auStack_24[0]);
      auStack_24[1] = 0;
      eventResolved(this,auStack_24[0],0);
    }
    else {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8,L"AInternetLink Resolve failed: %s",
                   -(uint)((short)puVar1[0x42] != 0) & (uint)(puVar1 + 0x42));
      }
      eventResolveFailed(this);
    }
    thunk_FUN_107026f0(*(undefined4 *)(this + 0x3cc));
    *(undefined4 *)(this + 0x3cc) = 0;
  }
  ExceptionList = pvStack_10;
  return iVar2;
}


// ==== 107010f5 FArchiveTcpSocket::FArchiveTcpSocket

/* public: __thiscall FArchiveTcpSocket::FArchiveTcpSocket(struct FArchiveTcpSocket const &) */

FArchiveTcpSocket * __thiscall
FArchiveTcpSocket::FArchiveTcpSocket(FArchiveTcpSocket *this,FArchiveTcpSocket *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10f5  19  ??0FArchiveTcpSocket@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741709;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107010fa thunk_FUN_10704860 thunk -> 10704860

// ==== 107010ff AMasterServerClient::PostScriptDestroyed

/* public: virtual void __thiscall AMasterServerClient::PostScriptDestroyed(void) */

void __thiscall AMasterServerClient::PostScriptDestroyed(AMasterServerClient *this)

{
                    /* 0x10ff  216  ?PostScriptDestroyed@AMasterServerClient@@UAEXXZ */
  AActor::PostScriptDestroyed((AActor *)this);
  if (*(int **)(this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0xc))(1);
  }
  *(undefined4 *)(this + 0x430) = 0;
  return;
}


// ==== 10701109 thunk_FUN_10712370 thunk -> 10712370

// ==== 10701113 AMasterServerClient::Destroy

/* public: virtual void __thiscall AMasterServerClient::Destroy(void) */

void __thiscall AMasterServerClient::Destroy(AMasterServerClient *this)

{
                    /* 0x1113  146  ?Destroy@AMasterServerClient@@UAEXXZ */
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0xc))(1);
  }
  *(undefined4 *)(this + 0x430) = 0;
  if (*(int **)(this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x1070e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::Destroy((AActor *)this);
  return;
}


// ==== 1070111d AMasterServerClient::delegateOnReceivedServer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AMasterServerClient::delegateOnReceivedServer(struct FServerResponseLine)
    */

void __thiscall AMasterServerClient::delegateOnReceivedServer(AMasterServerClient *this)

{
  AMasterServerClient *pAStack_7c;
  FServerResponseLine *pFStack_78;
  FServerResponseLine aFStack_6c [80];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x111d  271
                       ?delegateOnReceivedServer@AMasterServerClient@@QAEXUFServerResponseLine@@@Z
                        */
  puStack_8 = &LAB_10742213;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FServerResponseLine::FServerResponseLine(aFStack_6c);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  pFStack_78 = (FServerResponseLine *)0x107074b1;
  FServerResponseLine::operator=(aFStack_6c,(FServerResponseLine *)&stack0x00000004);
  pFStack_78 = aFStack_6c;
  pAStack_7c = this + 0x44c;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnReceivedServer);
  uStack_14 = uStack_14 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&pAStack_7c);
  uStack_14 = 0xffffffff;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&pvStack_c);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10701127 ATcpLink::execSendText

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall ATcpLink::execSendText(struct FFrame &,void * const) */

void __thiscall ATcpLink::execSendText(ATcpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  char *_Src;
  char *pcVar5;
  size_t _Size;
  FFrame **ppFVar6;
  FFrame *pFStack_40;
  FString *pFStack_3c;
  FString aFStack_2c [20];
  ATcpLink *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1127  313  ?execSendText@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743b99;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  pFStack_3c = (FString *)0x107178c6;
  ExceptionList = &pvStack_10;
  pAStack_18 = this;
  FString::FString(aFStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = aFStack_2c;
  pFStack_40 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  *(undefined4 *)param_2 = 0;
  if ((DAT_1076a3f8 == 0) || (*(int *)(this + 0x3c0) == -1)) {
    *(undefined4 *)param_2 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    FString::~FString(aFStack_2c);
  }
  else {
    if (this[0x3bc] == (ATcpLink)0x1) {
      FString::operator+=(aFStack_2c,(ushort *)&DAT_1074fc68);
    }
    puVar3 = FString::operator*(aFStack_2c);
    iVar4 = winGetSizeANSI(puVar3);
    if (iVar4 == 0) {
      ppFVar6 = (FFrame **)0x0;
    }
    else {
      puVar3 = FString::operator*(aFStack_2c);
      winGetSizeANSI(puVar3);
      puStack_14 = (undefined1 *)&pFStack_40;
      ppFVar6 = &pFStack_40;
    }
    puVar3 = FString::operator*(aFStack_2c);
    iVar4 = winGetSizeANSI(puVar3);
    puVar3 = FString::operator*(aFStack_2c);
    _Src = winToANSI((char *)ppFVar6,puVar3,iVar4);
    pcVar5 = _Src;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar5 - (int)(_Src + 1);
    iVar4 = FArray::Add((FArray *)(this + 1000),_Size,1);
    _memcpy((void *)(*(int *)(this + 1000) + iVar4),_Src,_Size);
    *(size_t *)param_2 = _Size;
    FlushSendBuffer(pAStack_18);
    uStack_8 = uStack_8 & 0xffffff00;
    FString::~FString(aFStack_2c);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070112c AInternetLink::~AInternetLink

/* public: virtual __thiscall AInternetLink::~AInternetLink(void) */

void __thiscall AInternetLink::~AInternetLink(AInternetLink *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x112c  48  ??1AInternetLink@@UAE@XZ */
  puStack_8 = &LAB_10741909;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  AInternetInfo::~AInternetInfo((AInternetInfo *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701131 thunk_FUN_10707530 thunk -> 10707530

// ==== 10701136 FArchiveTcpReader::operator=

/* public: struct FArchiveTcpReader & __thiscall FArchiveTcpReader::operator=(struct
   FArchiveTcpReader const &) */

FArchiveTcpReader * __thiscall
FArchiveTcpReader::operator=(FArchiveTcpReader *this,FArchiveTcpReader *param_1)

{
                    /* 0x1136  95  ??4FArchiveTcpReader@@QAEAAU0@ABU0@@Z */
  FArchive::operator=((FArchive *)this,(FArchive *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_10709270(this + 0x3c,(FArray *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 1070113b thunk_FUN_10703910 thunk -> 10703910

// ==== 10701140 thunk_FUN_107051a0 thunk -> 107051a0

// ==== 10701145 UTcpNetDriver::operator_new

/* public: static void * __cdecl UTcpNetDriver::operator new(unsigned int,enum EInternal *) */

void * __cdecl UTcpNetDriver::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1145  84  ??2UTcpNetDriver@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1070114a AMasterServerLink::StaticClass

/* public: static class UClass * __cdecl AMasterServerLink::StaticClass(void) */

UClass * __cdecl AMasterServerLink::StaticClass(void)

{
                    /* 0x114a  249  ?StaticClass@AMasterServerLink@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1070114f UTcpNetDriver::GetSocketData

/* public: struct FSocketData __thiscall UTcpNetDriver::GetSocketData(void) */

sockaddr * __thiscall UTcpNetDriver::GetSocketData(UTcpNetDriver *this)

{
  SOCKET s;
  sockaddr *name;
  u_short uVar1;
  uint uVar2;
  sockaddr *in_stack_00000004;
  
                    /* 0x114f  157  ?GetSocketData@UTcpNetDriver@@QAE?AUFSocketData@@XZ */
  name = in_stack_00000004;
  s = *(SOCKET *)(this + 0xbc);
  *(SOCKET *)(in_stack_00000004[1].sa_data + 2) = s;
  in_stack_00000004 = (sockaddr *)0x10;
  getsockname(s,name,(int *)&stack0x00000004);
  uVar1 = ntohs(*(u_short *)name->sa_data);
  uVar2 = (uint)uVar1;
  name[1].sa_family = (short)uVar2;
  name[1].sa_data[0] = (char)(uVar2 >> 0x10);
  name[1].sa_data[1] = (char)(uVar2 >> 0x18);
  return name;
}


// ==== 10701154 AInternetLink::execParseURL

/* public: void __thiscall AInternetLink::execParseURL(struct FFrame &,void * const) */

void __thiscall AInternetLink::execParseURL(AInternetLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  FString *this_00;
  FString *this_01;
  ETravelType EVar3;
  FURL aFStack_a0 [12];
  FString aFStack_94 [12];
  undefined4 uStack_88;
  FString aFStack_84 [24];
  FString aFStack_6c [16];
  undefined1 *puStack_5c;
  void *pvStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  FString aFStack_44 [12];
  FString aFStack_38 [12];
  FString aFStack_2c [12];
  FString aFStack_20 [16];
  undefined4 *puStack_10;
  undefined4 uStack_c;
  FString *pFStack_8;
  
                    /* 0x1154  302  ?execParseURL@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_54 = &LAB_107428cd;
  pvStack_58 = ExceptionList;
  puStack_5c = &stack0xffffff54;
  iStack_50 = 0;
  ExceptionList = &pvStack_58;
  FString::FString(aFStack_38);
  iStack_50._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_38);
  FString::FString(aFStack_44);
  iStack_50 = CONCAT31(iStack_50._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_44);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFStack_8 = aFStack_44;
  }
  else {
    pFStack_8 = *(FString **)GPropAddr_exref;
  }
  uStack_c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puStack_10 = &uStack_c;
  }
  else {
    puStack_10 = *(undefined4 **)GPropAddr_exref;
  }
  FString::FString(aFStack_2c);
  iStack_50 = CONCAT31(iStack_50._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = aFStack_2c;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  FString::FString(aFStack_20);
  iStack_50 = CONCAT31(iStack_50._1_3_,4);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_20);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_01 = aFStack_20;
  }
  else {
    this_01 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  EVar3 = 0;
  puVar2 = FString::operator*(aFStack_38);
  FURL::FURL(aFStack_a0,(FURL *)0x0,puVar2,EVar3);
  iStack_50._0_1_ = 5;
  FString::operator=(pFStack_8,aFStack_94);
  *puStack_10 = uStack_88;
  FString::operator=(this_00,aFStack_84);
  FString::operator=(this_01,aFStack_6c);
  *(undefined4 *)param_2 = 1;
  iStack_50._0_1_ = 4;
  FURL::~FURL(aFStack_a0);
  iStack_50._0_1_ = 3;
  FString::~FString(aFStack_20);
  iStack_50._0_1_ = 2;
  FString::~FString(aFStack_2c);
  iStack_50._0_1_ = 1;
  FString::~FString(aFStack_44);
  iStack_50 = (uint)iStack_50._1_3_ << 8;
  FString::~FString(aFStack_38);
  ExceptionList = pvStack_58;
  return;
}


// ==== 10701159 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,struct FIpAddr &) */

FArchive * __cdecl operator<<(FArchive *param_1,FIpAddr *param_2)

{
                    /* 0x1159  109  ??6@YAAAVFArchive@@AAV0@AAUFIpAddr@@@Z */
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,param_2 + 4,4);
  return param_1;
}


// ==== 1070115e thunk_FUN_10708d10 thunk -> 10708d10

// ==== 10701163 thunk_FUN_10706440 thunk -> 10706440

// ==== 1070116d thunk_FUN_107041d0 thunk -> 107041d0

// ==== 10701172 thunk_FUN_107045b0 thunk -> 107045b0

// ==== 1070117c AMasterServerUplink::~AMasterServerUplink

/* public: virtual __thiscall AMasterServerUplink::~AMasterServerUplink(void) */

void __thiscall AMasterServerUplink::~AMasterServerUplink(AMasterServerUplink *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x117c  52  ??1AMasterServerUplink@@UAE@XZ */
  puStack_8 = &LAB_10741cc7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)(this + 0x41c));
  uStack_4 = 0xffffffff;
  AMasterServerLink::~AMasterServerLink((AMasterServerLink *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701181 FArchiveTcpReader::Serialize

/* public: virtual void __thiscall FArchiveTcpReader::Serialize(void *,int) */

void __thiscall FArchiveTcpReader::Serialize(FArchiveTcpReader *this,void *param_1,int param_2)

{
  FArchiveTcpReader *this_00;
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1181  238  ?Serialize@FArchiveTcpReader@@UAEXPAXH@Z */
  puStack_c = &LAB_10742c70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x40) != 0) {
    this_00 = this + 0x3c;
    piVar1 = *(int **)this_00;
    if ((*piVar1 == piVar1[2]) && (param_2 <= *piVar1)) {
      ExceptionList = &pvStack_10;
      _memcpy(param_1,(void *)piVar1[1],param_2);
      TArray<unsigned_char>::Remove((TArray<unsigned_char> *)(*(int *)this_00 + 4),0,param_2);
      **(int **)this_00 = **(int **)this_00 - param_2;
      if (**(int **)this_00 == 0) {
        thunk_FUN_10708c10(this_00,0,1);
        *(undefined4 *)(this + 0x48) = 1;
      }
      else {
        *(undefined4 *)(this + 0x48) = 0;
      }
      ExceptionList = pvStack_10;
      return;
    }
  }
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}


// ==== 10701186 FQueryData::operator=

/* public: struct FQueryData & __thiscall FQueryData::operator=(struct FQueryData const &) */

FQueryData * __thiscall FQueryData::operator=(FQueryData *this,FQueryData *param_1)

{
                    /* 0x1186  103  ??4FQueryData@@QAEAAU0@ABU0@@Z */
  FString::operator=((FString *)this,(FString *)param_1);
  FString::operator=((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  this[0x18] = param_1[0x18];
  return this;
}


// ==== 10701190 UTcpipConnection::UTcpipConnection

/* public: __thiscall UTcpipConnection::UTcpipConnection(class UTcpipConnection const &) */

UTcpipConnection * __thiscall
UTcpipConnection::UTcpipConnection(UTcpipConnection *this,UTcpipConnection *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1190  46  ??0UTcpipConnection@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10743389;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UNetConnection::UNetConnection((UNetConnection *)this,(UNetConnection *)param_1);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  *(undefined ***)(this + 0x38) = vftable_for_FExec_;
  *(undefined4 *)(this + 0x3f1c) = *(undefined4 *)(param_1 + 0x3f1c);
  *(undefined4 *)(this + 0x3f20) = *(undefined4 *)(param_1 + 0x3f20);
  *(undefined4 *)(this + 0x3f24) = *(undefined4 *)(param_1 + 0x3f24);
  *(undefined4 *)(this + 0x3f28) = *(undefined4 *)(param_1 + 0x3f28);
  *(undefined4 *)(this + 0x3f2c) = *(undefined4 *)(param_1 + 0x3f2c);
  *(undefined4 *)(this + 0x3f30) = *(undefined4 *)(param_1 + 0x3f30);
  *(undefined4 *)(this + 0x3f34) = *(undefined4 *)(param_1 + 0x3f34);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701195 FArchiveTcpWriter::FArchiveTcpWriter

/* public: __thiscall FArchiveTcpWriter::FArchiveTcpWriter(class FTcpLink *) */

FArchiveTcpWriter * __thiscall
FArchiveTcpWriter::FArchiveTcpWriter(FArchiveTcpWriter *this,FTcpLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1195  22  ??0FArchiveTcpWriter@@QAE@PAVFTcpLink@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742ad4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchiveTcpSocket::FArchiveTcpSocket((FArchiveTcpSocket *)this,param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x3c));
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FArray::Add((FArray *)(this + 0x3c),4,1);
  *(undefined4 *)(this + 0x14) = 1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1070119f AInternetLink::GetSocket

/* public: unsigned int & __thiscall AInternetLink::GetSocket(void) */

uint * __thiscall AInternetLink::GetSocket(AInternetLink *this)

{
                    /* 0x119f  155  ?GetSocket@AInternetLink@@QAEAAIXZ */
  return (uint *)(this + 0x3c0);
}


// ==== 107011a9 AInternetLink::execIpAddrToString

/* public: void __thiscall AInternetLink::execIpAddrToString(struct FFrame &,void * const) */

void __thiscall AInternetLink::execIpAddrToString(AInternetLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FString *pFVar2;
  FString aFStack_30 [12];
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x11a9  295  ?execIpAddrToString@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_107428f9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  iStack_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = (FString *)
           FString::Printf((ushort *)aFStack_30,L"%i.%i.%i.%i:%i",uStack_24 >> 0x18,
                           uStack_24 >> 0x10 & 0xff,uStack_24 >> 8 & 0xff,uStack_24 & 0xff,uStack_20
                          );
  iStack_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_30);
  ExceptionList = pvStack_10;
  return;
}


// ==== 107011ae thunk_FUN_1071b710 thunk -> 1071b710

// ==== 107011b3 AServerQueryClient::AServerQueryClient

/* public: __thiscall AServerQueryClient::AServerQueryClient(class AServerQueryClient const &) */

AServerQueryClient * __thiscall
AServerQueryClient::AServerQueryClient(AServerQueryClient *this,AServerQueryClient *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11b3  11  ??0AServerQueryClient@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741dc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AMasterServerLink::AMasterServerLink((AMasterServerLink *)this,(AMasterServerLink *)param_1);
  *(undefined ***)this = vftable;
  *(uint *)(this + 0x41c) =
       *(uint *)(this + 0x41c) ^ (*(uint *)(param_1 + 0x41c) ^ *(uint *)(this + 0x41c)) & 1;
  *(undefined4 *)(this + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)(this + 0x424) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)(this + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(this + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107011b8 thunk_FUN_1071b780 thunk -> 1071b780

// ==== 107011c2 thunk_FUN_107097e0 thunk -> 107097e0

// ==== 107011d1 ATcpLink::execBindPort

/* WARNING: Type propagation algorithm not settling */
/* public: void __thiscall ATcpLink::execBindPort(struct FFrame &,void * const) */

void __thiscall ATcpLink::execBindPort(ATcpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  u_short uVar3;
  u_short uVar4;
  SOCKET SVar5;
  uint uVar6;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  wchar_t *pwVar7;
  sockaddr sStack_34;
  int aiStack_1c [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x11d1  287  ?execBindPort@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743a30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  aiStack_1c[1] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aiStack_1c + 1);
  aiStack_1c[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aiStack_1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  this_00 = extraout_ECX;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    this_00 = extraout_ECX_00;
  }
  if (DAT_1076a3f8 == 0) {
    pwVar7 = L"BindPort: winsock failed";
  }
  else {
    if (*(int *)(this + 0x3c0) == -1) {
      SVar5 = socket(2,1,6);
      *(SOCKET *)(this + 0x3c0) = SVar5;
      thunk_FUN_1071b710(SVar5,1);
      if (*(int *)(this + 0x3c0) == -1) {
        FOutputDevice::Logf(this_01,(ushort *)param_1,L"BindPort: socket failed");
      }
      else {
        sStack_34.sa_family = 2;
        uVar6 = thunk_FUN_10703e30((ushort *)param_1);
        sStack_34.sa_data._2_2_ = SUB42(uVar6,0);
        sStack_34.sa_data._4_2_ = SUB42(uVar6 >> 0x10,0);
        sStack_34.sa_data._0_2_ = htons((u_short)aiStack_1c[1]);
        uVar3 = thunk_FUN_10703930(*(SOCKET *)(this + 0x3c0),&sStack_34,
                                   (-(uint)(aiStack_1c[0] != 0) & 0x13) + 1,1);
        if (CONCAT22(extraout_var_00,uVar3) == 0) {
          FOutputDevice::Logf(this_02,(ushort *)param_1,L"BindPort: bind failed");
        }
        else {
          bVar2 = thunk_FUN_1071b6e0(*(SOCKET *)(this + 0x3c0));
          if (CONCAT31(extraout_var,bVar2) != 0) {
            uVar4 = ntohs(sStack_34.sa_data._0_2_);
            *(uint *)(this + 0x3c4) = (uint)uVar4;
            this[0x3d8] = (ATcpLink)0x1;
            *(int *)param_2 = CONCAT22(extraout_var_00,uVar3);
            ExceptionList = pvStack_10;
            return;
          }
          FOutputDevice::Logf(this_03,(ushort *)param_1,L"BindPort: ioctlsocket or fcntl failed");
        }
      }
      closesocket(*(SOCKET *)(this + 0x3c0));
      *(undefined4 *)(this + 0x3c0) = 0;
      *(undefined4 *)param_2 = 0;
      ExceptionList = pvStack_10;
      return;
    }
    pwVar7 = L"BindPort: already bound";
  }
  FOutputDevice::Logf(this_00,(ushort *)param_1,pwVar7);
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 107011d6 FIpAddr::operator=

/* public: struct FIpAddr & __thiscall FIpAddr::operator=(struct FIpAddr const &) */

FIpAddr * __thiscall FIpAddr::operator=(FIpAddr *this,FIpAddr *param_1)

{
                    /* 0x11d6  101  ??4FIpAddr@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 107011db FArchiveUdpReader::FArchiveUdpReader

/* public: __thiscall FArchiveUdpReader::FArchiveUdpReader(struct FArchiveUdpReader const &) */

FArchiveUdpReader * __thiscall
FArchiveUdpReader::FArchiveUdpReader(FArchiveUdpReader *this,FArchiveUdpReader *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11db  23  ??0FArchiveUdpReader@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107417b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107011e5 AMasterServerGameStats::AMasterServerGameStats

/* public: __thiscall AMasterServerGameStats::AMasterServerGameStats(class AMasterServerGameStats
   const &) */

AMasterServerGameStats * __thiscall
AMasterServerGameStats::AMasterServerGameStats
          (AMasterServerGameStats *this,AMasterServerGameStats *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11e5  6  ??0AMasterServerGameStats@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741b29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AGameStats::AGameStats((AGameStats *)this,(AGameStats *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107011ea UTcpNetDriver::operator=

/* public: class UTcpNetDriver & __thiscall UTcpNetDriver::operator=(class UTcpNetDriver const &) */

UTcpNetDriver * __thiscall UTcpNetDriver::operator=(UTcpNetDriver *this,UTcpNetDriver *param_1)

{
                    /* 0x11ea  107  ??4UTcpNetDriver@@QAEAAV0@ABV0@@Z */
  UNetDriver::operator=((UNetDriver *)this,(UNetDriver *)param_1);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}


// ==== 107011ef thunk_FUN_10719680 thunk -> 10719680

// ==== 107011f4 thunk_FUN_107196b0 thunk -> 107196b0

// ==== 107011f9 thunk_FUN_10713300 thunk -> 10713300

// ==== 107011fe FArchiveTcpWriter::~FArchiveTcpWriter

/* public: virtual __thiscall FArchiveTcpWriter::~FArchiveTcpWriter(void) */

void __thiscall FArchiveTcpWriter::~FArchiveTcpWriter(FArchiveTcpWriter *this)

{
  TArray<unsigned_char> *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x11fe  58  ??1FArchiveTcpWriter@@UAE@XZ */
  puStack_8 = &LAB_10742c5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  if (4 < *(uint *)(this + 0x40)) {
    this_00 = (TArray<unsigned_char> *)(this + 0x3c);
    **(int **)(this + 0x3c) = *(uint *)(this + 0x40) - 4;
    (**(code **)(**(int **)(this + 0x38) + 0x10))
              (*(undefined4 *)this_00,*(undefined4 *)(this + 0x40));
    TArray<unsigned_char>::Empty(this_00,0);
    FArray::Add((FArray *)this_00,4,1);
  }
  uStack_4 = uStack_4 & 0xffffff00;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x3c));
  *(code **)this = _vftable__exref;
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701203 UTcpipConnection::LowLevelDescribe

/* public: virtual class FString __thiscall UTcpipConnection::LowLevelDescribe(void) */

ushort * __thiscall UTcpipConnection::LowLevelDescribe(UTcpipConnection *this)

{
  int iVar1;
  u_short uVar2;
  FString *this_00;
  ushort *puVar3;
  ushort *puVar4;
  wchar_t *pwVar5;
  ushort *in_stack_00000004;
  FString aFStack_2c [20];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1203  196  ?LowLevelDescribe@UTcpipConnection@@UAE?AVFString@@XZ */
  puStack_c = &LAB_10743c63;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_18 = 0;
  uStack_8 = 1;
  iVar1 = *(int *)(this + 0x78);
  if (iVar1 == 2) {
    pwVar5 = L"Pending";
  }
  else if (iVar1 == 3) {
    pwVar5 = L"Open";
  }
  else {
    pwVar5 = L"Closed";
    if (iVar1 != 1) {
      pwVar5 = L"Invalid";
    }
  }
  ExceptionList = &pvStack_10;
  uVar2 = ntohs(*(u_short *)(this + 0x3f1e));
  this_00 = thunk_FUN_1071b5d0(aFStack_2c,*(uint *)(this + 0x3f20),(uint)uVar2);
  uStack_8._0_1_ = 2;
  puVar3 = FString::operator*(this_00);
  puVar4 = FString::operator*((FString *)(this + 0x88));
  FString::Printf(in_stack_00000004,L"%s %s state: %s",puVar4,puVar3,pwVar5);
  uStack_18 = 1;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FString::~FString(aFStack_2c);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 10701208 thunk_FUN_10714c30 thunk -> 10714c30

// ==== 1070120d thunk_FUN_10712760 thunk -> 10712760

// ==== 10701212 thunk_FUN_10713c10 thunk -> 10713c10

// ==== 10701217 thunk_FUN_1070ec20 thunk -> 1070ec20

// ==== 1070121c thunk_FUN_10706770 thunk -> 10706770

// ==== 10701221 AServerQueryClient::~AServerQueryClient

/* public: virtual __thiscall AServerQueryClient::~AServerQueryClient(void) */

void __thiscall AServerQueryClient::~AServerQueryClient(AServerQueryClient *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1221  53  ??1AServerQueryClient@@UAE@XZ */
  puStack_8 = &LAB_10741d88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  AMasterServerLink::~AMasterServerLink((AMasterServerLink *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701226 AUdpLink::InternalConstructor

/* public: static void __cdecl AUdpLink::InternalConstructor(void *) */

void __cdecl AUdpLink::InternalConstructor(void *param_1)

{
                    /* 0x1226  191  ?InternalConstructor@AUdpLink@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AUdpLink(param_1);
    return;
  }
  return;
}


// ==== 1070122b thunk_FUN_107026f0 thunk -> 107026f0

// ==== 1070123a thunk_FUN_107132a0 thunk -> 107132a0

// ==== 1070123f FTcpLink::OnConnectionSucceeded

/* public: virtual void __thiscall FTcpLink::OnConnectionSucceeded(void) */

void __thiscall FTcpLink::OnConnectionSucceeded(FTcpLink *this)

{
                    /* 0x123f  203  ?OnConnectionSucceeded@FTcpLink@@UAEXXZ */
  return;
}


// ==== 10701244 AServerQueryClient::delegateOnPingTimeout

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AServerQueryClient::delegateOnPingTimeout(int,unsigned char) */

void __thiscall
AServerQueryClient::delegateOnPingTimeout(AServerQueryClient *this,int param_1,uchar param_2)

{
  int iStack_8;
  uchar uStack_4;
  
                    /* 0x1244  267  ?delegateOnPingTimeout@AServerQueryClient@@QAEXHE@Z */
  uStack_4 = param_2;
  iStack_8 = param_1;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnPingTimeout,this + 0x428,&iStack_8,0);
  return;
}


// ==== 10701249 AUdpLink::StaticClass

/* public: static class UClass * __cdecl AUdpLink::StaticClass(void) */

UClass * __cdecl AUdpLink::StaticClass(void)

{
                    /* 0x1249  253  ?StaticClass@AUdpLink@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1070124e ATcpLink::eventReceivedText

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::eventReceivedText(class FString const &) */

void __thiscall ATcpLink::eventReceivedText(ATcpLink *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void **ppvVar3;
  void *apvStack_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x124e  282  ?eventReceivedText@ATcpLink@@QAEXABVFString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107420ca;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)apvStack_18);
  uStack_4 = 1;
  FString::operator=((FString *)apvStack_18,param_1);
  iVar1 = *(int *)this;
  ppvVar3 = apvStack_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ReceivedText,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,ppvVar3);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = apvStack_18[0];
  return;
}


// ==== 10701253 FTcpLink::OnResolved

/* public: virtual void __thiscall FTcpLink::OnResolved(struct FIpAddr) */

void __thiscall FTcpLink::OnResolved(void)

{
                    /* 0x1253  207  ?OnResolved@FTcpLink@@UAEXUFIpAddr@@@Z */
  return;
}


// ==== 10701258 UTcpipConnection::~UTcpipConnection

/* public: virtual __thiscall UTcpipConnection::~UTcpipConnection(void) */

void __thiscall UTcpipConnection::~UTcpipConnection(UTcpipConnection *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1258  66  ??1UTcpipConnection@@UAE@XZ */
  puStack_8 = &LAB_10743349;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  *(undefined ***)(this + 0x38) = vftable_for_FExec_;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UNetConnection::~UNetConnection((UNetConnection *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070125d FIpAddr::FIpAddr

/* public: __thiscall FIpAddr::FIpAddr(struct sockaddr_in) */

FIpAddr * __thiscall FIpAddr::FIpAddr(FIpAddr *this,undefined4 param_2,u_long param_3)

{
  u_short uVar1;
  u_long uVar2;
  
                    /* 0x125d  31  ??0FIpAddr@@QAE@Usockaddr_in@@@Z */
  uVar2 = ntohl(param_3);
  *(u_long *)this = uVar2;
  uVar1 = ntohs(param_2._2_2_);
  *(uint *)(this + 4) = (uint)uVar1;
  return this;
}


// ==== 10701262 AMasterServerLink::operator=

/* public: class AMasterServerLink & __thiscall AMasterServerLink::operator=(class AMasterServerLink
   const &) */

AMasterServerLink * __thiscall
AMasterServerLink::operator=(AMasterServerLink *this,AMasterServerLink *param_1)

{
  AMasterServerLink *this_00;
  int iVar1;
  
                    /* 0x1262  90  ??4AMasterServerLink@@QAEAAV0@ABV0@@Z */
  AInfo::operator=((AInfo *)this,(AInfo *)param_1);
  *(undefined4 *)(this + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  this_00 = this + 0x3e0;
  iVar1 = 5;
  do {
    FStringNoInit::operator=
              ((FStringNoInit *)this_00,(FStringNoInit *)(this_00 + ((int)param_1 - (int)this)));
    this_00 = this_00 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}


// ==== 10701267 UTcpNetDriver::GetServerConnection

/* public: class UTcpipConnection * __thiscall UTcpNetDriver::GetServerConnection(void) */

UTcpipConnection * __thiscall UTcpNetDriver::GetServerConnection(UTcpNetDriver *this)

{
                    /* 0x1267  153  ?GetServerConnection@UTcpNetDriver@@QAEPAVUTcpipConnection@@XZ
                        */
  return *(UTcpipConnection **)(this + 0x44);
}


// ==== 10701271 FTcpLink::Send

/* public: virtual int __thiscall FTcpLink::Send(unsigned char *,int) */

int __thiscall FTcpLink::Send(FTcpLink *this,uchar *param_1,int param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FOutputDevice *this_00;
  int iVar5;
  undefined4 uStack_8;
  
                    /* 0x1271  235  ?Send@FTcpLink@@UAEHPAEH@Z */
  if (*(int *)(this + 0x44) != 3) {
    return 0;
  }
  iVar5 = 0;
  if (*(int *)(this + 0x2c) == 0) {
    iVar4 = param_2;
    if (FInternetLink::ThrottleSend != 0) {
      if (FInternetLink::BandwidthSendBudget < 1) goto LAB_1070d64a;
      iVar4 = FInternetLink::BandwidthSendBudget;
      if (param_2 <= FInternetLink::BandwidthSendBudget) {
        iVar4 = param_2;
      }
    }
    iVar5 = send(*(SOCKET *)(this + 0x18),(char *)param_1,iVar4,0);
    if (iVar5 == -1) {
      iVar5 = WSAGetLastError();
      if (iVar5 != 0x2733) {
        iVar5 = WSAGetLastError();
        FOutputDevice::Logf(this_00,*(ushort **)GWarn_exref,L"!!Send() got SOCKET_ERROR %d",iVar5);
      }
      iVar5 = 0;
    }
  }
LAB_1070d64a:
  if (iVar5 != param_2) {
    iVar4 = FArray::Add((FArray *)(this + 0x28),param_2 - iVar5,1);
    _memcpy((void *)(*(int *)(this + 0x28) + iVar4),param_1 + iVar5,param_2 - iVar5);
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + iVar5;
  lVar1 = rdtsc();
  dVar2 = (double)(int)((ulonglong)lVar1 >> 0x20);
  if (lVar1 < 0) {
    dVar2 = dVar2 + 4294967296.0;
  }
  dVar3 = (double)(int)lVar1;
  if ((int)lVar1 < 0) {
    dVar3 = dVar3 + 4294967296.0;
  }
  uStack_8 = (undefined4)
             (longlong)
             ROUND((dVar3 + dVar2 * 4294967296.0) * *(double *)GSecondsPerCycle_exref + 16777216.0);
  *(undefined4 *)(this + 0x40) = uStack_8;
  if (FInternetLink::ThrottleSend != 0) {
    FInternetLink::BandwidthSendBudget = FInternetLink::BandwidthSendBudget - iVar5;
  }
  return param_2;
}


// ==== 10701276 thunk_FUN_10709120 thunk -> 10709120

// ==== 1070127b UTcpNetDriver::InternalConstructor

/* public: static void __cdecl UTcpNetDriver::InternalConstructor(void *) */

void __cdecl UTcpNetDriver::InternalConstructor(void *param_1)

{
                    /* 0x127b  192  ?InternalConstructor@UTcpNetDriver@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTcpNetDriver(param_1);
    return;
  }
  return;
}


// ==== 10701280 thunk_FUN_10709030 thunk -> 10709030

// ==== 10701285 thunk_FUN_107049d0 thunk -> 107049d0

// ==== 1070128f AInternetLink::eventResolveFailed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AInternetLink::eventResolveFailed(void) */

void __thiscall AInternetLink::eventResolveFailed(AInternetLink *this)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x128f  285  ?eventResolveFailed@AInternetLink@@QAEXXZ */
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ResolveFailed,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10701294 FTcpLink::Poll

/* public: virtual int __thiscall FTcpLink::Poll(int) */

int __thiscall FTcpLink::Poll(FTcpLink *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  u_short uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar8;
  fd_set fStack_448;
  fd_set fStack_344;
  fd_set fStack_240;
  fd_set fStack_13c;
  timeval tStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1294  213  ?Poll@FTcpLink@@UAEHH@Z */
  puStack_c = &LAB_10742a50;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbac;
  uStack_8 = 0;
  puVar4 = *(undefined4 **)(this + 0x34);
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xfffffbac;
  if ((puVar4 != (undefined4 *)0x0) &&
     (ExceptionList = &pvStack_10, puVar2 = &stack0xfffffbac, puVar4[1] == 0)) {
    if ((*(short *)(puVar4 + 0x42) == 0) || ((short *)(puVar4 + 0x42) == (short *)0x0)) {
      uVar1 = *puVar4;
      ExceptionList = &pvStack_10;
      uStack_20 = uVar1;
      uVar3 = htons(0);
      uStack_24 = CONCAT22(uVar3,(undefined2)uStack_24);
      thunk_FUN_107026f0(*(undefined4 *)(this + 0x34));
      *(undefined4 *)(this + 0x34) = 0;
      iVar5 = *(int *)this;
      puVar4 = (undefined4 *)
               FIpAddr::FIpAddr((FIpAddr *)&uStack_1c,uStack_24,uVar1,uStack_1c,iStack_18);
      (**(code **)(iVar5 + 0x44))(*puVar4,puVar4[1]);
      puVar2 = puStack_14;
    }
    else {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffbac;
      thunk_FUN_107026f0(puVar4);
      *(undefined4 *)(this + 0x34) = 0;
      (**(code **)(*(int *)this + 0x48))();
      puVar2 = puStack_14;
    }
  }
  puStack_14 = puVar2;
  tStack_2c.tv_sec = param_1;
  tStack_2c.tv_usec = 0;
  if (*(int *)(this + 0x44) == 2) {
    fStack_448.fd_array[0] = *(SOCKET *)(this + 0x18);
    fStack_344.fd_count = 1;
    fStack_448.fd_count = 1;
    fStack_344.fd_array[0] = fStack_448.fd_array[0];
    iVar5 = select(fStack_448.fd_array[0] + 1,(fd_set *)0x0,&fStack_344,&fStack_448,&tStack_2c);
    if (iVar5 != -1) {
      if (iVar5 != 0) {
        iVar5 = __WSAFDIsSet(*(SOCKET *)(this + 0x18),&fStack_344);
        if (iVar5 == 0) {
          iVar5 = __WSAFDIsSet(*(SOCKET *)(this + 0x18),&fStack_448);
          if (iVar5 != 0) {
            *(undefined4 *)(this + 0x44) = 0;
            (**(code **)(*(int *)this + 0x54))();
            ExceptionList = pvStack_10;
            return 1;
          }
        }
        else {
          *(undefined4 *)(this + 0x44) = 3;
          (**(code **)(*(int *)this + 0x50))();
        }
      }
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar5 = WSAGetLastError();
    pFVar8 = *(FOutputDevice **)GWarn_exref;
    this_00 = extraout_ECX;
LAB_1070bb2b:
    FOutputDevice::Logf(this_00,(ushort *)pFVar8,L"!! Error checking socket status: %i",iVar5);
    ExceptionList = pvStack_10;
    return 0;
  }
  if (*(int *)(this + 0x44) != 3) {
    ExceptionList = pvStack_10;
    return 0;
  }
  fStack_240.fd_count = 0;
  fStack_13c.fd_count = 0;
  iVar5 = (*(code *)**(undefined4 **)this)();
  iStack_18 = (**(code **)(*(int *)this + 8))();
  if ((iVar5 != 0) && (fStack_240.fd_count < 0x40)) {
    fStack_240.fd_array[fStack_240.fd_count] = *(SOCKET *)(this + 0x18);
    fStack_240.fd_count = fStack_240.fd_count + 1;
  }
  if ((iStack_18 != 0) && (fStack_13c.fd_count < 0x40)) {
    fStack_13c.fd_array[fStack_13c.fd_count] = *(SOCKET *)(this + 0x18);
    fStack_13c.fd_count = fStack_13c.fd_count + 1;
  }
  if ((iVar5 == 0) && (iStack_18 == 0)) {
    if (param_1 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    appSleep((float)param_1);
    ExceptionList = pvStack_10;
    return 1;
  }
  iVar6 = select(*(int *)(this + 0x18) + 1,(fd_set *)(-(uint)(iVar5 != 0) & (uint)&fStack_240),
                 (fd_set *)(-(uint)(iStack_18 != 0) & (uint)&fStack_13c),(fd_set *)0x0,&tStack_2c);
  if (iVar6 == -1) {
    iVar5 = WSAGetLastError();
    this_00 = *(FOutputDevice **)GWarn_exref;
    pFVar8 = this_00;
    goto LAB_1070bb2b;
  }
  if (iVar6 == 0) {
    ExceptionList = pvStack_10;
    return 1;
  }
  if (iVar5 == 0) {
    if (iStack_18 != 0) {
      pcVar7 = *(code **)(*(int *)this + 0x38);
      goto LAB_1070bb8d;
    }
LAB_1070bb57:
    iVar5 = __WSAFDIsSet(*(SOCKET *)(this + 0x18),&fStack_13c);
    if (iVar5 != 0) {
      (**(code **)(*(int *)this + 0x38))();
    }
    iVar5 = __WSAFDIsSet(*(SOCKET *)(this + 0x18),&fStack_240);
    if (iVar5 == 0) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  else if (iStack_18 != 0) goto LAB_1070bb57;
  pcVar7 = *(code **)(*(int *)this + 0x34);
LAB_1070bb8d:
  (*pcVar7)();
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10701299 thunk_FUN_1070a0f0 thunk -> 1070a0f0

// ==== 107012a8 FTcpLink::HasSendPending

/* protected: virtual int __thiscall FTcpLink::HasSendPending(void) */

int __thiscall FTcpLink::HasSendPending(FTcpLink *this)

{
                    /* 0x12a8  161  ?HasSendPending@FTcpLink@@MAEHXZ */
  if (((*(int *)(this + 0x44) != 0) && (*(int *)(this + 0x2c) != 0)) &&
     ((FInternetLink::ThrottleSend == 0 || (0 < FInternetLink::BandwidthSendBudget)))) {
    return 1;
  }
  return 0;
}


// ==== 107012b2 thunk_FUN_10703a60 thunk -> 10703a60

// ==== 107012b7 FUdpLink::FUdpLink

/* public: __thiscall FUdpLink::FUdpLink(class FUdpLink const &) */

void __thiscall FUdpLink::FUdpLink(FUdpLink *this,FUdpLink *param_1)

{
                    /* 0x12b7  40  ??0FUdpLink@@QAE@ABV0@@Z */
  *(undefined ***)this = FInternetLink::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}


// ==== 107012c6 FArchiveUdpWriter::Flush

/* public: virtual void __thiscall FArchiveUdpWriter::Flush(void) */

void __thiscall FArchiveUdpWriter::Flush(FArchiveUdpWriter *this)

{
  undefined4 uVar1;
  
                    /* 0x12c6  150  ?Flush@FArchiveUdpWriter@@UAEXXZ */
  if (*(int *)(this + 0x48) != 0) {
    (**(code **)(**(int **)(this + 0x38) + 0x10))
              (*(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x40),
               *(undefined4 *)(this + 0x44),*(int *)(this + 0x48));
    TArray<unsigned_char>::Empty((TArray<unsigned_char> *)(this + 0x44),0);
  }
  uVar1 = *(undefined4 *)(this + 4);
  FArray::Add((FArray *)(this + 0x44),4,1);
  **(undefined4 **)(this + 0x44) = uVar1;
  return;
}


// ==== 107012cb thunk_FUN_107129c0 thunk -> 107129c0

// ==== 107012d0 AMasterServerGameStats::operator_new

/* public: static void * __cdecl AMasterServerGameStats::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
AMasterServerGameStats::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x12d0  71  ??2AMasterServerGameStats@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 107012d5 thunk_FUN_10705c40 thunk -> 10705c40

// ==== 107012da FIpAddr::FIpAddr

/* public: __thiscall FIpAddr::FIpAddr(unsigned short const *,int) */

FIpAddr * __thiscall FIpAddr::FIpAddr(FIpAddr *this,ushort *param_1,int param_2)

{
  char *cp;
  ulong netlong;
  u_long uVar1;
  
                    /* 0x12da  30  ??0FIpAddr@@QAE@PBGH@Z */
  cp = appToAnsi(param_1,(char *)0x0);
  netlong = inet_addr(cp);
  uVar1 = ntohl(netlong);
  *(u_long *)this = uVar1;
  *(int *)(this + 4) = param_2;
  return this;
}


// ==== 107012df AMasterServerClient::operator_new

/* public: static void * __cdecl AMasterServerClient::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
AMasterServerClient::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x12df  69  ??2AMasterServerClient@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 107012ee thunk_FUN_10714840 thunk -> 10714840

// ==== 107012f3 UTcpipConnection::StaticClass

/* public: static class UClass * __cdecl UTcpipConnection::StaticClass(void) */

UClass * __cdecl UTcpipConnection::StaticClass(void)

{
                    /* 0x12f3  255  ?StaticClass@UTcpipConnection@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 107012f8 AMasterServerUplink::PostScriptDestroyed

/* public: virtual void __thiscall AMasterServerUplink::PostScriptDestroyed(void) */

void __thiscall AMasterServerUplink::PostScriptDestroyed(AMasterServerUplink *this)

{
                    /* 0x12f8  217  ?PostScriptDestroyed@AMasterServerUplink@@UAEXXZ */
  if (*(int **)(this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3bc) + 0xc))(1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x107126d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::PostScriptDestroyed((AActor *)this);
  return;
}


// ==== 107012fd AMasterServerUplink::StaticClass

/* public: static class UClass * __cdecl AMasterServerUplink::StaticClass(void) */

UClass * __cdecl AMasterServerUplink::StaticClass(void)

{
                    /* 0x12fd  250  ?StaticClass@AMasterServerUplink@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10701302 FTcpLink::OnResolveFailed

/* public: virtual void __thiscall FTcpLink::OnResolveFailed(void) */

void __thiscall FTcpLink::OnResolveFailed(FTcpLink *this)

{
                    /* 0x1302  206  ?OnResolveFailed@FTcpLink@@UAEXXZ */
  return;
}


// ==== 10701307 UTcpNetDriver::InitConnect

/* public: virtual int __thiscall UTcpNetDriver::InitConnect(class FNetworkNotify *,class FURL
   &,class FString &) */

int __thiscall
UTcpNetDriver::InitConnect
          (UTcpNetDriver *this,FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  u_short uVar1;
  int iVar2;
  UPackage *pUVar3;
  UTcpipConnection *pUVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1307  182
                       ?InitConnect@UTcpNetDriver@@UAEHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */
  puStack_c = &LAB_10743d10;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar2 = UNetDriver::InitConnect((UNetDriver *)this,param_1,param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = InitBase(this,1,param_1,param_2,param_3);
    if (iVar2 != 0) {
      uVar1 = htons(*(u_short *)(param_2 + 0x18));
      uStack_2c = CONCAT22(uVar1,2);
      thunk_FUN_1071b580((undefined1 *)&uStack_28,0,0,0,0);
      pUVar3 = UObject::GetTransientPackage();
      pUVar4 = UTcpipConnection::operator_new(0x3f38,pUVar3);
      if (pUVar4 == (UTcpipConnection *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = UTcpipConnection::UTcpipConnection
                          (pUVar4,*(undefined4 *)(this + 0xbc),this,uStack_2c,uStack_28,uStack_24,
                           uStack_20,2);
      }
      *(undefined4 *)(this + 0x44) = uVar5;
      if (*(int *)GLog_exref != 0) {
        uVar1 = ntohs(*(u_short *)(this + 0xae));
        FOutputDevice::Logf2
                  ((FOutputDevice *)(uint)uVar1,*(EName *)GLog_exref,(ushort *)0x304,
                   L"Game client on port %i, rate %i");
      }
      UNetConnection::CreateChannel(*(UNetConnection **)(this + 0x44),1,1,0);
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1070130c AMasterServerClient::Init

/* public: void __thiscall AMasterServerClient::Init(void) */

void __thiscall AMasterServerClient::Init(AMasterServerClient *this)

{
  void *this_00;
  FTcpLink *pFVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x130c  179  ?Init@AMasterServerClient@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107432fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AServerQueryClient::Init((AServerQueryClient *)this);
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0xc))(1);
  }
  this_00 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x78,&DAT_10749b4c);
  pvStack_c = (void *)0x0;
  if (this_00 == (void *)0x0) {
    pFVar1 = (FTcpLink *)0x0;
  }
  else {
    pFVar1 = thunk_FUN_1070dea0(this_00,this);
  }
  *(FTcpLink **)(this + 0x430) = pFVar1;
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10701311 thunk_FUN_1070e660 thunk -> 1070e660

// ==== 10701316 thunk_FUN_10703930 thunk -> 10703930

// ==== 1070131b FIpAddr::FIpAddr

/* public: __thiscall FIpAddr::FIpAddr(void) */

FIpAddr * __thiscall FIpAddr::FIpAddr(FIpAddr *this)

{
                    /* 0x131b  32  ??0FIpAddr@@QAE@XZ */
  return this;
}


// ==== 10701320 thunk_FUN_10713f10 thunk -> 10713f10

// ==== 10701325 thunk_FUN_10713210 thunk -> 10713210

// ==== 1070132a AMasterServerClient::AMasterServerClient

/* public: __thiscall AMasterServerClient::AMasterServerClient(class AMasterServerClient const &) */

AMasterServerClient * __thiscall
AMasterServerClient::AMasterServerClient(AMasterServerClient *this,AMasterServerClient *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x132a  3  ??0AMasterServerClient@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107427fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AServerQueryClient::AServerQueryClient((AServerQueryClient *)this,(AServerQueryClient *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x430) = *(undefined4 *)(param_1 + 0x430);
  thunk_FUN_107085a0(this + 0x434,(int *)(param_1 + 0x434));
  *(undefined4 *)(this + 0x440) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)(this + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(this + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(this + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(this + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(this + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(this + 0x458) = *(undefined4 *)(param_1 + 0x458);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1070132f thunk_FUN_10706b40 thunk -> 10706b40

// ==== 10701339 thunk_FUN_107103d0 thunk -> 107103d0

// ==== 1070133e thunk_FUN_10709930 thunk -> 10709930

// ==== 10701343 thunk_FUN_10702b70 thunk -> 10702b70

// ==== 10701348 thunk_FUN_107085a0 thunk -> 107085a0

// ==== 1070134d FInternetLink::HasBudgetToRecv

/* protected: virtual int __thiscall FInternetLink::HasBudgetToRecv(void) */

int __thiscall FInternetLink::HasBudgetToRecv(FInternetLink *this)

{
                    /* 0x134d  160  ?HasBudgetToRecv@FInternetLink@@MAEHXZ */
  if ((ThrottleReceive != 0) && (BandwidthReceiveBudget < 1)) {
    return 0;
  }
  return 1;
}


// ==== 10701352 thunk_FUN_10703780 thunk -> 10703780

// ==== 10701357 ATcpLink::eventClosed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::eventClosed(void) */

void __thiscall ATcpLink::eventClosed(ATcpLink *this)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x1357  273  ?eventClosed@ATcpLink@@QAEXXZ */
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_Closed,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10701361 thunk_FUN_107102f0 thunk -> 107102f0

// ==== 10701366 thunk_FUN_107121c0 thunk -> 107121c0

// ==== 1070136b thunk_FUN_1071b5b0 thunk -> 1071b5b0

// ==== 10701370 AMasterServerUplink::operator=

/* public: class AMasterServerUplink & __thiscall AMasterServerUplink::operator=(class
   AMasterServerUplink const &) */

AMasterServerUplink * __thiscall
AMasterServerUplink::operator=(AMasterServerUplink *this,AMasterServerUplink *param_1)

{
  uint uVar1;
  
                    /* 0x1370  91  ??4AMasterServerUplink@@QAEAAV0@ABV0@@Z */
  AMasterServerLink::operator=((AMasterServerLink *)this,(AMasterServerLink *)param_1);
  FServerResponseLine::operator=
            ((FServerResponseLine *)(this + 0x41c),(FServerResponseLine *)(param_1 + 0x41c));
  *(undefined4 *)(this + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(this + 0x480) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)(this + 0x484) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)(this + 0x488) = *(undefined4 *)(param_1 + 0x488);
  *(uint *)(this + 0x48c) =
       *(uint *)(this + 0x48c) ^ (*(uint *)(this + 0x48c) ^ *(uint *)(param_1 + 0x48c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ *(uint *)(this + 0x48c)) & 2 ^ *(uint *)(this + 0x48c);
  *(uint *)(this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x48c) = uVar1;
  *(uint *)(this + 0x48c) = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x20 ^ uVar1;
  return this;
}


// ==== 10701375 thunk_FUN_10703160 thunk -> 10703160

// ==== 1070137f ATcpLink::ShutdownConnection

/* public: void __thiscall ATcpLink::ShutdownConnection(void) */

void __thiscall ATcpLink::ShutdownConnection(ATcpLink *this)

{
  int iVar1;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x137f  245  ?ShutdownConnection@ATcpLink@@QAEXXZ */
  puStack_c = &LAB_10743a90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (DAT_1076a3f8 == 0) {
    return;
  }
  if (*(SOCKET *)(this + 0x3c0) == 0xffffffff) {
    return;
  }
  if (this[0x3d8] == (ATcpLink)0x5) {
    ExceptionList = &pvStack_10;
    iVar1 = shutdown(*(SOCKET *)(this + 0x3c8),2);
    if (iVar1 != -1) {
      this[0x3d8] = (ATcpLink)0x7;
      ExceptionList = pvStack_10;
      return;
    }
  }
  else {
    if (this[0x3d8] != (ATcpLink)0x6) {
      return;
    }
    ExceptionList = &pvStack_10;
    iVar1 = shutdown(*(SOCKET *)(this + 0x3c0),2);
    if (iVar1 != -1) {
      this[0x3d8] = (ATcpLink)0x8;
      ExceptionList = pvStack_10;
      return;
    }
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8,
               L"Close: Error while attempting to close socket.");
  }
  iVar1 = WSAGetLastError();
  if ((iVar1 == 0x2736) && (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2
              (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,
               L"Close: Tried to close an invalid socket.");
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701384 AMasterServerClient::delegateOnQueryFinished

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AMasterServerClient::delegateOnQueryFinished(unsigned char,int) */

void __thiscall
AMasterServerClient::delegateOnQueryFinished(AMasterServerClient *this,uchar param_1,int param_2)

{
  uchar auStack_8 [4];
  int iStack_4;
  
                    /* 0x1384  268  ?delegateOnQueryFinished@AMasterServerClient@@QAEXEH@Z */
  iStack_4 = param_2;
  auStack_8[0] = param_1;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnQueryFinished,this + 0x444,auStack_8,0);
  return;
}


// ==== 10701389 ATcpLink::PollConnections

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall ATcpLink::PollConnections(void) */

void __thiscall ATcpLink::PollConnections(ATcpLink *this)

{
  ATcpLink AVar1;
  int iVar2;
  uint uVar3;
  SOCKET SVar4;
  ushort *puVar5;
  uchar auStack_524 [1000];
  fd_set fStack_13c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  FString aFStack_20 [4];
  timeval tStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1389  215  ?PollConnections@ATcpLink@@QAEXXZ */
  puStack_c = &LAB_10743b52;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffad0;
  puVar5 = (ushort *)0x0;
  iStack_8 = 0;
  if (this[0x3d4] == (ATcpLink)0x0) {
    tStack_1c.tv_sec = 0;
    tStack_1c.tv_usec = 0;
    fStack_13c.fd_array[0] = *(SOCKET *)(this + 0x3c8);
    if (fStack_13c.fd_array[0] == 0xffffffff) {
      fStack_13c.fd_array[0] = *(SOCKET *)(this + 0x3c0);
    }
    fStack_13c.fd_count = 1;
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xfffffad0;
    iVar2 = select(fStack_13c.fd_array[0] + 1,&fStack_13c,(fd_set *)0x0,(fd_set *)0x0,&tStack_1c);
    if ((iVar2 == 0) || (iVar2 == -1)) {
      *(undefined4 *)(this + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(this + 0x3d0) = 1;
    }
  }
  else if (this[0x3d4] == (ATcpLink)0x1) {
    AVar1 = this[0x3bc];
    if (AVar1 == (ATcpLink)0x0) {
      for (iStack_28 = 0; iStack_28 < 1000; iStack_28 = iStack_28 + 1) {
        auStack_524[iStack_28] = '\0';
      }
      SVar4 = *(SOCKET *)(this + 0x3c8);
      if (SVar4 == 0xffffffff) {
        SVar4 = *(SOCKET *)(this + 0x3c0);
      }
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffad0;
      iVar2 = recv(SVar4,(char *)auStack_524,999,0);
      if (iVar2 != -1) {
        auStack_524[iVar2] = '\0';
        uVar3 = winGetSizeUNICODE((char *)auStack_524);
        if ((uVar3 & 0x7fffffff) != 0) {
          winGetSizeUNICODE((char *)auStack_524);
          puStack_14 = &stack0xfffffad0;
          puVar5 = (ushort *)&stack0xfffffad0;
        }
        iVar2 = winGetSizeUNICODE((char *)auStack_524);
        puVar5 = winToUNICODE(puVar5,(char *)auStack_524,iVar2);
        FString::FString(aFStack_20,puVar5);
        iStack_8._0_1_ = 1;
        eventReceivedText(this,aFStack_20);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_20);
      }
    }
    else if (AVar1 == (ATcpLink)0x1) {
      for (iStack_2c = 0; iStack_2c < 1000; iStack_2c = iStack_2c + 1) {
        auStack_524[iStack_2c] = '\0';
      }
      SVar4 = *(SOCKET *)(this + 0x3c8);
      if (SVar4 == 0xffffffff) {
        SVar4 = *(SOCKET *)(this + 0x3c0);
      }
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffad0;
      iVar2 = recv(SVar4,(char *)auStack_524,999,0);
      if (iVar2 != -1) {
        auStack_524[iVar2] = '\0';
        uVar3 = winGetSizeUNICODE((char *)auStack_524);
        if ((uVar3 & 0x7fffffff) != 0) {
          winGetSizeUNICODE((char *)auStack_524);
          puStack_14 = &stack0xfffffad0;
          puVar5 = (ushort *)&stack0xfffffad0;
        }
        iVar2 = winGetSizeUNICODE((char *)auStack_524);
        puVar5 = winToUNICODE(puVar5,(char *)auStack_524,iVar2);
        FString::FString(aFStack_20,puVar5);
        iStack_8._0_1_ = 2;
        eventReceivedLine(this,aFStack_20);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_20);
      }
    }
    else if (AVar1 == (ATcpLink)0x2) {
      for (iStack_30 = 0; iStack_30 < 1000; iStack_30 = iStack_30 + 1) {
        auStack_524[iStack_30] = '\0';
      }
      SVar4 = *(SOCKET *)(this + 0x3c8);
      if (SVar4 == 0xffffffff) {
        SVar4 = *(SOCKET *)(this + 0x3c0);
      }
      ExceptionList = &pvStack_10;
      iVar2 = recv(SVar4,(char *)auStack_524,999,0);
      if (iVar2 != -1) {
        eventReceivedBinary(this,iVar2,auStack_524);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070138e FTcpLink::OnDataReceived

/* public: virtual void __thiscall FTcpLink::OnDataReceived(void) */

void __thiscall FTcpLink::OnDataReceived(FTcpLink *this)

{
                    /* 0x138e  204  ?OnDataReceived@FTcpLink@@UAEXXZ */
  return;
}


// ==== 10701393 AInternetLink::StaticClass

/* public: static class UClass * __cdecl AInternetLink::StaticClass(void) */

UClass * __cdecl AInternetLink::StaticClass(void)

{
                    /* 0x1393  246  ?StaticClass@AInternetLink@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10701398 AMasterServerClient::execStartQuery

/* public: void __thiscall AMasterServerClient::execStartQuery(struct FFrame &,void * const) */

void __thiscall
AMasterServerClient::execStartQuery(AMasterServerClient *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x1398  315  ?execStartQuery@AMasterServerClient@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = (uint)this & 0xffffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,(int)&uStack_4 + 3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  Init(this);
  piVar2 = *(int **)(this + 0x430);
  *(undefined4 *)(this + 0x440) = 0;
  *(char *)((int)piVar2 + 0x65) = (char)((uint)unaff_ESI >> 0x18);
  AMasterServerLink::eventGetMasterServer
            ((AMasterServerLink *)piVar2[0x16],(FString *)(piVar2 + 0x1a),piVar2 + 0x1d);
  iVar3 = *piVar2;
  puVar4 = FString::operator*((FString *)(piVar2 + 0x1a));
  (**(code **)(iVar3 + 0x40))(puVar4);
  return;
}


// ==== 107013a2 thunk_FUN_107090f0 thunk -> 107090f0

// ==== 107013a7 thunk_FUN_10708730 thunk -> 10708730

// ==== 107013ac FQueryData::FQueryData

/* public: __thiscall FQueryData::FQueryData(struct FQueryData const &) */

FQueryData * __thiscall FQueryData::FQueryData(FQueryData *this,FQueryData *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x13ac  35  ??0FQueryData@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741e95;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  this[0x18] = param_1[0x18];
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107013bb thunk_FUN_10712240 thunk -> 10712240

// ==== 107013c0 AServerQueryClient::InternalConstructor

/* public: static void __cdecl AServerQueryClient::InternalConstructor(void *) */

void __cdecl AServerQueryClient::InternalConstructor(void *param_1)

{
                    /* 0x13c0  189  ?InternalConstructor@AServerQueryClient@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AServerQueryClient(param_1);
    return;
  }
  return;
}


// ==== 107013c5 FMD5UpdateData::operator=

/* public: struct FMD5UpdateData & __thiscall FMD5UpdateData::operator=(struct FMD5UpdateData const
   &) */

FMD5UpdateData * __thiscall FMD5UpdateData::operator=(FMD5UpdateData *this,FMD5UpdateData *param_1)

{
                    /* 0x13c5  102  ??4FMD5UpdateData@@QAEAAU0@ABU0@@Z */
  FString::operator=((FString *)this,(FString *)param_1);
  FString::operator=((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


// ==== 107013ca FTcpLink::Close

/* public: virtual void __thiscall FTcpLink::Close(int) */

void __thiscall FTcpLink::Close(FTcpLink *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13ca  141  ?Close@FTcpLink@@UAEXH@Z */
  puStack_c = &LAB_10742a70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x44) = 5;
  }
  else {
    ExceptionList = &pvStack_10;
    closesocket(*(SOCKET *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0xffffffff;
    *(undefined4 *)(this + 0x44) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 107013d4 thunk_FUN_1070dfa0 thunk -> 1070dfa0

// ==== 107013de FSocketData::operator=

/* public: struct FSocketData & __thiscall FSocketData::operator=(struct FSocketData const &) */

FSocketData * __thiscall FSocketData::operator=(FSocketData *this,FSocketData *param_1)

{
                    /* 0x13de  104  ??4FSocketData@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}


// ==== 107013ed thunk_FUN_107050d0 thunk -> 107050d0

// ==== 107013f2 AMasterServerLink::eventGetMasterServer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AMasterServerLink::eventGetMasterServer(class FString &,int &) */

void __thiscall
AMasterServerLink::eventGetMasterServer(AMasterServerLink *this,FString *param_1,int *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *piVar3;
  undefined4 uVar4;
  int iStack_1c;
  void *pvStack_18;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x13f2  275  ?eventGetMasterServer@AMasterServerLink@@QAEXAAVFString@@AAH@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074213a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)&iStack_1c);
  uStack_4 = 1;
  FString::operator=((FString *)&iStack_1c,param_1);
  iStack_10 = *param_2;
  iVar1 = *(int *)this;
  uVar4 = 0;
  piVar3 = &iStack_1c;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_GetMasterServer,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,piVar3,uVar4);
  FString::operator=(param_1,(FString *)&stack0xffffffd8);
  *param_2 = iStack_1c;
  iStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffd8);
  ExceptionList = pvStack_18;
  return;
}


// ==== 107013fc FTcpLink::~FTcpLink

/* public: virtual __thiscall FTcpLink::~FTcpLink(void) */

void __thiscall FTcpLink::~FTcpLink(FTcpLink *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13fc  63  ??1FTcpLink@@UAE@XZ */
  puStack_c = &LAB_10742a18;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 2;
  if (*(int *)(this + 0x44) != 0) {
    closesocket(*(SOCKET *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  if (*(undefined4 **)(this + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x4c))(1);
  }
  if (*(undefined4 **)(this + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x50))(1);
  }
  uStack_8 = 0;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x28));
  uStack_8 = 0xffffffff;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x1c));
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701401 AUdpLink::operator_new

/* public: static void * __cdecl AUdpLink::operator new(unsigned int,enum EInternal *) */

void * __cdecl AUdpLink::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1401  82  ??2AUdpLink@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10701406 thunk_FUN_107060f0 thunk -> 107060f0

// ==== 1070140b thunk_FUN_10702f20 thunk -> 10702f20

// ==== 10701410 thunk_FUN_10710c40 thunk -> 10710c40

// ==== 10701415 FTcpLink::Listen

/* public: virtual void __thiscall FTcpLink::Listen(int) */

void __thiscall FTcpLink::Listen(FTcpLink *this,int param_1)

{
  u_short uVar1;
  SOCKET SVar2;
  uint uVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1415  195  ?Listen@FTcpLink@@UAEXH@Z */
  puStack_c = &LAB_10742a30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ((sockaddr *)(this + 4))->sa_family = 2;
  SVar2 = socket(2,1,6);
  *(SOCKET *)(this + 0x18) = SVar2;
  if (SVar2 == 0xffffffff) {
    appFailAssert("SocketData.Socket != INVALID_SOCKET",".\\InternetLink.cpp",0x189);
  }
  thunk_FUN_1071b6e0(*(SOCKET *)(this + 0x18));
  thunk_FUN_1071b710(*(SOCKET *)(this + 0x18),1);
  *(int *)(this + 0x14) = param_1;
  uVar1 = htons((u_short)param_1);
  *(u_short *)(this + 6) = uVar1;
  uVar3 = thunk_FUN_10703e30(*(ushort **)GWarn_exref);
  *(uint *)(this + 8) = uVar3;
  iVar4 = bind(*(SOCKET *)(this + 0x18),(sockaddr *)(this + 4),0x10);
  if (iVar4 == -1) {
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref,
                        L"Failed to bind listen socket");
  }
  iVar4 = listen(*(SOCKET *)(this + 0x18),200);
  if (iVar4 == -1) {
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref,
                        L"Failed to listen on TCP socket");
  }
  FOutputDevice::Logf(*(FOutputDevice **)(this + 0x18),*(ushort **)GWarn_exref,
                      L"TCP socket %d listening on port %d",*(FOutputDevice **)(this + 0x18),
                      *(undefined4 *)(this + 0x14));
  *(undefined4 *)(this + 0x44) = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070141f AUdpLink::execSendText

/* public: void __thiscall AUdpLink::execSendText(struct FFrame &,void * const) */

void __thiscall AUdpLink::execSendText(AUdpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  wchar_t *pwVar4;
  FOutputDevice *this_00;
  char *pcVar5;
  int flags;
  sockaddr *to;
  int tolen;
  sockaddr sStack_40;
  FString aFStack_30 [4];
  int iStack_2c;
  u_long uStack_24;
  u_short uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x141f  314  ?execSendText@AUdpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743f09;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb4;
  uStack_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_24);
  FString::FString(aFStack_30);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(this + 0x3c0) != -1) {
    sStack_40.sa_family = 2;
    sStack_40.sa_data._0_2_ = htons(uStack_20);
    sStack_40.sa_data._2_4_ = htonl(uStack_24);
    if (iStack_2c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iStack_2c + -1;
    }
    tolen = 0x10;
    to = &sStack_40;
    flags = 0;
    pcVar5 = (char *)0x0;
    puVar3 = FString::operator*(aFStack_30);
    pcVar5 = appToAnsi(puVar3,pcVar5);
    iVar2 = sendto(*(SOCKET *)(this + 0x3c0),pcVar5,iVar2,flags,to,tolen);
    if (iVar2 == -1) {
      iVar2 = WSAGetLastError();
      pwVar4 = thunk_FUN_1071b190(iVar2);
      FOutputDevice::Logf(this_00,(ushort *)param_1,L"SentText: sendto failed: %s",pwVar4);
      *(undefined4 *)param_2 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      FString::~FString(aFStack_30);
      ExceptionList = pvStack_10;
      return;
    }
  }
  *(undefined4 *)param_2 = 1;
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_30);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701424 thunk_FUN_1070ed10 thunk -> 1070ed10

// ==== 10701429 thunk_FUN_107083e0 thunk -> 107083e0

// ==== 10701433 FArchiveTcpSocket::FArchiveTcpSocket

/* public: __thiscall FArchiveTcpSocket::FArchiveTcpSocket(class FTcpLink *) */

FArchiveTcpSocket * __thiscall
FArchiveTcpSocket::FArchiveTcpSocket(FArchiveTcpSocket *this,FTcpLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1433  20  ??0FArchiveTcpSocket@@QAE@PAVFTcpLink@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107416c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this);
  *(undefined ***)this = vftable;
  *(FTcpLink **)(this + 0x38) = param_1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701438 FTcpLink::DataAvailable

/* public: virtual int __thiscall FTcpLink::DataAvailable(void) */

int __thiscall FTcpLink::DataAvailable(FTcpLink *this)

{
  int iVar1;
  
                    /* 0x1438  144  ?DataAvailable@FTcpLink@@UAEHXZ */
  if (*(int *)(this + 0x48) == 1) {
                    /* WARNING: Could not recover jumptable at 0x107034ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(**(int **)(this + 0x50) + 0x68))();
    return iVar1;
  }
  return *(int *)(this + 0x20);
}


// ==== 1070143d AMasterServerGameStats::InternalConstructor

/* public: static void __cdecl AMasterServerGameStats::InternalConstructor(void *) */

void __cdecl AMasterServerGameStats::InternalConstructor(void *param_1)

{
                    /* 0x143d  186  ?InternalConstructor@AMasterServerGameStats@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AMasterServerGameStats(param_1);
    return;
  }
  return;
}


// ==== 10701447 thunk_FUN_1071b740 thunk -> 1071b740

// ==== 1070144c thunk_FUN_10714160 thunk -> 10714160

// ==== 10701451 thunk_FUN_10704510 thunk -> 10704510

// ==== 10701456 thunk_FUN_107065c0 thunk -> 107065c0

// ==== 1070145b ATcpLink::ShouldTickInEntry

/* public: virtual int __thiscall ATcpLink::ShouldTickInEntry(void) */

int __thiscall ATcpLink::ShouldTickInEntry(ATcpLink *this)

{
                    /* 0x145b  244  ?ShouldTickInEntry@ATcpLink@@UAEHXZ */
  return 1;
}


// ==== 10701465 AServerQueryClient::PostScriptDestroyed

/* public: virtual void __thiscall AServerQueryClient::PostScriptDestroyed(void) */

void __thiscall AServerQueryClient::PostScriptDestroyed(AServerQueryClient *this)

{
                    /* 0x1465  218  ?PostScriptDestroyed@AServerQueryClient@@UAEXXZ */
  AActor::PostScriptDestroyed((AActor *)this);
  if (*(int **)(this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
  return;
}


// ==== 1070146f AInternetLink::AInternetLink

/* public: __thiscall AInternetLink::AInternetLink(class AInternetLink const &) */

AInternetLink * __thiscall AInternetLink::AInternetLink(AInternetLink *this,AInternetLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x146f  1  ??0AInternetLink@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741929;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInternetInfo::AInternetInfo((AInternetInfo *)this,(AInternetInfo *)param_1);
  *(undefined ***)this = vftable;
  this[0x3bc] = param_1[0x3bc];
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  this[0x3d4] = param_1[0x3d4];
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701474 thunk_FUN_1071b500 thunk -> 1071b500

// ==== 10701479 FArchiveUdpWriter::operator=

/* public: struct FArchiveUdpWriter & __thiscall FArchiveUdpWriter::operator=(struct
   FArchiveUdpWriter const &) */

FArchiveUdpWriter * __thiscall
FArchiveUdpWriter::operator=(FArchiveUdpWriter *this,FArchiveUdpWriter *param_1)

{
                    /* 0x1479  99  ??4FArchiveUdpWriter@@QAEAAU0@ABU0@@Z */
  FArchive::operator=((FArchive *)this,(FArchive *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(this + 0x44),(TArray<unsigned_char> *)(param_1 + 0x44));
  return this;
}


// ==== 1070147e thunk_FUN_107137b0 thunk -> 107137b0

// ==== 10701488 thunk_FUN_10710280 thunk -> 10710280

// ==== 10701492 thunk_FUN_107089c0 thunk -> 107089c0

// ==== 10701497 FArchiveUdpWriter::FArchiveUdpWriter

/* public: __thiscall FArchiveUdpWriter::FArchiveUdpWriter(struct FArchiveUdpWriter const &) */

FArchiveUdpWriter * __thiscall
FArchiveUdpWriter::FArchiveUdpWriter(FArchiveUdpWriter *this,FArchiveUdpWriter *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1497  25  ??0FArchiveUdpWriter@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741855;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(this + 0x44),(TArray<unsigned_char> *)(param_1 + 0x44));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1070149c thunk_FUN_10714320 thunk -> 10714320

// ==== 107014ab AUdpLink::GetSocketData

/* public: struct FSocketData __thiscall AUdpLink::GetSocketData(void) */

sockaddr * __thiscall AUdpLink::GetSocketData(AUdpLink *this)

{
  SOCKET s;
  sockaddr *name;
  u_short uVar1;
  uint uVar2;
  sockaddr *in_stack_00000004;
  
                    /* 0x14ab  156  ?GetSocketData@AUdpLink@@QAE?AUFSocketData@@XZ */
  name = in_stack_00000004;
  s = *(SOCKET *)(this + 0x3c0);
  *(SOCKET *)(in_stack_00000004[1].sa_data + 2) = s;
  in_stack_00000004 = (sockaddr *)0x10;
  getsockname(s,name,(int *)&stack0x00000004);
  uVar1 = ntohs(*(u_short *)name->sa_data);
  uVar2 = (uint)uVar1;
  name[1].sa_family = (short)uVar2;
  name[1].sa_data[0] = (char)(uVar2 >> 0x10);
  name[1].sa_data[1] = (char)(uVar2 >> 0x18);
  return name;
}


// ==== 107014b5 thunk_FUN_10712360 thunk -> 10712360

// ==== 107014bf FTcpLink::OnClosed

/* public: virtual void __thiscall FTcpLink::OnClosed(void) */

void __thiscall FTcpLink::OnClosed(FTcpLink *this)

{
                    /* 0x14bf  201  ?OnClosed@FTcpLink@@UAEXXZ */
  return;
}


// ==== 107014c9 thunk_FUN_107122f0 thunk -> 107122f0

// ==== 107014ce thunk_FUN_10703e30 thunk -> 10703e30

// ==== 107014d3 ATcpLink::execReadText

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall ATcpLink::execReadText(struct FFrame &,void * const) */

void __thiscall ATcpLink::execReadText(ATcpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  FOutputDevice *this_00;
  FFrame **ppFVar6;
  SOCKET s;
  FFrame *pFStack_444;
  FString *pFStack_440;
  char acStack_430 [1032];
  FString aFStack_28 [16];
  FString *pFStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x14d3  307  ?execReadText@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743aa9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbc4;
  uStack_8 = 0;
  pFStack_440 = (FString *)0x107166b6;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_28);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_440 = aFStack_28;
  pFStack_444 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    pFStack_18 = aFStack_28;
  }
  else {
    pFStack_18 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (((DAT_1076a3f8 == 0) || (*(int *)(this + 0x3c0) == -1)) ||
     ((this[0x3d8] != (ATcpLink)0x2 && (this[0x3d8] != (ATcpLink)0x4)))) {
    *(undefined4 *)param_2 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    FString::~FString(aFStack_28);
  }
  else {
    appMemset(acStack_430,0,0x400);
    s = *(SOCKET *)(this + 0x3c8);
    if (s == 0xffffffff) {
      s = *(SOCKET *)(this + 0x3c0);
    }
    iVar2 = recv(s,acStack_430,0x3ff,0);
    if (iVar2 == -1) {
      *(undefined4 *)param_2 = 0;
      iVar2 = WSAGetLastError();
      if ((iVar2 != 0x2733) && (*(int *)GLog_exref != 0)) {
        FOutputDevice::Logf2
                  (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,L"ReadText: Error reading text.");
      }
    }
    else {
      uVar3 = winGetSizeUNICODE(acStack_430);
      if ((uVar3 & 0x7fffffff) == 0) {
        ppFVar6 = (FFrame **)0x0;
      }
      else {
        winGetSizeUNICODE(acStack_430);
        puStack_14 = (undefined1 *)&pFStack_444;
        ppFVar6 = &pFStack_444;
      }
      iVar4 = winGetSizeUNICODE(acStack_430);
      puVar5 = winToUNICODE((ushort *)ppFVar6,acStack_430,iVar4);
      FString::operator=(pFStack_18,puVar5);
      *(int *)param_2 = iVar2;
    }
    uStack_8 = uStack_8 & 0xffffff00;
    FString::~FString(aFStack_28);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 107014d8 thunk_FUN_10706a90 thunk -> 10706a90

// ==== 107014e2 AUdpLink::execSendBinary

/* public: void __thiscall AUdpLink::execSendBinary(struct FFrame &,void * const) */

void __thiscall AUdpLink::execSendBinary(AUdpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FOutputDevice *this_00;
  char *buf;
  char acStack_138 [256];
  sockaddr sStack_38;
  u_long uStack_24;
  u_short uStack_20;
  AUdpLink *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e2  312  ?execSendBinary@AUdpLink@@QAEXAAUFFrame@@QAX@Z */
  pFVar2 = param_1;
  puStack_c = &LAB_10743f20;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffebc;
  uStack_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pAStack_18 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_24);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,acStack_138);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    buf = acStack_138;
  }
  else {
    buf = *(char **)GPropAddr_exref;
  }
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
  }
  if (*(int *)(pAStack_18 + 0x3c0) != -1) {
    sStack_38.sa_family = 2;
    sStack_38.sa_data._0_2_ = htons(uStack_20);
    sStack_38.sa_data._2_4_ = htonl(uStack_24);
    iVar3 = sendto(*(SOCKET *)(pAStack_18 + 0x3c0),buf,(int)param_1,0,&sStack_38,0x10);
    if (iVar3 == -1) {
      FOutputDevice::Logf(this_00,(ushort *)pFVar2,L"SendBinary: sendto failed");
      *(undefined4 *)param_2 = 1;
      ExceptionList = pvStack_10;
      return;
    }
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 107014e7 AUdpLink::PostScriptDestroyed

/* public: virtual void __thiscall AUdpLink::PostScriptDestroyed(void) */

void __thiscall AUdpLink::PostScriptDestroyed(AUdpLink *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e7  220  ?PostScriptDestroyed@AUdpLink@@UAEXXZ */
  puStack_c = &LAB_10743ee0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(SOCKET *)(this + 0x3c0) != 0xffffffff) {
    ExceptionList = &pvStack_10;
    closesocket(*(SOCKET *)(this + 0x3c0));
  }
  AActor::PostScriptDestroyed((AActor *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 107014ec thunk_FUN_1070e070 thunk -> 1070e070

// ==== 107014f1 FTcpLink::operator=

/* public: class FTcpLink & __thiscall FTcpLink::operator=(class FTcpLink const &) */

FTcpLink * __thiscall FTcpLink::operator=(FTcpLink *this,FTcpLink *param_1)

{
                    /* 0x14f1  105  ??4FTcpLink@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(this + 0x1c),(TArray<unsigned_char> *)(param_1 + 0x1c));
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(this + 0x28),(TArray<unsigned_char> *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return this;
}


// ==== 107014fb ATcpLink::FlushSendBuffer

/* public: int __thiscall ATcpLink::FlushSendBuffer(void) */

int __thiscall ATcpLink::FlushSendBuffer(ATcpLink *this)

{
  ATcpLink AVar1;
  int iVar2;
  SOCKET s;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14fb  151  ?FlushSendBuffer@ATcpLink@@QAEHXZ */
  puStack_c = &LAB_10743b70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  AVar1 = this[0x3d8];
  ExceptionList = &pvStack_10;
  if ((((AVar1 == (ATcpLink)0x2) || (ExceptionList = &pvStack_10, AVar1 == (ATcpLink)0x4)) ||
      (ExceptionList = &pvStack_10, AVar1 == (ATcpLink)0x6)) ||
     (ExceptionList = &pvStack_10, AVar1 == (ATcpLink)0x5)) {
    while( true ) {
      iVar2 = *(int *)(this + 0x3ec);
      if (0x200 < iVar2) {
        iVar2 = 0x200;
      }
      if (iVar2 < 1) break;
      s = *(SOCKET *)(this + 0x3c8);
      if (s == 0xffffffff) {
        s = *(SOCKET *)(this + 0x3c0);
      }
      iVar2 = send(s,*(char **)(this + 1000),iVar2,0);
      if (iVar2 == -1) {
        ExceptionList = pvStack_10;
        return 1;
      }
      TArray<unsigned_char>::Remove((TArray<unsigned_char> *)(this + 1000),0,iVar2);
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10701500 AMasterServerUplink::AMasterServerUplink

/* public: __thiscall AMasterServerUplink::AMasterServerUplink(void) */

AMasterServerUplink * __thiscall AMasterServerUplink::AMasterServerUplink(AMasterServerUplink *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1500  10  ??0AMasterServerUplink@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741cf7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AMasterServerLink::AMasterServerLink((AMasterServerLink *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FServerResponseLine::FServerResponseLine((FServerResponseLine *)(this + 0x41c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701505 AMasterServerGameStats::operator=

/* public: class AMasterServerGameStats & __thiscall AMasterServerGameStats::operator=(class
   AMasterServerGameStats const &) */

AMasterServerGameStats * __thiscall
AMasterServerGameStats::operator=(AMasterServerGameStats *this,AMasterServerGameStats *param_1)

{
                    /* 0x1505  89  ??4AMasterServerGameStats@@QAEAAV0@ABV0@@Z */
  AGameStats::operator=((AGameStats *)this,(AGameStats *)param_1);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  return this;
}


// ==== 1070150a UTcpipConnection::operator=

/* public: class UTcpipConnection & __thiscall UTcpipConnection::operator=(class UTcpipConnection
   const &) */

UTcpipConnection * __thiscall
UTcpipConnection::operator=(UTcpipConnection *this,UTcpipConnection *param_1)

{
                    /* 0x150a  108  ??4UTcpipConnection@@QAEAAV0@ABV0@@Z */
  UNetConnection::operator=((UNetConnection *)this,(UNetConnection *)param_1);
  *(undefined4 *)(this + 0x3f1c) = *(undefined4 *)(param_1 + 0x3f1c);
  *(undefined4 *)(this + 0x3f20) = *(undefined4 *)(param_1 + 0x3f20);
  *(undefined4 *)(this + 0x3f24) = *(undefined4 *)(param_1 + 0x3f24);
  *(undefined4 *)(this + 0x3f28) = *(undefined4 *)(param_1 + 0x3f28);
  *(undefined4 *)(this + 0x3f2c) = *(undefined4 *)(param_1 + 0x3f2c);
  *(undefined4 *)(this + 0x3f30) = *(undefined4 *)(param_1 + 0x3f30);
  *(undefined4 *)(this + 0x3f34) = *(undefined4 *)(param_1 + 0x3f34);
  return this;
}


// ==== 1070150f thunk_FUN_10713140 thunk -> 10713140

// ==== 10701514 FArchiveUdpReader::AtEnd

/* public: virtual int __thiscall FArchiveUdpReader::AtEnd(void) */

int __thiscall FArchiveUdpReader::AtEnd(FArchiveUdpReader *this)

{
                    /* 0x1514  135  ?AtEnd@FArchiveUdpReader@@UAEHXZ */
  return (uint)(*(int *)(this + 0x3c) == 0);
}


// ==== 10701519 UTcpNetDriver::LowLevelGetNetworkNumber

/* public: virtual class FString __thiscall UTcpNetDriver::LowLevelGetNetworkNumber(void) */

FString * __thiscall UTcpNetDriver::LowLevelGetNetworkNumber(UTcpNetDriver *this)

{
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1519  198  ?LowLevelGetNetworkNumber@UTcpNetDriver@@UAE?AVFString@@XZ */
  puStack_c = &LAB_10743c9a;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  thunk_FUN_1071b5d0(in_stack_00000004,*(uint *)(this + 0xb0),0);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1070151e AMasterServerClient::execLaunchAutoUpdate

/* public: void __thiscall AMasterServerClient::execLaunchAutoUpdate(struct FFrame &,void * const)
    */

void __thiscall
AMasterServerClient::execLaunchAutoUpdate(AMasterServerClient *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x151e  298  ?execLaunchAutoUpdate@AMasterServerClient@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10742d90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appLaunchURL((ushort *)L"Setup.exe",(ushort *)L"autopatch",(FString *)0x0);
  appRequestExit(0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701523 AInternetLink::AInternetLink

/* public: __thiscall AInternetLink::AInternetLink(void) */

AInternetLink * __thiscall AInternetLink::AInternetLink(AInternetLink *this)

{
  FString aFStack_2c [16];
  AInternetLink *pAStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1523  2  ??0AInternetLink@@QAE@XZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10742862;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  ExceptionList = &pvStack_10;
  pAStack_1c = this;
  AInternetInfo::AInternetInfo((AInternetInfo *)this);
  *(undefined ***)this = vftable;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  FString::FString(aFStack_2c);
  uStack_8._0_1_ = 2;
  thunk_FUN_1071af40();
  this[0x3bc] = (AInternetLink)0x0;
  this[0x3d4] = (AInternetLink)0x1;
  *(undefined4 *)(this + 0x3d0) = 0;
  *(undefined4 *)(this + 0x3c4) = 0;
  *(undefined4 *)(this + 0x3c0) = 0xffffffff;
  *(undefined4 *)(this + 0x3c8) = 0xffffffff;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FString::~FString(aFStack_2c);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10701528 FArchiveTcpReader::~FArchiveTcpReader

/* public: virtual __thiscall FArchiveTcpReader::~FArchiveTcpReader(void) */

void __thiscall FArchiveTcpReader::~FArchiveTcpReader(FArchiveTcpReader *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1528  56  ??1FArchiveTcpReader@@UAE@XZ */
  puStack_8 = &LAB_107426dc;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_10709200((FArray *)(this + 0x3c));
  *(code **)this = _vftable__exref;
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070152d ATcpLink::execOpen

/* public: void __thiscall ATcpLink::execOpen(struct FFrame &,void * const) */

void __thiscall ATcpLink::execOpen(ATcpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FOutputDevice *this_00;
  sockaddr sStack_34;
  u_long uStack_24;
  u_short uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x152d  301  ?execOpen@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743a60;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if ((DAT_1076a3f8 != 0) && (*(int *)(this + 0x3c0) != -1)) {
    sStack_34.sa_family = 2;
    sStack_34.sa_data._0_2_ = htons(uStack_20);
    sStack_34.sa_data._2_4_ = htonl(uStack_24);
    iVar2 = connect(*(SOCKET *)(this + 0x3c0),&sStack_34,0x10);
    if (iVar2 == -1) {
      iVar2 = WSAGetLastError();
      if (iVar2 != 0x2733) {
        if (*(int *)GLog_exref != 0) {
          iVar2 = WSAGetLastError();
          FOutputDevice::Logf2
                    (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,
                     L"Open: An error occured while attempting to connect: %i",iVar2);
        }
        *(undefined4 *)param_2 = 0;
        ExceptionList = pvStack_10;
        return;
      }
    }
    this[0x3d8] = (ATcpLink)0x3;
    TArray<unsigned_char>::Empty((TArray<unsigned_char> *)(this + 1000),0);
  }
  *(undefined4 *)param_2 = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701532 AMasterServerGameStats::operator_new

/* public: static void * __cdecl AMasterServerGameStats::operator new(unsigned int,enum EInternal *)
    */

void * __cdecl AMasterServerGameStats::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1532  72  ??2AMasterServerGameStats@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1070153c thunk_FUN_10713310 thunk -> 10713310

// ==== 10701541 FTcpLink::FTcpLink

/* public: __thiscall FTcpLink::FTcpLink(struct FSocketData) */

FTcpLink * __thiscall
FTcpLink::FTcpLink(FTcpLink *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float10 fVar1;
  undefined4 uStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1541  38  ??0FTcpLink@@QAE@UFSocketData@@@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_107429e8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = param_6;
  *(undefined4 *)(this + 0x18) = param_7;
  *(undefined ***)this = vftable;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x1c));
  uStack_8 = 0;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x28));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 3;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  fVar1 = thunk_FUN_10702660();
  uStack_1c = (undefined4)(longlong)ROUND(fVar1);
  *(undefined4 *)(this + 0x40) = uStack_1c;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10701546 FInternetLink::FInternetLink

/* public: __thiscall FInternetLink::FInternetLink(class FInternetLink const &) */

void __thiscall FInternetLink::FInternetLink(FInternetLink *this,FInternetLink *param_1)

{
                    /* 0x1546  27  ??0FInternetLink@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1070154b FArchiveUdpWriter::Serialize

/* public: virtual void __thiscall FArchiveUdpWriter::Serialize(void *,int) */

void __thiscall FArchiveUdpWriter::Serialize(FArchiveUdpWriter *this,void *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x154b  241  ?Serialize@FArchiveUdpWriter@@UAEXPAXH@Z */
  iVar1 = FArray::Add((FArray *)(this + 0x44),param_2,1);
  _memcpy((void *)(*(int *)(this + 0x44) + iVar1),param_1,param_2);
  return;
}


// ==== 10701555 thunk_FUN_107027d0 thunk -> 107027d0

// ==== 1070155a AServerQueryClient::Destroy

/* public: virtual void __thiscall AServerQueryClient::Destroy(void) */

void __thiscall AServerQueryClient::Destroy(AServerQueryClient *this)

{
                    /* 0x155a  148  ?Destroy@AServerQueryClient@@UAEXXZ */
  if (*(int **)(this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(this + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x1070de43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::Destroy((AActor *)this);
  return;
}


// ==== 1070155f UTcpNetDriver::TickDispatch

/* public: virtual void __thiscall UTcpNetDriver::TickDispatch(float) */

void __thiscall UTcpNetDriver::TickDispatch(UTcpNetDriver *this,float param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  UPackage *pUVar6;
  UTcpipConnection *pUVar7;
  UNetConnection *this_00;
  char acStack_2e8 [576];
  FURL aFStack_a8 [68];
  FString aFStack_64 [12];
  FString aFStack_58 [16];
  FString aFStack_48 [16];
  UNetConnection *pUStack_38;
  undefined1 *puStack_34;
  UNetConnection *pUStack_30;
  int iStack_2c;
  sockaddr sStack_28;
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x155f  264  ?TickDispatch@UTcpNetDriver@@UAEXM@Z */
  puStack_c = &LAB_10743d81;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffd0c;
  uStack_18 = 0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  UNetDriver::TickDispatch((UNetDriver *)this,param_1);
LAB_10718fb0:
  while( true ) {
    uVar1 = rdtsc();
    *(int *)(this + 0x90) = *(int *)(this + 0x90) - (int)uVar1;
    param_1 = 2.24208e-44;
    puVar2 = (undefined1 *)
             recvfrom(*(SOCKET *)(this + 0xbc),acStack_2e8,0x240,0,&sStack_28,(int *)&param_1);
    uVar1 = rdtsc();
    *(int *)(this + 0x90) = *(int *)(this + 0x90) + (int)uVar1 + -0xc;
    puStack_34 = puVar2;
    if (puVar2 == (undefined1 *)0xffffffff) {
      iVar3 = WSAGetLastError();
      if (iVar3 == 0x2733) {
        ExceptionList = pvStack_10;
        return;
      }
      if (iVar3 != 0x2746) {
        if ((DAT_10765064 != 0) && (*(int *)GLog_exref != 0)) {
          pFVar4 = thunk_FUN_1071b5d0(aFStack_48,
                                      CONCAT22(sStack_28.sa_data._4_2_,sStack_28.sa_data._2_2_),0);
          iStack_8._0_1_ = 1;
          ntohs(sStack_28.sa_data._0_2_);
          FString::operator*(pFVar4);
          iVar3 = WSAGetLastError();
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                     L"UDP recvfrom error: %i from %s:%d",iVar3);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_48);
        }
        DAT_10765064 = 0;
        ExceptionList = pvStack_10;
        return;
      }
    }
    this_00 = (UNetConnection *)0x0;
    pUStack_30 = (UNetConnection *)0x0;
    if ((*(int *)(this + 0x44) != 0) &&
       (iVar3 = thunk_FUN_1071b500((short *)(*(int *)(this + 0x44) + 0x3f1c),(short *)&sStack_28),
       iVar3 != 0)) {
      this_00 = *(UNetConnection **)(this + 0x44);
      pUStack_30 = this_00;
    }
    iStack_2c = 0;
    while ((iStack_2c < *(int *)(this + 0x3c) && (this_00 == (UNetConnection *)0x0))) {
      iVar3 = iStack_2c * 4;
      iVar5 = thunk_FUN_1071b500((short *)(*(int *)(*(int *)(this + 0x38) + iVar3) + 0x3f1c),
                                 (short *)&sStack_28);
      if (iVar5 != 0) {
        this_00 = *(UNetConnection **)(iVar3 + *(int *)(this + 0x38));
        pUStack_30 = this_00;
      }
      iStack_2c = iStack_2c + 1;
      puVar2 = puStack_34;
    }
    if (puVar2 != (undefined1 *)0xffffffff) break;
    if (this_00 == (UNetConnection *)0x0) {
      if ((*(int *)(this + 0xa8) != 0) && (*(int *)GLog_exref != 0)) {
        pFVar4 = thunk_FUN_1071b5d0(aFStack_58,
                                    CONCAT22(sStack_28.sa_data._4_2_,sStack_28.sa_data._2_2_),0);
        iStack_8._0_1_ = 3;
        ntohs(sStack_28.sa_data._0_2_);
        FString::operator*(pFVar4);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Received ICMP port unreachable from %s:%d.  No matching connection found.");
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_58);
      }
    }
    else if ((this_00 != *(UNetConnection **)(this + 0x44)) &&
            ((*(int *)(this_00 + 0x78) != 3 || (*(int *)(this + 0xa4) == 0)))) {
      if ((*(int *)(this + 0xa8) != 0) && (*(int *)GLog_exref != 0)) {
        pFVar4 = thunk_FUN_1071b5d0(aFStack_48,
                                    CONCAT22(sStack_28.sa_data._4_2_,sStack_28.sa_data._2_2_),0);
        iStack_8._0_1_ = 2;
        ntohs(sStack_28.sa_data._0_2_);
        FString::operator*(pFVar4);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Received ICMP port unreachable from client %s:%d.  Disconnecting.");
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_48);
      }
      (**(code **)(*(int *)this_00 + 0xc))();
    }
  }
  if (this_00 == (UNetConnection *)0x0) goto code_r0x10719231;
  goto LAB_10719324;
code_r0x10719231:
  iVar3 = (**(code **)**(undefined4 **)(this + 0x48))();
  if (iVar3 == 1) {
    puStack_34 = &stack0xfffffd04;
    pUVar6 = UObject::GetTransientPackage();
    pUVar7 = UTcpipConnection::operator_new(0x3f38,pUVar6);
    if (pUVar7 == (UTcpipConnection *)0x0) {
      this_00 = (UNetConnection *)0x0;
    }
    else {
      FURL::FURL(aFStack_a8,(ushort *)0x0);
      iStack_8 = CONCAT31(iStack_8._1_3_,4);
      uStack_18 = uStack_18 | 1;
      this_00 = (UNetConnection *)
                UTcpipConnection::UTcpipConnection
                          (pUVar7,*(undefined4 *)(this + 0xbc),this,
                           CONCAT22(sStack_28.sa_data._0_2_,sStack_28.sa_family),
                           CONCAT22(sStack_28.sa_data._4_2_,sStack_28.sa_data._2_2_),
                           sStack_28.sa_data._6_4_,sStack_28.sa_data._10_4_,3);
    }
    iStack_8 = 0;
    pUStack_30 = this_00;
    if ((uStack_18 & 1) != 0) {
      uStack_18 = uStack_18 & 0xfffffffe;
      FURL::~FURL(aFStack_a8);
    }
    pFVar4 = thunk_FUN_1071b5d0(aFStack_64,CONCAT22(sStack_28.sa_data._4_2_,sStack_28.sa_data._2_2_)
                                ,0);
    iStack_8._0_1_ = 5;
    FString::operator=((FString *)(this_00 + 0x88),pFVar4);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_64);
    (**(code **)(**(int **)(this + 0x48) + 4))();
    pUStack_38 = this_00;
    thunk_FUN_10718f40(this + 0x38,&pUStack_38);
    if (this_00 != (UNetConnection *)0x0) {
LAB_10719324:
      UNetConnection::ReceivedRawPacket(this_00,acStack_2e8,(int)puVar2);
    }
  }
  goto LAB_10718fb0;
}


// ==== 10701564 thunk_FUN_10710460 thunk -> 10710460

// ==== 1070156e thunk_FUN_10708670 thunk -> 10708670

// ==== 10701573 AMasterServerClient::operator=

/* public: class AMasterServerClient & __thiscall AMasterServerClient::operator=(class
   AMasterServerClient const &) */

AMasterServerClient * __thiscall
AMasterServerClient::operator=(AMasterServerClient *this,AMasterServerClient *param_1)

{
                    /* 0x1573  88  ??4AMasterServerClient@@QAEAAV0@ABV0@@Z */
  AServerQueryClient::operator=((AServerQueryClient *)this,(AServerQueryClient *)param_1);
  *(undefined4 *)(this + 0x430) = *(undefined4 *)(param_1 + 0x430);
  thunk_FUN_107088c0(this + 0x434,(FArray *)(param_1 + 0x434));
  *(undefined4 *)(this + 0x440) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)(this + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(this + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(this + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(this + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(this + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(this + 0x458) = *(undefined4 *)(param_1 + 0x458);
  return this;
}


// ==== 10701578 FUdpLink::~FUdpLink

/* public: virtual __thiscall FUdpLink::~FUdpLink(void) */

void __thiscall FUdpLink::~FUdpLink(FUdpLink *this)

{
                    /* 0x1578  64  ??1FUdpLink@@UAE@XZ */
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x1c) == 0) {
    closesocket(*(SOCKET *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  return;
}


// ==== 1070157d AInternetLink::execResolve

/* public: void __thiscall AInternetLink::execResolve(struct FFrame &,void * const) */

void __thiscall AInternetLink::execResolve(AInternetLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ulong hostlong;
  int iVar3;
  void *this_00;
  FOutputDevice *pFVar4;
  char *pcVar5;
  FString aFStack_30 [12];
  u_long uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x157d  310  ?execResolve@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742c09;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_30);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pcVar5 = (char *)0x0;
  puVar2 = FString::operator*(aFStack_30);
  pcVar5 = appToAnsi(puVar2,pcVar5);
  hostlong = inet_addr(pcVar5);
  if (hostlong == 0xffffffff) {
    iVar3 = FString::operator!=(aFStack_30,(ushort *)L"255.255.255.255");
    if (iVar3 == 0) {
      eventResolveFailed(this);
    }
    else {
      this_00 = (void *)thunk_FUN_107098a0(0x308,L"InternetLinkResolve");
      if (this_00 == (void *)0x0) {
        *(undefined4 *)(this + 0x3cc) = 0;
      }
      else {
        puVar2 = FString::operator*(aFStack_30);
        pFVar4 = thunk_FUN_10703780(this_00,puVar2);
        *(FOutputDevice **)(this + 0x3cc) = pFVar4;
      }
    }
  }
  else {
    uStack_24 = htonl(hostlong);
    uStack_20 = 0;
    eventResolved(this,uStack_24,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_30);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701587 AInternetLink::operator_new

/* public: static void * __cdecl AInternetLink::operator new(unsigned int,enum EInternal *) */

void * __cdecl AInternetLink::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1587  68  ??2AInternetLink@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1070158c thunk_FUN_10714b80 thunk -> 10714b80

// ==== 10701591 thunk_FUN_10713a20 thunk -> 10713a20

// ==== 10701596 FInternetLink::FInternetLink

/* public: __thiscall FInternetLink::FInternetLink(void) */

void __thiscall FInternetLink::FInternetLink(FInternetLink *this)

{
                    /* 0x1596  29  ??0FInternetLink@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1070159b FTcpLink::OnIncomingConnection

/* public: virtual void __thiscall FTcpLink::OnIncomingConnection(struct FSocketData) */

void __thiscall FTcpLink::OnIncomingConnection(void)

{
                    /* 0x159b  205  ?OnIncomingConnection@FTcpLink@@UAEXUFSocketData@@@Z */
  return;
}


// ==== 107015a0 AMasterServerClient::InternalConstructor

/* public: static void __cdecl AMasterServerClient::InternalConstructor(void *) */

void __cdecl AMasterServerClient::InternalConstructor(void *param_1)

{
                    /* 0x15a0  185  ?InternalConstructor@AMasterServerClient@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AMasterServerClient(param_1);
    return;
  }
  return;
}


// ==== 107015a5 AUdpLink::execReadText

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: void __thiscall AUdpLink::execReadText(struct FFrame &,void * const) */

void __thiscall AUdpLink::execReadText(AUdpLink *this,FFrame *param_1,void *param_2)

{
  AUdpLink *pAVar1;
  byte bVar2;
  u_long *puVar3;
  u_short uVar4;
  int iVar5;
  u_long uVar6;
  ushort *puVar7;
  FOutputDevice *this_00;
  FString *this_01;
  char acStack_1048 [4096];
  sockaddr sStack_48;
  u_long auStack_38 [3];
  FString aFStack_2c [16];
  u_long *puStack_1c;
  AUdpLink *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x15a5  308  ?execReadText@AUdpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743f39;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffefac;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pAStack_18 = this;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,auStack_38);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puStack_1c = auStack_38;
  }
  else {
    puStack_1c = *(u_long **)GPropAddr_exref;
  }
  FString::FString(aFStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,aFStack_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_01 = aFStack_2c;
  }
  else {
    this_01 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(this_01,(ushort *)&DAT_1074c080);
  pAVar1 = pAStack_18 + 0x3c0;
  if (*(SOCKET *)pAVar1 != 0xffffffff) {
    pAStack_18 = (AUdpLink *)0x10;
    iVar5 = recvfrom(*(SOCKET *)pAVar1,acStack_1048,0x1000,0,&sStack_48,(int *)&pAStack_18);
    if (iVar5 == -1) {
      *(undefined4 *)param_2 = 0;
      iVar5 = WSAGetLastError();
      if ((iVar5 != 0x2733) && (*(int *)GLog_exref != 0)) {
        FOutputDevice::Logf2
                  (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,L"ReadText: Error reading text.");
      }
    }
    else {
      uVar6 = ntohl(CONCAT22(sStack_48.sa_data._4_2_,sStack_48.sa_data._2_2_));
      puVar3 = puStack_1c;
      *puStack_1c = uVar6;
      uVar4 = ntohs(sStack_48.sa_data._0_2_);
      puVar3[1] = (uint)uVar4;
      puVar7 = appFromAnsi(acStack_1048,(ushort *)0x0);
      FString::operator=(this_01,puVar7);
      *(int *)param_2 = iVar5;
    }
    uStack_8 = uStack_8 & 0xffffff00;
    FString::~FString(aFStack_2c);
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_2c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 107015aa thunk_FUN_107126f0 thunk -> 107126f0

// ==== 107015af ATcpLink::StaticClass

/* public: static class UClass * __cdecl ATcpLink::StaticClass(void) */

UClass * __cdecl ATcpLink::StaticClass(void)

{
                    /* 0x15af  252  ?StaticClass@ATcpLink@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 107015b9 thunk_FUN_10712d80 thunk -> 10712d80

// ==== 107015c3 AMasterServerClient::execStop

/* public: void __thiscall AMasterServerClient::execStop(struct FFrame &,void * const) */

void __thiscall
AMasterServerClient::execStop(AMasterServerClient *this,FFrame *param_1,void *param_2)

{
                    /* 0x15c3  316  ?execStop@AMasterServerClient@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int **)(this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x430) + 0xc))(1);
  }
  *(undefined4 *)(this + 0x430) = 0;
  return;
}


// ==== 107015cd thunk_FUN_10709200 thunk -> 10709200

// ==== 107015d2 AMasterServerUplink::operator_new

/* public: static void * __cdecl AMasterServerUplink::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
AMasterServerUplink::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x15d2  75  ??2AMasterServerUplink@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 107015d7 thunk_FUN_10709270 thunk -> 10709270

// ==== 107015e1 AInternetLink::execGameSpyValidate

/* public: void __thiscall AInternetLink::execGameSpyValidate(struct FFrame &,void * const) */

void __thiscall
AInternetLink::execGameSpyValidate(AInternetLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  FString aFStack_4c [12];
  char acStack_40 [12];
  char acStack_34 [8];
  undefined1 auStack_2c [16];
  ushort *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x15e1  292  ?execGameSpyValidate@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742969;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_4c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_4c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  thunk_FUN_10709930(acStack_34);
  puVar3 = auStack_2c;
  puStack_18 = puVar3;
  puVar2 = FString::operator*(aFStack_4c);
  for (; *puVar2 != 0; puVar2 = puVar2 + 1) {
    *puVar3 = (char)*puVar2;
    puVar3 = puVar3 + 1;
    puStack_18 = puVar3;
  }
  puStack_1c = puVar2;
  thunk_FUN_10709b50((int)auStack_2c,6,acStack_34);
  thunk_FUN_1070a0f0(auStack_2c,6,acStack_40);
  puVar2 = appFromAnsi(acStack_40,(ushort *)0x0);
  FString::operator=(param_2,puVar2);
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_4c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 107015e6 thunk_FUN_1070e110 thunk -> 1070e110

// ==== 107015eb ATcpLink::Tick

/* public: virtual int __thiscall ATcpLink::Tick(float,enum ELevelTick) */

int __thiscall ATcpLink::Tick(ATcpLink *this,float param_1,ELevelTick param_2)

{
  int iVar1;
  ATcpLink *pAVar2;
  fd_set fStack_12c;
  timeval tStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15eb  262  ?Tick@ATcpLink@@UAEHMW4ELevelTick@@@Z */
  puStack_c = &LAB_10743bb0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffec8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  param_2 = AInternetLink::Tick((AInternetLink *)this,param_1,param_2);
  pAVar2 = this + 0x3c0;
  if (*(SOCKET *)pAVar2 != 0xffffffff) {
    switch(this[0x3d8]) {
    case (ATcpLink)0x2:
      CheckConnectionQueue(this);
    case (ATcpLink)0x4:
      PollConnections(this);
      FlushSendBuffer(this);
      break;
    case (ATcpLink)0x3:
      CheckConnectionAttempt(this);
      PollConnections(this);
      break;
    case (ATcpLink)0x5:
    case (ATcpLink)0x6:
      PollConnections(this);
      iVar1 = FlushSendBuffer(this);
      if (iVar1 == 0) {
        ShutdownConnection(this);
      }
    }
  }
  switch(this[0x3d8]) {
  case (ATcpLink)0x2:
  case (ATcpLink)0x5:
  case (ATcpLink)0x7:
    break;
  default:
    ExceptionList = pvStack_10;
    return param_2;
  case (ATcpLink)0x4:
  case (ATcpLink)0x6:
  case (ATcpLink)0x8:
    goto switchD_10717bc3_caseD_4;
  }
  pAVar2 = this + 0x3c8;
switchD_10717bc3_caseD_4:
  if (*(SOCKET *)pAVar2 == 0xffffffff) {
    ExceptionList = pvStack_10;
    return param_2;
  }
  tStack_20.tv_sec = 0;
  tStack_20.tv_usec = 0;
  fStack_12c.fd_array[0] = *(SOCKET *)pAVar2;
  fStack_12c.fd_count = 1;
  iVar1 = select(*(SOCKET *)pAVar2 + 1,&fStack_12c,(fd_set *)0x0,(fd_set *)0x0,&tStack_20);
  if (iVar1 == -1) {
    ExceptionList = pvStack_10;
    return param_2;
  }
  if (iVar1 == 0) {
    ExceptionList = pvStack_10;
    return param_2;
  }
  ioctlsocket(*(SOCKET *)pAVar2,0x4004667f,(u_long *)&param_1);
  if (param_1 == 0.0) {
    if (this[0x3d8] != (ATcpLink)0x2) {
      this[0x3d8] = (ATcpLink)0x0;
    }
    closesocket(*(SOCKET *)pAVar2);
    *(SOCKET *)pAVar2 = 0xffffffff;
    eventClosed(this);
  }
  if (param_1 != -NAN) {
    ExceptionList = pvStack_10;
    return param_2;
  }
  iVar1 = WSAGetLastError();
  if (iVar1 == 0x2733) {
    ExceptionList = pvStack_10;
    return param_2;
  }
  if (this[0x3d8] != (ATcpLink)0x2) {
    this[0x3d8] = (ATcpLink)0x0;
  }
  closesocket(*(SOCKET *)pAVar2);
  *(SOCKET *)pAVar2 = 0xffffffff;
  eventClosed(this);
  ExceptionList = pvStack_10;
  return param_2;
}


// ==== 107015f0 FInternetLink::FInternetLink

/* public: __thiscall FInternetLink::FInternetLink(struct FSocketData) */

void __thiscall
FInternetLink::FInternetLink
          (FInternetLink *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
                    /* 0x15f0  28  ??0FInternetLink@@QAE@UFSocketData@@@Z */
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = param_6;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x18) = param_7;
  return;
}


// ==== 107015f5 FQueryData::FQueryData

/* public: __thiscall FQueryData::FQueryData(void) */

FQueryData * __thiscall FQueryData::FQueryData(FQueryData *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15f5  36  ??0FQueryData@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741e35;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701604 UTcpNetDriver::LowLevelDestroy

/* public: virtual void __thiscall UTcpNetDriver::LowLevelDestroy(void) */

void __thiscall UTcpNetDriver::LowLevelDestroy(UTcpNetDriver *this)

{
  int iVar1;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1604  197  ?LowLevelDestroy@UTcpNetDriver@@UAEXXZ */
  puStack_c = &LAB_10743cb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(SOCKET *)(this + 0xbc) != 0) {
    ExceptionList = &pvStack_10;
    iVar1 = closesocket(*(SOCKET *)(this + 0xbc));
    this_00 = extraout_ECX;
    if ((iVar1 != 0) && (*(int *)GLog_exref != 0)) {
      iVar1 = WSAGetLastError();
      FOutputDevice::Logf2
                ((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2fb,
                 L"WinSock closesocket error (%i)",iVar1);
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)(this + 0xbc) = 0;
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2fb,L"WinSock shut down");
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701609 UTcpNetDriver::UTcpNetDriver

/* public: __thiscall UTcpNetDriver::UTcpNetDriver(class UTcpNetDriver const &) */

UTcpNetDriver * __thiscall UTcpNetDriver::UTcpNetDriver(UTcpNetDriver *this,UTcpNetDriver *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1609  43  ??0UTcpNetDriver@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107433e9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UNetDriver::UNetDriver((UNetDriver *)this,(UNetDriver *)param_1);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701613 thunk_FUN_1071af40 thunk -> 1071af40

// ==== 10701618 thunk_FUN_1071b5d0 thunk -> 1071b5d0

// ==== 1070161d FQueryData::~FQueryData

/* public: __thiscall FQueryData::~FQueryData(void) */

void __thiscall FQueryData::~FQueryData(FQueryData *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x161d  62  ??1FQueryData@@QAE@XZ */
  puStack_8 = &LAB_10741e65;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0xc));
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701622 ATcpLink::eventOpened

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::eventOpened(void) */

void __thiscall ATcpLink::eventOpened(ATcpLink *this)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x1622  277  ?eventOpened@ATcpLink@@QAEXXZ */
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_Opened,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10701627 ATcpLink::~ATcpLink

/* public: virtual __thiscall ATcpLink::~ATcpLink(void) */

void __thiscall ATcpLink::~ATcpLink(ATcpLink *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1627  54  ??1ATcpLink@@UAE@XZ */
  puStack_8 = &LAB_10741a1f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(this + 1000));
  uStack_4 = 0xffffffff;
  AInternetLink::~AInternetLink((AInternetLink *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070162c thunk_FUN_107194f0 thunk -> 107194f0

// ==== 10701631 AServerQueryClient::delegateOnReceivedPingInfo

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AServerQueryClient::delegateOnReceivedPingInfo(int,unsigned char,struct
   FServerResponseLine) */

void __thiscall
AServerQueryClient::delegateOnReceivedPingInfo
          (AServerQueryClient *this,undefined4 param_1,undefined1 param_2)

{
  undefined4 uStack_74;
  undefined1 uStack_70;
  FServerResponseLine aFStack_6c [80];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1631  270
                       ?delegateOnReceivedPingInfo@AServerQueryClient@@QAEXHEUFServerResponseLine@@@Z
                        */
  puStack_8 = &LAB_107421a3;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FServerResponseLine::FServerResponseLine(aFStack_6c);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  uStack_70 = param_2;
  uStack_74 = param_1;
  FServerResponseLine::operator=(aFStack_6c,(FServerResponseLine *)&stack0x0000000c);
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnReceivedPingInfo,this + 0x420,&uStack_74);
  uStack_14 = uStack_14 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&stack0xffffff84);
  uStack_14 = 0xffffffff;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&uStack_4);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10701636 AInternetLink::InternalConstructor

/* public: static void __cdecl AInternetLink::InternalConstructor(void *) */

void __cdecl AInternetLink::InternalConstructor(void *param_1)

{
                    /* 0x1636  184  ?InternalConstructor@AInternetLink@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AInternetLink(param_1);
    return;
  }
  return;
}


// ==== 1070163b UTcpNetDriver::~UTcpNetDriver

/* public: virtual __thiscall UTcpNetDriver::~UTcpNetDriver(void) */

void __thiscall UTcpNetDriver::~UTcpNetDriver(UTcpNetDriver *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x163b  65  ??1UTcpNetDriver@@UAE@XZ */
  puStack_8 = &LAB_107433a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UNetDriver::~UNetDriver((UNetDriver *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701640 thunk_FUN_107078e0 thunk -> 107078e0

// ==== 1070164f AUdpLink::execReadBinary

/* public: void __thiscall AUdpLink::execReadBinary(struct FFrame &,void * const) */

void __thiscall AUdpLink::execReadBinary(AUdpLink *this,FFrame *param_1,void *param_2)

{
  AUdpLink *pAVar1;
  byte bVar2;
  u_long *puVar3;
  u_short uVar4;
  int iVar5;
  u_long uVar6;
  FOutputDevice *this_00;
  char *buf;
  char acStack_140 [256];
  sockaddr sStack_40;
  u_long auStack_2c [3];
  int iStack_20;
  u_long *puStack_1c;
  AUdpLink *pAStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x164f  306  ?execReadBinary@AUdpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743f80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffeb4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pAStack_18 = this;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,auStack_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puStack_1c = auStack_2c;
  }
  else {
    puStack_1c = *(u_long **)GPropAddr_exref;
  }
  iStack_20 = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,&iStack_20);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar2 * 4))(param_1,acStack_140);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    buf = acStack_140;
  }
  else {
    buf = *(char **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pAVar1 = pAStack_18 + 0x3c0;
  if (*(SOCKET *)pAVar1 != 0xffffffff) {
    pAStack_18 = (AUdpLink *)0x10;
    iVar5 = iStack_20;
    if (0xff < iStack_20) {
      iVar5 = 0xff;
    }
    iVar5 = recvfrom(*(SOCKET *)pAVar1,buf,iVar5,0,&sStack_40,(int *)&pAStack_18);
    if (iVar5 == -1) {
      *(undefined4 *)param_2 = 0;
      iVar5 = WSAGetLastError();
      if ((iVar5 != 0x2733) && (*(int *)GLog_exref != 0)) {
        FOutputDevice::Logf2
                  (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,L"ReadBinary: Error reading text.");
        ExceptionList = pvStack_10;
        return;
      }
    }
    else {
      uVar6 = ntohl(CONCAT22(sStack_40.sa_data._4_2_,sStack_40.sa_data._2_2_));
      puVar3 = puStack_1c;
      *puStack_1c = uVar6;
      uVar4 = ntohs(sStack_40.sa_data._0_2_);
      puVar3[1] = (uint)uVar4;
      *(int *)param_2 = iVar5;
    }
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701659 FTcpLink::Connect

/* public: virtual void __thiscall FTcpLink::Connect(struct FIpAddr) */

void __thiscall FTcpLink::Connect(FTcpLink *this,u_long param_2,u_short param_3)

{
  sockaddr *addr;
  undefined1 *puVar1;
  u_short uVar2;
  SOCKET SVar3;
  uint uVar4;
  int iVar5;
  sockaddr sStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1659  143  ?Connect@FTcpLink@@UAEXUFIpAddr@@@Z */
  puStack_c = &LAB_10742aa0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc8;
  if (*(int *)(this + 0x44) != 0) {
    ExceptionList = &pvStack_10;
    closesocket(*(SOCKET *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0xffffffff;
    *(undefined4 *)(this + 0x44) = 0;
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  addr = (sockaddr *)(this + 4);
  addr->sa_family = 2;
  SVar3 = socket(2,1,6);
  *(SOCKET *)(this + 0x18) = SVar3;
  if (SVar3 == 0xffffffff) {
    appFailAssert("SocketData.Socket != INVALID_SOCKET",".\\InternetLink.cpp",0x2a3);
  }
  thunk_FUN_1071b6e0(*(SOCKET *)(this + 0x18));
  addr->sa_family = 2;
  uVar4 = thunk_FUN_10703e30(*(ushort **)GWarn_exref);
  *(uint *)(this + 8) = uVar4;
  uVar2 = htons(0);
  *(u_short *)(this + 6) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  thunk_FUN_1071b710(*(SOCKET *)(this + 0x18),1);
  iVar5 = bind(*(SOCKET *)(this + 0x18),addr,0x10);
  if (iVar5 == -1) {
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                        L"Failed to bind connect socket");
  }
  FSocketData::UpdateFromSocket((FSocketData *)addr);
  sStack_2c.sa_family = 2;
  sStack_2c.sa_data._0_2_ = htons(param_3);
  sStack_2c.sa_data._2_4_ = htonl(param_2);
  iVar5 = connect(*(SOCKET *)(this + 0x18),&sStack_2c,0x10);
  if (iVar5 == -1) {
    iVar5 = WSAGetLastError();
    if (iVar5 != 0x2733) {
      iVar5 = WSAGetLastError();
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                          L"Connect() returned SOCKET_ERROR: %d",iVar5);
    }
  }
  *(undefined4 *)(this + 0x44) = 2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070165e thunk_FUN_10718f40 thunk -> 10718f40

// ==== 10701663 UTcpipConnection::UTcpipConnection

/* public: __thiscall UTcpipConnection::UTcpipConnection(unsigned int,class UNetDriver *,struct
   sockaddr_in,enum EConnectionState,int,class FURL const &) */

UTcpipConnection * __thiscall
UTcpipConnection::UTcpipConnection
          (UTcpipConnection *this,undefined4 param_1,UNetDriver *param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          FURL *param_10)

{
  ushort *puVar1;
  ushort *puVar2;
  char *cp;
  ulong uVar3;
  void *this_00;
  FOutputDevice *pFVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1663  47
                       ??0UTcpipConnection@@QAE@IPAVUNetDriver@@Usockaddr_in@@W4EConnectionState@@HABVFURL@@@Z
                        */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10743bd4;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  UNetConnection::UNetConnection((UNetConnection *)this,param_2,param_10);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  *(undefined ***)(this + 0x38) = vftable_for_FExec_;
  *(undefined4 *)(this + 0x3f1c) = param_4;
  *(undefined4 *)(this + 0x3f20) = param_5;
  *(undefined4 *)(this + 0x3f24) = param_6;
  *(undefined4 *)(this + 0x3f28) = param_7;
  *(undefined4 *)(this + 0x3f2c) = param_1;
  *(int *)(this + 0x3f30) = param_9;
  uStack_8 = 1;
  *(undefined4 *)(this + 0x78) = param_8;
  *(undefined4 *)(this + 200) = 0x200;
  *(undefined4 *)(this + 0xcc) = 0x20;
  UNetConnection::InitOut((UNetConnection *)this);
  if (param_9 != 0) {
    puVar1 = FString::operator*((FString *)(param_10 + 0xc));
    iVar5 = 0;
    while ((((iVar5 < 4 && (puVar1 != (ushort *)0x0)) && (0x2f < *puVar1)) && (*puVar1 < 0x3a))) {
      puVar1 = appStrchr(puVar1,0x2e);
      if (puVar1 != (ushort *)0x0) {
        puVar1 = puVar1 + 1;
      }
      iVar5 = iVar5 + 1;
    }
    if ((iVar5 == 4) && (puVar1 == (ushort *)0x0)) {
      puVar2 = FString::operator*((FString *)(param_10 + 0xc));
      cp = appToAnsi(puVar2,(char *)puVar1);
      uVar3 = inet_addr(cp);
      thunk_FUN_1071b5c0((undefined4 *)(this + 0x3f20),uVar3);
    }
    else {
      this_00 = (void *)thunk_FUN_107026d0(0x308);
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      if (this_00 == (void *)0x0) {
        pFVar4 = (FOutputDevice *)0x0;
      }
      else {
        puVar1 = FString::operator*((FString *)(param_10 + 0xc));
        pFVar4 = thunk_FUN_10703780(this_00,puVar1);
      }
      *(FOutputDevice **)(this + 0x3f34) = pFVar4;
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10701668 AMasterServerClient::delegateOnReceivedMOTDData

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AMasterServerClient::delegateOnReceivedMOTDData(unsigned char,class
   FString const &) */

void __thiscall
AMasterServerClient::delegateOnReceivedMOTDData
          (AMasterServerClient *this,uchar param_1,FString *param_2)

{
  void **ppvStack_28;
  void *pvStack_1c;
  FString aFStack_18 [4];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1668  269
                       ?delegateOnReceivedMOTDData@AMasterServerClient@@QAEXEABVFString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107421da;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(aFStack_18);
  uStack_4 = 1;
  pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,param_1);
  ppvStack_28 = (void **)0x10707404;
  FString::operator=(aFStack_18,param_2);
  ppvStack_28 = &pvStack_1c;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnReceivedMOTDData,this + 0x454);
  uStack_14 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_28);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10701677 FTcpLink::Recv

/* public: virtual int __thiscall FTcpLink::Recv(unsigned char *,int) */

int __thiscall FTcpLink::Recv(FTcpLink *this,uchar *param_1,int param_2)

{
  size_t _Size;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1677  233  ?Recv@FTcpLink@@UAEHPAEH@Z */
  puStack_c = &LAB_10742c20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  _Size = *(size_t *)(this + 0x20);
  if (param_2 <= (int)*(size_t *)(this + 0x20)) {
    _Size = param_2;
  }
  if ((int)_Size < 0) {
    _Size = 0;
    ExceptionList = &pvStack_10;
  }
  else {
    ExceptionList = &pvStack_10;
    if (_Size != 0) {
      ExceptionList = &pvStack_10;
      _memcpy(param_1,*(void **)(this + 0x1c),_Size);
    }
  }
  TArray<unsigned_char>::Remove((TArray<unsigned_char> *)(this + 0x1c),0,_Size);
  ExceptionList = pvStack_10;
  return _Size;
}


// ==== 1070167c ATcpLink::eventReceivedLine

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::eventReceivedLine(class FString const &) */

void __thiscall ATcpLink::eventReceivedLine(ATcpLink *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void **ppvVar3;
  void *apvStack_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x167c  280  ?eventReceivedLine@ATcpLink@@QAEXABVFString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074209a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)apvStack_18);
  uStack_4 = 1;
  FString::operator=((FString *)apvStack_18,param_1);
  iVar1 = *(int *)this;
  ppvVar3 = apvStack_18;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ReceivedLine,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,ppvVar3);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = apvStack_18[0];
  return;
}


// ==== 10701681 AMasterServerUplink::execReconnect

/* public: void __thiscall AMasterServerUplink::execReconnect(struct FFrame &,void * const) */

void __thiscall
AMasterServerUplink::execReconnect(AMasterServerUplink *this,FFrame *param_1,void *param_2)

{
  FTcpLink *pFVar1;
  undefined *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* 0x1681  309  ?execReconnect@AMasterServerUplink@@QAEXAAUFFrame@@QAX@Z */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_107438fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int **)(this + 0x3bc) == (int *)0x0) {
    puVar2 = &DAT_10749b4c;
    pvStack_4 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc4);
    pvStack_c = (void *)0x0;
    if (pvStack_4 == (void *)0x0) {
      pvStack_c = (void *)0xffffffff;
      *(undefined4 *)(this + 0x3bc) = 0;
    }
    else {
      pFVar1 = thunk_FUN_10712df0(pvStack_4,this);
      pvStack_c = (void *)0xffffffff;
      *(FTcpLink **)(this + 0x3bc) = pFVar1;
    }
  }
  else {
    puVar2 = (undefined *)0x0;
    (**(code **)(**(int **)(this + 0x3bc) + 0x3c))();
  }
  if (((byte)this[0x48c] & 2) != 0) {
    thunk_FUN_10712840(*(int **)(this + 0x3bc));
    ExceptionList = puVar2;
    return;
  }
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                      L"MasterServerUplink: DoUplink is False, not connecting to Epic master server"
                     );
  ExceptionList = puVar2;
  return;
}


// ==== 10701686 thunk_FUN_10703700 thunk -> 10703700

// ==== 1070168b UTcpNetDriver::UTcpNetDriver

/* public: __thiscall UTcpNetDriver::UTcpNetDriver(void) */

UTcpNetDriver * __thiscall UTcpNetDriver::UTcpNetDriver(UTcpNetDriver *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x168b  44  ??0UTcpNetDriver@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107433c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UNetDriver::UNetDriver((UNetDriver *)this);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701690 AMasterServerClient::~AMasterServerClient

/* public: virtual __thiscall AMasterServerClient::~AMasterServerClient(void) */

void __thiscall AMasterServerClient::~AMasterServerClient(AMasterServerClient *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1690  49  ??1AMasterServerClient@@UAE@XZ */
  puStack_8 = &LAB_1074276e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10708ba0((FArray *)(this + 0x434));
  uStack_4 = 0xffffffff;
  AServerQueryClient::~AServerQueryClient((AServerQueryClient *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070169a AMasterServerUplink::eventRefresh

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AMasterServerUplink::eventRefresh(void) */

void __thiscall AMasterServerUplink::eventRefresh(AMasterServerUplink *this)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x169a  284  ?eventRefresh@AMasterServerUplink@@QAEXXZ */
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_Refresh,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 1070169f thunk_FUN_1070e6c0 thunk -> 1070e6c0

// ==== 107016a4 AMasterServerUplink::eventConnectionFailed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AMasterServerUplink::eventConnectionFailed(unsigned long) */

void __thiscall AMasterServerUplink::eventConnectionFailed(AMasterServerUplink *this,ulong param_1)

{
  int iVar1;
  UFunction *pUVar2;
  ulong *puVar3;
  undefined4 uVar4;
  
                    /* 0x16a4  274  ?eventConnectionFailed@AMasterServerUplink@@QAEXK@Z */
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &param_1;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ConnectionFailed,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 107016a9 AUdpLink::eventReceivedText

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AUdpLink::eventReceivedText(struct FIpAddr,class FString const &) */

void __thiscall
AUdpLink::eventReceivedText(AUdpLink *this,undefined4 param_2,undefined4 param_3,FString *param_4)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *apvStack_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x16a9  283  ?eventReceivedText@AUdpLink@@QAEXUFIpAddr@@ABVFString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074206a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)apvStack_18);
  uStack_4 = 1;
  uStack_1c = param_3;
  uStack_20 = param_2;
  FString::operator=((FString *)apvStack_18,param_4);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &uStack_20;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ReceivedText,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = apvStack_18[0];
  return;
}


// ==== 107016ae UTcpNetDriver::operator_new

/* public: static void * __cdecl UTcpNetDriver::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTcpNetDriver::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x16ae  83  ??2UTcpNetDriver@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 107016b3 thunk_FUN_1070eae0 thunk -> 1070eae0

// ==== 107016bd thunk_FUN_10710a00 thunk -> 10710a00

// ==== 107016c7 AMasterServerGameStats::~AMasterServerGameStats

/* public: virtual __thiscall AMasterServerGameStats::~AMasterServerGameStats(void) */

void __thiscall AMasterServerGameStats::~AMasterServerGameStats(AMasterServerGameStats *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x16c7  50  ??1AMasterServerGameStats@@UAE@XZ */
  puStack_8 = &LAB_10741ae9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  AGameStats::~AGameStats((AGameStats *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 107016d1 ATcpLink::ATcpLink

/* public: __thiscall ATcpLink::ATcpLink(void) */

ATcpLink * __thiscall ATcpLink::ATcpLink(ATcpLink *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16d1  14  ??0ATcpLink@@QAE@XZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10743b0f;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  AInternetLink::AInternetLink((AInternetLink *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(this + 1000),0);
  this[0x3d8] = (ATcpLink)0x0;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 107016d6 thunk_FUN_10709510 thunk -> 10709510

// ==== 107016e0 thunk_FUN_10708ba0 thunk -> 10708ba0

// ==== 107016e5 FArchiveUdpReader::operator=

/* public: struct FArchiveUdpReader & __thiscall FArchiveUdpReader::operator=(struct
   FArchiveUdpReader const &) */

FArchiveUdpReader * __thiscall
FArchiveUdpReader::operator=(FArchiveUdpReader *this,FArchiveUdpReader *param_1)

{
                    /* 0x16e5  98  ??4FArchiveUdpReader@@QAEAAU0@ABU0@@Z */
  FArchive::operator=((FArchive *)this,(FArchive *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 107016ea AMasterServerUplink::Poll

/* public: virtual int __thiscall AMasterServerUplink::Poll(int) */

int __thiscall AMasterServerUplink::Poll(AMasterServerUplink *this,int param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16ea  211  ?Poll@AMasterServerUplink@@UAEHH@Z */
  puStack_c = &LAB_107434d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x3bc) != 0) {
    ExceptionList = &pvStack_10;
    iVar1 = (**(code **)(**(int **)(this + 0x3bc) + 0x2c))(param_1);
    ExceptionList = pvStack_10;
    return iVar1;
  }
  return 0;
}


// ==== 107016ef FUdpLink::Poll

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall FUdpLink::Poll(void) */

void __thiscall FUdpLink::Poll(FUdpLink *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char acStack_1038 [4096];
  FIpAddr aFStack_38 [12];
  sockaddr sStack_2c;
  int aiStack_1c [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16ef  214  ?Poll@FUdpLink@@UAEXXZ */
  puStack_c = &LAB_10742b40;
  pvStack_10 = ExceptionList;
  aiStack_1c[1] = 0x1070c933;
  puStack_14 = &stack0xffffefbc;
  uStack_8 = 0;
  aiStack_1c[0] = 0x10;
  ExceptionList = &pvStack_10;
  do {
    while (iVar2 = recvfrom(*(SOCKET *)(this + 0x18),acStack_1038,0x1000,0,&sStack_2c,aiStack_1c),
          iVar2 != -1) {
      if (iVar2 < 1) {
        ExceptionList = pvStack_10;
        return;
      }
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + iVar2;
      iVar1 = *(int *)this;
      puVar3 = (undefined4 *)
               FIpAddr::FIpAddr(aFStack_38,sStack_2c._0_4_,sStack_2c.sa_data._2_4_,
                                sStack_2c.sa_data._6_4_,sStack_2c.sa_data._10_4_);
      (**(code **)(iVar1 + 0x14))(*puVar3,puVar3[1],acStack_1038,iVar2);
    }
    iVar2 = WSAGetLastError();
    if (iVar2 == 0x2733) {
      ExceptionList = pvStack_10;
      return;
    }
    iVar2 = WSAGetLastError();
  } while (iVar2 == 0x2746);
  iVar2 = WSAGetLastError();
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                      L"RecvFrom returned SOCKET_ERROR %d",iVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 107016f4 thunk_FUN_1071b190 thunk -> 1071b190

// ==== 107016f9 thunk_FUN_10711ae0 thunk -> 10711ae0

// ==== 107016fe thunk_FUN_10712a80 thunk -> 10712a80

// ==== 10701703 AInternetLink::operator_new

/* public: static void * __cdecl AInternetLink::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AInternetLink::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1703  67  ??2AInternetLink@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10701708 UTcpNetDriver::StaticClass

/* public: static class UClass * __cdecl UTcpNetDriver::StaticClass(void) */

UClass * __cdecl UTcpNetDriver::StaticClass(void)

{
                    /* 0x1708  254  ?StaticClass@UTcpNetDriver@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10701712 thunk_FUN_107107c0 thunk -> 107107c0

// ==== 10701717 thunk_FUN_1070dea0 thunk -> 1070dea0

// ==== 1070171c thunk_FUN_10712b40 thunk -> 10712b40

// ==== 10701721 thunk_FUN_1070f000 thunk -> 1070f000

// ==== 10701726 AServerQueryClient::Poll

/* public: virtual int __thiscall AServerQueryClient::Poll(int) */

int __thiscall AServerQueryClient::Poll(AServerQueryClient *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1726  212  ?Poll@AServerQueryClient@@UAEHH@Z */
  puStack_c = &LAB_10742ce0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x3bc) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(this + 0x3bc) + 0xc))();
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1070172b thunk_FUN_1071b6e0 thunk -> 1071b6e0

// ==== 1070173a FArchiveUdpReader::Serialize

/* public: virtual void __thiscall FArchiveUdpReader::Serialize(void *,int) */

void __thiscall FArchiveUdpReader::Serialize(FArchiveUdpReader *this,void *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x173a  240  ?Serialize@FArchiveUdpReader@@UAEXPAXH@Z */
  puStack_c = &LAB_10742b70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x3c) < param_2) {
    *(undefined4 *)(this + 0x2c) = 1;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  else {
    ExceptionList = &pvStack_10;
    _memcpy(param_1,*(void **)(this + 0x38),param_2);
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + param_2;
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) - param_2;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070173f thunk_FUN_1070eeb0 thunk -> 1070eeb0

// ==== 10701744 thunk_FUN_10704c90 thunk -> 10704c90

// ==== 10701749 thunk_FUN_1070ec50 thunk -> 1070ec50

// ==== 10701753 AMasterServerLink::AMasterServerLink

/* public: __thiscall AMasterServerLink::AMasterServerLink(class AMasterServerLink const &) */

AMasterServerLink * __thiscall
AMasterServerLink::AMasterServerLink(AMasterServerLink *this,AMasterServerLink *param_1)

{
  code *pcVar1;
  code *pcVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1753  7  ??0AMasterServerLink@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741bc9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInfo::AInfo((AInfo *)this,(AInfo *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  pcVar1 = ~FStringNoInit_exref;
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  pcVar2 = FStringNoInit_exref;
  *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  _eh_vector_copy_constructor_iterator_(this + 0x3e0,param_1 + 0x3e0,0xc,5,pcVar2,pcVar1);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701758 ATcpLink::CheckConnectionAttempt

/* public: void __thiscall ATcpLink::CheckConnectionAttempt(void) */

void __thiscall ATcpLink::CheckConnectionAttempt(ATcpLink *this)

{
  int iVar1;
  FOutputDevice *this_00;
  fd_set fStack_12c;
  timeval tStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1758  139  ?CheckConnectionAttempt@ATcpLink@@QAEXXZ */
  puStack_c = &LAB_10743a70;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffec8;
  uStack_8 = 0;
  tStack_20.tv_sec = 0;
  tStack_20.tv_usec = 0;
  fStack_12c.fd_array[0] = *(SOCKET *)(this + 0x3c0);
  if (fStack_12c.fd_array[0] != 0xffffffff) {
    fStack_12c.fd_count = 1;
    ExceptionList = &pvStack_10;
    iVar1 = select(fStack_12c.fd_array[0] + 1,(fd_set *)0x0,&fStack_12c,(fd_set *)0x0,&tStack_20);
    if (iVar1 == -1) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,
                   L"CheckConnectionAttempt: Error while checking socket status.");
      }
    }
    else if (iVar1 != 0) {
      this[0x3d8] = (ATcpLink)0x4;
      eventOpened(this);
      ExceptionList = pvStack_10;
      return;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070175d AMasterServerLink::operator_new

/* public: static void * __cdecl AMasterServerLink::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AMasterServerLink::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x175d  73  ??2AMasterServerLink@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10701762 FTcpLink::InternalDataAvailable

/* protected: virtual int __thiscall FTcpLink::InternalDataAvailable(void) */

int __thiscall FTcpLink::InternalDataAvailable(FTcpLink *this)

{
                    /* 0x1762  194  ?InternalDataAvailable@FTcpLink@@MAEHXZ */
  return *(int *)(this + 0x20);
}


// ==== 10701767 AMasterServerLink::Poll

/* public: virtual int __thiscall AMasterServerLink::Poll(int) */

int __thiscall AMasterServerLink::Poll(AMasterServerLink *this,int param_1)

{
                    /* 0x1767  210  ?Poll@AMasterServerLink@@UAEHH@Z */
  return 0;
}


// ==== 10701771 FUdpLink::operator=

/* public: class FUdpLink & __thiscall FUdpLink::operator=(class FUdpLink const &) */

FUdpLink * __thiscall FUdpLink::operator=(FUdpLink *this,FUdpLink *param_1)

{
                    /* 0x1771  106  ??4FUdpLink@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return this;
}


// ==== 10701776 thunk_FUN_1071b580 thunk -> 1071b580

// ==== 1070177b thunk_FUN_107138d0 thunk -> 107138d0

// ==== 10701780 FArchiveUdpReader::~FArchiveUdpReader

/* public: virtual __thiscall FArchiveUdpReader::~FArchiveUdpReader(void) */

void __thiscall FArchiveUdpReader::~FArchiveUdpReader(FArchiveUdpReader *this)

{
                    /* 0x1780  59  ??1FArchiveUdpReader@@UAE@XZ */
  *(code **)this = _vftable__exref;
  return;
}


// ==== 1070178a thunk_FUN_10709b50 thunk -> 10709b50

// ==== 1070178f FTcpLink::WaitForConnections

/* public: virtual void __thiscall FTcpLink::WaitForConnections(int) */

void __thiscall FTcpLink::WaitForConnections(FTcpLink *this,int param_1)

{
  int iVar1;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar2;
  wchar_t *pwVar3;
  fd_set fStack_144;
  sockaddr sStack_38;
  undefined4 uStack_28;
  SOCKET SStack_24;
  timeval tStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x178f  266  ?WaitForConnections@FTcpLink@@UAEXH@Z */
  puStack_c = &LAB_10742a40;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffeb0;
  uStack_8 = 0;
  tStack_20.tv_sec = param_1;
  tStack_20.tv_usec = 0;
  fStack_144.fd_array[0] = *(SOCKET *)(this + 0x18);
  fStack_144.fd_count = 1;
  ExceptionList = &pvStack_10;
  iVar1 = select(fStack_144.fd_array[0] + 1,&fStack_144,(fd_set *)0x0,(fd_set *)0x0,&tStack_20);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    pwVar3 = L"!! Error checking socket status: %i";
    this_00 = *(FOutputDevice **)GWarn_exref;
    pFVar2 = this_00;
  }
  else {
    if (iVar1 == 0) {
      ExceptionList = pvStack_10;
      return;
    }
    param_1 = 0x10;
    SStack_24 = accept(*(SOCKET *)(this + 0x18),&sStack_38,&param_1);
    if (SStack_24 != 0xffffffff) {
      (**(code **)(*(int *)this + 0x4c))
                (sStack_38._0_4_,sStack_38.sa_data._2_4_,sStack_38.sa_data._6_4_,
                 sStack_38.sa_data._10_4_,uStack_28,SStack_24);
      ExceptionList = pvStack_10;
      return;
    }
    iVar1 = WSAGetLastError();
    pwVar3 = L"!! Failed to accept queued connection: %i";
    pFVar2 = *(FOutputDevice **)GWarn_exref;
    this_00 = extraout_ECX;
  }
  FOutputDevice::Logf(this_00,(ushort *)pFVar2,pwVar3,iVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701794 UTcpNetDriver::InitBase

/* public: int __thiscall UTcpNetDriver::InitBase(int,class FNetworkNotify *,class FURL &,class
   FString &) */

int __thiscall
UTcpNetDriver::InitBase
          (UTcpNetDriver *this,int param_1,FNetworkNotify *param_2,FURL *param_3,FString *param_4)

{
  bool bVar1;
  u_short uVar2;
  u_short uVar3;
  int iVar4;
  SOCKET s;
  wchar_t *pwVar5;
  FString *pFVar6;
  uint uVar7;
  ushort *puVar8;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  FOutputDevice *this_00;
  int iVar9;
  FURL *pFVar10;
  FString aFStack_38 [20];
  char acStack_24 [4];
  FOutputDevice *pFStack_20;
  FOutputDevice *pFStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1794  181
                       ?InitBase@UTcpNetDriver@@QAEHHPAVFNetworkNotify@@AAVFURL@@AAVFString@@@Z */
  puStack_c = &LAB_10743ce4;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  iVar9 = 0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar4 = thunk_FUN_1071af40();
  if (iVar4 != 0) {
    s = socket(2,2,0x11);
    *(SOCKET *)(this + 0xbc) = s;
    if (s == 0xffffffff) {
      *(undefined4 *)(this + 0xbc) = 0;
      pwVar5 = thunk_FUN_1071b190(-1);
      pFVar6 = (FString *)
               FString::Printf((ushort *)aFStack_38,L"WinSock: socket failed (%i)",pwVar5);
      iStack_8._0_1_ = 1;
    }
    else {
      acStack_24[0] = '\x01';
      acStack_24[1] = '\0';
      acStack_24[2] = '\0';
      acStack_24[3] = '\0';
      iVar4 = setsockopt(s,0xffff,0x20,acStack_24,4);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_1071b710(*(SOCKET *)(this + 0xbc),1);
        if ((iVar4 != 0) && (*(int *)GLog_exref != 0)) {
          FOutputDevice::Logf2
                    (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                     L"setsockopt with SO_REUSEADDR failed");
        }
        iVar4 = thunk_FUN_1071b780();
        if ((iVar4 != 0) && (*(int *)GLog_exref != 0)) {
          FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref,L"setsockopt with IP_RECVERR failed");
        }
        pFStack_20 = (FOutputDevice *)((-(uint)(param_1 != 0) & 0xfffe8000) + 0x20000);
        iStack_18 = 4;
        pFStack_1c = pFStack_20;
        setsockopt(*(SOCKET *)(this + 0xbc),0xffff,0x1002,(char *)&pFStack_20,4);
        getsockopt(*(SOCKET *)(this + 0xbc),0xffff,0x1002,(char *)&pFStack_20,&iStack_18);
        setsockopt(*(SOCKET *)(this + 0xbc),0xffff,0x1001,(char *)&pFStack_1c,iStack_18);
        getsockopt(*(SOCKET *)(this + 0xbc),0xffff,0x1001,(char *)&pFStack_1c,&iStack_18);
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2
                    (pFStack_1c,*(EName *)GLog_exref,(ushort *)0x2fa,L"%s: Socket queue %i / %i",
                     L"WinSock",pFStack_20,pFStack_1c);
        }
        ((sockaddr *)(this + 0xac))->sa_family = 2;
        uVar7 = thunk_FUN_10703e30(*(ushort **)GLog_exref);
        *(uint *)(this + 0xb0) = uVar7;
        *(undefined2 *)(this + 0xae) = 0;
        if (param_1 == 0) {
          pwVar5 = L"PORT=";
          pFVar10 = param_3 + 0x18;
          puVar8 = appCmdLine();
          iVar9 = Parse(puVar8,(ushort *)pwVar5,(int *)pFVar10);
          uVar2 = htons(*(u_short *)(param_3 + 0x18));
          *(u_short *)(this + 0xae) = uVar2;
        }
        uVar2 = ntohs(*(u_short *)(this + 0xae));
        uVar3 = thunk_FUN_10703930(*(SOCKET *)(this + 0xbc),(sockaddr *)(this + 0xac),
                                   (-(uint)(iVar9 != 0) & 0xffffffed) + 0x14,1);
        if (CONCAT22(extraout_var_00,uVar3) == 0) {
          pwVar5 = thunk_FUN_1071b190(-1);
          pFVar6 = (FString *)
                   FString::Printf((ushort *)aFStack_38,L"%s: binding to port %i failed (%i)",
                                   L"WinSock",(uint)uVar2,pwVar5);
          iStack_8._0_1_ = 3;
        }
        else {
          bVar1 = thunk_FUN_1071b6e0(*(SOCKET *)(this + 0xbc));
          if (CONCAT31(extraout_var,bVar1) != 0) {
            ExceptionList = pvStack_10;
            return 1;
          }
          pwVar5 = thunk_FUN_1071b190(-1);
          pFVar6 = (FString *)
                   FString::Printf((ushort *)aFStack_38,L"%s: SetNonBlocking failed (%i)",L"WinSock"
                                   ,pwVar5);
          iStack_8._0_1_ = 4;
        }
      }
      else {
        pwVar5 = thunk_FUN_1071b190(-1);
        pFVar6 = (FString *)
                 FString::Printf((ushort *)aFStack_38,L"%s: setsockopt SO_BROADCAST failed (%i)",
                                 L"WinSock",pwVar5);
        iStack_8._0_1_ = 2;
      }
    }
    FString::operator=(param_4,pFVar6);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_38);
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1070179e FIpAddr::GetString

/* public: class FString __thiscall FIpAddr::GetString(int) */

int __thiscall FIpAddr::GetString(FIpAddr *this,int param_1)

{
  u_long uVar1;
  int iVar2;
  int in_stack_00000008;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x179e  158  ?GetString@FIpAddr@@QAE?AVFString@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074402a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = htonl(*(u_long *)this);
  if (in_stack_00000008 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 4);
  }
  thunk_FUN_1071b5d0((FString *)param_1,uVar1,iVar2);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 107017a3 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,struct FQueryData &) */

FArchive * __cdecl operator<<(FArchive *param_1,FQueryData *param_2)

{
  FArchive *pFVar1;
  FQueryData *pFVar2;
  
                    /* 0x17a3  111  ??6@YAAAVFArchive@@AAV0@AAUFQueryData@@@Z */
  pFVar2 = param_2 + 0xc;
  pFVar1 = operator<<(param_1,(FString *)param_2);
  pFVar1 = operator<<(pFVar1,(FString *)pFVar2);
  (**(code **)(*(int *)pFVar1 + 4))(param_2 + 0x18,1);
  return pFVar1;
}


// ==== 107017a8 AServerQueryClient::StaticClass

/* public: static class UClass * __cdecl AServerQueryClient::StaticClass(void) */

UClass * __cdecl AServerQueryClient::StaticClass(void)

{
                    /* 0x17a8  251  ?StaticClass@AServerQueryClient@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 107017b2 thunk_FUN_1070e210 thunk -> 1070e210

// ==== 107017b7 thunk_FUN_10713490 thunk -> 10713490

// ==== 107017bc thunk_FUN_10712c10 thunk -> 10712c10

// ==== 107017c1 thunk_FUN_10713ae0 thunk -> 10713ae0

// ==== 107017c6 AServerQueryClient::AServerQueryClient

/* public: __thiscall AServerQueryClient::AServerQueryClient(void) */

AServerQueryClient * __thiscall AServerQueryClient::AServerQueryClient(AServerQueryClient *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x17c6  12  ??0AServerQueryClient@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741da8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AMasterServerLink::AMasterServerLink((AMasterServerLink *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107017cb thunk_FUN_10715780 thunk -> 10715780

// ==== 107017d0 FArchiveUdpWriter::~FArchiveUdpWriter

/* public: virtual __thiscall FArchiveUdpWriter::~FArchiveUdpWriter(void) */

void __thiscall FArchiveUdpWriter::~FArchiveUdpWriter(FArchiveUdpWriter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x17d0  60  ??1FArchiveUdpWriter@@UAE@XZ */
  puStack_8 = &LAB_10741825;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x44));
  *(code **)this = _vftable__exref;
  ExceptionList = pvStack_c;
  return;
}


// ==== 107017da thunk_FUN_10706050 thunk -> 10706050

// ==== 107017e9 thunk_FUN_1070e8d0 thunk -> 1070e8d0

// ==== 107017ee thunk_FUN_10710820 thunk -> 10710820

// ==== 107017f3 UTcpipConnection::LowLevelGetRemoteAddress

/* public: virtual class FString __thiscall UTcpipConnection::LowLevelGetRemoteAddress(void) */

FString * __thiscall UTcpipConnection::LowLevelGetRemoteAddress(UTcpipConnection *this)

{
  u_short uVar1;
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17f3  199  ?LowLevelGetRemoteAddress@UTcpipConnection@@UAE?AVFString@@XZ */
  puStack_c = &LAB_10743c2a;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  uVar1 = ntohs(*(u_short *)(this + 0x3f1e));
  thunk_FUN_1071b5d0(in_stack_00000004,*(uint *)(this + 0x3f20),(uint)uVar1);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 107017f8 FMD5UpdateData::FMD5UpdateData

/* public: __thiscall FMD5UpdateData::FMD5UpdateData(struct FMD5UpdateData const &) */

FMD5UpdateData * __thiscall
FMD5UpdateData::FMD5UpdateData(FMD5UpdateData *this,FMD5UpdateData *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x17f8  33  ??0FMD5UpdateData@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741c95;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107017fd thunk_FUN_10708a30 thunk -> 10708a30

// ==== 10701802 thunk_FUN_107066b0 thunk -> 107066b0

// ==== 10701807 thunk_FUN_10713640 thunk -> 10713640

// ==== 1070180c thunk_FUN_107088c0 thunk -> 107088c0

// ==== 10701811 FArchiveTcpWriter::FArchiveTcpWriter

/* public: __thiscall FArchiveTcpWriter::FArchiveTcpWriter(struct FArchiveTcpWriter const &) */

FArchiveTcpWriter * __thiscall
FArchiveTcpWriter::FArchiveTcpWriter(FArchiveTcpWriter *this,FArchiveTcpWriter *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1811  21  ??0FArchiveTcpWriter@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741774;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchiveTcpSocket::FArchiveTcpSocket((FArchiveTcpSocket *)this,(FArchiveTcpSocket *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(this + 0x3c),(TArray<unsigned_char> *)(param_1 + 0x3c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701816 ATcpLink::eventAccepted

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::eventAccepted(void) */

void __thiscall ATcpLink::eventAccepted(ATcpLink *this)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x1816  272  ?eventAccepted@ATcpLink@@QAEXXZ */
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)this;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_Accepted,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10701820 FArchiveTcpWriter::Flush

/* public: virtual void __thiscall FArchiveTcpWriter::Flush(void) */

void __thiscall FArchiveTcpWriter::Flush(FArchiveTcpWriter *this)

{
  TArray<unsigned_char> *this_00;
  
                    /* 0x1820  149  ?Flush@FArchiveTcpWriter@@UAEXXZ */
  if (4 < *(uint *)(this + 0x40)) {
    this_00 = (TArray<unsigned_char> *)(this + 0x3c);
    **(int **)(this + 0x3c) = *(uint *)(this + 0x40) - 4;
    (**(code **)(**(int **)(this + 0x38) + 0x10))
              (*(undefined4 *)this_00,*(undefined4 *)(this + 0x40));
    TArray<unsigned_char>::Empty(this_00,0);
    FArray::Add((FArray *)this_00,4,1);
  }
  return;
}


// ==== 10701825 thunk_FUN_10708c10 thunk -> 10708c10

// ==== 1070182a thunk_FUN_10714670 thunk -> 10714670

// ==== 1070182f FUdpLink::FUdpLink

/* public: __thiscall FUdpLink::FUdpLink(struct FSocketData) */

void __thiscall
FUdpLink::FUdpLink(FUdpLink *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
                    /* 0x182f  41  ??0FUdpLink@@QAE@UFSocketData@@@Z */
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = param_6;
  *(undefined4 *)(this + 0x18) = param_7;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


// ==== 10701834 thunk_FUN_10706410 thunk -> 10706410

// ==== 10701839 AInternetLink::GetResolveInfo

/* public: class FResolveInfo * & __thiscall AInternetLink::GetResolveInfo(void) */

FResolveInfo ** __thiscall AInternetLink::GetResolveInfo(AInternetLink *this)

{
                    /* 0x1839  152  ?GetResolveInfo@AInternetLink@@QAEAAPAVFResolveInfo@@XZ */
  return (FResolveInfo **)(this + 0x3cc);
}


// ==== 1070183e thunk_FUN_1070e1a0 thunk -> 1070e1a0

// ==== 10701843 AUdpLink::~AUdpLink

/* public: virtual __thiscall AUdpLink::~AUdpLink(void) */

void __thiscall AUdpLink::~AUdpLink(AUdpLink *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1843  55  ??1AUdpLink@@UAE@XZ */
  puStack_8 = &LAB_10741948;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  AInternetLink::~AInternetLink((AInternetLink *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10701852 thunk_FUN_107026d0 thunk -> 107026d0

// ==== 10701857 thunk_FUN_10708790 thunk -> 10708790

// ==== 1070185c AMasterServerUplink::AMasterServerUplink

/* public: __thiscall AMasterServerUplink::AMasterServerUplink(class AMasterServerUplink const &) */

AMasterServerUplink * __thiscall
AMasterServerUplink::AMasterServerUplink(AMasterServerUplink *this,AMasterServerUplink *param_1)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x185c  9  ??0AMasterServerUplink@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741d27;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AMasterServerLink::AMasterServerLink((AMasterServerLink *)this,(AMasterServerLink *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FServerResponseLine::FServerResponseLine
            ((FServerResponseLine *)(this + 0x41c),(FServerResponseLine *)(param_1 + 0x41c));
  *(undefined4 *)(this + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(this + 0x480) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)(this + 0x484) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)(this + 0x488) = *(undefined4 *)(param_1 + 0x488);
  *(uint *)(this + 0x48c) =
       *(uint *)(this + 0x48c) ^ (*(uint *)(this + 0x48c) ^ *(uint *)(param_1 + 0x48c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ *(uint *)(this + 0x48c)) & 2 ^ *(uint *)(this + 0x48c);
  *(uint *)(this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x48c) = uVar1;
  *(uint *)(this + 0x48c) = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x20 ^ uVar1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1070186b thunk_FUN_10713a70 thunk -> 10713a70

// ==== 10701870 AUdpLink::execBindPort

/* public: void __thiscall AUdpLink::execBindPort(struct FFrame &,void * const) */

void __thiscall AUdpLink::execBindPort(AUdpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  u_short uVar3;
  SOCKET s;
  int iVar4;
  uint uVar5;
  undefined2 extraout_var;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *extraout_ECX_02;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *pFVar6;
  wchar_t *pwVar7;
  sockaddr sStack_38;
  u_long uStack_20;
  char acStack_1c [4];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1870  288  ?execBindPort@AUdpLink@@QAEXAAUFFrame@@QAX@Z */
  pFVar2 = param_1;
  puStack_c = &LAB_10743ef0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  uStack_8 = 0;
  uStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  pFVar6 = extraout_ECX;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(pFVar2,0);
    pFVar6 = extraout_ECX_00;
  }
  if (DAT_1076a3f8 == 0) {
    pwVar7 = L"BindPort: winsock failed";
LAB_1071a131:
    FOutputDevice::Logf(pFVar6,(ushort *)pFVar2,pwVar7);
    *(undefined4 *)param_2 = 0;
    ExceptionList = pvStack_10;
    return;
  }
  if (*(int *)(this + 0x3c0) != -1) {
    pwVar7 = L"BindPort: already bound";
    goto LAB_1071a131;
  }
  s = socket(2,2,0x11);
  *(SOCKET *)(this + 0x3c0) = s;
  if (s == 0xffffffff) {
    pwVar7 = L"BindPort: socket failed";
    pFVar6 = extraout_ECX_01;
  }
  else {
    acStack_1c[0] = '\x01';
    acStack_1c[1] = '\0';
    acStack_1c[2] = '\0';
    acStack_1c[3] = '\0';
    iVar4 = setsockopt(s,0xffff,0x20,acStack_1c,4);
    if (iVar4 == 0) {
      sStack_38.sa_family = 2;
      uVar5 = thunk_FUN_10703e30((ushort *)pFVar2);
      sStack_38.sa_data._2_2_ = SUB42(uVar5,0);
      sStack_38.sa_data._4_2_ = SUB42(uVar5 >> 0x10,0);
      sStack_38.sa_data._0_2_ = htons((u_short)uStack_18);
      uVar3 = thunk_FUN_10703930(*(SOCKET *)(this + 0x3c0),&sStack_38,
                                 (-(uint)(param_1 != (FFrame *)0x0) & 0x13) + 1,1);
      if (CONCAT22(extraout_var,uVar3) == 0) {
        FOutputDevice::Logf(this_00,(ushort *)pFVar2,L"BindPort: bind failed");
      }
      else {
        uStack_20 = 1;
        iVar4 = ioctlsocket(*(SOCKET *)(this + 0x3c0),-0x7ffb9982,&uStack_20);
        if (iVar4 == 0) {
          *(int *)param_2 = CONCAT22(extraout_var,uVar3);
          uVar3 = ntohs(sStack_38.sa_data._0_2_);
          *(uint *)(this + 0x3c4) = (uint)uVar3;
          ExceptionList = pvStack_10;
          return;
        }
        FOutputDevice::Logf(this_01,(ushort *)pFVar2,L"BindPort: ioctlsocket failed");
      }
      goto LAB_1071a0f4;
    }
    pwVar7 = L"BindPort: setsockopt failed";
    pFVar6 = extraout_ECX_02;
  }
  FOutputDevice::Logf(pFVar6,(ushort *)pFVar2,pwVar7);
LAB_1071a0f4:
  closesocket(*(SOCKET *)(this + 0x3c0));
  *(undefined4 *)(this + 0x3c0) = 0;
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701875 FUdpLink::SendTo

/* public: virtual int __thiscall FUdpLink::SendTo(struct FIpAddr,unsigned char *,int) */

int __thiscall FUdpLink::SendTo(FUdpLink *this,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  FString *this_00;
  int iVar3;
  ushort *puVar4;
  FOutputDevice *this_01;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1875  237  ?SendTo@FUdpLink@@UAEHUFIpAddr@@PAEH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742b29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FIpAddr::GetSockAddr((FIpAddr *)&param_2);
  iVar1 = param_4;
  iVar2 = sendto(*(SOCKET *)(this + 0x18),param_3,param_4,0,(sockaddr *)auStack_20,0x10);
  if (iVar2 < 0) {
    uVar6 = 1;
    this_00 = (FString *)FIpAddr::GetString((FIpAddr *)&stack0x00000000,(int)&stack0xffffffd4);
    pvStack_c = (void *)0x0;
    iVar3 = WSAGetLastError();
    iVar5 = iVar2;
    puVar4 = FString::operator*(this_00);
    FOutputDevice::Logf(this_01,*(ushort **)GWarn_exref,L"SendTo: %s returned %d: %d",puVar4,iVar5,
                        iVar3,uVar6);
    pvStack_c = (void *)0xffffffff;
    FString::~FString((FString *)&stack0xffffffd0);
  }
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar1;
  ExceptionList = (void *)auStack_20._12_4_;
  return iVar2;
}


// ==== 1070187a AUdpLink::operator=

/* public: class AUdpLink & __thiscall AUdpLink::operator=(class AUdpLink const &) */

AUdpLink * __thiscall AUdpLink::operator=(AUdpLink *this,AUdpLink *param_1)

{
                    /* 0x187a  94  ??4AUdpLink@@QAEAAV0@ABV0@@Z */
  AInternetLink::operator=((AInternetLink *)this,(AInternetLink *)param_1);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  return this;
}


// ==== 1070187f FArchiveTcpSocket::SetArVer

/* public: void __thiscall FArchiveTcpSocket::SetArVer(int) */

void __thiscall FArchiveTcpSocket::SetArVer(FArchiveTcpSocket *this,int param_1)

{
                    /* 0x187f  242  ?SetArVer@FArchiveTcpSocket@@QAEXH@Z */
  *(int *)(this + 4) = param_1;
  *(uint *)(this + 8) = param_1 | 0x80000000;
  return;
}


// ==== 10701884 AUdpLink::eventReceivedLine

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AUdpLink::eventReceivedLine(struct FIpAddr,class FString const &) */

void __thiscall
AUdpLink::eventReceivedLine(AUdpLink *this,undefined4 param_2,undefined4 param_3,FString *param_4)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *apvStack_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1884  281  ?eventReceivedLine@AUdpLink@@QAEXUFIpAddr@@ABVFString@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074203a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)apvStack_18);
  uStack_4 = 1;
  uStack_1c = param_3;
  uStack_20 = param_2;
  FString::operator=((FString *)apvStack_18,param_4);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &uStack_20;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ReceivedLine,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = apvStack_18[0];
  return;
}


// ==== 10701889 AMasterServerClient::AMasterServerClient

/* public: __thiscall AMasterServerClient::AMasterServerClient(void) */

AMasterServerClient * __thiscall AMasterServerClient::AMasterServerClient(AMasterServerClient *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1889  4  ??0AMasterServerClient@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107427bf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AMasterServerLink::AMasterServerLink((AMasterServerLink *)this);
  *(undefined ***)this = AServerQueryClient::vftable;
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1070188e FTcpLink::Resolve

/* public: virtual void __thiscall FTcpLink::Resolve(unsigned short const *) */

void __thiscall FTcpLink::Resolve(FTcpLink *this,ushort *param_1)

{
  void *this_00;
  FOutputDevice *pFVar1;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x188e  234  ?Resolve@FTcpLink@@UAEXPBG@Z */
  puStack_c = &LAB_10742a8b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FIpAddr::FIpAddr((FIpAddr *)&iStack_24,param_1,0);
  if (iStack_24 == -1) {
    this_00 = (void *)thunk_FUN_107026d0(0x308);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (this_00 == (void *)0x0) {
      *(undefined4 *)(this + 0x34) = 0;
    }
    else {
      pFVar1 = thunk_FUN_10703780(this_00,param_1);
      *(FOutputDevice **)(this + 0x34) = pFVar1;
    }
  }
  else {
    (**(code **)(*(int *)this + 0x44))(iStack_24,uStack_20);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701898 AServerQueryClient::operator_new

/* public: static void * __cdecl AServerQueryClient::operator new(unsigned int,enum EInternal *) */

void * __cdecl AServerQueryClient::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1898  78  ??2AServerQueryClient@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1070189d thunk_FUN_107063e0 thunk -> 107063e0

// ==== 107018a2 FTcpLink::SetLinkMode

/* public: virtual void __thiscall FTcpLink::SetLinkMode(enum ETcpLinkMode) */

void __thiscall FTcpLink::SetLinkMode(FTcpLink *this,ETcpLinkMode param_1)

{
  FArchiveTcpWriter *this_00;
  undefined4 uVar1;
  FArchiveTcpReader *this_01;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18a2  243  ?SetLinkMode@FTcpLink@@UAEXW4ETcpLinkMode@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742cc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(ETcpLinkMode *)(this + 0x48) = param_1;
  if (param_1 == 1) {
    if (*(int *)(this + 0x4c) == 0) {
      this_00 = (FArchiveTcpWriter *)(**(code **)**(undefined4 **)GMalloc_exref)(0x48,&DAT_10749b4c)
      ;
      uStack_4 = 0;
      if (this_00 == (FArchiveTcpWriter *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FArchiveTcpWriter::FArchiveTcpWriter(this_00,this);
      }
      *(undefined4 *)(this + 0x4c) = uVar1;
    }
    uStack_4 = 0xffffffff;
    if (*(int *)(this + 0x50) == 0) {
      this_01 = (FArchiveTcpReader *)(**(code **)**(undefined4 **)GMalloc_exref)(0x4c,&DAT_10749b4c)
      ;
      uStack_4 = 1;
      if (this_01 == (FArchiveTcpReader *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FArchiveTcpReader::FArchiveTcpReader(this_01,this);
      }
      *(undefined4 *)(this + 0x50) = uVar1;
    }
  }
  else {
    if (*(undefined4 **)(this + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x4c))(1);
      *(undefined4 *)(this + 0x4c) = 0;
    }
    if (*(undefined4 **)(this + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x50))(1);
      *(undefined4 *)(this + 0x50) = 0;
      ExceptionList = unaff_ESI;
      return;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 107018a7 FArchiveTcpWriter::Serialize

/* public: virtual void __thiscall FArchiveTcpWriter::Serialize(void *,int) */

void __thiscall FArchiveTcpWriter::Serialize(FArchiveTcpWriter *this,void *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x18a7  239  ?Serialize@FArchiveTcpWriter@@UAEXPAXH@Z */
  iVar1 = FArray::Add((FArray *)(this + 0x3c),param_2,1);
  _memcpy((void *)(*(int *)(this + 0x3c) + iVar1),param_1,param_2);
  return;
}


// ==== 107018b1 FArchiveTcpReader::FArchiveTcpReader

/* public: __thiscall FArchiveTcpReader::FArchiveTcpReader(struct FArchiveTcpReader const &) */

FArchiveTcpReader * __thiscall
FArchiveTcpReader::FArchiveTcpReader(FArchiveTcpReader *this,FArchiveTcpReader *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18b1  17  ??0FArchiveTcpReader@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742703;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchiveTcpSocket::FArchiveTcpSocket((FArchiveTcpSocket *)this,(FArchiveTcpSocket *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_107084c0(this + 0x3c,(int *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107018b6 UTcpipConnection::LowLevelSend

/* public: virtual void __thiscall UTcpipConnection::LowLevelSend(void *,int) */

void __thiscall UTcpipConnection::LowLevelSend(UTcpipConnection *this,void *param_1,int param_2)

{
  FOutputDevice *this_00;
  uint *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  FString *this_01;
  ushort *puVar4;
  undefined4 uVar5;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x18b6  200  ?LowLevelSend@UTcpipConnection@@UAEXPAXH@Z */
  puStack_c = &LAB_10743bf9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  puVar1 = *(uint **)(this + 0x3f34);
  ExceptionList = &pvStack_10;
  puVar3 = &stack0xffffffcc;
  if (puVar1 == (uint *)0x0) {
LAB_107180e2:
    puStack_14 = puVar3;
    uVar2 = rdtsc();
    *(int *)(*(int *)(this + 0x74) + 0x8c) = *(int *)(*(int *)(this + 0x74) + 0x8c) - (int)uVar2;
    sendto(*(SOCKET *)(this + 0x3f2c),param_1,param_2,0,(sockaddr *)(this + 0x3f1c),0x10);
    uVar2 = rdtsc();
    *(int *)(*(int *)(this + 0x74) + 0x8c) =
         *(int *)(*(int *)(this + 0x74) + 0x8c) + (int)uVar2 + -0xc;
    ExceptionList = pvStack_10;
    return;
  }
  if (puVar1[1] == 0) {
    if (((short)puVar1[0x42] == 0) || (puVar1 + 0x42 == (uint *)0x0)) {
      ExceptionList = &pvStack_10;
      *(uint *)(this + 0x3f20) = *puVar1;
      puVar3 = &stack0xffffffcc;
      if (*(int *)GLog_exref != 0) {
        this_01 = thunk_FUN_1071b5d0(aFStack_28,*puVar1,0);
        iStack_8._0_1_ = 1;
        puVar4 = FString::operator*(this_01);
        uVar5 = thunk_FUN_10703910(*(int *)(this + 0x3f34));
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Resolved %s (%s)",uVar5,puVar4);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_28);
        puVar3 = puStack_14;
      }
      puStack_14 = puVar3;
      thunk_FUN_107026f0(*(undefined4 *)(this + 0x3f34));
      *(undefined4 *)(this + 0x3f34) = 0;
      puVar3 = puStack_14;
      goto LAB_107180e2;
    }
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffcc;
    if (*(int *)GLog_exref != 0) {
      this_00 = (FOutputDevice *)(puVar1 + 0x42);
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffcc;
      FOutputDevice::Logf2
                (this_00,*(EName *)GLog_exref,(ushort *)0x2f8,&DAT_10749e48,
                 -(uint)(*(short *)this_00 != 0) & (uint)this_00);
    }
    *(undefined4 *)(*(int *)(*(int *)(this + 0x74) + 0x44) + 0x78) = 1;
    thunk_FUN_107026f0(*(undefined4 *)(this + 0x3f34));
    *(undefined4 *)(this + 0x3f34) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 107018c0 FArchiveTcpReader::ReceiveDataFromLink

/* private: virtual void __thiscall FArchiveTcpReader::ReceiveDataFromLink(void) */

void __thiscall FArchiveTcpReader::ReceiveDataFromLink(FArchiveTcpReader *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18c0  231  ?ReceiveDataFromLink@FArchiveTcpReader@@EAEXXZ */
  puStack_c = &LAB_10742c30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    while( true ) {
      uVar2 = (**(code **)(**(int **)(this + 0x38) + 4))();
      if ((int)uVar2 < 1) {
        ExceptionList = pvStack_10;
        return;
      }
      if ((*(int *)(this + 0x40) == 0) ||
         (iVar3 = *(int *)(this + 0x40) * 0x10,
         piVar1 = (int *)(*(int *)(this + 0x3c) + -0x10 + iVar3), *piVar1 <= piVar1[2])) break;
      piVar1 = (int *)(*(int *)(this + 0x3c) + -0x10 + iVar3);
      if (*piVar1 - piVar1[2] < (int)uVar2) {
        uVar2 = *piVar1 - piVar1[2];
      }
      iVar3 = FArray::Add((FArray *)(piVar1 + 1),uVar2,1);
      (**(code **)(**(int **)(this + 0x38) + 0x14))(piVar1[1] + iVar3,uVar2);
    }
    if (uVar2 < 4) break;
    iVar3 = FArray::AddZeroed((FArray *)(this + 0x3c),0x10,1);
    (**(code **)(**(int **)(this + 0x38) + 0x14))(iVar3 * 0x10 + *(int *)(this + 0x3c),4);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 107018ca thunk_FUN_107199e0 thunk -> 107199e0

// ==== 107018cf FTcpLink::FTcpLink

/* public: __thiscall FTcpLink::FTcpLink(class FTcpLink const &) */

FTcpLink * __thiscall FTcpLink::FTcpLink(FTcpLink *this,FTcpLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18cf  37  ??0FTcpLink@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741888;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = FInternetLink::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = vftable;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(this + 0x1c),(TArray<unsigned_char> *)(param_1 + 0x1c));
  uStack_4 = 0;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(this + 0x28),(TArray<unsigned_char> *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107018d4 FTcpLink::FTcpLink

/* public: __thiscall FTcpLink::FTcpLink(void) */

FTcpLink * __thiscall FTcpLink::FTcpLink(FTcpLink *this)

{
  float10 fVar1;
  FString aFStack_38 [16];
  FTcpLink *pFStack_28;
  longlong lStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18d4  39  ??0FTcpLink@@QAE@XZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_107429b1;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  pFStack_28 = this;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x1c));
  uStack_8 = 0;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(this + 0x28));
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  uStack_8._0_1_ = 2;
  FString::FString(aFStack_38);
  uStack_8._0_1_ = 3;
  thunk_FUN_1071af40();
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  fVar1 = thunk_FUN_10702660();
  lStack_20 = (longlong)ROUND(fVar1);
  *(undefined4 *)(this + 0x40) = (undefined4)lStack_20;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  FString::~FString(aFStack_38);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 107018d9 AInternetLink::execGameSpyGameName

/* public: void __thiscall AInternetLink::execGameSpyGameName(struct FFrame &,void * const) */

void __thiscall
AInternetLink::execGameSpyGameName(AInternetLink *this,FFrame *param_1,void *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x18d9  291  ?execGameSpyGameName@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742949;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffcc;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  pFVar2 = thunk_FUN_107098c0(aFStack_28);
  iStack_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 107018de thunk_FUN_107033e0 thunk -> 107033e0

// ==== 107018e3 ATcpLink::ATcpLink

/* public: __thiscall ATcpLink::ATcpLink(class ATcpLink const &) */

ATcpLink * __thiscall ATcpLink::ATcpLink(ATcpLink *this,ATcpLink *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18e3  13  ??0ATcpLink@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107420ff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInternetLink::AInternetLink((AInternetLink *)this,(AInternetLink *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  this[0x3d8] = param_1[0x3d8];
  *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(this + 1000),(TArray<unsigned_char> *)(param_1 + 1000));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 107018e8 thunk_FUN_10714640 thunk -> 10714640

// ==== 107018ed thunk_FUN_10713270 thunk -> 10713270

// ==== 107018f2 thunk_FUN_10712840 thunk -> 10712840

// ==== 107018f7 AInternetLink::execGetLocalIP

/* public: void __thiscall AInternetLink::execGetLocalIP(struct FFrame &,void * const) */

void __thiscall AInternetLink::execGetLocalIP(AInternetLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  u_long uVar2;
  u_long *puVar3;
  u_long auStack_28 [4];
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18f7  294  ?execGetLocalIP@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742980;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,auStack_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = auStack_28;
  }
  else {
    puVar3 = *(u_long **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  thunk_FUN_10703a60((ushort *)param_1,&uStack_18);
  thunk_FUN_1071b5b0(uStack_18,puVar3);
  uVar2 = htonl(*puVar3);
  *puVar3 = uVar2;
  puVar3[1] = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701901 AServerQueryClient::operator_new

/* public: static void * __cdecl AServerQueryClient::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AServerQueryClient::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1901  77  ??2AServerQueryClient@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 1070190b thunk_FUN_10702660 thunk -> 10702660

// ==== 10701910 thunk_FUN_10712df0 thunk -> 10712df0

// ==== 10701915 thunk_FUN_10710890 thunk -> 10710890

// ==== 1070191a thunk_FUN_10708e60 thunk -> 10708e60

// ==== 1070191f AInternetLink::execGetLastError

/* public: void __thiscall AInternetLink::execGetLastError(struct FFrame &,void * const) */

void __thiscall AInternetLink::execGetLastError(AInternetLink *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x191f  293  ?execGetLastError@AInternetLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742930;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = WSAGetLastError();
  *(int *)param_2 = iVar1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070192e ATcpLink::PostScriptDestroyed

/* public: virtual void __thiscall ATcpLink::PostScriptDestroyed(void) */

void __thiscall ATcpLink::PostScriptDestroyed(ATcpLink *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x192e  219  ?PostScriptDestroyed@ATcpLink@@UAEXXZ */
  puStack_c = &LAB_10743a20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(SOCKET *)(this + 0x3c0) != 0xffffffff) {
    ExceptionList = &pvStack_10;
    closesocket(*(SOCKET *)(this + 0x3c0));
  }
  if (*(SOCKET *)(this + 0x3c8) != 0xffffffff) {
    closesocket(*(SOCKET *)(this + 0x3c8));
  }
  AActor::PostScriptDestroyed((AActor *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701933 FInternetLink::ThrottleBandwidth

/* public: static void __cdecl FInternetLink::ThrottleBandwidth(int,int) */

void __cdecl FInternetLink::ThrottleBandwidth(int param_1,int param_2)

{
                    /* 0x1933  258  ?ThrottleBandwidth@FInternetLink@@SAXHH@Z */
  BandwidthSendBudget = param_1;
  ThrottleSend = (uint)(param_1 != 0);
  BandwidthReceiveBudget = BandwidthReceiveBudget + param_2;
  ThrottleReceive = (uint)(param_2 != 0);
  if (param_2 < BandwidthReceiveBudget) {
    BandwidthReceiveBudget = param_2;
  }
  return;
}


// ==== 10701938 FIpAddr::operator==

/* public: int __thiscall FIpAddr::operator==(struct FIpAddr &) */

int __thiscall FIpAddr::operator==(FIpAddr *this,FIpAddr *param_1)

{
                    /* 0x1938  112  ??8FIpAddr@@QAEHAAU0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 1070193d thunk_FUN_1070e8b0 thunk -> 1070e8b0

// ==== 10701942 AMasterServerUplink::execLogStatLine

/* public: void __thiscall AMasterServerUplink::execLogStatLine(struct FFrame &,void * const) */

void __thiscall
AMasterServerUplink::execLogStatLine(AMasterServerUplink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FTcpLink *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_retaddr;
  FString aFStack_18 [4];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* 0x1942  300  ?execLogStatLine@AMasterServerUplink@@QAEXAAUFFrame@@QAX@Z */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_10743924;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(aFStack_18);
  pvStack_4 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,aFStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(this + 0x3bc) == 0) {
    pvStack_4 = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc4,&DAT_10749b4c);
    pvStack_c._0_1_ = 1;
    if (pvStack_4 == (void *)0x0) {
      pFVar2 = (FTcpLink *)0x0;
    }
    else {
      pFVar2 = thunk_FUN_10712df0(pvStack_4,this);
    }
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    *(FTcpLink **)(this + 0x3bc) = pFVar2;
  }
  puVar3 = FString::operator*((FString *)&stack0xffffffe0);
  uVar4 = thunk_FUN_107128a0(*(void **)(this + 0x3bc),puVar3);
  *unaff_retaddr = uVar4;
  pvStack_c = (void *)0xffffffff;
  FString::~FString((FString *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10701947 FTcpLink::OnConnectionFailed

/* public: virtual void __thiscall FTcpLink::OnConnectionFailed(void) */

void __thiscall FTcpLink::OnConnectionFailed(FTcpLink *this)

{
                    /* 0x1947  202  ?OnConnectionFailed@FTcpLink@@UAEXXZ */
  return;
}


// ==== 1070194c thunk_FUN_10712500 thunk -> 10712500

// ==== 10701951 AInternetLink::eventResolved

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AInternetLink::eventResolved(struct FIpAddr) */

void __thiscall
AInternetLink::eventResolved(AInternetLink *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x1951  286  ?eventResolved@AInternetLink@@QAEXUFIpAddr@@@Z */
  uVar4 = 0;
  iVar1 = *(int *)this;
  puVar3 = &uStack_8;
  uStack_8 = param_2;
  uStack_4 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_Resolved,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10701956 AMasterServerGameStats::AMasterServerGameStats

/* protected: __thiscall AMasterServerGameStats::AMasterServerGameStats(void) */

AMasterServerGameStats * __thiscall
AMasterServerGameStats::AMasterServerGameStats(AMasterServerGameStats *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1956  5  ??0AMasterServerGameStats@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741b09;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AGameStats::AGameStats((AGameStats *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1070195b operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,struct FMD5UpdateData &) */

FArchive * __cdecl operator<<(FArchive *param_1,FMD5UpdateData *param_2)

{
  FArchive *pFVar1;
  FMD5UpdateData *pFVar2;
  
                    /* 0x195b  110  ??6@YAAAVFArchive@@AAV0@AAUFMD5UpdateData@@@Z */
  pFVar2 = param_2 + 0xc;
  pFVar1 = operator<<(param_1,(FString *)param_2);
  pFVar1 = operator<<(pFVar1,(FString *)pFVar2);
  FArchive::ByteOrderSerialize(pFVar1,param_2 + 0x18,4);
  return pFVar1;
}


// ==== 10701960 thunk_FUN_10710910 thunk -> 10710910

// ==== 10701965 ATcpLink::operator=

/* public: class ATcpLink & __thiscall ATcpLink::operator=(class ATcpLink const &) */

ATcpLink * __thiscall ATcpLink::operator=(ATcpLink *this,ATcpLink *param_1)

{
                    /* 0x1965  93  ??4ATcpLink@@QAEAAV0@ABV0@@Z */
  AInternetLink::operator=((AInternetLink *)this,(AInternetLink *)param_1);
  this[0x3d8] = param_1[0x3d8];
  *(undefined4 *)(this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(this + 1000),(TArray<unsigned_char> *)(param_1 + 1000));
  return this;
}


// ==== 10701974 AMasterServerLink::AMasterServerLink

/* public: __thiscall AMasterServerLink::AMasterServerLink(void) */

AMasterServerLink * __thiscall AMasterServerLink::AMasterServerLink(AMasterServerLink *this)

{
  code *pcVar1;
  code *pcVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1974  8  ??0AMasterServerLink@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741ba3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AInfo::AInfo((AInfo *)this);
  pcVar2 = FStringNoInit_exref;
  pcVar1 = ~FStringNoInit_exref;
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  _eh_vector_constructor_iterator_(this + 0x3e0,0xc,5,pcVar2,pcVar1);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701979 thunk_FUN_107105e0 thunk -> 107105e0

// ==== 1070197e AInternetLink::Destroy

/* public: virtual void __thiscall AInternetLink::Destroy(void) */

void __thiscall AInternetLink::Destroy(AInternetLink *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x197e  145  ?Destroy@AInternetLink@@UAEXXZ */
  puStack_c = &LAB_10742880;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(SOCKET *)(this + 0x3c0) != 0xffffffff) {
    ExceptionList = &pvStack_10;
    closesocket(*(SOCKET *)(this + 0x3c0));
    *(undefined4 *)(this + 0x3c0) = 0xffffffff;
  }
  AActor::Destroy((AActor *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701983 thunk_FUN_10705d10 thunk -> 10705d10

// ==== 10701988 UTcpNetDriver::StaticConstructor

/* public: void __thiscall UTcpNetDriver::StaticConstructor(void) */

void __thiscall UTcpNetDriver::StaticConstructor(UTcpNetDriver *this)

{
  undefined4 uVar1;
  UObject *pUVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1988  256  ?StaticConstructor@UTcpNetDriver@@QAEXXZ */
  puStack_c = &LAB_10743d00;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  uVar1 = *(undefined4 *)(this + 0x24);
  ExceptionList = &pvStack_10;
  FName::FName((FName *)&uStack_18,(ushort *)L"AllowPlayerPortUnreach",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,uStack_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UBoolProperty::UBoolProperty((UBoolProperty *)pUVar2,0,0xa4,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  uVar1 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&uStack_18,(ushort *)L"LogPortUnreach",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,uStack_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UBoolProperty::UBoolProperty((UBoolProperty *)pUVar2,0,0xa8,(ushort *)L"Client",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1070198d AUdpLink::operator_new

/* public: static void * __cdecl AUdpLink::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AUdpLink::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x198d  81  ??2AUdpLink@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10701997 thunk_FUN_10710760 thunk -> 10710760

// ==== 1070199c thunk_FUN_107063b0 thunk -> 107063b0

// ==== 107019a1 FArchiveTcpReader::AtEnd

/* public: virtual int __thiscall FArchiveTcpReader::AtEnd(void) */

int __thiscall FArchiveTcpReader::AtEnd(FArchiveTcpReader *this)

{
                    /* 0x19a1  134  ?AtEnd@FArchiveTcpReader@@UAEHXZ */
  return *(int *)(this + 0x48);
}


// ==== 107019ab AServerQueryClient::execCancelPings

/* public: void __thiscall AServerQueryClient::execCancelPings(struct FFrame &,void * const) */

void __thiscall
AServerQueryClient::execCancelPings(AServerQueryClient *this,FFrame *param_1,void *param_2)

{
                    /* 0x19ab  289  ?execCancelPings@AServerQueryClient@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  Init(this);
  thunk_FUN_1070f1a0(*(int *)(this + 0x3bc));
  return;
}


// ==== 107019b0 FSocketData::UpdateFromSocket

/* public: void __thiscall FSocketData::UpdateFromSocket(void) */

void __thiscall FSocketData::UpdateFromSocket(FSocketData *this)

{
  u_short uVar1;
  int iStack_4;
  
                    /* 0x19b0  265  ?UpdateFromSocket@FSocketData@@QAEXXZ */
  iStack_4 = 0x10;
  getsockname(*(SOCKET *)(this + 0x14),(sockaddr *)this,&iStack_4);
  uVar1 = ntohs(*(u_short *)(this + 2));
  *(uint *)(this + 0x10) = (uint)uVar1;
  return;
}


// ==== 107019b5 FInternetLink::operator=

/* public: class FInternetLink & __thiscall FInternetLink::operator=(class FInternetLink const &) */

FInternetLink * __thiscall FInternetLink::operator=(FInternetLink *this,FInternetLink *param_1)

{
                    /* 0x19b5  100  ??4FInternetLink@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


// ==== 107019bf FUdpLink::BindPort

/* public: virtual int __thiscall FUdpLink::BindPort(int) */

int __thiscall FUdpLink::BindPort(FUdpLink *this,int param_1)

{
  int iVar1;
  u_short uVar2;
  uint uVar3;
  int iVar4;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19bf  138  ?BindPort@FUdpLink@@UAEHH@Z */
  iVar1 = param_1;
  puStack_c = &LAB_10742b10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x14) = param_1;
  uVar2 = htons((u_short)param_1);
  *(u_short *)(this + 6) = uVar2;
  uVar3 = thunk_FUN_10703e30(*(ushort **)GWarn_exref);
  *(uint *)(this + 8) = uVar3;
  param_1 = 1;
  iVar4 = setsockopt(*(SOCKET *)(this + 0x18),0xffff,0x20,(char *)&param_1,4);
  if (iVar4 != 0) {
    FOutputDevice::Logf(this_00,*(ushort **)GError_exref,L"FUdpLink::BindPort: setsockopt failed");
  }
  iVar4 = bind(*(SOCKET *)(this + 0x18),(sockaddr *)(this + 4),0x10);
  if (iVar4 == -1) {
    FOutputDevice::Logf(this_01,*(ushort **)GError_exref,
                        L"FUdpLink::BindPort: Failed to bind UDP socket to port");
  }
  if (iVar1 == 0) {
    FSocketData::UpdateFromSocket((FSocketData *)(this + 4));
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 107019c4 thunk_FUN_10706bb0 thunk -> 10706bb0

// ==== 107019c9 thunk_FUN_1071b5c0 thunk -> 1071b5c0

// ==== 107019ce thunk_FUN_10704930 thunk -> 10704930

// ==== 107019e2 AUdpLink::AUdpLink

/* public: __thiscall AUdpLink::AUdpLink(void) */

AUdpLink * __thiscall AUdpLink::AUdpLink(AUdpLink *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19e2  16  ??0AUdpLink@@QAE@XZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10743ec8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  AInternetLink::AInternetLink((AInternetLink *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 107019e7 FIpAddr::GetSockAddr

/* public: struct sockaddr_in __thiscall FIpAddr::GetSockAddr(void) */

undefined2 * __thiscall FIpAddr::GetSockAddr(FIpAddr *this)

{
  u_short uVar1;
  u_long uVar2;
  undefined2 *in_stack_00000004;
  
                    /* 0x19e7  154  ?GetSockAddr@FIpAddr@@QAE?AUsockaddr_in@@XZ */
  uVar1 = *(u_short *)(this + 4);
  *in_stack_00000004 = 2;
  uVar1 = htons(uVar1);
  uVar2 = *(u_long *)this;
  in_stack_00000004[1] = uVar1;
  uVar2 = htonl(uVar2);
  *(u_long *)(in_stack_00000004 + 2) = uVar2;
  return in_stack_00000004;
}


// ==== 107019f1 FArchiveTcpWriter::operator=

/* public: struct FArchiveTcpWriter & __thiscall FArchiveTcpWriter::operator=(struct
   FArchiveTcpWriter const &) */

FArchiveTcpWriter * __thiscall
FArchiveTcpWriter::operator=(FArchiveTcpWriter *this,FArchiveTcpWriter *param_1)

{
                    /* 0x19f1  97  ??4FArchiveTcpWriter@@QAEAAU0@ABU0@@Z */
  FArchive::operator=((FArchive *)this,(FArchive *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(this + 0x3c),(TArray<unsigned_char> *)(param_1 + 0x3c));
  return this;
}


// ==== 107019f6 thunk_FUN_107106a0 thunk -> 107106a0

// ==== 10701a0a thunk_FUN_10711e60 thunk -> 10711e60

// ==== 10701a0f FTcpLink::ReceivePendingData

/* public: virtual void __thiscall FTcpLink::ReceivePendingData(void) */

void __thiscall FTcpLink::ReceivePendingData(FTcpLink *this)

{
  size_t _Size;
  int iVar1;
  float10 fVar2;
  char acStack_430 [1032];
  longlong lStack_28;
  size_t sStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a0f  232  ?ReceivePendingData@FTcpLink@@UAEXXZ */
  puStack_c = &LAB_10742a60;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbc4;
  uStack_8 = 0;
  if ((FInternetLink::ThrottleReceive == 0) || (0 < FInternetLink::BandwidthReceiveBudget)) {
    ExceptionList = &pvStack_10;
    _Size = recv(*(SOCKET *)(this + 0x18),acStack_430,0x400,0);
    sStack_1c = _Size;
    if ((int)_Size < 1) {
      closesocket(*(SOCKET *)(this + 0x18));
      *(undefined4 *)(this + 0x18) = 0xffffffff;
      *(undefined4 *)(this + 0x44) = 0;
      (**(code **)(*(int *)this + 0x58))();
      ExceptionList = pvStack_10;
      return;
    }
    *(size_t *)(this + 0x3c) = *(int *)(this + 0x3c) + _Size;
    fVar2 = thunk_FUN_10702660();
    lStack_28 = (longlong)ROUND(fVar2);
    *(undefined4 *)(this + 0x40) = (undefined4)lStack_28;
    if (FInternetLink::ThrottleReceive != 0) {
      FInternetLink::BandwidthReceiveBudget = FInternetLink::BandwidthReceiveBudget - _Size;
    }
    do {
      iVar1 = FArray::Add((FArray *)(this + 0x1c),_Size,1);
      _memcpy((void *)(*(int *)(this + 0x1c) + iVar1),acStack_430,_Size);
      _Size = recv(*(SOCKET *)(this + 0x18),acStack_430,0x400,0);
      sStack_1c = _Size;
      if ((int)_Size < 1) break;
      *(size_t *)(this + 0x3c) = *(int *)(this + 0x3c) + _Size;
    } while ((FInternetLink::ThrottleReceive == 0) ||
            (FInternetLink::BandwidthReceiveBudget = FInternetLink::BandwidthReceiveBudget - _Size,
            0 < FInternetLink::BandwidthReceiveBudget));
    if (*(int *)(this + 0x48) == 1) {
      (**(code **)(**(int **)(this + 0x50) + 100))();
      iVar1 = (**(code **)(**(int **)(this + 0x50) + 0x68))();
      if (iVar1 == 0) {
        ExceptionList = pvStack_10;
        return;
      }
    }
    (**(code **)(*(int *)this + 0x5c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701a14 thunk_FUN_10713600 thunk -> 10713600

// ==== 10701a1e AMasterServerClient::Poll

/* public: virtual int __thiscall AMasterServerClient::Poll(int) */

int __thiscall AMasterServerClient::Poll(AMasterServerClient *this,int param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a1e  209  ?Poll@AMasterServerClient@@UAEHH@Z */
  puStack_c = &LAB_10742d80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  AServerQueryClient::Poll((AServerQueryClient *)this,param_1);
  if (*(int *)(this + 0x430) != 0) {
    iVar1 = (**(code **)(**(int **)(this + 0x430) + 0x2c))(param_1);
    ExceptionList = pvStack_10;
    return iVar1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10701a23 FMD5UpdateData::FMD5UpdateData

/* public: __thiscall FMD5UpdateData::FMD5UpdateData(void) */

FMD5UpdateData * __thiscall FMD5UpdateData::FMD5UpdateData(FMD5UpdateData *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a23  34  ??0FMD5UpdateData@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10741c35;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701a2d thunk_FUN_107098a0 thunk -> 107098a0

// ==== 10701a37 FTcpLink::PeekData

/* public: virtual void __thiscall FTcpLink::PeekData(unsigned char * &,int &) */

void __thiscall FTcpLink::PeekData(FTcpLink *this,uchar **param_1,int *param_2)

{
                    /* 0x1a37  208  ?PeekData@FTcpLink@@UAEXAAPAEAAH@Z */
  *param_2 = *(int *)(this + 0x20);
  *param_1 = *(uchar **)(this + 0x1c);
  return;
}


// ==== 10701a3c thunk_FUN_10719610 thunk -> 10719610

// ==== 10701a41 AMasterServerLink::execPoll

/* public: void __thiscall AMasterServerLink::execPoll(struct FFrame &,void * const) */

void __thiscall AMasterServerLink::execPoll(AMasterServerLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a41  304  ?execPoll@AMasterServerLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10742d70;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  uStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&uStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  uVar2 = (**(code **)(*(int *)this + 800))(uStack_18);
  *(undefined4 *)param_2 = uVar2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701a46 thunk_FUN_107127d0 thunk -> 107127d0

// ==== 10701a4b UTcpipConnection::InternalConstructor

/* public: static void __cdecl UTcpipConnection::InternalConstructor(void *) */

void __cdecl UTcpipConnection::InternalConstructor(void *param_1)

{
                    /* 0x1a4b  193  ?InternalConstructor@UTcpipConnection@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTcpipConnection(param_1);
    return;
  }
  return;
}


// ==== 10701a50 AUdpLink::Tick

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __thiscall AUdpLink::Tick(float,enum ELevelTick) */

int __thiscall AUdpLink::Tick(AUdpLink *this,float param_1,ELevelTick param_2)

{
  AUdpLink AVar1;
  u_short uVar2;
  int iVar3;
  int iVar4;
  u_long uVar5;
  ushort *puVar6;
  char acStack_1144 [4096];
  fd_set fStack_144;
  sockaddr sStack_40;
  u_long uStack_2c;
  uint uStack_28;
  FString aFStack_20 [4];
  timeval tStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1a50  263  ?Tick@AUdpLink@@UAEHMW4ELevelTick@@@Z */
  puStack_c = &LAB_10743f62;
  pvStack_10 = ExceptionList;
  tStack_1c.tv_usec = 0x1071a9f3;
  puStack_14 = &stack0xffffeeb0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar3 = AInternetLink::Tick((AInternetLink *)this,param_1,param_2);
  fStack_144.fd_array[0] = *(SOCKET *)(this + 0x3c0);
  if (fStack_144.fd_array[0] != 0xffffffff) {
    if (this[0x3d4] == (AUdpLink)0x1) {
      param_2 = 0x10;
      iVar4 = recvfrom(fStack_144.fd_array[0],acStack_1144,0xfff,0,&sStack_40,(int *)&param_2);
      if (iVar4 != -1) {
        uVar5 = ntohl(CONCAT22(sStack_40.sa_data._4_2_,sStack_40.sa_data._2_2_));
        uStack_2c = uVar5;
        uVar2 = ntohs(sStack_40.sa_data._0_2_);
        uStack_28 = (uint)uVar2;
        AVar1 = this[0x3bc];
        if (AVar1 == (AUdpLink)0x0) {
          acStack_1144[iVar4] = '\0';
          puVar6 = appFromAnsi(acStack_1144,(ushort *)0x0);
          FString::FString(aFStack_20,puVar6);
          iStack_8._0_1_ = 1;
          eventReceivedText(this,uVar5,uStack_28,aFStack_20);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_20);
        }
        else if (AVar1 == (AUdpLink)0x1) {
          acStack_1144[iVar4] = '\0';
          puVar6 = appFromAnsi(acStack_1144,(ushort *)0x0);
          FString::FString(aFStack_20,puVar6);
          iStack_8._0_1_ = 2;
          eventReceivedLine(this,uVar5,uStack_28,aFStack_20);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_20);
        }
        else if (AVar1 == (AUdpLink)0x2) {
          eventReceivedBinary(this,uVar5,uStack_28,iVar4,acStack_1144);
        }
      }
    }
    else if (this[0x3d4] == (AUdpLink)0x0) {
      tStack_1c.tv_sec = 0;
      tStack_1c.tv_usec = 0;
      fStack_144.fd_count = 1;
      iVar4 = select(fStack_144.fd_array[0] + 1,&fStack_144,(fd_set *)0x0,(fd_set *)0x0,&tStack_1c);
      if ((iVar4 == 0) || (iVar4 == -1)) {
        *(undefined4 *)(this + 0x3d0) = 0;
      }
      else {
        *(undefined4 *)(this + 0x3d0) = 1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return iVar3;
}


// ==== 10701a55 FArchiveUdpWriter::Tell

/* public: virtual int __thiscall FArchiveUdpWriter::Tell(void) */

int __thiscall FArchiveUdpWriter::Tell(FArchiveUdpWriter *this)

{
                    /* 0x1a55  257  ?Tell@FArchiveUdpWriter@@UAEHXZ */
  return *(int *)(this + 0x48);
}


// ==== 10701a5a ATcpLink::execIsConnected

/* public: void __thiscall ATcpLink::execIsConnected(struct FFrame &,void * const) */

void __thiscall ATcpLink::execIsConnected(ATcpLink *this,FFrame *param_1,void *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  fd_set fStack_12c;
  timeval tStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a5a  296  ?execIsConnected@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743a40;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffec8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xfffffec8;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  tStack_1c.tv_sec = 0;
  tStack_1c.tv_usec = 0;
  if (this[0x3d8] == (ATcpLink)0x0) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = pvStack_10;
    return;
  }
  if ((this[0x3d8] == (ATcpLink)0x2) && (*(int *)(this + 0x3c0) != -1)) {
    fStack_12c.fd_array[0] = *(SOCKET *)(this + 0x3c8);
    fStack_12c.fd_count = 1;
    iVar2 = select(fStack_12c.fd_array[0] + 1,(fd_set *)0x0,&fStack_12c,(fd_set *)0x0,&tStack_1c);
    if ((iVar2 != -1) && (iVar2 != 0)) goto LAB_10715d11;
  }
  fStack_12c.fd_array[0] = *(SOCKET *)(this + 0x3c0);
  if (fStack_12c.fd_array[0] != 0xffffffff) {
    fStack_12c.fd_count = 1;
    iVar2 = select(fStack_12c.fd_array[0] + 1,(fd_set *)0x0,&fStack_12c,(fd_set *)0x0,&tStack_1c);
    if ((iVar2 != -1) && (iVar2 != 0)) {
LAB_10715d11:
      *(undefined4 *)param_2 = 1;
      ExceptionList = pvStack_10;
      return;
    }
  }
  *(undefined4 *)param_2 = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701a5f thunk_FUN_10719560 thunk -> 10719560

// ==== 10701a64 ATcpLink::operator_new

/* public: static void * __cdecl ATcpLink::operator new(unsigned int,enum EInternal *) */

void * __cdecl ATcpLink::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1a64  80  ??2ATcpLink@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10701a69 FArchiveTcpReader::CompletePacketsAvailable

/* private: virtual int __thiscall FArchiveTcpReader::CompletePacketsAvailable(void) */

int __thiscall FArchiveTcpReader::CompletePacketsAvailable(FArchiveTcpReader *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x1a69  142  ?CompletePacketsAvailable@FArchiveTcpReader@@EAEHXZ */
  iVar3 = *(int *)(this + 0x40);
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(this + 0x3c);
    do {
      if (*piVar2 == piVar2[2]) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


// ==== 10701a6e AMasterServerGameStats::StaticClass

/* public: static class UClass * __cdecl AMasterServerGameStats::StaticClass(void) */

UClass * __cdecl AMasterServerGameStats::StaticClass(void)

{
                    /* 0x1a6e  248  ?StaticClass@AMasterServerGameStats@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10701a73 thunk_FUN_10702730 thunk -> 10702730

// ==== 10701a82 thunk_FUN_10702770 thunk -> 10702770

// ==== 10701a87 thunk_FUN_10702750 thunk -> 10702750

// ==== 10701a91 FArchiveTcpSocket::~FArchiveTcpSocket

/* public: virtual __thiscall FArchiveTcpSocket::~FArchiveTcpSocket(void) */

void __thiscall FArchiveTcpSocket::~FArchiveTcpSocket(FArchiveTcpSocket *this)

{
                    /* 0x1a91  57  ??1FArchiveTcpSocket@@UAE@XZ */
  *(code **)this = _vftable__exref;
  return;
}


// ==== 10701aa0 AMasterServerLink::InternalConstructor

/* public: static void __cdecl AMasterServerLink::InternalConstructor(void *) */

void __cdecl AMasterServerLink::InternalConstructor(void *param_1)

{
                    /* 0x1aa0  187  ?InternalConstructor@AMasterServerLink@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AMasterServerLink(param_1);
    return;
  }
  return;
}


// ==== 10701aa5 AMasterServerClient::operator_new

/* public: static void * __cdecl AMasterServerClient::operator new(unsigned int,enum EInternal *) */

void * __cdecl AMasterServerClient::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1aa5  70  ??2AMasterServerClient@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10701aaf AMasterServerUplink::InternalConstructor

/* public: static void __cdecl AMasterServerUplink::InternalConstructor(void *) */

void __cdecl AMasterServerUplink::InternalConstructor(void *param_1)

{
                    /* 0x1aaf  188  ?InternalConstructor@AMasterServerUplink@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AMasterServerUplink(param_1);
    return;
  }
  return;
}


// ==== 10701ab4 thunk_FUN_10716c70 thunk -> 10716c70

// ==== 10701ab9 FArchiveUdpWriter::FArchiveUdpWriter

/* public: __thiscall FArchiveUdpWriter::FArchiveUdpWriter(class FUdpLink *,struct FIpAddr) */

FArchiveUdpWriter * __thiscall
FArchiveUdpWriter::FArchiveUdpWriter
          (FArchiveUdpWriter *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  TArray<unsigned_char> *this_00;
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1ab9  26  ??0FArchiveUdpWriter@@QAE@PAVFUdpLink@@UFIpAddr@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742ba5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this);
  uStack_4 = 0;
  *(undefined4 *)(this + 0x3c) = param_3;
  this_00 = (TArray<unsigned_char> *)(this + 0x44);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x40) = param_4;
  TArray<unsigned_char>::TArray<unsigned_char>(this_00);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 0x14) = 1;
  FArray::Add((FArray *)this_00,4,1);
  **(undefined4 **)this_00 = uVar1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701abe thunk_FUN_10705840 thunk -> 10705840

// ==== 10701ac3 thunk_FUN_107084c0 thunk -> 107084c0

// ==== 10701ac8 thunk_FUN_10713510 thunk -> 10713510

// ==== 10701acd FSocketData::GetString

/* public: class FString __thiscall FSocketData::GetString(int) */

int __thiscall FSocketData::GetString(FSocketData *this,int param_1)

{
  u_short uVar1;
  uint uVar2;
  int in_stack_00000008;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1acd  159  ?GetString@FSocketData@@QAE?AVFString@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10743ffa;
  pvStack_c = ExceptionList;
  if (in_stack_00000008 == 0) {
    uVar2 = 0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    uVar1 = ntohs(*(u_short *)(this + 2));
    uVar2 = (uint)uVar1;
  }
  thunk_FUN_1071b5d0((FString *)param_1,*(uint *)(this + 4),uVar2);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 10701ad2 AUdpLink::eventReceivedBinary

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AUdpLink::eventReceivedBinary(struct FIpAddr,int,unsigned char *) */

void __thiscall
AUdpLink::eventReceivedBinary
          (AUdpLink *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [256];
  
                    /* 0x1ad2  279  ?eventReceivedBinary@AUdpLink@@QAEXUFIpAddr@@HPAE@Z */
  uStack_10c = param_2;
  uStack_108 = param_3;
  uStack_104 = param_4;
  _memcpy(auStack_100,&stack0x00000010,0xff);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &uStack_10c;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_IPDRV_ReceivedBinary,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10701ad7 thunk_FUN_10702d30 thunk -> 10702d30

// ==== 10701adc ATcpLink::CheckConnectionQueue

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ATcpLink::CheckConnectionQueue(void) */

void __thiscall ATcpLink::CheckConnectionQueue(ATcpLink *this)

{
  ATcpLink *pAVar1;
  int iVar2;
  SOCKET SVar3;
  UClass *pUVar4;
  u_long uVar5;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  fd_set fStack_140;
  undefined1 *puStack_3c;
  sockaddr sStack_34;
  timeval tStack_24;
  int aiStack_1c [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1adc  140  ?CheckConnectionQueue@ATcpLink@@QAEXXZ */
  puStack_c = &LAB_10743b30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffeb4;
  uStack_8 = 0;
  tStack_24.tv_sec = 0;
  tStack_24.tv_usec = 0;
  fStack_140.fd_array[0] = *(SOCKET *)(this + 0x3c0);
  fStack_140.fd_count = 1;
  uStack_164 = 0x10716dd3;
  ExceptionList = &pvStack_10;
  iVar2 = select(fStack_140.fd_array[0] + 1,&fStack_140,(fd_set *)0x0,(fd_set *)0x0,&tStack_24);
  if (iVar2 == -1) {
    if (*(int *)GLog_exref == 0) {
      ExceptionList = pvStack_10;
      return;
    }
    WSAGetLastError();
  }
  else {
    if (iVar2 == 0) {
      ExceptionList = pvStack_10;
      return;
    }
    aiStack_1c[0] = 0x10;
    SVar3 = accept(*(SOCKET *)(this + 0x3c0),&sStack_34,aiStack_1c);
    if (SVar3 != 0xffffffff) {
      if ((*(int *)(this + 0x3e4) != 0) || (*(int *)(this + 0x3c8) == -1)) {
        thunk_FUN_1071b6e0(SVar3);
        pUVar4 = *(UClass **)(this + 0x3e4);
        if (pUVar4 == (UClass *)0x0) {
          *(SOCKET *)(this + 0x3c8) = SVar3;
          pAVar1 = this + 0x3dc;
          thunk_FUN_1071b5b0(sStack_34.sa_data._2_4_,(undefined4 *)pAVar1);
          uVar5 = htonl(*(u_long *)pAVar1);
          *(u_long *)pAVar1 = uVar5;
          *(uint *)(this + 0x3e0) = (uint)(ushort)sStack_34.sa_data._0_2_;
          eventAccepted(this);
          ExceptionList = pvStack_10;
          return;
        }
        while( true ) {
          if (pUVar4 == (UClass *)0x0) {
            if (*(int *)GLog_exref == 0) {
              ExceptionList = pvStack_10;
              return;
            }
            FOutputDevice::Logf2(this_01,*(EName *)GLog_exref,(ushort *)0x2f8);
            ExceptionList = pvStack_10;
            return;
          }
          if (pUVar4 == &PrivateStaticClass) break;
          pUVar4 = *(UClass **)(pUVar4 + 0x34);
        }
        uStack_16c = *(undefined4 *)(this + 0x1c8);
        uStack_168 = *(undefined4 *)(this + 0x1cc);
        uStack_164 = *(undefined4 *)(this + 0x1d0);
        uStack_178 = *(undefined4 *)(this + 0x1bc);
        uStack_174 = *(undefined4 *)(this + 0x1c0);
        uStack_170 = *(undefined4 *)(this + 0x1c4);
        puStack_3c = (undefined1 *)&uStack_17c;
        uStack_17c = 0;
        iVar2 = (**(code **)(**(int **)(this + 0xe4) + 0xc0))(*(undefined4 *)(this + 0x3e4));
        iVar2 = thunk_FUN_10716c70(iVar2);
        if (iVar2 != 0) {
          ExceptionList = pvStack_10;
          return;
        }
        if (*(int *)GLog_exref == 0) {
          DAT_000003d8 = 4;
          DAT_000003bc = this[0x3bc];
          _DAT_000003c0 = SVar3;
          thunk_FUN_1071b5b0(sStack_34.sa_data._2_4_,(undefined4 *)&DAT_000003dc);
          _DAT_000003dc = htonl(_DAT_000003dc);
          _DAT_000003e0 = (uint)(ushort)sStack_34.sa_data._0_2_;
          eventAccepted((ATcpLink *)0x0);
          ExceptionList = pvStack_10;
          return;
        }
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8,L"Could not spawn AcceptClass!");
        ExceptionList = pvStack_10;
        return;
      }
      if (*(int *)GLog_exref == 0) {
        ExceptionList = pvStack_10;
        return;
      }
      FOutputDevice::Logf2(this_00,*(EName *)GLog_exref,(ushort *)0x2f8);
      if (*(int *)GLog_exref == 0) {
        ExceptionList = pvStack_10;
        return;
      }
      FOutputDevice::Logf2(*(FOutputDevice **)(this + 0x3c8),*(EName *)GLog_exref,(ushort *)0x2f8);
      ExceptionList = pvStack_10;
      return;
    }
    if (*(int *)GLog_exref == 0) {
      ExceptionList = pvStack_10;
      return;
    }
    WSAGetLastError();
  }
  FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2f8);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701ae1 thunk_FUN_10713680 thunk -> 10713680

// ==== 10701aeb thunk_FUN_10712550 thunk -> 10712550

// ==== 10701af5 ATcpLink::execReadBinary

/* public: void __thiscall ATcpLink::execReadBinary(struct FFrame &,void * const) */

void __thiscall ATcpLink::execReadBinary(ATcpLink *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  char *buf;
  SOCKET s;
  char acStack_128 [264];
  ATcpLink *pAStack_20;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1af5  305  ?execReadBinary@ATcpLink@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_10743ac0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffecc;
  uStack_8 = 0;
  iStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pAStack_20 = this;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&iStack_18);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,acStack_128);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    buf = acStack_128;
  }
  else {
    buf = *(char **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (((DAT_1076a3f8 == 0) || (s = *(SOCKET *)(pAStack_20 + 0x3c0), s == 0xffffffff)) ||
     ((pAStack_20[0x3d8] != (ATcpLink)0x2 && (pAStack_20[0x3d8] != (ATcpLink)0x4)))) {
    *(undefined4 *)param_2 = 0;
    ExceptionList = pvStack_10;
    return;
  }
  if (*(SOCKET *)(pAStack_20 + 0x3c8) != 0xffffffff) {
    s = *(SOCKET *)(pAStack_20 + 0x3c8);
  }
  iVar2 = recv(s,buf,iStack_18,0);
  if (iVar2 != -1) {
    *(int *)param_2 = iVar2;
    ExceptionList = pvStack_10;
    return;
  }
  *(undefined4 *)param_2 = 0;
  iVar2 = WSAGetLastError();
  if ((iVar2 != 0x2733) && (*(int *)GLog_exref != 0)) {
    FOutputDevice::Logf2
              (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,(ushort *)0x2f8,
               L"ReadBinary: Error reading bytes.");
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10701afa thunk_FUN_10704430 thunk -> 10704430

// ==== 10701aff FTcpLink::SendPendingData

/* public: virtual void __thiscall FTcpLink::SendPendingData(void) */

void __thiscall FTcpLink::SendPendingData(FTcpLink *this)

{
  TArray<unsigned_char> *this_00;
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FOutputDevice *this_01;
  undefined4 uStack_420;
  char acStack_408 [1028];
  
                    /* 0x1aff  236  ?SendPendingData@FTcpLink@@UAEXXZ */
  iVar4 = *(int *)(this + 0x44);
  if (((iVar4 == 3) || (iVar4 == 5)) || (iVar4 == 4)) {
    iVar4 = *(int *)(this + 0x2c);
    while ((iVar4 != 0 &&
           ((FInternetLink::ThrottleSend == 0 || (0 < FInternetLink::BandwidthSendBudget))))) {
      iVar4 = *(int *)(this + 0x2c);
      if (0x1000 < iVar4) {
        iVar4 = 0x1000;
      }
      if ((FInternetLink::ThrottleSend != 0) && (FInternetLink::BandwidthSendBudget < iVar4)) {
        iVar4 = FInternetLink::BandwidthSendBudget;
      }
      this_00 = (TArray<unsigned_char> *)(this + 0x28);
      iVar4 = send(*(SOCKET *)(this + 0x18),*(char **)(this + 0x28),iVar4,0);
      if (iVar4 == *(int *)(this + 0x2c)) {
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + iVar4;
        lVar1 = rdtsc();
        dVar2 = (double)(int)((ulonglong)lVar1 >> 0x20);
        if (lVar1 < 0) {
          dVar2 = dVar2 + 4294967296.0;
        }
        dVar3 = (double)(int)lVar1;
        if ((int)lVar1 < 0) {
          dVar3 = dVar3 + 4294967296.0;
        }
        uStack_420 = (undefined4)
                     (longlong)
                     ROUND((dVar3 + dVar2 * 4294967296.0) * *(double *)GSecondsPerCycle_exref +
                           16777216.0);
        *(undefined4 *)(this + 0x40) = uStack_420;
        if (FInternetLink::ThrottleSend != 0) {
          FInternetLink::BandwidthSendBudget = FInternetLink::BandwidthSendBudget - iVar4;
        }
        TArray<unsigned_char>::Empty(this_00,0);
      }
      else if (iVar4 == -1) {
        iVar4 = WSAGetLastError();
        if (iVar4 == 0x2733) break;
        iVar4 = WSAGetLastError();
        FOutputDevice::Logf(this_01,*(ushort **)GWarn_exref,
                            L"!!SendPendingData() got SOCKET_ERROR: %d",iVar4);
        *(undefined4 *)(this + 0x44) = 5;
        TArray<unsigned_char>::Empty(this_00,0);
      }
      else {
        TArray<unsigned_char>::Remove(this_00,0,iVar4);
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + iVar4;
        lVar1 = rdtsc();
        dVar2 = (double)(int)((ulonglong)lVar1 >> 0x20);
        if (lVar1 < 0) {
          dVar2 = dVar2 + 4294967296.0;
        }
        dVar3 = (double)(int)lVar1;
        if ((int)lVar1 < 0) {
          dVar3 = dVar3 + 4294967296.0;
        }
        uStack_420 = (undefined4)
                     (longlong)
                     ROUND((dVar3 + dVar2 * 4294967296.0) * *(double *)GSecondsPerCycle_exref +
                           16777216.0);
        *(undefined4 *)(this + 0x40) = uStack_420;
        if (FInternetLink::ThrottleSend != 0) {
          FInternetLink::BandwidthSendBudget = FInternetLink::BandwidthSendBudget - iVar4;
        }
      }
      iVar4 = *(int *)(this + 0x2c);
    }
    if ((*(int *)(this + 0x44) == 5) && (*(int *)(this + 0x2c) == 0)) {
      shutdown(*(SOCKET *)(this + 0x18),2);
      *(undefined4 *)(this + 0x44) = 4;
    }
    if ((*(int *)(this + 0x44) == 4) &&
       (iVar4 = recv(*(SOCKET *)(this + 0x18),acStack_408,0x400,0), iVar4 < 1)) {
      closesocket(*(SOCKET *)(this + 0x18));
      *(undefined4 *)(this + 0x44) = 0;
      *(undefined4 *)(this + 0x18) = 0xffffffff;
    }
  }
  return;
}


// ==== 10701b04 UTcpipConnection::UTcpipConnection

/* protected: __thiscall UTcpipConnection::UTcpipConnection(void) */

UTcpipConnection * __thiscall UTcpipConnection::UTcpipConnection(UTcpipConnection *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b04  45  ??0UTcpipConnection@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10743369;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UNetConnection::UNetConnection((UNetConnection *)this);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  *(undefined ***)(this + 0x38) = vftable_for_FExec_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10701b0e thunk_FUN_1070e090 thunk -> 1070e090

// ==== 10701b13 AServerQueryClient::execPingServer

/* public: void __thiscall AServerQueryClient::execPingServer(struct FFrame &,void * const) */

void __thiscall
AServerQueryClient::execPingServer(AServerQueryClient *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  char *cp;
  ulong netlong;
  u_long uVar3;
  int iVar4;
  FFrame *pFStack_a8;
  FString *pFStack_a4;
  FFrame *pFStack_a0;
  undefined4 *puStack_9c;
  FString aFStack_88 [12];
  undefined4 auStack_7c [16];
  void *pvStack_3c;
  uint uStack_34;
  undefined1 uStack_2c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b13  303  ?execPingServer@AServerQueryClient@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107432d2;
  pvStack_c = ExceptionList;
  auStack_7c[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_9c = auStack_7c;
  pFStack_a0 = param_1;
  pFStack_a4 = (FString *)0x1071170a;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  aFStack_88[0] = (FString)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_a4 = aFStack_88;
  pFStack_a8 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  FString::FString(aFStack_88);
  uStack_14 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_a0 = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_a4 = (FString *)((uint)pFStack_a4 & 0xffffff00);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&pFStack_a4);
  FServerResponseLine::FServerResponseLine((FServerResponseLine *)&stack0xffffff6c);
  uStack_2c = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&stack0xffffff6c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  Init(this);
  puVar2 = FString::operator*((FString *)&pFStack_a8);
  cp = appToAnsi(puVar2,(char *)0x0);
  netlong = inet_addr(cp);
  uVar3 = ntohl(netlong);
  iVar4 = FString::operator==((FString *)&pFStack_a8,(ushort *)L"BROADCAST");
  if (iVar4 != 0) {
    uVar3 = 0xffffffff;
  }
  thunk_FUN_1070e8d0(*(void **)(this + 0x3bc),aFStack_88,(char)param_1,uVar3,param_1,
                     (char)&pFStack_a0,(FServerResponseLine *)&puStack_9c);
  uStack_34 = uStack_34 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&puStack_9c);
  uStack_34 = 0xffffffff;
  FString::~FString((FString *)&pFStack_a8);
  ExceptionList = pvStack_3c;
  return;
}


// ==== 10701b18 AServerQueryClient::operator=

/* public: class AServerQueryClient & __thiscall AServerQueryClient::operator=(class
   AServerQueryClient const &) */

AServerQueryClient * __thiscall
AServerQueryClient::operator=(AServerQueryClient *this,AServerQueryClient *param_1)

{
                    /* 0x1b18  92  ??4AServerQueryClient@@QAEAAV0@ABV0@@Z */
  AMasterServerLink::operator=((AMasterServerLink *)this,(AMasterServerLink *)param_1);
  *(uint *)(this + 0x41c) =
       *(uint *)(this + 0x41c) ^ (*(uint *)(param_1 + 0x41c) ^ *(uint *)(this + 0x41c)) & 1;
  *(undefined4 *)(this + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)(this + 0x424) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)(this + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(this + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
  return this;
}


// ==== 10701b1d _DllMain@12 thunk -> 1070dd50

// ==== 10701b27 AMasterServerUplink::operator_new

/* public: static void * __cdecl AMasterServerUplink::operator new(unsigned int,enum EInternal *) */

void * __cdecl AMasterServerUplink::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1b27  76  ??2AMasterServerUplink@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10702660 FUN_10702660

float10 FUN_10702660(void)

{
  longlong lVar1;
  float10 fVar2;
  float10 fVar3;
  
  lVar1 = rdtsc();
  fVar2 = (float10)(int)((ulonglong)lVar1 >> 0x20);
  if (lVar1 < 0) {
    fVar2 = fVar2 + (float10)4294967296.0;
  }
  fVar3 = (float10)(int)lVar1;
  if ((int)lVar1 < 0) {
    fVar3 = fVar3 + (float10)4294967296.0;
  }
  return (fVar3 + fVar2 * (float10)4294967296.0) * (float10)*(double *)GSecondsPerCycle_exref +
         (float10)16777216.0;
}


// ==== 107026d0 FUN_107026d0

void __cdecl FUN_107026d0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_10749b4c);
  return;
}


// ==== 107026f0 FUN_107026f0

void __cdecl FUN_107026f0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 10702730 FUN_10702730

int * __cdecl FUN_10702730(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,1);
  return param_1;
}


// ==== 10702750 FUN_10702750

FArchive * __cdecl FUN_10702750(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 10702770 FUN_10702770

FArchive * __cdecl FUN_10702770(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 107027d0 FUN_107027d0

void __fastcall FUN_107027d0(TArray<unsigned_char> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107416a9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10702820 FUN_10702820

undefined4 __fastcall FUN_10702820(undefined4 param_1)

{
  return param_1;
}


// ==== 10702830 FUN_10702830

u_long * __thiscall FUN_10702830(void *this,ushort *param_1,u_long param_2)

{
  char *cp;
  ulong netlong;
  u_long uVar1;
  
  cp = appToAnsi(param_1,(char *)0x0);
  netlong = inet_addr(cp);
  uVar1 = ntohl(netlong);
  *(u_long *)this = uVar1;
  *(u_long *)((int)this + 4) = param_2;
  return this;
}


// ==== 10702870 FUN_10702870

undefined4 __thiscall FUN_10702870(void *this,int *param_1)

{
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 107028a0 FUN_107028a0

FArchive * __cdecl FUN_107028a0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  return param_1;
}


// ==== 107028e0 FUN_107028e0

void __thiscall FUN_107028e0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}


// ==== 10702900 FUN_10702900

void __fastcall FUN_10702900(sockaddr *param_1)

{
  u_short uVar1;
  uint uVar2;
  int local_4;
  
  local_4 = 0x10;
  getsockname(*(SOCKET *)(param_1[1].sa_data + 2),param_1,&local_4);
  uVar1 = ntohs(*(u_short *)param_1->sa_data);
  uVar2 = (uint)uVar1;
  param_1[1].sa_family = (short)uVar2;
  param_1[1].sa_data[0] = (char)(uVar2 >> 0x10);
  param_1[1].sa_data[1] = (char)(uVar2 >> 0x18);
  return;
}


// ==== 10702940 FUN_10702940

void __thiscall FUN_10702940(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return;
}


// ==== 10702980 FUN_10702980

FArchive * __thiscall FUN_10702980(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107416c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(this);
  *(undefined ***)this = FArchiveTcpSocket::vftable;
  *(undefined4 *)((int)this + 0x38) = param_1;
  ExceptionList = local_c;
  return this;
}


// ==== 107029f0 FUN_107029f0

void __thiscall FUN_107029f0(void *this,uint param_1)

{
  *(uint *)((int)this + 4) = param_1;
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  return;
}


// ==== 10702a10 FUN_10702a10

void __fastcall FUN_10702a10(undefined4 *param_1)

{
  *param_1 = _vftable__exref;
  return;
}


// ==== 10702a60 FUN_10702a60

FArchive * __thiscall FUN_10702a60(void *this,FArchive *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741709;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(this,param_1);
  *(undefined ***)this = FArchiveTcpSocket::vftable;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = local_c;
  return this;
}


// ==== 10702ad0 FUN_10702ad0

FArchive * __thiscall FUN_10702ad0(void *this,FArchive *param_1)

{
  FArchive::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


// ==== 10702b00 FUN_10702b00

undefined4 * __thiscall FUN_10702b00(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741729;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *(code **)this = _vftable__exref;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10702b70 FUN_10702b70

undefined4 * __thiscall FUN_10702b70(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741749;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (this,0x3c,*(int *)((int)this + -4),FArchiveTcpSocket::~FArchiveTcpSocket);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((undefined4 *)((int)this + -4));
    }
    ExceptionList = local_c;
    return (undefined4 *)((int)this + -4);
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *(code **)this = _vftable__exref;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10702c40 FUN_10702c40

FArchiveTcpSocket * __thiscall FUN_10702c40(void *this,FArchiveTcpSocket *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741774;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchiveTcpSocket::FArchiveTcpSocket(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FArchiveTcpWriter::vftable;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)((int)this + 0x3c),(TArray<unsigned_char> *)(param_1 + 0x3c));
  ExceptionList = local_c;
  return this;
}


// ==== 10702cc0 FUN_10702cc0

FArchive * __thiscall FUN_10702cc0(void *this,FArchive *param_1)

{
  FArchive::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)((int)this + 0x3c),(TArray<unsigned_char> *)(param_1 + 0x3c));
  return this;
}


// ==== 10702d00 FUN_10702d00

FArchiveTcpWriter * __thiscall FUN_10702d00(void *this,byte param_1)

{
  FArchiveTcpWriter::~FArchiveTcpWriter(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10702d30 FUN_10702d30

FArchiveTcpWriter * __thiscall FUN_10702d30(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x48,*(int *)((int)this + -4),FArchiveTcpWriter::~FArchiveTcpWriter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FArchiveTcpWriter *)((int)this + -4));
    }
    return (FArchiveTcpWriter *)((int)this + -4);
  }
  FArchiveTcpWriter::~FArchiveTcpWriter(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10702db0 FUN_10702db0

void __fastcall FUN_10702db0(undefined4 *param_1)

{
  *param_1 = _vftable__exref;
  return;
}


// ==== 10702e00 FUN_10702e00

FArchive * __thiscall FUN_10702e00(void *this,FArchive *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107417b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(this,param_1);
  *(undefined ***)this = FArchiveUdpReader::vftable;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return this;
}


// ==== 10702e80 FUN_10702e80

FArchive * __thiscall FUN_10702e80(void *this,FArchive *param_1)

{
  FArchive::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 10702eb0 FUN_10702eb0

undefined4 * __thiscall FUN_10702eb0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107417d9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *(code **)this = _vftable__exref;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10702f20 FUN_10702f20

undefined4 * __thiscall FUN_10702f20(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107417f9;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (this,0x40,*(int *)((int)this + -4),FArchiveUdpReader::~FArchiveUdpReader);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((undefined4 *)((int)this + -4));
    }
    ExceptionList = local_c;
    return (undefined4 *)((int)this + -4);
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *(code **)this = _vftable__exref;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10702ff0 FUN_10702ff0

void __fastcall FUN_10702ff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741825;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 0x11));
  *param_1 = _vftable__exref;
  ExceptionList = local_c;
  return;
}


// ==== 10703050 FUN_10703050

FArchive * __thiscall FUN_10703050(void *this,FArchive *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741855;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FArchiveUdpWriter::vftable;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)((int)this + 0x44),(TArray<unsigned_char> *)(param_1 + 0x44));
  ExceptionList = local_c;
  return this;
}


// ==== 107030e0 FUN_107030e0

FArchive * __thiscall FUN_107030e0(void *this,FArchive *param_1)

{
  FArchive::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)((int)this + 0x44),(TArray<unsigned_char> *)(param_1 + 0x44));
  return this;
}


// ==== 10703130 FUN_10703130

FArchiveUdpWriter * __thiscall FUN_10703130(void *this,byte param_1)

{
  FArchiveUdpWriter::~FArchiveUdpWriter(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10703160 FUN_10703160

FArchiveUdpWriter * __thiscall FUN_10703160(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x50,*(int *)((int)this + -4),FArchiveUdpWriter::~FArchiveUdpWriter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FArchiveUdpWriter *)((int)this + -4));
    }
    return (FArchiveUdpWriter *)((int)this + -4);
  }
  FArchiveUdpWriter::~FArchiveUdpWriter(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 107031e0 FUN_107031e0

undefined4 FUN_107031e0(void)

{
  if ((FInternetLink::ThrottleReceive != 0) && (FInternetLink::BandwidthReceiveBudget < 1)) {
    return 0;
  }
  return 1;
}


// ==== 10703210 FUN_10703210

void __fastcall FUN_10703210(undefined4 *param_1)

{
  *param_1 = FInternetLink::vftable;
  return;
}


// ==== 10703220 FUN_10703220

void __thiscall
FUN_10703220(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined ***)this = FInternetLink::vftable;
  *(undefined4 *)((int)this + 0x18) = param_6;
  return;
}


// ==== 10703270 FUN_10703270

void __thiscall FUN_10703270(void *this,int param_1)

{
  *(undefined ***)this = FInternetLink::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 107032c0 FUN_107032c0

void __thiscall FUN_107032c0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 10703300 FUN_10703300

void __thiscall FUN_10703300(void *this,int param_1)

{
  *(undefined ***)this = FInternetLink::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = FUdpLink::vftable;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}


// ==== 10703360 FUN_10703360

void __thiscall FUN_10703360(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}


// ==== 107033b0 FUN_107033b0

FUdpLink * __thiscall FUN_107033b0(void *this,byte param_1)

{
  FUdpLink::~FUdpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 107033e0 FUN_107033e0

FUdpLink * __thiscall FUN_107033e0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x28,*(int *)((int)this + -4),FUdpLink::~FUdpLink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FUdpLink *)((int)this + -4));
    }
    return (FUdpLink *)((int)this + -4);
  }
  FUdpLink::~FUdpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10703460 FUN_10703460

undefined4 __fastcall FUN_10703460(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ==== 10703470 FUN_10703470

undefined4 __fastcall FUN_10703470(int param_1)

{
  if (((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
     ((FInternetLink::ThrottleSend == 0 || (0 < FInternetLink::BandwidthSendBudget)))) {
    return 1;
  }
  return 0;
}


// ==== 107034a0 FUN_107034a0

undefined4 __fastcall FUN_107034a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) == 1) {
                    /* WARNING: Could not recover jumptable at 0x107034ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x68))();
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}


// ==== 107034c0 FUN_107034c0

void FUN_107034c0(void)

{
  return;
}


// ==== 107034d0 FUN_107034d0

void FUN_107034d0(void)

{
  return;
}


// ==== 107034e0 FUN_107034e0

void FUN_107034e0(void)

{
  return;
}


// ==== 107034f0 FUN_107034f0

void FUN_107034f0(void)

{
  return;
}


// ==== 10703500 FUN_10703500

void FUN_10703500(void)

{
  return;
}


// ==== 10703510 FUN_10703510

void FUN_10703510(void)

{
  return;
}


// ==== 10703520 FUN_10703520

void FUN_10703520(void)

{
  return;
}


// ==== 10703530 FUN_10703530

undefined4 * __thiscall FUN_10703530(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = FInternetLink::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = FTcpLink::vftable;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)((int)this + 0x1c),(TArray<unsigned_char> *)(param_1 + 0x1c));
  local_4 = 0;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)((int)this + 0x28),(TArray<unsigned_char> *)(param_1 + 0x28));
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = local_c;
  return this;
}


// ==== 10703630 FUN_10703630

int __thiscall FUN_10703630(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)((int)this + 0x1c),(TArray<unsigned_char> *)(param_1 + 0x1c));
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)((int)this + 0x28),(TArray<unsigned_char> *)(param_1 + 0x28));
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return (int)this;
}


// ==== 107036d0 FUN_107036d0

FTcpLink * __thiscall FUN_107036d0(void *this,byte param_1)

{
  FTcpLink::~FTcpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10703700 FUN_10703700

FTcpLink * __thiscall FUN_10703700(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x54,*(int *)((int)this + -4),FTcpLink::~FTcpLink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FTcpLink *)((int)this + -4));
    }
    return (FTcpLink *)((int)this + -4);
  }
  FTcpLink::~FTcpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10703780 FUN_10703780

FOutputDevice * __thiscall FUN_10703780(void *this,ushort *param_1)

{
  FCriticalSection *this_00;
  int iVar1;
  char *_Src;
  HANDLE hObject;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107418ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)GLog_exref != 0) {
    ExceptionList = &pvStack_c;
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref,L"Resolving %s...",param_1);
  }
  if (DAT_1076c314 == 0) {
    this_00 = (FCriticalSection *)(**(code **)**(undefined4 **)GMalloc_exref)(4,&DAT_10749b4c);
    uStack_4 = 0;
    if (this_00 == (FCriticalSection *)0x0) {
      DAT_1076c314 = 0;
    }
    else {
      DAT_1076c314 = FCriticalSection::FCriticalSection(this_00);
    }
    uStack_4 = 0xffffffff;
  }
  iVar1 = appStrlen(param_1);
  _Src = appToAnsi(param_1,(char *)0x0);
  _memcpy((void *)((int)this + 8),_Src,iVar1 + 1);
  *(undefined2 *)((int)this + 0x108) = 0;
  *(LPDWORD)((int)this + 4) = 1;
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_1070181b,this,0,
                         (LPDWORD)((int)this + 4));
  if (hObject == (HANDLE)0x0) {
    appFailAssert("hThread","..\\Inc\\UnIpDrv.h",0x81);
  }
  CloseHandle(hObject);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10703910 FUN_10703910

void __fastcall FUN_10703910(int param_1)

{
  appFromAnsi((char *)(param_1 + 8),(ushort *)0x0);
  return;
}


// ==== 10703930 FUN_10703930

u_short __cdecl FUN_10703930(SOCKET param_1,sockaddr *param_2,int param_3,short param_4)

{
  u_short uVar1;
  int iVar2;
  int iVar3;
  sockaddr local_34;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107418c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (param_3 <= iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    local_1c = iVar3;
    iVar2 = bind(param_1,param_2,0x10);
    uVar1 = *(u_short *)param_2->sa_data;
    if (iVar2 == 0) break;
    if (uVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    uVar1 = ntohs(uVar1);
    uVar1 = htons(uVar1 + param_4);
    *(u_short *)param_2->sa_data = uVar1;
    iVar3 = iVar3 + 1;
  }
  uVar1 = ntohs(uVar1);
  if (uVar1 == 0) {
    local_18 = 0x10;
    getsockname(param_1,&local_34,&local_18);
  }
  else {
    local_34.sa_data._0_2_ = *(undefined2 *)param_2->sa_data;
  }
  uVar1 = ntohs(local_34.sa_data._0_2_);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 107039e9 Catch@107039e9

void Catch_107039e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 107039fd Catch@107039fd

void Catch_107039fd(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"bindnextport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10703a60 FUN_10703a60

undefined4 __cdecl FUN_10703a60(ushort *param_1,uint *param_2)

{
  undefined1 uVar1;
  int iVar2;
  wchar_t *pwVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  char *name;
  hostent *phVar7;
  FString *this;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort local_52c;
  undefined1 local_52a [510];
  ushort local_32c;
  undefined1 local_32a [510];
  char local_12c;
  undefined1 local_12b [255];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107418d9;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffac8;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1071b5c0(param_2,0);
  local_32c = 0;
  _memset(local_32a,0,0x1fe);
  local_52c = 0;
  _memset(local_52a,0,0x1fe);
  local_12c = '\0';
  _memset(local_12b,0,0xff);
  iVar2 = gethostname(&local_12c,0x100);
  if (iVar2 != 0) {
    pwVar3 = thunk_FUN_1071b190(-1);
    FOutputDevice::Logf(this_00,param_1,L"%s: gethostname failed (%s)",L"WinSock",pwVar3);
  }
  puVar4 = appFromAnsi(&local_12c,(ushort *)0x0);
  appStrcpy(&local_52c,puVar4);
  iVar2 = 0x100;
  puVar4 = &local_32c;
  pwVar3 = L"MULTIHOME=";
  puVar5 = appCmdLine();
  iVar2 = Parse(puVar5,(ushort *)pwVar3,puVar4,iVar2);
  if (iVar2 != 0) {
    puVar4 = appStrchr(&local_32c,0x2e);
    this_01 = extraout_ECX;
    if (puVar4 != (ushort *)0x0) {
      puVar5 = appStrchr(puVar4 + 1,0x2e);
      this_01 = extraout_ECX_00;
      if (puVar5 != (ushort *)0x0) {
        puVar6 = appStrchr(puVar5 + 1,0x2e);
        this_01 = extraout_ECX_01;
        if (puVar6 != (ushort *)0x0) {
          iVar2 = appAtoi(puVar6 + 1);
          uVar9 = (undefined1)iVar2;
          iVar2 = appAtoi(puVar5 + 1);
          uVar8 = (undefined1)iVar2;
          iVar2 = appAtoi(puVar4 + 1);
          uVar1 = (undefined1)iVar2;
          iVar2 = appAtoi(&local_32c);
          thunk_FUN_1071b580((undefined1 *)param_2,(char)iVar2,uVar1,uVar8,uVar9);
          ExceptionList = local_10;
          return local_18;
        }
      }
    }
    FOutputDevice::Logf(this_01,param_1,L"Invalid multihome IP address %s",&local_32c);
    ExceptionList = local_10;
    return local_18;
  }
  name = appToAnsi(&local_52c,(char *)0x0);
  phVar7 = gethostbyname(name);
  if (phVar7 == (hostent *)0x0) {
    pwVar3 = thunk_FUN_1071b190(-1);
    FOutputDevice::Logf(this_02,param_1,L"gethostbyname failed (%s)",pwVar3);
    ExceptionList = local_10;
    return local_18;
  }
  if (phVar7->h_addrtype == 2) {
    *param_2 = *(uint *)*phVar7->h_addr_list;
    pwVar3 = L"PRIMARYNET";
    puVar4 = appCmdLine();
    iVar2 = ParseParam(puVar4,(ushort *)pwVar3);
    if (iVar2 == 0) {
      local_18 = 1;
    }
    if ((DAT_107671a0 == 0) && (DAT_107671a0 = 1, *(int *)GLog_exref != 0)) {
      this = thunk_FUN_1071b5d0(local_2c,*param_2,0);
      local_8._0_1_ = 1;
      puVar4 = FString::operator*(this);
      FOutputDevice::Logf2
                ((FOutputDevice *)GLog_exref,*(EName *)GLog_exref,(ushort *)0x2fa,
                 L"%s: I am %s (%s)",L"WinSock",&local_52c,puVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_2c);
    }
    ExceptionList = local_10;
    return local_18;
  }
  pwVar3 = thunk_FUN_1071b190(-1);
  FOutputDevice::Logf(this_03,param_1,L"gethostbyname: non-Internet address (%s)",pwVar3);
  ExceptionList = local_10;
  return local_18;
}


// ==== 10703d38 Catch@10703d38

void Catch_10703d38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10703d4c Catch@10703d4c

void Catch_10703d4c(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"getlocalhostaddr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10703e30 FUN_10703e30

uint __cdecl FUN_10703e30(ushort *param_1)

{
  int iVar1;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107418f0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_10703a60(param_1,&local_18);
  if (iVar1 != 0) {
    thunk_FUN_1071b5c0(&local_18,0);
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 10703e8e Catch@10703e8e

void Catch_10703e8e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10703ea2 Catch@10703ea2

void Catch_10703ea2(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"getlocalbindaddr");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10703ef0 FUN_10703ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10703ef0(UObject *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)param_1;
  pUVar2 = UObject::FindFunctionChecked(param_1,_IPDRV_ResolveFailed,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10703f20 FUN_10703f20

UClass * FUN_10703f20(void)

{
  return &AInternetLink::PrivateStaticClass;
}


// ==== 10703f30 FUN_10703f30

void __cdecl
FUN_10703f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AInternetLink::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10703f70 FUN_10703f70

undefined4 __cdecl FUN_10703f70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10703f80 FUN_10703f80

void __fastcall FUN_10703f80(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AInternetLink::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  AInternetInfo::~AInternetInfo((AInternetInfo *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10703ff0 FUN_10703ff0

void __cdecl FUN_10703ff0(AInternetLink *param_1)

{
  if (param_1 != (AInternetLink *)0x0) {
    AInternetLink::AInternetLink(param_1);
    return;
  }
  return;
}


// ==== 10704010 FUN_10704010

int __fastcall FUN_10704010(int param_1)

{
  return param_1 + 0x3c0;
}


// ==== 10704020 FUN_10704020

int __fastcall FUN_10704020(int param_1)

{
  return param_1 + 0x3cc;
}


// ==== 10704030 FUN_10704030

AInternetInfo * __thiscall FUN_10704030(void *this,AInternetInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInternetInfo::AInternetInfo(this,param_1);
  *(undefined ***)this = AInternetLink::vftable;
  *(AInternetInfo *)((int)this + 0x3bc) = param_1[0x3bc];
  *(undefined4 *)((int)this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)((int)this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)((int)this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(AInternetInfo *)((int)this + 0x3d4) = param_1[0x3d4];
  ExceptionList = local_c;
  return this;
}


// ==== 10704110 FUN_10704110

AInternetInfo * __thiscall FUN_10704110(void *this,AInternetInfo *param_1)

{
  AInternetInfo::operator=(this,param_1);
  *(AInternetInfo *)((int)this + 0x3bc) = param_1[0x3bc];
  *(undefined4 *)((int)this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)((int)this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)((int)this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(AInternetInfo *)((int)this + 0x3d4) = param_1[0x3d4];
  return this;
}


// ==== 107041a0 FUN_107041a0

AInternetLink * __thiscall FUN_107041a0(void *this,byte param_1)

{
  AInternetLink::~AInternetLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3d8);
  }
  return this;
}


// ==== 107041d0 FUN_107041d0

AInternetLink * __thiscall FUN_107041d0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x3d8,*(int *)((int)this + -4),AInternetLink::~AInternetLink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AInternetLink *)((int)this + -4));
    }
    return (AInternetLink *)((int)this + -4);
  }
  AInternetLink::~AInternetLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3d8);
  }
  return this;
}


// ==== 10704260 FUN_10704260

UClass * FUN_10704260(void)

{
  return &AUdpLink::PrivateStaticClass;
}


// ==== 10704270 FUN_10704270

void __cdecl
FUN_10704270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AUdpLink::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 107042b0 FUN_107042b0

undefined4 __cdecl FUN_107042b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 107042c0 FUN_107042c0

void __fastcall FUN_107042c0(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AUdpLink::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  AInternetLink::~AInternetLink((AInternetLink *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10704330 FUN_10704330

void __cdecl FUN_10704330(AUdpLink *param_1)

{
  if (param_1 != (AUdpLink *)0x0) {
    AUdpLink::AUdpLink(param_1);
    return;
  }
  return;
}


// ==== 10704350 FUN_10704350

AInternetLink * __thiscall FUN_10704350(void *this,AInternetLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInternetLink::AInternetLink(this,param_1);
  *(undefined ***)this = AUdpLink::vftable;
  *(undefined4 *)((int)this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  ExceptionList = local_c;
  return this;
}


// ==== 107043d0 FUN_107043d0

AInternetLink * __thiscall FUN_107043d0(void *this,AInternetLink *param_1)

{
  AInternetLink::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  return this;
}


// ==== 10704400 FUN_10704400

AUdpLink * __thiscall FUN_10704400(void *this,byte param_1)

{
  AUdpLink::~AUdpLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3dc);
  }
  return this;
}


// ==== 10704430 FUN_10704430

AUdpLink * __thiscall FUN_10704430(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x3dc,*(int *)((int)this + -4),AUdpLink::~AUdpLink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AUdpLink *)((int)this + -4));
    }
    return (AUdpLink *)((int)this + -4);
  }
  AUdpLink::~AUdpLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3dc);
  }
  return this;
}


// ==== 107044c0 FUN_107044c0

int __fastcall FUN_107044c0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074198c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(param_1 + 8));
  ExceptionList = local_c;
  return param_1;
}


// ==== 10704510 FUN_10704510

void __fastcall FUN_10704510(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107419ac;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10704560 FUN_10704560

int __fastcall FUN_10704560(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107419cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(param_1 + 8));
  ExceptionList = local_c;
  return param_1;
}


// ==== 107045b0 FUN_107045b0

void __fastcall FUN_107045b0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107419ec;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10704600 FUN_10704600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10704600(void *this,undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  local_104 = param_1;
  _memcpy(local_100,&stack0x00000008,0xff);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &local_104;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ReceivedBinary,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10704680 FUN_10704680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10704680(UObject *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)param_1;
  pUVar2 = UObject::FindFunctionChecked(param_1,_IPDRV_Closed,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 107046b0 FUN_107046b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_107046b0(UObject *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)param_1;
  pUVar2 = UObject::FindFunctionChecked(param_1,_IPDRV_Opened,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 107046e0 FUN_107046e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_107046e0(UObject *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)param_1;
  pUVar2 = UObject::FindFunctionChecked(param_1,_IPDRV_Accepted,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10704710 FUN_10704710

UClass * FUN_10704710(void)

{
  return &ATcpLink::PrivateStaticClass;
}


// ==== 10704720 FUN_10704720

void __cdecl
FUN_10704720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ATcpLink::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10704760 FUN_10704760

undefined4 __cdecl FUN_10704760(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10704770 FUN_10704770

void __fastcall FUN_10704770(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10741a1f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = ATcpLink::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 1000));
  local_4 = 0xffffffff;
  AInternetLink::~AInternetLink((AInternetLink *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10704800 FUN_10704800

void __cdecl FUN_10704800(ATcpLink *param_1)

{
  if (param_1 != (ATcpLink *)0x0) {
    ATcpLink::ATcpLink(param_1);
    return;
  }
  return;
}


// ==== 10704820 FUN_10704820

undefined4 FUN_10704820(void)

{
  return 1;
}


// ==== 10704830 FUN_10704830

ATcpLink * __thiscall FUN_10704830(void *this,byte param_1)

{
  ATcpLink::~ATcpLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3f4);
  }
  return this;
}


// ==== 10704860 FUN_10704860

ATcpLink * __thiscall FUN_10704860(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x3f4,*(int *)((int)this + -4),ATcpLink::~ATcpLink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((ATcpLink *)((int)this + -4));
    }
    return (ATcpLink *)((int)this + -4);
  }
  ATcpLink::~ATcpLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3f4);
  }
  return this;
}


// ==== 107048e0 FUN_107048e0

FString * __fastcall FUN_107048e0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741a49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10704930 FUN_10704930

void __fastcall FUN_10704930(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741a69;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10704980 FUN_10704980

FString * __fastcall FUN_10704980(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741a89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 107049d0 FUN_107049d0

void __fastcall FUN_107049d0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741aa9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10704a20 FUN_10704a20

TArray<unsigned_char> * __thiscall FUN_10704a20(void *this,TArray<unsigned_char> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741ac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_char>::TArray<unsigned_char>(this,param_1);
  ExceptionList = local_c;
  return this;
}


// ==== 10704a80 FUN_10704a80

UClass * FUN_10704a80(void)

{
  return &AMasterServerGameStats::PrivateStaticClass;
}


// ==== 10704a90 FUN_10704a90

void __cdecl
FUN_10704a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMasterServerGameStats::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10704ad0 FUN_10704ad0

undefined4 __cdecl FUN_10704ad0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10704ae0 FUN_10704ae0

void __fastcall FUN_10704ae0(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741ae9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AMasterServerGameStats::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  AGameStats::~AGameStats((AGameStats *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10704b50 FUN_10704b50

AGameStats * __fastcall FUN_10704b50(AGameStats *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741b09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AGameStats::AGameStats(param_1);
  *(undefined ***)param_1 = AMasterServerGameStats::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10704bb0 FUN_10704bb0

AGameStats * __thiscall FUN_10704bb0(void *this,AGameStats *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AGameStats::AGameStats(this,param_1);
  *(undefined ***)this = AMasterServerGameStats::vftable;
  *(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  ExceptionList = local_c;
  return this;
}


// ==== 10704c30 FUN_10704c30

AGameStats * __thiscall FUN_10704c30(void *this,AGameStats *param_1)

{
  AGameStats::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  return this;
}


// ==== 10704c60 FUN_10704c60

AMasterServerGameStats * __thiscall FUN_10704c60(void *this,byte param_1)

{
  AMasterServerGameStats::~AMasterServerGameStats(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3cc);
  }
  return this;
}


// ==== 10704c90 FUN_10704c90

AMasterServerGameStats * __thiscall FUN_10704c90(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x3cc,*(int *)((int)this + -4),AMasterServerGameStats::~AMasterServerGameStats);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AMasterServerGameStats *)((int)this + -4));
    }
    return (AMasterServerGameStats *)((int)this + -4);
  }
  AMasterServerGameStats::~AMasterServerGameStats(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3cc);
  }
  return this;
}


// ==== 10704d10 FUN_10704d10

UClass * FUN_10704d10(void)

{
  return &AMasterServerLink::PrivateStaticClass;
}


// ==== 10704d20 FUN_10704d20

void __cdecl
FUN_10704d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMasterServerLink::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10704d60 FUN_10704d60

undefined4 __cdecl FUN_10704d60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10704d70 FUN_10704d70

void __fastcall FUN_10704d70(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10741b63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AMasterServerLink::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x3e0,0xc,5,~FStringNoInit_exref);
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10704e00 FUN_10704e00

undefined4 FUN_10704e00(void)

{
  return 0;
}


// ==== 10704e10 FUN_10704e10

AInfo * __fastcall FUN_10704e10(AInfo *param_1)

{
  code *pcVar1;
  code *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(param_1);
  pcVar2 = FStringNoInit_exref;
  pcVar1 = ~FStringNoInit_exref;
  local_4 = 0;
  *(undefined ***)param_1 = AMasterServerLink::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x3e0,0xc,5,pcVar2,pcVar1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10704ea0 FUN_10704ea0

AInfo * __thiscall FUN_10704ea0(void *this,AInfo *param_1)

{
  code *pcVar1;
  code *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741bc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(this,param_1);
  local_4 = 0;
  *(undefined ***)this = AMasterServerLink::vftable;
  *(undefined4 *)((int)this + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)((int)this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)((int)this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)((int)this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  pcVar1 = ~FStringNoInit_exref;
  *(undefined4 *)((int)this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  pcVar2 = FStringNoInit_exref;
  *(undefined4 *)((int)this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0x3e0),param_1 + 0x3e0,0xc,5,pcVar2,pcVar1);
  ExceptionList = local_c;
  return this;
}


// ==== 10704fc0 FUN_10704fc0

AInfo * __thiscall FUN_10704fc0(void *this,AInfo *param_1)

{
  FStringNoInit *this_00;
  int iVar1;
  
  AInfo::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)((int)this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)((int)this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)((int)this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)((int)this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)((int)this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)((int)this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  this_00 = (FStringNoInit *)((int)this + 0x3e0);
  iVar1 = 5;
  do {
    FStringNoInit::operator=(this_00,this_00 + ((int)param_1 - (int)this));
    this_00 = this_00 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}


// ==== 107050a0 FUN_107050a0

AMasterServerLink * __thiscall FUN_107050a0(void *this,byte param_1)

{
  AMasterServerLink::~AMasterServerLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x41c);
  }
  return this;
}


// ==== 107050d0 FUN_107050d0

AMasterServerLink * __thiscall FUN_107050d0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x41c,*(int *)((int)this + -4),AMasterServerLink::~AMasterServerLink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AMasterServerLink *)((int)this + -4));
    }
    return (AMasterServerLink *)((int)this + -4);
  }
  AMasterServerLink::~AMasterServerLink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x41c);
  }
  return this;
}


// ==== 10705150 FUN_10705150

FString * __fastcall FUN_10705150(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741be9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 107051a0 FUN_107051a0

void __fastcall FUN_107051a0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741c09;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 107051f0 FUN_107051f0

FArchive * __cdecl FUN_107051f0(FArchive *param_1,FString *param_2)

{
  FArchive *pFVar1;
  FString *pFVar2;
  
  pFVar2 = param_2 + 0xc;
  pFVar1 = operator<<(param_1,param_2);
  pFVar1 = operator<<(pFVar1,pFVar2);
  FArchive::ByteOrderSerialize(pFVar1,param_2 + 0x18,4);
  return pFVar1;
}


// ==== 10705240 FUN_10705240

FString * __fastcall FUN_10705240(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741c35;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  local_4 = 0;
  FString::FString(param_1 + 0xc);
  ExceptionList = local_c;
  return param_1;
}


// ==== 107052b0 FUN_107052b0

void __fastcall FUN_107052b0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741c65;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(param_1 + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10705320 FUN_10705320

FString * __thiscall FUN_10705320(void *this,FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741c95;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(this,param_1);
  local_4 = 0;
  FString::FString((FString *)((int)this + 0xc),param_1 + 0xc);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return this;
}


// ==== 107053a0 FUN_107053a0

FString * __thiscall FUN_107053a0(void *this,FString *param_1)

{
  FString::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0xc),param_1 + 0xc);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


// ==== 107053e0 FUN_107053e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_107053e0(UObject *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)param_1;
  pUVar2 = UObject::FindFunctionChecked(param_1,_IPDRV_Refresh,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  return;
}


// ==== 10705410 FUN_10705410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10705410(void *this,undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &param_1;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ConnectionFailed,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10705450 FUN_10705450

UClass * FUN_10705450(void)

{
  return &AMasterServerUplink::PrivateStaticClass;
}


// ==== 10705460 FUN_10705460

void __cdecl
FUN_10705460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMasterServerUplink::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 107054a0 FUN_107054a0

undefined4 __cdecl FUN_107054a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 107054b0 FUN_107054b0

void __fastcall FUN_107054b0(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10741cc7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AMasterServerUplink::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)(param_1 + 0x41c));
  local_4 = 0xffffffff;
  AMasterServerLink::~AMasterServerLink((AMasterServerLink *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10705530 FUN_10705530

AMasterServerLink * __fastcall FUN_10705530(AMasterServerLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741cf7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AMasterServerLink::AMasterServerLink(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = AMasterServerUplink::vftable;
  FServerResponseLine::FServerResponseLine((FServerResponseLine *)(param_1 + 0x41c));
  ExceptionList = local_c;
  return param_1;
}


// ==== 107055a0 FUN_107055a0

AMasterServerLink * __thiscall FUN_107055a0(void *this,AMasterServerLink *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741d27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AMasterServerLink::AMasterServerLink(this,param_1);
  local_4 = 0;
  *(undefined ***)this = AMasterServerUplink::vftable;
  FServerResponseLine::FServerResponseLine
            ((FServerResponseLine *)((int)this + 0x41c),(FServerResponseLine *)(param_1 + 0x41c));
  *(undefined4 *)((int)this + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)((int)this + 0x480) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)((int)this + 0x484) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)((int)this + 0x488) = *(undefined4 *)(param_1 + 0x488);
  *(uint *)((int)this + 0x48c) =
       *(uint *)((int)this + 0x48c) ^
       (*(uint *)((int)this + 0x48c) ^ *(uint *)(param_1 + 0x48c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ *(uint *)((int)this + 0x48c)) & 2 ^
          *(uint *)((int)this + 0x48c);
  *(uint *)((int)this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)((int)this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)((int)this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)((int)this + 0x48c) = uVar1;
  *(uint *)((int)this + 0x48c) = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x20 ^ uVar1;
  ExceptionList = local_c;
  return this;
}


// ==== 10705700 FUN_10705700

AMasterServerLink * __thiscall FUN_10705700(void *this,AMasterServerLink *param_1)

{
  uint uVar1;
  
  AMasterServerLink::operator=(this,param_1);
  FServerResponseLine::operator=
            ((FServerResponseLine *)((int)this + 0x41c),(FServerResponseLine *)(param_1 + 0x41c));
  *(undefined4 *)((int)this + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)((int)this + 0x480) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)((int)this + 0x484) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)((int)this + 0x488) = *(undefined4 *)(param_1 + 0x488);
  *(uint *)((int)this + 0x48c) =
       *(uint *)((int)this + 0x48c) ^
       (*(uint *)((int)this + 0x48c) ^ *(uint *)(param_1 + 0x48c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ *(uint *)((int)this + 0x48c)) & 2 ^
          *(uint *)((int)this + 0x48c);
  *(uint *)((int)this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)((int)this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)((int)this + 0x48c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)((int)this + 0x48c) = uVar1;
  *(uint *)((int)this + 0x48c) = (*(uint *)(param_1 + 0x48c) ^ uVar1) & 0x20 ^ uVar1;
  return this;
}


// ==== 10705810 FUN_10705810

AMasterServerUplink * __thiscall FUN_10705810(void *this,byte param_1)

{
  AMasterServerUplink::~AMasterServerUplink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x490);
  }
  return this;
}


// ==== 10705840 FUN_10705840

AMasterServerUplink * __thiscall FUN_10705840(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x490,*(int *)((int)this + -4),AMasterServerUplink::~AMasterServerUplink);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AMasterServerUplink *)((int)this + -4));
    }
    return (AMasterServerUplink *)((int)this + -4);
  }
  AMasterServerUplink::~AMasterServerUplink(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x490);
  }
  return this;
}


// ==== 107058c0 FUN_107058c0

FString * __fastcall FUN_107058c0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741d49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10705910 FUN_10705910

void __fastcall FUN_10705910(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741d69;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10705960 FUN_10705960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10705960(void *this,undefined4 param_1,undefined1 param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  local_4 = param_2;
  local_8 = param_1;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnPingTimeout,(int)this + 0x428,&local_8,0);
  return;
}


// ==== 107059b0 FUN_107059b0

UClass * FUN_107059b0(void)

{
  return &AServerQueryClient::PrivateStaticClass;
}


// ==== 107059c0 FUN_107059c0

void __cdecl
FUN_107059c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AServerQueryClient::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10705a00 FUN_10705a00

undefined4 __cdecl FUN_10705a00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10705a10 FUN_10705a10

void __fastcall FUN_10705a10(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AServerQueryClient::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  AMasterServerLink::~AMasterServerLink((AMasterServerLink *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10705a80 FUN_10705a80

AMasterServerLink * __fastcall FUN_10705a80(AMasterServerLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AMasterServerLink::AMasterServerLink(param_1);
  *(undefined ***)param_1 = AServerQueryClient::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10705ae0 FUN_10705ae0

AMasterServerLink * __thiscall FUN_10705ae0(void *this,AMasterServerLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AMasterServerLink::AMasterServerLink(this,param_1);
  *(undefined ***)this = AServerQueryClient::vftable;
  *(uint *)((int)this + 0x41c) =
       *(uint *)((int)this + 0x41c) ^
       (*(uint *)(param_1 + 0x41c) ^ *(uint *)((int)this + 0x41c)) & 1;
  *(undefined4 *)((int)this + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)((int)this + 0x424) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)((int)this + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)((int)this + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
  ExceptionList = local_c;
  return this;
}


// ==== 10705ba0 FUN_10705ba0

AMasterServerLink * __thiscall FUN_10705ba0(void *this,AMasterServerLink *param_1)

{
  AMasterServerLink::operator=(this,param_1);
  *(uint *)((int)this + 0x41c) =
       *(uint *)((int)this + 0x41c) ^
       (*(uint *)(param_1 + 0x41c) ^ *(uint *)((int)this + 0x41c)) & 1;
  *(undefined4 *)((int)this + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)((int)this + 0x424) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)((int)this + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)((int)this + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
  return this;
}


// ==== 10705c10 FUN_10705c10

AServerQueryClient * __thiscall FUN_10705c10(void *this,byte param_1)

{
  AServerQueryClient::~AServerQueryClient(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x430);
  }
  return this;
}


// ==== 10705c40 FUN_10705c40

AServerQueryClient * __thiscall FUN_10705c40(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x430,*(int *)((int)this + -4),AServerQueryClient::~AServerQueryClient);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AServerQueryClient *)((int)this + -4));
    }
    return (AServerQueryClient *)((int)this + -4);
  }
  AServerQueryClient::~AServerQueryClient(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x430);
  }
  return this;
}


// ==== 10705cc0 FUN_10705cc0

int __fastcall FUN_10705cc0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741dec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FServerResponseLine::FServerResponseLine((FServerResponseLine *)(param_1 + 8));
  ExceptionList = local_c;
  return param_1;
}


// ==== 10705d10 FUN_10705d10

void __fastcall FUN_10705d10(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741e0c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


// ==== 10705d60 FUN_10705d60

FArchive * __cdecl FUN_10705d60(FArchive *param_1,FString *param_2)

{
  FArchive *pFVar1;
  FString *pFVar2;
  
  pFVar2 = param_2 + 0xc;
  pFVar1 = operator<<(param_1,param_2);
  pFVar1 = operator<<(pFVar1,pFVar2);
  (**(code **)(*(int *)pFVar1 + 4))(param_2 + 0x18,1);
  return pFVar1;
}


// ==== 10705db0 FUN_10705db0

FString * __fastcall FUN_10705db0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741e35;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1);
  local_4 = 0;
  FString::FString(param_1 + 0xc);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10705e20 FUN_10705e20

void __fastcall FUN_10705e20(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741e65;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(param_1 + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10705e90 FUN_10705e90

FString * __thiscall FUN_10705e90(void *this,FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741e95;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(this,param_1);
  local_4 = 0;
  FString::FString((FString *)((int)this + 0xc),param_1 + 0xc);
  *(FString *)((int)this + 0x18) = param_1[0x18];
  ExceptionList = local_c;
  return this;
}


// ==== 10705f10 FUN_10705f10

FString * __thiscall FUN_10705f10(void *this,FString *param_1)

{
  FString::operator=(this,param_1);
  FString::operator=((FString *)((int)this + 0xc),param_1 + 0xc);
  *(FString *)((int)this + 0x18) = param_1[0x18];
  return this;
}


// ==== 10705f50 FUN_10705f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10705f50(void *this,undefined1 param_1,undefined4 param_2)

{
  undefined1 local_8 [4];
  undefined4 local_4;
  
  local_4 = param_2;
  local_8[0] = param_1;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnQueryFinished,(int)this + 0x444,local_8,0);
  return;
}


// ==== 10705fa0 FUN_10705fa0

UClass * FUN_10705fa0(void)

{
  return &AMasterServerClient::PrivateStaticClass;
}


// ==== 10705fb0 FUN_10705fb0

void __cdecl
FUN_10705fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMasterServerClient::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10705ff0 FUN_10705ff0

undefined4 __cdecl FUN_10705ff0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10706000 FUN_10706000

int __fastcall FUN_10706000(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741ebc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(param_1 + 4));
  ExceptionList = local_c;
  return param_1;
}


// ==== 10706050 FUN_10706050

void __fastcall FUN_10706050(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741edc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


// ==== 107060a0 FUN_107060a0

FServerResponseLine * __fastcall FUN_107060a0(FServerResponseLine *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741ef9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FServerResponseLine::FServerResponseLine(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 107060f0 FUN_107060f0

void __fastcall FUN_107060f0(FServerResponseLine *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741f19;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FServerResponseLine::~FServerResponseLine(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10706160 FUN_10706160

void __fastcall FUN_10706160(int param_1)

{
  undefined4 uVar1;
  UObject *pUVar2;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10741f30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  ExceptionList = &local_10;
  FName::FName((FName *)&local_18,(ushort *)L"ProxyServerHost",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,local_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UStrProperty::UStrProperty((UStrProperty *)pUVar2,0,0x460,(ushort *)L"Settings",0x4000);
    *(undefined ***)pUVar2 = UStrProperty::vftable;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FName::FName((FName *)&local_18,(ushort *)L"ProxyServerPort",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,local_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UIntProperty::UIntProperty((UIntProperty *)pUVar2,0,0x46c,(ushort *)L"Settings",0x4000);
    *(undefined ***)pUVar2 = UIntProperty::vftable;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FName::FName((FName *)&local_18,(ushort *)L"RedirectToURL",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,local_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UStrProperty::UStrProperty((UStrProperty *)pUVar2,0,0x40,(ushort *)L"Settings",0x4000);
    *(undefined ***)pUVar2 = UStrProperty::vftable;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FName::FName((FName *)&local_18,(ushort *)L"UseCompression",1);
  pUVar2 = UObject::StaticAllocateObject
                     (PrivateStaticClass_exref,uVar1,local_18,4,0,*(undefined4 *)GError_exref,0,0);
  if (pUVar2 != (UObject *)0x0) {
    UBoolProperty::UBoolProperty((UBoolProperty *)pUVar2,0,0x4c,(ushort *)L"Settings",0x4000);
    *(undefined ***)pUVar2 = UBoolProperty::vftable;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10706306 Catch@10706306

void Catch_10706306(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1070631a Catch@1070631a

void Catch_1070631a(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107063b0 FUN_107063b0

UIntProperty * __thiscall FUN_107063b0(void *this,byte param_1)

{
  UIntProperty::~UIntProperty(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x78);
  }
  return this;
}


// ==== 107063e0 FUN_107063e0

UBoolProperty * __thiscall FUN_107063e0(void *this,byte param_1)

{
  UBoolProperty::~UBoolProperty(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x7c);
  }
  return this;
}


// ==== 10706410 FUN_10706410

UStrProperty * __thiscall FUN_10706410(void *this,byte param_1)

{
  UStrProperty::~UStrProperty(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x78);
  }
  return this;
}


// ==== 10706440 FUN_10706440

undefined4 __fastcall FUN_10706440(int *param_1)

{
  size_t _Size;
  int iVar1;
  ushort *puVar2;
  FOutputDevice *this;
  char local_420 [1036];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10741f40;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbd4;
  local_8 = 0;
  ExceptionList = &local_10;
  _Size = recv(param_1[0x125],local_420,0x400,0);
  if (_Size != 0) {
    if (_Size != 0xffffffff) {
      iVar1 = FArray::Add((FArray *)(param_1 + 0x138),_Size,1);
      _memcpy((void *)(param_1[0x138] + iVar1),local_420,_Size);
      ExceptionList = local_10;
      return 1;
    }
    iVar1 = WSAGetLastError();
    if (iVar1 == 0x2733) {
      ExceptionList = local_10;
      return 0;
    }
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this,*(EName *)GLog_exref,(ushort *)0x304,L"HTTPDownload: recv() failed")
      ;
    }
    iVar1 = *param_1;
    puVar2 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
    (**(code **)(iVar1 + 0x78))(puVar2);
  }
  *(undefined1 *)(param_1 + 0x11c) = 6;
  ExceptionList = local_10;
  return 0;
}


// ==== 10706537 Catch@10706537

void Catch_10706537(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070654b Catch@1070654b

void Catch_1070654b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::FetchData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107065c0 FUN_107065c0

undefined4 __fastcall FUN_107065c0(UDownload *param_1)

{
  int iVar1;
  ushort *puVar2;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10741f50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = UDownload::TrySkipFile(param_1);
  if (iVar1 != 0) {
    param_1[0x470] = (UDownload)0x6;
    puVar2 = FGuid::String((FGuid *)(*(int *)(param_1 + 0x3c) + 0x14));
    FOutputDevice::Logf(this,(ushort *)(*(int *)(param_1 + 0x34) + 0x34),L"SKIP GUID=%s",puVar2);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10706646 Catch@10706646

void Catch_10706646(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070665a Catch@1070665a

void Catch_1070665a(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::TrySkipFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107066b0 FUN_107066b0

void __fastcall FUN_107066b0(UDownload *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10741f60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(SOCKET *)(param_1 + 0x494) != 0xffffffff) {
    ExceptionList = &local_10;
    closesocket(*(SOCKET *)(param_1 + 0x494));
    *(undefined4 *)(param_1 + 0x494) = 0xffffffff;
  }
  UDownload::Destroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1070670f Catch@1070670f

void Catch_1070670f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10706723 Catch@10706723

void Catch_10706723(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10706770 FUN_10706770

void __fastcall FUN_10706770(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = uVar1;
  return;
}


// ==== 10706840 FUN_10706840

undefined4 * __thiscall FUN_10706840(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10741f9c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)((int)this + 4),(TArray<unsigned_char> *)(param_1 + 1));
  ExceptionList = local_c;
  return this;
}


// ==== 10706920 FUN_10706920

void FUN_10706920(void)

{
  return;
}


// ==== 107069d0 FUN_107069d0

FString * __thiscall FUN_107069d0(void *this,byte param_1)

{
  FString::~FString(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10706a00 FUN_10706a00

FQueryData * __thiscall FUN_10706a00(void *this,byte param_1)

{
  FQueryData::~FQueryData(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10706a30 FUN_10706a30

void __fastcall FUN_10706a30(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10741fdc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10706a90 FUN_10706a90

void __thiscall FUN_10706a90(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742005;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)this;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3) + 0xc);
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 10706b40 FUN_10706b40

int __cdecl FUN_10706b40(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10706bb0 FUN_10706bb0

int __cdecl FUN_10706bb0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 10706be0 FUN_10706be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10706be0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = 0;
  iVar1 = *(int *)this;
  puVar3 = &local_8;
  local_8 = param_1;
  local_4 = param_2;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_Resolved,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10706c30 FUN_10706c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10706c30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  local_10c = param_1;
  local_108 = param_2;
  local_104 = param_3;
  _memcpy(local_100,&stack0x00000010,0xff);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &local_10c;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ReceivedBinary,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10706cc0 FUN_10706cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10706cc0(void *this,undefined4 param_1,undefined4 param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074203a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  local_1c = param_2;
  local_20 = param_1;
  FString::operator=((FString *)local_18,param_3);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &local_20;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ReceivedLine,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = local_18[0];
  return;
}


// ==== 10706d80 FUN_10706d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10706d80(void *this,undefined4 param_1,undefined4 param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074206a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  local_1c = param_2;
  local_20 = param_1;
  FString::operator=((FString *)local_18,param_3);
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &local_20;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ReceivedText,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = local_18[0];
  return;
}


// ==== 10706e40 FUN_10706e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10706e40(void *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void **ppvVar3;
  void *local_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074209a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  ppvVar3 = local_18;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ReceivedLine,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,ppvVar3);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = local_18[0];
  return;
}


// ==== 10706ef0 FUN_10706ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10706ef0(void *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  void **ppvVar3;
  void *local_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107420ca;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *(int *)this;
  ppvVar3 = local_18;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_ReceivedText,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,ppvVar3);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffdc);
  ExceptionList = local_18[0];
  return;
}


// ==== 10706fa0 FUN_10706fa0

AInternetLink * __thiscall FUN_10706fa0(void *this,AInternetLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107420ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInternetLink::AInternetLink(this,param_1);
  local_4 = 0;
  *(undefined ***)this = ATcpLink::vftable;
  *(AInternetLink *)((int)this + 0x3d8) = param_1[0x3d8];
  *(undefined4 *)((int)this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)((int)this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)((int)this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)((int)this + 1000),(TArray<unsigned_char> *)(param_1 + 1000));
  ExceptionList = local_c;
  return this;
}


// ==== 10707060 FUN_10707060

AInternetLink * __thiscall FUN_10707060(void *this,AInternetLink *param_1)

{
  AInternetLink::operator=(this,param_1);
  *(AInternetLink *)((int)this + 0x3d8) = param_1[0x3d8];
  *(undefined4 *)((int)this + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)((int)this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)((int)this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)((int)this + 1000),(TArray<unsigned_char> *)(param_1 + 1000));
  return this;
}


// ==== 107070d0 FUN_107070d0

void __cdecl FUN_107070d0(AMasterServerGameStats *param_1)

{
  if (param_1 != (AMasterServerGameStats *)0x0) {
    AMasterServerGameStats::AMasterServerGameStats(param_1);
    return;
  }
  return;
}


// ==== 107070f0 FUN_107070f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_107070f0(void *this,FString *param_1,undefined4 *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074213a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)&local_1c);
  local_4 = 1;
  FString::operator=((FString *)&local_1c,param_1);
  local_10 = *param_2;
  iVar1 = *(int *)this;
  uVar4 = 0;
  puVar3 = &local_1c;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_GetMasterServer,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  FString::operator=(param_1,(FString *)&stack0xffffffd8);
  *param_2 = local_1c;
  local_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffd8);
  ExceptionList = pvStack_18;
  return;
}


// ==== 107071c0 FUN_107071c0

void __cdecl FUN_107071c0(AMasterServerLink *param_1)

{
  if (param_1 != (AMasterServerLink *)0x0) {
    AMasterServerLink::AMasterServerLink(param_1);
    return;
  }
  return;
}


// ==== 107071e0 FUN_107071e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_107071e0(void *this,FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074216a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)&local_1c);
  local_4 = 1;
  local_10 = 0;
  FString::operator=((FString *)&local_1c,param_1);
  iVar1 = *(int *)this;
  puVar3 = &local_1c;
  pUVar2 = UObject::FindFunctionChecked(this,_IPDRV_LogStatLine,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3);
  local_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffd8);
  ExceptionList = pvStack_18;
  return local_1c;
}


// ==== 107072a0 FUN_107072a0

void __cdecl FUN_107072a0(AMasterServerUplink *param_1)

{
  if (param_1 != (AMasterServerUplink *)0x0) {
    AMasterServerUplink::AMasterServerUplink(param_1);
    return;
  }
  return;
}


// ==== 107072c0 FUN_107072c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_107072c0(void *this,undefined4 param_1,undefined1 param_2)

{
  undefined4 local_74;
  undefined1 local_70;
  FServerResponseLine local_6c [80];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107421a3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FServerResponseLine::FServerResponseLine(local_6c);
  local_4 = CONCAT31(local_4._1_3_,2);
  local_70 = param_2;
  local_74 = param_1;
  FServerResponseLine::operator=(local_6c,(FServerResponseLine *)&stack0x0000000c);
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnReceivedPingInfo,(int)this + 0x420,&local_74);
  uStack_14 = uStack_14 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&stack0xffffff84);
  uStack_14 = 0xffffffff;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&local_4);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 107073a0 FUN_107073a0

void __cdecl FUN_107073a0(AServerQueryClient *param_1)

{
  if (param_1 != (AServerQueryClient *)0x0) {
    AServerQueryClient::AServerQueryClient(param_1);
    return;
  }
  return;
}


// ==== 107073c0 FUN_107073c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_107073c0(void *this,undefined1 param_1,FString *param_2)

{
  void **ppvStack_28;
  void *local_1c;
  FString local_18 [4];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107421da;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_18);
  local_4 = 1;
  local_1c = (void *)CONCAT31(local_1c._1_3_,param_1);
  ppvStack_28 = (void **)0x10707404;
  FString::operator=(local_18,param_2);
  ppvStack_28 = &local_1c;
  (**(code **)(*(int *)this + 0x14))(_IPDRV_OnReceivedMOTDData,(int)this + 0x454);
  uStack_14 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_28);
  ExceptionList = local_1c;
  return;
}


// ==== 10707470 FUN_10707470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10707470(int *param_1)

{
  int *piStack_7c;
  FServerResponseLine *pFStack_78;
  FServerResponseLine local_6c [80];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742213;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FServerResponseLine::FServerResponseLine(local_6c);
  local_4 = CONCAT31(local_4._1_3_,2);
  pFStack_78 = (FServerResponseLine *)0x107074b1;
  FServerResponseLine::operator=(local_6c,(FServerResponseLine *)&stack0x00000004);
  pFStack_78 = local_6c;
  piStack_7c = param_1 + 0x113;
  (**(code **)(*param_1 + 0x14))(_IPDRV_OnReceivedServer);
  uStack_14 = uStack_14 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&piStack_7c);
  uStack_14 = 0xffffffff;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&pvStack_c);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10707530 FUN_10707530

void __thiscall
FUN_10707530(void *this,UNetConnection *param_1,int param_2,ushort *param_3,undefined4 param_4)

{
  FString *pFVar1;
  FString *pFVar2;
  ushort *puVar3;
  FURL *pFVar4;
  char *cp;
  ulong uVar5;
  void *this_00;
  FOutputDevice *pFVar6;
  ushort *puVar7;
  ETravelType EVar8;
  FURL local_c8 [68];
  FURL local_84 [24];
  undefined4 local_6c;
  FString local_40 [16];
  FString local_30 [16];
  FString local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10742292;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  UDownload::ReceiveFile(this,param_1,param_2,(ushort *)0x0,0);
  if (*param_3 != 0) {
    *(undefined4 *)((int)this + 0x45c) = param_4;
    pFVar2 = (FString *)
             (*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0xc0) + 0x34) +
             *(int *)((int)this + 0x38) * 0x44);
    FURL::FURL(local_84,(FURL *)0x0,(ushort *)&DAT_1074c080,0);
    local_8._0_1_ = 1;
    local_6c = 0x50;
    if (*(int *)((int)this + 0x45c) == 0) {
      pFVar1 = (FString *)FString::FString(local_30,param_3);
      local_8._0_1_ = 6;
      FString::operator*(pFVar2);
      pFVar2 = (FString *)FString::operator+(pFVar1,(ushort *)local_20);
      local_8._0_1_ = 7;
      EVar8 = 2;
      puVar3 = FString::operator*(pFVar2);
      pFVar4 = (FURL *)FURL::FURL(local_c8,local_84,puVar3,EVar8);
      local_8._0_1_ = 8;
      FURL::operator=((FURL *)((int)this + 0x49c),pFVar4);
      local_8._0_1_ = 7;
      FURL::~FURL(local_c8);
      local_8._0_1_ = 6;
      FString::~FString(local_20);
      pFVar2 = local_30;
    }
    else {
      pFVar1 = (FString *)FString::FString(local_20,param_3);
      local_8._0_1_ = 2;
      FString::operator*(pFVar2);
      pFVar2 = (FString *)FString::operator+(pFVar1,(ushort *)local_30);
      local_8._0_1_ = 3;
      pFVar2 = (FString *)FString::operator+(pFVar2,(ushort *)local_40);
      local_8._0_1_ = 4;
      EVar8 = 2;
      puVar3 = FString::operator*(pFVar2);
      pFVar4 = (FURL *)FURL::FURL(local_c8,local_84,puVar3,EVar8);
      local_8._0_1_ = 5;
      FURL::operator=((FURL *)((int)this + 0x49c),pFVar4);
      local_8._0_1_ = 4;
      FURL::~FURL(local_c8);
      local_8._0_1_ = 3;
      FString::~FString(local_40);
      local_8._0_1_ = 2;
      FString::~FString(local_30);
      pFVar2 = local_20;
    }
    local_8._0_1_ = 1;
    FString::~FString(pFVar2);
    pFVar2 = (FString *)((int)this + 0x460);
    puVar3 = FString::operator*(pFVar2);
    if (*puVar3 == 0) {
      pFVar2 = (FString *)((int)this + 0x4a8);
    }
    puVar3 = FString::operator*(pFVar2);
    cp = appToAnsi(puVar3,(char *)0x0);
    uVar5 = inet_addr(cp);
    if (uVar5 == 0xffffffff) {
      this_00 = (void *)thunk_FUN_107026d0(0x308);
      local_8._0_1_ = 9;
      if (this_00 == (void *)0x0) {
        pFVar6 = (FOutputDevice *)0x0;
      }
      else {
        pFVar6 = thunk_FUN_10703780(this_00,puVar3);
      }
      local_8._0_1_ = 1;
      *(FOutputDevice **)((int)this + 0x498) = pFVar6;
      *(undefined1 *)((int)this + 0x470) = 1;
    }
    else {
      *(ulong *)((int)this + 0x488) = uVar5;
      if (*(int *)GLog_exref != 0) {
        pFVar2 = thunk_FUN_1071b5d0(local_20,uVar5,0);
        local_8._0_1_ = 10;
        puVar7 = FString::operator*(pFVar2);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Decoded IP %s (%s)",puVar3,puVar7);
        local_8._0_1_ = 1;
        FString::~FString(local_20);
      }
      *(undefined1 *)((int)this + 0x470) = 2;
    }
    (**(code **)(*(int *)this + 0x70))(0,0);
    local_8 = (uint)local_8._1_3_ << 8;
    FURL::~FURL(local_84);
  }
  ExceptionList = local_10;
  return;
}


// ==== 107077e8 Catch@107077e8

void Catch_107077e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 107077fc Catch@107077fc

void Catch_107077fc(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::ReceiveFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107078e0 FUN_107078e0

void __fastcall FUN_107078e0(int *param_1)

{
  FArray *this;
  char cVar1;
  uint *puVar2;
  undefined1 *puVar3;
  u_short uVar4;
  SOCKET SVar5;
  undefined2 extraout_var;
  int iVar6;
  ushort *puVar7;
  FString *pFVar8;
  ushort *puVar9;
  int iVar10;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_02;
  FOutputDevice *extraout_ECX_00;
  FString *this_03;
  code *pcVar11;
  uint uVar12;
  float10 fVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  int *piVar16;
  undefined4 uVar17;
  fd_set local_1c4;
  FString local_c0 [12];
  FString local_b4 [12];
  FString local_a8 [12];
  FString local_9c [12];
  FString local_90 [12];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  int local_78;
  FString local_74 [12];
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [16];
  FString *local_28;
  char *local_20;
  FString local_1c [4];
  timeval local_18;
  int local_10;
  char local_9;
  uint local_8;
  
  puStack_7c = &LAB_10742392;
  local_80 = ExceptionList;
  local_84 = &stack0xfffffe30;
  local_8 = 0;
  local_78._0_1_ = 0;
  local_78._1_3_ = 0;
  ExceptionList = &local_80;
  puVar3 = &stack0xfffffe30;
  switch((char)param_1[0x11c]) {
  case '\x01':
    ExceptionList = &local_80;
    local_84 = &stack0xfffffe30;
    if (param_1[0x126] == 0) {
      ExceptionList = &local_80;
      local_84 = &stack0xfffffe30;
      appFailAssert("ResolveInfo",".\\HTTPDownload.cpp",0x50);
    }
    puVar2 = (uint *)param_1[0x126];
    if (puVar2[1] == 0) {
      if (((short)puVar2[0x42] != 0) && (puVar2 + 0x42 != (uint *)0x0)) {
        pFVar8 = (FString *)(param_1 + 0x118);
        puVar7 = FString::operator*(pFVar8);
        if (*puVar7 == 0) {
          pFVar8 = (FString *)(param_1 + 0x12a);
        }
        puVar7 = FString::operator*(pFVar8);
        puVar9 = LocalizeError((ushort *)L"InvalidUrl",(ushort *)L"Engine",(ushort *)0x0);
        pFVar8 = (FString *)FString::Printf((ushort *)local_50,puVar9,puVar7);
        local_78._0_1_ = 1;
        iVar10 = *param_1;
        puVar7 = FString::operator*(pFVar8);
        (**(code **)(iVar10 + 0x78))(puVar7);
        local_78 = (uint)local_78._1_3_ << 8;
        FString::~FString(local_50);
        *(undefined1 *)(param_1 + 0x11c) = 6;
        thunk_FUN_107026f0(param_1[0x126]);
        param_1[0x126] = 0;
        ExceptionList = local_80;
        return;
      }
      if (*(int *)GLog_exref != 0) {
        pFVar8 = thunk_FUN_1071b5d0(local_38,*puVar2,0);
        local_78._0_1_ = 2;
        puVar7 = FString::operator*(pFVar8);
        uVar17 = thunk_FUN_10703910(param_1[0x126]);
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                   L"Resolved %s (%s)",uVar17,puVar7);
        local_78._0_1_ = 0;
        FString::~FString(local_38);
      }
      param_1[0x122] = *(int *)param_1[0x126];
      thunk_FUN_107026f0((int *)param_1[0x126]);
      param_1[0x126] = 0;
      *(undefined1 *)(param_1 + 0x11c) = 2;
    }
    break;
  case '\x02':
    ExceptionList = &local_80;
    ((sockaddr *)(param_1 + 0x121))->sa_family = 2;
    local_84 = &stack0xfffffe30;
    puVar7 = FString::operator*((FString *)(param_1 + 0x118));
    if (*puVar7 == 0) {
      uVar4 = (u_short)param_1[0x12d];
    }
    else {
      uVar4 = (u_short)param_1[0x11b];
    }
    uVar4 = htons(uVar4);
    *(u_short *)((int)param_1 + 0x486) = uVar4;
    SVar5 = socket(2,1,6);
    param_1[0x125] = SVar5;
    thunk_FUN_1071b710(SVar5,1);
    if (param_1[0x125] != 0xffffffff) {
      thunk_FUN_1071b740(param_1[0x125]);
      ((sockaddr *)(param_1 + 0x11d))->sa_family = 2;
      uVar12 = thunk_FUN_10703e30(*(ushort **)GLog_exref);
      param_1[0x11e] = uVar12;
      uVar4 = thunk_FUN_10703930(param_1[0x125],(sockaddr *)(param_1 + 0x11d),0x14,1);
      if (CONCAT22(extraout_var,uVar4) != 0) {
        thunk_FUN_1071b6e0(param_1[0x125]);
        iVar10 = connect(param_1[0x125],(sockaddr *)(param_1 + 0x121),0x10);
        if ((iVar10 != -1) || (iVar10 = WSAGetLastError(), iVar10 == 0x2733)) {
          fVar13 = thunk_FUN_10702660();
          *(double *)(param_1 + 0x13e) = (double)fVar13;
          *(undefined1 *)(param_1 + 0x11c) = 3;
          ExceptionList = local_80;
          return;
        }
        if (*(int *)GLog_exref != 0) {
          FOutputDevice::Logf2
                    (this_01,*(EName *)GLog_exref,(ushort *)0x304,L"HTTPDownload: connect() failed")
          ;
        }
        iVar10 = *param_1;
        puVar7 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
        (**(code **)(iVar10 + 0x78))(puVar7);
        goto LAB_10707b6d;
      }
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  (this_00,*(EName *)GLog_exref,(ushort *)0x304,L"HTTPDownload: bind() failed");
      }
    }
    iVar10 = *param_1;
    puVar7 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
    pcVar11 = *(code **)(iVar10 + 0x78);
    goto LAB_10707b6b;
  case '\x03':
    local_18.tv_sec = 0;
    local_18.tv_usec = 0;
    local_1c4.fd_array[0] = param_1[0x125];
    local_1c4.fd_count = 1;
    ExceptionList = &local_80;
    local_84 = &stack0xfffffe30;
    iVar10 = select(local_1c4.fd_array[0] + 1,(fd_set *)0x0,&local_1c4,(fd_set *)0x0,&local_18);
    if (iVar10 == -1) {
      if (*(int *)GLog_exref != 0) {
        pwVar15 = L"HTTPDownload: select() failed";
        this_02 = extraout_ECX;
LAB_10707c60:
        FOutputDevice::Logf2(this_02,*(EName *)GLog_exref,(ushort *)0x304,pwVar15);
      }
    }
    else {
      if (iVar10 != 0) {
        pFVar8 = (FString *)(param_1 + 0x118);
        puVar7 = FString::operator*(pFVar8);
        this_03 = pFVar8;
        if (*puVar7 == 0) {
          this_03 = (FString *)(param_1 + 0x12a);
        }
        puVar7 = FString::operator*(this_03);
        puVar9 = FString::operator*(pFVar8);
        if (*puVar9 == 0) {
          pFVar8 = (FString *)FString::FString(local_68,(ushort *)&DAT_1074c1b0);
          local_78 = 4;
          local_8 = 2;
          piVar16 = param_1 + 0x12e;
          pFVar8 = (FString *)FString::operator+(pFVar8,local_c0);
          local_78 = 5;
          uVar12 = 6;
        }
        else {
          piVar16 = (int *)0x0;
          pFVar8 = (FString *)FURL::String((FURL *)(param_1 + 0x127),(int)local_a8);
          local_78 = CONCAT31(local_78._1_3_,3);
          uVar12 = 1;
        }
        local_8 = uVar12;
        puVar9 = FString::operator*(pFVar8);
        FString::Printf((ushort *)local_1c,
                        L"GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: Unreal\r\nConnection: close\r\n\r\n"
                        ,puVar9,puVar7,piVar16);
        local_78 = 7;
        if ((uVar12 & 4) != 0) {
          uVar12 = uVar12 & 0xfffffffb;
          local_8 = uVar12;
          FString::~FString(local_c0);
        }
        local_78._0_1_ = 8;
        if ((uVar12 & 2) != 0) {
          uVar12 = uVar12 & 0xfffffffd;
          local_8 = uVar12;
          FString::~FString(local_68);
        }
        local_78._0_1_ = 9;
        if ((uVar12 & 1) != 0) {
          local_8 = uVar12 & 0xfffffffe;
          FString::~FString(local_a8);
        }
        if (local_18.tv_sec == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = local_18.tv_sec + -1;
        }
        iVar6 = 0;
        pcVar14 = (char *)0x0;
        puVar7 = FString::operator*(local_1c);
        pcVar14 = appToAnsi(puVar7,pcVar14);
        send(param_1[0x125],pcVar14,iVar10,iVar6);
        local_78 = (uint)local_78._1_3_ << 8;
        FString::~FString(local_1c);
        *(undefined1 *)(param_1 + 0x11c) = 4;
        ExceptionList = local_80;
        return;
      }
      fVar13 = thunk_FUN_10702660();
      if (fVar13 - (float10)*(double *)(param_1 + 0x13e) <= (float10)30.0) {
        ExceptionList = local_80;
        return;
      }
      if (*(int *)GLog_exref != 0) {
        pwVar15 = L"HTTPDownload: connection timed out";
        this_02 = extraout_ECX_00;
        goto LAB_10707c60;
      }
    }
    iVar10 = *param_1;
    puVar7 = LocalizeError((ushort *)L"ConnectionFailed",(ushort *)L"Engine",(ushort *)0x0);
    pcVar11 = *(code **)(iVar10 + 0x78);
LAB_10707b6b:
    (*pcVar11)(puVar7);
LAB_10707b6d:
    *(undefined1 *)(param_1 + 0x11c) = 6;
    ExceptionList = local_80;
    return;
  case '\x04':
    ExceptionList = &local_80;
    local_84 = &stack0xfffffe30;
    thunk_FUN_10706440(param_1);
    for (iVar10 = 0; iVar10 < param_1[0x139]; iVar10 = iVar10 + 1) {
      cVar1 = *(char *)(param_1[0x138] + iVar10);
      if ((cVar1 == '\r') || (cVar1 == '\n')) {
        local_18.tv_usec = (long)(iVar10 == 0);
        *(char *)(param_1[0x138] + iVar10) = '\0';
        local_20 = (char *)param_1[0x138];
        this = (FArray *)(param_1 + 0x13b);
        local_10 = iVar10;
        iVar6 = FArray::AddZeroed(this,0xc,1);
        local_28 = (FString *)(*(int *)this + iVar6 * 0xc);
        puVar7 = appFromAnsi(local_20,(ushort *)0x0);
        FString::operator=(local_28,puVar7);
        if ((iVar10 < param_1[0x139] + -1) &&
           ((cVar1 = *(char *)(param_1[0x138] + 1 + iVar10), cVar1 == '\r' || (cVar1 == '\n')))) {
          iVar10 = iVar10 + 1;
          local_10 = iVar10;
        }
        TArray<unsigned_char>::Remove((TArray<unsigned_char> *)(param_1 + 0x138),0,iVar10 + 1);
        if (local_18.tv_usec != 0) {
          pFVar8 = *(FString **)this;
          iVar10 = FString::InStr(pFVar8,(ushort *)&DAT_1074c100,0);
          pFVar8 = (FString *)FString::Mid(pFVar8,(int)local_90,iVar10);
          local_78._0_1_ = 10;
          iVar10 = FString::operator!=(pFVar8,(ushort *)L" 200 ");
          local_78._0_1_ = 0;
          FString::~FString(local_90);
          if (iVar10 != 0) {
            uVar17 = 0;
            pFVar8 = (FString *)FURL::String((FURL *)(param_1 + 0x127),(int)local_5c);
            local_78._0_1_ = 0xb;
            puVar7 = FString::operator*(pFVar8);
            puVar9 = LocalizeError((ushort *)L"InvalidUrl",(ushort *)L"Engine",(ushort *)0x0);
            pFVar8 = (FString *)FString::Printf((ushort *)local_44,puVar9,puVar7,uVar17);
            local_78._0_1_ = 0xc;
            iVar10 = *param_1;
            puVar7 = FString::operator*(pFVar8);
            (**(code **)(iVar10 + 0x78))(puVar7);
            local_78._0_1_ = 0xb;
            FString::~FString(local_44);
            local_78 = (uint)local_78._1_3_ << 8;
            FString::~FString(local_5c);
            goto LAB_10707b6d;
          }
          if (param_1[0x117] != 0) goto LAB_107080bb;
          local_10 = 0;
          goto LAB_10707fa0;
        }
        thunk_FUN_10706440(param_1);
        iVar10 = -1;
      }
    }
    break;
  case '\x05':
    while ((local_84 = puVar3, param_1[0x139] != 0 ||
           (iVar10 = thunk_FUN_10706440(param_1), iVar10 != 0))) {
      iVar10 = param_1[0x139];
      puVar3 = local_84;
      if (0 < iVar10) {
        if (*(int *)(param_1[0xf] + 0x24) < param_1[0x115] + iVar10) {
          iVar10 = *(int *)(param_1[0xf] + 0x24) - param_1[0x115];
        }
        if (iVar10 < 1) {
          *(undefined1 *)(param_1 + 0x11c) = 6;
          TArray<unsigned_char>::Empty((TArray<unsigned_char> *)(param_1 + 0x138),0);
          puVar3 = local_84;
        }
        else {
          (**(code **)(*param_1 + 0x70))(param_1[0x138],iVar10);
          TArray<unsigned_char>::Empty((TArray<unsigned_char> *)(param_1 + 0x138),0);
          puVar3 = local_84;
        }
      }
    }
    break;
  case '\x06':
    ExceptionList = &local_80;
    (**(code **)(*param_1 + 0x7c))();
    ExceptionList = local_80;
    return;
  }
  ExceptionList = local_80;
  return;
LAB_10707fa0:
  if (param_1[0x13c] <= local_10) {
LAB_107080bb:
    *(undefined1 *)(param_1 + 0x11c) = 5;
    ExceptionList = local_80;
    return;
  }
  iVar10 = local_10 * 0xc;
  pFVar8 = (FString *)FString::Caps((FString *)(*(int *)this + iVar10));
  local_78 = CONCAT31(local_78._1_3_,0xd);
  local_8 = local_8 | 8;
  pFVar8 = (FString *)FString::Left(pFVar8,(int)local_9c);
  local_78 = 0xe;
  local_8 = local_8 | 0x10;
  iVar6 = FString::operator==(pFVar8,(ushort *)L"CONTENT-LENGTH: ");
  if (iVar6 == 0) {
LAB_10708036:
    local_9 = '\0';
  }
  else {
    pFVar8 = (FString *)FString::Mid((FString *)(*(int *)this + iVar10),(int)local_74,0x10);
    local_78 = 0xf;
    local_8 = local_8 | 0x20;
    puVar7 = FString::operator*(pFVar8);
    iVar10 = appAtoi(puVar7);
    local_9 = '\x01';
    if (iVar10 == *(int *)(param_1[0xf] + 0x24)) goto LAB_10708036;
  }
  local_78 = 0xe;
  if ((local_8 & 0x20) != 0) {
    local_8 = local_8 & 0xffffffdf;
    FString::~FString(local_74);
  }
  local_78 = 0xd;
  if ((local_8 & 0x10) != 0) {
    local_8 = local_8 & 0xffffffef;
    FString::~FString(local_9c);
  }
  local_78._0_1_ = 0;
  local_78._1_3_ = 0;
  if ((local_8 & 8) != 0) {
    local_8 = local_8 & 0xfffffff7;
    FString::~FString(local_b4);
  }
  if (local_9 != '\0') {
    iVar10 = *param_1;
    puVar7 = LocalizeError((ushort *)L"NetSize",(ushort *)L"Engine",(ushort *)0x0);
    pcVar11 = *(code **)(iVar10 + 0x78);
    goto LAB_10707b6b;
  }
  local_10 = local_10 + 1;
  goto LAB_10707fa0;
}


// ==== 10708162 Catch@10708162

void Catch_10708162(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + 0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x50,&DAT_10756c40);
}


// ==== 10708176 Catch@10708176

void Catch_10708176(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107083e0 FUN_107083e0

FArchive * __cdecl FUN_107083e0(FArchive *param_1,TArray<unsigned_char> *param_2)

{
  FCompactIndex *pFVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107423e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  TArray<unsigned_char>::CountBytes(param_2,param_1);
  pFVar1 = (FCompactIndex *)(param_2 + 4);
  operator<<(param_1,pFVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)pFVar1;
    FArray::Realloc((FArray *)param_2,1);
  }
  (**(code **)(*(int *)param_1 + 4))(*(undefined4 *)param_2,*(undefined4 *)pFVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1070845c Catch@1070845c

void Catch_1070845c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10708470 Catch@10708470

void Catch_10708470(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107084c0 FUN_107084c0

FArray * __thiscall FUN_107084c0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742405;
  local_c = ExceptionList;
  iVar4 = param_1[1];
  iVar3 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = iVar4;
  *(int *)((int)this + 8) = iVar4;
  FArray::Realloc(this,0x10);
  local_4 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)this);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1;
        *puVar2 = *(undefined4 *)(iVar1 + iVar4);
        TArray<unsigned_char>::TArray<unsigned_char>
                  ((TArray<unsigned_char> *)(puVar2 + 1),
                   (TArray<unsigned_char> *)(iVar1 + iVar4 + 4));
        local_4 = local_4 & 0xffffff00;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 107085a0 FUN_107085a0

FArray * __thiscall FUN_107085a0(void *this,int *param_1)

{
  FQueryData *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742429;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  iVar2 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = iVar3;
  *(int *)((int)this + 8) = iVar3;
  FArray::Realloc(this,0x1c);
  local_4 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x1c);
      this_00 = (FQueryData *)(*(int *)this + iVar1 * 0x1c);
      if (this_00 != (FQueryData *)0x0) {
        FQueryData::FQueryData(this_00,(FQueryData *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10708670 FUN_10708670

void __thiscall FUN_10708670(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_1 + param_2;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0xc;
    iVar2 = iVar2 - param_1;
    do {
      FString::~FString((FString *)(*(int *)this + iVar1));
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0xc);
  return;
}


// ==== 10708730 FUN_10708730

void __thiscall FUN_10708730(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FString::~FString((FString *)(*(int *)this + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0xc);
  return;
}


// ==== 10708790 FUN_10708790

void __thiscall FUN_10708790(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742455;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)this;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3) + 0xc);
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3));
      iVar3 = iVar3 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 107088c0 FUN_107088c0

FArray * __thiscall FUN_107088c0(void *this,FArray *param_1)

{
  FQueryData *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this == param_1) {
    return this;
  }
  thunk_FUN_10706a90(this,*(undefined4 *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x1c);
      this_00 = (FQueryData *)(*(int *)this + iVar1 * 0x1c);
      if (this_00 != (FQueryData *)0x0) {
        FQueryData::FQueryData(this_00,(FQueryData *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return this;
  }
  return this;
}


// ==== 10708950 FUN_10708950

int __thiscall FUN_10708950(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1074247c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return (int)this;
}


// ==== 107089c0 FUN_107089c0

void __fastcall FUN_107089c0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742499;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10708670(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10708a30 FUN_10708a30

FArchive * __cdecl FUN_10708a30(FArchive *param_1,FArray *param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107424b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffcc;
  iVar2 = 0;
  local_8 = 0;
  FArray::CountBytes(param_2,param_1,0xc);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar2 < *(int *)(param_2 + 4); iVar2 = iVar2 + 1) {
      operator<<(param_1,(FString *)(*(int *)param_2 + iVar2 * 0xc));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10708730(param_2,local_18);
    while (iVar2 < local_18) {
      pFVar1 = (FString *)thunk_FUN_10706b40(0xc,param_2);
      if (pFVar1 == (FString *)0x0) {
        operator<<(param_1,(FString *)0x0);
        iVar2 = iVar2 + 1;
      }
      else {
        pFVar1 = (FString *)FString::FString(pFVar1);
        operator<<(param_1,pFVar1);
        iVar2 = iVar2 + 1;
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ==== 10708b07 Catch@10708b07

void Catch_10708b07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 10708b1b Catch@10708b1b

void Catch_10708b1b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10708ba0 FUN_10708ba0

void __fastcall FUN_10708ba0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107424c9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10708790(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10708c10 FUN_10708c10

void __thiscall FUN_10708c10(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107424ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 << 4;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_char>::~TArray<unsigned_char>
                ((TArray<unsigned_char> *)(*(int *)this + iVar1 + 4));
      iVar1 = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x10);
  ExceptionList = local_c;
  return;
}


// ==== 10708d10 FUN_10708d10

void __thiscall FUN_10708d10(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074250c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_char>::~TArray<unsigned_char>
                ((TArray<unsigned_char> *)(*(int *)this + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0x10);
  ExceptionList = local_c;
  return;
}


// ==== 10708db0 FUN_10708db0

AServerQueryClient * __thiscall FUN_10708db0(void *this,AServerQueryClient *param_1)

{
  AServerQueryClient::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x430) = *(undefined4 *)(param_1 + 0x430);
  thunk_FUN_107088c0((void *)((int)this + 0x434),(FArray *)(param_1 + 0x434));
  *(undefined4 *)((int)this + 0x440) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)((int)this + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)((int)this + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)((int)this + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)((int)this + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)((int)this + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)((int)this + 0x458) = *(undefined4 *)(param_1 + 0x458);
  return this;
}


// ==== 10708e60 FUN_10708e60

void __fastcall FUN_10708e60(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742528;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10708ba0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10708eb0 FUN_10708eb0

void * __thiscall FUN_10708eb0(void *this,int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_107085a0(this,param_1);
  ExceptionList = local_c;
  return this;
}


// ==== 10708f10 FUN_10708f10

UDownload * __fastcall FUN_10708f10(UDownload *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_107425ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UDownload::UDownload(param_1);
  local_8 = 0;
  *(undefined ***)param_1 = UHTTPDownload::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(param_1 + 0x460));
  local_8._0_1_ = 1;
  FURL::FURL((FURL *)(param_1 + 0x49c),(ushort *)0x0);
  local_8 = CONCAT31(local_8._1_3_,2);
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 0x4e0));
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x498) = 0;
  param_1[0x470] = (UDownload)0x0;
  ExceptionList = local_10;
  return param_1;
}


// ==== 10708fbc Catch@10708fbc

void Catch_10708fbc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 10708fd0 Catch@10708fd0

void Catch_10708fd0(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::UHTTPDownload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10709030 FUN_10709030

void __fastcall FUN_10709030(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10742614;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = UHTTPDownload::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(param_1);
  local_4._0_1_ = 3;
  thunk_FUN_107089c0((FArray *)(param_1 + 0x4ec));
  local_4._0_1_ = 2;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 0x4e0));
  local_4._0_1_ = 1;
  FURL::~FURL((FURL *)(param_1 + 0x49c));
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(param_1 + 0x460));
  local_4 = 0xffffffff;
  UDownload::~UDownload((UDownload *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 107090f0 FUN_107090f0

UObject * __thiscall FUN_107090f0(void *this,byte param_1)

{
  thunk_FUN_10709030(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x500);
  }
  return this;
}


// ==== 10709120 FUN_10709120

void __thiscall FUN_10709120(void *this,FArchive *param_1)

{
  FArchive *pFVar1;
  FArray *pFVar2;
  FURL *pFVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742640;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UDownload::Serialize(this,param_1);
  pFVar3 = (FURL *)((int)this + 0x49c);
  pFVar2 = (FArray *)((int)this + 0x4ec);
  pFVar1 = thunk_FUN_107083e0(param_1,(TArray<unsigned_char> *)((int)this + 0x4e0));
  pFVar1 = thunk_FUN_10708a30(pFVar1,pFVar2);
  operator<<(pFVar1,pFVar3);
  ExceptionList = local_10;
  return;
}


// ==== 1070919f Catch@1070919f

void Catch_1070919f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107091b3 Catch@107091b3

void Catch_107091b3(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"UHTTPDownload::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10709200 FUN_10709200

void __fastcall FUN_10709200(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742659;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10708c10(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10709270 FUN_10709270

FArray * __thiscall FUN_10709270(void *this,FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074267c;
  local_c = ExceptionList;
  if (this != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_10708d10(this,*(undefined4 *)(param_1 + 4));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      do {
        iVar1 = FArray::Add(this,1,0x10);
        puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)this);
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = *(int *)param_1;
          *puVar2 = *(undefined4 *)(iVar1 + iVar3);
          TArray<unsigned_char>::TArray<unsigned_char>
                    ((TArray<unsigned_char> *)(puVar2 + 1),
                     (TArray<unsigned_char> *)(iVar1 + iVar3 + 4));
          local_4 = 0xffffffff;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10709320 FUN_10709320

void FUN_10709320(void)

{
  return;
}


// ==== 10709360 FUN_10709360

void __fastcall FUN_10709360(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107426dc;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10709200((FArray *)(param_1 + 0xf));
  *param_1 = _vftable__exref;
  ExceptionList = local_c;
  return;
}


// ==== 107093c0 FUN_107093c0

FArchiveTcpSocket * __thiscall FUN_107093c0(void *this,FArchiveTcpSocket *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742703;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchiveTcpSocket::FArchiveTcpSocket(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FArchiveTcpReader::vftable;
  thunk_FUN_107084c0((void *)((int)this + 0x3c),(int *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return this;
}


// ==== 10709450 FUN_10709450

FArchive * __thiscall FUN_10709450(void *this,FArchive *param_1)

{
  FArchive::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_10709270((void *)((int)this + 0x3c),(FArray *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 10709490 FUN_10709490

undefined4 * __thiscall FUN_10709490(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1074273c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10709200((FArray *)((int)this + 0x3c));
  local_4 = 0xffffffff;
  *(code **)this = _vftable__exref;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10709510 FUN_10709510

FArchiveTcpReader * __thiscall FUN_10709510(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x4c,*(int *)((int)this + -4),FArchiveTcpReader::~FArchiveTcpReader);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((FArchiveTcpReader *)((int)this + -4));
    }
    return (FArchiveTcpReader *)((int)this + -4);
  }
  FArchiveTcpReader::~FArchiveTcpReader(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10709590 FUN_10709590

void __fastcall FUN_10709590(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1074276e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = AMasterServerClient::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(param_1);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10708ba0((FArray *)(param_1 + 0x434));
  local_4 = 0xffffffff;
  AServerQueryClient::~AServerQueryClient((AServerQueryClient *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10709620 FUN_10709620

AMasterServerLink * __fastcall FUN_10709620(AMasterServerLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107427bf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AMasterServerLink::AMasterServerLink(param_1);
  *(undefined ***)param_1 = AServerQueryClient::vftable;
  *(undefined ***)param_1 = AMasterServerClient::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 107096a0 FUN_107096a0

AServerQueryClient * __thiscall FUN_107096a0(void *this,AServerQueryClient *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107427fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AServerQueryClient::AServerQueryClient(this,param_1);
  local_4 = 0;
  *(undefined ***)this = AMasterServerClient::vftable;
  *(undefined4 *)((int)this + 0x430) = *(undefined4 *)(param_1 + 0x430);
  thunk_FUN_107085a0((void *)((int)this + 0x434),(int *)(param_1 + 0x434));
  *(undefined4 *)((int)this + 0x440) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)((int)this + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)((int)this + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)((int)this + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)((int)this + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)((int)this + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)((int)this + 0x458) = *(undefined4 *)(param_1 + 0x458);
  ExceptionList = local_c;
  return this;
}


// ==== 107097b0 FUN_107097b0

AMasterServerClient * __thiscall FUN_107097b0(void *this,byte param_1)

{
  AMasterServerClient::~AMasterServerClient(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x45c);
  }
  return this;
}


// ==== 107097e0 FUN_107097e0

AMasterServerClient * __thiscall FUN_107097e0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x45c,*(int *)((int)this + -4),AMasterServerClient::~AMasterServerClient);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AMasterServerClient *)((int)this + -4));
    }
    return (AMasterServerClient *)((int)this + -4);
  }
  AMasterServerClient::~AMasterServerClient(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x45c);
  }
  return this;
}


// ==== 10709880 FUN_10709880

void __cdecl FUN_10709880(AMasterServerClient *param_1)

{
  if (param_1 != (AMasterServerClient *)0x0) {
    AMasterServerClient::AMasterServerClient(param_1);
    return;
  }
  return;
}


// ==== 107098a0 FUN_107098a0

void __cdecl FUN_107098a0(undefined4 param_1,undefined4 param_2)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,param_2);
  return;
}


// ==== 107098c0 FUN_107098c0

FString * __cdecl FUN_107098c0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1074283a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,(ushort *)&DAT_1074c9b8);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10709930 FUN_10709930

void __cdecl FUN_10709930(undefined1 *param_1)

{
  *param_1 = 0x4c;
  param_1[1] = 0x77;
  param_1[2] = 0x37;
  param_1[3] = 0x78;
  param_1[4] = 0x30;
  param_1[5] = 0x52;
  param_1[6] = 0;
  return;
}


// ==== 10709980 FUN_10709980

/* WARNING: Removing unreachable block (ram,0x107099cc) */

undefined4 __cdecl FUN_10709980(int param_1,int param_2)

{
  byte bVar1;
  ulonglong uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *unaff_EDI;
  
  uVar4 = 0;
  sVar3 = 0;
  pbVar7 = unaff_EDI;
  do {
    *pbVar7 = (byte)sVar3;
    sVar3 = sVar3 + 1;
    pbVar7 = pbVar7 + 1;
  } while (sVar3 < 0x100);
  unaff_EDI[0x100] = 0;
  unaff_EDI[0x101] = 0;
  uVar5 = 0;
  iVar6 = 0x100;
  pbVar7 = unaff_EDI;
  do {
    uVar4 = *(byte *)((uVar5 & 0xff) + param_1) + uVar4 + (uint)*pbVar7 & 0xff;
    bVar1 = *pbVar7;
    *pbVar7 = unaff_EDI[uVar4];
    unaff_EDI[uVar4] = bVar1;
    uVar2 = (ulonglong)((uVar5 & 0xff) + 1);
    uVar5 = (uint)((longlong)uVar2 % (longlong)param_2);
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return (int)((longlong)uVar2 / (longlong)param_2);
}


// ==== 10709a20 FUN_10709a20

/* WARNING: Removing unreachable block (ram,0x10709a7d) */
/* WARNING: Removing unreachable block (ram,0x10709a64) */
/* WARNING: Removing unreachable block (ram,0x10709ab4) */

void __cdecl FUN_10709a20(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = 0;
  sVar4 = 0;
  if (param_2 < 1) {
    *(byte *)(param_3 + 0x100) = *(byte *)(param_3 + 0x100);
    *(byte *)(param_3 + 0x101) = *(byte *)(param_3 + 0x101);
    return;
  }
  uVar2 = (uint)*(byte *)(param_3 + 0x100);
  uVar3 = (uint)*(byte *)(param_3 + 0x101);
  do {
    uVar2 = *(byte *)(iVar5 + param_1) + 1 + uVar2 & 0x800000ff;
    uVar3 = *(byte *)(uVar2 + param_3) + uVar3 & 0x800000ff;
    bVar1 = *(byte *)(uVar2 + param_3);
    *(undefined1 *)(uVar2 + param_3) = *(undefined1 *)(uVar3 + param_3);
    *(byte *)(uVar3 + param_3) = bVar1;
    *(byte *)(iVar5 + param_1) =
         *(byte *)(iVar5 + param_1) ^
         *(byte *)(((uint)bVar1 + (uint)*(byte *)(uVar2 + param_3) & 0x800000ff) + param_3);
    sVar4 = sVar4 + 1;
    iVar5 = (int)sVar4;
  } while (iVar5 < param_2);
  *(char *)(param_3 + 0x100) = (char)uVar2;
  *(char *)(param_3 + 0x101) = (char)uVar3;
  return;
}


// ==== 10709b50 FUN_10709b50

void __cdecl FUN_10709b50(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 local_104 [260];
  
  iVar3 = 0;
  cVar1 = *param_3;
  pcVar2 = param_3;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + 1;
    cVar1 = *pcVar2;
  }
  FUN_10709980((int)param_3,iVar3);
  thunk_FUN_10709a20(param_1,param_2,(int)local_104);
  return;
}


// ==== 10709c00 FUN_10709c00

undefined4 FUN_10709c00(void)

{
  undefined1 in_AL;
  
  switch(in_AL) {
  case 0:
    return 0x41;
  case 1:
    return 0x42;
  case 2:
    return 0x43;
  case 3:
    return 0x44;
  case 4:
    return 0x45;
  case 5:
    return 0x46;
  case 6:
    return 0x47;
  case 7:
    return 0x48;
  case 8:
    return 0x49;
  case 9:
    return 0x4a;
  case 10:
    return 0x4b;
  case 0xb:
    return 0x4c;
  case 0xc:
    return 0x4d;
  case 0xd:
    return 0x4e;
  case 0xe:
    return 0x4f;
  case 0xf:
    return 0x50;
  case 0x10:
    return 0x51;
  case 0x11:
    return 0x52;
  case 0x12:
    return 0x53;
  case 0x13:
    return 0x54;
  case 0x14:
    return 0x55;
  case 0x15:
    return 0x56;
  case 0x16:
    return 0x57;
  case 0x17:
    return 0x58;
  case 0x18:
    return 0x59;
  case 0x19:
    return 0x5a;
  case 0x1a:
    return 0x61;
  case 0x1b:
    return 0x62;
  case 0x1c:
    return 99;
  case 0x1d:
    return 100;
  case 0x1e:
    return 0x65;
  case 0x1f:
    return 0x66;
  case 0x20:
    return 0x67;
  case 0x21:
    return 0x68;
  case 0x22:
    return 0x69;
  case 0x23:
    return 0x6a;
  case 0x24:
    return 0x6b;
  case 0x25:
    return 0x6c;
  case 0x26:
    return 0x6d;
  case 0x27:
    return 0x6e;
  case 0x28:
    return 0x6f;
  case 0x29:
    return 0x70;
  case 0x2a:
    return 0x71;
  case 0x2b:
    return 0x72;
  case 0x2c:
    return 0x73;
  case 0x2d:
    return 0x74;
  case 0x2e:
    return 0x75;
  case 0x2f:
    return 0x76;
  case 0x30:
    return 0x77;
  case 0x31:
    return 0x78;
  case 0x32:
    return 0x79;
  case 0x33:
    return 0x7a;
  case 0x34:
    return 0x30;
  case 0x35:
    return 0x31;
  case 0x36:
    return 0x32;
  case 0x37:
    return 0x33;
  case 0x38:
    return 0x34;
  case 0x39:
    return 0x35;
  case 0x3a:
    return 0x36;
  case 0x3b:
    return 0x37;
  case 0x3c:
    return 0x38;
  case 0x3d:
    return 0x39;
  case 0x3e:
    return 0x2b;
  case 0x3f:
    return 0x2f;
  default:
    return 0;
  }
}


// ==== 1070a0f0 FUN_1070a0f0

void __cdecl FUN_1070a0f0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_EDX;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = param_3;
  if (param_2 < 1) {
    *param_3 = 0;
    return;
  }
  do {
    iVar1 = 0;
    do {
      if (iVar4 < param_2) {
        *(undefined1 *)((int)&param_3 + iVar1) = *param_1;
        param_1 = param_1 + 1;
      }
      else {
        *(undefined1 *)((int)&param_3 + iVar1) = 0;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar1 < 3);
    do {
      uVar2 = FUN_10709c00();
      *puVar3 = (char)uVar2;
      puVar3 = puVar3 + 1;
    } while (extraout_ECX + 1 < 4);
    param_2 = extraout_EDX;
  } while (iVar4 < extraout_EDX);
  *puVar3 = 0;
  return;
}


// ==== 1070a2a0 FUN_1070a2a0

AInternetInfo * __fastcall FUN_1070a2a0(AInternetInfo *param_1)

{
  FString local_2c [16];
  AInternetInfo *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10742862;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  ExceptionList = &local_10;
  local_1c = param_1;
  AInternetInfo::AInternetInfo(param_1);
  *(undefined ***)param_1 = AInternetLink::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FString::FString(local_2c);
  local_8._0_1_ = 2;
  thunk_FUN_1071af40();
  param_1[0x3bc] = (AInternetInfo)0x0;
  param_1[0x3d4] = (AInternetInfo)0x1;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1070a33f Catch@1070a33f

void Catch_1070a33f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070a353 Catch@1070a353

void Catch_1070a353(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::AInternetLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070a3b0 FUN_1070a3b0

void __fastcall FUN_1070a3b0(AActor *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742880;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(SOCKET *)(param_1 + 0x3c0) != 0xffffffff) {
    ExceptionList = &local_10;
    closesocket(*(SOCKET *)(param_1 + 0x3c0));
    *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  }
  AActor::Destroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1070a40f Catch@1070a40f

void Catch_1070a40f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070a423 Catch@1070a423

void Catch_1070a423(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070a470 FUN_1070a470

void __thiscall FUN_1070a470(void *this,int param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742890;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)((int)this + 0x3d0) != 0) {
    *param_2 = 1;
    ExceptionList = local_10;
    return;
  }
  *param_2 = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1070a50a Catch@1070a50a

void Catch_1070a50a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070a51e Catch@1070a51e

void Catch_1070a51e(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execIsDataPending");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070a5b0 FUN_1070a5b0

void FUN_1070a5b0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort *puVar2;
  FString *this;
  FString *this_00;
  ETravelType EVar3;
  FURL local_a0 [12];
  FString local_94 [12];
  undefined4 local_88;
  FString local_84 [24];
  FString local_6c [16];
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  int local_50;
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [12];
  FString local_20 [16];
  undefined4 *local_10;
  undefined4 local_c;
  FString *local_8;
  
  puStack_54 = &LAB_107428cd;
  local_58 = ExceptionList;
  local_5c = &stack0xffffff54;
  local_50 = 0;
  ExceptionList = &local_58;
  FString::FString(local_38);
  local_50._0_1_ = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_38);
  FString::FString(local_44);
  local_50 = CONCAT31(local_50._1_3_,2);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_44);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_8 = local_44;
  }
  else {
    local_8 = *(FString **)GPropAddr_exref;
  }
  local_c = 0;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    local_10 = &local_c;
  }
  else {
    local_10 = *(undefined4 **)GPropAddr_exref;
  }
  FString::FString(local_2c);
  local_50 = CONCAT31(local_50._1_3_,3);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this = local_2c;
  }
  else {
    this = *(FString **)GPropAddr_exref;
  }
  FString::FString(local_20);
  local_50 = CONCAT31(local_50._1_3_,4);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_20);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this_00 = local_20;
  }
  else {
    this_00 = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  EVar3 = 0;
  puVar2 = FString::operator*(local_38);
  FURL::FURL(local_a0,(FURL *)0x0,puVar2,EVar3);
  local_50._0_1_ = 5;
  FString::operator=(local_8,local_94);
  *local_10 = local_88;
  FString::operator=(this,local_84);
  FString::operator=(this_00,local_6c);
  *param_2 = 1;
  local_50._0_1_ = 4;
  FURL::~FURL(local_a0);
  local_50._0_1_ = 3;
  FString::~FString(local_20);
  local_50._0_1_ = 2;
  FString::~FString(local_2c);
  local_50._0_1_ = 1;
  FString::~FString(local_44);
  local_50 = (uint)local_50._1_3_ << 8;
  FString::~FString(local_38);
  ExceptionList = local_58;
  return;
}


// ==== 1070a857 Catch@1070a857

void Catch_1070a857(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x38) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x38,&DAT_10756c40);
}


// ==== 1070a86b Catch@1070a86b

void Catch_1070a86b(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execParseURL");
  iVar1 = *(int *)(unaff_EBP + 0x50);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070a980 FUN_1070a980

void FUN_1070a980(int param_1,FString *param_2)

{
  byte bVar1;
  FString *pFVar2;
  FString local_30 [12];
  uint local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107428f9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = (FString *)
           FString::Printf((ushort *)local_30,L"%i.%i.%i.%i:%i",local_24 >> 0x18,
                           local_24 >> 0x10 & 0xff,local_24 >> 8 & 0xff,local_24 & 0xff,local_20);
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1070aa58 Catch@1070aa58

void Catch_1070aa58(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070aa6c Catch@1070aa6c

void Catch_1070aa6c(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execIpAddrToString");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070ab10 FUN_1070ab10

void FUN_1070ab10(int param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort *puVar2;
  ulong hostlong;
  u_long uVar3;
  u_long *puVar4;
  char *pcVar5;
  FString local_30 [12];
  u_long local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10742919;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_24);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar4 = local_24;
  }
  else {
    puVar4 = *(u_long **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pcVar5 = (char *)0x0;
  puVar2 = FString::operator*(local_30);
  pcVar5 = appToAnsi(puVar2,pcVar5);
  hostlong = inet_addr(pcVar5);
  if (hostlong != 0xffffffff) {
    uVar3 = htonl(hostlong);
    *puVar4 = uVar3;
    puVar4[1] = 0;
    *param_2 = 1;
    local_8 = local_8 & 0xffffff00;
    FString::~FString(local_30);
    ExceptionList = local_10;
    return;
  }
  *param_2 = 0;
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1070ac59 Catch@1070ac59

void Catch_1070ac59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070ac6d Catch@1070ac6d

void Catch_1070ac6d(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execStringToIpAddr");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070ad30 FUN_1070ad30

void FUN_1070ad30(int param_1,int *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742930;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  iVar1 = WSAGetLastError();
  *param_2 = iVar1;
  ExceptionList = local_10;
  return;
}


// ==== 1070ada4 Catch@1070ada4

void Catch_1070ada4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070adb8 Catch@1070adb8

void Catch_1070adb8(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execGetLastError");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070ae40 FUN_1070ae40

void FUN_1070ae40(int param_1,FString *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10742949;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffcc;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  pFVar2 = thunk_FUN_107098c0(local_28);
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1070aed3 Catch@1070aed3

void Catch_1070aed3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070aee7 Catch@1070aee7

void Catch_1070aee7(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execGameSpyGameName");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070af70 FUN_1070af70

void FUN_1070af70(int param_1,FString *param_2)

{
  byte bVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  FString local_4c [12];
  char local_40 [12];
  char local_34 [8];
  undefined1 local_2c [16];
  ushort *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10742969;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
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
  thunk_FUN_10709930(local_34);
  puVar3 = local_2c;
  local_18 = puVar3;
  puVar2 = FString::operator*(local_4c);
  for (; *puVar2 != 0; puVar2 = puVar2 + 1) {
    *puVar3 = (char)*puVar2;
    puVar3 = puVar3 + 1;
    local_18 = puVar3;
  }
  local_1c = puVar2;
  thunk_FUN_10709b50((int)local_2c,6,local_34);
  thunk_FUN_1070a0f0(local_2c,6,local_40);
  puVar2 = appFromAnsi(local_40,(ushort *)0x0);
  FString::operator=(param_2,puVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 1070b07c Catch@1070b07c

void Catch_1070b07c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 1070b090 Catch@1070b090

void Catch_1070b090(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AAInternetLink::execValidate");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b140 FUN_1070b140

void FUN_1070b140(ushort *param_1)

{
  byte bVar1;
  u_long uVar2;
  u_long *puVar3;
  u_long local_28 [4];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742980;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    puVar3 = local_28;
  }
  else {
    puVar3 = *(u_long **)GPropAddr_exref;
  }
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  thunk_FUN_10703a60(param_1,&local_18);
  thunk_FUN_1071b5b0(local_18,puVar3);
  uVar2 = htonl(*puVar3);
  *puVar3 = uVar2;
  puVar3[1] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1070b22a Catch@1070b22a

void Catch_1070b22a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1070b23e Catch@1070b23e

void Catch_1070b23e(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"execGetLocalIP::execValidate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b2b0 FUN_1070b2b0

undefined4 * __fastcall FUN_1070b2b0(undefined4 *param_1)

{
  float10 fVar1;
  FString local_38 [16];
  undefined4 *local_28;
  longlong local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_107429b1;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  *param_1 = FTcpLink::vftable;
  local_28 = param_1;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 7));
  local_8 = 0;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 10));
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_8._0_1_ = 2;
  FString::FString(local_38);
  local_8._0_1_ = 3;
  thunk_FUN_1071af40();
  param_1[6] = 0xffffffff;
  fVar1 = thunk_FUN_10702660();
  local_20 = (longlong)ROUND(fVar1);
  param_1[0x10] = (undefined4)local_20;
  local_8 = CONCAT31(local_8._1_3_,2);
  FString::~FString(local_38);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1070b377 Catch@1070b377

void Catch_1070b377(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 1070b38b Catch@1070b38b

void Catch_1070b38b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::FTcpLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b3f0 FUN_1070b3f0

undefined4 * __thiscall
FUN_1070b3f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  float10 fVar1;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_107429e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = param_6;
  *(undefined ***)this = FTcpLink::vftable;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)((int)this + 0x1c));
  local_8 = 0;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)((int)this + 0x28));
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 3;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  fVar1 = thunk_FUN_10702660();
  local_1c = (undefined4)(longlong)ROUND(fVar1);
  *(undefined4 *)((int)this + 0x40) = local_1c;
  ExceptionList = local_10;
  return this;
}


// ==== 1070b4b9 Catch@1070b4b9

void Catch_1070b4b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 1070b4cd Catch@1070b4cd

void Catch_1070b4cd(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::FTcpLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b530 FUN_1070b530

void __fastcall FUN_1070b530(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = FTcpLink::vftable;
  local_8 = 2;
  if (param_1[0x11] != 0) {
    closesocket(param_1[6]);
    param_1[6] = 0xffffffff;
  }
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  local_8 = 0;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 10));
  local_8 = 0xffffffff;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 7));
  ExceptionList = local_10;
  return;
}


// ==== 1070b5cc Catch@1070b5cc

void Catch_1070b5cc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070b5e0 Catch@1070b5e0

void Catch_1070b5e0(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::~FTcpLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b630 FUN_1070b630

void __thiscall FUN_1070b630(void *this,undefined4 param_1)

{
  u_short uVar1;
  SOCKET SVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ((sockaddr *)((int)this + 4))->sa_family = 2;
  SVar2 = socket(2,1,6);
  *(SOCKET *)((int)this + 0x18) = SVar2;
  if (SVar2 == 0xffffffff) {
    appFailAssert("SocketData.Socket != INVALID_SOCKET",".\\InternetLink.cpp",0x189);
  }
  thunk_FUN_1071b6e0(*(SOCKET *)((int)this + 0x18));
  thunk_FUN_1071b710(*(SOCKET *)((int)this + 0x18),1);
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar1 = htons((u_short)param_1);
  *(u_short *)((int)this + 6) = uVar1;
  uVar3 = thunk_FUN_10703e30(*(ushort **)GWarn_exref);
  *(uint *)((int)this + 8) = uVar3;
  iVar4 = bind(*(SOCKET *)((int)this + 0x18),(sockaddr *)((int)this + 4),0x10);
  if (iVar4 == -1) {
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref,
                        L"Failed to bind listen socket");
  }
  iVar4 = listen(*(SOCKET *)((int)this + 0x18),200);
  if (iVar4 == -1) {
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref,
                        L"Failed to listen on TCP socket");
  }
  FOutputDevice::Logf(*(FOutputDevice **)((int)this + 0x18),*(ushort **)GWarn_exref,
                      L"TCP socket %d listening on port %d",*(FOutputDevice **)((int)this + 0x18),
                      *(undefined4 *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x44) = 1;
  ExceptionList = local_10;
  return;
}


// ==== 1070b757 Catch@1070b757

void Catch_1070b757(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070b76b Catch@1070b76b

void Catch_1070b76b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::Listen");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b7e0 FUN_1070b7e0

void __thiscall FUN_1070b7e0(void *this,long param_1)

{
  int iVar1;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar2;
  wchar_t *pwVar3;
  fd_set local_144;
  sockaddr local_38;
  undefined4 local_28;
  SOCKET local_24;
  timeval local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a40;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb0;
  local_8 = 0;
  local_20.tv_sec = param_1;
  local_20.tv_usec = 0;
  local_144.fd_array[0] = *(SOCKET *)((int)this + 0x18);
  local_144.fd_count = 1;
  ExceptionList = &local_10;
  iVar1 = select(local_144.fd_array[0] + 1,&local_144,(fd_set *)0x0,(fd_set *)0x0,&local_20);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    pwVar3 = L"!! Error checking socket status: %i";
    this_00 = *(FOutputDevice **)GWarn_exref;
    pFVar2 = this_00;
  }
  else {
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return;
    }
    param_1 = 0x10;
    local_24 = accept(*(SOCKET *)((int)this + 0x18),&local_38,&param_1);
    if (local_24 != 0xffffffff) {
      (**(code **)(*(int *)this + 0x4c))
                (local_38._0_4_,local_38.sa_data._2_4_,local_38.sa_data._6_4_,
                 local_38.sa_data._10_4_,local_28,local_24);
      ExceptionList = local_10;
      return;
    }
    iVar1 = WSAGetLastError();
    pwVar3 = L"!! Failed to accept queued connection: %i";
    pFVar2 = *(FOutputDevice **)GWarn_exref;
    this_00 = extraout_ECX;
  }
  FOutputDevice::Logf(this_00,(ushort *)pFVar2,pwVar3,iVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1070b8f9 Catch@1070b8f9

void Catch_1070b8f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070b90d Catch@1070b90d

void Catch_1070b90d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::WaitForConnections");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070b980 FUN_1070b980

undefined4 __thiscall FUN_1070b980(void *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  u_short uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX;
  FOutputDevice *pFVar8;
  fd_set local_448;
  fd_set local_344;
  fd_set local_240;
  fd_set local_13c;
  timeval local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a50;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbac;
  local_8 = 0;
  puVar4 = *(undefined4 **)((int)this + 0x34);
  ExceptionList = &local_10;
  puVar2 = &stack0xfffffbac;
  if ((puVar4 != (undefined4 *)0x0) &&
     (ExceptionList = &local_10, puVar2 = &stack0xfffffbac, puVar4[1] == 0)) {
    if ((*(short *)(puVar4 + 0x42) == 0) || ((short *)(puVar4 + 0x42) == (short *)0x0)) {
      uVar1 = *puVar4;
      ExceptionList = &local_10;
      local_20 = uVar1;
      uVar3 = htons(0);
      local_24 = CONCAT22(uVar3,(undefined2)local_24);
      thunk_FUN_107026f0(*(undefined4 *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
      iVar5 = *(int *)this;
      puVar4 = (undefined4 *)FIpAddr::FIpAddr((FIpAddr *)&local_1c,local_24,uVar1,local_1c,local_18)
      ;
      (**(code **)(iVar5 + 0x44))(*puVar4,puVar4[1]);
      puVar2 = local_14;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xfffffbac;
      thunk_FUN_107026f0(puVar4);
      *(undefined4 *)((int)this + 0x34) = 0;
      (**(code **)(*(int *)this + 0x48))();
      puVar2 = local_14;
    }
  }
  local_14 = puVar2;
  local_2c.tv_sec = param_1;
  local_2c.tv_usec = 0;
  if (*(int *)((int)this + 0x44) == 2) {
    local_448.fd_array[0] = *(SOCKET *)((int)this + 0x18);
    local_344.fd_count = 1;
    local_448.fd_count = 1;
    local_344.fd_array[0] = local_448.fd_array[0];
    iVar5 = select(local_448.fd_array[0] + 1,(fd_set *)0x0,&local_344,&local_448,&local_2c);
    if (iVar5 != -1) {
      if (iVar5 != 0) {
        iVar5 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x18),&local_344);
        if (iVar5 == 0) {
          iVar5 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x18),&local_448);
          if (iVar5 != 0) {
            *(undefined4 *)((int)this + 0x44) = 0;
            (**(code **)(*(int *)this + 0x54))();
            ExceptionList = local_10;
            return 1;
          }
        }
        else {
          *(undefined4 *)((int)this + 0x44) = 3;
          (**(code **)(*(int *)this + 0x50))();
        }
      }
      ExceptionList = local_10;
      return 1;
    }
    iVar5 = WSAGetLastError();
    pFVar8 = *(FOutputDevice **)GWarn_exref;
    this_00 = extraout_ECX;
LAB_1070bb2b:
    FOutputDevice::Logf(this_00,(ushort *)pFVar8,L"!! Error checking socket status: %i",iVar5);
    ExceptionList = local_10;
    return 0;
  }
  if (*(int *)((int)this + 0x44) != 3) {
    ExceptionList = local_10;
    return 0;
  }
  local_240.fd_count = 0;
  local_13c.fd_count = 0;
  iVar5 = (*(code *)**(undefined4 **)this)();
  local_18 = (**(code **)(*(int *)this + 8))();
  if ((iVar5 != 0) && (local_240.fd_count < 0x40)) {
    local_240.fd_array[local_240.fd_count] = *(SOCKET *)((int)this + 0x18);
    local_240.fd_count = local_240.fd_count + 1;
  }
  if ((local_18 != 0) && (local_13c.fd_count < 0x40)) {
    local_13c.fd_array[local_13c.fd_count] = *(SOCKET *)((int)this + 0x18);
    local_13c.fd_count = local_13c.fd_count + 1;
  }
  if ((iVar5 == 0) && (local_18 == 0)) {
    if (param_1 == 0) {
      ExceptionList = local_10;
      return 1;
    }
    appSleep((float)param_1);
    ExceptionList = local_10;
    return 1;
  }
  iVar6 = select(*(int *)((int)this + 0x18) + 1,(fd_set *)(-(uint)(iVar5 != 0) & (uint)&local_240),
                 (fd_set *)(-(uint)(local_18 != 0) & (uint)&local_13c),(fd_set *)0x0,&local_2c);
  if (iVar6 == -1) {
    iVar5 = WSAGetLastError();
    this_00 = *(FOutputDevice **)GWarn_exref;
    pFVar8 = this_00;
    goto LAB_1070bb2b;
  }
  if (iVar6 == 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (iVar5 == 0) {
    if (local_18 != 0) {
      pcVar7 = *(code **)(*(int *)this + 0x38);
      goto LAB_1070bb8d;
    }
LAB_1070bb57:
    iVar5 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x18),&local_13c);
    if (iVar5 != 0) {
      (**(code **)(*(int *)this + 0x38))();
    }
    iVar5 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x18),&local_240);
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  else if (local_18 != 0) goto LAB_1070bb57;
  pcVar7 = *(code **)(*(int *)this + 0x34);
LAB_1070bb8d:
  (*pcVar7)();
  ExceptionList = local_10;
  return 1;
}


// ==== 1070bc8f Catch@1070bc8f

void Catch_1070bc8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_10756c40);
}


// ==== 1070bca3 Catch@1070bca3

void Catch_1070bca3(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::Poll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070bd90 FUN_1070bd90

void __fastcall FUN_1070bd90(int *param_1)

{
  size_t _Size;
  int iVar1;
  float10 fVar2;
  char local_430 [1032];
  longlong local_28;
  size_t local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a60;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbc4;
  local_8 = 0;
  if ((FInternetLink::ThrottleReceive == 0) || (0 < FInternetLink::BandwidthReceiveBudget)) {
    ExceptionList = &local_10;
    _Size = recv(param_1[6],local_430,0x400,0);
    local_1c = _Size;
    if ((int)_Size < 1) {
      closesocket(param_1[6]);
      param_1[6] = -1;
      param_1[0x11] = 0;
      (**(code **)(*param_1 + 0x58))();
      ExceptionList = local_10;
      return;
    }
    param_1[0xf] = param_1[0xf] + _Size;
    fVar2 = thunk_FUN_10702660();
    local_28 = (longlong)ROUND(fVar2);
    param_1[0x10] = (int)local_28;
    if (FInternetLink::ThrottleReceive != 0) {
      FInternetLink::BandwidthReceiveBudget = FInternetLink::BandwidthReceiveBudget - _Size;
    }
    do {
      iVar1 = FArray::Add((FArray *)(param_1 + 7),_Size,1);
      _memcpy((void *)(param_1[7] + iVar1),local_430,_Size);
      _Size = recv(param_1[6],local_430,0x400,0);
      local_1c = _Size;
      if ((int)_Size < 1) break;
      param_1[0xf] = param_1[0xf] + _Size;
    } while ((FInternetLink::ThrottleReceive == 0) ||
            (FInternetLink::BandwidthReceiveBudget = FInternetLink::BandwidthReceiveBudget - _Size,
            0 < FInternetLink::BandwidthReceiveBudget));
    if (param_1[0x12] == 1) {
      (**(code **)(*(int *)param_1[0x14] + 100))();
      iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x68))();
      if (iVar1 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    (**(code **)(*param_1 + 0x5c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1070bef0 Catch@1070bef0

void Catch_1070bef0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 1070bf04 Catch@1070bf04

void Catch_1070bf04(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::ReceivePendingData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070bf90 FUN_1070bf90

void __thiscall FUN_1070bf90(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x44) = 5;
  }
  else {
    ExceptionList = &local_10;
    closesocket(*(SOCKET *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0xffffffff;
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1070bffa Catch@1070bffa

void Catch_1070bffa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070c00e Catch@1070c00e

void Catch_1070c00e(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::Close");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070c060 FUN_1070c060

void __thiscall FUN_1070c060(void *this,ushort *param_1)

{
  void *this_00;
  FOutputDevice *pFVar1;
  int local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742a8b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  FIpAddr::FIpAddr((FIpAddr *)&local_24,param_1,0);
  if (local_24 == -1) {
    this_00 = (void *)thunk_FUN_107026d0(0x308);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (this_00 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    else {
      pFVar1 = thunk_FUN_10703780(this_00,param_1);
      *(FOutputDevice **)((int)this + 0x34) = pFVar1;
    }
  }
  else {
    (**(code **)(*(int *)this + 0x44))(local_24,local_20);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1070c0fb Catch@1070c0fb

void Catch_1070c0fb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070c10f Catch@1070c10f

void Catch_1070c10f(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::Resolve");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070c160 FUN_1070c160

void __thiscall FUN_1070c160(void *this,u_long param_1,u_short param_2)

{
  sockaddr *addr;
  undefined1 *puVar1;
  u_short uVar2;
  SOCKET SVar3;
  uint uVar4;
  int iVar5;
  sockaddr local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742aa0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffc8;
  if (*(int *)((int)this + 0x44) != 0) {
    ExceptionList = &local_10;
    closesocket(*(SOCKET *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0xffffffff;
    *(undefined4 *)((int)this + 0x44) = 0;
    puVar1 = local_14;
  }
  local_14 = puVar1;
  addr = (sockaddr *)((int)this + 4);
  addr->sa_family = 2;
  SVar3 = socket(2,1,6);
  *(SOCKET *)((int)this + 0x18) = SVar3;
  if (SVar3 == 0xffffffff) {
    appFailAssert("SocketData.Socket != INVALID_SOCKET",".\\InternetLink.cpp",0x2a3);
  }
  thunk_FUN_1071b6e0(*(SOCKET *)((int)this + 0x18));
  addr->sa_family = 2;
  uVar4 = thunk_FUN_10703e30(*(ushort **)GWarn_exref);
  *(uint *)((int)this + 8) = uVar4;
  uVar2 = htons(0);
  *(u_short *)((int)this + 6) = uVar2;
  *(undefined4 *)((int)this + 0x14) = 0;
  thunk_FUN_1071b710(*(SOCKET *)((int)this + 0x18),1);
  iVar5 = bind(*(SOCKET *)((int)this + 0x18),addr,0x10);
  if (iVar5 == -1) {
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                        L"Failed to bind connect socket");
  }
  FSocketData::UpdateFromSocket((FSocketData *)addr);
  local_2c.sa_family = 2;
  local_2c.sa_data._0_2_ = htons(param_2);
  local_2c.sa_data._2_4_ = htonl(param_1);
  iVar5 = connect(*(SOCKET *)((int)this + 0x18),&local_2c,0x10);
  if (iVar5 == -1) {
    iVar5 = WSAGetLastError();
    if (iVar5 != 0x2733) {
      iVar5 = WSAGetLastError();
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                          L"Connect() returned SOCKET_ERROR: %d",iVar5);
    }
  }
  *(undefined4 *)((int)this + 0x44) = 2;
  ExceptionList = local_10;
  return;
}


// ==== 1070c2b9 Catch@1070c2b9

void Catch_1070c2b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070c2cd Catch@1070c2cd

void Catch_1070c2cd(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::Connect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070c350 FUN_1070c350

void __thiscall FUN_1070c350(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)((int)this + 0x20);
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  return;
}


// ==== 1070c370 FUN_1070c370

undefined4 __fastcall FUN_1070c370(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ==== 1070c3ac Catch@1070c3ac

void Catch_1070c3ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070c3c0 Catch@1070c3c0

void Catch_1070c3c0(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FArchiveTcpReader::AtEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070c400 FUN_1070c400

FArchiveTcpSocket * __thiscall FUN_1070c400(void *this,FTcpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742ad4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchiveTcpSocket::FArchiveTcpSocket(this,param_1);
  local_4 = 0;
  *(undefined ***)this = FArchiveTcpWriter::vftable;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)((int)this + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,1);
  FArray::Add((FArray *)((int)this + 0x3c),4,1);
  *(undefined4 *)((int)this + 0x14) = 1;
  ExceptionList = local_c;
  return this;
}


// ==== 1070c4a0 FUN_1070c4a0

void __thiscall FUN_1070c4a0(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add((FArray *)((int)this + 0x3c),param_2,1);
  _memcpy((void *)(*(int *)((int)this + 0x3c) + iVar1),param_1,param_2);
  return;
}


// ==== 1070c4e0 FUN_1070c4e0

void __fastcall FUN_1070c4e0(int param_1)

{
  TArray<unsigned_char> *this;
  
  if (4 < *(uint *)(param_1 + 0x40)) {
    this = (TArray<unsigned_char> *)(param_1 + 0x3c);
    **(int **)(param_1 + 0x3c) = *(uint *)(param_1 + 0x40) - 4;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
              (*(undefined4 *)this,*(undefined4 *)(param_1 + 0x40));
    TArray<unsigned_char>::Empty(this,0);
    FArray::Add((FArray *)this,4,1);
  }
  return;
}


// ==== 1070c530 FUN_1070c530

undefined4 * __fastcall FUN_1070c530(undefined4 *param_1)

{
  SOCKET SVar1;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10742af9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  *param_1 = FUdpLink::vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_8 = 0;
  FString::FString(local_28);
  local_8._0_1_ = 1;
  thunk_FUN_1071af40();
  *(undefined2 *)(param_1 + 1) = 2;
  SVar1 = socket(2,2,0x11);
  param_1[6] = SVar1;
  thunk_FUN_1071b710(SVar1,1);
  thunk_FUN_1071b6e0(param_1[6]);
  thunk_FUN_1071b780();
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1070c5d7 Catch@1070c5d7

void Catch_1070c5d7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070c5eb Catch@1070c5eb

void Catch_1070c5eb(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FUdpLink::FUdpLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070c640 FUN_1070c640

void __thiscall
FUN_1070c640(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = param_6;
  *(undefined ***)this = FUdpLink::vftable;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}


// ==== 1070c6a0 FUN_1070c6a0

void __fastcall FUN_1070c6a0(undefined4 *param_1)

{
  *param_1 = FUdpLink::vftable;
  if (param_1[7] == 0) {
    closesocket(param_1[6]);
    param_1[6] = 0xffffffff;
  }
  return;
}


// ==== 1070c6d0 FUN_1070c6d0

undefined4 __thiscall FUN_1070c6d0(void *this,int param_1)

{
  int iVar1;
  u_short uVar2;
  uint uVar3;
  int iVar4;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  puStack_c = &LAB_10742b10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)((int)this + 0x14) = param_1;
  uVar2 = htons((u_short)param_1);
  *(u_short *)((int)this + 6) = uVar2;
  uVar3 = thunk_FUN_10703e30(*(ushort **)GWarn_exref);
  *(uint *)((int)this + 8) = uVar3;
  param_1 = 1;
  iVar4 = setsockopt(*(SOCKET *)((int)this + 0x18),0xffff,0x20,(char *)&param_1,4);
  if (iVar4 != 0) {
    FOutputDevice::Logf(this_00,*(ushort **)GError_exref,L"FUdpLink::BindPort: setsockopt failed");
  }
  iVar4 = bind(*(SOCKET *)((int)this + 0x18),(sockaddr *)((int)this + 4),0x10);
  if (iVar4 == -1) {
    FOutputDevice::Logf(this_01,*(ushort **)GError_exref,
                        L"FUdpLink::BindPort: Failed to bind UDP socket to port");
  }
  if (iVar1 == 0) {
    FSocketData::UpdateFromSocket((FSocketData *)((int)this + 4));
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 1070c7a7 Catch@1070c7a7

void Catch_1070c7a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070c7bb Catch@1070c7bb

void Catch_1070c7bb(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FUdpLink::BindPort");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070c820 FUN_1070c820

int __thiscall FUN_1070c820(void *this,undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FString *this_00;
  int iVar3;
  ushort *puVar4;
  FOutputDevice *this_01;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FIpAddr::GetSockAddr((FIpAddr *)&param_1);
  iVar1 = param_3;
  iVar2 = sendto(*(SOCKET *)((int)this + 0x18),param_2,param_3,0,(sockaddr *)local_20,0x10);
  if (iVar2 < 0) {
    uVar6 = 1;
    this_00 = (FString *)FIpAddr::GetString((FIpAddr *)&stack0x00000000,(int)&stack0xffffffd4);
    local_c = (void *)0x0;
    iVar3 = WSAGetLastError();
    iVar5 = iVar2;
    puVar4 = FString::operator*(this_00);
    FOutputDevice::Logf(this_01,*(ushort **)GWarn_exref,L"SendTo: %s returned %d: %d",puVar4,iVar5,
                        iVar3,uVar6);
    local_c = (void *)0xffffffff;
    FString::~FString((FString *)&stack0xffffffd0);
  }
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + iVar1;
  ExceptionList = (void *)local_20._12_4_;
  return iVar2;
}


// ==== 1070c910 FUN_1070c910

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_1070c910(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_1038 [4096];
  FIpAddr local_38 [12];
  sockaddr local_2c;
  int local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742b40;
  local_10 = ExceptionList;
  local_1c[1] = 0x1070c933;
  local_14 = &stack0xffffefbc;
  local_8 = 0;
  local_1c[0] = 0x10;
  ExceptionList = &local_10;
  do {
    while (iVar2 = recvfrom(param_1[6],local_1038,0x1000,0,&local_2c,local_1c), iVar2 != -1) {
      if (iVar2 < 1) {
        ExceptionList = local_10;
        return;
      }
      param_1[9] = param_1[9] + iVar2;
      iVar1 = *param_1;
      puVar3 = (undefined4 *)
               FIpAddr::FIpAddr(local_38,local_2c._0_4_,local_2c.sa_data._2_4_,
                                local_2c.sa_data._6_4_,local_2c.sa_data._10_4_);
      (**(code **)(iVar1 + 0x14))(*puVar3,puVar3[1],local_1038,iVar2);
    }
    iVar2 = WSAGetLastError();
    if (iVar2 == 0x2733) {
      ExceptionList = local_10;
      return;
    }
    iVar2 = WSAGetLastError();
  } while (iVar2 == 0x2746);
  iVar2 = WSAGetLastError();
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                      L"RecvFrom returned SOCKET_ERROR %d",iVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1070ca0d Catch@1070ca0d

void Catch_1070ca0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070ca21 Catch@1070ca21

void Catch_1070ca21(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FUdpLink::Poll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070ca90 FUN_1070ca90

FArchive * __thiscall FUN_1070ca90(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742b59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(this);
  *(undefined ***)this = FArchiveUdpReader::vftable;
  *(uint **)((int)this + 0x38) = param_1;
  *(uint *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  if (param_2 < 4) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0x80000000;
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  else {
    uVar1 = *param_1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint **)((int)this + 0x38) = param_1 + 1;
    *(uint *)((int)this + 0x3c) = param_2 - 4;
    *(uint *)((int)this + 8) = uVar1 | 0x80000000;
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1070cb40 FUN_1070cb40

void __thiscall FUN_1070cb40(void *this,void *param_1,size_t param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742b70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x3c) < (int)param_2) {
    *(undefined4 *)((int)this + 0x2c) = 1;
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  else {
    ExceptionList = &local_10;
    _memcpy(param_1,*(void **)((int)this + 0x38),param_2);
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + param_2;
    *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) - param_2;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1070cbb3 Catch@1070cbb3

void Catch_1070cbb3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070cbc7 Catch@1070cbc7

void Catch_1070cbc7(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FArchiveUdpReader::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070cc10 FUN_1070cc10

bool __fastcall FUN_1070cc10(int param_1)

{
  return *(int *)(param_1 + 0x3c) == 0;
}


// ==== 1070cc51 Catch@1070cc51

void Catch_1070cc51(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070cc65 Catch@1070cc65

void Catch_1070cc65(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FArchiveUdpReader::AtEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070cca0 FUN_1070cca0

FArchive * __thiscall
FUN_1070cca0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  TArray<unsigned_char> *this_00;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742ba5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  this_00 = (TArray<unsigned_char> *)((int)this + 0x44);
  *(undefined ***)this = FArchiveUdpWriter::vftable;
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x40) = param_3;
  TArray<unsigned_char>::TArray<unsigned_char>(this_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 0x14) = 1;
  FArray::Add((FArray *)this_00,4,1);
  **(undefined4 **)this_00 = uVar1;
  ExceptionList = local_c;
  return this;
}


// ==== 1070cd60 FUN_1070cd60

void __thiscall FUN_1070cd60(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add((FArray *)((int)this + 0x44),param_2,1);
  _memcpy((void *)(*(int *)((int)this + 0x44) + iVar1),param_1,param_2);
  return;
}


// ==== 1070cda0 FUN_1070cda0

void __fastcall FUN_1070cda0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
              (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x48));
    TArray<unsigned_char>::Empty((TArray<unsigned_char> *)(param_1 + 0x44),0);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  FArray::Add((FArray *)(param_1 + 0x44),4,1);
  **(undefined4 **)(param_1 + 0x44) = uVar1;
  return;
}


// ==== 1070ce00 FUN_1070ce00

undefined4 __fastcall FUN_1070ce00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ==== 1070ce10 FUN_1070ce10

void __fastcall FUN_1070ce10(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 1070cec0 FUN_1070cec0

int __thiscall FUN_1070cec0(void *this,float param_1,ELevelTick param_2)

{
  uint *puVar1;
  int iVar2;
  FString *this_00;
  ushort *puVar3;
  undefined4 uVar4;
  FString local_30 [12];
  u_long local_24 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10742be9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = AActor::Tick(this,param_1,param_2);
  puVar1 = *(uint **)((int)this + 0x3cc);
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == 0)) {
    if (((short)puVar1[0x42] == 0) || (puVar1 + 0x42 == (uint *)0x0)) {
      if (*(int *)GLog_exref != 0) {
        this_00 = thunk_FUN_1071b5d0(local_30,*puVar1,0);
        local_8._0_1_ = 1;
        puVar3 = FString::operator*(this_00);
        uVar4 = thunk_FUN_10703910(*(int *)((int)this + 0x3cc));
        FOutputDevice::Logf2
                  ((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref,L"Resolved %s (%s)",uVar4,
                   puVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_30);
      }
      thunk_FUN_1071b5b0(**(undefined4 **)((int)this + 0x3cc),local_24);
      local_24[0] = htonl(local_24[0]);
      local_24[1] = 0;
      AInternetLink::eventResolved(this,local_24[0],0);
    }
    else {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2
                  (*(FOutputDevice **)GLog_exref,(EName)*(FOutputDevice **)GLog_exref,
                   (ushort *)0x2f8,L"AInternetLink Resolve failed: %s",
                   -(uint)((short)puVar1[0x42] != 0) & (uint)(puVar1 + 0x42));
      }
      AInternetLink::eventResolveFailed(this);
    }
    thunk_FUN_107026f0(*(undefined4 *)((int)this + 0x3cc));
    *(undefined4 *)((int)this + 0x3cc) = 0;
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 1070d00f Catch@1070d00f

void Catch_1070d00f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070d023 Catch@1070d023

void Catch_1070d023(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070d0a0 FUN_1070d0a0

void __thiscall FUN_1070d0a0(void *this,int param_1)

{
  byte bVar1;
  ushort *puVar2;
  ulong hostlong;
  int iVar3;
  void *this_00;
  FOutputDevice *pFVar4;
  char *pcVar5;
  FString local_30 [12];
  u_long local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10742c09;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pcVar5 = (char *)0x0;
  puVar2 = FString::operator*(local_30);
  pcVar5 = appToAnsi(puVar2,pcVar5);
  hostlong = inet_addr(pcVar5);
  if (hostlong == 0xffffffff) {
    iVar3 = FString::operator!=(local_30,(ushort *)L"255.255.255.255");
    if (iVar3 == 0) {
      AInternetLink::eventResolveFailed(this);
    }
    else {
      this_00 = (void *)thunk_FUN_107098a0(0x308,L"InternetLinkResolve");
      if (this_00 == (void *)0x0) {
        *(undefined4 *)((int)this + 0x3cc) = 0;
      }
      else {
        puVar2 = FString::operator*(local_30);
        pFVar4 = thunk_FUN_10703780(this_00,puVar2);
        *(FOutputDevice **)((int)this + 0x3cc) = pFVar4;
      }
    }
  }
  else {
    local_24 = htonl(hostlong);
    local_20 = 0;
    AInternetLink::eventResolved(this,local_24,0);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 1070d1d2 Catch@1070d1d2

void Catch_1070d1d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070d1e6 Catch@1070d1e6

void Catch_1070d1e6(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10749e48,L"AInternetLink::execResolve");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070d2a0 FUN_1070d2a0

void __cdecl FUN_1070d2a0(int param_1,int param_2)

{
  FInternetLink::BandwidthSendBudget = param_1;
  FInternetLink::ThrottleSend = (uint)(param_1 != 0);
  FInternetLink::BandwidthReceiveBudget = FInternetLink::BandwidthReceiveBudget + param_2;
  FInternetLink::ThrottleReceive = (uint)(param_2 != 0);
  if (param_2 < FInternetLink::BandwidthReceiveBudget) {
    FInternetLink::BandwidthReceiveBudget = param_2;
  }
  return;
}


// ==== 1070d2f0 FUN_1070d2f0

void __fastcall FUN_1070d2f0(int param_1)

{
  TArray<unsigned_char> *this;
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FOutputDevice *this_00;
  undefined4 local_420;
  char local_408 [1028];
  
  iVar4 = *(int *)(param_1 + 0x44);
  if (((iVar4 == 3) || (iVar4 == 5)) || (iVar4 == 4)) {
    iVar4 = *(int *)(param_1 + 0x2c);
    while ((iVar4 != 0 &&
           ((FInternetLink::ThrottleSend == 0 || (0 < FInternetLink::BandwidthSendBudget))))) {
      iVar4 = *(int *)(param_1 + 0x2c);
      if (0x1000 < iVar4) {
        iVar4 = 0x1000;
      }
      if ((FInternetLink::ThrottleSend != 0) && (FInternetLink::BandwidthSendBudget < iVar4)) {
        iVar4 = FInternetLink::BandwidthSendBudget;
      }
      this = (TArray<unsigned_char> *)(param_1 + 0x28);
      iVar4 = send(*(SOCKET *)(param_1 + 0x18),*(char **)(param_1 + 0x28),iVar4,0);
      if (iVar4 == *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar4;
        lVar1 = rdtsc();
        dVar2 = (double)(int)((ulonglong)lVar1 >> 0x20);
        if (lVar1 < 0) {
          dVar2 = dVar2 + 4294967296.0;
        }
        dVar3 = (double)(int)lVar1;
        if ((int)lVar1 < 0) {
          dVar3 = dVar3 + 4294967296.0;
        }
        local_420 = (undefined4)
                    (longlong)
                    ROUND((dVar3 + dVar2 * 4294967296.0) * *(double *)GSecondsPerCycle_exref +
                          16777216.0);
        *(undefined4 *)(param_1 + 0x40) = local_420;
        if (FInternetLink::ThrottleSend != 0) {
          FInternetLink::BandwidthSendBudget = FInternetLink::BandwidthSendBudget - iVar4;
        }
        TArray<unsigned_char>::Empty(this,0);
      }
      else if (iVar4 == -1) {
        iVar4 = WSAGetLastError();
        if (iVar4 == 0x2733) break;
        iVar4 = WSAGetLastError();
        FOutputDevice::Logf(this_00,*(ushort **)GWarn_exref,
                            L"!!SendPendingData() got SOCKET_ERROR: %d",iVar4);
        *(undefined4 *)(param_1 + 0x44) = 5;
        TArray<unsigned_char>::Empty(this,0);
      }
      else {
        TArray<unsigned_char>::Remove(this,0,iVar4);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar4;
        lVar1 = rdtsc();
        dVar2 = (double)(int)((ulonglong)lVar1 >> 0x20);
        if (lVar1 < 0) {
          dVar2 = dVar2 + 4294967296.0;
        }
        dVar3 = (double)(int)lVar1;
        if ((int)lVar1 < 0) {
          dVar3 = dVar3 + 4294967296.0;
        }
        local_420 = (undefined4)
                    (longlong)
                    ROUND((dVar3 + dVar2 * 4294967296.0) * *(double *)GSecondsPerCycle_exref +
                          16777216.0);
        *(undefined4 *)(param_1 + 0x40) = local_420;
        if (FInternetLink::ThrottleSend != 0) {
          FInternetLink::BandwidthSendBudget = FInternetLink::BandwidthSendBudget - iVar4;
        }
      }
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    if ((*(int *)(param_1 + 0x44) == 5) && (*(int *)(param_1 + 0x2c) == 0)) {
      shutdown(*(SOCKET *)(param_1 + 0x18),2);
      *(undefined4 *)(param_1 + 0x44) = 4;
    }
    if ((*(int *)(param_1 + 0x44) == 4) &&
       (iVar4 = recv(*(SOCKET *)(param_1 + 0x18),local_408,0x400,0), iVar4 < 1)) {
      closesocket(*(SOCKET *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
  }
  return;
}


// ==== 1070d5c0 FUN_1070d5c0

int __thiscall FUN_1070d5c0(void *this,char *param_1,int param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FOutputDevice *this_00;
  int iVar5;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x44) != 3) {
    return 0;
  }
  iVar5 = 0;
  if (*(int *)((int)this + 0x2c) == 0) {
    iVar4 = param_2;
    if (FInternetLink::ThrottleSend != 0) {
      if (FInternetLink::BandwidthSendBudget < 1) goto LAB_1070d64a;
      iVar4 = FInternetLink::BandwidthSendBudget;
      if (param_2 <= FInternetLink::BandwidthSendBudget) {
        iVar4 = param_2;
      }
    }
    iVar5 = send(*(SOCKET *)((int)this + 0x18),param_1,iVar4,0);
    if (iVar5 == -1) {
      iVar5 = WSAGetLastError();
      if (iVar5 != 0x2733) {
        iVar5 = WSAGetLastError();
        FOutputDevice::Logf(this_00,*(ushort **)GWarn_exref,L"!!Send() got SOCKET_ERROR %d",iVar5);
      }
      iVar5 = 0;
    }
  }
LAB_1070d64a:
  if (iVar5 != param_2) {
    iVar4 = FArray::Add((FArray *)((int)this + 0x28),param_2 - iVar5,1);
    _memcpy((void *)(*(int *)((int)this + 0x28) + iVar4),param_1 + iVar5,param_2 - iVar5);
  }
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + iVar5;
  lVar1 = rdtsc();
  dVar2 = (double)(int)((ulonglong)lVar1 >> 0x20);
  if (lVar1 < 0) {
    dVar2 = dVar2 + 4294967296.0;
  }
  dVar3 = (double)(int)lVar1;
  if ((int)lVar1 < 0) {
    dVar3 = dVar3 + 4294967296.0;
  }
  local_8 = (undefined4)
            (longlong)
            ROUND((dVar3 + dVar2 * 4294967296.0) * *(double *)GSecondsPerCycle_exref + 16777216.0);
  *(undefined4 *)((int)this + 0x40) = local_8;
  if (FInternetLink::ThrottleSend != 0) {
    FInternetLink::BandwidthSendBudget = FInternetLink::BandwidthSendBudget - iVar5;
  }
  return param_2;
}


// ==== 1070d750 FUN_1070d750

size_t __thiscall FUN_1070d750(void *this,void *param_1,size_t param_2)

{
  size_t _Size;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742c20;
  local_10 = ExceptionList;
  local_8 = 0;
  _Size = *(size_t *)((int)this + 0x20);
  if ((int)param_2 <= (int)*(size_t *)((int)this + 0x20)) {
    _Size = param_2;
  }
  if ((int)_Size < 0) {
    _Size = 0;
    ExceptionList = &local_10;
  }
  else {
    ExceptionList = &local_10;
    if (_Size != 0) {
      ExceptionList = &local_10;
      _memcpy(param_1,*(void **)((int)this + 0x1c),_Size);
    }
  }
  TArray<unsigned_char>::Remove((TArray<unsigned_char> *)((int)this + 0x1c),0,_Size);
  ExceptionList = local_10;
  return _Size;
}


// ==== 1070d7c6 Catch@1070d7c6

void Catch_1070d7c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070d7da Catch@1070d7da

void Catch_1070d7da(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FTcpLink::Recv");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070d820 FUN_1070d820

void __fastcall FUN_1070d820(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742c30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    while( true ) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 4))();
      if ((int)uVar2 < 1) {
        ExceptionList = local_10;
        return;
      }
      if ((*(int *)(param_1 + 0x40) == 0) ||
         (iVar3 = *(int *)(param_1 + 0x40) * 0x10,
         piVar1 = (int *)(*(int *)(param_1 + 0x3c) + -0x10 + iVar3), *piVar1 <= piVar1[2])) break;
      piVar1 = (int *)(*(int *)(param_1 + 0x3c) + -0x10 + iVar3);
      if (*piVar1 - piVar1[2] < (int)uVar2) {
        uVar2 = *piVar1 - piVar1[2];
      }
      iVar3 = FArray::Add((FArray *)(piVar1 + 1),uVar2,1);
      (**(code **)(**(int **)(param_1 + 0x38) + 0x14))(piVar1[1] + iVar3,uVar2);
    }
    if (uVar2 < 4) break;
    iVar3 = FArray::AddZeroed((FArray *)(param_1 + 0x3c),0x10,1);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x14))(iVar3 * 0x10 + *(int *)(param_1 + 0x3c),4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1070d8ef Catch@1070d8ef

void Catch_1070d8ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070d903 Catch@1070d903

void Catch_1070d903(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FArchiveTcpReader::ReceiveDataFromLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070d960 FUN_1070d960

int __fastcall FUN_1070d960(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x3c);
    do {
      if (*piVar2 == piVar2[2]) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


// ==== 1070d990 FUN_1070d990

void __fastcall FUN_1070d990(undefined4 *param_1)

{
  TArray<unsigned_char> *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10742c5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = FArchiveTcpWriter::vftable;
  local_4 = 1;
  if (4 < (uint)param_1[0x10]) {
    this = (TArray<unsigned_char> *)(param_1 + 0xf);
    *(uint *)param_1[0xf] = param_1[0x10] - 4;
    (**(code **)(*(int *)param_1[0xe] + 0x10))(*(undefined4 *)this,param_1[0x10]);
    TArray<unsigned_char>::Empty(this,0);
    FArray::Add((FArray *)this,4,1);
  }
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(param_1 + 0xf));
  *param_1 = _vftable__exref;
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070da50 FUN_1070da50

void __thiscall FUN_1070da50(void *this,void *param_1,size_t param_2)

{
  int *this_00;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742c70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    this_00 = (int *)((int)this + 0x3c);
    piVar1 = (int *)*this_00;
    if ((*piVar1 == piVar1[2]) && ((int)param_2 <= *piVar1)) {
      ExceptionList = &local_10;
      _memcpy(param_1,(void *)piVar1[1],param_2);
      TArray<unsigned_char>::Remove((TArray<unsigned_char> *)(*this_00 + 4),0,param_2);
      *(int *)*this_00 = *(int *)*this_00 - param_2;
      if (*(int *)*this_00 == 0) {
        thunk_FUN_10708c10(this_00,0,1);
        *(undefined4 *)((int)this + 0x48) = 1;
      }
      else {
        *(undefined4 *)((int)this + 0x48) = 0;
      }
      ExceptionList = local_10;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x2c) = 1;
  return;
}


// ==== 1070db0c Catch@1070db0c

void Catch_1070db0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070db20 Catch@1070db20

void Catch_1070db20(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FArchiveTcpReader::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070db80 FUN_1070db80

FArchiveTcpSocket * __thiscall FUN_1070db80(void *this,FTcpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742c9c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchiveTcpSocket::FArchiveTcpSocket(this,param_1);
  *(undefined ***)this = FArchiveTcpReader::vftable;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1070dc10 FUN_1070dc10

void __thiscall FUN_1070dc10(void *this,int param_1)

{
  FArchiveTcpWriter *this_00;
  undefined4 uVar1;
  FArchiveTcpReader *this_01;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10742cc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0x48) = param_1;
  if (param_1 == 1) {
    if (*(int *)((int)this + 0x4c) == 0) {
      this_00 = (FArchiveTcpWriter *)(**(code **)**(undefined4 **)GMalloc_exref)(0x48,&DAT_10749b4c)
      ;
      uStack_4 = 0;
      if (this_00 == (FArchiveTcpWriter *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FArchiveTcpWriter::FArchiveTcpWriter(this_00,this);
      }
      *(undefined4 *)((int)this + 0x4c) = uVar1;
    }
    uStack_4 = 0xffffffff;
    if (*(int *)((int)this + 0x50) == 0) {
      this_01 = (FArchiveTcpReader *)(**(code **)**(undefined4 **)GMalloc_exref)(0x4c,&DAT_10749b4c)
      ;
      uStack_4 = 1;
      if (this_01 == (FArchiveTcpReader *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FArchiveTcpReader::FArchiveTcpReader(this_01,this);
      }
      *(undefined4 *)((int)this + 0x50) = uVar1;
    }
  }
  else {
    if (*(undefined4 **)((int)this + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x4c))(1);
      *(undefined4 *)((int)this + 0x4c) = 0;
    }
    if (*(undefined4 **)((int)this + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x50))(1);
      *(undefined4 *)((int)this + 0x50) = 0;
      ExceptionList = unaff_ESI;
      return;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 1070dd50 FUN_1070dd50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1070dd50(undefined4 param_1)

{
  _DAT_10767e28 = param_1;
  return 1;
}


// ==== 1070dd70 FUN_1070dd70

undefined4 __fastcall FUN_1070dd70(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742ce0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x3bc) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc))();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1070ddc3 Catch@1070ddc3

void Catch_1070ddc3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070ddd7 Catch@1070ddd7

void Catch_1070ddd7(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AServerQueryClient::Poll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070de20 FUN_1070de20

void __fastcall FUN_1070de20(AActor *param_1)

{
  if (*(int **)(param_1 + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x1070de43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::Destroy(param_1);
  return;
}


// ==== 1070de60 FUN_1070de60

void __fastcall FUN_1070de60(AActor *param_1)

{
  AActor::PostScriptDestroyed(param_1);
  if (*(int **)(param_1 + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  return;
}


// ==== 1070dea0 FUN_1070dea0

FTcpLink * __thiscall FUN_1070dea0(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742d04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FTcpLink::FTcpLink(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x58) = param_1;
  *(undefined ***)this = FMasterServerClientLink::vftable;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0;
  FString::FString((FString *)((int)this + 0x68));
  local_4 = CONCAT31(local_4._1_3_,1);
  FTcpLink::SetLinkMode(this,1);
  ExceptionList = local_c;
  return this;
}


// ==== 1070dfa0 FUN_1070dfa0

void __thiscall FUN_1070dfa0(void *this,undefined4 param_1)

{
  FString *this_00;
  ushort *puVar1;
  ushort *puVar2;
  FOutputDevice *this_01;
  undefined4 unaff_retaddr;
  undefined4 uStack00000008;
  undefined4 uVar3;
  void *local_18 [3];
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_10742d29;
  pvStack_c = ExceptionList;
  uStack00000008 = *(undefined4 *)((int)this + 0x74);
  uVar3 = 0;
  ExceptionList = &pvStack_c;
  this_00 = (FString *)FIpAddr::GetString((FIpAddr *)&param_1,(int)local_18);
  local_8 = (undefined1 *)0x0;
  puVar1 = FString::operator*(this_00);
  puVar2 = FString::operator*((FString *)((int)this + 0x68));
  FOutputDevice::Logf(this_01,*(ushort **)GWarn_exref,L"Resolved %s -> %s",puVar2,puVar1,uVar3);
  local_8 = (undefined1 *)0xffffffff;
  FString::~FString((FString *)&stack0xffffffe4);
  (**(code **)(*(int *)this + 0x28))(unaff_retaddr,param_1);
  ExceptionList = local_18[0];
  return;
}


// ==== 1070e070 FUN_1070e070

void FUN_1070e070(void)

{
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"Connection established.");
  return;
}


// ==== 1070e090 FUN_1070e090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1070e090(int param_1)

{
  int *piVar1;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"Connection failed!!");
  piVar1 = (int *)(*(int *)(param_1 + 0x58) + 0x3c8);
  *piVar1 = *piVar1 + 1;
  UObject::SaveConfig(*(UObject **)(param_1 + 0x58),0x4000,(ushort *)0x0);
  local_8[0] = 1;
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))
            (_IPDRV_OnQueryFinished,*(int **)(param_1 + 0x58) + 0x111,local_8,0);
  return;
}


// ==== 1070e110 FUN_1070e110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1070e110(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  puVar2 = FString::operator*((FString *)(param_1 + 0x68));
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"Failed to resolve \'%s\'",puVar2);
  piVar1 = (int *)(*(int *)(param_1 + 0x58) + 0x3c8);
  *piVar1 = *piVar1 + 1;
  UObject::SaveConfig(*(UObject **)(param_1 + 0x58),0x4000,(ushort *)0x0);
  local_8[0] = 1;
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))
            (_IPDRV_OnQueryFinished,*(int **)(param_1 + 0x58) + 0x111,local_8,0);
  return;
}


// ==== 1070e1a0 FUN_1070e1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1070e1a0(int param_1)

{
  undefined1 local_8 [4];
  undefined4 local_4;
  
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"Connection closed!!");
  if ((-1 < *(int *)(param_1 + 0x5c)) && (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x5c))) {
    local_8[0] = 2;
    local_4 = 0;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x14))
              (_IPDRV_OnQueryFinished,*(int **)(param_1 + 0x58) + 0x111,local_8,0);
  }
  return;
}


// ==== 1070e210 FUN_1070e210

void __fastcall FUN_1070e210(FTcpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742d54;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 0x68));
  local_4 = 0xffffffff;
  FTcpLink::~FTcpLink(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1070e270 FUN_1070e270

void __thiscall FUN_1070e270(void *this,int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742d70;
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
  uVar2 = (**(code **)(*(int *)this + 800))(local_18);
  *param_2 = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1070e316 Catch@1070e316

void Catch_1070e316(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1070e32a Catch@1070e32a

void Catch_1070e32a(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AMasterServerLink::execPoll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070e380 FUN_1070e380

undefined4 __thiscall FUN_1070e380(void *this,int param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742d80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  AServerQueryClient::Poll(this,param_1);
  if (*(int *)((int)this + 0x430) != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x430) + 0x2c))(param_1);
    ExceptionList = local_10;
    return uVar1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1070e3f2 Catch@1070e3f2

void Catch_1070e3f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070e406 Catch@1070e406

void Catch_1070e406(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AMasterServerClient::Poll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070e450 FUN_1070e450

void __fastcall FUN_1070e450(AActor *param_1)

{
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x430) = 0;
  if (*(int **)(param_1 + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x1070e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::Destroy(param_1);
  return;
}


// ==== 1070e4b0 FUN_1070e4b0

void __fastcall FUN_1070e4b0(AActor *param_1)

{
  AActor::PostScriptDestroyed(param_1);
  if (*(int **)(param_1 + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x430) = 0;
  return;
}


// ==== 1070e510 FUN_1070e510

void __thiscall FUN_1070e510(void *this,int param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int **)((int)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x430) + 0xc))(1);
  }
  *(undefined4 *)((int)this + 0x430) = 0;
  return;
}


// ==== 1070e570 FUN_1070e570

void FUN_1070e570(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742d90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  appLaunchURL((ushort *)L"Setup.exe",(ushort *)L"autopatch",(FString *)0x0);
  appRequestExit(0);
  ExceptionList = local_10;
  return;
}


// ==== 1070e5f7 Catch@1070e5f7

void Catch_1070e5f7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070e60b Catch@1070e60b

void Catch_1070e60b(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AMasterServerClient::execLaunchAutoUpdate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070e660 FUN_1070e660

void __fastcall FUN_1070e660(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = uVar1;
  return;
}


// ==== 1070e6c0 FUN_1070e6c0

void __thiscall FUN_1070e6c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x1070e6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::Realloc(this,4);
  return;
}


// ==== 1070e6f0 FUN_1070e6f0

void __fastcall FUN_1070e6f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 1070e770 FUN_1070e770

void __fastcall FUN_1070e770(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742dec;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)(param_1 + 0x18));
  ExceptionList = local_c;
  return;
}


// ==== 1070e8b0 FUN_1070e8b0

int __cdecl FUN_1070e8b0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 1070e8d0 FUN_1070e8d0

void __thiscall
FUN_1070e8d0(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,FServerResponseLine *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  FArchiveUdpWriter local_70 [88];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10742e08;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  iVar3 = 0;
  ExceptionList = &local_10;
  do {
    iVar2 = *(int *)((int)this + 0x30);
    local_18 = iVar3;
    if (iVar2 <= iVar3) {
LAB_1070e923:
      if (iVar3 == iVar2) {
        iVar3 = FArray::AddZeroed((FArray *)((int)this + 0x2c),0x80,1);
        local_18 = iVar3;
      }
      iVar3 = iVar3 * 0x80;
      *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x7c + iVar3) = 0;
      iVar2 = *(int *)((int)this + 0x2c);
      fVar4 = thunk_FUN_10702660();
      uVar1 = param_3;
      *(double *)(iVar2 + iVar3 + 0x10) = (double)fVar4;
      iVar2 = *(int *)((int)this + 0x2c);
      *(undefined4 *)(iVar2 + 8 + iVar3) = param_3;
      *(undefined4 *)(iVar2 + 0xc + iVar3) = param_4;
      FServerResponseLine::operator=
                ((FServerResponseLine *)(*(int *)((int)this + 0x2c) + 0x18 + iVar3),param_6);
      *(undefined4 *)(iVar3 + *(int *)((int)this + 0x2c)) = param_1;
      *(undefined1 *)(*(int *)((int)this + 0x2c) + 4 + iVar3) = param_2;
      *(char *)(*(int *)((int)this + 0x2c) + 5 + iVar3) = param_5;
      FArchiveUdpWriter::FArchiveUdpWriter(local_70,this,uVar1,param_4);
      local_8 = CONCAT31(local_8._1_3_,1);
      thunk_FUN_10702730((int *)local_70,&param_5);
      FArchiveUdpWriter::Flush(local_70);
      if (param_5 == '\x03') {
        param_5 = '\0';
        thunk_FUN_10702730((int *)local_70,&param_5);
        FArchiveUdpWriter::Flush(local_70);
      }
      local_8 = local_8 & 0xffffff00;
      FArchiveUdpWriter::~FArchiveUdpWriter(local_70);
      ExceptionList = local_10;
      return;
    }
    iVar2 = FIpAddr::operator==((FIpAddr *)&param_3,
                                (FIpAddr *)(iVar3 * 0x80 + *(int *)((int)this + 0x2c) + 8));
    if (iVar2 != 0) {
      iVar2 = *(int *)((int)this + 0x30);
      goto LAB_1070e923;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== 1070ea03 Catch@1070ea03

void Catch_1070ea03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1070ea17 Catch@1070ea17

void Catch_1070ea17(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FServerQueryLink::PingServer");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070eae0 FUN_1070eae0

void FUN_1070eae0(int param_1)

{
  FString *pFVar1;
  int iVar2;
  FString local_30 [12];
  FString local_24 [12];
  void *local_18 [2];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742e3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_30);
  local_4 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pFVar1 = (FString *)FString::operator+(local_30,(FString *)local_18);
      local_4._0_1_ = 1;
      pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_24);
      local_4._0_1_ = 2;
      FString::operator=(local_30,pFVar1);
      local_4._0_1_ = 1;
      FString::~FString(local_24);
      local_4 = (uint)local_4._1_3_ << 8;
      FString::~FString((FString *)local_18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  (**(code **)(**(int **)GFileManager_exref + 0x14))(L"AutoPatch.txt",0,1);
  appSaveStringToFile((FString *)&stack0xffffffc4,(ushort *)L"AutoPatch.txt",
                      *(FFileManager **)GFileManager_exref);
  uStack_10 = 0xffffffff;
  FString::~FString((FString *)&stack0xffffffc4);
  ExceptionList = local_18[0];
  return;
}


// ==== 1070ec20 FUN_1070ec20

FTcpLink * __thiscall FUN_1070ec20(void *this,byte param_1)

{
  thunk_FUN_1070e210(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1070ec50 FUN_1070ec50

void __fastcall FUN_1070ec50(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742e59;
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


// ==== 1070ed10 FUN_1070ed10

FArchive * __cdecl FUN_1070ed10(FArchive *param_1,FArray *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742e70;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  FArray::CountBytes(param_2,param_1,4);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar2 = 0; iVar2 < *(int *)(param_2 + 4); iVar2 = iVar2 + 1) {
      thunk_FUN_10702770(param_1,(void *)(*(int *)param_2 + iVar2 * 4));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1070e6c0(param_2,local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      pvVar1 = (void *)thunk_FUN_1070e8b0(4,param_2);
      thunk_FUN_10702770(param_1,pvVar1);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ==== 1070edc8 Catch@1070edc8

void Catch_1070edc8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 1070eddc Catch@1070eddc

void Catch_1070eddc(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070ee40 FUN_1070ee40

int __thiscall FUN_1070ee40(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10742e8c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)((int)this + 0x18));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return (int)this;
}


// ==== 1070eeb0 FUN_1070eeb0

FArchive * __cdecl FUN_1070eeb0(FArchive *param_1,FArray *param_2)

{
  FQueryData *pFVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742ea0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x1c);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar2 < *(int *)(param_2 + 4); iVar2 = iVar2 + 1) {
      operator<<(param_1,(FQueryData *)(*(int *)param_2 + iVar2 * 0x1c));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10706a90(param_2,local_18);
    while (iVar2 < local_18) {
      pFVar1 = (FQueryData *)thunk_FUN_10706bb0(0x1c,param_2);
      if (pFVar1 == (FQueryData *)0x0) {
        operator<<(param_1,(FQueryData *)0x0);
        iVar2 = iVar2 + 1;
      }
      else {
        pFVar1 = (FQueryData *)FQueryData::FQueryData(pFVar1);
        operator<<(param_1,pFVar1);
        iVar2 = iVar2 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1070ef89 Catch@1070ef89

void Catch_1070ef89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 1070ef9d Catch@1070ef9d

void Catch_1070ef9d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070f000 FUN_1070f000

void __thiscall FUN_1070f000(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742ebc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 << 7;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FServerResponseLine::~FServerResponseLine
                ((FServerResponseLine *)(*(int *)this + iVar1 + 0x18));
      iVar1 = iVar1 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x80);
  ExceptionList = local_c;
  return;
}


// ==== 1070f100 FUN_1070f100

void __thiscall FUN_1070f100(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10742edc;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FServerResponseLine::~FServerResponseLine
                ((FServerResponseLine *)(*(int *)this + iVar1 + 0x18));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x80;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0x80);
  ExceptionList = local_c;
  return;
}


// ==== 1070f1a0 FUN_1070f1a0

void __fastcall FUN_1070f1a0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10742ef0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1070f100((void *)(param_1 + 0x2c),0);
  ExceptionList = local_10;
  return;
}


// ==== 1070f1ea Catch@1070f1ea

void Catch_1070f1ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1070f1fe Catch@1070f1fe

void Catch_1070f1fe(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FServerQueryLink::CancelPings");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1070f240 FUN_1070f240

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1070f240(int *param_1)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  FString *pFVar4;
  FArchive *pFVar5;
  int *piVar6;
  uint unaff_EBX;
  int iVar7;
  FServerResponseLine *pFVar8;
  FServerResponseLine aFStack_280 [72];
  undefined4 uStack_238;
  undefined4 uStack_234;
  FString *pFVar9;
  undefined1 *puVar10;
  FArray *pFVar11;
  undefined1 *puVar12;
  undefined1 uStack_20e;
  undefined1 uStack_20d;
  FServerResponseLine *pFStack_20c;
  ushort uStack_208;
  undefined1 uStack_205;
  ushort auStack_204 [2];
  undefined1 auStack_200 [4];
  int iStack_1fc;
  int iStack_1f8;
  FString aFStack_1f4 [12];
  undefined4 uStack_1e8;
  u_long uStack_1e4;
  FServerResponseLine aFStack_1e0 [12];
  uint uStack_1d4;
  uint uStack_1d0;
  FString aFStack_1c8 [4];
  int iStack_1c4;
  FString aFStack_1bc [12];
  FString aFStack_1b0 [8];
  uint uStack_1a8;
  uint uStack_1a4;
  int iStack_17c;
  int iStack_178;
  int iStack_170;
  int iStack_16c;
  undefined1 uStack_164;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  FString aFStack_14c [12];
  FString aFStack_140 [12];
  FString aFStack_134 [12];
  FString aFStack_128 [12];
  FString aFStack_11c [12];
  FString aFStack_110 [12];
  FArray aFStack_104 [12];
  FString aFStack_f8 [12];
  FString aFStack_ec [12];
  FString aFStack_e0 [12];
  FString aFStack_d4 [12];
  FString aFStack_c8 [12];
  FString aFStack_bc [12];
  FString aFStack_b0 [12];
  FString aFStack_a4 [12];
  FString aFStack_98 [12];
  FArray aFStack_8c [12];
  FString aFStack_80 [12];
  FString aFStack_74 [12];
  FString aFStack_68 [12];
  FString aFStack_5c [12];
  FString aFStack_50 [12];
  FString aFStack_44 [8];
  FString aFStack_3c [4];
  undefined1 auStack_38 [12];
  u_long auStack_2c [2];
  FString aFStack_24 [16];
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_1074304c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if (iVar2 == 0) {
    ExceptionList = pvStack_14;
    return;
  }
  do {
    switch(param_1[0x15]) {
    case 0:
      FString::FString(aFStack_11c);
      iStack_c = 0;
      operator<<((FArchive *)param_1[0x14],aFStack_11c);
      FString::FString(aFStack_a4);
      iStack_c._0_1_ = 1;
      FString::FString(aFStack_134);
      iStack_c._0_1_ = 2;
      FString::FString(aFStack_44);
      iStack_c._0_1_ = 3;
      pFVar4 = (FString *)GetCDKeyHash();
      iStack_c._0_1_ = 4;
      FString::operator=(aFStack_a4,pFVar4);
      iStack_c._0_1_ = 3;
      FString::~FString(aFStack_bc);
      FString::operator*(aFStack_11c);
      pFVar4 = (FString *)GetCDKeyResponse((ushort *)aFStack_74);
      iStack_c._0_1_ = 5;
      FString::operator=(aFStack_134,pFVar4);
      iStack_c._0_1_ = 3;
      FString::~FString(aFStack_74);
      FString::operator=(aFStack_44,(ushort *)L"CLIENT");
      uStack_1e8 = 0x83e;
      uStack_205 = *GRunningOS_exref;
      puVar3 = UObject::GetLanguage();
      FString::FString(aFStack_24,puVar3);
      iStack_c._0_1_ = 6;
      pFVar4 = aFStack_44;
      pFVar9 = aFStack_134;
      uStack_234 = 0x1070f3e2;
      pFVar5 = operator<<((FArchive *)param_1[0x13],aFStack_a4);
      pFVar5 = operator<<(pFVar5,pFVar9);
      pFVar5 = operator<<(pFVar5,pFVar4);
      FArchive::ByteOrderSerialize(pFVar5,&uStack_1e8,4);
      (**(code **)(*(int *)pFVar5 + 4))();
      uStack_234 = 0x1070f41d;
      operator<<(pFVar5,(FString *)auStack_2c);
      (**(code **)(*(int *)param_1[0x13] + 0x54))();
      param_1[0x15] = 1;
      iStack_c._0_1_ = 3;
      FString::~FString(aFStack_24);
      iStack_c._0_1_ = 2;
      FString::~FString(aFStack_44);
      iStack_c._0_1_ = 1;
      FString::~FString(aFStack_134);
      iStack_c = (uint)iStack_c._1_3_ << 8;
      FString::~FString(aFStack_a4);
      iStack_c = 0xffffffff;
      FString::~FString(aFStack_11c);
      break;
    case 1:
      FString::FString(aFStack_1f4);
      iStack_c = 7;
      operator<<((FArchive *)param_1[0x14],aFStack_1f4);
      iVar2 = FString::operator==(aFStack_1f4,(ushort *)L"APPROVED");
      if (iVar2 == 0) {
        iVar2 = FString::operator==(aFStack_1f4,(ushort *)L"UPGRADE");
        if (iVar2 == 0) {
          iVar2 = FString::operator==(aFStack_1f4,(ushort *)L"MSLIST");
          if (iVar2 == 0) {
            iVar2 = FString::operator==(aFStack_1f4,(ushort *)L"DENIED");
            if (iVar2 == 0) {
              *(int *)(param_1[0x16] + 0x3c8) = *(int *)(param_1[0x16] + 0x3c8) + 1;
              UObject::SaveConfig((UObject *)param_1[0x16],0x4000,(ushort *)0x0);
            }
            AMasterServerClient::delegateOnQueryFinished
                      ((AMasterServerClient *)param_1[0x16],iVar2 == 0,0);
          }
          else {
            thunk_FUN_10706770(&iStack_170);
            iStack_c._0_1_ = 0xb;
            thunk_FUN_1070e660(&iStack_17c);
            iStack_c = CONCAT31(iStack_c._1_3_,0xc);
            pFVar11 = (FArray *)&iStack_17c;
            pFVar5 = thunk_FUN_10708a30((FArchive *)param_1[0x14],(FArray *)&iStack_170);
            thunk_FUN_1070ed10(pFVar5,pFVar11);
            iVar2 = 0;
            pFStack_20c = (FServerResponseLine *)0x0;
            iVar7 = 0x3cc;
            do {
              if ((int)pFStack_20c < iStack_16c) {
                FStringNoInit::operator=
                          ((FStringNoInit *)(param_1[0x16] + 0x3e0 + iVar2),
                           (FString *)(iStack_170 + iVar2));
              }
              else {
                FStringNoInit::operator=
                          ((FStringNoInit *)(param_1[0x16] + 0x3e0 + iVar2),(ushort *)&DAT_1074c080)
                ;
              }
              if ((int)pFStack_20c < iStack_178) {
                *(undefined4 *)(iVar7 + param_1[0x16]) =
                     *(undefined4 *)(iStack_17c + -0x3cc + iVar7);
              }
              else {
                *(undefined4 *)(iVar7 + param_1[0x16]) = 0;
              }
              pFStack_20c = pFStack_20c + 1;
              iVar7 = iVar7 + 4;
              iVar2 = iVar2 + 0xc;
            } while (iVar7 < 0x3e0);
            *(undefined4 *)(param_1[0x16] + 0x3c8) = 0;
            UObject::SaveConfig((UObject *)param_1[0x16],0x4000,(ushort *)0x0);
            uStack_15c = 1;
            uStack_158 = 0;
            uStack_234 = 0x1070f75c;
            (**(code **)(*(int *)param_1[0x16] + 0x14))();
            iStack_c._0_1_ = 0xb;
            thunk_FUN_1070ec50((FArray *)&iStack_17c);
            iStack_c = CONCAT31(iStack_c._1_3_,7);
            thunk_FUN_107089c0((FArray *)&iStack_170);
          }
        }
        else {
          thunk_FUN_10706770((undefined4 *)aFStack_104);
          iStack_c._0_1_ = 8;
          FString::FString(aFStack_14c);
          iStack_c._0_1_ = 9;
          pFVar5 = (FArchive *)param_1[0x14];
          FArchive::ByteOrderSerialize(pFVar5,&iStack_1fc,4);
          pFVar4 = aFStack_14c;
          pFVar5 = thunk_FUN_10708a30(pFVar5,aFStack_104);
          operator<<(pFVar5,pFVar4);
          thunk_FUN_1070eae0((int)aFStack_104);
          pFVar4 = (FString *)FString::Printf((ushort *)aFStack_d4);
          iStack_c._0_1_ = 10;
          AMasterServerClient::delegateOnReceivedMOTDData
                    ((AMasterServerClient *)param_1[0x16],'\x01',pFVar4);
          iStack_c._0_1_ = 9;
          FString::~FString(aFStack_d4);
          AMasterServerClient::delegateOnReceivedMOTDData
                    ((AMasterServerClient *)param_1[0x16],'\0',aFStack_14c);
          AMasterServerClient::delegateOnQueryFinished
                    ((AMasterServerClient *)param_1[0x16],'\x04',iStack_1fc);
          iStack_c._0_1_ = 8;
          FString::~FString(aFStack_14c);
          iStack_c = CONCAT31(iStack_c._1_3_,7);
          thunk_FUN_107089c0(aFStack_104);
        }
      }
      else {
        (**(code **)(*(int *)param_1[0x13] + 4))();
        if (*(char *)((int)param_1 + 0x65) == '\0') {
          uStack_234 = 0x1070f4fe;
          thunk_FUN_1070eeb0((FArchive *)param_1[0x13],(FArray *)(param_1[0x16] + 0x434));
        }
        (**(code **)(*(int *)param_1[0x13] + 0x54))();
        param_1[0x15] = 2;
      }
      iStack_c = 0xffffffff;
      FString::~FString(aFStack_1f4);
      break;
    case 2:
      if (*(char *)((int)param_1 + 0x65) == '\0') {
        pFVar5 = (FArchive *)param_1[0x14];
        FArchive::ByteOrderSerialize(pFVar5,param_1 + 0x17,4);
        (**(code **)(*(int *)pFVar5 + 4))();
        *(int *)(param_1[0x16] + 0x440) = param_1[0x17];
        if (param_1[0x17] < 1) {
          AMasterServerClient::delegateOnQueryFinished
                    ((AMasterServerClient *)param_1[0x16],'\x03',0);
          (**(code **)(*param_1 + 0x3c))();
        }
        else {
          param_1[0x15] = 3;
        }
      }
      else if (*(char *)((int)param_1 + 0x65) == '\x01') {
        FString::FString(aFStack_ec);
        iStack_c = 0xd;
        pFVar5 = operator<<((FArchive *)param_1[0x14],aFStack_ec);
        FArchive::ByteOrderSerialize(pFVar5,&iStack_1f8,4);
        AMasterServerClient::delegateOnReceivedMOTDData
                  ((AMasterServerClient *)param_1[0x16],'\0',aFStack_ec);
        if (iStack_1f8 != 0) {
          thunk_FUN_10706770((undefined4 *)aFStack_8c);
          iStack_c._0_1_ = 0xe;
          thunk_FUN_10708a30((FArchive *)param_1[0x14],aFStack_8c);
          thunk_FUN_1070eae0((int)aFStack_8c);
          pFVar4 = (FString *)FString::Printf((ushort *)aFStack_50);
          iStack_c._0_1_ = 0xf;
          AMasterServerClient::delegateOnReceivedMOTDData
                    ((AMasterServerClient *)param_1[0x16],'\x02',pFVar4);
          iStack_c._0_1_ = 0xe;
          FString::~FString(aFStack_50);
          iStack_c = CONCAT31(iStack_c._1_3_,0xd);
          thunk_FUN_107089c0(aFStack_8c);
        }
        uStack_154 = 3;
        uStack_150 = 0;
        uStack_234 = 0x1070f90a;
        (**(code **)(*(int *)param_1[0x16] + 0x14))();
        uStack_234 = 0;
        uStack_238 = 0x1070f915;
        (**(code **)(*param_1 + 0x3c))();
        iStack_c = 0xffffffff;
        FString::~FString(aFStack_ec);
      }
      break;
    case 3:
      if (param_1[0x18] < param_1[0x17]) {
        FServerResponseLine::FServerResponseLine(aFStack_1e0);
        iStack_c = 0x10;
        pFStack_20c = aFStack_1e0;
        pFVar8 = pFStack_20c;
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pFVar8 = 0;
          pFVar8 = pFVar8 + 4;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pFVar8 = (FServerResponseLine)0x0;
          pFVar8 = pFVar8 + 1;
        }
        param_1[0x18] = param_1[0x18] + 1;
        if ((char)param_1[0x19] == '\0') {
          operator<<((FArchive *)param_1[0x14],aFStack_1e0);
        }
        else {
          pFVar5 = (FArchive *)param_1[0x14];
          FArchive::ByteOrderSerialize(pFVar5,&uStack_1e4,4);
          FArchive::ByteOrderSerialize(pFVar5,auStack_200,2);
          FArchive::ByteOrderSerialize(pFVar5,auStack_204,2);
          if (*(int *)((FArchive *)param_1[0x14] + 0x2c) != 0) {
LAB_1070fef8:
            (**(code **)(*param_1 + 0x3c))();
            iStack_c = 0xffffffff;
            FServerResponseLine::~FServerResponseLine(aFStack_1e0);
            ExceptionList = pvStack_14;
            return;
          }
          operator<<((FArchive *)param_1[0x14],aFStack_1c8);
          if ((iStack_1c4 != 0) && (iStack_1c4 == 0x1a)) {
            pFVar4 = (FString *)FString::operator+(aFStack_1c8,(ushort *)aFStack_5c);
            iStack_c._0_1_ = 0x11;
            FString::operator=(aFStack_1c8,pFVar4);
            iStack_c = CONCAT31(iStack_c._1_3_,0x10);
            FString::~FString(aFStack_5c);
          }
          if (*(int *)((FArchive *)param_1[0x14] + 0x2c) != 0) goto LAB_1070fef8;
          operator<<((FArchive *)param_1[0x14],aFStack_1bc);
          if (*(int *)((FArchive *)param_1[0x14] + 0x2c) != 0) goto LAB_1070fef8;
          puVar12 = &uStack_20d;
          puVar10 = &uStack_20e;
          uStack_234 = 0x1070faa5;
          pFVar5 = operator<<((FArchive *)param_1[0x14],aFStack_1b0);
          piVar6 = thunk_FUN_10702730((int *)pFVar5,puVar10);
          thunk_FUN_10702730(piVar6,puVar12);
          iVar2 = FString::InStr(aFStack_1bc,(ushort *)&DAT_1074db84,0);
          if ((iVar2 == 2) || (iVar2 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          iVar2 = FString::operator==(aFStack_1b0,(ushort *)&DAT_1074db80);
          if (iVar2 == 0) {
            iVar2 = FString::operator==(aFStack_1b0,(ushort *)&DAT_1074db54);
            if (iVar2 == 0) {
              iVar2 = FString::operator==(aFStack_1b0,(ushort *)&DAT_1074db2c);
              if (iVar2 == 0) {
                iVar2 = FString::operator==(aFStack_1b0,(ushort *)&DAT_1074db00);
                if (iVar2 == 0) {
                  iVar2 = FString::operator==(aFStack_1b0,(ushort *)&DAT_1074dae4);
                  if ((iVar2 != 0) &&
                     (FString::operator=(aFStack_1b0,(ushort *)L"xDoubleDom"), !bVar1)) {
                    pFVar4 = (FString *)FString::FString(aFStack_68,(ushort *)L"DOM-");
                    iStack_c._0_1_ = 0x1a;
                    pFVar4 = (FString *)FString::operator+(pFVar4,aFStack_80);
                    iStack_c._0_1_ = 0x1b;
                    FString::operator=(aFStack_1bc,pFVar4);
                    iStack_c._0_1_ = 0x1a;
                    FString::~FString(aFStack_80);
                    iStack_c = CONCAT31(iStack_c._1_3_,0x10);
                    pFVar4 = aFStack_68;
                    goto LAB_1070fdb2;
                  }
                }
                else {
                  FString::operator=(aFStack_1b0,(ushort *)L"xTeamGame");
                  if (!bVar1) {
                    pFVar4 = (FString *)FString::FString(aFStack_98,(ushort *)&DAT_1074db58);
                    iStack_c._0_1_ = 0x18;
                    pFVar4 = (FString *)FString::operator+(pFVar4,aFStack_b0);
                    iStack_c._0_1_ = 0x19;
                    FString::operator=(aFStack_1bc,pFVar4);
                    iStack_c._0_1_ = 0x18;
                    FString::~FString(aFStack_b0);
                    iStack_c = CONCAT31(iStack_c._1_3_,0x10);
                    pFVar4 = aFStack_98;
LAB_1070fdb2:
                    FString::~FString(pFVar4);
                  }
                }
              }
              else {
                FString::operator=(aFStack_1b0,(ushort *)L"xBombingRun");
                if (!bVar1) {
                  pFVar4 = (FString *)FString::FString(aFStack_c8,(ushort *)&DAT_1074db04);
                  iStack_c._0_1_ = 0x16;
                  pFVar4 = (FString *)FString::operator+(pFVar4,aFStack_e0);
                  iStack_c._0_1_ = 0x17;
                  FString::operator=(aFStack_1bc,pFVar4);
                  iStack_c._0_1_ = 0x16;
                  FString::~FString(aFStack_e0);
                  iStack_c = CONCAT31(iStack_c._1_3_,0x10);
                  pFVar4 = aFStack_c8;
                  goto LAB_1070fdb2;
                }
              }
            }
            else {
              FString::operator=(aFStack_1b0,(ushort *)L"xCTFGame");
              if (!bVar1) {
                pFVar4 = (FString *)FString::FString(aFStack_f8,(ushort *)L"CTF-");
                iStack_c._0_1_ = 0x14;
                pFVar4 = (FString *)FString::operator+(pFVar4,aFStack_110);
                iStack_c._0_1_ = 0x15;
                FString::operator=(aFStack_1bc,pFVar4);
                iStack_c._0_1_ = 0x14;
                FString::~FString(aFStack_110);
                iStack_c = CONCAT31(iStack_c._1_3_,0x10);
                pFVar4 = aFStack_f8;
                goto LAB_1070fdb2;
              }
            }
          }
          else {
            FString::operator=(aFStack_1b0,(ushort *)L"xDeathMatch");
            if (!bVar1) {
              pFVar4 = (FString *)FString::FString(aFStack_128,(ushort *)&DAT_1074db58);
              iStack_c._0_1_ = 0x12;
              pFVar4 = (FString *)FString::operator+(pFVar4,aFStack_140);
              iStack_c._0_1_ = 0x13;
              FString::operator=(aFStack_1bc,pFVar4);
              iStack_c._0_1_ = 0x12;
              FString::~FString(aFStack_140);
              iStack_c = CONCAT31(iStack_c._1_3_,0x10);
              pFVar4 = aFStack_128;
              goto LAB_1070fdb2;
            }
          }
          auStack_2c[0] = ntohl(uStack_1e4);
          pFVar4 = (FString *)FIpAddr::GetString((FIpAddr *)auStack_2c,(int)auStack_38);
          puStack_10._0_1_ = 0x1c;
          FString::operator=((FString *)aFStack_1e0,pFVar4);
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
          FString::~FString(aFStack_3c);
          uStack_1d4 = (uint)auStack_204[0];
          uStack_1d0 = (uint)uStack_208;
          uStack_1a8 = unaff_EBX >> 0x10 & 0xff;
          uStack_1a4 = unaff_EBX >> 0x18;
        }
        pFStack_20c = aFStack_280;
        FServerResponseLine::FServerResponseLine(aFStack_280,aFStack_1e0);
        iStack_c = CONCAT31((int3)((uint)iStack_c >> 8),0x10);
        AMasterServerClient::delegateOnReceivedServer((AMasterServerClient *)param_1[0x16]);
        iStack_c = 0xffffffff;
        FServerResponseLine::~FServerResponseLine(aFStack_1e0);
      }
      if (param_1[0x18] == param_1[0x17]) {
        uStack_164 = 3;
        uStack_160 = 0;
        uStack_234 = 0x1070fec6;
        (**(code **)(*(int *)param_1[0x16] + 0x14))();
        uStack_234 = 0;
        uStack_238 = 0x1070fed1;
        (**(code **)(*param_1 + 0x3c))();
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 == 0) {
      ExceptionList = pvStack_14;
      return;
    }
  } while( true );
}


// ==== 10710280 FUN_10710280

void __fastcall FUN_10710280(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107430b9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1070f000(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 107102f0 FUN_107102f0

FUdpLink * __thiscall FUN_107102f0(void *this,undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_107430ec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUdpLink::FUdpLink(this);
  *(undefined ***)this = FServerQueryLink::vftable;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_8 = 3;
  FUdpLink::BindPort(this,param_2);
  ExceptionList = local_10;
  return this;
}


// ==== 10710369 Catch@10710369

void Catch_10710369(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071037d Catch@1071037d

void Catch_1071037d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FServerQueryLink::FServerQueryLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107103d0 FUN_107103d0

void __fastcall FUN_107103d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 10710460 FUN_10710460

void __fastcall FUN_10710460(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 107104e0 FUN_107104e0

FKeyValuePair * __thiscall FUN_107104e0(void *this,byte param_1)

{
  FKeyValuePair::~FKeyValuePair(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10710510 FUN_10710510

FPlayerResponseLine * __thiscall FUN_10710510(void *this,byte param_1)

{
  FPlayerResponseLine::~FPlayerResponseLine(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 107105e0 FUN_107105e0

void __thiscall FUN_107105e0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_1 + param_2;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x18;
    iVar2 = iVar2 - param_1;
    do {
      FKeyValuePair::~FKeyValuePair((FKeyValuePair *)(*(int *)this + iVar1));
      iVar1 = iVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x18);
  return;
}


// ==== 107106a0 FUN_107106a0

void __thiscall FUN_107106a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x2c;
    iVar2 = iVar2 - param_1;
    do {
      FPlayerResponseLine::~FPlayerResponseLine((FPlayerResponseLine *)(*(int *)this + iVar1));
      iVar1 = iVar1 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x2c);
  return;
}


// ==== 10710760 FUN_10710760

void __thiscall FUN_10710760(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FKeyValuePair::~FKeyValuePair((FKeyValuePair *)(*(int *)this + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0x18);
  return;
}


// ==== 107107c0 FUN_107107c0

void __thiscall FUN_107107c0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FPlayerResponseLine::~FPlayerResponseLine((FPlayerResponseLine *)(*(int *)this + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0x2c);
  return;
}


// ==== 10710820 FUN_10710820

void __fastcall FUN_10710820(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743149;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_107105e0(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10710890 FUN_10710890

FArray * __thiscall FUN_10710890(void *this,FArray *param_1)

{
  FKeyValuePair *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this == param_1) {
    return this;
  }
  thunk_FUN_10710760(this,*(undefined4 *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x18);
      this_00 = (FKeyValuePair *)(*(int *)this + iVar1 * 0x18);
      if (this_00 != (FKeyValuePair *)0x0) {
        FKeyValuePair::FKeyValuePair(this_00,(FKeyValuePair *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 4));
    return this;
  }
  return this;
}


// ==== 10710910 FUN_10710910

void __fastcall FUN_10710910(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743169;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_107106a0(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10710980 FUN_10710980

FArray * __thiscall FUN_10710980(void *this,FArray *param_1)

{
  int iVar1;
  FPlayerResponseLine *this_00;
  int iVar2;
  int iVar3;
  
  if (this == param_1) {
    return this;
  }
  thunk_FUN_107107c0(this,*(undefined4 *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x2c);
      this_00 = (FPlayerResponseLine *)(iVar1 * 0x2c + *(int *)this);
      if (this_00 != (FPlayerResponseLine *)0x0) {
        FPlayerResponseLine::FPlayerResponseLine
                  (this_00,(FPlayerResponseLine *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return this;
  }
  return this;
}


// ==== 10710a00 FUN_10710a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10710a00(FUdpLink *param_1)

{
  FUdpLink *this;
  int iVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uStack_90;
  int iStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  FArchiveUdpWriter local_68 [80];
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_90 = &stack0xfffffffc;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_10743188;
  pvStack_14 = ExceptionList;
  iVar6 = 0;
  ExceptionList = &pvStack_14;
  if (0 < *(int *)(param_1 + 0x30)) {
    this = param_1 + 0x2c;
    iVar7 = 0;
    ExceptionList = &pvStack_14;
    uStack_90 = &stack0xfffffffc;
    do {
      lVar3 = rdtsc();
      dVar4 = (double)(int)((ulonglong)lVar3 >> 0x20);
      if (lVar3 < 0) {
        dVar4 = dVar4 + 4294967296.0;
      }
      dVar5 = (double)(int)lVar3;
      if ((int)lVar3 < 0) {
        dVar5 = dVar5 + 4294967296.0;
      }
      iVar1 = *(int *)this + iVar7;
      if (*(double *)(iVar1 + 0x10) + 1.5 <
          (dVar5 + dVar4 * 4294967296.0) * *(double *)GSecondsPerCycle_exref + 16777216.0) {
        if ((*(int *)(iVar1 + 0x78) == 0) && (*(int *)(iVar1 + 8) != -1)) {
          if ((*(char *)(iVar1 + 4) == '\x02') && (*(int *)(iVar1 + 0x7c) < 1)) {
            piVar2 = (int *)(*(int *)this + 0x7c + iVar7);
            *piVar2 = *piVar2 + 1;
            iVar1 = *(int *)this;
            fVar8 = thunk_FUN_10702660();
            *(double *)(iVar1 + iVar7 + 0x10) = (double)fVar8;
            FArchiveUdpWriter::FArchiveUdpWriter
                      (local_68,param_1,*(undefined4 *)(*(int *)this + iVar7 + 8),
                       *(undefined4 *)(*(int *)this + iVar7 + 0xc));
            uStack_18 = 0;
            (**(code **)(iStack_74 + 4))((int)&uStack_90 + 3,1);
            FArchiveUdpWriter::Flush(local_68);
            uStack_c = 0xffffffff;
            FArchiveUdpWriter::~FArchiveUdpWriter(local_68);
            goto LAB_10710b93;
          }
          local_70 = *(undefined4 *)(*(int *)this + iVar7);
          local_6c = *(undefined1 *)(*(int *)this + iVar7 + 4);
          (**(code **)(**(int **)(param_1 + 0x28) + 0x14))
                    (_IPDRV_OnPingTimeout,*(int **)(param_1 + 0x28) + 0x10a,&local_70,0);
          thunk_FUN_1070f000(this,iVar6,1);
        }
        else {
          thunk_FUN_1070f000(this,iVar6,1);
        }
        iVar6 = iVar6 + -1;
        iVar7 = iVar7 + -0x80;
      }
LAB_10710b93:
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x80;
    } while (iVar6 < *(int *)(param_1 + 0x30));
  }
  FUdpLink::Poll(param_1);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10710c40 FUN_10710c40

void __thiscall
FUN_10710c40(void *this,undefined4 param_1,undefined4 param_2,uchar *param_3,
            FServerResponseLine *param_4)

{
  FArray *this_00;
  int iVar1;
  FString *pFVar2;
  FArchive *pFVar3;
  int iVar4;
  FString *pFVar5;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  AServerQueryClient *pAVar6;
  FServerResponseLine *pFVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 uVar11;
  FServerResponseLine FVar12;
  FServerResponseLine aFStack_1b0 [72];
  undefined4 uStack_168;
  FString local_144 [12];
  FString local_138 [12];
  FString local_12c [12];
  FString local_120 [12];
  FString local_114 [12];
  FString local_108 [12];
  FArchiveUdpReader local_fc [44];
  int local_d0;
  FServerResponseLine local_bc [4];
  FString local_b8 [16];
  undefined4 local_a8;
  FString local_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 *local_5c;
  void *local_58;
  undefined1 *puStack_54;
  uint local_50;
  FServerResponseLine *local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  undefined1 *local_c;
  void *local_8;
  
  puStack_54 = &LAB_10743239;
  local_58 = ExceptionList;
  local_5c = &stack0xfffffeb0;
  local_50 = 0;
  ExceptionList = &local_58;
  local_8 = this;
  FArchiveUdpReader::FArchiveUdpReader(local_fc,param_3,(int)param_4);
  local_50 = CONCAT31(local_50._1_3_,1);
  iVar8 = -1;
  local_40 = -1;
  for (iVar9 = 0; local_20 = iVar9, iVar9 < *(int *)((int)this + 0x30); iVar9 = iVar9 + 1) {
    iVar4 = iVar9 * 0x80 + *(int *)((int)this + 0x2c);
    iVar1 = FIpAddr::operator==((FIpAddr *)&param_1,(FIpAddr *)(iVar4 + 8));
    if (iVar1 != 0) break;
    if (*(int *)(iVar4 + 8) == -1) {
      iVar8 = iVar9;
      local_40 = iVar9;
    }
    this = local_8;
  }
  pFVar7 = (FServerResponseLine *)0x0;
  local_44 = (FServerResponseLine *)0x0;
  if (iVar9 < *(int *)((int)local_8 + 0x30)) {
    iVar8 = *(int *)((int)local_8 + 0x2c);
    fVar10 = thunk_FUN_10702660();
    local_c = (undefined1 *)
              (float)((fVar10 - (float10)*(double *)(iVar8 + iVar9 * 0x80 + 0x10)) * (float10)1000.0
                     );
    local_c = (undefined1 *)appRound((float)local_c);
    iVar8 = iVar9 * 0x80 + *(int *)((int)local_8 + 0x2c);
    pFVar7 = (FServerResponseLine *)(iVar8 + 0x18);
    *(undefined4 *)(iVar8 + 0x78) = 1;
    local_44 = pFVar7;
  }
  else if (iVar8 < 0) {
    local_c = (undefined1 *)0x270f;
  }
  else {
    iVar4 = *(int *)((int)local_8 + 0x2c);
    fVar10 = thunk_FUN_10702660();
    local_c = (undefined1 *)
              (float)((fVar10 - (float10)*(double *)(iVar8 * 0x80 + iVar4 + 0x10)) * (float10)1000.0
                     );
    local_c = (undefined1 *)appRound((float)local_c);
  }
  thunk_FUN_10702730((int *)local_fc,(int)&param_3 + 3);
  if (local_d0 == 0) {
    if (param_3._3_1_ == '\0') {
      FServerResponseLine::FServerResponseLine(local_bc);
      local_50._0_1_ = 3;
      operator<<((FArchive *)local_fc,local_bc);
      local_78 = local_c;
      pFVar2 = (FString *)FIpAddr::GetString((FIpAddr *)&param_1,(int)local_120);
      local_50._0_1_ = 4;
      FString::operator=(local_b8,pFVar2);
      local_50._0_1_ = 3;
      FString::~FString(local_120);
      local_a8 = param_2;
      if (pFVar7 == (FServerResponseLine *)0x0) {
        param_4 = (FServerResponseLine *)&stack0xfffffe4c;
        FServerResponseLine::FServerResponseLine((FServerResponseLine *)&stack0xfffffe4c,local_bc);
        FVar12 = (FServerResponseLine)0x0;
        uVar11 = 0xffffffff;
        pAVar6 = *(AServerQueryClient **)((int)local_8 + 0x28);
      }
      else {
        param_4 = (FServerResponseLine *)(iVar9 * 0x80);
        if (param_4[*(int *)((int)local_8 + 0x2c) + 5] != (FServerResponseLine)0x0) {
          if (*(int *)((int)local_8 + 0x30) < 6) {
            if ((int)*(undefined1 **)(pFVar7 + 0x44) < 9999) {
              local_78 = *(undefined1 **)(pFVar7 + 0x44);
            }
          }
          else {
            local_80 = *(undefined4 *)(pFVar7 + 0x3c);
            local_7c = *(undefined4 *)(pFVar7 + 0x40);
            FString::operator=(local_98,(FString *)(pFVar7 + 0x24));
            local_78 = *(undefined1 **)(pFVar7 + 0x44);
          }
        }
        pFVar2 = (FString *)FString::Caps((FString *)(pFVar7 + 0x24));
        local_50._0_1_ = 5;
        pFVar5 = (FString *)FString::Caps(local_98);
        local_50._0_1_ = 6;
        iVar8 = FString::operator==(pFVar5,pFVar2);
        local_50._0_1_ = 5;
        FString::~FString(local_138);
        local_50 = CONCAT31(local_50._1_3_,3);
        FString::~FString(local_114);
        if (iVar8 != 0) {
          FString::operator=(local_98,(FString *)(pFVar7 + 0x24));
        }
        thunk_FUN_10710980(local_68,(FArray *)(pFVar7 + 0x54));
        thunk_FUN_10710890(local_74,(FArray *)(pFVar7 + 0x48));
        local_c = &stack0xfffffe4c;
        FServerResponseLine::FServerResponseLine((FServerResponseLine *)&stack0xfffffe4c,local_bc);
        local_50._1_3_ = (undefined3)(local_50 >> 8);
        FVar12 = (param_4 + *(int *)((int)local_8 + 0x2c))[4];
        uVar11 = *(undefined4 *)(param_4 + *(int *)((int)local_8 + 0x2c));
        pAVar6 = *(AServerQueryClient **)((int)local_8 + 0x28);
      }
      local_50._0_1_ = 3;
      AServerQueryClient::delegateOnReceivedPingInfo(pAVar6,uVar11,FVar12);
      local_50 = CONCAT31(local_50._1_3_,1);
      FServerResponseLine::~FServerResponseLine(local_bc);
    }
    else if (param_3._3_1_ == '\x01') {
      if (pFVar7 == (FServerResponseLine *)0x0) {
        pFVar2 = (FString *)FIpAddr::GetString((FIpAddr *)&param_1,(int)local_144);
        local_50._0_1_ = 0xc;
        FString::operator*(pFVar2);
        FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref)
        ;
        local_50 = CONCAT31(local_50._1_3_,1);
        FString::~FString(local_144);
      }
      else {
        thunk_FUN_107103d0(&local_1c);
        local_50 = CONCAT31(local_50._1_3_,9);
        while( true ) {
          iVar8 = FArchiveUdpReader::AtEnd(local_fc);
          if ((iVar8 != 0) || (local_d0 != 0)) break;
          iVar8 = FArray::AddZeroed((FArray *)&local_1c,0x18,1);
          pFVar5 = (FString *)(local_1c + iVar8 * 0x18);
          pFVar2 = pFVar5 + 0xc;
          pFVar3 = operator<<((FArchive *)local_fc,pFVar5);
          operator<<(pFVar3,pFVar2);
        }
        local_2c = 0;
        local_28 = 0;
        while (local_28 < *(int *)(pFVar7 + 0x4c)) {
          for (local_10 = 0; iVar8 = local_28, local_10 < local_18; local_10 = local_10 + 1) {
            iVar8 = local_10 * 0x18;
            iVar9 = local_28 * 0x18;
            iVar4 = FString::operator==((FString *)(*(int *)(pFVar7 + 0x48) + iVar9),
                                        (FString *)(iVar8 + local_1c));
            if (iVar4 != 0) {
              iVar9 = FString::operator==((FString *)(*(int *)(pFVar7 + 0x48) + iVar9 + 0xc),
                                          (FString *)(iVar8 + 0xc + local_1c));
              iVar8 = local_10;
              if (iVar9 != 0) {
                thunk_FUN_107105e0(&local_1c,local_10,1);
                local_10 = iVar8 + -1;
              }
            }
            iVar9 = local_20;
          }
          iVar4 = FString::operator==((FString *)(*(int *)(pFVar7 + 0x48) + local_28 * 0x18),
                                      (ushort *)&DAT_1074dd5c);
          if (iVar4 != 0) {
            local_2c = 1;
          }
          local_28 = iVar8 + 1;
        }
        for (local_24 = 0; local_24 < local_18; local_24 = local_24 + 1) {
          iVar9 = FArray::AddZeroed((FArray *)(pFVar7 + 0x48),0x18,1);
          iVar8 = local_24 * 0x18;
          FString::operator=((FString *)(*(int *)(pFVar7 + 0x48) + iVar9 * 0x18),
                             (FString *)(iVar8 + local_1c));
          FString::operator=((FString *)(iVar9 * 0x18 + 0xc + *(int *)(pFVar7 + 0x48)),
                             (FString *)(iVar8 + 0xc + local_1c));
          iVar9 = local_20;
        }
        if (local_2c == 0) {
          this_00 = (FArray *)(pFVar7 + 0x48);
          iVar8 = FArray::AddZeroed(this_00,0x18,1);
          FString::operator=((FString *)(*(int *)this_00 + iVar8 * 0x18),(ushort *)&DAT_1074dd5c);
          FString::operator*((FString *)(pFVar7 + 4));
          pFVar2 = (FString *)FString::Printf((ushort *)local_108);
          local_50._0_1_ = 10;
          FString::operator=((FString *)(iVar8 * 0x18 + 0xc + *(int *)this_00),pFVar2);
          local_50 = CONCAT31(local_50._1_3_,9);
          FString::~FString(local_108);
          iVar9 = local_20;
        }
        param_4 = aFStack_1b0;
        FServerResponseLine::FServerResponseLine(aFStack_1b0,pFVar7);
        local_50._1_3_ = (undefined3)(local_50 >> 8);
        local_50._0_1_ = 9;
        AServerQueryClient::delegateOnReceivedPingInfo
                  (*(AServerQueryClient **)((int)local_8 + 0x28),
                   *(undefined4 *)(iVar9 * 0x80 + *(int *)((int)local_8 + 0x2c)));
        local_50 = CONCAT31(local_50._1_3_,1);
        thunk_FUN_10710820((FArray *)&local_1c);
      }
    }
    else if (param_3._3_1_ == '\x02') {
      if (pFVar7 == (FServerResponseLine *)0x0) {
        pFVar2 = (FString *)FIpAddr::GetString((FIpAddr *)&param_1,(int)local_12c);
        local_50._0_1_ = 0xf;
        FString::operator*(pFVar2);
        FOutputDevice::Logf(this_02,*(ushort **)GWarn_exref);
        local_50 = CONCAT31(local_50._1_3_,1);
        FString::~FString(local_12c);
      }
      else {
        thunk_FUN_10710460(&local_1c);
        local_50 = CONCAT31(local_50._1_3_,0xd);
        while( true ) {
          iVar8 = FArchiveUdpReader::AtEnd(local_fc);
          if ((iVar8 != 0) || (local_d0 != 0)) break;
          iVar8 = FArray::AddZeroed((FArray *)&local_1c,0x2c,1);
          operator<<((FArchive *)local_fc,(FPlayerResponseLine *)(iVar8 * 0x2c + local_1c));
        }
        for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
          for (local_34 = 0; iVar8 = local_34, local_34 < *(int *)(pFVar7 + 0x58);
              local_34 = local_34 + 1) {
            if (*(int *)(local_34 * 0x2c + *(int *)(pFVar7 + 0x54)) ==
                *(int *)(local_30 * 0x2c + local_1c)) {
              thunk_FUN_107106a0(pFVar7 + 0x54,local_34,1);
              local_34 = iVar8 + -1;
            }
          }
        }
        for (iVar8 = 0; local_38 = iVar8, iVar8 < local_18; iVar8 = iVar8 + 1) {
          iVar9 = FArray::AddZeroed((FArray *)(pFVar7 + 0x54),0x2c,1);
          FPlayerResponseLine::operator=
                    ((FPlayerResponseLine *)(iVar9 * 0x2c + *(int *)(pFVar7 + 0x54)),
                     (FPlayerResponseLine *)(iVar8 * 0x2c + local_1c));
        }
        param_4 = aFStack_1b0;
        FServerResponseLine::FServerResponseLine(aFStack_1b0,pFVar7);
        local_50._1_3_ = (undefined3)(local_50 >> 8);
        local_50._0_1_ = 0xd;
        AServerQueryClient::delegateOnReceivedPingInfo
                  (*(AServerQueryClient **)((int)local_8 + 0x28),
                   *(undefined4 *)(local_20 * 0x80 + *(int *)((int)local_8 + 0x2c)));
        local_50 = CONCAT31(local_50._1_3_,1);
        thunk_FUN_10710910((FArray *)&local_1c);
      }
    }
  }
  else {
    pFVar2 = (FString *)FIpAddr::GetString((FIpAddr *)&param_1,(int)&local_1c);
    local_50._0_1_ = 2;
    FString::operator*(pFVar2);
    uStack_168 = 0x10710da3;
    FOutputDevice::Logf(this_01,*(ushort **)GWarn_exref);
    local_50 = CONCAT31(local_50._1_3_,1);
    FString::~FString((FString *)&local_1c);
  }
  local_50 = local_50 & 0xffffff00;
  FArchiveUdpReader::~FArchiveUdpReader(local_fc);
  ExceptionList = local_58;
  return;
}


// ==== 10711379 Catch@10711379

void Catch_10711379(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_10756c40);
}


// ==== 1071138d Catch@1071138d

void Catch_1071138d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FServerQueryLink::OnReceivedData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10711590 FUN_10711590

void __fastcall FUN_10711590(FUdpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743283;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10710280((FArray *)(param_1 + 0x2c));
  local_4 = 0xffffffff;
  FUdpLink::~FUdpLink(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 107115f0 FUN_107115f0

void __fastcall FUN_107115f0(int param_1)

{
  void *this;
  FUdpLink *pFVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107432ab;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x3bc) == 0) &&
     (((*(byte *)(param_1 + 0x41c) & 1) == 0 || (-1 < *(int *)(param_1 + 0x3c0))))) {
    ExceptionList = &local_c;
    this = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x38,&DAT_10749b4c);
    uStack_4 = 0;
    if (this == (void *)0x0) {
      pFVar1 = (FUdpLink *)0x0;
    }
    else if ((*(byte *)(param_1 + 0x41c) & 1) == 0) {
      pFVar1 = thunk_FUN_107102f0(this,param_1,0);
    }
    else {
      pFVar1 = thunk_FUN_107102f0(this,param_1,*(int *)(param_1 + 0x3c0));
    }
    *(FUdpLink **)(param_1 + 0x3bc) = pFVar1;
  }
  ExceptionList = local_c;
  return;
}


// ==== 107116c0 FUN_107116c0

void __thiscall FUN_107116c0(void *this,int param_1)

{
  byte bVar1;
  ushort *puVar2;
  char *cp;
  ulong netlong;
  u_long uVar3;
  int iVar4;
  int iStack_a8;
  FString *pFStack_a4;
  int iStack_a0;
  undefined4 *puStack_9c;
  FString aFStack_88 [12];
  undefined4 local_7c [16];
  void *pvStack_3c;
  uint uStack_34;
  undefined1 uStack_2c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107432d2;
  pvStack_c = ExceptionList;
  local_7c[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_9c = local_7c;
  iStack_a0 = param_1;
  pFStack_a4 = (FString *)0x1071170a;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  aFStack_88[0] = (FString)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_a4 = aFStack_88;
  iStack_a8 = param_1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  FString::FString(aFStack_88);
  uStack_14 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  iStack_a0 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))();
  pFStack_a4 = (FString *)((uint)pFStack_a4 & 0xffffff00);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&pFStack_a4);
  FServerResponseLine::FServerResponseLine((FServerResponseLine *)&stack0xffffff6c);
  uStack_2c = 1;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&stack0xffffff6c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  AServerQueryClient::Init(this);
  puVar2 = FString::operator*((FString *)&iStack_a8);
  cp = appToAnsi(puVar2,(char *)0x0);
  netlong = inet_addr(cp);
  uVar3 = ntohl(netlong);
  iVar4 = FString::operator==((FString *)&iStack_a8,(ushort *)L"BROADCAST");
  if (iVar4 != 0) {
    uVar3 = 0xffffffff;
  }
  thunk_FUN_1070e8d0(*(void **)((int)this + 0x3bc),aFStack_88,(char)param_1,uVar3,param_1,
                     (char)&iStack_a0,(FServerResponseLine *)&puStack_9c);
  uStack_34 = uStack_34 & 0xffffff00;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&puStack_9c);
  uStack_34 = 0xffffffff;
  FString::~FString((FString *)&iStack_a8);
  ExceptionList = pvStack_3c;
  return;
}


// ==== 10711920 FUN_10711920

void __thiscall FUN_10711920(void *this,int param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  AServerQueryClient::Init(this);
  thunk_FUN_1070f1a0(*(int *)((int)this + 0x3bc));
  return;
}


// ==== 10711980 FUN_10711980

void __fastcall FUN_10711980(AServerQueryClient *param_1)

{
  void *this;
  FTcpLink *pFVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_107432fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  AServerQueryClient::Init(param_1);
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0xc))(1);
  }
  this = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(0x78,&DAT_10749b4c);
  pvStack_c = (void *)0x0;
  if (this == (void *)0x0) {
    pFVar1 = (FTcpLink *)0x0;
  }
  else {
    pFVar1 = thunk_FUN_1070dea0(this,param_1);
  }
  *(FTcpLink **)(param_1 + 0x430) = pFVar1;
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10711a20 FUN_10711a20

void __thiscall FUN_10711a20(void *this,int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 unaff_ESI;
  undefined4 uStack_4;
  
  uStack_4 = (uint)this & 0xffffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,(int)&uStack_4 + 3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  AMasterServerClient::Init(this);
  piVar2 = *(int **)((int)this + 0x430);
  *(undefined4 *)((int)this + 0x440) = 0;
  *(char *)((int)piVar2 + 0x65) = (char)((uint)unaff_ESI >> 0x18);
  AMasterServerLink::eventGetMasterServer
            ((AMasterServerLink *)piVar2[0x16],(FString *)(piVar2 + 0x1a),piVar2 + 0x1d);
  iVar3 = *piVar2;
  puVar4 = FString::operator*((FString *)(piVar2 + 0x1a));
  (**(code **)(iVar3 + 0x40))(puVar4);
  return;
}


// ==== 10711ae0 FUN_10711ae0

FUdpLink * __thiscall FUN_10711ae0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743323;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10710280((FArray *)((int)this + 0x2c));
  local_4 = 0xffffffff;
  FUdpLink::~FUdpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10711b60 FUN_10711b60

UClass * FUN_10711b60(void)

{
  return &UTcpipConnection::PrivateStaticClass;
}


// ==== 10711b70 FUN_10711b70

void __cdecl
FUN_10711b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTcpipConnection::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10711bb0 FUN_10711bb0

undefined4 __cdecl FUN_10711bb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10711bc0 FUN_10711bc0

void __fastcall FUN_10711bc0(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743349;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = UTcpipConnection::vftable_for_UObject_;
  *(undefined ***)(param_1 + 0x34) = UTcpipConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(param_1 + 0x38) = UTcpipConnection::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  UNetConnection::~UNetConnection((UNetConnection *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10711c40 FUN_10711c40

UNetConnection * __fastcall FUN_10711c40(UNetConnection *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743369;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetConnection::UNetConnection(param_1);
  *(undefined ***)param_1 = UTcpipConnection::vftable_for_UObject_;
  *(undefined ***)(param_1 + 0x34) = UTcpipConnection::vftable_for_FOutputDevice_;
  *(undefined ***)(param_1 + 0x38) = UTcpipConnection::vftable_for_FExec_;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10711cb0 FUN_10711cb0

UNetConnection * __thiscall FUN_10711cb0(void *this,UNetConnection *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743389;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetConnection::UNetConnection(this,param_1);
  *(undefined ***)this = UTcpipConnection::vftable_for_UObject_;
  *(undefined ***)((int)this + 0x34) = UTcpipConnection::vftable_for_FOutputDevice_;
  *(undefined ***)((int)this + 0x38) = UTcpipConnection::vftable_for_FExec_;
  *(undefined4 *)((int)this + 0x3f1c) = *(undefined4 *)(param_1 + 0x3f1c);
  *(undefined4 *)((int)this + 0x3f20) = *(undefined4 *)(param_1 + 0x3f20);
  *(undefined4 *)((int)this + 0x3f24) = *(undefined4 *)(param_1 + 0x3f24);
  *(undefined4 *)((int)this + 0x3f28) = *(undefined4 *)(param_1 + 0x3f28);
  *(undefined4 *)((int)this + 0x3f2c) = *(undefined4 *)(param_1 + 0x3f2c);
  *(undefined4 *)((int)this + 0x3f30) = *(undefined4 *)(param_1 + 0x3f30);
  *(undefined4 *)((int)this + 0x3f34) = *(undefined4 *)(param_1 + 0x3f34);
  ExceptionList = local_c;
  return this;
}


// ==== 10711da0 FUN_10711da0

UNetConnection * __thiscall FUN_10711da0(void *this,UNetConnection *param_1)

{
  UNetConnection::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3f1c) = *(undefined4 *)(param_1 + 0x3f1c);
  *(undefined4 *)((int)this + 0x3f20) = *(undefined4 *)(param_1 + 0x3f20);
  *(undefined4 *)((int)this + 0x3f24) = *(undefined4 *)(param_1 + 0x3f24);
  *(undefined4 *)((int)this + 0x3f28) = *(undefined4 *)(param_1 + 0x3f28);
  *(undefined4 *)((int)this + 0x3f2c) = *(undefined4 *)(param_1 + 0x3f2c);
  *(undefined4 *)((int)this + 0x3f30) = *(undefined4 *)(param_1 + 0x3f30);
  *(undefined4 *)((int)this + 0x3f34) = *(undefined4 *)(param_1 + 0x3f34);
  return this;
}


// ==== 10711e30 FUN_10711e30

UTcpipConnection * __thiscall FUN_10711e30(void *this,byte param_1)

{
  UTcpipConnection::~UTcpipConnection(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3f38);
  }
  return this;
}


// ==== 10711e60 FUN_10711e60

UTcpipConnection * __thiscall FUN_10711e60(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x3f38,*(int *)((int)this + -4),UTcpipConnection::~UTcpipConnection);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((UTcpipConnection *)((int)this + -4));
    }
    return (UTcpipConnection *)((int)this + -4);
  }
  UTcpipConnection::~UTcpipConnection(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3f38);
  }
  return this;
}


// ==== 10711ee0 FUN_10711ee0

UClass * FUN_10711ee0(void)

{
  return &UTcpNetDriver::PrivateStaticClass;
}


// ==== 10711ef0 FUN_10711ef0

void __cdecl
FUN_10711ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTcpNetDriver::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10711f30 FUN_10711f30

undefined4 __cdecl FUN_10711f30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10711f40 FUN_10711f40

void __fastcall FUN_10711f40(UObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107433a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = UTcpNetDriver::vftable_for_UObject_;
  *(undefined ***)(param_1 + 0x34) = UTcpNetDriver::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(param_1);
  local_4 = 0xffffffff;
  UNetDriver::~UNetDriver((UNetDriver *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10711fb0 FUN_10711fb0

UNetDriver * __fastcall FUN_10711fb0(UNetDriver *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107433c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetDriver::UNetDriver(param_1);
  *(undefined ***)param_1 = UTcpNetDriver::vftable_for_UObject_;
  *(undefined ***)(param_1 + 0x34) = UTcpNetDriver::vftable_for_FExec_;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10712020 FUN_10712020

UNetDriver * __thiscall FUN_10712020(void *this,UNetDriver *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107433e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UNetDriver::UNetDriver(this,param_1);
  *(undefined ***)this = UTcpNetDriver::vftable_for_UObject_;
  *(undefined ***)((int)this + 0x34) = UTcpNetDriver::vftable_for_FExec_;
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  ExceptionList = local_c;
  return this;
}


// ==== 10712100 FUN_10712100

UNetDriver * __thiscall FUN_10712100(void *this,UNetDriver *param_1)

{
  UNetDriver::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}


// ==== 10712190 FUN_10712190

UTcpNetDriver * __thiscall FUN_10712190(void *this,byte param_1)

{
  UTcpNetDriver::~UTcpNetDriver(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0xc0);
  }
  return this;
}


// ==== 107121c0 FUN_107121c0

UTcpNetDriver * __thiscall FUN_107121c0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0xc0,*(int *)((int)this + -4),UTcpNetDriver::~UTcpNetDriver);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((UTcpNetDriver *)((int)this + -4));
    }
    return (UTcpNetDriver *)((int)this + -4);
  }
  UTcpNetDriver::~UTcpNetDriver(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0xc0);
  }
  return this;
}


// ==== 10712240 FUN_10712240

FUdpLink * __thiscall
FUN_10712240(void *this,undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10743408;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUdpLink::FUdpLink(this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)this = FNATHeartbeatLink::vftable;
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_1;
  ExceptionList = param_3;
  return this;
}


// ==== 107122f0 FUN_107122f0

FUdpLink * __thiscall FUN_107122f0(FUdpLink *param_1,FUdpLink param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUdpLink::FUdpLink(param_1);
  *(undefined ***)param_1 = FNATHeartbeatLink::vftable;
  param_1[0x28] = param_2;
  ExceptionList = local_c;
  return param_1;
}


// ==== 10712360 FUN_10712360

void FUN_10712360(void)

{
  return;
}


// ==== 10712370 FUN_10712370

void __thiscall FUN_10712370(void *this,int param_1,undefined4 param_2)

{
  undefined4 uStack_70;
  void *pvStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  FArchiveUdpWriter local_5c [48];
  TArray<unsigned_char> aTStack_2c [12];
  void *pvStack_20;
  undefined4 uStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1074345a;
  pvStack_c = ExceptionList;
  uStack_64 = param_2;
  iStack_68 = param_1;
  uStack_70 = 0x1071239f;
  ExceptionList = &pvStack_c;
  pvStack_6c = this;
  FArchiveUdpWriter::FArchiveUdpWriter(local_5c);
  uStack_10 = 0;
  uStack_70 = 1;
  (**(code **)(iStack_68 + 4))((int)this + 0x28);
  FArchive::ByteOrderSerialize((FArchive *)&uStack_70,&puStack_8,4);
  FArchiveUdpWriter::Flush((FArchiveUdpWriter *)&uStack_70);
  uStack_18 = 1;
  TArray<unsigned_char>::~TArray<unsigned_char>(aTStack_2c);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10712430 FUN_10712430

void __fastcall FUN_10712430(FUdpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743478;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUdpLink::~FUdpLink(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10712480 FUN_10712480

FUdpLink * __thiscall FUN_10712480(void *this,int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_107122f0(this,(FUdpLink)0x0);
  local_4 = 0;
  *(undefined ***)this = FServerQueryInterface::vftable;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  FUdpLink::BindPort(this,param_1);
  ExceptionList = local_c;
  return this;
}


// ==== 10712500 FUN_10712500

void __fastcall FUN_10712500(FUdpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107434c0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUdpLink::~FUdpLink(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10712550 FUN_10712550

void FUN_10712550(int *param_1)

{
  undefined1 local_2 [2];
  
  (**(code **)(*param_1 + 4))(local_2,1);
  (**(code **)(*param_1 + 4))(&stack0xfffffff7,1);
  (**(code **)(*param_1 + 0x54))();
  return;
}


// ==== 107125a0 FUN_107125a0

undefined4 __thiscall FUN_107125a0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107434d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x3bc) != 0) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)((int)this + 0x3bc) + 0x2c))(param_1);
    ExceptionList = local_10;
    return uVar1;
  }
  return 0;
}


// ==== 1071260a Catch@1071260a

void Catch_1071260a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071261e Catch@1071261e

void Catch_1071261e(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"AMasterServerClient::Poll");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10712670 FUN_10712670

void __fastcall FUN_10712670(AActor *param_1)

{
  if (*(int **)(param_1 + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x10712693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::Destroy(param_1);
  return;
}


// ==== 107126b0 FUN_107126b0

void __fastcall FUN_107126b0(AActor *param_1)

{
  if (*(int **)(param_1 + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3bc) + 0xc))(1);
  }
  *(undefined4 *)(param_1 + 0x3bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x107126d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AActor::PostScriptDestroyed(param_1);
  return;
}


// ==== 107126f0 FUN_107126f0

int __cdecl FUN_107126f0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UTcpNetDriver::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10712720 FUN_10712720

void __cdecl FUN_10712720(UTcpipConnection *param_1)

{
  if (param_1 != (UTcpipConnection *)0x0) {
    UTcpipConnection::UTcpipConnection(param_1);
    return;
  }
  return;
}


// ==== 10712740 FUN_10712740

void __cdecl FUN_10712740(UTcpNetDriver *param_1)

{
  if (param_1 != (UTcpNetDriver *)0x0) {
    UTcpNetDriver::UTcpNetDriver(param_1);
    return;
  }
  return;
}


// ==== 10712760 FUN_10712760

FUdpLink * __thiscall FUN_10712760(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107434e8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUdpLink::~FUdpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 107127d0 FUN_107127d0

FUdpLink * __thiscall FUN_107127d0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743510;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUdpLink::~FUdpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10712840 FUN_10712840

void __fastcall FUN_10712840(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  
  param_1[0x19] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 1;
  AMasterServerLink::eventGetMasterServer
            ((AMasterServerLink *)param_1[0x1a],(FString *)(param_1 + 0x2d),param_1 + 0x30);
  iVar1 = *param_1;
  puVar2 = FString::operator*((FString *)(param_1 + 0x2d));
  (**(code **)(iVar1 + 0x40))(puVar2);
  return;
}


// ==== 107128a0 FUN_107128a0

undefined4 __thiscall FUN_107128a0(void *this,ushort *param_1)

{
  FArchive *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString local_2c [23];
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743529;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  if (*(int *)((int)this + 100) == 3) {
    local_15 = 2;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc8;
    FString::FString(local_2c,param_1);
    local_8._0_1_ = 1;
    pFVar3 = local_2c;
    pFVar1 = (FArchive *)thunk_FUN_10702730(*(int **)((int)this + 0x4c),&local_15);
    operator<<(pFVar1,pFVar3);
    (**(code **)(**(int **)((int)this + 0x4c) + 0x54))();
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_2c);
  }
  else {
    ExceptionList = &local_10;
    iVar2 = FArray::AddZeroed((FArray *)((int)this + 0x78),0xc,1);
    FString::operator=((FString *)(*(int *)((int)this + 0x78) + iVar2 * 0xc),param_1);
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 10712955 Catch@10712955

void Catch_10712955(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10712969 Catch@10712969

void Catch_10712969(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"SendStatLine");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107129c0 FUN_107129c0

void __thiscall FUN_107129c0(void *this,FArchive *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FArchive *pFVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  undefined1 local_1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x2c) + 0x68);
  (**(code **)(*(int *)param_1 + 4))(&local_1,1);
  iVar5 = 0;
  if (0 < *(int *)(iVar1 + 0x468)) {
    iVar6 = 0;
    do {
      iVar2 = (**(code **)(*(int *)param_1 + 0x28))();
      if (0x1c2 < iVar2) {
        (**(code **)(*(int *)param_1 + 0x54))();
        (**(code **)(*(int *)param_1 + 4))(&stack0xfffffff7,1);
      }
      pFVar3 = (FString *)(*(int *)(iVar1 + 0x464) + iVar6);
      pFVar7 = pFVar3 + 0xc;
      pFVar4 = operator<<(param_1,pFVar3);
      operator<<(pFVar4,pFVar7);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar5 < *(int *)(iVar1 + 0x468));
  }
  (**(code **)(*(int *)param_1 + 0x54))();
  return;
}


// ==== 10712a80 FUN_10712a80

void __thiscall FUN_10712a80(void *this,FArchive *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x2c) + 0x68);
  if (*(int *)(iVar1 + 0x474) != 0) {
    (**(code **)(*(int *)param_1 + 4))(&local_1,1);
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x474)) {
      iVar4 = 0;
      do {
        iVar2 = (**(code **)(*(int *)param_1 + 0x28))();
        if (0x1c2 < iVar2) {
          (**(code **)(*(int *)param_1 + 0x54))();
          (**(code **)(*(int *)param_1 + 4))(&stack0xfffffff7,1);
        }
        operator<<(param_1,(FPlayerResponseLine *)(*(int *)(iVar1 + 0x470) + iVar4));
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar3 < *(int *)(iVar1 + 0x474));
    }
    (**(code **)(*(int *)param_1 + 0x54))();
  }
  return;
}


// ==== 10712b40 FUN_10712b40

void __thiscall FUN_10712b40(void *this,FArchive *param_1)

{
  undefined1 local_6d [65];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10743549;
  pvStack_c = ExceptionList;
  local_6d[0] = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)param_1 + 4))(local_6d,1);
  FServerResponseLine::FServerResponseLine
            ((FServerResponseLine *)&stack0xffffff8c,
             (FServerResponseLine *)(*(int *)(*(int *)((int)this + 0x2c) + 0x68) + 0x41c));
  pvStack_c = (void *)0x0;
  thunk_FUN_107107c0(auStack_20,0);
  thunk_FUN_10710760(auStack_2c,0);
  operator<<(param_1,(FServerResponseLine *)&stack0xffffff8c);
  (**(code **)(*(int *)param_1 + 0x54))();
  pvStack_c = (void *)0xffffffff;
  FServerResponseLine::~FServerResponseLine((FServerResponseLine *)&stack0xffffff8c);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10712c10 FUN_10712c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_10712c10(void *this,int param_1,undefined4 param_2)

{
  UObject *pUVar1;
  int iVar2;
  UFunction *pUVar3;
  undefined4 uStack_74;
  undefined4 uStack_70;
  void *pvStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743570;
  local_c = ExceptionList;
  uStack_70 = 0x10712c40;
  ExceptionList = &local_c;
  thunk_FUN_10712480(this,param_1,param_2);
  local_4 = 0;
  *(undefined ***)this = FServerLANInterface::vftable;
  pUVar1 = *(UObject **)(*(int *)((int)this + 0x2c) + 0x68);
  if (-1 < *(int *)(pUVar1 + 0x3c0)) {
    uStack_70 = 0;
    uStack_74 = 0;
    iVar2 = *(int *)pUVar1;
    pUVar3 = UObject::FindFunctionChecked(pUVar1,_IPDRV_Refresh,0);
    (**(code **)(iVar2 + 0x10))(pUVar3);
    FArchiveUdpWriter::FArchiveUdpWriter
              ((FArchiveUdpWriter *)&stack0xffffff98,this,0xffffffff,
               *(undefined4 *)(*(int *)(*(int *)((int)this + 0x2c) + 0x68) + 0x3c0));
    thunk_FUN_10712b40(this,(FArchive *)&uStack_74);
    FArchiveUdpWriter::~FArchiveUdpWriter((FArchiveUdpWriter *)&uStack_74);
    ExceptionList = pvStack_24;
    return this;
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10712d30 FUN_10712d30

void __fastcall FUN_10712d30(FUdpLink *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743598;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUdpLink::~FUdpLink(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10712d80 FUN_10712d80

FUdpLink * __thiscall FUN_10712d80(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107435c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUdpLink::~FUdpLink(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10712df0 FUN_10712df0

FTcpLink * __thiscall FUN_10712df0(void *this,undefined4 param_1)

{
  UTcpNetDriver *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  FUdpLink *pFVar3;
  int iVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined1 local_3c [28];
  void *local_20;
  UTcpNetDriver *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1074364b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  ExceptionList = &local_10;
  local_20 = this;
  FTcpLink::FTcpLink(this);
  *(undefined ***)this = FMasterServerUplinkLink::vftable;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = param_1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  local_8._1_3_ = 0;
  local_8._0_1_ = 4;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 1;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  FString::FString((FString *)((int)this + 0xb4));
  *(undefined4 *)((int)this + 0xc0) = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  FTcpLink::SetLinkMode(this,1);
  *(undefined8 *)((int)this + 0x84) = 0xc04e000000000000;
  fVar5 = thunk_FUN_10702660();
  *(double *)((int)this + 0x98) = (double)fVar5;
  this_00 = (UTcpNetDriver *)
            thunk_FUN_107126f0(*(int *)(*(int *)(*(int *)((int)this + 0x68) + 0xe4) + 0x70));
  local_18 = this_00;
  if (this_00 == (UTcpNetDriver *)0x0) {
    appFailAssert("NetDriver",".\\MasterServerUplink.cpp",0x91);
  }
  pvVar1 = (void *)thunk_FUN_107026d0(0x2c);
  local_8._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    pFVar3 = (FUdpLink *)0x0;
  }
  else {
    puVar2 = (undefined4 *)UTcpNetDriver::GetSocketData(this_00);
    pFVar3 = thunk_FUN_10712240(pvVar1,*puVar2,puVar2[1],(void *)puVar2[2],puVar2[3],puVar2[4],
                                puVar2[5]);
  }
  local_8._0_1_ = 6;
  *(FUdpLink **)((int)this + 0x5c) = pFVar3;
  if (*(int *)(*(int *)((int)this + 0x68) + 0x480) != 0) {
    pvVar1 = (void *)thunk_FUN_107026d0(0x2c);
    local_8._0_1_ = 8;
    if (pvVar1 == (void *)0x0) {
      pFVar3 = (FUdpLink *)0x0;
    }
    else {
      puVar2 = (undefined4 *)
               AUdpLink::GetSocketData(*(AUdpLink **)(*(int *)((int)this + 0x68) + 0x480));
      pFVar3 = thunk_FUN_10712240(pvVar1,*puVar2,puVar2[1],(void *)puVar2[2],puVar2[3],puVar2[4],
                                  puVar2[5]);
    }
    *(FUdpLink **)((int)this + 0x60) = pFVar3;
    this_00 = local_18;
  }
  local_8._0_1_ = 6;
  pvVar1 = (void *)thunk_FUN_107026d0(0x30);
  local_8._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    pFVar3 = (FUdpLink *)0x0;
  }
  else {
    puVar6 = local_3c;
    iVar4 = UTcpNetDriver::GetSocketData(this_00);
    pFVar3 = thunk_FUN_10712480(pvVar1,*(int *)(iVar4 + 0x10) + 1,puVar6);
  }
  local_8._0_1_ = 6;
  *(FUdpLink **)((int)this + 0x54) = pFVar3;
  if (-1 < *(int *)(*(int *)((int)this + 0x68) + 0x3c4)) {
    pvVar1 = (void *)thunk_FUN_107026d0(0x30);
    local_8 = CONCAT31(local_8._1_3_,10);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = thunk_FUN_10712c10(pvVar1,*(int *)(*(int *)((int)this + 0x68) + 0x3c4),this);
    }
    *(undefined4 **)((int)this + 0x58) = puVar2;
  }
  ExceptionList = local_10;
  return this;
}


// ==== 1071305b Catch@1071305b

void Catch_1071305b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 1071306f Catch@1071306f

void Catch_1071306f(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::FMasterServerUplinkLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10713140 FUN_10713140

void __thiscall FUN_10713140(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  FString *this_00;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  void *local_18 [3];
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_10743689;
  pvStack_c = ExceptionList;
  uVar1 = *(undefined4 *)((int)this + 0xc0);
  uVar4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0xa0) = param_1;
  *(undefined4 *)((int)this + 0xa4) = uVar1;
  this_00 = (FString *)FIpAddr::GetString((FIpAddr *)((int)this + 0xa0),(int)local_18);
  local_8 = (undefined1 *)0x0;
  puVar2 = FString::operator*(this_00);
  puVar3 = FString::operator*((FString *)((int)this + 0xb4));
  FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                      L"MasterServerUplink: Resolved %s as %s.",puVar3,puVar2,uVar4);
  local_8 = (undefined1 *)0xffffffff;
  FString::~FString((FString *)&stack0xffffffe4);
  (**(code **)(*(int *)this + 0x28))(param_1,uVar1);
  ExceptionList = local_18[0];
  return;
}


// ==== 10713210 FUN_10713210

void __fastcall FUN_10713210(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  
  puVar2 = FString::operator*((FString *)(param_1 + 0xb4));
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"MasterServerUplink: Failed to resolve master server %s.",puVar2);
  *(undefined4 *)(param_1 + 0x8c) = 1;
  piVar1 = (int *)(*(int *)(param_1 + 0x68) + 0x3c8);
  *piVar1 = *piVar1 + 1;
  UObject::SaveConfig(*(UObject **)(param_1 + 0x68),0x4000,(ushort *)0x0);
  return;
}


// ==== 10713270 FUN_10713270

void __fastcall FUN_10713270(int param_1)

{
  ushort *puVar1;
  
  puVar1 = FString::operator*((FString *)(param_1 + 0xb4));
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"MasterServerUplink: Connection to %s established.",puVar1);
  return;
}


// ==== 107132a0 FUN_107132a0

void __fastcall FUN_107132a0(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  
  puVar2 = FString::operator*((FString *)(param_1 + 0xb4));
  FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                      L"MasterServerUplink: Uplink failed to connect to master server %s.",puVar2);
  *(undefined4 *)(param_1 + 0x8c) = 1;
  piVar1 = (int *)(*(int *)(param_1 + 0x68) + 0x3c8);
  *piVar1 = *piVar1 + 1;
  UObject::SaveConfig(*(UObject **)(param_1 + 0x68),0x4000,(ushort *)0x0);
  return;
}


// ==== 10713300 FUN_10713300

void __fastcall FUN_10713300(int param_1)

{
  *(undefined4 *)(param_1 + 0x8c) = 1;
  return;
}


// ==== 10713310 FUN_10713310

void __fastcall FUN_10713310(int param_1)

{
  float10 fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107436a0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(int *)(param_1 + 100) == 3) &&
     ((*(int *)(param_1 + 0x44) == 3 || (*(int *)(param_1 + 0x44) == 4)))) {
    if (((*(byte *)(*(int *)(param_1 + 0x68) + 0x48c) & 0x10) != 0) &&
       (*(int *)(param_1 + 0x94) != 0)) {
      ExceptionList = &local_10;
      fVar1 = thunk_FUN_10702660();
      if ((float10)*(int *)(param_1 + 0x94) < fVar1 - (float10)*(double *)(param_1 + 0x98)) {
        fVar1 = thunk_FUN_10702660();
        *(double *)(param_1 + 0x98) = (double)fVar1;
        (**(code **)(**(int **)(param_1 + 0x54) + 0x18))
                  (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0);
        (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))
                  (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0);
        if (*(int **)(param_1 + 0x60) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x60) + 0x18))
                    (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0);
        }
      }
    }
    ExceptionList = local_10;
    return;
  }
  return;
}


// ==== 10713409 Catch@10713409

void Catch_10713409(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 1071341d Catch@1071341d

void Catch_1071341d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::CheckUDPHeartbeats");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10713490 FUN_10713490

void __fastcall FUN_10713490(int param_1)

{
  FArchive *this;
  uint local_8;
  uint local_4;
  
  local_8 = *(uint *)(*(int *)(param_1 + 0x68) + 0x48c) >> 4 & 1;
  this = *(FArchive **)(param_1 + 0x4c);
  local_4 = (uint)(*(int *)(param_1 + 0x60) != 0);
  FArchive::ByteOrderSerialize(this,&local_8,4);
  FArchive::ByteOrderSerialize(this,&local_4,4);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x54))();
  return;
}


// ==== 10713510 FUN_10713510

void __fastcall FUN_10713510(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 107135c0 FUN_107135c0

FMD5UpdateData * __thiscall FUN_107135c0(void *this,byte param_1)

{
  FMD5UpdateData::~FMD5UpdateData(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10713600 FUN_10713600

int __cdecl FUN_10713600(int param_1)

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


// ==== 10713640 FUN_10713640

int __cdecl FUN_10713640(int param_1)

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


// ==== 10713680 FUN_10713680

int __cdecl FUN_10713680(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 107136b0 FUN_107136b0

void __fastcall FUN_107136b0(int param_1)

{
  UGameEngine *this;
  FArchive *pFVar1;
  int *piVar2;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107436d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  local_15 = 4;
  local_1c = -1;
  ExceptionList = &local_10;
  this = (UGameEngine *)
         thunk_FUN_10713640(*(int *)(*(int *)(*(int *)(param_1 + 0x68) + 0xe4) + 0x74));
  if (this != (UGameEngine *)0x0) {
    local_1c = UGameEngine::PackageRevisionLevel(this);
  }
  piVar2 = &local_1c;
  pFVar1 = (FArchive *)thunk_FUN_10702730(*(int **)(param_1 + 0x4c),&local_15);
  thunk_FUN_10702770(pFVar1,piVar2);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x54))();
  ExceptionList = local_10;
  return;
}


// ==== 10713743 Catch@10713743

void Catch_10713743(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10756c40);
}


// ==== 10713757 Catch@10713757

void Catch_10713757(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplink::SendMD5Revision");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107137b0 FUN_107137b0

undefined4 __thiscall FUN_107137b0(void *this,ushort *param_1)

{
  int iVar1;
  FString *this_00;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107436e9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar4 = 0;
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x68) + 0xe4) + 0x70);
  ExceptionList = &local_10;
  if (iVar1 != 0) {
    for (; iVar4 < *(int *)(iVar1 + 0x3c); iVar4 = iVar4 + 1) {
      local_18 = iVar4;
      this_00 = (FString *)
                (**(code **)(**(int **)(*(int *)(iVar1 + 0x38) + iVar4 * 4) + 0x6c))(local_2c);
      local_8._0_1_ = 1;
      puVar5 = param_1;
      puVar2 = FString::operator*(this_00);
      iVar3 = appStrcmp(puVar2,puVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_2c);
      if (iVar3 == 0) {
        ExceptionList = local_10;
        return *(undefined4 *)(*(int *)(iVar1 + 0x38) + iVar4 * 4);
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10713862 Catch@10713862

void Catch_10713862(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10756c40);
}


// ==== 10713876 Catch@10713876

void Catch_10713876(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::FindClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 107138d0 FUN_107138d0

void __thiscall FUN_107138d0(void *this,ushort *param_1,ushort *param_2)

{
  int iVar1;
  APlayerController *this_00;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10743709;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_107137b0(this,param_1);
  if (iVar1 != 0) {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                        L"Calling eventClientValidate for client %s",param_1);
    FString::operator=((FString *)(iVar1 + 0xf8),(ushort *)&DAT_1074c080);
    this_00 = (APlayerController *)thunk_FUN_10713600(*(int *)(iVar1 + 0x3c));
    if (this_00 != (APlayerController *)0x0) {
      FString::FString(local_28,param_2);
      local_8._0_1_ = 1;
      APlayerController::eventClientValidate(this_00,local_28);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
    iVar1 = FArray::AddZeroed((FArray *)((int)this + 0x6c),0xc,1);
    FString::operator=((FString *)(*(int *)((int)this + 0x6c) + iVar1 * 0xc),param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 107139a9 Catch@107139a9

void Catch_107139a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107139bd Catch@107139bd

void Catch_107139bd(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::ChallengeClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10713a20 FUN_10713a20

int __thiscall FUN_10713a20(void *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FString::operator==((FString *)(*(int *)this + iVar3),param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return -1;
}


// ==== 10713a70 FUN_10713a70

int __thiscall FUN_10713a70(void *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FString::operator==((FString *)(*(int *)this + iVar3),param_1);
      if (iVar2 != 0) {
        thunk_FUN_10708670(this,iVar4,1);
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + -0xc;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  return iVar1 - *(int *)((int)this + 4);
}


// ==== 10713ae0 FUN_10713ae0

void __thiscall FUN_10713ae0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743735;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)this;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3) + 0xc);
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3));
      iVar3 = iVar3 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 10713c10 FUN_10713c10

void __thiscall FUN_10713c10(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10743765;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)this;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3) + 0xc);
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FArray::Realloc(this,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 10713cc0 FUN_10713cc0

void __fastcall FUN_10713cc0(int param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  FArchive *pFVar5;
  int *this;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [20];
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_107437a4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_24 = 0;
  local_8 = 0;
  uStack_7 = 0;
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x68) + 0xe4) + 0x70), ExceptionList = &local_10,
     local_20 = param_1, local_1c = iVar6, iVar6 != 0)) {
    for (; iVar4 = local_20, local_24 < *(int *)(iVar6 + 0x3c); local_24 = local_24 + 1) {
      iVar1 = local_24 * 4;
      iVar2 = FString::operator!=((FString *)(*(int *)(*(int *)(iVar6 + 0x38) + iVar1) + 0xf8),
                                  (ushort *)&DAT_1074c080);
      if (iVar2 != 0) {
        pFVar3 = (FString *)
                 (**(code **)(**(int **)(iVar1 + *(int *)(iVar6 + 0x38)) + 0x6c))(local_5c);
        local_8 = 1;
        this = (int *)(iVar4 + 0x6c);
        iVar4 = thunk_FUN_10713a20(this,pFVar3);
        local_8 = 0;
        FString::~FString(local_5c);
        iVar6 = local_1c;
        if (iVar4 != -1) {
          local_15 = 0;
          FString::FString(local_50,(FString *)(*this + iVar4 * 0xc));
          local_8 = 2;
          FString::FString(local_44,(FString *)(*(int *)(*(int *)(local_1c + 0x38) + iVar1) + 0xec))
          ;
          local_8 = 3;
          FString::FString(local_38,(FString *)(*(int *)(*(int *)(local_1c + 0x38) + iVar1) + 0xf8))
          ;
          local_8 = 4;
          pFVar3 = local_38;
          pFVar8 = local_44;
          pFVar7 = local_50;
          pFVar5 = (FArchive *)thunk_FUN_10702730(*(int **)(local_20 + 0x4c),&local_15);
          pFVar5 = operator<<(pFVar5,pFVar7);
          pFVar5 = operator<<(pFVar5,pFVar8);
          operator<<(pFVar5,pFVar3);
          (**(code **)(**(int **)(local_20 + 0x4c) + 0x54))();
          thunk_FUN_10708670(this,iVar4,1);
          local_8 = 3;
          FString::~FString(local_38);
          local_8 = 2;
          FString::~FString(local_44);
          local_8 = 0;
          FString::~FString(local_50);
          iVar6 = local_1c;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10713e69 Catch@10713e69

void Catch_10713e69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10756c40);
}


// ==== 10713e7d Catch@10713e7d

void Catch_10713e7d(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::CheckOutstandingChallenges");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10713f10 FUN_10713f10

void __thiscall FUN_10713f10(void *this,ushort *param_1)

{
  ushort *puVar1;
  FString *pFVar2;
  int *piVar3;
  undefined4 uVar4;
  FArchive *pFVar5;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar1 = param_1;
  puStack_c = &LAB_107437f6;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar2 = (FString *)FString::FString(local_34,param_1);
  local_8._0_1_ = 1;
  thunk_FUN_10713a70((void *)((int)this + 0x6c),pFVar2);
  local_8._0_1_ = 0;
  FString::~FString(local_34);
  piVar3 = (int *)thunk_FUN_107137b0(this,puVar1);
  if (piVar3 == (int *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn_exref,*(ushort **)GWarn_exref,
                        L"Disconnect of client %s failed");
    param_1 = (ushort *)CONCAT13(3,param_1._0_3_);
    FString::FString(local_34,puVar1);
    local_8._0_1_ = 6;
    pFVar2 = local_34;
    pFVar5 = (FArchive *)thunk_FUN_10702730(*(int **)((int)this + 0x4c),(int)&param_1 + 3);
    operator<<(pFVar5,pFVar2);
    (**(code **)(**(int **)((int)this + 0x4c) + 0x54))();
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_34);
  }
  else {
    FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                        L"Client %s failed auth.  disconnecting");
    uVar4 = FString::FString(local_34,(ushort *)
                                      L"Your CD key is invalid or in use by another player.");
    local_8._0_1_ = 2;
    param_1 = (ushort *)&stack0xffffffb0;
    APlayerController::eventClientMessage((APlayerController *)piVar3[0xf],uVar4);
    local_8._0_1_ = 0;
    FString::~FString(local_34);
    FString::FString(local_34,(ushort *)&DAT_1074c080);
    local_8._0_1_ = 3;
    FString::FString(local_28,(ushort *)&DAT_1074c080);
    local_8._0_1_ = 4;
    pFVar2 = (FString *)FString::FString(local_40,(ushort *)L"Xinterface.UT2BadCDKeyMsg");
    local_8._0_1_ = 5;
    APlayerController::eventClientOpenMenu
              ((APlayerController *)piVar3[0xf],pFVar2,0,local_28,local_34);
    local_8._0_1_ = 4;
    FString::~FString(local_40);
    local_8._0_1_ = 3;
    FString::~FString(local_28);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_34);
    (**(code **)(*piVar3 + 0xc))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 107140b5 Catch@107140b5

void Catch_107140b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107140c9 Catch@107140c9

void Catch_107140c9(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::ClientAuthFailed");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10714160 FUN_10714160

void __fastcall FUN_10714160(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10743819;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10713ae0(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 107141d0 FUN_107141d0

FArchive * __cdecl FUN_107141d0(FArchive *param_1,FArray *param_2)

{
  FMD5UpdateData *pFVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10743830;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x1c);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar2 < *(int *)(param_2 + 4); iVar2 = iVar2 + 1) {
      operator<<(param_1,(FMD5UpdateData *)(*(int *)param_2 + iVar2 * 0x1c));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10713c10(param_2,local_18);
    while (iVar2 < local_18) {
      pFVar1 = (FMD5UpdateData *)thunk_FUN_10713680(0x1c,param_2);
      if (pFVar1 == (FMD5UpdateData *)0x0) {
        operator<<(param_1,(FMD5UpdateData *)0x0);
        iVar2 = iVar2 + 1;
      }
      else {
        pFVar1 = (FMD5UpdateData *)FMD5UpdateData::FMD5UpdateData(pFVar1);
        operator<<(param_1,pFVar1);
        iVar2 = iVar2 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 107142a9 Catch@107142a9

void Catch_107142a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 107142bd Catch@107142bd

void Catch_107142bd(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10714320 FUN_10714320

void __fastcall FUN_10714320(FTcpLink *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1074386d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = FMasterServerUplinkLink::vftable;
  local_8 = 4;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))(1);
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 4))(1);
  }
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 4))(1);
  }
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 4))(1);
  }
  local_8 = 2;
  FString::~FString((FString *)(param_1 + 0xb4));
  local_8._0_1_ = 1;
  thunk_FUN_107089c0((FArray *)(param_1 + 0x78));
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_107089c0((FArray *)(param_1 + 0x6c));
  local_8 = 0xffffffff;
  FTcpLink::~FTcpLink(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 107143e1 Catch@107143e1

void Catch_107143e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10756c40);
}


// ==== 107143f5 Catch@107143f5

void Catch_107143f5(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::~FMasterServerUplinkLink");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10714450 FUN_10714450

void __fastcall FUN_10714450(int param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FArchive *pFVar4;
  FServerResponseLine *pFVar5;
  int iVar6;
  float10 fVar7;
  FArray *pFVar8;
  FString local_40 [12];
  int local_34 [5];
  int local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107438a1;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  iVar6 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = param_1;
  fVar7 = thunk_FUN_10702660();
  if ((float10)60.0 < fVar7 - (float10)*(double *)(param_1 + 0x84)) {
    fVar7 = thunk_FUN_10702660();
    *(double *)(param_1 + 0x84) = (double)fVar7;
    AMasterServerUplink::eventRefresh(*(AMasterServerUplink **)(param_1 + 0x68));
    if ((*(int *)(param_1 + 100) == 3) &&
       ((*(int *)(param_1 + 0x44) == 3 || (*(int *)(param_1 + 0x44) == 4)))) {
      thunk_FUN_10706770(local_34);
      local_8._0_1_ = 1;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x68) + 0xe4) + 0x70);
      if (iVar1 != 0) {
        for (; local_20 = iVar6, iVar6 < *(int *)(iVar1 + 0x3c); iVar6 = iVar6 + 1) {
          if (*(int *)(*(int *)(*(int *)(iVar1 + 0x38) + iVar6 * 4) + 0x3c) != 0) {
            pFVar2 = (FString *)
                     (**(code **)(**(int **)(*(int *)(iVar1 + 0x38) + iVar6 * 4) + 0x6c))(local_40);
            local_8._0_1_ = 2;
            iVar3 = FArray::AddZeroed((FArray *)local_34,0xc,1);
            FString::operator=((FString *)(local_34[0] + iVar3 * 0xc),pFVar2);
            local_8._0_1_ = 1;
            FString::~FString(local_40);
            param_1 = local_1c;
          }
        }
      }
      local_15 = 1;
      pFVar5 = (FServerResponseLine *)(*(int *)(param_1 + 0x68) + 0x41c);
      pFVar8 = (FArray *)local_34;
      pFVar4 = (FArchive *)thunk_FUN_10702730(*(int **)(param_1 + 0x4c),&local_15);
      pFVar4 = thunk_FUN_10708a30(pFVar4,pFVar8);
      operator<<(pFVar4,pFVar5);
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x54))();
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_107089c0((FArray *)local_34);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 107145a2 Catch@107145a2

void Catch_107145a2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10756c40);
}


// ==== 107145b6 Catch@107145b6

void Catch_107145b6(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FMasterServerUplinkLink::CheckRefresh");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10714640 FUN_10714640

FTcpLink * __thiscall FUN_10714640(void *this,byte param_1)

{
  thunk_FUN_10714320(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 10714670 FUN_10714670

void __thiscall
FUN_10714670(void *this,undefined4 param_1,undefined4 param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  FArchiveUdpReader local_ac [44];
  int local_80;
  undefined1 *local_6c;
  void *local_68;
  undefined1 *puStack_64;
  int local_60;
  FArchiveUdpWriter local_5c [88];
  
  puStack_64 = &LAB_107438d0;
  local_68 = ExceptionList;
  local_6c = &stack0xffffff48;
  local_60 = 0;
  ExceptionList = &local_68;
  FArchiveUdpReader::FArchiveUdpReader(local_ac,param_3,param_4);
  local_60._0_1_ = 1;
  FArchiveUdpWriter::FArchiveUdpWriter(local_5c,this,param_1,param_2);
  local_60 = CONCAT31(local_60._1_3_,2);
  thunk_FUN_10702730((int *)local_ac,(int)&param_4 + 3);
  if ((local_80 == 0) && (iVar1 = FArchiveUdpReader::AtEnd(local_ac), iVar1 != 0)) {
    switch(param_4 >> 0x18) {
    case 0:
      thunk_FUN_10712b40(this,(FArchive *)local_5c);
      break;
    case 1:
      thunk_FUN_107129c0(this,(FArchive *)local_5c);
      break;
    case 2:
      thunk_FUN_10712a80(this,(FArchive *)local_5c);
      break;
    case 3:
      thunk_FUN_107129c0(this,(FArchive *)local_5c);
      thunk_FUN_10712a80(this,(FArchive *)local_5c);
      break;
    case 4:
      thunk_FUN_10712550((int *)local_5c);
      break;
    default:
      FOutputDevice::Logf(*(FOutputDevice **)GWarn_exref,(ushort *)*(FOutputDevice **)GWarn_exref,
                          L"Unknown ping request command: %d",param_4 >> 0x18);
    }
  }
  local_60._0_1_ = 1;
  FArchiveUdpWriter::~FArchiveUdpWriter(local_5c);
  local_60 = (uint)local_60._1_3_ << 8;
  FArchiveUdpReader::~FArchiveUdpReader(local_ac);
  ExceptionList = local_68;
  return;
}


// ==== 10714792 Catch@10714792

void Catch_10714792(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x54) = *(undefined4 *)(unaff_EBP + 0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x54,&DAT_10756c40);
}


// ==== 107147a6 Catch@107147a6

void Catch_107147a6(void)

{
  appUnwindf((ushort *)&DAT_10749e48,L"FServerQueryInterface::OnReceivedData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


