// ==== 10103cec thunk_FUN_1015d900 thunk -> 1015d900

// ==== 10103cf1 appMemcmp

/* int __cdecl appMemcmp(void const *,void const *,int) */

int __cdecl appMemcmp(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  for (; 3 < (uint)param_3; param_3 = param_3 - 4) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_1012d93b;
    param_2 = (void *)((int)param_2 + 4);
    param_1 = (void *)((int)param_1 + 4);
  }
  if (param_3 == 0) {
LAB_1012d999:
    iVar1 = 0;
  }
  else {
LAB_1012d93b:
    iVar2 = (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
    if (iVar2 == 0) {
      if (param_3 == 1) goto LAB_1012d999;
      iVar2 = (uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1);
      if (iVar2 == 0) {
        if (param_3 == 2) goto LAB_1012d999;
        iVar2 = (uint)*(byte *)((int)param_1 + 2) - (uint)*(byte *)((int)param_2 + 2);
        if (iVar2 == 0) {
          if ((param_3 == 3) ||
             (iVar2 = (uint)*(byte *)((int)param_1 + 3) - (uint)*(byte *)((int)param_2 + 3),
             iVar2 == 0)) goto LAB_1012d999;
        }
      }
    }
    iVar1 = 1;
    if (iVar2 < 1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== 10103cf6 UMapProperty::InternalConstructor

/* public: static void __cdecl UMapProperty::InternalConstructor(void *) */

void __cdecl UMapProperty::InternalConstructor(void *param_1)

{
                    /* 0x3cf6  1490  ?InternalConstructor@UMapProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UMapProperty(param_1);
    return;
  }
  return;
}


// ==== 10103cfb FRange::operator+

/* public: class FRange __thiscall FRange::operator+(class FRange const &)const  */

FRange * __thiscall FRange::operator+(FRange *this,FRange *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x3cfb  636  ??HFRange@@QBE?AV0@ABV0@@Z */
  FRange(param_1,*in_stack_00000008 + *(float *)this,in_stack_00000008[1] + *(float *)(this + 4));
  return param_1;
}


// ==== 10103d00 UObject::GetLinker

/* public: class ULinkerLoad * __thiscall UObject::GetLinker(void) */

ULinkerLoad * __thiscall UObject::GetLinker(UObject *this)

{
                    /* 0x3d00  1344  ?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */
  return *(ULinkerLoad **)(this + 0x10);
}


// ==== 10103d05 thunk_FUN_10118d50 thunk -> 10118d50

// ==== 10103d0a UObject::execOr_IntInt

/* public: void __thiscall UObject::execOr_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execOr_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x3d0a  2342  ?execOr_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *(undefined4 **)unaff_ESI = &uStack_4;
  return;
}


// ==== 10103d0f FMatrix::operator*=

/* public: void __thiscall FMatrix::operator*=(class FMatrix) */

void __thiscall
FMatrix::operator*=(FMatrix *this,float param_2,float param_3,float param_4,float param_5,
                   float param_6,float param_7,float param_8,float param_9,float param_10,
                   float param_11,float param_12,float param_13,float param_14,float param_15,
                   float param_16,float param_17)

{
  int iVar1;
  float *pfVar2;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x3d0f  663  ??XFMatrix@@QAEXV0@@Z */
  afStack_40[0] =
       param_10 * *(float *)(this + 8) + param_6 * *(float *)(this + 4) + param_2 * *(float *)this +
       param_14 * *(float *)(this + 0xc);
  afStack_40[1] =
       *(float *)(this + 0xc) * param_15 +
       param_11 * *(float *)(this + 8) + param_7 * *(float *)(this + 4) + param_3 * *(float *)this;
  afStack_40[2] =
       *(float *)(this + 0xc) * param_16 +
       param_12 * *(float *)(this + 8) + param_8 * *(float *)(this + 4) + *(float *)this * param_4;
  afStack_40[3] =
       *(float *)(this + 0xc) * param_17 +
       param_13 * *(float *)(this + 8) + param_9 * *(float *)(this + 4) + *(float *)this * param_5;
  fStack_30 = param_14 * *(float *)(this + 0x1c) +
              *(float *)(this + 0x18) * param_10 +
              param_2 * *(float *)(this + 0x10) + *(float *)(this + 0x14) * param_6;
  fStack_2c = param_15 * *(float *)(this + 0x1c) +
              *(float *)(this + 0x18) * param_11 +
              param_3 * *(float *)(this + 0x10) + *(float *)(this + 0x14) * param_7;
  fStack_28 = param_16 * *(float *)(this + 0x1c) +
              *(float *)(this + 0x18) * param_12 +
              param_4 * *(float *)(this + 0x10) + *(float *)(this + 0x14) * param_8;
  fStack_24 = param_17 * *(float *)(this + 0x1c) +
              *(float *)(this + 0x18) * param_13 +
              param_5 * *(float *)(this + 0x10) + *(float *)(this + 0x14) * param_9;
  fStack_20 = param_14 * *(float *)(this + 0x2c) +
              *(float *)(this + 0x28) * param_10 +
              param_2 * *(float *)(this + 0x20) + *(float *)(this + 0x24) * param_6;
  fStack_1c = param_15 * *(float *)(this + 0x2c) +
              *(float *)(this + 0x28) * param_11 +
              param_3 * *(float *)(this + 0x20) + *(float *)(this + 0x24) * param_7;
  fStack_18 = param_16 * *(float *)(this + 0x2c) +
              *(float *)(this + 0x28) * param_12 +
              param_4 * *(float *)(this + 0x20) + *(float *)(this + 0x24) * param_8;
  fStack_14 = param_17 * *(float *)(this + 0x2c) +
              *(float *)(this + 0x28) * param_13 +
              param_5 * *(float *)(this + 0x20) + *(float *)(this + 0x24) * param_9;
  fStack_10 = param_10 * *(float *)(this + 0x38) +
              *(float *)(this + 0x34) * param_6 + *(float *)(this + 0x30) * param_2 +
              *(float *)(this + 0x3c) * param_14;
  fStack_c = param_15 * *(float *)(this + 0x3c) +
             *(float *)(this + 0x38) * param_11 +
             *(float *)(this + 0x34) * param_7 + *(float *)(this + 0x30) * param_3;
  fStack_8 = param_16 * *(float *)(this + 0x3c) +
             *(float *)(this + 0x38) * param_12 +
             param_4 * *(float *)(this + 0x30) + *(float *)(this + 0x34) * param_8;
  fStack_4 = param_17 * *(float *)(this + 0x3c) +
             *(float *)(this + 0x38) * param_13 +
             param_5 * *(float *)(this + 0x30) + *(float *)(this + 0x34) * param_9;
  pfVar2 = afStack_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(float *)this = *pfVar2;
    pfVar2 = pfVar2 + 1;
    this = this + 4;
  }
  return;
}


// ==== 10103d14 FPosition::FPosition

/* public: __thiscall FPosition::FPosition(class FVector,class FCoords) */

void __thiscall
FPosition::FPosition(FPosition *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  FPosition *pFVar3;
  
                    /* 0x3d14  111  ??0FPosition@@QAE@VFVector@@VFCoords@@@Z */
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  puVar2 = (undefined4 *)&stack0x00000010;
  pFVar3 = this + 0xc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pFVar3 = pFVar3 + 4;
  }
  return;
}


// ==== 10103d19 FVertexHit::operator==

/* public: int __thiscall FVertexHit::operator==(class FVertexHit const &)const  */

int __thiscall FVertexHit::operator==(FVertexHit *this,FVertexHit *param_1)

{
                    /* 0x3d19  577  ??8FVertexHit@@QBEHABV0@@Z */
  if (((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(this + 8) == *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}


// ==== 10103d1e UConst::UConst

/* public: __thiscall UConst::UConst(class UConst *,unsigned short const *) */

UConst * __thiscall UConst::UConst(UConst *this,UConst *param_1,ushort *param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3d1e  203  ??0UConst@@QAE@PAV0@PBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba113;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x40),param_2);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103d23 UByteProperty::CopyCompleteValue

/* public: virtual void __thiscall UByteProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UByteProperty::CopyCompleteValue(UByteProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x3d23  866  ?CopyCompleteValue@UByteProperty@@UBEXPAX0PAVUObject@@@Z */
  if (*(size_t *)(this + 0x40) == 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  }
  _memcpy(param_1,param_2,*(size_t *)(this + 0x40));
  return;
}


// ==== 10103d28 UFactory::operator=

/* public: class UFactory & __thiscall UFactory::operator=(class UFactory const &) */

UFactory * __thiscall UFactory::operator=(UFactory *this,UFactory *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  
                    /* 0x3d28  521  ??4UFactory@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  pFVar1 = (FArray *)(this + 0x3c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  if (pFVar1 != (FArray *)(param_1 + 0x3c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x44) = uVar2;
    *(undefined4 *)(this + 0x40) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x40) != 0) {
      if (*(int *)(param_1 + 0x40) == 0) {
        puVar4 = &DAT_101cdd44;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x3c);
      }
      _memcpy(*(void **)pFVar1,puVar4,*(int *)(this + 0x40) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x48);
  if (pFVar1 != (FArray *)(param_1 + 0x48)) {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(this + 0x50) = uVar2;
    *(undefined4 *)(this + 0x4c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x4c) != 0) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        puVar4 = &DAT_101cdd44;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x48);
      }
      _memcpy(*(void **)pFVar1,puVar4,*(int *)(this + 0x4c) * 2);
    }
  }
  pFVar1 = (FArray *)(this + 0x54);
  if (pFVar1 != (FArray *)(param_1 + 0x54)) {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(this + 0x5c) = uVar2;
    *(undefined4 *)(this + 0x58) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(this + 0x58) != 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        puVar4 = &DAT_101cdd44;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x54);
      }
      _memcpy(*(void **)pFVar1,puVar4,*(int *)(this + 0x58) * 2);
    }
  }
  thunk_FUN_10124a90(param_1 + 0x60);
  *(uint *)(this + 0x6c) =
       *(uint *)(this + 0x6c) ^ (*(uint *)(this + 0x6c) ^ *(uint *)(param_1 + 0x6c)) & 1;
  uVar3 = (*(uint *)(param_1 + 0x6c) ^ *(uint *)(this + 0x6c)) & 2 ^ *(uint *)(this + 0x6c);
  *(uint *)(this + 0x6c) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x6c) ^ uVar3) & 4 ^ uVar3;
  *(uint *)(this + 0x6c) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x6c) ^ uVar3) & 8 ^ uVar3;
  *(uint *)(this + 0x6c) = uVar3;
  *(uint *)(this + 0x6c) = (*(uint *)(param_1 + 0x6c) ^ uVar3) & 0x10 ^ uVar3;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return this;
}


// ==== 10103d2d thunk_FUN_1011a980 thunk -> 1011a980

// ==== 10103d32 UFunction::~UFunction

/* public: virtual __thiscall UFunction::~UFunction(void) */

void __thiscall UFunction::~UFunction(UFunction *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3d32  331  ??1UFunction@@UAE@XZ */
  puStack_8 = &LAB_101b76e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UStruct::~UStruct((UStruct *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103d37 FFileStream::QueryStream

/* public: int __thiscall FFileStream::QueryStream(int,int &) */

int __thiscall FFileStream::QueryStream(FFileStream *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  FFileStream *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3d37  1744  ?QueryStream@FFileStream@@QAEHHAAH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbf38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFStack_10 = this;
  FScopeCriticalSection::FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10,CriticalSection)
  ;
  iVar2 = 0;
  iVar1 = param_1 * 0x24;
  *param_2 = *(int *)(Streams + iVar1 + 0x14);
  if ((*(int *)(Streams + iVar1 + 0x1c) == 0) && (*(int *)(Streams + iVar1 + 0x18) != 0)) {
    iVar2 = 1;
  }
  uStack_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10);
  ExceptionList = pvStack_c;
  return iVar2;
}


// ==== 10103d3c UStruct::UStruct

/* protected: __thiscall UStruct::UStruct(void) */

UStruct * __thiscall UStruct::UStruct(UStruct *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3d3c  274  ??0UStruct@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7693;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = UField::vftable;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103d41 ULinkerLoad::DetachAllRoughLoaders

/* private: void __thiscall ULinkerLoad::DetachAllRoughLoaders(int) */

void __thiscall ULinkerLoad::DetachAllRoughLoaders(ULinkerLoad *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3d41  932  ?DetachAllRoughLoaders@ULinkerLoad@@AAEXH@Z */
  puStack_c = &LAB_101bb7b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x510); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(this + 0x50c) + iVar2 * 4);
    for (iVar3 = 0; iVar3 < (int)puVar1[2]; iVar3 = iVar3 + 1) {
      if (param_1 != 0) {
        (**(code **)*puVar1)(iVar3);
      }
      *(undefined4 *)(puVar1[1] + iVar3 * 4) = 0;
      *(undefined4 *)(puVar1[4] + iVar3 * 4) = 0;
    }
  }
  thunk_FUN_1011a740(0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103d46 UFactory::~UFactory

/* public: virtual __thiscall UFactory::~UFactory(void) */

void __thiscall UFactory::~UFactory(UFactory *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x3d46  327  ??1UFactory@@UAE@XZ */
  puStack_8 = &LAB_101b9134;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 4;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 3;
  thunk_FUN_10124a00();
  iStack_4._0_1_ = 2;
  FString::~FString((FString *)(this + 0x54));
  iStack_4._0_1_ = 1;
  FString::~FString((FString *)(this + 0x48));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString((FString *)(this + 0x3c));
  iStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103d4b FFileManager::CalcHomeDir

/* public: virtual unsigned short const * __thiscall FFileManager::CalcHomeDir(void) */

ushort * __thiscall FFileManager::CalcHomeDir(FFileManager *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3d4b  828  ?CalcHomeDir@FFileManager@@UAEPBGXZ */
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


// ==== 10103d50 ULinkerLoad::operator_new

/* public: static void * __cdecl ULinkerLoad::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
ULinkerLoad::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3d50  389  ??2ULinkerLoad@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10103d55 L2ThreadBase::L2ThreadBase

/* public: __thiscall L2ThreadBase::L2ThreadBase(class L2ThreadBase const &) */

void __thiscall L2ThreadBase::L2ThreadBase(L2ThreadBase *this,L2ThreadBase *param_1)

{
  int iVar1;
  L2ThreadBase *pLVar2;
  L2ThreadBase *pLVar3;
  
                    /* 0x3d55  175  ??0L2ThreadBase@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  pLVar2 = param_1 + 0x14;
  pLVar3 = this + 0x14;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return;
}


// ==== 10103d5a UObject::execGetUnAxes

/* public: void __thiscall UObject::execGetUnAxes(struct FFrame &,void * const) */

void __thiscall UObject::execGetUnAxes(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x3d5a  2234  ?execGetUnAxes@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  apFStack_b0[2] = (FFrame *)auStack_54;
  apFStack_b0[1] = param_1;
  apFStack_b0[0] = (FFrame *)0x10140e4f;
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
  pFVar2 = FCoords::operator*=(aFStack_50,aFStack_74);
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


// ==== 10103d64 UObject::FindStructProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindStructProperty(class FString,class UStruct * *) */

int __thiscall
UObject::FindStructProperty
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
  
                    /* 0x3d64  1014  ?FindStructProperty@UObject@@QAEHVFString@@PAPAVUStruct@@@Z */
  puStack_8 = &LAB_101bcdd0;
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
      if (pUVar1 == &UStructProperty::PrivateStaticClass) {
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


// ==== 10103d6e appStaticString1024

/* unsigned short * __cdecl appStaticString1024(void) */

ushort * __cdecl appStaticString1024(void)

{
  uint uVar1;
  
                    /* 0x3d6e  2102  ?appStaticString1024@@YAPAGXZ */
  uVar1 = DAT_10323864 & 0xff;
  DAT_10323864 = DAT_10323864 + 1;
  *(ushort *)(&DAT_10289ec8 + uVar1 * 0x800) = 0;
  return (ushort *)(&DAT_10289ec8 + uVar1 * 0x800);
}


// ==== 10103d73 FRotator::Add

/* public: class FRotator __thiscall FRotator::Add(int,int,int) */

void __thiscall FRotator::Add(FRotator *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int in_stack_00000010;
  
                    /* 0x3d73  777  ?Add@FRotator@@QAE?AV1@HHH@Z */
  *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  *(int *)(this + 8) = *(int *)(this + 8) + in_stack_00000010;
  *(int *)this = *(int *)this + param_2;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 10103d78 UObject::execInterpCurveGetInputDomain

/* public: void __thiscall UObject::execInterpCurveGetInputDomain(struct FFrame &,void * const) */

void __thiscall UObject::execInterpCurveGetInputDomain(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float *pfStack_34;
  int iStack_30;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x3d78  2274  ?execInterpCurveGetInputDomain@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bb578;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FInterpCurve::FInterpCurve((FInterpCurve *)&pfStack_34);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pfStack_34);
  fStack_18 = 0.0;
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_18);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = &fStack_18;
  }
  fStack_1c = 0.0;
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_1c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar4 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar4 = &fStack_1c;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (iStack_30 < 2) {
    *pfVar2 = 0.0;
    *pfVar4 = 0.0;
    uStack_8 = uStack_8 & 0xffffff00;
    FInterpCurve::~FInterpCurve((FInterpCurve *)&pfStack_34);
    ExceptionList = pvStack_10;
    return;
  }
  *pfVar2 = *pfStack_34;
  fVar5 = (float10)*pfStack_34;
  iVar3 = 1;
  while( true ) {
    *pfVar4 = (float)fVar5;
    iStack_20 = iVar3;
    if (iStack_30 <= iVar3) break;
    fVar5 = (float10)thunk_FUN_10114810(*pfVar2,pfStack_34[iVar3 * 2]);
    *pfVar2 = (float)fVar5;
    fVar5 = (float10)thunk_FUN_101147b0(*pfVar4,pfStack_34[iVar3 * 2]);
    iVar3 = iVar3 + 1;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FInterpCurve::~FInterpCurve((FInterpCurve *)&pfStack_34);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103d7d FLogOutError::Serialize

/* public: virtual void __thiscall FLogOutError::Serialize(unsigned short const *,enum EName) */

void __thiscall FLogOutError::Serialize(FLogOutError *this,ushort *param_1,EName param_2)

{
                    /* 0x3d7d  1798  ?Serialize@FLogOutError@@UAEXPBGW4EName@@@Z */
  return;
}


// ==== 10103d8c thunk_FUN_10109010 thunk -> 10109010

// ==== 10103d91 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,class FDependency &) */

FArchive * __cdecl operator<<(FArchive *param_1,FDependency *param_2)

{
  FArchive *pFVar1;
  
                    /* 0x3d91  551  ??6@YAAAVFArchive@@AAV0@AAVFDependency@@@Z */
  pFVar1 = (FArchive *)(**(code **)(*(int *)param_1 + 0x18))(param_2);
  (**(code **)(*(int *)pFVar1 + 4))(param_2 + 4,4);
  (**(code **)(*(int *)pFVar1 + 4))(param_2 + 8,4);
  return pFVar1;
}


// ==== 10103d96 appCmdLine

/* unsigned short const * __cdecl appCmdLine(void) */

ushort * __cdecl appCmdLine(void)

{
                    /* 0x3d96  2025  ?appCmdLine@@YAPBGXZ */
  return (ushort *)&DAT_10285088;
}


// ==== 10103d9b GRegisterNative

/* unsigned char __cdecl GRegisterNative(int,void (__thiscall UObject::*const &)(struct FFrame
   &,void * const)) */

uchar __cdecl GRegisterNative(int param_1,_func_void_FFrame_ptr_void_ptr **param_2)

{
  int iVar1;
  _func_void_FFrame_ptr_void_ptr ***ppp_Var2;
  
                    /* 0x3d9b  1253  ?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */
  if (DAT_10284688 == 0) {
    ppp_Var2 = &GNatives;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppp_Var2 = (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined;
      ppp_Var2 = ppp_Var2 + 1;
    }
    DAT_10284688 = 1;
  }
  if (param_1 != -1) {
    if (((param_1 < 0) || (0x1000 < (uint)param_1)) ||
       ((&GNatives)[param_1] != (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined)) {
      GNativeDuplicate = param_1;
    }
    (&GNatives)[param_1] = (_func_void_FFrame_ptr_void_ptr **)*param_2;
  }
  return '\0';
}


// ==== 10103da0 UMapProperty::UMapProperty

/* public: __thiscall UMapProperty::UMapProperty(class UMapProperty const &) */

UMapProperty * __thiscall UMapProperty::UMapProperty(UMapProperty *this,UMapProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3da0  241  ??0UMapProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7eb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103da5 FCoords::operator*=

/* public: class FCoords & __thiscall FCoords::operator*=(class FScale const &) */

FCoords * __thiscall FCoords::operator*=(FCoords *this,FScale *param_1)

{
  float fVar1;
  FScale FVar2;
  int iVar3;
  undefined4 *puVar4;
  FCoords *pFVar5;
  float10 fVar6;
  FCoords aFStack_30 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0x3da5  661  ??XFCoords@@QAEAAV0@ABVFScale@@@Z */
  fVar6 = (float10)thunk_FUN_1010c400(*(undefined4 *)(param_1 + 0xc));
  fVar1 = (float)fVar6;
  FVar2 = param_1[0x10];
  puVar4 = &DAT_1023ff60;
  pFVar5 = aFStack_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar5 = pFVar5 + 4;
  }
  switch(FVar2) {
  case (FScale)0x1:
    fStack_20 = fVar1;
    break;
  case (FScale)0x2:
    fStack_1c = fVar1;
    break;
  case (FScale)0x3:
    fStack_18 = fVar1;
    break;
  case (FScale)0x4:
    fStack_10 = fVar1;
    break;
  case (FScale)0x5:
    fStack_c = fVar1;
    break;
  case (FScale)0x6:
    fStack_8 = fVar1;
  }
  operator*=(this,aFStack_30);
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * *(float *)param_1;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * *(float *)(param_1 + 4);
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * *(float *)(param_1 + 8);
  *(float *)(this + 0x18) = *(float *)(this + 0x18) * *(float *)param_1;
  *(float *)(this + 0x1c) = *(float *)(param_1 + 4) * *(float *)(this + 0x1c);
  *(float *)(this + 0x20) = *(float *)(this + 0x20) * *(float *)(param_1 + 8);
  *(float *)(this + 0x24) = *(float *)(this + 0x24) * *(float *)param_1;
  *(float *)(this + 0x28) = *(float *)(this + 0x28) * *(float *)(param_1 + 4);
  *(float *)(this + 0x2c) = *(float *)(this + 0x2c) * *(float *)(param_1 + 8);
  *(float *)this = *(float *)this / *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) / *(float *)(param_1 + 4);
  *(float *)(this + 8) = *(float *)(this + 8) / *(float *)(param_1 + 8);
  return this;
}


// ==== 10103daa EdLoadErrorf

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl EdLoadErrorf(int,unsigned short const *,...) */

void __cdecl EdLoadErrorf(int param_1,ushort *param_2,...)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  FEdLoadError *this;
  int iVar8;
  FEdLoadError aFStack_2020 [4];
  FArray aFStack_201c [4];
  undefined4 uStack_2018;
  undefined4 uStack_2014;
  FArray *pFStack_2010;
  ushort uStack_200c;
  undefined1 auStack_200a [8186];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3daa  942  ?EdLoadErrorf@@YAXHPBGZZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101be5b1;
  pvStack_c = ExceptionList;
  uStack_10 = 0x10178c4f;
  uStack_200c = 0;
  ExceptionList = &pvStack_c;
  _memset(auStack_200a,0,0x1ffe);
  appGetVarArgs(&uStack_200c,0x1000,&param_2);
  iVar7 = 0;
  iVar5 = DAT_1023fe60;
  if (0 < DAT_1023fe60) {
    pFStack_2010 = aFStack_201c;
    iVar8 = 0;
    do {
      piVar3 = (int *)FEdLoadError::FEdLoadError(aFStack_2020,param_1,&uStack_200c);
      uStack_4 = 0;
      if (*(int *)(iVar8 + _GEdLoadErrors) == *piVar3) {
        puVar1 = (undefined4 *)(iVar8 + 4 + _GEdLoadErrors);
        if (piVar3[2] == 0) {
          puVar4 = &DAT_101cdd44;
        }
        else {
          puVar4 = (ushort *)piVar3[1];
        }
        if (puVar1[1] == 0) {
          puVar6 = &DAT_101cdd44;
        }
        else {
          puVar6 = (ushort *)*puVar1;
        }
        iVar5 = appStricmp(puVar6,puVar4);
        if (iVar5 != 0) goto LAB_10178cfe;
        bVar2 = true;
      }
      else {
LAB_10178cfe:
        bVar2 = false;
      }
      uStack_4 = 2;
      uStack_2018 = 0;
      uStack_2014 = 0;
      FArray::Realloc(aFStack_201c,2);
      uStack_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_201c);
      if (bVar2) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x10;
      iVar5 = DAT_1023fe60;
    } while (iVar7 < DAT_1023fe60);
  }
  DAT_1023fe60 = iVar5 + 1;
  if (DAT_1023fe64 < DAT_1023fe60) {
    DAT_1023fe64 = ((int)(DAT_1023fe60 * 3 + (DAT_1023fe60 * 3 >> 0x1f & 7U)) >> 3) + 0x20 +
                   DAT_1023fe60;
    FArray::Realloc((FArray *)&GEdLoadErrors,0x10);
  }
  this = (FEdLoadError *)(iVar5 * 0x10 + _GEdLoadErrors);
  if (this != (FEdLoadError *)0x0) {
    FEdLoadError::FEdLoadError(this,param_1,&uStack_200c);
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103daf thunk_FUN_10132650 thunk -> 10132650

// ==== 10103db4 FVector::operator+

/* public: class FVector __thiscall FVector::operator+(class FVector const &)const  */

void __thiscall FVector::operator+(FVector *this,FVector *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x3db4  643  ??HFVector@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *in_stack_00000008 + *(float *)this;
  *(float *)(param_1 + 4) = in_stack_00000008[1] + *(float *)(this + 4);
  *(float *)(param_1 + 8) = in_stack_00000008[2] + *(float *)(this + 8);
  return;
}


// ==== 10103db9 UObject::IsProbing

/* public: int __thiscall UObject::IsProbing(class FName) */

int __thiscall UObject::IsProbing(UObject *this,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* 0x3db9  1524  ?IsProbing@UObject@@QAEHVFName@@@Z */
  if ((param_2 - 300U < 0x40) && (iVar1 = *(int *)(this + 0xc), iVar1 != 0)) {
    uVar2 = __allshl();
    if (((uint)uVar2 & *(uint *)(iVar1 + 0x20)) == 0 &&
        ((uint)((ulonglong)uVar2 >> 0x20) & *(uint *)(iVar1 + 0x24)) == 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 10103dbe UIntProperty::UIntProperty

/* public: __thiscall UIntProperty::UIntProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UIntProperty * __thiscall
UIntProperty::UIntProperty
          (UIntProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3dbe  229  ??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103dc3 thunk_FUN_1015db50 thunk -> 1015db50

// ==== 10103dc8 UTextBufferFactory::InternalConstructor

/* public: static void __cdecl UTextBufferFactory::InternalConstructor(void *) */

void __cdecl UTextBufferFactory::InternalConstructor(void *param_1)

{
                    /* 0x3dc8  1504  ?InternalConstructor@UTextBufferFactory@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTextBufferFactory(param_1);
    return;
  }
  return;
}


// ==== 10103dcd L2ThreadUtil::StaticInit

/* public: void __thiscall L2ThreadUtil::StaticInit(void) */

void __thiscall L2ThreadUtil::StaticInit(L2ThreadUtil *this)

{
  FCriticalSection *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3dcd  1939  ?StaticInit@L2ThreadUtil@@QAEXXZ */
  puStack_c = &LAB_101b94ab;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (ThreadUtilCS == (FCriticalSection *)0x0) {
    ExceptionList = &pvStack_10;
    this_00 = (FCriticalSection *)thunk_FUN_101088a0(4);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (this_00 == (FCriticalSection *)0x0) {
      ThreadUtilCS = (FCriticalSection *)0x0;
    }
    else {
      ThreadUtilCS = (FCriticalSection *)FCriticalSection::FCriticalSection(this_00);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103dd2 FString::IsWhiteSpace

/* public: int __thiscall FString::IsWhiteSpace(void) */

int __thiscall FString::IsWhiteSpace(FString *this)

{
                    /* 0x3dd2  1535  ?IsWhiteSpace@FString@@QAEHXZ */
  return (uint)(*(int *)(this + 4) < 1);
}


// ==== 10103dd7 FMatrix::SetIdentity

/* public: void __thiscall FMatrix::SetIdentity(void) */

void __thiscall FMatrix::SetIdentity(FMatrix *this)

{
                    /* 0x3dd7  1859  ?SetIdentity@FMatrix@@QAEXXZ */
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}


// ==== 10103ddc UFactory::FactoryCreateNew

/* public: virtual class UObject * __thiscall UFactory::FactoryCreateNew(class UClass *,class
   UObject *,class FName,unsigned long,class UObject *,class FFeedbackContext *) */

UObject * __thiscall UFactory::FactoryCreateNew(void)

{
                    /* 0x3ddc  996
                       ?FactoryCreateNew@UFactory@@UAEPAVUObject@@PAVUClass@@PAV2@VFName@@K1PAVFFeedbackContext@@@Z
                        */
  return (UObject *)0x0;
}


// ==== 10103de1 thunk_FUN_10164f30 thunk -> 10164f30

// ==== 10103de6 FRangeVector::Component

/* public: class FRange & __thiscall FRangeVector::Component(int) */

FRange * __thiscall FRangeVector::Component(FRangeVector *this,int param_1)

{
                    /* 0x3de6  853  ?Component@FRangeVector@@QAEAAVFRange@@H@Z */
  return (FRange *)(this + param_1 * 8);
}


// ==== 10103deb UObjectProperty::ExportCppItem

/* public: virtual void __thiscall UObjectProperty::ExportCppItem(class FOutputDevice &,int)const
    */

void __thiscall
UObjectProperty::ExportCppItem(UObjectProperty *this,FOutputDevice *param_1,int param_2)

{
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3deb  970  ?ExportCppItem@UObjectProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bdea0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x78) + 0x94))();
  FOutputDevice::Logf(this_00,(ushort *)param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103df0 thunk_FUN_10109360 thunk -> 10109360

// ==== 10103df5 thunk_FUN_10132590 thunk -> 10132590

// ==== 10103dfa appTan

/* double __cdecl appTan(double) */

double __cdecl appTan(double param_1)

{
  float10 fVar1;
  
                    /* 0x3dfa  2123  ?appTan@@YANN@Z */
  fVar1 = (float10)FUN_1017c930();
  return (double)fVar1;
}


// ==== 10103dff FEdLoadError::operator=

/* public: class FEdLoadError & __thiscall FEdLoadError::operator=(class FEdLoadError) */

FEdLoadError * __thiscall
FEdLoadError::operator=(FEdLoadError *this,undefined4 param_2,undefined2 *param_3,int param_4)

{
  FArray *this_00;
  undefined2 *_Src;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3dff  444  ??4FEdLoadError@@QAEAAV0@V0@@Z */
  puStack_8 = &LAB_101b8180;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  this_00 = (FArray *)(this + 4);
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = param_2;
  if (this_00 != (FArray *)&param_3) {
    *(int *)(this + 0xc) = param_4;
    *(int *)(this + 8) = param_4;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 8) != 0) {
      _Src = param_3;
      if (param_4 == 0) {
        _Src = &DAT_101cdd44;
      }
      _memcpy(*(void **)this_00,_Src,*(int *)(this + 8) * 2);
    }
  }
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)&param_3);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103e04 FMemCache::Tick

/* public: void __thiscall FMemCache::Tick(void) */

void __thiscall FMemCache::Tick(FMemCache *this)

{
  undefined8 uVar1;
  int *piVar2;
  
                    /* 0x3e04  1960  ?Tick@FMemCache@@QAEXXZ */
  uVar1 = rdtsc();
  *(int *)(this + 0x10038) = *(int *)(this + 0x10038) - (int)uVar1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x10050) = 0;
  *(undefined4 *)(this + 0x1004c) = 0;
  *(undefined4 *)(this + 0x10048) = 0;
  *(undefined4 *)(this + 0x10040) = 0;
  *(undefined4 *)(this + 0x1003c) = 0;
  for (piVar2 = *(int **)(this + 0x18); piVar2 != *(int **)(this + 0x1c); piVar2 = (int *)piVar2[5])
  {
    if ((*piVar2 != 0 || piVar2[1] != 0) &&
       ((int)(uint)*(ushort *)(piVar2 + 3) < *(int *)(this + 4))) {
      piVar2[4] = piVar2[4] - (piVar2[4] >> 5);
    }
  }
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  uVar1 = rdtsc();
  *(int *)(this + 0x10038) = *(int *)(this + 0x10038) + (int)uVar1 + -0xc;
  return;
}


// ==== 10103e09 thunk_FUN_10124190 thunk -> 10124190

// ==== 10103e0e thunk_FUN_10113ba0 thunk -> 10113ba0

// ==== 10103e13 FMemCache::Next

/* public: class FMemCache::FCacheItem * __thiscall FMemCache::Next(class FMemCache::FCacheItem *)
    */

FCacheItem * __thiscall FMemCache::Next(FMemCache *this,FCacheItem *param_1)

{
                    /* 0x3e13  1641  ?Next@FMemCache@@QAEPAVFCacheItem@1@PAV21@@Z */
  return *(FCacheItem **)(param_1 + 0x14);
}


// ==== 10103e18 FOutputDevice::Flush

/* public: virtual void __thiscall FOutputDevice::Flush(void) */

void __thiscall FOutputDevice::Flush(FOutputDevice *this)

{
                    /* 0x3e18  1020  ?Flush@FOutputDevice@@UAEXXZ */
  return;
}


// ==== 10103e1d FVector::operator/

/* public: class FVector __thiscall FVector::operator/(float)const  */

void __thiscall FVector::operator/(FVector *this,float param_1)

{
  float fVar1;
  float in_stack_00000008;
  
                    /* 0x3e1d  650  ??KFVector@@QBE?AV0@M@Z */
  fVar1 = 1.0 / in_stack_00000008;
  *(float *)param_1 = fVar1 * *(float *)this;
  *(float *)((int)param_1 + 4) = *(float *)(this + 4) * fVar1;
  *(float *)((int)param_1 + 8) = fVar1 * *(float *)(this + 8);
  return;
}


// ==== 10103e22 UPackageMap::InternalConstructor

/* public: static void __cdecl UPackageMap::InternalConstructor(void *) */

void __cdecl UPackageMap::InternalConstructor(void *param_1)

{
                    /* 0x3e22  1496  ?InternalConstructor@UPackageMap@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UPackageMap(param_1);
    return;
  }
  return;
}


// ==== 10103e27 appMD5Encode

/* void __cdecl appMD5Encode(unsigned char *,unsigned long *,int) */

void __cdecl appMD5Encode(uchar *param_1,ulong *param_2,int param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  
                    /* 0x3e27  2071  ?appMD5Encode@@YAXPAEPAKH@Z */
  if (0 < param_3) {
    puVar2 = param_1 + 1;
    puVar1 = (uchar *)((int)param_2 + 2);
    iVar3 = (param_3 - 1U >> 2) + 1;
    do {
      puVar2[-1] = puVar1[-2];
      *puVar2 = puVar1[-1];
      puVar2[1] = *puVar1;
      puVar2[2] = puVar1[1];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


// ==== 10103e2c FOutputDevice::Logf2

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl FOutputDevice::Logf2(enum EName,unsigned short const *,...) */

void __thiscall FOutputDevice::Logf2(FOutputDevice *this,EName param_1,ushort *param_2,...)

{
  ushort auStack_2000 [4094];
  undefined4 uStack_4;
  
                    /* 0x3e2c  1597  ?Logf2@FOutputDevice@@QAAXW4EName@@PBGZZ */
  uStack_4 = 0x10151efa;
  if ((FName::Initialized == 0) ||
     ((*(uint *)(*(int *)(_Names + (int)param_2 * 4) + 4) & 0x1000) == 0)) {
    appGetVarArgs(auStack_2000,0x1000,(ushort **)&stack0x0000000c);
    (*(code *)**(undefined4 **)param_1)(auStack_2000,param_2);
  }
  return;
}


// ==== 10103e31 UObject::Destroy

/* public: virtual void __thiscall UObject::Destroy(void) */

void __thiscall UObject::Destroy(UObject *this)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3e31  918  ?Destroy@UObject@@UAEXXZ */
  puStack_c = &LAB_101bd6a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x80000000;
  ExitProperties((uchar *)this,*(UClass **)(this + 0x24));
  SetLinker(this,(ULinkerLoad *)0x0,-1);
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x18) + 4);
  }
  *(undefined4 *)(this + 0x14) = uVar1;
  GObjCurCount = GObjCurCount + -1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103e36 thunk_FUN_10112b50 thunk -> 10112b50

// ==== 10103e3b FGuid::FGuid

/* public: __thiscall FGuid::FGuid(void) */

FGuid * __thiscall FGuid::FGuid(FGuid *this)

{
                    /* 0x3e3b  62  ??0FGuid@@QAE@XZ */
  return this;
}


// ==== 10103e40 UObject::execRotator2Vector

/* public: void __thiscall UObject::execRotator2Vector(struct FFrame &,void * const) */

void __thiscall UObject::execRotator2Vector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined1 auStack_6c [4];
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  FCoords aFStack_38 [56];
  
                    /* 0x3e40  2358  ?execRotator2Vector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_6c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar4 = &DAT_1023ff60;
  pFVar2 = aFStack_38;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar2 = pFVar2 + 4;
  }
  pFVar2 = FCoords::operator/=(aFStack_38,(FRotator *)&stack0xffffff8c);
  puVar4 = auStack_68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pFVar2;
    pFVar2 = pFVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *unaff_retaddr = auStack_68[3];
  unaff_retaddr[1] = uStack_58;
  unaff_retaddr[2] = uStack_54;
  return;
}


// ==== 10103e45 UObject::execLessEqual_FloatFloat

/* WARNING: Removing unreachable block (ram,0x1013d59d) */
/* public: void __thiscall UObject::execLessEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execLessEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x3e45  2285  ?execLessEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10103e4a UObject::ExitProperties

/* public: static void __cdecl UObject::ExitProperties(unsigned char *,class UClass *) */

void __cdecl UObject::ExitProperties(uchar *param_1,UClass *param_2)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3e4a  957  ?ExitProperties@UObject@@SAXPAEPAVUClass@@@Z */
  puStack_c = &LAB_101bccb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (piVar1 = *(int **)(param_2 + 0x78); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x18]) {
    (**(code **)(*piVar1 + 0xac))(param_1 + piVar1[0x15]);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103e4f UFixedArrayProperty::ExportTextItem

/* public: virtual void __thiscall UFixedArrayProperty::ExportTextItem(unsigned short *,unsigned
   char *,unsigned char *,int)const  */

void __thiscall
UFixedArrayProperty::ExportTextItem
          (UFixedArrayProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  uchar *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3e4f  981  ?ExportTextItem@UFixedArrayProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101bdee0;
  pvStack_10 = ExceptionList;
  iVar4 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *param_1 = 0x28;
  puVar3 = param_1 + 1;
  while( true ) {
    if (*(int *)(this + 0x7c) <= iVar4) break;
    if (0 < iVar4) {
      *puVar3 = 0x2c;
      puVar3 = puVar3 + 1;
    }
    if (param_3 == (uchar *)0x0) {
      puVar1 = (uchar *)0x0;
    }
    else {
      puVar1 = param_3 + *(int *)(*(int *)(this + 0x78) + 0x44) * iVar4;
    }
    (**(code **)(**(int **)(this + 0x78) + 0x98))
              (puVar3,param_2 + (*(int **)(this + 0x78))[0x11] * iVar4,puVar1,param_4 | 2);
    iVar2 = appStrlen(puVar3);
    puVar3 = puVar3 + iVar2;
    iVar4 = iVar4 + 1;
  }
  *puVar3 = 0x29;
  puVar3[1] = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103e54 FMoverHit::FMoverHit

/* public: __thiscall FMoverHit::FMoverHit(void) */

void __thiscall FMoverHit::FMoverHit(FMoverHit *this)

{
                    /* 0x3e54  82  ??0FMoverHit@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 10103e59 thunk_FUN_10165190 thunk -> 10165190

// ==== 10103e5e appMemswap

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* void __cdecl appMemswap(void *,void *,unsigned long) */

void __cdecl appMemswap(void *param_1,void *param_2,ulong param_3)

{
  undefined1 *_Dst;
  
                    /* 0x3e5e  2081  ?appMemswap@@YAXPAX0K@Z */
  if (param_3 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    _Dst = &stack0xfffffff0;
  }
  _memcpy(_Dst,param_1,param_3);
  _memcpy(param_1,param_2,param_3);
  _memcpy(param_2,_Dst,param_3);
  return;
}


// ==== 10103e63 UDelegateProperty::operator=

/* public: class UDelegateProperty & __thiscall UDelegateProperty::operator=(class UDelegateProperty
   const &) */

UDelegateProperty * __thiscall
UDelegateProperty::operator=(UDelegateProperty *this,UDelegateProperty *param_1)

{
                    /* 0x3e63  518  ??4UDelegateProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 10103e68 thunk_FUN_10113fa0 thunk -> 10113fa0

// ==== 10103e6d FVector::IsNearlyZero

/* public: int __thiscall FVector::IsNearlyZero(void)const  */

int __thiscall FVector::IsNearlyZero(FVector *this)

{
  float fVar1;
  
                    /* 0x3e6d  1520  ?IsNearlyZero@FVector@@QBEHXZ */
  fVar1 = *(float *)this;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.0001) {
    fVar1 = *(float *)(this + 4);
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      fVar1 = *(float *)(this + 8);
      if (fVar1 < 0.0) {
        fVar1 = -fVar1;
      }
      if (fVar1 < 0.0001) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10103e77 FPackageInfo::FPackageInfo

/* public: __thiscall FPackageInfo::FPackageInfo(class ULinkerLoad *) */

FPackageInfo * __thiscall FPackageInfo::FPackageInfo(FPackageInfo *this,ULinkerLoad *param_1)

{
  ULinkerLoad *pUVar1;
  FArchive *pFVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  FPackageInfo *pFStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3e77  103  ??0FPackageInfo@@QAE@PAVULinkerLoad@@@Z */
  puStack_c = &LAB_101ba888;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  pFStack_1c = this;
  ExceptionList = &pvStack_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uStack_8 = 2;
  *(ULinkerLoad **)(this + 0xc) = param_1;
  if (param_1 == (ULinkerLoad *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  *(undefined4 *)(this + 0x10) = uVar3;
  if (param_1 == (ULinkerLoad *)0x0) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    pUVar1 = (ULinkerLoad *)&uStack_30;
  }
  else {
    pUVar1 = param_1 + 0x5c;
  }
  *(undefined4 *)(this + 0x14) = *(undefined4 *)pUVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(pUVar1 + 4);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(pUVar1 + 8);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(pUVar1 + 0xc);
  if (param_1 == (ULinkerLoad *)0x0) {
    uVar3 = 0;
  }
  else {
    pFVar2 = ULinkerLoad::GetReader(param_1);
    uVar3 = (**(code **)(*(int *)pFVar2 + 0x2c))();
  }
  *(undefined4 *)(this + 0x24) = uVar3;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  if (param_1 == (ULinkerLoad *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x40);
  }
  *(undefined4 *)(this + 0x40) = uVar3;
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  if (param_1 != (ULinkerLoad *)0x0) {
    puVar4 = FString::operator*((FString *)(param_1 + 0xa0));
    if ((puVar4 != (ushort *)0x0) && (((byte)param_1[0x40] & 1) != 0)) {
      puVar4 = FString::operator*((FString *)(param_1 + 0xa0));
      FString::operator=((FString *)this,puVar4);
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10103e7c UObject::StaticAllocateObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UObject * __cdecl UObject::StaticAllocateObject(class UClass *,class UObject
   *,class FName,unsigned long,class UObject *,class FOutputDevice *,class UObject *,class UObject
   *) */

UObject * __cdecl
UObject::StaticAllocateObject
          (UClass *param_1,UObject *param_2,uint param_3,uint param_4,uchar *param_5,ushort *param_6
          ,UObject *param_7,UObject *param_8)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint *puVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  wchar_t *pwVar9;
  UClass *pUVar10;
  wchar_t *pwVar11;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3e7c  1887
                       ?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z
                        */
  puStack_c = &LAB_101bd910;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffc4;
  if (param_6 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Error",".\\UnObj.cpp",0xfcd);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  if (param_1 != (UClass *)0x0) {
    if (*(int *)(param_1 + 0x4bc) == 0) {
      appFailAssert("!InClass || InClass->ClassWithin",".\\UnObj.cpp",0xfce);
    }
    if (*(int *)(param_1 + 0x518) == 0) {
      appFailAssert("!InClass || InClass->ClassConstructor",".\\UnObj.cpp",0xfcf);
    }
    iVar3 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
    if (((iVar3 != 0) || (*(int *)(param_1 + 4) != -1)) || (GObjRegisterCount != 0)) {
      if (((byte)param_1[0x4a4] & 1) != 0) {
        pwVar11 = L"Core";
        pwVar9 = L"Abstract";
LAB_101678e9:
        LocalizeError((ushort *)pwVar9,(ushort *)pwVar11,(ushort *)0x0);
        FOutputDevice::Logf(this,param_6);
        ExceptionList = pvStack_10;
        return (UObject *)0x0;
      }
      if (param_2 == (UObject *)0x0) {
        if (param_1 != &UPackage::PrivateStaticClass) {
          pwVar11 = L"Core";
          pwVar9 = L"NotPackaged";
          goto LAB_101678e9;
        }
      }
      else {
        iVar3 = IsA(param_2,*(UClass **)(param_1 + 0x4bc));
        if (iVar3 == 0) {
          LocalizeError((ushort *)L"NotWithin",(ushort *)L"Core",(ushort *)0x0);
          FOutputDevice::Logf(this_00,param_6);
          ExceptionList = pvStack_10;
          return (UObject *)0x0;
        }
      }
      if (param_3 == 0) {
        puVar4 = (uint *)MakeUniqueObjectName((UObject *)&iStack_1c,(UClass *)param_2);
        param_3 = *puVar4;
      }
      if ((DAT_1023fe54 != 0) && (param_3 != 0)) {
        for (pUVar5 = (UObject *)(&GObjHash)[param_3 & 0xfff]; pUVar5 != (UObject *)0x0;
            pUVar5 = *(UObject **)(pUVar5 + 8)) {
          if (((*(uint *)(pUVar5 + 0x20) == param_3) && (*(UObject **)(pUVar5 + 0x18) == param_2))
             && ((*(UClass **)(pUVar5 + 0x24) != param_1 && (GLog != (undefined *)0x0)))) {
            GetFullName(pUVar5,(ushort *)0x0);
            FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2f8);
          }
        }
      }
      pUVar5 = StaticFindObject(param_1,param_2,(ushort *)(*(int *)(_Names + param_3 * 4) + 0xc),0);
      iStack_1c = thunk_FUN_10149630(pUVar5);
      iStack_18 = -1;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      if (pUVar5 == (UObject *)0x0) {
        if (param_7 == (UObject *)0x0) {
          puVar1 = *(undefined4 **)GMalloc;
          uVar6 = (**(code **)(*(int *)param_1 + 0x78))(*(int *)(_Names + param_3 * 4) + 0xc);
          param_7 = (UObject *)(*(code *)*puVar1)(uVar6);
        }
      }
      else {
        if ((param_7 != (UObject *)0x0) && (param_7 != pUVar5)) {
          appFailAssert("!Ptr || Ptr==Obj",".\\UnObj.cpp",0x100e);
        }
        FOutputDevice::Logf(_Names,(EName)GNull,(ushort *)0x30c);
        if (*(UClass **)(pUVar5 + 0x24) != param_1) {
          GetFullName(pUVar5,(ushort *)0x0);
          LocalizeError((ushort *)L"NoReplace",(ushort *)L"Engine",(ushort *)0x0);
          FOutputDevice::Logf(this_02,(ushort *)GError);
        }
        param_4 = param_4 | *(uint *)(pUVar5 + 0x1c) & 0xc000100;
        iStack_18 = *(int *)(pUVar5 + 4);
        if (iStack_1c != 0) {
          uStack_20 = *(undefined4 *)(iStack_1c + 0x4bc);
          uStack_24 = *(uint *)(iStack_1c + 0x4a4) & 1;
          uStack_28 = *(undefined4 *)(iStack_1c + 0x518);
        }
        (**(code **)(*(int *)pUVar5 + 0xc))();
        if ((DAT_10330898 == 0) || (piVar7 = (int *)thunk_FUN_1015bab0(0), *piVar7 != iStack_18)) {
          appFailAssert("GObjAvailable.Num() && GObjAvailable.Last()==Index",".\\UnObj.cpp",0x1021);
        }
        thunk_FUN_1015d870();
        param_7 = pUVar5;
      }
      if (((byte)param_1[0x4a4] & 8) != 0) {
        param_4 = param_4 | 0x4000;
      }
      *(undefined4 *)(param_7 + 4) = 0xffffffff;
      *(undefined4 *)(param_7 + 8) = 0;
      *(undefined4 *)(param_7 + 0xc) = 0;
      *(undefined4 *)(param_7 + 0x10) = 0;
      *(undefined4 *)(param_7 + 0x14) = 0xffffffff;
      *(UObject **)(param_7 + 0x18) = param_2;
      *(uint *)(param_7 + 0x1c) = param_4;
      *(uint *)(param_7 + 0x20) = param_3;
      *(UClass **)(param_7 + 0x24) = param_1;
      *(undefined4 *)(param_7 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_7 + 0x2c) = 0;
      *(undefined4 *)(param_7 + 0x30) = 0xffffffe1;
      pUVar5 = (UObject *)(~-(uint)((param_4 & 0x200) != 0) & (uint)param_7);
      iVar3 = (**(code **)(*(int *)param_1 + 0x78))();
      pUVar10 = param_1;
      iVar8 = (**(code **)(*(int *)param_1 + 0x78))();
      InitProperties((uchar *)param_7,iVar8,pUVar10,param_5,iVar3,pUVar5,param_8);
      AddObject(param_7,iStack_18);
      iVar3 = IsValid(param_7);
      if (iVar3 == 0) {
        appFailAssert("Obj->IsValid()",".\\UnObj.cpp",0x103e);
      }
      if ((*(uint *)(param_1 + 0x4a4) & 0x400) != 0) {
        LoadConfig(param_7,0,(UClass *)0x0,(ushort *)0x0);
        LoadLocalized(param_7);
      }
      if (iStack_1c != 0) {
        *(undefined4 *)(iStack_1c + 0x4bc) = uStack_20;
        *(uint *)(iStack_1c + 0x4a4) = *(uint *)(iStack_1c + 0x4a4) | uStack_24;
        *(undefined4 *)(iStack_1c + 0x518) = uStack_28;
      }
      ExceptionList = pvStack_10;
      return param_7;
    }
  }
  FOutputDevice::Logf(_Names,param_6);
  ExceptionList = pvStack_10;
  return (UObject *)0x0;
}


// ==== 10103e81 thunk_FUN_1015fae0 thunk -> 1015fae0

// ==== 10103e86 FRangeVector::GetRand

/* public: class FVector __thiscall FRangeVector::GetRand(void)const  */

void __thiscall FRangeVector::GetRand(FRangeVector *this)

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
  
                    /* 0x3e86  1387  ?GetRand@FRangeVector@@QBE?AVFVector@@XZ */
  fVar7 = appFrand();
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x14);
  fVar8 = appFrand();
  fVar4 = *(float *)(this + 8);
  fVar5 = *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 0xc);
  fVar9 = appFrand();
  *in_stack_00000004 = (*(float *)this - *(float *)(this + 4)) * fVar9 + *(float *)(this + 4);
  in_stack_00000004[1] = (fVar4 - fVar5) * fVar8 + fVar6;
  in_stack_00000004[2] = (fVar1 - fVar2) * fVar7 + fVar3;
  return;
}


// ==== 10103e8b UObject::IsA

/* public: int __thiscall UObject::IsA(class UClass *)const  */

int __thiscall UObject::IsA(UObject *this,UClass *param_1)

{
  UClass *pUVar1;
  
                    /* 0x3e8b  1510  ?IsA@UObject@@QBEHPAVUClass@@@Z */
  pUVar1 = *(UClass **)(this + 0x24);
  while( true ) {
    if (pUVar1 == (UClass *)0x0) {
      return (uint)(param_1 == (UClass *)0x0);
    }
    if (pUVar1 == param_1) break;
    pUVar1 = *(UClass **)(pUVar1 + 0x34);
  }
  return 1;
}


// ==== 10103e90 USystem::StaticClass

/* public: static class UClass * __cdecl USystem::StaticClass(void) */

UClass * __cdecl USystem::StaticClass(void)

{
                    /* 0x3e90  1921  ?StaticClass@USystem@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103e9a UObject::LoadPackage

/* public: static class UObject * __cdecl UObject::LoadPackage(class UObject *,unsigned short const
   *,unsigned long,int) */

UObject * __cdecl UObject::LoadPackage(UObject *param_1,ushort *param_2,ulong param_3,int param_4)

{
  UObject *pUVar1;
  int iVar2;
  ULinkerLoad *this;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3e9a  1576  ?LoadPackage@UObject@@SAPAV1@PAV1@PBGKH@Z */
  puStack_c = &LAB_101bdb00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*param_2 != 0) {
    ExceptionList = &pvStack_10;
    if ((param_4 != 0) &&
       (ExceptionList = &pvStack_10, iVar2 = CheckSafePackage(param_2), iVar2 == 0)) {
      ExceptionList = pvStack_10;
      return (UObject *)0x0;
    }
    BeginLoad();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    this = GetPackageLinker(param_1,param_2,param_3 | 8,(UPackageMap *)0x0,(FGuid *)0x0);
    if (this != (ULinkerLoad *)0x0) {
      if ((param_3 & 0x10) == 0) {
        ULinkerLoad::LoadAllObjects(this);
      }
      pUVar1 = *(UObject **)(this + 0x34);
      EndLoad();
      ExceptionList = pvStack_10;
      return pUVar1;
    }
  }
  ExceptionList = pvStack_10;
  return (UObject *)0x0;
}


// ==== 10103e9f UBoolProperty::CopySingleValue

/* public: virtual void __thiscall UBoolProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UBoolProperty::CopySingleValue(UBoolProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x3e9f  874  ?CopySingleValue@UBoolProperty@@UBEXPAX0PAVUObject@@@Z */
  *(uint *)param_1 =
       ~*(uint *)(this + 0x78) & *(uint *)param_1 | *(uint *)param_2 & *(uint *)(this + 0x78);
  return;
}


// ==== 10103ea4 appStrfind

/* unsigned short const * __cdecl appStrfind(unsigned short const *,unsigned short const *) */

ushort * __cdecl appStrfind(ushort *param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ea4  2109  ?appStrfind@@YAPBGPBG0@Z */
  puStack_c = &LAB_101bbfa0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  bVar1 = false;
  uStack_1c = *param_2;
  if ((0x60 < uStack_1c) && (uStack_1c < 0x7b)) {
    uStack_1c = uStack_1c - 0x20;
  }
  ExceptionList = &pvStack_10;
  iVar2 = appStrlen(param_2);
  while( true ) {
    uVar4 = *param_1;
    puVar5 = param_1 + 1;
    if (uVar4 == 0) {
      ExceptionList = pvStack_10;
      return (ushort *)0x0;
    }
    if ((ushort)(uVar4 - 0x61) < 0x1a) {
      uVar4 = uVar4 - 0x20;
    }
    if (((!bVar1) && (uVar4 == uStack_1c)) &&
       (iVar3 = appStrnicmp(puVar5,param_2 + 1,iVar2 + -1), iVar3 == 0)) break;
    param_1 = puVar5;
    if (((uVar4 < 0x41) || (0x5a < uVar4)) && (9 < (ushort)(uVar4 - 0x30))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10103ea9 UObject::execHighNative15

/* public: void __thiscall UObject::execHighNative15(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative15(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x3ea9  2253  ?execHighNative15@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10283370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10103eae L2ThreadUtil::GetThreadSafeParam

/* public: void * __thiscall L2ThreadUtil::GetThreadSafeParam(void *,int) */

void * __thiscall L2ThreadUtil::GetThreadSafeParam(L2ThreadUtil *this,void *param_1,int param_2)

{
  undefined1 *_Dst;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3eae  1408  ?GetThreadSafeParam@L2ThreadUtil@@QAEPAXPAXH@Z */
  puStack_c = &LAB_101b94c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  _Dst = (undefined1 *)thunk_FUN_101088a0(1);
  if (_Dst == (undefined1 *)0x0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    *_Dst = (undefined1)param_2;
  }
  _memcpy(_Dst,param_1,param_2);
  ExceptionList = pvStack_10;
  return _Dst;
}


// ==== 10103eb3 FEdLoadError::FEdLoadError

/* public: __thiscall FEdLoadError::FEdLoadError(int,unsigned short *) */

FEdLoadError * __thiscall FEdLoadError::FEdLoadError(FEdLoadError *this,int param_1,ushort *param_2)

{
  FArray *this_00;
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3eb3  41  ??0FEdLoadError@@QAE@HPAG@Z */
  puStack_8 = &LAB_101b813b;
  pvStack_c = ExceptionList;
  this_00 = (FArray *)(this + 4);
  ExceptionList = &pvStack_c;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uStack_4 = 2;
  *(int *)this = param_1;
  if (*(ushort **)this_00 != param_2) {
    if (*param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = appStrlen(param_2);
      iVar1 = iVar1 + 1;
    }
    *(int *)(this + 0xc) = iVar1;
    *(int *)(this + 8) = iVar1;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 8) != 0) {
      _memcpy(*(void **)this_00,param_2,*(int *)(this + 8) * 2);
    }
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103ec2 thunk_FUN_1011a670 thunk -> 1011a670

// ==== 10103ec7 UStrProperty::ImportText

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual unsigned short const * __thiscall UStrProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UStrProperty::ImportText(UStrProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort *puVar1;
  ushort auStack_2024 [4102];
  UStrProperty *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ec7  1453  ?ImportText@UStrProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be210;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffdfd0;
  uStack_8 = 0;
  pUStack_18 = this;
  if ((param_3 & 2U) == 0) {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffdfd0;
    FString::operator=((FString *)param_2,param_1);
    ExceptionList = pvStack_10;
    return param_1;
  }
  ExceptionList = &pvStack_10;
  puVar1 = (ushort *)thunk_FUN_10170590(param_1,auStack_2024,0x1000,0);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  FString::operator=((FString *)param_2,auStack_2024);
  ExceptionList = pvStack_10;
  return puVar1;
}


// ==== 10103ecc FPackageInfo::`default_constructor_closure'

/* public: void __thiscall FPackageInfo::`default constructor closure'(void) */

void __thiscall FPackageInfo::_default_constructor_closure_(FPackageInfo *this)

{
                    /* 0x3ecc  772  ??_FFPackageInfo@@QAEXXZ */
  FPackageInfo(this,(ULinkerLoad *)0x0);
  return;
}


// ==== 10103ed6 FBufferReader::Serialize

/* public: virtual void __thiscall FBufferReader::Serialize(void *,int) */

void __thiscall FBufferReader::Serialize(FBufferReader *this,void *param_1,int param_2)

{
                    /* 0x3ed6  1795  ?Serialize@FBufferReader@@UAEXPAXH@Z */
  if (*(int *)(this + 0x3c) < 0) {
    appFailAssert("Pos>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                  0x6fa);
  }
  if (*(int *)(*(int *)(this + 0x38) + 4) < *(int *)(this + 0x3c) + param_2) {
    appFailAssert("Pos+Num<=Bytes.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x6fb);
  }
  _memcpy(param_1,(void *)(**(int **)(this + 0x38) + *(int *)(this + 0x3c)),param_2);
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + param_2;
  return;
}


// ==== 10103edb UIntProperty::StaticClass

/* public: static class UClass * __cdecl UIntProperty::StaticClass(void) */

UClass * __cdecl UIntProperty::StaticClass(void)

{
                    /* 0x3edb  1903  ?StaticClass@UIntProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103ee0 FString::FString

/* public: __thiscall FString::FString(unsigned char,int) */

void __thiscall FString::FString(FString *this,uchar param_1,int param_2)

{
                    /* 0x3ee0  144  ??0FString@@QAE@EH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10103ee5 UBoolProperty::InternalConstructor

/* public: static void __cdecl UBoolProperty::InternalConstructor(void *) */

void __cdecl UBoolProperty::InternalConstructor(void *param_1)

{
                    /* 0x3ee5  1476  ?InternalConstructor@UBoolProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UBoolProperty(param_1);
    return;
  }
  return;
}


// ==== 10103eef UStruct::InternalConstructor

/* public: static void __cdecl UStruct::InternalConstructor(void *) */

void __cdecl UStruct::InternalConstructor(void *param_1)

{
                    /* 0x3eef  1500  ?InternalConstructor@UStruct@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UStruct(param_1);
    return;
  }
  return;
}


// ==== 10103ef4 FBufferReader::FBufferReader

/* public: __thiscall FBufferReader::FBufferReader(class TArray<unsigned char> const &) */

void __thiscall FBufferReader::FBufferReader(FBufferReader *this,TArray<unsigned_char> *param_1)

{
                    /* 0x3ef4  26  ??0FBufferReader@@QAE@ABV?$TArray@E@@@Z */
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
  *(TArray<unsigned_char> **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}


// ==== 10103efe UObjectProperty::Serialize

/* public: virtual void __thiscall UObjectProperty::Serialize(class FArchive &) */

void __thiscall UObjectProperty::Serialize(UObjectProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3efe  1819  ?Serialize@UObjectProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be070;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  thunk_FUN_1012a9f0(param_1,this + 0x78);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103f03 thunk_FUN_1011f200 thunk -> 1011f200

// ==== 10103f08 UConst::operator=

/* public: class UConst & __thiscall UConst::operator=(class UConst const &) */

UConst * __thiscall UConst::operator=(UConst *this,UConst *param_1)

{
  FArray *this_00;
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x3f08  517  ??4UConst@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this_00 = (FArray *)(this + 0x40);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (this_00 != (FArray *)(param_1 + 0x40)) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x48) = uVar1;
    *(undefined4 *)(this + 0x44) = uVar1;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)this_00,_Src,*(int *)(this + 0x44) * 2);
    }
  }
  return this;
}


// ==== 10103f0d FMemCache::FCacheItem::operator=

/* public: class FMemCache::FCacheItem & __thiscall FMemCache::FCacheItem::operator=(class
   FMemCache::FCacheItem const &) */

FCacheItem * __thiscall FMemCache::FCacheItem::operator=(FCacheItem *this,FCacheItem *param_1)

{
  int iVar1;
  FCacheItem *pFVar2;
  
                    /* 0x3f0d  436  ??4FCacheItem@FMemCache@@QAEAAV01@ABV01@@Z */
  pFVar2 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10103f12 UExporter::ExportBinary

/* public: virtual int __thiscall UExporter::ExportBinary(class UObject *,unsigned short const
   *,class FArchive &,class FFeedbackContext *) */

int __thiscall
UExporter::ExportBinary
          (UExporter *this,UObject *param_1,ushort *param_2,FArchive *param_3,
          FFeedbackContext *param_4)

{
                    /* 0x3f12  959
                       ?ExportBinary@UExporter@@UAEHPAVUObject@@PBGAAVFArchive@@PAVFFeedbackContext@@@Z
                        */
  return 0;
}


// ==== 10103f1c FBox::operator=

/* public: class FBox & __thiscall FBox::operator=(class FBox const &) */

FBox * __thiscall FBox::operator=(FBox *this,FBox *param_1)

{
  int iVar1;
  FBox *pFVar2;
  
                    /* 0x3f1c  435  ??4FBox@@QAEAAV0@ABV0@@Z */
  pFVar2 = this;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10103f21 UMapProperty::SerializeItem

/* public: virtual void __thiscall UMapProperty::SerializeItem(class FArchive &,void *,int)const  */

void __thiscall
UMapProperty::SerializeItem(UMapProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x3f21  1844  ?SerializeItem@UMapProperty@@UBEXAAVFArchive@@PAXH@Z */
  return;
}


// ==== 10103f26 UProperty::UProperty

/* public: __thiscall UProperty::UProperty(enum ECppProperty,int,unsigned short const *,unsigned
   long) */

UProperty * __thiscall
UProperty::UProperty(UProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3f26  264  ??0UProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101be2b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)0x0);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 1;
  *(ulong *)(this + 0x48) = param_4;
  FName::FName((FName *)(this + 0x4c),param_3,1);
  *(int *)(this + 0x54) = param_2;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  (**(code **)(**(int **)(this + 0x18) + 0x68))(this);
  ExceptionList = this;
  return this;
}


// ==== 10103f30 FString::FString

/* public: __thiscall FString::FString(short,int) */

void __thiscall FString::FString(FString *this,short param_1,int param_2)

{
                    /* 0x3f30  145  ??0FString@@QAE@FH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10103f35 UField::UField

/* public: __thiscall UField::UField(class UField const &) */

UField * __thiscall UField::UField(UField *this,UField *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3f35  215  ??0UField@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6958;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103f3a FMemCache::operator=

/* public: class FMemCache & __thiscall FMemCache::operator=(class FMemCache const &) */

FMemCache * __thiscall FMemCache::operator=(FMemCache *this,FMemCache *param_1)

{
                    /* 0x3f3a  461  ??4FMemCache@@QAEAAV0@ABV0@@Z */
  _memcpy(this,param_1,0x10058);
  return this;
}


// ==== 10103f3f UIntProperty::operator_new

/* public: static void * __cdecl UIntProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UIntProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3f3f  383  ??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10103f44 FString::FString

/* public: __thiscall FString::FString(unsigned long,int) */

void __thiscall FString::FString(FString *this,ulong param_1,int param_2)

{
                    /* 0x3f44  148  ??0FString@@QAE@KH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10103f49 FGlobalMath::SinTab

/* public: float __thiscall FGlobalMath::SinTab(int) */

float __thiscall FGlobalMath::SinTab(FGlobalMath *this,int param_1)

{
                    /* 0x3f49  1876  ?SinTab@FGlobalMath@@QAEMH@Z */
  return *(float *)(this + (param_1 >> 2 & 0x3fffU) * 4 + 0x8c);
}


// ==== 10103f4e thunk_FUN_10124560 thunk -> 10124560

// ==== 10103f53 UMapProperty::UMapProperty

/* public: __thiscall UMapProperty::UMapProperty(void) */

UMapProperty * __thiscall UMapProperty::UMapProperty(UMapProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3f53  243  ??0UMapProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103f58 UObject::execStringConst

/* public: void __thiscall UObject::execStringConst(struct FFrame &,void * const) */

void __thiscall UObject::execStringConst(UObject *this,FFrame *param_1,void *param_2)

{
  char cVar1;
  ushort *_Src;
  int iVar2;
  
                    /* 0x3f58  2371  ?execStringConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  _Src = appFromAnsi(*(char **)(param_1 + 0xc),(ushort *)0x0);
  if (*(ushort **)param_2 != _Src) {
    if (*_Src == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(_Src);
      iVar2 = iVar2 + 1;
    }
    *(int *)((int)param_2 + 8) = iVar2;
    *(int *)((int)param_2 + 4) = iVar2;
    FArray::Realloc(param_2,2);
    if (*(int *)((int)param_2 + 4) != 0) {
      _memcpy(*(void **)param_2,_Src,*(int *)((int)param_2 + 4) * 2);
    }
  }
  cVar1 = **(char **)(param_1 + 0xc);
  while (cVar1 != '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    cVar1 = **(char **)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// ==== 10103f5d UObject::GetPathName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned short const * __thiscall UObject::GetPathName(class UObject *,unsigned short
   *)const  */

ushort * __thiscall UObject::GetPathName(UObject *this,UObject *param_1,ushort *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3f5d  1381  ?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */
  puStack_c = &LAB_101bcba0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_2 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    param_2 = appStaticString1024();
  }
  if (this == param_1) {
    appSprintf(param_2,(ushort *)L"None");
  }
  else {
    *param_2 = 0;
    if (*(UObject **)(this + 0x18) != param_1) {
      GetPathName(*(UObject **)(this + 0x18),param_1,param_2);
      appStrcat(param_2,(ushort *)&DAT_101d93d0);
    }
    appStrcat(param_2,(ushort *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc));
  }
  ExceptionList = pvStack_10;
  return param_2;
}


// ==== 10103f62 FBitReader::`default_constructor_closure'

/* public: void __thiscall FBitReader::`default constructor closure'(void) */

void __thiscall FBitReader::_default_constructor_closure_(FBitReader *this)

{
                    /* 0x3f62  771  ??_FFBitReader@@QAEXXZ */
  FBitReader(this,(uchar *)0x0,0);
  return;
}


// ==== 10103f67 thunk_FUN_1015a320 thunk -> 1015a320

// ==== 10103f6c FString::FString

/* public: __thiscall FString::FString(signed char,int) */

void __thiscall FString::FString(FString *this,char param_1,int param_2)

{
                    /* 0x3f6c  143  ??0FString@@QAE@CH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10103f71 FArray::Num

/* public: int __thiscall FArray::Num(void)const  */

int __thiscall FArray::Num(FArray *this)

{
                    /* 0x3f71  1648  ?Num@FArray@@QBEHXZ */
  return *(int *)(this + 4);
}


// ==== 10103f76 UObject::execSqrt

/* public: void __thiscall UObject::execSqrt(struct FFrame &,void * const) */

void __thiscall UObject::execSqrt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x3f76  2367  ?execSqrt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSqrt((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10103f7b thunk_FUN_10127b00 thunk -> 10127b00

// ==== 10103f80 UState::~UState

/* public: virtual __thiscall UState::~UState(void) */

void __thiscall UState::~UState(UState *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3f80  345  ??1UState@@UAE@XZ */
  puStack_8 = &LAB_101b7748;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UStruct::~UStruct((UStruct *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103f8a FString::FString

/* public: __thiscall FString::FString(int,int) */

void __thiscall FString::FString(FString *this,int param_1,int param_2)

{
                    /* 0x3f8a  147  ??0FString@@QAE@HH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10103f8f FString::FString

/* public: __thiscall FString::FString(unsigned short,int) */

void __thiscall FString::FString(FString *this,ushort param_1,int param_2)

{
                    /* 0x3f8f  146  ??0FString@@QAE@GH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10103f94 FString::LeftPad

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: class FString __thiscall FString::LeftPad(int) */

int __thiscall FString::LeftPad(FString *this,int param_1)

{
  int iVar1;
  FString *this_00;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  int in_stack_00000008;
  FString aFStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FString *pFStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x3f94  1548  ?LeftPad@FString@@QAE?AV1@H@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101bc3a9;
  pvStack_10 = ExceptionList;
  uStack_14 = 0;
  if (*(int *)(this + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 4) + -1;
  }
  uVar5 = in_stack_00000008 - iVar1;
  pFStack_18 = this;
  if ((int)uVar5 < 1) {
    ExceptionList = &pvStack_10;
    FString((FString *)param_1,this);
  }
  else {
    if ((uVar5 & 0x7fffffff) == 0x7fffffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)&stack0xffffffd0;
    }
    uVar2 = 0;
    if (0 < (int)uVar5) {
      puVar6 = puVar4;
      for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar6[0] = 0x20;
        puVar6[1] = 0x20;
        puVar6 = puVar6 + 2;
      }
      for (uVar3 = (uint)((uVar5 & 1) != 0); uVar2 = uVar5, uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = 0x20;
        puVar6 = puVar6 + 1;
      }
    }
    puVar4[uVar2] = 0;
    ExceptionList = &pvStack_10;
    this_00 = (FString *)FString(aFStack_24,puVar4);
    uStack_8 = 1;
    operator+(this_00,(FString *)param_1);
    uStack_14 = 1;
    uStack_8 = 2;
    uStack_20 = 0;
    uStack_1c = 0;
    FArray::Realloc((FArray *)aFStack_24,2);
    uStack_8 = uStack_8 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_24);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10103f99 L2ThreadBase::GetHandle

/* public: virtual void * __thiscall L2ThreadBase::GetHandle(void) */

void * __thiscall L2ThreadBase::GetHandle(L2ThreadBase *this)

{
                    /* 0x3f99  1327  ?GetHandle@L2ThreadBase@@UAEPAXXZ */
  return *(void **)(this + 8);
}


// ==== 10103f9e thunk_FUN_101373f0 thunk -> 101373f0

// ==== 10103fa3 UCommandlet::UCommandlet

/* public: __thiscall UCommandlet::UCommandlet(class UCommandlet const &) */

UCommandlet * __thiscall UCommandlet::UCommandlet(UCommandlet *this,UCommandlet *param_1)

{
  uint uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3fa3  199  ??0UCommandlet@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7574;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x34),(FString *)(param_1 + 0x34));
  uStack_4._0_1_ = 1;
  FString::FString((FString *)(this + 0x40),(FString *)(param_1 + 0x40));
  uStack_4._0_1_ = 2;
  FString::FString((FString *)(this + 0x4c),(FString *)(param_1 + 0x4c));
  uStack_4._0_1_ = 3;
  FString::FString((FString *)(this + 0x58),(FString *)(param_1 + 0x58));
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  _eh_vector_copy_constructor_iterator_
            (this + 100,param_1 + 100,0xc,0x10,FStringNoInit::FStringNoInit,
             FStringNoInit::~FStringNoInit);
  _eh_vector_copy_constructor_iterator_
            (this + 0x124,param_1 + 0x124,0xc,0x10,FStringNoInit::FStringNoInit,
             FStringNoInit::~FStringNoInit);
  *(uint *)(this + 0x1e4) =
       *(uint *)(this + 0x1e4) ^ (*(uint *)(this + 0x1e4) ^ *(uint *)(param_1 + 0x1e4)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ *(uint *)(this + 0x1e4)) & 2 ^ *(uint *)(this + 0x1e4);
  *(uint *)(this + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(this + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(this + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(this + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 0x1e4) = uVar1;
  *(uint *)(this + 0x1e4) = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 0x40 ^ uVar1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103fa8 FRangeVector::operator*=

/* public: class FRangeVector __thiscall FRangeVector::operator*=(float) */

void __thiscall FRangeVector::operator*=(FRangeVector *this,float param_1)

{
  undefined4 uVar1;
  float in_stack_00000008;
  
                    /* 0x3fa8  669  ??XFRangeVector@@QAE?AV0@M@Z */
  *(float *)this = in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * in_stack_00000008;
  *(float *)(this + 8) = in_stack_00000008 * *(float *)(this + 8);
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * in_stack_00000008;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * in_stack_00000008;
  *(float *)(this + 0x14) = in_stack_00000008 * *(float *)(this + 0x14);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  return;
}


// ==== 10103fad FOutputDevice::Logf

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl FOutputDevice::Logf(unsigned short const *,...) */

void __thiscall FOutputDevice::Logf(FOutputDevice *this,ushort *param_1,...)

{
  ushort auStack_2000 [4094];
  undefined4 uStack_4;
  
                    /* 0x3fad  1598  ?Logf@FOutputDevice@@QAAXPBGZZ */
  uStack_4 = 0x10151dfa;
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    appGetVarArgs(auStack_2000,0x1000,(ushort **)&stack0x00000008);
    (*(code *)**(undefined4 **)param_1)(auStack_2000,0x2f8);
  }
  return;
}


// ==== 10103fb2 FRotator::FRotator

/* public: __thiscall FRotator::FRotator(void) */

FRotator * __thiscall FRotator::FRotator(FRotator *this)

{
                    /* 0x3fb2  128  ??0FRotator@@QAE@XZ */
  return this;
}


// ==== 10103fb7 UObject::execSwitch

/* public: void __thiscall UObject::execSwitch(struct FFrame &,void * const) */

void __thiscall UObject::execSwitch(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 unaff_EBP;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 uStack_814;
  undefined4 *puStack_810;
  undefined4 auStack_80c [254];
  ushort *puStack_414;
  int iStack_410;
  undefined4 auStack_40c [254];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3fb7  2397  ?execSwitch@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb326;
  pvStack_c = ExceptionList;
  uStack_814 = (ushort *)CONCAT13(**(undefined1 **)(param_1 + 0xc),(undefined3)uStack_814);
  ExceptionList = &pvStack_c;
  *(undefined1 **)(param_1 + 0xc) = *(undefined1 **)(param_1 + 0xc) + 1;
  puVar6 = auStack_40c;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puStack_810 = auStack_80c;
  puVar6 = puStack_810;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  bVar7 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar7])(param_1,auStack_80c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  uVar2 = **(ushort **)(param_1 + 0xc);
  *(ushort **)(param_1 + 0xc) = *(ushort **)(param_1 + 0xc) + 1;
  bVar7 = (byte)((uint)unaff_EBP >> 0x18);
  while (uVar2 != 0xffff) {
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,&puStack_414);
    if (bVar7 == 0) {
      puVar5 = puStack_414;
      if (iStack_410 == 0) {
        puVar5 = &DAT_101cdd44;
      }
      puVar3 = uStack_814;
      if (puStack_810 == (undefined4 *)0x0) {
        puVar3 = &DAT_101cdd44;
      }
      iVar4 = appStricmp(puVar3,puVar5);
    }
    else {
      iVar4 = appMemcmp(&uStack_814,&puStack_414,(uint)bVar7);
    }
    if (iVar4 == 0) break;
    *(uint *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0x54) + (uint)uVar2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    uVar2 = **(ushort **)(param_1 + 0xc);
    *(ushort **)(param_1 + 0xc) = *(ushort **)(param_1 + 0xc) + 1;
  }
  if (bVar7 == 0) {
    pvStack_c = (void *)0x0;
    puStack_810 = (undefined4 *)0x0;
    auStack_80c[0] = 0;
    FArray::Realloc((FArray *)&uStack_814,2);
    pvStack_c = (void *)0xffffffff;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_814);
    pvStack_c = (void *)0x1;
    iStack_410 = 0;
    auStack_40c[0] = 0;
    FArray::Realloc((FArray *)&puStack_414,2);
    pvStack_c = (void *)0xffffffff;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_414);
  }
  ExceptionList = pvStack_14;
  return;
}


// ==== 10103fc1 UState::Link

/* public: virtual void __thiscall UState::Link(class FArchive &,int) */

void __thiscall UState::Link(UState *this,FArchive *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  UState *pUVar3;
  int iStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3fc1  1564  ?Link@UState@@UAEXAAVFArchive@@H@Z */
  puStack_c = &LAB_101ba710;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UStruct::Link((UStruct *)this,param_1,param_2);
  if (*(int *)(this + 0x34) == 0) {
    pUVar3 = this + 0xa4;
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pUVar3 = 0;
      pUVar3 = pUVar3 + 4;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pUVar3 = (UState)0x0;
      pUVar3 = pUVar3 + 1;
    }
  }
  else {
    _memcpy(this + 0xa4,(void *)(*(int *)(this + 0x34) + 0xa4),0x400);
  }
  thunk_FUN_101344d0(this);
  while ((iStack_20 != 0 && (*(UState **)(iStack_20 + 0x18) == this))) {
    uVar2 = *(uint *)(iStack_20 + 0x20) & 0xff;
    *(undefined4 *)(iStack_20 + 0x3c) = *(undefined4 *)(this + uVar2 * 4 + 0xa4);
    *(int *)(this + uVar2 * 4 + 0xa4) = iStack_20;
    iStack_20 = *(int *)(iStack_20 + 0x38);
    thunk_FUN_10132820();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103fcb UProperty::UProperty

/* public: __thiscall UProperty::UProperty(void) */

UProperty * __thiscall UProperty::UProperty(UProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3fcb  265  ??0UProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101be273;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)0x0);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103fd0 FRotator::AddBounded

/* public: class FRotator __thiscall FRotator::AddBounded(int,int,int) */

void __thiscall FRotator::AddBounded(FRotator *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000010;
  
                    /* 0x3fd0  778  ?AddBounded@FRotator@@QAE?AV1@HHH@Z */
  *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  iVar1 = *(int *)this;
  if (param_2 < 0) {
    if ((param_2 < -0xffff) || (param_2 <= (int)-(iVar1 + 0x4000U & 0xffff))) {
      uVar3 = 0xc000;
    }
    else {
LAB_1010e1ad:
      uVar3 = param_2 + iVar1 & 0xffff;
    }
  }
  else {
    if ((param_2 < 1) || ((param_2 < 0x10000 && (param_2 < (int)(0x4000U - iVar1 & 0xffff)))))
    goto LAB_1010e1ad;
    uVar3 = 0x4000;
  }
  *(uint *)this = uVar3;
  iVar1 = *(int *)(this + 8);
  if (in_stack_00000010 < 0) {
    if ((in_stack_00000010 < -0xffff) || (in_stack_00000010 <= (int)-(iVar1 + 0x4000U & 0xffff))) {
      uVar3 = 0xc000;
      goto LAB_1010e202;
    }
  }
  else if ((0 < in_stack_00000010) &&
          ((0xffff < in_stack_00000010 || ((int)(0x4000U - iVar1 & 0xffff) <= in_stack_00000010))))
  {
    uVar3 = 0x4000;
    goto LAB_1010e202;
  }
  uVar3 = iVar1 + in_stack_00000010 & 0xffff;
LAB_1010e202:
  *(uint *)(this + 8) = uVar3;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar2 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}


// ==== 10103fd5 thunk_FUN_1012ab20 thunk -> 1012ab20

// ==== 10103fda UObject::GotoLabel

/* public: virtual int __thiscall UObject::GotoLabel(class FName) */

int __thiscall UObject::GotoLabel(UObject *this,int param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x3fda  1418  ?GotoLabel@UObject@@UAEHVFName@@@Z */
  if (*(int *)(this + 0xc) != 0) {
    *(undefined4 *)(*(int *)(this + 0xc) + 0x28) = 0;
    if (param_2 != 0) {
      for (iVar2 = *(int *)(*(int *)(this + 0xc) + 0x1c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x34)
          ) {
        if (*(ushort *)(iVar2 + 0xa0) != 0xffff) {
          piVar1 = (int *)((uint)*(ushort *)(iVar2 + 0xa0) + *(int *)(iVar2 + 0x54));
          while( true ) {
            if (*piVar1 == 0) break;
            if (*piVar1 == param_2) {
              *(int *)(*(int *)(this + 0xc) + 4) = iVar2;
              *(int *)(*(int *)(this + 0xc) + 0xc) = *(int *)(iVar2 + 0x54) + piVar1[1];
              return 1;
            }
            piVar1 = piVar1 + 2;
          }
        }
      }
    }
    *(undefined4 *)(*(int *)(this + 0xc) + 0xc) = 0;
  }
  return 0;
}


// ==== 10103fe4 UTextBuffer::~UTextBuffer

/* public: virtual __thiscall UTextBuffer::~UTextBuffer(void) */

void __thiscall UTextBuffer::~UTextBuffer(UTextBuffer *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x3fe4  351  ??1UTextBuffer@@UAE@XZ */
  puStack_8 = &LAB_101b75f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0x40));
  uStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103fee UObject::execQuatInvert

/* public: void __thiscall UObject::execQuatInvert(struct FFrame &,void * const) */

void __thiscall UObject::execQuatInvert(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
                    /* 0x3fee  2350  ?execQuatInvert@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -fStack_18;
  unaff_retaddr[1] = -fStack_14;
  unaff_retaddr[2] = -fStack_10;
  unaff_retaddr[3] = fStack_c;
  return;
}


// ==== 10103ff3 UObject::InitExecution

/* public: virtual void __thiscall UObject::InitExecution(void) */

void __thiscall UObject::InitExecution(UObject *this)

{
  FStateFrame *this_00;
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ff3  1466  ?InitExecution@UObject@@UAEXXZ */
  puStack_c = &LAB_101bcc20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x24) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("GetClass()!=NULL",".\\UnObj.cpp",0x2e4);
  }
  if (*(int *)(this + 0xc) != 0) {
    thunk_FUN_101088c0(*(int *)(this + 0xc));
  }
  this_00 = (FStateFrame *)thunk_FUN_1015a300(0x2c,L"ObjectStateFrame");
  if (this_00 == (FStateFrame *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FStateFrame::FStateFrame(this_00,this);
  }
  *(undefined4 *)(this + 0xc) = uVar1;
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x2000000;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103ffd UByteProperty::~UByteProperty

/* public: virtual __thiscall UByteProperty::~UByteProperty(void) */

void __thiscall UByteProperty::~UByteProperty(UByteProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3ffd  319  ??1UByteProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7958;
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


// ==== 10104002 FPreferencesInfo::FPreferencesInfo

/* public: __thiscall FPreferencesInfo::FPreferencesInfo(class FPreferencesInfo const &) */

FPreferencesInfo * __thiscall
FPreferencesInfo::FPreferencesInfo(FPreferencesInfo *this,FPreferencesInfo *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4002  113  ??0FPreferencesInfo@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b741e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FString::FString((FString *)(this + 0x18),(FString *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10104007 TArray<unsigned_short>::operator+

/* public: class TArray<unsigned short> & __thiscall TArray<unsigned short>::operator+(class
   TArray<unsigned short> const &) */

TArray<unsigned_short> * __thiscall
TArray<unsigned_short>::operator+(TArray<unsigned_short> *this,TArray<unsigned_short> *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x4007  631  ??H?$TArray@G@@QAEAAV0@ABV0@@Z */
  if (this == param_1) {
    return this;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 4) < 1) {
    return this;
  }
  do {
    iVar3 = *(int *)(this + 4);
    iVar1 = iVar3 + 1;
    *(int *)(this + 4) = iVar1;
    if (*(int *)(this + 8) < iVar1) {
      *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
      FArray::Realloc((FArray *)this,2);
    }
    puVar2 = (undefined2 *)(*(int *)this + iVar3 * 2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *(undefined2 *)(*(int *)param_1 + iVar4 * 2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return this;
}


// ==== 1010400c UByteProperty::StaticClass

/* public: static class UClass * __cdecl UByteProperty::StaticClass(void) */

UClass * __cdecl UByteProperty::StaticClass(void)

{
                    /* 0x400c  1890  ?StaticClass@UByteProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10104011 UObject::execXorXor_BoolBool

/* public: void __thiscall UObject::execXorXor_BoolBool(struct FFrame &,void * const) */

void __thiscall UObject::execXorXor_BoolBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x4011  2411  ?execXorXor_BoolBool@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10104016 UObject::IsPendingKill

/* public: virtual int __thiscall UObject::IsPendingKill(void) */

int __thiscall UObject::IsPendingKill(UObject *this)

{
                    /* 0x4016  1522  ?IsPendingKill@UObject@@UAEHXZ */
  return 0;
}


// ==== 1010401b thunk_FUN_1012ae60 thunk -> 1012ae60

// ==== 10104025 TArray<unsigned_short>::Shrink

/* public: void __thiscall TArray<unsigned short>::Shrink(void) */

void __thiscall TArray<unsigned_short>::Shrink(TArray<unsigned_short> *this)

{
                    /* 0x4025  1871  ?Shrink@?$TArray@G@@QAEXXZ */
  if (*(int *)(this + 8) != *(int *)(this + 4)) {
    *(int *)(this + 8) = *(int *)(this + 4);
    FArray::Realloc((FArray *)this,2);
  }
  return;
}


// ==== 1010402f UEnum::~UEnum

/* public: virtual __thiscall UEnum::~UEnum(void) */

void __thiscall UEnum::~UEnum(UEnum *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x402f  325  ??1UEnum@@UAE@XZ */
  puStack_8 = &LAB_101b77b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10118d50();
  uStack_4 = 0xffffffff;
  UField::~UField((UField *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10104034 UFloatProperty::StaticClass

/* public: static class UClass * __cdecl UFloatProperty::StaticClass(void) */

UClass * __cdecl UFloatProperty::StaticClass(void)

{
                    /* 0x4034  1901  ?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10104039 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,unsigned short *,int) */

int __cdecl Parse(ushort *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4039  1665  ?Parse@@YAHPBG0PAGH@Z */
  puStack_c = &LAB_101bbfd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    puVar1 = puVar1 + iVar2;
    if (*puVar1 == 0x22) {
      appStrncpy(param_3,puVar1 + 1,param_4);
      param_3[param_4 + -1] = 0;
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6204);
    }
    else {
      appStrncpy(param_3,puVar1,param_4);
      param_3[param_4 + -1] = 0;
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6208);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d620c);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6210);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6214);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = appStrstr(param_3,(ushort *)&DAT_101d6218);
    }
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = 0;
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1010403e UByteProperty::NetSerializeItem

/* public: virtual int __thiscall UByteProperty::NetSerializeItem(class FArchive &,class UPackageMap
   *,void *)const  */

int __thiscall
UByteProperty::NetSerializeItem
          (UByteProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
  uchar uVar1;
  
                    /* 0x403e  1631
                       ?NetSerializeItem@UByteProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  if (*(int *)(this + 0x78) == 0) {
    uVar1 = '\b';
  }
  else {
    uVar1 = appCeilLogTwo(*(ulong *)(*(int *)(this + 0x78) + 0x44));
  }
  (**(code **)(*(int *)param_1 + 8))(param_3,uVar1);
  return 1;
}


// ==== 10104043 FVector::operator==

/* public: int __thiscall FVector::operator==(class FVector const &)const  */

int __thiscall FVector::operator==(FVector *this,FVector *param_1)

{
                    /* 0x4043  575  ??8FVector@@QBEHABV0@@Z */
  if (((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
     && (*(float *)(param_1 + 8) == *(float *)(this + 8))) {
    return 1;
  }
  return 0;
}


// ==== 10104048 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,class FPackageInfo &) */

FArchive * __cdecl operator<<(FArchive *param_1,FPackageInfo *param_2)

{
  undefined4 uVar1;
  FArchive *pFVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4048  553  ??6@YAAAVFArchive@@AAV0@AAVFPackageInfo@@@Z */
  puStack_c = &LAB_101ba780;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  uVar1 = (**(code **)(*(int *)param_1 + 0x18))(param_2 + 0x10,param_2 + 0xc);
  pFVar2 = (FArchive *)thunk_FUN_10136a80(uVar1);
  ExceptionList = pvStack_10;
  return pFVar2;
}


// ==== 10104052 FPlane::TransformByUsingAdjointT

/* public: class FPlane __thiscall FPlane::TransformByUsingAdjointT(class FMatrix const &,class
   FMatrix const &)const  */

void __thiscall FPlane::TransformByUsingAdjointT(FPlane *this,FMatrix *param_1,FMatrix *param_2)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float fVar3;
  float *unaff_retaddr;
  float *in_stack_0000000c;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x4052  1973  ?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */
  fStack_20 = *(float *)this;
  fStack_1c = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fStack_10 = fStack_1c * in_stack_0000000c[4] + fStack_20 * *in_stack_0000000c +
              fVar3 * in_stack_0000000c[8] + in_stack_0000000c[0xc] * 0.0;
  fStack_c = in_stack_0000000c[0xd] * 0.0 +
             in_stack_0000000c[9] * fVar3 +
             in_stack_0000000c[5] * fStack_1c + in_stack_0000000c[1] * fStack_20;
  fStack_8 = in_stack_0000000c[0xe] * 0.0 +
             in_stack_0000000c[10] * fVar3 +
             in_stack_0000000c[6] * fStack_1c + in_stack_0000000c[2] * fStack_20;
  fStack_4 = fVar3 * in_stack_0000000c[0xb] +
             in_stack_0000000c[3] * fStack_20 + in_stack_0000000c[7] * fStack_1c +
             in_stack_0000000c[0xf] * 0.0;
  FVector::SafeNormal((FVector *)&fStack_10);
  fVar3 = FMatrix::Determinant(param_1);
  if (fVar3 < 0.0) {
    unaff_ESI = unaff_ESI * -1.0;
    fStack_20 = fStack_20 * -1.0;
    fStack_1c = fStack_1c * -1.0;
  }
  fVar3 = *(float *)(this + 0xc);
  fVar1 = *(float *)this;
  *unaff_retaddr = unaff_ESI;
  fVar1 = fVar3 * fVar1;
  unaff_retaddr[1] = fStack_20;
  unaff_retaddr[2] = fStack_1c;
  fVar2 = *(float *)(this + 4) * fVar3;
  fVar3 = fVar3 * *(float *)(this + 8);
  unaff_retaddr[3] =
       (fVar3 * *(float *)(param_1 + 0x28) +
        *(float *)(param_1 + 0x18) * fVar2 + *(float *)(param_1 + 8) * fVar1 +
       *(float *)(param_1 + 0x38)) * fStack_1c +
       (fVar2 * *(float *)(param_1 + 0x10) + fVar1 * *(float *)param_1 +
        fVar3 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x30)) * unaff_ESI +
       (*(float *)(param_1 + 0x24) * fVar3 +
        *(float *)(param_1 + 4) * fVar1 + *(float *)(param_1 + 0x14) * fVar2 +
       *(float *)(param_1 + 0x34)) * fStack_20;
  return;
}


// ==== 10104057 UArrayProperty::operator_new

/* public: static void * __cdecl UArrayProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UArrayProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x4057  353  ??2UArrayProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 1010405c thunk_FUN_10130860 thunk -> 10130860

// ==== 10104061 FUnknown::QueryInterface

/* public: virtual unsigned long __stdcall FUnknown::QueryInterface(class FGuid const &,void * *) */

ulong FUnknown::QueryInterface(FGuid *param_1,void **param_2)

{
                    /* 0x4061  1742  ?QueryInterface@FUnknown@@UAGKABVFGuid@@PAPAX@Z */
  return 0;
}


// ==== 10104066 thunk_FUN_1015ca60 thunk -> 1015ca60

// ==== 10104070 thunk_FUN_10113dd0 thunk -> 10113dd0

// ==== 10104075 thunk_FUN_10149600 thunk -> 10149600

// ==== 1010407a FMemCache::FCacheItem::SetExtra

/* public: void __thiscall FMemCache::FCacheItem::SetExtra(unsigned char) */

void __thiscall FMemCache::FCacheItem::SetExtra(FCacheItem *this,uchar param_1)

{
                    /* 0x407a  1855  ?SetExtra@FCacheItem@FMemCache@@QAEXE@Z */
  this[0xf] = (FCacheItem)param_1;
  return;
}


// ==== 1010407f FArchive::ForEdit

/* public: int __thiscall FArchive::ForEdit(void) */

int __thiscall FArchive::ForEdit(FArchive *this)

{
                    /* 0x407f  1023  ?ForEdit@FArchive@@QAEHXZ */
  return *(int *)(this + 0x20);
}


// ==== 10104084 FCodec::Decode

/* public: virtual int __thiscall FCodec::Decode(char const *,char const *,unsigned char *,unsigned
   long,unsigned char *,unsigned long &,int,int) */

int __thiscall
FCodec::Decode(FCodec *this,char *param_1,char *param_2,uchar *param_3,ulong param_4,uchar *param_5,
              ulong *param_6,int param_7,int param_8)

{
                    /* 0x4084  905  ?Decode@FCodec@@UAEHPBD0PAEK1AAKHH@Z */
  return 0;
}


// ==== 10104089 appAtan2

/* double __cdecl appAtan2(double,double) */

double __cdecl appAtan2(double param_1,double param_2)

{
  float10 fVar1;
  
                    /* 0x4089  2015  ?appAtan2@@YANNN@Z */
  fVar1 = (float10)FUN_1017cb4a();
  return (double)fVar1;
}


// ==== 1010408e FArchive::SetStopper

/* public: virtual void __thiscall FArchive::SetStopper(int) */

void __thiscall FArchive::SetStopper(FArchive *this,int param_1)

{
                    /* 0x408e  1868  ?SetStopper@FArchive@@UAEXH@Z */
  *(int *)(this + 0x34) = param_1;
  return;
}


// ==== 10104093 FArray::InsertZeroed

/* public: void __thiscall FArray::InsertZeroed(int,int,int) */

void __thiscall FArray::InsertZeroed(FArray *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x4093  1473  ?InsertZeroed@FArray@@QAEXHHH@Z */
  Insert(this,param_1,param_2,param_3);
  uVar2 = param_2 * param_3 & 3;
  puVar3 = (undefined4 *)(param_1 * param_3 + *(int *)this);
  for (uVar1 = (uint)(param_2 * param_3) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


// ==== 1010409d UObject::execLetDelegate

/* public: void __thiscall UObject::execLetDelegate(struct FFrame &,void * const) */

void __thiscall UObject::execLetDelegate(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *puVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x409d  2295  ?execLetDelegate@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baa80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  GPropAddr = (uchar *)0x0;
  GProperty = (UProperty *)0x0;
  GPropObject = (UObject *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  puVar2 = GPropAddr;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_24);
  if (puVar2 != (uchar *)0x0) {
    *(undefined4 *)(puVar2 + 4) = uStack_20;
    *(undefined4 *)puVar2 = uStack_24;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101040a2 FBitReader::GetNumBytes

/* public: int __thiscall FBitReader::GetNumBytes(void) */

int __thiscall FBitReader::GetNumBytes(FBitReader *this)

{
                    /* 0x40a2  1367  ?GetNumBytes@FBitReader@@QAEHXZ */
  return *(int *)(this + 0x44) + 7 >> 3;
}


// ==== 101040a7 FErrorOutError::FErrorOutError

/* public: __thiscall FErrorOutError::FErrorOutError(class FErrorOutError const &) */

void __thiscall FErrorOutError::FErrorOutError(FErrorOutError *this,FErrorOutError *param_1)

{
                    /* 0x40a7  45  ??0FErrorOutError@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 101040ac thunk_FUN_10148620 thunk -> 10148620

// ==== 101040b1 UDelegateProperty::Serialize

/* public: virtual void __thiscall UDelegateProperty::Serialize(class FArchive &) */

void __thiscall UDelegateProperty::Serialize(UDelegateProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x40b1  1807  ?Serialize@UDelegateProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be010;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  thunk_FUN_10170550(param_1,this + 0x78);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101040b6 thunk_FUN_10121930 thunk -> 10121930

// ==== 101040bb FVector::operator-

/* public: class FVector __thiscall FVector::operator-(class FVector const &)const  */

void __thiscall FVector::operator-(FVector *this,FVector *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x40bb  629  ??GFVector@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *(float *)this - *in_stack_00000008;
  *(float *)(param_1 + 4) = *(float *)(this + 4) - in_stack_00000008[1];
  *(float *)(param_1 + 8) = *(float *)(this + 8) - in_stack_00000008[2];
  return;
}


// ==== 101040c0 thunk_FUN_10114340 thunk -> 10114340

// ==== 101040c5 FGlobalMath::CosTab

/* public: float __thiscall FGlobalMath::CosTab(int) */

float __thiscall FGlobalMath::CosTab(FGlobalMath *this,int param_1)

{
                    /* 0x40c5  887  ?CosTab@FGlobalMath@@QAEMH@Z */
  return *(float *)(this + (param_1 + 0x4000 >> 2 & 0x3fffU) * 4 + 0x8c);
}


// ==== 101040ca FNpcPosInfoHit::operator==

/* public: int __thiscall FNpcPosInfoHit::operator==(class FNpcPosInfoHit const &)const  */

int __thiscall FNpcPosInfoHit::operator==(FNpcPosInfoHit *this,FNpcPosInfoHit *param_1)

{
                    /* 0x40ca  565  ??8FNpcPosInfoHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 101040cf thunk_FUN_101779f0 thunk -> 101779f0

// ==== 101040d4 thunk_FUN_10178490 thunk -> 10178490

// ==== 101040d9 FRangeVector::operator!=

/* public: int __thiscall FRangeVector::operator!=(class FRangeVector const &)const  */

int __thiscall FRangeVector::operator!=(FRangeVector *this,FRangeVector *param_1)

{
                    /* 0x40d9  585  ??9FRangeVector@@QBEHABV0@@Z */
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
      && (*(float *)(param_1 + 8) == *(float *)(this + 8))) &&
     (((*(float *)(param_1 + 0xc) == *(float *)(this + 0xc) &&
       (*(float *)(param_1 + 0x10) == *(float *)(this + 0x10))) &&
      (*(float *)(param_1 + 0x14) == *(float *)(this + 0x14))))) {
    return 0;
  }
  return 1;
}


// ==== 101040e3 appStrnicmp

/* int __cdecl appStrnicmp(unsigned short const *,unsigned short const *,int) */

int __cdecl appStrnicmp(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  
                    /* 0x40e3  2116  ?appStrnicmp@@YAHPBG0H@Z */
  if (DAT_1033e2bc == 0) {
    iVar3 = 0;
    if (param_3 != 0) {
      if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
        puVar4 = (undefined4 *)FUN_10183cab();
        *puVar4 = 0x16;
        FUN_10183c33(0,0,0,0,0);
        iVar3 = 0x7fffffff;
      }
      else {
        do {
          uVar1 = *param_1;
          if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
            uVar1 = uVar1 + 0x20;
          }
          uVar2 = *param_2;
          if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
            uVar2 = uVar2 + 0x20;
          }
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (((param_3 != 0) && (uVar1 != 0)) && (uVar1 == uVar2));
        iVar3 = (uint)uVar1 - (uint)uVar2;
      }
    }
  }
  else {
    iVar3 = __wcsnicmp_l((wchar_t *)param_1,(wchar_t *)param_2,param_3,(_locale_t)0x0);
  }
  return iVar3;
}


// ==== 101040e8 UObjectProperty::CopySingleValue

/* public: virtual void __thiscall UObjectProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UObjectProperty::CopySingleValue(UObjectProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x40e8  882  ?CopySingleValue@UObjectProperty@@UBEXPAX0PAVUObject@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}


// ==== 101040ed UConst::Serialize

/* public: virtual void __thiscall UConst::Serialize(class FArchive &) */

void __thiscall UConst::Serialize(UConst *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x40ed  1806  ?Serialize@UConst@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101b9f60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UField::Serialize((UField *)this,param_1);
  operator<<(param_1,(FString *)(this + 0x40));
  ExceptionList = pvStack_10;
  return;
}


// ==== 101040f2 UTextBufferFactory::UTextBufferFactory

/* public: __thiscall UTextBufferFactory::UTextBufferFactory(void) */

UTextBufferFactory * __thiscall UTextBufferFactory::UTextBufferFactory(UTextBufferFactory *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x40f2  289  ??0UTextBufferFactory@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bdb18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UFactory::UFactory((UFactory *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101040f7 thunk_FUN_101665e0 thunk -> 101665e0

// ==== 101040fc thunk_FUN_10130ef0 thunk -> 10130ef0

// ==== 10104101 FMemCache::ConditionalCheckState

/* private: void __thiscall FMemCache::ConditionalCheckState(void) */

void __thiscall FMemCache::ConditionalCheckState(FMemCache *this)

{
                    /* 0x4101  856  ?ConditionalCheckState@FMemCache@@AAEXXZ */
  return;
}


// ==== 10104106 thunk_FUN_1010c400 thunk -> 1010c400

// ==== 1010410b UObject::GetObjectHash

/* public: static int __cdecl UObject::GetObjectHash(class FName,int) */

int __cdecl UObject::GetObjectHash(uint param_1)

{
                    /* 0x410b  1370  ?GetObjectHash@UObject@@SAHVFName@@H@Z */
  return param_1 & 0xfff;
}


// ==== 10104110 thunk_FUN_10149270 thunk -> 10149270

// ==== 10104115 UObject::execQuatRotateVector

/* public: void __thiscall UObject::execQuatRotateVector(struct FFrame &,void * const) */

void __thiscall UObject::execQuatRotateVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 **ppuVar3;
  FFrame *pFVar4;
  undefined1 *puStack_30;
  FQuat aFStack_20 [8];
  undefined4 *puStack_18;
  undefined1 auStack_10 [16];
  
                    /* 0x4115  2352  ?execQuatRotateVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_30 = auStack_10;
  pFVar4 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppuVar3 = &puStack_30;
  (*(code *)(&GNatives)[bVar1])(param_1,ppuVar3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = (undefined4 *)FQuat::RotateVector(aFStack_20,&stack0xffffffd4,ppuVar3,pFVar4,puStack_30);
  *puStack_18 = *puVar2;
  puStack_18[1] = puVar2[1];
  puStack_18[2] = puVar2[2];
  return;
}


// ==== 1010411a thunk_FUN_10132a90 thunk -> 10132a90

// ==== 1010411f thunk_FUN_101281e0 thunk -> 101281e0

// ==== 10104124 FMatrix::Inverse

/* public: class FMatrix __thiscall FMatrix::Inverse(void) */

void __thiscall FMatrix::Inverse(FMatrix *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  FMatrix *pFVar9;
  float *pfVar10;
  float fVar11;
  float *in_stack_00000004;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x4124  1507  ?Inverse@FMatrix@@QAE?AV1@XZ */
  fVar11 = Determinant(this);
  if (fVar11 == 0.0) {
    pFVar9 = &Identity;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *in_stack_00000004 = *(float *)pFVar9;
      pFVar9 = pFVar9 + 4;
      in_stack_00000004 = in_stack_00000004 + 1;
    }
    return;
  }
  fVar11 = 1.0 / fVar11;
  fVar1 = *(float *)(this + 0x3c) * *(float *)(this + 0x28) -
          *(float *)(this + 0x38) * *(float *)(this + 0x2c);
  fVar2 = *(float *)(this + 0x18) * *(float *)(this + 0x3c) -
          *(float *)(this + 0x38) * *(float *)(this + 0x1c);
  fVar3 = *(float *)(this + 0x2c) * *(float *)(this + 0x18) -
          *(float *)(this + 0x28) * *(float *)(this + 0x1c);
  afStack_40[0] =
       fVar11 * (*(float *)(this + 0x34) * fVar3 +
                (*(float *)(this + 0x14) * fVar1 - *(float *)(this + 0x24) * fVar2));
  fVar5 = *(float *)(this + 0x3c) * *(float *)(this + 8) -
          *(float *)(this + 0x38) * *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 0x2c) * *(float *)(this + 8) -
          *(float *)(this + 0x28) * *(float *)(this + 0xc);
  fVar4 = -fVar11;
  afStack_40[1] =
       fVar4 * (fVar6 * *(float *)(this + 0x34) +
               (*(float *)(this + 4) * fVar1 - *(float *)(this + 0x24) * fVar5));
  fVar7 = *(float *)(this + 0x1c) * *(float *)(this + 8) -
          *(float *)(this + 0x18) * *(float *)(this + 0xc);
  afStack_40[2] =
       (*(float *)(this + 0x34) * fVar7 +
       (*(float *)(this + 4) * fVar2 - *(float *)(this + 0x14) * fVar5)) * fVar11;
  afStack_40[3] =
       ((*(float *)(this + 4) * fVar3 - *(float *)(this + 0x14) * fVar6) +
       *(float *)(this + 0x24) * fVar7) * fVar4;
  fStack_30 = (*(float *)(this + 0x30) * fVar3 +
              (*(float *)(this + 0x10) * fVar1 - *(float *)(this + 0x20) * fVar2)) * fVar4;
  fStack_2c = ((*(float *)this * fVar1 - *(float *)(this + 0x20) * fVar5) +
              *(float *)(this + 0x30) * fVar6) * fVar11;
  fStack_28 = fVar4 * (*(float *)(this + 0x30) * fVar7 +
                      (*(float *)this * fVar2 - *(float *)(this + 0x10) * fVar5));
  fStack_24 = fVar11 * ((*(float *)this * fVar3 - *(float *)(this + 0x10) * fVar6) +
                       *(float *)(this + 0x20) * fVar7);
  fVar2 = *(float *)(this + 0x24) * *(float *)(this + 0x3c) -
          *(float *)(this + 0x2c) * *(float *)(this + 0x34);
  fVar3 = *(float *)(this + 0x3c) * *(float *)(this + 0x14) -
          *(float *)(this + 0x34) * *(float *)(this + 0x1c);
  fVar1 = *(float *)(this + 0x2c) * *(float *)(this + 0x14) -
          *(float *)(this + 0x24) * *(float *)(this + 0x1c);
  fStack_20 = (*(float *)(this + 0x30) * fVar1 +
              (*(float *)(this + 0x10) * fVar2 - *(float *)(this + 0x20) * fVar3)) * fVar11;
  fVar6 = *(float *)(this + 4) * *(float *)(this + 0x3c) -
          *(float *)(this + 0x34) * *(float *)(this + 0xc);
  fVar5 = *(float *)(this + 0x2c) * *(float *)(this + 4) -
          *(float *)(this + 0x24) * *(float *)(this + 0xc);
  fStack_1c = fVar4 * (*(float *)(this + 0x30) * fVar5 +
                      (*(float *)this * fVar2 - *(float *)(this + 0x20) * fVar6));
  fVar2 = *(float *)(this + 4) * *(float *)(this + 0x1c) -
          *(float *)(this + 0x14) * *(float *)(this + 0xc);
  fStack_18 = fVar11 * (*(float *)(this + 0x30) * fVar2 +
                       (*(float *)this * fVar3 - *(float *)(this + 0x10) * fVar6));
  fStack_14 = (fVar2 * *(float *)(this + 0x20) +
              (fVar1 * *(float *)this - *(float *)(this + 0x10) * fVar5)) * fVar4;
  fVar1 = *(float *)(this + 0x38) * *(float *)(this + 0x24) -
          *(float *)(this + 0x28) * *(float *)(this + 0x34);
  fVar3 = *(float *)(this + 0x38) * *(float *)(this + 0x14) -
          *(float *)(this + 0x18) * *(float *)(this + 0x34);
  fStack_10 = ((*(float *)(this + 0x10) * fVar1 - *(float *)(this + 0x20) * fVar3) +
              (*(float *)(this + 0x28) * *(float *)(this + 0x14) -
              *(float *)(this + 0x24) * *(float *)(this + 0x18)) * *(float *)(this + 0x30)) * fVar4;
  fVar2 = *(float *)(this + 0x38) * *(float *)(this + 4) -
          *(float *)(this + 0x34) * *(float *)(this + 8);
  fStack_c = fVar11 * ((*(float *)(this + 4) * *(float *)(this + 0x28) -
                       *(float *)(this + 0x24) * *(float *)(this + 8)) * *(float *)(this + 0x30) +
                      (*(float *)this * fVar1 - *(float *)(this + 0x20) * fVar2));
  fVar1 = *(float *)(this + 0x18) * *(float *)(this + 4) -
          *(float *)(this + 0x14) * *(float *)(this + 8);
  fStack_8 = (*(float *)(this + 0x30) * fVar1 +
             (*(float *)this * fVar3 - *(float *)(this + 0x10) * fVar2)) * fVar4;
  fStack_4 = (((*(float *)(this + 0x28) * *(float *)(this + 0x14) -
               *(float *)(this + 0x24) * *(float *)(this + 0x18)) * *(float *)this -
              (*(float *)(this + 4) * *(float *)(this + 0x28) -
              *(float *)(this + 0x24) * *(float *)(this + 8)) * *(float *)(this + 0x10)) +
             *(float *)(this + 0x20) * fVar1) * fVar11;
  pfVar10 = afStack_40;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *in_stack_00000004 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}


// ==== 10104129 thunk_FUN_1010a8d0 thunk -> 1010a8d0

// ==== 1010412e ULinkerLoad::CreateImport

/* private: class UObject * __thiscall ULinkerLoad::CreateImport(int) */

UObject * __thiscall ULinkerLoad::CreateImport(ULinkerLoad *this,int param_1)

{
  int iVar1;
  UObject *pUVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x412e  897  ?CreateImport@ULinkerLoad@@AAEPAVUObject@@H@Z */
  puStack_c = &LAB_101bb9d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 0x84) + param_1 * 0x1c;
  if (*(int *)(iVar1 + 0x10) == 0) {
    ExceptionList = &pvStack_10;
    if (*(int *)(iVar1 + 0x14) == 0) {
      ExceptionList = &pvStack_10;
      UObject::BeginLoad();
      VerifyImport(this,param_1);
      UObject::EndLoad();
    }
    if (*(int *)(iVar1 + 0x18) != -1) {
      pUVar2 = CreateExport(*(ULinkerLoad **)(iVar1 + 0x14),*(int *)(iVar1 + 0x18),0);
      *(UObject **)(iVar1 + 0x10) = pUVar2;
      UObject::GImportCount = UObject::GImportCount + 1;
    }
  }
  ExceptionList = pvStack_10;
  return *(UObject **)(iVar1 + 0x10);
}


// ==== 10104133 thunk_FUN_10120990 thunk -> 10120990

// ==== 10104138 appCeil

/* int __cdecl appCeil(float) */

int __cdecl appCeil(float param_1)

{
  int iVar1;
  
                    /* 0x4138  2020  ?appCeil@@YAHM@Z */
  FUN_1017ba00((double)param_1);
  iVar1 = FUN_1017b700();
  return iVar1;
}


// ==== 1010413d thunk_FUN_1012a950 thunk -> 1012a950

// ==== 10104142 FOutputDevice::operator=

/* public: class FOutputDevice & __thiscall FOutputDevice::operator=(class FOutputDevice const &) */

FOutputDevice * __thiscall FOutputDevice::operator=(FOutputDevice *this,FOutputDevice *param_1)

{
                    /* 0x4142  474  ??4FOutputDevice@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10104147 UFunction::UFunction

/* public: __thiscall UFunction::UFunction(class UFunction const &) */

UFunction * __thiscall UFunction::UFunction(UFunction *this,UFunction *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4147  226  ??0UFunction@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7728;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this,(UStruct *)param_1);
  *(undefined ***)this = vftable;
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
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010414c thunk_FUN_10113560 thunk -> 10113560

// ==== 10104151 UPackage::StaticClass

/* public: static class UClass * __cdecl UPackage::StaticClass(void) */

UClass * __cdecl UPackage::StaticClass(void)

{
                    /* 0x4151  1912  ?StaticClass@UPackage@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10104156 UObject::GetObjLoaded

/* public: static class TArray<class UObject *> & __cdecl UObject::GetObjLoaded(void) */

TArray<UObject*> * __cdecl UObject::GetObjLoaded(void)

{
                    /* 0x4156  1369  ?GetObjLoaded@UObject@@SAAAV?$TArray@PAVUObject@@@@XZ */
  return &GObjLoaded;
}


// ==== 1010415b thunk_FUN_101658f0 thunk -> 101658f0

// ==== 10104160 thunk_FUN_10119e70 thunk -> 10119e70

// ==== 10104165 FRainbowPtr::FRainbowPtr

/* public: __thiscall FRainbowPtr::FRainbowPtr(void *) */

void __thiscall FRainbowPtr::FRainbowPtr(FRainbowPtr *this,void *param_1)

{
                    /* 0x4165  117  ??0FRainbowPtr@@QAE@PAX@Z */
  *(void **)this = param_1;
  return;
}


// ==== 1010416a thunk_FUN_10134530 thunk -> 10134530

// ==== 1010416f thunk_FUN_10121600 thunk -> 10121600

// ==== 10104174 FRange::operator*

/* public: class FRange __thiscall FRange::operator*(float)const  */

float __thiscall FRange::operator*(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x4174  610  ??DFRange@@QBE?AV0@M@Z */
  FRange((FRange *)param_1,in_stack_00000008 * *(float *)this,
         in_stack_00000008 * *(float *)(this + 4));
  return param_1;
}


// ==== 10104179 FFeedbackContext::FFeedbackContext

/* public: __thiscall FFeedbackContext::FFeedbackContext(void) */

void __thiscall FFeedbackContext::FFeedbackContext(FFeedbackContext *this)

{
                    /* 0x4179  50  ??0FFeedbackContext@@QAE@XZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 1010417e UArrayProperty::ExportTextItem

/* public: virtual void __thiscall UArrayProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UArrayProperty::ExportTextItem
          (UArrayProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x417e  977  ?ExportTextItem@UArrayProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101bdf20;
  pvStack_10 = ExceptionList;
  iVar4 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *param_1 = 0x28;
  puVar3 = param_1 + 1;
  iVar1 = *(int *)(*(int *)(this + 0x78) + 0x44);
  while( true ) {
    if (*(int *)(param_2 + 4) <= iVar4) break;
    if (0 < iVar4) {
      *puVar3 = 0x2c;
      puVar3 = puVar3 + 1;
    }
    if ((param_3 == (uchar *)0x0) || (*(int *)(param_3 + 4) < iVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar4 * iVar1 + *(int *)param_3;
    }
    (**(code **)(**(int **)(this + 0x78) + 0x98))
              (puVar3,iVar4 * iVar1 + *(int *)param_2,iVar2,param_4 | 2);
    iVar2 = appStrlen(puVar3);
    puVar3 = puVar3 + iVar2;
    iVar4 = iVar4 + 1;
  }
  *puVar3 = 0x29;
  puVar3[1] = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104188 thunk_FUN_10129b20 thunk -> 10129b20

// ==== 1010418d FRotator::Vector

/* public: class FVector __thiscall FRotator::Vector(void) */

void __thiscall FRotator::Vector(FRotator *this)

{
  FCoords *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_stack_00000004;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FCoords aFStack_30 [48];
  
  puVar3 = &DAT_1023ff60;
  pFVar1 = aFStack_30;
                    /* 0x418d  1992  ?Vector@FRotator@@QAE?AVFVector@@XZ */
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator/=(aFStack_30,this);
  puVar3 = auStack_60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    puVar3 = puVar3 + 1;
  }
  *in_stack_00000004 = auStack_60[3];
  in_stack_00000004[1] = uStack_50;
  in_stack_00000004[2] = uStack_4c;
  return;
}


// ==== 10104192 ULinkerLoad::Create

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class UObject * __thiscall ULinkerLoad::Create(class UClass *,class FName,unsigned
   long,int) */

UObject * __thiscall
ULinkerLoad::Create(ULinkerLoad *this,int param_1,int param_3,uint param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  ushort *puVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4192  895  ?Create@ULinkerLoad@@QAEPAVUObject@@PAVUClass@@VFName@@KH@Z */
  puStack_c = &LAB_101bbba0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FindExportIndex(this,*(undefined4 *)(param_1 + 0x20),
                          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20),param_3,0xffffffff);
  if (iVar1 == -1) {
    if (param_5 != 0) {
      iVar1 = *(int *)(_Names + param_3 * 4) + 0xc;
      iVar4 = *(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc;
      puVar3 = LocalizeError((ushort *)L"FailedCreate",(ushort *)L"Core",(ushort *)0x0);
      appThrowf(puVar3,iVar4,iVar1);
    }
    ExceptionList = pvStack_10;
    return (UObject *)0x0;
  }
  if ((param_4 & 0x10) != 0) {
    ExceptionList = pvStack_10;
    return (UObject *)0xffffffff;
  }
  pUVar2 = CreateExport(this,iVar1,param_4);
  ExceptionList = pvStack_10;
  return pUVar2;
}


// ==== 10104197 UObject::execIntZero

/* public: void __thiscall UObject::execIntZero(struct FFrame &,void * const) */

void __thiscall UObject::execIntZero(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x4197  2272  ?execIntZero@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined4 *)param_2 = 0;
  return;
}


// ==== 1010419c thunk_FUN_1011c550 thunk -> 1011c550

// ==== 101041a1 UFloatProperty::SerializeItem

/* public: virtual void __thiscall UFloatProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UFloatProperty::SerializeItem(UFloatProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x41a1  1842  ?SerializeItem@UFloatProperty@@UBEXAAVFArchive@@PAXH@Z */
  (**(code **)(*(int *)param_1 + 4))(param_2,4);
  return;
}


// ==== 101041a6 FSuperPointInfoHit::operator!=

/* public: int __thiscall FSuperPointInfoHit::operator!=(class FSuperPointInfoHit const &)const  */

int __thiscall FSuperPointInfoHit::operator!=(FSuperPointInfoHit *this,FSuperPointInfoHit *param_1)

{
                    /* 0x41a6  589  ??9FSuperPointInfoHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}


// ==== 101041ab FOutputDevice::Logf

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl FOutputDevice::Logf(enum EName,unsigned short const *,...) */

void __thiscall FOutputDevice::Logf(FOutputDevice *this,EName param_1,ushort *param_2,...)

{
  ushort auStack_2000 [4094];
  undefined4 uStack_4;
  
                    /* 0x41ab  1599  ?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
  uStack_4 = 0x10151d7a;
  if ((FName::Initialized == 0) ||
     ((*(uint *)(*(int *)(_Names + (int)param_2 * 4) + 4) & 0x1000) == 0)) {
    appGetVarArgs(auStack_2000,0x1000,(ushort **)&stack0x0000000c);
    (*(code *)**(undefined4 **)param_1)(auStack_2000,param_2);
  }
  return;
}


// ==== 101041b0 thunk_FUN_1015cca0 thunk -> 1015cca0

// ==== 101041b5 thunk_FUN_10148810 thunk -> 10148810

// ==== 101041ba UTextBufferFactory::~UTextBufferFactory

/* public: virtual __thiscall UTextBufferFactory::~UTextBufferFactory(void) */

void __thiscall UTextBufferFactory::~UTextBufferFactory(UTextBufferFactory *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x41ba  352  ??1UTextBufferFactory@@UAE@XZ */
  puStack_8 = &LAB_101b9268;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UFactory::~UFactory((UFactory *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101041bf FBox::GetCenter

/* public: class FVector __thiscall FBox::GetCenter(void)const  */

void __thiscall FBox::GetCenter(FBox *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000004;
  
                    /* 0x41bf  1286  ?GetCenter@FBox@@QBE?AVFVector@@XZ */
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 8);
  *in_stack_00000004 = (*(float *)(this + 0xc) + *(float *)this) * 0.5;
  in_stack_00000004[1] = (fVar1 + fVar2) * 0.5;
  in_stack_00000004[2] = (fVar3 + fVar4) * 0.5;
  return;
}


// ==== 101041c4 FMemStack::operator=

/* public: class FMemStack & __thiscall FMemStack::operator=(class FMemStack const &) */

FMemStack * __thiscall FMemStack::operator=(FMemStack *this,FMemStack *param_1)

{
  int iVar1;
  FMemStack *pFVar2;
  
                    /* 0x41c4  463  ??4FMemStack@@QAEAAV0@ABV0@@Z */
  pFVar2 = this;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 101041c9 FArchive::Ver

/* public: int __thiscall FArchive::Ver(void) */

int __thiscall FArchive::Ver(FArchive *this)

{
                    /* 0x41c9  1993  ?Ver@FArchive@@QAEHXZ */
  return *(int *)(this + 4);
}


// ==== 101041ce thunk_FUN_1015bc70 thunk -> 1015bc70

// ==== 101041d3 thunk_FUN_101297f0 thunk -> 101297f0

// ==== 101041d8 UArrayProperty::CopyCompleteValue

/* public: virtual void __thiscall UArrayProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UArrayProperty::CopyCompleteValue(UArrayProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x41d8  865  ?CopyCompleteValue@UArrayProperty@@UBEXPAX0PAVUObject@@@Z */
  iVar1 = *(int *)(*(int *)(this + 0x78) + 0x44);
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = uVar2;
  FArray::Realloc(param_1,iVar1);
  if ((*(uint *)(*(int *)(this + 0x78) + 0x48) & 0x400000) == 0) {
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + *(int *)((int)param_2 + 4);
    iVar5 = *(int *)((int)param_1 + 4);
    if (*(int *)((int)param_1 + 8) < iVar5) {
      *(int *)((int)param_1 + 8) = ((int)(iVar5 * 3 + (iVar5 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar5
      ;
      FArray::Realloc(param_1,iVar1);
    }
    _memcpy(*(void **)param_1,*(void **)param_2,*(int *)((int)param_2 + 4) * iVar1);
  }
  else {
    FArray::AddZeroed(param_1,iVar1,*(int *)((int)param_2 + 4));
    iVar5 = *(int *)param_1;
    iVar4 = 0;
    if (0 < *(int *)((int)param_1 + 4)) {
      iVar3 = *(int *)param_2 - iVar5;
      do {
        (**(code **)(**(int **)(this + 0x78) + 0xa8))(iVar5,iVar3 + iVar5,param_3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + iVar1;
      } while (iVar4 < *(int *)((int)param_1 + 4));
      return;
    }
  }
  return;
}


// ==== 101041dd FVector::operator-

/* public: class FVector __thiscall FVector::operator-(void)const  */

void __thiscall FVector::operator-(FVector *this)

{
  float *in_stack_00000004;
  
                    /* 0x41dd  630  ??GFVector@@QBE?AV0@XZ */
  *in_stack_00000004 = -*(float *)this;
  in_stack_00000004[1] = -*(float *)(this + 4);
  in_stack_00000004[2] = -*(float *)(this + 8);
  return;
}


// ==== 101041e7 UObject::StaticExit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::StaticExit(void) */

void __cdecl UObject::StaticExit(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  int iStack_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x41e7  1934  ?StaticExit@UObject@@SAXXZ */
  puStack_c = &LAB_101bda10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (DAT_10330880 != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("GObjLoaded.Num()==0",".\\UnObj.cpp",0x69f);
  }
  if (DAT_103308bc != 0) {
    appFailAssert("GObjRegistrants.Num()==0",".\\UnObj.cpp",0x6a0);
  }
  if (GAutoRegister != (UObject *)0x0) {
    appFailAssert("!GAutoRegister",".\\UnObj.cpp",0x6a1);
  }
  RemoveFromRoot((UObject *)GObjTransientPkg);
  thunk_FUN_1012b3e0(&PrivateStaticClass);
  while (iStack_24 < DAT_1033088c) {
    puVar1 = (uint *)(*(int *)(_GObjObjects + iStack_24 * 4) + 0x1c);
    *puVar1 = *puVar1 | 0x42;
    thunk_FUN_1012ae60();
  }
  for (iVar3 = 0; iVar3 < DAT_10327ae4; iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(_Names + iVar3 * 4);
    if (iVar2 != 0) {
      puVar1 = (uint *)(iVar2 + 4);
      *puVar1 = *puVar1 | 2;
    }
  }
  GExitPurge = 1;
  PurgeGarbage();
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10113560(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10128110(0);
  thunk_FUN_10164fc0(0);
  thunk_FUN_10165190(0);
  this = (FOutputDevice *)0x0;
  if (GObjPackageRemap != (TMultiMap<FName,FName> *)0x0) {
    thunk_FUN_101673f0(1);
    this = extraout_ECX;
  }
  GObjInitialized = 0;
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2fb);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101041ec UArrayProperty::ImportText

/* public: virtual unsigned short const * __thiscall UArrayProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UArrayProperty::ImportText(UArrayProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x41ec  1442  ?ImportText@UArrayProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101bdf30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*param_1 == 0x28) {
    iVar1 = *(int *)(*(int *)(this + 0x78) + 0x44);
    ExceptionList = &pvStack_10;
    FArray::Empty((FArray *)param_2,iVar1,0);
    do {
      param_1 = param_1 + 1;
      if (*param_1 == 0x29) break;
      iVar2 = FArray::Add((FArray *)param_2,1,iVar1);
      thunk_FUN_10108420(iVar2 * iVar1 + *(int *)param_2,iVar1);
      param_1 = (ushort *)
                (**(code **)(**(int **)(this + 0x78) + 0x9c))
                          (param_1,iVar2 * iVar1 + *(int *)param_2,param_3 | 2);
      if (param_1 == (ushort *)0x0) {
        ExceptionList = pvStack_10;
        return (ushort *)0x0;
      }
    } while (*param_1 == 0x2c);
    if (*param_1 == 0x29) {
      ExceptionList = pvStack_10;
      return param_1 + 1;
    }
  }
  ExceptionList = pvStack_10;
  return (ushort *)0x0;
}


// ==== 101041f1 UFixedArrayProperty::CopySingleValue

/* public: virtual void __thiscall UFixedArrayProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UFixedArrayProperty::CopySingleValue
          (UFixedArrayProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  void *pvVar1;
  int iVar2;
  
                    /* 0x41f1  877  ?CopySingleValue@UFixedArrayProperty@@UBEXPAX0PAVUObject@@@Z */
  iVar2 = 0;
  if (0 < *(int *)(this + 0x7c)) {
    do {
      if (param_2 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = (void *)(*(int *)(*(int *)(this + 0x78) + 0x44) * iVar2 + (int)param_2);
      }
      (**(code **)(**(int **)(this + 0x78) + 0xa8))
                ((void *)((*(int **)(this + 0x78))[0x11] * iVar2 + (int)param_1),pvVar1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x7c));
  }
  return;
}


// ==== 101041f6 FArchiveCountMem::GetNum

/* public: unsigned long __thiscall FArchiveCountMem::GetNum(void) */

ulong __thiscall FArchiveCountMem::GetNum(FArchiveCountMem *this)

{
                    /* 0x41f6  1363  ?GetNum@FArchiveCountMem@@QAEKXZ */
  return *(ulong *)(this + 0x38);
}


// ==== 101041fb UClass::Bind

/* public: virtual void __thiscall UClass::Bind(void) */

void __thiscall UClass::Bind(UClass *this)

{
  undefined4 uVar1;
  int *piVar2;
  FOutputDevice *this_00;
  ushort auStack_224 [262];
  UClass *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x41fb  815  ?Bind@UClass@@UAEXXZ */
  puStack_c = &LAB_101b9f30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  UField::Bind((UField *)this);
  if ((((GIsDynamicRecompile == 0) && (GIsEditor == 0)) && (*(int *)(this + 0x34) == 0)) &&
     (this != &UObject::PrivateStaticClass)) {
    appFailAssert("GIsDynamicRecompile || GIsEditor || GetSuperClass() || this==UObject::StaticClass()"
                  ,".\\UnClass.cpp",0x359);
  }
  if (*(int *)(this + 0x518) == 0) {
    if ((*(uint *)(this + 0x1c) & 0x4000000) != 0) {
      uVar1 = (**(code **)(*(int *)this + 0x94))();
      appSprintf(auStack_224,(ushort *)L"autoclass%s",uVar1);
      piVar2 = UPackage::GetDllExport(*(UPackage **)(this + 0x18),auStack_224,0);
      if (piVar2 == (int *)0x0) {
        if (GIsEditor == 0) {
          UObject::GetPathName((UObject *)this,(UObject *)0x0,(ushort *)0x0);
          FOutputDevice::Logf(this_00,(ushort *)GError);
        }
      }
      else {
        if (*piVar2 == 0) {
          appFailAssert("*ClassPtr",".\\UnClass.cpp",0x368);
        }
        if ((UClass *)*piVar2 != this) {
          appFailAssert("*ClassPtr==this",".\\UnClass.cpp",0x369);
        }
        *(undefined4 *)(this + 0x518) = *(undefined4 *)(*piVar2 + 0x518);
      }
    }
    if ((*(int *)(this + 0x518) == 0) && (*(int **)(this + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 0x34) + 0x70))();
      *(undefined4 *)(this + 0x518) = *(undefined4 *)(*(int *)(this + 0x34) + 0x518);
    }
  }
  if (((GIsDynamicRecompile == 0) && (GIsEditor == 0)) && (*(int *)(this + 0x518) == 0)) {
    appFailAssert("GIsDynamicRecompile || GIsEditor || ClassConstructor",".\\UnClass.cpp",0x378);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104200 appLaunchURL

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* void __cdecl appLaunchURL(unsigned short const *,unsigned short const *,class FString *) */

void __cdecl appLaunchURL(ushort *param_1,ushort *param_2,FString *param_3)

{
  HINSTANCE pHVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  char *pcVar5;
  LPCSTR lpDirectory;
  INT nShowCmd;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4200  2065  ?appLaunchURL@@YAXPBG0PAVFString@@@Z */
  puStack_c = &LAB_101be4b0;
  pvStack_10 = ExceptionList;
  pcVar5 = (char *)0x0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2f8);
  }
  if (GUnicodeOS == 0) {
    if (param_2 == (ushort *)0x0) {
      pcVar5 = "";
    }
    else {
      iVar2 = winGetSizeANSI(param_2);
      if (iVar2 != 0) {
        winGetSizeANSI(param_2);
        pcVar5 = &stack0xffffffe0;
      }
      iVar2 = winGetSizeANSI(param_2);
      pcVar5 = winToANSI(pcVar5,param_2,iVar2);
    }
    iVar2 = winGetSizeANSI(param_1);
    if (iVar2 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar4 = &stack0xffffffe0;
    }
    nShowCmd = 1;
    lpDirectory = "";
    iVar2 = winGetSizeANSI(param_1);
    pcVar4 = winToANSI(pcVar4,param_1,iVar2);
    pHVar1 = ShellExecuteA((HWND)0x0,"open",pcVar4,pcVar5,lpDirectory,nShowCmd);
  }
  else {
    if (param_2 == (ushort *)0x0) {
      param_2 = (ushort *)0x101e18b0;
    }
    pHVar1 = ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)param_1,(LPCWSTR)param_2,L"",1);
  }
  if (param_3 != (FString *)0x0) {
    if ((int)pHVar1 < 0x21) {
      puVar3 = LocalizeError((ushort *)L"UrlFailed",(ushort *)L"Core",(ushort *)0x0);
    }
    else {
      puVar3 = (ushort *)&DAT_101e18e8;
    }
    FString::operator=(param_3,puVar3);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104205 L2ThreadUtil::GetCurrentThreadIndex

/* public: int __thiscall L2ThreadUtil::GetCurrentThreadIndex(void) */

int __thiscall L2ThreadUtil::GetCurrentThreadIndex(L2ThreadUtil *this)

{
  int *piVar1;
  L2ThreadUtil *pLStack_4;
  
  pLStack_4 = this;
                    /* 0x4205  1297  ?GetCurrentThreadIndex@L2ThreadUtil@@QAEHXZ */
  pLStack_4 = (L2ThreadUtil *)GetCurrentThreadId();
  if (*(int *)(this + 0x2c8) != 0) {
    piVar1 = (int *)thunk_FUN_101297f0(&pLStack_4);
    if (piVar1 != (int *)0x0) {
      return *piVar1;
    }
  }
  return 7;
}


// ==== 1010420a thunk_FUN_10126710 thunk -> 10126710

// ==== 1010420f FMatrix::Transpose

/* public: class FMatrix __thiscall FMatrix::Transpose(void) */

void __thiscall FMatrix::Transpose(FMatrix *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x420f  1983  ?Transpose@FMatrix@@QAE?AV1@XZ */
  *in_stack_00000004 = *(undefined4 *)this;
  in_stack_00000004[1] = *(undefined4 *)(this + 0x10);
  in_stack_00000004[2] = *(undefined4 *)(this + 0x20);
  in_stack_00000004[3] = *(undefined4 *)(this + 0x30);
  in_stack_00000004[4] = *(undefined4 *)(this + 4);
  in_stack_00000004[5] = *(undefined4 *)(this + 0x14);
  in_stack_00000004[6] = *(undefined4 *)(this + 0x24);
  in_stack_00000004[7] = *(undefined4 *)(this + 0x34);
  in_stack_00000004[8] = *(undefined4 *)(this + 8);
  in_stack_00000004[9] = *(undefined4 *)(this + 0x18);
  in_stack_00000004[10] = *(undefined4 *)(this + 0x28);
  in_stack_00000004[0xb] = *(undefined4 *)(this + 0x38);
  in_stack_00000004[0xc] = *(undefined4 *)(this + 0xc);
  in_stack_00000004[0xd] = *(undefined4 *)(this + 0x1c);
  in_stack_00000004[0xe] = *(undefined4 *)(this + 0x2c);
  in_stack_00000004[0xf] = *(undefined4 *)(this + 0x3c);
  return;
}


// ==== 10104214 FVector::MirrorByVector

/* public: class FVector __thiscall FVector::MirrorByVector(class FVector const &)const  */

void __thiscall FVector::MirrorByVector(FVector *this,FVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_stack_00000008;
  
                    /* 0x4214  1622  ?MirrorByVector@FVector@@QBE?AV1@ABV1@@Z */
  fVar3 = in_stack_00000008[2] * *(float *)(this + 8) +
          in_stack_00000008[1] * *(float *)(this + 4) + *in_stack_00000008 * *(float *)this;
  fVar3 = fVar3 + fVar3;
  fVar1 = in_stack_00000008[1];
  fVar2 = in_stack_00000008[2];
  *(float *)param_1 = *(float *)this - fVar3 * *in_stack_00000008;
  *(float *)(param_1 + 4) = *(float *)(this + 4) - fVar3 * fVar1;
  *(float *)(param_1 + 8) = *(float *)(this + 8) - fVar3 * fVar2;
  return;
}


// ==== 10104219 FBox::operator+

/* public: class FBox __thiscall FBox::operator+(class FBox const &)const  */

void __thiscall FBox::operator+(FBox *this,FBox *param_1)

{
  FBox *pFVar1;
  int iVar2;
  FBox *in_stack_00000008;
  FBox aFStack_1c [28];
  
  pFVar1 = aFStack_1c;
                    /* 0x4219  632  ??HFBox@@QBE?AV0@ABV0@@Z */
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *(undefined4 *)this;
    this = this + 4;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = operator+=(aFStack_1c,in_stack_00000008);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 1010421e UClass::GetDefaultObject

/* public: class UObject * __thiscall UClass::GetDefaultObject(void) */

UObject * __thiscall UClass::GetDefaultObject(UClass *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x421e  1307  ?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */
  iVar1 = *(int *)(this + 0x4f8);
  iVar2 = (**(code **)(*(int *)this + 0x78))();
  if (iVar1 != iVar2) {
    appFailAssert("Defaults.Num()==GetPropertiesSize()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnClass.h",0x211);
  }
  return *(UObject **)(this + 0x4f4);
}


// ==== 10104223 UPackage::operator_new

/* public: static void * __cdecl UPackage::operator new(unsigned int,enum EInternal *) */

void * __cdecl UPackage::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x4223  402  ??2UPackage@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10104228 L2ThreadStats::SleepStart

/* public: void __thiscall L2ThreadStats::SleepStart(void) */

void __thiscall L2ThreadStats::SleepStart(L2ThreadStats *this)

{
  __uint64 _Var1;
  
                    /* 0x4228  1883  ?SleepStart@L2ThreadStats@@QAEXXZ */
  _Var1 = appCyclesQPC();
  *(__uint64 *)(this + 0x20) = _Var1;
  return;
}


// ==== 10104232 UObject::SetLanguage

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::SetLanguage(unsigned short const *) */

void __cdecl UObject::SetLanguage(ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  int iStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4232  1861  ?SetLanguage@UObject@@SAXPBG@Z */
  puStack_c = &LAB_101bd100;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = appStricmp(param_1,(ushort *)&GLanguage);
  if (iVar1 != 0) {
    appStrcpy((ushort *)&GLanguage,param_1);
    puVar2 = LocalizeGeneral((ushort *)L"None",(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)GNone,puVar2);
    puVar2 = LocalizeGeneral((ushort *)L"True",(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)GTrue,puVar2);
    puVar2 = LocalizeGeneral((ushort *)L"False",(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)GFalse,puVar2);
    puVar2 = LocalizeGeneral((ushort *)&DAT_101dbe14,(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)&GYes,puVar2);
    puVar2 = LocalizeGeneral((ushort *)&DAT_101dbe28,(ushort *)L"Core",(ushort *)0x0);
    appStrcpy((ushort *)&GNo,puVar2);
    thunk_FUN_1012b3e0(&PrivateStaticClass);
    while (iStack_20 < DAT_1033088c) {
      (**(code **)(**(int **)(_GObjObjects + iStack_20 * 4) + 0x54))();
      thunk_FUN_1012ae60();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104237 thunk_FUN_10128710 thunk -> 10128710

// ==== 1010423c FMemCache::FCacheItem::GetExtra

/* public: unsigned char __thiscall FMemCache::FCacheItem::GetExtra(void) */

uchar __thiscall FMemCache::FCacheItem::GetExtra(FCacheItem *this)

{
                    /* 0x423c  1316  ?GetExtra@FCacheItem@FMemCache@@QAEEXZ */
  return (uchar)this[0xf];
}


// ==== 10104241 L2ThreadUtil::GetThreadCounter

/* public: int __thiscall L2ThreadUtil::GetThreadCounter(void) */

int __thiscall L2ThreadUtil::GetThreadCounter(L2ThreadUtil *this)

{
                    /* 0x4241  1404  ?GetThreadCounter@L2ThreadUtil@@QAEHXZ */
  return *(int *)(this + 0x2c4);
}


// ==== 10104250 appLoge

/* double __cdecl appLoge(double) */

double __cdecl appLoge(double param_1)

{
  float10 fVar1;
  
                    /* 0x4250  2069  ?appLoge@@YANN@Z */
  fVar1 = (float10)FUN_1017c2a0();
  return (double)fVar1;
}


// ==== 10104255 UStruct::Serialize

/* public: virtual void __thiscall UStruct::Serialize(class FArchive &) */

void __thiscall UStruct::Serialize(UStruct *this,FArchive *param_1)

{
  FArchive *pFVar1;
  undefined4 uVar2;
  FArchive *pFStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4255  1825  ?Serialize@UStruct@@UAEXAAVFArchive@@@Z */
  pFVar1 = param_1;
  puStack_c = &LAB_101b9f00;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UField::Serialize((UField *)this,param_1);
  uVar2 = thunk_FUN_10130e90(pFVar1,this + 0x40,this + 0x48);
  thunk_FUN_10130ed0(uVar2);
  (**(code **)(*(int *)pFVar1 + 0x1c))(this + 0x50);
  if (*(int *)(this + 0x50) == 0) {
    appFailAssert("FriendlyName!=NAME_None",".\\UnClass.cpp",0x2aa);
  }
  if (0x77 < *(int *)(pFVar1 + 4)) {
    thunk_FUN_10130e90(pFVar1,this + 0x44);
  }
  uVar2 = thunk_FUN_10130820(pFVar1,this + 100,this + 0x60);
  thunk_FUN_10130820(uVar2);
  param_1 = *(FArchive **)(this + 0x58);
  thunk_FUN_10130820(pFVar1,&param_1);
  if (*(int *)(pFVar1 + 0x10) != 0) {
    thunk_FUN_10113f60(0);
    thunk_FUN_1012aa10(param_1);
  }
  pFStack_18 = (FArchive *)0x0;
  while( true ) {
    if ((int)param_1 <= (int)pFStack_18) break;
    (**(code **)(*(int *)this + 0x90))(&pFStack_18,pFVar1);
  }
  if (pFStack_18 != param_1) {
    FOutputDevice::Logf((FOutputDevice *)param_1,(ushort *)GError);
  }
  if (*(int *)(pFVar1 + 0x10) != 0) {
    (**(code **)(*(int *)this + 0x80))(pFVar1,1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010425a UClass::Destroy

/* public: virtual void __thiscall UClass::Destroy(void) */

void __thiscall UClass::Destroy(UClass *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x425a  916  ?Destroy@UClass@@UAEXXZ */
  puStack_c = &LAB_101ba0b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_1011a1c0(0);
  thunk_FUN_1011a290(0);
  thunk_FUN_10114240(0);
  UObject::ExitProperties(*(uchar **)(this + 0x4f4),this);
  thunk_FUN_10113f60(0);
  FString::operator=((FString *)(this + 0x520),(ushort *)&DAT_101d2418);
  thunk_FUN_1011a0f0(0);
  thunk_FUN_10114240(0);
  UState::Destroy((UState *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010425f FRange::IsZero

/* public: int __thiscall FRange::IsZero(void)const  */

int __thiscall FRange::IsZero(FRange *this)

{
                    /* 0x425f  1536  ?IsZero@FRange@@QBEHXZ */
  if ((*(float *)this == 0.0) && (*(float *)(this + 4) == 0.0)) {
    return 1;
  }
  return 0;
}


// ==== 10104264 LocalizeGeneral

/* unsigned short const * __cdecl LocalizeGeneral(char const *,unsigned short const *,unsigned short
   const *) */

ushort * __cdecl LocalizeGeneral(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x4264  1582  ?LocalizeGeneral@@YAPBGPBDPBG1@Z */
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  puVar1 = Localize((ushort *)L"General",puVar1,param_2,param_3,0);
  return puVar1;
}


// ==== 10104269 UField::UField

/* public: __thiscall UField::UField(class UField *) */

UField * __thiscall UField::UField(UField *this,UField *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4269  216  ??0UField@@QAE@PAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9d68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  *(UField **)(this + 0x34) = param_1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010426e ParseToken

/* int __cdecl ParseToken(unsigned short const * &,unsigned short *,int,int) */

int __cdecl ParseToken(ushort **param_1,ushort *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  
                    /* 0x426e  1676  ?ParseToken@@YAHAAPBGPAGHH@Z */
  iVar3 = 0;
  while( true ) {
    puVar1 = *param_1;
    uVar2 = *puVar1;
    if ((uVar2 != 0x20) && (uVar2 != 9)) break;
    *param_1 = puVar1 + 1;
  }
  if (uVar2 == 0x22) {
    *param_1 = puVar1 + 1;
    while( true ) {
      puVar1 = *param_1;
      uVar2 = *puVar1;
      if (((uVar2 == 0) || (uVar2 == 0x22)) || (param_3 <= iVar3 + 1)) break;
      *param_1 = puVar1 + 1;
      if ((uVar2 == 0x5c) && (param_4 != 0)) {
        uVar2 = puVar1[1];
        *param_1 = puVar1 + 2;
        if (uVar2 == 0) break;
      }
      param_2[iVar3] = uVar2;
      iVar3 = iVar3 + 1;
    }
    if (**param_1 == 0x22) {
      *param_1 = *param_1 + 1;
    }
  }
  else {
    while (((uVar2 = **param_1, uVar2 != 0 && (uVar2 != 0x20)) && (uVar2 != 9))) {
      if (iVar3 + 1 < param_3) {
        param_2[iVar3] = uVar2;
        iVar3 = iVar3 + 1;
      }
      *param_1 = *param_1 + 1;
    }
  }
  param_2[iVar3] = 0;
  return (uint)(iVar3 != 0);
}


// ==== 10104273 UObject::execAdd_RotatorRotator

/* public: void __thiscall UObject::execAdd_RotatorRotator(struct FFrame &,void * const) */

void __thiscall UObject::execAdd_RotatorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int unaff_ESI;
  undefined1 *puStack_20;
  int iStack_18;
  int iStack_14;
  undefined1 auStack_c [4];
  int *piStack_8;
  
                    /* 0x4273  2148  ?execAdd_RotatorRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_20 = auStack_c;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piStack_8 = (int)&puStack_20 + unaff_ESI;
  piStack_8[1] = (int)(param_1 + iStack_18);
  piStack_8[2] = (int)(puStack_20 + iStack_14);
  return;
}


// ==== 10104278 thunk_FUN_10118970 thunk -> 10118970

// ==== 1010427d FBox::GetCenterAndExtents

/* public: void __thiscall FBox::GetCenterAndExtents(class FVector &,class FVector &)const  */

void __thiscall FBox::GetCenterAndExtents(FBox *this,FVector *param_1,FVector *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* 0x427d  1289  ?GetCenterAndExtents@FBox@@QBEXAAVFVector@@0@Z */
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 8);
  *(float *)param_2 = *(float *)(this + 0xc) - *(float *)this;
  *(float *)(param_2 + 4) = fVar1 - fVar2;
  *(float *)(param_2 + 8) = fVar3 - fVar4;
  fVar1 = *(float *)param_2;
  *(float *)param_2 = fVar1 * 0.5;
  fVar2 = *(float *)(param_2 + 4);
  *(float *)(param_2 + 4) = fVar2 * 0.5;
  fVar3 = *(float *)(param_2 + 8);
  *(float *)(param_2 + 8) = fVar3 * 0.5;
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 8);
  *(float *)param_1 = *(float *)this + fVar1 * 0.5;
  *(float *)(param_1 + 4) = fVar4 + fVar2 * 0.5;
  *(float *)(param_1 + 8) = fVar3 * 0.5 + fVar5;
  return;
}


// ==== 10104282 UObject::execHighNative4

/* public: void __thiscall UObject::execHighNative4(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative4(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x4282  2257  ?execHighNative4@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280770 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10104287 UObject::execLessEqual_StringString

/* public: void __thiscall UObject::execLessEqual_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execLessEqual_StringString(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x4287  2287  ?execLessEqual_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (uint *)&LAB_101bade0;
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
  *puStack_8 = (uint)(iVar2 < 1);
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


// ==== 1010428c UNameProperty::Link

/* public: virtual void __thiscall UNameProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UNameProperty::Link(UNameProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x428c  1561  ?Link@UNameProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be090;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 4;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104291 FCoords::operator/=

/* public: class FCoords & __thiscall FCoords::operator/=(class FScale const &) */

FCoords * __thiscall FCoords::operator/=(FCoords *this,FScale *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  FCoords *pFVar4;
  float10 fVar5;
  FCoords aFStack_30 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0x4291  696  ??_0FCoords@@QAEAAV0@ABVFScale@@@Z */
  *(float *)(this + 0xc) = *(float *)(this + 0xc) / *(float *)param_1;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) / *(float *)(param_1 + 4);
  *(float *)(this + 0x14) = *(float *)(this + 0x14) / *(float *)(param_1 + 8);
  *(float *)(this + 0x18) = *(float *)(this + 0x18) / *(float *)param_1;
  *(float *)(this + 0x1c) = *(float *)(this + 0x1c) / *(float *)(param_1 + 4);
  *(float *)(this + 0x20) = *(float *)(this + 0x20) / *(float *)(param_1 + 8);
  *(float *)(this + 0x24) = *(float *)(this + 0x24) / *(float *)param_1;
  *(float *)(this + 0x28) = *(float *)(this + 0x28) / *(float *)(param_1 + 4);
  *(float *)(this + 0x2c) = *(float *)(this + 0x2c) / *(float *)(param_1 + 8);
  *(float *)this = *(float *)param_1 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * *(float *)(param_1 + 4);
  *(float *)(this + 8) = *(float *)(param_1 + 8) * *(float *)(this + 8);
  puVar3 = &DAT_1023ff60;
  pFVar4 = aFStack_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pFVar4 = pFVar4 + 4;
  }
  fVar5 = (float10)thunk_FUN_1010c400(*(undefined4 *)(param_1 + 0xc));
  fVar1 = (float)fVar5;
  switch(param_1[0x10]) {
  case (FScale)0x1:
    fStack_20 = -fVar1;
    break;
  case (FScale)0x2:
    fStack_1c = -fVar1;
    break;
  case (FScale)0x3:
    fStack_18 = -fVar1;
    break;
  case (FScale)0x4:
    fStack_10 = -fVar1;
    break;
  case (FScale)0x5:
    fStack_c = -fVar1;
    break;
  case (FScale)0x6:
    fStack_8 = -fVar1;
  }
  operator*=(this,aFStack_30);
  return this;
}


// ==== 10104296 FScriptDelegate::operator=

/* public: struct FScriptDelegate & __thiscall FScriptDelegate::operator=(struct FScriptDelegate
   const &) */

FScriptDelegate * __thiscall
FScriptDelegate::operator=(FScriptDelegate *this,FScriptDelegate *param_1)

{
                    /* 0x4296  489  ??4FScriptDelegate@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 1010429b FThrowOut::operator=

/* public: class FThrowOut & __thiscall FThrowOut::operator=(class FThrowOut const &) */

FThrowOut * __thiscall FThrowOut::operator=(FThrowOut *this,FThrowOut *param_1)

{
                    /* 0x429b  500  ??4FThrowOut@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 101042a0 UProperty::operator_new

/* public: static void * __cdecl UProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x42a0  408  ??2UProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 101042a5 FScriptDelegate::FScriptDelegate

/* public: __thiscall FScriptDelegate::FScriptDelegate(void) */

FScriptDelegate * __thiscall FScriptDelegate::FScriptDelegate(FScriptDelegate *this)

{
                    /* 0x42a5  132  ??0FScriptDelegate@@QAE@XZ */
  return this;
}


// ==== 101042aa FDependency::IsUpToDate

/* public: int __thiscall FDependency::IsUpToDate(void) */

int __thiscall FDependency::IsUpToDate(FDependency *this)

{
  ulong uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x42aa  1531  ?IsUpToDate@FDependency@@QAEHXZ */
  puStack_c = &LAB_101ba0c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)this == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Class!=NULL",".\\UnClass.cpp",0x47c);
  }
  uVar1 = UStruct::GetScriptTextCRC(*(UStruct **)this);
  ExceptionList = pvStack_10;
  return (uint)(uVar1 == *(ulong *)(this + 8));
}


// ==== 101042af UMapProperty::~UMapProperty

/* public: virtual __thiscall UMapProperty::~UMapProperty(void) */

void __thiscall UMapProperty::~UMapProperty(UMapProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x42af  336  ??1UMapProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7e58;
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


// ==== 101042b4 UState::operator=

/* public: class UState & __thiscall UState::operator=(class UState const &) */

UState * __thiscall UState::operator=(UState *this,UState *param_1)

{
  UState *pUVar1;
  int iVar2;
  
                    /* 0x42b4  539  ??4UState@@QAEAAV0@ABV0@@Z */
  UStruct::operator=((UStruct *)this,(UStruct *)param_1);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined2 *)(this + 0xa0) = *(undefined2 *)(param_1 + 0xa0);
  pUVar1 = this + 0xa4;
  iVar2 = 0x100;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + ((int)param_1 - (int)this));
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}


// ==== 101042be ParseCommand

/* int __cdecl ParseCommand(unsigned short const * *,unsigned short const *) */

int __cdecl ParseCommand(ushort **param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x42be  1666  ?ParseCommand@@YAHPAPBGPBG@Z */
  puStack_c = &LAB_101bc0b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    uVar1 = **param_1;
    if ((uVar1 != 0x20) && (uVar1 != 9)) break;
    *param_1 = *param_1 + 1;
  }
  iVar2 = appStrlen(param_2);
  iVar2 = appStrnicmp(*param_1,param_2,iVar2);
  if (iVar2 == 0) {
    iVar2 = appStrlen(param_2);
    *param_1 = *param_1 + iVar2;
    iVar2 = thunk_FUN_1014fa20(**param_1);
    if (iVar2 == 0) {
      while( true ) {
        uVar1 = **param_1;
        if ((uVar1 != 0x20) && (uVar1 != 9)) break;
        *param_1 = *param_1 + 1;
      }
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar2 = appStrlen(param_2);
    *param_1 = *param_1 + -iVar2;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 101042c3 thunk_FUN_1012a980 thunk -> 1012a980

// ==== 101042c8 thunk_FUN_101181d0 thunk -> 101181d0

// ==== 101042d2 UByteProperty::SerializeItem

/* public: virtual void __thiscall UByteProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UByteProperty::SerializeItem(UByteProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x42d2  1839  ?SerializeItem@UByteProperty@@UBEXAAVFArchive@@PAXH@Z */
  (**(code **)(*(int *)param_1 + 4))(param_2,1);
  return;
}


// ==== 101042d7 thunk_FUN_1011c840 thunk -> 1011c840

// ==== 101042dc UObject::execDivide_FloatFloat

/* public: void __thiscall UObject::execDivide_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivide_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x42dc  2192  ?execDivide_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  if ((float)&uStack_4 == 0.0) {
    *unaff_ESI = (float)&uStack_4;
    return;
  }
  *unaff_ESI = (float)&uStack_4 / (float)&uStack_4;
  return;
}


// ==== 101042e1 thunk_FUN_10119270 thunk -> 10119270

// ==== 101042e6 UObject::GetFlags

/* public: unsigned long __thiscall UObject::GetFlags(void)const  */

ulong __thiscall UObject::GetFlags(UObject *this)

{
                    /* 0x42e6  1323  ?GetFlags@UObject@@QBEKXZ */
  return *(ulong *)(this + 0x1c);
}


// ==== 101042eb FBox::ExpandBy

/* public: class FBox __thiscall FBox::ExpandBy(float)const  */

void __thiscall FBox::ExpandBy(FBox *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_stack_00000008;
  
                    /* 0x42eb  958  ?ExpandBy@FBox@@QBE?AV1@M@Z */
  *(undefined1 *)((int)param_1 + 0x18) = 1;
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x10);
  fVar3 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 8);
  *(float *)param_1 = *(float *)this - in_stack_00000008;
  *(float *)((int)param_1 + 4) = fVar4 - in_stack_00000008;
  *(float *)((int)param_1 + 0xc) = in_stack_00000008 + fVar1;
  *(float *)((int)param_1 + 8) = fVar5 - in_stack_00000008;
  *(float *)((int)param_1 + 0x10) = fVar2 + in_stack_00000008;
  *(float *)((int)param_1 + 0x14) = fVar3 + in_stack_00000008;
  return;
}


// ==== 101042f0 UEnum::GetSuperEnum

/* public: class UEnum * __thiscall UEnum::GetSuperEnum(void)const  */

UEnum * __thiscall UEnum::GetSuperEnum(UEnum *this)

{
                    /* 0x42f0  1400  ?GetSuperEnum@UEnum@@QBEPAV1@XZ */
  return *(UEnum **)(this + 0x34);
}


// ==== 101042f5 ULanguage::operator_new

/* public: static void * __cdecl ULanguage::operator new(unsigned int,enum EInternal *) */

void * __cdecl ULanguage::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x42f5  386  ??2ULanguage@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 101042ff thunk_FUN_1015c1c0 thunk -> 1015c1c0

// ==== 10104309 appGetVarArgsAnsi

/* int __cdecl appGetVarArgsAnsi(char *,int,char const * &) */

int __cdecl appGetVarArgsAnsi(char *param_1,int param_2,char **param_3)

{
  int iVar1;
  
                    /* 0x4309  2058  ?appGetVarArgsAnsi@@YAHPADHAAPBD@Z */
  iVar1 = __vsnprintf(param_1,param_2,*param_3,(va_list)(param_3 + 1));
  return iVar1;
}


// ==== 1010430e UPackageMap::ObjectToIndex

/* public: virtual int __thiscall UPackageMap::ObjectToIndex(class UObject *) */

int __thiscall UPackageMap::ObjectToIndex(UPackageMap *this,UObject *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x430e  1650  ?ObjectToIndex@UPackageMap@@UAEHPAVUObject@@@Z */
  puStack_c = &LAB_101ba830;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (((param_1 != (UObject *)0x0) && (*(UObject **)(param_1 + 0x10) != (UObject *)0x0)) &&
     (iVar2 = *(int *)(param_1 + 0x14), iVar2 != -1)) {
    ExceptionList = &pvStack_10;
    param_1 = *(UObject **)(param_1 + 0x10);
    piVar3 = (int *)thunk_FUN_101370b0(&param_1);
    if ((piVar3 != (int *)0x0) &&
       (iVar1 = *(int *)(this + 0x34) + *piVar3 * 0x44, iVar2 < *(int *)(iVar1 + 0x2c))) {
      ExceptionList = pvStack_10;
      return *(int *)(iVar1 + 0x28) + iVar2;
    }
  }
  ExceptionList = pvStack_10;
  return -1;
}


// ==== 10104313 thunk_FUN_10124090 thunk -> 10124090

// ==== 10104318 UStruct::~UStruct

/* public: virtual __thiscall UStruct::~UStruct(void) */

void __thiscall UStruct::~UStruct(UStruct *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x4318  347  ??1UStruct@@UAE@XZ */
  puStack_8 = &LAB_101b7653;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10118750();
  uStack_4 = 0xffffffff;
  UField::~UField((UField *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010431d FClassNetCache::GetMaxIndex

/* public: int __thiscall FClassNetCache::GetMaxIndex(void) */

int __thiscall FClassNetCache::GetMaxIndex(FClassNetCache *this)

{
                    /* 0x431d  1352  ?GetMaxIndex@FClassNetCache@@QAEHXZ */
  return *(int *)(this + 0x20) + *(int *)(this + 0xc);
}


// ==== 10104322 ParseParam

/* int __cdecl ParseParam(unsigned short const *,unsigned short const *) */

int __cdecl ParseParam(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4322  1672  ?ParseParam@@YAHPBG0@Z */
  puStack_c = &LAB_101bbfe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  puVar1 = param_1;
  ExceptionList = &pvStack_10;
  if (*param_1 != 0) {
    while( true ) {
      puVar1 = appStrfind(puVar1 + 1,param_2);
      if (puVar1 == (ushort *)0x0) break;
      if ((param_1 < puVar1) && ((puVar1[-1] == 0x2d || (puVar1[-1] == 0x2f)))) {
        ExceptionList = pvStack_10;
        return 1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10104327 UByteProperty::UByteProperty

/* public: __thiscall UByteProperty::UByteProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long,class UEnum *) */

UByteProperty * __thiscall
UByteProperty::UByteProperty
          (UByteProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4,
          UEnum *param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4327  189  ??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7998;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  *(UEnum **)(this + 0x78) = param_5;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010432c thunk_FUN_10109330 thunk -> 10109330

// ==== 10104331 UObject::AddRef

/* public: virtual unsigned long __stdcall UObject::AddRef(void) */

ulong UObject::AddRef(void)

{
                    /* 0x4331  792  ?AddRef@UObject@@UAGKXZ */
  return 0;
}


// ==== 10104336 FGuid::FGuid

/* public: __thiscall FGuid::FGuid(unsigned long,unsigned long,unsigned long,unsigned long) */

void __thiscall FGuid::FGuid(FGuid *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
                    /* 0x4336  61  ??0FGuid@@QAE@KKKK@Z */
  *(ulong *)this = param_1;
  *(ulong *)(this + 4) = param_2;
  *(ulong *)(this + 8) = param_3;
  *(ulong *)(this + 0xc) = param_4;
  return;
}


// ==== 1010433b FArray::AddZeroed

/* public: int __thiscall FArray::AddZeroed(int,int) */

int __thiscall FArray::AddZeroed(FArray *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
                    /* 0x433b  797  ?AddZeroed@FArray@@QAEHHH@Z */
  iVar2 = *(int *)(this + 4);
  iVar1 = param_2 + iVar2;
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    Realloc(this,param_1);
  }
  uVar4 = param_1 * param_2 & 3;
  puVar5 = (undefined4 *)(iVar2 * param_1 + *(int *)this);
  for (uVar3 = (uint)(param_1 * param_2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return iVar2;
}


// ==== 10104340 UFloatProperty::Link

/* public: virtual void __thiscall UFloatProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UFloatProperty::Link(UFloatProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4340  1557  ?Link@UFloatProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be050;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 4;
  iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104345 thunk_FUN_10118750 thunk -> 10118750

// ==== 1010434a UObject::IsIn

/* public: int __thiscall UObject::IsIn(class UObject *)const  */

int __thiscall UObject::IsIn(UObject *this,UObject *param_1)

{
  UObject *pUVar1;
  
                    /* 0x434a  1514  ?IsIn@UObject@@QBEHPAV1@@Z */
  pUVar1 = *(UObject **)(this + 0x18);
  while( true ) {
    if (pUVar1 == (UObject *)0x0) {
      return (uint)(param_1 == (UObject *)0x0);
    }
    if (pUVar1 == param_1) break;
    pUVar1 = *(UObject **)(pUVar1 + 0x18);
  }
  return 1;
}


// ==== 1010434f FBitWriter::WriteInt

/* public: void __thiscall FBitWriter::WriteInt(unsigned long,unsigned long) */

void __thiscall FBitWriter::WriteInt(FBitWriter *this,ulong param_1,ulong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0x434f  1998  ?WriteInt@FBitWriter@@QAEXKK@Z */
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
      if ((param_1 & uVar3) != 0) {
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


// ==== 10104354 FFrame::FFrame

/* public: __thiscall FFrame::FFrame(class UObject *,class UStruct *,int,void *) */

void __thiscall
FFrame::FFrame(FFrame *this,UObject *param_1,UStruct *param_2,int param_3,void *param_4)

{
  int iVar1;
  
                    /* 0x4354  58  ??0FFrame@@QAE@PAVUObject@@PAVUStruct@@HPAX@Z */
  *(UStruct **)(this + 4) = param_2;
  *(UObject **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_2 + 0x54);
  *(void **)(this + 0x10) = param_4;
  *(int *)(this + 0xc) = iVar1 + param_3;
  return;
}


// ==== 10104359 UStruct::SetPropertiesSize

/* public: void __thiscall UStruct::SetPropertiesSize(int) */

void __thiscall UStruct::SetPropertiesSize(UStruct *this,int param_1)

{
                    /* 0x4359  1867  ?SetPropertiesSize@UStruct@@QAEXH@Z */
  *(int *)(this + 0x4c) = param_1;
  return;
}


// ==== 1010435e thunk_FUN_1015dc10 thunk -> 1015dc10

// ==== 10104363 UObject::SWEndLoad

/* public: static void __cdecl UObject::SWEndLoad(void) */

void __cdecl UObject::SWEndLoad(void)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4363  1781  ?SWEndLoad@UObject@@SAXXZ */
  puStack_c = &LAB_101bc7c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (GSWObjBeginLoadCount < 1) {
    ExceptionList = &pvStack_10;
    appFailAssert("GSWObjBeginLoadCount>0",".\\UnObj.cpp",0xcaa);
  }
  GSWObjBeginLoadCount = GSWObjBeginLoadCount + -1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104368 UStrProperty::UStrProperty

/* public: __thiscall UStrProperty::UStrProperty(class UStrProperty const &) */

UStrProperty * __thiscall UStrProperty::UStrProperty(UStrProperty *this,UStrProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4368  271  ??0UStrProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010436d FStateFrame::FStateFrame

/* public: __thiscall FStateFrame::FStateFrame(class UObject *) */

void __thiscall FStateFrame::FStateFrame(FStateFrame *this,UObject *param_1)

{
  undefined4 uVar1;
  
                    /* 0x436d  140  ??0FStateFrame@@QAE@PAVUObject@@@Z */
  *(undefined ***)this = FFrame::vftable;
  if (param_1 == (UObject *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  *(UObject **)(this + 8) = param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  return;
}


// ==== 10104377 FFeedbackContext::FFeedbackContext

/* public: __thiscall FFeedbackContext::FFeedbackContext(class FFeedbackContext const &) */

void __thiscall FFeedbackContext::FFeedbackContext(FFeedbackContext *this,FFeedbackContext *param_1)

{
                    /* 0x4377  49  ??0FFeedbackContext@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 1010437c UParamStack::execPushString

/* public: void __thiscall UParamStack::execPushString(struct FFrame &,void * const) */

void __thiscall UParamStack::execPushString(UParamStack *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined2 *puStack_28;
  int iStack_24;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x437c  2347  ?execPushString@UParamStack@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bd0e8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString((FString *)&puStack_28);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&puStack_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(this + 0x34) != (L2ParamStack *)0x0) {
    if (iStack_24 == 0) {
      puStack_28 = &DAT_101cdd44;
    }
    L2ParamStack::PushBack(*(L2ParamStack **)(this + 0x34),puStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString((FString *)&puStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104381 thunk_FUN_1011ea50 thunk -> 1011ea50

// ==== 10104386 thunk_FUN_10138d30 thunk -> 10138d30

// ==== 1010438b TArray<unsigned_short>::operator+=

/* public: class TArray<unsigned short> & __thiscall TArray<unsigned short>::operator+=(class
   TArray<unsigned short> const &) */

TArray<unsigned_short> * __thiscall
TArray<unsigned_short>::operator+=(TArray<unsigned_short> *this,TArray<unsigned_short> *param_1)

{
  TArray<unsigned_short> *pTVar1;
  
                    /* 0x438b  675  ??Y?$TArray@G@@QAEAAV0@ABV0@@Z */
  if (this != param_1) {
    pTVar1 = operator+(this,param_1);
    operator=(this,pTVar1);
  }
  return this;
}


// ==== 10104395 FBlowFish::ResetMemberVariable

/* public: void __thiscall FBlowFish::ResetMemberVariable(void) */

void __thiscall FBlowFish::ResetMemberVariable(FBlowFish *this)

{
  FBlowFish *pFVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x4395  1771  ?ResetMemberVariable@FBlowFish@@QAEXXZ */
  iVar3 = 0x12;
  pFVar1 = this;
  do {
    *(undefined4 *)pFVar1 = *(undefined4 *)(pFVar1 + ((int)&DAT_102390b0 - (int)this));
    pFVar1 = pFVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &DAT_102394f8;
  pFVar1 = this + 0x448;
  do {
    *(undefined4 *)(pFVar1 + -0x400) = puVar2[-0x100];
    *(undefined4 *)pFVar1 = *puVar2;
    *(undefined4 *)(pFVar1 + 0x400) = *(undefined4 *)(pFVar1 + ((int)&DAT_102394b0 - (int)this));
    *(undefined4 *)(pFVar1 + 0x800) = *(undefined4 *)(pFVar1 + ((int)&DAT_102398b0 - (int)this));
    puVar2 = puVar2 + 1;
    pFVar1 = pFVar1 + 4;
  } while ((int)puVar2 < 0x102398f8);
  return;
}


// ==== 1010439a UObject::execAbs

/* public: void __thiscall UObject::execAbs(struct FFrame &,void * const) */

void __thiscall UObject::execAbs(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x439a  2135  ?execAbs@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (0.0 <= (float)&uStack_4) {
    *unaff_retaddr = (float)&uStack_4;
    return;
  }
  *unaff_retaddr = -(float)&uStack_4;
  return;
}


// ==== 1010439f thunk_FUN_10149fd0 thunk -> 10149fd0

// ==== 101043a4 FInterpCurvePoint::operator=

/* public: class FInterpCurvePoint & __thiscall FInterpCurvePoint::operator=(class FInterpCurvePoint
   const &) */

FInterpCurvePoint * __thiscall
FInterpCurvePoint::operator=(FInterpCurvePoint *this,FInterpCurvePoint *param_1)

{
                    /* 0x43a4  456  ??4FInterpCurvePoint@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 101043a9 FMalloc::FMalloc

/* public: __thiscall FMalloc::FMalloc(void) */

void __thiscall FMalloc::FMalloc(FMalloc *this)

{
                    /* 0x43a9  71  ??0FMalloc@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 101043ae FBox::operator+

/* public: class FBox __thiscall FBox::operator+(class FVector const &)const  */

void __thiscall FBox::operator+(FBox *this,FVector *param_1)

{
  FBox *pFVar1;
  int iVar2;
  FVector *in_stack_00000008;
  FBox aFStack_1c [28];
  
  pFVar1 = aFStack_1c;
                    /* 0x43ae  633  ??HFBox@@QBE?AV0@ABVFVector@@@Z */
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *(undefined4 *)this;
    this = this + 4;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = operator+=(aFStack_1c,in_stack_00000008);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 101043b3 UMapProperty::StaticClass

/* public: static class UClass * __cdecl UMapProperty::StaticClass(void) */

UClass * __cdecl UMapProperty::StaticClass(void)

{
                    /* 0x43b3  1907  ?StaticClass@UMapProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101043b8 FPlane::TransformBy

/* public: class FPlane __thiscall FPlane::TransformBy(class FMatrix const &)const  */

FMatrix * __thiscall FPlane::TransformBy(FPlane *this,FMatrix *param_1)

{
  FMatrix *unaff_retaddr;
  FMatrix *in_stack_00000008;
  
                    /* 0x43b8  1971  ?TransformBy@FPlane@@QBE?AV1@ABVFMatrix@@@Z */
  FMatrix::TransposeAdjoint(in_stack_00000008);
  TransformByUsingAdjointT(this,unaff_retaddr,in_stack_00000008);
  return unaff_retaddr;
}


// ==== 101043bd thunk_FUN_10132a30 thunk -> 10132a30

// ==== 101043c2 appStrtoi

/* int __cdecl appStrtoi(unsigned short const *,unsigned short * *,int) */

int __cdecl appStrtoi(ushort *param_1,ushort **param_2,int param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
                    /* 0x43c2  2119  ?appStrtoi@@YAHPBGPAPAGH@Z */
  if (DAT_1033e2bc == 0) {
    ppuVar2 = &PTR_DAT_1023b598;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,(wchar_t *)param_1,(wchar_t **)param_2,param_3,1);
  return uVar1;
}


// ==== 101043c7 UFixedArrayProperty::ImportText

/* public: virtual unsigned short const * __thiscall UFixedArrayProperty::ImportText(unsigned short
   const *,unsigned char *,int)const  */

ushort * __thiscall
UFixedArrayProperty::ImportText
          (UFixedArrayProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x43c7  1447  ?ImportText@UFixedArrayProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101bdef0;
  pvStack_10 = ExceptionList;
  iVar1 = 0;
  uStack_8 = 0;
  if (*param_1 == 0x28) {
    ExceptionList = &pvStack_10;
    thunk_FUN_10108420(param_2,*(undefined4 *)(this + 0x44));
    for (; iVar1 < *(int *)(this + 0x7c); iVar1 = iVar1 + 1) {
      param_1 = (ushort *)
                (**(code **)(**(int **)(this + 0x78) + 0x9c))
                          (param_1 + 1,param_2 + (*(int **)(this + 0x78))[0x11] * iVar1,param_3 | 2)
      ;
      if (param_1 == (ushort *)0x0) {
        ExceptionList = pvStack_10;
        return (ushort *)0x0;
      }
      if ((*param_1 != 0x2c) && (iVar1 != *(int *)(this + 0x7c) + -1)) {
        ExceptionList = pvStack_10;
        return (ushort *)0x0;
      }
    }
    if (param_1[1] == 0x29) {
      ExceptionList = pvStack_10;
      return param_1 + 2;
    }
  }
  ExceptionList = pvStack_10;
  return (ushort *)0x0;
}


// ==== 101043cc thunk_FUN_101146b0 thunk -> 101146b0

// ==== 101043d1 FArchive::operator<<

/* public: virtual class FArchive & __thiscall FArchive::operator<<(class UObject * &) */

FArchive * __thiscall FArchive::operator<<(FArchive *this,UObject **param_1)

{
                    /* 0x43d1  555  ??6FArchive@@UAEAAV0@AAPAVUObject@@@Z */
  return this;
}


// ==== 101043d6 thunk_FUN_10128630 thunk -> 10128630

// ==== 101043db UDelegateProperty::SerializeItem

/* public: virtual void __thiscall UDelegateProperty::SerializeItem(class FArchive &,void
   *,int)const  */

void __thiscall
UDelegateProperty::SerializeItem
          (UDelegateProperty *this,FArchive *param_1,void *param_2,int param_3)

{
  int *piVar1;
  
                    /* 0x43db  1840  ?SerializeItem@UDelegateProperty@@UBEXAAVFArchive@@PAXH@Z */
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x18))(param_2);
  (**(code **)(*piVar1 + 0x1c))((int)param_2 + 4);
  return;
}


// ==== 101043e0 FSphere::FSphere

/* public: __thiscall FSphere::FSphere(class FVector const *,int) */

FSphere * __thiscall FSphere::FSphere(FSphere *this,FVector *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar7;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x43e0  136  ??0FSphere@@QAE@PBVFVector@@H@Z */
  puStack_c = &LAB_101bbdd0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa4;
  ExceptionList = &pvStack_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uStack_8 = 0;
  if (param_2 != 0) {
    FBox::FBox((FBox *)&fStack_50,param_1,param_2);
    fStack_34 = fStack_50 + fStack_44;
    fStack_30 = fStack_4c + fStack_40;
    fStack_2c = fStack_48 + fStack_3c;
    uVar7 = 0x40000000;
    fStack_1c = fStack_2c;
    fStack_18 = fStack_30;
    puVar3 = (undefined4 *)FVector::operator/((FVector *)&fStack_34,(float)&fStack_40);
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uStack_38 = 0;
    *(undefined4 *)this = *puVar3;
    *(undefined4 *)(this + 4) = uVar1;
    *(undefined4 *)(this + 8) = uVar2;
    *(undefined4 *)(this + 0xc) = 0;
    iVar4 = 0;
    while (iStack_20 = iVar4, iVar4 < param_2) {
      fVar5 = (float10)thunk_FUN_1014e860(param_1 + iVar4 * 0xc,this,uVar7);
      if ((float)fVar5 <= *(float *)(this + 0xc)) {
        iVar4 = iVar4 + 1;
      }
      else {
        *(float *)(this + 0xc) = (float)fVar5;
        iVar4 = iVar4 + 1;
      }
    }
    dVar6 = appSqrt((double)*(float *)(this + 0xc));
    *(float *)(this + 0xc) = (float)((float10)dVar6 * (float10)1.0010000467300415);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101043e5 UMapProperty::DestroyValue

/* public: virtual void __thiscall UMapProperty::DestroyValue(void *)const  */

void __thiscall UMapProperty::DestroyValue(UMapProperty *this,void *param_1)

{
                    /* 0x43e5  926  ?DestroyValue@UMapProperty@@UBEXPAX@Z */
  return;
}


// ==== 101043ea FRangeVector::operator*

/* public: class FRangeVector __thiscall FRangeVector::operator*(class FRangeVector const &)const
    */

void __thiscall FRangeVector::operator*(FRangeVector *this,FRangeVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x43ea  611  ??DFRangeVector@@QBE?AV0@ABV0@@Z */
  fVar1 = *(float *)(this + 0x10) * in_stack_00000008[4];
  fVar2 = in_stack_00000008[5] * *(float *)(this + 0x14);
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = in_stack_00000008[2] * *(float *)(this + 8);
  fVar3 = in_stack_00000008[3] * *(float *)(this + 0xc);
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *in_stack_00000008 * *(float *)this;
  fVar4 = in_stack_00000008[1] * *(float *)(this + 4);
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


// ==== 101043ef UClass::IsA

/* private: int __thiscall UClass::IsA(class UClass *)const  */

int __thiscall UClass::IsA(UClass *this,UClass *param_1)

{
  UClass *pUVar1;
  
                    /* 0x43ef  1509  ?IsA@UClass@@ABEHPAV1@@Z */
  pUVar1 = *(UClass **)(this + 0x24);
  while( true ) {
    if (pUVar1 == (UClass *)0x0) {
      return (uint)(param_1 == (UClass *)0x0);
    }
    if (pUVar1 == param_1) break;
    pUVar1 = *(UClass **)(pUVar1 + 0x34);
  }
  return 1;
}


// ==== 101043f4 FVector::UnsafeNormal

/* public: class FVector __thiscall FVector::UnsafeNormal(void)const  */

void __thiscall FVector::UnsafeNormal(FVector *this)

{
  float fVar1;
  double dVar2;
  float *in_stack_00000004;
  
                    /* 0x43f4  1990  ?UnsafeNormal@FVector@@QBE?AV1@XZ */
  dVar2 = appSqrt((double)(*(float *)(this + 8) * *(float *)(this + 8) +
                          *(float *)this * *(float *)this +
                          *(float *)(this + 4) * *(float *)(this + 4)));
  fVar1 = 1.0 / (float)dVar2;
  *in_stack_00000004 = fVar1 * *(float *)this;
  in_stack_00000004[1] = fVar1 * *(float *)(this + 4);
  in_stack_00000004[2] = fVar1 * *(float *)(this + 8);
  return;
}


// ==== 101043f9 ULinker::operator=

/* public: class ULinker & __thiscall ULinker::operator=(class ULinker const &) */

ULinker * __thiscall ULinker::operator=(ULinker *this,ULinker *param_1)

{
  FArray *this_00;
  undefined4 uVar1;
  ULinker *pUVar2;
  int iVar3;
  undefined2 *_Src;
  
                    /* 0x43f9  528  ??4ULinker@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FPackageFileSummary::operator=
            ((FPackageFileSummary *)(this + 0x38),(FPackageFileSummary *)(param_1 + 0x38));
  thunk_FUN_10118e30(param_1 + 0x78);
  thunk_FUN_10121370(param_1 + 0x84);
  thunk_FUN_10121530(param_1 + 0x90);
  this_00 = (FArray *)(this + 0xa0);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  if (this_00 != (FArray *)(param_1 + 0xa0)) {
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(this + 0xa8) = uVar1;
    *(undefined4 *)(this + 0xa4) = uVar1;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 0xa4) != 0) {
      if (*(int *)(param_1 + 0xa4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0xa0);
      }
      _memcpy(*(void **)this_00,_Src,*(int *)(this + 0xa4) * 2);
    }
  }
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  pUVar2 = this + 0xb0;
  iVar3 = 0x10;
  do {
    *pUVar2 = pUVar2[(int)param_1 - (int)this];
    pUVar2 = pUVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}


// ==== 101043fe UObject::execDivideEqual_IntFloat

/* public: void __thiscall UObject::execDivideEqual_IntFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivideEqual_IntFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  float unaff_EDI;
  uchar *puVar3;
  undefined4 uStack_4;
  
                    /* 0x43fe  2189  ?execDivideEqual_IntFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  if (unaff_EDI != 0.0) {
    uVar2 = FUN_1017b700();
    *(undefined4 *)puVar3 = uVar2;
    *unaff_ESI = uVar2;
    return;
  }
  uVar2 = FUN_1017b700();
  *(undefined4 *)puVar3 = uVar2;
  *unaff_ESI = uVar2;
  return;
}


// ==== 10104403 UProperty::GetID

/* public: virtual unsigned char __thiscall UProperty::GetID(void)const  */

uchar __thiscall UProperty::GetID(UProperty *this)

{
                    /* 0x4403  1330  ?GetID@UProperty@@UBEEXZ */
  return *(uchar *)(*(int *)(this + 0x24) + 0x20);
}


// ==== 10104408 thunk_FUN_10119360 thunk -> 10119360

// ==== 10104412 FNpcPosInfoHit::operator=

/* public: class FNpcPosInfoHit & __thiscall FNpcPosInfoHit::operator=(class FNpcPosInfoHit const &)
    */

FNpcPosInfoHit * __thiscall FNpcPosInfoHit::operator=(FNpcPosInfoHit *this,FNpcPosInfoHit *param_1)

{
                    /* 0x4412  470  ??4FNpcPosInfoHit@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 1010441c UObject::execVSize

/* public: void __thiscall UObject::execVSize(struct FFrame &,void * const) */

void __thiscall UObject::execVSize(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  double dVar2;
  float *unaff_retaddr;
  float afStack_c [3];
  
                    /* 0x441c  2403  ?execVSize@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSqrt((double)(afStack_c[0] * afStack_c[0] +
                          (float)afStack_c * (float)afStack_c + unaff_ESI * unaff_ESI));
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10104421 UStruct::operator_new

/* public: static void * __cdecl UStruct::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UStruct::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x4421  413  ??2UStruct@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10104426 FRotator::operator*

/* public: class FRotator __thiscall FRotator::operator*(float)const  */

float __thiscall FRotator::operator*(FRotator *this,float param_1)

{
  undefined4 uVar1;
  
                    /* 0x4426  613  ??DFRotator@@QBE?AV0@M@Z */
  uVar1 = FUN_1017b700();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = FUN_1017b700();
  *(undefined4 *)((int)param_1 + 4) = uVar1;
  uVar1 = FUN_1017b700();
  *(undefined4 *)((int)param_1 + 8) = uVar1;
  return param_1;
}


// ==== 1010442b FInterpCurve::Eval

/* public: float __thiscall FInterpCurve::Eval(float) */

float __thiscall FInterpCurve::Eval(FInterpCurve *this,float param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x442b  951  ?Eval@FInterpCurve@@QAEMM@Z */
  puStack_c = &LAB_101bbd70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 4);
  if (((1 < iVar1) && (pfVar2 = *(float **)this, *pfVar2 <= param_1)) &&
     (param_1 <= pfVar2[iVar1 * 2 + -2])) {
    for (iVar4 = 1; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      if (param_1 <= pfVar2[iVar4 * 2]) {
        fVar3 = (param_1 - pfVar2[iVar4 * 2 + -2]) / (pfVar2[iVar4 * 2] - pfVar2[iVar4 * 2 + -2]);
        if ((fVar3 < 0.0) || (ExceptionList = &pvStack_10, 1.0 < fVar3)) {
          ExceptionList = &pvStack_10;
          appFailAssert("Alpha >= 0 && Alpha <= 1",".\\UnMath.cpp",0x20d);
        }
        iVar1 = *(int *)this + iVar4 * 8;
        fVar5 = (float10)thunk_FUN_1014d2a0(iVar1 + -4,iVar1 + 4,fVar3);
        ExceptionList = pvStack_10;
        return (float)fVar5;
      }
    }
  }
  return 0.0;
}


// ==== 1010443a L2ParamStack::GetTotalBufferSize

/* public: int __thiscall L2ParamStack::GetTotalBufferSize(void) */

int __thiscall L2ParamStack::GetTotalBufferSize(L2ParamStack *this)

{
                    /* 0x443a  1413  ?GetTotalBufferSize@L2ParamStack@@QAEHXZ */
  return *(int *)(this + 0xc);
}


// ==== 1010443f FBufferReader::TotalSize

/* public: virtual int __thiscall FBufferReader::TotalSize(void) */

int __thiscall FBufferReader::TotalSize(FBufferReader *this)

{
                    /* 0x443f  1966  ?TotalSize@FBufferReader@@UAEHXZ */
  return *(int *)(*(int *)(this + 0x38) + 4);
}


// ==== 10104444 UObject::ProcessState

/* public: virtual void __thiscall UObject::ProcessState(float) */

void __thiscall UObject::ProcessState(UObject *this,float param_1)

{
                    /* 0x4444  1736  ?ProcessState@UObject@@UAEXM@Z */
  return;
}


// ==== 10104449 FString::operator*

/* public: class FString __thiscall FString::operator*(class FString const &)const  */

FString * __thiscall FString::operator*(FString *this,FString *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4449  614  ??DFString@@QBE?AV0@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b70b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator*(this,(ushort *)param_1);
  ExceptionList = (void *)0x0;
  return param_1;
}


// ==== 1010444e FRangeVector::operator/=

/* public: class FRangeVector __thiscall FRangeVector::operator/=(float) */

void __thiscall FRangeVector::operator/=(FRangeVector *this,float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float in_stack_00000008;
  
                    /* 0x444e  702  ??_0FRangeVector@@QAE?AV0@M@Z */
  fVar2 = 1.0 / in_stack_00000008;
  *(float *)this = fVar2 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * fVar2;
  *(float *)(this + 8) = *(float *)(this + 8) * fVar2;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * fVar2;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * fVar2;
  *(float *)(this + 0x14) = fVar2 * *(float *)(this + 0x14);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((int)param_1 + 0x14) = uVar1;
  return;
}


// ==== 10104453 UFloatProperty::NetSerializeItem

/* public: virtual int __thiscall UFloatProperty::NetSerializeItem(class FArchive &,class
   UPackageMap *,void *)const  */

int __thiscall
UFloatProperty::NetSerializeItem
          (UFloatProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
                    /* 0x4453  1634
                       ?NetSerializeItem@UFloatProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  (**(code **)(*(int *)param_1 + 4))(param_3,4);
  return 1;
}


// ==== 10104458 appStrcat

/* unsigned short * __cdecl appStrcat(unsigned short *,unsigned short const *) */

ushort * __cdecl appStrcat(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
                    /* 0x4458  2105  ?appStrcat@@YAPAGPAGPBG@Z */
  puVar2 = param_2;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  puVar5 = param_1 + -1;
  do {
    puVar4 = puVar5 + 1;
    puVar5 = puVar5 + 1;
  } while (*puVar4 != 0);
  puVar4 = param_2;
  for (uVar3 = (uint)((int)puVar2 - (int)param_2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
    puVar4 = puVar4 + 2;
    puVar5 = puVar5 + 2;
  }
  for (uVar3 = (int)puVar2 - (int)param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (ushort *)((int)puVar4 + 1);
    puVar5 = (ushort *)((int)puVar5 + 1);
  }
  return param_1;
}


// ==== 1010445d FVector::FVector

/* public: __thiscall FVector::FVector(void) */

FVector * __thiscall FVector::FVector(FVector *this)

{
                    /* 0x445d  168  ??0FVector@@QAE@XZ */
  return this;
}


// ==== 10104462 UObject::GetIndexedObject

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UObject * __cdecl UObject::GetIndexedObject(int) */

UObject * __cdecl UObject::GetIndexedObject(int param_1)

{
                    /* 0x4462  1336  ?GetIndexedObject@UObject@@SAPAV1@H@Z */
  if ((-1 < param_1) && (param_1 < DAT_1033088c)) {
    return *(UObject **)(_GObjObjects + param_1 * 4);
  }
  return (UObject *)0x0;
}


// ==== 10104467 thunk_FUN_10131090 thunk -> 10131090

// ==== 10104471 FOutputDevice::Log

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FOutputDevice::Log(unsigned short const *) */

void __thiscall FOutputDevice::Log(FOutputDevice *this,ushort *param_1)

{
                    /* 0x4471  1593  ?Log@FOutputDevice@@QAEXPBG@Z */
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    (*(code *)**(undefined4 **)this)(param_1,0x2f8);
  }
  return;
}


// ==== 10104476 FBitReader::GetPosBits

/* public: int __thiscall FBitReader::GetPosBits(void) */

int __thiscall FBitReader::GetPosBits(FBitReader *this)

{
                    /* 0x4476  1382  ?GetPosBits@FBitReader@@QAEHXZ */
  return *(int *)(this + 0x48);
}


// ==== 1010447b UClass::InternalConstructor

/* public: static void __cdecl UClass::InternalConstructor(void *) */

void __cdecl UClass::InternalConstructor(void *param_1)

{
                    /* 0x447b  1478  ?InternalConstructor@UClass@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UClass(param_1);
    return;
  }
  return;
}


// ==== 10104480 ULinker::GetExportFullName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class FString __thiscall ULinker::GetExportFullName(int,unsigned short const *) */

int __thiscall ULinker::GetExportFullName(ULinker *this,int param_1,ushort *param_2)

{
  ushort *puVar1;
  FString *pFVar2;
  ushort **ppuVar3;
  int iVar4;
  int iVar5;
  int in_stack_0000000c;
  FString aFStack_68 [12];
  FString aFStack_5c [12];
  FString aFStack_50 [12];
  FString aFStack_44 [12];
  FString aFStack_38 [12];
  FString aFStack_2c [20];
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4480  1314  ?GetExportFullName@ULinker@@QAE?AVFString@@HPBG@Z */
  puStack_c = &LAB_101bb8e9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff8c;
  uStack_18 = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_2c);
  uStack_8._0_1_ = 2;
  iVar5 = (int)param_2 + 1;
  for (iVar4 = iVar5; iVar4 != 0; iVar4 = *(int *)(*(int *)(this + 0x90) + -0x1c + iVar4 * 0x24)) {
    if (iVar4 != iVar5) {
      pFVar2 = (FString *)FString::FString(aFStack_50,(ushort *)&DAT_101d4948);
      uStack_8._0_1_ = 3;
      pFVar2 = (FString *)FString::operator+(pFVar2,(ushort *)aFStack_44);
      uStack_8._0_1_ = 4;
      pFVar2 = (FString *)FString::operator+(pFVar2,aFStack_38);
      uStack_8._0_1_ = 5;
      FString::operator=(aFStack_2c,pFVar2);
      uStack_8._0_1_ = 4;
      FString::~FString(aFStack_38);
      uStack_8._0_1_ = 3;
      FString::~FString(aFStack_44);
      uStack_8._0_1_ = 2;
      FString::~FString(aFStack_50);
    }
    pFVar2 = (FString *)
             FString::FString(aFStack_68,
                              (ushort *)
                              (*(int *)(_Names + *(int *)(*(int *)(this + 0x90) + iVar4 * 0x24 +
                                                         -0x18) * 4) + 0xc));
    uStack_8._0_1_ = 6;
    pFVar2 = (FString *)FString::operator+(pFVar2,aFStack_5c);
    uStack_8._0_1_ = 7;
    FString::operator=(aFStack_2c,pFVar2);
    uStack_8._0_1_ = 6;
    FString::~FString(aFStack_5c);
    uStack_8._0_1_ = 2;
    FString::~FString(aFStack_68);
  }
  iVar4 = *(int *)(*(int *)(this + 0x90) + (int)param_2 * 0x24);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      ppuVar3 = (ushort **)(*(int *)(this + 0x84) + iVar4 * -0x1c + -0x10);
    }
    else {
      param_2 = (ushort *)0x2a5;
      ppuVar3 = &param_2;
    }
  }
  else {
    ppuVar3 = (ushort **)(*(int *)(this + 0x90) + -0x18 + iVar4 * 0x24);
  }
  puVar1 = *ppuVar3;
  if (in_stack_0000000c == 0) {
    UObject::GetPathName(*(UObject **)(this + 0x34),(UObject *)0x0,(ushort *)0x0);
  }
  pFVar2 = (FString *)
           FString::FString(aFStack_44,(ushort *)(*(int *)(_Names + (int)puVar1 * 4) + 0xc));
  uStack_8._0_1_ = 8;
  pFVar2 = (FString *)FString::operator+(pFVar2,(ushort *)aFStack_50);
  uStack_8._0_1_ = 9;
  pFVar2 = (FString *)FString::operator+(pFVar2,(ushort *)aFStack_5c);
  uStack_8._0_1_ = 10;
  pFVar2 = (FString *)FString::operator+(pFVar2,(ushort *)aFStack_68);
  uStack_8._0_1_ = 0xb;
  FString::operator+(pFVar2,(FString *)param_1);
  uStack_18 = uStack_18 | 1;
  uStack_8._0_1_ = 10;
  FString::~FString(aFStack_68);
  uStack_8._0_1_ = 9;
  FString::~FString(aFStack_5c);
  uStack_8._0_1_ = 8;
  FString::~FString(aFStack_50);
  uStack_8._0_1_ = 2;
  FString::~FString(aFStack_44);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FString::~FString(aFStack_2c);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10104485 UObject::execObjectConst

/* public: void __thiscall UObject::execObjectConst(struct FFrame &,void * const) */

void __thiscall UObject::execObjectConst(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  
                    /* 0x4485  2338  ?execObjectConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)param_2 = uVar1;
  return;
}


// ==== 1010448a USubsystem::operator_new

/* public: static void * __cdecl USubsystem::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
USubsystem::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x448a  417  ??2USubsystem@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 1010448f UObject::GetFName

/* public: class FName const __thiscall UObject::GetFName(void)const  */

void __thiscall UObject::GetFName(UObject *this)

{
  undefined4 *in_stack_00000004;
  
                    /* 0x448f  1319  ?GetFName@UObject@@QBE?BVFName@@XZ */
  *in_stack_00000004 = *(undefined4 *)(this + 0x20);
  return;
}


// ==== 10104494 FQuat::operator*

/* public: class FQuat __thiscall FQuat::operator*(class FQuat const &)const  */

void __thiscall FQuat::operator*(FQuat *this,FQuat *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x4494  608  ??DFQuat@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 =
       (in_stack_00000008[2] * *(float *)(this + 4) +
       *(float *)this * in_stack_00000008[3] + *in_stack_00000008 * *(float *)(this + 0xc)) -
       in_stack_00000008[1] * *(float *)(this + 8);
  *(float *)(param_1 + 4) =
       *(float *)(this + 8) * *in_stack_00000008 +
       *(float *)(this + 4) * in_stack_00000008[3] +
       (in_stack_00000008[1] * *(float *)(this + 0xc) - in_stack_00000008[2] * *(float *)this);
  *(float *)(param_1 + 8) =
       *(float *)(this + 8) * in_stack_00000008[3] +
       ((in_stack_00000008[1] * *(float *)this + in_stack_00000008[2] * *(float *)(this + 0xc)) -
       *(float *)(this + 4) * *in_stack_00000008);
  *(float *)(param_1 + 0xc) =
       ((in_stack_00000008[3] * *(float *)(this + 0xc) - *in_stack_00000008 * *(float *)this) -
       in_stack_00000008[1] * *(float *)(this + 4)) - *(float *)(this + 8) * in_stack_00000008[2];
  return;
}


// ==== 10104499 thunk_FUN_1012b8f0 thunk -> 1012b8f0

// ==== 1010449e UObject::execIntToFloat

/* public: void __thiscall UObject::execIntToFloat(struct FFrame &,void * const) */

void __thiscall UObject::execIntToFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x449e  2270  ?execIntToFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (float)(int)param_1;
  return;
}


// ==== 101044a3 UObject::GlobalSetProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::GlobalSetProperty(unsigned short const *,class UClass
   *,class UProperty *,int,int) */

void __cdecl
UObject::GlobalSetProperty
          (ushort *param_1,UClass *param_2,UProperty *param_3,int param_4,int param_5)

{
  int iVar1;
  UObject *pUVar2;
  ulong uVar3;
  ushort *puVar4;
  int iStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x44a3  1417  ?GlobalSetProperty@UObject@@SAXPBGPAVUClass@@PAVUProperty@@HH@Z
                        */
  puStack_c = &LAB_101bda00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_5 != 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_1012b3e0(&PrivateStaticClass);
    while (iStack_20 < DAT_1033088c) {
      pUVar2 = *(UObject **)(_GObjObjects + iStack_20 * 4);
      iVar1 = IsA(pUVar2,param_2);
      if (iVar1 != 0) {
        (**(code **)(*(int *)param_3 + 0x9c))(param_1,pUVar2 + param_4,1);
        (**(code **)(**(int **)(_GObjObjects + iStack_20 * 4) + 0x44))();
      }
      thunk_FUN_1012ae60();
    }
  }
  (**(code **)(*(int *)param_3 + 0x9c))(param_1,*(int *)(param_2 + 0x4f4) + param_4,1);
  puVar4 = (ushort *)0x0;
  uVar3 = 0x4000;
  pUVar2 = UClass::GetDefaultObject(param_2);
  SaveConfig(pUVar2,uVar3,puVar4);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101044a8 UByteProperty::Link

/* public: virtual void __thiscall UByteProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UByteProperty::Link(UByteProperty *this,FArchive *param_1,UProperty *param_2)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x44a8  1553  ?Link@UByteProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101bdfd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 1;
  uVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(undefined4 *)(this + 0x54) = uVar1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101044ad thunk_FUN_10166390 thunk -> 10166390

// ==== 101044b2 UObjectProperty::operator_new

/* public: static void * __cdecl UObjectProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UObjectProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x44b2  400  ??2UObjectProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 101044b7 UArrayProperty::UArrayProperty

/* public: __thiscall UArrayProperty::UArrayProperty(class UArrayProperty const &) */

UArrayProperty * __thiscall
UArrayProperty::UArrayProperty(UArrayProperty *this,UArrayProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x44b7  182  ??0UArrayProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101044bc appFindPackageFile

/* int __cdecl appFindPackageFile(unsigned short const *,class FGuid const *,unsigned short *) */

int __cdecl appFindPackageFile(ushort *param_1,FGuid *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  USystem *pUVar4;
  undefined4 uVar5;
  int iVar6;
  FOutputDevice *this;
  wchar_t *pwVar7;
  ushort *puVar8;
  ushort auStack_65c [256];
  ushort auStack_45c [256];
  ushort auStack_25c [256];
  undefined1 auStack_5c [20];
  int iStack_48;
  ushort *puStack_44;
  int iStack_40;
  ushort *puStack_3c;
  int aiStack_38 [3];
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x44bc  2042  ?appFindPackageFile@@YAHPBGPBVFGuid@@PAG@Z */
  puStack_c = &LAB_101bc530;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff998;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = appStrlen(param_1);
  iVar2 = appStrlen((ushort *)L".dll");
  if (iVar2 < iVar1) {
    pwVar7 = L".dll";
    iVar1 = appStrlen(param_1);
    iVar2 = appStrlen((ushort *)L".dll");
    iVar1 = appStricmp(param_1 + (iVar1 - iVar2),(ushort *)pwVar7);
    if (iVar1 == 0) {
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  puVar8 = (ushort *)&DAT_101d645c;
  puVar3 = UObject::GetLanguage();
  iVar1 = appStricmp(puVar3,puVar8);
  uStack_24 = (uint)(iVar1 != 0);
  appStrcpy(param_3,param_1);
  iVar1 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
  if (-1 < iVar1) {
    ExceptionList = pvStack_10;
    return 1;
  }
  pUVar4 = GSys;
  for (iStack_18 = 0; iVar1 = iStack_18, iStack_18 < (int)(((short)GCdPath != 0) + 1);
      iStack_18 = iStack_18 + 1) {
    for (; iStack_40 = iVar1,
        iVar1 < (int)((uint)(param_2 != (FGuid *)0x0) + *(int *)(pUVar4 + 0x68)); iVar1 = iVar1 + 1)
    {
      for (uStack_1c = 0; (int)uStack_1c < (int)(uStack_24 + 1); uStack_1c = uStack_1c + 1) {
        auStack_25c[0] = 0;
        if (iStack_18 != 0) {
          appStrcat(auStack_25c,(ushort *)&GCdPath);
          appStrcat(auStack_25c,(ushort *)L"System");
          appStrcat(auStack_25c,(ushort *)&DAT_101d6474);
          pUVar4 = GSys;
        }
        if (iVar1 < *(int *)(pUVar4 + 0x68)) {
          puVar3 = FString::operator*((FString *)(*(int *)(pUVar4 + 100) + iVar1 * 0xc));
          appStrcat(auStack_25c,puVar3);
          puVar3 = appStrstr(auStack_25c,(ushort *)&DAT_101d6478);
          if (puVar3 != (ushort *)0x0) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          puStack_44 = puVar3;
          appStrcpy(param_3,auStack_25c);
          appStrcat(param_3,param_1);
        }
        else {
          puVar3 = FString::operator*((FString *)(pUVar4 + 0x4c));
          appStrcat(auStack_25c,puVar3);
          appStrcat(auStack_25c,(ushort *)&DAT_101d647c);
          puVar3 = FString::operator*((FString *)(GSys + 0x58));
          appStrcpy(param_3,auStack_25c);
          puVar8 = FGuid::String(param_2);
          appStrcat(param_3,puVar8);
        }
        uStack_2c = 0;
        iVar2 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
        uStack_2c = (uint)(-1 < iVar2);
        if (uStack_2c != 0) {
LAB_101566f2:
          if (iVar1 != *(int *)(GSys + 0x68)) {
            ExceptionList = pvStack_10;
            return 1;
          }
          appUpdateFileModTime(param_3);
          ExceptionList = pvStack_10;
          return 1;
        }
        if (puVar3 != (ushort *)0x0) {
          appStrcat(param_3,(ushort *)&DAT_101d6480);
          if (uStack_24 != uStack_1c) {
            puVar8 = UObject::GetLanguage();
            appStrcat(param_3,puVar8);
            appStrcat(param_3,(ushort *)&DAT_101d6484);
          }
          appStrcat(param_3,puVar3 + 1);
          iVar2 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
          uStack_2c = (uint)(-1 < iVar2);
        }
        if (uStack_2c != 0) goto LAB_101566f2;
        uStack_2c = 0;
        pUVar4 = GSys;
      }
    }
  }
  iStack_18 = 0;
  do {
    if ((int)(((short)GCdPath != 0) + 1) <= iStack_18) {
      ExceptionList = pvStack_10;
      return 0;
    }
    for (iStack_20 = 0; iVar1 = iStack_20,
        iStack_20 < (int)((uint)(param_2 != (FGuid *)0x0) + *(int *)(pUVar4 + 0x68));
        iStack_20 = iStack_20 + 1) {
      iVar2 = 0;
      auStack_25c[0] = 0;
      if (iStack_18 != 0) {
        appStrcat(auStack_25c,(ushort *)&GCdPath);
        appStrcat(auStack_25c,(ushort *)L"System");
        appStrcat(auStack_25c,(ushort *)&DAT_101d6498);
        pUVar4 = GSys;
      }
      if (iVar1 < *(int *)(pUVar4 + 0x68)) {
        puVar3 = FString::operator*((FString *)(*(int *)(pUVar4 + 100) + iVar1 * 0xc));
        appStrcat(auStack_25c,puVar3);
        puVar3 = appStrstr(auStack_25c,(ushort *)&DAT_101d649c);
        if (puVar3 != (ushort *)0x0) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        puStack_3c = puVar3;
        appStrcpy(param_3,auStack_25c);
        appStrcat(param_3,param_1);
      }
      else {
        puVar3 = FString::operator*((FString *)(pUVar4 + 0x4c));
        appStrcat(auStack_25c,puVar3);
        appStrcat(auStack_25c,(ushort *)&DAT_101d64a0);
        puVar3 = FString::operator*((FString *)(GSys + 0x58));
        appStrcpy(param_3,auStack_25c);
        puVar8 = FGuid::String(param_2);
        appStrcat(param_3,puVar8);
      }
      auStack_45c[0] = 0;
      thunk_FUN_101098b0();
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      appStrcpy(auStack_45c,auStack_25c);
      appStrcat(auStack_45c,(ushort *)&DAT_101d64a4);
      if (puVar3 != (ushort *)0x0) {
        appStrcat(auStack_45c,puVar3);
      }
      uVar5 = (**(code **)(*(int *)GFileManager + 0x30))(auStack_5c,auStack_45c,1,0);
      uStack_8._0_1_ = 2;
      thunk_FUN_10124a90(uVar5);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      thunk_FUN_10124a00();
      uStack_28 = 0;
      auStack_65c[0] = 0;
      if (puVar3 != (ushort *)0x0) {
        appStrcpy(auStack_65c,param_1);
        appStrcat(auStack_65c,puVar3);
      }
      while (iStack_48 = iVar2, iVar1 = FArray::IsValidIndex((FArray *)aiStack_38,iVar2), iVar1 != 0
            ) {
        iVar1 = iVar2 * 0xc;
        puVar3 = param_1;
        puVar8 = FString::operator*((FString *)(aiStack_38[0] + iVar1));
        iVar6 = appStricmp(puVar8,puVar3);
        if (iVar6 == 0) {
LAB_1015697f:
          appStrcpy(param_3,auStack_25c);
          puVar3 = FString::operator*((FString *)(aiStack_38[0] + iVar1));
          appStrcat(param_3,puVar3);
          iVar1 = (**(code **)(*(int *)GFileManager + 0x10))(param_3);
          uStack_28 = (uint)(-1 < iVar1);
        }
        else {
          puVar3 = auStack_65c;
          puVar8 = FString::operator*((FString *)(iVar1 + aiStack_38[0]));
          iVar6 = appStricmp(puVar8,puVar3);
          if (iVar6 == 0) goto LAB_1015697f;
        }
        iVar2 = iVar2 + 1;
      }
      if (uStack_28 != 0) {
        if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(this,(ushort *)GLog);
        }
        if (iStack_20 == *(int *)(GSys + 0x68)) {
          appUpdateFileModTime(param_3);
        }
        uStack_8 = uStack_8 & 0xffffff00;
        thunk_FUN_10124a00();
        ExceptionList = pvStack_10;
        return 1;
      }
      uStack_8 = uStack_8 & 0xffffff00;
      thunk_FUN_10124a00();
      pUVar4 = GSys;
    }
    iStack_18 = iStack_18 + 1;
  } while( true );
}


// ==== 101044c1 appGetVarArgs

/* int __cdecl appGetVarArgs(unsigned short *,int,unsigned short const * &) */

int __cdecl appGetVarArgs(ushort *param_1,int param_2,ushort **param_3)

{
  int iVar1;
  
                    /* 0x44c1  2057  ?appGetVarArgs@@YAHPAGHAAPBG@Z */
  iVar1 = __vsnwprintf((wchar_t *)param_1,param_2,(wchar_t *)*param_3,(va_list)(param_3 + 1));
  return iVar1;
}


// ==== 101044c6 UObjectProperty::CopyCompleteValue

/* public: virtual void __thiscall UObjectProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UObjectProperty::CopyCompleteValue
          (UObjectProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  UObject *pUVar1;
  UObject *pUVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x44c6  871  ?CopyCompleteValue@UObjectProperty@@UBEXPAX0PAVUObject@@@Z */
  pUVar1 = param_3;
  iVar3 = 0;
  if ((((GIsEditor == 0) || (GIsUCC == 0)) && ((*(uint *)(this + 0x48) & 0x400000) != 0)) &&
     (param_3 != (UObject *)0x0)) {
    param_3 = (UObject *)0x0;
    if (0 < *(int *)(this + 0x40)) {
      iVar3 = (int)param_1 - (int)param_2;
      do {
        iVar4 = *(int *)param_2;
        pUVar2 = (UObject *)0x0;
        if (iVar4 != 0) {
          pUVar2 = UObject::StaticConstructObject
                             (*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(pUVar1 + 0x18),0,0,iVar4
                              ,GError,pUVar1);
        }
        *(UObject **)(iVar3 + (int)param_2) = pUVar2;
        param_3 = param_3 + 1;
        param_2 = (void *)((int)param_2 + 4);
      } while ((int)param_3 < *(int *)(this + 0x40));
      return;
    }
  }
  else if (0 < *(int *)(this + 0x40)) {
    iVar4 = (int)param_2 - (int)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(iVar4 + (int)param_1);
      iVar3 = iVar3 + 1;
      param_1 = (void *)((int)param_1 + 4);
    } while (iVar3 < *(int *)(this + 0x40));
  }
  return;
}


// ==== 101044cb thunk_FUN_1016c090 thunk -> 1016c090

// ==== 101044d0 thunk_FUN_1014b850 thunk -> 1014b850

// ==== 101044d5 FName::FName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall FName::FName(unsigned short const *,enum EFindName) */

FName * __thiscall FName::FName(FName *this,ushort *param_1,EFindName param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  FNameEntry *pFVar6;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_00;
  FScopeCriticalSection aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x44d5  83  ??0FName@@QAE@PBGW4EFindName@@@Z */
  puStack_c = &LAB_101bc5a8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  this_00 = (FOutputDevice *)this;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffd4;
  if (param_1 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Name",".\\UnName.cpp",0x5a);
    this_00 = extraout_ECX;
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  if (Initialized == 0) {
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    FScopeCriticalSection::FScopeCriticalSection(aFStack_18,NameCS);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    uVar3 = thunk_FUN_1014fa60();
    uVar3 = uVar3 & 0xfff;
    for (pFVar6 = (FNameEntry *)(&NameHash)[uVar3]; pFVar6 != (FNameEntry *)0x0;
        pFVar6 = *(FNameEntry **)(pFVar6 + 8)) {
      iVar4 = appStricmp(param_1,(ushort *)(pFVar6 + 0xc));
      if (iVar4 == 0) {
        *(FNameEntry **)this = *(FNameEntry **)pFVar6;
        goto LAB_1015722b;
      }
    }
    if (param_2 == 0) {
      *(undefined4 *)this = 0;
    }
    else {
      if (DAT_10327af0 == 0) {
        uVar5 = thunk_FUN_10156e30();
        *(undefined4 *)this = uVar5;
      }
      else {
        *(undefined4 *)this = *(undefined4 *)(_Available + -4 + DAT_10327af0 * 4);
        thunk_FUN_10113dd0(DAT_10327af0 + -1);
      }
      pFVar6 = AllocateNameEntry(param_1,*(ulong *)this,0,(FNameEntry *)(&NameHash)[uVar3]);
      (&NameHash)[uVar3] = (FNameEntry **)pFVar6;
      *(FNameEntry **)(_Names + *(int *)this * 4) = pFVar6;
      if (param_2 == 2) {
        puVar1 = (uint *)(*(int *)(_Names + *(int *)this * 4) + 4);
        *puVar1 = *puVar1 | 0x4000000;
      }
    }
LAB_1015722b:
    uStack_8 = uStack_8 & 0xffffff00;
    FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101044da thunk_FUN_10127e30 thunk -> 10127e30

// ==== 101044df thunk_FUN_1012b770 thunk -> 1012b770

// ==== 101044e4 thunk_FUN_1012cb60 thunk -> 1012cb60

// ==== 101044e9 UClass::HasNativesToExport

/* public: int __thiscall UClass::HasNativesToExport(class UObject *) */

int __thiscall UClass::HasNativesToExport(UClass *this,UObject *param_1)

{
  UClass *pUStack_8;
  int iStack_4;
  
                    /* 0x44e9  1426  ?HasNativesToExport@UClass@@QAEHPAVUObject@@@Z */
  if ((*(uint *)(this + 0x1c) & 0x4000000) != 0) {
    if ((*(uint *)(this + 0x1c) & 0x10) != 0) {
      return 1;
    }
    if ((*(int *)(this + 0x40) != 0) && (*(UObject **)(this + 0x18) == param_1)) {
      thunk_FUN_101191b0(this);
      while ((iStack_4 != 0 && (pUStack_8 == this))) {
        if ((*(uint *)(iStack_4 + 0x8c) & 0x400) != 0) {
          return 1;
        }
        iStack_4 = *(int *)(iStack_4 + 0x38);
        thunk_FUN_101142d0();
      }
    }
  }
  return 0;
}


// ==== 101044ee thunk_FUN_10113bf0 thunk -> 10113bf0

// ==== 101044f3 FQuat::FQuat

/* public: __thiscall FQuat::FQuat(void) */

FQuat * __thiscall FQuat::FQuat(FQuat *this)

{
                    /* 0x44f3  116  ??0FQuat@@QAE@XZ */
  return this;
}


// ==== 101044fd UTextBuffer::operator=

/* public: class UTextBuffer & __thiscall UTextBuffer::operator=(class UTextBuffer const &) */

UTextBuffer * __thiscall UTextBuffer::operator=(UTextBuffer *this,UTextBuffer *param_1)

{
  FArray *this_00;
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x44fd  545  ??4UTextBuffer@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this_00 = (FArray *)(this + 0x40);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (this_00 != (FArray *)(param_1 + 0x40)) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x48) = uVar1;
    *(undefined4 *)(this + 0x44) = uVar1;
    FArray::Realloc(this_00,2);
    if (*(int *)(this + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)this_00,_Src,*(int *)(this + 0x44) * 2);
    }
  }
  return this;
}


// ==== 10104502 UNameProperty::UNameProperty

/* public: __thiscall UNameProperty::UNameProperty(class UNameProperty const &) */

UNameProperty * __thiscall UNameProperty::UNameProperty(UNameProperty *this,UNameProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4502  244  ??0UNameProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7cb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10104507 FExec::FExec

/* public: __thiscall FExec::FExec(class FExec const &) */

void __thiscall FExec::FExec(FExec *this,FExec *param_1)

{
                    /* 0x4507  47  ??0FExec@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1010450c UObject::execGreaterEqual_FloatFloat

/* WARNING: Removing unreachable block (ram,0x1013d65d) */
/* public: void __thiscall UObject::execGreaterEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execGreaterEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x450c  2238  ?execGreaterEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10104511 UObject::GotoState

/* public: virtual enum EGotoState __thiscall UObject::GotoState(class FName) */

EGotoState __thiscall UObject::GotoState(UObject *this,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  UState *pUVar6;
  UState *pUStack_2c;
  int iStack_20;
  int iStack_1c;
  UState *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4511  1419  ?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
  puStack_c = &LAB_101bb2e0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  pUVar6 = (UState *)0x0;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    *(undefined4 *)(*(int *)(this + 0xc) + 0x28) = 0;
    pUStack_18 = (UState *)0x0;
    if (*(int *)(*(int *)(this + 0xc) + 0x1c) == *(int *)(this + 0x24)) {
      iStack_20 = 0;
      piVar3 = &iStack_20;
    }
    else {
      iStack_1c = *(int *)(*(int *)(*(int *)(this + 0xc) + 0x1c) + 0x20);
      piVar3 = &iStack_1c;
    }
    iStack_1c = *piVar3;
    if (param_2 == 0x2b2) {
      thunk_FUN_10146380();
      while (pUStack_2c != (UState *)0x0) {
        if (pUVar6 != (UState *)0x0) goto LAB_10146509;
        if (((byte)pUStack_2c[0x9c] & 2) != 0) {
          pUStack_18 = pUStack_2c;
          pUVar6 = pUStack_2c;
        }
        pUStack_2c = *(UState **)(pUStack_2c + 0x38);
        thunk_FUN_101428f0();
      }
    }
    else {
      puStack_14 = &stack0xffffffc4;
      pUVar6 = FindState(this);
      pUStack_18 = pUVar6;
    }
    if (pUVar6 == (UState *)0x0) {
      param_2 = 0;
      pUVar6 = *(UState **)(this + 0x24);
      pUStack_18 = pUVar6;
    }
    else {
LAB_10146509:
      if (param_2 == 0x2b2) {
        param_2 = *(int *)(pUVar6 + 0x20);
      }
    }
    if ((((iStack_1c != 0) && (param_2 != iStack_1c)) && (iVar4 = IsProbing(this), iVar4 != 0)) &&
       ((*(uint *)(this + 0x1c) & 0x2000) == 0)) {
      uVar5 = *(uint *)(this + 0x1c) & 0xffffefff;
      *(uint *)(this + 0x1c) = uVar5;
      *(uint *)(this + 0x1c) = uVar5 | 0x2000;
      eventEndState(this);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xffffdfff;
      if ((*(uint *)(this + 0x1c) & 0x1000) != 0) {
        ExceptionList = pvStack_10;
        return 2;
      }
    }
    *(UState **)(*(int *)(this + 0xc) + 4) = pUVar6;
    *(UState **)(*(int *)(this + 0xc) + 0x1c) = pUVar6;
    *(undefined4 *)(*(int *)(this + 0xc) + 0xc) = 0;
    uVar5 = *(uint *)(*(int *)(this + 0x24) + 0x90);
    uVar1 = *(uint *)(pUVar6 + 0x90);
    uVar2 = *(uint *)(pUVar6 + 0x98);
    iVar4 = *(int *)(this + 0xc);
    *(uint *)(iVar4 + 0x20) =
         (*(uint *)(*(int *)(this + 0x24) + 0x8c) | *(uint *)(pUVar6 + 0x8c)) &
         *(uint *)(pUVar6 + 0x94);
    *(uint *)(iVar4 + 0x24) = (uVar5 | uVar1) & uVar2;
    if (param_2 != 0) {
      if ((param_2 != iStack_1c) && (iVar4 = IsProbing(this), iVar4 != 0)) {
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xffffefff;
        eventBeginState(this);
        if ((*(uint *)(this + 0x1c) & 0x1000) != 0) {
          ExceptionList = pvStack_10;
          return 2;
        }
      }
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x1000;
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10104516 FFrame::ReadInt

/* public: int __thiscall FFrame::ReadInt(void) */

int __thiscall FFrame::ReadInt(FFrame *this)

{
  int iVar1;
  
                    /* 0x4516  1750  ?ReadInt@FFrame@@QAEHXZ */
  iVar1 = **(int **)(this + 0xc);
  *(int **)(this + 0xc) = *(int **)(this + 0xc) + 1;
  return iVar1;
}


// ==== 1010451b thunk_FUN_10165c60 thunk -> 10165c60

// ==== 10104520 thunk_FUN_101654b0 thunk -> 101654b0

// ==== 10104525 UObject::EndLoad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::EndLoad(void) */

void __cdecl UObject::EndLoad(void)

{
  void *_Src;
  int iVar1;
  FOutputDevice *this;
  int iVar2;
  int iStack_44;
  int iStack_40;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4525  950  ?EndLoad@UObject@@SAXXZ */
  puStack_c = &LAB_101bd308;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (GObjBeginLoadCount < 1) {
    ExceptionList = &pvStack_10;
    appFailAssert("GObjBeginLoadCount>0",".\\UnObj.cpp",0xc17);
  }
  GObjBeginLoadCount = GObjBeginLoadCount + -1;
  if (GObjBeginLoadCount == 0) {
    uStack_8._0_1_ = 1;
    thunk_FUN_101281e0();
    while (uStack_8._0_1_ = 2, DAT_10330880 != 0) {
      do {
        iVar2 = DAT_10330880;
        _Src = _GObjLoaded;
        iVar1 = thunk_FUN_10128230(DAT_10330880);
        _memcpy((void *)(iStack_44 + iVar1 * 4),_Src,iVar2 * 4);
        thunk_FUN_10128110(0);
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        FOutputDevice::Logf(this,(EName)GNull,(ushort *)0x308);
        for (iVar2 = 0; iVar2 < iStack_40; iVar2 = iVar2 + 1) {
          iVar1 = *(int *)(iStack_44 + iVar2 * 4);
          if ((*(uint *)(iVar1 + 0x1c) & 0x200) != 0) {
            if (*(int *)(iVar1 + 0x10) == 0) {
              appFailAssert("Obj->GetLinker()",".\\UnObj.cpp",0xc41);
            }
            (**(code **)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc0) + 0x10))(iVar1);
          }
        }
        uStack_8._0_1_ = 2;
        uStack_8._1_3_ = 0;
        if (LoadingProgress != (_func_void_float *)0x0) {
          (*LoadingProgress)(0.0);
        }
      } while (DAT_10330880 != 0);
      uStack_8 = CONCAT31(uStack_8._1_3_,5);
      for (iVar2 = 0; iVar2 < iStack_40; iVar2 = iVar2 + 1) {
        ConditionalPostLoad(*(UObject **)(iStack_44 + iVar2 * 4));
      }
      uStack_8._1_3_ = 0;
    }
    DissociateImports();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    thunk_FUN_10118970();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010452a UClass::Link

/* public: virtual void __thiscall UClass::Link(class FArchive &,int) */

void __thiscall UClass::Link(UClass *this,FArchive *param_1,int param_2)

{
  int iVar1;
  UClass *pUVar2;
  int iVar3;
  int *piVar4;
  FArchive *pFStack_2c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x452a  1554  ?Link@UClass@@UAEXAAVFArchive@@H@Z */
  puStack_c = &LAB_101ba739;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UState::Link((UState *)this,param_1,param_2);
  if (GIsEditor == 0) {
    thunk_FUN_1011a1c0(0);
    iVar3 = *(int *)(this + 0x34);
    if (iVar3 == 0) {
      iVar1 = thunk_FUN_10130a50();
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
    }
    else {
      iVar1 = iVar3 + 0x4c4;
    }
    thunk_FUN_10120c40(iVar1);
    uStack_8 = 0;
    if (iVar3 == 0) {
      thunk_FUN_10120b60();
    }
    thunk_FUN_10134530(this);
    while ((pFStack_2c != (FArchive *)0x0 &&
           (pUVar2 = (UClass *)(**(code **)(*(int *)pFStack_2c + 0x74))(), pUVar2 == this))) {
      iVar3 = thunk_FUN_10132a00(pFStack_2c);
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_10132ac0(pFStack_2c);
        if (((iVar3 == 0) || ((*(byte *)(iVar3 + 0x8c) & 0x40) == 0)) ||
           (*(int *)(iVar3 + 0x34) != 0)) goto LAB_101366b7;
        param_1 = pFStack_2c;
        thunk_FUN_10132590(&param_1);
        pFStack_2c = *(FArchive **)(pFStack_2c + 0x38);
        thunk_FUN_10132890();
      }
      else {
        if ((*(byte *)(iVar3 + 0x48) & 0x20) != 0) {
          param_2 = (int)pFStack_2c;
          thunk_FUN_10132590(&param_2);
          if (*(UClass **)(iVar3 + 0x18) == this) {
            *(short *)(iVar3 + 0x52) = (short)*(undefined4 *)(this + 0x4c8);
            for (iVar1 = 0; iVar1 < *(int *)(iVar3 + 0x40); iVar1 = iVar1 + 1) {
              piVar4 = (int *)thunk_FUN_10114bc0(8,this + 0x4c4);
              if (piVar4 != (int *)0x0) {
                *piVar4 = iVar3;
                piVar4[1] = iVar1;
              }
            }
          }
        }
LAB_101366b7:
        pFStack_2c = *(FArchive **)(pFStack_2c + 0x38);
        thunk_FUN_10132890();
      }
    }
    thunk_FUN_10130af0();
    thunk_FUN_10132af0(*(undefined4 *)(this + 0x4d0),*(undefined4 *)(this + 0x4d4));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010452f UFixedArrayProperty::UFixedArrayProperty

/* public: __thiscall UFixedArrayProperty::UFixedArrayProperty(void) */

UFixedArrayProperty * __thiscall UFixedArrayProperty::UFixedArrayProperty(UFixedArrayProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x452f  221  ??0UFixedArrayProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10104534 ULinkerLoad::Preload

/* public: virtual void __thiscall ULinkerLoad::Preload(class UObject *) */

void __thiscall ULinkerLoad::Preload(ULinkerLoad *this,UObject *param_1)

{
  UObject *this_00;
  ULinkerLoad *pUVar1;
  int iVar2;
  int iVar3;
  FArchive *pFVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4534  1693  ?Preload@ULinkerLoad@@UAEXPAVUObject@@@Z */
  puStack_c = &LAB_101bb6d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  this_00 = (UObject *)(this + -0xc0);
  ExceptionList = &pvStack_10;
  iVar3 = UObject::IsValid(this_00);
  if (iVar3 == 0) {
    appFailAssert("IsValid()",".\\UnLinker.cpp",0x36c);
  }
  if (param_1 == (UObject *)0x0) {
    appFailAssert("Object",".\\UnLinker.cpp",0x36d);
  }
  pUVar1 = *(ULinkerLoad **)(param_1 + 0x10);
  if (pUVar1 == this + -0xc0) {
    if ((*(uint *)(param_1 + 0x1c) & 0x200) != 0) {
      iVar3 = UObject::IsA(param_1,&UStruct::PrivateStaticClass);
      if ((iVar3 != 0) && (*(int *)(param_1 + 0x34) != 0)) {
        (**(code **)(*(int *)this + 0x10))(*(int *)(param_1 + 0x34));
      }
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      iVar3 = *(int *)(this + -0x30) + *(int *)(param_1 + 0x14) * 0x24;
      if (*(UObject **)(iVar3 + 0x1c) != param_1) {
        appFailAssert("Export._Object==Object",".\\UnLinker.cpp",900);
      }
      pFVar4 = GetReader((ULinkerLoad *)this_00);
      uVar5 = (**(code **)(*(int *)pFVar4 + 0x28))();
      pFVar4 = GetReader((ULinkerLoad *)this_00);
      (**(code **)(*(int *)pFVar4 + 0x3c))(*(undefined4 *)(iVar3 + 0x18));
      pFVar4 = GetReader((ULinkerLoad *)this_00);
      (**(code **)(*(int *)pFVar4 + 0x50))(*(undefined4 *)(iVar3 + 0x14));
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffdff;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x8000;
      (**(code **)(*(int *)param_1 + 0x2c))(-(uint)(this != (ULinkerLoad *)0xc0) & (uint)this);
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff7fff;
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar6 = (**(code **)(*(int *)this + 0x28))();
      if (iVar6 - *(int *)(iVar3 + 0x18) != iVar2) {
        (**(code **)(*(int *)this + 0x28))(iVar2);
        UObject::GetFullName(param_1,(ushort *)0x0);
        LocalizeError((ushort *)L"SerialSize",(ushort *)L"Core",(ushort *)0x0);
        FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
      }
      pFVar4 = GetReader((ULinkerLoad *)this_00);
      (**(code **)(*(int *)pFVar4 + 0x3c))(uVar5);
    }
  }
  else if (pUVar1 != (ULinkerLoad *)0x0) {
    (**(code **)(*(int *)(pUVar1 + 0xc0) + 0x10))(param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010453e thunk_FUN_10162ca0 thunk -> 10162ca0

// ==== 10104543 ULinkerLoad::Check

/* public: int __thiscall ULinkerLoad::Check(class UClass *,class FName,unsigned long,int) */

int __thiscall ULinkerLoad::Check(ULinkerLoad *this,int param_1,undefined4 param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4543  832  ?Check@ULinkerLoad@@QAEHPAVUClass@@VFName@@KH@Z */
  puStack_c = &LAB_101bbbb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FindExportIndex(this,*(undefined4 *)(param_1 + 0x20),
                          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20),param_3,0xffffffff);
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 1010454d UBoolProperty::UBoolProperty

/* public: __thiscall UBoolProperty::UBoolProperty(class UBoolProperty const &) */

UBoolProperty * __thiscall UBoolProperty::UBoolProperty(UBoolProperty *this,UBoolProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x454d  185  ??0UBoolProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7ab8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10104552 UObject::execUnicodeStringConst

/* public: void __thiscall UObject::execUnicodeStringConst(struct FFrame &,void * const) */

void __thiscall UObject::execUnicodeStringConst(UObject *this,FFrame *param_1,void *param_2)

{
  short sVar1;
  ushort *_Src;
  int iVar2;
  
                    /* 0x4552  2401  ?execUnicodeStringConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  _Src = appFromUnicode(*(ushort **)(param_1 + 0xc));
  if (*(ushort **)param_2 != _Src) {
    if (*_Src == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(_Src);
      iVar2 = iVar2 + 1;
    }
    *(int *)((int)param_2 + 8) = iVar2;
    *(int *)((int)param_2 + 4) = iVar2;
    FArray::Realloc(param_2,2);
    if (*(int *)((int)param_2 + 4) != 0) {
      _memcpy(*(void **)param_2,_Src,*(int *)((int)param_2 + 4) * 2);
    }
  }
  sVar1 = **(short **)(param_1 + 0xc);
  while (sVar1 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    sVar1 = **(short **)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  return;
}


// ==== 1010455c UFactory::operator_new

/* public: static void * __cdecl UFactory::operator new(unsigned int,enum EInternal *) */

void * __cdecl UFactory::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x455c  374  ??2UFactory@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10104561 FThrowOut::Serialize

/* public: virtual void __thiscall FThrowOut::Serialize(unsigned short const *,enum EName) */

void __thiscall FThrowOut::Serialize(FThrowOut *this,ushort *param_1,EName param_2)

{
                    /* 0x4561  1800  ?Serialize@FThrowOut@@UAEXPBGW4EName@@@Z */
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_101f8198);
}


// ==== 10104566 thunk_FUN_10162df0 thunk -> 10162df0

// ==== 1010456b appSRand

/* float __cdecl appSRand(void) */

float __cdecl appSRand(void)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  double dVar4;
  
                    /* 0x456b  2091  ?appSRand@@YAMXZ */
  DAT_1027bd9c = DAT_1027bd9c * 0xbb38435 + 0x3619636b;
  fVar2 = (float)((DAT_102387e0 ^ DAT_1027bd9c) & 0x7fffff ^ DAT_102387e0);
  dVar4 = (double)fVar2;
  fVar3 = (float10)FUN_1017bb20(dVar4);
  iVar1 = FUN_1017b700(dVar4,(float)fVar3);
  return fVar2 - (float)iVar1;
}


// ==== 10104570 UPackageMap::StaticClass

/* public: static class UClass * __cdecl UPackageMap::StaticClass(void) */

UClass * __cdecl UPackageMap::StaticClass(void)

{
                    /* 0x4570  1913  ?StaticClass@UPackageMap@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10104575 FBufferReader::AtEnd

/* public: virtual int __thiscall FBufferReader::AtEnd(void) */

int __thiscall FBufferReader::AtEnd(FBufferReader *this)

{
                    /* 0x4575  806  ?AtEnd@FBufferReader@@UAEHXZ */
  return (uint)(*(int *)(*(int *)(this + 0x38) + 4) <= *(int *)(this + 0x3c));
}


// ==== 1010457f UObject::execInvert

/* public: void __thiscall UObject::execInvert(struct FFrame &,void * const) */

void __thiscall UObject::execInvert(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uchar auStack_34 [8];
  undefined1 auStack_2c [8];
  uchar auStack_24 [4];
  uchar auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [24];
  
                    /* 0x457f  2276  ?execInvert@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_18);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar3 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar3 = auStack_20;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_2c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar2 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar2 = auStack_34;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_1c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar4 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar4 = auStack_24;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  FCoords::Inverse((FCoords *)&stack0xffffff64);
  *(undefined4 *)puVar3 = uStack_64;
  *(undefined4 *)(puVar3 + 4) = uStack_60;
  *(undefined4 *)(puVar3 + 8) = uStack_5c;
  *(undefined4 *)puVar2 = uStack_58;
  *(undefined4 *)(puVar2 + 4) = uStack_54;
  *(undefined4 *)(puVar2 + 8) = uStack_50;
  *(undefined4 *)puVar4 = uStack_4c;
  *(undefined4 *)(puVar4 + 4) = uStack_48;
  *(undefined4 *)(puVar4 + 8) = uStack_44;
  return;
}


// ==== 10104584 UPackageMap::Copy

/* public: void __thiscall UPackageMap::Copy(class UPackageMap *) */

void __thiscall UPackageMap::Copy(UPackageMap *this,UPackageMap *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4584  864  ?Copy@UPackageMap@@QAEXPAV1@@Z */
  puStack_c = &LAB_101ba9c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10124bd0(param_1 + 0x34);
  thunk_FUN_10123e50(param_1 + 0x40);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  thunk_FUN_10123ff0(param_1 + 0x54);
  thunk_FUN_101182b0(param_1 + 0x68);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104589 thunk_FUN_10129d00 thunk -> 10129d00

// ==== 1010458e FRange::IsNearlyZero

/* public: int __thiscall FRange::IsNearlyZero(void)const  */

int __thiscall FRange::IsNearlyZero(FRange *this)

{
  float fVar1;
  
                    /* 0x458e  1518  ?IsNearlyZero@FRange@@QBEHXZ */
  fVar1 = *(float *)this;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.0001) {
    fVar1 = *(float *)(this + 4);
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      return 1;
    }
  }
  return 0;
}


// ==== 10104593 FPlane::operator+=

/* public: class FPlane __thiscall FPlane::operator+=(class FPlane const &) */

void __thiscall FPlane::operator+=(FPlane *this,FPlane *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *in_stack_00000008;
  
                    /* 0x4593  678  ??YFPlane@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 + *(float *)this;
  *(float *)(this + 4) = in_stack_00000008[1] + *(float *)(this + 4);
  *(float *)(this + 8) = in_stack_00000008[2] + *(float *)(this + 8);
  fVar1 = in_stack_00000008[3];
  fVar2 = *(float *)(this + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(float *)(this + 0xc) = fVar1 + fVar2;
  uVar3 = *(undefined4 *)(this + 8);
  *(float *)(param_1 + 0xc) = fVar1 + fVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}


// ==== 10104598 thunk_FUN_1012b800 thunk -> 1012b800

// ==== 1010459d FVertexHit::FVertexHit

/* public: __thiscall FVertexHit::FVertexHit(void) */

void __thiscall FVertexHit::FVertexHit(FVertexHit *this)

{
                    /* 0x459d  172  ??0FVertexHit@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 101045a7 L2ThreadUtil::IsRunning

/* public: int __thiscall L2ThreadUtil::IsRunning(enum L2ThreadFunction) */

int __thiscall L2ThreadUtil::IsRunning(L2ThreadUtil *this,L2ThreadFunction param_1)

{
  int iVar1;
  
                    /* 0x45a7  1527  ?IsRunning@L2ThreadUtil@@QAEHW4L2ThreadFunction@@@Z */
  if (*(int *)(this + param_1 * 4 + 4) != 0) {
    iVar1 = (**(code **)(**(int **)(this + param_1 * 4 + 4) + 0x2c))();
    return iVar1;
  }
  return 0;
}


// ==== 101045ac EdClearLoadErrors

/* void __cdecl EdClearLoadErrors(void) */

void __cdecl EdClearLoadErrors(void)

{
                    /* 0x45ac  941  ?EdClearLoadErrors@@YAXXZ */
  thunk_FUN_10178e20(0);
  return;
}


// ==== 101045b1 UObject::execLet

/* public: void __thiscall UObject::execLet(struct FFrame &,void * const) */

void __thiscall UObject::execLet(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  uchar *this_00;
  FOutputDevice *this_01;
  int iVar3;
  int unaff_EDI;
  undefined4 *puVar4;
  
                    /* 0x45b1  2293  ?execLet@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  if (GPropAddr == (uchar *)0x0) {
    FOutputDevice::Logf(this_01,(EName)param_1,(ushort *)0x301);
    GPropAddr = (uchar *)&DAT_10284690;
    puVar4 = &DAT_10284690;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  else if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  this_00 = GPropAddr;
  pUVar2 = GProperty;
  if ((GRuntimeUCFlags & 1) == 0) {
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,this_00);
  }
  else {
    GRuntimeUCFlags = GRuntimeUCFlags & 0xfffffffe;
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,&stack0xfffffffc);
    iVar3 = *(int *)(this_00 + 4);
    if (iVar3 < unaff_EDI) {
      FArray::AddZeroed((FArray *)this_00,*(int *)(*(int *)(pUVar2 + 0x78) + 0x44),unaff_EDI - iVar3
                       );
      return;
    }
    if (unaff_EDI < iVar3) {
      while (iVar3 = iVar3 + -1, unaff_EDI <= iVar3) {
        (**(code **)(**(int **)(pUVar2 + 0x78) + 0xac))
                  ((*(int **)(pUVar2 + 0x78))[0x11] * iVar3 + *(int *)this_00);
      }
      FArray::Remove((FArray *)this_00,unaff_EDI,*(int *)(this_00 + 4) - unaff_EDI,
                     *(int *)(*(int *)(pUVar2 + 0x78) + 0x44));
      return;
    }
  }
  return;
}


// ==== 101045b6 FRange::operator/=

/* public: class FRange __thiscall FRange::operator/=(float) */

void __thiscall FRange::operator/=(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x45b6  700  ??_0FRange@@QAE?AV0@M@Z */
  *(float *)this = (1.0 / in_stack_00000008) * *(float *)this;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = (1.0 / in_stack_00000008) * *(float *)(this + 4);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 101045bb UStructProperty::StaticClass

/* public: static class UClass * __cdecl UStructProperty::StaticClass(void) */

UClass * __cdecl UStructProperty::StaticClass(void)

{
                    /* 0x45bb  1919  ?StaticClass@UStructProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101045c0 UClass::operator_new

/* public: static void * __cdecl UClass::operator new(unsigned int,enum EInternal *) */

void * __cdecl UClass::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x45c0  360  ??2UClass@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 101045c5 UObject::execMultiply_IntInt

/* public: void __thiscall UObject::execMultiply_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x45c5  2316  ?execMultiply_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *unaff_ESI = (int)&uStack_4 * (int)&uStack_4;
  return;
}


// ==== 101045ca thunk_FUN_1012b8a0 thunk -> 1012b8a0

// ==== 101045cf FVector::PivotTransform

/* public: class FVector __thiscall FVector::PivotTransform(class FCoords const &)const  */

void __thiscall FVector::PivotTransform(FVector *this,FCoords *param_1)

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
  float *in_stack_00000008;
  
                    /* 0x45cf  1679  ?PivotTransform@FVector@@QBE?AV1@ABVFCoords@@@Z */
  fVar1 = in_stack_00000008[7];
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)this;
  fVar4 = in_stack_00000008[6];
  fVar5 = in_stack_00000008[8];
  fVar6 = *(float *)(this + 8);
  fVar7 = in_stack_00000008[10];
  fVar8 = *(float *)(this + 4);
  fVar9 = in_stack_00000008[9];
  fVar10 = *(float *)this;
  fVar11 = in_stack_00000008[0xb];
  fVar12 = *(float *)(this + 8);
  *(float *)param_1 =
       *in_stack_00000008 +
       in_stack_00000008[5] * *(float *)(this + 8) +
       in_stack_00000008[3] * *(float *)this + in_stack_00000008[4] * *(float *)(this + 4);
  *(float *)(param_1 + 4) = in_stack_00000008[1] + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  *(float *)(param_1 + 8) = in_stack_00000008[2] + fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}


// ==== 101045d4 UObject::execFloatToBool

/* public: void __thiscall UObject::execFloatToBool(struct FFrame &,void * const) */

void __thiscall UObject::execFloatToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x45d4  2223  ?execFloatToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if ((float)param_1 != 0.0) {
    *unaff_retaddr = 1;
    return;
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 101045d9 USubsystem::StaticClass

/* public: static class UClass * __cdecl USubsystem::StaticClass(void) */

UClass * __cdecl USubsystem::StaticClass(void)

{
                    /* 0x45d9  1920  ?StaticClass@USubsystem@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101045de thunk_FUN_10109370 thunk -> 10109370

// ==== 101045e3 thunk_FUN_1015cf20 thunk -> 1015cf20

// ==== 101045e8 UObject::execFalse

/* public: void __thiscall UObject::execFalse(struct FFrame &,void * const) */

void __thiscall UObject::execFalse(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x45e8  2219  ?execFalse@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined4 *)param_2 = 0;
  return;
}


// ==== 101045ed FArray::FArray

/* protected: __thiscall FArray::FArray(int,int) */

FArray * __thiscall FArray::FArray(FArray *this,int param_1,int param_2)

{
                    /* 0x45ed  11  ??0FArray@@IAE@HH@Z */
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_1;
  *(undefined4 *)this = 0;
  Realloc(this,param_2);
  return this;
}


// ==== 101045fc thunk_FUN_10130dc0 thunk -> 10130dc0

// ==== 10104601 UObject::execMultiply_VectorVector

/* public: void __thiscall UObject::execMultiply_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [3];
  float *pfStack_8;
  
                    /* 0x4601  2319  ?execMultiply_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *pfStack_8 = fStack_1c * unaff_ESI;
  pfStack_8[1] = fStack_24 * fStack_18;
  pfStack_8[2] = fStack_20 * afStack_14[0];
  return;
}


// ==== 10104606 UFloatProperty::~UFloatProperty

/* public: virtual __thiscall UFloatProperty::~UFloatProperty(void) */

void __thiscall UFloatProperty::~UFloatProperty(UFloatProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4606  330  ??1UFloatProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7ad8;
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


// ==== 10104615 L2ThreadUtil::L2ThreadUtil

/* public: __thiscall L2ThreadUtil::L2ThreadUtil(class L2ThreadUtil const &) */

void __thiscall L2ThreadUtil::L2ThreadUtil(L2ThreadUtil *this,L2ThreadUtil *param_1)

{
  int iVar1;
  L2ThreadUtil *pLVar2;
  L2ThreadUtil *pLVar3;
  
                    /* 0x4615  180  ??0L2ThreadUtil@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  iVar1 = 8;
  pLVar2 = param_1;
  pLVar3 = this;
  while( true ) {
    pLVar3 = pLVar3 + 4;
    pLVar2 = pLVar2 + 4;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
  }
  pLVar2 = param_1 + 0x24;
  pLVar3 = this + 0x24;
  for (iVar1 = 0xa8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar3 = *(undefined4 *)pLVar2;
    pLVar2 = pLVar2 + 4;
    pLVar3 = pLVar3 + 4;
  }
  *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(this + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  return;
}


// ==== 1010461a UExporter::Serialize

/* public: virtual void __thiscall UExporter::Serialize(class FArchive &) */

void __thiscall UExporter::Serialize(UExporter *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x461a  1809  ?Serialize@UExporter@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101b99c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  uVar1 = thunk_FUN_1012a9f0(param_1,this + 0x34,this + 0x38);
  thunk_FUN_1012b8f0(uVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104624 FMemStackFrame::GetByteCount

/* public: int __thiscall FMemStackFrame::GetByteCount(void) */

int __thiscall FMemStackFrame::GetByteCount(FMemStackFrame *this)

{
  int iVar1;
  
                    /* 0x4624  1284  ?GetByteCount@FMemStackFrame@@QAEHXZ */
  iVar1 = FUN_1014f170();
  return iVar1;
}


// ==== 1010462e FStateFrame::FStateFrame

/* public: __thiscall FStateFrame::FStateFrame(struct FStateFrame const &) */

void __thiscall FStateFrame::FStateFrame(FStateFrame *this,FStateFrame *param_1)

{
                    /* 0x462e  139  ??0FStateFrame@@QAE@ABU0@@Z */
  *(undefined ***)this = FFrame::vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10104633 appTrimSpaces

/* void __cdecl appTrimSpaces(char *) */

void __cdecl appTrimSpaces(char *param_1)

{
  int iVar1;
  
                    /* 0x4633  2128  ?appTrimSpaces@@YAXPAD@Z */
  for (iVar1 = 0; (param_1[iVar1] != '\0' && (iVar1 < 0x400)); iVar1 = iVar1 + 1) {
  }
  if (iVar1 < 1) goto LAB_101528c0;
  while( true ) {
    iVar1 = iVar1 + -1;
LAB_101528c0:
    if ((param_1[iVar1] != ' ') || (iVar1 < 1)) break;
    param_1[iVar1] = '\0';
  }
  return;
}


// ==== 10104638 FCoords::operator/=

/* public: class FCoords & __thiscall FCoords::operator/=(class FVector const &) */

FCoords * __thiscall FCoords::operator/=(FCoords *this,FVector *param_1)

{
                    /* 0x4638  697  ??_0FCoords@@QAEAAV0@ABVFVector@@@Z */
  *(float *)this = *(float *)param_1 + *(float *)this;
  *(float *)(this + 4) = *(float *)(param_1 + 4) + *(float *)(this + 4);
  *(float *)(this + 8) = *(float *)(param_1 + 8) + *(float *)(this + 8);
  return this;
}


// ==== 1010463d FScale::FScale

/* public: __thiscall FScale::FScale(void) */

FScale * __thiscall FScale::FScale(FScale *this)

{
                    /* 0x463d  130  ??0FScale@@QAE@XZ */
  return this;
}


// ==== 10104642 thunk_FUN_10128920 thunk -> 10128920

// ==== 10104647 appFloor

/* int __cdecl appFloor(float) */

int __cdecl appFloor(float param_1)

{
  int iVar1;
  
                    /* 0x4647  2043  ?appFloor@@YAHM@Z */
  FUN_1017bb20((double)param_1);
  iVar1 = FUN_1017b700();
  return iVar1;
}


// ==== 1010464c thunk_FUN_101244a0 thunk -> 101244a0

// ==== 10104656 UObject::execNotEqual_StringString

/* public: void __thiscall UObject::execNotEqual_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_StringString(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x4656  2334  ?execNotEqual_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (uint *)&LAB_101baf00;
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
  *puStack_8 = (uint)(iVar2 != 0);
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


// ==== 10104660 thunk_FUN_101286c0 thunk -> 101286c0

// ==== 10104665 FInterpCurve::FInterpCurve

/* public: __thiscall FInterpCurve::FInterpCurve(class FInterpCurve const &) */

FInterpCurve * __thiscall FInterpCurve::FInterpCurve(FInterpCurve *this,FInterpCurve *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4665  63  ??0FInterpCurve@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10119270(param_1);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010466a UFactory::FactoryCreateBinary

/* public: virtual class UObject * __thiscall UFactory::FactoryCreateBinary(class UClass *,class
   UObject *,class FName,unsigned long,class UObject *,unsigned short const *,unsigned char const *
   &,unsigned char const *,class FFeedbackContext *) */

UObject * __thiscall UFactory::FactoryCreateBinary(void)

{
                    /* 0x466a  995
                       ?FactoryCreateBinary@UFactory@@UAEPAVUObject@@PAVUClass@@PAV2@VFName@@K1PBGAAPBEPBEPAVFFeedbackContext@@@Z
                        */
  return (UObject *)0x0;
}


// ==== 1010466f UObject::execHighNative12

/* public: void __thiscall UObject::execHighNative12(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative12(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x466f  2250  ?execHighNative12@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282770 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10104674 thunk_FUN_10137a10 thunk -> 10137a10

// ==== 10104679 appToUnicode

/* unsigned short const * __cdecl appToUnicode(unsigned short const *) */

ushort * __cdecl appToUnicode(ushort *param_1)

{
                    /* 0x4679  2127  ?appToUnicode@@YAPBGPBG@Z */
  return param_1;
}


// ==== 1010467e FArchive::ByteOrderSerialize

/* public: class FArchive & __thiscall FArchive::ByteOrderSerialize(void *,int) */

FArchive * __thiscall FArchive::ByteOrderSerialize(FArchive *this,void *param_1,int param_2)

{
                    /* 0x467e  826  ?ByteOrderSerialize@FArchive@@QAEAAV1@PAXH@Z */
  (**(code **)(*(int *)this + 4))(param_1,param_2);
  return this;
}


// ==== 10104683 thunk_FUN_101493a0 thunk -> 101493a0

// ==== 10104688 thunk_FUN_10159df0 thunk -> 10159df0

// ==== 1010468d UIntProperty::operator=

/* public: class UIntProperty & __thiscall UIntProperty::operator=(class UIntProperty const &) */

UIntProperty * __thiscall UIntProperty::operator=(UIntProperty *this,UIntProperty *param_1)

{
                    /* 0x468d  526  ??4UIntProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  return this;
}


// ==== 10104692 thunk_FUN_10165d00 thunk -> 10165d00

// ==== 10104697 UObject::execGreaterEqual_StringString

/* public: void __thiscall UObject::execGreaterEqual_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execGreaterEqual_StringString(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x4697  2240  ?execGreaterEqual_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (uint *)&LAB_101bae40;
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
  *puStack_8 = (uint)(-1 < iVar2);
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


// ==== 1010469c UObject::GetIndex

/* public: unsigned long __thiscall UObject::GetIndex(void)const  */

ulong __thiscall UObject::GetIndex(UObject *this)

{
                    /* 0x469c  1335  ?GetIndex@UObject@@QBEKXZ */
  return *(ulong *)(this + 4);
}


// ==== 101046a1 FFrame::Serialize

/* public: virtual void __thiscall FFrame::Serialize(unsigned short const *,enum EName) */

void __thiscall FFrame::Serialize(FFrame *this,ushort *param_1,EName param_2)

{
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x46a1  1797  ?Serialize@FFrame@@UAEXPBGW4EName@@@Z */
  puStack_c = &LAB_101baa30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((param_2 == 0x2f9) || (GIsStrict != 0)) {
    ExceptionList = &pvStack_10;
    UObject::GetFullName(*(UObject **)(this + 4),(ushort *)0x0);
    UObject::GetFullName(*(UObject **)(this + 8),(ushort *)0x0);
    FOutputDevice::Logf(this_01,(ushort *)GError);
  }
  else if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    UObject::GetFullName(*(UObject **)(this + 4),(ushort *)0x0);
    UObject::GetFullName(*(UObject **)(this + 8),(ushort *)0x0);
    FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x301);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101046ab thunk_FUN_10170570 thunk -> 10170570

// ==== 101046b0 FPlane::FPlane

/* public: __thiscall FPlane::FPlane(class FPlane const &) */

void __thiscall FPlane::FPlane(FPlane *this,FPlane *param_1)

{
                    /* 0x46b0  104  ??0FPlane@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 101046b5 USystem::InternalConstructor

/* public: static void __cdecl USystem::InternalConstructor(void *) */

void __cdecl USystem::InternalConstructor(void *param_1)

{
                    /* 0x46b5  1502  ?InternalConstructor@USystem@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    USystem(param_1);
    return;
  }
  return;
}


// ==== 101046ba UObject::execGreaterGreater_IntInt

/* public: void __thiscall UObject::execGreaterGreater_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execGreaterGreater_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x46ba  2242  ?execGreaterGreater_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *unaff_ESI = (int)&uStack_4 >> ((byte)&uStack_4 & 0x1f);
  return;
}


// ==== 101046bf thunk_FUN_10163510 thunk -> 10163510

// ==== 101046c4 UObject::execSubtract_PreVector

/* public: void __thiscall UObject::execSubtract_PreVector(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_PreVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
                    /* 0x46c4  2394  ?execSubtract_PreVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -fStack_14;
  unaff_retaddr[1] = -fStack_10;
  unaff_retaddr[2] = -afStack_c[0];
  return;
}


// ==== 101046c9 UObject::execInstanceVariable

/* public: void __thiscall UObject::execInstanceVariable(struct FFrame &,void * const) */

void __thiscall UObject::execInstanceVariable(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x46c9  2264  ?execInstanceVariable@UObject@@QAEXAAUFFrame@@QAX@Z */
  GProperty = (UProperty *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  GPropAddr = (uchar *)(this + *(int *)(GProperty + 0x54));
  GPropObject = this;
  if (param_2 != (void *)0x0) {
    (**(code **)(*(int *)GProperty + 0xa8))(param_2,GPropAddr,0);
  }
  return;
}


// ==== 101046ce UObject::execIntOne

/* public: void __thiscall UObject::execIntOne(struct FFrame &,void * const) */

void __thiscall UObject::execIntOne(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x46ce  2267  ?execIntOne@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined4 *)param_2 = 1;
  return;
}


// ==== 101046d8 UNameProperty::operator=

/* public: class UNameProperty & __thiscall UNameProperty::operator=(class UNameProperty const &) */

UNameProperty * __thiscall UNameProperty::operator=(UNameProperty *this,UNameProperty *param_1)

{
                    /* 0x46d8  531  ??4UNameProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  return this;
}


// ==== 101046dd UStruct::GetScriptTextCRC

/* public: unsigned long __thiscall UStruct::GetScriptTextCRC(void) */

ulong __thiscall UStruct::GetScriptTextCRC(UStruct *this)

{
  int iVar1;
  ulong uVar2;
  
                    /* 0x46dd  1394  ?GetScriptTextCRC@UStruct@@QAEKXZ */
  iVar1 = *(int *)(this + 0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x44) != 0) {
    uVar2 = appStrCrc(*(ushort **)(iVar1 + 0x40));
    return uVar2;
  }
  uVar2 = appStrCrc(&DAT_101cdd44);
  return uVar2;
}


// ==== 101046e7 UBoolProperty::Identical

/* public: virtual int __thiscall UBoolProperty::Identical(void const *,void const *)const  */

int __thiscall UBoolProperty::Identical(UBoolProperty *this,void *param_1,void *param_2)

{
                    /* 0x46e7  1430  ?Identical@UBoolProperty@@UBEHPBX0@Z */
  if (param_2 != (void *)0x0) {
    return (uint)(((*(uint *)param_1 ^ *(uint *)param_2) & *(uint *)(this + 0x78)) == 0);
  }
  return (uint)((*(uint *)param_1 & *(uint *)(this + 0x78)) == 0);
}


// ==== 101046ec UIntProperty::UIntProperty

/* public: __thiscall UIntProperty::UIntProperty(void) */

UIntProperty * __thiscall UIntProperty::UIntProperty(UIntProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x46ec  230  ??0UIntProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b79f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101046f1 FArchiveCountMem::~FArchiveCountMem

/* public: virtual __thiscall FArchiveCountMem::~FArchiveCountMem(void) */

void __thiscall FArchiveCountMem::~FArchiveCountMem(FArchiveCountMem *this)

{
                    /* 0x46f1  292  ??1FArchiveCountMem@@UAE@XZ */
  *(undefined ***)this = FArchive::vftable;
  return;
}


// ==== 101046fb FArchiveCountMem::CountBytes

/* public: virtual void __thiscall FArchiveCountMem::CountBytes(unsigned long,unsigned long) */

void __thiscall FArchiveCountMem::CountBytes(FArchiveCountMem *this,ulong param_1,ulong param_2)

{
                    /* 0x46fb  890  ?CountBytes@FArchiveCountMem@@UAEXKK@Z */
  *(ulong *)(this + 0x38) = *(int *)(this + 0x38) + param_1;
  *(ulong *)(this + 0x3c) = *(int *)(this + 0x3c) + param_2;
  return;
}


// ==== 10104700 FCoords::MirrorByPlane

/* public: class FCoords __thiscall FCoords::MirrorByPlane(class FPlane const &)const  */

void __thiscall FCoords::MirrorByPlane(FCoords *this,FPlane *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  FVector aFStack_30 [8];
  FVector aFStack_28 [8];
  FVector aFStack_20 [8];
  FPlane aFStack_18 [12];
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4700  1619  ?MirrorByPlane@FCoords@@QBE?AV1@ABVFPlane@@@Z */
  puVar3 = (undefined4 *)FVector::MirrorByVector((FVector *)(this + 0x24),aFStack_30);
  puVar4 = (undefined4 *)FVector::MirrorByVector((FVector *)(this + 0x18),aFStack_28);
  uStack_4 = FVector::MirrorByVector((FVector *)(this + 0xc),aFStack_20);
  puVar5 = (undefined4 *)FVector::MirrorByPlane((FVector *)this,aFStack_18);
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


// ==== 10104705 FVertexHit::operator!=

/* public: int __thiscall FVertexHit::operator!=(class FVertexHit const &)const  */

int __thiscall FVertexHit::operator!=(FVertexHit *this,FVertexHit *param_1)

{
                    /* 0x4705  593  ??9FVertexHit@@QBEHABV0@@Z */
  if (((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(this + 8) == *(int *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}


// ==== 1010470f thunk_FUN_101482e0 thunk -> 101482e0

// ==== 10104714 FCoords::operator/=

/* public: class FCoords & __thiscall FCoords::operator/=(class FRotator const &) */

FCoords * __thiscall FCoords::operator/=(FCoords *this,FRotator *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
                    /* 0x4714  695  ??_0FCoords@@QAEAAV0@ABVFRotator@@@Z */
  uVar2 = *(int *)(param_1 + 8) >> 2 & 0x3fff;
  fStack_8 = -*(float *)(&DAT_1023ffd4 + uVar2 * 4);
  uVar1 = *(int *)(param_1 + 8) + 0x4000 >> 2 & 0x3fff;
  uStack_4 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_10 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_2c = 0;
  fStack_1c = 0.0;
  fStack_18 = -0.0;
  fStack_20 = -0.0;
  uStack_c = 0;
  operator*=(this,(FCoords *)&uStack_30);
  uVar2 = *(int *)param_1 >> 2 & 0x3fff;
  uStack_c = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  uVar1 = *(int *)param_1 + 0x4000 >> 2 & 0x3fff;
  uStack_4 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_24 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  fStack_1c = -*(float *)(&DAT_1023ffd4 + uVar2 * 4);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  fStack_18 = 0.0;
  fStack_20 = 0.0;
  uStack_10 = 0x80000000;
  uStack_14 = 0x3f800000;
  fStack_8 = 0.0;
  operator*=(this,(FCoords *)&uStack_30);
  fStack_18 = *(float *)(&DAT_1023ffd4 + (*(int *)(param_1 + 4) >> 2 & 0x3fffU) * 4);
  uVar1 = *(int *)(param_1 + 4) + 0x4000 >> 2 & 0x3fff;
  uStack_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uStack_24 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  fStack_20 = -*(float *)(&DAT_1023ffd4 + (*(int *)(param_1 + 4) >> 2 & 0x3fffU) * 4);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  fStack_1c = -0.0;
  uStack_c = 0x80000000;
  uStack_10 = 0;
  fStack_8 = 0.0;
  uStack_4 = 0x3f800000;
  operator*=(this,(FCoords *)&uStack_30);
  return this;
}


// ==== 10104719 FFileManager::Init

/* public: virtual void __thiscall FFileManager::Init(int) */

void __thiscall FFileManager::Init(FFileManager *this,int param_1)

{
                    /* 0x4719  1460  ?Init@FFileManager@@UAEXH@Z */
  return;
}


// ==== 1010471e UObject::execVectorConst

/* public: void __thiscall UObject::execVectorConst(struct FFrame &,void * const) */

void __thiscall UObject::execVectorConst(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 *puVar1;
  
                    /* 0x471e  2405  ?execVectorConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)((int)param_2 + 4) = puVar1[1];
  *(undefined4 *)((int)param_2 + 8) = puVar1[2];
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0xc;
  return;
}


// ==== 10104723 thunk_FUN_10118b30 thunk -> 10118b30

// ==== 10104728 UTextBuffer::StaticClass

/* public: static class UClass * __cdecl UTextBuffer::StaticClass(void) */

UClass * __cdecl UTextBuffer::StaticClass(void)

{
                    /* 0x4728  1922  ?StaticClass@UTextBuffer@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1010472d UObject::execMetaCast

/* public: void __thiscall UObject::execMetaCast(struct FFrame &,void * const) */

void __thiscall UObject::execMetaCast(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  UClass *pUVar4;
  FFrame *pFVar5;
  int iVar6;
  int unaff_ESI;
  int *unaff_retaddr;
  
                    /* 0x472d  2302  ?execMetaCast@UObject@@QAEXAAUFFrame@@QAX@Z */
  pFVar5 = param_1;
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = *piVar2;
  *(int **)(param_1 + 0xc) = piVar2 + 1;
  param_1 = (FFrame *)0x0;
  bVar1 = *(byte *)(piVar2 + 1);
  *(int *)(pFVar5 + 0xc) = (int)piVar2 + 5;
  (*(code *)(&GNatives)[bVar1])(pFVar5,&param_1);
  if (unaff_ESI != 0) {
    for (pUVar4 = *(UClass **)(unaff_ESI + 0x24); pUVar4 != (UClass *)0x0;
        pUVar4 = *(UClass **)(pUVar4 + 0x34)) {
      iVar6 = unaff_ESI;
      if (pUVar4 == &UClass::PrivateStaticClass) {
        do {
          if (iVar6 == iVar3) {
            *unaff_retaddr = unaff_ESI;
            return;
          }
          piVar2 = (int *)(iVar6 + 0x34);
          iVar6 = *piVar2;
        } while (*piVar2 != 0);
        *unaff_retaddr = 0;
        return;
      }
    }
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 10104732 UObject::execNotEqual_FloatFloat

/* WARNING: Removing unreachable block (ram,0x1013d7ce) */
/* public: void __thiscall UObject::execNotEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x4732  2329  ?execNotEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10104737 thunk_FUN_101191b0 thunk -> 101191b0

// ==== 1010473c FString::operator[]

/* public: unsigned short & __thiscall FString::operator[](int) */

ushort * __thiscall FString::operator[](FString *this,int param_1)

{
                    /* 0x473c  595  ??AFString@@QAEAAGH@Z */
  return (ushort *)(*(int *)this + param_1 * 2);
}


// ==== 1010474b FSuperPointInfoHit::FSuperPointInfoHit

/* public: __thiscall FSuperPointInfoHit::FSuperPointInfoHit(void) */

void __thiscall FSuperPointInfoHit::FSuperPointInfoHit(FSuperPointInfoHit *this)

{
                    /* 0x474b  158  ??0FSuperPointInfoHit@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 10104755 FString::operator==

/* public: int __thiscall FString::operator==(class FString const &)const  */

int __thiscall FString::operator==(FString *this,FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  
                    /* 0x4755  571  ??8FString@@QBEHABV0@@Z */
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = &DAT_101cdd44;
  }
  else {
    puVar2 = *(ushort **)param_1;
  }
  if (*(int *)(this + 4) != 0) {
    iVar1 = appStricmp(*(ushort **)this,puVar2);
    return (uint)(iVar1 == 0);
  }
  iVar1 = appStricmp(&DAT_101cdd44,puVar2);
  return (uint)(iVar1 == 0);
}


// ==== 1010475a FRainbowPtr::operator=

/* public: union FRainbowPtr & __thiscall FRainbowPtr::operator=(union FRainbowPtr const &) */

FRainbowPtr_conflict * __thiscall
FRainbowPtr::operator=(FRainbowPtr *this,FRainbowPtr_conflict *param_1)

{
                    /* 0x475a  482  ??4FRainbowPtr@@QAEAAT0@ABT0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return (FRainbowPtr_conflict *)this;
}


// ==== 1010475f FMalloc::GetUsedPeak

/* public: virtual int __thiscall FMalloc::GetUsedPeak(void) */

int __thiscall FMalloc::GetUsedPeak(FMalloc *this)

{
                    /* 0x475f  1416  ?GetUsedPeak@FMalloc@@UAEHXZ */
  return 0;
}


// ==== 10104764 thunk_FUN_10128660 thunk -> 10128660

// ==== 10104769 UStrProperty::DestroyValue

/* public: virtual void __thiscall UStrProperty::DestroyValue(void *)const  */

void __thiscall UStrProperty::DestroyValue(UStrProperty *this,void *param_1)

{
  FArray *this_00;
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4769  928  ?DestroyValue@UStrProperty@@UBEXPAX@Z */
  puStack_8 = &LAB_101be2e8;
  pvStack_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(this + 0x40)) {
    do {
      this_00 = (FArray *)(*(int *)(this + 0x44) * iVar1 + (int)param_1);
      uStack_4 = 0;
      *(undefined4 *)(this_00 + 4) = 0;
      *(undefined4 *)(this_00 + 8) = 0;
      FArray::Realloc(this_00,2);
      uStack_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this_00);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x40));
  }
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010476e UObjectProperty::SerializeItem

/* public: virtual void __thiscall UObjectProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UObjectProperty::SerializeItem(UObjectProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x476e  1846  ?SerializeItem@UObjectProperty@@UBEXAAVFArchive@@PAXH@Z */
  (**(code **)(*(int *)param_1 + 0x18))(param_2);
  return;
}


// ==== 10104773 UObject::SaveConfig

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::SaveConfig(unsigned long,unsigned short const *) */

void __thiscall UObject::SaveConfig(UObject *this,ulong param_1,ushort *param_2)

{
  UStruct *pUVar1;
  int *piVar2;
  int iVar3;
  UObject *this_00;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  UObject *pUVar7;
  UStruct *pUVar8;
  UClass *pUVar9;
  undefined2 uStack_1248;
  undefined1 auStack_1246 [2046];
  undefined2 uStack_a48;
  undefined1 auStack_a46 [2046];
  ushort auStack_248 [262];
  int iStack_3c;
  int iStack_38;
  ushort *puStack_34;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  UObject *pUStack_1c;
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4773  1786  ?SaveConfig@UObject@@QAEXKPBG@Z */
  puStack_c = &LAB_101bd9f0;
  pvStack_10 = ExceptionList;
  puStack_18 = (ushort *)0x10168e53;
  puStack_14 = &stack0xffffedac;
  uStack_8 = 0;
  iVar4 = *(int *)(this + 0x24);
  if (((*(uint *)(iVar4 + 0x4a4) & 0x400) == 0) || (iStack_28 = 1, *(int *)(this + 4) == -1)) {
    iStack_28 = 0;
  }
  if (param_2 == (ushort *)0x0) {
    if ((iStack_28 == 0) || (*(UPackage **)(this + 0x18) == GObjTransientPkg)) {
      iVar3 = *(int *)(iVar4 + 0x4c0);
    }
    else {
      iVar3 = *(int *)(*(UPackage **)(this + 0x18) + 0x20);
    }
    param_2 = (ushort *)(*(int *)(_Names + iVar3 * 4) + 0xc);
  }
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  thunk_FUN_10119210(iVar4);
  while (piVar2 = piStack_2c, piStack_2c != (int *)0x0) {
    if ((piStack_2c[0x12] & param_1) == param_1) {
      uStack_1248 = 0;
      _memset(auStack_1246,0,0x7fe);
      puVar5 = (ushort *)(*(int *)(_Names + piVar2[8] * 4) + 0xc);
      puStack_34 = puVar5;
      if (iStack_28 == 0) {
        puVar6 = (ushort *)0x0;
        pUVar7 = (UObject *)0x0;
        if ((piVar2[0x12] & 0x40000U) == 0) {
          this_00 = *(UObject **)(this + 0x24);
        }
        else {
          this_00 = (UObject *)(**(code **)(*piVar2 + 0x74))();
        }
        puVar6 = GetPathName(this_00,pUVar7,puVar6);
      }
      else {
        puVar6 = (ushort *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
      }
      puStack_18 = puVar6;
      iStack_24 = thunk_FUN_10132a60(piVar2);
      iVar4 = thunk_FUN_1015c0a0(piVar2);
      if (iStack_24 == 0) {
        if (iVar4 == 0) {
          for (iVar4 = 0; this = pUStack_1c, iStack_3c = iVar4, iVar4 < piVar2[0x10];
              iVar4 = iVar4 + 1) {
            if (piVar2[0x10] != 1) {
              appSprintf(auStack_248,(ushort *)L"%s[%i]",*(int *)(_Names + piVar2[8] * 4) + 0xc,
                         iVar4);
              puVar5 = auStack_248;
              puStack_34 = puVar5;
            }
            (**(code **)(*piVar2 + 0xa0))(iVar4,&uStack_1248,pUStack_1c,pUStack_1c,0);
            (**(code **)(*(int *)GConfig + 0x30))(puStack_18,puVar5,&uStack_1248,param_2);
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)GConfig + 0x1c))(puVar6,1,0,param_2);
          if (iVar4 == 0) {
            appFailAssert("Sec",".\\UnObj.cpp",0x445);
          }
          thunk_FUN_101688f0(puVar5);
          this = pUStack_1c;
        }
      }
      else {
        iStack_38 = (**(code **)(*(int *)GConfig + 0x1c))(puVar6,1,0,param_2);
        if (iStack_38 == 0) {
          appFailAssert("Sec",".\\UnObj.cpp",0x436);
        }
        thunk_FUN_101688f0(puVar5);
        pUVar7 = pUStack_1c + piVar2[0x15];
        puStack_18 = *(ushort **)(*(int *)(iStack_24 + 0x78) + 0x44);
        for (iStack_20 = 0; this = pUStack_1c, iStack_20 < *(int *)(pUVar7 + 4);
            iStack_20 = iStack_20 + 1) {
          uStack_a48 = 0;
          _memset(auStack_a46,0,0x7fe);
          iVar4 = iStack_20 * (int)puStack_18 + *(int *)pUVar7;
          (**(code **)(**(int **)(iStack_24 + 0x78) + 0x98))(&uStack_a48,iVar4,iVar4,0);
          thunk_FUN_101653d0(puVar5,&uStack_a48);
        }
      }
    }
    piStack_2c = (int *)piVar2[0xe];
    thunk_FUN_10114340();
  }
  (**(code **)(*(int *)GConfig + 0x34))(0,0);
  pUVar1 = *(UStruct **)(this + 0x24);
  do {
    pUVar8 = pUVar1;
    pUVar1 = *(UStruct **)(pUVar8 + 0x34);
    if (pUVar1 == (UStruct *)0x0) break;
  } while (((byte)pUVar1[0x4a4] & 4) != 0);
  thunk_FUN_1012b800();
  while ((int)piStack_2c < DAT_1033088c) {
    pUVar1 = *(UStruct **)(_GObjObjects + (int)piStack_2c * 4);
    iVar4 = UStruct::IsChildOf(pUVar1,pUVar8);
    if (iVar4 != 0) {
      puVar5 = (ushort *)0x0;
      pUVar9 = (UClass *)0x0;
      iVar4 = 1;
      pUVar7 = UClass::GetDefaultObject((UClass *)pUVar1);
      LoadConfig(pUVar7,iVar4,pUVar9,puVar5);
    }
    thunk_FUN_1012ae60();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10104778 USubsystem::operator_new

/* public: static void * __cdecl USubsystem::operator new(unsigned int,enum EInternal *) */

void * __cdecl USubsystem::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x4778  418  ??2USubsystem@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010477d L2ThreadUtil::ConditionalThreadAffinityMask

/* public: void __thiscall L2ThreadUtil::ConditionalThreadAffinityMask(int) */

void __thiscall L2ThreadUtil::ConditionalThreadAffinityMask(L2ThreadUtil *this,int param_1)

{
                    /* 0x477d  861  ?ConditionalThreadAffinityMask@L2ThreadUtil@@QAEXH@Z */
  return;
}


// ==== 10104782 L2ThreadUtil::GetThreadID

/* public: unsigned long __thiscall L2ThreadUtil::GetThreadID(enum L2ThreadFunction) */

ulong __thiscall L2ThreadUtil::GetThreadID(L2ThreadUtil *this,L2ThreadFunction param_1)

{
  ulong uVar1;
  
                    /* 0x4782  1405  ?GetThreadID@L2ThreadUtil@@QAEKW4L2ThreadFunction@@@Z */
  if (*(int *)(this + param_1 * 4 + 4) != 0) {
    uVar1 = (**(code **)(**(int **)(this + param_1 * 4 + 4) + 0x28))();
    return uVar1;
  }
  return 0xffffffff;
}


// ==== 10104787 USystem::Exec

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall USystem::Exec(unsigned short const *,class FOutputDevice &) */

int __thiscall USystem::Exec(USystem *this,ushort *param_1,FOutputDevice *param_2)

{
  FOutputDevice *pFVar1;
  int iVar2;
  ushort *puVar3;
  LPCWSTR lpDirectory;
  void *_Dst;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  INT IVar7;
  size_t _Size;
  int aiStack_a48 [512];
  FOutputDevice aFStack_248 [256];
  CHAR aCStack_148 [256];
  _MEMORYSTATUS _Stack_48;
  int iStack_28;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x4787  953  ?Exec@USystem@@UAEHPBGAAVFOutputDevice@@@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101be6c0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  iVar2 = ParseCommand(&param_1,(ushort *)L"MEMSTAT");
  if (iVar2 == 0) {
    iVar2 = ParseCommand(&param_1,(ushort *)L"CONFIGHASH");
    if (iVar2 == 0) {
      iVar2 = ParseCommand(&param_1,(ushort *)L"EXIT");
      if ((iVar2 == 0) && (iVar2 = ParseCommand(&param_1,(ushort *)L"QUIT"), iVar2 == 0)) {
        iVar2 = ParseCommand(&param_1,(ushort *)L"RELAUNCH");
        if (iVar2 == 0) {
          iVar2 = ParseCommand(&param_1,(ushort *)L"DEBUG");
          if (iVar2 == 0) {
            iVar2 = ParseCommand(&param_1,(ushort *)&DAT_101e1544);
            if (iVar2 != 0) {
              iVar5 = 0;
              (**(code **)(*(int *)GFileManager + 0x30))();
              uStack_8 = 0;
              (**(code **)(*(int *)GFileManager + 0x30))();
              uStack_8 = CONCAT31(uStack_8._1_3_,1);
              iVar2 = 0;
              if (0 < iStack_18) {
                do {
                  aiStack_a48[iVar2] = iStack_1c;
                  iVar2 = iVar2 + 1;
                  iStack_1c = iStack_1c + 0xc;
                } while (iVar2 < iStack_18);
              }
              appQsort(aiStack_a48,iStack_18,4,(_func_int_void_ptr_void_ptr *)&LAB_101022b6);
              pFVar1 = param_2;
              if (0 < iStack_18) {
                do {
                  FOutputDevice::Logf((FOutputDevice *)&stack0xfffff580,(ushort *)pFVar1);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iStack_18);
              }
              iVar5 = 0;
              iVar2 = iStack_28;
              if (0 < iStack_24) {
                do {
                  aiStack_a48[iVar5] = iVar2;
                  iVar5 = iVar5 + 1;
                  iVar2 = iVar2 + 0xc;
                } while (iVar5 < iStack_24);
              }
              appQsort(aiStack_a48,iStack_24,4,(_func_int_void_ptr_void_ptr *)&LAB_101022b6);
              iVar2 = 0;
              if (0 < iStack_24) {
                do {
                  FOutputDevice::Logf((FOutputDevice *)&stack0xfffff580,(ushort *)pFVar1);
                  iVar2 = iVar2 + 1;
                } while (iVar2 < iStack_24);
              }
              uStack_8 = uStack_8 & 0xffffff00;
              thunk_FUN_10124a00();
              uStack_8 = 0xffffffff;
              thunk_FUN_10124a00();
              ExceptionList = pvStack_10;
              return 1;
            }
            ExceptionList = pvStack_10;
            return 0;
          }
          iVar2 = ParseCommand(&param_1,(ushort *)L"CRASH");
          if (iVar2 != 0) {
            FOutputDevice::Logf(this_02,(ushort *)GError);
            ExceptionList = pvStack_10;
            return 1;
          }
          iVar2 = ParseCommand(&param_1,(ushort *)&DAT_101e1470);
          if (iVar2 != 0) {
            FOutputDevice::Log(param_2,(ushort *)L"Unreal crashing with voluntary GPF");
            _DAT_00000000 = 0x7b;
            ExceptionList = pvStack_10;
            return 1;
          }
          iVar2 = ParseCommand(&param_1,(ushort *)L"RECURSE");
          if (iVar2 != 0) {
            FOutputDevice::Logf(this_03,(ushort *)param_2);
            FUN_101758a0();
            ExceptionList = pvStack_10;
            return 1;
          }
          iVar2 = ParseCommand(&param_1,(ushort *)L"EATMEM");
          if (iVar2 == 0) {
            ExceptionList = pvStack_10;
            return 0;
          }
          FOutputDevice::Log(param_2,(ushort *)L"Eating up all available memory");
          do {
            _Size = 0x10000;
            iVar2 = 0;
            _Dst = (void *)(*(code *)**(undefined4 **)GMalloc)();
            _memset(_Dst,iVar2,_Size);
          } while( true );
        }
        if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2((FOutputDevice *)param_1,(ushort *)GLog);
        }
        (**(code **)(*(int *)GConfig + 0x34))();
        if (GUnicodeOS == 0) {
          GetModuleFileNameA((HMODULE)0x0,aCStack_148,0x100);
          if (GLog != (undefined *)0x0) {
            appFromAnsi(aCStack_148,(ushort *)0x0);
            FOutputDevice::Logf2(this_01,(ushort *)GLog);
          }
          puVar3 = appBaseDir();
          iVar2 = winGetSizeANSI(puVar3);
          if (iVar2 == 0) {
            pcVar6 = (char *)0x0;
          }
          else {
            puVar3 = appBaseDir();
            winGetSizeANSI(puVar3);
            pcVar6 = &stack0xfffff5ac;
          }
          iVar2 = winGetSizeANSI(param_1);
          if (iVar2 == 0) {
            pcVar4 = (char *)0x0;
          }
          else {
            winGetSizeANSI(param_1);
            pcVar4 = &stack0xfffff5ac;
          }
          IVar7 = 1;
          puVar3 = appBaseDir();
          iVar2 = winGetSizeANSI(puVar3);
          puVar3 = appBaseDir();
          pcVar6 = winToANSI(pcVar6,puVar3,iVar2);
          iVar2 = winGetSizeANSI(param_1);
          pcVar4 = winToANSI(pcVar4,param_1,iVar2);
          ShellExecuteA((HWND)0x0,"open","unrealtournament.exe",pcVar4,pcVar6,IVar7);
        }
        else {
          GetModuleFileNameW((HMODULE)0x0,(LPWSTR)aFStack_248,0x100);
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(aFStack_248,(ushort *)GLog);
          }
          IVar7 = 1;
          lpDirectory = (LPCWSTR)appBaseDir();
          ShellExecuteW((HWND)0x0,L"open",L"unrealtournament.exe",(LPCWSTR)param_1,lpDirectory,IVar7
                       );
        }
      }
      else {
        if (GIsEditor != 0) {
          ExceptionList = pvStack_10;
          return 1;
        }
        FOutputDevice::Log(param_2,(ushort *)L"Closing by request");
      }
      appRequestExit(0);
    }
    else {
      (**(code **)(*(int *)GConfig + 0x48))();
    }
  }
  else {
    _Stack_48.dwLength = 0x20;
    GlobalMemoryStatus(&_Stack_48);
    pFVar1 = param_2;
    FOutputDevice::Logf((FOutputDevice *)(_Stack_48.dwAvailPhys >> 10),(ushort *)param_2);
    FOutputDevice::Logf(this_00,(ushort *)pFVar1);
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10104791 FRangeVector::FRangeVector

/* public: __thiscall FRangeVector::FRangeVector(void) */

FRangeVector * __thiscall FRangeVector::FRangeVector(FRangeVector *this)

{
                    /* 0x4791  124  ??0FRangeVector@@QAE@XZ */
  return this;
}


// ==== 10104796 UObject::Release

/* public: virtual unsigned long __stdcall UObject::Release(void) */

ulong UObject::Release(void)

{
                    /* 0x4796  1762  ?Release@UObject@@UAGKXZ */
  return 0;
}


// ==== 1010479b appSecondsQPC

/* double __cdecl appSecondsQPC(void) */

double __cdecl appSecondsQPC(void)

{
  LARGE_INTEGER LStack_8;
  
                    /* 0x479b  2095  ?appSecondsQPC@@YANXZ */
  QueryPerformanceCounter(&LStack_8);
  return (double)(longlong)LStack_8 * GSecondsPerCycleQPF;
}


// ==== 101047a0 UState::Destroy

/* public: virtual void __thiscall UState::Destroy(void) */

void __thiscall UState::Destroy(UState *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x47a0  921  ?Destroy@UState@@UAEXXZ */
  puStack_c = &LAB_101b9f10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UStruct::Destroy((UStruct *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101047a5 FModelCoords::operator=

/* public: class FModelCoords & __thiscall FModelCoords::operator=(class FModelCoords const &) */

FModelCoords * __thiscall FModelCoords::operator=(FModelCoords *this,FModelCoords *param_1)

{
  int iVar1;
  FModelCoords *pFVar2;
  
                    /* 0x47a5  466  ??4FModelCoords@@QAEAAV0@ABV0@@Z */
  pFVar2 = this;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 101047aa FRotator::operator=

/* public: class FRotator & __thiscall FRotator::operator=(class FRotator const &) */

FRotator * __thiscall FRotator::operator=(FRotator *this,FRotator *param_1)

{
                    /* 0x47aa  486  ??4FRotator@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 101047af UFixedArrayProperty::CleanupDestroyed

/* public: virtual void __thiscall UFixedArrayProperty::CleanupDestroyed(unsigned char *)const  */

void __thiscall UFixedArrayProperty::CleanupDestroyed(UFixedArrayProperty *this,uchar *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x47af  840  ?CleanupDestroyed@UFixedArrayProperty@@UBEXPAE@Z */
  puStack_c = &LAB_101be0d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x7c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + 0x78) + 0x7c))
              (param_1 + *(int *)(this + 0x44) * *(int *)(this + 0x40) * iVar1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101047b4 thunk_FUN_101211b0 thunk -> 101211b0

// ==== 101047b9 UObject::execSubtractSubtract_Byte

/* public: void __thiscall UObject::execSubtractSubtract_Byte(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractSubtract_Byte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x47b9  2386  ?execSubtractSubtract_Byte@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *unaff_retaddr = *puVar2;
  *puVar2 = *puVar2 + 0xff;
  return;
}


// ==== 101047be thunk_FUN_1015a5b0 thunk -> 1015a5b0

// ==== 101047c3 thunk_FUN_10114cb0 thunk -> 10114cb0

// ==== 101047c8 FString::operator[]

/* public: unsigned short const & __thiscall FString::operator[](int)const  */

ushort * __thiscall FString::operator[](FString *this,int param_1)

{
                    /* 0x47c8  596  ??AFString@@QBEABGH@Z */
  return (ushort *)(*(int *)this + param_1 * 2);
}


// ==== 101047cd FString::Caps

/* public: class FString __thiscall FString::Caps(void)const  */

FString * __thiscall FString::Caps(FString *this)

{
  short *psVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  FString *in_stack_00000004;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x47cd  831  ?Caps@FString@@QBE?AV1@XZ */
  puStack_8 = &LAB_101b7119;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  if (*(int *)(this + 4) == 0) {
    puVar3 = &DAT_101cdd44;
  }
  else {
    puVar3 = *(ushort **)this;
  }
  ExceptionList = &pvStack_c;
  FString(in_stack_00000004,puVar3);
  iVar4 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      psVar1 = (short *)(*(int *)in_stack_00000004 + iVar4 * 2);
      sVar2 = *psVar1;
      if ((ushort)(sVar2 - 0x61U) < 0x1a) {
        sVar2 = sVar2 + -0x20;
      }
      iVar4 = iVar4 + 1;
      *psVar1 = sVar2;
    } while (iVar4 < *(int *)(this + 4));
  }
  ExceptionList = pvStack_c;
  return in_stack_00000004;
}


// ==== 101047d2 UObject::FindObjectField

/* public: class UField * __thiscall UObject::FindObjectField(class FName,int) */

UField * __thiscall UObject::FindObjectField(UObject *this,uint param_2,int param_3)

{
  int iVar1;
  UField *pUVar2;
  
                    /* 0x47d2  1011  ?FindObjectField@UObject@@QAEPAVUField@@VFName@@H@Z */
  if (((*(int *)(this + 0xc) != 0) && (iVar1 = *(int *)(*(int *)(this + 0xc) + 0x1c), iVar1 != 0))
     && (param_3 == 0)) {
    for (pUVar2 = *(UField **)(iVar1 + 0xa4 + (param_2 & 0xff) * 4); pUVar2 != (UField *)0x0;
        pUVar2 = *(UField **)(pUVar2 + 0x3c)) {
      if (*(uint *)(pUVar2 + 0x20) == param_2) {
        return pUVar2;
      }
    }
  }
  pUVar2 = *(UField **)(*(int *)(this + 0x24) + 0xa4 + (param_2 & 0xff) * 4);
  while( true ) {
    if (pUVar2 == (UField *)0x0) {
      return (UField *)0x0;
    }
    if (*(uint *)(pUVar2 + 0x20) == param_2) break;
    pUVar2 = *(UField **)(pUVar2 + 0x3c);
  }
  return pUVar2;
}


// ==== 101047d7 UObject::execHighNative8

/* public: void __thiscall UObject::execHighNative8(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative8(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x47d7  2261  ?execHighNative8@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281770 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101047dc appLoadFileToString

/* int __cdecl appLoadFileToString(class FString &,unsigned short const *,class FFileManager *) */

int __cdecl appLoadFileToString(FString *param_1,ushort *param_2,FFileManager *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  char *pcStack_38;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x47dc  2067  ?appLoadFileToString@@YAHAAVFString@@PBGPAVFFileManager@@@Z */
  puStack_c = &LAB_101bc318;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)(**(code **)(*(int *)param_3 + 8))(param_2,0,GNull);
  if (piVar1 == (int *)0x0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  thunk_FUN_10154740(uVar2 + 2);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  (**(code **)(*piVar1 + 4))(pcStack_38,uVar2);
  iVar3 = (**(code **)(*piVar1 + 0x58))();
  (**(code **)*piVar1)(1);
  pcStack_38[uVar2] = '\0';
  pcStack_38[uVar2 + 1] = '\0';
  TArray<unsigned_short>::Empty((TArray<unsigned_short> *)param_1,0);
  if (1 < (int)uVar2) {
    if ((((uVar2 & 1) == 0) && (*pcStack_38 == -1)) && (pcStack_38[1] == -2)) {
      TArray<unsigned_short>::Add((TArray<unsigned_short> *)param_1,uVar2 >> 1);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) + -1; iVar4 = iVar4 + 1) {
        *(ushort *)(*(int *)param_1 + iVar4 * 2) =
             (ushort)(byte)pcStack_38[iVar4 * 2 + 3] * 0x100 +
             (ushort)(byte)pcStack_38[iVar4 * 2 + 2];
      }
      goto LAB_101559d7;
    }
    if ((((uVar2 & 1) == 0) && (*pcStack_38 == -2)) && (pcStack_38[1] == -1)) {
      TArray<unsigned_short>::Add((TArray<unsigned_short> *)param_1,uVar2 >> 1);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) + -1; iVar4 = iVar4 + 1) {
        *(ushort *)(*(int *)param_1 + iVar4 * 2) =
             (ushort)(byte)pcStack_38[iVar4 * 2 + 2] * 0x100 +
             (ushort)(byte)pcStack_38[iVar4 * 2 + 3];
      }
      goto LAB_101559d7;
    }
  }
  TArray<unsigned_short>::Add((TArray<unsigned_short> *)param_1,uVar2 + 1);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) + -1; iVar4 = iVar4 + 1) {
    *(ushort *)(*(int *)param_1 + iVar4 * 2) = (ushort)(byte)pcStack_38[iVar4];
  }
LAB_101559d7:
  puVar5 = TArray<unsigned_short>::Last((TArray<unsigned_short> *)param_1,0);
  *puVar5 = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  thunk_FUN_10155540();
  ExceptionList = pvStack_10;
  return iVar3;
}


// ==== 101047e1 UObject::execAnd_IntInt

/* public: void __thiscall UObject::execAnd_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execAnd_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x47e1  2151  ?execAnd_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *(undefined4 **)unaff_ESI = &uStack_4;
  return;
}


// ==== 101047e6 thunk_FUN_10118cb0 thunk -> 10118cb0

// ==== 101047eb UStrProperty::operator_new

/* public: static void * __cdecl UStrProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UStrProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x47eb  412  ??2UStrProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 101047f0 thunk_FUN_10132d50 thunk -> 10132d50

// ==== 101047f5 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,unsigned __int64 &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,__uint64 *param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x47f5  1664  ?Parse@@YAHPBG0AA_K@Z */
  puStack_c = &LAB_101bc1a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = Parse(param_1,param_2,(__int64 *)param_3);
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 101047fa Parse

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* int __cdecl Parse(unsigned short const *,unsigned short const *,__int64 &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,__int64 *param_3)

{
  ushort uVar1;
  __int64 _Var2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  ushort uStack_202c;
  undefined1 auStack_202a [8198];
  int iStack_24;
  uint uStack_1c;
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x47fa  1663  ?Parse@@YAHPBG0AA_J@Z */
  puStack_c = &LAB_101bbff0;
  pvStack_10 = ExceptionList;
  puStack_18 = (ushort *)0x10152c03;
  puStack_14 = &stack0xffffdfc8;
  uStack_8 = 0;
  uStack_202c = 0;
  ExceptionList = &pvStack_10;
  _memset(auStack_202a,0,0x1ffe);
  puStack_18 = &uStack_202c;
  iVar3 = Parse(param_1,param_2,puStack_18,0x1000);
  if (iVar3 != 0) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    uStack_1c = (uint)(uStack_202c == 0x2d);
    puVar5 = (ushort *)(auStack_202a + uStack_1c * 2 + -2);
    while( true ) {
      uVar1 = *puVar5;
      if ((uVar1 < 0x30) || (0x39 < uVar1)) break;
      puStack_18 = puVar5;
      uVar6 = __allmul((int)*param_3,*(undefined4 *)((int)param_3 + 4),10,0);
      iStack_24 = (int)((ulonglong)uVar6 >> 0x20);
      uVar4 = (uint)uVar6 + (uint)uVar1;
      *(uint *)param_3 = uVar4 - 0x30;
      *(uint *)((int)param_3 + 4) =
           (iStack_24 + (uint)CARRY4((uint)uVar6,(uint)uVar1)) - (uint)(uVar4 < 0x30);
      puVar5 = puVar5 + 1;
    }
    if (uStack_1c != 0) {
      _Var2 = *param_3;
      *(int *)param_3 = -(int)_Var2;
      *(uint *)((int)param_3 + 4) = -(*(int *)((int)param_3 + 4) + (uint)((int)_Var2 != 0));
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 101047ff UObject::StaticFindObject

/* public: static class UObject * __cdecl UObject::StaticFindObject(class UClass *,class UObject
   *,unsigned short const *,int) */

UObject * __cdecl
UObject::StaticFindObject(UClass *param_1,UObject *param_2,ushort *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  uint uVar4;
  int iStack_68;
  UObject *pUStack_20;
  uint uStack_1c;
  UObject *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x47ff  1935  ?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */
  puStack_c = &LAB_101bd868;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff8c;
  iStack_8 = 0;
  pUStack_20 = (UObject *)(-(uint)(param_2 != (UObject *)0xffffffff) & (uint)param_2);
  ExceptionList = &pvStack_10;
  iVar1 = ResolveName(&pUStack_20,&param_3,0,0);
  if ((iVar1 != 0) && (FName::FName((FName *)&uStack_1c,param_3,0), uStack_1c != 0)) {
    uVar4 = uStack_1c & 0xfff;
    for (pUVar3 = (UObject *)(&GObjHash)[uVar4]; pUStack_18 = pUVar3, pUVar3 != (UObject *)0x0;
        pUVar3 = *(UObject **)(pUVar3 + 8)) {
      if ((*(uint *)(pUVar3 + 0x20) == uStack_1c) &&
         ((((pUStack_20 == (UObject *)0x0 && (param_2 == (UObject *)0xffffffff)) ||
           (*(UObject **)(pUVar3 + 0x18) == pUStack_20)) ||
          (((param_2 == (UObject *)0xffffffff && (pUStack_20 != (UObject *)0x0)) &&
           (iVar1 = IsIn(pUVar3,pUStack_20), iVar1 != 0)))))) {
        if (param_1 == (UClass *)0x0) {
LAB_10166f80:
          while (GL2GCState == 2) {
            appSleep(0.0);
            pUVar3 = pUStack_18;
          }
          if ((GL2GCState == 3) && (((byte)pUVar3[0x1c] & 2) != 0)) {
            thunk_FUN_1015a320();
            iStack_8._0_1_ = 1;
            (**(code **)(iStack_68 + 0x18))(&pUStack_18);
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            thunk_FUN_1015a3d0();
            pUVar3 = pUStack_18;
          }
          ExceptionList = pvStack_10;
          return pUVar3;
        }
        if (param_4 == 0) {
          uVar2 = IsA(pUVar3,param_1);
        }
        else {
          uVar2 = (uint)(*(UClass **)(pUVar3 + 0x24) == param_1);
        }
        if (uVar2 != 0) goto LAB_10166f80;
      }
    }
    iVar1 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
    if (iVar1 != 0) {
      for (pUVar3 = (UObject *)(&GObjHashBuffer)[uVar4]; pUVar3 != (UObject *)0x0;
          pUVar3 = *(UObject **)(pUVar3 + 0x2c)) {
        if ((*(uint *)(pUVar3 + 0x20) == uStack_1c) &&
           ((((pUStack_20 == (UObject *)0x0 && (param_2 == (UObject *)0xffffffff)) ||
             (*(UObject **)(pUVar3 + 0x18) == pUStack_20)) ||
            (((param_2 == (UObject *)0xffffffff && (pUStack_20 != (UObject *)0x0)) &&
             (iVar1 = IsIn(pUVar3,pUStack_20), iVar1 != 0)))))) {
          if (param_1 == (UClass *)0x0) {
            ExceptionList = pvStack_10;
            return pUVar3;
          }
          if (param_4 == 0) {
            uVar4 = IsA(pUVar3,param_1);
          }
          else {
            uVar4 = (uint)(*(UClass **)(pUVar3 + 0x24) == param_1);
          }
          if (uVar4 != 0) {
            ExceptionList = pvStack_10;
            return pUVar3;
          }
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return (UObject *)0x0;
}


// ==== 10104804 UObject::execSubtract_IntInt

/* public: void __thiscall UObject::execSubtract_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x4804  2391  ?execSubtract_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 1010480e FCodec::Decode

/* public: virtual int __thiscall FCodec::Decode(class FArchive &,class FArchive &) */

int __thiscall FCodec::Decode(FCodec *this,FArchive *param_1,FArchive *param_2)

{
                    /* 0x480e  903  ?Decode@FCodec@@UAEHAAVFArchive@@0@Z */
  return 0;
}


// ==== 10104813 UDelegateProperty::CopyCompleteValue

/* public: virtual void __thiscall UDelegateProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UDelegateProperty::CopyCompleteValue
          (UDelegateProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  UClass *pUVar1;
  int iVar2;
  UClass *pUVar3;
  int iVar4;
  UObject *pUVar5;
  undefined4 *puVar6;
  int iVar7;
  
                    /* 0x4813  867  ?CopyCompleteValue@UDelegateProperty@@UBEXPAX0PAVUObject@@@Z */
  iVar4 = *(int *)(this + 0x40);
  if (param_3 == (UObject *)0x0) {
    if (iVar4 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
      return;
    }
    iVar7 = 0;
    if (0 < iVar4) {
      iVar4 = (int)param_2 - (int)param_1;
      do {
        *(undefined4 *)param_1 = *(undefined4 *)((int)param_1 + iVar4);
        *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + iVar4 + 4);
        iVar7 = iVar7 + 1;
        param_1 = (void *)((int)param_1 + 8);
      } while (iVar7 < *(int *)(this + 0x40));
    }
  }
  else {
    if (iVar4 == 1) {
      pUVar3 = *(UClass **)param_2;
      if (pUVar3 != (UClass *)0x0) {
        for (pUVar1 = *(UClass **)(pUVar3 + 0x24); pUVar1 != (UClass *)0x0;
            pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
          if (pUVar1 == &UClass::PrivateStaticClass) goto LAB_10173017;
        }
      }
      pUVar3 = (UClass *)0x0;
LAB_10173017:
      *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
      if ((pUVar3 == (UClass *)0x0) || (iVar4 = UObject::IsA(param_3,pUVar3), iVar4 == 0)) {
        param_3 = *(UObject **)param_2;
      }
      *(UObject **)param_1 = param_3;
      return;
    }
    iVar7 = 0;
    if (0 < iVar4) {
      puVar6 = (undefined4 *)((int)param_1 + 4);
      do {
        iVar4 = *(int *)((int)param_2 + iVar7 * 8);
        if (iVar4 != 0) {
          for (pUVar3 = *(UClass **)(iVar4 + 0x24); pUVar3 != (UClass *)0x0;
              pUVar3 = *(UClass **)(pUVar3 + 0x34)) {
            if (pUVar3 == &UClass::PrivateStaticClass) goto LAB_10173080;
          }
        }
        iVar4 = 0;
LAB_10173080:
        *puVar6 = *(undefined4 *)((int)puVar6 + ((int)param_2 - (int)param_1));
        if (iVar4 != 0) {
          for (iVar2 = *(int *)(param_3 + 0x24); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x34)) {
            pUVar5 = param_3;
            if (iVar2 == iVar4) goto LAB_101730a2;
          }
        }
        pUVar5 = *(UObject **)((int)param_2 + iVar7 * 8);
LAB_101730a2:
        puVar6[-1] = pUVar5;
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
        if (*(int *)(this + 0x40) <= iVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}


// ==== 10104818 thunk_FUN_10121cd0 thunk -> 10121cd0

// ==== 1010481d winGetSizeUNICODE

/* int __cdecl winGetSizeUNICODE(char const *) */

int __cdecl winGetSizeUNICODE(char *param_1)

{
  int iVar1;
  
                    /* 0x481d  2415  ?winGetSizeUNICODE@@YAHPBD@Z */
  iVar1 = MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)0x0,0);
  return iVar1;
}


// ==== 10104822 thunk_FUN_1011ffc0 thunk -> 1011ffc0

// ==== 1010482c FObjectImport::operator=

/* public: struct FObjectImport & __thiscall FObjectImport::operator=(struct FObjectImport const &)
    */

FObjectImport * __thiscall FObjectImport::operator=(FObjectImport *this,FObjectImport *param_1)

{
  int iVar1;
  FObjectImport *pFVar2;
  
                    /* 0x482c  473  ??4FObjectImport@@QAEAAU0@ABU0@@Z */
  pFVar2 = this;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10104831 UObject::execLocalVariable

/* public: void __thiscall UObject::execLocalVariable(struct FFrame &,void * const) */

void __thiscall UObject::execLocalVariable(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x4831  2296  ?execLocalVariable@UObject@@QAEXAAUFFrame@@QAX@Z */
  GProperty = (UProperty *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  GPropAddr = (uchar *)(*(int *)(GProperty + 0x54) + *(int *)(param_1 + 0x10));
  GPropObject = (UObject *)0x0;
  if (param_2 != (void *)0x0) {
    (**(code **)(*(int *)GProperty + 0xa8))(param_2,GPropAddr,0);
  }
  return;
}


// ==== 10104836 UByteProperty::ImportText

/* public: virtual unsigned short const * __thiscall UByteProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UByteProperty::ImportText(UByteProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ushort auStack_82c [1028];
  UByteProperty *pUStack_24;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4836  1444  ?ImportText@UByteProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be190;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff7c8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_24 = this;
  puVar1 = &stack0xfffff7c8;
  if (*(int *)(this + 0x78) != 0) {
    ExceptionList = &pvStack_10;
    param_1 = (ushort *)thunk_FUN_10170590(param_1,auStack_82c,0x400,0);
    if (param_1 == (ushort *)0x0) {
      ExceptionList = pvStack_10;
      return (ushort *)0x0;
    }
    FName::FName((FName *)&iStack_18,auStack_82c,0);
    puVar1 = puStack_14;
    if (iStack_18 != 0) {
      uStack_1c = 0;
      iVar2 = thunk_FUN_10172930(&iStack_18,&uStack_1c);
      puVar1 = puStack_14;
      if (iVar2 != 0) {
        *param_2 = (uchar)uStack_1c;
        ExceptionList = pvStack_10;
        return param_1;
      }
    }
  }
  puStack_14 = puVar1;
  if (9 < (ushort)(*param_1 - 0x30)) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  iVar2 = appAtoi(param_1);
  *param_2 = (uchar)iVar2;
  for (; (0x2f < *param_1 && (*param_1 < 0x3a)); param_1 = param_1 + 1) {
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1010483b FCoords::FCoords

/* public: __thiscall FCoords::FCoords(class FVector const &) */

void __thiscall FCoords::FCoords(FCoords *this,FVector *param_1)

{
                    /* 0x483b  33  ??0FCoords@@QAE@ABVFVector@@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  return;
}


// ==== 10104840 appSqrt

/* double __cdecl appSqrt(double) */

double __cdecl appSqrt(double param_1)

{
  float10 fVar1;
  
                    /* 0x4840  2101  ?appSqrt@@YANN@Z */
  fVar1 = (float10)FUN_1017cb60();
  return (double)fVar1;
}


// ==== 10104845 UState::UState

/* public: __thiscall UState::UState(enum EStaticConstructor,int,unsigned short const *,unsigned
   short const *,unsigned long) */

UState * __thiscall
UState::UState(UState *this,EStaticConstructor param_1,int param_2,ushort *param_3,ushort *param_4,
              ulong param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4845  270  ??0UState@@QAE@W4EStaticConstructor@@HPBG1K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba218;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this,0,param_2,param_3,param_4,param_5);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined2 *)(this + 0xa0) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010484a thunk_FUN_1011e000 thunk -> 1011e000

// ==== 1010484f FString::FormatAsNumber

/* public: static class FString __cdecl FString::FormatAsNumber(int) */

int __cdecl FString::FormatAsNumber(int param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int in_stack_00000008;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  FArray aFStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x484f  1025  ?FormatAsNumber@FString@@SA?AV1@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8609;
  pvStack_c = ExceptionList;
  uStack_34 = 0;
  ExceptionList = &pvStack_c;
  puVar1 = appItoa(in_stack_00000008);
  FString((FString *)&uStack_24,puVar1);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_4 = 4;
  iVar3 = 0;
  if (iStack_20 == 0) {
    iStack_20 = 0;
  }
  else {
    iStack_20 = iStack_20 + -1;
  }
  uVar4 = iStack_20 - 1;
  if (-1 < (int)uVar4) {
    do {
      puVar2 = (undefined4 *)Mid((FString *)&uStack_24,(int)&uStack_18,uVar4);
      puStack_8._0_1_ = 5;
      if (puVar2[1] == 0) {
        puVar1 = &DAT_101cdd44;
      }
      else {
        puVar1 = (ushort *)*puVar2;
      }
      operator+=((FString *)&uStack_34,puVar1);
      puStack_8._0_1_ = 6;
      uStack_18 = 0;
      uStack_14 = 0;
      FArray::Realloc(aFStack_1c,2);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_1c);
      iVar3 = iVar3 + 1;
      if ((iVar3 == 3) && (0 < (int)uVar4)) {
        operator+=((FString *)&uStack_34,(ushort *)&DAT_101cf688);
        iVar3 = 0;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  Reverse((FString *)&uStack_30);
  puStack_8._0_1_ = 7;
  uStack_30 = 0;
  uStack_2c = 0;
  FArray::Realloc((FArray *)&uStack_34,2);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_34);
  puStack_8 = (undefined1 *)0x8;
  uStack_24 = 0;
  iStack_20 = 0;
  FArray::Realloc((FArray *)&uStack_28,2);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_28);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10104854 FRegistryObjectInfo::~FRegistryObjectInfo

/* public: __thiscall FRegistryObjectInfo::~FRegistryObjectInfo(void) */

void __thiscall FRegistryObjectInfo::~FRegistryObjectInfo(FRegistryObjectInfo *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x4854  309  ??1FRegistryObjectInfo@@QAE@XZ */
  puStack_8 = &LAB_101b72e4;
  pvStack_c = ExceptionList;
  iStack_4 = 3;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0x30));
  iStack_4._0_1_ = 2;
  FString::~FString((FString *)(this + 0x24));
  iStack_4._0_1_ = 1;
  FString::~FString((FString *)(this + 0x18));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString((FString *)(this + 0xc));
  iStack_4 = 0xffffffff;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010485e UClass::GetSuperClass

/* public: class UClass * __thiscall UClass::GetSuperClass(void)const  */

UClass * __thiscall UClass::GetSuperClass(UClass *this)

{
                    /* 0x485e  1398  ?GetSuperClass@UClass@@QBEPAV1@XZ */
  return *(UClass **)(this + 0x34);
}


// ==== 10104863 FMemStackStats::FMemStackStats

/* public: __thiscall FMemStackStats::FMemStackStats(void) */

void __thiscall FMemStackStats::FMemStackStats(FMemStackStats *this)

{
                    /* 0x4863  78  ??0FMemStackStats@@QAE@XZ */
  *(undefined4 *)this = 0;
  return;
}


// ==== 10104868 FArchive::DetachRoughLoader

/* public: virtual void __thiscall FArchive::DetachRoughLoader(class FRoughLoader *) */

void __thiscall FArchive::DetachRoughLoader(FArchive *this,FRoughLoader *param_1)

{
                    /* 0x4868  936  ?DetachRoughLoader@FArchive@@UAEXPAVFRoughLoader@@@Z */
  return;
}


// ==== 1010486d UObject::operator_new

/* public: static void * __cdecl UObject::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UObject::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x486d  395  ??2UObject@@SAPAXIPAV0@VFName@@K@Z */
  pUVar1 = StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10104872 FArray::GetData

/* public: void * __thiscall FArray::GetData(void) */

void * __thiscall FArray::GetData(FArray *this)

{
                    /* 0x4872  1299  ?GetData@FArray@@QAEPAXXZ */
  return *(void **)this;
}


// ==== 10104877 thunk_FUN_10108d90 thunk -> 10108d90

// ==== 1010487c FVector::IsUniform

/* public: int __thiscall FVector::IsUniform(void) */

int __thiscall FVector::IsUniform(FVector *this)

{
  float fVar1;
  
                    /* 0x487c  1530  ?IsUniform@FVector@@QAEHXZ */
  fVar1 = *(float *)this - *(float *)(this + 4);
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.0001) {
    fVar1 = *(float *)(this + 4) - *(float *)(this + 8);
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      return 1;
    }
  }
  return 0;
}


// ==== 10104881 FRotator::operator-=

/* public: class FRotator __thiscall FRotator::operator-=(class FRotator const &) */

void __thiscall FRotator::operator-=(FRotator *this,FRotator *param_1)

{
  undefined4 uVar1;
  int *in_stack_00000008;
  
                    /* 0x4881  693  ??ZFRotator@@QAE?AV0@ABV0@@Z */
  *(int *)this = *(int *)this - *in_stack_00000008;
  *(int *)(this + 4) = *(int *)(this + 4) - in_stack_00000008[1];
  *(int *)(this + 8) = *(int *)(this + 8) - in_stack_00000008[2];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 10104886 UObject::BeginLoad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::BeginLoad(void) */

void __cdecl UObject::BeginLoad(void)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4886  814  ?BeginLoad@UObject@@SAXXZ */
  puStack_c = &LAB_101bcf40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  GObjBeginLoadCount = GObjBeginLoadCount + 1;
  if (GObjBeginLoadCount == 1) {
    ExceptionList = &pvStack_10;
    if (GAutoRegister != (UObject *)0x0) {
      ExceptionList = &pvStack_10;
      appFailAssert("!GAutoRegister",".\\UnObj.cpp",0xc0a);
    }
    for (iVar1 = 0; iVar1 < DAT_103308a4; iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(_GObjLoaders + iVar1 * 4) + 0x9c) == 0) {
        appFailAssert("GetLoader(i)->Success",".\\UnObj.cpp",0xc0c);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010488b ULinker::InternalConstructor

/* public: static void __cdecl ULinker::InternalConstructor(void *) */

void __cdecl ULinker::InternalConstructor(void *param_1)

{
                    /* 0x488b  1488  ?InternalConstructor@ULinker@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    ULinker(param_1);
    return;
  }
  return;
}


// ==== 10104890 UClass::GetInheritanceSuper

/* public: virtual class UStruct * __thiscall UClass::GetInheritanceSuper(void) */

UStruct * __thiscall UClass::GetInheritanceSuper(UClass *this)

{
                    /* 0x4890  1337  ?GetInheritanceSuper@UClass@@UAEPAVUStruct@@XZ */
  return *(UStruct **)(this + 0x34);
}


// ==== 10104895 UObjectExporterT3D::StaticClass

/* public: static class UClass * __cdecl UObjectExporterT3D::StaticClass(void) */

UClass * __cdecl UObjectExporterT3D::StaticClass(void)

{
                    /* 0x4895  1910  ?StaticClass@UObjectExporterT3D@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1010489a FUnknown::Release

/* public: virtual unsigned long __stdcall FUnknown::Release(void) */

ulong FUnknown::Release(void)

{
                    /* 0x489a  1761  ?Release@FUnknown@@UAGKXZ */
  return 0;
}


// ==== 1010489f thunk_FUN_101288b0 thunk -> 101288b0

// ==== 101048a4 UParamStack::InternalConstructor

/* public: static void __cdecl UParamStack::InternalConstructor(void *) */

void __cdecl UParamStack::InternalConstructor(void *param_1)

{
                    /* 0x48a4  1497  ?InternalConstructor@UParamStack@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UParamStack(param_1);
    return;
  }
  return;
}


// ==== 101048a9 thunk_FUN_10165db0 thunk -> 10165db0

// ==== 101048ae UCommandlet::Main

/* public: virtual int __thiscall UCommandlet::Main(unsigned short const *) */

int __thiscall UCommandlet::Main(UCommandlet *this,ushort *param_1)

{
  int iVar1;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x48ae  1600  ?Main@UCommandlet@@UAEHPBG@Z */
  puStack_c = &LAB_101bd4d8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_28,param_1);
  iStack_8._0_1_ = 1;
  iVar1 = eventMain(this,aFStack_28);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 101048b3 thunk_FUN_1011fc70 thunk -> 1011fc70

// ==== 101048bd thunk_FUN_10130ff0 thunk -> 10130ff0

// ==== 101048c2 UFunction::GetReturnProperty

/* public: class UProperty * __thiscall UFunction::GetReturnProperty(void) */

UProperty * __thiscall UFunction::GetReturnProperty(UFunction *this)

{
  UProperty *pUStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x48c2  1391  ?GetReturnProperty@UFunction@@QAEPAVUProperty@@XZ */
  puStack_c = &LAB_101ba0e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10119210(this);
  while ((pUStack_20 != (UProperty *)0x0 && ((char)*(uint *)(pUStack_20 + 0x48) < '\0'))) {
    if ((*(uint *)(pUStack_20 + 0x48) & 0x400) != 0) {
      ExceptionList = pvStack_10;
      return pUStack_20;
    }
    pUStack_20 = *(UProperty **)(pUStack_20 + 0x38);
    thunk_FUN_10114340();
  }
  ExceptionList = pvStack_10;
  return (UProperty *)0x0;
}


// ==== 101048c7 FName::StaticInit

/* public: static void __cdecl FName::StaticInit(void) */

void __cdecl FName::StaticInit(void)

{
  FCriticalSection *this;
  uint uVar1;
  FNameEntry *pFVar2;
  int iVar3;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  FOutputDevice *this_00;
  FNameEntry *pFVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x48c7  1938  ?StaticInit@FName@@SAXXZ */
  puStack_c = &LAB_101bc5cb;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (Initialized != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Initialized==0",".\\UnName.cpp",0xa4);
  }
  Initialized = 1;
  if (NameCS != (FCriticalSection *)0x0) {
    thunk_FUN_101286e0(1);
  }
  this = (FCriticalSection *)thunk_FUN_101088a0(4);
  iStack_8._0_1_ = 1;
  if (this == (FCriticalSection *)0x0) {
    NameCS = (FCriticalSection *)0x0;
  }
  else {
    NameCS = (FCriticalSection *)FCriticalSection::FCriticalSection(this);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  for (uVar1 = 0; uVar1 < 0x1000; uVar1 = uVar1 + 1) {
    (&NameHash)[uVar1] = (FNameEntry **)0x0;
  }
  pFVar2 = AllocateNameEntry((ushort *)L"None",0,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ByteProperty",1,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"IntProperty",2,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BoolProperty",3,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FloatProperty",4,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ObjectProperty",5,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NameProperty",6,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DelegateProperty",7,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ClassProperty",8,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ArrayProperty",9,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"StructProperty",10,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"VectorProperty",0xb,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"RotatorProperty",0xc,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"StrProperty",0xd,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"MapProperty",0xe,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FixedArrayProperty",0xf,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Core",0x14,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Engine",0x15,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Editor",0x16,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Gameplay",0x17,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Byte",0x50,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7204,0x51,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Bool",0x52,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Float",0x53,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Name",0x54,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"String",0x55,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Struct",0x56,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Vector",0x57,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Rotator",0x58,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Color",0x5a,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Plane",0x5b,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Button",0x5c,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CompressedPosition",0x5d,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Begin",100,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"State",0x66,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Function",0x67,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Self",0x68,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"True",0x69,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"False",0x6a,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Transient",0x6b,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Enum",0x75,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Replication",0x77,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Reliable",0x78,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Unreliable",0x79,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Always",0x7a,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Field",0x96,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Object",0x97,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"TextBuffer",0x98,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Linker",0x99,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"LinkerLoad",0x9a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"LinkerSave",0x9b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Subsystem",0x9c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Factory",0x9d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"TextBufferFactory",0x9e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Exporter",0x9f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"StackNode",0xa0,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Property",0xa1,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Camera",0xa2,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PlayerInput",0xa3,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Vect",600,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d74b0,0x259,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ArrayCount",0x25d,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EnumCount",0x25e,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d74e4,0x25f,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Else",0x26c,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d74f8,0x26d,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Goto",0x26e,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Stop",0x26f,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Until",0x271,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"While",0x272,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7530,0x273,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Break",0x274,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7544,0x275,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ForEach",0x276,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Assert",0x277,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Switch",0x278,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Case",0x279,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Default",0x27a,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Continue",0x27b,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Private",0x280,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Const",0x281,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d75c8,0x282,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Export",0x283,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EdFindable",0x284,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Skip",0x286,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Coerce",0x287,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Optional",0x288,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Input",0x289,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Config",0x28a,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Travel",0x28c,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditConst",0x28d,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Localized",0x28e,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"GlobalConfig",0x28f,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SafeReplace",0x290,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d76b0,0x291,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Protected",0x292,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Public",0x293,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInline",0x294,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInlineUse",0x295,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Deprecated",0x296,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditConstArray",0x297,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInlineNotify",0x298,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Constructive",0x299,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Intrinsic",0x29f,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Within",0x2a0,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Abstract",0x2a1,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Package",0x2a2,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Guid",0x2a3,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Parent",0x2a4,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Class",0x2a5,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Extends",0x2a6,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NoExport",0x2a7,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Placeable",0x2a8,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PerObjectConfig",0x2a9,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NativeReplication",0x2aa,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotPlaceable",0x2ab,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EditInlineNew",0x2ac,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotEditInlineNew",0x2ad,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HideCategories",0x2ae,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ShowCategories",0x2af,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CollapseCategories",0x2b0,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DontCollapseCategories",0x2b1,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DependsOn",0x2ba,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DynamicRecompile",699,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Auto",0x2b2,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Ignores",0x2b3,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Instanced",0x2b4,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Global",0x2b7,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Super",0x2b8,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Outer",0x2b9,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Operator",700,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PreOperator",0x2bd,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostOperator",0x2be,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Final",0x2bf,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Iterator",0x2c0,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Latent",0x2c1,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Return",0x2c2,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Singular",0x2c3,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Simulated",0x2c4,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Exec",0x2c5,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Event",0x2c6,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Static",0x2c7,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Native",0x2c8,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Invariant",0x2c9,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Delegate",0x2ca,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7b08,0x2d0,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Local",0x2d1,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Import",0x2d2,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"From",0x2d3,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Spawn",0x2da,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Array",0x2db,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7b50,0x2dc,0x4000400,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7b58,0x2e4,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Role",0x2e6,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"RemoteRole",0x2e7,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"System",0x2e8,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"User",0x2e9,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7ba0,0x2f8,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Critical",0x2f9,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Init",0x2fa,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Exit",0x2fb,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7bd4,0x2fc,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Play",0x2fd,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Console",0x2fe,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Warning",0x2ff,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ExecWarning",0x300,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ScriptWarning",0x301,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ScriptLog",0x302,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7c50,0x303,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevNet",0x304,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevPath",0x305,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevNetTraffic",0x306,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevAudio",0x307,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevLoad",0x308,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevSave",0x309,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevGarbage",0x30a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevKill",0x30b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevReplace",0x30c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevMusic",0x30d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevSound",0x30e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevCompile",0x30f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DevBind",0x310,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Localization",0x311,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Compatibility",0x312,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NetComeGo",0x313,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Title",0x314,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Error",0x315,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Heading",0x316,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SubHeading",0x317,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FriendlyError",0x318,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Progress",0x319,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UserPrompt",0x31a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"White",800,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Black",0x321,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d7e44,0x322,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Green",0x323,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Blue",0x324,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Cyan",0x325,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Magenta",0x326,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Yellow",0x327,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"DefaultColor",0x328,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"KeyType",0x334,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"KeyEvent",0x335,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Write",0x336,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Message",0x337,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"InitialState",0x338,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Texture",0x339,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Sound",0x33a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"FireTexture",0x33b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"IceTexture",0x33c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"WaterTexture",0x33d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"WaveTexture",0x33e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"WetTexture",0x33f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Main",0x340,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyLevelChange",0x341,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"VideoChange",0x342,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SendText",0x343,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SendBinary",0x344,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ConnectFailure",0x345,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Length",0x346,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Insert",0x347,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Remove",0x348,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Spawned",300,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Destroyed",0x12d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"GainedChild",0x12e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"LostChild",0x12f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Probe4",0x130,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Probe5",0x131,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Trigger",0x132,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UnTrigger",0x133,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Timer",0x134,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HitWall",0x135,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Falling",0x136,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Landed",0x137,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PhysicsVolumeChange",0x138,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Touch",0x139,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UnTouch",0x13a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Bump",0x13b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BeginState",0x13c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EndState",0x13d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BaseChange",0x13e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Attach",0x13f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Detach",0x140,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorEntered",0x141,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorLeaving",0x142,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ZoneChange",0x143,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"AnimEnd",0x144,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EndedRotation",0x145,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"InterpolateEnd",0x146,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EncroachingOn",0x147,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EncroachedBy",0x148,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyTurningInPlace",0x149,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HeadVolumeChange",0x14a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostTouch",0x14b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PawnEnteredVolume",0x14c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"MayFall",0x14d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CheckDirectionChange",0x14e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PawnLeavingVolume",0x14f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PhysicsChangedFor",0x167,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorEnteredVolume",0x168,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ActorLeavingVolume",0x169,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Tick",0x150,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PlayerTick",0x151,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"ModifyVelocity",0x152,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"CheckMovementTransition",0x153,0x4000000,(FNameEntry *)0x0)
  ;
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SeePlayer",0x154,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"EnemyNotVisible",0x155,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"HearNoise",0x156,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"UpdateEyeHeight",0x157,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SeeMonster",0x158,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SeeFriend",0x159,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SpecialHandling",0x15a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BotDesireability",0x15b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyBump",0x15c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyPhysicsVolumeChange",0x15d,0x4000000,
                             (FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"AIHearSound",0x15e,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyHeadVolumeChange",0x15f,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyLanded",0x160,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"NotifyHitWall",0x161,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostNetReceive",0x162,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PreBeginPlay",0x163,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"BeginPlay",0x164,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PostBeginPlay",0x165,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"Probe58",0x166,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"PrepareForMove",0x16a,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)&DAT_101d86cc,0x16b,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SceneStarted",0x16c,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  pFVar2 = AllocateNameEntry((ushort *)L"SceneEnded",0x16d,0x4000000,(FNameEntry *)0x0);
  Hardcode(pFVar2);
  this_00 = extraout_ECX;
  for (uVar1 = 0; uVar1 < 0x1000; uVar1 = uVar1 + 1) {
    for (pFVar2 = (FNameEntry *)(&NameHash)[uVar1]; pFVar2 != (FNameEntry *)0x0;
        pFVar2 = *(FNameEntry **)(pFVar2 + 8)) {
      for (pFVar4 = *(FNameEntry **)(pFVar2 + 8); pFVar4 != (FNameEntry *)0x0;
          pFVar4 = *(FNameEntry **)(pFVar4 + 8)) {
        iVar3 = appStricmp((ushort *)(pFVar2 + 0xc),(ushort *)(pFVar4 + 0xc));
        this_00 = extraout_ECX_00;
        if (iVar3 == 0) {
          FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
          this_00 = extraout_ECX_01;
        }
      }
    }
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2fa);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101048cc UObject::execBoolToByte

/* public: void __thiscall UObject::execBoolToByte(struct FFrame &,void * const) */

void __thiscall UObject::execBoolToByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  byte *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x48cc  2158  ?execBoolToByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (byte)param_1 & 1;
  return;
}


// ==== 101048d1 L2ThreadStats::LockEnd

/* public: void __thiscall L2ThreadStats::LockEnd(void) */

void __thiscall L2ThreadStats::LockEnd(L2ThreadStats *this)

{
  L2ThreadStats *pLVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
                    /* 0x48d1  1589  ?LockEnd@L2ThreadStats@@QAEXXZ */
  _Var5 = appCyclesQPC();
  uVar3 = (uint)_Var5 - *(int *)this;
  iVar4 = ((int)(_Var5 >> 0x20) - *(int *)(this + 4)) - (uint)((uint)_Var5 < *(uint *)this);
  if ((iVar4 < 1) && ((iVar4 < 0 || (uVar3 == 0)))) {
    uVar3 = 0;
    iVar4 = 0;
  }
  pLVar1 = this + 8;
  uVar2 = *(uint *)pLVar1;
  *(uint *)pLVar1 = *(uint *)pLVar1 + uVar3;
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + iVar4 + (uint)CARRY4(uVar2,uVar3);
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  return;
}


// ==== 101048d6 TArray<unsigned_short>::TArray<unsigned_short>

/* public: __thiscall TArray<unsigned short>::TArray<unsigned short>(void) */

void __thiscall TArray<unsigned_short>::TArray<unsigned_short>(TArray<unsigned_short> *this)

{
                    /* 0x48d6  4  ??0?$TArray@G@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 101048db UTextBufferFactory::StaticClass

/* public: static class UClass * __cdecl UTextBufferFactory::StaticClass(void) */

UClass * __cdecl UTextBufferFactory::StaticClass(void)

{
                    /* 0x48db  1923  ?StaticClass@UTextBufferFactory@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101048e0 UObject::GetLanguage

/* public: static unsigned short const * __cdecl UObject::GetLanguage(void) */

ushort * __cdecl UObject::GetLanguage(void)

{
                    /* 0x48e0  1343  ?GetLanguage@UObject@@SAPBGXZ */
  return (ushort *)&GLanguage;
}


// ==== 101048ea thunk_FUN_10132820 thunk -> 10132820

// ==== 101048ef thunk_FUN_1012c7a0 thunk -> 1012c7a0

// ==== 101048f4 thunk_FUN_10128140 thunk -> 10128140

// ==== 101048f9 UPackageMap::~UPackageMap

/* public: virtual __thiscall UPackageMap::~UPackageMap(void) */

void __thiscall UPackageMap::~UPackageMap(UPackageMap *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x48f9  342  ??1UPackageMap@@UAE@XZ */
  puStack_8 = &LAB_101b8f24;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 4;
  UObject::ConditionalDestroy((UObject *)this);
  iStack_4._0_1_ = 3;
  thunk_FUN_101181d0();
  iStack_4._0_1_ = 2;
  thunk_FUN_10124110();
  iStack_4._0_1_ = 1;
  thunk_FUN_10123f70();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_10124b40();
  iStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101048fe appSin

/* double __cdecl appSin(double) */

double __cdecl appSin(double param_1)

{
  float10 fVar1;
  
                    /* 0x48fe  2097  ?appSin@@YANN@Z */
  fVar1 = (float10)FUN_1017c430();
  return (double)fVar1;
}


// ==== 10104903 FVehicleRoutePointHit::FVehicleRoutePointHit

/* public: __thiscall FVehicleRoutePointHit::FVehicleRoutePointHit(class AVehicleRoutePoint *,int)
    */

void __thiscall
FVehicleRoutePointHit::FVehicleRoutePointHit
          (FVehicleRoutePointHit *this,AVehicleRoutePoint *param_1,int param_2)

{
                    /* 0x4903  169  ??0FVehicleRoutePointHit@@QAE@PAVAVehicleRoutePoint@@H@Z */
  *(AVehicleRoutePoint **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


// ==== 10104908 winGetSizeANSI

/* int __cdecl winGetSizeANSI(unsigned short const *) */

int __cdecl winGetSizeANSI(ushort *param_1)

{
  int iVar1;
  
                    /* 0x4908  2414  ?winGetSizeANSI@@YAHPBG@Z */
  iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  return iVar1;
}


// ==== 1010490d thunk_FUN_1014f8d0 thunk -> 1014f8d0

// ==== 10104912 thunk_FUN_101484b0 thunk -> 101484b0

// ==== 10104917 UObject::execFRand

/* public: void __thiscall UObject::execFRand(struct FFrame &,void * const) */

void __thiscall UObject::execFRand(UObject *this,FFrame *param_1,void *param_2)

{
  float fVar1;
  
                    /* 0x4917  2218  ?execFRand@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar1 = appFrand();
  *(float *)param_2 = fVar1;
  return;
}


// ==== 1010491c UExporter::UExporter

/* public: __thiscall UExporter::UExporter(class UExporter const &) */

UExporter * __thiscall UExporter::UExporter(UExporter *this,UExporter *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x491c  210  ??0UExporter@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b91e3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10120630(param_1 + 0x38);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(uint *)(this + 0x48) =
       *(uint *)(this + 0x48) ^ (*(uint *)(this + 0x48) ^ *(uint *)(param_1 + 0x48)) & 1;
  *(uint *)(this + 0x48) =
       (*(uint *)(param_1 + 0x48) ^ *(uint *)(this + 0x48)) & 2 ^ *(uint *)(this + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10104921 UArrayProperty::InternalConstructor

/* public: static void __cdecl UArrayProperty::InternalConstructor(void *) */

void __cdecl UArrayProperty::InternalConstructor(void *param_1)

{
                    /* 0x4921  1475  ?InternalConstructor@UArrayProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UArrayProperty(param_1);
    return;
  }
  return;
}


// ==== 10104926 FStringNoInit::operator=

/* public: struct FStringNoInit & __thiscall FStringNoInit::operator=(unsigned short const *) */

FStringNoInit * __thiscall FStringNoInit::operator=(FStringNoInit *this,ushort *param_1)

{
  int iVar1;
  
                    /* 0x4926  497  ??4FStringNoInit@@QAEAAU0@PBG@Z */
  if ((param_1 != (ushort *)0x0) && (*(ushort **)this != param_1)) {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = appStrlen(param_1);
      iVar1 = iVar1 + 1;
    }
    *(int *)(this + 8) = iVar1;
    *(int *)(this + 4) = iVar1;
    FArray::Realloc((FArray *)this,2);
    if (*(int *)(this + 4) != 0) {
      _memcpy(*(void **)this,param_1,*(int *)(this + 4) * 2);
    }
  }
  return this;
}


// ==== 1010492b FString::operator=

/* public: class FString & __thiscall FString::operator=(unsigned short const *) */

FString * __thiscall FString::operator=(FString *this,ushort *param_1)

{
  int iVar1;
  
                    /* 0x492b  494  ??4FString@@QAEAAV0@PBG@Z */
  if (*(ushort **)this != param_1) {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = appStrlen(param_1);
      iVar1 = iVar1 + 1;
    }
    *(int *)(this + 8) = iVar1;
    *(int *)(this + 4) = iVar1;
    FArray::Realloc((FArray *)this,2);
    if (*(int *)(this + 4) != 0) {
      _memcpy(*(void **)this,param_1,*(int *)(this + 4) * 2);
    }
  }
  return this;
}


// ==== 10104930 thunk_FUN_1015d9b0 thunk -> 1015d9b0

// ==== 10104935 L2ThreadUtil::L2ThreadUtil

/* public: __thiscall L2ThreadUtil::L2ThreadUtil(void) */

void __thiscall L2ThreadUtil::L2ThreadUtil(L2ThreadUtil *this)

{
  int iVar1;
  
                    /* 0x4935  181  ??0L2ThreadUtil@@QAE@XZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
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
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2a4) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    *(undefined4 *)(this + iVar1 * 4 + 4) = 0;
  }
  return;
}


// ==== 1010493a FVector::GetNormalized

/* public: class FVector __thiscall FVector::GetNormalized(void) */

void __thiscall FVector::GetNormalized(FVector *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined4 *in_stack_00000004;
  
                    /* 0x493a  1362  ?GetNormalized@FVector@@QAE?AV1@XZ */
  fVar3 = *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  if (1e-08 <= fVar3) {
    dVar4 = appSqrt((double)fVar3);
    fVar3 = 1.0 / (float)dVar4;
    *(float *)this = fVar3 * *(float *)this;
    *(float *)(this + 4) = fVar3 * *(float *)(this + 4);
    *(float *)(this + 8) = fVar3 * *(float *)(this + 8);
    uVar1 = *(undefined4 *)(this + 4);
    *in_stack_00000004 = *(undefined4 *)this;
    uVar2 = *(undefined4 *)(this + 8);
    in_stack_00000004[1] = uVar1;
    in_stack_00000004[2] = uVar2;
    return;
  }
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  return;
}


// ==== 1010493f UObject::execHighNative9

/* public: void __thiscall UObject::execHighNative9(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative9(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x493f  2262  ?execHighNative9@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281b70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10104944 thunk_FUN_101382d0 thunk -> 101382d0

// ==== 10104949 UClass::AddDependency

/* public: void __thiscall UClass::AddDependency(class UClass *,int) */

void __thiscall UClass::AddDependency(UClass *this,UClass *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  FDependency *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x4949  784  ?AddDependency@UClass@@QAEXPAV1@H@Z */
  puStack_c = &LAB_101b6c00;
  pvStack_10 = ExceptionList;
  iVar3 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    if (*(int *)(this + 0x4e0) <= iVar3) break;
    piVar2 = (int *)(*(int *)(this + 0x4dc) + iVar3 * 0xc);
    if ((UClass *)*piVar2 == param_1) {
      puVar1 = (uint *)(piVar2 + 1);
      *puVar1 = *puVar1 | param_2;
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == *(int *)(this + 0x4e0)) {
    this_00 = (FDependency *)thunk_FUN_10114740(0xc,this + 0x4dc);
    if (this_00 != (FDependency *)0x0) {
      FDependency::FDependency(this_00,param_1,param_2);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010494e thunk_FUN_10142960 thunk -> 10142960

// ==== 10104953 UObject::execGreater_FloatFloat

/* WARNING: Removing unreachable block (ram,0x1013d4ce) */
/* public: void __thiscall UObject::execGreater_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execGreater_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x4953  2244  ?execGreater_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10104962 UObject::execAndAnd_BoolBool

/* public: void __thiscall UObject::execAndAnd_BoolBool(struct FFrame &,void * const) */

void __thiscall UObject::execAndAnd_BoolBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_retaddr;
  
                    /* 0x4962  2150  ?execAndAnd_BoolBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar3 = *(ushort **)(param_1 + 0xc);
  uVar2 = *puVar3;
  *(ushort **)(param_1 + 0xc) = puVar3 + 1;
  if (&stack0x00000000 == (undefined1 *)0x4) {
    *unaff_retaddr = 0;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar2;
    return;
  }
  uVar2 = puVar3[1];
  *(int *)(param_1 + 0xc) = (int)puVar3 + 3;
  (*(code *)(&GNatives)[(byte)uVar2])(param_1);
  if ((&stack0x00000000 != (undefined1 *)0x4) && (&stack0x00000000 != (undefined1 *)0x4)) {
    *unaff_ESI = 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return;
  }
  *unaff_ESI = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// ==== 1010496c FBox::TransformBy

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* public: class FBox __thiscall FBox::TransformBy(class FCoords const &)const  */

FCoords * __thiscall FBox::TransformBy(FBox *this,FCoords *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FCoords *this_00;
  FBox *pFVar4;
  float *in_stack_00000008;
  FBox *pFStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x496c  1968  ?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */
  this_00 = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x18] = (FCoords)0x0;
  iStack_2c = 2;
  pFStack_38 = this;
  do {
    iStack_30 = 2;
    param_1 = (FCoords *)(this + 4);
    do {
      iStack_34 = 2;
      pFVar4 = this + 8;
      do {
        fVar1 = *(float *)pFStack_38 - *in_stack_00000008;
        fVar2 = *(float *)param_1 - in_stack_00000008[1];
        fVar3 = *(float *)pFVar4 - in_stack_00000008[2];
        fStack_c = fVar3 * in_stack_00000008[5] +
                   fVar2 * in_stack_00000008[4] + fVar1 * in_stack_00000008[3];
        fStack_4 = fVar3 * in_stack_00000008[0xb] +
                   fVar2 * in_stack_00000008[10] + fVar1 * in_stack_00000008[9];
        fStack_8 = fVar3 * in_stack_00000008[8] +
                   fVar2 * in_stack_00000008[7] + fVar1 * in_stack_00000008[6];
        operator+=((FBox *)this_00,(FVector *)&fStack_c);
        pFVar4 = pFVar4 + 0xc;
        iStack_34 = iStack_34 + -1;
      } while (iStack_34 != 0);
      param_1 = param_1 + 0xc;
      iStack_30 = iStack_30 + -1;
    } while (iStack_30 != 0);
    pFStack_38 = pFStack_38 + 0xc;
    iStack_2c = iStack_2c + -1;
  } while (iStack_2c != 0);
  return this_00;
}


// ==== 10104971 FName::SafeSuppressed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static int __cdecl FName::SafeSuppressed(enum EName) */

int __cdecl FName::SafeSuppressed(EName param_1)

{
                    /* 0x4971  1785  ?SafeSuppressed@FName@@SAHW4EName@@@Z */
  if ((Initialized != 0) && ((*(uint *)(*(int *)(_Names + param_1 * 4) + 4) & 0x1000) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 1010497b UObject::execHighNative1

/* public: void __thiscall UObject::execHighNative1(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative1(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x497b  2254  ?execHighNative1@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_1027fb70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10104980 UTextBufferFactory::UTextBufferFactory

/* public: __thiscall UTextBufferFactory::UTextBufferFactory(class UTextBufferFactory const &) */

UTextBufferFactory * __thiscall
UTextBufferFactory::UTextBufferFactory(UTextBufferFactory *this,UTextBufferFactory *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4980  288  ??0UTextBufferFactory@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9288;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UFactory::UFactory((UFactory *)this,(UFactory *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10104985 FMemStack::Init

/* public: void __thiscall FMemStack::Init(int) */

void __thiscall FMemStack::Init(FMemStack *this,int param_1)

{
  FCriticalSection *this_00;
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x4985  1463  ?Init@FMemStack@@QAEXH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbe8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (FMemStackFrame::MemStackCS == (FCriticalSection *)0x0) {
    ExceptionList = &pvStack_c;
    this_00 = (FCriticalSection *)(*(code *)**(undefined4 **)GMalloc)(4,&DAT_101cd5d8);
    uStack_4 = 0;
    if (this_00 == (FCriticalSection *)0x0) {
      FMemStackFrame::MemStackCS = (FCriticalSection *)0x0;
    }
    else {
      FMemStackFrame::MemStackCS = (FCriticalSection *)FCriticalSection::FCriticalSection(this_00);
    }
  }
  uStack_4 = 0xffffffff;
  iVar1 = 8;
  do {
    FMemStackFrame::Init((FMemStackFrame *)this,param_1);
    this = this + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010498a thunk_FUN_10124550 thunk -> 10124550

// ==== 1010498f FString::Shrink

/* public: void __thiscall FString::Shrink(void) */

void __thiscall FString::Shrink(FString *this)

{
                    /* 0x498f  1873  ?Shrink@FString@@QAEXXZ */
  if (*(int *)(this + 8) != *(int *)(this + 4)) {
    *(int *)(this + 8) = *(int *)(this + 4);
    FArray::Realloc((FArray *)this,2);
  }
  return;
}


// ==== 10104994 FMemCache::Status

/* public: void __thiscall FMemCache::Status(unsigned short *) */

void __thiscall FMemCache::Status(FMemCache *this,ushort *param_1)

{
                    /* 0x4994  1947  ?Status@FMemCache@@QAEXPAG@Z */
  appSprintf(param_1,(ushort *)
                     L"Gets=%04i (%04.1f) Crts=%03i (%04.1f) Fresh=%03iK Stale=%03iK Items=%03i Tick=%04.1f"
             ,*(undefined4 *)(this + 0x10028),
             GSecondsPerCycle * (double)*(int *)(this + 0x10034) * 1000.0,
             *(undefined4 *)(this + 0x1002c),
             (double)*(int *)(this + 0x10030) * GSecondsPerCycle * 1000.0,
             (int)(*(int *)(this + 0x1004c) + (*(int *)(this + 0x1004c) >> 0x1f & 0x3ffU)) >> 10,
             (int)(*(int *)(this + 0x10050) + (*(int *)(this + 0x10050) >> 0x1f & 0x3ffU)) >> 10,
             *(int *)(this + 0x10048) + *(int *)(this + 0x10040) + *(int *)(this + 0x1003c),
             (double)*(int *)(this + 0x10038) * GSecondsPerCycle * 1000.0);
  *(undefined4 *)(this + 0x10038) = 0;
  *(undefined4 *)(this + 0x10030) = 0;
  *(undefined4 *)(this + 0x1002c) = 0;
  *(undefined4 *)(this + 0x10034) = 0;
  *(undefined4 *)(this + 0x10028) = 0;
  return;
}


// ==== 10104999 UObjectExporterT3D::InternalConstructor

/* public: static void __cdecl UObjectExporterT3D::InternalConstructor(void *) */

void __cdecl UObjectExporterT3D::InternalConstructor(void *param_1)

{
                    /* 0x4999  1493  ?InternalConstructor@UObjectExporterT3D@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UObjectExporterT3D(param_1);
    return;
  }
  return;
}


// ==== 1010499e UObject::AddToRoot

/* public: void __thiscall UObject::AddToRoot(void) */

void __thiscall UObject::AddToRoot(UObject *this)

{
  UObject *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x499e  794  ?AddToRoot@UObject@@QAEXXZ */
  puStack_c = &LAB_101bcf80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  thunk_FUN_101287a0(&pUStack_18);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101049a3 appCyclesQPC

/* unsigned __int64 __cdecl appCyclesQPC(void) */

__uint64 __cdecl appCyclesQPC(void)

{
  LARGE_INTEGER LStack_8;
  
                    /* 0x49a3  2034  ?appCyclesQPC@@YA_KXZ */
  QueryPerformanceCounter(&LStack_8);
  return (__uint64)LStack_8;
}


// ==== 101049a8 UDelegateProperty::UDelegateProperty

/* public: __thiscall UDelegateProperty::UDelegateProperty(enum ECppProperty,int,unsigned short
   const *,unsigned long) */

UDelegateProperty * __thiscall
UDelegateProperty::UDelegateProperty
          (UDelegateProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x49a8  205  ??0UDelegateProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101049ad FRegistryObjectInfo::FRegistryObjectInfo

/* public: __thiscall FRegistryObjectInfo::FRegistryObjectInfo(class FRegistryObjectInfo const &) */

FRegistryObjectInfo * __thiscall
FRegistryObjectInfo::FRegistryObjectInfo(FRegistryObjectInfo *this,FRegistryObjectInfo *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x49ad  125  ??0FRegistryObjectInfo@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7334;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  uStack_4._0_1_ = 1;
  FString::FString((FString *)(this + 0x18),(FString *)(param_1 + 0x18));
  uStack_4._0_1_ = 2;
  FString::FString((FString *)(this + 0x24),(FString *)(param_1 + 0x24));
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  FString::FString((FString *)(this + 0x30),(FString *)(param_1 + 0x30));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101049b2 UObject::FindIntProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindIntProperty(class FString,int *) */

int __thiscall
UObject::FindIntProperty
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
  
                    /* 0x49b2  1008  ?FindIntProperty@UObject@@QAEHVFString@@PAH@Z */
  puStack_8 = &LAB_101bce70;
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
      if (pUVar1 == &UIntProperty::PrivateStaticClass) {
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


// ==== 101049b7 FPlane::TransformBy

/* public: class FPlane __thiscall FPlane::TransformBy(class FCoords const &)const  */

float * __thiscall FPlane::TransformBy(FPlane *this,FCoords *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float unaff_ESI;
  float *unaff_retaddr;
  float fStack00000008;
  float fStack_34;
  float fStack_30;
  FVector aFStack_28 [24];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x49b7  1970  ?TransformBy@FPlane@@QBE?AV1@ABVFCoords@@@Z */
  thunk_FUN_1010f5b0();
  fStack00000008 = *(float *)(this + 0xc);
  fStack_10 = fStack00000008 * *(float *)this;
  fStack_c = *(float *)(this + 4) * fStack00000008;
  fStack_8 = *(float *)(this + 8) * fStack00000008;
  fStack_4 = fStack00000008 * *(float *)(this + 0xc);
  thunk_FUN_1010f510();
  pfVar4 = (float *)FVector::SafeNormal(aFStack_28);
  fVar1 = pfVar4[1];
  fVar2 = *pfVar4;
  *unaff_retaddr = *pfVar4;
  unaff_retaddr[1] = pfVar4[1];
  fVar3 = pfVar4[2];
  unaff_retaddr[2] = pfVar4[2];
  unaff_retaddr[3] = fVar3 * fStack_30 + fVar2 * unaff_ESI + fVar1 * fStack_34;
  return unaff_retaddr;
}


// ==== 101049bc FMoverHit::FMoverHit

/* public: __thiscall FMoverHit::FMoverHit(class AMover *,int) */

void __thiscall FMoverHit::FMoverHit(FMoverHit *this,AMover *param_1,int param_2)

{
                    /* 0x49bc  81  ??0FMoverHit@@QAE@PAVAMover@@H@Z */
  *(AMover **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


// ==== 101049c1 UFixedArrayProperty::operator_new

/* public: static void * __cdecl UFixedArrayProperty::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
UFixedArrayProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x49c1  377  ??2UFixedArrayProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101049d5 thunk_FUN_1015c160 thunk -> 1015c160

// ==== 101049da thunk_FUN_10125bb0 thunk -> 10125bb0

// ==== 101049df FCodec::Encode

/* public: virtual int __thiscall FCodec::Encode(char const *,char const *,unsigned char *,unsigned
   long,unsigned char *,unsigned long &,int) */

int __thiscall
FCodec::Encode(FCodec *this,char *param_1,char *param_2,uchar *param_3,ulong param_4,uchar *param_5,
              ulong *param_6,int param_7)

{
                    /* 0x49df  948  ?Encode@FCodec@@UAEHPBD0PAEK1AAKH@Z */
  return 0;
}


// ==== 101049e4 UObject::UObject

/* public: __thiscall UObject::UObject(class UObject const &) */

UObject * __thiscall UObject::UObject(UObject *this,UObject *param_1)

{
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x49e4  247  ??0UObject@@QAE@ABV0@@Z */
  puStack_c = &LAB_101bd290;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  GObjCurCount = GObjCurCount + 1;
  GObjNewCount = GObjNewCount + 1;
  if (GObjPeakCount < GObjCurCount) {
    GObjPeakCount = GObjCurCount;
  }
  if (param_1 == (UObject *)0x0) {
    appFailAssert("&Src",".\\UnObj.cpp",0x51);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(this + 0x24)) {
    GetFullName(param_1,(ushort *)0x0);
    GetFullName(this,(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101049e9 TArray<unsigned_short>::TArray<unsigned_short>

/* public: __thiscall TArray<unsigned short>::TArray<unsigned short>(int) */

TArray<unsigned_short> * __thiscall
TArray<unsigned_short>::TArray<unsigned_short>(TArray<unsigned_short> *this,int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x49e9  2  ??0?$TArray@G@@QAE@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = 0;
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_1;
  FArray::Realloc((FArray *)this,2);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101049f3 thunk_FUN_1012a530 thunk -> 1012a530

// ==== 101049f8 FPlane::operator/=

/* public: class FPlane __thiscall FPlane::operator/=(float) */

void __thiscall FPlane::operator/=(FPlane *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float in_stack_00000008;
  
                    /* 0x49f8  698  ??_0FPlane@@QAE?AV0@M@Z */
  fVar3 = 1.0 / in_stack_00000008;
  *(float *)this = fVar3 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * fVar3;
  *(float *)(this + 8) = *(float *)(this + 8) * fVar3;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  fVar1 = *(float *)(this + 0xc);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(float *)(this + 0xc) = fVar3 * fVar1;
  uVar2 = *(undefined4 *)(this + 8);
  *(float *)((int)param_1 + 0xc) = fVar3 * fVar1;
  *(undefined4 *)((int)param_1 + 8) = uVar2;
  return;
}


// ==== 10104a02 FTransactionBase::FTransactionBase

/* public: __thiscall FTransactionBase::FTransactionBase(class FTransactionBase const &) */

void __thiscall FTransactionBase::FTransactionBase(FTransactionBase *this,FTransactionBase *param_1)

{
                    /* 0x4a02  163  ??0FTransactionBase@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10108420 FUN_10108420

void FUN_10108420(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 3;
  for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


// ==== 10108450 FUN_10108450

void FUN_10108450(void)

{
  return;
}


// ==== 10108460 FUN_10108460

void FUN_10108460(void)

{
  return;
}


// ==== 10108470 FUN_10108470

void FUN_10108470(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FOutputDevice::vftable;
  return;
}


// ==== 10108480 FUN_10108480

void FUN_10108480(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FOutputDevice::vftable;
  return;
}


// ==== 10108490 FUN_10108490

void FUN_10108490(void)

{
  return;
}


// ==== 101084a0 FUN_101084a0

void FUN_101084a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FOutputDeviceError::vftable;
  return;
}


// ==== 101084b0 FUN_101084b0

void FUN_101084b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FOutputDeviceError::vftable;
  return;
}


// ==== 101084c0 FUN_101084c0

void FUN_101084c0(void)

{
  return;
}


// ==== 101084d0 FUN_101084d0

undefined4 FUN_101084d0(void)

{
  return 0;
}


// ==== 101084e0 FUN_101084e0

undefined4 FUN_101084e0(void)

{
  return 0;
}


// ==== 101084f0 FUN_101084f0

undefined4 FUN_101084f0(void)

{
  return 0;
}


// ==== 10108500 FUN_10108500

undefined4 FUN_10108500(void)

{
  return 0;
}


// ==== 10108510 FUN_10108510

undefined4 FUN_10108510(void)

{
  return 0;
}


// ==== 10108520 FUN_10108520

undefined4 FUN_10108520(void)

{
  return 0;
}


// ==== 10108530 FUN_10108530

void FUN_10108530(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FMalloc::vftable;
  return;
}


// ==== 10108540 FUN_10108540

void FUN_10108540(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FMalloc::vftable;
  return;
}


// ==== 10108550 FUN_10108550

void FUN_10108550(void)

{
  return;
}


// ==== 10108560 FUN_10108560

void FUN_10108560(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FExec::vftable;
  return;
}


// ==== 10108570 FUN_10108570

void FUN_10108570(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FExec::vftable;
  return;
}


// ==== 10108580 FUN_10108580

void FUN_10108580(void)

{
  return;
}


// ==== 10108590 FUN_10108590

void FUN_10108590(void)

{
  return;
}


// ==== 101085a0 FUN_101085a0

void FUN_101085a0(void)

{
  return;
}


// ==== 101085b0 FUN_101085b0

void FUN_101085b0(void)

{
  return;
}


// ==== 101085c0 FUN_101085c0

void FUN_101085c0(void)

{
  return;
}


// ==== 101085d0 FUN_101085d0

void FUN_101085d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNotifyHook::vftable;
  return;
}


// ==== 101085e0 FUN_101085e0

void FUN_101085e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNotifyHook::vftable;
  return;
}


// ==== 101085f0 FUN_101085f0

void FUN_101085f0(void)

{
  return;
}


// ==== 10108600 FUN_10108600

void FUN_10108600(void)

{
  return;
}


// ==== 10108610 FUN_10108610

void FUN_10108610(void)

{
  return;
}


// ==== 10108620 FUN_10108620

void FUN_10108620(void)

{
  return;
}


// ==== 10108630 FUN_10108630

void FUN_10108630(void)

{
  return;
}


// ==== 10108640 FUN_10108640

void FUN_10108640(void)

{
  return;
}


// ==== 10108650 FUN_10108650

void FUN_10108650(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FFeedbackContext::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10108670 FUN_10108670

void FUN_10108670(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FFeedbackContext::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 101086a0 FUN_101086a0

void FUN_101086a0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 101086c0 FUN_101086c0

void FUN_101086c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FTransactionBase::vftable;
  return;
}


// ==== 101086d0 FUN_101086d0

void FUN_101086d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FTransactionBase::vftable;
  return;
}


// ==== 101086e0 FUN_101086e0

void FUN_101086e0(void)

{
  return;
}


// ==== 101086f0 FUN_101086f0

void FUN_101086f0(void)

{
  return;
}


// ==== 10108700 FUN_10108700

undefined4 FUN_10108700(void)

{
  return 0;
}


// ==== 10108710 appBaseDir thunk -> 10101fe6

// ==== 10108720 FUN_10108720

void FUN_10108720(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FFileManager::vftable;
  return;
}


// ==== 10108730 FUN_10108730

void FUN_10108730(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FFileManager::vftable;
  return;
}


// ==== 10108740 FUN_10108740

void FUN_10108740(void)

{
  return;
}


// ==== 10108750 FUN_10108750

void FUN_10108750(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10108760 FUN_10108760

void FUN_10108760(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10108770 FUN_10108770

void FUN_10108770(void)

{
  return;
}


// ==== 10108780 FUN_10108780

void FUN_10108780(void)

{
  return;
}


// ==== 10108790 FUN_10108790

void FUN_10108790(void)

{
  return;
}


// ==== 101087a0 FUN_101087a0

undefined4 FUN_101087a0(void)

{
  return 0;
}


// ==== 101087b0 FUN_101087b0

undefined4 FUN_101087b0(void)

{
  return 0;
}


// ==== 101087c0 FUN_101087c0

undefined4 FUN_101087c0(void)

{
  return 0;
}


// ==== 101087d0 FUN_101087d0

undefined4 FUN_101087d0(void)

{
  return 0;
}


// ==== 101087e0 FUN_101087e0

undefined4 FUN_101087e0(void)

{
  return 0;
}


// ==== 101087f0 FUN_101087f0

undefined4 FUN_101087f0(void)

{
  return 0;
}


// ==== 10108800 FUN_10108800

void FUN_10108800(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FCodec::vftable;
  return;
}


// ==== 10108810 FUN_10108810

void FUN_10108810(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FCodec::vftable;
  return;
}


// ==== 10108820 FUN_10108820

void FUN_10108820(void)

{
  return;
}


// ==== 10108830 FUN_10108830

void FUN_10108830(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 101088a0 FUN_101088a0

void FUN_101088a0(undefined4 param_1)

{
  (*(code *)**(undefined4 **)GMalloc)(param_1,&DAT_101cd5d8);
  return;
}


// ==== 101088c0 FUN_101088c0

void FUN_101088c0(undefined4 param_1)

{
  (**(code **)(*(int *)GMalloc + 8))(param_1);
  return;
}


// ==== 101088e0 FUN_101088e0

void FUN_101088e0(undefined4 param_1,undefined4 param_2)

{
  (*(code *)**(undefined4 **)GMalloc)(param_1,param_2);
  return;
}


// ==== 10108900 FUN_10108900

void FUN_10108900(undefined4 param_1)

{
  (**(code **)(*(int *)GMalloc + 8))(param_1);
  return;
}


// ==== 10108920 FUN_10108920

void FUN_10108920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 10108930 FUN_10108930

void FUN_10108930(void)

{
  return;
}


// ==== 10108940 FUN_10108940

void FUN_10108940(void)

{
  return;
}


// ==== 10108950 FUN_10108950

void FUN_10108950(void)

{
  return;
}


// ==== 10108960 FUN_10108960

void FUN_10108960(void)

{
  return;
}


// ==== 10108970 FUN_10108970

void FUN_10108970(void)

{
  return;
}


// ==== 10108980 FUN_10108980

undefined4 FUN_10108980(void)

{
  return 0;
}


// ==== 10108990 FUN_10108990

undefined4 FUN_10108990(void)

{
  return 0;
}


// ==== 101089a0 FUN_101089a0

undefined4 FUN_101089a0(void)

{
  return 0xffffffff;
}


// ==== 101089b0 FUN_101089b0

undefined4 FUN_101089b0(void)

{
  return 0xffffffff;
}


// ==== 101089c0 FUN_101089c0

undefined4 FUN_101089c0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x28))();
  if (iVar1 != -1) {
    iVar2 = (**(code **)(*in_ECX + 0x2c))();
    if (iVar2 <= iVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== 10108a00 FUN_10108a00

undefined4 FUN_10108a00(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x28))();
  if (((iVar1 != -1) && (in_ECX[0xd] != -1)) && (in_ECX[0xd] <= iVar1)) {
    return 1;
  }
  return 0;
}


// ==== 10108a30 FUN_10108a30

void FUN_10108a30(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  return;
}


// ==== 10108a40 FUN_10108a40

void FUN_10108a40(void)

{
  return;
}


// ==== 10108a50 FUN_10108a50

void FUN_10108a50(void)

{
  return;
}


// ==== 10108a60 FUN_10108a60

void FUN_10108a60(void)

{
  return;
}


// ==== 10108a70 FUN_10108a70

void FUN_10108a70(void)

{
  return;
}


// ==== 10108a80 FUN_10108a80

void FUN_10108a80(void)

{
  return;
}


// ==== 10108a90 FUN_10108a90

void FUN_10108a90(void)

{
  return;
}


// ==== 10108aa0 FUN_10108aa0

void FUN_10108aa0(void)

{
  return;
}


// ==== 10108ab0 FUN_10108ab0

bool FUN_10108ab0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x2c) == 0;
}


// ==== 10108ac0 FUN_10108ac0

undefined4 FUN_10108ac0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2c);
}


// ==== 10108ad0 FUN_10108ad0

void FUN_10108ad0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 4))(param_1,param_2);
  return;
}


// ==== 10108b00 FUN_10108b00

undefined4 FUN_10108b00(void)

{
  return 0;
}


// ==== 10108b10 FUN_10108b10

void FUN_10108b10(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x30) = 1;
  return;
}


// ==== 10108b20 FUN_10108b20

void FUN_10108b20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  return;
}


// ==== 10108b80 FUN_10108b80

undefined4 FUN_10108b80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 10108b90 FUN_10108b90

uint FUN_10108b90(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 8) & 0x7fffffff;
}


// ==== 10108ba0 FUN_10108ba0

undefined4 FUN_10108ba0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 10108bb0 FUN_10108bb0

undefined4 FUN_10108bb0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 10108bc0 FUN_10108bc0

undefined4 FUN_10108bc0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 10108bd0 FUN_10108bd0

undefined4 FUN_10108bd0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 10108be0 FUN_10108be0

uint FUN_10108be0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 8) >> 0x1f;
}


// ==== 10108bf0 FUN_10108bf0

undefined4 FUN_10108bf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 10108c00 FUN_10108c00

undefined4 FUN_10108c00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2c);
}


// ==== 10108c10 FUN_10108c10

undefined4 FUN_10108c10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x20);
}


// ==== 10108c20 FUN_10108c20

undefined4 FUN_10108c20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x24);
}


// ==== 10108c30 FUN_10108c30

undefined4 FUN_10108c30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x28);
}


// ==== 10108c40 FUN_10108c40

undefined4 FUN_10108c40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x30);
}


// ==== 10108c50 FUN_10108c50

int * FUN_10108c50(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,4);
  return param_1;
}


// ==== 10108c70 FUN_10108c70

void FUN_10108c70(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
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
  return;
}


// ==== 10108cf0 FUN_10108cf0

void FUN_10108cf0(int param_1)

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
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}


// ==== 10108d90 FUN_10108d90

undefined4 * FUN_10108d90(byte param_1)

{
  undefined4 *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,in_ECX[-1],FArchive::~FArchive);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -1);
    }
    return in_ECX + -1;
  }
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return in_ECX;
}


// ==== 10108e10 FUN_10108e10

void FUN_10108e10(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10108e20 FUN_10108e20

void FUN_10108e20(void *param_1)

{
  void *in_ECX;
  
  _memcpy(in_ECX,param_1,0x1048);
  return;
}


// ==== 10108ea0 FUN_10108ea0

undefined4 FUN_10108ea0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 10108eb0 FUN_10108eb0

undefined4 FUN_10108eb0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 10108ec0 FUN_10108ec0

undefined4 FUN_10108ec0(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 4))) {
    return 1;
  }
  return 0;
}


// ==== 10108ee0 FUN_10108ee0

undefined4 FUN_10108ee0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 10108ef0 FUN_10108ef0

void FUN_10108ef0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + param_2;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,param_3);
  }
  appMemmove((void *)((param_1 + param_2) * param_3 + *(int *)in_ECX),
             (void *)(param_1 * param_3 + *(int *)in_ECX),(iVar2 - param_1) * param_3);
  return;
}


// ==== 10108fb0 FUN_10108fb0

undefined4 FUN_10108fb0(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return 0;
}


// ==== 10108fe0 FUN_10108fe0

undefined4 FUN_10108fe0(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return 0;
}


// ==== 10109010 FUN_10109010

void FUN_10109010(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return;
}


// ==== 10109040 FUN_10109040

void FUN_10109040(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return;
}


// ==== 10109060 FUN_10109060

void FUN_10109060(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return;
}


// ==== 10109080 FUN_10109080

void FUN_10109080(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return;
}


// ==== 101090a0 FUN_101090a0

void FUN_101090a0(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return;
}


// ==== 101090c0 FUN_101090c0

int FUN_101090c0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,param_2);
  }
  return iVar1;
}


// ==== 10109110 FUN_10109110

int FUN_10109110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = param_2 + iVar2;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,param_1);
  }
  uVar4 = param_1 * param_2 & 3;
  puVar5 = (undefined4 *)(iVar2 * param_1 + *(int *)in_ECX);
  for (uVar3 = (uint)(param_1 * param_2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return iVar2;
}


// ==== 101091a0 FUN_101091a0

void FUN_101091a0(int param_1)

{
  FArray *in_ECX;
  
  if (*(int *)(in_ECX + 8) != *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4);
    FArray::Realloc(in_ECX,param_1);
    return;
  }
  return;
}


// ==== 101091c0 FUN_101091c0

void FUN_101091c0(int param_1,undefined4 param_2)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_2;
  FArray::Realloc(in_ECX,param_1);
  return;
}


// ==== 101091f0 FUN_101091f0

void FUN_101091f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10109200 FUN_10109200

void FUN_10109200(void)

{
  return;
}


// ==== 10109210 FUN_10109210

void FUN_10109210(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 10109250 FUN_10109250

void FUN_10109250(int *param_1,int param_2)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * param_2,*(int *)(in_ECX + 8) * param_2);
  return;
}


// ==== 10109280 FUN_10109280

void FUN_10109280(undefined4 param_1,int param_2)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined4 *)in_ECX = 0;
  FArray::Realloc(in_ECX,param_2);
  return;
}


// ==== 101092b0 FUN_101092b0

void FUN_101092b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 101092e0 FUN_101092e0

undefined4 FUN_101092e0(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return 0;
}


// ==== 10109300 FUN_10109300

undefined4 FUN_10109300(void)

{
  FOutputDevice *in_ECX;
  
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  return 0;
}


// ==== 10109320 FUN_10109320

undefined4 FUN_10109320(void)

{
  return 0xffffffff;
}


// ==== 10109330 FUN_10109330

undefined4 FUN_10109330(void)

{
  return 0;
}


// ==== 10109340 FUN_10109340

undefined4 FUN_10109340(void)

{
  return 1;
}


// ==== 10109350 FUN_10109350

undefined4 FUN_10109350(void)

{
  return 0;
}


// ==== 10109360 FUN_10109360

undefined8 FUN_10109360(void)

{
  return 0;
}


// ==== 10109370 FUN_10109370

undefined4 FUN_10109370(void)

{
  return 0;
}


// ==== 10109380 FUN_10109380

undefined4 FUN_10109380(void)

{
  return 0;
}


// ==== 10109390 FUN_10109390

undefined4 FUN_10109390(void)

{
  return 0;
}


// ==== 101093a0 FUN_101093a0

undefined4 FUN_101093a0(void)

{
  return 0;
}


// ==== 101093b0 FUN_101093b0

void FUN_101093b0(void)

{
  return;
}


// ==== 101093c0 FUN_101093c0

void FUN_101093c0(void)

{
  return;
}


// ==== 101093d0 FUN_101093d0

void FUN_101093d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FErrorOutError::vftable;
  return;
}


// ==== 101093e0 FUN_101093e0

void FUN_101093e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FErrorOutError::vftable;
  return;
}


// ==== 101093f0 FUN_101093f0

void FUN_101093f0(void)

{
  return;
}


// ==== 10109400 FUN_10109400

void FUN_10109400(void)

{
  return;
}


// ==== 10109410 FUN_10109410

void FUN_10109410(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FLogOutError::vftable;
  return;
}


// ==== 10109420 FUN_10109420

void FUN_10109420(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FLogOutError::vftable;
  return;
}


// ==== 10109430 FUN_10109430

void FUN_10109430(void)

{
  return;
}


// ==== 10109440 FUN_10109440

void FUN_10109440(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_101f8198);
}


// ==== 10109460 FUN_10109460

void FUN_10109460(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FThrowOut::vftable;
  return;
}


// ==== 10109470 FUN_10109470

void FUN_10109470(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FThrowOut::vftable;
  return;
}


// ==== 10109480 FUN_10109480

void FUN_10109480(void)

{
  return;
}


// ==== 10109490 FUN_10109490

void FUN_10109490(void)

{
  return;
}


// ==== 101094a0 FUN_101094a0

int FUN_101094a0(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 2;
}


// ==== 101094b0 FUN_101094b0

void FUN_101094b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNullOutError::vftable;
  return;
}


// ==== 101094c0 FUN_101094c0

void FUN_101094c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNullOutError::vftable;
  return;
}


// ==== 101094d0 FUN_101094d0

int FUN_101094d0(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 2;
}


// ==== 101094e0 FUN_101094e0

void FUN_101094e0(void)

{
  return;
}


// ==== 101094f0 FUN_101094f0

void FUN_101094f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  *in_ECX = FArchiveDummySave::vftable;
  in_ECX[5] = 1;
  return;
}


// ==== 101095a0 FUN_101095a0

void FUN_101095a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 101095f0 FUN_101095f0

void FUN_101095f0(FArchive *param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(in_ECX,param_1);
  *(undefined ***)in_ECX = FArchiveDummySave::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10109660 FUN_10109660

void FUN_10109660(int param_1)

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
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}


// ==== 101096d0 FUN_101096d0

void FUN_101096d0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6688;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10109740 FUN_10109740

bool FUN_10109740(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) != 0;
}


// ==== 10109750 FUN_10109750

undefined4 * FUN_10109750(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b66a8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(in_ECX,0x38,in_ECX[-1],FArchiveDummySave::~FArchiveDummySave);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -1);
    }
    ExceptionList = local_c;
    return in_ECX + -1;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10109820 FUN_10109820

void FUN_10109820(void)

{
  return;
}


// ==== 10109830 FUN_10109830

undefined4 FUN_10109830(void)

{
  return 0;
}


// ==== 10109840 FUN_10109840

undefined4 FUN_10109840(void)

{
  return 0;
}


// ==== 10109850 FUN_10109850

undefined4 FUN_10109850(void)

{
  return 0;
}


// ==== 10109860 FUN_10109860

void FUN_10109860(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FDummyCodec::vftable;
  return;
}


// ==== 10109870 FUN_10109870

void FUN_10109870(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FDummyCodec::vftable;
  return;
}


// ==== 10109880 FUN_10109880

void FUN_10109880(void)

{
  return;
}


// ==== 10109890 FUN_10109890

undefined4 FUN_10109890(undefined4 param_1)

{
  DAT_1023c664 = param_1;
  return 1;
}


// ==== 101098b0 FUN_101098b0

void FUN_101098b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10109900 FUN_10109900

int FUN_10109900(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    return *(int *)(in_ECX + 4) + -1;
  }
  return 0;
}


// ==== 10109920 FUN_10109920

void FUN_10109920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10109990 FUN_10109990

void FUN_10109990(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  *in_ECX = FBufferReader::vftable;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = 0;
  in_ECX[6] = 1;
  in_ECX[4] = 1;
  return;
}


// ==== 10109a50 FUN_10109a50

undefined4 FUN_10109a50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}


// ==== 10109a60 FUN_10109a60

undefined4 FUN_10109a60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x38) + 4);
}


// ==== 10109a70 FUN_10109a70

void FUN_10109a70(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("InPos>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x709);
  }
  if (*(int *)(*(int *)(in_ECX + 0x38) + 4) < param_1) {
    appFailAssert("InPos<=Bytes.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x70a);
  }
  *(int *)(in_ECX + 0x3c) = param_1;
  return;
}


// ==== 10109ad0 FUN_10109ad0

bool FUN_10109ad0(void)

{
  int in_ECX;
  
  return *(int *)(*(int *)(in_ECX + 0x38) + 4) <= *(int *)(in_ECX + 0x3c);
}


// ==== 10109af0 FUN_10109af0

void FUN_10109af0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 10109b40 FUN_10109b40

void FUN_10109b40(FArchive *param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(in_ECX,param_1);
  *(undefined ***)in_ECX = FBufferReader::vftable;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 10109bc0 FUN_10109bc0

void FUN_10109bc0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6768;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10109c30 FUN_10109c30

undefined4 * FUN_10109c30(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6788;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(in_ECX,0x40,in_ECX[-1],FBufferReader::~FBufferReader);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -1);
    }
    ExceptionList = local_c;
    return in_ECX + -1;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10109d00 FUN_10109d00

void FUN_10109d00(void)

{
  return;
}


// ==== 10109d10 FUN_10109d10

void FUN_10109d10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


// ==== 10109d20 FUN_10109d20

void FUN_10109d20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10109d30 FUN_10109d30

undefined4 FUN_10109d30(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 10109d40 FUN_10109d40

bool FUN_10109d40(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX == *param_1;
}


// ==== 10109d60 FUN_10109d60

bool FUN_10109d60(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX != *param_1;
}


// ==== 10109d80 FUN_10109d80

void FUN_10109d80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


// ==== 10109d90 FUN_10109d90

void FUN_10109d90(void)

{
  return;
}


// ==== 10109da0 FUN_10109da0

undefined4 FUN_10109da0(void)

{
  return DAT_10327ae4;
}


// ==== 10109db0 FUN_10109db0

int FUN_10109db0(void)

{
  return FName::Initialized;
}


// ==== 10109dc0 FUN_10109dc0

void FUN_10109dc0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10109dd0 FUN_10109dd0

void FUN_10109dd0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FFrame::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 10109e10 FUN_10109e10

void FUN_10109e10(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 10109e40 FUN_10109e40

void FUN_10109e40(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FFrame::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  *in_ECX = FStateFrame::vftable;
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10109eb0 FUN_10109eb0

void FUN_10109eb0(int param_1)

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
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10109f10 FUN_10109f10

void FUN_10109f10(void)

{
  return;
}


// ==== 10109f20 CRect::CRect

/* Library Function - Single Match
    public: __thiscall CRect::CRect(int,int,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CRect::CRect(CRect *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}


// ==== 10109f50 FUN_10109f50

ushort * FUN_10109f50(void)

{
  ushort *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = appStaticString1024();
  appSprintf(puVar1,(ushort *)L"%08X%08X%08X%08X",*in_ECX,in_ECX[1],in_ECX[2],in_ECX[3]);
  return puVar1;
}


// ==== 10109f90 FUN_10109f90

void FUN_10109f90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10109fc0 FUN_10109fc0

undefined4 FUN_10109fc0(void)

{
  return 0;
}


// ==== 10109fd0 FUN_10109fd0

undefined4 FUN_10109fd0(void)

{
  return 0;
}


// ==== 10109fe0 FUN_10109fe0

undefined4 FUN_10109fe0(void)

{
  return 0;
}


// ==== 10109ff0 FUN_10109ff0

void FUN_10109ff0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FUnknown::vftable;
  return;
}


// ==== 1010a000 FUN_1010a000

void FUN_1010a000(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FUnknown::vftable;
  return;
}


// ==== 1010a010 FUN_1010a010

void FUN_1010a010(void)

{
  return;
}


// ==== 1010a020 FUN_1010a020

void FUN_1010a020(void)

{
  return;
}


// ==== 1010a030 FUN_1010a030

void FUN_1010a030(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010a050 FUN_1010a050

UClass * FUN_1010a050(void)

{
  return &UObject::PrivateStaticClass;
}


// ==== 1010a060 FUN_1010a060

void FUN_1010a060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UObject::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010a0a0 FUN_1010a0a0

undefined4 FUN_1010a0a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010a0b0 FUN_1010a0b0

wchar_t * FUN_1010a0b0(void)

{
  return L"System";
}


// ==== 1010a0c0 FUN_1010a0c0

void FUN_1010a0c0(UObject *param_1)

{
  if (param_1 != (UObject *)0x0) {
    UObject::UObject(param_1);
    return;
  }
  return;
}


// ==== 1010a0e0 FUN_1010a0e0

void FUN_1010a0e0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b67a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)GMalloc + 8))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1010a131 Catch@1010a131

void Catch_1010a131(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1010a145 Catch@1010a145

void Catch_1010a145(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"UObject::operator delete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010a190 FUN_1010a190

undefined4 FUN_1010a190(void)

{
  return 0;
}


// ==== 1010a1a0 FUN_1010a1a0

void FUN_1010a1a0(void)

{
  return;
}


// ==== 1010a1b0 FUN_1010a1b0

uint FUN_1010a1b0(uint param_1)

{
  return param_1 & 0xfff;
}


// ==== 1010a1c0 FUN_1010a1c0

undefined4 FUN_1010a1c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x28);
}


// ==== 1010a1d0 FUN_1010a1d0

void FUN_1010a1d0(void)

{
  return;
}


// ==== 1010a1e0 FUN_1010a1e0

undefined4 FUN_1010a1e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x24);
}


// ==== 1010a1f0 FUN_1010a1f0

void FUN_1010a1f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = param_1;
  return;
}


// ==== 1010a200 FUN_1010a200

undefined4 FUN_1010a200(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 1010a210 FUN_1010a210

void FUN_1010a210(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | param_1;
  return;
}


// ==== 1010a220 FUN_1010a220

void FUN_1010a220(uint param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & ~param_1;
  return;
}


// ==== 1010a230 FUN_1010a230

void FUN_1010a230(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x20);
  return;
}


// ==== 1010a240 FUN_1010a240

undefined4 FUN_1010a240(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010a250 FUN_1010a250

undefined4 FUN_1010a250(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 1010a260 FUN_1010a260

undefined4 FUN_1010a260(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 1010a270 FUN_1010a270

undefined4 FUN_1010a270(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 1010a280 FUN_1010a280

undefined4 FUN_1010a280(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1010a290 FUN_1010a290

void FUN_1010a290(void)

{
  UFunction *pUVar1;
  UObject *in_ECX;
  
  pUVar1 = UObject::FindFunctionChecked(in_ECX,0x13c,0,0,0);
  (**(code **)(*(int *)in_ECX + 0x10))(pUVar1);
  return;
}


// ==== 1010a2c0 FUN_1010a2c0

void FUN_1010a2c0(void)

{
  UFunction *pUVar1;
  UObject *in_ECX;
  
  pUVar1 = UObject::FindFunctionChecked(in_ECX,0x13d,0,0,0);
  (**(code **)(*(int *)in_ECX + 0x10))(pUVar1);
  return;
}


// ==== 1010a2f0 FUN_1010a2f0

TArray<UObject*> * FUN_1010a2f0(void)

{
  return &UObject::GObjLoaded;
}


// ==== 1010a300 FUN_1010a300

int FUN_1010a300(void)

{
  return UObject::GImportCount;
}


// ==== 1010a310 FUN_1010a310

void FUN_1010a310(int param_1)

{
  UObject::GImportCount = param_1;
  return;
}


// ==== 1010a320 FUN_1010a320

void FUN_1010a320(_func_void_float *param_1)

{
  UObject::LoadingProgress = param_1;
  return;
}


// ==== 1010a330 FUN_1010a330

void FUN_1010a330(void)

{
  UObject::LoadingProgress = (_func_void_float *)0x0;
  return;
}


// ==== 1010a360 FUN_1010a360

void FUN_1010a360(void)

{
  return;
}


// ==== 1010a370 FUN_1010a370

void FUN_1010a370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1010a390 FUN_1010a390

void FUN_1010a390(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010a3b0 FUN_1010a3b0

int FUN_1010a3b0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0xc);
}


// ==== 1010a3c0 FUN_1010a3c0

undefined4 FUN_1010a3c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 1010a3d0 FUN_1010a3d0

void FUN_1010a3d0(void)

{
  FPackageInfo *in_ECX;
  
  FPackageInfo::FPackageInfo(in_ECX,(ULinkerLoad *)0x0);
  return;
}


// ==== 1010a3e0 FUN_1010a3e0

UClass * FUN_1010a3e0(void)

{
  return &UPackageMap::PrivateStaticClass;
}


// ==== 1010a3f0 FUN_1010a3f0

void FUN_1010a3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPackageMap::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010a430 FUN_1010a430

undefined4 FUN_1010a430(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010a440 FUN_1010a440

undefined4 FUN_1010a440(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x74);
}


// ==== 1010a450 FUN_1010a450

UClass * FUN_1010a450(void)

{
  return &UPackage::PrivateStaticClass;
}


// ==== 1010a460 FUN_1010a460

void FUN_1010a460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UPackage::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010a4a0 FUN_1010a4a0

undefined4 FUN_1010a4a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010a4b0 FUN_1010a4b0

void FUN_1010a4b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b67b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPackage::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1010a520 FUN_1010a520

void FUN_1010a520(UPackage *param_1)

{
  if (param_1 != (UPackage *)0x0) {
    UPackage::UPackage(param_1);
    return;
  }
  return;
}


// ==== 1010a540 FUN_1010a540

void FUN_1010a540(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b67d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UPackage::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 1010a5d0 FUN_1010a5d0

void FUN_1010a5d0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return;
}


// ==== 1010a610 FUN_1010a610

void FUN_1010a610(byte param_1)

{
  UPackage *in_ECX;
  
  UPackage::~UPackage(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return;
}


// ==== 1010a640 FUN_1010a640

UPackage * FUN_1010a640(byte param_1)

{
  UPackage *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x44,*(int *)(in_ECX + -4),UPackage::~UPackage);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPackage::~UPackage(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return in_ECX;
}


// ==== 1010a6b0 FUN_1010a6b0

UClass * FUN_1010a6b0(void)

{
  return &USubsystem::PrivateStaticClass;
}


// ==== 1010a6c0 FUN_1010a6c0

void FUN_1010a6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USubsystem::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010a700 FUN_1010a700

undefined4 FUN_1010a700(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010a710 FUN_1010a710

void FUN_1010a710(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b67f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USubsystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = USubsystem::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1010a780 FUN_1010a780

void FUN_1010a780(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)(in_ECX + 0x34) = FExec::vftable;
  *(undefined ***)in_ECX = USubsystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = USubsystem::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 1010a7f0 FUN_1010a7f0

void FUN_1010a7f0(void)

{
  return;
}


// ==== 1010a800 FUN_1010a800

void FUN_1010a800(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)(in_ECX + 0x34) = FExec::vftable;
  *(undefined ***)in_ECX = USubsystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = USubsystem::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 1010a880 FUN_1010a880

void FUN_1010a880(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  return;
}


// ==== 1010a8a0 FUN_1010a8a0

void FUN_1010a8a0(byte param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::~USubsystem(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 1010a8d0 FUN_1010a8d0

USubsystem * FUN_1010a8d0(byte param_1)

{
  USubsystem *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),USubsystem::~USubsystem);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USubsystem::~USubsystem(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 1010a940 FUN_1010a940

UClass * FUN_1010a940(void)

{
  return &UCommandlet::PrivateStaticClass;
}


// ==== 1010a950 FUN_1010a950

void FUN_1010a950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UCommandlet::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010a990 FUN_1010a990

undefined4 FUN_1010a990(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010a9a0 FUN_1010a9a0

void FUN_1010a9a0(UCommandlet *param_1)

{
  if (param_1 != (UCommandlet *)0x0) {
    UCommandlet::UCommandlet(param_1);
    return;
  }
  return;
}


// ==== 1010a9c0 FUN_1010a9c0

UClass * FUN_1010a9c0(void)

{
  return &ULanguage::PrivateStaticClass;
}


// ==== 1010a9d0 FUN_1010a9d0

void FUN_1010a9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&ULanguage::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0)
  ;
  return;
}


// ==== 1010aa10 FUN_1010aa10

undefined4 FUN_1010aa10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010aa20 FUN_1010aa20

void FUN_1010aa20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULanguage::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1010aa90 FUN_1010aa90

void FUN_1010aa90(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = ULanguage::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1010aaf0 FUN_1010aaf0

void FUN_1010aaf0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = ULanguage::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_c;
  return;
}


// ==== 1010ab60 FUN_1010ab60

void FUN_1010ab60(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}


// ==== 1010ab90 FUN_1010ab90

void FUN_1010ab90(byte param_1)

{
  ULanguage *in_ECX;
  
  ULanguage::~ULanguage(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 1010abc0 FUN_1010abc0

ULanguage * FUN_1010abc0(byte param_1)

{
  ULanguage *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),ULanguage::~ULanguage);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULanguage::~ULanguage(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 1010ac30 FUN_1010ac30

UClass * FUN_1010ac30(void)

{
  return &UTextBuffer::PrivateStaticClass;
}


// ==== 1010ac40 FUN_1010ac40

void FUN_1010ac40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTextBuffer::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010ac80 FUN_1010ac80

undefined4 FUN_1010ac80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010ac90 FUN_1010ac90

void FUN_1010ac90(UTextBuffer *param_1)

{
  if (param_1 != (UTextBuffer *)0x0) {
    UTextBuffer::UTextBuffer(param_1,&DAT_101cdd44);
  }
  return;
}


// ==== 1010acb0 FUN_1010acb0

void FUN_1010acb0(void)

{
  UTextBuffer *in_ECX;
  
  UTextBuffer::UTextBuffer(in_ECX,&DAT_101cdd44);
  return;
}


// ==== 1010acc0 FUN_1010acc0

UClass * FUN_1010acc0(void)

{
  return &USystem::PrivateStaticClass;
}


// ==== 1010acd0 FUN_1010acd0

void FUN_1010acd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&USystem::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010ad10 FUN_1010ad10

undefined4 FUN_1010ad10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010ad20 FUN_1010ad20

void FUN_1010ad20(USystem *param_1)

{
  if (param_1 != (USystem *)0x0) {
    USystem::USystem(param_1);
    return;
  }
  return;
}


// ==== 1010ad40 FUN_1010ad40

void FUN_1010ad40(void)

{
  return;
}


// ==== 1010ad50 FUN_1010ad50

undefined4 FUN_1010ad50(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 1010ad60 FUN_1010ad60

undefined4 FUN_1010ad60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1010ad70 FUN_1010ad70

void FUN_1010ad70(void)

{
  L2ParamStack *in_ECX;
  
  L2ParamStack::L2ParamStack(in_ECX,10);
  return;
}


// ==== 1010ad80 FUN_1010ad80

UClass * FUN_1010ad80(void)

{
  return &UParamStack::PrivateStaticClass;
}


// ==== 1010ad90 FUN_1010ad90

void FUN_1010ad90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UParamStack::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010add0 FUN_1010add0

undefined4 FUN_1010add0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010ade0 FUN_1010ade0

void FUN_1010ade0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b68b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UParamStack::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1010ae50 FUN_1010ae50

void FUN_1010ae50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b68d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UParamStack::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1010aeb0 FUN_1010aeb0

void FUN_1010aeb0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b68f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UParamStack::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_c;
  return;
}


// ==== 1010af20 FUN_1010af20

void FUN_1010af20(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}


// ==== 1010af50 FUN_1010af50

void FUN_1010af50(byte param_1)

{
  UParamStack *in_ECX;
  
  UParamStack::~UParamStack(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 1010af80 FUN_1010af80

UParamStack * FUN_1010af80(byte param_1)

{
  UParamStack *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UParamStack::~UParamStack);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UParamStack::~UParamStack(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 1010aff0 FUN_1010aff0

void FUN_1010aff0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010b010 FUN_1010b010

void FUN_1010b010(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010b030 FUN_1010b030

UClass * FUN_1010b030(void)

{
  return &UField::PrivateStaticClass;
}


// ==== 1010b040 FUN_1010b040

void FUN_1010b040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UField::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b080 FUN_1010b080

undefined4 FUN_1010b080(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b090 FUN_1010b090

void FUN_1010b090(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UField::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1010b100 FUN_1010b100

void FUN_1010b100(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UField::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1010b160 FUN_1010b160

void FUN_1010b160(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 1010b1e0 FUN_1010b1e0

void FUN_1010b1e0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 1010b210 FUN_1010b210

void FUN_1010b210(byte param_1)

{
  UField *in_ECX;
  
  UField::~UField(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return;
}


// ==== 1010b240 FUN_1010b240

UField * FUN_1010b240(byte param_1)

{
  UField *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x40,*(int *)(in_ECX + -4),UField::~UField);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UField::~UField(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return in_ECX;
}


// ==== 1010b2b0 FUN_1010b2b0

UClass * FUN_1010b2b0(void)

{
  return &UStruct::PrivateStaticClass;
}


// ==== 1010b2c0 FUN_1010b2c0

void FUN_1010b2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UStruct::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b300 FUN_1010b300

undefined4 FUN_1010b300(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b310 FUN_1010b310

undefined4 FUN_1010b310(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x4c);
}


// ==== 1010b320 FUN_1010b320

void FUN_1010b320(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4c) = param_1;
  return;
}


// ==== 1010b330 FUN_1010b330

undefined4 FUN_1010b330(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 1010b340 FUN_1010b340

UClass * FUN_1010b340(void)

{
  return &UFunction::PrivateStaticClass;
}


// ==== 1010b350 FUN_1010b350

void FUN_1010b350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UFunction::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0)
  ;
  return;
}


// ==== 1010b390 FUN_1010b390

undefined4 FUN_1010b390(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b3a0 FUN_1010b3a0

undefined4 FUN_1010b3a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010b3b0 FUN_1010b3b0

undefined4 FUN_1010b3b0(void)

{
  return 0;
}


// ==== 1010b3c0 FUN_1010b3c0

undefined4 FUN_1010b3c0(void)

{
  return 0;
}


// ==== 1010b3d0 FUN_1010b3d0

undefined4 FUN_1010b3d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 1010b3e0 FUN_1010b3e0

UClass * FUN_1010b3e0(void)

{
  return &UState::PrivateStaticClass;
}


// ==== 1010b3f0 FUN_1010b3f0

void FUN_1010b3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UState::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b430 FUN_1010b430

undefined4 FUN_1010b430(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b440 FUN_1010b440

undefined4 FUN_1010b440(void)

{
  return 1;
}


// ==== 1010b450 FUN_1010b450

undefined4 FUN_1010b450(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 1010b460 FUN_1010b460

UClass * FUN_1010b460(void)

{
  return &UEnum::PrivateStaticClass;
}


// ==== 1010b470 FUN_1010b470

void FUN_1010b470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UEnum::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b4b0 FUN_1010b4b0

undefined4 FUN_1010b4b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b4c0 FUN_1010b4c0

undefined4 FUN_1010b4c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010b4d0 FUN_1010b4d0

undefined4 FUN_1010b4d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 1010b4e0 FUN_1010b4e0

UClass * FUN_1010b4e0(void)

{
  return &UClass::PrivateStaticClass;
}


// ==== 1010b4f0 FUN_1010b4f0

void FUN_1010b4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UClass::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b530 FUN_1010b530

undefined4 FUN_1010b530(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b540 FUN_1010b540

void FUN_1010b540(UClass *param_1)

{
  if (param_1 != (UClass *)0x0) {
    UClass::UClass(param_1);
    return;
  }
  return;
}


// ==== 1010b560 FUN_1010b560

undefined4 FUN_1010b560(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010b570 FUN_1010b570

undefined4 FUN_1010b570(void)

{
  return 1;
}


// ==== 1010b580 FUN_1010b580

undefined4 FUN_1010b580(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 1010b590 FUN_1010b590

UClass * FUN_1010b590(void)

{
  return &UConst::PrivateStaticClass;
}


// ==== 1010b5a0 FUN_1010b5a0

void FUN_1010b5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UConst::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b5e0 FUN_1010b5e0

undefined4 FUN_1010b5e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b5f0 FUN_1010b5f0

undefined4 FUN_1010b5f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010b600 FUN_1010b600

undefined4 FUN_1010b600(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 1010b610 FUN_1010b610

UClass * FUN_1010b610(void)

{
  return &UProperty::PrivateStaticClass;
}


// ==== 1010b620 FUN_1010b620

void FUN_1010b620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0)
  ;
  return;
}


// ==== 1010b660 FUN_1010b660

undefined4 FUN_1010b660(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b670 FUN_1010b670

undefined4 FUN_1010b670(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010b680 FUN_1010b680

void FUN_1010b680(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0x11] * param_3 + in_ECX[0x15];
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + iVar1;
  }
  (**(code **)(*in_ECX + 0x84))(iVar1 + param_1,param_2);
  return;
}


// ==== 1010b6c0 FUN_1010b6c0

int FUN_1010b6c0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x44) * *(int *)(in_ECX + 0x40);
}


// ==== 1010b6d0 FUN_1010b6d0

undefined4 FUN_1010b6d0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x48);
  if ((((uVar1 & 0x1000) == 0) && (((uVar1 & 0x2000) == 0 || (*(int *)(param_1 + 0x1c) == 0)))) &&
     (((uVar1 & 0x20000000) == 0 || (*(int *)(param_1 + 0x14) == 0)))) {
    return 1;
  }
  return 0;
}


// ==== 1010b730 FUN_1010b730

UClass * FUN_1010b730(void)

{
  return &UByteProperty::PrivateStaticClass;
}


// ==== 1010b740 FUN_1010b740

void FUN_1010b740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UByteProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b780 FUN_1010b780

undefined4 FUN_1010b780(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b790 FUN_1010b790

UClass * FUN_1010b790(void)

{
  return &UIntProperty::PrivateStaticClass;
}


// ==== 1010b7a0 FUN_1010b7a0

void FUN_1010b7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UIntProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b7e0 FUN_1010b7e0

undefined4 FUN_1010b7e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b7f0 FUN_1010b7f0

UClass * FUN_1010b7f0(void)

{
  return &UBoolProperty::PrivateStaticClass;
}


// ==== 1010b800 FUN_1010b800

void FUN_1010b800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UBoolProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b840 FUN_1010b840

undefined4 FUN_1010b840(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b850 FUN_1010b850

UClass * FUN_1010b850(void)

{
  return &UFloatProperty::PrivateStaticClass;
}


// ==== 1010b860 FUN_1010b860

void FUN_1010b860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UFloatProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b8a0 FUN_1010b8a0

undefined4 FUN_1010b8a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b8b0 FUN_1010b8b0

UClass * FUN_1010b8b0(void)

{
  return &UObjectProperty::PrivateStaticClass;
}


// ==== 1010b8c0 FUN_1010b8c0

void FUN_1010b8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UObjectProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b900 FUN_1010b900

undefined4 FUN_1010b900(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b910 FUN_1010b910

UClass * FUN_1010b910(void)

{
  return &UClassProperty::PrivateStaticClass;
}


// ==== 1010b920 FUN_1010b920

void FUN_1010b920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UClassProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b960 FUN_1010b960

undefined4 FUN_1010b960(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b970 FUN_1010b970

undefined1 FUN_1010b970(void)

{
  return 5;
}


// ==== 1010b980 FUN_1010b980

UClass * FUN_1010b980(void)

{
  return &UNameProperty::PrivateStaticClass;
}


// ==== 1010b990 FUN_1010b990

void FUN_1010b990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UNameProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010b9d0 FUN_1010b9d0

undefined4 FUN_1010b9d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010b9e0 FUN_1010b9e0

UClass * FUN_1010b9e0(void)

{
  return &UStrProperty::PrivateStaticClass;
}


// ==== 1010b9f0 FUN_1010b9f0

void FUN_1010b9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UStrProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010ba30 FUN_1010ba30

undefined4 FUN_1010ba30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010ba40 FUN_1010ba40

UClass * FUN_1010ba40(void)

{
  return &UFixedArrayProperty::PrivateStaticClass;
}


// ==== 1010ba50 FUN_1010ba50

void FUN_1010ba50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UFixedArrayProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010ba90 FUN_1010ba90

undefined4 FUN_1010ba90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010baa0 FUN_1010baa0

UClass * FUN_1010baa0(void)

{
  return &UArrayProperty::PrivateStaticClass;
}


// ==== 1010bab0 FUN_1010bab0

void FUN_1010bab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UArrayProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010baf0 FUN_1010baf0

undefined4 FUN_1010baf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010bb00 FUN_1010bb00

UClass * FUN_1010bb00(void)

{
  return &UMapProperty::PrivateStaticClass;
}


// ==== 1010bb10 FUN_1010bb10

void FUN_1010bb10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UMapProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010bb50 FUN_1010bb50

undefined4 FUN_1010bb50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010bb60 FUN_1010bb60

UClass * FUN_1010bb60(void)

{
  return &UStructProperty::PrivateStaticClass;
}


// ==== 1010bb70 FUN_1010bb70

void FUN_1010bb70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UStructProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010bbb0 FUN_1010bbb0

undefined4 FUN_1010bbb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010bbc0 FUN_1010bbc0

UClass * FUN_1010bbc0(void)

{
  return &UDelegateProperty::PrivateStaticClass;
}


// ==== 1010bbd0 FUN_1010bbd0

void FUN_1010bbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UDelegateProperty::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010bc10 FUN_1010bc10

undefined4 FUN_1010bc10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010bc20 FUN_1010bc20

bool FUN_1010bc20(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  while( true ) {
    if (iVar1 == 0) {
      return param_1 == 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  return true;
}


// ==== 1010bc60 FUN_1010bc60

bool FUN_1010bc60(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  while( true ) {
    if (iVar1 == 0) {
      return param_1 == 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  return true;
}


// ==== 1010bca0 FUN_1010bca0

undefined4 FUN_1010bca0(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined8 uVar2;
  
  if ((param_1 - 300U < 0x40) && (iVar1 = *(int *)(in_ECX + 0xc), iVar1 != 0)) {
    uVar2 = __allshl();
    if (((uint)uVar2 & *(uint *)(iVar1 + 0x20)) == 0 &&
        ((uint)((ulonglong)uVar2 >> 0x20) & *(uint *)(iVar1 + 0x24)) == 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 1010bcf0 FUN_1010bcf0

void FUN_1010bcf0(int param_1)

{
  undefined4 *in_ECX;
  undefined4 uVar1;
  
  *in_ECX = FFrame::vftable;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  in_ECX[1] = uVar1;
  in_ECX[2] = param_1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


