// ==== 10101005 UMapProperty::ExportCppItem

/* public: virtual void __thiscall UMapProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall UMapProperty::ExportCppItem(UMapProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1005  968  ?ExportCppItem@UMapProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bdf50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"TMap<");
  (**(code **)(**(int **)(this + 0x78) + 0x8c))(param_1,0);
  FOutputDevice::Log(param_1,(ushort *)&DAT_101df650);
  (**(code **)(**(int **)(this + 0x7c) + 0x8c))(param_1,0);
  FOutputDevice::Log(param_1,(ushort *)&DAT_101df654);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010100a thunk_FUN_1014c5a0 thunk -> 1014c5a0

// ==== 10101014 UField::GetPropertiesSize

/* public: virtual int __thiscall UField::GetPropertiesSize(void) */

int __thiscall UField::GetPropertiesSize(UField *this)

{
                    /* 0x1014  1384  ?GetPropertiesSize@UField@@UAEHXZ */
  return 0;
}


// ==== 10101019 FMemCache::Get

/* public: unsigned char * __thiscall FMemCache::Get(unsigned __int64,class FMemCache::FCacheItem *
   &,int) */

uchar * __thiscall FMemCache::Get(FMemCache *this,__uint64 param_1,FCacheItem **param_2,int param_3)

{
  undefined2 uVar1;
  FCacheItem *pFVar2;
  
                    /* 0x1019  1279  ?Get@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@H@Z */
  if (((uint)param_1 == *(uint *)(this + 8)) && (param_1._4_4_ == *(uint *)(this + 0xc))) {
    *param_2 = *(FCacheItem **)(this + 0x10);
    *(int *)(*(int *)(this + 0x10) + 0x10) = *(int *)(*(int *)(this + 0x10) + 0x10) + 0x1000000;
    return (uchar *)(*(int *)(*(int *)(this + 0x10) + 8) + -1 + param_3 & ~(param_3 - 1U));
  }
  pFVar2 = *(FCacheItem **)
            (this + ((((uint)param_1 >> 0xc ^ (uint)param_1) >> 0xc ^ (uint)param_1) & 0x3fff) * 4 +
                    0x24);
  while( true ) {
    if (pFVar2 == (FCacheItem *)0x0) {
      return (uchar *)0x0;
    }
    if ((*(uint *)pFVar2 == (uint)param_1) && (*(uint *)(pFVar2 + 4) == param_1._4_4_)) break;
    pFVar2 = *(FCacheItem **)(pFVar2 + 0x1c);
  }
  *(uint *)(this + 8) = (uint)param_1;
  *(FCacheItem **)(this + 0x10) = pFVar2;
  *(uint *)(this + 0xc) = param_1._4_4_;
  *param_2 = pFVar2;
  uVar1 = *(undefined2 *)(this + 4);
  *(uint *)(pFVar2 + 0x10) = *(uint *)(pFVar2 + 0x10) + 0x1000000;
  *(undefined2 *)(pFVar2 + 0xc) = uVar1;
  return (uchar *)((*(uint *)(pFVar2 + 8) - 1) + param_3 & ~(param_3 - 1U));
}


// ==== 1010101e FRange::operator-=

/* public: class FRange __thiscall FRange::operator-=(float) */

void __thiscall FRange::operator-=(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x101e  690  ??ZFRange@@QAE?AV0@M@Z */
  *(float *)this = *(float *)this - in_stack_00000008;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = *(float *)(this + 4) - in_stack_00000008;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 10101023 FString::operator*

/* public: unsigned short const * __thiscall FString::operator*(void)const  */

ushort * __thiscall FString::operator*(FString *this)

{
                    /* 0x1023  616  ??DFString@@QBEPBGXZ */
  if (*(int *)(this + 4) != 0) {
    return *(ushort **)this;
  }
  return &DAT_101cdd44;
}


// ==== 10101028 thunk_FUN_101428f0 thunk -> 101428f0

// ==== 1010102d thunk_FUN_1012e300 thunk -> 1012e300

// ==== 10101032 thunk_FUN_10146380 thunk -> 10146380

// ==== 10101037 UObject::execStringToVector

/* public: void __thiscall UObject::execStringToVector(struct FFrame &,void * const) */

void __thiscall UObject::execStringToVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int unaff_ESI;
  ushort *unaff_EDI;
  float *unaff_retaddr;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1037  2377  ?execStringToVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bab00;
  pvStack_c = ExceptionList;
  uStack_24 = 0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_24);
  if (unaff_ESI == 0) {
    unaff_EDI = &DAT_101cdd44;
  }
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  fStack_20 = appAtof(unaff_EDI);
  puVar2 = appStrstr(unaff_EDI,(ushort *)&DAT_101d3de0);
  if (puVar2 != (ushort *)0x0) {
    fStack_1c = appAtof(puVar2 + 1);
    puVar2 = appStrstr(puVar2 + 1,(ushort *)&DAT_101d3de4);
    if (puVar2 != (ushort *)0x0) {
      fStack_18 = appAtof(puVar2 + 1);
    }
  }
  *unaff_retaddr = fStack_20;
  unaff_retaddr[1] = fStack_1c;
  unaff_retaddr[2] = fStack_18;
  pvStack_c = (void *)0x3;
  uStack_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 1010103c FString::InStr

/* public: int __thiscall FString::InStr(unsigned short const *,int)const  */

int __thiscall FString::InStr(FString *this,ushort *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  
                    /* 0x103c  1456  ?InStr@FString@@QBEHPBGH@Z */
  if (param_2 == 0) {
    if (*(int *)(this + 4) == 0) {
      puVar1 = &DAT_101cdd44;
    }
    else {
      puVar1 = *(ushort **)this;
    }
    puVar1 = appStrstr(puVar1,param_1);
    if (puVar1 == (ushort *)0x0) {
      return -1;
    }
    if (*(int *)(this + 4) == 0) {
      return (int)(puVar1 + -0x80e6ea2) >> 1;
    }
    return (int)puVar1 - *(int *)this >> 1;
  }
  if (*(int *)(this + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 4) + -1;
  }
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      iVar4 = 0;
      if (*param_1 != 0) {
        puVar1 = (ushort *)(*(int *)this + iVar2 * 2);
        uVar3 = *param_1;
        do {
          if (*puVar1 != uVar3) break;
          uVar3 = param_1[iVar4 + 1];
          iVar4 = iVar4 + 1;
          puVar1 = puVar1 + 1;
        } while (uVar3 != 0);
      }
      if (param_1[iVar4] == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return -1;
}


// ==== 10101041 UObject::MakeUniqueObjectName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: static class FName __cdecl UObject::MakeUniqueObjectName(class UObject *,class UClass
   *) */

UObject * __cdecl UObject::MakeUniqueObjectName(UObject *param_1,UClass *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  UObject *pUVar3;
  int in_stack_0000000c;
  ushort auStack_1a4 [64];
  ushort auStack_124 [64];
  ushort auStack_a4 [70];
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1041  1601  ?MakeUniqueObjectName@UObject@@KA?AVFName@@PAV1@PAVUClass@@@Z
                        */
  puStack_c = &LAB_101bd900;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffe50;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xfffffe50;
  if (in_stack_0000000c == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Class",".\\UnObj.cpp",0xef9);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  appStrcpy(auStack_a4,(ushort *)(*(int *)(_Names + *(int *)(in_stack_0000000c + 0x20) * 4) + 0xc));
  iVar2 = appStrlen(auStack_a4);
  for (puStack_18 = auStack_a4 + iVar2;
      (auStack_a4 < puStack_18 && ((ushort)(puStack_18[-1] - 0x30) < 10));
      puStack_18 = puStack_18 + -1) {
  }
  *puStack_18 = 0;
  do {
    iVar2 = *(int *)(in_stack_0000000c + 0x4a8);
    *(int *)(in_stack_0000000c + 0x4a8) = iVar2 + 1;
    appSprintf(auStack_1a4,(ushort *)&DAT_101db3a0,iVar2);
    iVar2 = appStrlen(auStack_1a4);
    appStrncpy(auStack_124,auStack_a4,0x3f - iVar2);
    appStrcat(auStack_124,auStack_1a4);
    pUVar3 = StaticFindObject((UClass *)0x0,(UObject *)param_2,auStack_124,0);
  } while (pUVar3 != (UObject *)0x0);
  FName::FName((FName *)param_1,auStack_124,1);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10101046 FCoords::MirrorByVector

/* public: class FCoords __thiscall FCoords::MirrorByVector(class FVector const &)const  */

void __thiscall FCoords::MirrorByVector(FCoords *this,FVector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  FVector aFStack_30 [8];
  FVector aFStack_28 [8];
  FVector aFStack_20 [8];
  FVector aFStack_18 [12];
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1046  1621  ?MirrorByVector@FCoords@@QBE?AV1@ABVFVector@@@Z */
  puVar3 = (undefined4 *)FVector::MirrorByVector((FVector *)(this + 0x24),aFStack_30);
  puVar4 = (undefined4 *)FVector::MirrorByVector((FVector *)(this + 0x18),aFStack_28);
  uStack_4 = FVector::MirrorByVector((FVector *)(this + 0xc),aFStack_20);
  puVar5 = (undefined4 *)FVector::MirrorByVector((FVector *)this,aFStack_18);
  *puStack_c = *puVar5;
  uVar1 = puVar5[2];
  puStack_c[1] = puVar5[1];
  puStack_c[2] = uVar1;
  puStack_c[3] = *puStack_8;
  uVar1 = puStack_8[2];
  puStack_c[4] = puStack_8[1];
  uVar2 = *puVar4;
  puStack_c[5] = uVar1;
  uVar1 = puVar4[1];
  puStack_c[6] = uVar2;
  uVar2 = puVar4[2];
  puStack_c[7] = uVar1;
  puStack_c[9] = *puVar3;
  uVar1 = puVar3[2];
  puStack_c[8] = uVar2;
  puStack_c[10] = puVar3[1];
  puStack_c[0xb] = uVar1;
  return;
}


// ==== 1010104b LocalizeGeneral

/* unsigned short const * __cdecl LocalizeGeneral(unsigned short const *,unsigned short const
   *,unsigned short const *) */

ushort * __cdecl LocalizeGeneral(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x104b  1583  ?LocalizeGeneral@@YAPBGPBG00@Z */
  puVar1 = Localize((ushort *)L"General",param_1,param_2,param_3,0);
  return puVar1;
}


// ==== 10101050 UObject::execDivideEqual_FloatFloat

/* public: void __thiscall UObject::execDivideEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivideEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x1050  2188  ?execDivideEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  pfStack_8 = (float *)0x0;
  GPropAddr = (uchar *)0x0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&pfStack_8);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar3 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar3 = (float *)&stack0xfffffff0;
  }
  uStack_4 = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar1 = *pfVar3;
  *pfVar3 = fVar1 / unaff_ESI;
  *pfStack_8 = fVar1 / unaff_ESI;
  return;
}


// ==== 10101055 UProperty::NetSerializeItem

/* public: virtual int __thiscall UProperty::NetSerializeItem(class FArchive &,class UPackageMap
   *,void *)const  */

int __thiscall
UProperty::NetSerializeItem(UProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
                    /* 0x1055  1638
                       ?NetSerializeItem@UProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  (**(code **)(*(int *)this + 0x90))(param_1,param_3,0);
  return 1;
}


// ==== 1010105a UClassProperty::~UClassProperty

/* public: virtual __thiscall UClassProperty::~UClassProperty(void) */

void __thiscall UClassProperty::~UClassProperty(UClassProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x105a  321  ??1UClassProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7bd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UObjectProperty::~UObjectProperty((UObjectProperty *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101064 FBitWriter::operator=

/* public: struct FBitWriter & __thiscall FBitWriter::operator=(struct FBitWriter const &) */

FBitWriter * __thiscall FBitWriter::operator=(FBitWriter *this,FBitWriter *param_1)

{
                    /* 0x1064  432  ??4FBitWriter@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10118830(param_1 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 10101069 thunk_FUN_1015a6e0 thunk -> 1015a6e0

// ==== 1010107d UPackageMap::operator_new

/* public: static void * __cdecl UPackageMap::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UPackageMap::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x107d  403  ??2UPackageMap@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101082 FVector::Normalize

/* public: int __thiscall FVector::Normalize(void) */

int __thiscall FVector::Normalize(FVector *this)

{
  float fVar1;
  double dVar2;
  
                    /* 0x1082  1643  ?Normalize@FVector@@QAEHXZ */
  fVar1 = *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  if (1e-08 <= fVar1) {
    dVar2 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar2;
    *(float *)this = fVar1 * *(float *)this;
    *(float *)(this + 4) = fVar1 * *(float *)(this + 4);
    *(float *)(this + 8) = fVar1 * *(float *)(this + 8);
    return 1;
  }
  return 0;
}


// ==== 10101087 UObject::UnhashObjectBuffer

/* protected: void __thiscall UObject::UnhashObjectBuffer(int) */

void __thiscall UObject::UnhashObjectBuffer(UObject *this,int param_1)

{
  uint uVar1;
  UObject *pUVar2;
  void *pvVar3;
  UObject *pUVar4;
  int iVar5;
  int iVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1087  1987  ?UnhashObjectBuffer@UObject@@IAEXH@Z */
  pvVar3 = ExceptionList;
  puStack_c = &LAB_101bc880;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  uVar1 = *(uint *)(this + 0x20);
  pUVar4 = (UObject *)(&GObjHash + (uVar1 & 0xfff));
  iVar6 = 0;
  ExceptionList = &pvStack_10;
  while (pUVar2 = *(UObject **)pUVar4, pUVar2 != (UObject *)0x0) {
    if (pUVar2 == this) {
      *(UObject **)pUVar4 = *(UObject **)(pUVar2 + 8);
      iVar6 = iVar6 + 1;
    }
    else {
      pUVar4 = pUVar2 + 8;
    }
  }
  pUVar4 = (UObject *)(&GObjHashBuffer + (uVar1 & 0xfff));
  iVar5 = 0;
  while (pUVar2 = *(UObject **)pUVar4, pUVar2 != (UObject *)0x0) {
    if (pUVar2 == this) {
      *(UObject **)pUVar4 = *(UObject **)(pUVar2 + 0x2c);
      iVar5 = iVar5 + 1;
    }
    else {
      pUVar4 = pUVar2 + 0x2c;
    }
  }
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      appFailAssert("Removed1!=0 || Removed2!=0",".\\UnObj.cpp",0xf70);
      goto LAB_1015b319;
    }
  }
  else if (iVar6 == 1) {
    ExceptionList = pvVar3;
    return;
  }
  if (iVar5 == 1) {
    ExceptionList = pvVar3;
    return;
  }
LAB_1015b319:
  appFailAssert("Removed1==1 || Removed2==1",".\\UnObj.cpp",0xf71);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010108c FVector::Size

/* public: float __thiscall FVector::Size(void)const  */

float __thiscall FVector::Size(FVector *this)

{
  double dVar1;
  
                    /* 0x108c  1879  ?Size@FVector@@QBEMXZ */
  dVar1 = appSqrt((double)(*(float *)(this + 8) * *(float *)(this + 8) +
                          *(float *)this * *(float *)this +
                          *(float *)(this + 4) * *(float *)(this + 4)));
  return (float)dVar1;
}


// ==== 10101091 appIsDebuggerPresent

/* int __cdecl appIsDebuggerPresent(void) */

int __cdecl appIsDebuggerPresent(void)

{
  BOOL BVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  int iVar4;
  _OSVERSIONINFOW _Stack_114;
  
                    /* 0x1091  2061  ?appIsDebuggerPresent@@YAHXZ */
  iVar4 = 0;
  _Stack_114.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&_Stack_114);
  if ((BVar1 != 0) && (_Stack_114.dwPlatformId == 2)) {
    hModule = LoadLibraryExW(L"kernel32.dll",(HANDLE)0x0,0);
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,"IsDebuggerPresent");
      if (pFVar2 != (FARPROC)0x0) {
        iVar3 = (*pFVar2)();
        if (iVar3 != 0) {
          iVar4 = 1;
        }
      }
      FreeLibrary(hModule);
    }
    return iVar4;
  }
  return 0;
}


// ==== 10101096 UFloatProperty::ImportText

/* public: virtual unsigned short const * __thiscall UFloatProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UFloatProperty::ImportText(UFloatProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort uVar1;
  float fVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1096  1448  ?ImportText@UFloatProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101bde80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  fVar2 = appAtof(param_1);
  *(float *)param_2 = fVar2;
  for (; (((uVar1 = *param_1, uVar1 != 0 && (uVar1 != 0x2c)) && (uVar1 != 0x29)) &&
         ((uVar1 != 0xd && (uVar1 != 10)))); param_1 = param_1 + 1) {
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1010109b TArray<unsigned_short>::FindItem

/* public: int __thiscall TArray<unsigned short>::FindItem(unsigned short const &,int &)const  */

int __thiscall
TArray<unsigned_short>::FindItem(TArray<unsigned_short> *this,ushort *param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x109b  1009  ?FindItem@?$TArray@G@@QBEHABGAAH@Z */
  *param_2 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      if (*(ushort *)(*(int *)this + *param_2 * 2) == *param_1) {
        return 1;
      }
      iVar1 = *param_2 + 1;
      *param_2 = iVar1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return 0;
}


// ==== 101010a0 UEnum::operator_new

/* public: static void * __cdecl UEnum::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UEnum::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x10a0  369  ??2UEnum@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101010a5 ULinkerLoad::LoadAllObjects

/* public: void __thiscall ULinkerLoad::LoadAllObjects(void) */

void __thiscall ULinkerLoad::LoadAllObjects(ULinkerLoad *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10a5  1571  ?LoadAllObjects@ULinkerLoad@@QAEXXZ */
  puStack_c = &LAB_101bb9c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x4c); iVar1 = iVar1 + 1) {
    CreateExport(this,iVar1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101010af FArchive::CountBytes

/* public: virtual void __thiscall FArchive::CountBytes(unsigned long,unsigned long) */

void __thiscall FArchive::CountBytes(FArchive *this,ulong param_1,ulong param_2)

{
                    /* 0x10af  889  ?CountBytes@FArchive@@UAEXKK@Z */
  return;
}


// ==== 101010b4 FSharedMemory::~FSharedMemory

/* public: __thiscall FSharedMemory::~FSharedMemory(void) */

void __thiscall FSharedMemory::~FSharedMemory(FSharedMemory *this)

{
                    /* 0x10b4  311  ??1FSharedMemory@@QAE@XZ */
  if (*(int *)(this + 8) != 0) {
    UnmapViewOfFile(*(LPCVOID *)(this + 4));
  }
  return;
}


// ==== 101010b9 UClassProperty::ImportText

/* public: virtual unsigned short const * __thiscall UClassProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UClassProperty::ImportText(UClassProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10b9  1445  ?ImportText@UClassProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be1e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = UObjectProperty::ImportText((UObjectProperty *)this,param_1,param_2,param_3);
  if (puVar1 != (ushort *)0x0) {
    if (((*(int *)param_2 == 0) ||
        (*(UClass **)(*(int *)param_2 + 0x24) == &UClass::PrivateStaticClass)) &&
       (iVar2 = UStruct::IsChildOf(*(UStruct **)param_2,*(UStruct **)(this + 0x7c)), iVar2 != 0)) {
      ExceptionList = pvStack_10;
      return puVar1;
    }
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
  ExceptionList = pvStack_10;
  return puVar1;
}


// ==== 101010c3 FSphere::TransformBy

/* public: class FSphere __thiscall FSphere::TransformBy(class FMatrix const &)const  */

FMatrix * __thiscall FSphere::TransformBy(FSphere *this,FMatrix *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float *in_stack_00000008;
  
                    /* 0x10c3  1972  ?TransformBy@FSphere@@QBE?AV1@ABVFMatrix@@@Z */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = in_stack_00000008[5];
  fVar5 = in_stack_00000008[1];
  fVar6 = in_stack_00000008[9];
  fVar7 = in_stack_00000008[0xd];
  fVar8 = in_stack_00000008[6];
  fVar9 = in_stack_00000008[2];
  fVar10 = in_stack_00000008[10];
  fVar11 = in_stack_00000008[0xe];
  *(float *)param_1 =
       in_stack_00000008[0xc] +
       fVar3 * in_stack_00000008[8] + fVar2 * in_stack_00000008[4] + fVar1 * *in_stack_00000008;
  *(float *)(param_1 + 4) = fVar6 * fVar3 + fVar1 * fVar5 + fVar4 * fVar2 + fVar7;
  *(float *)(param_1 + 8) = fVar2 * fVar8 + fVar9 * fVar1 + fVar10 * fVar3 + fVar11;
  fVar1 = in_stack_00000008[6] * in_stack_00000008[6] +
          in_stack_00000008[4] * in_stack_00000008[4] + in_stack_00000008[5] * in_stack_00000008[5];
  fVar2 = in_stack_00000008[10] * in_stack_00000008[10] +
          in_stack_00000008[8] * in_stack_00000008[8] + in_stack_00000008[9] * in_stack_00000008[9];
  if ((uint)fVar1 < (uint)fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = in_stack_00000008[2] * in_stack_00000008[2] +
          *in_stack_00000008 * *in_stack_00000008 + in_stack_00000008[1] * in_stack_00000008[1];
  if ((uint)fVar1 <= (uint)fVar2) {
    fVar1 = fVar2;
  }
  dVar12 = appSqrt((double)fVar1);
  *(float *)(param_1 + 0xc) = (float)dVar12 * *(float *)(this + 0xc);
  return param_1;
}


// ==== 101010c8 UCommandlet::StaticClass

/* public: static class UClass * __cdecl UCommandlet::StaticClass(void) */

UClass * __cdecl UCommandlet::StaticClass(void)

{
                    /* 0x10c8  1893  ?StaticClass@UCommandlet@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101010cd UObject::StaticExec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static int __cdecl UObject::StaticExec(unsigned short const *,class FOutputDevice &) */

int __cdecl UObject::StaticExec(ushort *param_1,FOutputDevice *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  UPackage *pUVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  UClass *pUVar7;
  UProperty *pUVar8;
  ushort *puVar9;
  UObject *pUVar10;
  undefined4 *puVar11;
  int iVar12;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *extraout_ECX_02;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *extraout_ECX_03;
  FOutputDevice *this_04;
  FOutputDevice *extraout_ECX_04;
  FOutputDevice *this_05;
  FOutputDevice *extraout_ECX_05;
  FOutputDevice *this_06;
  FOutputDevice *extraout_ECX_06;
  FOutputDevice *extraout_ECX_07;
  FOutputDevice *pFVar13;
  FOutputDevice *this_07;
  FOutputDevice *this_08;
  FOutputDevice *this_09;
  FOutputDevice *this_10;
  FOutputDevice *this_11;
  FOutputDevice *this_12;
  FOutputDevice *this_13;
  FOutputDevice *this_14;
  uint uVar14;
  int iVar15;
  wchar_t *pwVar16;
  ushort uStack_6f4;
  undefined1 auStack_6f2 [510];
  FOutputDevice aFStack_4f4 [512];
  ushort auStack_2f4 [262];
  FArchiveCountMem aFStack_e8 [56];
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_90;
  int iStack_88;
  undefined1 *puStack_84;
  void *pvStack_80;
  undefined1 *puStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  FOutputDevice *pFStack_6c;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  FOutputDevice *pFStack_3c;
  void *pvStack_38;
  int iStack_34;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  UClass *pUStack_1c;
  UClass *apUStack_18 [2];
  UPackage *pUStack_10;
  UObject *pUStack_c;
  ushort *puStack_8;
  
                    /* 0x10cd  1932  ?StaticExec@UObject@@SAHPBGAAVFOutputDevice@@@Z */
  puStack_7c = &LAB_101bda58;
  pvStack_80 = ExceptionList;
  puStack_84 = &stack0xfffff900;
  uStack_78 = 0;
  puStack_8 = param_1;
  ExceptionList = &pvStack_80;
  iVar4 = ParseCommand(&puStack_8,(ushort *)&DAT_101da030);
  if (iVar4 == 0) {
    iVar4 = ParseCommand(&puStack_8,(ushort *)L"DUMPNATIVES");
    if (iVar4 == 0) {
      iVar4 = ParseCommand(&puStack_8,(ushort *)&DAT_101da08c);
      pFVar13 = param_2;
      if (iVar4 == 0) {
        iVar4 = ParseCommand(&puStack_8,(ushort *)&DAT_101da0f8);
        if (iVar4 == 0) {
          iVar4 = ParseCommand(&puStack_8,(ushort *)&DAT_101da160);
          if (iVar4 == 0) {
            iVar4 = ParseCommand(&puStack_8,(ushort *)L"GTIME");
            if (iVar4 == 0) {
              ExceptionList = pvStack_80;
              return 0;
            }
            if (GLog == (undefined *)0x0) {
              ExceptionList = pvStack_80;
              return 1;
            }
            FOutputDevice::Logf2(this_14,(ushort *)GLog);
            ExceptionList = pvStack_80;
            return 1;
          }
          iVar4 = ParseCommand(&puStack_8,(ushort *)L"GARBAGE");
          uVar2 = DAT_1023fe50;
          if (iVar4 != 0) {
            DAT_1023fe50 = 0;
            CollectGarbage(-(uint)(GIsEditor != 0) & 0x80000 | 0x4000000);
            DAT_1023fe50 = uVar2;
            ExceptionList = pvStack_80;
            return 1;
          }
          iVar4 = ParseCommand(&puStack_8,(ushort *)L"MARK");
          if (iVar4 != 0) {
            if (GLog != (undefined *)0x0) {
              FOutputDevice::Logf2(this,(ushort *)GLog);
            }
            thunk_FUN_1012b3e0();
            while ((int)pUStack_10 < DAT_1033088c) {
              puVar1 = (uint *)(*(int *)(_GObjObjects + (int)pUStack_10 * 4) + 0x1c);
              *puVar1 = *puVar1 | 0x8000000;
              thunk_FUN_1012ae60();
            }
            ExceptionList = pvStack_80;
            return 1;
          }
          iVar4 = ParseCommand(&puStack_8,(ushort *)L"MARKCHECK");
          if (iVar4 != 0) {
            if (GLog != (undefined *)0x0) {
              FOutputDevice::Logf2(this_00,(ushort *)GLog);
            }
            thunk_FUN_1012b3e0();
            while ((int)pUStack_10 < DAT_1033088c) {
              pUVar10 = *(UObject **)(_GObjObjects + (int)pUStack_10 * 4);
              if (((*(uint *)(pUVar10 + 0x1c) & 0x8000000) == 0) && (GLog != (undefined *)0x0)) {
                GetFullName(pUVar10,(ushort *)0x0);
                FOutputDevice::Logf2(this_01,(ushort *)GLog);
              }
              thunk_FUN_1012ae60();
            }
            ExceptionList = pvStack_80;
            return 1;
          }
          iVar4 = ParseCommand(&puStack_8,(ushort *)L"REFS");
          if (iVar4 == 0) {
            iVar4 = ParseCommand(&puStack_8,(ushort *)L"HASH");
            if (iVar4 != 0) {
              FName::DisplayHash(param_2);
              iStack_4c = 0;
              uStack_50 = 0;
              thunk_FUN_1012b3e0(&PrivateStaticClass);
              iVar4 = DAT_1033088c;
              while ((int)pUStack_10 < iVar4) {
                iStack_4c = iStack_4c + 1;
                thunk_FUN_1012ae60();
              }
              for (uVar14 = 0; uVar14 < 0x1000; uVar14 = uVar14 + 1) {
                for (pUVar10 = (UObject *)(&GObjHash)[uVar14]; pUVar10 != (UObject *)0x0;
                    pUVar10 = *(UObject **)(pUVar10 + 8)) {
                }
              }
              ExceptionList = pvStack_80;
              return 1;
            }
            iVar4 = ParseCommand(&puStack_8,(ushort *)L"CLASSES");
            if (iVar4 != 0) {
              FUN_10164130(&PrivateStaticClass,param_2,0);
              ExceptionList = pvStack_80;
              return 1;
            }
            iVar4 = ParseCommand(&puStack_8,(ushort *)L"DEPENDENCIES");
            if (iVar4 == 0) {
              iVar4 = ParseCommand(&puStack_8,(ushort *)L"LIST");
              if (iVar4 != 0) {
                FOutputDevice::Log(param_2,(ushort *)L"Objects:");
                FOutputDevice::Log(param_2,(ushort *)&DAT_101da3c8);
                pUStack_1c = (UClass *)0x0;
                apUStack_18[0] = (UClass *)0x0;
                pUStack_c = (UObject *)0x0;
                thunk_FUN_1015c160(puStack_8,L"CLASS=",&pUStack_1c,0xffffffff);
                thunk_FUN_1015c190(puStack_8,L"PACKAGE=",apUStack_18,0);
                thunk_FUN_1015c190(puStack_8,L"INSIDE=",&pUStack_c,0);
                thunk_FUN_1015bd10();
                uStack_78._0_1_ = 5;
                thunk_FUN_1015bd70();
                uStack_78 = CONCAT31(uStack_78._1_3_,6);
                uStack_48 = 0;
                iStack_44 = 0;
                iStack_40 = 0;
                pFStack_3c = (FOutputDevice *)0x0;
                thunk_FUN_1012b3e0(&PrivateStaticClass);
                pUVar7 = apUStack_18[0];
                iVar4 = _GObjObjects;
                while (pUVar3 = pUStack_10, (int)pUStack_10 < DAT_1033088c) {
                  if (((((pUStack_1c != (UClass *)0x0) &&
                        (iVar5 = IsA(*(UObject **)(iVar4 + (int)pUStack_10 * 4),pUStack_1c),
                        iVar5 != 0)) ||
                       ((pUVar7 != (UClass *)0x0 &&
                        (*(UClass **)(*(int *)(iVar4 + (int)pUVar3 * 4) + 0x18) == pUVar7)))) ||
                      ((pUStack_c != (UObject *)0x0 &&
                       (iVar5 = IsIn(*(UObject **)(iVar4 + (int)pUVar3 * 4),pUStack_c), iVar5 != 0))
                      )) || ((pUStack_1c == (UClass *)0x0 &&
                             ((pUVar7 == (UClass *)0x0 && (pUStack_c == (UObject *)0x0)))))) {
                    FArchiveCountMem::FArchiveCountMem
                              (aFStack_e8,*(UObject **)(iVar4 + (int)pUVar3 * 4));
                    uStack_78 = CONCAT31(uStack_78._1_3_,7);
                    for (iStack_54 = 0;
                        (iStack_54 < iStack_34 &&
                        (*(int *)(iStack_54 * 0x10 + (int)pvStack_38) !=
                         *(int *)(*(int *)(_GObjObjects + (int)pUVar3 * 4) + 0x24)));
                        iStack_54 = iStack_54 + 1) {
                    }
                    if (iStack_54 == iStack_34) {
                      uStack_a4 = *(undefined4 *)(*(int *)(_GObjObjects + (int)pUVar3 * 4) + 0x24);
                      uStack_a0 = 0;
                      uStack_9c = 0;
                      uStack_98 = 0;
                      iStack_54 = thunk_FUN_1015da10(&uStack_a4);
                    }
                    iVar4 = iStack_54;
                    if ((((pUStack_1c != (UClass *)0x0) || (apUStack_18[0] != (UClass *)0x0)) ||
                        (pUStack_c != (UObject *)0x0)) &&
                       (puVar11 = (undefined4 *)thunk_FUN_1015c1c0(0xc,&piStack_28),
                       puVar11 != (undefined4 *)0x0)) {
                      *puVar11 = *(undefined4 *)(_GObjObjects + (int)pUVar3 * 4);
                      puVar11[1] = iStack_b0;
                      puVar11[2] = iStack_ac;
                    }
                    piVar6 = (int *)((int)pvStack_38 + iVar4 * 0x10 + 4);
                    *piVar6 = *piVar6 + 1;
                    piVar6 = (int *)((int)pvStack_38 + iVar4 * 0x10 + 8);
                    *piVar6 = *piVar6 + iStack_b0;
                    piVar6 = (int *)((int)pvStack_38 + iVar4 * 0x10 + 0xc);
                    *piVar6 = *piVar6 + iStack_ac;
                    iStack_44 = iStack_44 + 1;
                    iStack_40 = iStack_40 + iStack_b0;
                    pFStack_3c = pFStack_3c + iStack_ac;
                    uStack_78 = CONCAT31(uStack_78._1_3_,6);
                    FArchiveCountMem::~FArchiveCountMem(aFStack_e8);
                    pUVar7 = apUStack_18[0];
                    iVar4 = _GObjObjects;
                  }
                  thunk_FUN_1012ae60();
                }
                if (iStack_24 != 0) {
                  appQsort(piStack_28,iStack_24,0xc,(_func_int_void_ptr_void_ptr *)&LAB_1015a8c0);
                  FOutputDevice::Logf(this_08,(ushort *)param_2);
                  for (iVar4 = 0; iStack_58 = iVar4, iVar4 < iStack_24; iVar4 = iVar4 + 1) {
                    GetFullName((UObject *)piStack_28[iVar4 * 3],(ushort *)0x0);
                    FOutputDevice::Logf(this_09,(ushort *)param_2);
                  }
                  FOutputDevice::Log(param_2,(ushort *)&DAT_101da480);
                }
                if (iStack_34 != 0) {
                  appQsort(pvStack_38,iStack_34,0x10,(_func_int_void_ptr_void_ptr *)&LAB_1015a8e0);
                  FOutputDevice::Logf(this_10,(ushort *)param_2);
                  for (iVar4 = 0; iStack_74 = iVar4, iVar4 < iStack_34; iVar4 = iVar4 + 1) {
                    FOutputDevice::Logf(*(FOutputDevice **)
                                         (*(int *)(iVar4 * 0x10 + (int)pvStack_38) + 0x20),
                                        (ushort *)param_2);
                  }
                  FOutputDevice::Log(param_2,(ushort *)&DAT_101da52c);
                }
                FOutputDevice::Logf(pFStack_3c,(ushort *)param_2);
                uStack_78._0_1_ = 5;
                thunk_FUN_10162ed0();
                uStack_78 = (uint)uStack_78._1_3_ << 8;
                thunk_FUN_10162df0();
                ExceptionList = pvStack_80;
                return 1;
              }
              iVar4 = ParseCommand(&puStack_8,(ushort *)L"VFHASH");
              if (iVar4 != 0) {
                FOutputDevice::Logf(this_11,(ushort *)param_2);
                thunk_FUN_10162fb0();
                while (pUVar3 = pUStack_10, (int)pUStack_10 < DAT_1033088c) {
                  FOutputDevice::Logf(_Names,(ushort *)param_2);
                  for (iVar4 = 0; iStack_90 = iVar4, iVar4 < 0x100; iVar4 = iVar4 + 1) {
                    pFStack_6c = (FOutputDevice *)0x0;
                    for (iVar5 = *(int *)(*(int *)(_GObjObjects + (int)pUVar3 * 4) + 0xa4 +
                                         iVar4 * 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
                      pFStack_6c = pFStack_6c + 1;
                    }
                    FOutputDevice::Logf(pFStack_6c,(ushort *)param_2);
                  }
                  thunk_FUN_1012ae60();
                }
                ExceptionList = pvStack_80;
                return 1;
              }
              iVar4 = ParseCommand(&puStack_8,(ushort *)L"LINKERS");
              if (iVar4 != 0) {
                FOutputDevice::Logf(this_12,(ushort *)param_2);
                for (iStack_2c = 0; iStack_2c < DAT_103308a4; iStack_2c = iStack_2c + 1) {
                  iVar5 = thunk_FUN_10163650();
                  iVar4 = 0;
                  iStack_5c = 0;
                  for (iVar15 = 0; iStack_60 = iVar15, iVar15 < *(int *)(iVar5 + 0x7c);
                      iVar15 = iVar15 + 1) {
                    piVar6 = (int *)(*(int *)(iVar5 + 0x78) + iVar15 * 4);
                    if (*piVar6 != 0) {
                      iVar12 = appStrlen((ushort *)(*(int *)(_Names + *piVar6 * 4) + 0xc));
                      iVar4 = iVar4 + 0xe + iVar12 * 2;
                      iStack_5c = iVar4;
                    }
                  }
                  GetFullName(*(UObject **)(iVar5 + 0x34),(ushort *)0x0);
                  FString::operator*((FString *)(iVar5 + 0xa0));
                  FOutputDevice::Logf(this_13,(ushort *)param_2);
                }
                ExceptionList = pvStack_80;
                return 1;
              }
              ExceptionList = pvStack_80;
              return 0;
            }
            iVar4 = thunk_FUN_1015c190(puStack_8,L"PACKAGE=",apUStack_18,0);
            if (iVar4 == 0) {
              ExceptionList = pvStack_80;
              return 1;
            }
            thunk_FUN_101281e0();
            uStack_78 = CONCAT31(uStack_78._1_3_,3);
            for (iVar4 = 0; iStack_70 = iVar4, iVar4 < 0x10; iVar4 = iVar4 + 1) {
              appSprintf((ushort *)aFStack_e8,(ushort *)L"EXCLUDE%i=",iVar4);
              iVar5 = Parse(puStack_8,(ushort *)aFStack_e8,(FName *)&pUStack_c);
              if (iVar5 != 0) {
                pUStack_10 = CreatePackage((UObject *)0x0,
                                           (ushort *)(*(int *)(_Names + (int)pUStack_c * 4) + 0xc));
                thunk_FUN_101287a0(&pUStack_10);
              }
            }
            GetPathName((UObject *)apUStack_18[0],(UObject *)0x0,(ushort *)0x0);
            FOutputDevice::Logf(this_07,(ushort *)param_2);
            thunk_FUN_1012b3e0();
            pUVar10 = (UObject *)apUStack_18[0];
            iVar4 = _GObjObjects;
            while ((int)pUStack_10 < DAT_1033088c) {
              iVar5 = *(int *)(iVar4 + (int)pUStack_10 * 4);
              if (*(UObject **)(iVar5 + 0x18) == pUVar10) {
                thunk_FUN_1015a5b0(param_2,pUVar10,iVar5);
                uStack_78 = CONCAT31(uStack_78._1_3_,3);
                thunk_FUN_1015a690();
                pUVar10 = (UObject *)apUStack_18[0];
                iVar4 = _GObjObjects;
              }
              thunk_FUN_1012ae60();
            }
          }
          else {
            iVar4 = thunk_FUN_1015c160(puStack_8,L"CLASS=",apUStack_18,0xffffffff);
            if (iVar4 == 0) {
              ExceptionList = pvStack_80;
              return 1;
            }
            iVar4 = ParseObject(puStack_8,(ushort *)L"NAME=",apUStack_18[0],&pUStack_c,
                                (UObject *)0xffffffff);
            if (iVar4 == 0) {
              ExceptionList = pvStack_80;
              return 1;
            }
            FOutputDevice::Logf(this_02,(ushort *)param_2);
            GetFullName(pUStack_c,(ushort *)0x0);
            FOutputDevice::Logf(this_03,(ushort *)param_2);
            thunk_FUN_1012b3e0();
            pFVar13 = extraout_ECX_03;
            while (pUVar3 = pUStack_10, (int)pUStack_10 < DAT_1033088c) {
              thunk_FUN_1015a6e0(pUStack_c,*(undefined4 *)(_GObjObjects + (int)pUStack_10 * 4));
              uStack_78._0_1_ = 1;
              if (iStack_ac != 0) {
                GetFullName(*(UObject **)(_GObjObjects + (int)pUVar3 * 4),(ushort *)0x0);
                FOutputDevice::Logf(this_04,(ushort *)param_2);
              }
              uStack_78 = (uint)uStack_78._1_3_ << 8;
              thunk_FUN_1015a7e0();
              thunk_FUN_1012ae60();
              pFVar13 = extraout_ECX_04;
            }
            FOutputDevice::Logf(pFVar13,(ushort *)param_2);
            puVar9 = GetFullName(pUStack_c,(ushort *)0x0);
            pwVar16 = L"Shortest reachability from root to %s:";
            FOutputDevice::Logf(this_05,(ushort *)param_2);
            thunk_FUN_10167460(&piStack_28,pUStack_c,pwVar16,puVar9);
            uStack_78 = CONCAT31(uStack_78._1_3_,2);
            pFVar13 = extraout_ECX_05;
            for (iVar4 = 0; iStack_64 = iVar4, iVar4 < iStack_24; iVar4 = iVar4 + 1) {
              GetFullName((UObject *)piStack_28[iVar4],(ushort *)0x0);
              FOutputDevice::Logf(this_06,(ushort *)param_2);
              pFVar13 = extraout_ECX_06;
            }
            if (iStack_24 == 0) {
              FOutputDevice::Logf(pFVar13,(ushort *)param_2);
              pFVar13 = extraout_ECX_07;
            }
            FOutputDevice::Logf(pFVar13,(ushort *)param_2);
          }
          uStack_78 = uStack_78 & 0xffffff00;
          thunk_FUN_10118970();
          ExceptionList = pvStack_80;
          return 1;
        }
        iVar4 = ParseToken(&puStack_8,(ushort *)aFStack_4f4,0x100,1);
        pFVar13 = extraout_ECX_01;
        if (((iVar4 != 0) &&
            (pUVar7 = (UClass *)thunk_FUN_10149600(0xffffffff,aFStack_4f4,0),
            pFVar13 = extraout_ECX_02, pUVar7 != (UClass *)0x0)) &&
           ((iVar4 = ParseToken(&puStack_8,auStack_2f4,0x100,1), pFVar13 = param_2, iVar4 != 0 &&
            (pUVar8 = (UProperty *)thunk_FUN_10147830(pUVar7,auStack_2f4),
            pUVar8 != (UProperty *)0x0)))) {
          for (; *puStack_8 == 0x20; puStack_8 = puStack_8 + 1) {
          }
          GlobalSetProperty(puStack_8,pUVar7,pUVar8,*(int *)(pUVar8 + 0x54),1);
          ExceptionList = pvStack_80;
          return 1;
        }
      }
      else {
        iVar4 = ParseToken(&puStack_8,auStack_2f4,0x100,1);
        if ((iVar4 != 0) && (iVar4 = thunk_FUN_10149600(0xffffffff,auStack_2f4,0), iVar4 != 0)) {
          iVar5 = ParseToken(&puStack_8,(ushort *)aFStack_4f4,0x100,1);
          if ((iVar5 != 0) &&
             (piVar6 = (int *)thunk_FUN_10147830(iVar4,aFStack_4f4), piVar6 != (int *)0x0)) {
            uStack_6f4 = 0;
            _memset(auStack_6f2,0,0x1fe);
            if (*(int *)(iVar4 + 0x4f8) != 0) {
              (**(code **)(*piVar6 + 0xa0))
                        (0,&uStack_6f4,*(undefined4 *)(iVar4 + 0x4f4),*(undefined4 *)(iVar4 + 0x4f4)
                         ,1);
            }
            FOutputDevice::Log(param_2,&uStack_6f4);
            ExceptionList = pvStack_80;
            return 1;
          }
          pFVar13 = aFStack_4f4;
        }
      }
      FOutputDevice::Logf(pFVar13,(EName)param_2,(ushort *)0x300);
    }
    else {
      iStack_88 = 0;
      puVar9 = (ushort *)GLog;
      pFVar13 = extraout_ECX;
      while (iVar4 = iStack_88, iStack_88 < 0x1000) {
        if (((&GNatives)[iStack_88] == (_func_void_FFrame_ptr_void_ptr **)execUndefined) &&
           (puVar9 != (ushort *)0x0)) {
          FOutputDevice::Logf2(pFVar13,puVar9);
          puVar9 = (ushort *)GLog;
          pFVar13 = extraout_ECX_00;
        }
        iStack_88 = iVar4 + 1;
      }
    }
  }
  else {
    (**(code **)(*(int *)GMalloc + 0xc))();
  }
  ExceptionList = pvStack_80;
  return 1;
}


// ==== 101010d2 UStrProperty::Link

/* public: virtual void __thiscall UStrProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UStrProperty::Link(UStrProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10d2  1565  ?Link@UStrProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be0b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 0xc;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  if ((*(uint *)(this + 0x48) & 0x1000) == 0) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400000;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101010d7 thunk_FUN_1016c010 thunk -> 1016c010

// ==== 101010dc FArchive::Preload

/* public: virtual void __thiscall FArchive::Preload(class UObject *) */

void __thiscall FArchive::Preload(FArchive *this,UObject *param_1)

{
                    /* 0x10dc  1692  ?Preload@FArchive@@UAEXPAVUObject@@@Z */
  return;
}


// ==== 101010e1 FCompactIndex::operator=

/* public: class FCompactIndex & __thiscall FCompactIndex::operator=(class FCompactIndex const &) */

FCompactIndex * __thiscall FCompactIndex::operator=(FCompactIndex *this,FCompactIndex *param_1)

{
                    /* 0x10e1  439  ??4FCompactIndex@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}


// ==== 101010e6 FString::operator<

/* public: int __thiscall FString::operator<(unsigned short const *)const  */

int __thiscall FString::operator<(FString *this,ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x10e6  651  ??MFString@@QBEHPBG@Z */
  if (*(int *)(this + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)this;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return (uint)(iVar2 < 0);
}


// ==== 101010f0 thunk_FUN_10123e80 thunk -> 10123e80

// ==== 101010fa FVector::operator/=

/* public: class FVector __thiscall FVector::operator/=(float) */

void __thiscall FVector::operator/=(FVector *this,float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float in_stack_00000008;
  
                    /* 0x10fa  704  ??_0FVector@@QAE?AV0@M@Z */
  fVar2 = 1.0 / in_stack_00000008;
  *(float *)this = fVar2 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * fVar2;
  *(float *)(this + 8) = fVar2 * *(float *)(this + 8);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = uVar1;
  return;
}


// ==== 101010ff thunk_FUN_1012a260 thunk -> 1012a260

// ==== 10101109 UIntProperty::ImportText

/* public: virtual unsigned short const * __thiscall UIntProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UIntProperty::ImportText(UIntProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1109  1449  ?ImportText@UIntProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101bde20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  uVar1 = *param_1;
  if ((uVar1 == 0x2d) || ((0x2f < uVar1 && (uVar1 < 0x3a)))) {
    ExceptionList = &pvStack_10;
    iVar2 = appAtoi(param_1);
    *(int *)param_2 = iVar2;
  }
  for (; (uVar1 = *param_1, uVar1 == 0x2d || ((0x2f < uVar1 && (uVar1 < 0x3a))));
      param_1 = param_1 + 1) {
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1010110e thunk_FUN_10123f70 thunk -> 10123f70

// ==== 10101113 FRotator::Clamp

/* public: class FRotator __thiscall FRotator::Clamp(void) */

void __thiscall FRotator::Clamp(FRotator *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
                    /* 0x1113  836  ?Clamp@FRotator@@QAE?AV1@XZ */
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(this + 4);
  *in_stack_00000004 = *(int *)this % 0xffff;
  in_stack_00000004[1] = iVar2 % 0xffff;
  in_stack_00000004[2] = iVar1 % 0xffff;
  return;
}


// ==== 10101118 thunk_FUN_1015da90 thunk -> 1015da90

// ==== 1010111d UObject::execSubtractEqual_VectorVector

/* public: void __thiscall UObject::execSubtractEqual_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractEqual_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_EDI;
  float *pfVar2;
  float afStack_14 [2];
  undefined1 auStack_c [4];
  float *pfStack_8;
  
                    /* 0x111d  2385  ?execSubtractEqual_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = afStack_14;
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfVar2 = *pfVar2 - (float)param_1;
  pfVar2[1] = pfVar2[1] - (float)auStack_c;
  pfVar2[2] = pfVar2[2] - unaff_EDI;
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 10101122 UStructProperty::DestroyValue

/* public: virtual void __thiscall UStructProperty::DestroyValue(void *)const  */

void __thiscall UStructProperty::DestroyValue(UStructProperty *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x1122  929  ?DestroyValue@UStructProperty@@UBEXPAX@Z */
  for (piVar1 = *(int **)(*(int *)(this + 0x78) + 0x78); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[0x18]) {
    if (*(int *)(this + 0x40) < 1) {
      (**(code **)(*piVar1 + 0xac))(piVar1[0x15] + (int)param_1);
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(this + 0x40)) {
        do {
          (**(code **)(*piVar1 + 0xac))(*(int *)(this + 0x44) * iVar2 + piVar1[0x15] + (int)param_1)
          ;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 0x40));
      }
    }
  }
  return;
}


// ==== 1010112c UEnum::GetOuterUStruct

/* public: class UStruct * __thiscall UEnum::GetOuterUStruct(void)const  */

UStruct * __thiscall UEnum::GetOuterUStruct(UEnum *this)

{
                    /* 0x112c  1378  ?GetOuterUStruct@UEnum@@QBEPAVUStruct@@XZ */
  return *(UStruct **)(this + 0x18);
}


// ==== 10101131 FBufferReader::~FBufferReader

/* public: virtual __thiscall FBufferReader::~FBufferReader(void) */

void __thiscall FBufferReader::~FBufferReader(FBufferReader *this)

{
                    /* 0x1131  297  ??1FBufferReader@@UAE@XZ */
  *(undefined ***)this = FArchive::vftable;
  return;
}


// ==== 10101136 FRange::operator+=

/* public: class FRange __thiscall FRange::operator+=(float) */

void __thiscall FRange::operator+=(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x1136  680  ??YFRange@@QAE?AV0@M@Z */
  *(float *)this = in_stack_00000008 + *(float *)this;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = in_stack_00000008 + *(float *)(this + 4);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 1010113b UObject::UnhashObject

/* protected: void __thiscall UObject::UnhashObject(int) */

void __thiscall UObject::UnhashObject(UObject *this,int param_1)

{
  UObject *pUVar1;
  void *pvVar2;
  UObject *pUVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x113b  1986  ?UnhashObject@UObject@@IAEXH@Z */
  pvVar2 = ExceptionList;
  puStack_c = &LAB_101bc860;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  pUVar3 = (UObject *)(&GObjHash + (*(uint *)(this + 0x20) & 0xfff));
  iVar4 = 0;
  ExceptionList = &pvStack_10;
  while (pUVar1 = *(UObject **)pUVar3, pUVar1 != (UObject *)0x0) {
    if (pUVar1 == this) {
      *(UObject **)pUVar3 = *(UObject **)(pUVar1 + 8);
      iVar4 = iVar4 + 1;
    }
    else {
      pUVar3 = pUVar1 + 8;
    }
  }
  if (iVar4 == 0) {
    appFailAssert("Removed!=0",".\\UnObj.cpp",0xf38);
  }
  else if (iVar4 == 1) {
    ExceptionList = pvVar2;
    return;
  }
  appFailAssert("Removed==1",".\\UnObj.cpp",0xf39);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101140 thunk_FUN_10148530 thunk -> 10148530

// ==== 10101145 appFromUnicode

/* unsigned short const * __cdecl appFromUnicode(unsigned short const *) */

ushort * __cdecl appFromUnicode(ushort *param_1)

{
                    /* 0x1145  2050  ?appFromUnicode@@YAPBGPBG@Z */
  return param_1;
}


// ==== 1010114a thunk_FUN_1011a290 thunk -> 1011a290

// ==== 1010114f FCodec::operator=

/* public: class FCodec & __thiscall FCodec::operator=(class FCodec const &) */

FCodec * __thiscall FCodec::operator=(FCodec *this,FCodec *param_1)

{
                    /* 0x114f  438  ??4FCodec@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10101154 thunk_FUN_1015c0a0 thunk -> 1015c0a0

// ==== 10101159 UIntProperty::Identical

/* public: virtual int __thiscall UIntProperty::Identical(void const *,void const *)const  */

int __thiscall UIntProperty::Identical(UIntProperty *this,void *param_1,void *param_2)

{
                    /* 0x1159  1435  ?Identical@UIntProperty@@UBEHPBX0@Z */
  if (param_2 != (void *)0x0) {
    return (uint)(*(int *)param_1 == *(int *)param_2);
  }
  return (uint)(*(int *)param_1 == 0);
}


// ==== 1010115e FString::operator<=

/* public: int __thiscall FString::operator<=(unsigned short const *)const  */

int __thiscall FString::operator<=(FString *this,ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x115e  652  ??NFString@@QBEHPBG@Z */
  if (*(int *)(this + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)this;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return (uint)(iVar2 < 1);
}


// ==== 10101163 UObject::FindObjectProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindObjectProperty(class FString,class UObject * *) */

int __thiscall
UObject::FindObjectProperty
          (UObject *this,ushort *param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iStack_1c;
  ushort *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1163  1012  ?FindObjectProperty@UObject@@QAEHVFString@@PAPAV1@@Z */
  puStack_8 = &LAB_101bcd80;
  pvStack_c = ExceptionList;
  iStack_4 = 0;
  if (*(int *)(this + 0x24) == 0) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = *(int *)(*(int *)(this + 0x24) + 0x48);
  }
  ExceptionList = &pvStack_c;
  thunk_FUN_10114340();
  do {
    if (iStack_1c == 0) {
      iStack_4 = 5;
      param_3 = 0;
      param_4 = 0;
      FArray::Realloc((FArray *)&param_2,2);
      iStack_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_2);
      ExceptionList = pvStack_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(iStack_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UObjectProperty::PrivateStaticClass) {
        FString::FString((FString *)&puStack_18,
                         (ushort *)(*(int *)(_Names + *(int *)(iStack_1c + 0x20) * 4) + 0xc));
        iStack_4._0_1_ = 1;
        puVar4 = param_2;
        if (param_3 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = puStack_18;
        if (iStack_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_5 = this + *(int *)(iStack_1c + 0x54);
          iStack_4._0_1_ = 2;
          iStack_14 = 0;
          uStack_10 = 0;
          FArray::Realloc((FArray *)&puStack_18,2);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_18);
          iStack_4 = 3;
          param_3 = 0;
          param_4 = 0;
          FArray::Realloc((FArray *)&param_2,2);
          iStack_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_2);
          ExceptionList = pvStack_c;
          return 1;
        }
        iStack_4._0_1_ = 4;
        iStack_14 = 0;
        uStack_10 = 0;
        FArray::Realloc((FArray *)&puStack_18,2);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_18);
        break;
      }
    }
    iStack_1c = *(int *)(iStack_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10101168 UStruct::UStruct

/* public: __thiscall UStruct::UStruct(enum ENativeConstructor,int,unsigned short const *,unsigned
   short const *,unsigned long,class UStruct *) */

UStruct * __thiscall
UStruct::UStruct(UStruct *this,ENativeConstructor param_1,int param_2,ushort *param_3,
                ushort *param_4,ulong param_5,UStruct *param_6)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1168  277  ??0UStruct@@QAE@W4ENativeConstructor@@HPBG1KPAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9ffb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,0,&UClass::PrivateStaticClass,param_3,param_4,param_5,
                 (UField *)param_6);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(int *)(this + 0x4c) = param_2;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010116d thunk_FUN_10114bc0 thunk -> 10114bc0

// ==== 10101172 FVector::operator!=

/* public: int __thiscall FVector::operator!=(class FVector const &)const  */

int __thiscall FVector::operator!=(FVector *this,FVector *param_1)

{
                    /* 0x1172  591  ??9FVector@@QBEHABV0@@Z */
  if (((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
     && (*(float *)(param_1 + 8) == *(float *)(this + 8))) {
    return 0;
  }
  return 1;
}


// ==== 10101177 thunk_FUN_10156e80 thunk -> 10156e80

// ==== 10101181 FRange::operator=

/* public: class FRange & __thiscall FRange::operator=(class FRange const &) */

FRange * __thiscall FRange::operator=(FRange *this,FRange *param_1)

{
                    /* 0x1181  483  ??4FRange@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10101186 L2ThreadUtil::IsCurrentThread

/* public: int __thiscall L2ThreadUtil::IsCurrentThread(enum L2ThreadFunction) */

int __thiscall L2ThreadUtil::IsCurrentThread(L2ThreadUtil *this,L2ThreadFunction param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
                    /* 0x1186  1512  ?IsCurrentThread@L2ThreadUtil@@QAEHW4L2ThreadFunction@@@Z */
  DVar1 = GetCurrentThreadId();
  if (*(int *)(this + param_1 * 4 + 4) != 0) {
    DVar2 = (**(code **)(**(int **)(this + param_1 * 4 + 4) + 0x28))();
    return (uint)(DVar1 == DVar2);
  }
  return (uint)(DVar1 == 0xffffffff);
}


// ==== 1010118b FCoords::operator*

/* public: class FCoords __thiscall FCoords::operator*(class FScale const &)const  */

void __thiscall FCoords::operator*(FCoords *this,FScale *param_1)

{
  FCoords *pFVar1;
  int iVar2;
  FScale *in_stack_00000008;
  FCoords aFStack_30 [48];
  
  pFVar1 = aFStack_30;
                    /* 0x118b  601  ??DFCoords@@QBE?AV0@ABVFScale@@@Z */
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *(undefined4 *)this;
    this = this + 4;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = operator*=(aFStack_30,in_stack_00000008);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 10101190 FExec::operator=

/* public: class FExec & __thiscall FExec::operator=(class FExec const &) */

FExec * __thiscall FExec::operator=(FExec *this,FExec *param_1)

{
                    /* 0x1190  447  ??4FExec@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10101195 FString::FString

/* private: __thiscall FString::FString(int,unsigned short const *) */

FString * __thiscall FString::FString(FString *this,int param_1,ushort *param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1195  141  ??0FString@@AAE@HPBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7168;
  pvStack_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 1;
  }
  ExceptionList = &pvStack_c;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)this,iVar1);
  uStack_4 = 0;
  if (*(int *)(this + 4) != 0) {
    appStrncpy(*(ushort **)this,param_2,param_1 + 1);
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010119a FRange::operator*=

/* public: class FRange __thiscall FRange::operator*=(float) */

void __thiscall FRange::operator*=(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x119a  667  ??XFRange@@QAE?AV0@M@Z */
  *(float *)this = in_stack_00000008 * *(float *)this;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = in_stack_00000008 * *(float *)(this + 4);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 1010119f UObject::InitProperties

/* public: static void __cdecl UObject::InitProperties(unsigned char *,int,class UClass *,unsigned
   char *,int,class UObject *,class UObject *) */

void __cdecl
UObject::InitProperties
          (uchar *param_1,int param_2,UClass *param_3,uchar *param_4,int param_5,UObject *param_6,
          UObject *param_7)

{
  int iVar1;
  UObject *pUVar2;
  int *piVar3;
  int iStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x119f  1467  ?InitProperties@UObject@@SAXPAEHPAVUClass@@0HPAV1@2@Z */
  puStack_c = &LAB_101bcca0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if ((uint)param_2 < 0x34) {
    ExceptionList = &pvStack_10;
    appFailAssert("DataCount>=sizeof(UObject)",".\\UnObj.cpp",0x57a);
  }
  iVar1 = 0x34;
  if (param_4 == (uchar *)0x0) {
    if ((param_3 == (UClass *)0x0) || (*(int *)(param_3 + 0x4f8) == 0)) goto LAB_1015fb7d;
    param_4 = *(uchar **)(param_3 + 0x4f4);
    param_5 = *(int *)(param_3 + 0x4f8);
    if (param_4 == (uchar *)0x0) goto LAB_1015fb7d;
  }
  _memcpy(param_1 + 0x34,param_4 + 0x34,param_5 - 0x34);
  iVar1 = param_5;
LAB_1015fb7d:
  if (iVar1 < param_2) {
    thunk_FUN_10108420(param_1 + iVar1,param_2 - iVar1);
  }
  if (param_7 != (UObject *)0x0) {
    iVar1 = *(int *)(param_3 + 0x4f4);
    thunk_FUN_10119210(*(undefined4 *)(param_6 + 0x24));
    while (iStack_20 != 0) {
      if ((*(uint *)(iStack_20 + 0x48) & 0x2000) != 0) {
        _memcpy(param_1 + *(int *)(iStack_20 + 0x54),(void *)(*(int *)(iStack_20 + 0x54) + iVar1),
                *(int *)(iStack_20 + 0x44) * *(int *)(iStack_20 + 0x40));
      }
      iStack_20 = *(int *)(iStack_20 + 0x38);
      thunk_FUN_10114340();
    }
  }
  if (param_3 != (UClass *)0x0) {
    for (piVar3 = *(int **)(param_3 + 0x78); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x18]) {
      if (piVar3[0x15] < param_5) {
        thunk_FUN_10108420(param_1 + piVar3[0x15],piVar3[0x11] * piVar3[0x10]);
        pUVar2 = param_7;
        if (param_7 == (UObject *)0x0) {
          pUVar2 = param_6;
        }
        (**(code **)(*piVar3 + 0xa8))(param_1 + piVar3[0x15],param_4 + piVar3[0x15],pUVar2);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101011a4 FObjectExport::FObjectExport

/* public: __thiscall FObjectExport::FObjectExport(class UObject *) */

void __thiscall FObjectExport::FObjectExport(FObjectExport *this,UObject *param_1)

{
  uint uVar1;
  UObject *pUVar2;
  
                    /* 0x11a4  92  ??0FObjectExport@@QAE@PAVUObject@@@Z */
  pUVar2 = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)0x0;
  }
  else {
    param_1 = *(UObject **)(param_1 + 0x20);
  }
  *(UObject **)(this + 0xc) = param_1;
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = *(uint *)(pUVar2 + 0x1c);
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(uint *)(this + 0x10) = uVar1 & 0x67f01a5;
    *(UObject **)(this + 0x1c) = pUVar2;
    return;
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


// ==== 101011a9 thunk_FUN_10163590 thunk -> 10163590

// ==== 101011ae UObject::execHighNative3

/* public: void __thiscall UObject::execHighNative3(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative3(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x11ae  2256  ?execHighNative3@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101011b3 UObject::execAddAdd_PreInt

/* public: void __thiscall UObject::execAddAdd_PreInt(struct FFrame &,void * const) */

void __thiscall UObject::execAddAdd_PreInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x11b3  2140  ?execAddAdd_PreInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  piVar2 = (int *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    piVar2 = (int *)&stack0xfffffff4;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = *piVar2 + 1;
  *unaff_retaddr = *piVar2;
  return;
}


// ==== 101011bd UFixedArrayProperty::UFixedArrayProperty

/* public: __thiscall UFixedArrayProperty::UFixedArrayProperty(class UFixedArrayProperty const &) */

UFixedArrayProperty * __thiscall
UFixedArrayProperty::UFixedArrayProperty(UFixedArrayProperty *this,UFixedArrayProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11bd  219  ??0UFixedArrayProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7db8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101011c7 thunk_FUN_1011a5a0 thunk -> 1011a5a0

// ==== 101011cc UFactory::UFactory

/* public: __thiscall UFactory::UFactory(class UFactory const &) */

UFactory * __thiscall UFactory::UFactory(UFactory *this,UFactory *param_1)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11cc  212  ??0UFactory@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9184;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FString::FString((FString *)(this + 0x3c),(FString *)(param_1 + 0x3c));
  uStack_4._0_1_ = 1;
  FString::FString((FString *)(this + 0x48),(FString *)(param_1 + 0x48));
  uStack_4._0_1_ = 2;
  FString::FString((FString *)(this + 0x54),(FString *)(param_1 + 0x54));
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  thunk_FUN_10120630(param_1 + 0x60);
  *(uint *)(this + 0x6c) =
       *(uint *)(this + 0x6c) ^ (*(uint *)(this + 0x6c) ^ *(uint *)(param_1 + 0x6c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x6c) ^ *(uint *)(this + 0x6c)) & 2 ^ *(uint *)(this + 0x6c);
  *(uint *)(this + 0x6c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x6c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x6c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x6c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x6c) = uVar1;
  *(uint *)(this + 0x6c) = (*(uint *)(param_1 + 0x6c) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101011d1 FQuat::operator*

/* public: class FQuat __thiscall FQuat::operator*(float const &)const  */

void __thiscall FQuat::operator*(FQuat *this,float *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x11d1  607  ??DFQuat@@QBE?AV0@ABM@Z */
  *param_1 = *in_stack_00000008 * *(float *)this;
  param_1[1] = *(float *)(this + 4) * *in_stack_00000008;
  param_1[2] = *(float *)(this + 8) * *in_stack_00000008;
  param_1[3] = *(float *)(this + 0xc) * *in_stack_00000008;
  return;
}


// ==== 101011d6 FVector::operator-=

/* public: class FVector __thiscall FVector::operator-=(class FVector const &) */

void __thiscall FVector::operator-=(FVector *this,FVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x11d6  694  ??ZFVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this - *in_stack_00000008;
  *(float *)(this + 4) = *(float *)(this + 4) - in_stack_00000008[1];
  *(float *)(this + 8) = *(float *)(this + 8) - in_stack_00000008[2];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 101011db UObject::execStringToRotator

/* public: void __thiscall UObject::execStringToRotator(struct FFrame &,void * const) */

void __thiscall UObject::execStringToRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int unaff_EBX;
  int iVar3;
  ushort *unaff_EBP;
  int iVar4;
  int *unaff_retaddr;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11db  2376  ?execStringToRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bab40;
  pvStack_c = ExceptionList;
  uStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_24);
  if (unaff_EBX == 0) {
    unaff_EBP = &DAT_101cdd44;
  }
  iVar4 = 0;
  iVar3 = 0;
  iStack_20 = appAtoi(unaff_EBP);
  puVar2 = appStrstr(unaff_EBP,(ushort *)&DAT_101d3de8);
  if (puVar2 != (ushort *)0x0) {
    iVar4 = appAtoi(puVar2 + 1);
    puVar2 = appStrstr(puVar2 + 1,(ushort *)&DAT_101d3dec);
    if (puVar2 != (ushort *)0x0) {
      iVar3 = appAtoi(puVar2 + 1);
    }
  }
  *unaff_retaddr = iStack_20;
  unaff_retaddr[1] = iVar4;
  unaff_retaddr[2] = iVar3;
  pvStack_c = (void *)0x3;
  uStack_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 101011e0 FOutputDevice::Logf2

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl FOutputDevice::Logf2(unsigned short const *,...) */

void __thiscall FOutputDevice::Logf2(FOutputDevice *this,ushort *param_1,...)

{
  ushort auStack_2000 [4094];
  undefined4 uStack_4;
  
                    /* 0x11e0  1596  ?Logf2@FOutputDevice@@QAAXPBGZZ */
  uStack_4 = 0x10151e7a;
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    appGetVarArgs(auStack_2000,0x1000,(ushort **)&stack0x00000008);
    (*(code *)**(undefined4 **)param_1)(auStack_2000,0x2f8);
  }
  return;
}


// ==== 101011e5 FVector::IsLeft

/* public: int __thiscall FVector::IsLeft(class FVector const &,class FVector const &) */

int __thiscall FVector::IsLeft(FVector *this,FVector *param_1,FVector *param_2)

{
                    /* 0x11e5  1515  ?IsLeft@FVector@@QAEHABV1@0@Z */
  if (0.0 < (*(float *)(param_1 + 4) * *(float *)this +
            *(float *)param_2 * *(float *)(this + 4) + *(float *)param_1 * *(float *)(param_2 + 4))
            - (*(float *)this * *(float *)(param_2 + 4) +
              *(float *)param_1 * *(float *)(this + 4) + *(float *)(param_1 + 4) * *(float *)param_2
              )) {
    return 1;
  }
  return 0;
}


// ==== 101011ea appConvertIntToTime

/* void __cdecl appConvertIntToTime(int,int &,int &,int &,int &,int &) */

void __cdecl
appConvertIntToTime(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  tm *ptVar1;
  int iStack_8;
  int iStack_4;
  
                    /* 0x11ea  2027  ?appConvertIntToTime@@YAXHAAH0000@Z */
  iStack_4 = param_1 >> 0x1f;
  iStack_8 = param_1;
  ptVar1 = FID_conflict___localtime64(&iStack_8);
  *param_2 = ptVar1->tm_year + 0x76c;
  *param_3 = ptVar1->tm_mon + 1;
  *param_4 = ptVar1->tm_mday;
  *param_5 = ptVar1->tm_hour;
  *param_6 = ptVar1->tm_min;
  return;
}


// ==== 101011ef UField::UField

/* public: __thiscall UField::UField(enum ENativeConstructor,class UClass *,unsigned short const
   *,unsigned short const *,unsigned long,class UField *) */

UField * __thiscall
UField::UField(UField *this,ENativeConstructor param_1,UClass *param_2,ushort *param_3,
              ushort *param_4,ulong param_5,UField *param_6)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11ef  217  ??0UField@@QAE@W4ENativeConstructor@@PAVUClass@@PBG2KPAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9d28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,0,param_2,param_3,param_4,param_5);
  *(undefined ***)this = vftable;
  *(UField **)(this + 0x34) = param_6;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101011f4 appAcos

/* double __cdecl appAcos(double) */

double __cdecl appAcos(double param_1)

{
  float10 fVar1;
  
                    /* 0x11f4  2011  ?appAcos@@YANN@Z */
  fVar1 = (float10)FUN_1017c7e0();
  return (double)fVar1;
}


// ==== 101011f9 thunk_FUN_1015c7b0 thunk -> 1015c7b0

// ==== 101011fe FString::~FString

/* public: __thiscall FString::~FString(void) */

void __thiscall FString::~FString(FString *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11fe  312  ??1FString@@QAE@XZ */
  puStack_8 = &LAB_101b6fd8;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  FArray::Realloc((FArray *)this,2);
  uStack_4 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101208 thunk_FUN_101376e0 thunk -> 101376e0

// ==== 1010120d UFactory::Serialize

/* public: virtual void __thiscall UFactory::Serialize(class FArchive &) */

void __thiscall UFactory::Serialize(UFactory *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x120d  1810  ?Serialize@UFactory@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101b9a60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    uVar1 = thunk_FUN_1012a9f0(param_1,this + 0x34,this + 0x38);
    thunk_FUN_1012a9f0(uVar1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101212 UClassProperty::operator_new

/* public: static void * __cdecl UClassProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UClassProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1212  362  ??2UClassProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10101217 FBitReader::ReadInt

/* public: unsigned long __thiscall FBitReader::ReadInt(unsigned long) */

ulong __thiscall FBitReader::ReadInt(FBitReader *this,ulong param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
                    /* 0x1217  1749  ?ReadInt@FBitReader@@QAEKK@Z */
  puVar1 = &uStack_4;
  uStack_4 = 0;
  (**(code **)(*(int *)this + 0xc))(&uStack_4,param_1);
  return (ulong)(undefined1 *)puVar1;
}


// ==== 10101226 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,class FClassNetCache &) */

FArchive * __cdecl operator<<(FArchive *param_1,FClassNetCache *param_2)

{
  undefined4 uVar1;
  FArchive *pFVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1226  549  ??6@YAAAVFArchive@@AAV0@AAVFClassNetCache@@@Z */
  puStack_c = &LAB_101ba8a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  uVar1 = thunk_FUN_1012a9f0(param_1,param_2 + 0x18,param_2 + 0x1c);
  pFVar2 = (FArchive *)thunk_FUN_101375c0(uVar1);
  ExceptionList = pvStack_10;
  return pFVar2;
}


// ==== 1010122b UConst::UConst

/* public: __thiscall UConst::UConst(class UConst const &) */

UConst * __thiscall UConst::UConst(UConst *this,UConst *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x122b  202  ??0UConst@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b78d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x40),(FString *)(param_1 + 0x40));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101230 FRange::operator-

/* public: class FRange __thiscall FRange::operator-(void)const  */

FRange * __thiscall FRange::operator-(FRange *this)

{
  FRange *in_stack_00000004;
  
                    /* 0x1230  624  ??GFRange@@QBE?AV0@XZ */
  FRange(in_stack_00000004,-*(float *)this,-*(float *)(this + 4));
  return in_stack_00000004;
}


// ==== 1010123a FMemCache::FCacheItem::Unlock

/* public: void __thiscall FMemCache::FCacheItem::Unlock(void) */

void __thiscall FMemCache::FCacheItem::Unlock(FCacheItem *this)

{
                    /* 0x123a  1988  ?Unlock@FCacheItem@FMemCache@@QAEXXZ */
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -0x1000000;
  return;
}


// ==== 1010123f FFileManager::FFileManager

/* public: __thiscall FFileManager::FFileManager(class FFileManager const &) */

void __thiscall FFileManager::FFileManager(FFileManager *this,FFileManager *param_1)

{
                    /* 0x123f  53  ??0FFileManager@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10101244 FCoords::FCoords

/* public: __thiscall FCoords::FCoords(void) */

FCoords * __thiscall FCoords::FCoords(FCoords *this)

{
                    /* 0x1244  34  ??0FCoords@@QAE@XZ */
  return this;
}


// ==== 10101249 FInterpCurve::AddPoint

/* public: void __thiscall FInterpCurve::AddPoint(float,float) */

void __thiscall FInterpCurve::AddPoint(FInterpCurve *this,float param_1,float param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1249  790  ?AddPoint@FInterpCurve@@QAEXMM@Z */
  puStack_c = &LAB_101bbdc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  for (iVar4 = 0; (iVar4 < *(int *)(this + 4) && (*(float *)(*(int *)this + iVar4 * 8) < param_1));
      iVar4 = iVar4 + 1) {
  }
  iVar3 = *(int *)(this + 4);
  iVar1 = iVar3 + 1;
  ExceptionList = &pvStack_10;
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc((FArray *)this,8);
  }
  pvVar2 = (void *)(*(int *)this + iVar4 * 8);
  appMemmove((void *)((int)pvVar2 + 8),pvVar2,(iVar3 - iVar4) * 8);
  iVar1 = *(int *)this;
  *(float *)(iVar1 + iVar4 * 8) = param_1;
  *(float *)(iVar1 + 4 + iVar4 * 8) = param_2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010124e FArchiveDummySave::FArchiveDummySave

/* public: __thiscall FArchiveDummySave::FArchiveDummySave(void) */

void __thiscall FArchiveDummySave::FArchiveDummySave(FArchiveDummySave *this)

{
                    /* 0x124e  10  ??0FArchiveDummySave@@QAE@XZ */
  *(undefined ***)this = FArchive::vftable;
  *(undefined4 *)(this + 4) = 0x7b;
  *(undefined4 *)(this + 8) = 2000;
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x14) = 1;
  return;
}


// ==== 10101253 UObject::FindFunction

/* public: class UFunction * __thiscall UObject::FindFunction(class FName,int) */

UFunction * __thiscall UObject::FindFunction(UObject *this,undefined4 param_2,undefined4 param_3)

{
  UFunction *pUVar1;
  
                    /* 0x1253  1006  ?FindFunction@UObject@@QAEPAVUFunction@@VFName@@H@Z */
  pUVar1 = (UFunction *)FindObjectField(this,param_2,param_3);
  if ((pUVar1 == (UFunction *)0x0) || ((*(uint *)(*(int *)(pUVar1 + 0x24) + 0x4a4) & 0x80000) == 0))
  {
    pUVar1 = (UFunction *)0x0;
  }
  return pUVar1;
}


// ==== 10101258 UParamStack::execGetInt

/* public: void __thiscall UParamStack::execGetInt(struct FFrame &,void * const) */

void __thiscall UParamStack::execGetInt(UParamStack *this,FFrame *param_1,void *param_2)

{
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1258  2230  ?execGetInt@UParamStack@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bcb70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(this + 0x34) != (L2ParamStack *)0x0) {
    pvVar1 = L2ParamStack::Top(*(L2ParamStack **)(this + 0x34));
    *(void **)param_2 = pvVar1;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010125d UObject::CallFunction

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall UObject::CallFunction(struct FFrame &,void * const,class
   UFunction *) */

void __thiscall
UObject::CallFunction(UObject *this,FFrame *param_1,void *param_2,UFunction *param_3)

{
  UFunction *pUVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 auStack_4ac [1024];
  int aiStack_ac [32];
  undefined **ppuStack_2c;
  UFunction *pUStack_28;
  UObject *pUStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  uint uStack_14;
  int iStack_10;
  UObject *pUStack_c;
  int iStack_8;
  
                    /* 0x125d  829  ?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
  pUStack_c = this;
  uVar5 = rdtsc();
  iStack_10 = -(int)uVar5;
  iStack_8 = 0;
  if (*(short *)(param_3 + 0x90) == 0) {
    if ((*(uint *)(param_3 + 0x8c) & 0x400) != 0) {
      iVar6 = (**(code **)(*(int *)this + 0x1c))(param_3,auStack_4ac,param_1);
      if (iVar6 == 0) {
        (**(code **)(param_3 + 0x9c))(param_1,param_2);
        goto LAB_10146027;
      }
      iStack_8 = 1;
    }
    uStack_14 = *(uint *)(param_3 + 0x4c);
    if (uStack_14 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)&stack0xfffffb48;
    }
    uVar9 = uStack_14 & 3;
    puVar10 = puVar8;
    for (uVar7 = uStack_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar6 = *(int *)(param_3 + 0x48);
    pUStack_24 = pUStack_c;
    puStack_1c = puVar8;
    ppuStack_2c = FFrame::vftable;
    pUStack_28 = param_3;
    uStack_20 = *(undefined4 *)(param_3 + 0x54);
    piVar11 = aiStack_ac;
    cVar2 = **(char **)(param_1 + 0xc);
    while (cVar2 != '\x16') {
      GPropAddr = (uchar *)0x0;
      GPropObject = (UObject *)0x0;
      iVar4 = *(int *)(iVar6 + 0x54);
      bVar3 = **(byte **)(param_1 + 0xc);
      *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
      (*(code *)(&GNatives)[bVar3])(param_1,(undefined1 *)(iVar4 + (int)puStack_1c));
      if (((*(uint *)(iVar6 + 0x48) & 0x100) != 0) && (GPropAddr != (uchar *)0x0)) {
        piVar11[1] = (int)GPropAddr;
        *piVar11 = iVar6;
        piVar11 = piVar11 + 2;
        if (GPropObject != (UObject *)0x0) {
          (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
        }
      }
      iVar6 = *(int *)(iVar6 + 0x38);
      cVar2 = **(char **)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (**(char **)(param_1 + 0xc) == 'B') {
      *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
      (*DAT_1027f878)(param_1,0);
    }
    if (iStack_8 == 0) {
      ProcessInternal(pUStack_c,(FFrame *)&ppuStack_2c,param_2);
    }
    piVar11 = piVar11 + -2;
    if (aiStack_ac <= piVar11) {
      do {
        (**(code **)(*(int *)*piVar11 + 0xa8))
                  (piVar11[1],(undefined1 *)(((int *)*piVar11)[0x15] + (int)puStack_1c),0);
        piVar11 = piVar11 + -2;
      } while (aiStack_ac <= piVar11);
    }
    for (piVar11 = *(int **)(param_3 + 0x78); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[0x18])
    {
      (**(code **)(*piVar11 + 0xac))((undefined1 *)(piVar11[0x15] + (int)puStack_1c));
    }
  }
  else {
    (**(code **)(param_3 + 0x9c))(param_1,param_2);
  }
LAB_10146027:
  uVar5 = rdtsc();
  uVar7 = (int)uVar5 + -0xc + iStack_10;
  pUVar1 = param_3 + 0xa8;
  uVar9 = *(uint *)pUVar1;
  *(uint *)pUVar1 = *(uint *)pUVar1 + uVar7;
  *(uint *)(param_3 + 0xac) = *(int *)(param_3 + 0xac) + (uint)CARRY4(uVar9,uVar7);
  pUVar1 = param_3 + 0xa0;
  uVar7 = *(uint *)pUVar1;
  *(uint *)pUVar1 = *(uint *)pUVar1 + 1;
  *(uint *)(param_3 + 0xa4) = *(int *)(param_3 + 0xa4) + (uint)(0xfffffffe < uVar7);
  return;
}


// ==== 10101262 UField::UField

/* public: __thiscall UField::UField(enum EStaticConstructor,unsigned short const *,unsigned short
   const *,unsigned long) */

UField * __thiscall
UField::UField(UField *this,EStaticConstructor param_1,ushort *param_2,ushort *param_3,ulong param_4
              )

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1262  218  ??0UField@@QAE@W4EStaticConstructor@@PBG1K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9d48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101267 FMemStackFrame::FreeChunks

/* public: void __thiscall FMemStackFrame::FreeChunks(struct FTaggedMemory *) */

void __thiscall FMemStackFrame::FreeChunks(FMemStackFrame *this,FTaggedMemory *param_1)

{
  FTaggedMemory *pFVar1;
  FScopeCriticalSection aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1267  1026  ?FreeChunks@FMemStackFrame@@QAEXPAUFTaggedMemory@@@Z */
  puStack_c = &LAB_101bbe48;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_18,MemStackCS);
  while (pFVar1 = *(FTaggedMemory **)(this + 0xc), pFVar1 != param_1) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)pFVar1;
    *(FTaggedMemory **)pFVar1 = UnusedChunks;
    UnusedChunks = pFVar1;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (pFVar1 != (FTaggedMemory *)0x0) {
    *(FTaggedMemory **)this = pFVar1 + 8;
    *(FTaggedMemory **)(this + 4) = pFVar1 + 8 + *(int *)(pFVar1 + 4);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010126c UState::UState

/* public: __thiscall UState::UState(class UState const &) */

UState * __thiscall UState::UState(UState *this,UState *param_1)

{
  int iVar1;
  UState *pUVar2;
  UState *pUVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x126c  267  ??0UState@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7788;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this,(UStruct *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined2 *)(this + 0xa0) = *(undefined2 *)(param_1 + 0xa0);
  pUVar2 = param_1 + 0xa4;
  pUVar3 = this + 0xa4;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101271 FNotifyHook::FNotifyHook

/* public: __thiscall FNotifyHook::FNotifyHook(void) */

void __thiscall FNotifyHook::FNotifyHook(FNotifyHook *this)

{
                    /* 0x1271  87  ??0FNotifyHook@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10101276 USystem::operator=

/* public: class USystem & __thiscall USystem::operator=(class USystem const &) */

USystem * __thiscall USystem::operator=(USystem *this,USystem *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
                    /* 0x1276  544  ??4USystem@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  pFVar1 = (FArray *)(this + 0x40);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (pFVar1 != (FArray *)(param_1 + 0x40)) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x48) = uVar2;
    *(undefined4 *)(this + 0x44) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x44) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x4c);
  if (pFVar1 != (FArray *)(param_1 + 0x4c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(this + 0x54) = uVar2;
    *(undefined4 *)(this + 0x50) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x50) != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x4c);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x50) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x58);
  if (pFVar1 != (FArray *)(param_1 + 0x58)) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(this + 0x60) = uVar2;
    *(undefined4 *)(this + 0x5c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x58);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x5c) * 2);
    }
  }
  thunk_FUN_10124a90(param_1 + 100);
  thunk_FUN_10118e30(param_1 + 0x70);
  return this;
}


// ==== 10101280 thunk_FUN_10134440 thunk -> 10134440

// ==== 10101285 thunk_FUN_10120630 thunk -> 10120630

// ==== 1010128a L2ThreadUtil::GetThreadStats

/* public: class L2ThreadStats * __thiscall L2ThreadUtil::GetThreadStats(int) */

L2ThreadStats * __thiscall L2ThreadUtil::GetThreadStats(L2ThreadUtil *this,int param_1)

{
                    /* 0x128a  1409  ?GetThreadStats@L2ThreadUtil@@QAEPAVL2ThreadStats@@H@Z */
  return (L2ThreadStats *)(this + param_1 * 0x54 + 0x24);
}


// ==== 1010128f FSharedMemory::GetData

/* public: void * __thiscall FSharedMemory::GetData(void) */

void * __thiscall FSharedMemory::GetData(FSharedMemory *this)

{
                    /* 0x128f  1304  ?GetData@FSharedMemory@@QAEPAXXZ */
  return *(void **)(this + 4);
}


// ==== 10101294 UFactory::StaticImportObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UObject * __cdecl UFactory::StaticImportObject(class ULevel *,class UClass
   *,class UObject *,class FName,unsigned long,unsigned short const *,class UObject *,class UFactory
   *,unsigned short const *,class FFeedbackContext *) */

UObject * __cdecl
UFactory::StaticImportObject
          (undefined4 param_1,UStruct *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,ushort *param_6,undefined4 param_7,int param_8,ushort *param_9,
          FOutputDevice *param_10)

{
  UStruct *this;
  int *piVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  UObject *pUVar5;
  ushort *puVar6;
  undefined2 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 *apuStack_64 [3];
  undefined2 *puStack_58;
  int iStack_54;
  int iStack_4c;
  int iStack_48;
  int iStack_38;
  int iStack_34;
  undefined1 *apuStack_30 [2];
  undefined2 *puStack_28;
  int iStack_24;
  int iStack_20;
  UObject *pUStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1294  1937
                       ?StaticImportObject@UFactory@@SAPAVUObject@@PAVULevel@@PAVUClass@@PAV2@VFName@@KPBG2PAV1@4PAVFFeedbackContext@@@Z
                        */
  puStack_c = &LAB_101b9ae8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff90;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar3 = &stack0xffffff90;
  if (param_2 == (UStruct *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Class",".\\UFactory.cpp",0x3c);
    puVar3 = puStack_14;
  }
  puStack_14 = puVar3;
  thunk_FUN_1012c7a0();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (param_8 == 0) {
    thunk_FUN_1012b800();
    while (puVar2 = puStack_28, (int)puStack_28 < DAT_1033088c) {
      this = *(UStruct **)(_GObjObjects + (int)puStack_28 * 4);
      iVar4 = UStruct::IsChildOf(this,(UStruct *)&PrivateStaticClass);
      if (iVar4 != 0) {
        pUVar5 = UClass::GetDefaultObject((UClass *)this);
        iVar4 = UStruct::IsChildOf(param_2,*(UStruct **)(pUVar5 + 0x34));
        if ((iVar4 != 0) && (-1 < *(int *)(pUVar5 + 0x70))) {
          apuStack_30[0] = &stack0xffffff88;
          iStack_20 = thunk_FUN_1012cc90(*(undefined4 *)(_GObjObjects + (int)puVar2 * 4),0xffffffff)
          ;
          thunk_FUN_1012cc40();
        }
      }
      thunk_FUN_1012ae60();
    }
    thunk_FUN_1012c8e0();
  }
  else {
    iVar4 = UStruct::IsChildOf(*(UStruct **)(param_8 + 0x34),param_2);
    if (iVar4 == 0) {
      appFailAssert("InFactory->SupportedClass->IsChildOf(Class)",".\\UFactory.cpp",0x43);
    }
    thunk_FUN_1012cc40();
  }
  iStack_24 = 0;
  do {
    if (iStack_48 <= iStack_24) {
      if (param_8 == 0) {
        for (iVar4 = 0; iStack_38 = iVar4, iVar4 < iStack_48; iVar4 = iVar4 + 1) {
          piVar1 = *(int **)(iStack_4c + iVar4 * 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0xc))();
          }
        }
      }
      LocalizeError((ushort *)L"NoFindImport",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(param_10,(ushort *)param_10);
      uStack_8 = uStack_8 & 0xffffff00;
      thunk_FUN_1012cb60();
      ExceptionList = pvStack_10;
      return (UObject *)0x0;
    }
    iStack_20 = iStack_24 * 4;
    pUVar5 = *(UObject **)(iStack_20 + iStack_4c);
    pUStack_1c = (UObject *)0x0;
    if (((byte)pUVar5[0x6c] & 1) == 0) {
      iVar4 = appStricmp(param_6,(ushort *)&DAT_101d0e48);
      if (iVar4 != 0) {
        if (((byte)pUVar5[0x6c] & 8) == 0) {
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(*(FOutputDevice **)(param_2 + 0x20),(EName)GLog,(ushort *)0x2f8);
          }
          thunk_FUN_10113aa0();
          uStack_8 = CONCAT31(uStack_8._1_3_,3);
          iVar4 = appLoadFileToArray((TArray<unsigned_char> *)apuStack_64,param_6,
                                     (FFileManager *)GFileManager);
          if (iVar4 != 0) {
            uStack_15 = 0;
            thunk_FUN_1012c750();
            apuStack_30[0] = apuStack_64[0];
            UObject::ParseParms(pUVar5,param_9);
            iVar4 = *(int *)pUVar5;
            ppuVar8 = apuStack_30;
            puVar6 = appFExt(param_6);
            pUStack_1c = (UObject *)
                         (**(code **)(iVar4 + 0x6c))
                                   (param_2,param_3,param_4,param_5,0,puVar6,ppuVar8);
          }
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
          thunk_FUN_10118750();
        }
        else {
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(*(FOutputDevice **)(param_2 + 0x20),(EName)GLog,(ushort *)0x2f8);
          }
          FString::FString((FString *)&puStack_58);
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          iVar4 = appLoadFileToString((FString *)&puStack_58,param_6,(FFileManager *)GFileManager);
          if (iVar4 != 0) {
            puStack_28 = puStack_58;
            if (iStack_54 == 0) {
              puStack_28 = &DAT_101cdd44;
            }
            UObject::ParseParms(pUVar5,param_9);
            iVar4 = *(int *)pUVar5;
            ppuVar7 = &puStack_28;
            puVar6 = appFExt(param_6);
            pUStack_1c = (UObject *)
                         (**(code **)(iVar4 + 0x68))
                                   (param_1,param_2,param_3,param_4,param_5,0,puVar6,ppuVar7);
          }
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
          FString::~FString((FString *)&puStack_58);
        }
        goto LAB_1012d2f0;
      }
    }
    else {
      iVar4 = appStricmp(param_6,(ushort *)&DAT_101d0df4);
      if (iVar4 == 0) {
        if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(*(FOutputDevice **)(param_2 + 0x20),(EName)GLog,(ushort *)0x2f8);
        }
        UObject::ParseParms(pUVar5,param_9);
        pUStack_1c = (UObject *)
                     (**(code **)(*(int *)pUVar5 + 0x70))(param_2,param_3,param_4,param_5);
LAB_1012d2f0:
        if (pUStack_1c != (UObject *)0x0) {
          iVar4 = UObject::IsA(pUStack_1c,(UClass *)param_2);
          if (iVar4 == 0) {
            appFailAssert("Result->IsA(Class)",".\\UFactory.cpp",0x7f);
          }
          if (param_8 == 0) {
            for (iVar4 = 0; iStack_34 = iVar4, iVar4 < iStack_48; iVar4 = iVar4 + 1) {
              piVar1 = *(int **)(iStack_4c + iVar4 * 4);
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 0xc))();
              }
            }
          }
          uStack_8 = uStack_8 & 0xffffff00;
          thunk_FUN_1012cb60();
          ExceptionList = pvStack_10;
          return pUStack_1c;
        }
      }
    }
    iStack_24 = iStack_24 + 1;
  } while( true );
}


// ==== 101012a3 ULinker::ULinker

/* protected: __thiscall ULinker::ULinker(void) */

ULinker * __thiscall ULinker::ULinker(ULinker *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x12a3  233  ??0ULinker@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8950;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FPackageFileSummary::FPackageFileSummary((FPackageFileSummary *)(this + 0x38));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101012a8 ULinkerLoad::operator<<

/* private: virtual class FArchive & __thiscall ULinkerLoad::operator<<(class FName &) */

FArchive * __thiscall ULinkerLoad::operator<<(ULinkerLoad *this,FName *param_1)

{
  FArchive *pFVar1;
  int iVar2;
  int iVar3;
  FCompactIndex *pFVar4;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12a8  558  ??6ULinkerLoad@@EAEAAVFArchive@@AAVFName@@@Z */
  puStack_c = &LAB_101b6c20;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  pFVar4 = (FCompactIndex *)&iStack_18;
  ExceptionList = &pvStack_10;
  pFVar1 = GetReader(this + -0xc0);
  ::operator<<(pFVar1,pFVar4);
  iVar3 = iStack_18;
  iVar2 = FArray::IsValidIndex((FArray *)(this + -0x48),iStack_18);
  if (iVar2 == 0) {
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
    iVar3 = iStack_18;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + -0x48) + iVar3 * 4);
  ExceptionList = pvStack_10;
  return (FArchive *)(-(uint)(this != (ULinkerLoad *)0xc0) & (uint)this);
}


// ==== 101012ad FVehicleRoutePointHit::operator!=

/* public: int __thiscall FVehicleRoutePointHit::operator!=(class FVehicleRoutePointHit const
   &)const  */

int __thiscall
FVehicleRoutePointHit::operator!=(FVehicleRoutePointHit *this,FVehicleRoutePointHit *param_1)

{
                    /* 0x12ad  592  ??9FVehicleRoutePointHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}


// ==== 101012b2 thunk_FUN_10109390 thunk -> 10109390

// ==== 101012b7 FRangeVector::IsNearlyZero

/* public: int __thiscall FRangeVector::IsNearlyZero(void)const  */

int __thiscall FRangeVector::IsNearlyZero(FRangeVector *this)

{
  int iVar1;
  
                    /* 0x12b7  1519  ?IsNearlyZero@FRangeVector@@QBEHXZ */
  iVar1 = FRange::IsNearlyZero((FRange *)this);
  if (iVar1 != 0) {
    iVar1 = FRange::IsNearlyZero((FRange *)(this + 8));
    if (iVar1 != 0) {
      iVar1 = FRange::IsNearlyZero((FRange *)(this + 0x10));
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 101012bc thunk_FUN_10120730 thunk -> 10120730

// ==== 101012c1 FName::operator*

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned short const * __thiscall FName::operator*(void)const  */

ushort * __thiscall FName::operator*(FName *this)

{
                    /* 0x12c1  604  ??DFName@@QBEPBGXZ */
  return (ushort *)(*(int *)(_Names + *(int *)this * 4) + 0xc);
}


// ==== 101012cb FMemMark::FMemMark

/* public: __thiscall FMemMark::FMemMark(class FMemStack &) */

FMemMark * __thiscall FMemMark::FMemMark(FMemMark *this,FMemStack *param_1)

{
  FMemStackFrame *pFVar1;
  
                    /* 0x12cb  75  ??0FMemMark@@QAE@AAVFMemStack@@@Z */
  pFVar1 = FMemStack::GetThreadSafeMemStack(param_1);
  *(FMemStackFrame **)(this + 4) = pFVar1;
  *(undefined4 *)this = *(undefined4 *)pFVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(pFVar1 + 0xc);
  return this;
}


// ==== 101012d0 UStruct::Destroy

/* public: virtual void __thiscall UStruct::Destroy(void) */

void __thiscall UStruct::Destroy(UStruct *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12d0  922  ?Destroy@UStruct@@UAEXXZ */
  puStack_c = &LAB_101b9ef0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10113f60(0);
  UObject::Destroy((UObject *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101012d5 FString::Substitute

/* public: class FString __thiscall FString::Substitute(class FString,class FString) */

FString * __thiscall
FString::Substitute(FString *this,FString *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FString *pFVar2;
  FString aFStack_2c [20];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x12d5  1953  ?Substitute@FString@@QAE?AV1@V1@0@Z */
  puStack_c = &LAB_101b8549;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_18 = 0;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  ExceptionList = &pvStack_10;
  FString(param_2,this);
  uStack_18 = 1;
  iVar1 = InStr(this,(FString *)&param_3,0);
  if (iVar1 != -1) {
    pFVar2 = (FString *)Left(this,(int)aFStack_2c);
    iStack_8._0_1_ = 4;
    operator=(param_2,pFVar2);
    iStack_8._0_1_ = 3;
    ~FString(aFStack_2c);
    operator+=(param_2,(FString *)&stack0x00000014);
    pFVar2 = (FString *)Right(this,(int)aFStack_2c);
    iStack_8._0_1_ = 5;
    operator+=(param_2,pFVar2);
    iStack_8._0_1_ = 3;
    ~FString(aFStack_2c);
  }
  iStack_8._0_1_ = 1;
  ~FString((FString *)&param_3);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  ~FString((FString *)&stack0x00000014);
  ExceptionList = pvStack_10;
  return param_2;
}


// ==== 101012da thunk_FUN_1011ece0 thunk -> 1011ece0

// ==== 101012df FRotator::operator+=

/* public: class FRotator __thiscall FRotator::operator+=(class FRotator const &) */

void __thiscall FRotator::operator+=(FRotator *this,FRotator *param_1)

{
  undefined4 uVar1;
  int *in_stack_00000008;
  
                    /* 0x12df  683  ??YFRotator@@QAE?AV0@ABV0@@Z */
  *(int *)this = *(int *)this + *in_stack_00000008;
  *(int *)(this + 4) = *(int *)(this + 4) + in_stack_00000008[1];
  *(int *)(this + 8) = *(int *)(this + 8) + in_stack_00000008[2];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 101012e4 UExporter::operator_new

/* public: static void * __cdecl UExporter::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UExporter::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x12e4  371  ??2UExporter@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101012e9 UNameProperty::ExportCppItem

/* public: virtual void __thiscall UNameProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall UNameProperty::ExportCppItem(UNameProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12e9  969  ?ExportCppItem@UNameProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bdeb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"FName");
  ExceptionList = pvStack_10;
  return;
}


// ==== 101012ee UProperty::Serialize

/* public: virtual void __thiscall UProperty::Serialize(class FArchive &) */

void __thiscall UProperty::Serialize(UProperty *this,FArchive *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12ee  1822  ?Serialize@UProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bdfb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UField::Serialize((UField *)this,param_1);
  uVar1 = thunk_FUN_10130820(param_1,this + 0x40,this + 0x48);
  piVar2 = (int *)thunk_FUN_10108c50(uVar1);
  (**(code **)(*piVar2 + 0x1c))(this + 0x4c);
  if (((byte)this[0x48] & 0x20) != 0) {
    thunk_FUN_10130800(param_1,this + 0x50);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101012f3 TArray<unsigned_short>::FindItemIndex

/* public: int __thiscall TArray<unsigned short>::FindItemIndex(unsigned short const &)const  */

int __thiscall TArray<unsigned_short>::FindItemIndex(TArray<unsigned_short> *this,ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  
                    /* 0x12f3  1010  ?FindItemIndex@?$TArray@G@@QBEHABG@Z */
  iVar1 = 0;
  if (0 < *(int *)(this + 4)) {
    puVar2 = *(ushort **)this;
    do {
      if (*puVar2 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return -1;
}


// ==== 101012f8 UObject::FindState

/* public: class UState * __thiscall UObject::FindState(class FName) */

UState * __thiscall UObject::FindState(UObject *this,uint param_2)

{
  UState *pUVar1;
  
                    /* 0x12f8  1013  ?FindState@UObject@@QAEPAVUState@@VFName@@@Z */
  pUVar1 = *(UState **)(*(int *)(this + 0x24) + 0xa4 + (param_2 & 0xff) * 4);
  if (pUVar1 != (UState *)0x0) {
    while (*(uint *)(pUVar1 + 0x20) != param_2) {
      pUVar1 = *(UState **)(pUVar1 + 0x3c);
      if (pUVar1 == (UState *)0x0) {
        return (UState *)0x0;
      }
    }
    if ((*(uint *)(*(int *)(pUVar1 + 0x24) + 0x4a4) & 0x40000) != 0) {
      return pUVar1;
    }
  }
  return (UState *)0x0;
}


// ==== 101012fd FMemCache::MergeWithNext

/* private: class FMemCache::FCacheItem * __thiscall FMemCache::MergeWithNext(class
   FMemCache::FCacheItem *) */

FCacheItem * __thiscall FMemCache::MergeWithNext(FMemCache *this,FCacheItem *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x12fd  1617  ?MergeWithNext@FMemCache@@AAEPAVFCacheItem@1@PAV21@@Z */
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar2;
  *(FCacheItem **)(iVar2 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(this + 0x20);
  *(int *)(this + 0x20) = iVar1;
  return param_1;
}


// ==== 10101307 FVector::Booleanize

/* public: int __thiscall FVector::Booleanize(void) */

int __thiscall FVector::Booleanize(FVector *this)

{
  float fVar1;
  
                    /* 0x1307  824  ?Booleanize@FVector@@QAEHXZ */
  if (*(float *)this <= 0.0) {
    if (*(float *)this < 0.0) {
      return 0;
    }
    if (*(float *)(this + 4) <= 0.0) {
      if (*(float *)(this + 4) < 0.0) {
        return 0;
      }
      fVar1 = *(float *)(this + 8);
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        return 0;
      }
    }
  }
  return 1;
}


// ==== 10101311 L2ParamStack::PushBack

/* public: int __thiscall L2ParamStack::PushBack(void *) */

int __thiscall L2ParamStack::PushBack(L2ParamStack *this,void *param_1)

{
                    /* 0x1311  1739  ?PushBack@L2ParamStack@@QAEHPAX@Z */
  if (*(int *)(this + 8) < *(int *)(this + 0xc)) {
    *(void **)(*(int *)this + *(int *)(this + 8) * 4) = param_1;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    return *(int *)(this + 8);
  }
  return -1;
}


// ==== 10101316 FStringNoInit::operator=

/* public: struct FStringNoInit & __thiscall FStringNoInit::operator=(struct FStringNoInit const &)
    */

FStringNoInit * __thiscall FStringNoInit::operator=(FStringNoInit *this,FStringNoInit *param_1)

{
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x1316  495  ??4FStringNoInit@@QAEAAU0@ABU0@@Z */
  if (this != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = uVar1;
    *(undefined4 *)(this + 4) = uVar1;
    FArray::Realloc((FArray *)this,2);
    if (*(int *)(this + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)this,_Src,*(int *)(this + 4) * 2);
    }
  }
  return this;
}


// ==== 1010131b UObject::SetClass

/* public: void __thiscall UObject::SetClass(class UClass *) */

void __thiscall UObject::SetClass(UObject *this,UClass *param_1)

{
                    /* 0x131b  1853  ?SetClass@UObject@@QAEXPAVUClass@@@Z */
  *(UClass **)(this + 0x24) = param_1;
  return;
}


// ==== 10101320 thunk_FUN_101632f0 thunk -> 101632f0

// ==== 10101325 UObject::execGreater_IntInt

/* public: void __thiscall UObject::execGreater_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execGreater_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x1325  2245  ?execGreater_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 0;
  return;
}


// ==== 1010132a UObject::execNotEqual_BoolBool

/* public: void __thiscall UObject::execNotEqual_BoolBool(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_BoolBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x132a  2328  ?execNotEqual_BoolBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 0;
  return;
}


// ==== 1010132f appStristr

/* unsigned short * __cdecl appStristr(unsigned short const *,unsigned short const *) */

ushort * __cdecl appStristr(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
                    /* 0x132f  2111  ?appStristr@@YAPAGPBG0@Z */
  uVar4 = *param_1;
  if (uVar4 != 0) {
    iVar3 = (int)param_1 - (int)param_2;
    puVar1 = param_2;
joined_r0x1012dbb5:
    do {
      if (uVar4 != 0) {
        uVar4 = *puVar1;
        if (uVar4 == 0) {
          return param_1;
        }
        uVar2 = *(ushort *)(iVar3 + (int)puVar1);
        if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
          uVar2 = uVar2 + 0x20;
        }
        if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
          uVar4 = uVar4 + 0x20;
        }
        if (uVar2 == uVar4) {
          uVar4 = *(ushort *)(iVar3 + (int)(puVar1 + 1));
          puVar1 = puVar1 + 1;
          goto joined_r0x1012dbb5;
        }
      }
      if (*puVar1 == 0) {
        return param_1;
      }
      uVar4 = param_1[1];
      param_1 = param_1 + 1;
      iVar3 = iVar3 + 2;
      puVar1 = param_2;
    } while (uVar4 != 0);
  }
  return (ushort *)0x0;
}


// ==== 1010133e L2ParamStack::Clear

/* public: void __thiscall L2ParamStack::Clear(void) */

void __thiscall L2ParamStack::Clear(L2ParamStack *this)

{
                    /* 0x133e  845  ?Clear@L2ParamStack@@QAEXXZ */
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 10101343 UObject::execEqualEqual_NameName

/* public: void __thiscall UObject::execEqualEqual_NameName(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_NameName(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x1343  2209  ?execEqualEqual_NameName@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 1;
  return;
}


// ==== 10101348 thunk_FUN_101088e0 thunk -> 101088e0

// ==== 1010134d thunk_FUN_10130a50 thunk -> 10130a50

// ==== 10101352 thunk_FUN_10121100 thunk -> 10121100

// ==== 1010135c FFrame::FFrame

/* public: __thiscall FFrame::FFrame(struct FFrame const &) */

void __thiscall FFrame::FFrame(FFrame *this,FFrame *param_1)

{
                    /* 0x135c  56  ??0FFrame@@QAE@ABU0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 10101361 FEdLoadError::FEdLoadError

/* public: __thiscall FEdLoadError::FEdLoadError(void) */

void __thiscall FEdLoadError::FEdLoadError(FEdLoadError *this)

{
                    /* 0x1361  42  ??0FEdLoadError@@QAE@XZ */
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


// ==== 10101366 TArray<unsigned_short>::AddZeroed

/* public: int __thiscall TArray<unsigned short>::AddZeroed(int) */

int __thiscall TArray<unsigned_short>::AddZeroed(TArray<unsigned_short> *this,int param_1)

{
  int iVar1;
  
                    /* 0x1366  796  ?AddZeroed@?$TArray@G@@QAEHH@Z */
  iVar1 = FArray::AddZeroed((FArray *)this,2,param_1);
  return iVar1;
}


// ==== 1010136b FRangeVector::operator=

/* public: class FRangeVector & __thiscall FRangeVector::operator=(class FRangeVector const &) */

FRangeVector * __thiscall FRangeVector::operator=(FRangeVector *this,FRangeVector *param_1)

{
                    /* 0x136b  484  ??4FRangeVector@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}


// ==== 10101370 thunk_FUN_10168a40 thunk -> 10168a40

// ==== 10101375 UObject::execIntToBool

/* public: void __thiscall UObject::execIntToBool(struct FFrame &,void * const) */

void __thiscall UObject::execIntToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1375  2268  ?execIntToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (uint)(param_1 != (FFrame *)0x0);
  return;
}


// ==== 1010137a UObject::execIntToByte

/* public: void __thiscall UObject::execIntToByte(struct FFrame &,void * const) */

void __thiscall UObject::execIntToByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined1 *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x137a  2269  ?execIntToByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (char)param_1;
  return;
}


// ==== 1010137f UObject::execNativeParm

/* public: void __thiscall UObject::execNativeParm(struct FFrame &,void * const) */

void __thiscall UObject::execNativeParm(UObject *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  
                    /* 0x137f  2323  ?execNativeParm@UObject@@QAEXAAUFFrame@@QAX@Z */
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  if (param_2 != (void *)0x0) {
    GPropAddr = (uchar *)(piVar1[0x15] + *(int *)(param_1 + 0x10));
    GPropObject = (UObject *)0x0;
    (**(code **)(*piVar1 + 0xa8))(param_2,piVar1[0x15] + *(int *)(param_1 + 0x10),0);
  }
  return;
}


// ==== 10101384 UStrProperty::ExportCppItem

/* public: virtual void __thiscall UStrProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall UStrProperty::ExportCppItem(UStrProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1384  971  ?ExportCppItem@UStrProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bdec0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"FString");
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101389 ULinkerLoad::operator<<

/* private: virtual class FArchive & __thiscall ULinkerLoad::operator<<(class UObject * &) */

FArchive * __thiscall ULinkerLoad::operator<<(ULinkerLoad *this,UObject **param_1)

{
  FArchive *pFVar1;
  UObject *pUVar2;
  FCompactIndex *pFVar3;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1389  557  ??6ULinkerLoad@@EAEAAVFArchive@@AAPAVUObject@@@Z */
  puStack_c = &LAB_101b6a50;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  pFVar3 = (FCompactIndex *)&iStack_18;
  ExceptionList = &pvStack_10;
  pFVar1 = GetReader(this + -0xc0);
  ::operator<<(pFVar1,pFVar3);
  pUVar2 = IndexToObject(this + -0xc0,iStack_18);
  *param_1 = pUVar2;
  ExceptionList = pvStack_10;
  return (FArchive *)(-(uint)(this != (ULinkerLoad *)0xc0) & (uint)this);
}


// ==== 1010138e thunk_FUN_10109750 thunk -> 10109750

// ==== 10101393 L2ParamStack::GetBufferSize

/* public: int __thiscall L2ParamStack::GetBufferSize(void) */

int __thiscall L2ParamStack::GetBufferSize(L2ParamStack *this)

{
                    /* 0x1393  1282  ?GetBufferSize@L2ParamStack@@QAEHXZ */
  return *(int *)(this + 8) - *(int *)(this + 4);
}


// ==== 10101398 UObject::HashObject

/* protected: void __thiscall UObject::HashObject(void) */

void __thiscall UObject::HashObject(UObject *this)

{
                    /* 0x1398  1427  ?HashObject@UObject@@IAEXXZ */
  *(UObject ***)(this + 8) = (&GObjHash)[*(uint *)(this + 0x20) & 0xfff];
  (&GObjHash)[*(uint *)(this + 0x20) & 0xfff] = (UObject **)this;
  return;
}


// ==== 1010139d thunk_FUN_1011a810 thunk -> 1011a810

// ==== 101013a2 FFeedbackContext::MapCheck_Add

/* public: virtual void __thiscall FFeedbackContext::MapCheck_Add(int,void *,unsigned short const *)
    */

void __thiscall
FFeedbackContext::MapCheck_Add(FFeedbackContext *this,int param_1,void *param_2,ushort *param_3)

{
                    /* 0x13a2  1602  ?MapCheck_Add@FFeedbackContext@@UAEXHPAXPBG@Z */
  return;
}


// ==== 101013a7 FArchive::MapName

/* public: virtual int __thiscall FArchive::MapName(class FName *) */

int __thiscall FArchive::MapName(FArchive *this,FName *param_1)

{
                    /* 0x13a7  1607  ?MapName@FArchive@@UAEHPAVFName@@@Z */
  return 0;
}


// ==== 101013ac UObject::execGotoLabel

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::execGotoLabel(struct FFrame &,void * const) */

void __thiscall UObject::execGotoLabel(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 unaff_EDI;
  
                    /* 0x13ac  2236  ?execGotoLabel@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  iVar2 = (**(code **)(*(int *)this + 0x38))(unaff_EDI);
  if (iVar2 == 0) {
    FOutputDevice::Logf(_Names,(ushort *)param_1);
  }
  return;
}


// ==== 101013b1 FCodec::Encode

/* public: virtual int __thiscall FCodec::Encode(class FArchive &,class FArchive &) */

int __thiscall FCodec::Encode(FCodec *this,FArchive *param_1,FArchive *param_2)

{
                    /* 0x13b1  946  ?Encode@FCodec@@UAEHAAVFArchive@@0@Z */
  return 0;
}


// ==== 101013b6 FEdLoadError::FEdLoadError

/* public: __thiscall FEdLoadError::FEdLoadError(class FEdLoadError const &) */

FEdLoadError * __thiscall FEdLoadError::FEdLoadError(FEdLoadError *this,FEdLoadError *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x13b6  40  ??0FEdLoadError@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b819b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  FString::FString((FString *)(this + 4),(FString *)(param_1 + 4));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101013bb thunk_FUN_101093a0 thunk -> 101093a0

// ==== 101013c0 thunk_FUN_1012b680 thunk -> 1012b680

// ==== 101013c5 thunk_FUN_101688f0 thunk -> 101688f0

// ==== 101013ca ULinkerLoad::Seek

/* private: virtual void __thiscall ULinkerLoad::Seek(int) */

void __thiscall ULinkerLoad::Seek(ULinkerLoad *this,int param_1)

{
  FArchive *pFVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13ca  1791  ?Seek@ULinkerLoad@@EAEXH@Z */
  puStack_c = &LAB_101bb6e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = GetReader(this + -0xc0);
  (**(code **)(*(int *)pFVar1 + 0x3c))(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101013cf thunk_FUN_10126370 thunk -> 10126370

// ==== 101013d4 FString::FString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: __thiscall FString::FString(char const *) */

FString * __thiscall FString::FString(FString *this,char *param_1)

{
  char cVar1;
  void *_Dst;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  ushort *_Src;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13d4  151  ??0FString@@QAE@PBD@Z */
  pcVar3 = param_1;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101b6f98;
  pvStack_10 = ExceptionList;
  if (*param_1 == '\0') {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
  }
  ExceptionList = &pvStack_10;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)this,(int)pcVar4);
  uStack_8 = 0;
  if (*(int *)(this + 4) != 0) {
    uVar5 = winGetSizeUNICODE(param_1);
    if ((uVar5 & 0x7fffffff) == 0) {
      param_1 = (char *)0x0;
    }
    else {
      winGetSizeUNICODE(param_1);
      param_1 = &stack0xffffffdc;
    }
    _Dst = *(void **)this;
    iVar2 = *(int *)(this + 4);
    iVar6 = winGetSizeUNICODE(pcVar3);
    _Src = winToUNICODE((ushort *)param_1,pcVar3,iVar6);
    _memcpy(_Dst,_Src,iVar2 * 2);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101013d9 FString::FString

/* public: __thiscall FString::FString(unsigned short const *) */

FString * __thiscall FString::FString(FString *this,ushort *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x13d9  152  ??0FString@@QAE@PBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6f78;
  pvStack_c = ExceptionList;
  if (*param_1 == 0) {
    iVar1 = 0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    iVar1 = appStrlen(param_1);
    iVar1 = iVar1 + 1;
  }
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)this,iVar1);
  uStack_4 = 0;
  if (*(int *)(this + 4) != 0) {
    _memcpy(*(void **)this,param_1,*(int *)(this + 4) * 2);
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101013de FScale::Orientation

/* public: float __thiscall FScale::Orientation(void) */

float __thiscall FScale::Orientation(FScale *this)

{
  float fVar1;
  int iStack_4;
  
                    /* 0x13de  1651  ?Orientation@FScale@@QAEMXZ */
  fVar1 = *(float *)(this + 4) * *(float *)this * *(float *)(this + 8);
  if (0.0 < fVar1) {
    return 1.0;
  }
  iStack_4 = -1;
  if (0.0 <= fVar1) {
    iStack_4 = 0;
  }
  return (float)iStack_4;
}


// ==== 101013e3 FCoords::operator*=

/* public: class FCoords & __thiscall FCoords::operator*=(class FRotator const &) */

FCoords * __thiscall FCoords::operator*=(FCoords *this,FRotator *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x13e3  660  ??XFCoords@@QAEAAV0@ABVFRotator@@@Z */
  uVar2 = *(int *)(param_1 + 4) >> 2 & 0x3fff;
  fStack_18 = -*(float *)(&DAT_1023ffd4 + uVar2 * 4);
  uVar1 = *(int *)(param_1 + 4) + 0x4000 >> 2 & 0x3fff;
  uStack_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_24 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_20 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_1c = 0;
  fStack_10 = 0.0;
  fStack_c = 0.0;
  uStack_4 = 0x3f800000;
  uStack_8 = 0;
  operator*=(this,(FCoords *)&uStack_30);
  uVar1 = *(int *)param_1 >> 2 & 0x3fff;
  fStack_c = -*(float *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_4 = *(undefined4 *)(&DAT_1023ffd4 + (*(int *)param_1 + 0x4000 >> 2 & 0x3fffU) * 4);
  uStack_24 = *(undefined4 *)(&DAT_1023ffd4 + (*(int *)param_1 + 0x4000 >> 2 & 0x3fffU) * 4);
  uStack_1c = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  fStack_18 = 0.0;
  uStack_20 = 0;
  fStack_10 = 0.0;
  uStack_14 = 0x3f800000;
  uStack_8 = 0;
  operator*=(this,(FCoords *)&uStack_30);
  uVar1 = *(int *)(param_1 + 8) >> 2 & 0x3fff;
  uStack_8 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uVar2 = *(int *)(param_1 + 8) + 0x4000 >> 2 & 0x3fff;
  uStack_4 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  uStack_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  fStack_10 = -*(float *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0;
  uStack_1c = 0;
  fStack_18 = 0.0;
  fStack_c = 0.0;
  operator*=(this,(FCoords *)&uStack_30);
  return this;
}


// ==== 101013e8 thunk_FUN_101373b0 thunk -> 101373b0

// ==== 101013ed thunk_FUN_10125df0 thunk -> 10125df0

// ==== 101013f2 FMoverHit::operator=

/* public: class FMoverHit & __thiscall FMoverHit::operator=(class FMoverHit const &) */

FMoverHit * __thiscall FMoverHit::operator=(FMoverHit *this,FMoverHit *param_1)

{
                    /* 0x13f2  467  ??4FMoverHit@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 101013f7 UPackage::~UPackage

/* public: virtual __thiscall UPackage::~UPackage(void) */

void __thiscall UPackage::~UPackage(UPackage *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x13f7  341  ??1UPackage@@UAE@XZ */
  puStack_8 = &LAB_101b67b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101013fc FMatrix::operator!=

/* public: int __thiscall FMatrix::operator!=(class FMatrix &)const  */

int __thiscall FMatrix::operator!=(FMatrix *this,FMatrix *param_1)

{
  int iVar1;
  
                    /* 0x13fc  578  ??9FMatrix@@QBEHAAV0@@Z */
  iVar1 = operator==(this,param_1);
  return (uint)(iVar1 == 0);
}


// ==== 10101401 appStrupr

/* unsigned short * __cdecl appStrupr(unsigned short *) */

ushort * __cdecl appStrupr(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  
                    /* 0x1401  2120  ?appStrupr@@YAPAGPAG@Z */
  if (DAT_1033e2bc == 0) {
    puVar2 = param_1;
    if (param_1 == (ushort *)0x0) {
      puVar3 = (undefined4 *)FUN_10183cab();
      *puVar3 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      return (ushort *)0x0;
    }
    if (*param_1 != 0) {
      do {
        uVar1 = *param_1;
        if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
          *param_1 = uVar1 - 0x20;
        }
        param_1 = param_1 + 1;
      } while (*param_1 != 0);
      return puVar2;
    }
  }
  else {
    FID_conflict___wcslwr_s_l((wchar_t *)param_1,0xffffffff,(_locale_t)0x0);
  }
  return param_1;
}


// ==== 10101406 FGlobalMath::Sqrt

/* public: float __thiscall FGlobalMath::Sqrt(int) */

float __thiscall FGlobalMath::Sqrt(FGlobalMath *this,int param_1)

{
                    /* 0x1406  1886  ?Sqrt@FGlobalMath@@QAEMH@Z */
  return *(float *)(this + param_1 * 4 + 0x1008c);
}


// ==== 1010140b UDelegateProperty::~UDelegateProperty

/* public: virtual __thiscall UDelegateProperty::~UDelegateProperty(void) */

void __thiscall UDelegateProperty::~UDelegateProperty(UDelegateProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x140b  324  ??1UDelegateProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101410 UClass::StaticClass

/* public: static class UClass * __cdecl UClass::StaticClass(void) */

UClass * __cdecl UClass::StaticClass(void)

{
                    /* 0x1410  1891  ?StaticClass@UClass@@SAPAV1@XZ */
  return &PrivateStaticClass;
}


// ==== 10101415 UState::MergeBools

/* public: virtual int __thiscall UState::MergeBools(void) */

int __thiscall UState::MergeBools(UState *this)

{
                    /* 0x1415  1616  ?MergeBools@UState@@UAEHXZ */
  return 1;
}


// ==== 1010141a Localize

/* unsigned short const * __cdecl Localize(char const *,char const *,unsigned short const *,unsigned
   short const *,int) */

ushort * __cdecl Localize(char *param_1,char *param_2,ushort *param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  
                    /* 0x141a  1578  ?Localize@@YAPBGPBD0PBG1H@Z */
  puVar1 = appFromAnsi(param_2,(ushort *)0x0);
  puVar2 = appFromAnsi(param_1,(ushort *)0x0);
  puVar1 = Localize(puVar2,puVar1,param_3,param_4,param_5);
  return puVar1;
}


// ==== 1010141f UIntProperty::InternalConstructor

/* public: static void __cdecl UIntProperty::InternalConstructor(void *) */

void __cdecl UIntProperty::InternalConstructor(void *param_1)

{
                    /* 0x141f  1487  ?InternalConstructor@UIntProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UIntProperty(param_1);
    return;
  }
  return;
}


// ==== 10101424 thunk_FUN_1010f510 thunk -> 1010f510

// ==== 10101429 UObject::execBoolToString

/* public: void __thiscall UObject::execBoolToString(struct FFrame &,void * const) */

void __thiscall UObject::execBoolToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_EDI;
  wchar_t *_Src;
  FArray *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1429  2161  ?execBoolToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  _Src = GTrue;
  if (unaff_EDI == 0) {
    _Src = GFalse;
  }
  if (*(wchar_t **)unaff_retaddr != _Src) {
    if (*_Src == L'\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen((ushort *)_Src);
      iVar2 = iVar2 + 1;
    }
    *(int *)(unaff_retaddr + 8) = iVar2;
    *(int *)(unaff_retaddr + 4) = iVar2;
    FArray::Realloc(unaff_retaddr,2);
    if (*(int *)(unaff_retaddr + 4) != 0) {
      _memcpy(*(void **)unaff_retaddr,_Src,*(int *)(unaff_retaddr + 4) * 2);
    }
  }
  return;
}


// ==== 1010142e FPlane::TransformPlaneByOrtho

/* public: class FPlane __thiscall FPlane::TransformPlaneByOrtho(class FMatrix const &)const  */

void __thiscall FPlane::TransformPlaneByOrtho(FPlane *this,FMatrix *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *in_stack_00000008;
  
                    /* 0x142e  1978  ?TransformPlaneByOrtho@FPlane@@QBE?AV1@ABVFMatrix@@@Z */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar14 = fVar3 * in_stack_00000008[8] + fVar2 * in_stack_00000008[4] + fVar1 * *in_stack_00000008
           + in_stack_00000008[0xc] * 0.0;
  fVar16 = in_stack_00000008[0xd] * 0.0 +
           in_stack_00000008[9] * fVar3 +
           fVar1 * in_stack_00000008[1] + in_stack_00000008[5] * fVar2;
  fVar15 = in_stack_00000008[0xe] * 0.0 +
           fVar3 * in_stack_00000008[10] +
           in_stack_00000008[6] * fVar2 + in_stack_00000008[2] * fVar1;
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[4];
  fVar3 = in_stack_00000008[8];
  fVar4 = in_stack_00000008[0xc];
  fVar5 = in_stack_00000008[5];
  fVar6 = in_stack_00000008[1];
  fVar7 = in_stack_00000008[9];
  fVar8 = in_stack_00000008[0xd];
  fVar9 = in_stack_00000008[6];
  fVar10 = in_stack_00000008[2];
  fVar11 = in_stack_00000008[10];
  fVar12 = in_stack_00000008[0xe];
  fVar13 = *(float *)(this + 0xc);
  *(float *)param_1 = fVar14;
  *(float *)(param_1 + 4) = fVar16;
  *(float *)(param_1 + 8) = fVar15;
  *(float *)(param_1 + 0xc) =
       fVar13 - ((fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12) * fVar15 +
                (fVar3 * 0.0 + fVar2 * 0.0 + fVar1 * 0.0 + fVar4) * fVar14 +
                (fVar7 * 0.0 + fVar6 * 0.0 + fVar5 * 0.0 + fVar8) * fVar16);
  return;
}


// ==== 10101433 thunk_FUN_10165e00 thunk -> 10165e00

// ==== 10101438 FBox::FBox

/* public: __thiscall FBox::FBox(class FVector const *,int) */

FBox * __thiscall FBox::FBox(FBox *this,FVector *param_1,int param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1438  23  ??0FBox@@QAE@PBVFVector@@H@Z */
  puStack_c = &LAB_101bbdb0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (FBox)0x0;
  uStack_8 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    operator+=(this,param_1 + iVar1 * 0xc);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 1010143d thunk_FUN_10133340 thunk -> 10133340

// ==== 10101442 UObject::GetOuter

/* public: class UObject * __thiscall UObject::GetOuter(void)const  */

UObject * __thiscall UObject::GetOuter(UObject *this)

{
                    /* 0x1442  1373  ?GetOuter@UObject@@QBEPAV1@XZ */
  return *(UObject **)(this + 0x18);
}


// ==== 10101447 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,class FString &) */

FArchive * __cdecl operator<<(FArchive *param_1,FString *param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined2 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1447  554  ??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */
  puStack_c = &LAB_101bc1e0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  iVar4 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  TArray<unsigned_short>::CountBytes((TArray<unsigned_short> *)param_2,param_1);
  puVar2 = FString::operator*(param_2);
  iVar3 = appIsPureAnsi(puVar2);
  iStack_1c = *(int *)(param_2 + 4);
  if (iVar3 == 0) {
    iStack_1c = -iStack_1c;
  }
  operator<<(param_1,(FCompactIndex *)&iStack_1c);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (iStack_1c < 0) {
      for (; iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        uStack_2c = (uint)*(ushort *)(*(int *)param_2 + iVar4 * 2);
        thunk_FUN_10130800(param_1,&uStack_2c);
      }
    }
    else {
      for (; iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        iStack_28 = iVar4;
        uVar1 = thunk_FUN_1014f8d0(*(undefined2 *)(*(int *)param_2 + iVar4 * 2));
        uStack_18 = CONCAT11(uVar1,(undefined1)uStack_18);
        thunk_FUN_101307e0(param_1,(int)&uStack_18 + 1);
      }
    }
  }
  else {
    iVar3 = iStack_1c;
    if (iStack_1c < 0) {
      iVar3 = -iStack_1c;
    }
    *(int *)(param_2 + 4) = iVar3;
    *(int *)(param_2 + 8) = iVar3;
    FArray::Realloc((FArray *)param_2,2);
    if (iStack_1c < 0) {
      for (; iStack_24 = iVar4, iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        thunk_FUN_10130800(param_1,&uStack_18);
        *(ushort *)(*(int *)param_2 + iVar4 * 2) = uStack_18;
      }
    }
    else {
      for (; iStack_20 = iVar4, iVar4 < *(int *)(param_2 + 4); iVar4 = iVar4 + 1) {
        thunk_FUN_101307e0(param_1,(int)&uStack_18 + 1);
        *(ushort *)(*(int *)param_2 + iVar4 * 2) = uStack_18 >> 8;
      }
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 4) == 1)) {
      FString::Empty(param_2);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1010144c UObject::execStringToInt

/* public: void __thiscall UObject::execStringToInt(struct FFrame &,void * const) */

void __thiscall UObject::execStringToInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  ushort *unaff_EDI;
  int *unaff_retaddr;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x144c  2375  ?execStringToInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb400;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  if (unaff_ESI == 0) {
    unaff_EDI = &DAT_101cdd44;
  }
  iVar2 = appAtoi(unaff_EDI);
  *unaff_retaddr = iVar2;
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10101451 UObject::execSubtractEqual_ByteByte

/* public: void __thiscall UObject::execSubtractEqual_ByteByte(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractEqual_ByteByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *unaff_ESI;
  char unaff_DI;
  uchar *puVar2;
  undefined4 uStack_4;
  
                    /* 0x1451  2381  ?execSubtractEqual_ByteByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)this & 0xffffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,(int)&uStack_4 + 3);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar2 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar2 = &stack0xfffffff7;
  }
  uStack_4 = uStack_4 & 0xffffff00;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *puVar2 = *puVar2 - unaff_DI;
  *unaff_ESI = *puVar2;
  return;
}


// ==== 10101456 UObject::StaticShutdownAfterError

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::StaticShutdownAfterError(void) */

void __cdecl UObject::StaticShutdownAfterError(void)

{
  int iVar1;
  FOutputDevice *in_ECX;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1456  1945  ?StaticShutdownAfterError@UObject@@SAXXZ */
  puStack_c = &LAB_101bca70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((GObjInitialized != 0) && (DAT_10336d7c == 0)) {
    DAT_10336d7c = 1;
    ExceptionList = &pvStack_10;
    if (GLog != (undefined *)0x0) {
      ExceptionList = &pvStack_10;
      FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2fb);
    }
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    iVar1 = _GObjObjects;
    for (iVar2 = 0; iVar2 < DAT_1033088c; iVar2 = iVar2 + 1) {
      if (*(int *)(iVar1 + iVar2 * 4) != 0) {
        ConditionalShutdownAfterError(*(UObject **)(iVar1 + iVar2 * 4));
        iVar1 = _GObjObjects;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010145b UObject::execEqualEqual_VectorVector

/* public: void __thiscall UObject::execEqualEqual_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_18;
  float afStack_14 [3];
  undefined4 *puStack_8;
  
                    /* 0x145b  2213  ?execEqualEqual_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((unaff_ESI == (float)afStack_14) && (fStack_18 == (float)param_1)) &&
     (afStack_14[0] == (float)&fStack_18)) {
    *puStack_8 = 1;
    return;
  }
  *puStack_8 = 0;
  return;
}


// ==== 10101460 UObject::execLess_IntInt

/* public: void __thiscall UObject::execLess_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execLess_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x1460  2291  ?execLess_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 0;
  return;
}


// ==== 10101465 FOutputDeviceError::FOutputDeviceError

/* public: __thiscall FOutputDeviceError::FOutputDeviceError(void) */

void __thiscall FOutputDeviceError::FOutputDeviceError(FOutputDeviceError *this)

{
                    /* 0x1465  99  ??0FOutputDeviceError@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1010146a UState::GetInheritanceSuper

/* public: virtual class UStruct * __thiscall UState::GetInheritanceSuper(void) */

UStruct * __thiscall UState::GetInheritanceSuper(UState *this)

{
                    /* 0x146a  1339  ?GetInheritanceSuper@UState@@UAEPAVUStruct@@XZ */
  return *(UStruct **)(this + 0x34);
}


// ==== 1010146f thunk_FUN_10124ce0 thunk -> 10124ce0

// ==== 10101474 FMemCache::FCacheItem::GetSize

/* public: int __thiscall FMemCache::FCacheItem::GetSize(void) */

int __thiscall FMemCache::FCacheItem::GetSize(FCacheItem *this)

{
                    /* 0x1474  1395  ?GetSize@FCacheItem@FMemCache@@QAEHXZ */
  return *(int *)(*(int *)(this + 0x14) + 8) - *(int *)(this + 8);
}


// ==== 10101479 UObject::execFindObject

/* public: void __thiscall UObject::execFindObject(struct FFrame &,void * const) */

void __thiscall UObject::execFindObject(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UObject *pUVar2;
  undefined4 *puStack_28;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1479  2221  ?execFindObject@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (undefined4 *)&LAB_101bb2a0;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = &uStack_18;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffdc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pUVar2 = StaticFindObject((UClass *)param_1,(UObject *)0x0,&DAT_101cdd44,0);
  *puStack_8 = pUVar2;
  uStack_14 = 3;
  FArray::Realloc((FArray *)&puStack_28,2);
  uStack_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_28);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 1010147e thunk_FUN_10132890 thunk -> 10132890

// ==== 10101483 FMalloc::GetOsPeak

/* public: virtual int __thiscall FMalloc::GetOsPeak(void) */

int __thiscall FMalloc::GetOsPeak(FMalloc *this)

{
                    /* 0x1483  1372  ?GetOsPeak@FMalloc@@UAEHXZ */
  return 0;
}


// ==== 1010148d UArrayProperty::StaticClass

/* public: static class UClass * __cdecl UArrayProperty::StaticClass(void) */

UClass * __cdecl UArrayProperty::StaticClass(void)

{
                    /* 0x148d  1888  ?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10101492 UStruct::UStruct

/* public: __thiscall UStruct::UStruct(class UStruct const &) */

UStruct * __thiscall UStruct::UStruct(UStruct *this,UStruct *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1492  275  ??0UStruct@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b76c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  thunk_FUN_101186c0(param_1 + 0x54);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101497 FPackageFileSummary::FPackageFileSummary

/* public: __thiscall FPackageFileSummary::FPackageFileSummary(struct FPackageFileSummary const &)
    */

FPackageFileSummary * __thiscall
FPackageFileSummary::FPackageFileSummary(FPackageFileSummary *this,FPackageFileSummary *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1497  100  ??0FPackageFileSummary@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b884b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  thunk_FUN_10119360(param_1 + 0x34);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010149c FBitWriter::FBitWriter

/* public: __thiscall FBitWriter::FBitWriter(int) */

FBitWriter * __thiscall FBitWriter::FBitWriter(FBitWriter *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x149c  17  ??0FBitWriter@@QAE@H@Z */
  puStack_c = &LAB_101b9c43;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = FArchive::vftable;
  *(undefined4 *)(this + 4) = 0x7b;
  *(undefined4 *)(this + 8) = 2000;
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_1012eb50(param_1 + 7 >> 3);
  *(undefined4 *)(this + 0x44) = 0;
  *(int *)(this + 0x48) = param_1;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  thunk_FUN_10108420(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x1c) = 1;
  *(uint *)(this + 8) = *(uint *)(this + 8) | 0x80000000;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101014a1 UCommandlet::operator=

/* public: class UCommandlet & __thiscall UCommandlet::operator=(class UCommandlet const &) */

UCommandlet * __thiscall UCommandlet::operator=(UCommandlet *this,UCommandlet *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  int iVar3;
  UCommandlet *pUVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  UCommandlet *pUVar8;
  int iStack_4;
  
                    /* 0x14a1  516  ??4UCommandlet@@QAEAAV0@ABV0@@Z */
  pUVar4 = param_1;
  UObject::operator=((UObject *)this,(UObject *)param_1);
  pFVar1 = (FArray *)(this + 0x34);
  if (pFVar1 != (FArray *)(param_1 + 0x34)) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x3c) = uVar2;
    *(undefined4 *)(this + 0x38) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x38) != 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x34);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(this + 0x38) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x40);
  if (pFVar1 != (FArray *)(param_1 + 0x40)) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x48) = uVar2;
    *(undefined4 *)(this + 0x44) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(this + 0x44) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x4c);
  if (pFVar1 != (FArray *)(param_1 + 0x4c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(this + 0x54) = uVar2;
    *(undefined4 *)(this + 0x50) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x50) != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x4c);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(this + 0x50) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x58);
  if (pFVar1 != (FArray *)(param_1 + 0x58)) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(this + 0x60) = uVar2;
    *(undefined4 *)(this + 0x5c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x58);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(this + 0x5c) * 2);
    }
  }
  iVar5 = (int)param_1 - (int)this;
  pUVar8 = this + 0x68;
  iStack_4 = 0x10;
  param_1 = param_1 + 100;
  do {
    if (pUVar8 + -4 != param_1) {
      iVar3 = *(int *)(pUVar8 + iVar5);
      *(int *)(pUVar8 + 4) = iVar3;
      *(int *)pUVar8 = iVar3;
      FArray::Realloc((FArray *)(pUVar8 + -4),2);
      if (*(int *)pUVar8 != 0) {
        if (*(int *)(pUVar8 + iVar5) == 0) {
          puVar7 = &DAT_101cdd44;
        }
        else {
          puVar7 = *(undefined2 **)param_1;
        }
        _memcpy(*(void **)(pUVar8 + -4),puVar7,*(int *)pUVar8 * 2);
      }
    }
    param_1 = param_1 + 0xc;
    pUVar8 = pUVar8 + 0xc;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  param_1 = pUVar4 + 0x124;
  pUVar8 = this + 0x128;
  iStack_4 = 0x10;
  do {
    if (pUVar8 + -4 != param_1) {
      iVar3 = *(int *)(pUVar8 + iVar5);
      *(int *)(pUVar8 + 4) = iVar3;
      *(int *)pUVar8 = iVar3;
      FArray::Realloc((FArray *)(pUVar8 + -4),2);
      if (*(int *)pUVar8 != 0) {
        if (*(int *)(pUVar8 + iVar5) == 0) {
          puVar7 = &DAT_101cdd44;
        }
        else {
          puVar7 = *(undefined2 **)param_1;
        }
        _memcpy(*(void **)(pUVar8 + -4),puVar7,*(int *)pUVar8 * 2);
      }
    }
    param_1 = param_1 + 0xc;
    pUVar8 = pUVar8 + 0xc;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  *(uint *)(this + 0x1e4) =
       *(uint *)(this + 0x1e4) ^ (*(uint *)(this + 0x1e4) ^ *(uint *)(pUVar4 + 0x1e4)) & 1;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ *(uint *)(this + 0x1e4)) & 2 ^ *(uint *)(this + 0x1e4);
  *(uint *)(this + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 4 ^ uVar6;
  *(uint *)(this + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 8 ^ uVar6;
  *(uint *)(this + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 0x10 ^ uVar6;
  *(uint *)(this + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 0x20 ^ uVar6;
  *(uint *)(this + 0x1e4) = uVar6;
  *(uint *)(this + 0x1e4) = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 0x40 ^ uVar6;
  return this;
}


// ==== 101014a6 UObject::SetImportCount

/* public: static void __cdecl UObject::SetImportCount(int) */

void __cdecl UObject::SetImportCount(int param_1)

{
                    /* 0x14a6  1860  ?SetImportCount@UObject@@SAXH@Z */
  GImportCount = param_1;
  return;
}


// ==== 101014ab UObject::execMultiplyEqual_ByteByte

/* public: void __thiscall UObject::execMultiplyEqual_ByteByte(struct FFrame &,void * const) */

void __thiscall UObject::execMultiplyEqual_ByteByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar uVar2;
  uchar *unaff_ESI;
  char unaff_DI;
  uchar *puVar3;
  undefined4 uStack_4;
  
                    /* 0x14ab  2306  ?execMultiplyEqual_ByteByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)this & 0xffffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,(int)&uStack_4 + 3);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar3 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar3 = &stack0xfffffff7;
  }
  uStack_4 = uStack_4 & 0xffffff00;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar2 = *puVar3;
  *puVar3 = uVar2 * unaff_DI;
  *unaff_ESI = uVar2 * unaff_DI;
  return;
}


// ==== 101014b0 thunk_FUN_10137330 thunk -> 10137330

// ==== 101014b5 UByteProperty::ExportTextItem

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UByteProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UByteProperty::ExportTextItem
          (UByteProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  ushort *puVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14b5  979  ?ExportTextItem@UByteProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101be180;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 0x78);
  if (iVar1 == 0) {
    pwVar2 = (wchar_t *)(uint)*param_2;
    puVar3 = (ushort *)&DAT_101ded40;
  }
  else if ((int)(uint)*param_2 < *(int *)(iVar1 + 0x44)) {
    pwVar2 = (wchar_t *)
             (*(int *)(_Names + *(int *)(*(int *)(iVar1 + 0x40) + (uint)*param_2 * 4) * 4) + 0xc);
    puVar3 = (ushort *)&DAT_101ded38;
  }
  else {
    pwVar2 = L"(INVALID)";
    puVar3 = (ushort *)&DAT_101ded38;
  }
  ExceptionList = &pvStack_10;
  appSprintf(param_1,puVar3,pwVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101014bf UStructProperty::UStructProperty

/* public: __thiscall UStructProperty::UStructProperty(class UStructProperty const &) */

UStructProperty * __thiscall
UStructProperty::UStructProperty(UStructProperty *this,UStructProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14bf  279  ??0UStructProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101014c4 FBitReader::AtEnd

/* public: virtual int __thiscall FBitReader::AtEnd(void) */

int __thiscall FBitReader::AtEnd(FBitReader *this)

{
                    /* 0x14c4  805  ?AtEnd@FBitReader@@UAEHXZ */
  if ((*(int *)(this + 0x2c) == 0) && (*(int *)(this + 0x48) != *(int *)(this + 0x44))) {
    return 0;
  }
  return 1;
}


// ==== 101014c9 UStructProperty::Serialize

/* public: virtual void __thiscall UStructProperty::Serialize(class FArchive &) */

void __thiscall UStructProperty::Serialize(UStructProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14c9  1826  ?Serialize@UStructProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be160;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  thunk_FUN_10130ef0(param_1,this + 0x78);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101014ce thunk_FUN_10119210 thunk -> 10119210

// ==== 101014d3 thunk_FUN_1012b850 thunk -> 1012b850

// ==== 101014d8 UFixedArrayProperty::SerializeItem

/* public: virtual void __thiscall UFixedArrayProperty::SerializeItem(class FArchive &,void
   *,int)const  */

void __thiscall
UFixedArrayProperty::SerializeItem
          (UFixedArrayProperty *this,FArchive *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x14d8  1841  ?SerializeItem@UFixedArrayProperty@@UBEXAAVFArchive@@PAXH@Z */
  iVar1 = *(int *)(this + 0x7c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (param_3 < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_3 / iVar1;
      }
      (**(code **)(**(int **)(this + 0x78) + 0x90))
                (param_1,(void *)((*(int **)(this + 0x78))[0x11] * iVar2 + (int)param_2),iVar1);
      iVar1 = *(int *)(this + 0x7c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


// ==== 101014dd FFrame::FFrame

/* public: __thiscall FFrame::FFrame(class UObject *) */

void __thiscall FFrame::FFrame(FFrame *this,UObject *param_1)

{
  undefined4 uVar1;
  
                    /* 0x14dd  57  ??0FFrame@@QAE@PAVUObject@@@Z */
  *(undefined ***)this = vftable;
  if (param_1 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  *(undefined4 *)(this + 4) = uVar1;
  *(UObject **)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


// ==== 101014e2 FVector::BoundToCube

/* public: class FVector __thiscall FVector::BoundToCube(float) */

void __thiscall FVector::BoundToCube(FVector *this,float param_1)

{
  float fVar1;
  float fVar2;
  float in_stack_00000008;
  float fStack_c;
  float fStack_8;
  
                    /* 0x14e2  825  ?BoundToCube@FVector@@QAE?AV1@M@Z */
  fVar1 = *(float *)(this + 8);
  fVar2 = -in_stack_00000008;
  fStack_8 = fVar2;
  if ((fVar2 <= fVar1) && (fStack_8 = fVar1, in_stack_00000008 <= fVar1)) {
    fStack_8 = in_stack_00000008;
  }
  fVar1 = *(float *)(this + 4);
  fStack_c = fVar2;
  if ((fVar2 <= fVar1) && (fStack_c = fVar1, in_stack_00000008 <= fVar1)) {
    fStack_c = in_stack_00000008;
  }
  fVar1 = *(float *)this;
  if ((fVar1 < fVar2) || (fVar2 = in_stack_00000008, in_stack_00000008 <= fVar1)) {
    fVar1 = fVar2;
  }
  *(float *)param_1 = fVar1;
  *(float *)((int)param_1 + 4) = fStack_c;
  *(float *)((int)param_1 + 8) = fStack_8;
  return;
}


// ==== 101014ec FRotator::operator==

/* public: int __thiscall FRotator::operator==(class FRotator const &)const  */

int __thiscall FRotator::operator==(FRotator *this,FRotator *param_1)

{
                    /* 0x14ec  569  ??8FRotator@@QBEHABV0@@Z */
  if (((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(this + 8) == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}


// ==== 101014f1 ParseLine

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* int __cdecl ParseLine(unsigned short const * *,class FString &,int) */

int __cdecl ParseLine(ushort **param_1,FString *param_2,int param_3)

{
  int iVar1;
  ushort uStack_2020;
  undefined1 auStack_201e [8198];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f1  1668  ?ParseLine@@YAHPAPBGAAVFString@@H@Z */
  puStack_c = &LAB_101bc1b0;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x10154a33;
  puStack_14 = &stack0xffffdfd4;
  uStack_8 = 0;
  uStack_2020 = 0;
  ExceptionList = &pvStack_10;
  _memset(auStack_201e,0,0x1ffe);
  iVar1 = ParseLine(param_1,&uStack_2020,0x1000,param_3);
  FString::operator=(param_2,&uStack_2020);
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 101014f6 UObject::IsLoaded

/* public: virtual int __thiscall UObject::IsLoaded(void) */

int __thiscall UObject::IsLoaded(UObject *this)

{
                    /* 0x14f6  1516  ?IsLoaded@UObject@@UAEHXZ */
  if (((byte)GL2ThreadFilter & 4) == 0) {
    return 1;
  }
  return ~(uint)(byte)this[0x1f] & 1;
}


// ==== 101014fb FArchive::IsTrans

/* public: int __thiscall FArchive::IsTrans(void) */

int __thiscall FArchive::IsTrans(FArchive *this)

{
                    /* 0x14fb  1529  ?IsTrans@FArchive@@QAEHXZ */
  return *(int *)(this + 0x18);
}


// ==== 10101505 appMemset

/* void __cdecl appMemset(void *,int,int) */

void __cdecl appMemset(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x1505  2080  ?appMemset@@YAXPAXHH@Z */
  if (param_3 == 0) {
    return;
  }
  uVar1 = param_2 & 0xff;
  if ((((char)param_2 == '\0') && (0xff < (uint)param_3)) && (DAT_1033fe34 != 0)) {
    __VEC_memzero();
    return;
  }
  if (3 < (uint)param_3) {
    uVar2 = -(int)param_1 & 3;
    uVar3 = param_3;
    if (uVar2 != 0) {
      uVar3 = param_3 - uVar2;
      do {
        *(char *)param_1 = (char)param_2;
        param_1 = (void *)((int)param_1 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    param_3 = uVar3 & 3;
    uVar3 = uVar3 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)param_1 = uVar1;
        param_1 = (uint *)((int)param_1 + 4);
      }
      if (param_3 == 0) {
        return;
      }
    }
  }
  do {
    *(char *)param_1 = (char)uVar1;
    param_1 = (void *)((int)param_1 + 1);
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}


// ==== 1010150a thunk_FUN_1012c8e0 thunk -> 1012c8e0

// ==== 1010150f UTextBuffer::`default_constructor_closure'

/* public: void __thiscall UTextBuffer::`default constructor closure'(void) */

void __thiscall UTextBuffer::_default_constructor_closure_(UTextBuffer *this)

{
                    /* 0x150f  774  ??_FUTextBuffer@@QAEXXZ */
  UTextBuffer(this,&DAT_101cdd44);
  return;
}


// ==== 10101514 UProperty::operator=

/* public: class UProperty & __thiscall UProperty::operator=(class UProperty const &) */

UProperty * __thiscall UProperty::operator=(UProperty *this,UProperty *param_1)

{
  FArray *this_00;
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x1514  538  ??4UProperty@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined2 *)(this + 0x52) = *(undefined2 *)(param_1 + 0x52);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  this_00 = (FArray *)(this + 0x6c);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  if (this_00 != (FArray *)(param_1 + 0x6c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(this + 0x74) = uVar1;
    *(undefined4 *)(this + 0x70) = uVar1;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 0x70) != 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x6c);
      }
      _memcpy(*(void **)this_00,_Src,*(int *)(this + 0x70) * 2);
    }
  }
  return this;
}


// ==== 10101519 UObject::Serialize

/* public: virtual void __thiscall UObject::Serialize(class FArchive &) */

void __thiscall UObject::Serialize(UObject *this,FArchive *param_1)

{
  UObject *pUVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FArchive *pFVar5;
  int *piVar6;
  undefined4 uVar7;
  FStateFrame *this_00;
  code *pcVar8;
  FOutputDevice *this_01;
  UClass *pUVar9;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1519  1818  ?Serialize@UObject@@UAEXAAVFArchive@@@Z */
  pFVar5 = param_1;
  puStack_c = &LAB_101bcc00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x40000000;
  pUVar1 = this + 0x24;
  if (*(UClass **)pUVar1 != &UClass::PrivateStaticClass) {
    (**(code **)(*(int *)param_1 + 0x10))(*(UClass **)pUVar1);
  }
  if (*(int *)(pFVar5 + 0x10) == 0) {
    if (*(int *)(pFVar5 + 0x14) == 0) {
      piVar6 = (int *)(**(code **)(*(int *)pFVar5 + 0x1c))(this + 0x20);
      uVar7 = (**(code **)(*piVar6 + 0x18))(this + 0x18,pUVar1);
      thunk_FUN_1012a9f0(uVar7);
    }
    if ((*(int *)(pFVar5 + 0x10) == 0) && (*(int *)(pFVar5 + 0x14) == 0)) {
      thunk_FUN_10136a80(pFVar5,this + 0x10);
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (*(int *)(pFVar5 + 0x18) == 0) {
    if ((*(uint *)(this + 0x1c) & 0x2000000) == 0) {
      if (*(int *)(this + 0xc) != 0) {
        thunk_FUN_101088c0(*(int *)(this + 0xc));
        *(undefined4 *)(this + 0xc) = 0;
      }
    }
    else {
      if (*(int *)(this + 0xc) == 0) {
        this_00 = (FStateFrame *)thunk_FUN_1015a300(0x2c,L"ObjectStateFrame");
        if (this_00 == (FStateFrame *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FStateFrame::FStateFrame(this_00,this);
        }
        *(undefined4 *)(this + 0xc) = uVar7;
      }
      uVar7 = thunk_FUN_10130ef0(pFVar5,*(int *)(this + 0xc) + 4,*(int *)(this + 0xc) + 0x1c);
      thunk_FUN_1015b3e0(uVar7);
      thunk_FUN_10130860(pFVar5,*(int *)(this + 0xc) + 0x20);
      thunk_FUN_10130820(pFVar5,*(int *)(this + 0xc) + 0x28);
      iVar2 = *(int *)(this + 0xc);
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      else {
        (**(code **)(*(int *)pFVar5 + 0x10))(*(undefined4 *)(iVar2 + 4));
        if (*(int *)(pFVar5 + 0x14) != 0) {
          uVar3 = *(uint *)(*(int *)(this + 0xc) + 0xc);
          if (uVar3 != 0) {
            iVar2 = *(int *)(*(int *)(this + 0xc) + 4);
            uVar4 = *(uint *)(iVar2 + 0x54);
            if ((uVar3 < uVar4) || (uVar4 + *(int *)(iVar2 + 0x58) <= uVar3)) {
              appFailAssert("StateFrame->Code>=&StateFrame->Node->Script(0) && StateFrame->Code<&StateFrame->Node->Script(StateFrame->Node->Script.Num())"
                            ,".\\UnObj.cpp",0x26d);
            }
          }
        }
        iVar2 = *(int *)(*(int *)(this + 0xc) + 0xc);
        if (iVar2 == 0) {
          param_1 = (FArchive *)0xffffffff;
        }
        else {
          param_1 = (FArchive *)(iVar2 - *(int *)(*(int *)(*(int *)(this + 0xc) + 4) + 0x54));
        }
        operator<<(pFVar5,(FCompactIndex *)&param_1);
        if (param_1 != (FArchive *)0xffffffff) {
          if (((int)param_1 < 0) ||
             (*(int *)(*(int *)(*(int *)(this + 0xc) + 4) + 0x58) <= (int)param_1)) {
            GetFullName(this,(ushort *)0x0);
            FOutputDevice::Logf(this_01,(ushort *)GError);
          }
          if (param_1 != (FArchive *)0xffffffff) {
            *(FArchive **)(*(int *)(this + 0xc) + 0xc) =
                 param_1 + *(int *)(*(int *)(*(int *)(this + 0xc) + 4) + 0x54);
            goto LAB_1015ea27;
          }
        }
        *(undefined4 *)(*(int *)(this + 0xc) + 0xc) = 0;
      }
    }
  }
LAB_1015ea27:
  uStack_8 = 0;
  pUVar9 = *(UClass **)pUVar1;
  if (pUVar9 != &UClass::PrivateStaticClass) {
    if (((*(int *)(pFVar5 + 0x10) == 0) && (*(int *)(pFVar5 + 0x14) == 0)) ||
       (*(int *)(pFVar5 + 0x18) != 0)) {
      iVar2 = *(int *)pUVar9;
      pUVar9 = (UClass *)0x0;
      pcVar8 = *(code **)(iVar2 + 0x84);
    }
    else {
      pcVar8 = *(code **)(*(int *)pUVar9 + 0x88);
    }
    (*pcVar8)(pFVar5,this,pUVar9);
  }
  uVar7 = (**(code **)(**(int **)pUVar1 + 0x78))();
  (**(code **)(*(int *)pFVar5 + 0x14))(uVar7,uVar7);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010151e thunk_FUN_10118fc0 thunk -> 10118fc0

// ==== 10101523 UObjectProperty::CleanupDestroyed

/* public: virtual void __thiscall UObjectProperty::CleanupDestroyed(unsigned char *)const  */

void __thiscall UObjectProperty::CleanupDestroyed(UObjectProperty *this,uchar *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1523  841  ?CleanupDestroyed@UObjectProperty@@UBEXPAE@Z */
  puStack_c = &LAB_101bde90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x40); iVar3 = iVar3 + 1) {
    piVar2 = (int *)(param_1 + *(int *)(this + 0x44) * iVar3);
    if (*piVar2 != 0) {
      iVar1 = UObject::IsValid((UObject *)*piVar2);
      if (iVar1 == 0) {
        appFailAssert("Obj->IsValid()",".\\UnProp.cpp",0x338);
      }
      iVar1 = (**(code **)(*(int *)*piVar2 + 0x30))();
      if (iVar1 != 0) {
        (**(code **)(*(int *)*piVar2 + 0x20))();
        *piVar2 = 0;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101528 FMemCache::GetTime

/* public: int __thiscall FMemCache::GetTime(void) */

int __thiscall FMemCache::GetTime(FMemCache *this)

{
                    /* 0x1528  1411  ?GetTime@FMemCache@@QAEHXZ */
  return *(int *)(this + 4);
}


// ==== 1010152d USubsystem::~USubsystem

/* public: virtual __thiscall USubsystem::~USubsystem(void) */

void __thiscall USubsystem::~USubsystem(USubsystem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x152d  349  ??1USubsystem@@UAE@XZ */
  puStack_8 = &LAB_101b67f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101532 FRange::GetCenter

/* public: float __thiscall FRange::GetCenter(void)const  */

float __thiscall FRange::GetCenter(FRange *this)

{
                    /* 0x1532  1287  ?GetCenter@FRange@@QBEMXZ */
  return (*(float *)(this + 4) + *(float *)this) * 0.5;
}


// ==== 10101537 UClass::UClass

/* public: __thiscall UClass::UClass(void) */

UClass * __thiscall UClass::UClass(UClass *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1537  195  ??0UClass@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this);
  *(undefined ***)this = UState::vftable;
  *(undefined ***)this = vftable;
  *(UClass **)(this + 0x4bc) = &UObject::PrivateStaticClass;
  *(undefined4 *)(this + 0x4c4) = 0;
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + 0x4cc) = 0;
  *(undefined4 *)(this + 0x4d0) = 0;
  *(undefined4 *)(this + 0x4d4) = 0;
  *(undefined4 *)(this + 0x4d8) = 0;
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4e0) = 0;
  *(undefined4 *)(this + 0x4e4) = 0;
  *(undefined4 *)(this + 0x4e8) = 0;
  *(undefined4 *)(this + 0x4ec) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4f4) = 0;
  *(undefined4 *)(this + 0x4f8) = 0;
  *(undefined4 *)(this + 0x4fc) = 0;
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x514) = 0;
  *(undefined4 *)(this + 0x520) = 0;
  *(undefined4 *)(this + 0x524) = 0;
  *(undefined4 *)(this + 0x528) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010153c ULinkerLoad::AttachLazyLoader

/* private: virtual void __thiscall ULinkerLoad::AttachLazyLoader(class FLazyLoader *) */

void __thiscall ULinkerLoad::AttachLazyLoader(ULinkerLoad *this,FLazyLoader *param_1)

{
  FLazyLoader *pFVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x153c  809  ?AttachLazyLoader@ULinkerLoad@@EAEXPAVFLazyLoader@@@Z */
  puStack_c = &LAB_101bb780;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10149500(&param_1);
  pFVar1 = param_1;
  *(uint *)(param_1 + 4) = -(uint)(this != (ULinkerLoad *)0xc0) & (uint)this;
  uVar2 = (**(code **)(*(int *)this + 0x28))();
  *(undefined4 *)(pFVar1 + 8) = uVar2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101541 UClassProperty::UClassProperty

/* public: __thiscall UClassProperty::UClassProperty(class UClassProperty const &) */

UClassProperty * __thiscall
UClassProperty::UClassProperty(UClassProperty *this,UClassProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1541  196  ??0UClassProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObjectProperty::UObjectProperty((UObjectProperty *)this,(UObjectProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101546 UObject::InternalConstructor

/* public: static void __cdecl UObject::InternalConstructor(void *) */

void __cdecl UObject::InternalConstructor(void *param_1)

{
                    /* 0x1546  1492  ?InternalConstructor@UObject@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UObject(param_1);
    return;
  }
  return;
}


// ==== 1010154b UObject::VerifyLinker

/* public: static void __cdecl UObject::VerifyLinker(class ULinkerLoad *) */

void __cdecl UObject::VerifyLinker(ULinkerLoad *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x154b  1996  ?VerifyLinker@UObject@@SAXPAVULinkerLoad@@@Z */
  puStack_c = &LAB_101bc7b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ULinkerLoad::Verify(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101550 thunk_FUN_1012a110 thunk -> 1012a110

// ==== 10101555 FCoords::operator*=

/* public: class FCoords & __thiscall FCoords::operator*=(class FVector const &) */

FCoords * __thiscall FCoords::operator*=(FCoords *this,FVector *param_1)

{
                    /* 0x1555  662  ??XFCoords@@QAEAAV0@ABVFVector@@@Z */
  *(float *)this = *(float *)this - *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) - *(float *)(param_1 + 4);
  *(float *)(this + 8) = *(float *)(this + 8) - *(float *)(param_1 + 8);
  return this;
}


// ==== 1010155a FFileStream::RequestChunks

/* public: void __thiscall FFileStream::RequestChunks(int,int,void *) */

void __thiscall FFileStream::RequestChunks(FFileStream *this,int param_1,int param_2,void *param_3)

{
  FFileStream *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x155a  1768  ?RequestChunks@FFileStream@@QAEXHHPAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbf18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFStack_10 = this;
  FScopeCriticalSection::FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10,CriticalSection)
  ;
  *(int *)(Streams + param_1 * 0x24 + 0x14) = *(int *)(Streams + param_1 * 0x24 + 0x14) + param_2;
  *(void **)(Streams + param_1 * 0x24) = param_3;
  uStack_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010155f UObject::StaticLoadClass

/* public: static class UClass * __cdecl UObject::StaticLoadClass(class UClass *,class UObject
   *,unsigned short const *,unsigned short const *,unsigned long,class UPackageMap *) */

UClass * __cdecl
UObject::StaticLoadClass
          (UClass *param_1,UObject *param_2,ushort *param_3,ushort *param_4,ulong param_5,
          UPackageMap *param_6)

{
  UStruct *this;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x155f  1941
                       ?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */
  puStack_c = &LAB_101bdbd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("BaseClass",".\\UnObj.cpp",0xb98);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  this = (UStruct *)thunk_FUN_1016c090(param_2,param_3,param_4,param_5 | 8,param_6);
  if (this != (UStruct *)0x0) {
    iVar1 = UStruct::IsChildOf(this,(UStruct *)param_1);
    if (iVar1 == 0) {
      puVar2 = GetFullName((UObject *)param_1,(ushort *)0x0);
      puVar3 = GetFullName((UObject *)this,(ushort *)0x0);
      puVar4 = LocalizeError((ushort *)L"LoadClassMismatch",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar4,puVar3,puVar2);
    }
  }
  ExceptionList = pvStack_10;
  return (UClass *)this;
}


// ==== 10101564 appFmod

/* double __cdecl appFmod(double,double) */

double __cdecl appFmod(double param_1,double param_2)

{
  float10 fVar1;
  
                    /* 0x1564  2044  ?appFmod@@YANNN@Z */
  fVar1 = (float10)FUN_1017c3ba();
  return (double)fVar1;
}


// ==== 10101569 UFloatProperty::operator=

/* public: class UFloatProperty & __thiscall UFloatProperty::operator=(class UFloatProperty const &)
    */

UFloatProperty * __thiscall UFloatProperty::operator=(UFloatProperty *this,UFloatProperty *param_1)

{
                    /* 0x1569  524  ??4UFloatProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  return this;
}


// ==== 1010156e FPlane::FPlane

/* public: __thiscall FPlane::FPlane(void) */

FPlane * __thiscall FPlane::FPlane(FPlane *this)

{
                    /* 0x156e  110  ??0FPlane@@QAE@XZ */
  return this;
}


// ==== 10101578 UStruct::UStruct

/* public: __thiscall UStruct::UStruct(class UStruct *) */

UStruct * __thiscall UStruct::UStruct(UStruct *this,UStruct *param_1)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1578  276  ??0UStruct@@QAE@PAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba05b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  if (param_1 == (UStruct *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1 + 0x78))();
  }
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010157d appRound

/* int __cdecl appRound(float) */

int __cdecl appRound(float param_1)

{
  int iVar1;
  
                    /* 0x157d  2090  ?appRound@@YAHM@Z */
  FUN_1017bb20((double)(param_1 + 0.5));
  iVar1 = FUN_1017b700();
  return iVar1;
}


// ==== 10101587 UObjectProperty::UObjectProperty

/* public: __thiscall UObjectProperty::UObjectProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long,class UClass *) */

UObjectProperty * __thiscall
UObjectProperty::UObjectProperty
          (UObjectProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4,
          UClass *param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1587  255  ??0UObjectProperty@@QAE@W4ECppProperty@@HPBGKPAVUClass@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  *(UClass **)(this + 0x78) = param_5;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010158c FTerritoryInfoHit::operator==

/* public: int __thiscall FTerritoryInfoHit::operator==(class FTerritoryInfoHit const &)const  */

int __thiscall FTerritoryInfoHit::operator==(FTerritoryInfoHit *this,FTerritoryInfoHit *param_1)

{
                    /* 0x158c  574  ??8FTerritoryInfoHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 10101591 thunk_FUN_1012aab0 thunk -> 1012aab0

// ==== 10101596 thunk_FUN_10120a60 thunk -> 10120a60

// ==== 1010159b thunk_FUN_1014a020 thunk -> 1014a020

// ==== 101015a0 UFunction::operator=

/* public: class UFunction & __thiscall UFunction::operator=(class UFunction const &) */

UFunction * __thiscall UFunction::operator=(UFunction *this,UFunction *param_1)

{
                    /* 0x15a0  525  ??4UFunction@@QAEAAV0@ABV0@@Z */
  UStruct::operator=((UStruct *)this,(UStruct *)param_1);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined2 *)(this + 0x90) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(this + 0x92) = *(undefined2 *)(param_1 + 0x92);
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  *(undefined2 *)(this + 0x96) = *(undefined2 *)(param_1 + 0x96);
  *(undefined2 *)(this + 0x98) = *(undefined2 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  return this;
}


// ==== 101015a5 UField::Register

/* public: virtual void __thiscall UField::Register(void) */

void __thiscall UField::Register(UField *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15a5  1757  ?Register@UField@@UAEXXZ */
  puStack_c = &LAB_101b9db0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Register((UObject *)this);
  if (*(UObject **)(this + 0x34) != (UObject *)0x0) {
    UObject::ConditionalRegister(*(UObject **)(this + 0x34));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101015b4 UObject::execQuatFindBetween

/* public: void __thiscall UObject::execQuatFindBetween(struct FFrame &,void * const) */

void __thiscall UObject::execQuatFindBetween(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_c;
  float *pfStack_8;
  
                    /* 0x15b4  2348  ?execQuatFindBetween@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_1c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar3 = fStack_30 * fStack_28 - fStack_34 * fStack_24;
  fVar4 = fStack_38 * fStack_24 - fStack_2c * fStack_30;
  fVar2 = fStack_2c * fStack_34 - fStack_38 * fStack_28;
  dVar6 = appSqrt((double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4));
  fVar8 = (float)dVar6;
  if (fVar8 < 0.0001) {
    *pfStack_8 = 0.0;
    pfStack_8[1] = 0.0;
    pfStack_8[2] = 0.0;
    pfStack_8[3] = 1.0;
    return;
  }
  dVar6 = appAsin((double)fVar8);
  fStack_c = (float)dVar6;
  if (fStack_30 * fStack_24 + fStack_38 * fStack_2c + fStack_28 * fStack_34 < 0.0) {
    fStack_c = 3.1415927 - fStack_c;
  }
  dVar6 = (double)(fStack_c * 0.5);
  dVar7 = appSin((double)(fStack_c * 0.5));
  fVar5 = (float)dVar7;
  fStack_c = 1.0 / fVar8;
  fStack_20 = fStack_c * fVar3;
  fStack_1c = fVar4 * fStack_c;
  fStack_18 = fStack_c * fVar2;
  fVar2 = fVar5 * fStack_20;
  fVar3 = fStack_1c * fVar5;
  fVar5 = fVar5 * fStack_18;
  dVar6 = appCos(dVar6);
  *pfStack_8 = fVar2;
  pfStack_8[1] = fVar3;
  pfStack_8[2] = fVar5;
  pfStack_8[3] = (float)dVar6;
  return;
}


// ==== 101015b9 LocalizeError

/* unsigned short const * __cdecl LocalizeError(unsigned short const *,unsigned short const
   *,unsigned short const *) */

ushort * __cdecl LocalizeError(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x15b9  1581  ?LocalizeError@@YAPBGPBG00@Z */
  puVar1 = Localize((ushort *)L"Errors",param_1,param_2,param_3,0);
  return puVar1;
}


// ==== 101015be ULinkerLoad::AskDestroy

/* public: void __thiscall ULinkerLoad::AskDestroy(void) */

void __thiscall ULinkerLoad::AskDestroy(ULinkerLoad *this)

{
                    /* 0x15be  803  ?AskDestroy@ULinkerLoad@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10113365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x28))();
  return;
}


// ==== 101015c3 thunk_FUN_101342f0 thunk -> 101342f0

// ==== 101015c8 appFromAnsi

/* unsigned short const * __cdecl appFromAnsi(char const *,unsigned short *) */

ushort * __cdecl appFromAnsi(char *param_1,ushort *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15c8  2049  ?appFromAnsi@@YAPBGPBDPAG@Z */
  puStack_c = &LAB_101bc160;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 == (char *)0x0) {
    return (ushort *)0x0;
  }
  ExceptionList = &pvStack_10;
  if (param_2 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    param_2 = appStaticString1024();
  }
  MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)param_2,0x400);
  ExceptionList = pvStack_10;
  return (ushort *)(LPWSTR)param_2;
}


// ==== 101015cd USystem::StaticConstructor

/* public: void __thiscall USystem::StaticConstructor(void) */

void __thiscall USystem::StaticConstructor(USystem *this)

{
  UIntProperty *this_00;
  UStrProperty *pUVar1;
  UArrayProperty *pUVar2;
  int iVar3;
  undefined4 uVar4;
  UNameProperty *this_01;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15cd  1930  ?StaticConstructor@USystem@@QAEXXZ */
  puStack_c = &LAB_101be4f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x38) = 1;
  uVar4 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"PurgeCacheDays",1);
  this_00 = UIntProperty::operator_new(0x78,uVar4);
  if (this_00 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(this_00,0,0x3c,(ushort *)L"Options",0x4000);
  }
  uVar4 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"SavePath",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar4);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x40,(ushort *)L"Options",0x4000);
  }
  uVar4 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"CachePath",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar4);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x4c,(ushort *)L"Options",0x4000);
  }
  uVar4 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"CacheExt",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar4);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x58,(ushort *)L"Options",0x4000);
  }
  uVar4 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Paths",1);
  pUVar2 = UArrayProperty::operator_new(0x7c,uVar4);
  if (pUVar2 == (UArrayProperty *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = UArrayProperty::UArrayProperty(pUVar2,0,100,(ushort *)L"Options",0x4000);
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"StrProperty0",1);
  pUVar1 = UStrProperty::operator_new(0x78,iVar3);
  if (pUVar1 == (UStrProperty *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = UStrProperty::UStrProperty(pUVar1);
  }
  *(undefined4 *)(iVar3 + 0x78) = uVar4;
  uVar4 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Suppress",1);
  pUVar2 = UArrayProperty::operator_new(0x7c,uVar4);
  if (pUVar2 == (UArrayProperty *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = UArrayProperty::UArrayProperty(pUVar2,0,0x70,(ushort *)L"Options",0x4000);
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"NameProperty0",1);
  this_01 = UNameProperty::operator_new(0x78,iVar3);
  if (this_01 == (UNameProperty *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = UNameProperty::UNameProperty(this_01);
  }
  *(undefined4 *)(iVar3 + 0x78) = uVar4;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101015d2 thunk_FUN_1016bfa0 thunk -> 1016bfa0

// ==== 101015d7 thunk_FUN_10126cd0 thunk -> 10126cd0

// ==== 101015dc UObject::StaticTick

/* public: static void __cdecl UObject::StaticTick(void) */

void __cdecl UObject::StaticTick(void)

{
  FOutputDevice *in_ECX;
  FOutputDevice *extraout_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15dc  1946  ?StaticTick@UObject@@SAXXZ */
  puStack_c = &LAB_101bc6f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  while (GObjBeginLoadCount != 0) {
    appSleep(0.0);
    in_ECX = extraout_ECX;
  }
  if (GNativeDuplicate != 0) {
    FOutputDevice::Logf(in_ECX,(ushort *)GError);
  }
  if (GCastDuplicate != 0) {
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101015e1 UByteProperty::operator=

/* public: class UByteProperty & __thiscall UByteProperty::operator=(class UByteProperty const &) */

UByteProperty * __thiscall UByteProperty::operator=(UByteProperty *this,UByteProperty *param_1)

{
                    /* 0x15e1  513  ??4UByteProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 101015e6 FMatrix::FMatrix

/* public: __thiscall FMatrix::FMatrix(void) */

FMatrix * __thiscall FMatrix::FMatrix(FMatrix *this)

{
                    /* 0x15e6  73  ??0FMatrix@@QAE@XZ */
  return this;
}


// ==== 101015f0 thunk_FUN_1012eb50 thunk -> 1012eb50

// ==== 101015f5 UObject::ClearL2Game

/* public: virtual void __thiscall UObject::ClearL2Game(void) */

void __thiscall UObject::ClearL2Game(UObject *this)

{
                    /* 0x15f5  849  ?ClearL2Game@UObject@@UAEXXZ */
  return;
}


// ==== 101015fa FVector::MirrorByPlane

/* public: class FVector __thiscall FVector::MirrorByPlane(class FPlane const &)const  */

void __thiscall FVector::MirrorByPlane(FVector *this,FPlane *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_stack_00000008;
  
                    /* 0x15fa  1620  ?MirrorByPlane@FVector@@QBE?AV1@ABVFPlane@@@Z */
  fVar3 = (in_stack_00000008[2] * *(float *)(this + 8) +
          in_stack_00000008[1] * *(float *)(this + 4) + *in_stack_00000008 * *(float *)this) -
          in_stack_00000008[3];
  fVar3 = fVar3 + fVar3;
  fVar1 = in_stack_00000008[1];
  fVar2 = in_stack_00000008[2];
  *(float *)param_1 = *(float *)this - fVar3 * *in_stack_00000008;
  *(float *)(param_1 + 4) = *(float *)(this + 4) - fVar3 * fVar1;
  *(float *)(param_1 + 8) = *(float *)(this + 8) - fVar3 * fVar2;
  return;
}


// ==== 101015ff thunk_FUN_10124a90 thunk -> 10124a90

// ==== 10101604 FGuid::operator=

/* public: class FGuid & __thiscall FGuid::operator=(class FGuid const &) */

FGuid * __thiscall FGuid::operator=(FGuid *this,FGuid *param_1)

{
                    /* 0x1604  454  ??4FGuid@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 10101609 UObject::execLen

/* public: void __thiscall UObject::execLen(struct FFrame &,void * const) */

void __thiscall UObject::execLen(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  int *unaff_retaddr;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1609  2283  ?execLen@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bafa0;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (unaff_ESI == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = unaff_ESI + -1;
  }
  *unaff_retaddr = iVar2;
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 1010160e thunk_FUN_10118c40 thunk -> 10118c40

// ==== 10101613 UNameProperty::SerializeItem

/* public: virtual void __thiscall UNameProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UNameProperty::SerializeItem(UNameProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x1613  1845  ?SerializeItem@UNameProperty@@UBEXAAVFArchive@@PAXH@Z */
  (**(code **)(*(int *)param_1 + 0x1c))(param_2);
  return;
}


// ==== 10101618 FRegistryObjectInfo::operator=

/* public: class FRegistryObjectInfo & __thiscall FRegistryObjectInfo::operator=(class
   FRegistryObjectInfo const &) */

FRegistryObjectInfo * __thiscall
FRegistryObjectInfo::operator=(FRegistryObjectInfo *this,FRegistryObjectInfo *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
                    /* 0x1618  485  ??4FRegistryObjectInfo@@QAEAAV0@ABV0@@Z */
  if (this != param_1) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = uVar2;
    *(undefined4 *)(this + 4) = uVar2;
    FArray::Realloc((FArray *)this,2);
    if (*(int *)(this + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)this,puVar3,*(int *)(this + 4) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0xc);
  if (pFVar1 != (FArray *)(param_1 + 0xc)) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x14) = uVar2;
    *(undefined4 *)(this + 0x10) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x10) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xc);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x10) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x18);
  if (pFVar1 != (FArray *)(param_1 + 0x18)) {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x20) = uVar2;
    *(undefined4 *)(this + 0x1c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x18);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x1c) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x24);
  if (pFVar1 != (FArray *)(param_1 + 0x24)) {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(this + 0x2c) = uVar2;
    *(undefined4 *)(this + 0x28) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x24);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x28) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x30);
  if (pFVar1 != (FArray *)(param_1 + 0x30)) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(this + 0x38) = uVar2;
    *(undefined4 *)(this + 0x34) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x34) != 0) {
      if (*(int *)(param_1 + 0x34) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x30);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x34) * 2);
    }
  }
  return this;
}


// ==== 1010161d thunk_FUN_10119830 thunk -> 10119830

// ==== 10101622 UStrProperty::operator_new

/* public: static void * __cdecl UStrProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UStrProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1622  411  ??2UStrProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101627 thunk_FUN_10114ad0 thunk -> 10114ad0

// ==== 1010162c FBox::GetExtent

/* public: class FVector __thiscall FBox::GetExtent(void)const  */

void __thiscall FBox::GetExtent(FBox *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000004;
  
                    /* 0x162c  1315  ?GetExtent@FBox@@QBE?AVFVector@@XZ */
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 8);
  *in_stack_00000004 = (*(float *)(this + 0xc) - *(float *)this) * 0.5;
  in_stack_00000004[1] = (fVar1 - fVar2) * 0.5;
  in_stack_00000004[2] = (fVar3 - fVar4) * 0.5;
  return;
}


// ==== 10101631 thunk_FUN_1015aeb0 thunk -> 1015aeb0

// ==== 10101636 ULinker::operator_new

/* public: static void * __cdecl ULinker::operator new(unsigned int,enum EInternal *) */

void * __cdecl ULinker::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1636  388  ??2ULinker@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010163b UObject::execMin

/* WARNING: Removing unreachable block (ram,0x1013ccf7) */
/* public: void __thiscall UObject::execMin(struct FFrame &,void * const) */

void __thiscall UObject::execMin(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x163b  2304  ?execMin@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&uStack_4;
  return;
}


// ==== 10101640 FDependency::FDependency

/* public: __thiscall FDependency::FDependency(void) */

FDependency * __thiscall FDependency::FDependency(FDependency *this)

{
                    /* 0x1640  37  ??0FDependency@@QAE@XZ */
  return this;
}


// ==== 10101645 UObject::StaticConfigName

/* public: static unsigned short const * __cdecl UObject::StaticConfigName(void) */

ushort * __cdecl UObject::StaticConfigName(void)

{
                    /* 0x1645  1924  ?StaticConfigName@UObject@@SAPBGXZ */
  return (ushort *)L"System";
}


// ==== 1010164a thunk_FUN_1010a640 thunk -> 1010a640

// ==== 1010164f thunk_FUN_10156e30 thunk -> 10156e30

// ==== 10101659 thunk_FUN_10114650 thunk -> 10114650

// ==== 1010165e UArrayProperty::CleanupDestroyed

/* public: virtual void __thiscall UArrayProperty::CleanupDestroyed(unsigned char *)const  */

void __thiscall UArrayProperty::CleanupDestroyed(UArrayProperty *this,uchar *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x165e  838  ?CleanupDestroyed@UArrayProperty@@UBEXPAE@Z */
  puStack_c = &LAB_101be100;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x40); iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(this + 0x44);
    for (iVar4 = 0; iVar4 < *(int *)((int)(param_1 + iVar1 * iVar3) + 4); iVar4 = iVar4 + 1) {
      piVar2 = *(int **)(this + 0x78);
      (**(code **)(*piVar2 + 0x7c))
                (piVar2[0x11] * piVar2[0x10] * iVar4 + *(int *)(param_1 + iVar1 * iVar3));
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101663 thunk_FUN_10119750 thunk -> 10119750

// ==== 10101668 ULanguage::StaticClass

/* public: static class UClass * __cdecl ULanguage::StaticClass(void) */

UClass * __cdecl ULanguage::StaticClass(void)

{
                    /* 0x1668  1904  ?StaticClass@ULanguage@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1010166d UObject::execLessLess_VectorRotator

/* public: void __thiscall UObject::execLessLess_VectorRotator(struct FFrame &,void * const) */

void __thiscall UObject::execLessLess_VectorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  FFrame *pFStack_94;
  undefined1 *puStack_90;
  FRotator aFStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  FCoords aFStack_70 [48];
  undefined4 auStack_40 [14];
  undefined4 *puStack_8;
  
                    /* 0x166d  2289  ?execLessLess_VectorRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_90 = auStack_78;
  pFStack_94 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_74);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar4 = &DAT_1023ff60;
  pFVar2 = aFStack_70;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar2 = pFVar2 + 4;
  }
  pFVar2 = FCoords::operator/=(aFStack_70,aFStack_7c);
  puVar4 = auStack_40;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pFVar2;
    pFVar2 = pFVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  thunk_FUN_1010f5b0(auStack_40,&stack0xffffff78,&pFStack_94);
  *puStack_8 = pFStack_94;
  puStack_8[1] = puStack_90;
  puStack_8[2] = unaff_EDI;
  return;
}


// ==== 10101672 appFormat

/* class FString __cdecl appFormat(class FString,class TMultiMap<class FString,class FString> const
   &) */

FString * __cdecl appFormat(FString *param_1,undefined4 param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FString aFStack_94 [12];
  FString aFStack_88 [12];
  FString aFStack_7c [12];
  FString aFStack_70 [12];
  FString aFStack_64 [12];
  FString aFStack_58 [12];
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  FString aFStack_34 [20];
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1672  2045  ?appFormat@@YA?AVFString@@V1@ABV?$TMultiMap@VFString@@V1@@@@Z
                        */
  puStack_c = &LAB_101bc4ef;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff60;
  uStack_1c = 0;
  iStack_8 = 2;
  ExceptionList = &pvStack_10;
  FString::FString(param_1);
  uStack_1c = 1;
  uStack_18 = 0;
  do {
    iStack_20 = FString::InStr((FString *)&param_2,(ushort *)&DAT_101d62f8,0);
    iVar3 = iStack_20;
    if (iStack_20 < 0) {
      if (param_3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3 + -1;
      }
    }
    FString::Left((FString *)&param_2,(int)aFStack_34);
    iStack_8._0_1_ = 3;
    if (uStack_18 == 0) {
      pFVar1 = aFStack_34;
LAB_101562ff:
      FString::operator+=(param_1,pFVar1);
    }
    else {
      pFVar1 = (FString *)thunk_FUN_10151b50(aFStack_34);
      if (pFVar1 != (FString *)0x0) goto LAB_101562ff;
      if (param_3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_3 + -1;
      }
      if (iVar3 == iVar2) {
        pFVar1 = (FString *)FString::FString(aFStack_88,(ushort *)&DAT_101d6308);
        iStack_8._0_1_ = 8;
        pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)aFStack_7c);
        iStack_8._0_1_ = 9;
        pFVar1 = (FString *)FString::operator+(pFVar1,aFStack_70);
        iStack_8._0_1_ = 10;
        FString::operator+=(param_1,pFVar1);
        iStack_8._0_1_ = 9;
        FString::~FString(aFStack_70);
        iStack_8._0_1_ = 8;
        FString::~FString(aFStack_7c);
        iStack_8._0_1_ = 3;
        FString::~FString(aFStack_88);
      }
      else {
        pFVar1 = (FString *)FString::FString(aFStack_64,(ushort *)&DAT_101d62fc);
        iStack_8._0_1_ = 4;
        pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)aFStack_58);
        iStack_8._0_1_ = 5;
        pFVar1 = (FString *)FString::operator+(pFVar1,aFStack_4c);
        iStack_8._0_1_ = 6;
        pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)aFStack_40);
        iStack_8._0_1_ = 7;
        FString::operator+=(param_1,pFVar1);
        iStack_8._0_1_ = 6;
        FString::~FString(aFStack_40);
        iStack_8._0_1_ = 5;
        FString::~FString(aFStack_4c);
        iStack_8._0_1_ = 4;
        FString::~FString(aFStack_58);
        iStack_8._0_1_ = 3;
        FString::~FString(aFStack_64);
      }
    }
    pFVar1 = (FString *)FString::Mid((FString *)&param_2,(int)aFStack_94,iVar3 + 1);
    iStack_8._0_1_ = 0xb;
    FString::operator=((FString *)&param_2,pFVar1);
    iStack_8._0_1_ = 3;
    FString::~FString(aFStack_94);
    if (iStack_20 < 0) {
      iStack_8._0_1_ = 2;
      FString::~FString(aFStack_34);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString((FString *)&param_2);
      ExceptionList = pvStack_10;
      return param_1;
    }
    iStack_8 = CONCAT31(iStack_8._1_3_,2);
    FString::~FString(aFStack_34);
    uStack_18 = uStack_18 ^ 1;
  } while( true );
}


// ==== 10101677 appQsort

/* void __cdecl appQsort(void *,int,int,int (__cdecl*)(void const *,void const *)) */

void __cdecl appQsort(void *param_1,int param_2,int param_3,_func_int_void_ptr_void_ptr *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  int iStack_f4;
  undefined4 auStack_f0 [30];
  undefined4 auStack_78 [30];
  
                    /* 0x1677  2086  ?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */
  if ((param_1 == (void *)0x0) && (param_2 != 0)) {
    puVar2 = (undefined4 *)FUN_10183cab();
    *puVar2 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    return;
  }
  if ((param_3 == 0) || (param_4 == (_func_int_void_ptr_void_ptr *)0x0)) {
    puVar2 = (undefined4 *)FUN_10183cab();
    *puVar2 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    return;
  }
  if ((uint)param_2 < 2) {
    return;
  }
  iStack_f4 = 0;
  puStack_100 = param_1;
  puStack_fc = (undefined1 *)((param_2 + -1) * param_3 + (int)param_1);
LAB_1017e573:
  while (uVar3 = (uint)((int)puStack_fc - (int)puStack_100) / (uint)param_3 + 1, 8 < uVar3) {
    puVar4 = puStack_100 + (uVar3 >> 1) * param_3;
    iVar5 = (*param_4)(puStack_100,puVar4);
    if (0 < iVar5) {
      swap();
    }
    iVar5 = (*param_4)(puStack_100,puStack_fc);
    if (0 < iVar5) {
      swap();
    }
    iVar5 = (*param_4)(puVar4,puStack_fc);
    puVar7 = puStack_100;
    puVar8 = puStack_fc;
    if (0 < iVar5) {
      swap();
    }
LAB_1017e620:
    if (puVar7 < puVar4) {
      do {
        puVar7 = puVar7 + param_3;
        if (puVar4 <= puVar7) goto LAB_1017e640;
        iVar5 = (*param_4)(puVar7,puVar4);
      } while (iVar5 < 1);
      if (puVar4 <= puVar7) goto LAB_1017e640;
    }
    else {
LAB_1017e640:
      do {
        puVar7 = puVar7 + param_3;
        if (puStack_fc < puVar7) break;
        iVar5 = (*param_4)(puVar7,puVar4);
      } while (iVar5 < 1);
    }
    do {
      puVar8 = puVar8 + -param_3;
      if (puVar8 <= puVar4) break;
      iVar5 = (*param_4)(puVar8,puVar4);
    } while (0 < iVar5);
    if (puVar7 <= puVar8) {
      if (puVar7 != puVar8) {
        puVar6 = puVar8;
        iVar5 = param_3;
        do {
          uVar1 = puVar6[(int)puVar7 - (int)puVar8];
          puVar6[(int)puVar7 - (int)puVar8] = *puVar6;
          iVar5 = iVar5 + -1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (iVar5 != 0);
      }
      if (puVar4 == puVar8) {
        puVar4 = puVar7;
      }
      goto LAB_1017e620;
    }
    puVar8 = puVar8 + param_3;
    if (puVar4 < puVar8) {
      do {
        puVar8 = puVar8 + -param_3;
        if (puVar8 <= puVar4) goto LAB_1017e6e0;
        iVar5 = (*param_4)(puVar8,puVar4);
      } while (iVar5 == 0);
      if (puVar8 <= puVar4) goto LAB_1017e6e0;
    }
    else {
LAB_1017e6e0:
      do {
        puVar8 = puVar8 + -param_3;
        if (puVar8 <= puStack_100) break;
        iVar5 = (*param_4)(puVar8,puVar4);
      } while (iVar5 == 0);
    }
    if ((int)puVar8 - (int)puStack_100 < (int)puStack_fc - (int)puVar7) goto LAB_1017e73d;
    if (puStack_100 < puVar8) {
      auStack_f0[iStack_f4] = puStack_100;
      auStack_78[iStack_f4] = puVar8;
      iStack_f4 = iStack_f4 + 1;
    }
    puStack_100 = puVar7;
    if (puStack_fc <= puVar7) goto LAB_1017e596;
  }
  shortsort(puStack_100,puStack_fc,param_3,param_4);
  goto LAB_1017e596;
LAB_1017e73d:
  if (puVar7 < puStack_fc) {
    auStack_f0[iStack_f4] = puVar7;
    auStack_78[iStack_f4] = puStack_fc;
    iStack_f4 = iStack_f4 + 1;
  }
  puStack_fc = puVar8;
  if (puVar8 <= puStack_100) {
LAB_1017e596:
    iStack_f4 = iStack_f4 + -1;
    if (iStack_f4 < 0) {
      return;
    }
    puStack_100 = (undefined1 *)auStack_f0[iStack_f4];
    puStack_fc = (undefined1 *)auStack_78[iStack_f4];
  }
  goto LAB_1017e573;
}


// ==== 1010167c UExporter::operator_new

/* public: static void * __cdecl UExporter::operator new(unsigned int,enum EInternal *) */

void * __cdecl UExporter::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x167c  372  ??2UExporter@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10101681 UObject::execCross_VectorVector

/* public: void __thiscall UObject::execCross_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execCross_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_c [4];
  float *pfStack_8;
  
                    /* 0x1681  2181  ?execCross_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_20);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = fStack_20 * fStack_18 - fStack_24 * fStack_14;
  pfStack_8[1] = unaff_ESI * fStack_14 - fStack_1c * fStack_20;
  pfStack_8[2] = fStack_1c * fStack_24 - unaff_ESI * fStack_18;
  return;
}


// ==== 10101686 UObject::execLess_FloatFloat

/* WARNING: Removing unreachable block (ram,0x1013d40e) */
/* public: void __thiscall UObject::execLess_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execLess_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x1686  2290  ?execLess_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 0;
  return;
}


// ==== 1010168b FSphere::operator=

/* public: class FSphere & __thiscall FSphere::operator=(class FSphere const &) */

FSphere * __thiscall FSphere::operator=(FSphere *this,FSphere *param_1)

{
                    /* 0x168b  491  ??4FSphere@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 10101690 appIsPureAnsi

/* int __cdecl appIsPureAnsi(unsigned short const *) */

int __cdecl appIsPureAnsi(ushort *param_1)

{
  ushort uVar1;
  
                    /* 0x1690  2063  ?appIsPureAnsi@@YAHPBG@Z */
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) {
      return 1;
    }
    if (0xff < uVar1) break;
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 0;
}


// ==== 10101695 UObject::execSubtract_VectorVector

/* public: void __thiscall UObject::execSubtract_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [3];
  float *pfStack_8;
  
                    /* 0x1695  2396  ?execSubtract_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_14);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = unaff_ESI - fStack_1c;
  pfStack_8[1] = fStack_24 - fStack_18;
  pfStack_8[2] = fStack_20 - afStack_14[0];
  return;
}


// ==== 1010169f FString::Printf

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: static class FString __cdecl FString::Printf(unsigned short const *,...) */

ushort * __cdecl FString::Printf(ushort *param_1,...)

{
  ushort auStack_200c [4094];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x169f  1694  ?Printf@FString@@SA?AV1@PBGZZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bc41f;
  pvStack_c = ExceptionList;
  uStack_10 = 0x1015600f;
  ExceptionList = &pvStack_c;
  appGetVarArgs(auStack_200c,0x1000,(ushort **)&stack0x00000008);
  FString((FString *)param_1,auStack_200c);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 101016a4 UStructProperty::operator_new

/* public: static void * __cdecl UStructProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UStructProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x16a4  415  ??2UStructProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101016a9 FString::operator+=

/* public: class FString & __thiscall FString::operator+=(unsigned short const *) */

FString * __thiscall FString::operator+=(FString *this,ushort *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x16a9  686  ??YFString@@QAEAAV0@PBG@Z */
  if (*param_1 != 0) {
    iVar1 = *(int *)(this + 4);
    iVar2 = appStrlen(param_1);
    if (iVar1 != 0) {
      *(int *)(this + 4) = *(int *)(this + 4) + iVar2;
      iVar2 = *(int *)(this + 4);
      if (*(int *)(this + 8) < iVar2) {
        *(int *)(this + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc((FArray *)this,2);
      }
      appStrcpy((ushort *)(*(int *)this + -2 + iVar1 * 2),param_1);
      return this;
    }
    TArray<unsigned_short>::Add((TArray<unsigned_short> *)this,iVar2 + 1);
    appStrcpy(*(ushort **)this,param_1);
  }
  return this;
}


// ==== 101016ae FArray::GetData

/* public: void const * __thiscall FArray::GetData(void)const  */

void * __thiscall FArray::GetData(FArray *this)

{
                    /* 0x16ae  1300  ?GetData@FArray@@QBEPBXXZ */
  return *(void **)this;
}


// ==== 101016b8 UObject::execResetConfig

/* public: void __thiscall UObject::execResetConfig(struct FFrame &,void * const) */

void __thiscall UObject::execResetConfig(UObject *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16b8  2354  ?execResetConfig@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baab0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  ResetConfig(*(UClass **)(this + 0x24));
  ExceptionList = pvStack_10;
  return;
}


// ==== 101016c2 FScale::operator=

/* public: class FScale & __thiscall FScale::operator=(class FScale const &) */

FScale * __thiscall FScale::operator=(FScale *this,FScale *param_1)

{
                    /* 0x16c2  487  ??4FScale@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


// ==== 101016c7 UObject::ClearFlags

/* public: void __thiscall UObject::ClearFlags(unsigned long) */

void __thiscall UObject::ClearFlags(UObject *this,ulong param_1)

{
                    /* 0x16c7  848  ?ClearFlags@UObject@@QAEXK@Z */
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & ~param_1;
  return;
}


// ==== 101016cc thunk_FUN_10142a00 thunk -> 10142a00

// ==== 101016d1 FRotator::IsZero

/* public: int __thiscall FRotator::IsZero(void)const  */

int __thiscall FRotator::IsZero(FRotator *this)

{
                    /* 0x16d1  1538  ?IsZero@FRotator@@QBEHXZ */
  if ((((*(uint *)this & 0xffff) == 0) && ((*(uint *)(this + 4) & 0xffff) == 0)) &&
     ((*(uint *)(this + 8) & 0xffff) == 0)) {
    return 1;
  }
  return 0;
}


// ==== 101016d6 UObject::execFloatToByte

/* public: void __thiscall UObject::execFloatToByte(struct FFrame &,void * const) */

void __thiscall UObject::execFloatToByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined1 *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x16d6  2224  ?execFloatToByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (char)(int)ROUND((float)param_1);
  return;
}


// ==== 101016db FName::ClearFlags

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FName::ClearFlags(unsigned long)const  */

void __thiscall FName::ClearFlags(FName *this,ulong param_1)

{
  uint *puVar1;
  
                    /* 0x16db  847  ?ClearFlags@FName@@QBEXK@Z */
  puVar1 = (uint *)(*(int *)(_Names + *(int *)this * 4) + 4);
  *puVar1 = *puVar1 & ~param_1;
  return;
}


// ==== 101016e0 FArchiveCountMem::FArchiveCountMem

/* public: __thiscall FArchiveCountMem::FArchiveCountMem(class UObject *) */

FArchiveCountMem * __thiscall
FArchiveCountMem::FArchiveCountMem(FArchiveCountMem *this,UObject *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x16e0  8  ??0FArchiveCountMem@@QAE@PAVUObject@@@Z */
  puStack_8 = &LAB_101b69b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = FArchive::vftable;
  *(undefined4 *)(this + 4) = 0x7b;
  *(undefined4 *)(this + 8) = 2000;
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  (**(code **)(*(int *)param_1 + 0x2c))(this);
  ExceptionList = this;
  return this;
}


// ==== 101016e5 FMoverHit::operator!=

/* public: int __thiscall FMoverHit::operator!=(class FMoverHit const &)const  */

int __thiscall FMoverHit::operator!=(FMoverHit *this,FMoverHit *param_1)

{
                    /* 0x16e5  579  ??9FMoverHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}


// ==== 101016ea FEdLoadError::operator==

/* public: int __thiscall FEdLoadError::operator==(class FEdLoadError const &)const  */

int __thiscall FEdLoadError::operator==(FEdLoadError *this,FEdLoadError *param_1)

{
  int iVar1;
  
                    /* 0x16ea  559  ??8FEdLoadError@@QBEHABV0@@Z */
  if (*(int *)this == *(int *)param_1) {
    iVar1 = FString::operator==((FString *)(this + 4),(FString *)(param_1 + 4));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 101016ef UFunction::operator_new

/* public: static void * __cdecl UFunction::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UFunction::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x16ef  381  ??2UFunction@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101016f4 FObjectExport::FObjectExport

/* public: __thiscall FObjectExport::FObjectExport(void) */

void __thiscall FObjectExport::FObjectExport(FObjectExport *this)

{
                    /* 0x16f4  93  ??0FObjectExport@@QAE@XZ */
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  return;
}


// ==== 101016f9 thunk_FUN_10132a60 thunk -> 10132a60

// ==== 101016fe UCommandlet::~UCommandlet

/* public: virtual __thiscall UCommandlet::~UCommandlet(void) */

void __thiscall UCommandlet::~UCommandlet(UCommandlet *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x16fe  322  ??1UCommandlet@@UAE@XZ */
  puStack_8 = &LAB_101b7512;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 6;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 5;
  _eh_vector_destructor_iterator_(this + 0x124,0xc,0x10,FStringNoInit::~FStringNoInit);
  iStack_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(this + 100,0xc,0x10,FStringNoInit::~FStringNoInit);
  iStack_4._0_1_ = 3;
  FString::~FString((FString *)(this + 0x58));
  iStack_4._0_1_ = 2;
  FString::~FString((FString *)(this + 0x4c));
  iStack_4._0_1_ = 1;
  FString::~FString((FString *)(this + 0x40));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString((FString *)(this + 0x34));
  iStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101703 UObjectProperty::operator_new

/* public: static void * __cdecl UObjectProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UObjectProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1703  399  ??2UObjectProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101708 FArchive::ForClient

/* public: int __thiscall FArchive::ForClient(void) */

int __thiscall FArchive::ForClient(FArchive *this)

{
                    /* 0x1708  1022  ?ForClient@FArchive@@QAEHXZ */
  return *(int *)(this + 0x24);
}


// ==== 10101712 L2ParamStack::operator=

/* public: class L2ParamStack & __thiscall L2ParamStack::operator=(class L2ParamStack &) */

L2ParamStack * __thiscall L2ParamStack::operator=(L2ParamStack *this,L2ParamStack *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1712  506  ??4L2ParamStack@@QAEAAV0@AAV0@@Z */
  puStack_c = &LAB_101bc910;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)this != 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_10108900(*(int *)this);
    *(undefined4 *)this = 0;
    Clear(this);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  lVar2 = (ulonglong)uVar1 * 4;
  _Dst = (void *)thunk_FUN_1014fad0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *(void **)this = _Dst;
  _memcpy(_Dst,*(void **)param_1,uVar1 * 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10101717 UObject::execDelegateFunction

/* public: void __thiscall UObject::execDelegateFunction(struct FFrame &,void * const) */

void __thiscall UObject::execDelegateFunction(UObject *this,FFrame *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UFunction *pUVar4;
  code *pcVar5;
  UObject *pUVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1717  2184  ?execDelegateFunction@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baa60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = *piVar1;
  ExceptionList = &pvStack_10;
  *(int **)(param_1 + 0xc) = piVar1 + 1;
  pUVar6 = this + *(int *)(iVar2 + 0x54);
  iVar2 = piVar1[1];
  *(int **)(param_1 + 0xc) = piVar1 + 2;
  if (*(int *)pUVar6 != 0) {
    iVar3 = (**(code **)(**(int **)pUVar6 + 0x30))();
    if (iVar3 != 0) {
      *(int *)pUVar6 = 0;
      *(int *)(pUVar6 + 4) = 0;
    }
    if (*(int *)pUVar6 != 0) {
      iVar2 = *(int *)*(UObject **)pUVar6;
      pUVar4 = FindFunctionChecked(*(UObject **)pUVar6,*(int *)(pUVar6 + 4),0);
      pcVar5 = *(code **)(iVar2 + 0x48);
      goto LAB_1013a550;
    }
  }
  iVar3 = *(int *)this;
  pUVar4 = FindFunctionChecked(this,iVar2,0);
  pcVar5 = *(code **)(iVar3 + 0x48);
LAB_1013a550:
  (*pcVar5)(param_1,param_2,pUVar4);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010171c UObject::SerializeRootSet

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::SerializeRootSet(class FArchive &,unsigned long,unsigned
   long) */

void __cdecl UObject::SerializeRootSet(FArchive *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iStack_24;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x171c  1851  ?SerializeRootSet@UObject@@SAXAAVFArchive@@KK@Z */
  puStack_c = &LAB_101bd330;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10162b80(param_1,&GObjRoot);
  thunk_FUN_1012b3e0(&PrivateStaticClass);
  iVar2 = _GObjObjects;
  while (iStack_24 < DAT_1033088c) {
    iVar1 = *(int *)(iVar2 + iStack_24 * 4);
    if (((*(uint *)(iVar1 + 0x1c) & param_2) != 0) &&
       ((*(uint *)(iVar1 + 0x1c) & param_3) == param_3)) {
      uStack_18 = *(undefined4 *)(iVar2 + iStack_24 * 4);
      (**(code **)(*(int *)param_1 + 0x18))(&uStack_18);
      iVar2 = _GObjObjects;
    }
    thunk_FUN_1012ae60();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101721 FLineExtentBoxIntersection

/* int __cdecl FLineExtentBoxIntersection(class FBox const &,class FVector const &,class FVector
   const &,class FVector const &,class FVector &,class FVector &,float &) */

int __cdecl
FLineExtentBoxIntersection
          (FBox *param_1,FVector *param_2,FVector *param_3,FVector *param_4,FVector *param_5,
          FVector *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  float *pfVar15;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar15 = afStack_38;
                    /* 0x1721  993
                       ?FLineExtentBoxIntersection@@YAHABVFBox@@ABVFVector@@11AAV2@2AAM@Z */
  for (iVar14 = 7; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pfVar15 = *(float *)param_1;
    param_1 = param_1 + 4;
    pfVar15 = pfVar15 + 1;
  }
  fVar4 = *(float *)param_4 + afStack_38[3];
  fVar5 = fStack_28 + *(float *)(param_4 + 4);
  fVar6 = *(float *)(param_4 + 8) + fStack_24;
  fVar7 = afStack_38[0] - *(float *)param_4;
  fVar8 = afStack_38[1] - *(float *)(param_4 + 4);
  fVar9 = afStack_38[2] - *(float *)(param_4 + 8);
  fVar10 = *(float *)param_3 - *(float *)param_2;
  fVar11 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  bVar13 = true;
  uStack_44 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  if (fVar7 <= *(float *)param_2) {
    if (*(float *)param_2 <= fVar4) {
      fStack_1c = 0.0;
    }
    else {
      if (!NAN(fVar10) && 0.0 < fVar10 != (fVar10 == 0.0)) {
        return 0;
      }
      bVar13 = false;
      fStack_1c = (fVar4 - *(float *)param_2) / fVar10;
    }
  }
  else {
    if (fVar10 <= 0.0) {
      return 0;
    }
    bVar13 = false;
    uStack_44 = 0xbf800000;
    fStack_1c = (fVar7 - *(float *)param_2) / fVar10;
  }
  if (fVar8 <= *(float *)(param_2 + 4)) {
    if (*(float *)(param_2 + 4) <= fVar5) {
      fStack_18 = 0.0;
    }
    else {
      if (0.0 <= fVar11) {
        return 0;
      }
      bVar13 = false;
      fStack_18 = (fVar5 - *(float *)(param_2 + 4)) / fVar11;
    }
  }
  else {
    if (fVar11 < 0.0 != (fVar11 == 0.0)) {
      return 0;
    }
    bVar13 = false;
    uStack_40 = 0xbf800000;
    fStack_18 = (fVar8 - *(float *)(param_2 + 4)) / fVar11;
  }
  if (fVar9 <= *(float *)(param_2 + 8)) {
    if (*(float *)(param_2 + 8) <= fVar6) {
      fStack_14 = 0.0;
      if (bVar13) {
        *(undefined4 *)param_5 = *(undefined4 *)param_2;
        *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)param_6 = 0;
        *(undefined4 *)(param_6 + 4) = 0;
        *(undefined4 *)(param_6 + 8) = 0x3f800000;
        *param_7 = 0.0;
        return 1;
      }
      goto LAB_1014e382;
    }
    fVar1 = fVar6;
    if (0.0 <= fVar12) {
      return 0;
    }
  }
  else {
    if (fVar12 < 0.0 != (fVar12 == 0.0)) {
      return 0;
    }
    uStack_3c = 0xbf800000;
    fVar1 = fVar9;
  }
  fStack_14 = (fVar1 - *(float *)(param_2 + 8)) / fVar12;
LAB_1014e382:
  if (fStack_18 <= fStack_14) {
    *param_7 = fStack_14;
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)(param_6 + 4) = 0;
  }
  else {
    *param_7 = fStack_18;
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)(param_6 + 4) = uStack_40;
    uStack_3c = 0;
  }
  *(undefined4 *)(param_6 + 8) = uStack_3c;
  if (*param_7 < fStack_1c) {
    *param_7 = fStack_1c;
    *(undefined4 *)param_6 = uStack_44;
    *(undefined4 *)(param_6 + 4) = 0;
    *(undefined4 *)(param_6 + 8) = 0;
  }
  if ((0.0 < *param_7 != (*param_7 == 0.0)) && (*param_7 <= 1.0)) {
    fVar1 = *param_7;
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)(param_2 + 8);
    *(float *)param_5 = fVar1 * fVar10 + *(float *)param_2;
    *(float *)(param_5 + 4) = fVar2 + fVar11 * fVar1;
    *(float *)(param_5 + 8) = fVar3 + fVar12 * fVar1;
    if (((fVar7 - 0.1 < *(float *)param_5) &&
        (((*(float *)param_5 < fVar4 + 0.1 && (fVar8 - 0.1 < *(float *)(param_5 + 4))) &&
         (*(float *)(param_5 + 4) < fVar5 + 0.1)))) &&
       ((fVar9 - 0.1 < *(float *)(param_5 + 8) && (*(float *)(param_5 + 8) < fVar6 + 0.1)))) {
      return 1;
    }
  }
  return 0;
}


// ==== 1010172b UFixedArrayProperty::UFixedArrayProperty

/* public: __thiscall UFixedArrayProperty::UFixedArrayProperty(enum ECppProperty,int,unsigned short
   const *,unsigned long) */

UFixedArrayProperty * __thiscall
UFixedArrayProperty::UFixedArrayProperty
          (UFixedArrayProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x172b  220  ??0UFixedArrayProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101730 UPackage::operator=

/* public: class UPackage & __thiscall UPackage::operator=(class UPackage const &) */

UPackage * __thiscall UPackage::operator=(UPackage *this,UPackage *param_1)

{
                    /* 0x1730  535  ??4UPackage@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 10101735 ULinkerLoad::DetachLazyLoader

/* private: virtual void __thiscall ULinkerLoad::DetachLazyLoader(class FLazyLoader *) */

void __thiscall ULinkerLoad::DetachLazyLoader(ULinkerLoad *this,FLazyLoader *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1735  935  ?DetachLazyLoader@ULinkerLoad@@EAEXPAVFLazyLoader@@@Z */
  puStack_c = &LAB_101bba10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = thunk_FUN_10149fd0(&param_1);
  if (iVar1 != 1) {
    FString::operator*((FString *)(this + -0x20));
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010173a UField::GetOwnerClass

/* public: virtual class UClass * __thiscall UField::GetOwnerClass(void) */

UClass * __thiscall UField::GetOwnerClass(UField *this)

{
                    /* 0x173a  1379  ?GetOwnerClass@UField@@UAEPAVUClass@@XZ */
  if (*(UClass **)(this + 0x24) != &UClass::PrivateStaticClass) {
    do {
      this = *(UField **)(this + 0x18);
    } while (*(UClass **)(this + 0x24) != &UClass::PrivateStaticClass);
  }
  return (UClass *)this;
}


// ==== 1010173f thunk_FUN_10124370 thunk -> 10124370

// ==== 10101744 UPackageMap::operator=

/* public: class UPackageMap & __thiscall UPackageMap::operator=(class UPackageMap const &) */

UPackageMap * __thiscall UPackageMap::operator=(UPackageMap *this,UPackageMap *param_1)

{
                    /* 0x1744  536  ??4UPackageMap@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  thunk_FUN_10124bd0(param_1 + 0x34);
  thunk_FUN_1011a980(param_1 + 0x40);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  thunk_FUN_10119c90();
  thunk_FUN_1011aaf0(param_1 + 0x54);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  thunk_FUN_10119e70();
  thunk_FUN_101182b0(param_1 + 0x68);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 10101749 FMemCache::FlushItem

/* private: class FMemCache::FCacheItem * __thiscall FMemCache::FlushItem(class
   FMemCache::FCacheItem *,int) */

FCacheItem * __thiscall FMemCache::FlushItem(FMemCache *this,FCacheItem *param_1,int param_2)

{
  FCacheItem *pFVar1;
  int *piVar2;
  FMemCache *extraout_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1749  1021  ?FlushItem@FMemCache@@AAEPAVFCacheItem@1@PAV21@H@Z */
  puStack_c = &LAB_101b9c90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x10) < 0x1000000) {
    ExceptionList = &pvStack_10;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (((*(int *)(param_1 + 0x18) != 0) &&
        (pFVar1 = *(FCacheItem **)(param_1 + 0x18), *(int *)pFVar1 == 0 && *(int *)(pFVar1 + 4) == 0
        )) && (param_1[0xe] == pFVar1[0xe])) {
      param_1 = MergeWithNext(this,pFVar1);
      this = extraout_ECX;
    }
    if (((*(int *)(param_1 + 0x14) != 0) &&
        (piVar2 = *(int **)(param_1 + 0x14), *piVar2 == 0 && piVar2[1] == 0)) &&
       (param_1[0xe] == *(FCacheItem *)((int)piVar2 + 0xe))) {
      param_1 = MergeWithNext(this,param_1);
    }
  }
  else if (param_2 == 0) {
    ExceptionList = &pvStack_10;
    __aullshr(*(undefined4 *)param_1);
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  ExceptionList = pvStack_10;
  return *(FCacheItem **)(param_1 + 0x14);
}


// ==== 1010174e FRangeVector::operator-

/* public: class FRangeVector __thiscall FRangeVector::operator-(class FRangeVector const &)const
    */

void __thiscall FRangeVector::operator-(FRangeVector *this,FRangeVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x174e  625  ??GFRangeVector@@QBE?AV0@ABV0@@Z */
  fVar1 = *(float *)(this + 0x10) - in_stack_00000008[4];
  fVar2 = *(float *)(this + 0x14) - in_stack_00000008[5];
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(this + 8) - in_stack_00000008[2];
  fVar3 = *(float *)(this + 0xc) - in_stack_00000008[3];
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)this - *in_stack_00000008;
  fVar4 = *(float *)(this + 4) - in_stack_00000008[1];
  fStack_18 = fVar4;
  if (fVar1 <= fVar4) {
    fStack_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *(float *)param_1 = fStack_18;
  *(float *)(param_1 + 4) = fVar4;
  *(float *)(param_1 + 8) = fStack_10;
  *(float *)(param_1 + 0xc) = fVar3;
  *(float *)(param_1 + 0x10) = fStack_8;
  *(float *)(param_1 + 0x14) = fVar2;
  return;
}


// ==== 10101758 appDebugMessagef

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl appDebugMessagef(unsigned short const *,...) */

void __cdecl appDebugMessagef(ushort *param_1,...)

{
  WCHAR WStack_2020;
  undefined1 auStack_201e [8198];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1758  2036  ?appDebugMessagef@@YAXPBGZZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101be360;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x10175e03;
  puStack_14 = &stack0xffffdfd4;
  WStack_2020 = L'\0';
  ExceptionList = &pvStack_10;
  _memset(auStack_201e,0,0x1ffe);
  appGetVarArgs((ushort *)&WStack_2020,0x1000,&param_1);
  uStack_8 = 0;
  MessageBoxW((HWND)0x0,&WStack_2020,L"appDebugMessagef",0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010175d FPreferencesInfo::FPreferencesInfo

/* public: __thiscall FPreferencesInfo::FPreferencesInfo(void) */

void __thiscall FPreferencesInfo::FPreferencesInfo(FPreferencesInfo *this)

{
                    /* 0x175d  114  ??0FPreferencesInfo@@QAE@XZ */
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
  return;
}


// ==== 10101762 ULinkerLoad::LinksToCode

/* public: virtual int __thiscall ULinkerLoad::LinksToCode(void) */

int __thiscall ULinkerLoad::LinksToCode(ULinkerLoad *this)

{
                    /* 0x1762  1570  ?LinksToCode@ULinkerLoad@@UAEHXZ */
  return *(int *)(this + 0xf0);
}


// ==== 10101767 UObject::execBoolToInt

/* public: void __thiscall UObject::execBoolToInt(struct FFrame &,void * const) */

void __thiscall UObject::execBoolToInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1767  2160  ?execBoolToInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (uint)param_1 & 1;
  return;
}


// ==== 1010176c thunk_FUN_10119f40 thunk -> 10119f40

// ==== 10101771 ParseObject

/* int __cdecl ParseObject(unsigned short const *,unsigned short const *,class UClass *,class
   UObject * &,class UObject *) */

int __cdecl
ParseObject(ushort *param_1,ushort *param_2,UClass *param_3,UObject **param_4,UObject *param_5)

{
  int iVar1;
  UObject *pUVar2;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1771  1671  ?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */
  puStack_c = &LAB_101bc000;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = Parse(param_1,param_2,auStack_220,0x40);
  if (iVar1 == 0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar1 = appStricmp(auStack_220,(ushort *)L"NONE");
  if (iVar1 == 0) {
    *param_4 = (UObject *)0x0;
  }
  else {
    pUVar2 = UObject::StaticFindObject(param_3,param_5,auStack_220,0);
    if (pUVar2 == (UObject *)0x0) {
      ExceptionList = pvStack_10;
      return 0;
    }
    *param_4 = pUVar2;
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10101776 UArrayProperty::AddCppProperty

/* public: virtual void __thiscall UArrayProperty::AddCppProperty(class UProperty *) */

void __thiscall UArrayProperty::AddCppProperty(UArrayProperty *this,UProperty *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1776  780  ?AddCppProperty@UArrayProperty@@UAEXPAVUProperty@@@Z */
  puStack_c = &LAB_101bdf40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x78) != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("!Inner",".\\UnProp.cpp",0x598);
  }
  if (param_1 == (UProperty *)0x0) {
    appFailAssert("Property",".\\UnProp.cpp",0x599);
  }
  *(UProperty **)(this + 0x78) = param_1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010177b appMemmove

/* void * __cdecl appMemmove(void *,void const *,int) */

void * __cdecl appMemmove(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    /* 0x177b  2079  ?appMemmove@@YAPAXPAXPBXH@Z */
  if ((param_2 < param_1) && (param_1 < (void *)(param_3 + (int)param_2))) {
    puVar4 = (undefined4 *)(param_3 + -4 + (int)param_2);
    puVar5 = (undefined4 *)(param_3 + -4 + (int)param_1);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = (uint)param_3 >> 2;
      uVar3 = param_3 & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1017d573_caseD_2;
        case 3:
          goto switchD_1017d573_caseD_3;
        }
        goto switchD_1017d573_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1017d573_caseD_0;
      case 1:
        goto switchD_1017d573_caseD_1;
      case 2:
        goto switchD_1017d573_caseD_2;
      case 3:
        goto switchD_1017d573_caseD_3;
      default:
        uVar2 = param_3 - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1017d573_caseD_2;
            case 3:
              goto switchD_1017d573_caseD_3;
            }
            goto switchD_1017d573_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1017d573_caseD_2;
            case 3:
              goto switchD_1017d573_caseD_3;
            }
            goto switchD_1017d573_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1017d573_caseD_2;
            case 3:
              goto switchD_1017d573_caseD_3;
            }
            goto switchD_1017d573_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_1017d573_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return param_1;
    case 2:
switchD_1017d573_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return param_1;
    case 3:
switchD_1017d573_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return param_1;
    }
switchD_1017d573_caseD_0:
    return param_1;
  }
  if (((0xff < (uint)param_3) && (DAT_1033fe34 != 0)) &&
     (((uint)param_1 & 0xf) == ((uint)param_2 & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar2 = (uint)param_3 >> 2;
    uVar3 = param_3 & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1017d3ec_caseD_2;
      case 3:
        goto switchD_1017d3ec_caseD_3;
      }
      goto switchD_1017d3ec_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1017d3ec_caseD_0;
    case 1:
      goto switchD_1017d3ec_caseD_1;
    case 2:
      goto switchD_1017d3ec_caseD_2;
    case 3:
      goto switchD_1017d3ec_caseD_3;
    default:
      uVar2 = param_3 + -4 + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (void *)((int)param_2 + 3);
        puVar4 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)param_2;
            param_2 = (undefined4 *)((int)param_2 + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1017d3ec_caseD_2;
          case 3:
            goto switchD_1017d3ec_caseD_3;
          }
          goto switchD_1017d3ec_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (void *)((int)param_2 + 2);
        puVar4 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)param_2;
            param_2 = (undefined4 *)((int)param_2 + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1017d3ec_caseD_2;
          case 3:
            goto switchD_1017d3ec_caseD_3;
          }
          goto switchD_1017d3ec_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (void *)((int)param_2 + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)param_2;
            param_2 = (undefined4 *)((int)param_2 + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1017d3ec_caseD_2;
          case 3:
            goto switchD_1017d3ec_caseD_3;
          }
          goto switchD_1017d3ec_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)param_2 + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)param_2 + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)param_2 + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)param_2 + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)param_2 + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)param_2 + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)param_2 + (uVar2 - 1) * 4);
    param_2 = (void *)((int)param_2 + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_1017d3ec_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1017d3ec_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1017d3ec_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1017d3ec_caseD_0:
  return param_1;
}


// ==== 10101780 FQuat::operator-

/* public: class FQuat __thiscall FQuat::operator-(void)const  */

void __thiscall FQuat::operator-(FQuat *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x1780  621  ??GFQuat@@QBE?AV0@XZ */
  *in_stack_00000004 = *(undefined4 *)this;
  in_stack_00000004[1] = *(undefined4 *)(this + 4);
  in_stack_00000004[2] = *(undefined4 *)(this + 8);
  in_stack_00000004[3] = -*(float *)(this + 0xc);
  return;
}


// ==== 1010178a UStructProperty::ImportText

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual unsigned short const * __thiscall UStructProperty::ImportText(unsigned short
   const *,unsigned char *,int)const  */

ushort * __thiscall
UStructProperty::ImportText(UStructProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  ushort *puVar5;
  UStructProperty *extraout_ECX;
  UStructProperty *extraout_ECX_00;
  UStructProperty *extraout_ECX_01;
  UStructProperty *extraout_ECX_02;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  FFeedbackContext *pFVar9;
  FOutputDevice aFStack_c0 [140];
  int *piStack_34;
  UStructProperty *pUStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  UStructProperty *pUStack_1c;
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x178a  1454  ?ImportText@UStructProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be230;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff34;
  uStack_8 = 0;
  puVar5 = param_1 + 1;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  puVar3 = &stack0xffffff34;
  if (*param_1 == 0x28) {
LAB_10174851:
    do {
      puStack_14 = puVar3;
      if (*puVar5 == 0x29) {
        ExceptionList = pvStack_10;
        return puVar5 + 1;
      }
      iVar6 = 0;
      for (iStack_24 = 0; iStack_24 < 0x3f; iStack_24 = iStack_24 + 1) {
        uVar1 = *puVar5;
        this = (UStructProperty *)(uint)uVar1;
        if (((uVar1 == 0) || (uVar1 == 0x3d)) || (uVar1 == 0x5b)) break;
        *(ushort *)(aFStack_c0 + iStack_24 * 2) = uVar1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)(aFStack_c0 + iStack_24 * 2) = 0;
      iStack_24 = iStack_24 + 1;
      if (*puVar5 == 0x5b) {
        puVar7 = puVar5 + 1;
        for (puVar8 = puVar7; (0x2f < *puVar8 && (*puVar8 < 0x3a)); puVar8 = puVar8 + 1) {
        }
        puVar5 = puVar8 + 1;
        puStack_18 = puVar5;
        if (*puVar8 == 0x5d) {
          iVar6 = appAtoi(puVar7);
          this = extraout_ECX;
          goto LAB_1017490a;
        }
LAB_101748d6:
        param_1 = (ushort *)0x315;
        this = (UStructProperty *)GWarn;
        pFVar9 = GWarn;
        break;
      }
LAB_1017490a:
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      puStack_18 = puVar5;
      if (uVar1 != 0x3d) {
        pFVar9 = (FFeedbackContext *)L"ImportText: Missing key name in: %s";
        break;
      }
      if (iVar6 < 0) goto LAB_101748d6;
      FName::FName((FName *)&iStack_28,(ushort *)aFStack_c0,0);
      iStack_20 = 0;
      if (iStack_28 == 0) {
LAB_10174a2b:
        FOutputDevice::Logf(aFStack_c0,(EName)GWarn,(ushort *)0x315);
        this = (UStructProperty *)0x0;
        pUStack_2c = (UStructProperty *)0x0;
        while ((((uVar1 = *puVar5, pFVar9 = GWarn, uVar1 != 0 && (uVar1 != 10)) && (uVar1 != 0xd))
               && ((0 < (int)this || ((uVar1 != 0x29 && (uVar1 != 0x2c))))))) {
          if (uVar1 == 0x22) {
            while (uVar1 = *puVar5, uVar1 != 0) {
              if (uVar1 == 0x22) goto LAB_10174aea;
              if ((uVar1 == 10) || (uVar1 == 0xd)) break;
              puVar5 = puVar5 + 1;
              puStack_18 = puVar5;
            }
            if (*puVar5 != 0x22) {
              param_1 = (ushort *)0x315;
              goto LAB_101748e2;
            }
          }
          else if (uVar1 == 0x28) {
            this = this + 1;
            pUStack_2c = this;
          }
          else if ((uVar1 == 0x29) && (this = this + -1, pUStack_2c = this, (int)this < 0))
          goto LAB_101748d6;
LAB_10174aea:
          puVar5 = puVar5 + 1;
          puStack_18 = puVar5;
        }
        if (0 < (int)this) {
          param_1 = (ushort *)0x315;
          break;
        }
      }
      else {
        thunk_FUN_10119210(*(undefined4 *)(pUStack_1c + 0x78));
        this = extraout_ECX_00;
        while (piVar2 = piStack_34, piStack_34 != (int *)0x0) {
          if (((piStack_34[8] == iStack_28) && (piStack_34[0x10] * piStack_34[0x11] != 0)) &&
             (iVar4 = (**(code **)(*piStack_34 + 0xb0))(), iVar4 != 0)) {
            if ((piVar2[0x10] <= iVar6) ||
               (puVar5 = (ushort *)(**(code **)(*piVar2 + 0x9c))(puVar5), puStack_18 = puVar5,
               puVar5 == (ushort *)0x0)) goto LAB_101748d6;
            iStack_20 = 1;
            this = extraout_ECX_01;
            goto LAB_101749f7;
          }
          piStack_34 = (int *)piVar2[0xe];
          thunk_FUN_10114340();
          this = extraout_ECX_02;
        }
        if (iStack_20 == 0) goto LAB_10174a2b;
      }
LAB_101749f7:
      puVar3 = puStack_14;
      if (*puVar5 == 0x2c) {
        puVar5 = puVar5 + 1;
        goto LAB_10174851;
      }
      pFVar9 = GWarn;
    } while (*puVar5 == 0x29);
LAB_101748e2:
    FOutputDevice::Logf((FOutputDevice *)this,(EName)pFVar9,param_1);
  }
  else if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    puStack_18 = puVar5;
    FOutputDevice::Logf2((FOutputDevice *)this,(EName)GLog,(ushort *)0x2ff);
  }
  ExceptionList = pvStack_10;
  return (ushort *)0x0;
}


// ==== 1010178f thunk_FUN_10119a80 thunk -> 10119a80

// ==== 10101794 FMemCache::Exec

/* public: int __thiscall FMemCache::Exec(unsigned short const *,class FOutputDevice &) */

int __thiscall FMemCache::Exec(FMemCache *this,ushort *param_1,FOutputDevice *param_2)

{
  FOutputDevice *pFVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1794  952  ?Exec@FMemCache@@QAEHPBGAAVFOutputDevice@@@Z */
  puStack_c = &LAB_101b9cb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar2 = ParseCommand(&param_1,(ushort *)L"DUMPCACHE");
  pFVar1 = param_2;
  if (iVar2 != 0) {
    for (iVar2 = *(int *)(this + 0x18); iVar2 != *(int *)(this + 0x1c);
        iVar2 = *(int *)(iVar2 + 0x14)) {
      FOutputDevice::Logf(*(FOutputDevice **)(iVar2 + 0x14),(ushort *)pFVar1);
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10101799 UBoolProperty::~UBoolProperty

/* public: virtual __thiscall UBoolProperty::~UBoolProperty(void) */

void __thiscall UBoolProperty::~UBoolProperty(UBoolProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1799  318  ??1UBoolProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7a58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010179e UObject::execTrue

/* public: void __thiscall UObject::execTrue(struct FFrame &,void * const) */

void __thiscall UObject::execTrue(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x179e  2399  ?execTrue@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined4 *)param_2 = 1;
  return;
}


// ==== 101017a3 thunk_FUN_10134410 thunk -> 10134410

// ==== 101017a8 UArrayProperty::UArrayProperty

/* public: __thiscall UArrayProperty::UArrayProperty(void) */

UArrayProperty * __thiscall UArrayProperty::UArrayProperty(UArrayProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x17a8  184  ??0UArrayProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7df8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101017b2 thunk_FUN_10127a20 thunk -> 10127a20

// ==== 101017bc UObject::ProcessInternal

/* public: void __thiscall UObject::ProcessInternal(struct FFrame &,void * const) */

void __thiscall UObject::ProcessInternal(UObject *this,FFrame *param_1,void *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint unaff_EDI;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_404 [1028];
  
                    /* 0x17bc  1733  ?ProcessInternal@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x8c) & 0x20;
  iVar3 = (**(code **)(*(int *)this + 0x1c))
                    (*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),0);
  if (((iVar3 == 0) &&
      (((0x3f < *(int *)(*(int *)(param_1 + 4) + 0x20) - 300U ||
        (iVar3 = *(int *)(this + 0xc), iVar3 == 0)) ||
       (uVar6 = __allshl(),
       ((uint)uVar6 & *(uint *)(iVar3 + 0x20)) != 0 ||
       ((uint)((ulonglong)uVar6 >> 0x20) & *(uint *)(iVar3 + 0x24)) != 0)))) &&
     ((uVar4 & *(uint *)(this + 0x1c)) == 0)) {
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | uVar4;
    puVar5 = (undefined4 *)&stack0xfffffbf4;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    DAT_1028377c = DAT_1028377c + 1;
    if (0xfa < DAT_1028377c) {
      FOutputDevice::Logf((FOutputDevice *)0x0,(EName)param_1,(ushort *)0x2f9);
    }
    cVar1 = **(char **)(param_1 + 0xc);
    while (cVar1 != '\x04') {
      bVar2 = **(byte **)(param_1 + 0xc);
      *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
      (*(code *)(&GNatives)[bVar2])(param_1,auStack_404);
      cVar1 = **(char **)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    bVar2 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar2])(param_1,param_1);
    if (**(char **)(param_1 + 0xc) == 'B') {
      *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
      (*DAT_1027f878)(param_1,param_1);
    }
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & ~unaff_EDI;
    DAT_1028377c = DAT_1028377c + -1;
  }
  return;
}


// ==== 101017c6 UObjectProperty::NetSerializeItem

/* public: virtual int __thiscall UObjectProperty::NetSerializeItem(class FArchive &,class
   UPackageMap *,void *)const  */

int __thiscall
UObjectProperty::NetSerializeItem
          (UObjectProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
  int iVar1;
  
                    /* 0x17c6  1637
                       ?NetSerializeItem@UObjectProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  iVar1 = (**(code **)(*(int *)param_2 + 0x6c))(param_1,*(undefined4 *)(this + 0x78),param_3);
  return iVar1;
}


// ==== 101017cb UProperty::ShouldSerializeValue

/* public: int __thiscall UProperty::ShouldSerializeValue(class FArchive &)const  */

int __thiscall UProperty::ShouldSerializeValue(UProperty *this,FArchive *param_1)

{
  uint uVar1;
  
                    /* 0x17cb  1870  ?ShouldSerializeValue@UProperty@@QBEHAAVFArchive@@@Z */
  uVar1 = *(uint *)(this + 0x48);
  if ((((uVar1 & 0x1000) == 0) && (((uVar1 & 0x2000) == 0 || (*(int *)(param_1 + 0x1c) == 0)))) &&
     (((uVar1 & 0x20000000) == 0 || (*(int *)(param_1 + 0x14) == 0)))) {
    return 1;
  }
  return 0;
}


// ==== 101017d0 ULinkerLoad::ULinkerLoad

/* public: __thiscall ULinkerLoad::ULinkerLoad(class UObject *,void *,int,unsigned long) */

ULinkerLoad * __thiscall
ULinkerLoad::ULinkerLoad(ULinkerLoad *this,UObject *param_1,void *param_2,int param_3,ulong param_4)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17d0  239  ??0ULinkerLoad@@QAE@PAVUObject@@PAXHK@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101bbd42;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  ULinker::ULinker((ULinker *)this,param_1);
  *(undefined ***)(this + 0xc0) = FArchive::vftable;
  *(undefined4 *)(this + 0xc4) = 0x7b;
  *(undefined4 *)(this + 200) = 2000;
  *(undefined4 *)(this + 0xcc) = 0x1e;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 1;
  *(undefined4 *)(this + 0xe4) = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  *(undefined ***)this = vftable_for_ULinker_;
  *(undefined ***)(this + 0xc0) = vftable_for_FArchive_;
  *(ulong *)(this + 0xf8) = param_4;
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x514) = 0;
  uStack_8 = 6;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (**(code **)(*(int *)GFileManager + 4))(param_2,param_3);
    *(int *)(this + iVar3 * 4 + 0x518) = iVar1;
    if (iVar1 == 0) {
      puVar2 = LocalizeError((ushort *)L"OpenFailed",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar2);
    }
  }
  LoadObject(this);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101017d5 thunk_FUN_1012b2b0 thunk -> 1012b2b0

// ==== 101017da UObject::execCaps

/* public: void __thiscall UObject::execCaps(struct FFrame &,void * const) */

void __thiscall UObject::execCaps(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  FArray *pFStack_4;
  
                    /* 0x17da  2168  ?execCaps@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb0a0;
  pvStack_c = ExceptionList;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  pFStack_4 = (FArray *)0x2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar5 = (FArray *)FString::Caps((FString *)&stack0xffffffd4);
  pFVar4 = pFStack_4;
  uStack_10._0_1_ = 3;
  if (pFStack_4 != pFVar5) {
    uVar2 = *(undefined4 *)(pFVar5 + 4);
    *(undefined4 *)(pFStack_4 + 8) = uVar2;
    *(undefined4 *)(pFStack_4 + 4) = uVar2;
    FArray::Realloc(pFStack_4,2);
    iVar3 = *(int *)(pFVar4 + 4);
    if (iVar3 != 0) {
      if (*(int *)(pFVar5 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar5;
      }
      _memcpy(*(void **)pFVar4,_Src,iVar3 * 2);
    }
  }
  uStack_10._0_1_ = 4;
  uStack_20 = 0;
  uStack_1c = 0;
  FArray::Realloc((FArray *)&uStack_24,2);
  uStack_10 = CONCAT31(uStack_10._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_24);
  uStack_10 = 5;
  FArray::Realloc((FArray *)&stack0xffffffd0,2);
  uStack_10 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd0);
  ExceptionList = pvStack_18;
  return;
}


// ==== 101017df UObject::execMultiplyMultiply_FloatFloat

/* public: void __thiscall UObject::execMultiplyMultiply_FloatFloat(struct FFrame &,void * const) */

void __thiscall
UObject::execMultiplyMultiply_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  double dVar2;
  undefined4 uStack_4;
  
                    /* 0x17df  2312  ?execMultiplyMultiply_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appPow((double)(float)&uStack_4,(double)(float)&uStack_4);
  *unaff_ESI = (float)dVar2;
  return;
}


// ==== 101017e4 thunk_FUN_10114810 thunk -> 10114810

// ==== 101017e9 thunk_FUN_1010b240 thunk -> 1010b240

// ==== 101017ee thunk_FUN_10162dc0 thunk -> 10162dc0

// ==== 101017f3 ParseToken

/* class FString __cdecl ParseToken(unsigned short const * &,int) */

ushort ** __cdecl ParseToken(ushort **param_1,int param_2)

{
  int iVar1;
  int in_stack_0000000c;
  ushort auStack_80c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x17f3  1674  ?ParseToken@@YA?AVFString@@AAPBGH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bc45f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = ParseToken((ushort **)param_2,auStack_80c,0x400,in_stack_0000000c);
  if (iVar1 == 0) {
    FString::FString((FString *)param_1,(ushort *)&DAT_101d62e0);
  }
  else {
    FString::FString((FString *)param_1,auStack_80c);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 101017f8 UObject::execNameToBool

/* public: void __thiscall UObject::execNameToBool(struct FFrame &,void * const) */

void __thiscall UObject::execNameToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x17f8  2321  ?execNameToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (uint)(param_1 != (FFrame *)0x0);
  return;
}


// ==== 101017fd thunk_FUN_10135ca0 thunk -> 10135ca0

// ==== 10101807 thunk_FUN_101098b0 thunk -> 101098b0

// ==== 1010180c FName::Hardcode

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl FName::Hardcode(struct FNameEntry *) */

void __cdecl FName::Hardcode(FNameEntry *param_1)

{
  uint uVar1;
  int iVar2;
  FScopeCriticalSection aFStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x180c  1425  ?Hardcode@FName@@SAXPAUFNameEntry@@@Z */
  puStack_c = &LAB_101bc588;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_20,NameCS);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uVar1 = thunk_FUN_1014fa60(param_1 + 0xc);
  *(FNameEntry ***)(param_1 + 8) = (&NameHash)[uVar1 & 0xfff];
  (&NameHash)[uVar1 & 0xfff] = (FNameEntry **)param_1;
  for (iVar2 = DAT_10327ae4; iStack_1c = iVar2, iVar2 <= *(int *)param_1; iVar2 = iVar2 + 1) {
    uStack_18 = 0;
    thunk_FUN_10156eb0(&uStack_18);
  }
  if (*(int *)(_Names + *(int *)param_1 * 4) != 0) {
    FOutputDevice::Logf(_Names,(ushort *)GError);
  }
  *(FNameEntry **)(_Names + *(int *)param_1 * 4) = param_1;
  uStack_8 = uStack_8 & 0xffffff00;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_20);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101811 thunk_FUN_10108fe0 thunk -> 10108fe0

// ==== 10101816 FVehicleRoutePointHit::FVehicleRoutePointHit

/* public: __thiscall FVehicleRoutePointHit::FVehicleRoutePointHit(void) */

void __thiscall FVehicleRoutePointHit::FVehicleRoutePointHit(FVehicleRoutePointHit *this)

{
                    /* 0x1816  170  ??0FVehicleRoutePointHit@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 1010181b L2ParamStack::L2ParamStack

/* public: __thiscall L2ParamStack::L2ParamStack(class L2ParamStack &) */

L2ParamStack * __thiscall L2ParamStack::L2ParamStack(L2ParamStack *this,L2ParamStack *param_1)

{
                    /* 0x181b  173  ??0L2ParamStack@@QAE@AAV0@@Z */
  return this;
}


// ==== 10101825 thunk_FUN_1014c5e0 thunk -> 1014c5e0

// ==== 1010182a FCoords::OrthoRotation

/* public: class FRotator __thiscall FCoords::OrthoRotation(void)const  */

FRotator * __thiscall FCoords::OrthoRotation(FCoords *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FCoords *pFVar5;
  int iVar6;
  undefined4 *puVar7;
  double dVar8;
  FRotator *in_stack_00000004;
  undefined4 auStack_a0 [6];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  FCoords aFStack_70 [108];
  
                    /* 0x182a  1652  ?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x10);
  appAtan2((double)*(float *)(this + 0x10),(double)*(float *)(this + 0xc));
  uVar3 = FUN_1017b700();
  dVar8 = appSqrt((double)(fVar1 * fVar1 + fVar2 * fVar2));
  appAtan2((double)*(float *)(this + 0x14),dVar8);
  uVar4 = FUN_1017b700();
  *(undefined4 *)(in_stack_00000004 + 4) = uVar3;
  *(undefined4 *)in_stack_00000004 = uVar4;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  puVar7 = &DAT_1023ff60;
  pFVar5 = aFStack_70;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pFVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    pFVar5 = pFVar5 + 4;
  }
  pFVar5 = operator/=(aFStack_70,in_stack_00000004);
  fVar1 = *(float *)(this + 0x1c);
  puVar7 = auStack_a0;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *(undefined4 *)pFVar5;
    pFVar5 = pFVar5 + 4;
    puVar7 = puVar7 + 1;
  }
  appAtan2((double)(fStack_80 * *(float *)(this + 0x2c) +
                   *(float *)(this + 0x28) * fStack_84 + *(float *)(this + 0x24) * fStack_88),
           (double)(fStack_84 * fVar1 + fStack_88 * *(float *)(this + 0x18) +
                   fStack_80 * *(float *)(this + 0x20)));
  uVar3 = FUN_1017b700();
  *(undefined4 *)(in_stack_00000004 + 8) = uVar3;
  return in_stack_00000004;
}


// ==== 1010182f thunk_FUN_10128570 thunk -> 10128570

// ==== 10101834 FVehicleRoutePointHit::operator=

/* public: class FVehicleRoutePointHit & __thiscall FVehicleRoutePointHit::operator=(class
   FVehicleRoutePointHit const &) */

FVehicleRoutePointHit * __thiscall
FVehicleRoutePointHit::operator=(FVehicleRoutePointHit *this,FVehicleRoutePointHit *param_1)

{
                    /* 0x1834  504  ??4FVehicleRoutePointHit@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10101839 thunk_FUN_101088c0 thunk -> 101088c0

// ==== 1010183e FFrame::ReadFloat

/* public: float __thiscall FFrame::ReadFloat(void) */

float __thiscall FFrame::ReadFloat(FFrame *this)

{
  float fVar1;
  
                    /* 0x183e  1748  ?ReadFloat@FFrame@@QAEMXZ */
  fVar1 = **(float **)(this + 0xc);
  *(float **)(this + 0xc) = *(float **)(this + 0xc) + 1;
  return fVar1;
}


// ==== 10101843 appStrchr

/* unsigned short * __cdecl appStrchr(unsigned short const *,int) */

ushort * __cdecl appStrchr(ushort *param_1,int param_2)

{
                    /* 0x1843  2106  ?appStrchr@@YAPAGPBGH@Z */
  while( true ) {
    if (*param_1 == 0) {
      if (*param_1 != (ushort)param_2) {
        param_1 = (ushort *)0x0;
      }
      return param_1;
    }
    if (*param_1 == (ushort)param_2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


// ==== 10101848 UObject::execLeft

/* public: void __thiscall UObject::execLeft(struct FFrame &,void * const) */

void __thiscall UObject::execLeft(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  undefined4 *puStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  FArray *pFStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1848  2282  ?execLeft@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb520;
  pFStack_c = ExceptionList;
  uStack_24 = 0;
  pvStack_20 = (void *)0x0;
  uStack_1c = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pFStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &uStack_24;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar5 = (FArray *)FString::Left((FString *)&stack0xffffffcc,(int)&uStack_28);
  pFVar4 = pFStack_c;
  uStack_18._0_1_ = 3;
  if (pFStack_c != pFVar5) {
    uVar2 = *(undefined4 *)(pFVar5 + 4);
    *(undefined4 *)(pFStack_c + 8) = uVar2;
    *(undefined4 *)(pFStack_c + 4) = uVar2;
    FArray::Realloc(pFStack_c,2);
    iVar3 = *(int *)(pFVar4 + 4);
    if (iVar3 != 0) {
      if (*(int *)(pFVar5 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar5;
      }
      _memcpy(*(void **)pFVar4,_Src,iVar3 * 2);
    }
  }
  uStack_18._0_1_ = 4;
  uStack_28 = 0;
  uStack_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  uStack_18 = CONCAT31(uStack_18._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  uStack_18 = 5;
  FArray::Realloc((FArray *)&puStack_38,2);
  uStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_38);
  ExceptionList = pvStack_20;
  return;
}


// ==== 1010184d FVector::Projection

/* public: class FVector __thiscall FVector::Projection(void)const  */

void __thiscall FVector::Projection(FVector *this)

{
  float fVar1;
  float *in_stack_00000004;
  
                    /* 0x184d  1737  ?Projection@FVector@@QBE?AV1@XZ */
  fVar1 = *(float *)(this + 8);
  *in_stack_00000004 = (1.0 / fVar1) * *(float *)this;
  in_stack_00000004[1] = (1.0 / fVar1) * *(float *)(this + 4);
  in_stack_00000004[2] = 1.0;
  return;
}


// ==== 10101852 UObject::DeleteLoadingProgress

/* public: void __thiscall UObject::DeleteLoadingProgress(void) */

void __thiscall UObject::DeleteLoadingProgress(UObject *this)

{
                    /* 0x1852  911  ?DeleteLoadingProgress@UObject@@QAEXXZ */
  LoadingProgress = (_func_void_float *)0x0;
  return;
}


// ==== 10101857 FMatrix::Determinant

/* public: float __thiscall FMatrix::Determinant(void)const  */

float __thiscall FMatrix::Determinant(FMatrix *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x1857  938  ?Determinant@FMatrix@@QBEMXZ */
  fVar1 = *(float *)(this + 0x3c) * *(float *)(this + 0x28) -
          *(float *)(this + 0x38) * *(float *)(this + 0x2c);
  fVar5 = *(float *)(this + 0x18) * *(float *)(this + 0x3c) -
          *(float *)(this + 0x1c) * *(float *)(this + 0x38);
  fVar4 = *(float *)(this + 0x2c) * *(float *)(this + 0x18) -
          *(float *)(this + 0x1c) * *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 8) * *(float *)(this + 0x3c) -
          *(float *)(this + 0x38) * *(float *)(this + 0xc);
  fVar3 = *(float *)(this + 8) * *(float *)(this + 0x2c) -
          *(float *)(this + 0x28) * *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 8) * *(float *)(this + 0x1c) -
          *(float *)(this + 0x18) * *(float *)(this + 0xc);
  return (((*(float *)(this + 0x34) * fVar4 +
           (*(float *)(this + 0x14) * fVar1 - *(float *)(this + 0x24) * fVar5)) * *(float *)this -
          *(float *)(this + 0x10) *
          (*(float *)(this + 0x34) * fVar3 +
          (*(float *)(this + 4) * fVar1 - *(float *)(this + 0x24) * fVar2))) +
         *(float *)(this + 0x20) *
         (*(float *)(this + 0x34) * fVar6 +
         (*(float *)(this + 4) * fVar5 - *(float *)(this + 0x14) * fVar2))) -
         ((*(float *)(this + 4) * fVar4 - *(float *)(this + 0x14) * fVar3) +
         *(float *)(this + 0x24) * fVar6) * *(float *)(this + 0x30);
}


// ==== 1010185c FVector::TransformPointBy

/* public: class FVector __thiscall FVector::TransformPointBy(class FCoords const &)const  */

FCoords * __thiscall FVector::TransformPointBy(FVector *this,FCoords *param_1)

{
                    /* 0x185c  1979  ?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */
  thunk_FUN_1010f510();
  return param_1;
}


// ==== 10101861 FFileStream::Read

/* public: int __thiscall FFileStream::Read(int,int) */

int __thiscall FFileStream::Read(FFileStream *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  DWORD aDStack_44 [16];
  
                    /* 0x1861  1746  ?Read@FFileStream@@QAEHHH@Z */
  iVar1 = param_1 * 0x24;
  if ((*(int *)(Streams + iVar1 + 4) != 0) && (*(int *)(Streams + iVar1) != 0)) {
    if (*(int *)(Streams + iVar1 + 0x20) == 0) {
      aDStack_44[0] = 0;
      BVar3 = ReadFile(*(HANDLE *)(Streams + iVar1 + 4),*(LPVOID *)(Streams + iVar1),param_2,
                       aDStack_44,(LPOVERLAPPED)0x0);
      if (BVar3 != 0) {
        *(DWORD *)(Streams + iVar1) = *(int *)(Streams + iVar1) + aDStack_44[0];
      }
      if (aDStack_44[0] != param_2) {
        *(undefined4 *)(Streams + iVar1 + 0x1c) = 1;
        return BVar3;
      }
      return BVar3;
    }
    if (*(int *)(Streams + iVar1 + 0x20) - 1U < 2) {
      iVar4 = 0;
      if (param_2 < 1) {
        return 1;
      }
      do {
        iVar2 = ov_read(*(undefined4 *)(Streams + iVar1 + 8),*(int *)(Streams + iVar1) + iVar4,
                        param_2 - iVar4,0,2,1);
        if (iVar2 == 0) {
          if (*(int *)(Streams + iVar1 + 0x20) != 2) {
            _memset((void *)(*(int *)(Streams + iVar1) + iVar4),0,param_2 - iVar4);
            *(undefined4 *)(Streams + iVar1 + 0x1c) = 1;
            return 0;
          }
          ov_time_seek(*(undefined4 *)(Streams + iVar1 + 8),0);
        }
        else {
          if (iVar2 < 0) {
            _memset((void *)(*(int *)(Streams + iVar1) + iVar4),0,param_2 - iVar4);
            return 0;
          }
          iVar4 = iVar4 + iVar2;
        }
      } while (iVar4 < param_2);
      return 1;
    }
  }
  return 0;
}


// ==== 10101866 FBox::operator+=

/* public: class FBox & __thiscall FBox::operator+=(class FVector const &) */

FBox * __thiscall FBox::operator+=(FBox *this,FVector *param_1)

{
  float fVar1;
  float fVar2;
  
                    /* 0x1866  677  ??YFBox@@QAEAAV0@ABVFVector@@@Z */
  if (this[0x18] == (FBox)0x0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)this = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0x14);
    this[0x18] = (FBox)0x1;
    return this;
  }
  fVar1 = *(float *)param_1;
  if (*(float *)this <= fVar1) {
    fVar1 = *(float *)this;
  }
  *(float *)this = fVar1;
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(this + 4) <= fVar1) {
    fVar1 = *(float *)(this + 4);
  }
  *(float *)(this + 4) = fVar1;
  fVar1 = *(float *)(param_1 + 8);
  if (*(float *)(this + 8) <= fVar1) {
    fVar1 = *(float *)(this + 8);
  }
  *(float *)(this + 8) = fVar1;
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)param_1;
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  *(float *)(this + 0xc) = fVar2;
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(param_1 + 4);
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  *(float *)(this + 0x10) = fVar2;
  fVar1 = *(float *)(this + 0x14);
  fVar2 = *(float *)(param_1 + 8);
  if ((NAN(fVar2) || NAN(fVar1)) || fVar2 < fVar1 == (fVar2 == fVar1)) {
    *(float *)(this + 0x14) = fVar2;
    return this;
  }
  *(float *)(this + 0x14) = fVar1;
  return this;
}


// ==== 1010186b FRange::GridSnap

/* public: class FRange __thiscall FRange::GridSnap(class FRange const &) */

FRange * __thiscall FRange::GridSnap(FRange *this,FRange *param_1)

{
  float10 fVar1;
  undefined4 *in_stack_00000008;
  float fVar2;
  
                    /* 0x186b  1420  ?GridSnap@FRange@@QAE?AV1@ABV1@@Z */
  fVar1 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 4),in_stack_00000008[1]);
  fVar2 = (float)fVar1;
  fVar1 = (float10)thunk_FUN_1010c390(*(undefined4 *)this,*in_stack_00000008);
  FRange(param_1,(float)fVar1,fVar2);
  return param_1;
}


// ==== 10101870 ULinkerLoad::Destroy

/* private: virtual void __thiscall ULinkerLoad::Destroy(void) */

void __thiscall ULinkerLoad::Destroy(ULinkerLoad *this)

{
  ushort *puVar1;
  FOutputDevice *this_00;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1870  917  ?Destroy@ULinkerLoad@@EAEXXZ */
  puStack_c = &LAB_101bba00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    puVar1 = UObject::GetFullName(*(UObject **)(this + 0x34),(ushort *)0x0);
    thunk_FUN_101482e0(puVar1);
    FOutputDevice::Logf2(this_00,(ushort *)GLog);
  }
  DetachAllLazyLoaders(this,0);
  DetachAllRoughLoaders(this,0);
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x94); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(this + 0x90) + 0x1c + iVar2 * 0x24) != 0) {
      DetachExport(this,iVar2);
    }
  }
  thunk_FUN_10149350();
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    if ((*(int *)(this + iVar2 * 4 + 0x518) != 0) &&
       (*(undefined4 **)(this + iVar2 * 4 + 0x518) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(this + iVar2 * 4 + 0x518))();
    }
    *(undefined4 *)(this + iVar2 * 4 + 0x518) = 0;
  }
  UObject::Destroy((UObject *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101875 thunk_FUN_101492e0 thunk -> 101492e0

// ==== 1010187a FQuat::operator-

/* public: class FQuat __thiscall FQuat::operator-(class FQuat const &)const  */

void __thiscall FQuat::operator-(FQuat *this,FQuat *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x187a  620  ??GFQuat@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *(float *)this - *in_stack_00000008;
  *(float *)(param_1 + 4) = *(float *)(this + 4) - in_stack_00000008[1];
  *(float *)(param_1 + 8) = *(float *)(this + 8) - in_stack_00000008[2];
  *(float *)(param_1 + 0xc) = *(float *)(this + 0xc) - in_stack_00000008[3];
  return;
}


// ==== 1010187f UObject::execMultiplyEqual_IntFloat

/* public: void __thiscall UObject::execMultiplyEqual_IntFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiplyEqual_IntFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  uchar *puVar3;
  undefined4 uStack_4;
  
                    /* 0x187f  2308  ?execMultiplyEqual_IntFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar3 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar3 = &stack0xfffffff4;
  }
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar2 = FUN_1017b700();
  *(undefined4 *)puVar3 = uVar2;
  *unaff_ESI = uVar2;
  return;
}


// ==== 10101884 thunk_FUN_10170550 thunk -> 10170550

// ==== 10101889 UCommandlet::execMain

/* public: void __thiscall UCommandlet::execMain(struct FFrame &,void * const) */

void __thiscall UCommandlet::execMain(UCommandlet *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined2 *unaff_ESI;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
                    /* 0x1889  2300  ?execMain@UCommandlet@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bd0a0;
  pvStack_c = ExceptionList;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  puStack_4 = (undefined4 *)0x2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pvStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (unaff_EBX == 0) {
    unaff_ESI = &DAT_101cdd44;
  }
  uVar2 = (**(code **)(*(int *)this + 0x68))(unaff_ESI);
  *puStack_4 = uVar2;
  uStack_10 = 3;
  FArray::Realloc((FArray *)&stack0xffffffdc,2);
  uStack_10 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffdc);
  ExceptionList = pvStack_18;
  return;
}


// ==== 1010188e thunk_FUN_10137ff0 thunk -> 10137ff0

// ==== 10101893 FClassNetCache::FClassNetCache

/* public: __thiscall FClassNetCache::FClassNetCache(class UClass *) */

FClassNetCache * __thiscall FClassNetCache::FClassNetCache(FClassNetCache *this,UClass *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1893  28  ??0FClassNetCache@@QAE@PAVUClass@@@Z */
  puStack_8 = &LAB_101ba9a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(UClass **)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  uStack_4 = 3;
  thunk_FUN_10137ff0();
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101898 thunk_FUN_10130c50 thunk -> 10130c50

// ==== 1010189d FMemCache::Unhash

/* private: void __thiscall FMemCache::Unhash(unsigned __int64) */

void __thiscall FMemCache::Unhash(FMemCache *this,__uint64 param_1)

{
  FOutputDevice *pFVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0x189d  1985  ?Unhash@FMemCache@@AAEX_K@Z */
  uVar3 = (((uint)param_1 >> 0xc ^ (uint)param_1) >> 0xc ^ (uint)param_1) & 0x3fff;
  iVar2 = *(int *)(this + uVar3 * 4 + 0x24);
  pFVar1 = (FOutputDevice *)(this + uVar3 * 4 + 0x24);
  while( true ) {
    if (iVar2 == 0) {
      FOutputDevice::Logf((FOutputDevice *)this,(ushort *)GError);
      return;
    }
    this = *(FMemCache **)pFVar1;
    if ((*(uint *)this == (uint)param_1) && (*(int *)(this + 4) == param_1._4_4_)) break;
    iVar2 = *(int *)(this + 0x1c);
    pFVar1 = (FOutputDevice *)(this + 0x1c);
  }
  *(int *)pFVar1 = *(int *)(this + 0x1c);
  return;
}


// ==== 101018a2 FCoords::operator*

/* public: class FCoords __thiscall FCoords::operator*(class FRotator const &)const  */

void __thiscall FCoords::operator*(FCoords *this,FRotator *param_1)

{
  FCoords *pFVar1;
  int iVar2;
  FRotator *in_stack_00000008;
  FCoords aFStack_30 [48];
  
  pFVar1 = aFStack_30;
                    /* 0x18a2  600  ??DFCoords@@QBE?AV0@ABVFRotator@@@Z */
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *(undefined4 *)this;
    this = this + 4;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = operator*=(aFStack_30,in_stack_00000008);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 101018a7 thunk_FUN_101092e0 thunk -> 101092e0

// ==== 101018ac operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,struct FNameEntry &) */

FArchive * __cdecl operator<<(FArchive *param_1,FNameEntry *param_2)

{
  FString *this;
  ushort *puVar1;
  FArchive *pFVar2;
  int iVar3;
  FString aFStack_3c [12];
  FString aFStack_30 [20];
  int iStack_1c;
  byte bStack_15;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x18ac  548  ??6@YAAAVFArchive@@AAV0@AAUFNameEntry@@@Z */
  puStack_c = &LAB_101bc640;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  iVar3 = 0;
  iStack_8 = 0;
  if (*(int *)(param_1 + 4) < 0x40) {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffb8;
    if (*(int *)(param_1 + 0x10) == 0) {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffb8;
      appFailAssert("Ar.IsLoading()",".\\UnName.cpp",0x11c);
    }
    while( true ) {
      iStack_1c = iVar3;
      thunk_FUN_101307e0(param_1,&bStack_15);
      *(ushort *)(param_2 + iVar3 * 2 + 0xc) = (ushort)bStack_15;
      if (bStack_15 == 0) break;
      iVar3 = iVar3 + 1;
    }
    *(undefined2 *)(param_2 + iVar3 * 2 + 0xc) = 0;
  }
  else {
    ExceptionList = &pvStack_10;
    FString::FString(aFStack_30,(ushort *)(param_2 + 0xc));
    iStack_8._0_1_ = 1;
    operator<<(param_1,aFStack_30);
    this = (FString *)FString::Left(aFStack_30,(int)aFStack_3c);
    iStack_8._0_1_ = 2;
    puVar1 = FString::operator*(this);
    appStrcpy((ushort *)(param_2 + 0xc),puVar1);
    iStack_8._0_1_ = 1;
    FString::~FString(aFStack_3c);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_30);
  }
  pFVar2 = (FArchive *)thunk_FUN_10108c50(param_1,param_2 + 4);
  ExceptionList = pvStack_10;
  return pFVar2;
}


// ==== 101018b6 UByteProperty::Serialize

/* public: virtual void __thiscall UByteProperty::Serialize(class FArchive &) */

void __thiscall UByteProperty::Serialize(UByteProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18b6  1803  ?Serialize@UByteProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bdfe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  thunk_FUN_10170570(param_1,this + 0x78);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101018bb thunk_FUN_10121a40 thunk -> 10121a40

// ==== 101018c0 FBitReader::~FBitReader

/* public: virtual __thiscall FBitReader::~FBitReader(void) */

void __thiscall FBitReader::~FBitReader(FBitReader *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18c0  295  ??1FBitReader@@UAE@XZ */
  puStack_8 = &LAB_101b8073;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_10118750();
  *(undefined ***)this = FArchive::vftable;
  ExceptionList = pvStack_c;
  return;
}


// ==== 101018c5 FVector::operator*

/* public: class FVector __thiscall FVector::operator*(class FVector const &)const  */

void __thiscall FVector::operator*(FVector *this,FVector *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x18c5  617  ??DFVector@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *in_stack_00000008 * *(float *)this;
  *(float *)(param_1 + 4) = in_stack_00000008[1] * *(float *)(this + 4);
  *(float *)(param_1 + 8) = in_stack_00000008[2] * *(float *)(this + 8);
  return;
}


// ==== 101018ca FArchive::IsLoading

/* public: int __thiscall FArchive::IsLoading(void) */

int __thiscall FArchive::IsLoading(FArchive *this)

{
                    /* 0x18ca  1517  ?IsLoading@FArchive@@QAEHXZ */
  return *(int *)(this + 0x10);
}


// ==== 101018cf ULinker::Serialize

/* public: virtual void __thiscall ULinker::Serialize(class FArchive &) */

void __thiscall ULinker::Serialize(ULinker *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18cf  1814  ?Serialize@ULinker@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bb7f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  thunk_FUN_10149440(param_1);
  thunk_FUN_10149490(param_1);
  piVar1 = (int *)thunk_FUN_10132470(param_1,this + 0x78);
  (**(code **)(*piVar1 + 0x18))(this + 0x34);
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x94); iVar2 = iVar2 + 1) {
    (**(code **)(*(int *)param_1 + 0x1c))(*(int *)(this + 0x90) + iVar2 * 0x24 + 0xc);
  }
  for (iStack_18 = 0; iStack_18 < *(int *)(this + 0x88); iStack_18 = iStack_18 + 1) {
    iVar2 = *(int *)(this + 0x84) + iStack_18 * 0x1c;
    (**(code **)(*(int *)param_1 + 0x18))(iVar2 + 0x14);
    piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x1c))(iVar2);
    (**(code **)(*piVar1 + 0x1c))(iVar2 + 4);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101018d4 FCoords::Transpose

/* public: class FCoords __thiscall FCoords::Transpose(void)const  */

void __thiscall FCoords::Transpose(FCoords *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_stack_00000004;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x18d4  1982  ?Transpose@FCoords@@QBE?AV1@XZ */
  fVar1 = *(float *)(this + 0x14);
  fVar2 = *(float *)(this + 0x20);
  fVar3 = *(float *)(this + 0x2c);
  fVar4 = *(float *)(this + 0x10);
  fVar5 = *(float *)(this + 0x1c);
  fVar6 = *(float *)(this + 0x28);
  fVar7 = *(float *)(this + 0xc);
  fVar8 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x24);
  thunk_FUN_1010f5b0(this,this,&fStack_c);
  *in_stack_00000004 = -fStack_c;
  in_stack_00000004[1] = -fStack_8;
  in_stack_00000004[3] = fVar7;
  in_stack_00000004[2] = -fStack_4;
  in_stack_00000004[4] = fVar8;
  in_stack_00000004[5] = fVar9;
  in_stack_00000004[6] = fVar4;
  in_stack_00000004[7] = fVar5;
  in_stack_00000004[9] = fVar1;
  in_stack_00000004[8] = fVar6;
  in_stack_00000004[10] = fVar2;
  in_stack_00000004[0xb] = fVar3;
  return;
}


// ==== 101018d9 FRangeVector::operator-=

/* public: class FRangeVector __thiscall FRangeVector::operator-=(class FRangeVector const &) */

void __thiscall FRangeVector::operator-=(FRangeVector *this,FRangeVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x18d9  691  ??ZFRangeVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this - *in_stack_00000008;
  *(float *)(this + 4) = *(float *)(this + 4) - in_stack_00000008[1];
  *(float *)(this + 8) = *(float *)(this + 8) - in_stack_00000008[2];
  *(float *)(this + 0xc) = *(float *)(this + 0xc) - in_stack_00000008[3];
  *(float *)(this + 0x10) = *(float *)(this + 0x10) - in_stack_00000008[4];
  *(float *)(this + 0x14) = *(float *)(this + 0x14) - in_stack_00000008[5];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


// ==== 101018e3 thunk_FUN_10136fa0 thunk -> 10136fa0

// ==== 101018e8 ULinkerLoad::Serialize

/* private: virtual void __thiscall ULinkerLoad::Serialize(class FArchive &) */

void __thiscall ULinkerLoad::Serialize(ULinkerLoad *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18e8  1815  ?Serialize@ULinkerLoad@@EAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bb9f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ULinker::Serialize((ULinker *)this,param_1);
  thunk_FUN_101494d0(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101018ed UField::operator=

/* public: class UField & __thiscall UField::operator=(class UField const &) */

UField * __thiscall UField::operator=(UField *this,UField *param_1)

{
                    /* 0x18ed  522  ??4UField@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 101018f2 thunk_FUN_101495a0 thunk -> 101495a0

// ==== 101018f7 UObject::execDebugInfo

/* public: void __thiscall UObject::execDebugInfo(struct FFrame &,void * const) */

void __thiscall UObject::execDebugInfo(UObject *this,FFrame *param_1,void *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  ushort *puVar5;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  FString aFStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x18f7  2182  ?execDebugInfo@UObject@@QAEXAAUFFrame@@QAX@Z */
  pvVar4 = ExceptionList;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb300;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = *piVar2;
  ExceptionList = &pvStack_c;
  *(int **)(param_1 + 0xc) = piVar2 + 1;
  if (iVar3 != 100) {
    *(int *)(param_1 + 0xc) = (int)piVar2 + -1;
    ExceptionList = pvVar4;
    return;
  }
  *(int **)(param_1 + 0xc) = piVar2 + 2;
  *(int **)(param_1 + 0xc) = piVar2 + 3;
  uStack_38 = 0x10146747;
  puVar5 = appFromAnsi((char *)(piVar2 + 3),(ushort *)0x0);
  FString::FString(aFStack_18,puVar5);
  uStack_4 = 0;
  cVar1 = **(char **)(param_1 + 0xc);
  while (cVar1 != '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    cVar1 = **(char **)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (GDebugger != (UDebugger *)0x0) {
    FString::FString(aFStack_40,aFStack_18);
    uStack_4 = uStack_4 & 0xffffff00;
    (*(code *)**(undefined4 **)GDebugger)(this,param_1);
  }
  uStack_4 = 0xffffffff;
  FString::~FString(aFStack_18);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101018fc UArrayProperty::ExportCppItem

/* public: virtual void __thiscall UArrayProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall
UArrayProperty::ExportCppItem(UArrayProperty *this,FOutputDevice *param_1,int param_2)

{
  wchar_t *pwVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18fc  961  ?ExportCppItem@UArrayProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bdf10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_2 == 0) {
    pwVar1 = L"TArrayNoInit<";
  }
  else {
    pwVar1 = L"TArray<";
  }
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)pwVar1);
  (**(code **)(**(int **)(this + 0x78) + 0x8c))(param_1,0);
  FOutputDevice::Log(param_1,(ushort *)&DAT_101df574);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101901 FMemMark::FMemMark

/* public: __thiscall FMemMark::FMemMark(void) */

FMemMark * __thiscall FMemMark::FMemMark(FMemMark *this)

{
                    /* 0x1901  76  ??0FMemMark@@QAE@XZ */
  return this;
}


// ==== 1010190b UFixedArrayProperty::Identical

/* public: virtual int __thiscall UFixedArrayProperty::Identical(void const *,void const *)const  */

int __thiscall UFixedArrayProperty::Identical(UFixedArrayProperty *this,void *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x190b  1433  ?Identical@UFixedArrayProperty@@UBEHPBX0@Z */
  iVar3 = 0;
  if (0 < *(int *)(this + 0x7c)) {
    do {
      if (param_2 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = (void *)(*(int *)(*(int *)(this + 0x78) + 0x44) * iVar3 + (int)param_2);
      }
      iVar2 = (**(code **)(**(int **)(this + 0x78) + 0x84))
                        ((void *)((*(int **)(this + 0x78))[0x11] * iVar3 + (int)param_1),pvVar1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x7c));
  }
  return 1;
}


// ==== 10101910 UObject::operator=

/* public: class UObject & __thiscall UObject::operator=(class UObject const &) */

UObject * __thiscall UObject::operator=(UObject *this,UObject *param_1)

{
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1910  532  ??4UObject@@QAEAAV0@ABV0@@Z */
  puStack_c = &LAB_101bd2a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("&Src",".\\UnObj.cpp",0xbb);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(this + 0x24)) {
    GetFullName(param_1,(ushort *)0x0);
    GetFullName(this,(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10101915 thunk_FUN_10137ae0 thunk -> 10137ae0

// ==== 1010191a thunk_FUN_1011e510 thunk -> 1011e510

// ==== 1010191f thunk_FUN_10113120 thunk -> 10113120

// ==== 10101924 FRangeVector::GetSRand

/* public: class FVector __thiscall FRangeVector::GetSRand(void)const  */

void __thiscall FRangeVector::GetSRand(FRangeVector *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_stack_00000004;
  
                    /* 0x1924  1393  ?GetSRand@FRangeVector@@QBE?AVFVector@@XZ */
  fVar7 = appSRand();
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x14);
  fVar8 = appSRand();
  fVar4 = *(float *)(this + 8);
  fVar5 = *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 0xc);
  fVar9 = appSRand();
  *in_stack_00000004 = (*(float *)this - *(float *)(this + 4)) * fVar9 + *(float *)(this + 4);
  in_stack_00000004[1] = (fVar4 - fVar5) * fVar8 + fVar6;
  in_stack_00000004[2] = (fVar1 - fVar2) * fVar7 + fVar3;
  return;
}


// ==== 10101929 UState::operator_new

/* public: static void * __cdecl UState::operator new(unsigned int,enum EInternal *) */

void * __cdecl UState::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1929  410  ??2UState@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010192e appLocalTime

/* void __cdecl appLocalTime(int &,int &,int &,int &,int &) */

void __cdecl appLocalTime(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  tm *ptVar1;
  __time64_t _Stack_8;
  
                    /* 0x192e  2068  ?appLocalTime@@YAXAAH0000@Z */
  __time64(&_Stack_8);
  ptVar1 = FID_conflict___localtime64((__time32_t *)&_Stack_8);
  *param_1 = ptVar1->tm_year + 0x76c;
  *param_2 = ptVar1->tm_mon + 1;
  *param_3 = ptVar1->tm_mday;
  *param_4 = ptVar1->tm_hour;
  *param_5 = ptVar1->tm_min;
  return;
}


// ==== 10101933 UProperty::Matches

/* public: int __thiscall UProperty::Matches(void const *,void const *,int)const  */

int __thiscall UProperty::Matches(UProperty *this,void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1933  1609  ?Matches@UProperty@@QBEHPBX0H@Z */
  iVar1 = *(int *)(this + 0x44) * param_3 + *(int *)(this + 0x54);
  if (param_2 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)param_2 + iVar1;
  }
  iVar1 = (**(code **)(*(int *)this + 0x84))(iVar1 + (int)param_1,iVar2);
  return iVar1;
}


// ==== 1010193d UObject::execGreaterGreater_VectorRotator

/* public: void __thiscall UObject::execGreaterGreater_VectorRotator(struct FFrame &,void * const)
    */

void __thiscall
UObject::execGreaterGreater_VectorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  FFrame *pFStack_94;
  undefined1 *puStack_90;
  FRotator aFStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  FCoords aFStack_70 [48];
  undefined4 auStack_40 [14];
  undefined4 *puStack_8;
  
                    /* 0x193d  2243  ?execGreaterGreater_VectorRotator@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_90 = auStack_78;
  pFStack_94 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_74);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar4 = &DAT_1023ff60;
  pFVar2 = aFStack_70;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar2 = pFVar2 + 4;
  }
  pFVar2 = FCoords::operator*=(aFStack_70,aFStack_7c);
  puVar4 = auStack_40;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pFVar2;
    pFVar2 = pFVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  thunk_FUN_1010f5b0(auStack_40,&stack0xffffff78,&pFStack_94);
  *puStack_8 = pFStack_94;
  puStack_8[1] = puStack_90;
  puStack_8[2] = unaff_EDI;
  return;
}


// ==== 10101942 FArchive::TotalSize

/* public: virtual int __thiscall FArchive::TotalSize(void) */

int __thiscall FArchive::TotalSize(FArchive *this)

{
                    /* 0x1942  1965  ?TotalSize@FArchive@@UAEHXZ */
  return -1;
}


// ==== 10101947 thunk_FUN_10134590 thunk -> 10134590

// ==== 1010194c FNotifyHook::NotifyPreChange

/* public: virtual void __thiscall FNotifyHook::NotifyPreChange(void *) */

void __thiscall FNotifyHook::NotifyPreChange(FNotifyHook *this,void *param_1)

{
                    /* 0x194c  1647  ?NotifyPreChange@FNotifyHook@@UAEXPAX@Z */
  return;
}


// ==== 10101951 UObject::execByteToInt

/* public: void __thiscall UObject::execByteToInt(struct FFrame &,void * const) */

void __thiscall UObject::execByteToInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  
                    /* 0x1951  2166  ?execByteToInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffff,(uint)this & 0xffffff);
  *unaff_retaddr = (uint)param_1 >> 0x18;
  return;
}


// ==== 10101956 ULinkerLoad::Tell

/* private: virtual int __thiscall ULinkerLoad::Tell(void) */

int __thiscall ULinkerLoad::Tell(ULinkerLoad *this)

{
  FArchive *pFVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1956  1957  ?Tell@ULinkerLoad@@EAEHXZ */
  puStack_c = &LAB_101bb6f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = GetReader(this + -0xc0);
  iVar2 = (**(code **)(*(int *)pFVar1 + 0x28))();
  ExceptionList = pvStack_10;
  return iVar2;
}


// ==== 1010195b FRange::operator+=

/* public: class FRange __thiscall FRange::operator+=(class FRange const &) */

void __thiscall FRange::operator+=(FRange *this,FRange *param_1)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
                    /* 0x195b  679  ??YFRange@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 + *(float *)this;
  fVar1 = in_stack_00000008[1];
  fVar2 = *(float *)(this + 4);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = fVar1 + fVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 10101960 UObject::execFMax

/* WARNING: Removing unreachable block (ram,0x1013e432) */
/* public: void __thiscall UObject::execFMax(struct FFrame &,void * const) */

void __thiscall UObject::execFMax(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x1960  2216  ?execFMax@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&uStack_4;
  return;
}


// ==== 10101965 thunk_FUN_10130e90 thunk -> 10130e90

// ==== 1010196a UArrayProperty::Link

/* public: virtual void __thiscall UArrayProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UArrayProperty::Link(UArrayProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x196a  1551  ?Link@UArrayProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be110;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 0x78));
  (**(code **)(**(int **)(this + 0x78) + 0x80))(param_1,0);
  *(undefined4 *)(this + 0x44) = 0xc;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  if ((*(uint *)(this + 0x48) & 0x1000) == 0) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400000;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101974 appSaveStringToFile

/* WARNING: Removing unreachable block (ram,0x10155c36) */
/* int __cdecl appSaveStringToFile(class FString const &,unsigned short const *,class FFileManager
   *) */

int __cdecl appSaveStringToFile(FString *param_1,ushort *param_2,FFileManager *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  int iStack_38;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1974  2094  ?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */
  puStack_c = &LAB_101bc338;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  iVar6 = 0;
  iStack_8 = 0;
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 1)) ||
     (ExceptionList = &pvStack_10,
     piStack_18 = (int *)(**(code **)(*(int *)param_3 + 0xc))(param_2,0,GNull),
     piStack_18 == (int *)0x0)) {
    ExceptionList = pvStack_10;
    return 0;
  }
  while( true ) {
    piVar5 = piStack_18;
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4) + -1;
    }
    if (iVar3 <= iVar6) break;
    puVar4 = FString::operator*(param_1);
    bVar1 = thunk_FUN_1014f8d0(puVar4[iVar6]);
    puVar4 = FString::operator*(param_1);
    piVar5 = piStack_18;
    if (puVar4[iVar6] != (ushort)bVar1) {
      uStack_1c = 0xfeff;
      (**(code **)(*piStack_18 + 4))(&uStack_1c,2);
      if (*(int *)(param_1 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 4) + -1;
      }
      iVar3 = *piVar5;
      iVar6 = iVar6 * 2;
      puVar4 = FString::operator*(param_1);
      (**(code **)(iVar3 + 4))(puVar4,iVar6);
LAB_10155c23:
      (**(code **)*piVar5)(1);
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 4) + -1;
  }
  thunk_FUN_10154740(iVar6);
  iStack_8._0_1_ = 1;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4) + -1;
    }
    if (iVar3 <= iVar6) break;
    puVar4 = FString::operator*(param_1);
    uVar2 = thunk_FUN_1014f8d0(puVar4[iVar6]);
    *(undefined1 *)(iStack_38 + iVar6) = uVar2;
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 4) + -1;
  }
  (**(code **)(*piVar5 + 4))(iStack_38,iVar6);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_10155540();
  goto LAB_10155c23;
}


// ==== 10101979 FPlane::operator*=

/* public: class FPlane __thiscall FPlane::operator*=(float) */

void __thiscall FPlane::operator*=(FPlane *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  float in_stack_00000008;
  
                    /* 0x1979  665  ??XFPlane@@QAE?AV0@M@Z */
  *(float *)this = in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * in_stack_00000008;
  *(float *)(this + 8) = in_stack_00000008 * *(float *)(this + 8);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  fVar1 = *(float *)(this + 0xc);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(float *)(this + 0xc) = in_stack_00000008 * fVar1;
  uVar2 = *(undefined4 *)(this + 8);
  *(float *)((int)param_1 + 0xc) = in_stack_00000008 * fVar1;
  *(undefined4 *)((int)param_1 + 8) = uVar2;
  return;
}


// ==== 1010197e thunk_FUN_1011c620 thunk -> 1011c620

// ==== 10101983 FBufferReader::Seek

/* public: virtual void __thiscall FBufferReader::Seek(int) */

void __thiscall FBufferReader::Seek(FBufferReader *this,int param_1)

{
                    /* 0x1983  1790  ?Seek@FBufferReader@@UAEXH@Z */
  if (param_1 < 0) {
    appFailAssert("InPos>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x709);
  }
  if (*(int *)(*(int *)(this + 0x38) + 4) < param_1) {
    appFailAssert("InPos<=Bytes.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x70a);
  }
  *(int *)(this + 0x3c) = param_1;
  return;
}


// ==== 10101988 FRange::operator-=

/* public: class FRange __thiscall FRange::operator-=(class FRange const &) */

void __thiscall FRange::operator-=(FRange *this,FRange *param_1)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
                    /* 0x1988  689  ??ZFRange@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this - *in_stack_00000008;
  fVar1 = *(float *)(this + 4);
  fVar2 = in_stack_00000008[1];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = fVar1 - fVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 1010198d UObject::execNotEqual_IntInt

/* public: void __thiscall UObject::execNotEqual_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x198d  2330  ?execNotEqual_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 0;
  return;
}


// ==== 10101992 UStructProperty::CleanupDestroyed

/* public: virtual void __thiscall UStructProperty::CleanupDestroyed(unsigned char *)const  */

void __thiscall UStructProperty::CleanupDestroyed(UStructProperty *this,uchar *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1992  844  ?CleanupDestroyed@UStructProperty@@UBEXPAE@Z */
  puStack_c = &LAB_101bdf80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x40); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + 0x78) + 0x8c))(param_1 + *(int *)(this + 0x44) * iVar1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101997 UObject::execAssert

/* public: void __thiscall UObject::execAssert(struct FFrame &,void * const) */

void __thiscall UObject::execAssert(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  byte *pbVar4;
  FOutputDevice *this_00;
  int unaff_ESI;
  
                    /* 0x1997  2155  ?execAssert@UObject@@QAEXAAUFFrame@@QAX@Z */
  pFVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0xc);
  pbVar4 = (byte *)(iVar2 + 2);
  *(byte **)(param_1 + 0xc) = pbVar4;
  param_1 = (FFrame *)0x0;
  bVar1 = *pbVar4;
  *(int *)(pFVar3 + 0xc) = iVar2 + 3;
  (*(code *)(&GNatives)[bVar1])(pFVar3,&param_1);
  if (unaff_ESI == 0) {
    FOutputDevice::Logf(this_00,(EName)pFVar3,(ushort *)0x2f9);
  }
  return;
}


// ==== 101019a1 thunk_FUN_101380f0 thunk -> 101380f0

// ==== 101019a6 UStruct::operator=

/* public: class UStruct & __thiscall UStruct::operator=(class UStruct const &) */

UStruct * __thiscall UStruct::operator=(UStruct *this,UStruct *param_1)

{
  UStruct *pUVar1;
  int iVar2;
  
                    /* 0x19a6  541  ??4UStruct@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  thunk_FUN_10118830(param_1 + 0x54);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  pUVar1 = this + 0x7c;
  iVar2 = 0x10;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)this];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}


// ==== 101019ab thunk_FUN_1012b820 thunk -> 1012b820

// ==== 101019b0 UFunction::GetSuperFunction

/* public: class UFunction * __thiscall UFunction::GetSuperFunction(void)const  */

UFunction * __thiscall UFunction::GetSuperFunction(UFunction *this)

{
                    /* 0x19b0  1401  ?GetSuperFunction@UFunction@@QBEPAV1@XZ */
  return *(UFunction **)(this + 0x34);
}


// ==== 101019b5 UObject::execCase

/* public: void __thiscall UObject::execCase(struct FFrame &,void * const) */

void __thiscall UObject::execCase(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_400 [256];
  
                    /* 0x19b5  2169  ?execCase@UObject@@QAEXAAUFFrame@@QAX@Z */
  sVar2 = **(short **)(param_1 + 0xc);
  *(short **)(param_1 + 0xc) = *(short **)(param_1 + 0xc) + 1;
  if (sVar2 != -1) {
    puVar4 = auStack_400;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,auStack_400);
  }
  return;
}


// ==== 101019ba thunk_FUN_101186c0 thunk -> 101186c0

// ==== 101019bf FMemCache::Last

/* public: class FMemCache::FCacheItem * __thiscall FMemCache::Last(void) */

FCacheItem * __thiscall FMemCache::Last(FMemCache *this)

{
                    /* 0x19bf  1545  ?Last@FMemCache@@QAEPAVFCacheItem@1@XZ */
  return *(FCacheItem **)(this + 0x1c);
}


// ==== 101019c4 thunk_FUN_10154740 thunk -> 10154740

// ==== 101019c9 UField::Serialize

/* public: virtual void __thiscall UField::Serialize(class FArchive &) */

void __thiscall UField::Serialize(UField *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19c9  1811  ?Serialize@UField@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101b9ed0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  uVar1 = thunk_FUN_10130ed0(param_1,this + 0x34,this + 0x38);
  thunk_FUN_10130ed0(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(this + 0x3c) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101019ce UEnum::StaticClass

/* public: static class UClass * __cdecl UEnum::StaticClass(void) */

UClass * __cdecl UEnum::StaticClass(void)

{
                    /* 0x19ce  1896  ?StaticClass@UEnum@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101019d3 FLogOutError::operator=

/* public: class FLogOutError & __thiscall FLogOutError::operator=(class FLogOutError const &) */

FLogOutError * __thiscall FLogOutError::operator=(FLogOutError *this,FLogOutError *param_1)

{
                    /* 0x19d3  458  ??4FLogOutError@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 101019d8 thunk_FUN_1011d800 thunk -> 1011d800

// ==== 101019dd UConst::operator_new

/* public: static void * __cdecl UConst::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UConst::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x19dd  365  ??2UConst@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101019e2 UProperty::Port

/* public: virtual int __thiscall UProperty::Port(void)const  */

int __thiscall UProperty::Port(UProperty *this)

{
                    /* 0x19e2  1684  ?Port@UProperty@@UBEHXZ */
  if ((*(int *)(this + 0x44) * *(int *)(this + 0x40) != 0) &&
     (((*(int *)(this + 0x4c) != 0 || ((*(uint *)(this + 0x48) & 0x3000) == 0)) &&
      (*(int *)(this + 0x20) != 0x2a5)))) {
    return 1;
  }
  return 0;
}


// ==== 101019e7 UStruct::AddCppProperty

/* public: virtual void __thiscall UStruct::AddCppProperty(class UProperty *) */

void __thiscall UStruct::AddCppProperty(UStruct *this,UProperty *param_1)

{
                    /* 0x19e7  783  ?AddCppProperty@UStruct@@UAEXPAVUProperty@@@Z */
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x48);
  *(UProperty **)(this + 0x48) = param_1;
  return;
}


// ==== 101019ec ULinkerLoad::ULinkerLoad

/* public: __thiscall ULinkerLoad::ULinkerLoad(class ULinkerLoad const &) */

ULinkerLoad * __thiscall ULinkerLoad::ULinkerLoad(ULinkerLoad *this,ULinkerLoad *param_1)

{
  FArchive *pFVar1;
  int iVar2;
  ULinkerLoad *pUVar3;
  ULinkerLoad *pUVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x19ec  238  ??0ULinkerLoad@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8af2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ULinker::ULinker((ULinker *)this,(ULinker *)param_1);
  pFVar1 = (FArchive *)0x0;
  uStack_4 = 0;
  if (param_1 != (ULinkerLoad *)0x0) {
    pFVar1 = (FArchive *)(param_1 + 0xc0);
  }
  FArchive::FArchive((FArchive *)(this + 0xc0),pFVar1);
  uStack_4._0_1_ = 1;
  *(undefined ***)(this + 0xc0) = vftable_for_FArchive_;
  *(undefined ***)this = vftable_for_ULinker_;
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  pUVar3 = param_1 + 0x100;
  pUVar4 = this + 0x100;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  thunk_FUN_10119750(param_1 + 0x500);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  thunk_FUN_10119830(param_1 + 0x50c);
  *(undefined4 *)(this + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(this + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(this + 0x520) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(this + 0x524) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(this + 0x528) = *(undefined4 *)(param_1 + 0x528);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101019f1 FBufferReader::FBufferReader

/* public: __thiscall FBufferReader::FBufferReader(class FBufferReader const &) */

FBufferReader * __thiscall FBufferReader::FBufferReader(FBufferReader *this,FBufferReader *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x19f1  25  ??0FBufferReader@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6748;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101019f6 UProperty::GetOuterUField

/* public: class UField * __thiscall UProperty::GetOuterUField(void)const  */

UField * __thiscall UProperty::GetOuterUField(UProperty *this)

{
                    /* 0x19f6  1374  ?GetOuterUField@UProperty@@QBEPAVUField@@XZ */
  return *(UField **)(this + 0x18);
}


// ==== 101019fb UPackageMap::Destroy

/* public: virtual void __thiscall UPackageMap::Destroy(void) */

void __thiscall UPackageMap::Destroy(UPackageMap *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x19fb  920  ?Destroy@UPackageMap@@UAEXXZ */
  puStack_c = &LAB_101baa08;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Destroy((UObject *)this);
  iStack_8._0_1_ = 1;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x58); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(this + 0x54) + 8 + iVar1 * 0xc) != 0) {
      thunk_FUN_10138d30(1);
    }
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_101382d0();
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101a00 UField::operator_new

/* public: static void * __cdecl UField::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UField::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1a00  375  ??2UField@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101a05 FFileManager::operator=

/* public: class FFileManager & __thiscall FFileManager::operator=(class FFileManager const &) */

FFileManager * __thiscall FFileManager::operator=(FFileManager *this,FFileManager *param_1)

{
                    /* 0x1a05  450  ??4FFileManager@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10101a0a FArchiveDummySave::~FArchiveDummySave

/* public: virtual __thiscall FArchiveDummySave::~FArchiveDummySave(void) */

void __thiscall FArchiveDummySave::~FArchiveDummySave(FArchiveDummySave *this)

{
                    /* 0x1a0a  293  ??1FArchiveDummySave@@UAE@XZ */
  *(undefined ***)this = FArchive::vftable;
  return;
}


// ==== 10101a0f FMatrix::TransposeAdjoint

/* public: class FMatrix __thiscall FMatrix::TransposeAdjoint(void)const  */

void __thiscall FMatrix::TransposeAdjoint(FMatrix *this)

{
  float *in_stack_00000004;
  
                    /* 0x1a0f  1984  ?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */
  *in_stack_00000004 =
       *(float *)(this + 0x28) * *(float *)(this + 0x14) -
       *(float *)(this + 0x24) * *(float *)(this + 0x18);
  in_stack_00000004[1] =
       *(float *)(this + 0x20) * *(float *)(this + 0x18) -
       *(float *)(this + 0x10) * *(float *)(this + 0x28);
  in_stack_00000004[2] =
       *(float *)(this + 0x10) * *(float *)(this + 0x24) -
       *(float *)(this + 0x20) * *(float *)(this + 0x14);
  in_stack_00000004[3] = 0.0;
  in_stack_00000004[4] =
       *(float *)(this + 8) * *(float *)(this + 0x24) -
       *(float *)(this + 0x28) * *(float *)(this + 4);
  in_stack_00000004[5] =
       *(float *)this * *(float *)(this + 0x28) - *(float *)(this + 8) * *(float *)(this + 0x20);
  in_stack_00000004[6] =
       *(float *)(this + 0x20) * *(float *)(this + 4) - *(float *)(this + 0x24) * *(float *)this;
  in_stack_00000004[7] = 0.0;
  in_stack_00000004[8] =
       *(float *)(this + 0x18) * *(float *)(this + 4) -
       *(float *)(this + 8) * *(float *)(this + 0x14);
  in_stack_00000004[9] =
       *(float *)(this + 8) * *(float *)(this + 0x10) - *(float *)(this + 0x18) * *(float *)this;
  in_stack_00000004[10] =
       *(float *)this * *(float *)(this + 0x14) - *(float *)(this + 0x10) * *(float *)(this + 4);
  in_stack_00000004[0xb] = 0.0;
  in_stack_00000004[0xc] = 0.0;
  in_stack_00000004[0xe] = 0.0;
  in_stack_00000004[0xd] = 1.0;
  return;
}


// ==== 10101a14 UObject::execAt_StringString

/* public: void __thiscall UObject::execAt_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execAt_StringString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FString *this_00;
  FArray *pFVar3;
  undefined2 *_Src;
  undefined1 *puStack_54;
  FFrame *pFStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ushort auStack_28 [2];
  void *pvStack_24;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  FArray *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a14  2156  ?execAt_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bacb0;
  pvStack_c = ExceptionList;
  uStack_30 = 0;
  uStack_2c = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_4c = &uStack_30;
  pFStack_50 = param_1;
  puStack_54 = (undefined1 *)0x10144043;
  (*(code *)(&GNatives)[bVar1])();
  uStack_3c = 0;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_54 = &stack0xffffffbc;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  this_00 = (FString *)FString::operator+((FString *)&stack0xffffffc0,auStack_28);
  uStack_18 = 6;
  pFVar3 = (FArray *)FString::operator+(this_00,(FString *)&uStack_38);
  uStack_1c._0_1_ = 7;
  if (pFStack_10 != pFVar3) {
    uVar2 = *(undefined4 *)(pFVar3 + 4);
    *(undefined4 *)(pFStack_10 + 8) = uVar2;
    *(undefined4 *)(pFStack_10 + 4) = uVar2;
    FArray::Realloc(pFStack_10,2);
    if (*(int *)(pFStack_10 + 4) != 0) {
      if (*(int *)(pFVar3 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar3;
      }
      _memcpy(*(void **)pFStack_10,_Src,*(int *)(pFStack_10 + 4) * 2);
    }
  }
  uStack_1c._0_1_ = 8;
  uStack_38 = 0;
  uStack_34 = 0;
  FArray::Realloc((FArray *)&uStack_3c,2);
  uStack_1c._0_1_ = 6;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_3c);
  uStack_1c._0_1_ = 9;
  uStack_2c = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  FArray::Realloc((FArray *)&uStack_30,2);
  uStack_1c._0_1_ = 5;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_30);
  uStack_1c._0_1_ = 10;
  pFStack_50 = (FFrame *)0x0;
  puStack_4c = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_54,2);
  uStack_1c = CONCAT31(uStack_1c._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_54);
  uStack_1c = 0xb;
  FArray::Realloc((FArray *)&stack0xffffffb8,2);
  uStack_1c = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffb8);
  ExceptionList = pvStack_24;
  return;
}


// ==== 10101a19 UDelegateProperty::Link

/* public: virtual void __thiscall UDelegateProperty::Link(class FArchive &,class UProperty *) */

void __thiscall
UDelegateProperty::Link(UDelegateProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a19  1555  ?Link@UDelegateProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be000;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 8;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400000;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101a1e UObject::GetMemPackageLinker

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class ULinkerLoad * __cdecl UObject::GetMemPackageLinker(class UObject *,unsigned
   long,class UPackageMap *,class FGuid *,void *,int) */

ULinkerLoad * __cdecl
UObject::GetMemPackageLinker
          (UObject *param_1,ulong param_2,UPackageMap *param_3,FGuid *param_4,void *param_5,
          int param_6)

{
  ULinkerLoad *pUVar1;
  ushort *puVar2;
  int iVar3;
  ULinkerLoad *pUVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a1e  1355
                       ?GetMemPackageLinker@UObject@@SAPAVULinkerLoad@@PAV1@KPAVUPackageMap@@PAVFGuid@@PAXH@Z
                        */
  puStack_c = &LAB_101bda90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if ((GObjBeginLoadCount == 0) && (ExceptionList = &pvStack_10, GSWObjBeginLoadCount == 0)) {
    ExceptionList = &pvStack_10;
    appFailAssert("GObjBeginLoadCount || GSWObjBeginLoadCount",".\\UnObj.cpp",0xa4f);
  }
  pUVar4 = (ULinkerLoad *)0x0;
  if (param_1 != (UObject *)0x0) {
    iVar3 = 0;
    pUVar4 = (ULinkerLoad *)0x0;
    while ((iVar3 < DAT_103308a4 && (pUVar4 == (ULinkerLoad *)0x0))) {
      pUVar1 = *(ULinkerLoad **)(_GObjLoaders + iVar3 * 4);
      if (*(UObject **)(pUVar1 + 0x34) == param_1) {
        pUVar4 = pUVar1;
      }
      iVar3 = iVar3 + 1;
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if ((param_3 != (UPackageMap *)0x0) &&
     (iVar3 = (**(code **)(*(int *)param_3 + 0x8c))(), iVar3 == 0)) {
    puVar2 = LocalizeError((ushort *)L"Sandbox",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar2);
  }
  if (pUVar4 == (ULinkerLoad *)0x0) {
    pUVar4 = ULinkerLoad::operator_new(0x52c,GObjTransientPkg);
    if (pUVar4 == (ULinkerLoad *)0x0) {
      pUVar4 = (ULinkerLoad *)0x0;
    }
    else {
      pUVar4 = (ULinkerLoad *)ULinkerLoad::ULinkerLoad(pUVar4,param_1,param_5,param_6,param_2);
    }
  }
  if ((param_4 != (FGuid *)0x0) && (iVar3 = thunk_FUN_1015aa70(), iVar3 != 0)) {
    puVar2 = LocalizeError((ushort *)L"PackageVersion",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar2);
  }
  ExceptionList = pvStack_10;
  return pUVar4;
}


// ==== 10101a23 UField::MergeBools

/* public: virtual int __thiscall UField::MergeBools(void) */

int __thiscall UField::MergeBools(UField *this)

{
                    /* 0x1a23  1614  ?MergeBools@UField@@UAEHXZ */
  return 1;
}


// ==== 10101a28 TArray<unsigned_short>::CountBytes

/* public: void __thiscall TArray<unsigned short>::CountBytes(class FArchive &) */

void __thiscall TArray<unsigned_short>::CountBytes(TArray<unsigned_short> *this,FArchive *param_1)

{
                    /* 0x1a28  888  ?CountBytes@?$TArray@G@@QAEXAAVFArchive@@@Z */
  (**(code **)(*(int *)param_1 + 0x14))(*(int *)(this + 4) * 2,*(int *)(this + 8) * 2);
  return;
}


// ==== 10101a2d FFileStream::CreateStream

/* public: int __thiscall FFileStream::CreateStream(unsigned short const *,int,int,void *,enum
   EFileStreamType,void *) */

int __thiscall
FFileStream::CreateStream
          (FFileStream *this,ushort *param_1,int param_2,int param_3,void *param_4,
          EFileStreamType param_5,void *param_6)

{
  int iVar1;
  FStream *pFVar2;
  FFileStream *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a2d  901  ?CreateStream@FFileStream@@QAEHPBGHHPAXW4EFileStreamType@@1@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbed8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFStack_10 = this;
  FScopeCriticalSection::FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10,CriticalSection)
  ;
  uStack_4 = 0;
  *(EFileStreamType *)(Streams + StreamIndex * 0x24 + 0x20) = param_5;
  *(void **)(Streams + StreamIndex * 0x24 + 8) = param_6;
  iVar1 = Create(this,StreamIndex,param_1);
  if (iVar1 == 0) {
    pFVar2 = Streams + StreamIndex * 0x24;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pFVar2 = 0;
      pFVar2 = pFVar2 + 4;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pFVar2 = (FStream)0x0;
      pFVar2 = pFVar2 + 1;
    }
    uStack_4 = 0xffffffff;
    FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10);
    ExceptionList = pvStack_c;
    return -1;
  }
  *(void **)(Streams + StreamIndex * 0x24) = param_4;
  *(int *)(Streams + StreamIndex * 0x24 + 0x10) = param_2;
  *(undefined4 *)(Streams + StreamIndex * 0x24 + 0x14) = 0;
  *(undefined4 *)(Streams + StreamIndex * 0x24 + 0x1c) = 0;
  *(undefined4 *)(Streams + StreamIndex * 0x24 + 0x18) = 1;
  Read(this,StreamIndex,param_2 * param_3);
  iVar1 = StreamIndex;
  StreamIndex = (StreamIndex + 1) % MaxStreams;
  uStack_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10);
  ExceptionList = pvStack_c;
  return iVar1;
}


// ==== 10101a32 UObject::execStructCmpEq

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall UObject::execStructCmpEq(struct FFrame &,void * const) */

void __thiscall UObject::execStructCmpEq(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UStruct *this_00;
  FFrame *pFVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FFrame *pFVar6;
  undefined4 *puVar7;
  undefined4 *puStack_8;
  
                    /* 0x1a32  2378  ?execStructCmpEq@UObject@@QAEXAAUFFrame@@QAX@Z */
  pFVar2 = param_1;
  this_00 = (UStruct *)**(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  uVar4 = *(uint *)(this_00 + 0x4c);
  if (uVar4 == 0) {
    param_1 = (FFrame *)0x0;
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    param_1 = (FFrame *)&stack0xffffffe0;
    puStack_8 = (undefined4 *)&stack0xffffffe0;
  }
  uVar5 = uVar4 & 3;
  pFVar6 = param_1;
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pFVar6 = 0;
    pFVar6 = pFVar6 + 4;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pFVar6 = (FFrame)0x0;
    pFVar6 = pFVar6 + 1;
  }
  uVar5 = *(uint *)(this_00 + 0x4c) & 3;
  puVar7 = puStack_8;
  for (uVar4 = *(uint *)(this_00 + 0x4c) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(pFVar2,param_1);
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(pFVar2,puStack_8);
  iVar3 = UStruct::StructCompare(this_00,param_1,puStack_8);
  *(int *)param_2 = iVar3;
  return;
}


// ==== 10101a37 UObject::execDynArrayInsert

/* public: void __thiscall UObject::execDynArrayInsert(struct FFrame &,void * const) */

void __thiscall UObject::execDynArrayInsert(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UClass *pUVar2;
  uchar *this_00;
  int iVar3;
  int iVar4;
  UProperty *pUVar5;
  int unaff_EDI;
  int iStack_14;
  UObject *pUStack_4;
  
                    /* 0x1a37  2198  ?execDynArrayInsert@UObject@@QAEXAAUFFrame@@QAX@Z */
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  iStack_14 = 0;
  GPropObject = this;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pUStack_4 = this;
  (*(code *)(&GNatives)[bVar1])(param_1);
  this_00 = GPropAddr;
  if (GProperty != (UProperty *)0x0) {
    for (pUVar2 = *(UClass **)(GProperty + 0x24); pUVar2 != (UClass *)0x0;
        pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
      pUVar5 = GProperty;
      if (pUVar2 == &UArrayProperty::PrivateStaticClass) goto LAB_10142dd1;
    }
  }
  pUVar5 = (UProperty *)0x0;
LAB_10142dd1:
  pUStack_4 = (UObject *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  iStack_14 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&iStack_14);
  if (this_00 == (uchar *)0x0) {
    return;
  }
  if ((FOutputDevice *)&pUStack_4 == (FOutputDevice *)0x0) {
    return;
  }
  if ((int)&pUStack_4 < 0) {
    FOutputDevice::Logf((FOutputDevice *)&pUStack_4,(ushort *)param_1);
    return;
  }
  if ((iStack_14 < 0) || (iVar4 = iStack_14, *(int *)(this_00 + 4) < iStack_14)) {
    FOutputDevice::Logf((FOutputDevice *)&pUStack_4,(ushort *)param_1);
    iVar3 = *(int *)(this_00 + 4);
    if (unaff_EDI < 0) {
      iVar3 = 0;
    }
    else {
      iVar4 = unaff_EDI;
      if (unaff_EDI < iVar3) goto LAB_10142e84;
    }
    iVar4 = iVar3;
  }
LAB_10142e84:
  FArray::InsertZeroed
            ((FArray *)this_00,iVar4,(int)&pUStack_4,*(int *)(*(int *)(pUVar5 + 0x78) + 0x44));
  return;
}


// ==== 10101a41 FRange::operator-

/* public: class FRange __thiscall FRange::operator-(class FRange const &)const  */

FRange * __thiscall FRange::operator-(FRange *this,FRange *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x1a41  622  ??GFRange@@QBE?AV0@ABV0@@Z */
  FRange(param_1,*(float *)this - *in_stack_00000008,*(float *)(this + 4) - in_stack_00000008[1]);
  return param_1;
}


// ==== 10101a46 FMatrix::Coords

/* public: class FCoords __thiscall FMatrix::Coords(void) */

void __thiscall FMatrix::Coords(FMatrix *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000004;
  
                    /* 0x1a46  863  ?Coords@FMatrix@@QAE?AVFCoords@@XZ */
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar2 = *(undefined4 *)(this + 0x20);
  in_stack_00000004[3] = *(undefined4 *)this;
  in_stack_00000004[4] = uVar1;
  in_stack_00000004[5] = uVar2;
  uVar1 = *(undefined4 *)(this + 0x14);
  uVar2 = *(undefined4 *)(this + 0x24);
  in_stack_00000004[6] = *(undefined4 *)(this + 4);
  in_stack_00000004[7] = uVar1;
  in_stack_00000004[8] = uVar2;
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar2 = *(undefined4 *)(this + 0x28);
  in_stack_00000004[9] = *(undefined4 *)(this + 8);
  in_stack_00000004[10] = uVar1;
  in_stack_00000004[0xb] = uVar2;
  uVar1 = *(undefined4 *)(this + 0x34);
  uVar2 = *(undefined4 *)(this + 0x38);
  *in_stack_00000004 = *(undefined4 *)(this + 0x30);
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  return;
}


// ==== 10101a4b FMemCache::FCacheItem::GetTime

/* public: unsigned short __thiscall FMemCache::FCacheItem::GetTime(void) */

ushort __thiscall FMemCache::FCacheItem::GetTime(FCacheItem *this)

{
                    /* 0x1a4b  1410  ?GetTime@FCacheItem@FMemCache@@QAEGXZ */
  return *(ushort *)(this + 0xc);
}


// ==== 10101a50 UObject::execUndefined

/* public: void __thiscall UObject::execUndefined(struct FFrame &,void * const) */

void __thiscall UObject::execUndefined(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x1a50  2400  ?execUndefined@UObject@@QAEXAAUFFrame@@QAX@Z */
  FOutputDevice::Logf(*(FOutputDevice **)(param_1 + 0xc),(EName)param_1,(ushort *)0x2f9);
  return;
}


// ==== 10101a55 FMemStack::GetThreadSafeMemStack

/* private: class FMemStackFrame & __thiscall FMemStack::GetThreadSafeMemStack(void) */

FMemStackFrame * __thiscall FMemStack::GetThreadSafeMemStack(FMemStack *this)

{
  int iVar1;
  
                    /* 0x1a55  1407  ?GetThreadSafeMemStack@FMemStack@@AAEAAVFMemStackFrame@@XZ */
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  return (FMemStackFrame *)(this + iVar1 * 0x10);
}


// ==== 10101a5a FModelCoords::FModelCoords

/* public: __thiscall FModelCoords::FModelCoords(void) */

FModelCoords * __thiscall FModelCoords::FModelCoords(FModelCoords *this)

{
                    /* 0x1a5a  80  ??0FModelCoords@@QAE@XZ */
  return this;
}


// ==== 10101a5f UClass::Register

/* public: virtual void __thiscall UClass::Register(void) */

void __thiscall UClass::Register(UClass *this)

{
  undefined4 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  ushort *puVar4;
  int iVar5;
  FArchive aFStack_5c [60];
  UClass *pUStack_20;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a5f  1756  ?Register@UClass@@UAEXXZ */
  puStack_c = &LAB_101ba098;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff98;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_20 = this;
  UStruct::Register((UStruct *)this);
  FName::FName((FName *)&uStack_18,*(ushort **)(this + 0x4c0),1);
  *(undefined4 *)(this + 0x4c0) = uStack_18;
  uVar1 = (**(code **)(*(int *)this + 0x78))();
  thunk_FUN_10113f60(uVar1);
  uVar1 = (**(code **)(*(int *)this + 0x78))();
  thunk_FUN_1012aa10(uVar1);
  iVar5 = 0;
  pUVar3 = this;
  pUVar2 = GetDefaultObject(this);
  UObject::InitClassDefaultObject(pUVar2,pUVar3,iVar5);
  if ((*(int *)(this + 0x34) == 0) ||
     (*(int *)(*(int *)(this + 0x34) + 0x51c) != *(int *)(this + 0x51c))) {
    GetDefaultObject(this);
    (**(code **)(this + 0x51c))();
  }
  if (*(int *)(this + 0x34) != 0) {
    *(uint *)(this + 0x4a4) =
         *(uint *)(this + 0x4a4) | *(uint *)(*(int *)(this + 0x34) + 0x4a4) & 0xf86ec;
  }
  FArchive::FArchive(aFStack_5c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  (**(code **)(*(int *)this + 0x80))(aFStack_5c,0);
  puVar4 = (ushort *)0x0;
  pUVar3 = (UClass *)0x0;
  iVar5 = 0;
  pUVar2 = GetDefaultObject(this);
  UObject::LoadConfig(pUVar2,iVar5,pUVar3,puVar4);
  pUVar2 = GetDefaultObject(this);
  UObject::LoadLocalized(pUVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101a64 FCriticalSection::Lock

/* public: void __thiscall FCriticalSection::Lock(void) */

void __thiscall FCriticalSection::Lock(FCriticalSection *this)

{
                    /* 0x1a64  1588  ?Lock@FCriticalSection@@QAEXXZ */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)this);
  return;
}


// ==== 10101a69 UObject::GetLinkerIndex

/* public: int __thiscall UObject::GetLinkerIndex(void) */

int __thiscall UObject::GetLinkerIndex(UObject *this)

{
                    /* 0x1a69  1345  ?GetLinkerIndex@UObject@@QAEHXZ */
  return *(int *)(this + 0x14);
}


// ==== 10101a6e UObject::FindArrayProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindArrayProperty(class FString,class FArray * *,int *) */

int __thiscall
UObject::FindArrayProperty
          (UObject *this,ushort *param_2,int param_3,undefined4 param_4,undefined4 *param_5,
          undefined4 *param_6)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iStack_1c;
  ushort *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1a6e  999  ?FindArrayProperty@UObject@@QAEHVFString@@PAPAVFArray@@PAH@Z */
  puStack_8 = &LAB_101bcd30;
  pvStack_c = ExceptionList;
  iStack_4 = 0;
  if (*(int *)(this + 0x24) == 0) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = *(int *)(*(int *)(this + 0x24) + 0x48);
  }
  ExceptionList = &pvStack_c;
  thunk_FUN_10114340();
  do {
    if (iStack_1c == 0) {
      iStack_4 = 5;
      param_3 = 0;
      param_4 = 0;
      FArray::Realloc((FArray *)&param_2,2);
      iStack_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_2);
      ExceptionList = pvStack_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(iStack_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UArrayProperty::PrivateStaticClass) {
        FString::FString((FString *)&puStack_18,
                         (ushort *)(*(int *)(_Names + *(int *)(iStack_1c + 0x20) * 4) + 0xc));
        iStack_4._0_1_ = 1;
        puVar4 = param_2;
        if (param_3 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = puStack_18;
        if (iStack_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_5 = this + *(int *)(iStack_1c + 0x54);
          *param_6 = *(undefined4 *)(*(int *)(iStack_1c + 0x78) + 0x44);
          iStack_4._0_1_ = 2;
          iStack_14 = 0;
          uStack_10 = 0;
          FArray::Realloc((FArray *)&puStack_18,2);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_18);
          iStack_4 = 3;
          param_3 = 0;
          param_4 = 0;
          FArray::Realloc((FArray *)&param_2,2);
          iStack_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_2);
          ExceptionList = pvStack_c;
          return 1;
        }
        iStack_4._0_1_ = 4;
        iStack_14 = 0;
        uStack_10 = 0;
        FArray::Realloc((FArray *)&puStack_18,2);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_18);
        break;
      }
    }
    iStack_1c = *(int *)(iStack_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10101a73 FArchive::SerializeInt

/* public: virtual void __thiscall FArchive::SerializeInt(unsigned long &,unsigned long) */

void __thiscall FArchive::SerializeInt(FArchive *this,ulong *param_1,ulong param_2)

{
                    /* 0x1a73  1834  ?SerializeInt@FArchive@@UAEXAAKK@Z */
                    /* WARNING: Could not recover jumptable at 0x10114f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


// ==== 10101a82 UObject::execEqualEqual_FloatFloat

/* WARNING: Removing unreachable block (ram,0x1013d71d) */
/* public: void __thiscall UObject::execEqualEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x1a82  2207  ?execEqualEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 1;
  return;
}


// ==== 10101a87 UPackageMap::UPackageMap

/* public: __thiscall UPackageMap::UPackageMap(class UPackageMap const &) */

UPackageMap * __thiscall UPackageMap::UPackageMap(UPackageMap *this,UPackageMap *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a87  259  ??0UPackageMap@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9014;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_10120a60(param_1 + 0x34);
  uStack_4._0_1_ = 1;
  thunk_FUN_10123ef0(param_1 + 0x40);
  uStack_4._0_1_ = 3;
  thunk_FUN_10124090(param_1 + 0x54);
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  thunk_FUN_10118130(param_1 + 0x68);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101a8c thunk_FUN_10161b40 thunk -> 10161b40

// ==== 10101a9b UConst::GetSuperConst

/* public: class UConst * __thiscall UConst::GetSuperConst(void)const  */

UConst * __thiscall UConst::GetSuperConst(UConst *this)

{
                    /* 0x1a9b  1399  ?GetSuperConst@UConst@@QBEPAV1@XZ */
  return *(UConst **)(this + 0x34);
}


// ==== 10101aa0 UObject::execGetPropertyText

/* public: void __thiscall UObject::execGetPropertyText(struct FFrame &,void * const) */

void __thiscall UObject::execGetPropertyText(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int unaff_EBX;
  undefined2 *unaff_ESI;
  FString *unaff_retaddr;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1aa0  2231  ?execGetPropertyText@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb5dc;
  pvStack_c = ExceptionList;
  uStack_818 = 0;
  uStack_814 = 0;
  uStack_810 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_818);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (unaff_EBX == 0) {
    unaff_ESI = &DAT_101cdd44;
  }
  piVar2 = (int *)thunk_FUN_10147830(*(undefined4 *)(this + 0x24),unaff_ESI);
  if ((piVar2 == (int *)0x0) || ((*(byte *)(piVar2 + 7) & 4) == 0)) {
    if (*(undefined **)unaff_retaddr != &DAT_101d405c) {
      *(undefined4 *)(unaff_retaddr + 8) = 0;
      *(undefined4 *)(unaff_retaddr + 4) = 0;
      FArray::Realloc((FArray *)unaff_retaddr,2);
      if (*(int *)(unaff_retaddr + 4) != 0) {
        _memcpy(*(void **)unaff_retaddr,&DAT_101d405c,*(int *)(unaff_retaddr + 4) * 2);
      }
    }
  }
  else {
    uStack_814 = uStack_814 & 0xffff0000;
    _memset((void *)((int)&uStack_814 + 2),0,0x7fe);
    (**(code **)(*piVar2 + 0xa0))(0,&uStack_814,this,this,1);
    FString::operator=(unaff_retaddr,(ushort *)&uStack_814);
  }
  pvStack_c = (void *)0x3;
  uStack_818 = 0;
  FArray::Realloc((FArray *)&stack0xfffff7e0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xfffff7e0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10101aa5 FArchive::Close

/* public: virtual int __thiscall FArchive::Close(void) */

int __thiscall FArchive::Close(FArchive *this)

{
                    /* 0x1aa5  850  ?Close@FArchive@@UAEHXZ */
  return (uint)(*(int *)(this + 0x2c) == 0);
}


// ==== 10101aaf thunk_FUN_10119b80 thunk -> 10119b80

// ==== 10101ab4 FLogOutError::FLogOutError

/* public: __thiscall FLogOutError::FLogOutError(void) */

void __thiscall FLogOutError::FLogOutError(FLogOutError *this)

{
                    /* 0x1ab4  69  ??0FLogOutError@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10101abe UStruct::GetInheritanceSuper

/* public: virtual class UStruct * __thiscall UStruct::GetInheritanceSuper(void) */

UStruct * __thiscall UStruct::GetInheritanceSuper(UStruct *this)

{
                    /* 0x1abe  1340  ?GetInheritanceSuper@UStruct@@UAEPAV1@XZ */
  return *(UStruct **)(this + 0x34);
}


// ==== 10101ac3 thunk_FUN_1014c590 thunk -> 1014c590

// ==== 10101acd UCommandlet::operator_new

/* public: static void * __cdecl UCommandlet::operator new(unsigned int,enum EInternal *) */

void * __cdecl UCommandlet::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1acd  364  ??2UCommandlet@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10101ad2 thunk_FUN_1014c6e0 thunk -> 1014c6e0

// ==== 10101ad7 UObject::execMultiply_FloatFloat

/* public: void __thiscall UObject::execMultiply_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x1ad7  2313  ?execMultiply_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (float)&uStack_4 * (float)&uStack_4;
  return;
}


// ==== 10101adc UMapProperty::ImportText

/* public: virtual unsigned short const * __thiscall UMapProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UMapProperty::ImportText(UMapProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
                    /* 0x1adc  1450  ?ImportText@UMapProperty@@UBEPBGPBGPAEH@Z */
  return param_1;
}


// ==== 10101ae1 thunk_FUN_10113aa0 thunk -> 10113aa0

// ==== 10101ae6 UClassProperty::StaticClass

/* public: static class UClass * __cdecl UClassProperty::StaticClass(void) */

UClass * __cdecl UClassProperty::StaticClass(void)

{
                    /* 0x1ae6  1892  ?StaticClass@UClassProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10101af0 UObject::execRight

/* public: void __thiscall UObject::execRight(struct FFrame &,void * const) */

void __thiscall UObject::execRight(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  undefined4 *puStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  FArray *pFStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1af0  2355  ?execRight@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb050;
  pFStack_c = ExceptionList;
  uStack_24 = 0;
  pvStack_20 = (void *)0x0;
  uStack_1c = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pFStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &uStack_24;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar5 = (FArray *)FString::Right((FString *)&stack0xffffffcc,(int)&uStack_28);
  pFVar4 = pFStack_c;
  uStack_18._0_1_ = 3;
  if (pFStack_c != pFVar5) {
    uVar2 = *(undefined4 *)(pFVar5 + 4);
    *(undefined4 *)(pFStack_c + 8) = uVar2;
    *(undefined4 *)(pFStack_c + 4) = uVar2;
    FArray::Realloc(pFStack_c,2);
    iVar3 = *(int *)(pFVar4 + 4);
    if (iVar3 != 0) {
      if (*(int *)(pFVar5 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar5;
      }
      _memcpy(*(void **)pFVar4,_Src,iVar3 * 2);
    }
  }
  uStack_18._0_1_ = 4;
  uStack_28 = 0;
  uStack_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  uStack_18 = CONCAT31(uStack_18._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  uStack_18 = 5;
  FArray::Realloc((FArray *)&puStack_38,2);
  uStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_38);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10101af5 thunk_FUN_1011cbb0 thunk -> 1011cbb0

// ==== 10101afa FRangeVector::FRangeVector

/* public: __thiscall FRangeVector::FRangeVector(class FVector) */

void __thiscall
FRangeVector::FRangeVector
          (FRangeVector *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x1afa  123  ??0FRangeVector@@QAE@VFVector@@@Z */
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_3;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 0x14) = param_4;
  return;
}


// ==== 10101aff FBlowFish::Blowfish_decipher

/* public: void __thiscall FBlowFish::Blowfish_decipher(unsigned long *,unsigned long *) */

void __thiscall FBlowFish::Blowfish_decipher(FBlowFish *this,ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
                    /* 0x1aff  821  ?Blowfish_decipher@FBlowFish@@QAEXPAK0@Z */
  uVar7 = *(uint *)(this + 0x44) ^ *param_1;
  uVar6 = (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
           *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
          *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
          *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x40) ^ *param_2;
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x3c);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x38);
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x34);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x30);
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x2c);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x28);
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x24);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x20);
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x1c);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x18);
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x14);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x10);
  uVar7 = uVar7 ^ (*(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0xc);
  uVar6 = uVar6 ^ (*(int *)(this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar7 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar7 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar7 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 8);
  iVar1 = *(int *)(this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448);
  iVar2 = *(int *)(this + (uVar6 >> 0x18) * 4 + 0x48);
  uVar3 = *(uint *)(this + (uVar6 >> 8 & 0xff) * 4 + 0x848);
  iVar4 = *(int *)(this + (uVar6 & 0xff) * 4 + 0xc48);
  uVar5 = *(uint *)(this + 4);
  *param_1 = *(uint *)this ^ uVar6;
  *param_2 = uVar7 ^ (iVar1 + iVar2 ^ uVar3) + iVar4 ^ uVar5;
  return;
}


// ==== 10101b09 FBox::FBox

/* public: __thiscall FBox::FBox(void) */

FBox * __thiscall FBox::FBox(FBox *this)

{
                    /* 0x1b09  24  ??0FBox@@QAE@XZ */
  return this;
}


// ==== 10101b0e thunk_FUN_10138180 thunk -> 10138180

// ==== 10101b1d UFunction::operator_new

/* public: static void * __cdecl UFunction::operator new(unsigned int,enum EInternal *) */

void * __cdecl UFunction::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1b1d  382  ??2UFunction@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10101b22 UObject::SetFlags

/* public: void __thiscall UObject::SetFlags(unsigned long) */

void __thiscall UObject::SetFlags(UObject *this,ulong param_1)

{
                    /* 0x1b22  1858  ?SetFlags@UObject@@QAEXK@Z */
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | param_1;
  return;
}


// ==== 10101b27 thunk_FUN_1015c190 thunk -> 1015c190

// ==== 10101b31 FRange::operator*

/* public: class FRange __thiscall FRange::operator*(class FRange const &)const  */

FRange * __thiscall FRange::operator*(FRange *this,FRange *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x1b31  609  ??DFRange@@QBE?AV0@ABV0@@Z */
  FRange(param_1,*in_stack_00000008 * *(float *)this,in_stack_00000008[1] * *(float *)(this + 4));
  return param_1;
}


// ==== 10101b36 FCoords::operator/

/* public: class FCoords __thiscall FCoords::operator/(class FRotator const &)const  */

void __thiscall FCoords::operator/(FCoords *this,FRotator *param_1)

{
  FCoords *pFVar1;
  int iVar2;
  FRotator *in_stack_00000008;
  FCoords aFStack_30 [48];
  
  pFVar1 = aFStack_30;
                    /* 0x1b36  644  ??KFCoords@@QBE?AV0@ABVFRotator@@@Z */
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *(undefined4 *)this;
    this = this + 4;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = operator/=(aFStack_30,in_stack_00000008);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 10101b3b UClassProperty::operator=

/* public: class UClassProperty & __thiscall UClassProperty::operator=(class UClassProperty const &)
    */

UClassProperty * __thiscall UClassProperty::operator=(UClassProperty *this,UClassProperty *param_1)

{
                    /* 0x1b3b  515  ??4UClassProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return this;
}


// ==== 10101b40 UObject::execComplementEqual_StringString

/* public: void __thiscall UObject::execComplementEqual_StringString(struct FFrame &,void * const)
    */

void __thiscall
UObject::execComplementEqual_StringString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  FFrame *pFStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b40  2176  ?execComplementEqual_StringString@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_8 = (uint *)&LAB_101baf60;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_30 = &uStack_18;
  pFStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar3 = pFStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    pFVar3 = (FFrame *)&DAT_101cdd44;
  }
  iVar2 = appStricmp(&DAT_101cdd44,(ushort *)pFVar3);
  *puStack_8 = (uint)(iVar2 == 0);
  uStack_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&pFStack_34,2);
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&pFStack_34);
  uStack_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  uStack_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10101b45 thunk_FUN_10120e70 thunk -> 10120e70

// ==== 10101b4a FPlane::FPlane

/* public: __thiscall FPlane::FPlane(class FVector const &) */

void __thiscall FPlane::FPlane(FPlane *this,FVector *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1b4a  105  ??0FPlane@@QAE@ABVFVector@@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


// ==== 10101b4f UObject::execMultiply_RotatorFloat

/* public: void __thiscall UObject::execMultiply_RotatorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_RotatorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c [4];
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b4f  2317  ?execMultiply_RotatorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_c);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar2 = FUN_1017b700();
  uVar3 = FUN_1017b700();
  uVar4 = FUN_1017b700();
  *puStack_8 = uVar2;
  puStack_8[1] = uVar3;
  puStack_8[2] = uVar4;
  return;
}


// ==== 10101b54 UObjectExporterT3D::operator_new

/* public: static void * __cdecl UObjectExporterT3D::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UObjectExporterT3D::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1b54  397  ??2UObjectExporterT3D@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101b59 UClass::UClass

/* public: __thiscall UClass::UClass(class UClass const &) */

UClass * __thiscall UClass::UClass(UClass *this,UClass *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b59  191  ??0UClass@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b87a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UState::UState((UState *)this,(UState *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(this + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(this + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(this + 0x4b0) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(this + 0x4b4) = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(this + 0x4b8) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(this + 0x4bc) = *(undefined4 *)(param_1 + 0x4bc);
  *(undefined4 *)(this + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  thunk_FUN_10118ed0(param_1 + 0x4c4);
  uStack_4._0_1_ = 1;
  thunk_FUN_10118fc0(param_1 + 0x4d0);
  uStack_4._0_1_ = 2;
  thunk_FUN_101190a0(param_1 + 0x4dc);
  uStack_4._0_1_ = 3;
  thunk_FUN_10118cb0(param_1 + 0x4e8);
  uStack_4._0_1_ = 4;
  thunk_FUN_101186c0(param_1 + 0x4f4);
  uStack_4._0_1_ = 5;
  thunk_FUN_10118cb0(param_1 + 0x500);
  uStack_4._0_1_ = 6;
  thunk_FUN_10118cb0(param_1 + 0x50c);
  uStack_4 = CONCAT31(uStack_4._1_3_,7);
  *(undefined4 *)(this + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(this + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  FString::FString((FString *)(this + 0x520),(FString *)(param_1 + 0x520));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101b5e FFieldNetCache::FFieldNetCache

/* public: __thiscall FFieldNetCache::FFieldNetCache(class UField *,int,int) */

void __thiscall
FFieldNetCache::FFieldNetCache(FFieldNetCache *this,UField *param_1,int param_2,int param_3)

{
                    /* 0x1b5e  51  ??0FFieldNetCache@@QAE@PAVUField@@HH@Z */
  *(UField **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}


// ==== 10101b63 UBoolProperty::ExportCppItem

/* public: virtual void __thiscall UBoolProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall UBoolProperty::ExportCppItem(UBoolProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b63  962  ?ExportCppItem@UBoolProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bde40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"BITFIELD");
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101b72 FRange::FRange

/* public: __thiscall FRange::FRange(float) */

void __thiscall FRange::FRange(FRange *this,float param_1)

{
                    /* 0x1b72  119  ??0FRange@@QAE@M@Z */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_1;
  return;
}


// ==== 10101b77 UObject::GetCacheIndex

/* public: unsigned long __thiscall UObject::GetCacheIndex(void)const  */

ulong __thiscall UObject::GetCacheIndex(UObject *this)

{
                    /* 0x1b77  1285  ?GetCacheIndex@UObject@@QBEKXZ */
  return *(ulong *)(this + 0x28);
}


// ==== 10101b7c thunk_FUN_10118130 thunk -> 10118130

// ==== 10101b81 FName::SetFlags

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FName::SetFlags(unsigned long)const  */

void __thiscall FName::SetFlags(FName *this,ulong param_1)

{
  uint *puVar1;
  
                    /* 0x1b81  1857  ?SetFlags@FName@@QBEXK@Z */
  puVar1 = (uint *)(*(int *)(_Names + *(int *)this * 4) + 4);
  *puVar1 = *puVar1 | param_1;
  return;
}


// ==== 10101b86 ULinkerLoad::ULinkerLoad

/* public: __thiscall ULinkerLoad::ULinkerLoad(class UObject *,unsigned short const *,unsigned long)
    */

ULinkerLoad * __thiscall
ULinkerLoad::ULinkerLoad(ULinkerLoad *this,UObject *param_1,ushort *param_2,ulong param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b86  240  ??0ULinkerLoad@@QAE@PAVUObject@@PBGK@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101bbce2;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  ULinker::ULinker((ULinker *)this,param_1,param_2);
  *(undefined ***)(this + 0xc0) = FArchive::vftable;
  *(undefined4 *)(this + 0xc4) = 0x7b;
  *(undefined4 *)(this + 200) = 2000;
  *(undefined4 *)(this + 0xcc) = 0x1e;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 1;
  *(undefined4 *)(this + 0xe4) = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  *(undefined ***)this = vftable_for_ULinker_;
  *(undefined ***)(this + 0xc0) = vftable_for_FArchive_;
  *(ulong *)(this + 0xf8) = param_3;
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x514) = 0;
  uStack_8 = 6;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (**(code **)(*(int *)GFileManager + 8))(param_2,0,GError);
    *(int *)(this + iVar3 * 4 + 0x518) = iVar1;
    if (iVar1 == 0) {
      puVar2 = LocalizeError((ushort *)L"OpenFailed",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar2);
    }
  }
  LoadObject(this);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10101b8b UObject::execAsin

/* public: void __thiscall UObject::execAsin(struct FFrame &,void * const) */

void __thiscall UObject::execAsin(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1b8b  2154  ?execAsin@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appAsin((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10101b90 thunk_FUN_1015dfd0 thunk -> 1015dfd0

// ==== 10101b95 UObject::FindFloatProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindFloatProperty(class FString,float *) */

int __thiscall
UObject::FindFloatProperty
          (UObject *this,ushort *param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iStack_1c;
  ushort *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1b95  1005  ?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */
  puStack_8 = &LAB_101bce20;
  pvStack_c = ExceptionList;
  iStack_4 = 0;
  if (*(int *)(this + 0x24) == 0) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = *(int *)(*(int *)(this + 0x24) + 0x48);
  }
  ExceptionList = &pvStack_c;
  thunk_FUN_10114340();
  do {
    if (iStack_1c == 0) {
      iStack_4 = 5;
      param_3 = 0;
      param_4 = 0;
      FArray::Realloc((FArray *)&param_2,2);
      iStack_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_2);
      ExceptionList = pvStack_c;
      return 0;
    }
    for (pUVar1 = *(UClass **)(iStack_1c + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UFloatProperty::PrivateStaticClass) {
        FString::FString((FString *)&puStack_18,
                         (ushort *)(*(int *)(_Names + *(int *)(iStack_1c + 0x20) * 4) + 0xc));
        iStack_4._0_1_ = 1;
        puVar4 = param_2;
        if (param_3 == 0) {
          puVar4 = &DAT_101cdd44;
        }
        puVar2 = puStack_18;
        if (iStack_14 == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,puVar4);
        if (iVar3 == 0) {
          *param_5 = *(undefined4 *)(this + *(int *)(iStack_1c + 0x54));
          iStack_4._0_1_ = 2;
          iStack_14 = 0;
          uStack_10 = 0;
          FArray::Realloc((FArray *)&puStack_18,2);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_18);
          iStack_4 = 3;
          param_3 = 0;
          param_4 = 0;
          FArray::Realloc((FArray *)&param_2,2);
          iStack_4 = 0xffffffff;
          TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&param_2);
          ExceptionList = pvStack_c;
          return 1;
        }
        iStack_4._0_1_ = 4;
        iStack_14 = 0;
        uStack_10 = 0;
        FArray::Realloc((FArray *)&puStack_18,2);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_18);
        break;
      }
    }
    iStack_1c = *(int *)(iStack_1c + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10101b9a UParamStack::execGetFloat

/* public: void __thiscall UParamStack::execGetFloat(struct FFrame &,void * const) */

void __thiscall UParamStack::execGetFloat(UParamStack *this,FFrame *param_1,void *param_2)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b9a  2229  ?execGetFloat@UParamStack@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bcb80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(this + 0x34) != (L2ParamStack *)0x0) {
    puVar1 = L2ParamStack::Top(*(L2ParamStack **)(this + 0x34));
    *(undefined4 *)param_2 = *puVar1;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101b9f UObject::execCos

/* public: void __thiscall UObject::execCos(struct FFrame &,void * const) */

void __thiscall UObject::execCos(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1b9f  2180  ?execCos@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appCos((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10101ba4 ULinkerLoad::~ULinkerLoad

/* public: virtual __thiscall ULinkerLoad::~ULinkerLoad(void) */

void __thiscall ULinkerLoad::~ULinkerLoad(ULinkerLoad *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1ba4  335  ??1ULinkerLoad@@UAE@XZ */
  puStack_8 = &LAB_101b8a3d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_ULinker_;
  *(undefined ***)(this + 0xc0) = vftable_for_FArchive_;
  uStack_4 = 3;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4._0_1_ = 2;
  thunk_FUN_10121780();
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  thunk_FUN_10121600();
  *(undefined ***)(this + 0xc0) = FArchive::vftable;
  uStack_4 = 0xffffffff;
  ULinker::~ULinker((ULinker *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101ba9 FQuat::RotateVector

/* public: class FVector __thiscall FQuat::RotateVector(class FVector) */

void __thiscall
FQuat::RotateVector(FQuat *this,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x1ba9  1778  ?RotateVector@FQuat@@QAE?AVFVector@@V2@@Z */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc) + *(float *)(this + 0xc);
  fVar5 = fVar4 * (fVar2 * param_5 - param_4 * fVar3);
  *param_2 = fVar5;
  fVar6 = (fVar3 * param_3 - fVar1 * param_5) * fVar4;
  param_2[1] = fVar6;
  fVar4 = fVar4 * (fVar1 * param_4 - fVar2 * param_3);
  param_2[2] = fVar4;
  fVar7 = *(float *)(this + 0xc) * *(float *)(this + 0xc) -
          (fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar8 = param_3 * fVar1 + param_4 * fVar2 + fVar3 * param_5;
  fVar8 = fVar8 + fVar8;
  *param_2 = fVar5 + fVar7 * param_3 + fVar8 * fVar1;
  param_2[1] = fVar6 + param_4 * fVar7 + fVar2 * fVar8;
  param_2[2] = fVar4 + param_5 * fVar7 + fVar8 * fVar3;
  return;
}


// ==== 10101bb3 FString::operator+

/* public: class FString __thiscall FString::operator+(unsigned short const *) */

ushort * __thiscall FString::operator+(FString *this,ushort *param_1)

{
  FString *pFVar1;
  ushort *in_stack_00000008;
  FString aFStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1bb3  642  ??HFString@@QAE?AV0@PBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7019;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFVar1 = (FString *)FString(aFStack_18,this);
  uStack_4 = 1;
  pFVar1 = operator+=(pFVar1,in_stack_00000008);
  FString((FString *)param_1,pFVar1);
  uStack_4 = 2;
  uStack_14 = 0;
  uStack_10 = 0;
  FArray::Realloc((FArray *)aFStack_18,2);
  uStack_4 = uStack_4 & 0xffffff00;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_18);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 10101bbd UFixedArrayProperty::operator=

/* public: class UFixedArrayProperty & __thiscall UFixedArrayProperty::operator=(class
   UFixedArrayProperty const &) */

UFixedArrayProperty * __thiscall
UFixedArrayProperty::operator=(UFixedArrayProperty *this,UFixedArrayProperty *param_1)

{
                    /* 0x1bbd  523  ??4UFixedArrayProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return this;
}


// ==== 10101bc2 thunk_FUN_101182b0 thunk -> 101182b0

// ==== 10101bc7 FUnknown::FUnknown

/* public: __thiscall FUnknown::FUnknown(void) */

void __thiscall FUnknown::FUnknown(FUnknown *this)

{
                    /* 0x1bc7  166  ??0FUnknown@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10101bcc thunk_FUN_10135d10 thunk -> 10135d10

// ==== 10101bd1 thunk_FUN_10119450 thunk -> 10119450

// ==== 10101bdb thunk_FUN_10118830 thunk -> 10118830

// ==== 10101be0 ULanguage::ULanguage

/* public: __thiscall ULanguage::ULanguage(class ULanguage const &) */

ULanguage * __thiscall ULanguage::ULanguage(ULanguage *this,ULanguage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1be0  232  ??0ULanguage@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6898;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101bea thunk_FUN_10138270 thunk -> 10138270

// ==== 10101bef FVector::GetAbsMax

/* public: float __thiscall FVector::GetAbsMax(void)const  */

float __thiscall FVector::GetAbsMax(FVector *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* 0x1bef  1280  ?GetAbsMax@FVector@@QBEMXZ */
  fVar1 = *(float *)(this + 8);
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  fVar2 = *(float *)(this + 4);
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  fVar3 = *(float *)this;
  if (fVar3 < 0.0) {
    fVar3 = -fVar3;
  }
  if (fVar2 < fVar3 != (fVar2 == fVar3)) {
    fVar2 = fVar3;
  }
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    return fVar1;
  }
  return fVar2;
}


// ==== 10101bf4 UParamStack::UParamStack

/* public: __thiscall UParamStack::UParamStack(class UParamStack const &) */

UParamStack * __thiscall UParamStack::UParamStack(UParamStack *this,UParamStack *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1bf4  262  ??0UParamStack@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b68f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101bf9 thunk_FUN_101611c0 thunk -> 101611c0

// ==== 10101bfe FScopeCriticalSection::~FScopeCriticalSection

/* public: __thiscall FScopeCriticalSection::~FScopeCriticalSection(void) */

void __thiscall FScopeCriticalSection::~FScopeCriticalSection(FScopeCriticalSection *this)

{
                    /* 0x1bfe  310  ??1FScopeCriticalSection@@QAE@XZ */
  LeaveCriticalSection((LPCRITICAL_SECTION)**(undefined4 **)this);
  return;
}


// ==== 10101c03 FBox::Intersect

/* public: bool __thiscall FBox::Intersect(class FBox const &)const  */

bool __thiscall FBox::Intersect(FBox *this,FBox *param_1)

{
                    /* 0x1c03  1505  ?Intersect@FBox@@QBE_NABV1@@Z */
  if ((((*(float *)this <= *(float *)(param_1 + 0xc)) &&
       (*(float *)param_1 <= *(float *)(this + 0xc))) &&
      (*(float *)(this + 4) <= *(float *)(param_1 + 0x10))) &&
     (((*(float *)(param_1 + 4) <= *(float *)(this + 0x10) &&
       (*(float *)(this + 8) <= *(float *)(param_1 + 0x14))) &&
      (*(float *)(param_1 + 8) <= *(float *)(this + 0x14))))) {
    return true;
  }
  return false;
}


// ==== 10101c08 FPlane::FPlane

/* public: __thiscall FPlane::FPlane(class FVector,class FVector,class FVector) */

FPlane * __thiscall
FPlane::FPlane(FPlane *this,float param_2,float param_3,float param_4,float param_5,float param_6,
              float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float unaff_ESI;
  float unaff_retaddr;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x1c08  107  ??0FPlane@@QAE@VFVector@@00@Z */
  fVar1 = param_8 - param_2;
  fVar3 = param_9 - param_3;
  param_8 = param_10 - param_4;
  fVar2 = param_5 - param_2;
  param_5 = param_7 - param_4;
  fStack_c = param_8 * (param_6 - param_3) - fVar3 * param_5;
  fStack_8 = fVar1 * param_5 - fVar2 * param_8;
  fStack_4 = fVar2 * fVar3 - fVar1 * (param_6 - param_3);
  FVector::SafeNormal((FVector *)&fStack_c);
  param_9 = param_4;
  param_5 = unaff_ESI * param_4 - fVar3 * param_7;
  param_6 = fVar3 * fVar1 - unaff_ESI * fVar2;
  param_4 = param_7 * fVar2 - fVar1 * param_4;
  param_7 = fVar3;
  param_8 = fVar2;
  pfVar4 = (float *)FVector::SafeNormal((FVector *)&param_4);
  *(float *)(this + 0xc) = pfVar4[2] * param_2 + *pfVar4 * fStack_4 + pfVar4[1] * unaff_retaddr;
  return this;
}


// ==== 10101c0d UNameProperty::operator_new

/* public: static void * __cdecl UNameProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UNameProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1c0d  393  ??2UNameProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101c17 thunk_FUN_10149250 thunk -> 10149250

// ==== 10101c21 FArchiveCountMem::operator=

/* public: class FArchiveCountMem & __thiscall FArchiveCountMem::operator=(class FArchiveCountMem
   const &) */

FArchiveCountMem * __thiscall
FArchiveCountMem::operator=(FArchiveCountMem *this,FArchiveCountMem *param_1)

{
                    /* 0x1c21  428  ??4FArchiveCountMem@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 10101c26 UObject::execFloatConst

/* public: void __thiscall UObject::execFloatConst(struct FFrame &,void * const) */

void __thiscall UObject::execFloatConst(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  
                    /* 0x1c26  2222  ?execFloatConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)param_2 = uVar1;
  return;
}


// ==== 10101c2b UObject::execLerp

/* public: void __thiscall UObject::execLerp(struct FFrame &,void * const) */

void __thiscall UObject::execLerp(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  float *pfStack_10;
  float fStack_4;
  
                    /* 0x1c2b  2284  ?execLerp@UObject@@QAEXAAUFFrame@@QAX@Z */
  fStack_4 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pfStack_10 = &fStack_4;
  (*(code *)(&GNatives)[bVar1])();
  pfStack_10 = (float *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pfStack_10);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_10 = (float)&stack0xfffffff4 + (float)pFVar2 * ((float)param_1 - (float)&stack0xfffffff4)
  ;
  return;
}


// ==== 10101c30 UObject::execLoge

/* public: void __thiscall UObject::execLoge(struct FFrame &,void * const) */

void __thiscall UObject::execLoge(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1c30  2299  ?execLoge@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appLoge((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10101c3a FPosition::FPosition

/* public: __thiscall FPosition::FPosition(void) */

FPosition * __thiscall FPosition::FPosition(FPosition *this)

{
                    /* 0x1c3a  112  ??0FPosition@@QAE@XZ */
  return this;
}


// ==== 10101c3f thunk_FUN_1015cb60 thunk -> 1015cb60

// ==== 10101c44 UObject::ProcessRemoteFunction

/* public: virtual int __thiscall UObject::ProcessRemoteFunction(class UFunction *,void *,struct
   FFrame *) */

int __thiscall
UObject::ProcessRemoteFunction(UObject *this,UFunction *param_1,void *param_2,FFrame *param_3)

{
                    /* 0x1c44  1735
                       ?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
  return 0;
}


// ==== 10101c4e UObject::execDisable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::execDisable(struct FFrame &,void * const) */

void __thiscall UObject::execDisable(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_EDI;
  undefined8 uVar3;
  undefined4 uStack_4;
  
                    /* 0x1c4e  2186  ?execDisable@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((FOutputDevice *)(unaff_EDI + -300) < (FOutputDevice *)0x40) &&
     (iVar2 = *(int *)(this + 0xc), iVar2 != 0)) {
    uVar3 = __allshl();
    *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & ~(uint)uVar3;
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & ~(uint)((ulonglong)uVar3 >> 0x20);
    return;
  }
  FOutputDevice::Logf((FOutputDevice *)(unaff_EDI + -300),(ushort *)param_1);
  return;
}


// ==== 10101c53 UObject::execAddEqual_RotatorRotator

/* public: void __thiscall UObject::execAddEqual_RotatorRotator(struct FFrame &,void * const) */

void __thiscall UObject::execAddEqual_RotatorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int unaff_EDI;
  int *piVar2;
  int aiStack_14 [2];
  undefined1 auStack_c [4];
  int *piStack_8;
  
                    /* 0x1c53  2144  ?execAddEqual_RotatorRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  piVar2 = (int *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    piVar2 = aiStack_14;
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = (int)(param_1 + *piVar2);
  piVar2[1] = (int)(auStack_c + piVar2[1]);
  piVar2[2] = piVar2[2] + unaff_EDI;
  *piStack_8 = *piVar2;
  piStack_8[1] = piVar2[1];
  piStack_8[2] = piVar2[2];
  return;
}


// ==== 10101c58 FBitWriter::SerializeBits

/* public: virtual void __thiscall FBitWriter::SerializeBits(void *,int) */

void __thiscall FBitWriter::SerializeBits(FBitWriter *this,void *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  
                    /* 0x1c58  1832  ?SerializeBits@FBitWriter@@UAEXPAXH@Z */
  uVar1 = *(uint *)(this + 0x44);
  if (*(int *)(this + 0x48) < (int)(uVar1 + param_2)) {
    *(undefined4 *)(this + 0x2c) = 1;
    return;
  }
  if (param_2 == 1) {
    if ((*(byte *)param_1 & 1) != 0) {
      pbVar2 = (byte *)(((int)uVar1 >> 3) + *(int *)(this + 0x38));
      *pbVar2 = *pbVar2 | (&DAT_102387e4)[uVar1 & 7];
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    return;
  }
  thunk_FUN_1012e300(*(undefined4 *)(this + 0x38),uVar1,param_1,0,param_2);
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + param_2;
  return;
}


// ==== 10101c5d UFunction::GetInheritanceSuper

/* public: virtual class UStruct * __thiscall UFunction::GetInheritanceSuper(void) */

UStruct * __thiscall UFunction::GetInheritanceSuper(UFunction *this)

{
                    /* 0x1c5d  1338  ?GetInheritanceSuper@UFunction@@UAEPAVUStruct@@XZ */
  return (UStruct *)0x0;
}


// ==== 10101c62 thunk_FUN_1015aa70 thunk -> 1015aa70

// ==== 10101c6c TArray<unsigned_short>::AddUniqueItem

/* public: int __thiscall TArray<unsigned short>::AddUniqueItem(unsigned short const &) */

int __thiscall TArray<unsigned_short>::AddUniqueItem(TArray<unsigned_short> *this,ushort *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
                    /* 0x1c6c  795  ?AddUniqueItem@?$TArray@G@@QAEHABG@Z */
  iVar1 = *(int *)(this + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = *(ushort **)this;
    do {
      if (*puVar3 == *param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = iVar1 + 1;
  *(int *)(this + 4) = iVar2;
  if (*(int *)(this + 8) < iVar2) {
    *(int *)(this + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
    FArray::Realloc((FArray *)this,2);
  }
  *(ushort *)(*(int *)this + iVar1 * 2) = *param_1;
  return iVar1;
}


// ==== 10101c71 UClass::GetOuterUPackage

/* public: class UPackage * __thiscall UClass::GetOuterUPackage(void)const  */

UPackage * __thiscall UClass::GetOuterUPackage(UClass *this)

{
                    /* 0x1c71  1375  ?GetOuterUPackage@UClass@@QBEPAVUPackage@@XZ */
  return *(UPackage **)(this + 0x18);
}


// ==== 10101c76 thunk_FUN_10130a30 thunk -> 10130a30

// ==== 10101c7b UObject::execHighNative5

/* public: void __thiscall UObject::execHighNative5(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative5(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x1c7b  2258  ?execHighNative5@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280b70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10101c80 FArchive::AtStopper

/* public: virtual int __thiscall FArchive::AtStopper(void) */

int __thiscall FArchive::AtStopper(FArchive *this)

{
  int iVar1;
  
                    /* 0x1c80  807  ?AtStopper@FArchive@@UAEHXZ */
  iVar1 = (**(code **)(*(int *)this + 0x28))();
  if (((iVar1 != -1) && (*(int *)(this + 0x34) != -1)) && (*(int *)(this + 0x34) <= iVar1)) {
    return 1;
  }
  return 0;
}


// ==== 10101c85 UObject::execNothing

/* public: void __thiscall UObject::execNothing(struct FFrame &,void * const) */

void __thiscall UObject::execNothing(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x1c85  2337  ?execNothing@UObject@@QAEXAAUFFrame@@QAX@Z */
  return;
}


// ==== 10101c8a UObject::execNormalize

/* public: void __thiscall UObject::execNormalize(struct FFrame &,void * const) */

void __thiscall UObject::execNormalize(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  uint unaff_ESI;
  uint uVar3;
  uint *unaff_retaddr;
  uint auStack_c [3];
  
                    /* 0x1c8a  2327  ?execNormalize@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar3 = (uint)auStack_c & 0xffff;
  if (0x7fff < uVar3) {
    uVar3 = uVar3 - 0x10000;
  }
  auStack_c[0] = auStack_c[0] & 0xffff;
  if (0x7fff < auStack_c[0]) {
    auStack_c[0] = auStack_c[0] - 0x10000;
  }
  uVar2 = unaff_ESI & 0xffff;
  if (0x7fff < uVar2) {
    uVar2 = uVar2 - 0x10000;
  }
  *unaff_retaddr = uVar3;
  unaff_retaddr[1] = uVar2;
  unaff_retaddr[2] = auStack_c[0];
  return;
}


// ==== 10101c8f thunk_FUN_10120dd0 thunk -> 10120dd0

// ==== 10101c99 thunk_FUN_1015dee0 thunk -> 1015dee0

// ==== 10101c9e L2ThreadUtil::AddMainThread

/* public: void __thiscall L2ThreadUtil::AddMainThread(void) */

void __thiscall L2ThreadUtil::AddMainThread(L2ThreadUtil *this)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  undefined4 uVar4;
  FScopeCriticalSection aFStack_18 [4];
  void *pvStack_14;
  FScopeCriticalSection aFStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c9e  788  ?AddMainThread@L2ThreadUtil@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b965e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_10,ThreadUtilCS);
  uStack_4 = 0;
  iVar1 = (*(code *)**(undefined4 **)GMalloc)(0xb8,&DAT_101cd5d8);
  pvStack_c._0_1_ = 1;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)thunk_FUN_10129b20(0,L"MainThread");
  }
  pvStack_c._0_1_ = 0;
  DVar3 = GetCurrentThreadId();
  piVar2[1] = DVar3;
  *(int *)(this + 0x2c4) = *(int *)(this + 0x2c4) + 1;
  *(int **)(this + 4) = piVar2;
  if (*(int *)(this + 0x2c8) == 0) {
    iVar1 = (*(code *)**(undefined4 **)GMalloc)(0x14,&DAT_101cd5d8);
    pvStack_c._0_1_ = 2;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_1012a260();
    }
    pvStack_c._0_1_ = 0;
    *(undefined4 *)(this + 0x2c8) = uVar4;
  }
  (**(code **)(*piVar2 + 0x28))();
  thunk_FUN_1012a190(&stack0xffffffe4,&stack0xffffffe0);
  pvStack_c = (void *)0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10101ca3 UObject::SavePackage

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static int __cdecl UObject::SavePackage(class UObject *,class UObject *,unsigned
   long,unsigned short const *,class FOutputDevice *,class ULinkerLoad *,int) */

int __cdecl
UObject::SavePackage
          (UObject *param_1,UObject *param_2,ulong param_3,ushort *param_4,FOutputDevice *param_5,
          ULinkerLoad *param_6,int param_7)

{
  uint *puVar1;
  int *piVar2;
  FArchive *pFVar3;
  ushort uVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined3 uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  FGenerationInfo *this;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  FObjectImport *this_00;
  FObjectExport *pFVar15;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  FOutputDevice *this_04;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  ushort auStack_370 [256];
  int iStack_170;
  int iStack_16c;
  int iStack_134;
  int iStack_d0;
  int iStack_cc;
  int iStack_c4;
  int iStack_c0;
  undefined1 *puStack_bc;
  int iStack_a8;
  undefined4 uStack_8c;
  int iStack_80;
  int iStack_78;
  undefined1 *puStack_70;
  void *pvStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_54;
  FString aFStack_50 [8];
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  ushort *puStack_3c;
  int iStack_38;
  int iStack_30;
  uint uStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_8;
  
                    /* 0x1ca3  1787
                       ?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@H@Z */
  puStack_68 = &LAB_101bdc84;
  pvStack_6c = ExceptionList;
  puStack_70 = &stack0xfffffc84;
  uStack_64 = 0;
  ExceptionList = &pvStack_6c;
  puVar19 = &stack0xfffffc84;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_6c;
    appFailAssert("InOuter",".\\UnObj.cpp",0xd56);
    puVar19 = puStack_70;
  }
  puStack_70 = puVar19;
  if (param_4 == (ushort *)0x0) {
    appFailAssert("Filename",".\\UnObj.cpp",0xd57);
  }
  uVar6 = rdtsc();
  iStack_40 = -(int)uVar6;
  iVar9 = thunk_FUN_101495a0();
  if (iVar9 != 0) {
    iVar9 = thunk_FUN_101495a0();
    *(uint *)(iVar9 + 0x3c) = *(uint *)(iVar9 + 0x3c) | 1;
  }
  appStrcpy(auStack_370,param_4);
  for (iStack_d0 = appStrlen(auStack_370);
      (((0 < iStack_d0 && (uVar4 = auStack_370[iStack_d0 + -1], uVar4 != 0x5c)) && (uVar4 != 0x2f))
      && (uVar4 != 0x3a)); iStack_d0 = iStack_d0 + -1) {
  }
  auStack_370[iStack_d0] = 0;
  appStrcat(auStack_370,(ushort *)L"Save.tmp");
  iVar9 = *(int *)GWarn;
  LocalizeProgress((ushort *)L"Saving",(ushort *)L"Core",(ushort *)0x0);
  (**(code **)(iVar9 + 0x18))(GWarn,0,0);
  uStack_54 = 0;
  ResetLoaders(param_1,0,1);
  uStack_64 = CONCAT31(uStack_64._1_3_,1);
  thunk_FUN_1012b3e0();
  while ((int)puStack_8 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + (int)puStack_8 * 4) + 0x1c);
    *puVar1 = *puVar1 & 0xfff8ffe7;
    thunk_FUN_1012ae60();
  }
  for (iStack_cc = 0; iStack_cc < DAT_10327ae4; iStack_cc = iStack_cc + 1) {
    iVar9 = *(int *)(_Names + iStack_cc * 4);
    if (iVar9 != 0) {
      puVar1 = (uint *)(iVar9 + 4);
      *puVar1 = *puVar1 & 0xfff8ffe7;
    }
  }
  uStack_64._0_1_ = 3;
  uStack_64._1_3_ = 0;
  thunk_FUN_1015acb0();
  uStack_64 = CONCAT31(uStack_64._1_3_,4);
  if (param_2 != (UObject *)0x0) {
    (**(code **)(iStack_16c + 0x18))();
  }
  thunk_FUN_1012b3e0();
  iVar9 = _GObjObjects;
  while (puVar14 = puStack_8, (int)puStack_8 < DAT_1033088c) {
    pUVar5 = *(UObject **)(iVar9 + (int)puStack_8 * 4);
    if (((param_3 & *(uint *)(pUVar5 + 0x1c)) != 0) && (iVar10 = IsIn(pUVar5,param_1), iVar10 != 0))
    {
      uStack_8c = *(undefined4 *)(iVar9 + (int)puVar14 * 4);
      (**(code **)(iStack_16c + 0x18))();
      iVar9 = _GObjObjects;
    }
    thunk_FUN_1012ae60();
  }
  uStack_64 = CONCAT31(uStack_64._1_3_,3);
  thunk_FUN_1015ad70();
  iStack_10 = 0;
  uStack_64 = 6;
  puStack_8 = (undefined4 *)&stack0xfffffc7c;
  iVar9 = thunk_FUN_10168a40(0x114,GObjTransientPkg);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = thunk_FUN_1014c310();
  }
  uStack_64 = CONCAT31(uStack_64._1_3_,7);
  iStack_10 = iVar9;
  thunk_FUN_1012b3e0();
  iVar10 = _GObjObjects;
  while (puVar14 = puStack_8, (int)puStack_8 < DAT_1033088c) {
    if ((*(uint *)(*(int *)(iVar10 + (int)puStack_8 * 4) + 0x1c) & 0x10) != 0) {
      thunk_FUN_1015aeb0();
      uStack_64 = CONCAT31(uStack_64._1_3_,8);
      (**(code **)(**(int **)(_GObjObjects + (int)puVar14 * 4) + 0x2c))();
      uStack_48 = *(uint *)(*(int *)(_GObjObjects + (int)puVar14 * 4) + 0x24);
      (**(code **)(iStack_170 + 0x18))();
      pUVar5 = *(UObject **)(_GObjObjects + (int)puVar14 * 4);
      iVar10 = IsIn(pUVar5,(UObject *)GObjTransientPkg);
      if (iVar10 != 0) {
        GetFullName(pUVar5,(ushort *)0x0);
        LocalizeError((ushort *)L"TransientImport",(ushort *)L"Core",(ushort *)0x0);
        FOutputDevice::Logf(this_01,(ushort *)GError);
      }
      uStack_64 = CONCAT31(uStack_64._1_3_,7);
      thunk_FUN_1015af70();
      iVar10 = _GObjObjects;
    }
    thunk_FUN_1012ae60();
  }
  uStack_64 = 10;
  thunk_FUN_1012b3e0();
  do {
    while( true ) {
      uVar16 = uStack_48;
      puVar7 = GLog;
      if (DAT_1033088c <= (int)uStack_48) {
        uStack_64._0_1_ = 0xd;
        uStack_64._1_3_ = 0;
        if (param_6 == (ULinkerLoad *)0x0) {
          puVar14 = (undefined4 *)appCreateGuid();
          *(undefined4 *)(iVar9 + 0x5c) = *puVar14;
          *(undefined4 *)(iVar9 + 0x60) = puVar14[1];
          *(undefined4 *)(iVar9 + 100) = puVar14[2];
          *(undefined4 *)(iVar9 + 0x68) = puVar14[3];
          thunk_FUN_101493f0();
          uStack_64._0_1_ = 0xe;
          thunk_FUN_10119480();
          uStack_64._0_1_ = 0xd;
          thunk_FUN_101211b0();
        }
        else {
          if (GLog != (undefined *)0x0) {
            FString::operator*((FString *)(param_6 + 0xa0));
            FOutputDevice::Logf2(this_04,(ushort *)puVar7);
          }
          *(undefined4 *)(iVar9 + 0x5c) = *(undefined4 *)(param_6 + 0x5c);
          *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(param_6 + 0x60);
          *(undefined4 *)(iVar9 + 100) = *(undefined4 *)(param_6 + 100);
          *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(param_6 + 0x68);
          thunk_FUN_10119480();
        }
        this = (FGenerationInfo *)thunk_FUN_101148f0();
        if (this != (FGenerationInfo *)0x0) {
          FGenerationInfo::FGenerationInfo(this,0,0);
        }
        thunk_FUN_1014b850();
        uStack_64 = 0x10;
        uVar12 = (**(code **)(*(int *)(iVar9 + 0xc0) + 0x28))();
        *(undefined4 *)(iVar9 + 0x48) = uVar12;
        for (puVar19 = (undefined1 *)0x0; puStack_bc = puVar19, (int)puVar19 < DAT_10327ae4;
            puVar19 = puVar19 + 1) {
          iVar10 = *(int *)(_Names + (int)puVar19 * 4);
          if ((iVar10 != 0) &&
             (puStack_8 = (undefined4 *)puVar19, (*(uint *)(iVar10 + 4) & 0x10) != 0)) {
            thunk_FUN_101493a0();
          }
        }
        uStack_64 = 0x12;
        iVar10 = 0;
        DAT_103287d0 = iVar9;
        if (param_6 != (ULinkerLoad *)0x0) {
          for (iStack_18 = 0; iVar10 = *(int *)(param_6 + 0x7c), iStack_18 < iVar10;
              iStack_18 = iStack_18 + 1) {
            iVar10 = iStack_18 * 4;
            iVar9 = *(int *)(param_6 + 0x78);
            piVar20 = (int *)(iStack_10 + 0x78);
            iVar13 = thunk_FUN_1015d8c0();
            if ((*(int *)(iVar10 + iVar9) == 0) || (iVar13 == -1)) {
              thunk_FUN_10148530();
              uVar12 = *(undefined4 *)(*piVar20 + iVar10);
              puVar14 = (undefined4 *)thunk_FUN_1015bc10();
              *puVar14 = uVar12;
            }
            else {
              iVar9 = *piVar20;
              uVar12 = *(undefined4 *)(iVar9 + iVar10);
              *(undefined4 *)(iVar9 + iVar10) = *(undefined4 *)(iVar9 + iVar13 * 4);
              *(undefined4 *)(iVar9 + iVar13 * 4) = uVar12;
            }
            *(undefined4 *)(iVar10 + *piVar20) = *(undefined4 *)(*(int *)(param_6 + 0x78) + iVar10);
            iVar9 = iStack_10;
          }
        }
        appQsort((void *)(*(int *)(iVar9 + 0x78) + iVar10 * 4),*(int *)(iVar9 + 0x7c) - iVar10,4,
                 (_func_int_void_ptr_void_ptr *)&LAB_101023ec);
        uStack_64 = 0x14;
        *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(iVar9 + 0x7c);
        for (iVar10 = 0; iStack_c4 = iVar10, iVar10 < *(int *)(iVar9 + 0x7c); iVar10 = iVar10 + 1) {
          operator<<((FArchive *)(iVar9 + 0xc0),
                     *(FNameEntry **)(_Names + *(int *)(*(int *)(iVar9 + 0x78) + iVar10 * 4) * 4));
          *(int *)(*(int *)(iVar9 + 0x108) + *(int *)(*(int *)(iVar9 + 0x78) + iVar10 * 4) * 4) =
               iVar10;
        }
        uStack_64 = 0x16;
        thunk_FUN_1012b3e0();
        while (puVar14 = puStack_8, (int)puStack_8 < DAT_1033088c) {
          if (((*(uint *)(*(int *)(_GObjObjects + (int)puStack_8 * 4) + 0x1c) & 8) != 0) &&
             (this_00 = (FObjectImport *)thunk_FUN_10114cb0(), this_00 != (FObjectImport *)0x0)) {
            FObjectImport::FObjectImport(this_00,*(UObject **)(_GObjObjects + (int)puVar14 * 4));
          }
          thunk_FUN_1012ae60();
        }
        *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(iVar9 + 0x88);
        uStack_64 = 0x18;
        DAT_103287d0 = iVar9;
        appQsort(*(void **)(iVar9 + 0x84),*(int *)(iVar9 + 0x88),0x1c,
                 (_func_int_void_ptr_void_ptr *)&LAB_101021d5);
        uStack_64 = 0x1a;
        thunk_FUN_1012b3e0();
        while (puVar14 = puStack_8, (int)puStack_8 < DAT_1033088c) {
          if (((*(uint *)(*(int *)(_GObjObjects + (int)puStack_8 * 4) + 0x1c) & 0x10) != 0) &&
             (pFVar15 = (FObjectExport *)thunk_FUN_10114d10(), pFVar15 != (FObjectExport *)0x0)) {
            FObjectExport::FObjectExport(pFVar15,*(UObject **)(_GObjObjects + (int)puVar14 * 4));
          }
          thunk_FUN_1012ae60();
        }
        uStack_64._1_3_ = 0;
        uVar8 = uStack_64._1_3_;
        uStack_64._0_1_ = 0x1c;
        uStack_64._1_3_ = 0;
        puVar14 = (undefined4 *)(undefined1 *)0x0;
        if (param_6 != (ULinkerLoad *)0x0) {
          thunk_FUN_10119640();
          uStack_64._0_1_ = 0x1d;
          thunk_FUN_1011a5a0();
          thunk_FUN_10113aa0();
          iVar10 = iStack_20;
          uVar16 = uStack_2c;
          uStack_64._0_1_ = 0x1e;
          iStack_20 = iStack_20 + uStack_2c;
          if (iStack_1c < iStack_20) {
            iStack_1c = ((int)(iStack_20 * 3 + (iStack_20 * 3 >> 0x1f & 7U)) >> 3) + 0x20 +
                        iStack_20;
            FArray::Realloc((FArray *)&iStack_24,1);
          }
          uStack_48 = uVar16;
          puStack_8 = (undefined4 *)(iVar10 + iStack_24);
          uVar17 = uVar16 & 3;
          puVar14 = puStack_8;
          for (uVar16 = uVar16 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined1 *)puVar14 = 0;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          thunk_FUN_1016c6a0();
          uStack_64 = CONCAT31(uStack_64._1_3_,0x1f);
          for (iVar10 = 0; iStack_44 = iVar10, iVar10 < (int)uStack_2c; iVar10 = iVar10 + 1) {
            GetFullName(*(UObject **)(iStack_30 + iVar10 * 0x24 + 0x1c),(ushort *)0x0);
            thunk_FUN_10166390();
          }
          puVar11 = (ushort *)0x0;
          while (puStack_3c = puVar11, (int)puVar11 < (int)*(undefined1 **)(param_6 + 0x94)) {
            GetPathName(*(UObject **)(iVar9 + 0x34),(UObject *)0x0,(ushort *)0x0);
            ULinker::GetExportFullName((ULinker *)param_6,(int)aFStack_50,puVar11);
            uStack_64._0_1_ = 0x20;
            piVar20 = (int *)thunk_FUN_1015da90();
            uStack_64 = CONCAT31(uStack_64._1_3_,0x1f);
            FString::~FString(aFStack_50);
            if (piVar20 == (int *)0x0) {
              pFVar15 = (FObjectExport *)thunk_FUN_10114d10(0x24);
              if (pFVar15 != (FObjectExport *)0x0) {
                FObjectExport::FObjectExport(pFVar15,(UObject *)0x0);
              }
              puVar11 = (ushort *)((int)puVar11 + 1);
            }
            else {
              puStack_8 = (undefined4 *)(iVar9 + 0x90);
              puVar14 = (undefined4 *)thunk_FUN_10114d10(0x24);
              if (puVar14 != (undefined4 *)0x0) {
                puVar18 = (undefined4 *)(iStack_30 + *piVar20 * 0x24);
                for (iVar10 = 9; iVar9 = iStack_10, iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar14 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar14 = puVar14 + 1;
                }
              }
              puStack_8 = (undefined4 *)(iStack_30 + *piVar20 * 0x24);
              iVar10 = thunk_FUN_1015bcc0();
              if (*(int *)(iVar10 + 0x1c) != puStack_8[7]) {
                appFailAssert("Linker->ExportMap.Last()._Object == Orig(*Find)._Object",
                              ".\\UnObj.cpp",0xe2d);
              }
              *(undefined1 *)(iStack_24 + *piVar20) = 1;
              puVar11 = (ushort *)((int)puStack_3c + 1);
            }
          }
          puStack_8 = (undefined4 *)*(undefined1 **)(param_6 + 0x94);
          for (iVar10 = 0; iStack_78 = iVar10, iVar10 < iStack_20; iVar10 = iVar10 + 1) {
            if ((*(char *)(iStack_24 + iVar10) == '\0') &&
               (puVar14 = (undefined4 *)thunk_FUN_10114d10(), puVar14 != (undefined4 *)0x0)) {
              puVar18 = (undefined4 *)(iStack_30 + iVar10 * 0x24);
              for (iVar13 = 9; iVar9 = iStack_10, iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar14 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar14 = puVar14 + 1;
              }
            }
          }
          uStack_64._0_1_ = 0x1e;
          thunk_FUN_1016c6f0();
          uStack_64._0_1_ = 0x1d;
          thunk_FUN_10118750();
          uStack_64._0_1_ = 0x1c;
          thunk_FUN_10121450();
          puVar14 = puStack_8;
          uVar8 = uStack_64._1_3_;
        }
        uStack_64._1_3_ = uVar8;
        appQsort((void *)(*(int *)(iVar9 + 0x90) + (int)puVar14 * 0x24),
                 *(int *)(iVar9 + 0x94) - (int)puVar14,0x24,
                 (_func_int_void_ptr_void_ptr *)&LAB_1010330f);
        *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(iVar9 + 0x94);
        for (iStack_a8 = 0; iStack_a8 < *(int *)(iVar9 + 0x94); iStack_a8 = iStack_a8 + 1) {
          iVar10 = *(int *)(iVar9 + 0x90) + iStack_a8 * 0x24;
          if (*(int *)(iVar10 + 0x1c) != 0) {
            *(int *)(*(int *)(iVar9 + 0xfc) + *(int *)(*(int *)(iVar10 + 0x1c) + 4) * 4) =
                 iStack_a8 + 1;
          }
        }
        for (iStack_80 = 0; iStack_80 < *(int *)(iVar9 + 0x88); iStack_80 = iStack_80 + 1) {
          *(int *)(*(int *)(iVar9 + 0xfc) +
                  *(int *)(*(int *)(*(int *)(iVar9 + 0x84) + iStack_80 * 0x1c + 0x10) + 4) * 4) =
               -1 - iStack_80;
        }
        uStack_64 = 0x24;
        for (iStack_38 = 0; iStack_38 < *(int *)(iVar9 + 0x94); iStack_38 = iStack_38 + 1) {
          puStack_8 = (undefined4 *)(iStack_38 * 0x24);
          piVar20 = (int *)((int)puStack_8 + *(int *)(iVar9 + 0x90));
          if (piVar20[7] != 0) {
            pUVar5 = (UObject *)piVar20[7];
            iVar10 = IsA(pUVar5,&UClass::PrivateStaticClass);
            if ((iVar10 == 0) &&
               (iVar10 = *(int *)(*(int *)(iVar9 + 0xfc) + *(int *)(*(int *)(pUVar5 + 0x24) + 4) * 4
                                 ), *piVar20 = iVar10, iVar10 == 0)) {
              appFailAssert("Export.ClassIndex!=0",".\\UnObj.cpp",0xe59);
            }
            pUVar5 = (UObject *)piVar20[7];
            iVar10 = IsA(pUVar5,&UStruct::PrivateStaticClass);
            if (((iVar10 != 0) && (*(int *)(pUVar5 + 0x34) != 0)) &&
               (iVar10 = *(int *)(*(int *)(iVar9 + 0xfc) + *(int *)(*(int *)(pUVar5 + 0x34) + 4) * 4
                                 ), piVar20[1] = iVar10, iVar10 == 0)) {
              appFailAssert("Export.SuperIndex!=0",".\\UnObj.cpp",0xe61);
            }
            if (*(UObject **)(piVar20[7] + 0x18) != param_1) {
              iVar10 = IsIn(*(UObject **)(piVar20[7] + 0x18),param_1);
              if (iVar10 == 0) {
                appFailAssert("Export._Object->GetOuter()->IsIn(InOuter)",".\\UnObj.cpp",0xe68);
              }
              iVar9 = *(int *)(*(int *)(iVar9 + 0xfc) +
                              *(int *)(*(int *)(piVar20[7] + 0x18) + 4) * 4);
              piVar20[2] = iVar9;
              if (iVar9 < 1) {
                appFailAssert("Export.PackageIndex>0",".\\UnObj.cpp",0xe6a);
              }
            }
            iVar9 = iStack_10;
            piVar2 = (int *)(iStack_10 + 0xc0);
            iVar10 = (**(code **)(*piVar2 + 0x28))();
            piVar20[6] = iVar10;
            (**(code **)(*(int *)piVar20[7] + 0x2c))();
            puVar14 = puStack_8;
            iVar9 = *(int *)(iVar9 + 0x90);
            iVar10 = (**(code **)(*piVar2 + 0x28))();
            piVar20[5] = iVar10 - *(int *)((int)puVar14 + iVar9 + 0x18);
            iVar9 = iStack_10;
          }
        }
        uStack_64 = 0x26;
        pFVar3 = (FArchive *)(iVar9 + 0xc0);
        uVar12 = (**(code **)(*(int *)pFVar3 + 0x28))();
        *(undefined4 *)(iVar9 + 0x58) = uVar12;
        for (iStack_14 = 0; iStack_14 < *(int *)(iVar9 + 0x88); iStack_14 = iStack_14 + 1) {
          iVar10 = *(int *)(iVar9 + 0x84) + iStack_14 * 0x1c;
          pUVar5 = *(UObject **)(*(int *)(iVar10 + 0x10) + 0x18);
          if (pUVar5 != (UObject *)0x0) {
            iVar13 = IsIn(pUVar5,param_1);
            if (iVar13 != 0) {
              appFailAssert("!Import.XObject->GetOuter()->IsIn(InOuter)",".\\UnObj.cpp",0xe7f);
            }
            iVar13 = *(int *)(*(int *)(iVar9 + 0xfc) +
                             *(int *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x18) + 4) * 4);
            *(int *)(iVar10 + 8) = iVar13;
            if (-1 < iVar13) {
              appFailAssert("Import.PackageIndex<0",".\\UnObj.cpp",0xe81);
            }
          }
          thunk_FUN_10148720();
        }
        uStack_64 = 0x28;
        uVar12 = (**(code **)(*(int *)pFVar3 + 0x28))();
        *(undefined4 *)(iVar9 + 0x50) = uVar12;
        for (iVar10 = 0; iStack_c0 = iVar10, iVar10 < *(int *)(iVar9 + 0x94); iVar10 = iVar10 + 1) {
          thunk_FUN_10148620();
        }
        uStack_64 = 6;
        if (param_7 != 0) {
          FString::FString((FString *)&iStack_30,(ushort *)L"SafePackage");
          uStack_64._0_1_ = 0x2a;
          operator<<(pFVar3,(FString *)&iStack_30);
          uStack_64 = CONCAT31(uStack_64._1_3_,6);
          FString::~FString((FString *)&iStack_30);
        }
        uStack_64 = CONCAT31(uStack_64._1_3_,0x2b);
        iVar10 = *(int *)GWarn;
        puVar11 = LocalizeProgress((ushort *)L"Closing",(ushort *)L"Core",(ushort *)0x0);
        (**(code **)(iVar10 + 0x18))(GWarn,0,0,puVar11);
        puVar14 = (undefined4 *)thunk_FUN_1015bc70();
        *puVar14 = *(undefined4 *)(iVar9 + 0x4c);
        iVar10 = thunk_FUN_1015bc70();
        *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar9 + 0x44);
        (**(code **)(*(int *)pFVar3 + 0x3c))();
        thunk_FUN_1014b850(pFVar3);
        uStack_54 = 1;
        uStack_64 = 0;
        iVar9 = FUN_1016d94c();
        return iVar9;
      }
      iVar10 = *(int *)(_GObjObjects + uStack_48 * 4);
      if ((*(uint *)(iVar10 + 0x1c) & 0x18) != 0) break;
LAB_1016ccb1:
      thunk_FUN_1012ae60();
    }
    puVar1 = (uint *)(*(int *)(_Names + *(int *)(iVar10 + 0x20) * 4) + 4);
    *puVar1 = *puVar1 | 0x70010;
    iVar10 = *(int *)(*(int *)(_GObjObjects + uStack_48 * 4) + 0x18);
    if (iVar10 != 0) {
      puVar1 = (uint *)(*(int *)(_Names + *(int *)(iVar10 + 0x20) * 4) + 4);
      *puVar1 = *puVar1 | 0x70010;
    }
    pUVar5 = *(UObject **)(_GObjObjects + uStack_48 * 4);
    if ((*(uint *)(pUVar5 + 0x1c) & 8) == 0) {
      GetFullName(pUVar5,(ushort *)0x0);
      FOutputDevice::Logf(this_03,(EName)GNull,(ushort *)0x309);
      goto LAB_1016ccb1;
    }
    puVar1 = (uint *)(*(int *)(_Names + *(int *)(*(int *)(pUVar5 + 0x24) + 0x20) * 4) + 4);
    *puVar1 = *puVar1 | 0x70010;
    if (*(int *)(*(int *)(*(int *)(_GObjObjects + uStack_48 * 4) + 0x24) + 0x18) == 0) {
      appFailAssert("It->Class->GetOuter()",".\\UnObj.cpp",0xdaa);
    }
    puVar1 = (uint *)(*(int *)(_Names + *(int *)(*(int *)(*(int *)(*(int *)(_GObjObjects +
                                                                           uVar16 * 4) + 0x24) +
                                                         0x18) + 0x20) * 4) + 4);
    *puVar1 = *puVar1 | 0x70010;
    pUVar5 = *(UObject **)(_GObjObjects + uVar16 * 4);
    if ((*(uint *)(pUVar5 + 0x1c) & 4) != 0) goto LAB_1016ccb1;
    GetFullName(pUVar5,(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GWarn,(ushort *)GWarn);
    thunk_FUN_1012b3e0();
    while (puVar14 = puStack_8, (int)puStack_8 < DAT_1033088c) {
      thunk_FUN_1015a6e0();
      uStack_64._0_1_ = 0xb;
      if (iStack_134 != 0) {
        GetFullName(*(UObject **)(_GObjObjects + (int)puVar14 * 4),(ushort *)0x0);
        FOutputDevice::Logf(this_02,(ushort *)GWarn);
      }
      uStack_64 = CONCAT31(uStack_64._1_3_,10);
      thunk_FUN_1015a7e0();
      thunk_FUN_1012ae60();
    }
    GetFullName(*(UObject **)(_GObjObjects + uVar16 * 4),(ushort *)0x0);
    puVar11 = LocalizeError((ushort *)L"FailedSavePrivate",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar11);
    thunk_FUN_1012ae60();
  } while( true );
}


// ==== 10101ca8 thunk_FUN_1011e7a0 thunk -> 1011e7a0

// ==== 10101cad thunk_FUN_1015acb0 thunk -> 1015acb0

// ==== 10101cb2 UObject::execQuatFromAxisAndAngle

/* public: void __thiscall UObject::execQuatFromAxisAndAngle(struct FFrame &,void * const) */

void __thiscall UObject::execQuatFromAxisAndAngle(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  double dVar2;
  FFrame *pFVar3;
  float fVar4;
  float fVar5;
  FVector aFStack_20 [16];
  undefined1 auStack_10 [4];
  float *pfStack_c;
  undefined4 uStack_4;
  
                    /* 0x1cb2  2349  ?execQuatFromAxisAndAngle@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFVar3 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSin((double)((float)pfStack_c * 0.5));
  fVar4 = (float)dVar2;
  dVar2 = appCos((double)((float)pfStack_c * 0.5));
  fVar5 = (float)dVar2;
  FVector::SafeNormal(aFStack_20);
  *pfStack_c = (float)pFVar3 * fVar5;
  pfStack_c[1] = (float)auStack_10 * (float)pFVar3;
  pfStack_c[2] = (float)pFVar3 * unaff_ESI;
  pfStack_c[3] = fVar4;
  return;
}


// ==== 10101cb7 UObject::GetClass

/* public: class UClass * __thiscall UObject::GetClass(void)const  */

UClass * __thiscall UObject::GetClass(UObject *this)

{
                    /* 0x1cb7  1291  ?GetClass@UObject@@QBEPAVUClass@@XZ */
  return *(UClass **)(this + 0x24);
}


// ==== 10101cbc UClass::UClass

/* public: __thiscall UClass::UClass(enum EStaticConstructor,unsigned long,unsigned long,class
   FGuid,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,void
   (__cdecl*)(void *),void (__thiscall UObject::*)(void)) */

UClass * __thiscall
UClass::UClass(UClass *this,undefined4 param_1,int param_2,uint param_3,undefined4 param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8,ushort *param_9,
              ushort *param_10,undefined4 param_11,ulong param_12,undefined4 param_13,
              undefined4 param_14)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1cbc  194
                       ??0UClass@@QAE@W4EStaticConstructor@@KKVFGuid@@PBG22KP6AXPAX@ZP8UObject@@AEXXZ@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba610;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UState::UState((UState *)this,0,param_2,param_9,param_10,param_12);
  *(undefined4 *)(this + 0x4ac) = param_5;
  *(uint *)(this + 0x4a4) = param_3 | 0x12;
  *(undefined4 *)(this + 0x4b0) = param_6;
  *(undefined4 *)(this + 0x4b4) = param_7;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x4b8) = param_8;
  *(undefined4 *)(this + 0x4c4) = 0;
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + 0x4cc) = 0;
  *(undefined4 *)(this + 0x4d0) = 0;
  *(undefined4 *)(this + 0x4d4) = 0;
  *(undefined4 *)(this + 0x4d8) = 0;
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4e0) = 0;
  *(undefined4 *)(this + 0x4e4) = 0;
  *(undefined4 *)(this + 0x4e8) = 0;
  *(undefined4 *)(this + 0x4ec) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4f4) = 0;
  *(undefined4 *)(this + 0x4f8) = 0;
  *(undefined4 *)(this + 0x4fc) = 0;
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x514) = 0;
  *(undefined4 *)(this + 0x518) = param_13;
  *(undefined4 *)(this + 0x51c) = param_14;
  *(undefined4 *)(this + 0x520) = 0;
  *(undefined4 *)(this + 0x524) = 0;
  *(undefined4 *)(this + 0x528) = 0;
  *(undefined4 *)(this + 0x4c0) = param_11;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101cc1 FBlowFish::InitializeBlowfish

/* public: short __thiscall FBlowFish::InitializeBlowfish(unsigned char * const,short) */

short __thiscall FBlowFish::InitializeBlowfish(FBlowFish *this,uchar *param_1,short param_2)

{
  uint uVar1;
  FBlowFish *extraout_ECX;
  FBlowFish *this_00;
  FBlowFish *extraout_ECX_00;
  int iVar2;
  FBlowFish *pFVar3;
  int iVar4;
  undefined2 in_stack_0000000a;
  
                    /* 0x1cc1  1468  ?InitializeBlowfish@FBlowFish@@QAEFQAEF@Z */
  ResetMemberVariable(this);
  iVar4 = (int)param_2;
  uVar1 = 0;
  _param_2 = 0x12;
  pFVar3 = this;
  do {
    iVar2 = (int)(short)uVar1;
    *(uint *)pFVar3 =
         *(uint *)pFVar3 ^
         CONCAT31(CONCAT21(CONCAT11(param_1[iVar2],param_1[(iVar2 + 1) % iVar4]),
                           param_1[(iVar2 + 2) % iVar4]),param_1[(iVar2 + 3) % iVar4]);
    _param_2 = _param_2 - 1;
    uVar1 = (iVar2 + 4) % iVar4 & 0xffff;
    pFVar3 = pFVar3 + 4;
  } while (_param_2 != 0);
  _param_2 = 0;
  param_1 = (uchar *)0x0;
  pFVar3 = this;
  iVar4 = 9;
  do {
    iVar2 = iVar4;
    Blowfish_encipher(this,(ulong *)&param_2,(ulong *)&param_1);
    *(ulong *)pFVar3 = _param_2;
    *(uchar **)(pFVar3 + 4) = param_1;
    pFVar3 = pFVar3 + 8;
    iVar4 = iVar2 + -1;
    this = extraout_ECX;
  } while (iVar4 != 0);
  pFVar3 = extraout_ECX + 0x4c;
  iVar2 = iVar2 + 3;
  this_00 = extraout_ECX;
  do {
    iVar4 = 0x80;
    do {
      Blowfish_encipher(this_00,(ulong *)&param_2,(ulong *)&param_1);
      *(ulong *)(pFVar3 + -4) = _param_2;
      *(uchar **)pFVar3 = param_1;
      pFVar3 = pFVar3 + 8;
      iVar4 = iVar4 + -1;
      this_00 = extraout_ECX_00;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


// ==== 10101cc6 FBitWriter::SerializeInt

/* public: virtual void __thiscall FBitWriter::SerializeInt(unsigned long &,unsigned long) */

void __thiscall FBitWriter::SerializeInt(FBitWriter *this,ulong *param_1,ulong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0x1cc6  1836  ?SerializeInt@FBitWriter@@UAEXAAKK@Z */
  bVar2 = appCeilLogTwo(param_2);
  if (*(int *)(this + 0x48) < (int)((uint)bVar2 + *(int *)(this + 0x44))) {
    *(undefined4 *)(this + 0x2c) = 1;
    return;
  }
  iVar4 = 0;
  uVar3 = 1;
  if (1 < param_2) {
    do {
      if (uVar3 == 0) {
        return;
      }
      if ((*param_1 & uVar3) != 0) {
        pcVar1 = (char *)(((int)*(uint *)(this + 0x44) >> 3) + *(int *)(this + 0x38));
        *pcVar1 = *pcVar1 + (&DAT_102387e4)[*(uint *)(this + 0x44) & 7];
        iVar4 = iVar4 + uVar3;
      }
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
      uVar3 = uVar3 * 2;
    } while (uVar3 + iVar4 < param_2);
  }
  return;
}


// ==== 10101ccb thunk_FUN_10114a30 thunk -> 10114a30

// ==== 10101cd0 thunk_FUN_10170590 thunk -> 10170590

// ==== 10101cd5 UStructProperty::operator_new

/* public: static void * __cdecl UStructProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UStructProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1cd5  416  ??2UStructProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10101cda FMemStack::PushBytes

/* public: unsigned char * __thiscall FMemStack::PushBytes(int,int) */

uchar * __thiscall FMemStack::PushBytes(FMemStack *this,int param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  FMemStackFrame *this_00;
  
                    /* 0x1cda  1740  ?PushBytes@FMemStack@@QAEPAEHH@Z */
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  this_00 = (FMemStackFrame *)(this + iVar1 * 0x10);
  puVar2 = (uchar *)(*(int *)(this + iVar1 * 0x10) + -1 + param_2 & ~(param_2 - 1U));
  *(uchar **)this_00 = puVar2 + param_1;
  if (*(uchar **)(this_00 + 4) < puVar2 + param_1) {
    FMemStackFrame::AllocateNewChunk(this_00,param_2 + param_1);
    puVar2 = (uchar *)(*(int *)this_00 + -1 + param_2 & ~(param_2 - 1U));
    *(uchar **)this_00 = puVar2 + param_1;
  }
  return puVar2;
}


// ==== 10101cdf thunk_FUN_10130bd0 thunk -> 10130bd0

// ==== 10101ce4 FVector::GetMax

/* public: float __thiscall FVector::GetMax(void)const  */

float __thiscall FVector::GetMax(FVector *this)

{
  float fVar1;
  float fVar2;
  
                    /* 0x1ce4  1351  ?GetMax@FVector@@QBEMXZ */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(this + 8);
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    return fVar1;
  }
  return fVar2;
}


// ==== 10101cee appInit

/* void __cdecl appInit(unsigned short const *,unsigned short const *,class FMalloc *,class
   FOutputDevice *,class FOutputDeviceError *,class FFeedbackContext *,class FFileManager *,class
   FConfigCache * (__cdecl*)(void),int,class FCodec *) */

void __cdecl
appInit(ushort *param_1,ushort *param_2,FMalloc *param_3,FOutputDevice *param_4,
       FOutputDeviceError *param_5,FFeedbackContext *param_6,FFileManager *param_7,
       _func_FConfigCache_ptr *param_8,int param_9,FCodec *param_10)

{
  ulong *puVar1;
  ushort *puVar2;
  byte bVar3;
  uint uVar4;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  int iVar5;
  int iVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1cee  2060
                       ?appInit@@YAXPBG0PAVFMalloc@@PAVFOutputDevice@@PAVFOutputDeviceError@@PAVFFeedbackContext@@PAVFFileManager@@P6APAVFConfigCache@@XZHPAVFCodec@@@Z
                        */
  puStack_c = &LAB_101bc1d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  GFileManager = param_7;
  GL2CurrentTxtCodec = param_10;
  ExceptionList = &pvStack_10;
  for (uVar4 = 0; uVar4 < 0x100; uVar4 = uVar4 + 1) {
    puVar1 = (ulong *)(uVar4 << 0x18);
    iVar5 = 8;
    while (iVar5 != 0) {
      if ((int)puVar1 < 0) {
        puVar1 = (ulong *)((int)puVar1 * 2 ^ 0x4c11db7);
        (&GCRCTable)[uVar4] = puVar1;
        iVar5 = iVar5 + -1;
      }
      else {
        puVar1 = (ulong *)((int)puVar1 * 2);
        (&GCRCTable)[uVar4] = puVar1;
        iVar5 = iVar5 + -1;
      }
    }
  }
  bVar3 = 0xff;
  iVar6 = 0;
  for (iVar5 = 0; iVar5 < 0x101; iVar5 = iVar5 + 1) {
    (&DAT_10284b68)[iVar5] = bVar3 + 1;
    if (iVar5 == 0) {
LAB_10154de9:
      iVar6 = 0;
      bVar3 = bVar3 + 1;
    }
    else {
      iVar6 = iVar6 + 1;
      if (1 << (bVar3 & 0x1f) <= iVar6) goto LAB_10154de9;
    }
  }
  if (*param_2 != 0x22) goto LAB_10154e24;
  do {
    param_2 = param_2 + 1;
    if (*param_2 == 0) goto LAB_10154e3e;
  } while (*param_2 != 0x22);
  if (*param_2 == 0) goto LAB_10154e24;
  do {
    param_2 = param_2 + 1;
LAB_10154e24:
    if (*param_2 == 0) goto LAB_10154e3e;
  } while (*param_2 != 0x20);
  if (*param_2 != 0) {
    param_2 = param_2 + 1;
  }
LAB_10154e3e:
  appStrcpy((ushort *)&DAT_10285088,param_2);
  appStrcpy((ushort *)&GErrorHist,(ushort *)L"General protection fault!\r\n\r\nHistory: ");
  GLog = param_4;
  GError = param_5;
  GWarn = param_6;
  GMalloc = param_3;
  (**(code **)(*(int *)param_3 + 0x14))();
  FName::StaticInit();
  thunk_FUN_101779f0();
  (*(code *)**(undefined4 **)GFileManager)(1);
  iVar5 = *(int *)GFileManager;
  puVar2 = appBaseDir();
  (**(code **)(iVar5 + 0x34))(puVar2);
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2fa);
    if (GLog != (undefined *)0x0) {
      appFromAnsi("19:56:18",(ushort *)0x0);
      puVar2 = appFromAnsi("Sep  3 2007",(ushort *)0x0);
      FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2fa);
      if (GLog != (undefined *)0x0) {
        puVar2 = (ushort *)GLog;
        FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2fa);
        if (GLog != (undefined *)0x0) {
          appBaseDir();
          FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2fa);
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(this_02,(EName)GLog,(ushort *)0x2fa);
          }
        }
      }
    }
  }
  GIsStrict = ParseParam((ushort *)&DAT_10285088,(ushort *)L"STRICT");
  iVar5 = Parse((ushort *)&DAT_10285088,(ushort *)L"INI=",(ushort *)&GIni,0x400);
  if (iVar5 == 0) {
    appSprintf((ushort *)&GIni,(ushort *)L"%s.ini",param_1,puVar2);
  }
  iVar5 = (**(code **)(*(int *)GFileManager + 0x10))(&GIni);
  if ((iVar5 < 0) && (param_9 != 0)) {
    appMsgf(0,(ushort *)L"Files are corrupted !!!! Please, full check");
    appRequestExit(0);
  }
  iVar5 = Parse((ushort *)&DAT_10285088,(ushort *)L"USERINI=",(ushort *)&GUserIni,0x400);
  if (iVar5 == 0) {
    appStrcpy((ushort *)&GUserIni,(ushort *)L"User.ini");
  }
  iVar5 = (**(code **)(*(int *)GFileManager + 0x10))(&GUserIni);
  if ((iVar5 < 0) && (param_9 != 0)) {
    appMsgf(0,(ushort *)L"Files are corrupted !!!!! Please, full check");
    appRequestExit(0);
  }
  GConfig = (*param_8)();
  (**(code **)(*(int *)GConfig + 0x40))(&GIni,&GUserIni,param_9);
  iVar5 = (**(code **)(*(int *)GConfig + 0x10))
                    (L"Engine.Engine",L"Language",&stack0xfffffdcc,0x100,0);
  if (iVar5 != 0) {
    UObject::SetLanguage((ushort *)&stack0xfffffdcc);
  }
  UObject::StaticInit();
  FMemStack::Init(&GMem,0x10000);
  GFileStream = FFileStream::Init(0x10);
  thunk_FUN_10179a00();
  (**(code **)(*(int *)GFileManager + 0x2c))(L"..\\Crest",0,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101cf3 FMemStackFrame::Tick

/* public: void __thiscall FMemStackFrame::Tick(void) */

void __thiscall FMemStackFrame::Tick(FMemStackFrame *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1cf3  1962  ?Tick@FMemStackFrame@@QAEXXZ */
  puStack_c = &LAB_101bbe10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("TopChunk==NULL",".\\UnMem.cpp",0x67);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101cf8 FObjectImport::FObjectImport

/* public: __thiscall FObjectImport::FObjectImport(void) */

FObjectImport * __thiscall FObjectImport::FObjectImport(FObjectImport *this)

{
                    /* 0x1cf8  95  ??0FObjectImport@@QAE@XZ */
  return this;
}


// ==== 10101cfd UObject::execLessLess_IntInt

/* public: void __thiscall UObject::execLessLess_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execLessLess_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x1cfd  2288  ?execLessLess_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&uStack_4 << ((byte)&uStack_4 & 0x1f);
  return;
}


// ==== 10101d02 FString::Chr

/* public: static class FString __cdecl FString::Chr(unsigned short) */

FString * __cdecl FString::Chr(ushort param_1)

{
  undefined2 in_stack_00000006;
  undefined2 uStack0000000a;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1d02  835  ?Chr@FString@@SA?AV1@G@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bc369;
  pvStack_c = ExceptionList;
  uStack0000000a = 0;
  ExceptionList = &pvStack_c;
  FString(_param_1,(ushort *)&stack0x00000008);
  ExceptionList = pvStack_c;
  return _param_1;
}


// ==== 10101d07 UObject::execAtan

/* public: void __thiscall UObject::execAtan(struct FFrame &,void * const) */

void __thiscall UObject::execAtan(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  double dVar2;
  undefined4 uStack_4;
  
                    /* 0x1d07  2157  ?execAtan@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appAtan2((double)(float)&uStack_4,(double)(float)&uStack_4);
  *unaff_ESI = (float)dVar2;
  return;
}


// ==== 10101d0c thunk_FUN_101262e0 thunk -> 101262e0

// ==== 10101d11 L2ThreadUtil::AddThread

/* public: void __thiscall L2ThreadUtil::AddThread(enum L2ThreadFunction,class L2ThreadBase *) */

void __thiscall
L2ThreadUtil::AddThread(L2ThreadUtil *this,L2ThreadFunction param_1,L2ThreadBase *param_2)

{
  L2ThreadFunction LVar1;
  L2ThreadBase *pLVar2;
  undefined4 uVar3;
  L2ThreadUtil *pLStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1d11  793
                       ?AddThread@L2ThreadUtil@@QAEXW4L2ThreadFunction@@PAVL2ThreadBase@@@Z */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b96e3;
  pvStack_c = ExceptionList;
  pLStack_10 = this;
  if (*(int *)(this + 0x2c4) < 8) {
    ExceptionList = &pvStack_c;
    FScopeCriticalSection::FScopeCriticalSection((FScopeCriticalSection *)&pLStack_10,ThreadUtilCS);
    LVar1 = param_1;
    iStack_4 = 0;
    if (*(undefined4 **)(this + param_1 * 4 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + param_1 * 4 + 4))(1);
      *(undefined4 *)(this + LVar1 * 4 + 4) = 0;
      *(int *)(this + 0x2c4) = *(int *)(this + 0x2c4) + -1;
    }
    pLVar2 = param_2;
    *(L2ThreadBase **)(this + LVar1 * 4 + 4) = param_2;
    *(int *)(this + 0x2c4) = *(int *)(this + 0x2c4) + 1;
    if (*(int *)(this + 0x2c8) == 0) {
      param_1 = (*(code *)**(undefined4 **)GMalloc)(0x14,&DAT_101cd5d8);
      iStack_4._0_1_ = 1;
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = thunk_FUN_1012a260();
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      *(undefined4 *)(this + 0x2c8) = uVar3;
    }
    param_1 = LVar1;
    param_2 = (L2ThreadBase *)(**(code **)(*(int *)pLVar2 + 0x28))();
    thunk_FUN_1012a190(&param_2,&param_1);
    iStack_4 = 0xffffffff;
    FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)&pLStack_10);
    ExceptionList = pvStack_c;
    return;
  }
  ExceptionList = &pvStack_c;
  FOutputDevice::Logf((FOutputDevice *)this,(ushort *)GError);
  ExceptionList = puStack_8;
  return;
}


// ==== 10101d16 FVector::operator*=

/* public: class FVector __thiscall FVector::operator*=(class FVector const &) */

void __thiscall FVector::operator*=(FVector *this,FVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x1d16  673  ??XFVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = in_stack_00000008[1] * *(float *)(this + 4);
  *(float *)(this + 8) = in_stack_00000008[2] * *(float *)(this + 8);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 10101d1b FMemStack::Exit

/* public: void __thiscall FMemStack::Exit(void) */

void __thiscall FMemStack::Exit(FMemStack *this)

{
  int iVar1;
  
                    /* 0x1d1b  955  ?Exit@FMemStack@@QAEXXZ */
  iVar1 = 8;
  do {
    FMemStackFrame::Exit((FMemStackFrame *)this);
    this = this + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10101d20 UExporter::StaticClass

/* public: static class UClass * __cdecl UExporter::StaticClass(void) */

UClass * __cdecl UExporter::StaticClass(void)

{
                    /* 0x1d20  1897  ?StaticClass@UExporter@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10101d25 UObject::StaticMemLoadObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UObject * __cdecl UObject::StaticMemLoadObject(class UClass *,class UObject
   *,unsigned short const *,void *,int,unsigned long,class UPackageMap *) */

UObject * __cdecl
UObject::StaticMemLoadObject
          (UClass *param_1,UObject *param_2,ushort *param_3,void *param_4,int param_5,ulong param_6,
          UPackageMap *param_7)

{
  UObject *pUVar1;
  UObject *pUVar2;
  ushort *puVar3;
  ULinkerLoad *pUVar4;
  int iStack_68;
  UObject *pUStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1d25  1944
                       ?StaticMemLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGPAXHKPAVUPackageMap@@@Z
                        */
  puStack_c = &LAB_101bdac8;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("ObjectClass",".\\UnObj.cpp",0xb1e);
  }
  if (param_3 == (ushort *)0x0) {
    appFailAssert("InName",".\\UnObj.cpp",0xb1f);
  }
  pUStack_18 = (UObject *)0x0;
  BeginLoad();
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  pUVar4 = (ULinkerLoad *)0x0;
  ResolveName(&param_2,&param_3,1,1);
  pUVar1 = param_2;
  do {
    pUVar2 = pUVar1;
    if (pUVar2 == (UObject *)0x0) break;
    pUVar1 = *(UObject **)(pUVar2 + 0x18);
  } while (*(UObject **)(pUVar2 + 0x18) != (UObject *)0x0);
  if ((param_6 & 0x40) == 0) {
    pUVar4 = GetMemPackageLinker(pUVar2,param_6 | 0x28,param_7,(FGuid *)0x0,param_4,param_5);
  }
  puVar3 = param_3;
  if (pUVar4 != (ULinkerLoad *)0x0) {
    FName::FName((FName *)&stack0xffffff80,param_3,1);
    pUStack_18 = ULinkerLoad::Create(pUVar4,param_1);
  }
  pUVar1 = param_2;
  if ((pUStack_18 == (UObject *)0x0) &&
     (pUStack_18 = StaticFindObject(param_1,param_2,puVar3,0), pUStack_18 == (UObject *)0x0)) {
    if (pUVar1 != (UObject *)0x0) {
      GetPathName(pUVar1,(UObject *)0x0,(ushort *)0x0);
    }
    puVar3 = LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar3);
  }
  EndLoad();
  iStack_8 = 0;
  while (GL2GCState == 2) {
    appSleep(0.0);
  }
  if ((GL2GCState == 3) && (((byte)pUStack_18[0x1c] & 2) != 0)) {
    thunk_FUN_1015a320();
    iStack_8._0_1_ = 3;
    (**(code **)(iStack_68 + 0x18))();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_1015a3d0();
  }
  ExceptionList = pvStack_10;
  return pUStack_18;
}


// ==== 10101d2a thunk_FUN_1014e860 thunk -> 1014e860

// ==== 10101d2f UBoolProperty::ImportText

/* public: virtual unsigned short const * __thiscall UBoolProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UBoolProperty::ImportText(UBoolProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort auStack_824 [1030];
  UBoolProperty *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d2f  1443  ?ImportText@UBoolProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be040;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff7d0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  puVar1 = (ushort *)thunk_FUN_10170590(param_1,auStack_824,0x400,0);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  iVar2 = appStricmp(auStack_824,(ushort *)&DAT_101defc8);
  if (((iVar2 != 0) && (iVar2 = appStricmp(auStack_824,(ushort *)L"True"), iVar2 != 0)) &&
     (iVar2 = appStricmp(auStack_824,(ushort *)GTrue), iVar2 != 0)) {
    iVar2 = appStricmp(auStack_824,(ushort *)&DAT_101defd8);
    if (((iVar2 != 0) && (iVar2 = appStricmp(auStack_824,(ushort *)L"False"), iVar2 != 0)) &&
       (iVar2 = appStricmp(auStack_824,(ushort *)GFalse), iVar2 != 0)) {
      ExceptionList = pvStack_10;
      return (ushort *)0x0;
    }
    *(uint *)param_2 = *(uint *)param_2 & ~*(uint *)(this + 0x78);
    ExceptionList = pvStack_10;
    return puVar1;
  }
  *(uint *)param_2 = *(uint *)param_2 | *(uint *)(this + 0x78);
  ExceptionList = pvStack_10;
  return puVar1;
}


// ==== 10101d34 thunk_FUN_1012c750 thunk -> 1012c750

// ==== 10101d39 FPlane::operator*

/* public: class FPlane __thiscall FPlane::operator*(class FPlane const &) */

void __thiscall FPlane::operator*(FPlane *this,FPlane *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x1d39  605  ??DFPlane@@QAE?AV0@ABV0@@Z */
  *(float *)param_1 = *in_stack_00000008 * *(float *)this;
  *(float *)(param_1 + 4) = in_stack_00000008[1] * *(float *)(this + 4);
  *(float *)(param_1 + 8) = in_stack_00000008[2] * *(float *)(this + 8);
  *(float *)(param_1 + 0xc) = in_stack_00000008[3] * *(float *)(this + 0xc);
  return;
}


// ==== 10101d3e FVector::GetMin

/* public: float __thiscall FVector::GetMin(void)const  */

float __thiscall FVector::GetMin(FVector *this)

{
  float fVar1;
  
                    /* 0x1d3e  1357  ?GetMin@FVector@@QBEMXZ */
  fVar1 = *(float *)(this + 4);
  if (*(float *)this <= fVar1) {
    fVar1 = *(float *)this;
  }
  if (*(float *)(this + 8) < fVar1) {
    return *(float *)(this + 8);
  }
  return fVar1;
}


// ==== 10101d43 appLoadFileToArray

/* int __cdecl appLoadFileToArray(class TArray<unsigned char> &,unsigned short const *,class
   FFileManager *) */

int __cdecl appLoadFileToArray(TArray<unsigned_char> *param_1,ushort *param_2,FFileManager *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d43  2066  ?appLoadFileToArray@@YAHAAV?$TArray@E@@PBGPAVFFileManager@@@Z
                        */
  puStack_c = &LAB_101bc1c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)(**(code **)(*(int *)param_3 + 8))(param_2,0,GNull);
  if (piVar1 == (int *)0x0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  thunk_FUN_10113f60(0);
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  thunk_FUN_1012aa10(uVar2);
  (**(code **)(*piVar1 + 4))(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  iVar3 = (**(code **)(*piVar1 + 0x58))();
  (**(code **)*piVar1)(1);
  ExceptionList = pvStack_10;
  return iVar3;
}


// ==== 10101d48 UIntProperty::NetSerializeItem

/* public: virtual int __thiscall UIntProperty::NetSerializeItem(class FArchive &,class UPackageMap
   *,void *)const  */

int __thiscall
UIntProperty::NetSerializeItem
          (UIntProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
                    /* 0x1d48  1635
                       ?NetSerializeItem@UIntProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  (**(code **)(*(int *)param_1 + 4))(param_3,4);
  return 1;
}


// ==== 10101d4d FVector::Size2D

/* public: float __thiscall FVector::Size2D(void)const  */

float __thiscall FVector::Size2D(FVector *this)

{
  double dVar1;
  
                    /* 0x1d4d  1877  ?Size2D@FVector@@QBEMXZ */
  dVar1 = appSqrt((double)(*(float *)this * *(float *)this +
                          *(float *)(this + 4) * *(float *)(this + 4)));
  return (float)dVar1;
}


// ==== 10101d52 FArchive::Flush

/* public: virtual void __thiscall FArchive::Flush(void) */

void __thiscall FArchive::Flush(FArchive *this)

{
                    /* 0x1d52  1018  ?Flush@FArchive@@UAEXXZ */
  return;
}


// ==== 10101d57 FArchive::GetCurrentEncryptVersion

/* public: virtual int __thiscall FArchive::GetCurrentEncryptVersion(void) */

int __thiscall FArchive::GetCurrentEncryptVersion(FArchive *this)

{
                    /* 0x1d57  1295  ?GetCurrentEncryptVersion@FArchive@@UAEHXZ */
  return 0;
}


// ==== 10101d5c thunk_FUN_101488c0 thunk -> 101488c0

// ==== 10101d66 thunk_FUN_1015c260 thunk -> 1015c260

// ==== 10101d6b thunk_FUN_10128650 thunk -> 10128650

// ==== 10101d70 thunk_FUN_1010c390 thunk -> 1010c390

// ==== 10101d7a thunk_FUN_1012ad70 thunk -> 1012ad70

// ==== 10101d7f FBitReader::FBitReader

/* public: __thiscall FBitReader::FBitReader(unsigned char *,int) */

FBitReader * __thiscall FBitReader::FBitReader(FBitReader *this,uchar *param_1,int param_2)

{
  size_t _Size;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d7f  15  ??0FBitReader@@QAE@PAEH@Z */
  puStack_c = &LAB_101b9c73;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = FArchive::vftable;
  *(undefined4 *)(this + 4) = 0x7b;
  *(undefined4 *)(this + 8) = 2000;
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  _Size = param_2 + 7 >> 3;
  thunk_FUN_1012eb50(_Size);
  *(int *)(this + 0x44) = param_2;
  *(undefined4 *)(this + 0x48) = 0;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x1c) = 1;
  *(uint *)(this + 8) = *(uint *)(this + 8) | 0x80000000;
  if (param_1 != (uchar *)0x0) {
    _memcpy(*(void **)(this + 0x38),param_1,_Size);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10101d84 thunk_FUN_10119640 thunk -> 10119640

// ==== 10101d89 FPackageFileSummary::SetFileVersions

/* public: void __thiscall FPackageFileSummary::SetFileVersions(int,int) */

void __thiscall
FPackageFileSummary::SetFileVersions(FPackageFileSummary *this,int param_1,int param_2)

{
                    /* 0x1d89  1856  ?SetFileVersions@FPackageFileSummary@@QAEXHH@Z */
  if (*(int *)(GSys + 0x38) == 0) {
    *(int *)(this + 4) = param_1;
    return;
  }
  *(int *)(this + 4) = param_2 << 0x10 | param_1;
  return;
}


// ==== 10101d8e thunk_FUN_10119c90 thunk -> 10119c90

// ==== 10101d93 appAnsiStrlen

/* int __cdecl appAnsiStrlen(char const *) */

int __cdecl appAnsiStrlen(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
                    /* 0x1d93  2013  ?appAnsiStrlen@@YAHPBD@Z */
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}


// ==== 10101d98 FEdge::operator==

/* public: int __thiscall FEdge::operator==(class FEdge const &)const  */

int __thiscall FEdge::operator==(FEdge *this,FEdge *param_1)

{
                    /* 0x1d98  560  ??8FEdge@@QBEHABV0@@Z */
  if (((((*(float *)this != *(float *)param_1) || (*(float *)(this + 4) != *(float *)(param_1 + 4)))
       || (*(float *)(this + 8) != *(float *)(param_1 + 8))) ||
      (((*(float *)(this + 0xc) != *(float *)(param_1 + 0xc) ||
        (*(float *)(this + 0x10) != *(float *)(param_1 + 0x10))) ||
       (*(float *)(this + 0x14) != *(float *)(param_1 + 0x14))))) &&
     (((*(float *)(this + 0xc) != *(float *)param_1 ||
       (*(float *)(this + 0x10) != *(float *)(param_1 + 4))) ||
      ((*(float *)(this + 0x14) != *(float *)(param_1 + 8) ||
       (((*(float *)this != *(float *)(param_1 + 0xc) ||
         (*(float *)(this + 4) != *(float *)(param_1 + 0x10))) ||
        (*(float *)(this + 8) != *(float *)(param_1 + 0x14))))))))) {
    return 0;
  }
  return 1;
}


// ==== 10101d9d UMapProperty::Link

/* public: virtual void __thiscall UMapProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UMapProperty::Link(UMapProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d9d  1560  ?Link@UMapProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be130;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 0x78));
  (**(code **)(**(int **)(this + 0x78) + 0x80))(param_1,0);
  (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 0x7c));
  (**(code **)(**(int **)(this + 0x7c) + 0x80))(param_1,0);
  *(undefined4 *)(this + 0x44) = 0x14;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  if ((*(uint *)(this + 0x48) & 0x1000) == 0) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400000;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101da2 thunk_FUN_10129fc0 thunk -> 10129fc0

// ==== 10101da7 UObject::GetInitialized

/* public: static int __cdecl UObject::GetInitialized(void) */

int __cdecl UObject::GetInitialized(void)

{
                    /* 0x1da7  1342  ?GetInitialized@UObject@@SAHXZ */
  return GObjInitialized;
}


// ==== 10101db1 thunk_FUN_10135de0 thunk -> 10135de0

// ==== 10101db6 FMemCache::Create

/* public: unsigned char * __thiscall FMemCache::Create(unsigned __int64,class FMemCache::FCacheItem
   * &,int,int,int) */

uchar * __thiscall
FMemCache::Create(FMemCache *this,__uint64 param_1,FCacheItem **param_2,int param_3,int param_4,
                 int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  FCacheItem *pFVar3;
  FCacheItem *pFVar4;
  int iVar5;
  uchar *puVar6;
  FCacheItem *pFVar7;
  bool bVar8;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  FCacheItem *pFStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1db6  893  ?Create@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@HHH@Z */
  puStack_c = &LAB_101b9ce0;
  pvStack_10 = ExceptionList;
  pFVar7 = (FCacheItem *)0x0;
  uStack_8 = 0;
  uVar2 = rdtsc();
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x10030) = *(int *)(this + 0x10030) - (int)uVar2;
  if (*(int *)this == 0) {
    appFailAssert("Initialized",".\\UnCache.cpp",0x1c7);
  }
  if (param_3 < 1) {
    appFailAssert("CreateSize > 0",".\\UnCache.cpp",0x1c8);
  }
  if (param_1 == 0) {
    appFailAssert("Id != 0",".\\UnCache.cpp",0x1c9);
  }
  *(int *)(this + 0x1002c) = *(int *)(this + 0x1002c) + 1;
  uStack_48 = 0x1000000;
  iStack_44 = 0;
  pFStack_1c = (FCacheItem *)0x0;
  uStack_40 = 0;
  iStack_3c = 0;
  pFVar3 = *(FCacheItem **)(this + 0x18);
  pFVar4 = pFVar3;
  for (; pFVar3 != *(FCacheItem **)(this + 0x1c); pFVar3 = *(FCacheItem **)(pFVar3 + 0x14)) {
    uVar1 = *(uint *)(pFVar3 + 0x10);
    bVar8 = CARRY4(uStack_40,uVar1);
    uStack_40 = uStack_40 + uVar1;
    iStack_3c = iStack_3c + ((int)uVar1 >> 0x1f) + (uint)bVar8;
    while ((pFVar4 != (FCacheItem *)0x0 &&
           (param_3 + param_5 <=
            (int)(*(int *)(*(int *)(pFVar3 + 0x14) + 8) -
                 (*(int *)(pFVar4 + 8) + -1 + param_4 & ~(param_4 - 1U)))))) {
      if ((iStack_3c <= iStack_44) &&
         (((iStack_3c < iStack_44 || (uStack_40 < uStack_48)) && (pFVar4[0xe] == pFVar3[0xe])))) {
        uStack_48 = uStack_40;
        iStack_44 = iStack_3c;
        pFVar7 = pFVar4;
        pFStack_1c = pFVar3;
      }
      uVar1 = *(uint *)(pFVar4 + 0x10);
      bVar8 = uStack_40 < uVar1;
      uStack_40 = uStack_40 - uVar1;
      iStack_3c = (iStack_3c - ((int)uVar1 >> 0x1f)) - (uint)bVar8;
      pFVar4 = *(FCacheItem **)(pFVar4 + 0x14);
    }
  }
  if (pFVar7 == (FCacheItem *)0x0) {
    for (iVar5 = *(int *)(this + 0x18); iVar5 != *(int *)(this + 0x1c);
        iVar5 = *(int *)(iVar5 + 0x14)) {
    }
    Exec(this,(ushort *)L"DUMPCACHE",(FOutputDevice *)GLog);
    FOutputDevice::Logf((FOutputDevice *)param_1,(ushort *)GError);
  }
  for (; pFStack_1c != pFVar7; pFStack_1c = MergeWithNext(this,*(FCacheItem **)(pFStack_1c + 0x18)))
  {
    if (*(int *)pFStack_1c != 0 || *(int *)(pFStack_1c + 4) != 0) {
      Unhash(this,*(__uint64 *)pFStack_1c);
    }
  }
  if (*(int *)pFVar7 != 0 || *(int *)(pFVar7 + 4) != 0) {
    Unhash(this,*(__uint64 *)pFVar7);
  }
  puVar6 = (uchar *)(*(int *)(pFVar7 + 8) + -1 + param_4 & ~(param_4 - 1U));
  *(undefined2 *)(pFVar7 + 0xc) = *(undefined2 *)(this + 4);
  *(__uint64 *)pFVar7 = param_1;
  *(int *)(pFVar7 + 0x10) = param_3 + 0x1000000;
  *(undefined4 *)(pFVar7 + 0x1c) =
       *(undefined4 *)
        (this + ((((uint)(FOutputDevice *)param_1 >> 0xc ^ (uint)(FOutputDevice *)param_1) >> 0xc ^
                 (uint)(FOutputDevice *)param_1) & 0x3fff) * 4 + 0x24);
  *(FCacheItem **)
   (this + ((((uint)(FOutputDevice *)param_1 >> 0xc ^ (uint)(FOutputDevice *)param_1) >> 0xc ^
            (uint)(FOutputDevice *)param_1) & 0x3fff) * 4 + 0x24) = pFVar7;
  if (*(int *)(this + 0x20) != 0) {
    pFVar3 = *(FCacheItem **)(pFVar7 + 0x14);
    if (puVar6 + param_3 < *(uchar **)(pFVar3 + 8)) {
      CreateNewFreeSpace(this,puVar6 + param_3,*(uchar **)(pFVar3 + 8),pFVar7,pFVar3,
                         (uint)(byte)pFVar7[0xe]);
    }
    if ((*(int *)(this + 0x20) != 0) && (0xff < (int)(puVar6 + -*(int *)(pFVar7 + 8)))) {
      FOutputDevice::Logf((FOutputDevice *)(puVar6 + -*(int *)(pFVar7 + 8)),(ushort *)GError);
      CreateNewFreeSpace(this,*(uchar **)(pFVar7 + 8),puVar6,*(FCacheItem **)(pFVar7 + 0x18),pFVar7,
                         (uint)(byte)pFVar7[0xe]);
      *(uchar **)(pFVar7 + 8) = puVar6;
    }
  }
  *param_2 = pFVar7;
  *(FCacheItem **)(this + 0x10) = pFVar7;
  *(__uint64 *)(this + 8) = param_1;
  uVar2 = rdtsc();
  *(int *)(this + 0x10030) = *(int *)(this + 0x10030) + (int)uVar2 + -0xc;
  ExceptionList = pvStack_10;
  return puVar6;
}


// ==== 10101dbb thunk_FUN_1015bcc0 thunk -> 1015bcc0

// ==== 10101dc0 appI64toa

/* unsigned short * __cdecl appI64toa(__int64) */

ushort * __cdecl appI64toa(__int64 param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x1dc0  2059  ?appI64toa@@YAPAG_J@Z */
  puVar3 = &DAT_10289e94;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  pwVar1 = __i64tow(param_1,(wchar_t *)&DAT_10289e94,10);
  return (ushort *)pwVar1;
}


// ==== 10101dca L2ThreadUtil::KillAllThread

/* public: int __thiscall L2ThreadUtil::KillAllThread(void) */

int __thiscall L2ThreadUtil::KillAllThread(L2ThreadUtil *this)

{
  int iVar1;
  FScopeCriticalSection aFStack_1c [4];
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1dca  1540  ?KillAllThread@L2ThreadUtil@@QAEHXZ */
  puStack_c = &LAB_101b9458;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_1c,ThreadUtilCS);
  iStack_8._0_1_ = 1;
  for (iVar1 = 0; iStack_18 = iVar1, iVar1 < *(int *)(this + 0x2c4); iVar1 = iVar1 + 1) {
    if (*(int *)(this + iVar1 * 4 + 4) != 0) {
      if (*(undefined4 **)(this + iVar1 * 4 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + iVar1 * 4 + 4))(1);
      }
      *(undefined4 *)(this + iVar1 * 4 + 4) = 0;
    }
  }
  *(undefined4 *)(this + 0x2c4) = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_1c);
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10101dcf UNameProperty::CopySingleValue

/* public: virtual void __thiscall UNameProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UNameProperty::CopySingleValue(UNameProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x1dcf  881  ?CopySingleValue@UNameProperty@@UBEXPAX0PAVUObject@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}


// ==== 10101dd4 thunk_FUN_1010f5b0 thunk -> 1010f5b0

// ==== 10101de3 UStructProperty::Link

/* public: virtual void __thiscall UStructProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UStructProperty::Link(UStructProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1de3  1567  ?Link@UStructProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be150;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 0x78));
  iVar2 = *(int *)(*(int *)(this + 0x78) + 0x4c);
  *(int *)(this + 0x44) = iVar2;
  if (iVar2 == 2) {
    iVar2 = 2;
  }
  else {
    iVar2 = ((iVar2 < 4) - 1 & 3) + 1;
  }
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar2 + -1 + iVar1 & ~(iVar2 - 1U);
  if ((*(int *)(*(int *)(this + 0x78) + 0x78) != 0) && ((*(uint *)(this + 0x48) & 0x1000) == 0)) {
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x400000;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101de8 UFloatProperty::CopySingleValue

/* public: virtual void __thiscall UFloatProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UFloatProperty::CopySingleValue(UFloatProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x1de8  878  ?CopySingleValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}


// ==== 10101ded UConst::UConst

/* protected: __thiscall UConst::UConst(void) */

UConst * __thiscall UConst::UConst(UConst *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1ded  201  ??0UConst@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b789b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = UField::vftable;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101df2 thunk_FUN_1010abc0 thunk -> 1010abc0

// ==== 10101df7 UTextBuffer::operator_new

/* public: static void * __cdecl UTextBuffer::operator new(unsigned int,enum EInternal *) */

void * __cdecl UTextBuffer::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x1df7  422  ??2UTextBuffer@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10101dfc UObject::GetPreferences

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::GetPreferences(class TArray<class FPreferencesInfo>
   &,unsigned short const *,int) */

void __cdecl UObject::GetPreferences(TArray<FPreferencesInfo> *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  FPreferencesInfo *this;
  int iVar3;
  ushort *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1dfc  1383
                       ?GetPreferences@UObject@@SAXAAV?$TArray@VFPreferencesInfo@@@@PBGH@Z */
  puStack_c = &LAB_101bd990;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  CacheDrivers(param_3);
  thunk_FUN_10164fc0(0);
  for (iVar3 = 0; iVar3 < DAT_103308c8; iVar3 = iVar3 + 1) {
    puVar4 = param_2;
    puVar1 = FString::operator*((FString *)(iVar3 * 0x2c + 0xc + _GObjPreferences));
    iVar2 = appStricmp(puVar1,puVar4);
    if (iVar2 == 0) {
      this = (FPreferencesInfo *)thunk_FUN_1015c2b0(0x2c,param_1);
      if (this != (FPreferencesInfo *)0x0) {
        FPreferencesInfo::FPreferencesInfo
                  (this,(FPreferencesInfo *)(_GObjPreferences + iVar3 * 0x2c));
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101e01 UObject::CheckSafePackage

/* public: static int __cdecl UObject::CheckSafePackage(unsigned short const *) */

int __cdecl UObject::CheckSafePackage(ushort *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char acStack_28 [4];
  int iStack_24;
  ushort *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
                    /* 0x1e01  833  ?CheckSafePackage@UObject@@SAHPBG@Z */
  puStack_14 = GError;
  uStack_18 = 0;
  puStack_1c = param_1;
  piVar1 = (int *)(**(code **)(*(int *)GFileManager + 8))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *piVar1;
  iStack_24 = 0x1015aae4;
  iStack_24 = (**(code **)(iVar2 + 0x2c))();
  iStack_24 = iStack_24 + -0xc;
  acStack_28[0] = -0x11;
  acStack_28[1] = -0x56;
  acStack_28[2] = '\x15';
  acStack_28[3] = '\x10';
  (**(code **)(iVar2 + 0x3c))();
  acStack_28[0] = '\f';
  acStack_28[1] = '\0';
  acStack_28[2] = '\0';
  acStack_28[3] = '\0';
  (**(code **)(*piVar1 + 4))(&puStack_1c);
  (**(code **)*piVar1)(1);
  bVar5 = true;
  iVar2 = 0xc;
  pcVar3 = acStack_28;
  pcVar4 = "SafePackage";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  return (uint)bVar5;
}


// ==== 10101e06 thunk_FUN_10126f20 thunk -> 10126f20

// ==== 10101e0b FMoverHit::operator==

/* public: int __thiscall FMoverHit::operator==(class FMoverHit const &)const  */

int __thiscall FMoverHit::operator==(FMoverHit *this,FMoverHit *param_1)

{
                    /* 0x1e0b  563  ??8FMoverHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 10101e10 FErrorOutError::HandleError

/* public: virtual void __thiscall FErrorOutError::HandleError(void) */

void __thiscall FErrorOutError::HandleError(FErrorOutError *this)

{
                    /* 0x1e10  1424  ?HandleError@FErrorOutError@@UAEXXZ */
  return;
}


// ==== 10101e15 thunk_FUN_10124710 thunk -> 10124710

// ==== 10101e1f thunk_FUN_10109040 thunk -> 10109040

// ==== 10101e24 UExporter::ExportToArchive

/* public: static void __cdecl UExporter::ExportToArchive(class UObject *,class UExporter *,class
   FArchive &,unsigned short const *) */

void __cdecl
UExporter::ExportToArchive(UObject *param_1,UExporter *param_2,FArchive *param_3,ushort *param_4)

{
  UExporter *pUVar1;
  int iVar2;
  FOutputDevice *this;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e24  989
                       ?ExportToArchive@UExporter@@SAXPAVUObject@@PAV1@AAVFArchive@@PBG@Z */
  puStack_c = &LAB_101b99f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Object",".\\UExporter.cpp",0x4e);
  }
  pUVar1 = param_2;
  if (param_2 == (UExporter *)0x0) {
    pUVar1 = FindExporter(param_1,param_4);
    if (pUVar1 == (UExporter *)0x0) {
      UObject::GetFullName(param_1,(ushort *)0x0);
      FOutputDevice::Logf(this,(ushort *)GWarn);
      ExceptionList = pvStack_10;
      return;
    }
  }
  iVar2 = UObject::IsA(param_1,*(UClass **)(pUVar1 + 0x34));
  if (iVar2 == 0) {
    appFailAssert("Object->IsA(Exporter->SupportedClass)",".\\UExporter.cpp",0x59);
  }
  (**(code **)(*(int *)pUVar1 + 0x6c))(param_1,param_4,param_3,GWarn);
  if (param_2 == (UExporter *)0x0) {
    (**(code **)(*(int *)pUVar1 + 0xc))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101e29 FFieldNetCache::FFieldNetCache

/* public: __thiscall FFieldNetCache::FFieldNetCache(void) */

FFieldNetCache * __thiscall FFieldNetCache::FFieldNetCache(FFieldNetCache *this)

{
                    /* 0x1e29  52  ??0FFieldNetCache@@QAE@XZ */
  return this;
}


// ==== 10101e33 thunk_FUN_10165aa0 thunk -> 10165aa0

// ==== 10101e38 UObject::execFloatToString

/* public: void __thiscall UObject::execFloatToString(struct FFrame &,void * const) */

void __thiscall UObject::execFloatToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  float unaff_EDI;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e38  2226  ?execFloatToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb390;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_1c);
  pFVar3 = (FArray *)FString::Printf((ushort *)&stack0xffffffe0,L"%.2f",(double)unaff_EDI);
  pvStack_c = (void *)0x0;
  if (unaff_retaddr != pFVar3) {
    uVar2 = *(undefined4 *)(pFVar3 + 4);
    *(undefined4 *)(unaff_retaddr + 8) = uVar2;
    *(undefined4 *)(unaff_retaddr + 4) = uVar2;
    FArray::Realloc(unaff_retaddr,2);
    if (*(int *)(unaff_retaddr + 4) != 0) {
      if (*(int *)(pFVar3 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar3;
      }
      _memcpy(*(void **)unaff_retaddr,_Src,*(int *)(unaff_retaddr + 4) * 2);
    }
  }
  pvStack_c = (void *)0x1;
  uStack_1c = 0;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10101e3d thunk_FUN_1015c210 thunk -> 1015c210

// ==== 10101e42 ULinkerLoad::DetachExport

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall ULinkerLoad::DetachExport(int) */

void __thiscall ULinkerLoad::DetachExport(ULinkerLoad *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e42  933  ?DetachExport@ULinkerLoad@@AAEXH@Z */
  puStack_c = &LAB_101bb770;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  iStack_1c = param_1 * 0x24;
  iVar4 = *(int *)(this + 0x90) + iStack_1c;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffcc;
  if (*(int *)(iVar4 + 0x1c) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("E._Object",".\\UnLinker.cpp",0x431);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  iVar2 = UObject::IsValid(*(UObject **)(iVar4 + 0x1c));
  if (iVar2 == 0) {
    iStack_18 = *(int *)(_Names + *(int *)(*(int *)(this + 0x34) + 0x20) * 4) + 0xc;
    piVar3 = (int *)GetExportClassName(this,(int)auStack_24);
    FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *piVar3 * 4) + 0xc),(ushort *)GError);
  }
  if (*(ULinkerLoad **)(*(int *)(iVar4 + 0x1c) + 0x10) != this) {
    iStack_18 = *(int *)(_Names + *(int *)(*(int *)(this + 0x34) + 0x20) * 4) + 0xc;
    GetExportClassName(this,(int)auStack_24);
    FOutputDevice::Logf(_Names,(ushort *)GError);
  }
  if (*(int *)(*(int *)(iVar4 + 0x1c) + 0x14) != param_1) {
    piVar3 = (int *)GetExportClassName(this,(int)auStack_24);
    FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *piVar3 * 4) + 0xc),(ushort *)GError);
  }
  UObject::SetLinker(*(UObject **)(iStack_1c + 0x1c + *(int *)(this + 0x90)),(ULinkerLoad *)0x0,-1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101e47 thunk_FUN_1012b1c0 thunk -> 1012b1c0

// ==== 10101e4c FScopeCriticalSection::FScopeCriticalSection

/* public: __thiscall FScopeCriticalSection::FScopeCriticalSection(class FCriticalSection *) */

FScopeCriticalSection * __thiscall
FScopeCriticalSection::FScopeCriticalSection(FScopeCriticalSection *this,FCriticalSection *param_1)

{
                    /* 0x1e4c  131  ??0FScopeCriticalSection@@QAE@PAVFCriticalSection@@@Z */
  *(FCriticalSection **)this = param_1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)param_1);
  return this;
}


// ==== 10101e51 thunk_FUN_10129da0 thunk -> 10129da0

// ==== 10101e56 UObject::ShutdownAfterError

/* public: virtual void __thiscall UObject::ShutdownAfterError(void) */

void __thiscall UObject::ShutdownAfterError(UObject *this)

{
                    /* 0x1e56  1874  ?ShutdownAfterError@UObject@@UAEXXZ */
  return;
}


// ==== 10101e5b UArrayProperty::operator=

/* public: class UArrayProperty & __thiscall UArrayProperty::operator=(class UArrayProperty const &)
    */

UArrayProperty * __thiscall UArrayProperty::operator=(UArrayProperty *this,UArrayProperty *param_1)

{
                    /* 0x1e5b  511  ??4UArrayProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 10101e60 FArchive::DetachLazyLoader

/* public: virtual void __thiscall FArchive::DetachLazyLoader(class FLazyLoader *) */

void __thiscall FArchive::DetachLazyLoader(FArchive *this,FLazyLoader *param_1)

{
                    /* 0x1e60  934  ?DetachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
  return;
}


// ==== 10101e65 ULinker::~ULinker

/* public: virtual __thiscall ULinker::~ULinker(void) */

void __thiscall ULinker::~ULinker(ULinker *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1e65  334  ??1ULinker@@UAE@XZ */
  puStack_8 = &LAB_101b88b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 5;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 4;
  FString::~FString((FString *)(this + 0xa0));
  iStack_4._0_1_ = 3;
  thunk_FUN_10121450();
  iStack_4._0_1_ = 2;
  thunk_FUN_10121290();
  iStack_4._0_1_ = 1;
  thunk_FUN_10118d50();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_101211b0();
  iStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101e6a ULinkerLoad::GetExportClassPackage

/* public: class FName __thiscall ULinkerLoad::GetExportClassPackage(int) */

void __thiscall ULinkerLoad::GetExportClassPackage(ULinkerLoad *this,int param_1)

{
  int iVar1;
  int in_stack_00000008;
  
                    /* 0x1e6a  1313  ?GetExportClassPackage@ULinkerLoad@@QAE?AVFName@@H@Z */
  iVar1 = *(int *)(*(int *)(this + 0x90) + in_stack_00000008 * 0x24);
  if (iVar1 < 0) {
    *(undefined4 *)param_1 =
         *(undefined4 *)
          (*(int *)(this + 0x84) + *(int *)(*(int *)(this + 0x84) + iVar1 * -0x1c + -0x14) * -0x1c +
          -0x10);
    return;
  }
  if (0 < iVar1) {
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x34) + 0x20);
    return;
  }
  *(undefined4 *)param_1 = 0x14;
  return;
}


// ==== 10101e6f UObject::execTan

/* public: void __thiscall UObject::execTan(struct FFrame &,void * const) */

void __thiscall UObject::execTan(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1e6f  2398  ?execTan@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appTan((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10101e74 UStruct::CleanupDestroyed

/* public: virtual void __thiscall UStruct::CleanupDestroyed(unsigned char *) */

void __thiscall UStruct::CleanupDestroyed(UStruct *this,uchar *param_1)

{
  int *piVar1;
  int *piStack_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e74  843  ?CleanupDestroyed@UStruct@@UAEXPAE@Z */
  puStack_c = &LAB_101ba080;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (GIsEditor == 0) {
    ExceptionList = &pvStack_10;
    for (piVar1 = *(int **)(this + 0x6c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x19]) {
      (**(code **)(*piVar1 + 0x7c))(param_1 + piVar1[0x15]);
    }
  }
  else {
    ExceptionList = &pvStack_10;
    thunk_FUN_10119210(this);
    while (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 0x7c))(param_1 + piStack_24[0x15]);
      piStack_24 = (int *)piStack_24[0xe];
      thunk_FUN_10114340();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101e79 appCreateGuid

/* class FGuid __cdecl appCreateGuid(void) */

GUID * __cdecl appCreateGuid(void)

{
  HRESULT HVar1;
  GUID *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e79  2030  ?appCreateGuid@@YA?AVFGuid@@XZ */
  puStack_c = &LAB_101be420;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  in_stack_00000004->Data1 = 0;
  in_stack_00000004->Data2 = 0;
  in_stack_00000004->Data3 = 0;
  in_stack_00000004->Data4[0] = '\0';
  in_stack_00000004->Data4[1] = '\0';
  in_stack_00000004->Data4[2] = '\0';
  in_stack_00000004->Data4[3] = '\0';
  in_stack_00000004->Data4[4] = '\0';
  in_stack_00000004->Data4[5] = '\0';
  in_stack_00000004->Data4[6] = '\0';
  in_stack_00000004->Data4[7] = '\0';
  HVar1 = CoCreateGuid(in_stack_00000004);
  if (HVar1 != 0) {
    appFailAssert("CoCreateGuid( (GUID*)&Result )==S_OK",".\\UnVcWin32.cpp",0x529);
  }
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 10101e7e thunk_FUN_10124a00 thunk -> 10124a00

// ==== 10101e88 FScale::FScale

/* public: __thiscall FScale::FScale(class FVector const &,float,enum ESheerAxis) */

void __thiscall FScale::FScale(FScale *this,FVector *param_1,float param_2,ESheerAxis param_3)

{
  undefined4 uVar1;
  
                    /* 0x1e88  129  ??0FScale@@QAE@ABVFVector@@MW4ESheerAxis@@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(float *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 8) = uVar1;
  this[0x10] = (FScale)(undefined1)param_3;
  return;
}


// ==== 10101e8d UObjectExporterT3D::UObjectExporterT3D

/* public: __thiscall UObjectExporterT3D::UObjectExporterT3D(class UObjectExporterT3D const &) */

UObjectExporterT3D * __thiscall
UObjectExporterT3D::UObjectExporterT3D(UObjectExporterT3D *this,UObjectExporterT3D *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e8d  252  ??0UObjectExporterT3D@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9248;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UExporter::UExporter((UExporter *)this,(UExporter *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101e92 UClass::operator_new

/* public: static void * __cdecl UClass::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UClass::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1e92  359  ??2UClass@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101e97 thunk_FUN_1011daf0 thunk -> 1011daf0

// ==== 10101e9c L2ThreadUtil::GetThreadIndex

/* public: int __thiscall L2ThreadUtil::GetThreadIndex(unsigned long) */

int __thiscall L2ThreadUtil::GetThreadIndex(L2ThreadUtil *this,ulong param_1)

{
  int *piVar1;
  
                    /* 0x1e9c  1406  ?GetThreadIndex@L2ThreadUtil@@QAEHK@Z */
  if (*(int *)(this + 0x2c8) != 0) {
    piVar1 = (int *)thunk_FUN_101297f0(&param_1);
    if (piVar1 != (int *)0x0) {
      return *piVar1;
    }
  }
  return 7;
}


// ==== 10101ea6 FName::GetMaxNames

/* public: static int __cdecl FName::GetMaxNames(void) */

int __cdecl FName::GetMaxNames(void)

{
                    /* 0x1ea6  1353  ?GetMaxNames@FName@@SAHXZ */
  return DAT_10327ae4;
}


// ==== 10101eab UObject::execNotEqual_VectorVector

/* public: void __thiscall UObject::execNotEqual_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_18;
  float afStack_14 [3];
  undefined4 *puStack_8;
  
                    /* 0x1eab  2335  ?execNotEqual_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((unaff_ESI == (float)afStack_14) && (fStack_18 == (float)param_1)) &&
     (afStack_14[0] == (float)&fStack_18)) {
    *puStack_8 = 0;
    return;
  }
  *puStack_8 = 1;
  return;
}


// ==== 10101eb0 thunk_FUN_101329a0 thunk -> 101329a0

// ==== 10101eb5 UObject::execSin

/* public: void __thiscall UObject::execSin(struct FFrame &,void * const) */

void __thiscall UObject::execSin(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x1eb5  2365  ?execSin@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSin((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10101ebf UCommandlet::UCommandlet

/* public: __thiscall UCommandlet::UCommandlet(void) */

UCommandlet * __thiscall UCommandlet::UCommandlet(UCommandlet *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 uStack_4;
  undefined3 uStack_3;
  
                    /* 0x1ebf  200  ??0UCommandlet@@QAE@XZ */
  puStack_8 = &LAB_101bd492;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = UObject::vftable;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  *(undefined ***)this = vftable;
  uStack_3 = 0;
  uStack_4 = 0xc;
  _eh_vector_constructor_iterator_
            (this + 100,0xc,0x10,FStringNoInit::FStringNoInit,FStringNoInit::~FStringNoInit);
  _uStack_4 = CONCAT31(uStack_3,0xd);
  _eh_vector_constructor_iterator_
            (this + 0x124,0xc,0x10,FStringNoInit::FStringNoInit,FStringNoInit::~FStringNoInit);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101ec4 UArrayProperty::UArrayProperty

/* public: __thiscall UArrayProperty::UArrayProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UArrayProperty * __thiscall
UArrayProperty::UArrayProperty
          (UArrayProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1ec4  183  ??0UArrayProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101ece FBitWriterMark::operator=

/* public: struct FBitWriterMark & __thiscall FBitWriterMark::operator=(struct FBitWriterMark const
   &) */

FBitWriterMark * __thiscall FBitWriterMark::operator=(FBitWriterMark *this,FBitWriterMark *param_1)

{
                    /* 0x1ece  433  ??4FBitWriterMark@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10101ed3 FNullOutError::Serialize

/* public: virtual void __thiscall FNullOutError::Serialize(unsigned short const *,enum EName) */

void __thiscall FNullOutError::Serialize(FNullOutError *this,ushort *param_1,EName param_2)

{
                    /* 0x1ed3  1799  ?Serialize@FNullOutError@@UAEXPBGW4EName@@@Z */
  return;
}


// ==== 10101ed8 thunk_FUN_10127d40 thunk -> 10127d40

// ==== 10101ee2 LocalizeError

/* unsigned short const * __cdecl LocalizeError(char const *,unsigned short const *,unsigned short
   const *) */

ushort * __cdecl LocalizeError(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x1ee2  1580  ?LocalizeError@@YAPBGPBDPBG1@Z */
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  puVar1 = Localize((ushort *)L"Errors",puVar1,param_2,param_3,0);
  return puVar1;
}


// ==== 10101ee7 thunk_FUN_1014c310 thunk -> 1014c310

// ==== 10101eec UObject::AddObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __thiscall UObject::AddObject(int) */

void __thiscall UObject::AddObject(UObject *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  FScopeCriticalSection aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1eec  789  ?AddObject@UObject@@IAEXH@Z */
  puStack_c = &LAB_101bcfa8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
  if (iVar1 == 0) {
    FScopeCriticalSection::FScopeCriticalSection(aFStack_18,GLoadingCS);
    iStack_8._0_1_ = 1;
    iVar1 = param_1;
    if (param_1 == -1) {
      if (DAT_10330898 == 0) {
        iVar1 = thunk_FUN_10128230(1);
      }
      else {
        iVar1 = thunk_FUN_1015d870();
        if (*(int *)(_GObjObjects + iVar1 * 4) != 0) {
          appFailAssert("GObjObjects(InIndex)==NULL",".\\UnObj.cpp",0xfa7);
        }
      }
    }
    *(UObject **)(_GObjObjects + iVar1 * 4) = this;
    *(int *)(this + 4) = iVar1;
    if (*(int *)(this + 0x28) == -1) {
      *(uint *)(this + 0x28) = (uint)GMakeCacheIDIndex;
      bVar3 = 0xfffffffe < (uint)GMakeCacheIDIndex;
      GMakeCacheIDIndex._0_4_ = (uint)GMakeCacheIDIndex + 1;
      GMakeCacheIDIndex._4_4_ = GMakeCacheIDIndex._4_4_ + (uint)bVar3;
    }
    HashObject(this);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
  }
  else if (param_1 == -1) {
    param_1 = (int)this;
    uVar2 = thunk_FUN_101287a0(&param_1);
    *(undefined4 *)(this + 0x30) = uVar2;
    if (*(int *)(this + 0x28) == -1) {
      *(uint *)(this + 0x28) = (uint)GMakeCacheIDIndex;
      bVar3 = 0xfffffffe < (uint)GMakeCacheIDIndex;
      GMakeCacheIDIndex._0_4_ = (uint)GMakeCacheIDIndex + 1;
      GMakeCacheIDIndex._4_4_ = GMakeCacheIDIndex._4_4_ + (uint)bVar3;
    }
    HashObjectBuffer(this);
  }
  else {
    *(UObject **)(_GObjObjects + param_1 * 4) = this;
    *(int *)(this + 4) = param_1;
    if (*(int *)(this + 0x28) == -1) {
      *(uint *)(this + 0x28) = (uint)GMakeCacheIDIndex;
      bVar3 = 0xfffffffe < (uint)GMakeCacheIDIndex;
      GMakeCacheIDIndex._0_4_ = (uint)GMakeCacheIDIndex + 1;
      GMakeCacheIDIndex._4_4_ = GMakeCacheIDIndex._4_4_ + (uint)bVar3;
    }
    HashObject(this);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101ef1 UObject::execJump

/* public: void __thiscall UObject::execJump(struct FFrame &,void * const) */

void __thiscall UObject::execJump(UObject *this,FFrame *param_1,void *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  FOutputDevice *this_00;
  wchar_t *pwVar4;
  
                    /* 0x1ef1  2280  ?execJump@UObject@@QAEXAAUFFrame@@QAX@Z */
  DAT_10283778 = DAT_10283778 + 1;
  if (1000000 < DAT_10283778) {
    pwVar4 = L"norunaway";
    puVar2 = appCmdLine();
    iVar3 = ParseParam(puVar2,(ushort *)pwVar4);
    if (iVar3 == 0) {
      FOutputDevice::Logf(this_00,(EName)param_1,(ushort *)0x2f9);
    }
    DAT_10283778 = 0;
  }
  uVar1 = **(ushort **)(param_1 + 0xc);
  *(ushort **)(param_1 + 0xc) = *(ushort **)(param_1 + 0xc) + 1;
  *(uint *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0x54) + (uint)uVar1;
  return;
}


// ==== 10101ef6 thunk_FUN_10123ef0 thunk -> 10123ef0

// ==== 10101efb thunk_FUN_1011a740 thunk -> 1011a740

// ==== 10101f00 thunk_FUN_10128880 thunk -> 10128880

// ==== 10101f05 UObject::LoadConfig

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::LoadConfig(int,class UClass *,unsigned short const *) */

void __thiscall UObject::LoadConfig(UObject *this,int param_1,UClass *param_2,ushort *param_3)

{
  undefined1 *puVar1;
  UObject *this_00;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  FArray *this_01;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  undefined2 uStack_a70;
  undefined1 auStack_a6e [2046];
  ushort auStack_270 [256];
  FString aFStack_70 [12];
  undefined1 auStack_64 [16];
  FString aFStack_54 [12];
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  UObject *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1f05  1572  ?LoadConfig@UObject@@QAEXHPAVUClass@@PBG@Z */
  puStack_c = &LAB_101bd830;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff584;
  uStack_8 = 0;
  if (param_2 == (UClass *)0x0) {
    param_2 = *(UClass **)(this + 0x24);
  }
  if (((byte)param_2[0x4a4] & 4) != 0) {
    ExceptionList = &pvStack_10;
    pUStack_18 = this;
    puVar1 = &stack0xfffff584;
    if ((param_1 != 0) &&
       (ExceptionList = &pvStack_10, puVar1 = &stack0xfffff584,
       *(UClass **)(param_2 + 0x34) != (UClass *)0x0)) {
      ExceptionList = &pvStack_10;
      LoadConfig(this,param_1,*(UClass **)(param_2 + 0x34),param_3);
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    if (((*(uint *)(*(int *)(this + 0x24) + 0x4a4) & 0x400) == 0) ||
       (iStack_1c = 1, *(int *)(this + 4) == -1)) {
      iStack_1c = 0;
    }
    if (param_3 == (ushort *)0x0) {
      if ((iStack_1c == 0) || (*(UPackage **)(this + 0x18) == GObjTransientPkg)) {
        iVar3 = *(int *)(_Names + *(int *)(*(int *)(this + 0x24) + 0x4c0) * 4);
      }
      else {
        iVar3 = *(int *)(_Names + *(int *)(*(UPackage **)(this + 0x18) + 0x20) * 4);
      }
      param_3 = (ushort *)(iVar3 + 0xc);
    }
    thunk_FUN_10119210(param_2);
    while (piVar6 = piStack_24, piStack_24 != (int *)0x0) {
      if ((piStack_24[0x12] & 0x4000U) != 0) {
        uStack_a70 = 0;
        _memset(auStack_a6e,0,0x7fe);
        this_00 = (UObject *)param_2;
        if ((piVar6[0x12] & 0x40000U) != 0) {
          this_00 = (UObject *)(**(code **)(*piVar6 + 0x74))();
        }
        if (iStack_1c == 0) {
          puVar7 = GetPathName(this_00,(UObject *)0x0,(ushort *)0x0);
        }
        else {
          puVar7 = (ushort *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
        }
        if (piVar6[0x10] == 1) {
          param_1 = *(int *)(_Names + piVar6[8] * 4) + 0xc;
        }
        else {
          param_1 = (int)auStack_270;
        }
        piVar2 = (int *)thunk_FUN_10132a60(piVar6);
        piStack_44 = piVar2;
        iVar3 = thunk_FUN_1015c0a0(piVar6);
        if (piVar2 == (int *)0x0) {
          if (iVar3 == 0) {
            for (iVar3 = 0; iStack_48 = iVar3, iVar3 < piVar6[0x10]; iVar3 = iVar3 + 1) {
              if (piVar6[0x10] != 1) {
                appSprintf(auStack_270,(ushort *)L"%s[%i]",*(int *)(_Names + piVar6[8] * 4) + 0xc,
                           iVar3);
              }
              iVar8 = (**(code **)(*(int *)GConfig + 0x10))
                                (puVar7,param_1,&uStack_a70,0x400,param_3);
              if (iVar8 != 0) {
                (**(code **)(*piVar6 + 0x9c))
                          (&uStack_a70,pUStack_18 + piVar6[0x11] * iVar3 + piVar6[0x15],0);
              }
            }
          }
          else {
            iVar3 = (**(code **)(*(int *)GConfig + 0x1c))(puVar7,0,1,param_3);
            if (iVar3 != 0) {
              thunk_FUN_101098b0();
              uStack_8._0_1_ = 3;
              FString::FString(aFStack_54,(ushort *)param_1);
              uStack_8._0_1_ = 4;
              thunk_FUN_10162ca0(aFStack_54,auStack_64);
              uStack_8._0_1_ = 3;
              FString::~FString(aFStack_54);
              uStack_8 = (uint)uStack_8._1_3_ << 8;
              thunk_FUN_10124a00();
            }
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)GConfig + 0x1c))(puVar7,0,1,param_3);
          if (iVar3 != 0) {
            thunk_FUN_101098b0();
            uStack_8._0_1_ = 1;
            uVar4 = FString::FString(aFStack_70,(ushort *)param_1);
            uStack_8._0_1_ = 2;
            thunk_FUN_10162ca0(uVar4,&iStack_38);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            FString::~FString(aFStack_70);
            this_01 = (FArray *)(pUStack_18 + piVar6[0x15]);
            iVar3 = *(int *)(piVar2[0x1e] + 0x44);
            (**(code **)(*piVar2 + 0xac))(this_01);
            FArray::AddZeroed(this_01,iVar3,iStack_34);
            iStack_20 = 0;
            iVar8 = iStack_34;
            while (iVar8 = iVar8 + -1, iStack_3c = iVar8, -1 < iVar8) {
              iStack_40 = *(int *)piVar2[0x1e];
              uVar4 = 0;
              iVar5 = iStack_20 * iVar3 + *(int *)this_01;
              puVar7 = FString::operator*((FString *)(iStack_38 + iVar8 * 0xc));
              piVar2 = piStack_44;
              (**(code **)(iStack_40 + 0x9c))(puVar7,iVar5,uVar4);
              iStack_20 = iStack_20 + 1;
            }
            uStack_8 = uStack_8 & 0xffffff00;
            thunk_FUN_10124a00();
            piVar6 = piStack_24;
          }
        }
      }
      piStack_24 = (int *)piVar6[0xe];
      thunk_FUN_10114340();
      this = pUStack_18;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101f0a UTextBufferFactory::FactoryCreateText

/* public: virtual class UObject * __thiscall UTextBufferFactory::FactoryCreateText(class ULevel
   *,class UClass *,class UObject *,class FName,unsigned long,class UObject *,unsigned short const
   *,unsigned short const * &,unsigned short const *,class FFeedbackContext *) */

UObject * __thiscall UTextBufferFactory::FactoryCreateText(void)

{
  UTextBuffer *this;
  UObject *pUVar1;
  undefined4 param_3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *in_stack_00000020;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f0a  998
                       ?FactoryCreateText@UTextBufferFactory@@UAEPAVUObject@@PAVULevel@@PAVUClass@@PAV2@VFName@@K2PBGAAPBG4PAVFFeedbackContext@@@Z
                        */
  puStack_c = &LAB_101bdb30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  this = UTextBuffer::operator_new(0x4c,param_3,in_stack_00000010,in_stack_00000014);
  if (this == (UTextBuffer *)0x0) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = (UObject *)UTextBuffer::UTextBuffer(this,(ushort *)&DAT_101dbcfc);
  }
  FString::operator=((FString *)(pUVar1 + 0x40),(ushort *)*in_stack_00000020);
  ExceptionList = pvStack_10;
  return pUVar1;
}


// ==== 10101f0f UFixedArrayProperty::~UFixedArrayProperty

/* public: virtual __thiscall UFixedArrayProperty::~UFixedArrayProperty(void) */

void __thiscall UFixedArrayProperty::~UFixedArrayProperty(UFixedArrayProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f0f  329  ??1UFixedArrayProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7d58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101f14 thunk_FUN_10128950 thunk -> 10128950

// ==== 10101f19 thunk_FUN_10121020 thunk -> 10121020

// ==== 10101f1e thunk_FUN_10114680 thunk -> 10114680

// ==== 10101f28 FName::StaticExit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl FName::StaticExit(void) */

void __cdecl FName::StaticExit(void)

{
  int iVar1;
  FOutputDevice *this;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f28  1933  ?StaticExit@FName@@SAXXZ */
  puStack_c = &LAB_101bc5e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (Initialized == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Initialized",".\\UnName.cpp",0xca);
  }
  if (NameCS != (FCriticalSection *)0x0) {
    thunk_FUN_101286e0(1);
    NameCS = (FCriticalSection *)0x0;
  }
  iVar1 = _Names;
  for (iVar2 = 0; iVar2 < DAT_10327ae4; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      thunk_FUN_101088c0(*(undefined4 *)(iVar1 + iVar2 * 4));
      iVar1 = _Names;
    }
  }
  thunk_FUN_10156e80(0);
  thunk_FUN_10113560(0);
  Initialized = 0;
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2fb);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10101f2d UProperty::operator_new

/* public: static void * __cdecl UProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UProperty::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1f2d  407  ??2UProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101f32 thunk_FUN_1015bc10 thunk -> 1015bc10

// ==== 10101f37 FClassNetCache::~FClassNetCache

/* public: __thiscall FClassNetCache::~FClassNetCache(void) */

void __thiscall FClassNetCache::~FClassNetCache(FClassNetCache *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1f37  298  ??1FClassNetCache@@QAE@XZ */
  puStack_8 = &LAB_101b8e86;
  pvStack_c = ExceptionList;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_10123dd0();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_101208b0();
  iStack_4 = 0xffffffff;
  thunk_FUN_10120730();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101f3c thunk_FUN_1011d240 thunk -> 1011d240

// ==== 10101f41 ULinkerLoad::GetReader

/* public: class FArchive * __thiscall ULinkerLoad::GetReader(void) */

FArchive * __thiscall ULinkerLoad::GetReader(ULinkerLoad *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f41  1388  ?GetReader@ULinkerLoad@@QAEPAVFArchive@@XZ */
  puStack_c = &LAB_101bb660;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  ExceptionList = pvStack_10;
  return *(FArchive **)(this + iVar1 * 4 + 0x518);
}


// ==== 10101f4b appStrcpy

/* unsigned short * __cdecl appStrcpy(unsigned short *,unsigned short const *) */

ushort * __cdecl appStrcpy(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
                    /* 0x1f4b  2108  ?appStrcpy@@YAPAGPAGPBG@Z */
  if (param_2 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  iVar2 = (int)param_1 - (int)param_2;
  do {
    uVar1 = *param_2;
    *(ushort *)(iVar2 + (int)param_2) = uVar1;
    param_2 = param_2 + 1;
  } while (uVar1 != 0);
  return param_1;
}


// ==== 10101f55 ULanguage::ULanguage

/* protected: __thiscall ULanguage::ULanguage(void) */

ULanguage * __thiscall ULanguage::ULanguage(ULanguage *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f55  231  ??0ULanguage@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6878;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101f5a thunk_FUN_10123dd0 thunk -> 10123dd0

// ==== 10101f5f FBox::TransformBy

/* public: class FBox __thiscall FBox::TransformBy(class FMatrix const &)const  */

FMatrix * __thiscall FBox::TransformBy(FBox *this,FMatrix *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FMatrix *this_00;
  float *pfVar4;
  FBox *pFVar5;
  FBox *pFVar6;
  float *in_stack_00000008;
  int iStack_38;
  int iStack_34;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  pfVar4 = in_stack_00000008;
                    /* 0x1f5f  1969  ?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */
  this_00 = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x18] = (FMatrix)0x0;
  iStack_34 = 2;
  param_1 = (FMatrix *)this;
  do {
    iStack_38 = 2;
    pFVar5 = this + 4;
    do {
      in_stack_00000008 = (float *)0x2;
      pFVar6 = this + 8;
      do {
        fVar1 = *(float *)param_1;
        fVar2 = *(float *)pFVar5;
        fVar3 = *(float *)pFVar6;
        fStack_1c = fVar2 * pfVar4[4] + fVar1 * *pfVar4 + fVar3 * pfVar4[8] + pfVar4[0xc];
        fStack_18 = pfVar4[9] * fVar3 + pfVar4[1] * fVar1 + pfVar4[5] * fVar2 + pfVar4[0xd];
        fStack_14 = fVar3 * pfVar4[10] + pfVar4[6] * fVar2 + pfVar4[2] * fVar1 + pfVar4[0xe];
        fStack_10 = fStack_1c;
        fStack_c = fStack_18;
        fStack_8 = fStack_14;
        operator+=((FBox *)this_00,(FVector *)&fStack_1c);
        pFVar6 = pFVar6 + 0xc;
        in_stack_00000008 = (float *)((int)in_stack_00000008 + -1);
      } while (in_stack_00000008 != (float *)0x0);
      pFVar5 = pFVar5 + 0xc;
      iStack_38 = iStack_38 + -1;
    } while (iStack_38 != 0);
    param_1 = param_1 + 0xc;
    iStack_34 = iStack_34 + -1;
  } while (iStack_34 != 0);
  return this_00;
}


// ==== 10101f64 UObject::GetTransientPackage

/* public: static class UPackage * __cdecl UObject::GetTransientPackage(void) */

UPackage * __cdecl UObject::GetTransientPackage(void)

{
                    /* 0x1f64  1414  ?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
  return GObjTransientPkg;
}


// ==== 10101f6e UObject::LinkerCreate

/* public: class UObject * __thiscall UObject::LinkerCreate(class ULinkerLoad *,class UClass *,class
   FName,unsigned long,int) */

UObject * __thiscall
UObject::LinkerCreate
          (undefined4 param_1_00,ULinkerLoad *param_1,undefined4 param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  UObject *pUVar1;
  
                    /* 0x1f6e  1568
                       ?LinkerCreate@UObject@@QAEPAV1@PAVULinkerLoad@@PAVUClass@@VFName@@KH@Z */
  pUVar1 = ULinkerLoad::Create(param_1,param_2,param_4,param_5,param_6);
  return pUVar1;
}


// ==== 10101f73 appMD5Final

/* void __cdecl appMD5Final(unsigned char *,struct FMD5Context *) */

void __cdecl appMD5Final(uchar *param_1,FMD5Context *param_2)

{
  FMD5Context *pFVar1;
  int iVar2;
  uint uVar3;
  FMD5Context *pFVar4;
  FMD5Context aFStack_8 [8];
  
                    /* 0x1f73  2072  ?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */
  iVar2 = 0;
  pFVar1 = param_2 + 0x12;
  do {
    aFStack_8[iVar2] = pFVar1[-2];
    aFStack_8[iVar2 + 1] = pFVar1[-1];
    aFStack_8[iVar2 + 2] = *pFVar1;
    aFStack_8[iVar2 + 3] = pFVar1[1];
    iVar2 = iVar2 + 4;
    pFVar1 = pFVar1 + 4;
  } while (iVar2 < 8);
  uVar3 = *(uint *)(param_2 + 0x10) >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar3) {
    iVar2 = 0x78;
  }
  appMD5Update(param_2,&DAT_10239070,iVar2 - uVar3);
  appMD5Update(param_2,(uchar *)aFStack_8,8);
  pFVar4 = (FMD5Context *)(param_1 + 1);
  pFVar1 = param_2 + 2;
  iVar2 = 4;
  do {
    pFVar4[-1] = pFVar1[-2];
    *pFVar4 = pFVar1[-1];
    pFVar4[1] = *pFVar1;
    pFVar4[2] = pFVar1[1];
    pFVar1 = pFVar1 + 4;
    pFVar4 = pFVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  appMemset(param_2,0,0x58);
  return;
}


// ==== 10101f78 UObject::execMultiplyEqual_VectorVector

/* public: void __thiscall UObject::execMultiplyEqual_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execMultiplyEqual_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_EDI;
  float *pfVar2;
  float afStack_14 [2];
  undefined1 auStack_c [4];
  float *pfStack_8;
  
                    /* 0x1f78  2311  ?execMultiplyEqual_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = afStack_14;
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfVar2 = *pfVar2 * (float)param_1;
  pfVar2[1] = (float)auStack_c * pfVar2[1];
  pfVar2[2] = pfVar2[2] * unaff_EDI;
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 10101f7d UExporter::UExporter

/* public: __thiscall UExporter::UExporter(void) */

UExporter * __thiscall UExporter::UExporter(UExporter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f7d  211  ??0UExporter@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b99ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10101f82 UFloatProperty::operator_new

/* public: static void * __cdecl UFloatProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UFloatProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1f82  379  ??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10101f87 ULinkerLoad::TotalSize

/* private: virtual int __thiscall ULinkerLoad::TotalSize(void) */

int __thiscall ULinkerLoad::TotalSize(ULinkerLoad *this)

{
  FArchive *pFVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f87  1967  ?TotalSize@ULinkerLoad@@EAEHXZ */
  puStack_c = &LAB_101bb700;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = GetReader(this + -0xc0);
  iVar2 = (**(code **)(*(int *)pFVar1 + 0x2c))();
  ExceptionList = pvStack_10;
  return iVar2;
}


// ==== 10101f8c UObject::execXor_IntInt

/* public: void __thiscall UObject::execXor_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execXor_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x1f8c  2412  ?execXor_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 0;
  return;
}


// ==== 10101f91 thunk_FUN_10114b70 thunk -> 10114b70

// ==== 10101f96 appStrncmp

/* int __cdecl appStrncmp(unsigned short const *,unsigned short const *,int) */

int __cdecl appStrncmp(ushort *param_1,ushort *param_2,int param_3)

{
                    /* 0x1f96  2114  ?appStrncmp@@YAHPBG0H@Z */
  if (param_3 != 0) {
    for (; ((param_3 = param_3 + -1, param_3 != 0 && (*param_1 != 0)) && (*param_1 == *param_2));
        param_1 = param_1 + 1) {
      param_2 = param_2 + 1;
    }
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}


// ==== 10101f9b FString::FString

/* public: __thiscall FString::FString(enum ENoInit) */

void __thiscall FString::FString(FString *this,ENoInit param_1)

{
                    /* 0x1f9b  153  ??0FString@@QAE@W4ENoInit@@@Z */
  return;
}


// ==== 10101faa thunk_FUN_10132720 thunk -> 10132720

// ==== 10101faf UObjectProperty::~UObjectProperty

/* public: virtual __thiscall UObjectProperty::~UObjectProperty(void) */

void __thiscall UObjectProperty::~UObjectProperty(UObjectProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1faf  340  ??1UObjectProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7b58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10101fb4 thunk_FUN_10162fb0 thunk -> 10162fb0

// ==== 10101fb9 FMemCache::First

/* public: class FMemCache::FCacheItem * __thiscall FMemCache::First(void) */

FCacheItem * __thiscall FMemCache::First(FMemCache *this)

{
                    /* 0x1fb9  1016  ?First@FMemCache@@QAEPAVFCacheItem@1@XZ */
  return *(FCacheItem **)(this + 0x18);
}


// ==== 10101fbe thunk_FUN_101265c0 thunk -> 101265c0

// ==== 10101fc3 UClass::MergeBools

/* public: virtual int __thiscall UClass::MergeBools(void) */

int __thiscall UClass::MergeBools(UClass *this)

{
                    /* 0x1fc3  1613  ?MergeBools@UClass@@UAEHXZ */
  return 1;
}


// ==== 10101fcd FGenerationInfo::operator=

/* public: struct FGenerationInfo & __thiscall FGenerationInfo::operator=(struct FGenerationInfo
   const &) */

FGenerationInfo * __thiscall
FGenerationInfo::operator=(FGenerationInfo *this,FGenerationInfo *param_1)

{
                    /* 0x1fcd  453  ??4FGenerationInfo@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10101fd2 thunk_FUN_1015af70 thunk -> 1015af70

// ==== 10101fd7 thunk_FUN_10129c40 thunk -> 10129c40

// ==== 10101fe1 UObject::execAddEqual_FloatFloat

/* public: void __thiscall UObject::execAddEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execAddEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x1fe1  2142  ?execAddEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  pfStack_8 = (float *)0x0;
  GPropAddr = (uchar *)0x0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&pfStack_8);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar3 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar3 = (float *)&stack0xfffffff0;
  }
  uStack_4 = 0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar1 = *pfVar3;
  *pfVar3 = fVar1 + unaff_ESI;
  *pfStack_8 = fVar1 + unaff_ESI;
  return;
}


// ==== 10101fe6 appBaseDir

/* unsigned short const * __cdecl appBaseDir(void) */

ushort * __cdecl appBaseDir(void)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fe6  2019  ?appBaseDir@@YAPBGXZ */
  puStack_c = &LAB_101be430;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (DAT_1033d498 == 0) {
    if ((GUnicode == 0) || (GUnicodeOS != 0)) {
      ExceptionList = &pvStack_10;
      GetModuleFileNameW(DAT_1023c664,&DAT_1033d498,0x100);
    }
    else {
      ExceptionList = &pvStack_10;
      appStrcpy((ushort *)&DAT_1033d498,(ushort *)&DAT_101e1a80);
    }
    iVar1 = appStrlen((ushort *)&DAT_1033d498);
    do {
      iVar1 = iVar1 + -1;
      if ((iVar1 < 1) || (*(short *)(&DAT_1033d496 + iVar1 * 2) == 0x5c)) break;
    } while (*(short *)(&DAT_1033d496 + iVar1 * 2) != 0x2f);
    (&DAT_1033d498)[iVar1] = 0;
  }
  ExceptionList = pvStack_10;
  return (ushort *)&DAT_1033d498;
}


// ==== 10101feb UObject::execHighNative2

/* public: void __thiscall UObject::execHighNative2(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative2(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x1feb  2255  ?execHighNative2@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_1027ff70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10101ff0 FFrame::Step

/* public: void __thiscall FFrame::Step(class UObject *,void * const) */

void __thiscall FFrame::Step(FFrame *this,UObject *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x1ff0  1948  ?Step@FFrame@@QAEXPAVUObject@@QAX@Z */
  bVar1 = **(byte **)(this + 0xc);
  *(byte **)(this + 0xc) = *(byte **)(this + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(this,param_2);
  return;
}


// ==== 10101ff5 thunk_FUN_101633d0 thunk -> 101633d0

// ==== 10101ffa thunk_FUN_1015da10 thunk -> 1015da10

// ==== 10101fff UStrProperty::Serialize

/* public: virtual void __thiscall UStrProperty::Serialize(class FArchive &) */

void __thiscall UStrProperty::Serialize(UStrProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fff  1824  ?Serialize@UStrProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be0c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102009 UFloatProperty::Identical

/* public: virtual int __thiscall UFloatProperty::Identical(void const *,void const *)const  */

int __thiscall UFloatProperty::Identical(UFloatProperty *this,void *param_1,void *param_2)

{
  float fVar1;
  
                    /* 0x2009  1434  ?Identical@UFloatProperty@@UBEHPBX0@Z */
  if (param_2 == (void *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)param_2;
  }
  if (fVar1 == *(float *)param_1) {
    return 1;
  }
  return 0;
}


// ==== 1010200e thunk_FUN_1015d8c0 thunk -> 1015d8c0

// ==== 10102013 UNameProperty::ExportTextItem

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UNameProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UNameProperty::ExportTextItem
          (UNameProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2013  985  ?ExportTextItem@UNameProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101be1f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((param_4 & 2U) == 0) {
    ExceptionList = &pvStack_10;
    appStrcpy(param_1,(ushort *)(*(int *)(_Names + *(int *)param_2 * 4) + 0xc));
  }
  else {
    ExceptionList = &pvStack_10;
    appSprintf(param_1,(ushort *)L"\"%s\"");
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102018 UObject::execStop

/* public: void __thiscall UObject::execStop(struct FFrame &,void * const) */

void __thiscall UObject::execStop(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x2018  2370  ?execStop@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ==== 1010201d FArray::Add

/* public: int __thiscall FArray::Add(int,int) */

int __thiscall FArray::Add(FArray *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x201d  776  ?Add@FArray@@QAEHHH@Z */
  iVar2 = *(int *)(this + 4);
  iVar1 = iVar2 + param_1;
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    Realloc(this,param_2);
  }
  return iVar2;
}


// ==== 10102022 FThrowOut::FThrowOut

/* public: __thiscall FThrowOut::FThrowOut(class FThrowOut const &) */

void __thiscall FThrowOut::FThrowOut(FThrowOut *this,FThrowOut *param_1)

{
                    /* 0x2022  161  ??0FThrowOut@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10102027 appPreExit

/* void __cdecl appPreExit(void) */

void __cdecl appPreExit(void)

{
  FOutputDevice *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2027  2085  ?appPreExit@@YAXXZ */
  puStack_c = &LAB_101bc130;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2fb);
  }
  thunk_FUN_10178490();
  FMemStack::Exit(&GMem);
  UObject::StaticExit();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010202c FArchive::FArchive

/* public: __thiscall FArchive::FArchive(class FArchive const &) */

void __thiscall FArchive::FArchive(FArchive *this,FArchive *param_1)

{
                    /* 0x202c  5  ??0FArchive@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}


// ==== 10102031 UExporter::operator=

/* public: class UExporter & __thiscall UExporter::operator=(class UExporter const &) */

UExporter * __thiscall UExporter::operator=(UExporter *this,UExporter *param_1)

{
                    /* 0x2031  520  ??4UExporter@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10124a90(param_1 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(uint *)(this + 0x48) =
       *(uint *)(this + 0x48) ^ (*(uint *)(this + 0x48) ^ *(uint *)(param_1 + 0x48)) & 1;
  *(uint *)(this + 0x48) =
       (*(uint *)(param_1 + 0x48) ^ *(uint *)(this + 0x48)) & 2 ^ *(uint *)(this + 0x48);
  return this;
}


// ==== 1010203b appSRandInit

/* void __cdecl appSRandInit(int) */

void __cdecl appSRandInit(int param_1)

{
                    /* 0x203b  2092  ?appSRandInit@@YAXH@Z */
  DAT_1027bd9c = param_1;
  return;
}


// ==== 10102040 appToAnsi

/* char const * __cdecl appToAnsi(unsigned short const *,char *) */

char * __cdecl appToAnsi(ushort *param_1,char *param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2040  2126  ?appToAnsi@@YAPBDPBGPAD@Z */
  puStack_c = &LAB_101bc150;
  pvStack_10 = ExceptionList;
  iVar3 = 0;
  uStack_8 = 0;
  if (param_1 == (ushort *)0x0) {
    return (char *)0x0;
  }
  puVar2 = (ushort *)param_2;
  ExceptionList = &pvStack_10;
  if (param_2 == (char *)0x0) {
    ExceptionList = &pvStack_10;
    puVar2 = appStaticString1024();
  }
  for (; ((param_2 != (char *)0x0 || (iVar3 < 0x3ff)) && (param_1[iVar3] != 0)); iVar3 = iVar3 + 1)
  {
    uVar1 = thunk_FUN_1014f8d0(param_1[iVar3]);
    *(undefined1 *)(iVar3 + (int)puVar2) = uVar1;
  }
  *(undefined1 *)(iVar3 + (int)puVar2) = 0;
  ExceptionList = pvStack_10;
  return (char *)puVar2;
}


// ==== 10102045 UObject::execDynArrayElement

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::execDynArrayElement(struct FFrame &,void * const) */

void __thiscall UObject::execDynArrayElement(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 uStack_4;
  
                    /* 0x2045  2197  ?execDynArrayElement@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  puVar3 = GPropAddr;
  pUVar2 = GProperty;
  GPropObject = this;
  if ((GProperty != (UProperty *)0x0) && (GPropAddr != (uchar *)0x0)) {
    if ((*(int *)(GPropAddr + 4) <= (int)&uStack_4) || ((int)&uStack_4 < 0)) {
      if ((unaff_EBP != 0) || ((int)&uStack_4 < 0)) {
        FOutputDevice::Logf(*(FOutputDevice **)(GProperty + 0x20),(ushort *)param_1);
        GPropAddr = (uchar *)0x0;
        GPropObject = (UObject *)0x0;
        if (unaff_EBP == 0) {
          GPropAddr = (uchar *)0x0;
          GPropObject = (UObject *)0x0;
          return;
        }
        uVar5 = *(uint *)(*(int *)(pUVar2 + 0x78) + 0x44) & 3;
        for (uVar4 = *(uint *)(*(int *)(pUVar2 + 0x78) + 0x44) >> 2; uVar4 != 0; uVar4 = uVar4 - 1)
        {
          *uStack_4 = 0;
          uStack_4 = uStack_4 + 1;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)uStack_4 = 0;
          uStack_4 = (undefined4 *)((int)uStack_4 + 1);
        }
        return;
      }
      FArray::AddZeroed((FArray *)GPropAddr,*(int *)(*(int *)(GProperty + 0x78) + 0x44),
                        (int)&uStack_4 + (1 - *(int *)(GPropAddr + 4)));
    }
    GPropAddr = (uchar *)(*(int *)(*(int *)(pUVar2 + 0x78) + 0x44) * (int)&uStack_4 + *(int *)puVar3
                         );
    if (unaff_EBP != 0) {
      (**(code **)(**(int **)(pUVar2 + 0x78) + 0xa4))(unaff_EBP,GPropAddr,0);
      return;
    }
  }
  return;
}


// ==== 1010204a UDelegateProperty::ExportCppItem

/* public: virtual void __thiscall UDelegateProperty::ExportCppItem(class FOutputDevice &,int)const
    */

void __thiscall
UDelegateProperty::ExportCppItem(UDelegateProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x204a  964  ?ExportCppItem@UDelegateProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bde30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"FScriptDelegate");
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010204f UStructProperty::UStructProperty

/* public: __thiscall UStructProperty::UStructProperty(void) */

UStructProperty * __thiscall UStructProperty::UStructProperty(UStructProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x204f  281  ??0UStructProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7ef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102054 FName::operator==

/* public: int __thiscall FName::operator==(class FName const &)const  */

int __thiscall FName::operator==(FName *this,FName *param_1)

{
                    /* 0x2054  564  ??8FName@@QBEHABV0@@Z */
  return (uint)(*(int *)this == *(int *)param_1);
}


// ==== 10102059 FPlane::operator=

/* public: class FPlane & __thiscall FPlane::operator=(class FPlane const &) */

FPlane * __thiscall FPlane::operator=(FPlane *this,FPlane *param_1)

{
                    /* 0x2059  478  ??4FPlane@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 1010205e thunk_FUN_10109350 thunk -> 10109350

// ==== 10102063 FModelCoords::FModelCoords

/* public: __thiscall FModelCoords::FModelCoords(class FCoords const &,class FCoords const &) */

void __thiscall FModelCoords::FModelCoords(FModelCoords *this,FCoords *param_1,FCoords *param_2)

{
  int iVar1;
  FModelCoords *pFVar2;
  
  pFVar2 = this;
                    /* 0x2063  79  ??0FModelCoords@@QAE@ABVFCoords@@0@Z */
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  pFVar2 = this + 0x30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return;
}


// ==== 10102068 thunk_FUN_1012cc40 thunk -> 1012cc40

// ==== 1010206d thunk_FUN_101190a0 thunk -> 101190a0

// ==== 1010207c UObject::execHighNative6

/* public: void __thiscall UObject::execHighNative6(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative6(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x207c  2259  ?execHighNative6@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280f70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10102081 FFileStream::operator=

/* public: class FFileStream & __thiscall FFileStream::operator=(class FFileStream const &) */

FFileStream * __thiscall FFileStream::operator=(FFileStream *this,FFileStream *param_1)

{
                    /* 0x2081  451  ??4FFileStream@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10102086 L2ThreadBase::IsRunning

/* public: virtual int __thiscall L2ThreadBase::IsRunning(void) */

int __thiscall L2ThreadBase::IsRunning(L2ThreadBase *this)

{
                    /* 0x2086  1526  ?IsRunning@L2ThreadBase@@UAEHXZ */
  return *(int *)(this + 0x10);
}


// ==== 1010208b UClass::~UClass

/* public: virtual __thiscall UClass::~UClass(void) */

void __thiscall UClass::~UClass(UClass *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x208b  320  ??1UClass@@UAE@XZ */
  puStack_8 = &LAB_101b86f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 8;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 7;
  FString::~FString((FString *)(this + 0x520));
  iStack_4._0_1_ = 6;
  thunk_FUN_10118d50();
  iStack_4._0_1_ = 5;
  thunk_FUN_10118d50();
  iStack_4._0_1_ = 4;
  thunk_FUN_10118750();
  iStack_4._0_1_ = 3;
  thunk_FUN_10118d50();
  iStack_4._0_1_ = 2;
  thunk_FUN_10120e70();
  iStack_4._0_1_ = 1;
  thunk_FUN_10120cf0();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_10120b60();
  iStack_4 = 0xffffffff;
  UState::~UState((UState *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10102090 winToUNICODE

/* unsigned short * __cdecl winToUNICODE(unsigned short *,char const *,int) */

ushort * __cdecl winToUNICODE(ushort *param_1,char *param_2,int param_3)

{
                    /* 0x2090  2418  ?winToUNICODE@@YAPAGPAGPBDH@Z */
  MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)param_1,param_3);
  return param_1;
}


// ==== 10102095 FMatrix::TransformFPlane

/* public: class FPlane __thiscall FMatrix::TransformFPlane(class FPlane const &)const  */

void __thiscall FMatrix::TransformFPlane(FMatrix *this,FPlane *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x2095  1974  ?TransformFPlane@FMatrix@@QBE?AVFPlane@@ABV2@@Z */
  *(float *)param_1 =
       *(float *)(this + 0x30) * in_stack_00000008[3] +
       *(float *)(this + 0x20) * in_stack_00000008[2] +
       *in_stack_00000008 * *(float *)this + *(float *)(this + 0x10) * in_stack_00000008[1];
  *(float *)(param_1 + 4) =
       *(float *)(this + 0x34) * in_stack_00000008[3] +
       *(float *)(this + 0x24) * in_stack_00000008[2] +
       *(float *)(this + 0x14) * in_stack_00000008[1] + *(float *)(this + 4) * *in_stack_00000008;
  *(float *)(param_1 + 8) =
       *(float *)(this + 0x38) * in_stack_00000008[3] +
       *(float *)(this + 0x28) * in_stack_00000008[2] +
       *(float *)(this + 0x18) * in_stack_00000008[1] + *(float *)(this + 8) * *in_stack_00000008;
  *(float *)(param_1 + 0xc) =
       *(float *)(this + 0x3c) * in_stack_00000008[3] +
       *(float *)(this + 0x2c) * in_stack_00000008[2] +
       *(float *)(this + 0x1c) * in_stack_00000008[1] + *(float *)(this + 0xc) * *in_stack_00000008;
  return;
}


// ==== 1010209a UProperty::UProperty

/* public: __thiscall UProperty::UProperty(class UProperty const &) */

UProperty * __thiscall UProperty::UProperty(UProperty *this,UProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x209a  263  ??0UProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7933;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined2 *)(this + 0x52) = *(undefined2 *)(param_1 + 0x52);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  FString::FString((FString *)(this + 0x6c),(FString *)(param_1 + 0x6c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101020a4 FClassNetCache::operator=

/* public: class FClassNetCache & __thiscall FClassNetCache::operator=(class FClassNetCache const &)
    */

FClassNetCache * __thiscall FClassNetCache::operator=(FClassNetCache *this,FClassNetCache *param_1)

{
                    /* 0x20a4  437  ??4FClassNetCache@@QAEAAV0@ABV0@@Z */
  thunk_FUN_10120810(param_1);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10120990(param_1 + 0x1c);
  thunk_FUN_1011a810(param_1 + 0x28);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_10119ab0();
  return this;
}


// ==== 101020a9 L2ThreadBase::GetID

/* public: virtual unsigned long __thiscall L2ThreadBase::GetID(void) */

ulong __thiscall L2ThreadBase::GetID(L2ThreadBase *this)

{
                    /* 0x20a9  1328  ?GetID@L2ThreadBase@@UAEKXZ */
  return *(ulong *)(this + 4);
}


// ==== 101020ae thunk_FUN_10149630 thunk -> 10149630

// ==== 101020b3 FCriticalSection::FCriticalSection

/* public: __thiscall FCriticalSection::FCriticalSection(void) */

FCriticalSection * __thiscall FCriticalSection::FCriticalSection(FCriticalSection *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20b3  35  ??0FCriticalSection@@QAE@XZ */
  puStack_c = &LAB_101be400;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  lpCriticalSection = (LPCRITICAL_SECTION)thunk_FUN_101088a0(0x18);
  *(LPCRITICAL_SECTION *)this = lpCriticalSection;
  InitializeCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101020b8 FRange::operator*=

/* public: class FRange __thiscall FRange::operator*=(class FRange const &) */

void __thiscall FRange::operator*=(FRange *this,FRange *param_1)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
                    /* 0x20b8  666  ??XFRange@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 * *(float *)this;
  fVar1 = in_stack_00000008[1];
  fVar2 = *(float *)(this + 4);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = fVar1 * fVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 101020bd UObject::ProcessDelegate

/* public: virtual void __thiscall UObject::ProcessDelegate(class FName,struct FScriptDelegate
   *,void *,void *) */

void __thiscall
UObject::ProcessDelegate
          (UObject *this,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  UObject *pUVar1;
  int iVar2;
  UFunction *pUVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20bd  1731
                       ?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
  puStack_c = &LAB_101baa20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if ((int *)*param_3 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    iVar2 = (**(code **)(*(int *)*param_3 + 0x30))();
    if (iVar2 == 0) {
      pUVar1 = (UObject *)*param_3;
      if (pUVar1 != (UObject *)0x0) {
        iVar2 = *(int *)pUVar1;
        pUVar3 = FindFunctionChecked(pUVar1,param_3[1],0,param_4,param_5);
        (**(code **)(iVar2 + 0x10))(pUVar3);
        ExceptionList = pvStack_10;
        return;
      }
    }
    else {
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  iVar2 = *(int *)this;
  pUVar3 = FindFunctionChecked(this,param_2,0,param_4,param_5);
  (**(code **)(iVar2 + 0x10))(pUVar3);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101020c7 TArray<unsigned_short>::Insert

/* public: void __thiscall TArray<unsigned short>::Insert(int,int) */

void __thiscall TArray<unsigned_short>::Insert(TArray<unsigned_short> *this,int param_1,int param_2)

{
                    /* 0x20c7  1470  ?Insert@?$TArray@G@@QAEXHH@Z */
  FArray::Insert((FArray *)this,param_1,param_2,2);
  return;
}


// ==== 101020cc UFunction::MergeBools

/* public: virtual int __thiscall UFunction::MergeBools(void) */

int __thiscall UFunction::MergeBools(UFunction *this)

{
                    /* 0x20cc  1615  ?MergeBools@UFunction@@UAEHXZ */
  return 0;
}


// ==== 101020d1 UProperty::GetSize

/* public: int __thiscall UProperty::GetSize(void)const  */

int __thiscall UProperty::GetSize(UProperty *this)

{
                    /* 0x20d1  1396  ?GetSize@UProperty@@QBEHXZ */
  return *(int *)(this + 0x44) * *(int *)(this + 0x40);
}


// ==== 101020d6 appMD5Decode

/* void __cdecl appMD5Decode(unsigned long *,unsigned char *,int) */

void __cdecl appMD5Decode(ulong *param_1,uchar *param_2,int param_3)

{
  uchar *puVar1;
  int iVar2;
  
                    /* 0x20d6  2070  ?appMD5Decode@@YAXPAKPAEH@Z */
  if (0 < param_3) {
    iVar2 = (param_3 - 1U >> 2) + 1;
    puVar1 = param_2 + 2;
    do {
      iVar2 = iVar2 + -1;
      *param_1 = CONCAT31(CONCAT21(*(undefined2 *)puVar1,puVar1[-1]),puVar1[-2]);
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 1;
    } while (iVar2 != 0);
  }
  return;
}


// ==== 101020db appPow

/* double __cdecl appPow(double,double) */

double __cdecl appPow(double param_1,double param_2)

{
  float10 fVar1;
  
                    /* 0x20db  2084  ?appPow@@YANNN@Z */
  fVar1 = (float10)FUN_1017cc60();
  return (double)fVar1;
}


// ==== 101020e0 UObject::execMultiplyEqual_VectorFloat

/* public: void __thiscall UObject::execMultiplyEqual_VectorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiplyEqual_VectorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *pfVar2;
  float fStack_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x20e0  2310  ?execMultiplyEqual_VectorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = (float *)&stack0xffffffec;
  }
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfVar2 = fStack_c * *pfVar2;
  pfVar2[1] = fStack_c * pfVar2[1];
  pfVar2[2] = fStack_c * pfVar2[2];
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 101020e5 L2ThreadStats::L2ThreadStats

/* public: __thiscall L2ThreadStats::L2ThreadStats(void) */

void __thiscall L2ThreadStats::L2ThreadStats(L2ThreadStats *this)

{
                    /* 0x20e5  179  ??0L2ThreadStats@@QAE@XZ */
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}


// ==== 101020ea UObject::eventEndState

/* public: void __thiscall UObject::eventEndState(void) */

void __thiscall UObject::eventEndState(UObject *this)

{
  UFunction *pUVar1;
  
                    /* 0x20ea  2133  ?eventEndState@UObject@@QAEXXZ */
  pUVar1 = FindFunctionChecked(this,0x13d,0,0,0);
  (**(code **)(*(int *)this + 0x10))(pUVar1);
  return;
}


// ==== 101020ef FRainbowPtr::FRainbowPtr

/* public: __thiscall FRainbowPtr::FRainbowPtr(void) */

FRainbowPtr * __thiscall FRainbowPtr::FRainbowPtr(FRainbowPtr *this)

{
                    /* 0x20ef  118  ??0FRainbowPtr@@QAE@XZ */
  return this;
}


// ==== 101020f4 UObject::FindFunctionChecked

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class UFunction * __thiscall UObject::FindFunctionChecked(class FName,int) */

UFunction * __thiscall
UObject::FindFunctionChecked(UObject *this,undefined4 param_2,undefined4 param_3)

{
  UField *pUVar1;
  UObject *this_00;
  
                    /* 0x20f4  1007  ?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */
  if (GIsScriptable == 0) {
    return (UFunction *)0x0;
  }
  pUVar1 = FindObjectField(this,param_2,param_3);
  if ((pUVar1 != (UField *)0x0) && ((*(uint *)(*(int *)(pUVar1 + 0x24) + 0x4a4) & 0x80000) != 0)) {
    return (UFunction *)pUVar1;
  }
  GetFullName(this_00,(ushort *)0x0);
  FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  return (UFunction *)0x0;
}


// ==== 101020f9 UClass::GetDefaultLevelObject

/* public: class ULevelObject * __thiscall UClass::GetDefaultLevelObject(void) */

ULevelObject * __thiscall UClass::GetDefaultLevelObject(UClass *this)

{
                    /* 0x20f9  1306  ?GetDefaultLevelObject@UClass@@QAEPAVULevelObject@@XZ */
  if (*(int *)(this + 0x4f8) == 0) {
    appFailAssert("Defaults.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnClass.h",0x218);
  }
  return *(ULevelObject **)(this + 0x4f4);
}


// ==== 101020fe FExec::FExec

/* public: __thiscall FExec::FExec(void) */

void __thiscall FExec::FExec(FExec *this)

{
                    /* 0x20fe  48  ??0FExec@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10102108 FOutputDevice::Log

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FOutputDevice::Log(enum EName,unsigned short const *) */

void __thiscall FOutputDevice::Log(FOutputDevice *this,EName param_1,ushort *param_2)

{
                    /* 0x2108  1595  ?Log@FOutputDevice@@QAEXW4EName@@PBG@Z */
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + param_1 * 4) + 4) & 0x1000) == 0))
  {
    (*(code *)**(undefined4 **)this)(param_2,param_1);
  }
  return;
}


// ==== 1010210d UObject::execClockwiseFrom_IntInt

/* public: void __thiscall UObject::execClockwiseFrom_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execClockwiseFrom_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x210d  2174  ?execClockwiseFrom_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar3 = (uint)&uStack_4 & 0xffff;
  uVar4 = (uint)&uStack_4 & 0xffff;
  iVar2 = uVar3 - uVar4;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (0x8000 < iVar2) {
    *unaff_ESI = (uint)(uVar3 < uVar4);
    return;
  }
  *unaff_ESI = (uint)(uVar4 < uVar3);
  return;
}


// ==== 10102112 UByteProperty::InternalConstructor

/* public: static void __cdecl UByteProperty::InternalConstructor(void *) */

void __cdecl UByteProperty::InternalConstructor(void *param_1)

{
                    /* 0x2112  1477  ?InternalConstructor@UByteProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UByteProperty(param_1);
    return;
  }
  return;
}


// ==== 10102117 UObject::execSubtract_FloatFloat

/* public: void __thiscall UObject::execSubtract_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x2117  2390  ?execSubtract_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (float)&uStack_4 - (float)&uStack_4;
  return;
}


// ==== 1010211c UObject::execDivideEqual_RotatorFloat

/* public: void __thiscall UObject::execDivideEqual_RotatorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivideEqual_RotatorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uchar *puVar3;
  FFrame *pFVar4;
  undefined4 *puVar5;
  float fStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x211c  2190  ?execDivideEqual_RotatorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar3 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar3 = &stack0xffffffec;
  }
  uStack_4 = 0;
  puVar5 = &uStack_4;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFVar4 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,puVar5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar2 = FUN_1017b700(pFVar4,puVar5,1.0 / fStack_c);
  *(undefined4 *)puVar3 = uVar2;
  uVar2 = FUN_1017b700();
  *(undefined4 *)(puVar3 + 4) = uVar2;
  uVar2 = FUN_1017b700();
  *(undefined4 *)(puVar3 + 8) = uVar2;
  *puStack_8 = *(undefined4 *)puVar3;
  puStack_8[1] = *(undefined4 *)(puVar3 + 4);
  puStack_8[2] = *(undefined4 *)(puVar3 + 8);
  return;
}


// ==== 10102121 FSphere::FSphere

/* public: __thiscall FSphere::FSphere(void) */

FSphere * __thiscall FSphere::FSphere(FSphere *this)

{
                    /* 0x2121  138  ??0FSphere@@QAE@XZ */
  return this;
}


// ==== 10102126 thunk_FUN_101653d0 thunk -> 101653d0

// ==== 1010212b FRange::GetRand

/* public: float __thiscall FRange::GetRand(void)const  */

float __thiscall FRange::GetRand(FRange *this)

{
  float fVar1;
  
                    /* 0x212b  1386  ?GetRand@FRange@@QBEMXZ */
  fVar1 = appFrand();
  return (*(float *)this - *(float *)(this + 4)) * fVar1 + *(float *)(this + 4);
}


// ==== 10102130 FName::DeleteEntry

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl FName::DeleteEntry(int) */

void __cdecl FName::DeleteEntry(int param_1)

{
  FNameEntry *pFVar1;
  FNameEntry *pFVar2;
  uint uVar3;
  FNameEntry *pFVar4;
  FScopeCriticalSection aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2130  910  ?DeleteEntry@FName@@SAXH@Z */
  puStack_c = &LAB_101bc618;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_18,NameCS);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  pFVar1 = *(FNameEntry **)(_Names + param_1 * 4);
  if (pFVar1 == (FNameEntry *)0x0) {
    appFailAssert("NameEntry",".\\UnName.cpp",0x102);
  }
  if (((uint)*(FNameEntry **)(pFVar1 + 4) & 0x4000000) != 0) {
    appFailAssert("!(NameEntry->Flags & RF_Native)",".\\UnName.cpp",0x103);
  }
  uVar3 = thunk_FUN_1014fa60(pFVar1 + 0xc);
  pFVar4 = (FNameEntry *)(&NameHash + (uVar3 & 0xfff));
  do {
    pFVar2 = *(FNameEntry **)pFVar4;
    if (pFVar2 == (FNameEntry *)0x0) {
LAB_10159f85:
      FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
LAB_10159f9d:
      *(FNameEntry **)pFVar4 = *(FNameEntry **)(*(FNameEntry **)pFVar4 + 8);
      thunk_FUN_101088c0();
      *(undefined4 *)(_Names + param_1 * 4) = 0;
      thunk_FUN_101492e0();
      uStack_8 = uStack_8 & 0xffffff00;
      FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
      ExceptionList = pvStack_10;
      return;
    }
    if (pFVar2 == pFVar1) {
      if (pFVar2 != (FNameEntry *)0x0) goto LAB_10159f9d;
      goto LAB_10159f85;
    }
    pFVar4 = pFVar2 + 8;
  } while( true );
}


// ==== 1010213a UObject::execEatString

/* public: void __thiscall UObject::execEatString(struct FFrame &,void * const) */

void __thiscall UObject::execEatString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x213a  2203  ?execEatString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101babc0;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10102144 FArchive::operator=

/* public: class FArchive & __thiscall FArchive::operator=(class FArchive const &) */

FArchive * __thiscall FArchive::operator=(FArchive *this,FArchive *param_1)

{
                    /* 0x2144  427  ??4FArchive@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}


// ==== 1010214e UObject::execGreater_StringString

/* public: void __thiscall UObject::execGreater_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execGreater_StringString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FFrame *pFVar3;
  FFrame *pFStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x214e  2246  ?execGreater_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (uint *)&LAB_101bad80;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_30 = &uStack_18;
  pFStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar3 = pFStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    pFVar3 = (FFrame *)&DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,(ushort *)pFVar3);
  *puStack_8 = (uint)(0 < iVar2);
  uStack_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&pFStack_34,2);
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&pFStack_34);
  uStack_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  uStack_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10102153 thunk_FUN_10126520 thunk -> 10126520

// ==== 1010215d appStrCrc

/* unsigned long __cdecl appStrCrc(unsigned short const *) */

ulong __cdecl appStrCrc(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0x215d  2103  ?appStrCrc@@YAKPBG@Z */
  iVar2 = appStrlen(param_1);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      puVar1 = param_1 + iVar4;
      uVar3 = uVar3 << 8 ^ (uint)(&GCRCTable)[uVar3 >> 0x18 ^ *puVar1 & 0xff];
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 << 8 ^ (uint)(&GCRCTable)[(uVar3 >> 0x10 ^ (uint)*puVar1) >> 8];
    } while (iVar4 < iVar2);
  }
  return ~uVar3;
}


// ==== 10102167 UObject::execExp

/* public: void __thiscall UObject::execExp(struct FFrame &,void * const) */

void __thiscall UObject::execExp(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2167  2214  ?execExp@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appExp((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1010216c FClassNetCache::FClassNetCache

/* public: __thiscall FClassNetCache::FClassNetCache(void) */

FClassNetCache * __thiscall FClassNetCache::FClassNetCache(FClassNetCache *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x216c  29  ??0FClassNetCache@@QAE@XZ */
  puStack_8 = &LAB_101ba956;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  uStack_4 = 3;
  thunk_FUN_10137ff0();
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102171 FBitWriter::FBitWriter

/* public: __thiscall FBitWriter::FBitWriter(struct FBitWriter const &) */

FBitWriter * __thiscall FBitWriter::FBitWriter(FBitWriter *this,FBitWriter *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2171  16  ??0FBitWriter@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8013;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_101186c0(param_1 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102176 UNameProperty::UNameProperty

/* public: __thiscall UNameProperty::UNameProperty(void) */

UNameProperty * __thiscall UNameProperty::UNameProperty(UNameProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2176  246  ??0UNameProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102185 UFixedArrayProperty::Link

/* public: virtual void __thiscall UFixedArrayProperty::Link(class FArchive &,class UProperty *) */

void __thiscall
UFixedArrayProperty::Link(UFixedArrayProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2185  1556  ?Link@UFixedArrayProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be0e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 0x78));
  (**(code **)(**(int **)(this + 0x78) + 0x80))(param_1,0);
  *(int *)(this + 0x44) = *(int *)(*(int *)(this + 0x78) + 0x44) * *(int *)(this + 0x7c);
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  if ((*(uint *)(this + 0x48) & 0x1000) == 0) {
    *(uint *)(this + 0x48) =
         *(uint *)(*(int *)(this + 0x78) + 0x48) & 0x400000 | *(uint *)(this + 0x48);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010218f thunk_FUN_101378b0 thunk -> 101378b0

// ==== 10102194 appStrncpy

/* unsigned short * __cdecl appStrncpy(unsigned short *,unsigned short const *,int) */

ushort * __cdecl appStrncpy(ushort *param_1,ushort *param_2,int param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2194  2115  ?appStrncpy@@YAPAGPAGPBGH@Z */
  puStack_c = &LAB_101b9ba0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  _wcsncpy((wchar_t *)param_1,(wchar_t *)param_2,param_3);
  param_1[param_3 + -1] = 0;
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10102199 UStruct::GetPropertiesSize

/* public: virtual int __thiscall UStruct::GetPropertiesSize(void) */

int __thiscall UStruct::GetPropertiesSize(UStruct *this)

{
                    /* 0x2199  1385  ?GetPropertiesSize@UStruct@@UAEHXZ */
  return *(int *)(this + 0x4c);
}


// ==== 1010219e thunk_FUN_1012b240 thunk -> 1012b240

// ==== 101021a3 thunk_FUN_101385b0 thunk -> 101385b0

// ==== 101021a8 thunk_FUN_10119ab0 thunk -> 10119ab0

// ==== 101021ad FSharedMemory::Create

/* public: int __thiscall FSharedMemory::Create(unsigned short *,int) */

int __thiscall FSharedMemory::Create(FSharedMemory *this,ushort *param_1,int param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  
                    /* 0x21ad  894  ?Create@FSharedMemory@@QAEHPAGH@Z */
  pvVar1 = CreateFileMappingW((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_2,
                              (LPCWSTR)param_1);
  *(HANDLE *)this = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
    DVar2 = GetLastError();
    *(uint *)(this + 0xc) = (uint)(DVar2 == 0xb7);
    pvVar3 = MapViewOfFile(*(HANDLE *)this,0xf001f,0,0,0);
    *(LPVOID *)(this + 4) = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      if (*(int *)(this + 0xc) == 0) {
        appMemset(pvVar3,0,param_2);
      }
      *(undefined4 *)(this + 8) = 1;
      return 1;
    }
  }
  return 0;
}


// ==== 101021b2 thunk_FUN_101286e0 thunk -> 101286e0

// ==== 101021b7 UFunction::PostLoad

/* public: virtual void __thiscall UFunction::PostLoad(void) */

void __thiscall UFunction::PostLoad(UFunction *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x21b7  1688  ?PostLoad@UFunction@@UAEXXZ */
  puStack_c = &LAB_101b9de0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UStruct::PostLoad((UStruct *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101021bc FPlane::operator!=

/* public: int __thiscall FPlane::operator!=(class FPlane const &)const  */

int __thiscall FPlane::operator!=(FPlane *this,FPlane *param_1)

{
                    /* 0x21bc  582  ??9FPlane@@QBEHABV0@@Z */
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
      && (*(float *)(param_1 + 8) == *(float *)(this + 8))) &&
     (*(float *)(param_1 + 0xc) == *(float *)(this + 0xc))) {
    return 0;
  }
  return 1;
}


// ==== 101021c1 FPreferencesInfo::operator=

/* public: class FPreferencesInfo & __thiscall FPreferencesInfo::operator=(class FPreferencesInfo
   const &) */

FPreferencesInfo * __thiscall
FPreferencesInfo::operator=(FPreferencesInfo *this,FPreferencesInfo *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
                    /* 0x21c1  480  ??4FPreferencesInfo@@QAEAAV0@ABV0@@Z */
  if (this != param_1) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = uVar2;
    *(undefined4 *)(this + 4) = uVar2;
    FArray::Realloc((FArray *)this,2);
    if (*(int *)(this + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)this,puVar3,*(int *)(this + 4) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0xc);
  if (pFVar1 != (FArray *)(param_1 + 0xc)) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x14) = uVar2;
    *(undefined4 *)(this + 0x10) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x10) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xc);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x10) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x18);
  if (pFVar1 != (FArray *)(param_1 + 0x18)) {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x20) = uVar2;
    *(undefined4 *)(this + 0x1c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x18);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(this + 0x1c) * 2);
    }
  }
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


// ==== 101021c6 thunk_FUN_10123ca0 thunk -> 10123ca0

// ==== 101021cb FString::operator*

/* public: class FString __thiscall FString::operator*(unsigned short const *)const  */

ushort * __thiscall FString::operator*(FString *this,ushort *param_1)

{
  FString *pFVar1;
  ushort *in_stack_00000008;
  FString aFStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x21cb  615  ??DFString@@QBE?AV0@PBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7089;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFVar1 = (FString *)FString(aFStack_18,this);
  uStack_4 = 1;
  if ((1 < *(int *)(pFVar1 + 4)) &&
     (*(short *)(*(int *)pFVar1 + -4 + *(int *)(pFVar1 + 4) * 2) != 0x5c)) {
    operator+=(pFVar1,(ushort *)&DAT_101ce154);
  }
  pFVar1 = operator+=(pFVar1,in_stack_00000008);
  FString((FString *)param_1,pFVar1);
  uStack_4 = 2;
  uStack_14 = 0;
  uStack_10 = 0;
  FArray::Realloc((FArray *)aFStack_18,2);
  uStack_4 = uStack_4 & 0xffffff00;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_18);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 101021d0 thunk_FUN_1014c630 thunk -> 1014c630

// ==== 101021da thunk_FUN_10108fb0 thunk -> 10108fb0

// ==== 101021df FTerritoryInfoHit::FTerritoryInfoHit

/* public: __thiscall FTerritoryInfoHit::FTerritoryInfoHit(void) */

void __thiscall FTerritoryInfoHit::FTerritoryInfoHit(FTerritoryInfoHit *this)

{
                    /* 0x21df  160  ??0FTerritoryInfoHit@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 101021e4 UFixedArrayProperty::NetSerializeItem

/* public: virtual int __thiscall UFixedArrayProperty::NetSerializeItem(class FArchive &,class
   UPackageMap *,void *)const  */

int __thiscall
UFixedArrayProperty::NetSerializeItem
          (UFixedArrayProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
                    /* 0x21e4  1633
                       ?NetSerializeItem@UFixedArrayProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z
                        */
  return 1;
}


// ==== 101021ee FNotifyHook::NotifyExec

/* public: virtual void __thiscall FNotifyHook::NotifyExec(void *,unsigned short const *) */

void __thiscall FNotifyHook::NotifyExec(FNotifyHook *this,void *param_1,ushort *param_2)

{
                    /* 0x21ee  1645  ?NotifyExec@FNotifyHook@@UAEXPAXPBG@Z */
  return;
}


// ==== 101021f3 appSystemTime64

/* __int64 __cdecl appSystemTime64(void) */

__int64 __cdecl appSystemTime64(void)

{
  BOOL BVar1;
  __int64 _Var2;
  _SYSTEMTIME _Stack_34;
  _FILETIME a_Stack_24 [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x21f3  2121  ?appSystemTime64@@YA_JXZ */
  puStack_c = &LAB_101be3c0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  GetLocalTime(&_Stack_34);
  BVar1 = SystemTimeToFileTime(&_Stack_34,a_Stack_24);
  if (BVar1 == 0) {
    appFailAssert("SystemTimeToFileTime(&SystemTime,&FileTime)",".\\UnVcWin32.cpp",0x304);
  }
  ExceptionList = pvStack_10;
  _Var2._0_4_ = a_Stack_24[0].dwLowDateTime;
  _Var2._4_4_ = a_Stack_24[0].dwHighDateTime;
  return _Var2;
}


// ==== 101021fd UObject::execChr

/* public: void __thiscall UObject::execChr(struct FFrame &,void * const) */

void __thiscall UObject::execChr(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  FArray *unaff_retaddr;
  uint uStack_4;
  
                    /* 0x21fd  2170  ?execChr@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uStack_4 = (uint)&uStack_4 & 0xffff;
  if (*(uint **)unaff_retaddr != &uStack_4) {
    if ((short)&uStack_4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen((ushort *)&uStack_4);
      iVar2 = iVar2 + 1;
    }
    *(int *)(unaff_retaddr + 8) = iVar2;
    *(int *)(unaff_retaddr + 4) = iVar2;
    FArray::Realloc(unaff_retaddr,2);
    if (*(int *)(unaff_retaddr + 4) != 0) {
      _memcpy(*(void **)unaff_retaddr,&uStack_4,*(int *)(unaff_retaddr + 4) * 2);
    }
  }
  return;
}


// ==== 10102202 FName::IsValid

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall FName::IsValid(void) */

int __thiscall FName::IsValid(FName *this)

{
  int iVar1;
  
                    /* 0x2202  1532  ?IsValid@FName@@QAEHXZ */
  iVar1 = *(int *)this;
  if (((-1 < iVar1) && (iVar1 < DAT_10327ae4)) && (*(int *)(_Names + iVar1 * 4) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 10102207 L2ParamStack::L2ParamStack

/* public: __thiscall L2ParamStack::L2ParamStack(int) */

L2ParamStack * __thiscall L2ParamStack::L2ParamStack(L2ParamStack *this,int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2207  174  ??0L2ParamStack@@QAE@H@Z */
  puStack_c = &LAB_101bcb50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)this = 0;
  lVar1 = (ulonglong)(param_1 + 1U) * 4;
  uVar2 = thunk_FUN_1014fad0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)this = uVar2;
  *(uint *)(this + 0xc) = param_1 + 1U;
  Clear(this);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 1010220c appCreateBitmap

/* int __cdecl appCreateBitmap(unsigned short const *,int,int,unsigned long *,class FFileManager
   *,int) */

int __cdecl
appCreateBitmap(ushort *param_1,int param_2,int param_3,ulong *param_4,FFileManager *param_5,
               int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_retaddr;
  int iVar7;
  int iVar8;
  undefined2 uStack_c4;
  int iStack_c2;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ushort auStack_80 [54];
  int iStack_14;
  int iStack_c;
  int iStack_4;
  
                    /* 0x220c  2029  ?appCreateBitmap@@YAHPBGHHPAKPAVFFileManager@@H@Z */
  uStack_c4 = (undefined2)unaff_EBX;
  iStack_c2._0_2_ = (undefined2)((uint)unaff_EBX >> 0x10);
  iVar5 = DAT_10289e60;
  if (DAT_10289e60 == 0) {
    iVar6 = 1;
    do {
      appSprintf(auStack_80,(ushort *)L"%s%05i.bmp",param_1,iVar6);
      iVar1 = (**(code **)(*(int *)param_5 + 0x10))(auStack_80);
      iVar5 = iVar6;
      if (iVar1 < 0) break;
      iVar6 = iVar6 + 1;
      iVar5 = DAT_10289e60;
    } while (iVar6 < 0x10000);
  }
  DAT_10289e60 = iVar5;
  iVar5 = DAT_10289e60;
  if (DAT_10289e60 < 0x10000) {
    while( true ) {
      iVar6 = DAT_10289e60;
      DAT_10289e60 = DAT_10289e60 + 1;
      appSprintf(auStack_80,(ushort *)L"%s%05i.bmp",param_1,iVar6);
      if (param_6 != 0) {
        iVar6 = appStrlen(param_1);
        appStrncpy(auStack_80,param_1,iVar6 + 2);
      }
      iVar6 = (**(code **)(*(int *)param_5 + 0x10))(auStack_80);
      if (iVar6 < 0) break;
      iVar5 = iVar5 + 1;
      if (0xffff < iVar5) {
        return 1;
      }
    }
    piVar2 = (int *)(**(code **)(*(int *)param_5 + 0xc))(auStack_80,0,GNull);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iStack_c2 = iStack_4 * unaff_retaddr * 3 + 0x36;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_c4 = 0x4d42;
    uStack_ba = 0x36;
    uStack_b8 = 0;
    (**(code **)(*piVar2 + 4))(&uStack_c4,0xe);
    uStack_ac = 0;
    iStack_a8 = iStack_4 * unaff_retaddr * 3;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_bc = 0x28;
    uStack_ba = 0;
    uStack_b8 = (undefined2)iStack_4;
    uStack_b6 = (undefined2)((uint)iStack_4 >> 0x10);
    uStack_b0 = 1;
    uStack_ae = 0x18;
    (**(code **)(*piVar2 + 4))(&uStack_bc,0x28);
    iVar5 = unaff_retaddr + -1;
    if (-1 < iVar5) {
      iVar1 = iStack_14 * -4;
      iVar6 = iStack_c + iVar5 * iStack_14 * 4;
      iVar4 = iStack_14;
      iVar8 = iVar1;
      do {
        iVar3 = iVar4;
        iVar7 = iVar6;
        if (0 < iVar4) {
          do {
            iVar1 = iVar8;
            (**(code **)(*piVar2 + 4))(iVar6,3);
            iVar6 = iVar6 + 4;
            iVar3 = iVar3 + -1;
            iVar4 = iStack_14;
            iVar8 = iVar1;
          } while (iVar3 != 0);
        }
        iVar5 = iVar5 + -1;
        iVar6 = iVar7 + iVar1;
      } while (-1 < iVar5);
    }
    (**(code **)*piVar2)(1);
  }
  return 1;
}


// ==== 10102211 UParamStack::StaticClass

/* public: static class UClass * __cdecl UParamStack::StaticClass(void) */

UClass * __cdecl UParamStack::StaticClass(void)

{
                    /* 0x2211  1914  ?StaticClass@UParamStack@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10102216 FString::FString

/* public: __thiscall FString::FString(void) */

void __thiscall FString::FString(FString *this)

{
                    /* 0x2216  154  ??0FString@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 1010221b FRotator::operator+

/* public: class FRotator __thiscall FRotator::operator+(class FRotator const &)const  */

void __thiscall FRotator::operator+(FRotator *this,FRotator *param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
                    /* 0x221b  640  ??HFRotator@@QBE?AV0@ABV0@@Z */
  *(int *)param_1 = *in_stack_00000008 + *(int *)this;
  iVar1 = in_stack_00000008[2];
  iVar2 = *(int *)(this + 8);
  *(int *)(param_1 + 4) = in_stack_00000008[1] + *(int *)(this + 4);
  *(int *)(param_1 + 8) = iVar1 + iVar2;
  return;
}


// ==== 10102225 FClassNetCache::FClassNetCache

/* public: __thiscall FClassNetCache::FClassNetCache(class FClassNetCache const &) */

FClassNetCache * __thiscall
FClassNetCache::FClassNetCache(FClassNetCache *this,FClassNetCache *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2225  27  ??0FClassNetCache@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8ec6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10118a50(param_1);
  uStack_4 = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10118b30(param_1 + 0x1c);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  thunk_FUN_10123d50(param_1 + 0x28);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010222a FCoords::operator*=

/* public: class FCoords & __thiscall FCoords::operator*=(class FCoords const &) */

FCoords * __thiscall FCoords::operator*=(FCoords *this,FCoords *param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x222a  659  ??XFCoords@@QAEAAV0@ABV0@@Z */
  thunk_FUN_1010f510(param_1,this,&uStack_c);
  *(undefined4 *)this = uStack_c;
  *(undefined4 *)(this + 4) = uStack_8;
  *(undefined4 *)(this + 8) = uStack_4;
  thunk_FUN_1010f5b0(param_1,this + 0xc,&uStack_c);
  *(undefined4 *)(this + 0xc) = uStack_c;
  *(undefined4 *)(this + 0x10) = uStack_8;
  *(undefined4 *)(this + 0x14) = uStack_4;
  thunk_FUN_1010f5b0(param_1,this + 0x18,&uStack_c);
  *(undefined4 *)(this + 0x18) = uStack_c;
  *(undefined4 *)(this + 0x1c) = uStack_8;
  *(undefined4 *)(this + 0x20) = uStack_4;
  thunk_FUN_1010f5b0(param_1,this + 0x24,&uStack_c);
  *(undefined4 *)(this + 0x24) = uStack_c;
  *(undefined4 *)(this + 0x28) = uStack_8;
  *(undefined4 *)(this + 0x2c) = uStack_4;
  return this;
}


// ==== 1010222f UObject::execIsA

/* public: void __thiscall UObject::execIsA(struct FFrame &,void * const) */

void __thiscall UObject::execIsA(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_EDI;
  uint *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x222f  2277  ?execIsA@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  for (iVar2 = *(int *)(this + 0x24); (iVar2 != 0 && (*(int *)(iVar2 + 0x20) != unaff_EDI));
      iVar2 = *(int *)(iVar2 + 0x34)) {
  }
  *unaff_retaddr = (uint)(iVar2 != 0);
  return;
}


// ==== 10102234 UObject::Rename

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UObject::Rename(unsigned short const *,class UObject *) */

void __thiscall UObject::Rename(UObject *this,ushort *param_1,UObject *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject aUStack_20 [4];
  UObject *pUStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2234  1767  ?Rename@UObject@@UAEXPBGPAV1@@Z */
  pUVar5 = param_2;
  puStack_c = &LAB_101bd9e0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  pUStack_1c = this;
  if (param_1 == (ushort *)0x0) {
    pUVar4 = (UClass *)param_2;
    if (param_2 == (UObject *)0x0) {
      pUVar4 = *(UClass **)(this + 0x18);
    }
    ExceptionList = &pvStack_10;
    puVar2 = (undefined4 *)MakeUniqueObjectName(aUStack_20,pUVar4);
  }
  else {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffd0;
    puVar2 = (undefined4 *)FName::FName((FName *)&param_1,param_1,1);
    pUVar5 = param_2;
  }
  uVar1 = *puVar2;
  if (*(int *)(this + 0x18) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(this + 0x18) + 4);
  }
  UnhashObject(this,iVar3);
  FOutputDevice::Logf((FOutputDevice *)GNull,(ushort *)GNull);
  *(undefined4 *)(this + 0x20) = uVar1;
  if (pUVar5 != (UObject *)0x0) {
    *(UObject **)(this + 0x18) = pUVar5;
  }
  HashObject(this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102239 thunk_FUN_10127170 thunk -> 10127170

// ==== 1010223e FRangeVector::GridSnap

/* public: class FRangeVector __thiscall FRangeVector::GridSnap(class FRangeVector const &) */

void __thiscall FRangeVector::GridSnap(FRangeVector *this,FRangeVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  undefined4 *in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x223e  1421  ?GridSnap@FRangeVector@@QAE?AV1@ABV1@@Z */
  fVar5 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 0x10),in_stack_00000008[4]);
  fVar1 = (float)fVar5;
  fVar5 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 0x14),in_stack_00000008[5]);
  fVar2 = (float)fVar5;
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar5 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 8),in_stack_00000008[2]);
  fVar1 = (float)fVar5;
  fVar5 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 0xc),in_stack_00000008[3]);
  fVar3 = (float)fVar5;
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar5 = (float10)thunk_FUN_1010c390(*(undefined4 *)this,*in_stack_00000008);
  fVar1 = (float)fVar5;
  fVar5 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 4),in_stack_00000008[1]);
  fVar4 = (float)fVar5;
  fStack_18 = fVar4;
  if (fVar1 <= fVar4) {
    fStack_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *(float *)param_1 = fStack_18;
  *(float *)(param_1 + 4) = fVar4;
  *(float *)(param_1 + 8) = fStack_10;
  *(float *)(param_1 + 0xc) = fVar3;
  *(float *)(param_1 + 0x10) = fStack_8;
  *(float *)(param_1 + 0x14) = fVar2;
  return;
}


// ==== 10102243 FArray::FArray

/* public: __thiscall FArray::FArray(void) */

void __thiscall FArray::FArray(FArray *this)

{
                    /* 0x2243  13  ??0FArray@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10102248 UStruct::SerializeExpr

/* public: virtual enum EExprToken __thiscall UStruct::SerializeExpr(int &,class FArchive &) */

EExprToken __thiscall UStruct::SerializeExpr(UStruct *this,int *param_1,FArchive *param_2)

{
  FArchive *pFVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2248  1833  ?SerializeExpr@UStruct@@UAE?AW4EExprToken@@AAHAAVFArchive@@@Z
                        */
  pFVar1 = param_2;
  puStack_c = &LAB_101b9f50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_101307e0(param_2,*param_1 + *(int *)(this + 0x54));
  *param_1 = *param_1 + 1;
  iVar3 = *(int *)(this + 0x54);
  iVar2 = *param_1 + iVar3;
  this_00 = (FOutputDevice *)(uint)*(byte *)(iVar2 + -1);
  if ((FOutputDevice *)0x6f < this_00) {
    do {
      iVar3 = (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    } while (iVar3 != 0x16);
    goto LAB_10131d28;
  }
  if ((FOutputDevice *)0x5f < this_00) {
    thunk_FUN_101307e0(param_2,iVar2);
    *param_1 = *param_1 + 1;
    do {
      iVar3 = (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    } while (iVar3 != 0x16);
    if (*(int *)(this + 0x58) <= *param_1) {
      ExceptionList = pvStack_10;
      return (EExprToken)this_00;
    }
    uVar4 = (**(code **)(*(int *)param_2 + 0x28))();
    goto LAB_10131d3c;
  }
  switch(this_00) {
  case (FOutputDevice *)0x0:
  case (FOutputDevice *)0x1:
  case (FOutputDevice *)0x2:
  case (FOutputDevice *)0x29:
    thunk_FUN_10130f10(param_2,iVar2);
    *param_1 = *param_1 + 4;
    break;
  default:
    FOutputDevice::Logf(this_00,(ushort *)GError);
    break;
  case (FOutputDevice *)0x4:
  case (FOutputDevice *)0xd:
  case (FOutputDevice *)0xe:
  case (FOutputDevice *)0x37:
    goto switchD_10131c5c_caseD_4;
  case (FOutputDevice *)0x5:
    thunk_FUN_101307e0(param_2,iVar2);
    goto LAB_10131e2e;
  case (FOutputDevice *)0x7:
    thunk_FUN_10130800(param_2,iVar2);
    *param_1 = *param_1 + 2;
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x8:
  case (FOutputDevice *)0xb:
  case (FOutputDevice *)0x16:
  case (FOutputDevice *)0x17:
  case (FOutputDevice *)0x25:
  case (FOutputDevice *)0x26:
  case (FOutputDevice *)0x27:
  case (FOutputDevice *)0x28:
  case (FOutputDevice *)0x2a:
  case (FOutputDevice *)0x2d:
  case (FOutputDevice *)0x30:
  case (FOutputDevice *)0x31:
    break;
  case (FOutputDevice *)0x9:
  case (FOutputDevice *)0x18:
    thunk_FUN_10130800(param_2,iVar2);
    *param_1 = *param_1 + 2;
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0xa:
    thunk_FUN_10130800(param_2,iVar2);
    *param_1 = *param_1 + 2;
    if (*(short *)(*param_1 + -2 + *(int *)(this + 0x54)) != -1) {
      (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    }
    break;
  case (FOutputDevice *)0xc:
    if ((*param_1 & 3U) != 0) {
      appFailAssert("(iCode&3)==0",".\\UnClass.cpp",0x5c4);
    }
    do {
      iVar3 = *param_1;
      iVar2 = *(int *)(this + 0x54);
      operator<<(param_2,(FLabelEntry *)(iVar3 + iVar2));
      *param_1 = *param_1 + 8;
    } while (*(int *)(iVar3 + iVar2) != 0);
    break;
  case (FOutputDevice *)0xf:
  case (FOutputDevice *)0x14:
  case (FOutputDevice *)0x45:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x11:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
  case (FOutputDevice *)0x40:
  case (FOutputDevice *)0x41:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
  case (FOutputDevice *)0x10:
  case (FOutputDevice *)0x1a:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x12:
  case (FOutputDevice *)0x19:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    thunk_FUN_10130800(param_2,*param_1 + *(int *)(this + 0x54));
    *param_1 = *param_1 + 2;
    thunk_FUN_101307e0(param_2,*(int *)(this + 0x54) + *param_1);
LAB_10131e2e:
    *param_1 = *param_1 + 1;
switchD_10131c5c_caseD_4:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x13:
  case (FOutputDevice *)0x2e:
    thunk_FUN_1012a9f0(param_2,iVar2);
    *param_1 = *param_1 + 4;
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x1b:
  case (FOutputDevice *)0x38:
    (**(code **)(*(int *)param_2 + 0x1c))(iVar2);
    *param_1 = *param_1 + 4;
    do {
      iVar3 = (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    } while (iVar3 != 0x16);
    goto LAB_10131d28;
  case (FOutputDevice *)0x1c:
    thunk_FUN_10130ef0(param_2,iVar2);
    *param_1 = *param_1 + 4;
    do {
      iVar3 = (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    } while (iVar3 != 0x16);
LAB_10131d28:
    if (*param_1 < *(int *)(this + 0x58)) {
      uVar4 = (**(code **)(*(int *)param_2 + 0x28))();
LAB_10131d3c:
      iVar3 = *param_1;
      thunk_FUN_101307e0(param_2,*(int *)(this + 0x54) + iVar3);
      *param_1 = *param_1 + 1;
      param_2 = (FArchive *)0xffffffff;
      if (*(char *)(*param_1 + *(int *)(this + 0x54) + -1) == 'B') {
        thunk_FUN_10130820(pFVar1,*param_1 + *(int *)(this + 0x54));
        *param_1 = *param_1 + 4;
        param_2 = *(FArchive **)(*param_1 + -4 + *(int *)(this + 0x54));
      }
      *param_1 = iVar3;
      (**(code **)(*(int *)pFVar1 + 0x3c))(uVar4);
      if (param_2 == (FArchive *)0x64) {
        (**(code **)(*(int *)this + 0x90))(param_1,pFVar1);
      }
    }
    break;
  case (FOutputDevice *)0x1d:
    thunk_FUN_10130820(param_2,iVar2);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x1e:
    thunk_FUN_10130840(param_2,iVar2);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x1f:
    do {
      thunk_FUN_101307e0(param_2,iVar2);
      *param_1 = *param_1 + 1;
      iVar2 = *param_1 + *(int *)(this + 0x54);
    } while (*(char *)(iVar2 + -1) != '\0');
    break;
  case (FOutputDevice *)0x20:
    (**(code **)(*(int *)param_2 + 0x18))(iVar2);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x21:
  case (FOutputDevice *)0x44:
    (**(code **)(*(int *)param_2 + 0x1c))(iVar2);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x22:
    thunk_FUN_10130820(param_2,iVar2);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x23:
    thunk_FUN_10130840(param_2,iVar2);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130840(param_2,*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130840(param_2,*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x24:
  case (FOutputDevice *)0x2c:
    thunk_FUN_101307e0(param_2,iVar2);
    *param_1 = *param_1 + 1;
    break;
  case (FOutputDevice *)0x2f:
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    iVar2 = *param_1 + *(int *)(this + 0x54);
  case (FOutputDevice *)0x6:
    thunk_FUN_10130800(param_2,iVar2);
    *param_1 = *param_1 + 2;
    break;
  case (FOutputDevice *)0x32:
  case (FOutputDevice *)0x33:
    thunk_FUN_10130ef0(param_2,iVar2);
    *param_1 = *param_1 + 4;
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x34:
    do {
      thunk_FUN_10130800(param_2,*param_1 + iVar3);
      *param_1 = *param_1 + 2;
      iVar3 = *(int *)(this + 0x54);
    } while (*(char *)(*param_1 + -1 + iVar3) != '\0');
    break;
  case (FOutputDevice *)0x36:
    thunk_FUN_10130f10(param_2,iVar2);
    *param_1 = *param_1 + 4;
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x39:
    thunk_FUN_101307e0(param_2,iVar2);
    *param_1 = *param_1 + 1;
    (**(code **)(*(int *)this + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x42:
    thunk_FUN_10130820(param_2,iVar2);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
    do {
      thunk_FUN_101307e0(param_2,*param_1 + *(int *)(this + 0x54));
      *param_1 = *param_1 + 1;
    } while (*(char *)(*param_1 + -1 + *(int *)(this + 0x54)) != '\0');
    break;
  case (FOutputDevice *)0x43:
    thunk_FUN_10130f10(param_2,iVar2);
    *param_1 = *param_1 + 4;
    (**(code **)(*(int *)param_2 + 0x1c))(*(int *)(this + 0x54) + *param_1);
    *param_1 = *param_1 + 4;
  }
  ExceptionList = pvStack_10;
  return (EExprToken)this_00;
}


// ==== 10102252 FPosition::operator=

/* public: class FPosition & __thiscall FPosition::operator=(class FPosition const &) */

FPosition * __thiscall FPosition::operator=(FPosition *this,FPosition *param_1)

{
  int iVar1;
  FPosition *pFVar2;
  
                    /* 0x2252  479  ??4FPosition@@QAEAAV0@ABV0@@Z */
  pFVar2 = this;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10102257 FArray::Empty

/* public: void __thiscall FArray::Empty(int,int) */

void __thiscall FArray::Empty(FArray *this,int param_1,int param_2)

{
                    /* 0x2257  944  ?Empty@FArray@@QAEXHH@Z */
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 8) = param_2;
  Realloc(this,param_1);
  return;
}


// ==== 10102261 ParseUBOOL

/* int __cdecl ParseUBOOL(unsigned short const *,unsigned short const *,int &) */

int __cdecl ParseUBOOL(ushort *param_1,ushort *param_2,int *param_3)

{
  int iVar1;
  ushort auStack_3c [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2261  1677  ?ParseUBOOL@@YAHPBG0AAH@Z */
  puStack_c = &LAB_101bc090;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = Parse(param_1,param_2,auStack_3c,0x10);
  if (iVar1 == 0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar1 = appStricmp(auStack_3c,(ushort *)&DAT_101d62a0);
  if (iVar1 != 0) {
    iVar1 = appStricmp(auStack_3c,(ushort *)L"True");
    if (iVar1 != 0) {
      iVar1 = appStricmp(auStack_3c,(ushort *)GTrue);
      if (iVar1 != 0) {
        iVar1 = appStricmp(auStack_3c,(ushort *)&DAT_101d62b4);
        if (iVar1 != 0) {
          iVar1 = 0;
          goto LAB_1015369f;
        }
      }
    }
  }
  iVar1 = 1;
LAB_1015369f:
  *param_3 = iVar1;
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10102266 FArchiveDummySave::operator=

/* public: class FArchiveDummySave & __thiscall FArchiveDummySave::operator=(class FArchiveDummySave
   const &) */

FArchiveDummySave * __thiscall
FArchiveDummySave::operator=(FArchiveDummySave *this,FArchiveDummySave *param_1)

{
                    /* 0x2266  429  ??4FArchiveDummySave@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}


// ==== 1010226b UObject::execJumpIfNot

/* public: void __thiscall UObject::execJumpIfNot(struct FFrame &,void * const) */

void __thiscall UObject::execJumpIfNot(UObject *this,FFrame *param_1,void *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  FOutputDevice *this_00;
  undefined4 uStack0000000c;
  wchar_t *pwVar5;
  
                    /* 0x226b  2281  ?execJumpIfNot@UObject@@QAEXAAUFFrame@@QAX@Z */
  DAT_10283778 = DAT_10283778 + 1;
  if (1000000 < DAT_10283778) {
    pwVar5 = L"norunaway";
    puVar3 = appCmdLine();
    iVar4 = ParseParam(puVar3,(ushort *)pwVar5);
    if (iVar4 == 0) {
      FOutputDevice::Logf(this_00,(EName)param_1,(ushort *)0x2f9);
    }
    DAT_10283778 = 0;
  }
  puVar3 = *(ushort **)(param_1 + 0xc);
  uVar1 = *puVar3;
  *(ushort **)(param_1 + 0xc) = puVar3 + 1;
  uStack0000000c = 0;
  uVar2 = puVar3[1];
  *(int *)(param_1 + 0xc) = (int)puVar3 + 3;
  (*(code *)(&GNatives)[(byte)uVar2])(param_1,&stack0x0000000c);
  if (param_1 == (FFrame *)0x0) {
    iRam0000000c = *(int *)(iRam00000004 + 0x54) + (uint)uVar1;
  }
  return;
}


// ==== 10102270 UObject::execBoolVariable

/* public: void __thiscall UObject::execBoolVariable(struct FFrame &,void * const) */

void __thiscall UObject::execBoolVariable(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  byte *pbVar3;
  undefined4 *unaff_retaddr;
  
                    /* 0x2270  2162  ?execBoolVariable@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  pbVar3 = *(byte **)(param_1 + 0xc) + 1;
  *(byte **)(param_1 + 0xc) = pbVar3;
  pUVar2 = *(UProperty **)pbVar3;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  GProperty = pUVar2;
  GPropObject = this;
  if (unaff_retaddr != (undefined4 *)0x0) {
    if ((GPropAddr != (uchar *)0x0) && ((*(uint *)GPropAddr & *(uint *)(pUVar2 + 0x78)) != 0)) {
      *unaff_retaddr = 1;
      return;
    }
    *unaff_retaddr = 0;
  }
  return;
}


// ==== 10102275 FVector::FVector

/* public: __thiscall FVector::FVector(float,float,float) */

void __thiscall FVector::FVector(FVector *this,float param_1,float param_2,float param_3)

{
                    /* 0x2275  167  ??0FVector@@QAE@MMM@Z */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  return;
}


// ==== 1010227a thunk_FUN_10128110 thunk -> 10128110

// ==== 1010227f UObject::execDot_VectorVector

/* public: void __thiscall UObject::execDot_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execDot_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_18;
  float afStack_14 [3];
  float *pfStack_8;
  
                    /* 0x227f  2196  ?execDot_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = (float)&fStack_18 * afStack_14[0] +
               unaff_ESI * (float)afStack_14 + (float)param_1 * fStack_18;
  return;
}


// ==== 10102284 FVector::Rotation

/* public: class FRotator __thiscall FVector::Rotation(void) */

undefined4 * __thiscall FVector::Rotation(FVector *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 *in_stack_00000004;
  
                    /* 0x2284  1779  ?Rotation@FVector@@QAE?AVFRotator@@XZ */
  appAtan2((double)*(float *)(this + 4),(double)*(float *)this);
  uVar3 = FUN_1017b700();
  fVar1 = *(float *)(this + 4);
  fVar2 = *(float *)this;
  in_stack_00000004[1] = uVar3;
  dVar4 = appSqrt((double)(fVar2 * fVar2 + fVar1 * fVar1));
  appAtan2((double)*(float *)(this + 8),dVar4);
  uVar3 = FUN_1017b700();
  *in_stack_00000004 = uVar3;
  in_stack_00000004[2] = 0;
  return in_stack_00000004;
}


// ==== 10102289 UBoolProperty::operator=

/* public: class UBoolProperty & __thiscall UBoolProperty::operator=(class UBoolProperty const &) */

UBoolProperty * __thiscall UBoolProperty::operator=(UBoolProperty *this,UBoolProperty *param_1)

{
                    /* 0x2289  512  ??4UBoolProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 1010228e UObject::execMultiply_FloatVector

/* public: void __thiscall UObject::execMultiply_FloatVector(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_FloatVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [3];
  float *pfStack_8;
  
                    /* 0x228e  2315  ?execMultiply_FloatVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  fStack_1c = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_1c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = (float)afStack_14 * fStack_1c;
  pfStack_8[1] = fStack_18 * (float)afStack_14;
  pfStack_8[2] = (float)afStack_14 * afStack_14[0];
  return;
}


// ==== 10102293 FBitReader::SetOverflowed

/* public: void __thiscall FBitReader::SetOverflowed(void) */

void __thiscall FBitReader::SetOverflowed(FBitReader *this)

{
                    /* 0x2293  1864  ?SetOverflowed@FBitReader@@QAEXXZ */
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}


// ==== 10102298 FFrame::ReadWord

/* public: int __thiscall FFrame::ReadWord(void) */

int __thiscall FFrame::ReadWord(FFrame *this)

{
  ushort uVar1;
  
                    /* 0x2298  1753  ?ReadWord@FFrame@@QAEHXZ */
  uVar1 = **(ushort **)(this + 0xc);
  *(ushort **)(this + 0xc) = *(ushort **)(this + 0xc) + 1;
  return (uint)uVar1;
}


// ==== 1010229d thunk_FUN_10130af0 thunk -> 10130af0

// ==== 101022a7 ULinkerLoad::LoadObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ULinkerLoad::LoadObject(void) */

void __thiscall ULinkerLoad::LoadObject(ULinkerLoad *this)

{
  FString *this_00;
  ULinkerLoad *pUVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  FOutputDevice *this_01;
  int iVar8;
  FNameEntry aFStack_110 [4];
  uint uStack_10c;
  ushort auStack_104 [82];
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_54;
  int iStack_4c;
  ushort *puStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_30;
  ushort *apuStack_28 [3];
  int iStack_1c;
  ULinkerLoad *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22a7  1574  ?LoadObject@ULinkerLoad@@QAEXXZ */
  puStack_c = &LAB_101bbc90;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffee4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar8 = 0; iStack_3c = iVar8, iVar8 < DAT_103308a4; iVar8 = iVar8 + 1) {
    iVar2 = *(int *)(this + 0x34);
    pUVar1 = UObject::GetLoader(iVar8);
    if (*(int *)(pUVar1 + 0x34) == iVar2) {
      iVar2 = *(int *)(_Names + *(int *)(iVar2 + 0x20) * 4) + 0xc;
      puVar3 = LocalizeError((ushort *)L"LinkerExists",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar3,iVar2);
    }
  }
  iVar8 = *(int *)GWarn;
  this_00 = (FString *)(this + 0xa0);
  puVar3 = FString::operator*(this_00);
  puVar4 = LocalizeProgress((ushort *)L"Loading",(ushort *)L"Core",(ushort *)0x0);
  (**(code **)(iVar8 + 0x18))(GWarn,0,0,puVar4,puVar3);
  *(undefined4 *)(this + 0xc4) = 0x7b;
  *(undefined4 *)(this + 0xcc) = 0x1e;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0xd0) = 1;
  *(int *)(this + 0xe0) = GIsEditor;
  *(undefined4 *)(this + 0xe4) = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  uStack_8 = 3;
  thunk_FUN_1014b850(this + 0xc0,this + 0x38);
  *(uint *)(this + 0xc4) = *(uint *)(this + 0x3c) & 0xffff;
  *(uint *)(this + 0xcc) = (int)*(uint *)(this + 0x3c) >> 0x10 & 0xffff;
  uVar5 = *(undefined4 *)(this + 0x34);
  iVar8 = thunk_FUN_101495a0(uVar5);
  if (iVar8 != 0) {
    iVar8 = thunk_FUN_101495a0(uVar5);
    *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(this + 0x40);
  }
  uStack_8 = 5;
  if (*(int *)(this + 0x38) != -0x61d57c3f) {
    FString::operator*(this_00);
    LocalizeError((ushort *)L"BinaryFormat",(ushort *)L"Core",(ushort *)0x0);
    FOutputDevice::Logf(this_01,(ushort *)GWarn);
    apuStack_28[0] = LocalizeError((ushort *)L"Aborted",(ushort *)L"Core",(ushort *)0x0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(apuStack_28);
  }
  uStack_8 = 7;
  if ((*(uint *)(this + 0x3c) & 0xffff) < 0x3c) {
    iVar8 = *(int *)GWarn;
    puVar3 = FString::operator*(this_00);
    puVar4 = LocalizeQuery((ushort *)L"OldVersion",(ushort *)L"Core",(ushort *)0x0);
    iVar8 = (**(code **)(iVar8 + 0xc))(GWarn,puVar4,puVar3);
    if (iVar8 == 0) {
      puStack_40 = LocalizeError((ushort *)L"Aborted",(ushort *)L"Core",(ushort *)0x0);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&puStack_40,&DAT_101f8198);
    }
  }
  uStack_8 = 0;
  thunk_FUN_1011a4d0(*(undefined4 *)(this + 0x54));
  thunk_FUN_1011a5a0(*(undefined4 *)(this + 0x4c));
  thunk_FUN_10114240(*(undefined4 *)(this + 0x44));
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  if (0 < *(int *)(this + 0x44)) {
    (**(code **)(*(int *)(this + 0xc0) + 0x3c))(*(undefined4 *)(this + 0x48));
    iVar8 = 0;
    while (iStack_4c = iVar8, iVar8 < *(int *)(this + 0x44)) {
      ::operator<<((FArchive *)(this + 0xc0),aFStack_110);
      if ((*(uint *)(this + 0xac) & uStack_10c) == 0) {
        iStack_1c = 0;
        thunk_FUN_101493a0(&iStack_1c);
        iVar8 = iVar8 + 1;
      }
      else {
        uVar5 = FName::FName((FName *)&pUStack_18,auStack_104,1);
        thunk_FUN_101493a0(uVar5);
        iVar8 = iVar8 + 1;
      }
    }
  }
  iVar8 = 0;
  uStack_8 = 0xb;
  if (0 < *(int *)(this + 0x54)) {
    (**(code **)(*(int *)(this + 0xc0) + 0x3c))(*(undefined4 *)(this + 0x58));
    for (; iStack_30 = iVar8, iVar8 < *(int *)(this + 0x54); iVar8 = iVar8 + 1) {
      uVar5 = thunk_FUN_10114cb0(0x1c,this + 0x84);
      thunk_FUN_10148720(this + 0xc0,uVar5);
    }
  }
  iVar8 = 0;
  uStack_8 = 0xd;
  if (0 < *(int *)(this + 0x4c)) {
    pUVar1 = this + 0xc0;
    (**(code **)(*(int *)pUVar1 + 0x3c))(*(undefined4 *)(this + 0x50));
    while (iStack_54 = iVar8, iVar8 < *(int *)(this + 0x4c)) {
      iVar2 = thunk_FUN_10114d10(0x24,this + 0x90);
      if (iVar2 == 0) {
        thunk_FUN_10148620(pUVar1,0);
        iVar8 = iVar8 + 1;
      }
      else {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
        thunk_FUN_10148620(pUVar1,iVar2);
        iVar8 = iVar8 + 1;
      }
    }
  }
  iVar8 = 0;
  uStack_8 = 0;
  for (uStack_38 = 0; uStack_38 < 0x100; uStack_38 = uStack_38 + 1) {
    *(undefined4 *)(this + uStack_38 * 4 + 0x100) = 0xffffffff;
  }
  for (; iStack_5c = iVar8, iVar8 < *(int *)(this + 0x94); iVar8 = iVar8 + 1) {
    iVar2 = *(int *)(this + 0x90) + iVar8 * 0x24;
    piVar6 = (int *)GetExportClassPackage(this,(int)&pUStack_18);
    iStack_1c = *piVar6;
    piVar6 = (int *)GetExportClassName(this,(int)auStack_60);
    uVar7 = iStack_1c * 0x1f + *piVar6 * 7 + *(int *)(iVar2 + 0xc) & 0xff;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(this + uVar7 * 4 + 0x100);
    *(int *)(this + uVar7 * 4 + 0x100) = iVar8;
  }
  pUStack_18 = this;
  thunk_FUN_101287a0(&pUStack_18);
  if (((byte)this[0xf8] & 0x80) == 0) {
    Verify(this);
  }
  *(undefined4 *)(this + 0x9c) = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101022ac UObject::execFClamp

/* WARNING: Type propagation algorithm not settling */
/* public: void __thiscall UObject::execFClamp(struct FFrame &,void * const) */

void __thiscall UObject::execFClamp(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FFrame *pFStack_14;
  float *pfStack_10;
  float afStack_8 [2];
  
                    /* 0x22ac  2215  ?execFClamp@UObject@@QAEXAAUFFrame@@QAX@Z */
  pfStack_10 = afStack_8;
  afStack_8[0] = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_14 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  afStack_8[1] = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_8 + 1);
  pFStack_14 = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((float)&pFStack_14 < (float)pFStack_14) {
    *pfStack_10 = (float)pFStack_14;
    return;
  }
  if ((float)&pFStack_14 < (float)pFVar2) {
    *pfStack_10 = (float)&pFStack_14;
    return;
  }
  *pfStack_10 = (float)pFVar2;
  return;
}


// ==== 101022b1 UCommandlet::InternalConstructor

/* public: static void __cdecl UCommandlet::InternalConstructor(void *) */

void __cdecl UCommandlet::InternalConstructor(void *param_1)

{
                    /* 0x22b1  1480  ?InternalConstructor@UCommandlet@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UCommandlet(param_1);
    return;
  }
  return;
}


// ==== 101022bb UFixedArrayProperty::AddCppProperty

/* public: void __thiscall UFixedArrayProperty::AddCppProperty(class UProperty *,int) */

void __thiscall
UFixedArrayProperty::AddCppProperty(UFixedArrayProperty *this,UProperty *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22bb  782  ?AddCppProperty@UFixedArrayProperty@@QAEXPAVUProperty@@H@Z */
  puStack_c = &LAB_101bdf00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x78) != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("!Inner",".\\UnProp.cpp",0x4f1);
  }
  if (param_1 == (UProperty *)0x0) {
    appFailAssert("Property",".\\UnProp.cpp",0x4f2);
  }
  if (param_2 < 1) {
    appFailAssert("InCount>0",".\\UnProp.cpp",0x4f3);
  }
  *(UProperty **)(this + 0x78) = param_1;
  *(int *)(this + 0x7c) = param_2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101022c0 UObject::~UObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual __thiscall UObject::~UObject(void) */

void __thiscall UObject::~UObject(UObject *this)

{
  UObject *pUVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22c0  338  ??1UObject@@UAE@XZ */
  puStack_c = &LAB_101bd2f0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  pUVar1 = this + 4;
  if (((*(int *)pUVar1 != -1) && (GObjInitialized != 0)) && (GIsCriticalError == 0)) {
    iVar2 = IsValid(this);
    if (iVar2 == 0) {
      appFailAssert("IsValid()",".\\UnObj.cpp",0x1e1);
    }
    ConditionalDestroy(this);
    iVar2 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
    if (iVar2 == 0) {
      UnhashObject(this,*(int *)(this + 0x14));
      *(undefined4 *)(_GObjObjects + *(int *)pUVar1 * 4) = 0;
    }
    else {
      if (this != *(UObject **)(_GObjObjects + *(int *)pUVar1 * 4)) {
        if (this == *(UObject **)(_GObjObjectsBuffer + *(int *)(this + 0x30) * 4)) {
          UnhashObjectBuffer(this,*(int *)(this + 0x14));
          *(undefined4 *)(_GObjObjectsBuffer + *(int *)(this + 0x30) * 4) = 0;
        }
        else if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(_GObjObjects,(ushort *)GLog);
        }
        goto LAB_1016406c;
      }
      UnhashObject(this,*(int *)(this + 0x14));
      *(undefined4 *)(_GObjObjects + *(int *)pUVar1 * 4) = 0;
    }
    thunk_FUN_101492e0(pUVar1);
  }
LAB_1016406c:
  if (*(int *)(this + 0xc) != 0) {
    thunk_FUN_101088c0();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101022c5 UBoolProperty::UBoolProperty

/* public: __thiscall UBoolProperty::UBoolProperty(void) */

UBoolProperty * __thiscall UBoolProperty::UBoolProperty(UBoolProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22c5  187  ??0UBoolProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101022ca UObject::execArrayElement

/* public: void __thiscall UObject::execArrayElement(struct FFrame &,void * const) */

void __thiscall UObject::execArrayElement(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  wchar_t *pwVar3;
  int iVar4;
  FOutputDevice *this_00;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22ca  2152  ?execArrayElement@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baa50;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  iStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&iStack_18);
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  GPropObject = this;
  if ((GProperty != (UProperty *)0x0) && (GPropAddr != (uchar *)0x0)) {
    this_00 = *(FOutputDevice **)(GProperty + 0x40);
    if (((int)this_00 <= iStack_18) || (pUVar2 = GProperty, iStack_18 < 0)) {
      pwVar3 = L"Accessed array out of bounds (%i/%i)";
      iVar4 = iStack_18;
      FOutputDevice::Logf(this_00,(ushort *)param_1);
      pUVar2 = GProperty;
      iStack_18 = thunk_FUN_101146b0(iStack_18,0,*(int *)(GProperty + 0x40) + -1,pwVar3,iVar4,
                                     this_00);
    }
    GPropAddr = GPropAddr + *(int *)(pUVar2 + 0x44) * iStack_18;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (param_2 != (void *)0x0) {
      (**(code **)(*(int *)GProperty + 0xa4))(param_2,GPropAddr,0);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101022cf UStructProperty::CopySingleValue

/* public: virtual void __thiscall UStructProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UStructProperty::CopySingleValue(UStructProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  int *piStack_4;
  
                    /* 0x22cf  885  ?CopySingleValue@UStructProperty@@UBEXPAX0PAVUObject@@@Z */
  if (*(int *)(this + 0x78) == 0) {
    piStack_4 = (int *)0x0;
  }
  else {
    piStack_4 = *(int **)(*(int *)(this + 0x78) + 0x48);
  }
  thunk_FUN_10114340();
  while (piStack_4 != (int *)0x0) {
    (**(code **)(*piStack_4 + 0xa8))
              (piStack_4[0x15] + (int)param_1,piStack_4[0x15] + (int)param_2,param_3);
    piStack_4 = (int *)piStack_4[0xe];
    thunk_FUN_10114340();
  }
  return;
}


// ==== 101022d4 UState::StaticClass

/* public: static class UClass * __cdecl UState::StaticClass(void) */

UClass * __cdecl UState::StaticClass(void)

{
                    /* 0x22d4  1916  ?StaticClass@UState@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101022d9 UNameProperty::CopyCompleteValue

/* public: virtual void __thiscall UNameProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UNameProperty::CopyCompleteValue(UNameProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x22d9  870  ?CopyCompleteValue@UNameProperty@@UBEXPAX0PAVUObject@@@Z */
  if (*(int *)(this + 0x40) != 1) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x40)) {
      iVar2 = (int)param_2 - (int)param_1;
      do {
        *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + (int)param_1);
        iVar1 = iVar1 + 1;
        param_1 = (void *)((int)param_1 + 4);
      } while (iVar1 < *(int *)(this + 0x40));
    }
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}


// ==== 101022de FRotator::GridSnap

/* public: class FRotator __thiscall FRotator::GridSnap(class FRotator const &) */

FRotator * __thiscall FRotator::GridSnap(FRotator *this,FRotator *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_stack_00000008;
  
                    /* 0x22de  1422  ?GridSnap@FRotator@@QAE?AV1@ABV1@@Z */
  thunk_FUN_1010c390((float)*(int *)(this + 8),(float)in_stack_00000008[2]);
  uVar1 = FUN_1017b700();
  thunk_FUN_1010c390((float)*(int *)(this + 4),(float)in_stack_00000008[1]);
  uVar2 = FUN_1017b700();
  thunk_FUN_1010c390((float)*(int *)this,(float)*in_stack_00000008);
  uVar3 = FUN_1017b700();
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_1;
}


// ==== 101022e3 thunk_FUN_10108420 thunk -> 10108420

// ==== 101022e8 FPackageInfo::operator=

/* public: class FPackageInfo & __thiscall FPackageInfo::operator=(class FPackageInfo const &) */

FPackageInfo * __thiscall FPackageInfo::operator=(FPackageInfo *this,FPackageInfo *param_1)

{
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x22e8  477  ??4FPackageInfo@@QAEAAV0@ABV0@@Z */
  if (this != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = uVar1;
    *(undefined4 *)(this + 4) = uVar1;
    FArray::Realloc((FArray *)this,2);
    if (*(int *)(this + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)this,_Src,*(int *)(this + 4) * 2);
    }
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 101022ed TArray<unsigned_short>::~TArray<unsigned_short>

/* public: __thiscall TArray<unsigned short>::~TArray<unsigned short>(void) */

void __thiscall TArray<unsigned_short>::~TArray<unsigned_short>(TArray<unsigned_short> *this)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22ed  290  ??1?$TArray@G@@QAE@XZ */
  puStack_8 = &LAB_101b6c98;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  iVar1 = *(int *)(this + 4);
  ExceptionList = &pvStack_c;
  if (iVar1 < 0) {
    ExceptionList = &pvStack_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(this + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove((FArray *)this,0,iVar1,2);
  uStack_4 = 0xffffffff;
  if (*(int *)this != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  ExceptionList = pvStack_c;
  return;
}


// ==== 101022f2 FBox::operator+=

/* public: class FBox & __thiscall FBox::operator+=(class FBox const &) */

FBox * __thiscall FBox::operator+=(FBox *this,FBox *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FBox *pFVar4;
  
                    /* 0x22f2  676  ??YFBox@@QAEAAV0@ABV0@@Z */
  if ((this[0x18] == (FBox)0x0) || (param_1[0x18] == (FBox)0x0)) {
    pFVar4 = this;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pFVar4 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pFVar4 = pFVar4 + 4;
    }
    return this;
  }
  fVar1 = *(float *)param_1;
  if (*(float *)this <= fVar1) {
    fVar1 = *(float *)this;
  }
  *(float *)this = fVar1;
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(this + 4) <= fVar1) {
    fVar1 = *(float *)(this + 4);
  }
  *(float *)(this + 4) = fVar1;
  fVar1 = *(float *)(param_1 + 8);
  if (*(float *)(this + 8) <= fVar1) {
    fVar1 = *(float *)(this + 8);
  }
  *(float *)(this + 8) = fVar1;
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(param_1 + 0xc);
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  *(float *)(this + 0xc) = fVar2;
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(param_1 + 0x10);
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  *(float *)(this + 0x10) = fVar2;
  fVar1 = *(float *)(this + 0x14);
  fVar2 = *(float *)(param_1 + 0x14);
  if ((NAN(fVar2) || NAN(fVar1)) || fVar2 < fVar1 == (fVar2 == fVar1)) {
    *(float *)(this + 0x14) = fVar2;
    return this;
  }
  *(float *)(this + 0x14) = fVar1;
  return this;
}


// ==== 101022f7 FName::FName

/* public: __thiscall FName::FName(enum EName) */

void __thiscall FName::FName(FName *this,EName param_1)

{
                    /* 0x22f7  84  ??0FName@@QAE@W4EName@@@Z */
  *(EName *)this = param_1;
  return;
}


// ==== 101022fc appMsgf

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* int const __cdecl appMsgf(int,unsigned short const *,...) */

int __cdecl appMsgf(int param_1,ushort *param_2,...)

{
  int iVar1;
  WCHAR WStack_2020;
  undefined1 auStack_201e [8198];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22fc  2082  ?appMsgf@@YA?BHHPBGZZ */
  puStack_c = &LAB_101be370;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x10175f03;
  puStack_14 = &stack0xffffdfd4;
  uStack_8 = 0;
  WStack_2020 = L'\0';
  ExceptionList = &pvStack_10;
  _memset(auStack_201e,0,0x1ffe);
  appGetVarArgs((ushort *)&WStack_2020,0x1000,&param_2);
  if (param_1 == 1) {
    iVar1 = MessageBoxW((HWND)0x0,&WStack_2020,L"Message",4);
    ExceptionList = pvStack_10;
    return (uint)(iVar1 == 6);
  }
  if (param_1 != 2) {
    MessageBoxW((HWND)0x0,&WStack_2020,L"Message",0);
    ExceptionList = pvStack_10;
    return 1;
  }
  iVar1 = MessageBoxW((HWND)0x0,&WStack_2020,L"Message",1);
  ExceptionList = pvStack_10;
  return (uint)(iVar1 == 1);
}


// ==== 10102301 UFunction::UFunction

/* protected: __thiscall UFunction::UFunction(void) */

UFunction * __thiscall UFunction::UFunction(UFunction *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2301  225  ??0UFunction@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7708;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102306 FCriticalSection::~FCriticalSection

/* public: __thiscall FCriticalSection::~FCriticalSection(void) */

void __thiscall FCriticalSection::~FCriticalSection(FCriticalSection *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2306  299  ??1FCriticalSection@@QAE@XZ */
  puStack_c = &LAB_101be410;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  DeleteCriticalSection(*(LPCRITICAL_SECTION *)this);
  thunk_FUN_101088c0(*(undefined4 *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102310 UObject::execDynArrayRemove

/* public: void __thiscall UObject::execDynArrayRemove(struct FFrame &,void * const) */

void __thiscall UObject::execDynArrayRemove(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UClass *pUVar2;
  uchar *this_00;
  int iVar3;
  FOutputDevice *pFVar4;
  UProperty *pUVar5;
  int unaff_ESI;
  FOutputDevice *pFVar6;
  int unaff_EDI;
  undefined4 uStack_18;
  FOutputDevice FStack_5;
  undefined4 uStack_4;
  
                    /* 0x2310  2200  ?execDynArrayRemove@UObject@@QAEXAAUFFrame@@QAX@Z */
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  uStack_18 = 0;
  GPropObject = this;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  this_00 = GPropAddr;
  if (GProperty != (UProperty *)0x0) {
    for (pUVar2 = *(UClass **)(GProperty + 0x24); pUVar2 != (UClass *)0x0;
        pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
      pUVar5 = GProperty;
      if (pUVar2 == &UArrayProperty::PrivateStaticClass) goto LAB_10142f4b;
    }
  }
  pUVar5 = (UProperty *)0x0;
LAB_10142f4b:
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  if (this_00 == (uchar *)0x0) {
    return;
  }
  if ((FOutputDevice *)&uStack_4 == (FOutputDevice *)0x0) {
    return;
  }
  if ((int)&uStack_4 < 0) {
    FOutputDevice::Logf((FOutputDevice *)&uStack_4,(ushort *)param_1);
    return;
  }
  if (((-1 < unaff_EDI) && (unaff_EDI < *(int *)(this_00 + 4))) &&
     (iVar3 = unaff_EDI, pFVar4 = (FOutputDevice *)&uStack_4, pUVar5 = (UProperty *)param_1,
     (int)((FOutputDevice *)&uStack_4 + unaff_EDI) <= *(int *)(this_00 + 4))) goto LAB_10143050;
  if ((FOutputDevice *)&uStack_4 == (FOutputDevice *)0x1) {
    FOutputDevice::Logf(*(FOutputDevice **)(this_00 + 4),(ushort *)param_1);
  }
  else {
    FOutputDevice::Logf(&FStack_5 + unaff_EDI,(ushort *)param_1);
  }
  iVar3 = *(int *)(this_00 + 4);
  if (unaff_ESI < 0) {
    iVar3 = 0;
LAB_10143036:
    unaff_ESI = iVar3;
  }
  else if (iVar3 <= unaff_ESI) goto LAB_10143036;
  iVar3 = unaff_ESI;
  pFVar4 = (FOutputDevice *)param_1;
  if (*(int *)(this_00 + 4) < (int)(param_1 + unaff_ESI)) {
    pFVar4 = (FOutputDevice *)(*(int *)(this_00 + 4) - unaff_ESI);
  }
LAB_10143050:
  pFVar6 = pFVar4 + iVar3 + -1;
  if (iVar3 <= (int)pFVar6) {
    do {
      (**(code **)(**(int **)(pUVar5 + 0x78) + 0xac))
                ((*(int **)(pUVar5 + 0x78))[0x11] * (int)pFVar6 + *(int *)this_00);
      pFVar6 = pFVar6 + -1;
      iVar3 = unaff_EDI;
      pFVar4 = (FOutputDevice *)&uStack_4;
    } while (unaff_EDI <= (int)pFVar6);
  }
  FArray::Remove((FArray *)this_00,iVar3,(int)pFVar4,*(int *)(*(int *)(pUVar5 + 0x78) + 0x44));
  return;
}


// ==== 10102315 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,class FCompactIndex &) */

FArchive * __cdecl operator<<(FArchive *param_1,FCompactIndex *param_2)

{
  uint uVar1;
  uint uVar2;
  FOutputDevice *this;
  uint uVar3;
  byte bStack_19;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2315  550  ??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */
  puStack_c = &LAB_101bcb30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffc8;
    thunk_FUN_10130820(param_1,param_2);
    ExceptionList = pvStack_10;
    return param_1;
  }
  uVar1 = *(uint *)param_2;
  uVar3 = uVar1;
  if ((int)uVar1 < 0) {
    uVar3 = -uVar1;
  }
  uVar2 = uVar3;
  if (0x3f < uVar3) {
    uVar2 = (uVar3 & 0x3f) + 0x40;
  }
  bStack_18 = ((-1 < (int)uVar1) - 1U & 0x80) + (char)uVar2;
  ExceptionList = &pvStack_10;
  *(undefined4 *)param_2 = 0;
  thunk_FUN_101307e0(param_1,&bStack_18);
  if ((bStack_18 & 0x40) != 0) {
    bStack_17 = (byte)(uVar3 >> 6);
    if (0x7f < uVar3 >> 6) {
      bStack_17 = (bStack_17 & 0x7f) + 0x80;
    }
    thunk_FUN_101307e0(param_1,&bStack_17);
    if ((char)bStack_17 < '\0') {
      bStack_16 = (byte)(uVar3 >> 0xd);
      if (0x7f < uVar3 >> 0xd) {
        bStack_16 = (bStack_16 & 0x7f) + 0x80;
      }
      thunk_FUN_101307e0(param_1,&bStack_16);
      if ((char)bStack_16 < '\0') {
        bStack_15 = (byte)(uVar3 >> 0x14);
        if (0x7f < uVar3 >> 0x14) {
          bStack_15 = (bStack_15 & 0x7f) + 0x80;
        }
        thunk_FUN_101307e0(param_1,&bStack_15);
        if ((char)bStack_15 < '\0') {
          bStack_19 = (byte)(uVar3 >> 0x1b);
          thunk_FUN_101307e0(param_1,&bStack_19);
          *(uint *)param_2 = (uint)bStack_19;
        }
        *(uint *)param_2 = (bStack_15 & 0x7f) + *(int *)param_2 * 0x80;
      }
      *(uint *)param_2 = (bStack_16 & 0x7f) + *(int *)param_2 * 0x80;
    }
    *(uint *)param_2 = (bStack_17 & 0x7f) + *(int *)param_2 * 0x80;
  }
  this = (FOutputDevice *)((bStack_18 & 0x3f) + *(int *)param_2 * 0x40);
  *(FOutputDevice **)param_2 = this;
  if ((char)bStack_18 < '\0') {
    this = (FOutputDevice *)-(int)this;
    *(FOutputDevice **)param_2 = this;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(uint *)param_2 != uVar1) {
      FOutputDevice::Logf(this,(ushort *)GError);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1010231a UObject::UObject

/* public: __thiscall UObject::UObject(enum EInPlaceConstructor,class UClass *,class UObject *,class
   FName,unsigned long) */

UObject * __thiscall
UObject::UObject(UObject *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                undefined4 param_5,undefined4 param_6)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x231a  248
                       ??0UObject@@QAE@W4EInPlaceConstructor@@PAVUClass@@PAV0@VFName@@K@Z */
  puStack_c = &LAB_101bd9c0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  GObjCurCount = GObjCurCount + 1;
  GObjNewCount = GObjNewCount + 1;
  if (GObjPeakCount < GObjCurCount) {
    GObjPeakCount = GObjCurCount;
  }
  StaticAllocateObject(param_2,param_3,param_5,param_6,0,GError,this,0);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 1010231f UObject::execContext

/* public: void __thiscall UObject::execContext(struct FFrame &,void * const) */

void __thiscall UObject::execContext(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x231f  2179  ?execContext@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if (unaff_EDI == 0) {
    FOutputDevice::Logf((FOutputDevice *)0x0,(ushort *)param_1);
    puVar3 = *(ushort **)(param_1 + 0xc);
    uVar2 = *puVar3;
    *(ushort **)(param_1 + 0xc) = puVar3 + 1;
    bVar1 = (byte)puVar3[1];
    *(uint *)(param_1 + 0xc) = (int)puVar3 + uVar2 + 3;
    GPropAddr = (uchar *)0x0;
    GProperty = (UProperty *)0x0;
    GPropObject = (UObject *)0x0;
    if (param_1 != (FFrame *)0x0) {
      uVar5 = bVar1 & 3;
      for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)param_1 = 0;
        param_1 = param_1 + 4;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = (FFrame)0x0;
        param_1 = param_1 + 1;
      }
    }
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 3;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,unaff_retaddr);
  return;
}


// ==== 10102329 thunk_FUN_10124c80 thunk -> 10124c80

// ==== 1010232e UObject::ObjectChecked

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static int __cdecl UObject::ObjectChecked(class UClass *,class UObject *,unsigned short
   const *,unsigned short const *,unsigned long,class UPackageMap *) */

int __cdecl
UObject::ObjectChecked
          (UClass *param_1,UObject *param_2,ushort *param_3,ushort *param_4,ulong param_5,
          UPackageMap *param_6)

{
  UObject *pUVar1;
  UObject *pUVar2;
  ushort *puVar3;
  ULinkerLoad *pUVar4;
  int iVar5;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x232e  1649
                       ?ObjectChecked@UObject@@SAHPAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */
  puStack_c = &LAB_101bdae8;
  pvStack_10 = ExceptionList;
  pUVar4 = (ULinkerLoad *)0x0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("ObjectClass",".\\UnObj.cpp",0xb59);
  }
  if (param_3 == (ushort *)0x0) {
    appFailAssert("InName",".\\UnObj.cpp",0xb5a);
  }
  iStack_18 = 0;
  BeginLoad();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar5 = -1;
  ResolveName(&param_2,&param_3,1,1);
  pUVar2 = param_2;
  do {
    pUVar1 = pUVar2;
    if (pUVar1 == (UObject *)0x0) break;
    pUVar2 = *(UObject **)(pUVar1 + 0x18);
  } while (*(UObject **)(pUVar1 + 0x18) != (UObject *)0x0);
  if ((param_5 & 0x40) == 0) {
    pUVar4 = GetPackageLinker(pUVar1,param_4,param_5 | 0x28,param_6,(FGuid *)0x0);
  }
  puVar3 = param_3;
  if (pUVar4 == (ULinkerLoad *)0x0) {
LAB_1016b9fb:
    if (iVar5 == -1) goto LAB_1016ba00;
    pUVar2 = (UObject *)0x0;
LAB_1016ba26:
    if (pUVar2 != (UObject *)0x0) goto LAB_1016ba79;
  }
  else {
    FName::FName((FName *)&stack0xffffffa4,param_3,1);
    iVar5 = ULinkerLoad::Check(pUVar4,param_1);
    if (iVar5 != -1) {
      iStack_18 = 1;
      goto LAB_1016b9fb;
    }
LAB_1016ba00:
    pUVar2 = StaticFindObject(param_1,param_2,puVar3,0);
    if (pUVar2 != (UObject *)0x0) {
      iStack_18 = 1;
      goto LAB_1016ba26;
    }
  }
  if (iStack_18 == 0) {
    if (param_2 != (UObject *)0x0) {
      GetPathName(param_2,(UObject *)0x0,(ushort *)0x0);
    }
    puVar3 = LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar3);
  }
LAB_1016ba79:
  EndLoad();
  ExceptionList = pvStack_10;
  return iStack_18;
}


// ==== 10102333 FGlobalMath::FGlobalMath

/* public: __thiscall FGlobalMath::FGlobalMath(void) */

FGlobalMath * __thiscall FGlobalMath::FGlobalMath(FGlobalMath *this)

{
  FGlobalMath *pFVar1;
  double dVar2;
  int iStack_74;
  
                    /* 0x2333  60  ??0FGlobalMath@@QAE@XZ */
  *(undefined4 *)this = 0xc6ff7800;
  *(undefined4 *)(this + 4) = 0xc6ff7800;
  *(undefined4 *)(this + 8) = 0xc6ff7800;
  *(undefined4 *)(this + 0xc) = 0x46ff7800;
  *(undefined4 *)(this + 0x10) = 0x46ff7800;
  *(undefined4 *)(this + 0x14) = 0x46ff7800;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  this[0x58] = (FGlobalMath)0x5;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0x3f800000;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0xbf800000;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  iStack_74 = 0;
  pFVar1 = this + 0x8c;
  do {
    dVar2 = appSin(((double)iStack_74 + (double)iStack_74) * 3.141592653589793 * 6.103515625e-05);
    iStack_74 = iStack_74 + 1;
    *(float *)pFVar1 = (float)dVar2;
    pFVar1 = pFVar1 + 4;
  } while (iStack_74 < 0x4000);
  iStack_74 = 0;
  pFVar1 = this + 0x1008c;
  do {
    dVar2 = appSqrt((double)iStack_74 * 6.103515625e-05);
    iStack_74 = iStack_74 + 1;
    *(float *)pFVar1 = (float)dVar2;
    pFVar1 = pFVar1 + 4;
  } while (iStack_74 < 0x4000);
  return this;
}


// ==== 10102338 UByteProperty::UByteProperty

/* public: __thiscall UByteProperty::UByteProperty(class UByteProperty const &) */

UByteProperty * __thiscall UByteProperty::UByteProperty(UByteProperty *this,UByteProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2338  188  ??0UByteProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b79b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010233d UObject::execSubtractSubtract_Int

/* public: void __thiscall UObject::execSubtractSubtract_Int(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractSubtract_Int(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x233d  2387  ?execSubtractSubtract_Int@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  piVar2 = (int *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    piVar2 = (int *)&stack0xfffffff4;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = *piVar2;
  *piVar2 = *piVar2 + -1;
  return;
}


// ==== 10102342 UConst::operator_new

/* public: static void * __cdecl UConst::operator new(unsigned int,enum EInternal *) */

void * __cdecl UConst::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2342  366  ??2UConst@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102347 thunk_FUN_1010af80 thunk -> 1010af80

// ==== 1010234c thunk_FUN_1011a6a0 thunk -> 1011a6a0

// ==== 10102351 thunk_FUN_1015a7e0 thunk -> 1015a7e0

// ==== 1010235b UObject::L2GetLoader

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class ULinkerLoad * __thiscall UObject::L2GetLoader(int) */

ULinkerLoad * __thiscall UObject::L2GetLoader(UObject *this,int param_1)

{
                    /* 0x235b  1541  ?L2GetLoader@UObject@@QAEPAVULinkerLoad@@H@Z */
  return *(ULinkerLoad **)(_GObjLoaders + param_1 * 4);
}


// ==== 10102360 UObject::execAdd_VectorVector

/* public: void __thiscall UObject::execAdd_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execAdd_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [3];
  float *pfStack_8;
  
                    /* 0x2360  2149  ?execAdd_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_14);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = fStack_1c + unaff_ESI;
  pfStack_8[1] = fStack_24 + fStack_18;
  pfStack_8[2] = fStack_20 + afStack_14[0];
  return;
}


// ==== 10102365 FBitReader::SerializeInt

/* public: virtual void __thiscall FBitReader::SerializeInt(unsigned long &,unsigned long) */

void __thiscall FBitReader::SerializeInt(FBitReader *this,ulong *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x2365  1835  ?SerializeInt@FBitReader@@UAEXAAKK@Z */
  uVar2 = 1;
  *param_1 = 0;
  if (1 < param_2) {
    while (uVar2 != 0) {
      uVar1 = *(uint *)(this + 0x48);
      if (*(int *)(this + 0x44) <= (int)uVar1) {
        *(undefined4 *)(this + 0x2c) = 1;
        return;
      }
      if (((&DAT_102387e4)[uVar1 & 7] & *(byte *)(((int)uVar1 >> 3) + *(int *)(this + 0x38))) != 0)
      {
        *param_1 = *param_1 | uVar2;
      }
      *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
      uVar2 = uVar2 * 2;
      if (param_2 <= *param_1 + uVar2) {
        return;
      }
    }
  }
  return;
}


// ==== 1010236a UProperty::DestroyValue

/* public: virtual void __thiscall UProperty::DestroyValue(void *)const  */

void __thiscall UProperty::DestroyValue(UProperty *this,void *param_1)

{
                    /* 0x236a  927  ?DestroyValue@UProperty@@UBEXPAX@Z */
  return;
}


// ==== 1010236f FString::operator>=

/* public: int __thiscall FString::operator>=(unsigned short const *)const  */

int __thiscall FString::operator>=(FString *this,ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x236f  654  ??PFString@@QBEHPBG@Z */
  if (*(int *)(this + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)this;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return (uint)(-1 < iVar2);
}


// ==== 10102374 UObject::execAddAdd_PreByte

/* public: void __thiscall UObject::execAddAdd_PreByte(struct FFrame &,void * const) */

void __thiscall UObject::execAddAdd_PreByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2374  2139  ?execAddAdd_PreByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)this & 0xffffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,(int)&uStack_4 + 3);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar2 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar2 = &stack0xfffffff7;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *puVar2 = *puVar2 + '\x01';
  *unaff_retaddr = *puVar2;
  return;
}


// ==== 10102379 UObject::execGlobalFunction

/* public: void __thiscall UObject::execGlobalFunction(struct FFrame &,void * const) */

void __thiscall UObject::execGlobalFunction(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  UFunction *pUVar3;
  undefined4 unaff_retaddr;
  
                    /* 0x2379  2235  ?execGlobalFunction@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  iVar2 = *(int *)this;
  pUVar3 = FindFunctionChecked(this,uVar1,1);
  (**(code **)(iVar2 + 0x48))(param_1,unaff_retaddr,pUVar3);
  return;
}


// ==== 1010237e UObjectProperty::Identical

/* public: virtual int __thiscall UObjectProperty::Identical(void const *,void const *)const  */

int __thiscall UObjectProperty::Identical(UObjectProperty *this,void *param_1,void *param_2)

{
                    /* 0x237e  1438  ?Identical@UObjectProperty@@UBEHPBX0@Z */
  if (param_2 != (void *)0x0) {
    return (uint)(*(int *)param_1 == *(int *)param_2);
  }
  return (uint)(*(int *)param_1 == 0);
}


// ==== 10102383 UIntProperty::~UIntProperty

/* public: virtual __thiscall UIntProperty::~UIntProperty(void) */

void __thiscall UIntProperty::~UIntProperty(UIntProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2383  332  ??1UIntProperty@@UAE@XZ */
  puStack_8 = &LAB_101b79d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10102388 FDependency::FDependency

/* public: __thiscall FDependency::FDependency(class UClass *,int) */

FDependency * __thiscall FDependency::FDependency(FDependency *this,UClass *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
                    /* 0x2388  36  ??0FDependency@@QAE@PAVUClass@@H@Z */
  *(UClass **)this = param_1;
  *(int *)(this + 4) = param_2;
  if ((param_1 != (UClass *)0x0) && (iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x44) != 0) {
      uVar2 = appStrCrc(*(ushort **)(iVar1 + 0x40));
      *(ulong *)(this + 8) = uVar2;
      return this;
    }
    uVar2 = appStrCrc(&DAT_101cdd44);
    *(ulong *)(this + 8) = uVar2;
    return this;
  }
  *(undefined4 *)(this + 8) = 0;
  return this;
}


// ==== 10102397 FBox::FBox

/* public: __thiscall FBox::FBox(int) */

void __thiscall FBox::FBox(FBox *this,int param_1)

{
                    /* 0x2397  22  ??0FBox@@QAE@H@Z */
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (FBox)0x0;
  return;
}


// ==== 1010239c UProperty::Link

/* public: virtual void __thiscall UProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UProperty::Link(UProperty *this,FArchive *param_1,UProperty *param_2)

{
                    /* 0x239c  1563  ?Link@UProperty@@UAEXAAVFArchive@@PAV1@@Z */
  return;
}


// ==== 101023a1 L2ThreadBase::operator=

/* public: class L2ThreadBase & __thiscall L2ThreadBase::operator=(class L2ThreadBase const &) */

L2ThreadBase * __thiscall L2ThreadBase::operator=(L2ThreadBase *this,L2ThreadBase *param_1)

{
  L2ThreadBase *pLVar1;
  int iVar2;
  
                    /* 0x23a1  507  ??4L2ThreadBase@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  pLVar1 = this + 0x14;
  iVar2 = 0x40;
  do {
    *(undefined2 *)pLVar1 = *(undefined2 *)(pLVar1 + ((int)param_1 - (int)this));
    pLVar1 = pLVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}


// ==== 101023a6 UObject::StaticLoadObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UObject * __cdecl UObject::StaticLoadObject(class UClass *,class UObject
   *,unsigned short const *,unsigned short const *,unsigned long,class UPackageMap *) */

UObject * __cdecl
UObject::StaticLoadObject
          (UClass *param_1,UObject *param_2,ushort *param_3,ushort *param_4,ulong param_5,
          UPackageMap *param_6)

{
  ulong uVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  ushort *puVar4;
  ULinkerLoad *pUVar5;
  int iStack_7c;
  UObject *pUStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x23a6  1942
                       ?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */
  puStack_c = &LAB_101bdab0;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("ObjectClass",".\\UnObj.cpp",0xace);
  }
  if (param_3 == (ushort *)0x0) {
    appFailAssert("InName",".\\UnObj.cpp",0xacf);
  }
  pUStack_18 = (UObject *)0x0;
  BeginLoad();
  iStack_8 = CONCAT31(iStack_8._1_3_,1);
  pUVar5 = (ULinkerLoad *)0x0;
  ResolveName(&param_2,&param_3,1,1);
  uVar1 = param_5;
  pUVar2 = param_2;
  do {
    pUVar3 = pUVar2;
    if (pUVar3 == (UObject *)0x0) break;
    pUVar2 = *(UObject **)(pUVar3 + 0x18);
  } while (*(UObject **)(pUVar3 + 0x18) != (UObject *)0x0);
  if ((param_5 & 0x40) == 0) {
    pUVar5 = GetPackageLinker(pUVar3,param_4,param_5 | 0x28,param_6,(FGuid *)0x0);
  }
  puVar4 = param_3;
  if (pUVar5 != (ULinkerLoad *)0x0) {
    FName::FName((FName *)&stack0xffffff6c,param_3,1);
    pUStack_18 = ULinkerLoad::Create(pUVar5,param_1);
  }
  pUVar2 = param_2;
  if ((pUStack_18 == (UObject *)0x0) &&
     (pUStack_18 = StaticFindObject(param_1,param_2,puVar4,0), pUStack_18 == (UObject *)0x0)) {
    if (pUVar2 != (UObject *)0x0) {
      GetPathName(pUVar2,(UObject *)0x0,(ushort *)0x0);
    }
    puVar4 = LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar4);
  }
  if ((((byte)GL2ThreadFilter & 4) == 0) || ((uVar1 & 0x8000) == 0)) {
    EndLoad();
  }
  else {
    if (GObjBeginLoadCount < 1) {
      appFailAssert("GObjBeginLoadCount>0",".\\UnObj.cpp",0xaed);
    }
    GObjBeginLoadCount = GObjBeginLoadCount + -1;
  }
  iStack_8 = 0;
  while (GL2GCState == 2) {
    appSleep(0.0);
  }
  if ((GL2GCState == 3) && (((byte)pUStack_18[0x1c] & 2) != 0)) {
    thunk_FUN_1015a320();
    iStack_8._0_1_ = 4;
    (**(code **)(iStack_7c + 0x18))();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_1015a3d0();
  }
  ExceptionList = pvStack_10;
  return pUStack_18;
}


// ==== 101023ab FBox::Init

/* public: void __thiscall FBox::Init(void) */

void __thiscall FBox::Init(FBox *this)

{
                    /* 0x23ab  1459  ?Init@FBox@@QAEXXZ */
  this[0x18] = (FBox)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 101023b0 UObject::execSubtractEqual_RotatorRotator

/* public: void __thiscall UObject::execSubtractEqual_RotatorRotator(struct FFrame &,void * const)
    */

void __thiscall
UObject::execSubtractEqual_RotatorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int unaff_EDI;
  int *piVar2;
  int aiStack_14 [2];
  undefined1 auStack_c [4];
  int *piStack_8;
  
                    /* 0x23b0  2384  ?execSubtractEqual_RotatorRotator@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  piVar2 = (int *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    piVar2 = aiStack_14;
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = *piVar2 - (int)param_1;
  piVar2[1] = piVar2[1] - (int)auStack_c;
  piVar2[2] = piVar2[2] - unaff_EDI;
  *piStack_8 = *piVar2;
  piStack_8[1] = piVar2[1];
  piStack_8[2] = piVar2[2];
  return;
}


// ==== 101023b5 thunk_FUN_1011f9e0 thunk -> 1011f9e0

// ==== 101023ba UObject::execIntToString

/* public: void __thiscall UObject::execIntToString(struct FFrame &,void * const) */

void __thiscall UObject::execIntToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined4 unaff_ESI;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x23ba  2271  ?execIntToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb370;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_1c);
  pFVar3 = (FArray *)FString::Printf((ushort *)&stack0xffffffe0,&DAT_101d3d68,unaff_ESI);
  pvStack_c = (void *)0x0;
  if (unaff_retaddr != pFVar3) {
    uVar2 = *(undefined4 *)(pFVar3 + 4);
    *(undefined4 *)(unaff_retaddr + 8) = uVar2;
    *(undefined4 *)(unaff_retaddr + 4) = uVar2;
    FArray::Realloc(unaff_retaddr,2);
    if (*(int *)(unaff_retaddr + 4) != 0) {
      if (*(int *)(pFVar3 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar3;
      }
      _memcpy(*(void **)unaff_retaddr,_Src,*(int *)(unaff_retaddr + 4) * 2);
    }
  }
  pvStack_c = (void *)0x1;
  uStack_1c = 0;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 101023bf thunk_FUN_10118e30 thunk -> 10118e30

// ==== 101023c4 FMalloc::FMalloc

/* public: __thiscall FMalloc::FMalloc(class FMalloc const &) */

void __thiscall FMalloc::FMalloc(FMalloc *this,FMalloc *param_1)

{
                    /* 0x23c4  70  ??0FMalloc@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 101023c9 thunk_FUN_1015a3d0 thunk -> 1015a3d0

// ==== 101023ce thunk_FUN_101381e0 thunk -> 101381e0

// ==== 101023d3 thunk_FUN_10165b90 thunk -> 10165b90

// ==== 101023d8 UExporter::StaticConstructor

/* public: void __thiscall UExporter::StaticConstructor(void) */

void __thiscall UExporter::StaticConstructor(UExporter *this)

{
  UArrayProperty *this_00;
  int iVar1;
  UStrProperty *this_01;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23d8  1926  ?StaticConstructor@UExporter@@QAEXXZ */
  puStack_c = &LAB_101b98a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  uVar2 = *(undefined4 *)(this + 0x24);
  ExceptionList = &pvStack_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Formats",1);
  this_00 = UArrayProperty::operator_new(0x7c,uVar2);
  if (this_00 == (UArrayProperty *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = UArrayProperty::UArrayProperty(this_00,0,0x38,(ushort *)&DAT_101d0420,0);
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"StrProperty0",1);
  this_01 = UStrProperty::operator_new(0x78,iVar1);
  if (this_01 == (UStrProperty *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UStrProperty::UStrProperty(this_01);
  }
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101023dd USystem::~USystem

/* public: virtual __thiscall USystem::~USystem(void) */

void __thiscall USystem::~USystem(USystem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x23dd  350  ??1USystem@@UAE@XZ */
  puStack_8 = &LAB_101b907f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  iStack_4 = 5;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 4;
  thunk_FUN_10118d50();
  iStack_4._0_1_ = 3;
  thunk_FUN_10124a00();
  iStack_4._0_1_ = 2;
  FString::~FString((FString *)(this + 0x58));
  iStack_4._0_1_ = 1;
  FString::~FString((FString *)(this + 0x4c));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString((FString *)(this + 0x40));
  iStack_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101023e2 UObject::execComplement_PreInt

/* public: void __thiscall UObject::execComplement_PreInt(struct FFrame &,void * const) */

void __thiscall UObject::execComplement_PreInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x23e2  2177  ?execComplement_PreInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = ~(uint)&uStack_4;
  return;
}


// ==== 101023e7 thunk_FUN_10137090 thunk -> 10137090

// ==== 101023f1 thunk_FUN_10121860 thunk -> 10121860

// ==== 101023fb FPlane::FPlane

/* public: __thiscall FPlane::FPlane(float,float,float,float) */

void __thiscall FPlane::FPlane(FPlane *this,float param_1,float param_2,float param_3,float param_4)

{
                    /* 0x23fb  106  ??0FPlane@@QAE@MMMM@Z */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}


// ==== 10102400 FDummyCodec::Decode

/* public: virtual int __thiscall FDummyCodec::Decode(class FArchive &,unsigned char * *,int &) */

int __thiscall FDummyCodec::Decode(FDummyCodec *this,FArchive *param_1,uchar **param_2,int *param_3)

{
                    /* 0x2400  907  ?Decode@FDummyCodec@@UAEHAAVFArchive@@PAPAEAAH@Z */
  return 0;
}


// ==== 10102405 thunk_FUN_10124110 thunk -> 10124110

// ==== 1010240a FBitWriter::GetNumBytes

/* public: int __thiscall FBitWriter::GetNumBytes(void) */

int __thiscall FBitWriter::GetNumBytes(FBitWriter *this)

{
                    /* 0x240a  1368  ?GetNumBytes@FBitWriter@@QAEHXZ */
  return *(int *)(this + 0x44) + 7 >> 3;
}


// ==== 1010240f UNameProperty::Identical

/* public: virtual int __thiscall UNameProperty::Identical(void const *,void const *)const  */

int __thiscall UNameProperty::Identical(UNameProperty *this,void *param_1,void *param_2)

{
                    /* 0x240f  1437  ?Identical@UNameProperty@@UBEHPBX0@Z */
  if (param_2 == (void *)0x0) {
    param_2 = &param_2;
  }
  return (uint)(*(void **)param_1 == *(void **)param_2);
}


// ==== 10102414 UClass::operator=

/* public: class UClass & __thiscall UClass::operator=(class UClass const &) */

UClass * __thiscall UClass::operator=(UClass *this,UClass *param_1)

{
  FArray *this_00;
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x2414  514  ??4UClass@@QAEAAV0@ABV0@@Z */
  UState::operator=((UState *)this,(UState *)param_1);
  *(undefined4 *)(this + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(this + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(this + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(this + 0x4b0) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(this + 0x4b4) = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(this + 0x4b8) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(this + 0x4bc) = *(undefined4 *)(param_1 + 0x4bc);
  *(undefined4 *)(this + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  thunk_FUN_10120c40(param_1 + 0x4c4);
  thunk_FUN_10120dd0(param_1 + 0x4d0);
  thunk_FUN_10120f50(param_1 + 0x4dc);
  thunk_FUN_10118e30(param_1 + 0x4e8);
  thunk_FUN_10118830(param_1 + 0x4f4);
  thunk_FUN_10118e30(param_1 + 0x500);
  thunk_FUN_10118e30(param_1 + 0x50c);
  *(undefined4 *)(this + 0x518) = *(undefined4 *)(param_1 + 0x518);
  this_00 = (FArray *)(this + 0x520);
  *(undefined4 *)(this + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  if (this_00 != (FArray *)(param_1 + 0x520)) {
    uVar1 = *(undefined4 *)(param_1 + 0x524);
    *(undefined4 *)(this + 0x528) = uVar1;
    *(undefined4 *)(this + 0x524) = uVar1;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 0x524) != 0) {
      if (*(int *)(param_1 + 0x524) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x520);
      }
      _memcpy(*(void **)this_00,_Src,*(int *)(this + 0x524) * 2);
    }
  }
  return this;
}


// ==== 1010241e L2ThreadInterface::L2ThreadInterface

/* public: __thiscall L2ThreadInterface::L2ThreadInterface(void) */

void __thiscall L2ThreadInterface::L2ThreadInterface(L2ThreadInterface *this)

{
                    /* 0x241e  178  ??0L2ThreadInterface@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10102423 TArray<unsigned_short>::AddItem

/* public: int __thiscall TArray<unsigned short>::AddItem(unsigned short const &) */

int __thiscall TArray<unsigned_short>::AddItem(TArray<unsigned_short> *this,ushort *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x2423  786  ?AddItem@?$TArray@G@@QAEHABG@Z */
  iVar2 = *(int *)(this + 4);
  iVar1 = iVar2 + 1;
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc((FArray *)this,2);
  }
  *(ushort *)(*(int *)this + iVar2 * 2) = *param_1;
  return iVar2;
}


// ==== 10102428 UNameProperty::operator_new

/* public: static void * __cdecl UNameProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UNameProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2428  394  ??2UNameProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010242d FLabelEntry::operator=

/* public: struct FLabelEntry & __thiscall FLabelEntry::operator=(struct FLabelEntry const &) */

FLabelEntry * __thiscall FLabelEntry::operator=(FLabelEntry *this,FLabelEntry *param_1)

{
                    /* 0x242d  457  ??4FLabelEntry@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10102432 FBox::FBox

/* public: __thiscall FBox::FBox(class FVector const &,class FVector const &) */

void __thiscall FBox::FBox(FBox *this,FVector *param_1,FVector *param_2)

{
                    /* 0x2432  21  ??0FBox@@QAE@ABVFVector@@0@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 8);
  this[0x18] = (FBox)0x1;
  return;
}


// ==== 10102437 FVector::SizeSquared

/* public: float __thiscall FVector::SizeSquared(void)const  */

float __thiscall FVector::SizeSquared(FVector *this)

{
                    /* 0x2437  1881  ?SizeSquared@FVector@@QBEMXZ */
  return *(float *)(this + 8) * *(float *)(this + 8) +
         *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
}


// ==== 1010243c UClassProperty::GetID

/* public: virtual unsigned char __thiscall UClassProperty::GetID(void)const  */

uchar __thiscall UClassProperty::GetID(UClassProperty *this)

{
                    /* 0x243c  1329  ?GetID@UClassProperty@@UBEEXZ */
  return '\x05';
}


// ==== 1010244b FRange::operator/

/* public: class FRange __thiscall FRange::operator/(float)const  */

float __thiscall FRange::operator/(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x244b  648  ??KFRange@@QBE?AV0@M@Z */
  FRange((FRange *)param_1,(1.0 / in_stack_00000008) * *(float *)this,
         (1.0 / in_stack_00000008) * *(float *)(this + 4));
  return param_1;
}


// ==== 10102450 FPlane::FPlane

/* public: __thiscall FPlane::FPlane(class FVector,class FVector const &) */

void __thiscall
FPlane::FPlane(FPlane *this,float param_2,float param_3,float param_4,float *param_5)

{
                    /* 0x2450  108  ??0FPlane@@QAE@VFVector@@ABV1@@Z */
  *(float *)this = *param_5;
  *(float *)(this + 4) = param_5[1];
  *(float *)(this + 8) = param_5[2];
  *(float *)(this + 0xc) = param_5[2] * param_4 + *param_5 * param_2 + param_5[1] * param_3;
  return;
}


// ==== 10102455 FInterpCurve::~FInterpCurve

/* public: __thiscall FInterpCurve::~FInterpCurve(void) */

void __thiscall FInterpCurve::~FInterpCurve(FInterpCurve *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2455  302  ??1FInterpCurve@@QAE@XZ */
  puStack_8 = &LAB_101b87e8;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  thunk_FUN_10121020(this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010245a thunk_FUN_10149500 thunk -> 10149500

// ==== 1010245f FBitReader::FBitReader

/* public: __thiscall FBitReader::FBitReader(struct FBitReader const &) */

FBitReader * __thiscall FBitReader::FBitReader(FBitReader *this,FBitReader *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x245f  14  ??0FBitReader@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b80a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_101186c0(param_1 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102464 TArray<unsigned_short>::TArray<unsigned_short>

/* public: __thiscall TArray<unsigned short>::TArray<unsigned short>(enum ENoInit) */

void __thiscall
TArray<unsigned_short>::TArray<unsigned_short>(TArray<unsigned_short> *this,ENoInit param_1)

{
                    /* 0x2464  3  ??0?$TArray@G@@QAE@W4ENoInit@@@Z */
  return;
}


// ==== 10102469 FCoords::FCoords

/* public: __thiscall FCoords::FCoords(class FVector const &,class FVector const &,class FVector
   const &,class FVector const &) */

void __thiscall
FCoords::FCoords(FCoords *this,FVector *param_1,FVector *param_2,FVector *param_3,FVector *param_4)

{
                    /* 0x2469  32  ??0FCoords@@QAE@ABVFVector@@000@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)param_3;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)param_4;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_4 + 8);
  return;
}


// ==== 1010246e UObject::execHighNative11

/* public: void __thiscall UObject::execHighNative11(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative11(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x246e  2249  ?execHighNative11@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10102473 thunk_FUN_101208b0 thunk -> 101208b0

// ==== 10102478 FPlane::operator*

/* public: class FPlane __thiscall FPlane::operator*(float)const  */

void __thiscall FPlane::operator*(FPlane *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x2478  606  ??DFPlane@@QBE?AV0@M@Z */
  *(float *)param_1 = in_stack_00000008 * *(float *)this;
  *(float *)((int)param_1 + 4) = *(float *)(this + 4) * in_stack_00000008;
  *(float *)((int)param_1 + 8) = *(float *)(this + 8) * in_stack_00000008;
  *(float *)((int)param_1 + 0xc) = in_stack_00000008 * *(float *)(this + 0xc);
  return;
}


// ==== 1010247d FArchive::LicenseeVer

/* public: int __thiscall FArchive::LicenseeVer(void) */

int __thiscall FArchive::LicenseeVer(FArchive *this)

{
                    /* 0x247d  1550  ?LicenseeVer@FArchive@@QAEHXZ */
  return *(int *)(this + 0xc);
}


// ==== 10102482 FBlowFish::BlowfishDecrypt

/* public: void __thiscall FBlowFish::BlowfishDecrypt(unsigned char *,int) */

void __thiscall FBlowFish::BlowfishDecrypt(FBlowFish *this,uchar *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x2482  819  ?BlowfishDecrypt@FBlowFish@@QAEXPAEH@Z */
  iVar1 = param_2 >> 3;
  if (0 < iVar1) {
    do {
      Blowfish_decipher(this,(ulong *)param_1,(ulong *)((int)param_1 + 4));
      param_1 = (uchar *)((int)param_1 + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


// ==== 10102487 FLabelEntry::FLabelEntry

/* public: __thiscall FLabelEntry::FLabelEntry(class FName,int) */

void __thiscall FLabelEntry::FLabelEntry(FLabelEntry *this,undefined4 param_2,undefined4 param_3)

{
                    /* 0x2487  67  ??0FLabelEntry@@QAE@VFName@@H@Z */
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  return;
}


// ==== 1010248c thunk_FUN_10129d40 thunk -> 10129d40

// ==== 10102491 thunk_FUN_10119480 thunk -> 10119480

// ==== 10102496 FArchive::Seek

/* public: virtual void __thiscall FArchive::Seek(int) */

void __thiscall FArchive::Seek(FArchive *this,int param_1)

{
                    /* 0x2496  1789  ?Seek@FArchive@@UAEXH@Z */
  return;
}


// ==== 1010249b UIntProperty::SerializeItem

/* public: virtual void __thiscall UIntProperty::SerializeItem(class FArchive &,void *,int)const  */

void __thiscall
UIntProperty::SerializeItem(UIntProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x249b  1843  ?SerializeItem@UIntProperty@@UBEXAAVFArchive@@PAXH@Z */
  (**(code **)(*(int *)param_1 + 4))(param_2,4);
  return;
}


// ==== 101024a0 UObject::execEqualEqual_RotatorRotator

/* public: void __thiscall UObject::execEqualEqual_RotatorRotator(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_RotatorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined1 **unaff_ESI;
  FFrame *pFStack_18;
  undefined1 *apuStack_14 [3];
  undefined4 *puStack_8;
  
                    /* 0x24a0  2211  ?execEqualEqual_RotatorRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((apuStack_14 == unaff_ESI) && (param_1 == pFStack_18)) &&
     (&pFStack_18 == (FFrame **)apuStack_14[0])) {
    *puStack_8 = 1;
    return;
  }
  *puStack_8 = 0;
  return;
}


// ==== 101024a5 FName::DisplayHash

/* public: static void __cdecl FName::DisplayHash(class FOutputDevice &) */

void __cdecl FName::DisplayHash(FOutputDevice *param_1)

{
  FNameEntry *pFVar1;
  FOutputDevice *this;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x24a5  939  ?DisplayHash@FName@@SAXAAVFOutputDevice@@@Z */
  puStack_c = &LAB_101bc540;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  for (this = (FOutputDevice *)0x0; this < (FOutputDevice *)0x1000; this = this + 1) {
    pFVar1 = (FNameEntry *)(&NameHash)[(int)this];
    if (pFVar1 != (FNameEntry *)0x0) {
      for (; pFVar1 != (FNameEntry *)0x0; pFVar1 = *(FNameEntry **)(pFVar1 + 8)) {
      }
    }
  }
  ExceptionList = &pvStack_10;
  FOutputDevice::Logf(this,(ushort *)param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101024aa UMapProperty::UMapProperty

/* public: __thiscall UMapProperty::UMapProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UMapProperty * __thiscall
UMapProperty::UMapProperty
          (UMapProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x24aa  242  ??0UMapProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101024af FGlobalMath::CosFloat

/* public: float __thiscall FGlobalMath::CosFloat(float) */

float __thiscall FGlobalMath::CosFloat(FGlobalMath *this,float param_1)

{
  int iVar1;
  
                    /* 0x24af  886  ?CosFloat@FGlobalMath@@QAEMM@Z */
  iVar1 = FUN_1017b700();
  return *(float *)(this + (0x4000 - iVar1 >> 2 & 0x3fffU) * 4 + 0x8c);
}


// ==== 101024be appRequestExit

/* void __cdecl appRequestExit(int) */

void __cdecl appRequestExit(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x24be  2089  ?appRequestExit@@YAXH@Z */
  puStack_c = &LAB_101be300;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    FOutputDevice::Logf2((FOutputDevice *)param_1,(ushort *)GLog);
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  PostQuitMessage(0);
  GIsRequestingExit = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101024c3 thunk_FUN_10120810 thunk -> 10120810

// ==== 101024c8 thunk_FUN_10163030 thunk -> 10163030

// ==== 101024cd thunk_FUN_10121450 thunk -> 10121450

// ==== 101024d2 UObjectProperty::UObjectProperty

/* public: __thiscall UObjectProperty::UObjectProperty(class UObjectProperty const &) */

UObjectProperty * __thiscall
UObjectProperty::UObjectProperty(UObjectProperty *this,UObjectProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x24d2  254  ??0UObjectProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7bb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101024dc ParseToken

/* int __cdecl ParseToken(unsigned short const * &,class FString &,int) */

int __cdecl ParseToken(ushort **param_1,FString *param_2,int param_3)

{
  int iVar1;
  ushort auStack_800 [1024];
  
                    /* 0x24dc  1675  ?ParseToken@@YAHAAPBGAAVFString@@H@Z */
  iVar1 = ParseToken(param_1,auStack_800,0x400,param_3);
  if (iVar1 != 0) {
    FString::operator=(param_2,auStack_800);
    return 1;
  }
  return 0;
}


// ==== 101024e1 UObject::ExportProperties

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::ExportProperties(class FOutputDevice &,class UClass
   *,unsigned char *,int,class UClass *,unsigned char *) */

void __cdecl
UObject::ExportProperties
          (FOutputDevice *param_1,UClass *param_2,uchar *param_3,int param_4,UClass *param_5,
          uchar *param_6)

{
  UObject *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  UObject *this_02;
  int *piVar6;
  undefined1 auStack_203c [8204];
  UObject *pUStack_30;
  int iStack_2c;
  wchar_t *pwStack_28;
  int iStack_24;
  UStruct *pUStack_20;
  UObject *pUStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x24e1  973
                       ?ExportProperties@UObject@@SAXAAVFOutputDevice@@PAVUClass@@PAEH12@Z */
  puStack_c = &LAB_101bcc10;
  pvStack_10 = ExceptionList;
  iStack_18 = 0x1015ebe3;
  puStack_14 = &stack0xffffdfb8;
  pwStack_28 = L"(none)";
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffdfb8;
  if (param_2 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("ObjectClass!=NULL",".\\UnObj.cpp",0x29d);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  thunk_FUN_10119210(param_2);
  do {
    this_02 = pUStack_1c;
    if (pUStack_1c == (UObject *)0x0) {
      ExceptionList = pvStack_10;
      return;
    }
    iVar3 = (**(code **)(*(int *)pUStack_1c + 0xb0))();
    if (iVar3 != 0) {
      pwStack_28 = (wchar_t *)(*(int *)(_Names + *(int *)(this_02 + 0x20) * 4) + 0xc);
      iVar3 = 0;
      while (iStack_18 = iVar3, iVar3 < *(int *)(this_02 + 0x40)) {
        iVar4 = IsA(this_02,&UArrayProperty::PrivateStaticClass);
        if (iVar4 == 0) {
          if ((param_5 == (UClass *)0x0) ||
             (iVar4 = UStruct::IsChildOf((UStruct *)param_5,pUStack_20), puVar5 = param_6,
             iVar4 == 0)) {
            puVar5 = (uchar *)0x0;
          }
          iVar4 = (**(code **)(*(int *)this_02 + 0xa0))(iVar3,auStack_203c,param_3,puVar5,2);
          if (iVar4 == 0) goto LAB_1015ee61;
          iVar4 = IsA(this_02,&UObjectProperty::PrivateStaticClass);
          if ((((iVar4 != 0) && (((byte)this_02[0x48] & 8) != 0)) &&
              (pUVar1 = *(UObject **)
                         (param_3 + *(int *)(this_02 + 0x44) * iVar3 + *(int *)(this_02 + 0x54)),
              pUVar1 != (UObject *)0x0)) && (((byte)pUVar1[0x1c] & 8) == 0)) {
            UExporter::ExportToOutputDevice
                      (pUVar1,(UExporter *)0x0,param_1,(ushort *)&DAT_101d96ac,param_4 + 1);
            *(uint *)(pUVar1 + 0x1c) = *(uint *)(pUVar1 + 0x1c) | 8;
          }
          if (*(int *)(this_02 + 0x40) != 1) {
            appSpc(param_4);
            FOutputDevice::Logf(this_01,(ushort *)param_1);
            iVar3 = iStack_18;
            goto LAB_1015ee61;
          }
          appSpc(param_4);
          FOutputDevice::Logf(this_00,(ushort *)param_1);
          iVar3 = iStack_18 + 1;
        }
        else {
          iVar4 = thunk_FUN_10132a60(this_02);
          pUStack_30 = *(UObject **)(iVar4 + 0x78);
          if (((byte)this_02[0x48] & 8) == 0) {
LAB_1015ec9f:
            iStack_24 = 0;
          }
          else {
            iVar4 = IsA(pUStack_30,&UObjectProperty::PrivateStaticClass);
            iStack_24 = 1;
            if (iVar4 == 0) goto LAB_1015ec9f;
          }
          piVar6 = (int *)(param_3 + *(int *)(this_02 + 0x44) * iVar3 + *(int *)(this_02 + 0x54));
          for (iVar4 = 0; iVar3 = iStack_18, iStack_2c = iVar4, iVar4 < piVar6[1]; iVar4 = iVar4 + 1
              ) {
            iVar3 = (**(code **)(*(int *)pUStack_30 + 0xa0))(iVar4,auStack_203c,*piVar6,0,2);
            if (iVar3 != 0) {
              if (((iStack_24 != 0) &&
                  (pUVar1 = *(UObject **)(*piVar6 + iVar4 * 4), this_02 = pUStack_1c,
                  pUVar1 != (UObject *)0x0)) && (((byte)pUVar1[0x1c] & 8) == 0)) {
                UExporter::ExportToOutputDevice
                          (pUVar1,(UExporter *)0x0,param_1,(ushort *)&DAT_101d9684,param_4 + 1);
                *(uint *)(pUVar1 + 0x1c) = *(uint *)(pUVar1 + 0x1c) | 8;
                this_02 = pUStack_1c;
              }
              appSpc(param_4);
              FOutputDevice::Logf(this,(ushort *)param_1);
            }
          }
LAB_1015ee61:
          iVar3 = iVar3 + 1;
        }
      }
    }
    pUStack_1c = *(UObject **)(this_02 + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 101024e6 appExp

/* double __cdecl appExp(double) */

double __cdecl appExp(double param_1)

{
  float10 fVar1;
  
                    /* 0x24e6  2039  ?appExp@@YANN@Z */
  fVar1 = (float10)FUN_1017c20c();
  return (double)fVar1;
}


// ==== 101024eb FNpcPosInfoHit::operator!=

/* public: int __thiscall FNpcPosInfoHit::operator!=(class FNpcPosInfoHit const &)const  */

int __thiscall FNpcPosInfoHit::operator!=(FNpcPosInfoHit *this,FNpcPosInfoHit *param_1)

{
                    /* 0x24eb  581  ??9FNpcPosInfoHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}


// ==== 101024f0 UIntProperty::Link

/* public: virtual void __thiscall UIntProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UIntProperty::Link(UIntProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x24f0  1559  ?Link@UIntProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101bdff0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 4;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101024f5 thunk_FUN_10125980 thunk -> 10125980

// ==== 10102504 thunk_FUN_101372a0 thunk -> 101372a0

// ==== 10102509 FCodec::Decode

/* public: virtual int __thiscall FCodec::Decode(class FArchive &,unsigned char * *,int &) */

int __thiscall FCodec::Decode(FCodec *this,FArchive *param_1,uchar **param_2,int *param_3)

{
                    /* 0x2509  904  ?Decode@FCodec@@UAEHAAVFArchive@@PAPAEAAH@Z */
  return 0;
}


// ==== 1010250e FMemStack::FMemStack

/* public: __thiscall FMemStack::FMemStack(void) */

FMemStack * __thiscall FMemStack::FMemStack(FMemStack *this)

{
  FMemStack *this_00;
  int iVar1;
  
                    /* 0x250e  77  ??0FMemStack@@QAE@XZ */
  this_00 = this + 0x80;
  iVar1 = 7;
  do {
    FMemStackStats::FMemStackStats((FMemStackStats *)this_00);
    this_00 = this_00 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return this;
}


// ==== 10102518 UObject::execEqualEqual_IntInt

/* public: void __thiscall UObject::execEqualEqual_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x2518  2208  ?execEqualEqual_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 1;
  return;
}


// ==== 1010251d thunk_FUN_10129cd0 thunk -> 10129cd0

// ==== 10102522 ULinkerLoad::Verify

/* public: void __thiscall ULinkerLoad::Verify(void) */

void __thiscall ULinkerLoad::Verify(ULinkerLoad *this)

{
  undefined4 uVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2522  1994  ?Verify@ULinkerLoad@@QAEXXZ */
  puStack_c = &LAB_101bbb80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xfc) == 0) {
    uVar1 = *(undefined4 *)(this + 0x34);
    ExceptionList = &pvStack_10;
    iVar2 = thunk_FUN_101495a0(uVar1);
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_101495a0(uVar1);
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffff7;
    }
    uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
    for (iVar2 = 0; iVar2 < *(int *)(this + 0x54); iVar2 = iVar2 + 1) {
      VerifyImport(this,iVar2);
    }
  }
  *(undefined4 *)(this + 0xfc) = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010252c GRegisterCast

/* unsigned char __cdecl GRegisterCast(int,void (__thiscall UObject::*const &)(struct FFrame &,void
   * const)) */

uchar __cdecl GRegisterCast(int param_1,_func_void_FFrame_ptr_void_ptr **param_2)

{
  int iVar1;
  _func_void_FFrame_ptr_void_ptr ***ppp_Var2;
  
                    /* 0x252c  1252  ?GRegisterCast@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */
  if (DAT_1028468c == 0) {
    ppp_Var2 = &GCasts;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppp_Var2 = (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined;
      ppp_Var2 = ppp_Var2 + 1;
    }
    DAT_1028468c = 1;
  }
  if (param_1 != -1) {
    if (((param_1 < 0) || (0xff < (uint)param_1)) ||
       ((&GCasts)[param_1] != (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined)) {
      GCastDuplicate = param_1;
    }
    (&GCasts)[param_1] = (_func_void_FFrame_ptr_void_ptr **)*param_2;
  }
  return '\0';
}


// ==== 10102531 UFactory::StaticConstructor

/* public: void __thiscall UFactory::StaticConstructor(void) */

void __thiscall UFactory::StaticConstructor(UFactory *this)

{
  UStrProperty *pUVar1;
  UArrayProperty *this_00;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2531  1927  ?StaticConstructor@UFactory@@QAEXXZ */
  puStack_c = &LAB_101b9ac0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  uVar3 = *(undefined4 *)(this + 0x24);
  ExceptionList = &pvStack_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Description",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar3);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x3c,(ushort *)&DAT_101d0d00,0);
  }
  uVar3 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"InContextCommand",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar3);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x48,(ushort *)&DAT_101d0d28,0);
  }
  uVar3 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"OutOfContextCommand",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar3);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x54,(ushort *)&DAT_101d0d54,0);
  }
  uVar3 = *(undefined4 *)(this + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Formats",1);
  this_00 = UArrayProperty::operator_new(0x7c,uVar3);
  if (this_00 == (UArrayProperty *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = UArrayProperty::UArrayProperty(this_00,0,0x60,(ushort *)&DAT_101d0d68,0);
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"StrProperty0",1);
  pUVar1 = UStrProperty::operator_new(0x78,iVar2);
  if (pUVar1 == (UStrProperty *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = UStrProperty::UStrProperty(pUVar1);
  }
  *(undefined4 *)(iVar2 + 0x78) = uVar3;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102536 UArrayProperty::NetSerializeItem

/* public: virtual int __thiscall UArrayProperty::NetSerializeItem(class FArchive &,class
   UPackageMap *,void *)const  */

int __thiscall
UArrayProperty::NetSerializeItem
          (UArrayProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
                    /* 0x2536  1629
                       ?NetSerializeItem@UArrayProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  return 1;
}


// ==== 1010253b UTextBuffer::Serialize

/* public: virtual void __thiscall UTextBuffer::Serialize(unsigned short const *,enum EName) */

void __thiscall UTextBuffer::Serialize(UTextBuffer *this,ushort *param_1,EName param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x253b  1828  ?Serialize@UTextBuffer@@UAEXPBGW4EName@@@Z */
  puStack_c = &LAB_101bd050;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::operator+=((FString *)(this + 0xc),param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102540 ULinkerLoad::IndexToObject

/* private: class UObject * __thiscall ULinkerLoad::IndexToObject(int) */

UObject * __thiscall ULinkerLoad::IndexToObject(ULinkerLoad *this,int param_1)

{
  int iVar1;
  UObject *pUVar2;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2540  1457  ?IndexToObject@ULinkerLoad@@AAEPAVUObject@@H@Z */
  puStack_c = &LAB_101bb9e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (0 < param_1) {
    ExceptionList = &pvStack_10;
    iVar1 = FArray::IsValidIndex((FArray *)(this + 0x90),param_1 + -1);
    if (iVar1 == 0) {
      LocalizeError((ushort *)L"ExportIndex",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this_00,(ushort *)GError);
    }
    pUVar2 = CreateExport(this,param_1 + -1,0);
    ExceptionList = pvStack_10;
    return pUVar2;
  }
  if (param_1 < 0) {
    ExceptionList = &pvStack_10;
    iVar1 = FArray::IsValidIndex((FArray *)(this + 0x84),-1 - param_1);
    if (iVar1 == 0) {
      LocalizeError((ushort *)L"ImportIndex",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
    }
    pUVar2 = CreateImport(this,-1 - param_1);
    ExceptionList = pvStack_10;
    return pUVar2;
  }
  return (UObject *)0x0;
}


// ==== 10102545 FMemStackFrame::operator=

/* public: class FMemStackFrame & __thiscall FMemStackFrame::operator=(class FMemStackFrame const &)
    */

FMemStackFrame * __thiscall FMemStackFrame::operator=(FMemStackFrame *this,FMemStackFrame *param_1)

{
                    /* 0x2545  464  ??4FMemStackFrame@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 1010254a FBitReader::operator=

/* public: struct FBitReader & __thiscall FBitReader::operator=(struct FBitReader const &) */

FBitReader * __thiscall FBitReader::operator=(FBitReader *this,FBitReader *param_1)

{
                    /* 0x254a  431  ??4FBitReader@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10118830(param_1 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 10102554 FString::ParseIntoArray

/* public: int __thiscall FString::ParseIntoArray(unsigned short const *,class TArray<class FString>
   *) */

int __thiscall FString::ParseIntoArray(FString *this,ushort *param_1,TArray<FString> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FString aFStack_34 [12];
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2554  1667  ?ParseIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */
  puStack_c = &LAB_101b84c0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc0;
  if (param_2 == (TArray<FString> *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("InArray","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                  0x615);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FString(aFStack_28,this);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  while (iVar2 = InStr(aFStack_28,param_1,0), 0 < iVar2) {
    iVar3 = thunk_FUN_101146f0(0xc,param_2);
    if (iVar3 != 0) {
      Left(aFStack_28,iVar3);
    }
    pFVar4 = (FString *)Mid(aFStack_28,(int)aFStack_34,iVar2 + 1);
    uStack_8._0_1_ = 2;
    operator=(aFStack_28,pFVar4);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    ~FString(aFStack_34);
  }
  pFVar4 = (FString *)thunk_FUN_101146f0(0xc,param_2);
  if (pFVar4 != (FString *)0x0) {
    FString(pFVar4,aFStack_28);
  }
  iVar2 = *(int *)(param_2 + 4);
  uStack_8 = uStack_8 & 0xffffff00;
  ~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return iVar2;
}


// ==== 10102559 UStruct::GetNameCPP

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual unsigned short * __thiscall UStruct::GetNameCPP(void) */

ushort * __thiscall UStruct::GetNameCPP(UStruct *this)

{
  ushort *puVar1;
  
                    /* 0x2559  1360  ?GetNameCPP@UStruct@@UAEPAGXZ */
  puVar1 = appStaticString1024();
  appSprintf(puVar1,(ushort *)&DAT_101ce1a0,*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
  return puVar1;
}


// ==== 1010255e FRegistryObjectInfo::FRegistryObjectInfo

/* public: __thiscall FRegistryObjectInfo::FRegistryObjectInfo(void) */

void __thiscall FRegistryObjectInfo::FRegistryObjectInfo(FRegistryObjectInfo *this)

{
                    /* 0x255e  126  ??0FRegistryObjectInfo@@QAE@XZ */
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
  return;
}


// ==== 10102563 UObject::execHighNative10

/* public: void __thiscall UObject::execHighNative10(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative10(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x2563  2248  ?execHighNative10@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281f70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10102568 UObject::StaticConstructObject

/* public: static class UObject * __cdecl UObject::StaticConstructObject(class UClass *,class
   UObject *,class FName,unsigned long,class UObject *,class FOutputDevice *,class UObject *) */

UObject * __cdecl
UObject::StaticConstructObject
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int param_6,undefined4 param_7)

{
  UObject *pUVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2568  1925
                       ?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z
                        */
  puStack_c = &LAB_101bd920;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_6 == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Error",".\\UnObj.cpp",0x1063);
  }
  pUVar1 = StaticAllocateObject(param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(param_1 + 0x518))(pUVar1);
  }
  ExceptionList = pvStack_10;
  return pUVar1;
}


// ==== 1010256d thunk_FUN_1015bd70 thunk -> 1015bd70

// ==== 10102572 L2ThreadUtil::GetCurrentThreadStats

/* public: class L2ThreadStats * __thiscall L2ThreadUtil::GetCurrentThreadStats(void) */

L2ThreadStats * __thiscall L2ThreadUtil::GetCurrentThreadStats(L2ThreadUtil *this)

{
  int *piVar1;
  L2ThreadUtil *pLStack_4;
  
  pLStack_4 = this;
                    /* 0x2572  1298  ?GetCurrentThreadStats@L2ThreadUtil@@QAEPAVL2ThreadStats@@XZ */
  pLStack_4 = (L2ThreadUtil *)GetCurrentThreadId();
  if (*(int *)(this + 0x2c8) != 0) {
    piVar1 = (int *)thunk_FUN_101297f0(&pLStack_4);
    if (piVar1 != (int *)0x0) {
      return (L2ThreadStats *)(this + *piVar1 * 0x54 + 0x24);
    }
  }
  return (L2ThreadStats *)(this + 0x270);
}


// ==== 10102577 FBitReader::Serialize

/* public: virtual void __thiscall FBitReader::Serialize(void *,int) */

void __thiscall FBitReader::Serialize(FBitReader *this,void *param_1,int param_2)

{
                    /* 0x2577  1793  ?Serialize@FBitReader@@UAEXPAXH@Z */
                    /* WARNING: Could not recover jumptable at 0x1012e273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 8))();
  return;
}


// ==== 1010258b FRangeVector::operator/

/* public: class FRangeVector __thiscall FRangeVector::operator/(float)const  */

void __thiscall FRangeVector::operator/(FRangeVector *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x258b  649  ??KFRangeVector@@QBE?AV0@M@Z */
  fVar1 = 1.0 / in_stack_00000008;
  fVar3 = fVar1 * *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14) * fVar1;
  fStack_8 = fVar2;
  if (fVar3 <= fVar2) {
    fStack_8 = fVar3;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(this + 8) * fVar1;
  fVar4 = *(float *)(this + 0xc) * fVar1;
  fStack_10 = fVar4;
  if (fVar3 <= fVar4) {
    fStack_10 = fVar3;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)this * fVar1;
  fVar1 = fVar1 * *(float *)(this + 4);
  fStack_18 = fVar1;
  if (fVar3 <= fVar1) {
    fStack_18 = fVar3;
  }
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  *(float *)param_1 = fStack_18;
  *(float *)((int)param_1 + 4) = fVar1;
  *(float *)((int)param_1 + 8) = fStack_10;
  *(float *)((int)param_1 + 0xc) = fVar4;
  *(float *)((int)param_1 + 0x10) = fStack_8;
  *(float *)((int)param_1 + 0x14) = fVar2;
  return;
}


// ==== 10102590 appFailAssert

/* void __cdecl appFailAssert(char const *,char const *,int) */

void __cdecl appFailAssert(char *param_1,char *param_2,int param_3)

{
  FOutputDevice *this;
  
                    /* 0x2590  2041  ?appFailAssert@@YAXPBD0H@Z */
  appFromAnsi(param_2,(ushort *)0x0);
  appFromAnsi(param_1,(ushort *)0x0);
  FOutputDevice::Logf(this,(ushort *)GError);
  return;
}


// ==== 10102595 UExporter::ExportText

/* public: virtual int __thiscall UExporter::ExportText(class UObject *,unsigned short const *,class
   FOutputDevice &,class FFeedbackContext *) */

int __thiscall
UExporter::ExportText
          (UExporter *this,UObject *param_1,ushort *param_2,FOutputDevice *param_3,
          FFeedbackContext *param_4)

{
                    /* 0x2595  974
                       ?ExportText@UExporter@@UAEHPAVUObject@@PBGAAVFOutputDevice@@PAVFFeedbackContext@@@Z
                        */
  return 0;
}


// ==== 1010259a FArchive::MapObject

/* public: virtual int __thiscall FArchive::MapObject(class UObject *) */

int __thiscall FArchive::MapObject(FArchive *this,UObject *param_1)

{
                    /* 0x259a  1608  ?MapObject@FArchive@@UAEHPAVUObject@@@Z */
  return 0;
}


// ==== 1010259f thunk_FUN_10128230 thunk -> 10128230

// ==== 101025a4 L2ThreadUtil::operator=

/* public: class L2ThreadUtil & __thiscall L2ThreadUtil::operator=(class L2ThreadUtil const &) */

L2ThreadUtil * __thiscall L2ThreadUtil::operator=(L2ThreadUtil *this,L2ThreadUtil *param_1)

{
  int iVar1;
  L2ThreadUtil *pLVar2;
  L2ThreadUtil *pLVar3;
  
                    /* 0x25a4  510  ??4L2ThreadUtil@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  pLVar2 = param_1 + 0x24;
  pLVar3 = this + 0x24;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0x78;
  pLVar3 = this + 0x78;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0xcc;
  pLVar3 = this + 0xcc;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0x120;
  pLVar3 = this + 0x120;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0x174;
  pLVar3 = this + 0x174;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0x1c8;
  pLVar3 = this + 0x1c8;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0x21c;
  pLVar3 = this + 0x21c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  pLVar2 = param_1 + 0x270;
  pLVar3 = this + 0x270;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(this + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  return this;
}


// ==== 101025a9 thunk_FUN_1015bd10 thunk -> 1015bd10

// ==== 101025ae UObject::execHighNative13

/* public: void __thiscall UObject::execHighNative13(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative13(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x25ae  2251  ?execHighNative13@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282b70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101025b3 UTextBufferFactory::operator=

/* public: class UTextBufferFactory & __thiscall UTextBufferFactory::operator=(class
   UTextBufferFactory const &) */

UTextBufferFactory * __thiscall
UTextBufferFactory::operator=(UTextBufferFactory *this,UTextBufferFactory *param_1)

{
                    /* 0x25b3  546  ??4UTextBufferFactory@@QAEAAV0@ABV0@@Z */
  UFactory::operator=((UFactory *)this,(UFactory *)param_1);
  return this;
}


// ==== 101025b8 FOutputDevice::Release

/* public: virtual void __thiscall FOutputDevice::Release(void) */

void __thiscall FOutputDevice::Release(FOutputDevice *this)

{
                    /* 0x25b8  1760  ?Release@FOutputDevice@@UAEXXZ */
  return;
}


// ==== 101025bd UObject::execFinalFunction

/* public: void __thiscall UObject::execFinalFunction(struct FFrame &,void * const) */

void __thiscall UObject::execFinalFunction(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  
                    /* 0x25bd  2220  ?execFinalFunction@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  (**(code **)(*(int *)this + 0x48))(param_1,param_2,uVar1);
  return;
}


// ==== 101025c2 thunk_FUN_101651f0 thunk -> 101651f0

// ==== 101025c7 FRangeVector::operator+

/* public: class FRangeVector __thiscall FRangeVector::operator+(class FVector const &)const  */

void __thiscall FRangeVector::operator+(FRangeVector *this,FVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x25c7  639  ??HFRangeVector@@QBE?AV0@ABVFVector@@@Z */
  fVar1 = in_stack_00000008[2] + *(float *)(this + 0x10);
  fVar2 = in_stack_00000008[2] + *(float *)(this + 0x14);
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = in_stack_00000008[1] + *(float *)(this + 8);
  fVar3 = in_stack_00000008[1] + *(float *)(this + 0xc);
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *in_stack_00000008 + *(float *)this;
  fVar4 = *in_stack_00000008 + *(float *)(this + 4);
  fStack_18 = fVar4;
  if (fVar1 <= fVar4) {
    fStack_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *(float *)param_1 = fStack_18;
  *(float *)(param_1 + 4) = fVar4;
  *(float *)(param_1 + 8) = fStack_10;
  *(float *)(param_1 + 0xc) = fVar3;
  *(float *)(param_1 + 0x10) = fStack_8;
  *(float *)(param_1 + 0x14) = fVar2;
  return;
}


// ==== 101025cc USubsystem::operator=

/* public: class USubsystem & __thiscall USubsystem::operator=(class USubsystem const &) */

USubsystem * __thiscall USubsystem::operator=(USubsystem *this,USubsystem *param_1)

{
                    /* 0x25cc  543  ??4USubsystem@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  return this;
}


// ==== 101025d1 UEnum::UEnum

/* public: __thiscall UEnum::UEnum(class UEnum *) */

UEnum * __thiscall UEnum::UEnum(UEnum *this,UEnum *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x25d1  209  ??0UEnum@@QAE@PAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bd3db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101025d6 appThrowf

/* void __cdecl appThrowf(unsigned short const *,...) */

void __cdecl appThrowf(ushort *param_1,...)

{
  undefined *puStack_4;
  
                    /* 0x25d6  2124  ?appThrowf@@YAXPBGZZ */
  appGetVarArgs((ushort *)&DAT_102877f8,0x1000,&param_1);
  puStack_4 = &DAT_102877f8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&puStack_4,&DAT_101f843c);
}


// ==== 101025db FMemCache::FCacheItem::GetId

/* public: unsigned __int64 __thiscall FMemCache::FCacheItem::GetId(void) */

__uint64 __thiscall FMemCache::FCacheItem::GetId(FCacheItem *this)

{
                    /* 0x25db  1331  ?GetId@FCacheItem@FMemCache@@QAE_KXZ */
  return *(__uint64 *)this;
}


// ==== 101025e0 UArrayProperty::Identical

/* public: virtual int __thiscall UArrayProperty::Identical(void const *,void const *)const  */

int __thiscall UArrayProperty::Identical(UArrayProperty *this,void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x25e0  1429  ?Identical@UArrayProperty@@UBEHPBX0@Z */
  iVar1 = *(int *)((int)param_1 + 4);
  if (param_2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)param_2 + 4);
  }
  if (iVar1 == iVar4) {
    iVar4 = *(int *)(*(int *)(this + 0x78) + 0x44);
    iVar5 = *(int *)param_1;
    iVar6 = 0;
    if (param_2 == (void *)0x0) {
      if (0 < iVar1) {
        do {
          iVar2 = (**(code **)(**(int **)(this + 0x78) + 0x84))(iVar5,0);
          if (iVar2 == 0) {
            return 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + iVar4;
        } while (iVar6 < iVar1);
        return 1;
      }
    }
    else if (0 < iVar1) {
      iVar2 = *(int *)param_2 - iVar5;
      do {
        iVar3 = (**(code **)(**(int **)(this + 0x78) + 0x84))(iVar5,iVar2 + iVar5);
        if (iVar3 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + iVar4;
      } while (iVar6 < iVar1);
    }
    return 1;
  }
  return 0;
}


// ==== 101025e5 UByteProperty::UByteProperty

/* public: __thiscall UByteProperty::UByteProperty(void) */

UByteProperty * __thiscall UByteProperty::UByteProperty(UByteProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x25e5  190  ??0UByteProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7978;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101025ea FGlobalMath::SinFloat

/* public: float __thiscall FGlobalMath::SinFloat(float) */

float __thiscall FGlobalMath::SinFloat(FGlobalMath *this,float param_1)

{
  int iVar1;
  
                    /* 0x25ea  1875  ?SinFloat@FGlobalMath@@QAEMM@Z */
  iVar1 = FUN_1017b700();
  return *(float *)(this + (iVar1 >> 2 & 0x3fffU) * 4 + 0x8c);
}


// ==== 101025ef thunk_FUN_10137450 thunk -> 10137450

// ==== 101025f4 UPackage::Serialize

/* public: virtual void __thiscall UPackage::Serialize(class FArchive &) */

void __thiscall UPackage::Serialize(UPackage *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x25f4  1820  ?Serialize@UPackage@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bd0c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101025f9 UObject::execVirtualFunction

/* public: void __thiscall UObject::execVirtualFunction(struct FFrame &,void * const) */

void __thiscall UObject::execVirtualFunction(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  UFunction *pUVar3;
  undefined4 unaff_retaddr;
  
                    /* 0x25f9  2409  ?execVirtualFunction@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  iVar2 = *(int *)this;
  pUVar3 = FindFunctionChecked(this,uVar1,0);
  (**(code **)(iVar2 + 0x48))(param_1,unaff_retaddr,pUVar3);
  return;
}


// ==== 101025fe FMemCache::CreateNewFreeSpace

/* private: void __thiscall FMemCache::CreateNewFreeSpace(unsigned char *,unsigned char *,class
   FMemCache::FCacheItem *,class FMemCache::FCacheItem *,int) */

void __thiscall
FMemCache::CreateNewFreeSpace
          (FMemCache *this,uchar *param_1,uchar *param_2,FCacheItem *param_3,FCacheItem *param_4,
          int param_5)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x25fe  899  ?CreateNewFreeSpace@FMemCache@@AAEXPAE0PAVFCacheItem@1@1H@Z */
  puStack_c = &LAB_101b9ca0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (((param_3 == (FCacheItem *)0x0) || (*(int *)param_3 != 0 || *(int *)(param_3 + 4) != 0)) ||
     ((uint)(byte)param_3[0xe] != param_5)) {
    if (((param_4 == (FCacheItem *)0x0) || (*(int *)param_4 != 0 || *(int *)(param_4 + 4) != 0)) ||
       ((uint)(byte)param_4[0xe] != param_5)) {
      if (*(int *)(this + 0x20) == 0) {
        ExceptionList = &pvStack_10;
        appFailAssert("UnusedItems != NULL",".\\UnCache.cpp",0x149);
      }
      puVar1 = *(undefined4 **)(this + 0x20);
      *(undefined4 *)(this + 0x20) = puVar1[5];
      puVar1[2] = param_1;
      *(undefined1 *)((int)puVar1 + 0xe) = (undefined1)param_5;
      *(undefined2 *)(puVar1 + 3) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = param_4;
      puVar1[6] = param_3;
      puVar1[7] = 0;
      if (param_3 == (FCacheItem *)0x0) {
        *(undefined4 **)(this + 0x18) = puVar1;
      }
      else {
        *(undefined4 **)(param_3 + 0x14) = puVar1;
      }
      if (param_4 != (FCacheItem *)0x0) {
        *(undefined4 **)(param_4 + 0x18) = puVar1;
      }
    }
    else {
      *(uchar **)(param_4 + 8) = param_1;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102603 UObject::FinishThreadLoad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::FinishThreadLoad(void) */

void __cdecl UObject::FinishThreadLoad(void)

{
  UObject *this;
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2603  1015  ?FinishThreadLoad@UObject@@SAXXZ */
  puStack_c = &LAB_101b9370;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < DAT_103308ec; iVar1 = iVar1 + 1) {
    this = *(UObject **)(_GObjObjectsBuffer + iVar1 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    AddObject(this,-1);
  }
  thunk_FUN_10128110(0);
  DeleteAllHashObjectBuffer();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010260d FRange::Component

/* public: float & __thiscall FRange::Component(int) */

float * __thiscall FRange::Component(FRange *this,int param_1)

{
                    /* 0x260d  852  ?Component@FRange@@QAEAAMH@Z */
  return (float *)(this + param_1 * 4);
}


// ==== 10102617 UObject::execGetAxes

/* public: void __thiscall UObject::execGetAxes(struct FFrame &,void * const) */

void __thiscall UObject::execGetAxes(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uchar *puVar4;
  undefined4 unaff_EBP;
  uchar *puVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  FFrame **ppFVar7;
  FFrame *apFStack_b0 [3];
  uchar *puVar8;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uchar auStack_80 [8];
  undefined1 auStack_78 [4];
  FRotator aFStack_74 [20];
  uchar auStack_60 [8];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  FCoords aFStack_50 [4];
  uchar auStack_4c [8];
  FFrame aFStack_44 [68];
  
                    /* 0x2617  2227  ?execGetAxes@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  apFStack_b0[2] = (FFrame *)auStack_54;
  apFStack_b0[1] = param_1;
  apFStack_b0[0] = (FFrame *)0x10140c2f;
  (*(code *)(&GNatives)[bVar1])();
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  apFStack_b0[0] = aFStack_44;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar8 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar8 = auStack_4c;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_58);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar5 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar5 = auStack_60;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_78);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar4 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar4 = auStack_80;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar6 = &DAT_1023ff60;
  pFVar2 = aFStack_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    pFVar2 = pFVar2 + 4;
  }
  pFVar2 = FCoords::operator/=(aFStack_50,aFStack_74);
  ppFVar7 = apFStack_b0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppFVar7 = *(FFrame **)pFVar2;
    pFVar2 = pFVar2 + 4;
    ppFVar7 = ppFVar7 + 1;
  }
  *(uchar **)param_1 = puVar8;
  *(undefined4 *)(param_1 + 4) = unaff_ESI;
  *(undefined4 *)(param_1 + 8) = unaff_EBP;
  *(undefined4 *)puVar5 = unaff_EBX;
  *(undefined4 *)(puVar5 + 4) = uStack_94;
  *(undefined4 *)(puVar5 + 8) = uStack_90;
  *(undefined4 *)puVar4 = uStack_8c;
  *(undefined4 *)(puVar4 + 4) = uStack_88;
  *(undefined4 *)(puVar4 + 8) = uStack_84;
  return;
}


// ==== 1010261c UObject::execGreaterEqual_IntInt

/* public: void __thiscall UObject::execGreaterEqual_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execGreaterEqual_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x261c  2239  ?execGreaterEqual_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = 1;
  return;
}


// ==== 10102621 FMatrix::TransformFVector

/* public: class FVector __thiscall FMatrix::TransformFVector(class FVector const &)const  */

void __thiscall FMatrix::TransformFVector(FMatrix *this,FVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_stack_00000008;
  
                    /* 0x2621  1975  ?TransformFVector@FMatrix@@QBE?AVFVector@@ABV2@@Z */
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[1];
  fVar3 = in_stack_00000008[2];
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 0x14);
  fVar6 = *(float *)(this + 0x24);
  fVar7 = *(float *)(this + 0x34);
  fVar8 = *(float *)(this + 8);
  fVar9 = *(float *)(this + 0x18);
  fVar10 = *(float *)(this + 0x28);
  fVar11 = *(float *)(this + 0x38);
  *(float *)param_1 =
       fVar2 * *(float *)(this + 0x10) + fVar1 * *(float *)this + fVar3 * *(float *)(this + 0x20) +
       *(float *)(this + 0x30);
  *(float *)(param_1 + 4) = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
  *(float *)(param_1 + 8) = fVar8 * fVar1 + fVar9 * fVar2 + fVar10 * fVar3 + fVar11;
  return;
}


// ==== 10102626 UObject::execFloatToInt

/* public: void __thiscall UObject::execFloatToInt(struct FFrame &,void * const) */

void __thiscall UObject::execFloatToInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2626  2225  ?execFloatToInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  uVar2 = FUN_1017b700();
  *unaff_retaddr = uVar2;
  return;
}


// ==== 1010262b FFileManager::CreateMemReader

/* public: virtual class FArchive * __thiscall FFileManager::CreateMemReader(void *,int) */

FArchive * __thiscall FFileManager::CreateMemReader(FFileManager *this,void *param_1,int param_2)

{
                    /* 0x262b  898  ?CreateMemReader@FFileManager@@UAEPAVFArchive@@PAXH@Z */
  return (FArchive *)0x0;
}


// ==== 10102630 FMemCache::CheckState

/* public: void __thiscall FMemCache::CheckState(void) */

void __thiscall FMemCache::CheckState(FMemCache *this)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iStack_34;
  uint uStack_30;
  int iStack_28;
  int iStack_24;
  uint uStack_1c;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2630  834  ?CheckState@FMemCache@@QAEXXZ */
  puStack_c = &LAB_101b9cc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)this != 1) {
    ExceptionList = &pvStack_10;
    appFailAssert("Initialized == 1",".\\UnCache.cpp",0xd1);
  }
  if (*(int *)(this + 0x18) == 0) {
    appFailAssert("CacheItems != NULL",".\\UnCache.cpp",0xd4);
  }
  iStack_18 = 0;
  iStack_28 = 0;
  bVar2 = false;
  iStack_24 = 0;
  uStack_30 = 0xffffffff;
  uStack_1c = *(uint *)(this + 0x10024);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  puVar6 = *(uint **)(this + 0x18);
  do {
    if (puVar6 == *(uint **)(this + 0x1c)) {
      if (uStack_1c != *(int *)(this + 0x10054) + *(int *)(this + 0x10024)) {
        appFailAssert("ExpectedPointer == CacheMemory + MemTotal",".\\UnCache.cpp",0x104);
      }
      for (iVar4 = *(int *)(this + 0x20); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
        iStack_18 = iStack_18 + 1;
      }
      uStack_8 = 0;
      if (iStack_18 + 1 != *(int *)(this + 0x10044)) {
        appFailAssert("ItemCount+1==ItemsTotal",".\\UnCache.cpp",0x10e);
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,5);
      for (uVar5 = 0; uVar5 < 0x4000; uVar5 = uVar5 + 1) {
        for (puVar6 = *(uint **)(this + uVar5 * 4 + 0x24); puVar6 != (uint *)0x0;
            puVar6 = (uint *)puVar6[7]) {
          iStack_24 = iStack_24 + 1;
          uVar1 = *puVar6;
          if ((((uVar1 >> 0xc ^ uVar1) >> 0xc ^ uVar1) & 0x3fff) != uVar5) {
            appFailAssert("GHash(Item->Id) == i",".\\UnCache.cpp",0x11a);
          }
          for (puVar3 = (uint *)puVar6[7]; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[7]) {
            if ((*puVar3 == *puVar6) && (puVar3[1] == puVar6[1])) {
              appFailAssert("Other->Id != Item->Id",".\\UnCache.cpp",0x11e);
            }
          }
        }
      }
      if (iStack_24 != iStack_28) {
        appFailAssert("HashCount == UsedItemCount",".\\UnCache.cpp",0x121);
      }
      ExceptionList = pvStack_10;
      return;
    }
    if (puVar6[2] != uStack_1c) {
      appFailAssert("Item->Data == ExpectedPointer",".\\UnCache.cpp",0xdf);
    }
    if (puVar6[5] == 0) {
      appFailAssert("Item->LinearNext",".\\UnCache.cpp",0xe0);
    }
    if (*(uint **)(puVar6[5] + 0x18) != puVar6) {
      appFailAssert("Item->LinearNext->LinearPrev == Item",".\\UnCache.cpp",0xe1);
    }
    uStack_1c = uStack_1c + (*(int *)(puVar6[5] + 8) - puVar6[2]);
    iStack_18 = iStack_18 + 1;
    if (*puVar6 == 0 && puVar6[1] == 0) {
      if ((*(byte *)((int)puVar6 + 0xe) == uStack_30) && (bVar2)) {
        appFailAssert("!WasFree",".\\UnCache.cpp",0xed);
      }
      bVar2 = true;
      if (*puVar6 != 0 || puVar6[1] != 0) goto LAB_1012f4b0;
    }
    else {
LAB_1012f4b0:
      bVar2 = false;
    }
    uStack_30 = (uint)*(byte *)((int)puVar6 + 0xe);
    if (puVar6 != *(uint **)(this + 0x18)) {
      if (puVar6[6] == 0) {
        appFailAssert("Item->LinearPrev",".\\UnCache.cpp",0xf5);
      }
      if (*(uint **)(puVar6[6] + 0x14) != puVar6) {
        appFailAssert("Item->LinearPrev->LinearNext == Item",".\\UnCache.cpp",0xf6);
      }
    }
    if (*puVar6 != 0 || puVar6[1] != 0) {
      iStack_28 = iStack_28 + 1;
      iStack_34 = 0;
      uVar5 = *puVar6;
      for (puVar3 = *(uint **)(this + (((uVar5 >> 0xc ^ uVar5) >> 0xc ^ uVar5) & 0x3fff) * 4 + 0x24)
          ; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[7]) {
        iStack_34 = iStack_34 + (uint)(puVar3 == puVar6);
      }
      if (iStack_34 == 0) {
        appFailAssert("HashedCount!=0",".\\UnCache.cpp",0x100);
      }
      else if (iStack_34 == 1) goto LAB_1012f570;
      appFailAssert("HashedCount==1",".\\UnCache.cpp",0x101);
    }
LAB_1012f570:
    puVar6 = (uint *)puVar6[5];
  } while( true );
}


// ==== 10102635 thunk_FUN_1012b0e0 thunk -> 1012b0e0

// ==== 1010263a FScopeCriticalSection::operator=

/* public: class FScopeCriticalSection & __thiscall FScopeCriticalSection::operator=(class
   FScopeCriticalSection const &) */

FScopeCriticalSection * __thiscall
FScopeCriticalSection::operator=(FScopeCriticalSection *this,FScopeCriticalSection *param_1)

{
                    /* 0x263a  488  ??4FScopeCriticalSection@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}


// ==== 10102649 FFeedbackContext::MapCheck_Show

/* public: virtual void __thiscall FFeedbackContext::MapCheck_Show(void) */

void __thiscall FFeedbackContext::MapCheck_Show(FFeedbackContext *this)

{
                    /* 0x2649  1605  ?MapCheck_Show@FFeedbackContext@@UAEXXZ */
  return;
}


// ==== 1010264e FFileStream::Create

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: int __thiscall FFileStream::Create(int,unsigned short const *) */

int __thiscall FFileStream::Create(FFileStream *this,int param_1,ushort *param_2)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  HANDLE pvVar4;
  char *pcVar5;
  LPCSTR lpMultiByteStr;
  undefined4 uVar6;
  undefined4 uVar7;
  char *_Mode;
  undefined4 uVar8;
  
                    /* 0x264e  892  ?Create@FFileStream@@QAEHHPBG@Z */
  iVar1 = param_1 * 0x24;
  if (*(int *)(Streams + iVar1 + 0x20) == 0) {
    if (GUnicodeOS == 0) {
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 == 0) {
        lpMultiByteStr = (LPCSTR)0x0;
      }
      else {
        WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        lpMultiByteStr = &stack0xfffffff0;
      }
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,lpMultiByteStr,iVar3,(LPCSTR)0x0,(LPBOOL)0x0);
      pvVar4 = CreateFileA(lpMultiByteStr,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                          );
    }
    else {
      pvVar4 = CreateFileW((LPCWSTR)param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                           (HANDLE)0x0);
    }
    if (pvVar4 != (HANDLE)0xffffffff) {
      *(HANDLE *)(Streams + iVar1 + 4) = pvVar4;
      return 1;
    }
    *(undefined4 *)(Streams + iVar1 + 4) = 0;
  }
  else if (*(int *)(Streams + iVar1 + 0x20) - 1U < 2) {
    if (GUnicodeOS == 0) {
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 == 0) {
        pcVar5 = (char *)0x0;
      }
      else {
        winGetSizeANSI(param_2);
        pcVar5 = &stack0xfffffff0;
      }
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      _Mode = "rb";
      pcVar5 = winToANSI(pcVar5,param_2,iVar3);
      pFVar2 = _fopen(pcVar5,_Mode);
    }
    else {
      pFVar2 = __wfopen((wchar_t *)param_2,L"rb");
    }
    if (pFVar2 != (FILE *)0x0) {
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 == 0) {
        pcVar5 = (char *)0x0;
      }
      else {
        winGetSizeANSI(param_2);
        pcVar5 = &stack0xfffffff0;
      }
      iVar3 = WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      uVar6 = *(undefined4 *)(Streams + iVar1 + 8);
      uVar8 = 0;
      uVar7 = 0;
      pcVar5 = winToANSI(pcVar5,param_2,iVar3);
      iVar3 = ov_open2(pcVar5,uVar6,uVar7,uVar8);
      if (-1 < iVar3) {
        *(FILE **)(Streams + iVar1 + 4) = pFVar2;
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10102658 FFileStream::Destroy

/* public: int __thiscall FFileStream::Destroy(int) */

int __thiscall FFileStream::Destroy(FFileStream *this,int param_1)

{
  int iVar1;
  
                    /* 0x2658  914  ?Destroy@FFileStream@@QAEHH@Z */
  iVar1 = param_1 * 0x24;
  if (*(int *)(Streams + iVar1 + 0x20) == 0) {
    if (*(HANDLE *)(Streams + iVar1 + 4) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(Streams + iVar1 + 4));
    }
    *(undefined4 *)(Streams + iVar1 + 8) = 0;
    *(undefined4 *)(Streams + iVar1 + 4) = 0;
    *(undefined4 *)(Streams + iVar1 + 0x18) = 0;
    return 1;
  }
  if (*(int *)(Streams + iVar1 + 0x20) - 1U < 2) {
    if (*(int *)(Streams + iVar1 + 8) != 0) {
      ov_clear(*(int *)(Streams + iVar1 + 8));
    }
    *(undefined4 *)(Streams + iVar1 + 8) = 0;
    *(undefined4 *)(Streams + iVar1 + 4) = 0;
    *(undefined4 *)(Streams + iVar1 + 0x18) = 0;
    return 1;
  }
  return 0;
}


// ==== 1010265d FCoords::Matrix

/* public: class FMatrix __thiscall FCoords::Matrix(void)const  */

void __thiscall FCoords::Matrix(FCoords *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *in_stack_00000004;
  
                    /* 0x265d  1610  ?Matrix@FCoords@@QBE?AVFMatrix@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 0xc);
  in_stack_00000004[1] = *(undefined4 *)(this + 0x18);
  in_stack_00000004[2] = *(undefined4 *)(this + 0x24);
  in_stack_00000004[3] = 0;
  in_stack_00000004[4] = *(undefined4 *)(this + 0x10);
  in_stack_00000004[5] = *(undefined4 *)(this + 0x1c);
  in_stack_00000004[6] = *(undefined4 *)(this + 0x28);
  in_stack_00000004[7] = 0;
  in_stack_00000004[8] = *(undefined4 *)(this + 0x14);
  in_stack_00000004[9] = *(undefined4 *)(this + 0x20);
  in_stack_00000004[10] = *(undefined4 *)(this + 0x2c);
  in_stack_00000004[0xb] = 0;
  fVar1 = -*(float *)this;
  fVar2 = -*(float *)(this + 4);
  fVar3 = -*(float *)(this + 8);
  in_stack_00000004[0xc] =
       *(float *)(this + 0x14) * fVar3 +
       fVar1 * *(float *)(this + 0xc) + *(float *)(this + 0x10) * fVar2;
  in_stack_00000004[0xd] =
       *(float *)(this + 0x20) * fVar3 +
       *(float *)(this + 0x18) * fVar1 + *(float *)(this + 0x1c) * fVar2;
  in_stack_00000004[0xe] =
       *(float *)(this + 0x2c) * fVar3 +
       *(float *)(this + 0x24) * fVar1 + *(float *)(this + 0x28) * fVar2;
  in_stack_00000004[0xf] = 0x3f800000;
  return;
}


// ==== 10102662 UProperty::CleanupDestroyed

/* public: virtual void __thiscall UProperty::CleanupDestroyed(unsigned char *)const  */

void __thiscall UProperty::CleanupDestroyed(UProperty *this,uchar *param_1)

{
                    /* 0x2662  842  ?CleanupDestroyed@UProperty@@UBEXPAE@Z */
  return;
}


// ==== 10102667 FObjectExport::operator=

/* public: struct FObjectExport & __thiscall FObjectExport::operator=(struct FObjectExport const &)
    */

FObjectExport * __thiscall FObjectExport::operator=(FObjectExport *this,FObjectExport *param_1)

{
  int iVar1;
  FObjectExport *pFVar2;
  
                    /* 0x2667  472  ??4FObjectExport@@QAEAAU0@ABU0@@Z */
  pFVar2 = this;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 1010266c thunk_FUN_10129ed0 thunk -> 10129ed0

// ==== 10102676 UObject::execEnable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::execEnable(struct FFrame &,void * const) */

void __thiscall UObject::execEnable(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FOutputDevice *unaff_ESI;
  undefined8 uVar8;
  undefined4 uStack_4;
  
                    /* 0x2676  2204  ?execEnable@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if ((unaff_ESI + -300 < (FOutputDevice *)0x40) && (*(int *)(this + 0xc) != 0)) {
    iVar2 = *(int *)(this + 0xc);
    uVar3 = *(uint *)(*(int *)(this + 0x24) + 0x8c);
    uVar4 = *(uint *)(*(int *)(this + 0x24) + 0x90);
    uVar5 = *(uint *)(*(int *)(iVar2 + 0x1c) + 0x8c);
    uVar6 = *(uint *)(*(int *)(iVar2 + 0x1c) + 0x90);
    uVar8 = __allshl();
    uVar7 = *(uint *)(*(int *)(iVar2 + 0x1c) + 0x98);
    *(uint *)(iVar2 + 0x20) =
         *(uint *)(iVar2 + 0x20) |
         (uVar3 | uVar5) & (uint)uVar8 & *(uint *)(*(int *)(iVar2 + 0x1c) + 0x94);
    *(uint *)(iVar2 + 0x24) =
         *(uint *)(iVar2 + 0x24) | (uVar4 | uVar6) & (uint)((ulonglong)uVar8 >> 0x20) & uVar7;
  }
  else {
    FOutputDevice::Logf(unaff_ESI,(ushort *)param_1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  return;
}


// ==== 1010267b thunk_FUN_101483f0 thunk -> 101483f0

// ==== 10102680 FString::operator!=

/* public: int __thiscall FString::operator!=(unsigned short const *)const  */

int __thiscall FString::operator!=(FString *this,ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x2680  588  ??9FString@@QBEHPBG@Z */
  if (*(int *)(this + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)this;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return (uint)(iVar2 != 0);
}


