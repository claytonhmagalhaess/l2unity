// ==== 10102685 FStateFrame::operator=

/* public: struct FStateFrame & __thiscall FStateFrame::operator=(struct FStateFrame const &) */

FStateFrame * __thiscall FStateFrame::operator=(FStateFrame *this,FStateFrame *param_1)

{
                    /* 0x2685  492  ??4FStateFrame@@QAEAAU0@ABU0@@Z */
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
  return this;
}


// ==== 1010268a UClass::UClass

/* public: __thiscall UClass::UClass(enum ENativeConstructor,unsigned long,unsigned long,class
   UClass *,class UClass *,class FGuid,unsigned short const *,unsigned short const *,unsigned short
   const *,unsigned long,void (__cdecl*)(void *),void (__thiscall UObject::*)(void)) */

UClass * __thiscall
UClass::UClass(UClass *this,undefined4 param_1,int param_2,uint param_3,UClass *param_4,
              undefined4 param_5,undefined4 param_7,undefined4 param_8,undefined4 param_9,
              undefined4 param_10,ushort *param_11,ushort *param_12,undefined4 param_13,
              ulong param_14,undefined4 param_15,undefined4 param_16)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x268a  193
                       ??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba510;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UState::UState((UState *)this,0,param_2,param_11,param_12,param_14,
                 (UState *)(-(uint)(param_4 != this) & (uint)param_4));
  *(undefined4 *)(this + 0x4ac) = param_7;
  *(uint *)(this + 0x4a4) = param_3 | 0x12;
  *(undefined4 *)(this + 0x4b0) = param_8;
  *(undefined4 *)(this + 0x4b4) = param_9;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x4b8) = param_10;
  *(undefined4 *)(this + 0x4bc) = param_5;
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
  *(undefined4 *)(this + 0x518) = param_15;
  *(undefined4 *)(this + 0x51c) = param_16;
  *(undefined4 *)(this + 0x520) = 0;
  *(undefined4 *)(this + 0x524) = 0;
  *(undefined4 *)(this + 0x528) = 0;
  *(undefined4 *)(this + 0x4c0) = param_13;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010268f thunk_FUN_10127a90 thunk -> 10127a90

// ==== 10102699 UObject::execDivideEqual_VectorFloat

/* public: void __thiscall UObject::execDivideEqual_VectorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivideEqual_VectorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float fStack_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x2699  2191  ?execDivideEqual_VectorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar3 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar3 = (float *)&stack0xffffffec;
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
  fVar2 = 1.0 / fStack_c;
  *pfVar3 = fVar2 * *pfVar3;
  pfVar3[1] = fVar2 * pfVar3[1];
  pfVar3[2] = fVar2 * pfVar3[2];
  *pfStack_8 = *pfVar3;
  pfStack_8[1] = pfVar3[1];
  pfStack_8[2] = pfVar3[2];
  return;
}


// ==== 1010269e appIsNan

/* int __cdecl appIsNan(double) */

int __cdecl appIsNan(double param_1)

{
  int iVar1;
  
                    /* 0x269e  2062  ?appIsNan@@YAHN@Z */
  iVar1 = __isnan(param_1);
  return (uint)(iVar1 == 1);
}


// ==== 101026a3 FMatrix::TransformNormal

/* public: class FPlane __thiscall FMatrix::TransformNormal(class FVector const &)const  */

void __thiscall FMatrix::TransformNormal(FMatrix *this,FVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_stack_00000008;
  
                    /* 0x26a3  1976  ?TransformNormal@FMatrix@@QBE?AVFPlane@@ABVFVector@@@Z */
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[1];
  fVar3 = in_stack_00000008[2];
  *(float *)param_1 =
       fVar2 * *(float *)(this + 0x10) + fVar1 * *(float *)this + fVar3 * *(float *)(this + 0x20) +
       *(float *)(this + 0x30) * 0.0;
  *(float *)(param_1 + 4) =
       *(float *)(this + 0x34) * 0.0 +
       *(float *)(this + 0x24) * fVar3 +
       *(float *)(this + 0x14) * fVar2 + *(float *)(this + 4) * fVar1;
  *(float *)(param_1 + 8) =
       *(float *)(this + 0x38) * 0.0 +
       *(float *)(this + 0x28) * fVar3 +
       *(float *)(this + 0x18) * fVar2 + *(float *)(this + 8) * fVar1;
  *(float *)(param_1 + 0xc) =
       fVar3 * *(float *)(this + 0x2c) +
       *(float *)(this + 0xc) * fVar1 + *(float *)(this + 0x1c) * fVar2 +
       *(float *)(this + 0x3c) * 0.0;
  return;
}


// ==== 101026ad UFunction::Link

/* public: virtual void __thiscall UFunction::Link(class FArchive &,int) */

void __thiscall UFunction::Link(UFunction *this,FArchive *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26ad  1558  ?Link@UFunction@@UAEXAAVFArchive@@H@Z */
  puStack_c = &LAB_101ba750;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UStruct::Link((UStruct *)this,param_1,param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101026b2 ULinker::GetImportFullName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class FString __thiscall ULinker::GetImportFullName(int) */

int __thiscall ULinker::GetImportFullName(ULinker *this,int param_1)

{
  ULinker *pUVar1;
  int iVar2;
  FString *pFVar3;
  int in_stack_00000008;
  FString aFStack_70 [12];
  FString aFStack_64 [12];
  FString aFStack_58 [12];
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  FString aFStack_34 [20];
  int iStack_20;
  uint uStack_1c;
  ULinker *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26b2  1333  ?GetImportFullName@ULinker@@QAE?AVFString@@H@Z */
  puStack_c = &LAB_101bb859;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff84;
  uStack_1c = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  FString::FString(aFStack_34);
  uStack_8._0_1_ = 2;
  iVar2 = -1 - in_stack_00000008;
  iStack_20 = iVar2;
  for (; iVar2 != 0; iVar2 = *(int *)(*(int *)(pUVar1 + 0x84) + iVar2 * -0x1c + -0x14)) {
    if (iVar2 != iStack_20) {
      pFVar3 = (FString *)FString::FString(aFStack_58,(ushort *)&DAT_101d4934);
      uStack_8._0_1_ = 3;
      pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)aFStack_4c);
      uStack_8._0_1_ = 4;
      pFVar3 = (FString *)FString::operator+(pFVar3,aFStack_40);
      uStack_8._0_1_ = 5;
      FString::operator=(aFStack_34,pFVar3);
      uStack_8._0_1_ = 4;
      FString::~FString(aFStack_40);
      uStack_8._0_1_ = 3;
      FString::~FString(aFStack_4c);
      uStack_8._0_1_ = 2;
      FString::~FString(aFStack_58);
    }
    pUVar1 = pUStack_18;
    pFVar3 = (FString *)
             FString::FString(aFStack_70,
                              (ushort *)
                              (*(int *)(_Names + *(int *)(*(int *)(pUStack_18 + 0x84) +
                                                          iVar2 * -0x1c + -0x10) * 4) + 0xc));
    uStack_8._0_1_ = 6;
    pFVar3 = (FString *)FString::operator+(pFVar3,aFStack_64);
    uStack_8._0_1_ = 7;
    FString::operator=(aFStack_34,pFVar3);
    uStack_8._0_1_ = 6;
    FString::~FString(aFStack_64);
    uStack_8._0_1_ = 2;
    FString::~FString(aFStack_70);
  }
  pFVar3 = (FString *)
           FString::FString(aFStack_64,
                            (ushort *)
                            (*(int *)(_Names + *(int *)(*(int *)(pUStack_18 + 0x84) +
                                                        in_stack_00000008 * 0x1c + 4) * 4) + 0xc));
  uStack_8._0_1_ = 8;
  pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)aFStack_70);
  uStack_8._0_1_ = 9;
  FString::operator+(pFVar3,(FString *)param_1);
  uStack_1c = uStack_1c | 1;
  uStack_8._0_1_ = 8;
  FString::~FString(aFStack_70);
  uStack_8._0_1_ = 2;
  FString::~FString(aFStack_64);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FString::~FString(aFStack_34);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 101026b7 FRange::operator!=

/* public: int __thiscall FRange::operator!=(class FRange const &)const  */

int __thiscall FRange::operator!=(FRange *this,FRange *param_1)

{
                    /* 0x26b7  584  ??9FRange@@QBEHABV0@@Z */
  if ((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4))) {
    return 0;
  }
  return 1;
}


// ==== 101026bc FDependency::operator=

/* public: class FDependency & __thiscall FDependency::operator=(class FDependency const &) */

FDependency * __thiscall FDependency::operator=(FDependency *this,FDependency *param_1)

{
                    /* 0x26bc  442  ??4FDependency@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 101026c1 FRange::GetMax

/* public: float __thiscall FRange::GetMax(void)const  */

float __thiscall FRange::GetMax(FRange *this)

{
  float fVar1;
  float fVar2;
  
                    /* 0x26c1  1349  ?GetMax@FRange@@QBEMXZ */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return fVar1;
  }
  return fVar2;
}


// ==== 101026cb L2ThreadStats::Clear

/* public: void __thiscall L2ThreadStats::Clear(void) */

void __thiscall L2ThreadStats::Clear(L2ThreadStats *this)

{
  L2ThreadStats *pLVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
                    /* 0x26cb  846  ?Clear@L2ThreadStats@@QAEXXZ */
  pLVar1 = this + 0x18;
  uVar2 = *(uint *)pLVar1;
  *(uint *)pLVar1 = *(uint *)pLVar1 + *(uint *)(this + 8);
  *(uint *)(this + 0x1c) =
       *(int *)(this + 0x1c) + *(int *)(this + 0xc) + (uint)CARRY4(uVar2,*(uint *)(this + 8));
  pLVar1 = this + 0x38;
  uVar2 = *(uint *)pLVar1;
  *(uint *)pLVar1 = *(uint *)pLVar1 + *(uint *)(this + 0x28);
  *(uint *)(this + 0x3c) =
       *(int *)(this + 0x3c) + *(int *)(this + 0x2c) + (uint)CARRY4(uVar2,*(uint *)(this + 0x28));
  dVar4 = appSecondsQPC();
  if (10.0 < (float)dVar4 - *(float *)(this + 0x50)) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  iVar3 = *(int *)(this + 0xc);
  if ((*(int *)(this + 0x14) <= iVar3) &&
     ((*(int *)(this + 0x14) < iVar3 || (*(uint *)(this + 0x10) < *(uint *)(this + 8))))) {
    *(uint *)(this + 0x10) = *(uint *)(this + 8);
    *(int *)(this + 0x14) = iVar3;
    dVar4 = appSecondsQPC();
    *(float *)(this + 0x50) = (float)dVar4;
  }
  iVar3 = *(int *)(this + 0x2c);
  if ((*(int *)(this + 0x34) <= iVar3) &&
     ((*(int *)(this + 0x34) < iVar3 || (*(uint *)(this + 0x30) < *(uint *)(this + 0x28))))) {
    *(uint *)(this + 0x30) = *(uint *)(this + 0x28);
    *(int *)(this + 0x34) = iVar3;
    dVar4 = appSecondsQPC();
    *(float *)(this + 0x50) = (float)dVar4;
  }
  if (*(uint *)(this + 0x44) < *(uint *)(this + 0x40)) {
    *(uint *)(this + 0x44) = *(uint *)(this + 0x40);
    dVar4 = appSecondsQPC();
    *(float *)(this + 0x50) = (float)dVar4;
  }
  if (*(uint *)(this + 0x4c) < *(uint *)(this + 0x48)) {
    *(uint *)(this + 0x4c) = *(uint *)(this + 0x48);
    dVar4 = appSecondsQPC();
    *(float *)(this + 0x50) = (float)dVar4;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


// ==== 101026d0 UConst::StaticClass

/* public: static class UClass * __cdecl UConst::StaticClass(void) */

UClass * __cdecl UConst::StaticClass(void)

{
                    /* 0x26d0  1894  ?StaticClass@UConst@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101026d5 FArray::~FArray

/* public: __thiscall FArray::~FArray(void) */

void __thiscall FArray::~FArray(FArray *this)

{
                    /* 0x26d5  294  ??1FArray@@QAE@XZ */
  if (*(int *)this != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 101026df appItoa

/* unsigned short * __cdecl appItoa(int) */

ushort * __cdecl appItoa(int param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x26df  2064  ?appItoa@@YAPAGH@Z */
  puVar3 = &DAT_10289e64;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  pwVar1 = __itow(param_1,(wchar_t *)&DAT_10289e64,10);
  return (ushort *)pwVar1;
}


// ==== 101026e4 FString::GetCharArray

/* public: class TArray<unsigned short> & __thiscall FString::GetCharArray(void) */

TArray<unsigned_short> * __thiscall FString::GetCharArray(FString *this)

{
                    /* 0x26e4  1290  ?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */
  return (TArray<unsigned_short> *)this;
}


// ==== 101026e9 UObject::execAddAdd_Int

/* public: void __thiscall UObject::execAddAdd_Int(struct FFrame &,void * const) */

void __thiscall UObject::execAddAdd_Int(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x26e9  2138  ?execAddAdd_Int@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *piVar2 = *piVar2 + 1;
  return;
}


// ==== 101026ee UDelegateProperty::UDelegateProperty

/* public: __thiscall UDelegateProperty::UDelegateProperty(class UDelegateProperty const &) */

UDelegateProperty * __thiscall
UDelegateProperty::UDelegateProperty(UDelegateProperty *this,UDelegateProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x26ee  204  ??0UDelegateProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7fb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101026f3 UIntProperty::ExportTextItem

/* public: virtual void __thiscall UIntProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UIntProperty::ExportTextItem
          (UIntProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26f3  983  ?ExportTextItem@UIntProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101bde10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  appSprintf(param_1,(ushort *)&DAT_101dedbc,*(undefined4 *)param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101026f8 thunk_FUN_10129f00 thunk -> 10129f00

// ==== 101026fd FFileStream::Destroy

/* public: static void __cdecl FFileStream::Destroy(void) */

void __cdecl FFileStream::Destroy(void)

{
  FCriticalSection *pFVar1;
  FOutputDevice *in_ECX;
  
                    /* 0x26fd  915  ?Destroy@FFileStream@@SAXXZ */
  if ((Instance != (FFileStream *)0x0) && (Destroyed == 0)) {
    Destroyed = 1;
    if (GLog == (undefined *)0x0) goto LAB_10152175;
    FOutputDevice::Logf2(in_ECX,(ushort *)GLog);
    while (Destroyed == 1) {
LAB_10152175:
      appSleep(1.0);
    }
    if (Streams != (FStream *)0x0) {
      (**(code **)(*(int *)GMalloc + 8))(Streams);
      Streams = (FStream *)0x0;
    }
    pFVar1 = CriticalSection;
    if (CriticalSection != (FCriticalSection *)0x0) {
      FCriticalSection::~FCriticalSection(CriticalSection);
      (**(code **)(*(int *)GMalloc + 8))(pFVar1);
    }
    if (Instance != (FFileStream *)0x0) {
      (**(code **)(*(int *)GMalloc + 8))();
    }
    Instance = (FFileStream *)0x0;
  }
  return;
}


// ==== 10102702 UMapProperty::Identical

/* public: virtual int __thiscall UMapProperty::Identical(void const *,void const *)const  */

int __thiscall UMapProperty::Identical(UMapProperty *this,void *param_1,void *param_2)

{
                    /* 0x2702  1436  ?Identical@UMapProperty@@UBEHPBX0@Z */
  return 1;
}


// ==== 10102707 FMemStackFrame::Init

/* public: void __thiscall FMemStackFrame::Init(int) */

void __thiscall FMemStackFrame::Init(FMemStackFrame *this,int param_1)

{
                    /* 0x2707  1464  ?Init@FMemStackFrame@@QAEXH@Z */
  *(int *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}


// ==== 1010270c UObject::eventBeginState

/* public: void __thiscall UObject::eventBeginState(void) */

void __thiscall UObject::eventBeginState(UObject *this)

{
  UFunction *pUVar1;
  
                    /* 0x270c  2132  ?eventBeginState@UObject@@QAEXXZ */
  pUVar1 = FindFunctionChecked(this,0x13c,0,0,0);
  (**(code **)(*(int *)this + 0x10))(pUVar1);
  return;
}


// ==== 10102711 ULanguage::operator=

/* public: class ULanguage & __thiscall ULanguage::operator=(class ULanguage const &) */

ULanguage * __thiscall ULanguage::operator=(ULanguage *this,ULanguage *param_1)

{
                    /* 0x2711  527  ??4ULanguage@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}


// ==== 10102716 thunk_FUN_10179a00 thunk -> 10179a00

// ==== 10102720 FName::GetInitialized

/* public: static int __cdecl FName::GetInitialized(void) */

int __cdecl FName::GetInitialized(void)

{
                    /* 0x2720  1341  ?GetInitialized@FName@@SAHXZ */
  return Initialized;
}


// ==== 10102725 UField::PostLoad

/* public: virtual void __thiscall UField::PostLoad(void) */

void __thiscall UField::PostLoad(UField *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2725  1687  ?PostLoad@UField@@UAEXXZ */
  puStack_c = &LAB_101b9d90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::PostLoad((UObject *)this);
  (**(code **)(*(int *)this + 0x70))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010272a UArrayProperty::operator_new

/* public: static void * __cdecl UArrayProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UArrayProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x272a  354  ??2UArrayProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010272f UPackage::operator_new

/* public: static void * __cdecl UPackage::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UPackage::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x272f  401  ??2UPackage@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10102734 thunk_FUN_1012a0a0 thunk -> 1012a0a0

// ==== 10102739 UExporter::~UExporter

/* public: virtual __thiscall UExporter::~UExporter(void) */

void __thiscall UExporter::~UExporter(UExporter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x2739  326  ??1UExporter@@UAE@XZ */
  puStack_8 = &LAB_101b91b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_10124a00();
  uStack_4 = 0xffffffff;
  UObject::~UObject((UObject *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010273e thunk_FUN_1011ef60 thunk -> 1011ef60

// ==== 10102743 FCoords::operator=

/* public: class FCoords & __thiscall FCoords::operator=(class FCoords const &) */

FCoords * __thiscall FCoords::operator=(FCoords *this,FCoords *param_1)

{
  int iVar1;
  FCoords *pFVar2;
  
                    /* 0x2743  440  ??4FCoords@@QAEAAV0@ABV0@@Z */
  pFVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10102748 UObjectProperty::StaticClass

/* public: static class UClass * __cdecl UObjectProperty::StaticClass(void) */

UClass * __cdecl UObjectProperty::StaticClass(void)

{
                    /* 0x2748  1911  ?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 1010274d thunk_FUN_10178560 thunk -> 10178560

// ==== 10102752 UObject::execLessEqual_IntInt

/* public: void __thiscall UObject::execLessEqual_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execLessEqual_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x2752  2286  ?execLessEqual_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10102757 FCodec::FCodec

/* public: __thiscall FCodec::FCodec(void) */

void __thiscall FCodec::FCodec(FCodec *this)

{
                    /* 0x2757  31  ??0FCodec@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1010275c UObject::execRotRand

/* public: void __thiscall UObject::execRotRand(struct FFrame &,void * const) */

void __thiscall UObject::execRotRand(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x275c  2356  ?execRotRand@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  iVar2 = appRand();
  iVar4 = (iVar2 * 2) % 0xffff;
  iVar2 = appRand();
  iVar2 = (iVar2 * 2) % 0xffff;
  if (unaff_EDI != 0) {
    iVar3 = appRand();
    *unaff_retaddr = iVar2;
    unaff_retaddr[1] = iVar4;
    unaff_retaddr[2] = (iVar3 * 2) % 0xffff;
    return;
  }
  *unaff_retaddr = iVar2;
  unaff_retaddr[1] = iVar4;
  unaff_retaddr[2] = 0;
  return;
}


// ==== 10102761 FQuat::AngAxisToFQuat

/* public: class FQuat __thiscall FQuat::AngAxisToFQuat(void) */

float * __thiscall FQuat::AngAxisToFQuat(FQuat *this)

{
  float fVar1;
  double dVar2;
  float *in_stack_00000004;
  
                    /* 0x2761  800  ?AngAxisToFQuat@FQuat@@QAE?AV1@XZ */
  fVar1 = *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  if (1e-05 <= fVar1) {
    dVar2 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar2;
    *in_stack_00000004 = fVar1 * *(float *)this;
    in_stack_00000004[1] = fVar1 * *(float *)(this + 4);
    in_stack_00000004[2] = fVar1 * *(float *)(this + 8);
    dVar2 = appCos((double)(*(float *)(this + 0xc) * 0.5));
    in_stack_00000004[3] = (float)dVar2;
    return in_stack_00000004;
  }
  *in_stack_00000004 = 0.0;
  in_stack_00000004[1] = 0.0;
  in_stack_00000004[2] = 1.0;
  in_stack_00000004[3] = 0.0;
  return in_stack_00000004;
}


// ==== 10102766 appEnableFastMath

/* void __cdecl appEnableFastMath(int) */

void __cdecl appEnableFastMath(int param_1)

{
                    /* 0x2766  2037  ?appEnableFastMath@@YAXH@Z */
  return;
}


// ==== 10102770 UField::AddCppProperty

/* public: virtual void __thiscall UField::AddCppProperty(class UProperty *) */

void __thiscall UField::AddCppProperty(UField *this,UProperty *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2770  781  ?AddCppProperty@UField@@UAEXPAVUProperty@@@Z */
  puStack_c = &LAB_101b9da0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Logf((FOutputDevice *)this,(ushort *)GError);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102775 FPlane::operator/

/* public: class FPlane __thiscall FPlane::operator/(float)const  */

void __thiscall FPlane::operator/(FPlane *this,float param_1)

{
  float fVar1;
  float in_stack_00000008;
  
                    /* 0x2775  647  ??KFPlane@@QBE?AV0@M@Z */
  fVar1 = 1.0 / in_stack_00000008;
  *(float *)param_1 = fVar1 * *(float *)this;
  *(float *)((int)param_1 + 4) = *(float *)(this + 4) * fVar1;
  *(float *)((int)param_1 + 8) = *(float *)(this + 8) * fVar1;
  *(float *)((int)param_1 + 0xc) = fVar1 * *(float *)(this + 0xc);
  return;
}


// ==== 1010277a UByteProperty::Identical

/* public: virtual int __thiscall UByteProperty::Identical(void const *,void const *)const  */

int __thiscall UByteProperty::Identical(UByteProperty *this,void *param_1,void *param_2)

{
                    /* 0x277a  1431  ?Identical@UByteProperty@@UBEHPBX0@Z */
  if (param_2 != (void *)0x0) {
    return (uint)(*(char *)param_1 == *(char *)param_2);
  }
  return (uint)(*(char *)param_1 == '\0');
}


// ==== 1010277f FArray::operator=

/* public: class FArray & __thiscall FArray::operator=(class FArray const &) */

FArray * __thiscall FArray::operator=(FArray *this,FArray *param_1)

{
                    /* 0x277f  430  ??4FArray@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 10102789 UArrayProperty::~UArrayProperty

/* public: virtual __thiscall UArrayProperty::~UArrayProperty(void) */

void __thiscall UArrayProperty::~UArrayProperty(UArrayProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2789  317  ??1UArrayProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7dd8;
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


// ==== 1010278e UObjectProperty::Link

/* public: virtual void __thiscall UObjectProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UObjectProperty::Link(UObjectProperty *this,FArchive *param_1,UProperty *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x278e  1562  ?Link@UObjectProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be060;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x44) = 4;
  iVar2 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
  *(uint *)(this + 0x54) = iVar2 + 3U & 0xfffffffc;
  uVar1 = *(uint *)(this + 0x48);
  if ((((uVar1 & 0x4000000) != 0) && ((uVar1 & 8) != 0)) ||
     ((*(uint *)(*(int *)(this + 0x78) + 0x4a4) & 0x200000) != 0)) {
    *(uint *)(this + 0x48) = uVar1 | 0x400000;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102793 FStringNoInit::FStringNoInit

/* public: __thiscall FStringNoInit::FStringNoInit(struct FStringNoInit const &) */

FStringNoInit * __thiscall FStringNoInit::FStringNoInit(FStringNoInit *this,FStringNoInit *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2793  155  ??0FStringNoInit@@QAE@ABU0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b71d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102798 thunk_FUN_101090a0 thunk -> 101090a0

// ==== 1010279d thunk_FUN_10109080 thunk -> 10109080

// ==== 101027a2 thunk_FUN_101088a0 thunk -> 101088a0

// ==== 101027a7 UProperty::StaticClass

/* public: static class UClass * __cdecl UProperty::StaticClass(void) */

UClass * __cdecl UProperty::StaticClass(void)

{
                    /* 0x27a7  1915  ?StaticClass@UProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101027b1 thunk_FUN_10127300 thunk -> 10127300

// ==== 101027b6 UFloatProperty::UFloatProperty

/* public: __thiscall UFloatProperty::UFloatProperty(class UFloatProperty const &) */

UFloatProperty * __thiscall
UFloatProperty::UFloatProperty(UFloatProperty *this,UFloatProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x27b6  222  ??0UFloatProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101027bb thunk_FUN_1011a0f0 thunk -> 1011a0f0

// ==== 101027ca FString::operator+=

/* public: class FString & __thiscall FString::operator+=(class FString const &) */

FString * __thiscall FString::operator+=(FString *this,FString *param_1)

{
  FString *pFVar1;
  
                    /* 0x27ca  684  ??YFString@@QAEAAV0@ABV0@@Z */
  if (*(int *)(param_1 + 4) != 0) {
    pFVar1 = operator+=(this,*(ushort **)param_1);
    return pFVar1;
  }
  pFVar1 = operator+=(this,&DAT_101cdd44);
  return pFVar1;
}


// ==== 101027cf UObject::execHighNative0

/* public: void __thiscall UObject::execHighNative0(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative0(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x27cf  2247  ?execHighNative0@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,param_2);
  return;
}


// ==== 101027d9 FVector::Component

/* public: float & __thiscall FVector::Component(int) */

float * __thiscall FVector::Component(FVector *this,int param_1)

{
                    /* 0x27d9  854  ?Component@FVector@@QAEAAMH@Z */
  return (float *)(this + param_1 * 4);
}


// ==== 101027e3 thunk_FUN_101251c0 thunk -> 101251c0

// ==== 101027ed thunk_FUN_101673f0 thunk -> 101673f0

// ==== 101027f2 UObject::execObjectToString

/* public: void __thiscall UObject::execObjectToString(struct FFrame &,void * const) */

void __thiscall UObject::execObjectToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  wchar_t *_Src;
  int iVar2;
  UObject *unaff_EDI;
  FArray *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x27f2  2340  ?execObjectToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  if (unaff_EDI == (UObject *)0x0) {
    _Src = L"None";
  }
  else {
    _Src = (wchar_t *)GetPathName(unaff_EDI,(UObject *)0x0,(ushort *)0x0);
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


// ==== 101027f7 UObject::execRotationConst

/* public: void __thiscall UObject::execRotationConst(struct FFrame &,void * const) */

void __thiscall UObject::execRotationConst(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  
                    /* 0x27f7  2357  ?execRotationConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)param_2 = uVar1;
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)((int)param_2 + 4) = uVar1;
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)((int)param_2 + 8) = uVar1;
  return;
}


// ==== 101027fc thunk_FUN_10126810 thunk -> 10126810

// ==== 10102806 FUnknown::FUnknown

/* public: __thiscall FUnknown::FUnknown(class FUnknown const &) */

void __thiscall FUnknown::FUnknown(FUnknown *this,FUnknown *param_1)

{
                    /* 0x2806  165  ??0FUnknown@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1010280b FBitWriter::~FBitWriter

/* public: virtual __thiscall FBitWriter::~FBitWriter(void) */

void __thiscall FBitWriter::~FBitWriter(FBitWriter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x280b  296  ??1FBitWriter@@UAE@XZ */
  puStack_8 = &LAB_101b7fe3;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_10118750();
  *(undefined ***)this = FArchive::vftable;
  ExceptionList = pvStack_c;
  return;
}


// ==== 10102810 ULinker::ULinker

/* public: __thiscall ULinker::ULinker(class UObject *) */

ULinker * __thiscall ULinker::ULinker(ULinker *this,UObject *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2810  235  ??0ULinker@@QAE@PAVUObject@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbb50;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(UObject **)(this + 0x34) = param_1;
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
  *(undefined4 *)(this + 0x9c) = 0x1e240;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  uStack_4 = CONCAT31((int3)((uint)uStack_4 >> 8),10);
  *(undefined4 *)(this + 0xac) = 0;
  if (*(int *)(this + 0x34) == 0) {
    appFailAssert("LinkerRoot",".\\UnLinker.cpp",100);
  }
  if (GIsEditor != 0) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x40000;
  }
  if (GIsClient != 0) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x10000;
  }
  if (GIsServer != 0) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x20000;
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102815 UTextBufferFactory::operator_new

/* public: static void * __cdecl UTextBufferFactory::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTextBufferFactory::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x2815  423  ??2UTextBufferFactory@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 1010281a FMemStack::GetByteCount

/* public: int __thiscall FMemStack::GetByteCount(void) */

int __thiscall FMemStack::GetByteCount(FMemStack *this)

{
  int iVar1;
  
                    /* 0x281a  1283  ?GetByteCount@FMemStack@@QAEHXZ */
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  iVar1 = FMemStackFrame::GetByteCount((FMemStackFrame *)(this + iVar1 * 0x10));
  return iVar1;
}


// ==== 1010281f FQuat::FQuat

/* public: __thiscall FQuat::FQuat(float,float,float,float) */

void __thiscall FQuat::FQuat(FQuat *this,float param_1,float param_2,float param_3,float param_4)

{
                    /* 0x281f  115  ??0FQuat@@QAE@MMMM@Z */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}


// ==== 10102824 FErrorOutError::Serialize

/* public: virtual void __thiscall FErrorOutError::Serialize(unsigned short const *,enum EName) */

void __thiscall FErrorOutError::Serialize(FErrorOutError *this,ushort *param_1,EName param_2)

{
                    /* 0x2824  1796  ?Serialize@FErrorOutError@@UAEXPBGW4EName@@@Z */
  return;
}


// ==== 10102829 UObject::execByteToBool

/* public: void __thiscall UObject::execByteToBool(struct FFrame &,void * const) */

void __thiscall UObject::execByteToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  
                    /* 0x2829  2164  ?execByteToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffff,(uint)this & 0xffffff);
  *unaff_retaddr = (uint)((char)((uint)param_1 >> 0x18) != '\0');
  return;
}


// ==== 10102833 UEnum::operator=

/* public: class UEnum & __thiscall UEnum::operator=(class UEnum const &) */

UEnum * __thiscall UEnum::operator=(UEnum *this,UEnum *param_1)

{
                    /* 0x2833  519  ??4UEnum@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  thunk_FUN_10118e30(param_1 + 0x40);
  return this;
}


// ==== 10102838 USubsystem::USubsystem

/* public: __thiscall USubsystem::USubsystem(class USubsystem const &) */

USubsystem * __thiscall USubsystem::USubsystem(USubsystem *this,USubsystem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2838  283  ??0USubsystem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6838;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)(this + 0x34) = FExec::vftable;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010283d TArray<unsigned_short>::Pop

/* public: unsigned short __thiscall TArray<unsigned short>::Pop(void) */

ushort __thiscall TArray<unsigned_short>::Pop(TArray<unsigned_short> *this)

{
  ushort uVar1;
  
                    /* 0x283d  1681  ?Pop@?$TArray@G@@QAEGXZ */
  if (*(int *)(this + 4) < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(ushort *)(*(int *)this + -2 + *(int *)(this + 4) * 2);
  Remove(this,*(int *)(this + 4) + -1,1);
  return uVar1;
}


// ==== 10102842 thunk_FUN_1011e290 thunk -> 1011e290

// ==== 10102847 thunk_FUN_1012b3e0 thunk -> 1012b3e0

// ==== 1010284c FArchiveCountMem::FArchiveCountMem

/* public: __thiscall FArchiveCountMem::FArchiveCountMem(class FArchiveCountMem const &) */

FArchiveCountMem * __thiscall
FArchiveCountMem::FArchiveCountMem(FArchiveCountMem *this,FArchiveCountMem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x284c  7  ??0FArchiveCountMem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b69f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102851 thunk_FUN_10118ed0 thunk -> 10118ed0

// ==== 10102856 UObject::execStructCmpNe

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall UObject::execStructCmpNe(struct FFrame &,void * const) */

void __thiscall UObject::execStructCmpNe(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x2856  2379  ?execStructCmpNe@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *(uint *)param_2 = (uint)(iVar3 == 0);
  return;
}


// ==== 1010285b UMapProperty::operator_new

/* public: static void * __cdecl UMapProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UMapProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x285b  392  ??2UMapProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102860 FMatrix::operator*

/* public: class FMatrix __thiscall FMatrix::operator*(class FMatrix)const  */

void __thiscall
FMatrix::operator*(FMatrix *this,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,float param_12,float param_13,float param_14,float param_15,
                  float param_16,float param_17,float param_18)

{
                    /* 0x2860  603  ??DFMatrix@@QBE?AV0@V0@@Z */
  *param_2 = param_11 * *(float *)(this + 8) +
             param_7 * *(float *)(this + 4) + param_3 * *(float *)this +
             param_15 * *(float *)(this + 0xc);
  param_2[1] = *(float *)(this + 0xc) * param_16 +
               param_12 * *(float *)(this + 8) +
               param_8 * *(float *)(this + 4) + param_4 * *(float *)this;
  param_2[2] = *(float *)(this + 0xc) * param_17 +
               param_13 * *(float *)(this + 8) +
               param_9 * *(float *)(this + 4) + *(float *)this * param_5;
  param_2[3] = *(float *)(this + 0xc) * param_18 +
               param_14 * *(float *)(this + 8) +
               param_10 * *(float *)(this + 4) + *(float *)this * param_6;
  param_2[4] = *(float *)(this + 0x1c) * param_15 +
               *(float *)(this + 0x18) * param_11 +
               *(float *)(this + 0x14) * param_7 + *(float *)(this + 0x10) * param_3;
  param_2[5] = *(float *)(this + 0x1c) * param_16 +
               *(float *)(this + 0x18) * param_12 +
               *(float *)(this + 0x14) * param_8 + *(float *)(this + 0x10) * param_4;
  param_2[6] = *(float *)(this + 0x1c) * param_17 +
               *(float *)(this + 0x18) * param_13 +
               *(float *)(this + 0x14) * param_9 + *(float *)(this + 0x10) * param_5;
  param_2[7] = *(float *)(this + 0x1c) * param_18 +
               *(float *)(this + 0x18) * param_14 +
               *(float *)(this + 0x14) * param_10 + *(float *)(this + 0x10) * param_6;
  param_2[8] = *(float *)(this + 0x2c) * param_15 +
               *(float *)(this + 0x28) * param_11 +
               *(float *)(this + 0x24) * param_7 + *(float *)(this + 0x20) * param_3;
  param_2[9] = *(float *)(this + 0x2c) * param_16 +
               *(float *)(this + 0x28) * param_12 +
               *(float *)(this + 0x24) * param_8 + *(float *)(this + 0x20) * param_4;
  param_2[10] = *(float *)(this + 0x2c) * param_17 +
                *(float *)(this + 0x28) * param_13 +
                *(float *)(this + 0x24) * param_9 + *(float *)(this + 0x20) * param_5;
  param_2[0xb] = *(float *)(this + 0x2c) * param_18 +
                 *(float *)(this + 0x28) * param_14 +
                 *(float *)(this + 0x24) * param_10 + *(float *)(this + 0x20) * param_6;
  param_2[0xc] = param_11 * *(float *)(this + 0x38) +
                 *(float *)(this + 0x30) * param_3 + *(float *)(this + 0x34) * param_7 +
                 *(float *)(this + 0x3c) * param_15;
  param_2[0xd] = *(float *)(this + 0x3c) * param_16 +
                 *(float *)(this + 0x38) * param_12 +
                 *(float *)(this + 0x34) * param_8 + param_4 * *(float *)(this + 0x30);
  param_2[0xe] = *(float *)(this + 0x3c) * param_17 +
                 *(float *)(this + 0x38) * param_13 +
                 *(float *)(this + 0x34) * param_9 + *(float *)(this + 0x30) * param_5;
  param_2[0xf] = *(float *)(this + 0x3c) * param_18 +
                 *(float *)(this + 0x38) * param_14 +
                 *(float *)(this + 0x34) * param_10 + *(float *)(this + 0x30) * param_6;
  return;
}


// ==== 10102865 FUnknown::AddRef

/* public: virtual unsigned long __stdcall FUnknown::AddRef(void) */

ulong FUnknown::AddRef(void)

{
                    /* 0x2865  791  ?AddRef@FUnknown@@UAGKXZ */
  return 0;
}


// ==== 1010286a FCriticalSection::operator=

/* public: class FCriticalSection & __thiscall FCriticalSection::operator=(class FCriticalSection
   const &) */

FCriticalSection * __thiscall
FCriticalSection::operator=(FCriticalSection *this,FCriticalSection *param_1)

{
                    /* 0x286a  441  ??4FCriticalSection@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}


// ==== 10102874 thunk_FUN_1012b370 thunk -> 1012b370

// ==== 10102879 ULinkerLoad::AttachRoughLoader

/* private: virtual void __thiscall ULinkerLoad::AttachRoughLoader(class FRoughLoader *) */

void __thiscall ULinkerLoad::AttachRoughLoader(ULinkerLoad *this,FRoughLoader *param_1)

{
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2879  811  ?AttachRoughLoader@ULinkerLoad@@EAEXPAVFRoughLoader@@@Z */
  puStack_c = &LAB_101bb7a0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10149550(&param_1);
  uStack_18 = -(uint)(this != (ULinkerLoad *)0xc0) & (uint)this;
  thunk_FUN_10149290(&uStack_18);
  param_1 = (FRoughLoader *)(**(code **)(*(int *)this + 0x28))();
  thunk_FUN_101492e0(&param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010287e thunk_FUN_10155250 thunk -> 10155250

// ==== 10102883 UObject::execAdd_IntInt

/* public: void __thiscall UObject::execAdd_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execAdd_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  
                    /* 0x2883  2147  ?execAdd_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *unaff_ESI = (int)&stack0x00000000 * 2 + -8;
  return;
}


// ==== 10102888 thunk_FUN_1011aaf0 thunk -> 1011aaf0

// ==== 1010288d UObject::ProcessEvent

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall UObject::ProcessEvent(class UFunction *,void *,void *) */

void __thiscall UObject::ProcessEvent(UObject *this,UFunction *param_1,void *param_2,void *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  FFrame aFStack_3c [16];
  void *pvStack_2c;
  UObject *pUStack_20;
  FScopeCriticalSection aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x288d  1732  ?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
  puStack_c = &LAB_101bb2c8;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_20 = this;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_18,GScriptingCS);
  iStack_8._0_1_ = 1;
  if ((((GIsScriptable != 0) &&
       (iVar2 = IsProbing(this,*(undefined4 *)(param_1 + 0x20)), iVar2 != 0)) &&
      (iVar2 = (**(code **)(*(int *)this + 0x30))(), iVar2 == 0)) &&
     ((*(short *)(param_1 + 0x90) == 0 &&
      (((*(uint *)(param_1 + 0x8c) & 0x400) == 0 ||
       (iVar2 = (**(code **)(*(int *)this + 0x1c))(param_1,param_2,0), iVar2 == 0)))))) {
    GScriptEntryTag = GScriptEntryTag + 1;
    if (GScriptEntryTag == 1) {
      uVar1 = rdtsc();
      GScriptCycles = GScriptCycles - (int)uVar1;
    }
    puVar3 = (void *)0x0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      puStack_14 = &stack0xffffffb8;
      puVar3 = &stack0xffffffb8;
    }
    FFrame::FFrame(aFStack_3c,this,(UStruct *)param_1,0,puVar3);
    _memcpy(pvStack_2c,param_2,(uint)*(ushort *)(param_1 + 0x96));
    thunk_FUN_10108420((uint)*(ushort *)(param_1 + 0x96) + (int)pvStack_2c,
                       *(int *)(param_1 + 0x4c) - (uint)*(ushort *)(param_1 + 0x96));
    (**(code **)(param_1 + 0x9c))(aFStack_3c,(uint)*(ushort *)(param_1 + 0x98) + (int)pvStack_2c);
    _memcpy(param_2,pvStack_2c,(uint)*(ushort *)(param_1 + 0x96));
    for (piVar4 = *(int **)(param_1 + 0x78); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x18]) {
      if ((int)(uint)*(ushort *)(param_1 + 0x96) <= piVar4[0x15]) {
        (**(code **)(*piVar4 + 0xac))(piVar4[0x15] + (int)pvStack_2c);
      }
    }
    GScriptEntryTag = GScriptEntryTag + -1;
    if (GScriptEntryTag == 0) {
      uVar1 = rdtsc();
      GScriptCycles = GScriptCycles + -0xc + (int)uVar1;
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
    ExceptionList = pvStack_10;
    return;
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102892 appDebugBreak

/* void __cdecl appDebugBreak(void) */

void __cdecl appDebugBreak(void)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2892  2035  ?appDebugBreak@@YAXXZ */
  puStack_c = &LAB_101be390;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  DebugBreak();
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102897 UStruct::Register

/* public: virtual void __thiscall UStruct::Register(void) */

void __thiscall UStruct::Register(UStruct *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2897  1759  ?Register@UStruct@@UAEXXZ */
  puStack_c = &LAB_101b9ee0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UField::Register((UField *)this);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x20);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010289c FCoords::operator/

/* public: class FCoords __thiscall FCoords::operator/(class FVector const &)const  */

void __thiscall FCoords::operator/(FCoords *this,FVector *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *in_stack_00000008;
  float afStack_30 [12];
  
                    /* 0x289c  646  ??KFCoords@@QBE?AV0@ABVFVector@@@Z */
  fVar1 = *in_stack_00000008;
  pfVar3 = afStack_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *(float *)this;
    this = this + 4;
    pfVar3 = pfVar3 + 1;
  }
  afStack_30[0] = fVar1 + afStack_30[0];
  afStack_30[1] = in_stack_00000008[1] + afStack_30[1];
  afStack_30[2] = in_stack_00000008[2] + afStack_30[2];
  pfVar3 = afStack_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(float *)param_1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 101028a1 thunk_FUN_10109060 thunk -> 10109060

// ==== 101028a6 UObject::execOrthoRotation

/* public: void __thiscall UObject::execOrthoRotation(struct FFrame &,void * const) */

void __thiscall UObject::execOrthoRotation(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  FFrame *pFStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_14;
  
                    /* 0x28a6  2343  ?execOrthoRotation@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
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
  uStack_48 = 0;
  uStack_44 = 0;
  pFStack_3c = param_1;
  uStack_40 = 0;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  puStack_38 = &uStack_54;
  puVar2 = (undefined4 *)FCoords::OrthoRotation((FCoords *)&uStack_48);
  *puStack_14 = *puVar2;
  puStack_14[1] = puVar2[1];
  puStack_14[2] = puVar2[2];
  return;
}


// ==== 101028ab thunk_FUN_10132ac0 thunk -> 10132ac0

// ==== 101028b0 UStructProperty::InternalConstructor

/* public: static void __cdecl UStructProperty::InternalConstructor(void *) */

void __cdecl UStructProperty::InternalConstructor(void *param_1)

{
                    /* 0x28b0  1501  ?InternalConstructor@UStructProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UStructProperty(param_1);
    return;
  }
  return;
}


// ==== 101028b5 FRangeVector::operator-

/* public: class FRangeVector __thiscall FRangeVector::operator-(void)const  */

void __thiscall FRangeVector::operator-(FRangeVector *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000004;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x28b5  627  ??GFRangeVector@@QBE?AV0@XZ */
  fVar1 = -*(float *)(this + 0x10);
  fVar2 = -*(float *)(this + 0x14);
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = -*(float *)(this + 8);
  fVar3 = -*(float *)(this + 0xc);
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = -*(float *)this;
  fVar4 = -*(float *)(this + 4);
  fStack_18 = fVar4;
  if (fVar1 <= fVar4) {
    fStack_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *in_stack_00000004 = fStack_18;
  in_stack_00000004[1] = fVar4;
  in_stack_00000004[2] = fStack_10;
  in_stack_00000004[3] = fVar3;
  in_stack_00000004[4] = fStack_8;
  in_stack_00000004[5] = fVar2;
  return;
}


// ==== 101028ba UObject::StaticClass

/* public: static class UClass * __cdecl UObject::StaticClass(void) */

UClass * __cdecl UObject::StaticClass(void)

{
                    /* 0x28ba  1909  ?StaticClass@UObject@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101028bf thunk_FUN_1016c6f0 thunk -> 1016c6f0

// ==== 101028c4 FCoords::ApplyPivot

/* public: class FCoords __thiscall FCoords::ApplyPivot(class FCoords const &)const  */

FCoords * __thiscall FCoords::ApplyPivot(FCoords *this,FCoords *param_1)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x28c4  801  ?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */
  thunk_FUN_1010f5b0();
  fVar1 = in_stack_00000008[1];
  fVar2 = in_stack_00000008[2];
  *(float *)param_1 = *in_stack_00000008 + fStack_c;
  *(float *)(param_1 + 4) = fVar1 + fStack_8;
  *(float *)(param_1 + 8) = fVar2 + fStack_4;
  thunk_FUN_1010f5b0(this,in_stack_00000008 + 3,&fStack_c);
  *(float *)(param_1 + 0xc) = fStack_c;
  *(float *)(param_1 + 0x10) = fStack_8;
  *(float *)(param_1 + 0x14) = fStack_4;
  thunk_FUN_1010f5b0(this,in_stack_00000008 + 6,&fStack_c);
  *(float *)(param_1 + 0x18) = fStack_c;
  *(float *)(param_1 + 0x1c) = fStack_8;
  *(float *)(param_1 + 0x20) = fStack_4;
  thunk_FUN_1010f5b0(this,in_stack_00000008 + 9,&fStack_c);
  *(float *)(param_1 + 0x24) = fStack_c;
  *(float *)(param_1 + 0x28) = fStack_8;
  *(float *)(param_1 + 0x2c) = fStack_4;
  return param_1;
}


// ==== 101028c9 thunk_FUN_10131030 thunk -> 10131030

// ==== 101028ce FQuat::Normalize

/* public: int __thiscall FQuat::Normalize(void) */

int __thiscall FQuat::Normalize(FQuat *this)

{
  float fVar1;
  double dVar2;
  
                    /* 0x28ce  1642  ?Normalize@FQuat@@QAEHXZ */
  fVar1 = *(float *)(this + 0xc) * *(float *)(this + 0xc) +
          *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  if (1e-05 <= fVar1) {
    dVar2 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar2;
    *(float *)this = fVar1 * *(float *)this;
    *(float *)(this + 4) = fVar1 * *(float *)(this + 4);
    *(float *)(this + 8) = *(float *)(this + 8) * fVar1;
    *(float *)(this + 0xc) = fVar1 * *(float *)(this + 0xc);
    return 1;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0x3dcccccd;
  *(undefined4 *)(this + 0xc) = 0;
  return 0;
}


// ==== 101028d3 FGuid::String

/* public: unsigned short * __thiscall FGuid::String(void)const  */

ushort * __thiscall FGuid::String(FGuid *this)

{
  ushort *puVar1;
  
                    /* 0x28d3  1951  ?String@FGuid@@QBEPAGXZ */
  puVar1 = appStaticString1024();
  appSprintf(puVar1,(ushort *)L"%08X%08X%08X%08X",*(undefined4 *)this,*(undefined4 *)(this + 4),
             *(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  return puVar1;
}


// ==== 101028d8 FSuperPointInfoHit::operator==

/* public: int __thiscall FSuperPointInfoHit::operator==(class FSuperPointInfoHit const &)const  */

int __thiscall FSuperPointInfoHit::operator==(FSuperPointInfoHit *this,FSuperPointInfoHit *param_1)

{
                    /* 0x28d8  573  ??8FSuperPointInfoHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 101028dd UDelegateProperty::StaticClass

/* public: static class UClass * __cdecl UDelegateProperty::StaticClass(void) */

UClass * __cdecl UDelegateProperty::StaticClass(void)

{
                    /* 0x28dd  1895  ?StaticClass@UDelegateProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101028e2 FString::operator+=

/* public: class FString & __thiscall FString::operator+=(unsigned short) */

FString * __thiscall FString::operator+=(FString *this,ushort param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x28e2  685  ??YFString@@QAEAAV0@G@Z */
  if (param_1 != 0) {
    iVar2 = *(int *)(this + 4);
    if (iVar2 != 0) {
      iVar1 = iVar2 + 1;
      *(int *)(this + 4) = iVar1;
      if (*(int *)(this + 8) < iVar1) {
        *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc((FArray *)this,2);
      }
      *(ushort *)(*(int *)this + -2 + iVar2 * 2) = param_1;
      *(undefined2 *)(*(int *)this + iVar2 * 2) = 0;
      return this;
    }
    TArray<unsigned_short>::Add((TArray<unsigned_short> *)this,2);
    **(ushort **)this = param_1;
    *(undefined2 *)(*(int *)this + 2) = 0;
  }
  return this;
}


// ==== 101028e7 FMatrix::~FMatrix

/* public: __thiscall FMatrix::~FMatrix(void) */

void __thiscall FMatrix::~FMatrix(FMatrix *this)

{
                    /* 0x28e7  303  ??1FMatrix@@QAE@XZ */
  return;
}


// ==== 101028ec FSphere::FSphere

/* public: __thiscall FSphere::FSphere(class FVector,float) */

void __thiscall
FSphere::FSphere(FSphere *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
                    /* 0x28ec  137  ??0FSphere@@QAE@VFVector@@M@Z */
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  return;
}


// ==== 101028f1 FMemCache::GHash

/* public: unsigned long __thiscall FMemCache::GHash(unsigned long) */

ulong __thiscall FMemCache::GHash(FMemCache *this,ulong param_1)

{
                    /* 0x28f1  1063  ?GHash@FMemCache@@QAEKK@Z */
  return ((param_1 >> 0xc ^ param_1) >> 0xc ^ param_1) & 0x3fff;
}


// ==== 101028f6 FPlane::operator==

/* public: int __thiscall FPlane::operator==(class FPlane const &)const  */

int __thiscall FPlane::operator==(FPlane *this,FPlane *param_1)

{
                    /* 0x28f6  566  ??8FPlane@@QBEHABV0@@Z */
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
      && (*(float *)(param_1 + 8) == *(float *)(this + 8))) &&
     (*(float *)(param_1 + 0xc) == *(float *)(this + 0xc))) {
    return 1;
  }
  return 0;
}


// ==== 101028fb ParseLine

/* int __cdecl ParseLine(unsigned short const * *,unsigned short *,int,int) */

int __cdecl ParseLine(ushort **param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
                    /* 0x28fb  1669  ?ParseLine@@YAHPAPBGPAGHH@Z */
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  *param_2 = 0;
  while( true ) {
    puVar2 = *param_1;
    uVar1 = *puVar2;
    if ((((uVar1 == 0) || (uVar1 == 10)) || (uVar1 == 0xd)) || (param_3 = param_3 + -1, param_3 < 1)
       ) break;
    if ((!bVar3) && (param_4 == 0)) {
      if ((uVar1 == 0x2f) && (puVar2[1] == 0x2f)) {
        bVar4 = true;
      }
      if (uVar1 == 0x7c) goto LAB_10153d80;
    }
    bVar3 = (bool)(bVar3 ^ uVar1 == 0x22);
    bVar5 = true;
    if (bVar4) {
      *param_1 = puVar2 + 1;
    }
    else {
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      *param_1 = *param_1 + 1;
    }
  }
  if (param_4 == 0) {
LAB_10153d80:
    while( true ) {
      uVar1 = **param_1;
      if (((uVar1 != 10) && (uVar1 != 0xd)) && (uVar1 != 0x7c)) break;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    if (*puVar2 == 0xd) {
      *param_1 = puVar2 + 1;
    }
    if (**param_1 == 10) {
      *param_1 = *param_1 + 1;
    }
  }
  *param_2 = 0;
  if ((**param_1 == 0) && (!bVar5)) {
    return 0;
  }
  return 1;
}


// ==== 10102900 UObject::execByteToFloat

/* public: void __thiscall UObject::execByteToFloat(struct FFrame &,void * const) */

void __thiscall UObject::execByteToFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  
                    /* 0x2900  2165  ?execByteToFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffff,(uint)this & 0xffffff);
  *unaff_retaddr = (float)((uint)param_1 >> 0x18);
  return;
}


// ==== 10102905 UFloatProperty::UFloatProperty

/* public: __thiscall UFloatProperty::UFloatProperty(void) */

UFloatProperty * __thiscall UFloatProperty::UFloatProperty(UFloatProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2905  224  ??0UFloatProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7af8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010290a UFixedArrayProperty::InternalConstructor

/* public: static void __cdecl UFixedArrayProperty::InternalConstructor(void *) */

void __cdecl UFixedArrayProperty::InternalConstructor(void *param_1)

{
                    /* 0x290a  1484  ?InternalConstructor@UFixedArrayProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UFixedArrayProperty(param_1);
    return;
  }
  return;
}


// ==== 1010290f ULanguage::~ULanguage

/* public: virtual __thiscall ULanguage::~ULanguage(void) */

void __thiscall ULanguage::~ULanguage(ULanguage *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x290f  333  ??1ULanguage@@UAE@XZ */
  puStack_8 = &LAB_101b6858;
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


// ==== 10102914 UObject::execInterpCurveEval

/* public: void __thiscall UObject::execInterpCurveEval(struct FFrame &,void * const) */

void __thiscall UObject::execInterpCurveEval(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float fVar2;
  FInterpCurve aFStack_2c [20];
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2914  2273  ?execInterpCurveEval@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bb558;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FInterpCurve::FInterpCurve(aFStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,aFStack_2c);
  fStack_18 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar2 = FInterpCurve::Eval(aFStack_2c,fStack_18);
  *(float *)param_2 = fVar2;
  uStack_8 = uStack_8 & 0xffffff00;
  FInterpCurve::~FInterpCurve(aFStack_2c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102919 UObject::execNameToString

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::execNameToString(struct FFrame &,void * const) */

void __thiscall UObject::execNameToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *_Src;
  int unaff_EDI;
  FArray *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2919  2322  ?execNameToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  _Src = (ushort *)(*(int *)(_Names + unaff_EDI * 4) + 0xc);
  if (*(ushort **)unaff_retaddr != _Src) {
    if (*_Src == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(_Src);
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


// ==== 1010291e UField::~UField

/* public: virtual __thiscall UField::~UField(void) */

void __thiscall UField::~UField(UField *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x291e  328  ??1UField@@UAE@XZ */
  puStack_8 = &LAB_101b6918;
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


// ==== 10102923 FCodec::Encode

/* public: virtual int __thiscall FCodec::Encode(void *,int) */

int __thiscall FCodec::Encode(FCodec *this,void *param_1,int param_2)

{
                    /* 0x2923  947  ?Encode@FCodec@@UAEHPAXH@Z */
  return 0;
}


// ==== 10102928 UObject::CacheDrivers

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: static void __cdecl UObject::CacheDrivers(int) */

void __cdecl UObject::CacheDrivers(int param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  FRegistryObjectInfo *pFVar8;
  FString *pFVar9;
  FPreferencesInfo *this;
  int iVar10;
  ushort *puVar11;
  ushort auStack_f888 [31500];
  ushort auStack_270 [256];
  FString aFStack_70 [12];
  FString aFStack_64 [12];
  FString aFStack_58 [16];
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  ushort *puStack_38;
  ushort *puStack_30;
  ushort *puStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2928  827  ?CacheDrivers@UObject@@KAXH@Z */
  puStack_c = &LAB_101bd960;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x10167fc3;
  puStack_14 = &stack0xffff076c;
  iVar10 = 0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffff076c;
  if (param_1 == 0) {
    ExceptionList = &pvStack_10;
    puVar3 = GetLanguage();
    iVar4 = appStricmp((ushort *)&GObjCachedLanguage,puVar3);
    puVar2 = puStack_14;
    if (iVar4 == 0) {
      ExceptionList = pvStack_10;
      return;
    }
  }
  puStack_14 = puVar2;
  puVar3 = GetLanguage();
  appStrcpy((ushort *)&GObjCachedLanguage,puVar3);
  thunk_FUN_10164fc0(0);
  thunk_FUN_10165190(0);
  do {
    iStack_28 = iVar10;
    if (*(int *)(GSys + 0x68) <= iVar10) {
      (**(code **)(*(int *)GFileManager + 0x30))(&iStack_48,L"Core.*",1,0);
      iStack_8._0_1_ = 2;
      for (iVar10 = 0; iStack_3c = iVar10, iVar10 < iStack_44; iVar10 = iVar10 + 1) {
        FString::FString((FString *)&iStack_20);
        iStack_8._0_1_ = 3;
        pFVar9 = (FString *)FString::FString(aFStack_64,(ushort *)&DAT_101dba40);
        iStack_8._0_1_ = 4;
        iVar4 = FString::Split((FString *)(iStack_48 + iVar10 * 0xc),pFVar9,(FString *)0x0,
                               (FString *)&iStack_20,1);
        iStack_8._0_1_ = 3;
        FString::~FString(aFStack_64);
        if (iVar4 != 0) {
          pFVar9 = (FString *)FString::FString(aFStack_58,(ushort *)&DAT_101dba44);
          iStack_8._0_1_ = 5;
          pFVar9 = (FString *)FString::operator+(pFVar9,aFStack_70);
          iStack_8._0_1_ = 6;
          FString::operator=((FString *)&iStack_20,pFVar9);
          iStack_8._0_1_ = 5;
          FString::~FString(aFStack_70);
          iStack_8._0_1_ = 3;
          FString::~FString(aFStack_58);
          iVar4 = FString::operator!=((FString *)&iStack_20,(ushort *)L".dll");
          if (((iVar4 != 0) &&
              (iVar4 = FString::operator!=((FString *)&iStack_20,(ushort *)&DAT_101dba54),
              iVar4 != 0)) &&
             (iVar4 = FString::operator!=((FString *)&iStack_20,(ushort *)L".ilk"), iVar4 != 0)) {
            pFVar8 = (FRegistryObjectInfo *)thunk_FUN_1015c260(0x3c,&GObjDrivers);
            if (pFVar8 == (FRegistryObjectInfo *)0x0) {
              pFVar9 = (FString *)0x0;
            }
            else {
              pFVar9 = (FString *)FRegistryObjectInfo::FRegistryObjectInfo(pFVar8);
            }
            puVar5 = (ushort *)&DAT_101dba68;
            puVar3 = FString::operator*((FString *)(iVar10 * 0xc + iStack_48));
            puVar3 = appStrstr(puVar3,puVar5);
            FString::operator=(pFVar9,puVar3 + 1);
            FString::operator=(pFVar9 + 0xc,(ushort *)L"Class");
            puVar3 = GetPathName((UObject *)&ULanguage::PrivateStaticClass,(UObject *)0x0,
                                 (ushort *)0x0);
            FString::operator=(pFVar9 + 0x18,puVar3);
          }
        }
        iStack_8._0_1_ = 2;
        FString::~FString((FString *)&iStack_20);
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_10124a00();
      ExceptionList = pvStack_10;
      return;
    }
    puVar3 = FString::operator*((FString *)(*(int *)(GSys + 100) + iVar10 * 0xc));
    puVar5 = appBaseDir();
    appSprintf(auStack_270,(ushort *)L"%s%s",puVar5,puVar3);
    puVar3 = appStrstr(auStack_270,(ushort *)&DAT_101db8e8);
    puStack_38 = puVar3;
    if (puVar3 != (ushort *)0x0) {
      appSprintf(puVar3,(ushort *)L"*.int");
      (**(code **)(*(int *)GFileManager + 0x30))(&iStack_20,auStack_270,1,0);
      iStack_8._0_1_ = 1;
      iStack_24 = 0;
      while (iVar4 = iStack_24, iStack_24 < iStack_1c) {
        puVar5 = FString::operator*((FString *)(iStack_20 + iStack_24 * 0xc));
        puVar6 = appBaseDir();
        appSprintf(puVar3,(ushort *)L"%s%s",puVar6,puVar5);
        iVar10 = appStrlen(puVar3);
        puVar5 = GetLanguage();
        appSprintf(puVar3 + iVar10 + -4,(ushort *)&DAT_101db908,puVar5);
        iVar7 = (**(code **)(*(int *)GConfig + 0x18))(L"Public",auStack_f888,0x7b0c,puVar3);
        if (iVar7 == 0) {
          appSprintf(puVar3 + iVar10 + -4,(ushort *)L".int");
          iVar10 = (**(code **)(*(int *)GConfig + 0x18))(L"Public",auStack_f888,0x7b0c,puVar3);
          if (iVar10 != 0) goto LAB_10168141;
        }
        else {
LAB_10168141:
          puVar5 = auStack_f888;
          while (puVar6 = puVar5, iVar4 = iStack_24, *puVar6 != 0) {
            iVar10 = appStrlen(puVar6);
            puStack_30 = puVar6 + iVar10 + 1;
            puStack_2c = appStrstr(puVar6,(ushort *)&DAT_101db93c);
            puVar5 = puStack_30;
            if (puStack_2c != (ushort *)0x0) {
              *puStack_2c = 0;
              puVar11 = puStack_2c + 1;
              if (*puVar11 == 0x28) {
                *puVar11 = 0;
                puVar11 = puStack_2c + 2;
              }
              puStack_2c = puVar11;
              if ((*puVar11 != 0) && (iVar10 = appStrlen(puVar11), puVar11[iVar10 + -1] == 0x29)) {
                iVar10 = appStrlen(puVar11);
                puVar11[iVar10 + -1] = 0;
              }
              iVar10 = appStricmp(puVar6,(ushort *)L"Object");
              if (iVar10 == 0) {
                pFVar8 = (FRegistryObjectInfo *)thunk_FUN_1015c260(0x3c,&GObjDrivers);
                if (pFVar8 == (FRegistryObjectInfo *)0x0) {
                  pFVar9 = (FString *)0x0;
                }
                else {
                  pFVar9 = (FString *)FRegistryObjectInfo::FRegistryObjectInfo(pFVar8);
                }
                Parse(puVar11,(ushort *)L"Name=",pFVar9);
                Parse(puVar11,(ushort *)L"Class=",pFVar9 + 0xc);
                Parse(puVar11,(ushort *)L"MetaClass=",pFVar9 + 0x18);
                Parse(puVar11,(ushort *)L"Description=",pFVar9 + 0x24);
                Parse(puVar11,(ushort *)L"Autodetect=",pFVar9 + 0x30);
                puVar5 = puStack_30;
              }
              else {
                iVar10 = appStricmp(puVar6,(ushort *)L"Preferences");
                puVar5 = puStack_30;
                if (iVar10 == 0) {
                  this = (FPreferencesInfo *)thunk_FUN_1015c2b0(0x2c,&GObjPreferences);
                  if (this == (FPreferencesInfo *)0x0) {
                    pFVar9 = (FString *)0x0;
                  }
                  else {
                    pFVar9 = (FString *)FPreferencesInfo::FPreferencesInfo(this);
                  }
                  Parse(puVar11,(ushort *)L"Caption=",pFVar9);
                  Parse(puVar11,(ushort *)L"Parent=",pFVar9 + 0xc);
                  Parse(puVar11,(ushort *)L"Class=",pFVar9 + 0x18);
                  Parse(puVar11,(ushort *)L"Category=",(FName *)(pFVar9 + 0x24));
                  ParseUBOOL(puVar11,(ushort *)L"Immediate=",(int *)(pFVar9 + 0x28));
                  puVar1 = (uint *)(*(int *)(_Names + *(int *)(pFVar9 + 0x24) * 4) + 4);
                  *puVar1 = *puVar1 | 0x4000000;
                  puVar3 = puStack_38;
                  puVar5 = puStack_30;
                }
              }
            }
          }
        }
        iVar10 = iStack_28;
        iStack_24 = iVar4 + 1;
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_10124a00();
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


// ==== 1010292d thunk_FUN_101188d0 thunk -> 101188d0

// ==== 10102932 FNotifyHook::NotifyPostChange

/* public: virtual void __thiscall FNotifyHook::NotifyPostChange(void *) */

void __thiscall FNotifyHook::NotifyPostChange(FNotifyHook *this,void *param_1)

{
                    /* 0x2932  1646  ?NotifyPostChange@FNotifyHook@@UAEXPAX@Z */
  return;
}


// ==== 1010293c UTextBuffer::Serialize

/* public: virtual void __thiscall UTextBuffer::Serialize(class FArchive &) */

void __thiscall UTextBuffer::Serialize(UTextBuffer *this,FArchive *param_1)

{
  undefined4 uVar1;
  FArchive *pFVar2;
  UTextBuffer *pUVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x293c  1827  ?Serialize@UTextBuffer@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bd060;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  pUVar3 = this + 0x40;
  uVar1 = thunk_FUN_10130820(param_1,this + 0x38,this + 0x3c);
  pFVar2 = (FArchive *)thunk_FUN_10130820(uVar1);
  operator<<(pFVar2,(FString *)pUVar3);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102941 UObject::execComplementEqual_FloatFloat

/* public: void __thiscall UObject::execComplementEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execComplementEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float fVar2;
  undefined4 *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x2941  2175  ?execComplementEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z
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
  fVar2 = (float)&uStack_4 - (float)&uStack_4;
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar2 < 0.0001) {
    *unaff_ESI = 1;
    return;
  }
  *unaff_ESI = 0;
  return;
}


// ==== 10102946 FPreferencesInfo::~FPreferencesInfo

/* public: __thiscall FPreferencesInfo::~FPreferencesInfo(void) */

void __thiscall FPreferencesInfo::~FPreferencesInfo(FPreferencesInfo *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x2946  308  ??1FPreferencesInfo@@QAE@XZ */
  puStack_8 = &LAB_101b73de;
  pvStack_c = ExceptionList;
  uStack_4 = 1;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0x18));
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0xc));
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1010294b appGetSystemErrorMessage

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned short const * __cdecl appGetSystemErrorMessage(int) */

ushort * __cdecl appGetSystemErrorMessage(int param_1)

{
  undefined1 *puVar1;
  ushort *puVar2;
  CHAR aCStack_420 [1036];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x294b  2056  ?appGetSystemErrorMessage@@YAPBGH@Z */
  puStack_c = &LAB_101be310;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbd4;
  uStack_8 = 0;
  _DAT_1033cae8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xfffffbd4;
  if (param_1 == 0) {
    ExceptionList = &pvStack_10;
    param_1 = GetLastError();
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  if (GUnicodeOS == 0) {
    FormatMessageA(0x1000,(LPCVOID)0x0,param_1,0x400,aCStack_420,0x400,(va_list *)0x0);
    puVar2 = appFromAnsi(aCStack_420,(ushort *)0x0);
    appStrcpy((ushort *)&DAT_1033cae8,puVar2);
  }
  else {
    FormatMessageW(0x1000,(LPCVOID)0x0,param_1,0x400,(LPWSTR)&DAT_1033cae8,0x400,(va_list *)0x0);
  }
  puVar2 = appStrchr((ushort *)&DAT_1033cae8,0xd);
  if (puVar2 != (ushort *)0x0) {
    puVar2 = appStrchr((ushort *)&DAT_1033cae8,0xd);
    *puVar2 = 0;
  }
  puVar2 = appStrchr((ushort *)&DAT_1033cae8,10);
  if (puVar2 != (ushort *)0x0) {
    puVar2 = appStrchr((ushort *)&DAT_1033cae8,10);
    *puVar2 = 0;
  }
  ExceptionList = pvStack_10;
  return (ushort *)&DAT_1033cae8;
}


// ==== 10102950 FInterpCurve::FInterpCurve

/* public: __thiscall FInterpCurve::FInterpCurve(void) */

void __thiscall FInterpCurve::FInterpCurve(FInterpCurve *this)

{
                    /* 0x2950  64  ??0FInterpCurve@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 10102955 thunk_FUN_10124020 thunk -> 10124020

// ==== 1010295a FRangeVector::operator+

/* public: class FRangeVector __thiscall FRangeVector::operator+(class FRangeVector const &)const
    */

void __thiscall FRangeVector::operator+(FRangeVector *this,FRangeVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x295a  638  ??HFRangeVector@@QBE?AV0@ABV0@@Z */
  fVar1 = *(float *)(this + 0x10) + in_stack_00000008[4];
  fVar2 = in_stack_00000008[5] + *(float *)(this + 0x14);
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = in_stack_00000008[2] + *(float *)(this + 8);
  fVar3 = in_stack_00000008[3] + *(float *)(this + 0xc);
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *in_stack_00000008 + *(float *)this;
  fVar4 = in_stack_00000008[1] + *(float *)(this + 4);
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


// ==== 1010295f FModelCoords::Inverse

/* public: class FModelCoords __thiscall FModelCoords::Inverse(void) */

void __thiscall FModelCoords::Inverse(FModelCoords *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puStack_4;
  
                    /* 0x295f  1508  ?Inverse@FModelCoords@@QAE?AV1@XZ */
  puVar1 = (undefined4 *)FCoords::Transpose((FCoords *)this);
  puVar2 = (undefined4 *)FCoords::Transpose((FCoords *)(this + 0x30));
  puVar4 = puStack_4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = puStack_4 + 0xc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ==== 10102969 thunk_FUN_101311a0 thunk -> 101311a0

// ==== 1010296e FPlane::operator+

/* public: class FPlane __thiscall FPlane::operator+(class FPlane const &)const  */

void __thiscall FPlane::operator+(FPlane *this,FPlane *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x296e  634  ??HFPlane@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *in_stack_00000008 + *(float *)this;
  *(float *)(param_1 + 4) = in_stack_00000008[1] + *(float *)(this + 4);
  *(float *)(param_1 + 8) = in_stack_00000008[2] + *(float *)(this + 8);
  *(float *)(param_1 + 0xc) = in_stack_00000008[3] + *(float *)(this + 0xc);
  return;
}


// ==== 10102973 UFloatProperty::ExportTextItem

/* public: virtual void __thiscall UFloatProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UFloatProperty::ExportTextItem
          (UFloatProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2973  982  ?ExportTextItem@UFloatProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101bde70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  appSprintf(param_1,(ushort *)&DAT_101df04c,(double)*(float *)param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102978 FMemStackFrame::~FMemStackFrame

/* public: __thiscall FMemStackFrame::~FMemStackFrame(void) */

void __thiscall FMemStackFrame::~FMemStackFrame(FMemStackFrame *this)

{
  FCriticalSection *pFVar1;
  
                    /* 0x2978  305  ??1FMemStackFrame@@QAE@XZ */
  pFVar1 = MemStackCS;
  if (MemStackCS != (FCriticalSection *)0x0) {
    FCriticalSection::~FCriticalSection(MemStackCS);
    (**(code **)(*(int *)GMalloc + 8))(pFVar1);
    MemStackCS = (FCriticalSection *)0x0;
  }
  return;
}


// ==== 10102982 thunk_FUN_10161bb0 thunk -> 10161bb0

// ==== 10102991 thunk_FUN_101325e0 thunk -> 101325e0

// ==== 10102996 FName::SafeString

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static unsigned short const * __cdecl FName::SafeString(enum EName) */

ushort * __cdecl FName::SafeString(EName param_1)

{
                    /* 0x2996  1784  ?SafeString@FName@@SAPBGW4EName@@@Z */
  if (Initialized != 0) {
    return (ushort *)(*(int *)(_Names + param_1 * 4) + 0xc);
  }
  return (ushort *)L"Uninitialized";
}


// ==== 1010299b thunk_FUN_10178e20 thunk -> 10178e20

// ==== 101029a0 FVector::SafeNormal

/* public: class FVector __thiscall FVector::SafeNormal(void)const  */

void __thiscall FVector::SafeNormal(FVector *this)

{
  float fVar1;
  double dVar2;
  float *in_stack_00000004;
  
                    /* 0x29a0  1783  ?SafeNormal@FVector@@QBE?AV1@XZ */
  fVar1 = *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  if (fVar1 < 1e-08) {
    *in_stack_00000004 = 0.0;
    in_stack_00000004[1] = 0.0;
    in_stack_00000004[2] = 0.0;
    return;
  }
  dVar2 = appSqrt((double)fVar1);
  fVar1 = 1.0 / (float)dVar2;
  *in_stack_00000004 = fVar1 * *(float *)this;
  in_stack_00000004[1] = fVar1 * *(float *)(this + 4);
  in_stack_00000004[2] = fVar1 * *(float *)(this + 8);
  return;
}


// ==== 101029aa UObjectExporterT3D::StaticConstructor

/* public: void __thiscall UObjectExporterT3D::StaticConstructor(void) */

void __thiscall UObjectExporterT3D::StaticConstructor(UObjectExporterT3D *this)

{
  FString *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x29aa  1929  ?StaticConstructor@UObjectExporterT3D@@QAEXXZ */
  puStack_c = &LAB_101b98f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(UClass **)(this + 0x34) = &UObject::PrivateStaticClass;
  *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 1;
  this_00 = (FString *)thunk_FUN_101146f0(0xc,this + 0x38);
  if (this_00 != (FString *)0x0) {
    FString::FString(this_00,(ushort *)&DAT_101d0754);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101029af FStringNoInit::FStringNoInit

/* public: __thiscall FStringNoInit::FStringNoInit(void) */

void __thiscall FStringNoInit::FStringNoInit(FStringNoInit *this)

{
                    /* 0x29af  156  ??0FStringNoInit@@QAE@XZ */
  return;
}


// ==== 101029b4 UObject::execLog

/* WARNING: Removing unreachable block (ram,0x10145459) */
/* public: void __thiscall UObject::execLog(struct FFrame &,void * const) */

void __thiscall UObject::execLog(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puStack_28;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x29b4  2298  ?execLog@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb120;
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
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)param_1);
  }
  uStack_14 = 3;
  FArray::Realloc((FArray *)&puStack_28,2);
  uStack_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_28);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 101029b9 UObject::execPercent_FloatFloat

/* public: void __thiscall UObject::execPercent_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execPercent_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  double dVar2;
  undefined4 uStack_4;
  
                    /* 0x29b9  2344  ?execPercent_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  dVar2 = appFmod((double)(float)&uStack_4,(double)(float)&uStack_4);
  *unaff_ESI = (float)dVar2;
  return;
}


// ==== 101029be UByteProperty::ExportCppItem

/* public: virtual void __thiscall UByteProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall UByteProperty::ExportCppItem(UByteProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x29be  963  ?ExportCppItem@UByteProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bddf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"BYTE");
  ExceptionList = pvStack_10;
  return;
}


// ==== 101029c8 UObject::execVRand

/* public: void __thiscall UObject::execVRand(struct FFrame &,void * const) */

void __thiscall UObject::execVRand(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_c [12];
  
                    /* 0x29c8  2402  ?execVRand@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar1 = (undefined4 *)thunk_FUN_10139700(auStack_c);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)((int)param_2 + 4) = puVar1[1];
  *(undefined4 *)((int)param_2 + 8) = puVar1[2];
  return;
}


// ==== 101029cd UObject::execDynamicLoadObject

/* public: void __thiscall UObject::execDynamicLoadObject(struct FFrame &,void * const) */

void __thiscall UObject::execDynamicLoadObject(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  UObject *pUVar3;
  FFrame *pFStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x29cd  2202  ?execDynamicLoadObject@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb260;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  puStack_10 = (undefined4 *)0x0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_2c = &uStack_18;
  pFStack_30 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  pFStack_30 = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pFStack_30);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar2 = pFStack_30;
  if (puStack_2c == (undefined4 *)0x0) {
    pFVar2 = (FFrame *)&DAT_101cdd44;
  }
  pUVar3 = StaticLoadObject((UClass *)&stack0xffffffdc,(UObject *)0x0,(ushort *)pFVar2,(ushort *)0x0
                            ,-(uint)(param_1 != (FFrame *)0x0) & 0x2000 | 2,(UPackageMap *)0x0);
  *puStack_10 = pUVar3;
  puStack_2c = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&pFStack_30,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&pFStack_30);
  ExceptionList = (void *)0x0;
  return;
}


// ==== 101029d2 UObject::execEqualEqual_BoolBool

/* public: void __thiscall UObject::execEqualEqual_BoolBool(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_BoolBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x29d2  2206  ?execEqualEqual_BoolBool@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 101029d7 FVector::operator[]

/* public: float & __thiscall FVector::operator[](int) */

float * __thiscall FVector::operator[](FVector *this,int param_1)

{
  FVector *pFVar1;
  
                    /* 0x29d7  597  ??AFVector@@QAEAAMH@Z */
  if (0x7fffffff < (uint)param_1) {
    appFailAssert("i>-1","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x2f1);
  }
  if (2 < param_1) {
    appFailAssert("i<3","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x2f2);
  }
  if (param_1 == 0) {
    return (float *)this;
  }
  pFVar1 = this + 4;
  if (param_1 != 1) {
    pFVar1 = this + 8;
  }
  return (float *)pFVar1;
}


// ==== 101029e1 thunk_FUN_10164fc0 thunk -> 10164fc0

// ==== 101029e6 thunk_FUN_10127440 thunk -> 10127440

// ==== 101029eb FBlowFish::Blowfish_encipher

/* public: void __thiscall FBlowFish::Blowfish_encipher(unsigned long *,unsigned long *) */

void __thiscall FBlowFish::Blowfish_encipher(FBlowFish *this,ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x29eb  822  ?Blowfish_encipher@FBlowFish@@QAEXPAK0@Z */
  uVar3 = *param_1 ^ *(uint *)this;
  uVar2 = (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
           *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
          *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
          *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 4) ^ *param_2;
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 8);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0xc);
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x10);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x14);
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x18);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x1c);
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x20);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x24);
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x28);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x2c);
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x30);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x34);
  uVar3 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x38);
  uVar2 = uVar2 ^ (*(int *)(this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                   *(int *)(this + (uVar3 >> 0x18) * 4 + 0x48) ^
                  *(uint *)(this + (uVar3 >> 8 & 0xff) * 4 + 0x848)) +
                  *(int *)(this + (uVar3 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x3c);
  uVar1 = *(uint *)(this + 0x44);
  *param_2 = uVar3 ^ (*(int *)(this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                      *(int *)(this + (uVar2 >> 0x18) * 4 + 0x48) ^
                     *(uint *)(this + (uVar2 >> 8 & 0xff) * 4 + 0x848)) +
                     *(int *)(this + (uVar2 & 0xff) * 4 + 0xc48) ^ *(uint *)(this + 0x40);
  *param_1 = uVar2 ^ uVar1;
  return;
}


// ==== 101029f5 UFactory::StaticClass

/* public: static class UClass * __cdecl UFactory::StaticClass(void) */

UClass * __cdecl UFactory::StaticClass(void)

{
                    /* 0x29f5  1898  ?StaticClass@UFactory@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101029fa thunk_FUN_10165850 thunk -> 10165850

// ==== 101029ff thunk_FUN_10165260 thunk -> 10165260

// ==== 10102a04 FNullOutError::FNullOutError

/* public: __thiscall FNullOutError::FNullOutError(void) */

void __thiscall FNullOutError::FNullOutError(FNullOutError *this)

{
                    /* 0x2a04  91  ??0FNullOutError@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10102a09 UObject::execMultiply_VectorFloat

/* public: void __thiscall UObject::execMultiply_VectorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_VectorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_18;
  float fStack_14;
  float fStack_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x2a09  2318  ?execMultiply_VectorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_c);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = fStack_c * unaff_ESI;
  pfStack_8[1] = fStack_18 * fStack_c;
  pfStack_8[2] = fStack_c * fStack_14;
  return;
}


// ==== 10102a13 UField::operator_new

/* public: static void * __cdecl UField::operator new(unsigned int,enum EInternal *) */

void * __cdecl UField::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2a13  376  ??2UField@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102a1d thunk_FUN_1012a190 thunk -> 1012a190

// ==== 10102a22 ULinker::StaticClass

/* public: static class UClass * __cdecl ULinker::StaticClass(void) */

UClass * __cdecl ULinker::StaticClass(void)

{
                    /* 0x2a22  1905  ?StaticClass@ULinker@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10102a27 UObject::operator_new

/* public: static void * __cdecl UObject::operator new(unsigned int,enum EInternal *) */

void * __cdecl UObject::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2a27  396  ??2UObject@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102a2c appGetProcReturnCode

/* int __cdecl appGetProcReturnCode(void *,int *) */

int __cdecl appGetProcReturnCode(void *param_1,int *param_2)

{
  BOOL BVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2a2c  2055  ?appGetProcReturnCode@@YAHPAXPAH@Z */
  puStack_c = &LAB_101be3e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  BVar1 = GetExitCodeProcess(param_1,(LPDWORD)param_2);
  if ((BVar1 != 0) && (*param_2 != 0x103)) {
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10102a31 FSphere::FSphere

/* public: __thiscall FSphere::FSphere(int) */

void __thiscall FSphere::FSphere(FSphere *this,int param_1)

{
                    /* 0x2a31  135  ??0FSphere@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


// ==== 10102a36 UObject::execVectorToRotator

/* public: void __thiscall UObject::execVectorToRotator(struct FFrame &,void * const) */

void __thiscall UObject::execVectorToRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  FFrame *pFStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_4;
  
                    /* 0x2a36  2407  ?execVectorToRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_1c = (undefined1 *)&uStack_18;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_20 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  puVar2 = (undefined4 *)FVector::Rotation((FVector *)&pFStack_20);
  *puStack_4 = *puVar2;
  puStack_4[1] = puVar2[1];
  puStack_4[2] = puVar2[2];
  return;
}


// ==== 10102a3b FInterpCurve::operator=

/* public: void __thiscall FInterpCurve::operator=(class FInterpCurve const &) */

void __thiscall FInterpCurve::operator=(FInterpCurve *this,FInterpCurve *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x2a3b  455  ??4FInterpCurve@@QAEXABV0@@Z */
  if (this == param_1) {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar5 = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = uVar3;
  FArray::Realloc((FArray *)this,8);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar4 = *(int *)(this + 4);
    iVar1 = iVar4 + 1;
    *(int *)(this + 4) = iVar1;
    if (*(int *)(this + 8) < iVar1) {
      *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
      FArray::Realloc((FArray *)this,8);
    }
    puVar2 = (undefined4 *)(*(int *)this + iVar4 * 8);
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = *(int *)param_1;
      *puVar2 = *(undefined4 *)(iVar1 + iVar5 * 8);
      puVar2[1] = *(undefined4 *)(iVar1 + 4 + iVar5 * 8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(param_1 + 4));
  return;
}


// ==== 10102a40 FRangeVector::FRangeVector

/* public: __thiscall FRangeVector::FRangeVector(class FRange,class FRange,class FRange) */

void __thiscall
FRangeVector::FRangeVector
          (FRangeVector *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
                    /* 0x2a40  122  ??0FRangeVector@@QAE@VFRange@@00@Z */
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x14) = param_7;
  return;
}


// ==== 10102a45 UStruct::FunctionMD5

/* public: class FString __thiscall UStruct::FunctionMD5(void) */

FString * __thiscall UStruct::FunctionMD5(UStruct *this)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int iVar3;
  FString *in_stack_00000004;
  FArray aFStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x2a45  1027  ?FunctionMD5@UStruct@@QAE?AVFString@@XZ */
  puStack_8 = &LAB_101ba1a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  uStack_4 = 0;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)
             FString::Printf((ushort *)aFStack_18,L"%02x",(uint)(byte)this[iVar3 + 0x7c]);
    uStack_4 = 3;
    if (puVar1[1] == 0) {
      puVar2 = &DAT_101cdd44;
    }
    else {
      puVar2 = (ushort *)*puVar1;
    }
    FString::operator+=(in_stack_00000004,puVar2);
    uStack_4 = 4;
    uStack_14 = 0;
    uStack_10 = 0;
    FArray::Realloc(aFStack_18,2);
    uStack_4 = uStack_4 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_18);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  ExceptionList = pvStack_c;
  return in_stack_00000004;
}


// ==== 10102a4a L2ThreadUtil::AddEtcThread

/* public: void __thiscall L2ThreadUtil::AddEtcThread(void) */

void __thiscall L2ThreadUtil::AddEtcThread(L2ThreadUtil *this)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  undefined4 uVar4;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2a4a  785  ?AddEtcThread@L2ThreadUtil@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9696;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (*(code *)**(undefined4 **)GMalloc)(0xb8,&DAT_101cd5d8);
  pvStack_c = (void *)0x0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)thunk_FUN_10129b20(0,L"EtcThread");
  }
  pvStack_c = (void *)0xffffffff;
  DVar3 = GetCurrentThreadId();
  piVar2[1] = DVar3;
  *(int **)(this + 0x20) = piVar2;
  if (*(int *)(this + 0x2c8) == 0) {
    iVar1 = (*(code *)**(undefined4 **)GMalloc)(0x14,&DAT_101cd5d8);
    pvStack_c = (void *)0x1;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_1012a260();
    }
    pvStack_c = (void *)0xffffffff;
    *(undefined4 *)(this + 0x2c8) = uVar4;
  }
  (**(code **)(*piVar2 + 0x28))();
  thunk_FUN_1012a190(&stack0xffffffe8,&stack0xffffffe4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10102a54 thunk_FUN_1016c0c0 thunk -> 1016c0c0

// ==== 10102a59 UObject::execRotatorToBool

/* public: void __thiscall UObject::execRotatorToBool(struct FFrame &,void * const) */

void __thiscall UObject::execRotatorToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  uint auStack_c [3];
  
                    /* 0x2a59  2359  ?execRotatorToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  auStack_c[0] = 0;
  auStack_c[1] = 0;
  auStack_c[2] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (((((uint)param_1 & 0xffff) == 0) && (((uint)auStack_c & 0xffff) == 0)) &&
     ((auStack_c[0] & 0xffff) == 0)) {
    *unaff_retaddr = 0;
    return;
  }
  *unaff_retaddr = 1;
  return;
}


// ==== 10102a5e appMemCrc

/* unsigned long __cdecl appMemCrc(void const *,int,unsigned long) */

ulong __cdecl appMemCrc(void *param_1,int param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x2a5e  2076  ?appMemCrc@@YAKPBXHK@Z */
  iVar2 = 0;
  uVar1 = ~param_3;
  if (0 < param_2) {
    do {
      uVar1 = uVar1 << 8 ^ (uint)(&GCRCTable)[(uint)*(byte *)(iVar2 + (int)param_1) ^ uVar1 >> 0x18]
      ;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return ~uVar1;
}


// ==== 10102a63 appRand

/* int __cdecl appRand(void) */

int __cdecl appRand(void)

{
  _ptiddata p_Var1;
  uint uVar2;
  
                    /* 0x2a63  2087  ?appRand@@YAHXZ */
  p_Var1 = __getptd();
  uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  p_Var1->_holdrand = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


// ==== 10102a68 UObject::execInStr

/* public: void __thiscall UObject::execInStr(struct FFrame &,void * const) */

void __thiscall UObject::execInStr(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  int iVar3;
  FFrame *pFStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
                    /* 0x2a68  2263  ?execInStr@UObject@@QAEXAAUFFrame@@QAX@Z */
  piStack_8 = (int *)&LAB_101bb000;
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
  pFVar2 = pFStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    pFVar2 = (FFrame *)&DAT_101cdd44;
  }
  iVar3 = FString::InStr((FString *)&stack0xffffffd8,(ushort *)pFVar2,0);
  *piStack_8 = iVar3;
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


// ==== 10102a6d UStrProperty::CopySingleValue

/* public: virtual void __thiscall UStrProperty::CopySingleValue(void *,void *,class UObject *)const
    */

void __thiscall
UStrProperty::CopySingleValue(UStrProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* 0x2a6d  884  ?CopySingleValue@UStrProperty@@UBEXPAX0PAVUObject@@@Z */
  if (param_1 != param_2) {
    uVar1 = *(undefined4 *)((int)param_2 + 4);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    FArray::Realloc(param_1,2);
    iVar2 = *(int *)((int)param_1 + 4);
    if (iVar2 != 0) {
      if (*(int *)((int)param_2 + 4) != 0) {
        _memcpy(*(void **)param_1,*(void **)param_2,iVar2 * 2);
        return;
      }
      _memcpy(*(void **)param_1,&DAT_101cdd44,iVar2 * 2);
    }
  }
  return;
}


// ==== 10102a72 UEnum::UEnum

/* public: __thiscall UEnum::UEnum(class UEnum const &) */

UEnum * __thiscall UEnum::UEnum(UEnum *this,UEnum *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2a72  208  ??0UEnum@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7823;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,(UField *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_10118cb0(param_1 + 0x40);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102a77 FString::operator_int

/* public: __thiscall FString::operator int(void)const  */

int __thiscall FString::operator_int(FString *this)

{
                    /* 0x2a77  598  ??BFString@@QBEHXZ */
  return (uint)(*(int *)(this + 4) != 0);
}


// ==== 10102a7c UBoolProperty::operator_new

/* public: static void * __cdecl UBoolProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UBoolProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2a7c  356  ??2UBoolProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102a81 UTextBufferFactory::operator_new

/* public: static void * __cdecl UTextBufferFactory::operator new(unsigned int,enum EInternal *) */

void * __cdecl UTextBufferFactory::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2a81  424  ??2UTextBufferFactory@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102a86 UObject::ResetLoaders

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::ResetLoaders(class UObject *,int,int) */

void __cdecl UObject::ResetLoaders(UObject *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ULinkerLoad *this;
  int *piVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2a86  1770  ?ResetLoaders@UObject@@SAXPAV1@HH@Z */
  puStack_c = &LAB_101bd320;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar3 = DAT_103308a4;
  ExceptionList = &pvStack_10;
  while (iVar3 = iVar3 + -1, iVar5 = DAT_103308a4, -1 < iVar3) {
    this = (ULinkerLoad *)thunk_FUN_101636c0(*(undefined4 *)(_GObjLoaders + iVar3 * 4));
    if ((param_1 == (UObject *)0x0) || (*(UObject **)(this + 0x34) == param_1)) {
      if (param_2 == 0) {
        if (param_3 != 0) {
          ULinkerLoad::DetachAllLazyLoaders(this,1);
        }
      }
      else {
        for (iVar5 = 0; iVar5 < *(int *)(this + 0x94); iVar5 = iVar5 + 1) {
          piVar4 = (int *)(*(int *)(this + 0x90) + 0x1c + iVar5 * 0x24);
          if ((*piVar4 != 0) && ((*(byte *)(*(int *)(*piVar4 + 0x24) + 0x4a4) & 0x80) == 0)) {
            ULinkerLoad::DetachExport(this,iVar5);
          }
        }
      }
    }
    else {
      for (iVar5 = 0; iVar5 < *(int *)(this + 0x88); iVar5 = iVar5 + 1) {
        iVar2 = iVar5 * 0x1c;
        iVar1 = *(int *)(*(int *)(this + 0x84) + 0x14 + iVar2);
        if ((iVar1 != 0) && (*(UObject **)(iVar1 + 0x34) == param_1)) {
          *(undefined4 *)(*(int *)(this + 0x84) + 0x14 + iVar2) = 0;
          *(undefined4 *)(*(int *)(this + 0x84) + 0x18 + iVar2) = 0xffffffff;
        }
      }
    }
  }
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    piVar4 = (int *)thunk_FUN_101636c0(*(undefined4 *)(_GObjLoaders + iVar5 * 4));
    if ((((param_1 == (UObject *)0x0) || ((UObject *)piVar4[0xd] == param_1)) && (param_2 == 0)) &&
       (piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0xc))(1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102a8b UObject::execSubtract_PreInt

/* public: void __thiscall UObject::execSubtract_PreInt(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_PreInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2a8b  2393  ?execSubtract_PreInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -(int)&uStack_4;
  return;
}


// ==== 10102a9a appAtof

/* float __cdecl appAtof(unsigned short const *) */

float __cdecl appAtof(ushort *param_1)

{
  char *_String;
  double dVar1;
  
                    /* 0x2a9a  2017  ?appAtof@@YAMPBG@Z */
  _String = appToAnsi(param_1,(char *)0x0);
  dVar1 = _atof(_String);
  return (float)dVar1;
}


// ==== 10102a9f thunk_FUN_1012aa10 thunk -> 1012aa10

// ==== 10102aa4 FString::Delete

/* public: void __thiscall FString::Delete(int,int) */

void __thiscall FString::Delete(FString *this,int param_1,int param_2)

{
                    /* 0x2aa4  908  ?Delete@FString@@QAEXHH@Z */
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(this + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove((FArray *)this,param_1,param_2,2);
  return;
}


// ==== 10102aa9 appFExt

/* unsigned short const * __cdecl appFExt(unsigned short const *) */

ushort * __cdecl appFExt(ushort *param_1)

{
  ushort *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2aa9  2040  ?appFExt@@YAPBGPBG@Z */
  puStack_c = &LAB_101bbf80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61c4);
  if (puVar1 == (ushort *)0x0) goto LAB_101524b0;
  puVar1 = (ushort *)&DAT_101d61c8;
  while( true ) {
    puVar1 = appStrstr(param_1,puVar1);
    param_1 = puVar1 + 1;
LAB_101524b0:
    puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61cc);
    if (puVar1 == (ushort *)0x0) break;
    puVar1 = (ushort *)&DAT_101d61d0;
  }
  while( true ) {
    puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61d4);
    if (puVar1 == (ushort *)0x0) break;
    puVar1 = appStrstr(param_1,(ushort *)&DAT_101d61d8);
    param_1 = puVar1 + 1;
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10102aae thunk_FUN_10113f60 thunk -> 10113f60

// ==== 10102ab3 FEdge::FEdge

/* public: __thiscall FEdge::FEdge(void) */

FEdge * __thiscall FEdge::FEdge(FEdge *this)

{
                    /* 0x2ab3  44  ??0FEdge@@QAE@XZ */
  return this;
}


// ==== 10102ab8 UObject::StaticMemLoadClass

/* public: static class UClass * __cdecl UObject::StaticMemLoadClass(class UClass *,class UObject
   *,unsigned short const *,void *,int,unsigned long,class UPackageMap *) */

UClass * __cdecl
UObject::StaticMemLoadClass
          (UClass *param_1,UObject *param_2,ushort *param_3,void *param_4,int param_5,ulong param_6,
          UPackageMap *param_7)

{
  UStruct *this;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2ab8  1943
                       ?StaticMemLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBGPAXHKPAVUPackageMap@@@Z
                        */
  puStack_c = &LAB_101bdbe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("BaseClass",".\\UnObj.cpp",0xbaf);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  this = (UStruct *)thunk_FUN_1016c0c0(param_2,param_3,param_4,param_5,param_6 | 8,param_7);
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


// ==== 10102abd FBitWriter::GetNumBits

/* public: int __thiscall FBitWriter::GetNumBits(void) */

int __thiscall FBitWriter::GetNumBits(FBitWriter *this)

{
                    /* 0x2abd  1365  ?GetNumBits@FBitWriter@@QAEHXZ */
  return *(int *)(this + 0x44);
}


// ==== 10102ac2 L2ThreadStats::LockStart

/* public: void __thiscall L2ThreadStats::LockStart(void) */

void __thiscall L2ThreadStats::LockStart(L2ThreadStats *this)

{
  __uint64 _Var1;
  
                    /* 0x2ac2  1590  ?LockStart@L2ThreadStats@@QAEXXZ */
  _Var1 = appCyclesQPC();
  *(__uint64 *)this = _Var1;
  return;
}


// ==== 10102ac7 FRangeVector::IsZero

/* public: int __thiscall FRangeVector::IsZero(void)const  */

int __thiscall FRangeVector::IsZero(FRangeVector *this)

{
                    /* 0x2ac7  1537  ?IsZero@FRangeVector@@QBEHXZ */
  if ((((*(float *)this == 0.0) && (*(float *)(this + 4) == 0.0)) && (*(float *)(this + 8) == 0.0))
     && (((*(float *)(this + 0xc) == 0.0 && (*(float *)(this + 0x10) == 0.0)) &&
         (*(float *)(this + 0x14) == 0.0)))) {
    return 1;
  }
  return 0;
}


// ==== 10102acc thunk_FUN_10126930 thunk -> 10126930

// ==== 10102ad1 UObject::execStringToBool

/* public: void __thiscall UObject::execStringToBool(struct FFrame &,void * const) */

void __thiscall UObject::execStringToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int unaff_ESI;
  ushort *unaff_EDI;
  uint *unaff_retaddr;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2ad1  2372  ?execStringToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb440;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  puVar2 = unaff_EDI;
  if (unaff_ESI == 0) {
    puVar2 = &DAT_101cdd44;
  }
  iVar3 = appStricmp(puVar2,(ushort *)L"True");
  if (iVar3 != 0) {
    puVar2 = unaff_EDI;
    if (unaff_ESI == 0) {
      puVar2 = &DAT_101cdd44;
    }
    iVar3 = appStricmp(puVar2,(ushort *)GTrue);
    if (iVar3 != 0) {
      puVar2 = unaff_EDI;
      if (unaff_ESI == 0) {
        puVar2 = &DAT_101cdd44;
      }
      iVar3 = appStricmp(puVar2,(ushort *)L"False");
      if (iVar3 != 0) {
        puVar2 = unaff_EDI;
        if (unaff_ESI == 0) {
          puVar2 = &DAT_101cdd44;
        }
        iVar3 = appStricmp(puVar2,(ushort *)GFalse);
        if (iVar3 != 0) {
          if (unaff_ESI == 0) {
            unaff_EDI = &DAT_101cdd44;
          }
          iVar3 = appAtoi(unaff_EDI);
          *unaff_retaddr = (uint)(iVar3 != 0);
          goto LAB_10147322;
        }
      }
      *unaff_retaddr = 0;
      goto LAB_10147322;
    }
  }
  *unaff_retaddr = 1;
LAB_10147322:
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10102ad6 thunk_FUN_101652e0 thunk -> 101652e0

// ==== 10102ae0 thunk_FUN_1015a7c0 thunk -> 1015a7c0

// ==== 10102ae5 thunk_FUN_10124810 thunk -> 10124810

// ==== 10102aef thunk_FUN_10147830 thunk -> 10147830

// ==== 10102af4 UObject::UObject

/* public: __thiscall UObject::UObject(enum ENativeConstructor,class UClass *,unsigned short const
   *,unsigned short const *,unsigned long) */

UObject * __thiscall
UObject::UObject(UObject *this,ENativeConstructor param_1,UClass *param_2,ushort *param_3,
                ushort *param_4,ulong param_5)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2af4  249  ??0UObject@@QAE@W4ENativeConstructor@@PAVUClass@@PBG2K@Z */
  puStack_c = &LAB_101bd9d0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x1c) = param_5 | 0x4000000;
  *(undefined4 *)(this + 0x20) = 0;
  *(UClass **)(this + 0x24) = param_2;
  uStack_8 = 0;
  GObjCurCount = GObjCurCount + 1;
  GObjNewCount = GObjNewCount + 1;
  if (GObjPeakCount < GObjCurCount) {
    GObjPeakCount = GObjCurCount;
  }
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  if (GObjNoRegister != 0) {
    appFailAssert("!GObjNoRegister",".\\UnObj.cpp",0x76);
  }
  *(ushort **)(this + 0x20) = param_3;
  *(ushort **)(this + 0x18) = param_4;
  *(UObject **)(this + 0x14) = GAutoRegister;
  GAutoRegister = this;
  if ((GObjInitialized != 0) && (*(UClass **)(this + 0x24) == &PrivateStaticClass)) {
    Register(this);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10102af9 UEnum::Serialize

/* public: virtual void __thiscall UEnum::Serialize(class FArchive &) */

void __thiscall UEnum::Serialize(UEnum *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2af9  1808  ?Serialize@UEnum@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101bd070;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UField::Serialize((UField *)this,param_1);
  thunk_FUN_10132470(param_1,this + 0x40);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102afe UState::GetSuperState

/* public: class UState * __thiscall UState::GetSuperState(void)const  */

UState * __thiscall UState::GetSuperState(UState *this)

{
                    /* 0x2afe  1402  ?GetSuperState@UState@@QBEPAV1@XZ */
  return *(UState **)(this + 0x34);
}


// ==== 10102b03 UState::UState

/* public: __thiscall UState::UState(class UState *) */

UState * __thiscall UState::UState(UState *this,UState *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2b03  268  ??0UState@@QAE@PAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba1d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this,(UStruct *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102b08 appSleep

/* void __cdecl appSleep(float) */

void __cdecl appSleep(float param_1)

{
  L2ThreadStats *pLVar1;
  DWORD DStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2b08  2098  ?appSleep@@YAXM@Z */
  puStack_c = &LAB_101be3a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pLVar1 = L2ThreadUtil::GetCurrentThreadStats(&GThreadUtil);
  L2ThreadStats::SleepStart(pLVar1);
  DStack_20 = (DWORD)(longlong)ROUND(param_1 * 1000.0);
  Sleep(DStack_20);
  pLVar1 = L2ThreadUtil::GetCurrentThreadStats(&GThreadUtil);
  L2ThreadStats::SleepEnd(pLVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102b0d UArrayProperty::Serialize

/* public: virtual void __thiscall UArrayProperty::Serialize(class FArchive &) */

void __thiscall UArrayProperty::Serialize(UArrayProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2b0d  1801  ?Serialize@UArrayProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be120;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  thunk_FUN_10130f10(param_1,this + 0x78);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102b12 thunk_FUN_10114e50 thunk -> 10114e50

// ==== 10102b17 appSystemTime

/* void __cdecl appSystemTime(int &,int &,int &,int &,int &,int &,int &,int &) */

void __cdecl
appSystemTime(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
             int *param_7,int *param_8)

{
  _SYSTEMTIME _Stack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2b17  2122  ?appSystemTime@@YAXAAH0000000@Z */
  puStack_c = &LAB_101be3b0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  GetLocalTime(&_Stack_2c);
  *param_1 = (uint)_Stack_2c.wYear;
  *param_2 = (uint)_Stack_2c.wMonth;
  *param_3 = (uint)_Stack_2c.wDayOfWeek;
  *param_4 = (uint)_Stack_2c.wDay;
  *param_5 = (uint)_Stack_2c.wHour;
  *param_6 = (uint)_Stack_2c.wMinute;
  *param_7 = (uint)_Stack_2c.wSecond;
  *param_8 = (uint)_Stack_2c.wMilliseconds;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102b1c thunk_FUN_1015b3e0 thunk -> 1015b3e0

// ==== 10102b21 UFloatProperty::InternalConstructor

/* public: static void __cdecl UFloatProperty::InternalConstructor(void *) */

void __cdecl UFloatProperty::InternalConstructor(void *param_1)

{
                    /* 0x2b21  1485  ?InternalConstructor@UFloatProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UFloatProperty(param_1);
    return;
  }
  return;
}


// ==== 10102b2b UEnum::InternalConstructor

/* public: static void __cdecl UEnum::InternalConstructor(void *) */

void __cdecl UEnum::InternalConstructor(void *param_1)

{
                    /* 0x2b2b  1483  ?InternalConstructor@UEnum@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UEnum(param_1);
    return;
  }
  return;
}


// ==== 10102b30 FRange::operator/=

/* public: class FRange __thiscall FRange::operator/=(class FRange const &) */

void __thiscall FRange::operator/=(FRange *this,FRange *param_1)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
                    /* 0x2b30  699  ??_0FRange@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this / *in_stack_00000008;
  fVar1 = *(float *)(this + 4);
  fVar2 = in_stack_00000008[1];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(float *)(this + 4) = fVar1 / fVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  return;
}


// ==== 10102b35 FVector::operator+=

/* public: class FVector __thiscall FVector::operator+=(class FVector const &) */

void __thiscall FVector::operator+=(FVector *this,FVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x2b35  687  ??YFVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 + *(float *)this;
  *(float *)(this + 4) = in_stack_00000008[1] + *(float *)(this + 4);
  *(float *)(this + 8) = in_stack_00000008[2] + *(float *)(this + 8);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 10102b3f thunk_FUN_10114240 thunk -> 10114240

// ==== 10102b49 UCommandlet::eventMain

/* public: int __thiscall UCommandlet::eventMain(class FString const &) */

int __thiscall UCommandlet::eventMain(UCommandlet *this,FString *param_1)

{
  UFunction *pUVar1;
  void *unaff_EBX;
  int unaff_ESI;
  undefined2 *_Src;
  void *pvStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2b49  2134  ?eventMain@UCommandlet@@QAEHABVFString@@@Z */
  puStack_8 = &LAB_101b8660;
  pvStack_c = ExceptionList;
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  iStack_14 = 0;
  uStack_4 = 3;
  ExceptionList = &pvStack_c;
  if ((FString *)&pvStack_1c != param_1) {
    iStack_18 = *(int *)(param_1 + 4);
    ExceptionList = &pvStack_c;
    iStack_14 = iStack_18;
    FArray::Realloc((FArray *)&pvStack_1c,2);
    if (iStack_18 != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(pvStack_1c,_Src,iStack_18 * 2);
    }
  }
  pUVar1 = UObject::FindFunctionChecked((UObject *)this);
  (**(code **)(*(int *)this + 0x10))(pUVar1);
  iStack_18 = 5;
  FArray::Realloc((FArray *)&stack0xffffffd0,2);
  iStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd0);
  ExceptionList = unaff_EBX;
  return unaff_ESI;
}


// ==== 10102b4e L2ThreadBase::L2ThreadBase

/* public: __thiscall L2ThreadBase::L2ThreadBase(unsigned short *) */

L2ThreadBase * __thiscall L2ThreadBase::L2ThreadBase(L2ThreadBase *this,ushort *param_1)

{
                    /* 0x2b4e  176  ??0L2ThreadBase@@QAE@PAG@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  appStrncpy((ushort *)(this + 0x14),param_1,0x40);
  *(undefined4 *)(this + 0x94) = 0;
  return this;
}


// ==== 10102b53 FVector::IsZero

/* public: int __thiscall FVector::IsZero(void)const  */

int __thiscall FVector::IsZero(FVector *this)

{
                    /* 0x2b53  1539  ?IsZero@FVector@@QBEHXZ */
  if (((*(float *)this == 0.0) && (*(float *)(this + 4) == 0.0)) && (*(float *)(this + 8) == 0.0)) {
    return 1;
  }
  return 0;
}


// ==== 10102b58 UObject::SetLinker

/* protected: void __thiscall UObject::SetLinker(class ULinkerLoad *,int) */

void __thiscall UObject::SetLinker(UObject *this,ULinkerLoad *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2b58  1862  ?SetLinker@UObject@@IAEXPAVULinkerLoad@@H@Z */
  puStack_c = &LAB_101bd2e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x10) != 0) {
    ExceptionList = &pvStack_10;
    if (*(int *)(*(int *)(*(int *)(this + 0x10) + 0x90) + 0x1c + *(int *)(this + 0x14) * 0x24) == 0)
    {
      ExceptionList = &pvStack_10;
      appFailAssert("_Linker->ExportMap(_LinkerIndex)._Object!=NULL",".\\UnObj.cpp",0x15e);
    }
    if (*(UObject **)(*(int *)(*(int *)(this + 0x10) + 0x90) + 0x1c + *(int *)(this + 0x14) * 0x24)
        != this) {
      appFailAssert("_Linker->ExportMap(_LinkerIndex)._Object==this",".\\UnObj.cpp",0x15f);
    }
    *(undefined4 *)(*(int *)(*(int *)(this + 0x10) + 0x90) + 0x1c + *(int *)(this + 0x14) * 0x24) =
         0;
  }
  *(ULinkerLoad **)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102b5d UStrProperty::SerializeItem

/* public: virtual void __thiscall UStrProperty::SerializeItem(class FArchive &,void *,int)const  */

void __thiscall
UStrProperty::SerializeItem(UStrProperty *this,FArchive *param_1,void *param_2,int param_3)

{
                    /* 0x2b5d  1847  ?SerializeItem@UStrProperty@@UBEXAAVFArchive@@PAXH@Z */
  operator<<(param_1,param_2);
  return;
}


// ==== 10102b67 thunk_FUN_1014d2a0 thunk -> 1014d2a0

// ==== 10102b6c FName::operator=

/* public: class FName & __thiscall FName::operator=(class FName const &) */

FName * __thiscall FName::operator=(FName *this,FName *param_1)

{
                    /* 0x2b6c  468  ??4FName@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}


// ==== 10102b71 UPackageMap::SupportsPackage

/* public: virtual int __thiscall UPackageMap::SupportsPackage(class UObject *) */

int __thiscall UPackageMap::SupportsPackage(UPackageMap *this,UObject *param_1)

{
  int iVar1;
  
                    /* 0x2b71  1954  ?SupportsPackage@UPackageMap@@UAEHPAVUObject@@@Z */
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 0x38) <= iVar1) {
      return 0;
    }
    if (*(UObject **)(*(int *)(this + 0x34) + 0x10 + iVar1 * 0x44) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}


// ==== 10102b76 UField::UField

/* protected: __thiscall UField::UField(void) */

UField * __thiscall UField::UField(UField *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2b76  214  ??0UField@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6938;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102b7b FArchive::ForServer

/* public: int __thiscall FArchive::ForServer(void) */

int __thiscall FArchive::ForServer(FArchive *this)

{
                    /* 0x2b7b  1024  ?ForServer@FArchive@@QAEHXZ */
  return *(int *)(this + 0x28);
}


// ==== 10102b80 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,class FGuid &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,FGuid *param_3)

{
  int iVar1;
  ushort auStack_224 [8];
  ushort auStack_214 [8];
  ushort auStack_204 [8];
  ushort auStack_1f4 [238];
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2b80  1660  ?Parse@@YAHPBG0AAVFGuid@@@Z */
  puStack_c = &LAB_101bc0a0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = Parse(param_1,param_2,auStack_224,0x100);
  if (iVar1 == 0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)param_3 = 0;
  iVar1 = appStrlen(auStack_224);
  if (iVar1 == 0x20) {
    iVar1 = appStrtoi(auStack_1f4,&puStack_18,0x10);
    *(int *)(param_3 + 0xc) = iVar1;
    auStack_1f4[0] = 0;
    iVar1 = appStrtoi(auStack_204,&puStack_18,0x10);
    *(int *)(param_3 + 8) = iVar1;
    auStack_204[0] = 0;
    iVar1 = appStrtoi(auStack_214,&puStack_18,0x10);
    *(int *)(param_3 + 4) = iVar1;
    auStack_214[0] = 0;
    iVar1 = appStrtoi(auStack_224,&puStack_18,0x10);
    *(int *)param_3 = iVar1;
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10102b85 UObject::execEndFunctionParms

/* public: void __thiscall UObject::execEndFunctionParms(struct FFrame &,void * const) */

void __thiscall UObject::execEndFunctionParms(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x2b85  2205  ?execEndFunctionParms@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropObject = (UObject *)0x0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}


// ==== 10102b8a UObject::StaticConstructor

/* public: void __thiscall UObject::StaticConstructor(void) */

void __thiscall UObject::StaticConstructor(UObject *this)

{
                    /* 0x2b8a  1928  ?StaticConstructor@UObject@@QAEXXZ */
  return;
}


// ==== 10102b8f ULinker::ULinker

/* public: __thiscall ULinker::ULinker(class ULinker const &) */

ULinker * __thiscall ULinker::ULinker(ULinker *this,ULinker *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2b8f  234  ??0ULinker@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b89c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FPackageFileSummary::FPackageFileSummary
            ((FPackageFileSummary *)(this + 0x38),(FPackageFileSummary *)(param_1 + 0x38));
  uStack_4._0_1_ = 1;
  thunk_FUN_10118cb0(param_1 + 0x78);
  uStack_4._0_1_ = 2;
  thunk_FUN_10119530(param_1 + 0x84);
  uStack_4._0_1_ = 3;
  thunk_FUN_10119640(param_1 + 0x90);
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  FString::FString((FString *)(this + 0xa0),(FString *)(param_1 + 0xa0));
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102b94 appUnwindf

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl appUnwindf(unsigned short const *,...) */

void __cdecl appUnwindf(ushort *param_1,...)

{
  int iVar1;
  bool bVar2;
  FOutputDevice aFStack_2000 [8188];
  undefined4 uStack_4;
  
                    /* 0x2b94  2129  ?appUnwindf@@YAXPBGZZ */
  uStack_4 = 0x1015222a;
  GIsCriticalError = 1;
  appGetVarArgs((ushort *)aFStack_2000,0x1000,&param_1);
  iVar1 = DAT_10289ec4 + 1;
  bVar2 = DAT_10289ec4 != 0;
  DAT_10289ec4 = iVar1;
  if (bVar2) {
    appStrncat((ushort *)&GErrorHist,(ushort *)L" <- ",0x1000);
  }
  appStrncat((ushort *)&GErrorHist,(ushort *)aFStack_2000,0x1000);
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(aFStack_2000,(EName)GLog,(ushort *)0x2f9);
  }
  return;
}


// ==== 10102b99 FArchive::GetError

/* public: virtual int __thiscall FArchive::GetError(void) */

int __thiscall FArchive::GetError(FArchive *this)

{
                    /* 0x2b99  1310  ?GetError@FArchive@@UAEHXZ */
  return *(int *)(this + 0x2c);
}


// ==== 10102b9e UObject::execWarn

/* public: void __thiscall UObject::execWarn(struct FFrame &,void * const) */

void __thiscall UObject::execWarn(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2b9e  2410  ?execWarn@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb160;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  pvStack_10 = (void *)0x0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  this_00 = extraout_ECX;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
    this_00 = extraout_ECX_00;
  }
  FOutputDevice::Logf(this_00,(ushort *)param_1);
  puStack_8 = (undefined1 *)0x3;
  uStack_18 = 0;
  uStack_14 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe4,2);
  puStack_8 = (undefined1 *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe4);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102ba3 appFractional

/* float __cdecl appFractional(float) */

float __cdecl appFractional(float param_1)

{
  int iVar1;
  
                    /* 0x2ba3  2046  ?appFractional@@YAMM@Z */
  FUN_1017bb20((double)param_1);
  iVar1 = FUN_1017b700();
  return param_1 - (float)iVar1;
}


// ==== 10102ba8 UObject::GetStateFrame

/* public: struct FStateFrame * __thiscall UObject::GetStateFrame(void) */

FStateFrame * __thiscall UObject::GetStateFrame(UObject *this)

{
                    /* 0x2ba8  1397  ?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */
  return *(FStateFrame **)(this + 0xc);
}


// ==== 10102bad thunk_FUN_101463e0 thunk -> 101463e0

// ==== 10102bb2 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,class FName &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,FName *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ushort auStack_a4 [68];
  FName aFStack_1c [8];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2bb2  1661  ?Parse@@YAHPBG0AAVFName@@@Z */
  puStack_c = &LAB_101bc010;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff50;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = Parse(param_1,param_2,auStack_a4,0x40);
  if (iVar1 == 0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  puVar2 = (undefined4 *)FName::FName(aFStack_1c,auStack_a4,1);
  *(undefined4 *)param_3 = *puVar2;
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10102bb7 UObject::PurgeGarbage

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: static void __cdecl UObject::PurgeGarbage(void) */

void __cdecl UObject::PurgeGarbage(void)

{
  UObject *this;
  uint uVar1;
  int *piVar2;
  FOutputDevice *this_00;
  int iVar3;
  FOutputDevice *in_ECX;
  FOutputDevice *this_01;
  int iVar4;
  FOutputDevice *pFStack_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2bb7  1738  ?PurgeGarbage@UObject@@KAXXZ */
  puStack_c = &LAB_101bd010;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  pFStack_24 = (FOutputDevice *)0x0;
  if (DAT_1023fe50 != 0) {
    if (GLog != (undefined *)0x0) {
      ExceptionList = &pvStack_10;
      FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2f8);
    }
    ExceptionList = pvStack_10;
    return;
  }
  ExceptionList = &pvStack_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2f8);
  }
  thunk_FUN_101482e0();
  uStack_8 = uStack_8 & 0xffffff00;
  for (iVar4 = 0; iVar4 < DAT_1033088c; iVar4 = iVar4 + 1) {
    this = *(UObject **)(_GObjObjects + iVar4 * 4);
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    pFStack_24 = pFStack_24 + (this != (UObject *)0x0);
    if (((this != (UObject *)0x0) && (uVar1 = *(uint *)(this + 0x1c), (uVar1 & 2) != 0)) &&
       ((((uVar1 & 0x4000000) == 0 && ((uVar1 & 0x800000) == 0)) || (GExitPurge != 0)))) {
      iVar3 = (**(code **)(*(int *)this + 100))();
      if (iVar3 != 0) {
        ConditionalDestroy(this);
      }
    }
    uStack_8 = 0;
  }
  for (iVar4 = 0; iVar4 < DAT_1033088c; iVar4 = iVar4 + 1) {
    uStack_8 = 6;
    piVar2 = *(int **)(_GObjObjects + iVar4 * 4);
    if (((piVar2 != (int *)0x0) && ((piVar2[7] & 2U) != 0)) && ((piVar2[7] & 0x4000000U) == 0)) {
      (**(code **)(*piVar2 + 0xc))();
    }
  }
  uStack_8 = 9;
  iVar4 = 0;
  while( true ) {
    if (DAT_10327ae4 <= iVar4) break;
    iVar3 = *(int *)(_Names + iVar4 * 4);
    if (((iVar3 != 0) && (this_00 = *(FOutputDevice **)(iVar3 + 4), ((uint)this_00 & 2) != 0)) &&
       (((uint)this_00 & 0x4000000) == 0)) {
      FOutputDevice::Logf(this_00,(EName)GNull,(ushort *)0x30a);
      FName::DeleteEntry(iVar4);
    }
    iVar4 = iVar4 + 1;
  }
  uStack_8 = 0;
  GL2GCState = 0;
  if (GLog != (undefined *)0x0) {
    thunk_FUN_101482e0();
    FOutputDevice::Logf2(this_01,(ushort *)GLog);
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(pFStack_24,(ushort *)GLog);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102bbc FMemStackFrame::PushBytes

/* public: unsigned char * __thiscall FMemStackFrame::PushBytes(int,int) */

uchar * __thiscall FMemStackFrame::PushBytes(FMemStackFrame *this,int param_1,int param_2)

{
  uchar *puVar1;
  
                    /* 0x2bbc  1741  ?PushBytes@FMemStackFrame@@QAEPAEHH@Z */
  puVar1 = (uchar *)(*(int *)this + -1 + param_2 & ~(param_2 - 1U));
  *(uchar **)this = puVar1 + param_1;
  if (*(uchar **)(this + 4) < puVar1 + param_1) {
    AllocateNewChunk(this,param_2 + param_1);
    puVar1 = (uchar *)(*(int *)this + -1 + param_2 & ~(param_2 - 1U));
    *(uchar **)this = puVar1 + param_1;
  }
  return puVar1;
}


// ==== 10102bc1 FMalloc::GetUsedCurrent

/* public: virtual int __thiscall FMalloc::GetUsedCurrent(void) */

int __thiscall FMalloc::GetUsedCurrent(FMalloc *this)

{
                    /* 0x2bc1  1415  ?GetUsedCurrent@FMalloc@@UAEHXZ */
  return 0;
}


// ==== 10102bc6 FFileStream::DestroyStream

/* public: void __thiscall FFileStream::DestroyStream(int,int) */

void __thiscall FFileStream::DestroyStream(FFileStream *this,int param_1,int param_2)

{
  FFileStream *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2bc6  923  ?DestroyStream@FFileStream@@QAEXHH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pFStack_10 = this;
  FScopeCriticalSection::FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10,CriticalSection)
  ;
  uStack_4 = 0;
  if (*(int *)(Streams + param_1 * 0x24 + 0x18) != 0) {
    if (param_2 != 0) {
      Read(this,param_1,
           *(int *)(Streams + param_1 * 0x24 + 0x14) * *(int *)(Streams + param_1 * 0x24 + 0x10));
    }
    Destroy(this,param_1);
  }
  uStack_4 = 0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)&pFStack_10);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10102bcb thunk_FUN_101631e0 thunk -> 101631e0

// ==== 10102bd0 UObject::execClassContext

/* public: void __thiscall UObject::execClassContext(struct FFrame &,void * const) */

void __thiscall UObject::execClassContext(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  UClass *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2bd0  2172  ?execClassContext@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baac0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  pUStack_18 = (UClass *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pUStack_18);
  if (pUStack_18 == (UClass *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)0x0,(ushort *)param_1);
    puVar3 = *(ushort **)(param_1 + 0xc);
    uVar2 = *puVar3;
    *(ushort **)(param_1 + 0xc) = puVar3 + 1;
    uVar4 = puVar3[1];
    *(int *)(param_1 + 0xc) = (int)puVar3 + 3;
    *(uint *)(param_1 + 0xc) = (int)puVar3 + 3 + (uint)uVar2;
    GPropAddr = (uchar *)0x0;
    GPropObject = (UObject *)0x0;
    GProperty = (UProperty *)0x0;
    if (param_2 != (void *)0x0) {
      thunk_FUN_10108420(param_2,(char)uVar4);
    }
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 3;
    UClass::GetDefaultObject(pUStack_18);
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102bd5 UObjectExporterT3D::operator=

/* public: class UObjectExporterT3D & __thiscall UObjectExporterT3D::operator=(class
   UObjectExporterT3D const &) */

UObjectExporterT3D * __thiscall
UObjectExporterT3D::operator=(UObjectExporterT3D *this,UObjectExporterT3D *param_1)

{
                    /* 0x2bd5  533  ??4UObjectExporterT3D@@QAEAAV0@ABV0@@Z */
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


// ==== 10102bda USystem::operator_new

/* public: static void * __cdecl USystem::operator new(unsigned int,enum EInternal *) */

void * __cdecl USystem::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2bda  420  ??2USystem@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102bdf UPackageMap::AddLinker

/* public: virtual int __thiscall UPackageMap::AddLinker(class ULinkerLoad *) */

int __thiscall UPackageMap::AddLinker(UPackageMap *this,ULinkerLoad *param_1)

{
  int iVar1;
  int iVar2;
  FPackageInfo *this_00;
  ULinkerLoad *pUVar3;
  int iVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2bdf  787  ?AddLinker@UPackageMap@@UAEHPAVULinkerLoad@@@Z */
  puStack_c = &LAB_101ba8b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (((byte)param_1[0x40] & 4) == 0) {
    iVar2 = 0;
    while( true ) {
      if (*(int *)(this + 0x38) <= iVar2) {
        iVar2 = *(int *)(this + 0x38);
        ExceptionList = &pvStack_10;
        this_00 = (FPackageInfo *)thunk_FUN_10114b20(0x44,this + 0x34);
        if (this_00 != (FPackageInfo *)0x0) {
          FPackageInfo::FPackageInfo(this_00,param_1);
        }
        for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x88); iVar4 = iVar4 + 1) {
          iVar5 = *(int *)(param_1 + 0x84) + iVar4 * 0x1c;
          if ((*(int *)(iVar5 + 4) == 0x2a2) && (*(int *)(iVar5 + 8) == 0)) {
            for (iVar5 = 0; iVar5 < DAT_103308a4; iVar5 = iVar5 + 1) {
              iVar1 = *(int *)(param_1 + 0x84);
              pUVar3 = UObject::GetLoader(iVar5);
              if (*(int *)(*(int *)(pUVar3 + 0x34) + 0x20) == *(int *)(iVar1 + iVar4 * 0x1c + 0xc))
              {
                iVar1 = *(int *)this;
                pUVar3 = UObject::GetLoader(iVar5);
                (**(code **)(iVar1 + 0x7c))(pUVar3);
              }
            }
          }
        }
        ExceptionList = pvStack_10;
        return iVar2;
      }
      if (*(int *)(*(int *)(this + 0x34) + 0x10 + iVar2 * 0x44) == *(int *)(param_1 + 0x34)) break;
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 10102be4 UFixedArrayProperty::Serialize

/* public: virtual void __thiscall UFixedArrayProperty::Serialize(class FArchive &) */

void __thiscall UFixedArrayProperty::Serialize(UFixedArrayProperty *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2be4  1812  ?Serialize@UFixedArrayProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be0f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  uVar1 = thunk_FUN_10130f10(param_1,this + 0x78,this + 0x7c);
  thunk_FUN_10130820(uVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102be9 thunk_FUN_1015a300 thunk -> 1015a300

// ==== 10102bee ParseNext

/* void __cdecl ParseNext(unsigned short const * *) */

void __cdecl ParseNext(ushort **param_1)

{
  ushort uVar1;
  
                    /* 0x2bee  1670  ?ParseNext@@YAXPAPBG@Z */
  while( true ) {
    while( true ) {
      uVar1 = **param_1;
      if ((((uVar1 != 0x20) && (uVar1 != 9)) && (uVar1 != 0xd)) && (uVar1 != 10)) break;
      *param_1 = *param_1 + 1;
    }
    if (uVar1 != 0x3b) break;
    while( true ) {
      uVar1 = **param_1;
      if (((uVar1 == 0) || (uVar1 == 10)) || (uVar1 == 0xd)) break;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}


// ==== 10102bf3 FVector::TransformVectorByTranspose

/* public: class FVector __thiscall FVector::TransformVectorByTranspose(class FCoords const &)const
    */

void __thiscall FVector::TransformVectorByTranspose(FVector *this,FCoords *param_1)

{
  int in_stack_00000008;
  
                    /* 0x2bf3  1981  ?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */
  *(float *)param_1 =
       *(float *)(in_stack_00000008 + 0x24) * *(float *)(this + 8) +
       *(float *)(in_stack_00000008 + 0x18) * *(float *)(this + 4) +
       *(float *)(in_stack_00000008 + 0xc) * *(float *)this;
  *(float *)(param_1 + 4) =
       *(float *)(in_stack_00000008 + 0x28) * *(float *)(this + 8) +
       *(float *)(in_stack_00000008 + 0x1c) * *(float *)(this + 4) +
       *(float *)(in_stack_00000008 + 0x10) * *(float *)this;
  *(float *)(param_1 + 8) =
       *(float *)(in_stack_00000008 + 0x2c) * *(float *)(this + 8) +
       *(float *)(in_stack_00000008 + 0x20) * *(float *)(this + 4) +
       *(float *)(in_stack_00000008 + 0x14) * *(float *)this;
  return;
}


// ==== 10102bf8 UObject::execSubtractEqual_IntInt

/* public: void __thiscall UObject::execSubtractEqual_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractEqual_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_EBX;
  int *piVar2;
  int unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x2bf8  2383  ?execSubtractEqual_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = *piVar2 - unaff_ESI;
  *unaff_EBX = *piVar2;
  return;
}


// ==== 10102bfd thunk_FUN_10174d70 thunk -> 10174d70

// ==== 10102c02 UObject::CollectGarbage

/* public: static void __cdecl UObject::CollectGarbage(unsigned long) */

void __cdecl UObject::CollectGarbage(ulong param_1)

{
  undefined1 *puVar1;
  FOutputDevice *in_ECX;
  FArchive aFStack_58 [68];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2c02  851  ?CollectGarbage@UObject@@SAXK@Z */
  puStack_c = &LAB_101bd348;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff9c;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffff9c;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_10;
    FOutputDevice::Logf2(in_ECX,(EName)GLog,(ushort *)0x2f8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  thunk_FUN_101619b0();
  iStack_8._0_1_ = 1;
  SerializeRootSet(aFStack_58,param_1,0x40);
  PurgeGarbage();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_1015b400();
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102c11 UObject::operator_delete

/* public: static void __cdecl UObject::operator delete(void *,unsigned int) */

void __cdecl UObject::operator_delete(void *param_1,uint param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2c11  425  ??3UObject@@SAXPAXI@Z */
  puStack_c = &LAB_101b67a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)GMalloc + 8))(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102c16 UObject::IsReferenced

/* public: static int __cdecl UObject::IsReferenced(class UObject * &,unsigned long,int) */

int __cdecl UObject::IsReferenced(UObject **param_1,ulong param_2,int param_3)

{
  UObject *pUVar1;
  uint uVar2;
  FArchive aFStack_58 [68];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2c16  1525  ?IsReferenced@UObject@@SAHAAPAV1@KH@Z */
  puStack_c = &LAB_101bd368;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff9c;
  iStack_8 = 0;
  pUVar1 = *param_1;
  ExceptionList = &pvStack_10;
  if (param_3 != 0) {
    ExceptionList = &pvStack_10;
    *param_1 = (UObject *)0x0;
  }
  thunk_FUN_101619b0();
  iStack_8._0_1_ = 1;
  *(uint *)(pUVar1 + 0x1c) = *(uint *)(pUVar1 + 0x1c) & 0xffffffbf;
  SerializeRootSet(aFStack_58,param_2,0x40);
  *param_1 = pUVar1;
  uVar2 = *(uint *)(pUVar1 + 0x1c);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_1015b400();
  ExceptionList = pvStack_10;
  return ~(uVar2 >> 1) & 1;
}


// ==== 10102c1b FSharedMemory::FSharedMemory

/* public: __thiscall FSharedMemory::FSharedMemory(void) */

void __thiscall FSharedMemory::FSharedMemory(FSharedMemory *this)

{
                    /* 0x2c1b  133  ??0FSharedMemory@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


// ==== 10102c20 thunk_FUN_10162b80 thunk -> 10162b80

// ==== 10102c25 FString::FString

/* public: __thiscall FString::FString(class FString const &) */

FString * __thiscall FString::FString(FString *this,FString *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2c25  142  ??0FString@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)this,*(int *)(param_1 + 4));
  uStack_4 = 0;
  if (*(int *)(this + 4) != 0) {
    _memcpy(*(void **)this,*(void **)param_1,*(int *)(this + 4) * 2);
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102c2a thunk_FUN_10124bd0 thunk -> 10124bd0

// ==== 10102c2f thunk_FUN_10120b60 thunk -> 10120b60

// ==== 10102c34 FString::operator*=

/* public: class FString & __thiscall FString::operator*=(unsigned short const *) */

FString * __thiscall FString::operator*=(FString *this,ushort *param_1)

{
  FString *pFVar1;
  
                    /* 0x2c34  672  ??XFString@@QAEAAV0@PBG@Z */
  if ((1 < *(int *)(this + 4)) && (*(short *)(*(int *)this + -4 + *(int *)(this + 4) * 2) != 0x5c))
  {
    operator+=(this,(ushort *)&DAT_101ce154);
  }
  pFVar1 = operator+=(this,param_1);
  return pFVar1;
}


// ==== 10102c39 L2ParamStack::GetBuffer

/* public: void * * __thiscall L2ParamStack::GetBuffer(void) */

void ** __thiscall L2ParamStack::GetBuffer(L2ParamStack *this)

{
                    /* 0x2c39  1281  ?GetBuffer@L2ParamStack@@QAEPAPAXXZ */
  return *(void ***)this;
}


// ==== 10102c3e thunk_FUN_10119d60 thunk -> 10119d60

// ==== 10102c43 FArray::Shrink

/* public: void __thiscall FArray::Shrink(int) */

void __thiscall FArray::Shrink(FArray *this,int param_1)

{
                    /* 0x2c43  1872  ?Shrink@FArray@@QAEXH@Z */
  if (*(int *)(this + 8) != *(int *)(this + 4)) {
    *(int *)(this + 8) = *(int *)(this + 4);
    Realloc(this,param_1);
    return;
  }
  return;
}


// ==== 10102c48 UPackageMap::operator_new

/* public: static void * __cdecl UPackageMap::operator new(unsigned int,enum EInternal *) */

void * __cdecl UPackageMap::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2c48  404  ??2UPackageMap@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102c4d UByteProperty::operator_new

/* public: static void * __cdecl UByteProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UByteProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x2c4d  357  ??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10102c52 UParamStack::SetParamStack

/* public: void __thiscall UParamStack::SetParamStack(class L2ParamStack *) */

void __thiscall UParamStack::SetParamStack(UParamStack *this,L2ParamStack *param_1)

{
                    /* 0x2c52  1866  ?SetParamStack@UParamStack@@QAEXPAVL2ParamStack@@@Z */
  *(L2ParamStack **)(this + 0x34) = param_1;
  return;
}


// ==== 10102c57 appAtoi

/* int __cdecl appAtoi(unsigned short const *) */

int __cdecl appAtoi(ushort *param_1)

{
  long lVar1;
  
                    /* 0x2c57  2018  ?appAtoi@@YAHPBG@Z */
  lVar1 = _wcstol((wchar_t *)param_1,(wchar_t **)0x0,10);
  return lVar1;
}


// ==== 10102c5c UConst::InternalConstructor

/* public: static void __cdecl UConst::InternalConstructor(void *) */

void __cdecl UConst::InternalConstructor(void *param_1)

{
                    /* 0x2c5c  1481  ?InternalConstructor@UConst@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UConst(param_1);
    return;
  }
  return;
}


// ==== 10102c61 UIntProperty::CopyCompleteValue

/* public: virtual void __thiscall UIntProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UIntProperty::CopyCompleteValue(UIntProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x2c61  869  ?CopyCompleteValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
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


// ==== 10102c6b FClassNetCache::GetFromField

/* public: class FFieldNetCache * __thiscall FClassNetCache::GetFromField(class UObject *) */

FFieldNetCache * __thiscall FClassNetCache::GetFromField(FClassNetCache *this,UObject *param_1)

{
  FFieldNetCache *pFVar1;
  
                    /* 0x2c6b  1324
                       ?GetFromField@FClassNetCache@@QAEPAVFFieldNetCache@@PAVUObject@@@Z */
  pFVar1 = (FFieldNetCache *)0x0;
  while ((this != (FClassNetCache *)0x0 &&
         (pFVar1 = (FFieldNetCache *)thunk_FUN_10118c40(&param_1), pFVar1 == (FFieldNetCache *)0x0))
        ) {
    this = *(FClassNetCache **)(this + 0x10);
  }
  return pFVar1;
}


// ==== 10102c70 thunk_FUN_10114ea0 thunk -> 10114ea0

// ==== 10102c75 UObject::execIntConstByte

/* public: void __thiscall UObject::execIntConstByte(struct FFrame &,void * const) */

void __thiscall UObject::execIntConstByte(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x2c75  2266  ?execIntConstByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(uint *)param_2 = (uint)**(byte **)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// ==== 10102c7a thunk_FUN_101287f0 thunk -> 101287f0

// ==== 10102c7f FRangeVector::operator/=

/* public: class FRangeVector __thiscall FRangeVector::operator/=(class FRangeVector const &) */

void __thiscall FRangeVector::operator/=(FRangeVector *this,FRangeVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x2c7f  701  ??_0FRangeVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this / *in_stack_00000008;
  *(float *)(this + 4) = *(float *)(this + 4) / in_stack_00000008[1];
  *(float *)(this + 8) = *(float *)(this + 8) / in_stack_00000008[2];
  *(float *)(this + 0xc) = *(float *)(this + 0xc) / in_stack_00000008[3];
  *(float *)(this + 0x10) = *(float *)(this + 0x10) / in_stack_00000008[4];
  *(float *)(this + 0x14) = *(float *)(this + 0x14) / in_stack_00000008[5];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


// ==== 10102c84 thunk_FUN_1015b400 thunk -> 1015b400

// ==== 10102c89 thunk_FUN_101495d0 thunk -> 101495d0

// ==== 10102c8e UDelegateProperty::InternalConstructor

/* public: static void __cdecl UDelegateProperty::InternalConstructor(void *) */

void __cdecl UDelegateProperty::InternalConstructor(void *param_1)

{
                    /* 0x2c8e  1482  ?InternalConstructor@UDelegateProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UDelegateProperty(param_1);
    return;
  }
  return;
}


// ==== 10102c93 FFeedbackContext::operator=

/* public: class FFeedbackContext & __thiscall FFeedbackContext::operator=(class FFeedbackContext
   const &) */

FFeedbackContext * __thiscall
FFeedbackContext::operator=(FFeedbackContext *this,FFeedbackContext *param_1)

{
                    /* 0x2c93  448  ??4FFeedbackContext@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 10102c98 L2ParamStack::~L2ParamStack

/* public: __thiscall L2ParamStack::~L2ParamStack(void) */

void __thiscall L2ParamStack::~L2ParamStack(L2ParamStack *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2c98  314  ??1L2ParamStack@@QAE@XZ */
  puStack_c = &LAB_101bc8b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)this != 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_10108900(*(int *)this);
    *(undefined4 *)this = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102ca7 FInterpCurvePoint::FInterpCurvePoint

/* public: __thiscall FInterpCurvePoint::FInterpCurvePoint(void) */

FInterpCurvePoint * __thiscall FInterpCurvePoint::FInterpCurvePoint(FInterpCurvePoint *this)

{
                    /* 0x2ca7  66  ??0FInterpCurvePoint@@QAE@XZ */
  return this;
}


// ==== 10102cac FArchive::ContainsCode

/* public: int __thiscall FArchive::ContainsCode(void) */

int __thiscall FArchive::ContainsCode(FArchive *this)

{
                    /* 0x2cac  862  ?ContainsCode@FArchive@@QAEHXZ */
  return *(int *)(this + 0x30);
}


// ==== 10102cb1 appMD5Transform

/* void __cdecl appMD5Transform(unsigned long *,unsigned char *) */

void __cdecl appMD5Transform(ulong *param_1,uchar *param_2)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int aiStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
                    /* 0x2cb1  2074  ?appMD5Transform@@YAXPAKPAE@Z */
  iVar7 = 0x10;
  puVar2 = param_2 + 2;
  piVar5 = aiStack_40;
  do {
    iVar7 = iVar7 + -1;
    *piVar5 = CONCAT31(CONCAT21(*(undefined2 *)puVar2,puVar2[-1]),puVar2[-2]);
    puVar2 = puVar2 + 4;
    piVar5 = piVar5 + 1;
  } while (iVar7 != 0);
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = (~uVar6 & param_1[3] | uVar4 & uVar6) + aiStack_40[0] + -0x28955b88 + *param_1;
  uVar1 = (uVar3 * 0x80 | uVar3 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + aiStack_40[1] + -0x173848aa + param_1[3];
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + aiStack_40[2] + 0x242070db + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + aiStack_40[3] + -0x3e423112 + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar6 & uVar3 | uVar4 & uVar6) + iStack_30 + -0xa83f051 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + iStack_2c + 0x4787c62a + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + iStack_28 + -0x57cfb9ed + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + iStack_24 + -0x2b96aff + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar6 & uVar3 | uVar4 & uVar6) + iStack_20 + 0x698098d8 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + iStack_1c + -0x74bb0851 + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + iStack_18 + -0xa44f + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + iStack_14 + -0x76a32842 + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar6 & uVar3 | uVar4 & uVar6) + iStack_10 + 0x6b901122 + uVar1;
  uVar1 = (uVar1 * 0x80 | uVar1 >> 0x19) + uVar6;
  uVar3 = (~uVar1 & uVar4 | uVar6 & uVar1) + iStack_c + -0x2678e6d + uVar3;
  uVar3 = (uVar3 * 0x1000 | uVar3 >> 0x14) + uVar1;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar1) + iStack_8 + -0x5986bc72 + uVar4;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar3;
  uVar6 = (~uVar4 & uVar1 | uVar3 & uVar4) + iStack_4 + 0x49b40821 + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + aiStack_40[1] + -0x9e1da9e + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + iStack_28 + -0x3fbf4cc0 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + iStack_14 + 0x265e5a51 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + aiStack_40[0] + -0x16493856 + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + iStack_2c + -0x29d0efa3 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + iStack_18 + 0x2441453 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + iStack_4 + -0x275e197f + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + iStack_30 + -0x182c0438 + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + iStack_1c + 0x21e1cde6 + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + iStack_8 + -0x3cc8f82a + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + aiStack_40[3] + -0xb2af279 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + iStack_20 + 0x455a14ed + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (~uVar3 & uVar4 | uVar3 & uVar6) + iStack_c + -0x561c16fb + uVar1;
  uVar1 = (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6;
  uVar3 = (~uVar4 & uVar6 | uVar4 & uVar1) + aiStack_40[2] + -0x3105c08 + uVar3;
  uVar3 = (uVar3 * 0x200 | uVar3 >> 0x17) + uVar1;
  uVar4 = (~uVar6 & uVar1 | uVar3 & uVar6) + iStack_24 + 0x676f02d9 + uVar4;
  uVar4 = (uVar4 * 0x4000 | uVar4 >> 0x12) + uVar3;
  uVar6 = (~uVar1 & uVar3 | uVar4 & uVar1) + iStack_10 + -0x72d5b376 + uVar6;
  uVar6 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + iStack_2c + -0x5c6be + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + iStack_20 + -0x788e097f + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + iStack_14 + 0x6d9d6122 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + iStack_8 + -0x21ac7f4 + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + aiStack_40[1] + -0x5b4115bc + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + iStack_30 + 0x4bdecfa9 + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + iStack_24 + -0x944b4a0 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + iStack_18 + -0x41404390 + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + iStack_c + 0x289b7ec6 + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + aiStack_40[0] + -0x155ed806 + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + aiStack_40[3] + -0x2b10cf7b + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + iStack_28 + 0x4881d05 + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = (uVar3 ^ uVar4 ^ uVar6) + iStack_1c + -0x262b2fc7 + uVar1;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) + uVar6;
  uVar3 = (uVar4 ^ uVar6 ^ uVar1) + iStack_10 + -0x1924661b + uVar3;
  uVar3 = (uVar3 * 0x800 | uVar3 >> 0x15) + uVar1;
  uVar4 = (uVar3 ^ uVar6 ^ uVar1) + iStack_4 + 0x1fa27cf8 + uVar4;
  uVar4 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar3;
  uVar6 = (uVar3 ^ uVar4 ^ uVar1) + aiStack_40[2] + -0x3b53a99b + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + aiStack_40[0] + -0xbd6ddbc + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + iStack_24 + 0x432aff97 + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + iStack_8 + -0x546bdc59 + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + iStack_2c + -0x36c5fc7 + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + iStack_10 + 0x655b59c3 + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + aiStack_40[3] + -0x70f3336e + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + iStack_18 + -0x100b83 + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + aiStack_40[1] + -0x7a7ba22f + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + iStack_20 + 0x6fa87e4f + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + iStack_4 + -0x1d31920 + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + iStack_28 + -0x5cfebcec + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + iStack_c + 0x4e0811a1 + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar4;
  uVar1 = ((~uVar3 | uVar6) ^ uVar4) + iStack_30 + -0x8ac817e + uVar1;
  uVar1 = (uVar1 * 0x40 | uVar1 >> 0x1a) + uVar6;
  uVar3 = ((~uVar4 | uVar1) ^ uVar6) + iStack_14 + -0x42c50dcb + uVar3;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 0x16) + uVar1;
  uVar4 = ((~uVar6 | uVar3) ^ uVar1) + aiStack_40[2] + 0x2ad7d2bb + uVar4;
  uVar4 = (uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3;
  *param_1 = *param_1 + uVar1;
  uVar6 = ((~uVar1 | uVar4) ^ uVar3) + iStack_1c + -0x14792c6f + uVar6;
  param_1[1] = (uVar6 >> 0xb | uVar6 * 0x200000) + param_1[1] + uVar4;
  param_1[2] = param_1[2] + uVar4;
  param_1[3] = param_1[3] + uVar3;
  appMemset(aiStack_40,0,0x40);
  return;
}


// ==== 10102cb6 thunk_FUN_10129e40 thunk -> 10129e40

// ==== 10102cbb UPackage::GetDllExport

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void * __thiscall UPackage::GetDllExport(unsigned short const *,int) */

void * __thiscall UPackage::GetDllExport(UPackage *this,ushort *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  void *pvVar3;
  wchar_t *pwVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2cbb  1308  ?GetDllExport@UPackage@@QAEPAXPBGH@Z */
  puStack_c = &LAB_101bcb40;
  pvStack_10 = ExceptionList;
  pvVar3 = (void *)0x0;
  uStack_8 = 0;
  if (*(void **)(this + 0x34) == (void *)0x0) {
    if (param_2 != 0) {
      pwVar4 = L"nobind";
      ExceptionList = &pvStack_10;
      puVar1 = appCmdLine();
      iVar2 = ParseParam(puVar1,(ushort *)pwVar4);
      if (iVar2 == 0) {
        LocalizeError((ushort *)L"NotDll",(ushort *)L"Core",(ushort *)0x0);
        FOutputDevice::Logf(this_00,(ushort *)GError);
      }
    }
  }
  else {
    ExceptionList = &pvStack_10;
    pvVar3 = appGetDllExport(*(void **)(this + 0x34),param_1);
    if (pvVar3 == (void *)0x0) {
      if (param_2 != 0) {
        pwVar4 = L"nobind";
        puVar1 = appCmdLine();
        iVar2 = ParseParam(puVar1,(ushort *)pwVar4);
        if (iVar2 == 0) {
          LocalizeError((ushort *)L"NotInDll",(ushort *)L"Core",(ushort *)0x0);
          FOutputDevice::Logf(this_01,(ushort *)GError);
        }
      }
    }
    else {
      FOutputDevice::Logf((FOutputDevice *)GNull,(EName)GNull,(ushort *)0x310);
    }
  }
  ExceptionList = pvStack_10;
  return pvVar3;
}


// ==== 10102cc0 UEnum::UEnum

/* protected: __thiscall UEnum::UEnum(void) */

UEnum * __thiscall UEnum::UEnum(UEnum *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2cc0  207  ??0UEnum@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b77f3;
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


// ==== 10102cc5 UObject::GetImportCount

/* public: static int __cdecl UObject::GetImportCount(void) */

int __cdecl UObject::GetImportCount(void)

{
                    /* 0x2cc5  1332  ?GetImportCount@UObject@@SAHXZ */
  return GImportCount;
}


// ==== 10102ccf UArrayProperty::SerializeItem

/* public: virtual void __thiscall UArrayProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UArrayProperty::SerializeItem(UArrayProperty *this,FArchive *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x2ccf  1837  ?SerializeItem@UArrayProperty@@UBEXAAVFArchive@@PAXH@Z */
  this_00 = param_2;
  param_2 = *(void **)((int)param_2 + 4);
  iVar1 = *(int *)(*(int *)(this + 0x78) + 0x44);
  operator<<(param_1,(FCompactIndex *)&param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)((int)this_00 + 4) = 0;
    *(undefined4 *)((int)this_00 + 8) = 0;
    FArray::Realloc(this_00,iVar1);
    FArray::AddZeroed(this_00,iVar1,(int)param_2);
  }
  iVar4 = *(int *)this_00;
  iVar3 = 0;
  if (0 < (int)param_2) {
    do {
      if (param_3 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_3 / (int)param_2;
      }
      (**(code **)(**(int **)(this + 0x78) + 0x90))(param_1,iVar4,iVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar1;
    } while (iVar3 < (int)param_2);
  }
  return;
}


// ==== 10102cd4 thunk_FUN_1011cf40 thunk -> 1011cf40

// ==== 10102cd9 FCodec::FCodec

/* public: __thiscall FCodec::FCodec(class FCodec const &) */

void __thiscall FCodec::FCodec(FCodec *this,FCodec *param_1)

{
                    /* 0x2cd9  30  ??0FCodec@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10102ce3 UObject::execInterpCurveGetOutputRange

/* public: void __thiscall UObject::execInterpCurveGetOutputRange(struct FFrame &,void * const) */

void __thiscall UObject::execInterpCurveGetOutputRange(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  int iStack_34;
  int iStack_30;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2ce3  2275  ?execInterpCurveGetOutputRange@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bb598;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FInterpCurve::FInterpCurve((FInterpCurve *)&iStack_34);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&iStack_34);
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
    FInterpCurve::~FInterpCurve((FInterpCurve *)&iStack_34);
    ExceptionList = pvStack_10;
    return;
  }
  *pfVar2 = *(float *)(iStack_34 + 4);
  fVar5 = (float10)*(float *)(iStack_34 + 4);
  iVar3 = 1;
  while( true ) {
    *pfVar4 = (float)fVar5;
    iStack_20 = iVar3;
    if (iStack_30 <= iVar3) break;
    fVar5 = (float10)thunk_FUN_10114810(*pfVar2,*(undefined4 *)(iStack_34 + 4 + iVar3 * 8));
    *pfVar2 = (float)fVar5;
    fVar5 = (float10)thunk_FUN_101147b0(*pfVar4,*(undefined4 *)(iStack_34 + 4 + iVar3 * 8));
    iVar3 = iVar3 + 1;
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FInterpCurve::~FInterpCurve((FInterpCurve *)&iStack_34);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102ce8 UParamStack::operator=

/* public: class UParamStack & __thiscall UParamStack::operator=(class UParamStack const &) */

UParamStack * __thiscall UParamStack::operator=(UParamStack *this,UParamStack *param_1)

{
                    /* 0x2ce8  537  ??4UParamStack@@QAEAAV0@ABV0@@Z */
  UObject::operator=((UObject *)this,(UObject *)param_1);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}


// ==== 10102cf2 FString::LeftChop

/* public: class FString __thiscall FString::LeftChop(int)const  */

int __thiscall FString::LeftChop(FString *this,int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int in_stack_00000008;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2cf2  1547  ?LeftChop@FString@@QBE?AV1@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8449;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    puVar2 = &DAT_101cdd44;
    iVar3 = 0;
    iVar1 = 0;
  }
  else {
    puVar2 = *(ushort **)this;
    iVar3 = iVar1 + -1;
    iVar1 = iVar1 + -1;
  }
  iVar1 = iVar1 - in_stack_00000008;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (iVar3 <= iVar1) {
    iVar1 = iVar3;
  }
  ExceptionList = &pvStack_c;
  FString((FString *)param_1,iVar1,puVar2);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 10102cf7 UObject::DeleteAllHashObjectBuffer

/* protected: static void __cdecl UObject::DeleteAllHashObjectBuffer(void) */

void __cdecl UObject::DeleteAllHashObjectBuffer(void)

{
  int iVar1;
  UObject ***pppUVar2;
  
  pppUVar2 = &GObjHashBuffer;
                    /* 0x2cf7  909  ?DeleteAllHashObjectBuffer@UObject@@KAXXZ */
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pppUVar2 = (UObject **)0x0;
    pppUVar2 = pppUVar2 + 1;
  }
  return;
}


// ==== 10102cfc FPackageInfo::~FPackageInfo

/* public: __thiscall FPackageInfo::~FPackageInfo(void) */

void __thiscall FPackageInfo::~FPackageInfo(FPackageInfo *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2cfc  307  ??1FPackageInfo@@QAE@XZ */
  puStack_8 = &LAB_101b7478;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10102d01 FCoords::Inverse

/* public: class FCoords __thiscall FCoords::Inverse(void)const  */

void __thiscall FCoords::Inverse(FCoords *this)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float *in_stack_00000004;
  float fStack_40;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x2d01  1506  ?Inverse@FCoords@@QBE?AV1@XZ */
  fStack_40 = (*(float *)(this + 0x18) * *(float *)(this + 0x28) -
              *(float *)(this + 0x1c) * *(float *)(this + 0x24)) * *(float *)(this + 0x14) +
              (*(float *)(this + 0x1c) * *(float *)(this + 0x2c) -
              *(float *)(this + 0x20) * *(float *)(this + 0x28)) * *(float *)(this + 0xc) +
              (*(float *)(this + 0x24) * *(float *)(this + 0x20) -
              *(float *)(this + 0x2c) * *(float *)(this + 0x18)) * *(float *)(this + 0x10);
  if (fStack_40 == 0.0) {
    fStack_40 = 1.0;
  }
  fStack_40 = 1.0 / fStack_40;
  fVar1 = *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x1c);
  fVar4 = *(float *)(this + 0x24);
  fVar5 = *(float *)(this + 0x10);
  fVar6 = *(float *)(this + 0x24);
  fVar7 = *(float *)(this + 0x28);
  fVar8 = *(float *)(this + 0xc);
  fVar9 = *(float *)(this + 0xc);
  fVar10 = *(float *)(this + 0x1c);
  fVar11 = *(float *)(this + 0x18);
  fVar12 = *(float *)(this + 0x10);
  fVar13 = *(float *)(this + 0x24);
  fVar14 = *(float *)(this + 0x20);
  fVar15 = *(float *)(this + 0x2c);
  fVar16 = *(float *)(this + 0x18);
  fVar17 = *(float *)(this + 0xc);
  fVar18 = *(float *)(this + 0x2c);
  fVar19 = *(float *)(this + 0x14);
  fVar20 = *(float *)(this + 0x24);
  fVar21 = *(float *)(this + 0x14);
  fVar22 = *(float *)(this + 0x18);
  fVar23 = *(float *)(this + 0xc);
  fVar24 = *(float *)(this + 0x20);
  fVar25 = *(float *)(this + 0x2c);
  fVar26 = *(float *)(this + 0x1c);
  fVar27 = *(float *)(this + 0x28);
  fVar28 = *(float *)(this + 0x20);
  fVar29 = *(float *)(this + 0x28);
  fVar30 = *(float *)(this + 0x14);
  fVar31 = *(float *)(this + 0x2c);
  fVar32 = *(float *)(this + 0x10);
  fVar33 = *(float *)(this + 0x10);
  fVar34 = *(float *)(this + 0x20);
  fVar35 = *(float *)(this + 0x14);
  fVar36 = *(float *)(this + 0x1c);
  thunk_FUN_1010f5b0(this,this,&fStack_c);
  *in_stack_00000004 = -fStack_c;
  in_stack_00000004[1] = -fStack_8;
  in_stack_00000004[3] = (fVar25 * fVar26 - fVar27 * fVar28) * fStack_40;
  in_stack_00000004[2] = -fStack_4;
  in_stack_00000004[4] = (fVar29 * fVar30 - fVar31 * fVar32) * fStack_40;
  in_stack_00000004[5] = fStack_40 * (fVar33 * fVar34 - fVar35 * fVar36);
  in_stack_00000004[6] = (fVar13 * fVar14 - fVar15 * fVar16) * fStack_40;
  in_stack_00000004[7] = (fVar17 * fVar18 - fVar19 * fVar20) * fStack_40;
  in_stack_00000004[9] = fStack_40 * (fVar1 * fVar2 - fVar3 * fVar4);
  in_stack_00000004[8] = (fVar21 * fVar22 - fVar23 * fVar24) * fStack_40;
  in_stack_00000004[10] = (fVar5 * fVar6 - fVar7 * fVar8) * fStack_40;
  in_stack_00000004[0xb] = (fVar9 * fVar10 - fVar11 * fVar12) * fStack_40;
  return;
}


// ==== 10102d06 UTextBufferFactory::StaticConstructor

/* public: void __thiscall UTextBufferFactory::StaticConstructor(void) */

void __thiscall UTextBufferFactory::StaticConstructor(UTextBufferFactory *this)

{
  FString *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2d06  1931  ?StaticConstructor@UTextBufferFactory@@QAEXXZ */
  puStack_c = &LAB_101bd0d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(UClass **)(this + 0x34) = &UTextBuffer::PrivateStaticClass;
  *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) & 0xfffffffe;
  *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 8;
  this_00 = (FString *)thunk_FUN_101146f0(0xc,this + 0x60);
  if (this_00 != (FString *)0x0) {
    FString::FString(this_00,(ushort *)L"txt;Text files");
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102d0b FFrame::operator=

/* public: struct FFrame & __thiscall FFrame::operator=(struct FFrame const &) */

FFrame * __thiscall FFrame::operator=(FFrame *this,FFrame *param_1)

{
                    /* 0x2d0b  452  ??4FFrame@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}


// ==== 10102d10 UObject::execAddEqual_ByteByte

/* public: void __thiscall UObject::execAddEqual_ByteByte(struct FFrame &,void * const) */

void __thiscall UObject::execAddEqual_ByteByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *unaff_ESI;
  char unaff_DI;
  uchar *puVar2;
  undefined4 uStack_4;
  
                    /* 0x2d10  2141  ?execAddEqual_ByteByte@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *puVar2 = *puVar2 + unaff_DI;
  *unaff_ESI = *puVar2;
  return;
}


// ==== 10102d15 FMatrix::operator==

/* public: int __thiscall FMatrix::operator==(class FMatrix &)const  */

int __thiscall FMatrix::operator==(FMatrix *this,FMatrix *param_1)

{
  FMatrix *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x2d15  562  ??8FMatrix@@QBEHAAV0@@Z */
  iVar4 = 0;
  iVar3 = (int)this - (int)param_1;
  do {
    iVar2 = 0;
    pFVar1 = param_1;
    do {
      if (*(float *)pFVar1 != *(float *)(pFVar1 + iVar3)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pFVar1 = pFVar1 + 4;
    } while (iVar2 < 4);
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x10;
  } while (iVar4 < 4);
  return 1;
}


// ==== 10102d1a UObject::StaticInit

/* public: static void __cdecl UObject::StaticInit(void) */

void __cdecl UObject::StaticInit(void)

{
  undefined1 *puVar1;
  ushort *puVar2;
  UPackage *this;
  FOutputDevice *this_00;
  wchar_t *pwVar3;
  FCriticalSection *pFStack_24;
  FName aFStack_20 [4];
  uint uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2d1a  1940  ?StaticInit@UObject@@SAXXZ */
  puStack_c = &LAB_101bdbac;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  iStack_8._0_1_ = 0;
  iStack_8._1_3_ = 0;
  GObjNoRegister = 1;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc8;
  if (GLoadingCS == (FCriticalSection *)0x0) {
    ExceptionList = &pvStack_10;
    pFStack_24 = (FCriticalSection *)thunk_FUN_101088a0();
    iStack_8._0_1_ = 1;
    if (pFStack_24 == (FCriticalSection *)0x0) {
      GLoadingCS = (FCriticalSection *)0x0;
      puVar1 = puStack_14;
    }
    else {
      GLoadingCS = (FCriticalSection *)FCriticalSection::FCriticalSection(pFStack_24);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  iStack_8._0_1_ = 0;
  if (GDissociateImportsCS == (FCriticalSection *)0x0) {
    pFStack_24 = (FCriticalSection *)thunk_FUN_101088a0();
    iStack_8._0_1_ = 2;
    if (pFStack_24 == (FCriticalSection *)0x0) {
      GDissociateImportsCS = (FCriticalSection *)0x0;
    }
    else {
      GDissociateImportsCS = (FCriticalSection *)FCriticalSection::FCriticalSection(pFStack_24);
    }
  }
  iStack_8._0_1_ = 0;
  if (GScriptingCS == (FCriticalSection *)0x0) {
    pFStack_24 = (FCriticalSection *)thunk_FUN_101088a0();
    iStack_8._0_1_ = 3;
    if (pFStack_24 == (FCriticalSection *)0x0) {
      GScriptingCS = (FCriticalSection *)0x0;
    }
    else {
      GScriptingCS = (FCriticalSection *)FCriticalSection::FCriticalSection(pFStack_24);
    }
  }
  iStack_8._0_1_ = 0;
  pwVar3 = L"CONFLICTS";
  puVar2 = appCmdLine();
  DAT_1023fe54 = ParseParam(puVar2,(ushort *)pwVar3);
  pwVar3 = L"NOGC";
  puVar2 = appCmdLine();
  DAT_1023fe50 = ParseParam(puVar2,(ushort *)pwVar3);
  for (uStack_18 = 0; uStack_18 < 0x1000; uStack_18 = uStack_18 + 1) {
    (&GObjHash)[uStack_18] = (UObject **)0x0;
  }
  for (uStack_1c = 0; uStack_1c < 0x1000; uStack_1c = uStack_1c + 1) {
    (&GObjHashBuffer)[uStack_1c] = (UObject **)0x0;
  }
  GObjInitialized = 1;
  ProcessRegistrants();
  pFStack_24 = (FCriticalSection *)&stack0xffffffc0;
  FName::FName((FName *)&stack0xffffffc0,(ushort *)L"Transient",1);
  this = UPackage::operator_new(0x44,0);
  if (this == (UPackage *)0x0) {
    GObjTransientPkg = (UPackage *)0x0;
  }
  else {
    GObjTransientPkg = (UPackage *)UPackage::UPackage(this);
  }
  AddToRoot((UObject *)GObjTransientPkg);
  pFStack_24 = (FCriticalSection *)thunk_FUN_101088a0();
  iStack_8._0_1_ = 4;
  if (pFStack_24 == (FCriticalSection *)0x0) {
    GObjPackageRemap = (TMultiMap<FName,FName> *)0x0;
  }
  else {
    GObjPackageRemap = (TMultiMap<FName,FName> *)thunk_FUN_10165850();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FName::FName(aFStack_20,(ushort *)L"UnrealShare",1);
  FName::FName((FName *)&pFStack_24,(ushort *)L"UnrealI",1);
  thunk_FUN_1015dc10();
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2fa);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102d1f thunk_FUN_10151b50 thunk -> 10151b50

// ==== 10102d24 FNullOutError::operator=

/* public: class FNullOutError & __thiscall FNullOutError::operator=(class FNullOutError const &) */

FNullOutError * __thiscall FNullOutError::operator=(FNullOutError *this,FNullOutError *param_1)

{
                    /* 0x2d24  471  ??4FNullOutError@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10102d2e FRange::GetMin

/* public: float __thiscall FRange::GetMin(void)const  */

float __thiscall FRange::GetMin(FRange *this)

{
                    /* 0x2d2e  1356  ?GetMin@FRange@@QBEMXZ */
  if (*(float *)this <= *(float *)(this + 4)) {
    return *(float *)this;
  }
  return *(float *)(this + 4);
}


// ==== 10102d33 UMapProperty::Serialize

/* public: virtual void __thiscall UMapProperty::Serialize(class FArchive &) */

void __thiscall UMapProperty::Serialize(UMapProperty *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2d33  1817  ?Serialize@UMapProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be140;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  uVar1 = thunk_FUN_10130f10(param_1,this + 0x78,this + 0x7c);
  thunk_FUN_10130f10(uVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102d38 thunk_FUN_10119530 thunk -> 10119530

// ==== 10102d3d FArchive::SerializeBits

/* public: virtual void __thiscall FArchive::SerializeBits(void *,int) */

void __thiscall FArchive::SerializeBits(FArchive *this,void *param_1,int param_2)

{
  byte *pbVar1;
  
                    /* 0x2d3d  1830  ?SerializeBits@FArchive@@UAEXPAXH@Z */
  (**(code **)(*(int *)this + 4))(param_1,(int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3);
  if (*(int *)(this + 0x10) != 0) {
    pbVar1 = (byte *)(((int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3) + (int)param_1);
    *pbVar1 = *pbVar1 & ('\x01' << ((byte)param_2 & 7)) - 1U;
  }
  return;
}


// ==== 10102d42 UObject::execFMin

/* WARNING: Removing unreachable block (ram,0x1013e362) */
/* public: void __thiscall UObject::execFMin(struct FFrame &,void * const) */

void __thiscall UObject::execFMin(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x2d42  2217  ?execFMin@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10102d47 UObject::execLetBool

/* public: void __thiscall UObject::execLetBool(struct FFrame &,void * const) */

void __thiscall UObject::execLetBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  uchar *puVar3;
  int unaff_ESI;
  
                    /* 0x2d47  2294  ?execLetBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  GProperty = (UProperty *)0x0;
  GPropObject = (UObject *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  puVar3 = GPropAddr;
  pUVar2 = GProperty;
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xfffffffc);
  if (puVar3 != (uchar *)0x0) {
    if (unaff_ESI != 0) {
      *(uint *)puVar3 = *(uint *)puVar3 | *(uint *)(pUVar2 + 0x78);
      return;
    }
    *(uint *)puVar3 = *(uint *)puVar3 & ~*(uint *)(pUVar2 + 0x78);
  }
  return;
}


// ==== 10102d51 TArray<unsigned_short>::Last

/* public: unsigned short const & __thiscall TArray<unsigned short>::Last(int)const  */

ushort * __thiscall TArray<unsigned_short>::Last(TArray<unsigned_short> *this,int param_1)

{
                    /* 0x2d51  1544  ?Last@?$TArray@G@@QBEABGH@Z */
  return (ushort *)(*(int *)this + -2 + (*(int *)(this + 4) - param_1) * 2);
}


// ==== 10102d56 UClass::Serialize

/* public: virtual void __thiscall UClass::Serialize(class FArchive &) */

void __thiscall UClass::Serialize(UClass *this,FArchive *param_1)

{
  FArchive *pFVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  UObject *pUVar6;
  int iVar7;
  code *pcVar8;
  UClass *pUVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 uVar12;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2d56  1804  ?Serialize@UClass@@UAEXAAVFArchive@@@Z */
  pFVar1 = param_1;
  puStack_c = &LAB_101ba230;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UState::Serialize((UState *)this,param_1);
  if (*(int *)(pFVar1 + 4) < 0x3e) {
    param_1 = (FArchive *)0x0;
    thunk_FUN_10130820(pFVar1,&param_1);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x80004;
  }
  uVar2 = thunk_FUN_10108c50(pFVar1,this + 0x4a4,this + 0x4ac);
  thunk_FUN_10130dc0(uVar2);
  uVar2 = thunk_FUN_101342f0(pFVar1,this + 0x4dc,this + 0x4e8);
  thunk_FUN_10132470(uVar2);
  if (*(int *)(pFVar1 + 4) < 0x3e) {
    puVar4 = (undefined4 *)FName::FName((FName *)&param_1,(ushort *)L"System",1);
    *(undefined4 *)(this + 0x4c0) = *puVar4;
  }
  else {
    piVar3 = (int *)thunk_FUN_1012a9f0(pFVar1,this + 0x4bc);
    (**(code **)(*piVar3 + 0x1c))(this + 0x4c0);
  }
  if (0x62 < *(int *)(pFVar1 + 4)) {
    thunk_FUN_10132470(pFVar1,this + 0x500);
  }
  if (*(int *)(pFVar1 + 0x10) == 0) {
    iVar11 = *(int *)(this + 0x4f8);
    if (*(int *)(pFVar1 + 0x14) == 0) {
      iVar7 = (**(code **)(*(int *)this + 0x78))();
      if (iVar11 != iVar7) {
        appFailAssert("Defaults.Num()==GetPropertiesSize()",".\\UnClass.cpp",0x406);
      }
      thunk_FUN_10130a30(pFVar1);
      uVar2 = 0;
      uVar12 = *(undefined4 *)(this + 0x4f4);
      pcVar8 = *(code **)(*(int *)this + 0x84);
    }
    else {
      iVar7 = (**(code **)(*(int *)this + 0x78))();
      if (iVar11 != iVar7) {
        appFailAssert("Defaults.Num()==GetPropertiesSize()",".\\UnClass.cpp",0x401);
      }
      uVar2 = *(undefined4 *)(this + 0x34);
      uVar12 = *(undefined4 *)(this + 0x4f4);
      pcVar8 = *(code **)(*(int *)this + 0x88);
    }
    (*pcVar8)(pFVar1,uVar12,uVar2);
  }
  else {
    uVar5 = (**(code **)(*(int *)this + 0x78))();
    if (uVar5 < 0x34) {
      appFailAssert("GetPropertiesSize()>=sizeof(UObject)",".\\UnClass.cpp",0x3f3);
    }
    if ((*(int *)(this + 0x34) != 0) && ((*(uint *)(*(int *)(this + 0x34) + 0x1c) & 0x200) != 0)) {
      appFailAssert("!GetSuperClass() || !(GetSuperClass()->GetFlags()&RF_NeedLoad)",
                    ".\\UnClass.cpp",0x3f4);
    }
    uVar2 = (**(code **)(*(int *)this + 0x78))();
    thunk_FUN_10113f60(uVar2);
    uVar2 = (**(code **)(*(int *)this + 0x78))();
    thunk_FUN_1012aa10(uVar2);
    iVar11 = 0;
    pUVar9 = this;
    pUVar6 = GetDefaultObject(this);
    UObject::InitClassDefaultObject(pUVar6,pUVar9,iVar11);
    (**(code **)(*(int *)this + 0x88))
              (pFVar1,*(undefined4 *)(this + 0x4f4),*(undefined4 *)(this + 0x34));
    puVar10 = (ushort *)0x0;
    pUVar9 = (UClass *)0x0;
    iVar11 = 0;
    pUVar6 = GetDefaultObject(this);
    UObject::LoadConfig(pUVar6,iVar11,pUVar9,puVar10);
    pUVar6 = GetDefaultObject(this);
    UObject::LoadLocalized(pUVar6);
    *(undefined4 *)(this + 0x4a8) = 0;
    if (*(int *)(pFVar1 + 4) < 0x3e) {
      *(UClass **)(this + 0x4bc) = &UObject::PrivateStaticClass;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102d5b UObject::execVectorToString

/* public: void __thiscall UObject::execVectorToString(struct FFrame &,void * const) */

void __thiscall UObject::execVectorToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2d5b  2408  ?execVectorToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bab70;
  pvStack_c = ExceptionList;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&fStack_18);
  pFVar3 = (FArray *)
           FString::Printf((ushort *)&stack0xffffffd4,L"%.2f,%.2f,%.2f",(double)fStack_20,
                           (double)fStack_1c,(double)fStack_18);
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
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10102d60 thunk_FUN_101147e0 thunk -> 101147e0

// ==== 10102d65 UPackageMap::GetMaxObjectIndex

/* public: virtual int __thiscall UPackageMap::GetMaxObjectIndex(void) */

int __thiscall UPackageMap::GetMaxObjectIndex(UPackageMap *this)

{
                    /* 0x2d65  1354  ?GetMaxObjectIndex@UPackageMap@@UAEHXZ */
  return *(int *)(this + 0x74);
}


// ==== 10102d6a FString::RightPad

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: class FString __thiscall FString::RightPad(int) */

int __thiscall FString::RightPad(FString *this,int param_1)

{
  FString *this_00;
  int iVar1;
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
  
                    /* 0x2d6a  1776  ?RightPad@FString@@QAE?AV1@H@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101bc3e9;
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
    this_00 = pFStack_18;
    puVar4[uVar2] = 0;
    ExceptionList = &pvStack_10;
    FString(aFStack_24,puVar4);
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


// ==== 10102d6f appAtan

/* double __cdecl appAtan(double) */

double __cdecl appAtan(double param_1)

{
  float10 fVar1;
  
                    /* 0x2d6f  2016  ?appAtan@@YANN@Z */
  fVar1 = (float10)FUN_1017ca60();
  return (double)fVar1;
}


// ==== 10102d74 UBoolProperty::Link

/* public: virtual void __thiscall UBoolProperty::Link(class FArchive &,class UProperty *) */

void __thiscall UBoolProperty::Link(UBoolProperty *this,FArchive *param_1,UProperty *param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2d74  1552  ?Link@UBoolProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
  puStack_c = &LAB_101be1b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = thunk_FUN_101329d0(param_2);
  iVar2 = (**(code **)(**(int **)(this + 0x18) + 0x6c))();
  if (((iVar2 == 0) || (iVar1 == 0)) || ((*(uint *)(iVar1 + 0x78) & 0x7fffffff) == 0)) {
    iVar1 = (**(code **)(**(int **)(this + 0x18) + 0x78))();
    *(uint *)(this + 0x54) = iVar1 + 3U & 0xfffffffc;
    *(undefined4 *)(this + 0x78) = 1;
  }
  else {
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(int *)(this + 0x78) = *(int *)(iVar1 + 0x78) * 2;
  }
  *(undefined4 *)(this + 0x44) = 4;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102d79 FErrorOutError::operator=

/* public: class FErrorOutError & __thiscall FErrorOutError::operator=(class FErrorOutError const &)
    */

FErrorOutError * __thiscall FErrorOutError::operator=(FErrorOutError *this,FErrorOutError *param_1)

{
                    /* 0x2d79  446  ??4FErrorOutError@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10102d7e UObject::execVector2Rotator

/* public: void __thiscall UObject::execVector2Rotator(struct FFrame &,void * const) */

void __thiscall UObject::execVector2Rotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puStack_20;
  undefined1 auStack_18 [20];
  undefined4 *puStack_4;
  
                    /* 0x2d7e  2404  ?execVector2Rotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_20 = auStack_18;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = (undefined4 *)FVector::Rotation((FVector *)&puStack_20);
  *puStack_4 = *puVar2;
  puStack_4[1] = puVar2[1];
  puStack_4[2] = puVar2[2];
  return;
}


// ==== 10102d83 UConst::GetOuterUStruct

/* public: class UStruct * __thiscall UConst::GetOuterUStruct(void)const  */

UStruct * __thiscall UConst::GetOuterUStruct(UConst *this)

{
                    /* 0x2d83  1377  ?GetOuterUStruct@UConst@@QBEPAVUStruct@@XZ */
  return *(UStruct **)(this + 0x18);
}


// ==== 10102d8d thunk_FUN_101307e0 thunk -> 101307e0

// ==== 10102d92 thunk_FUN_10118a50 thunk -> 10118a50

// ==== 10102d9c UObject::execSetPropertyText

/* public: void __thiscall UObject::execSetPropertyText(struct FFrame &,void * const) */

void __thiscall UObject::execSetPropertyText(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 *puStack_34;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2d9c  2364  ?execSetPropertyText@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb640;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_34 = &uStack_18;
  (*(code *)(&GNatives)[bVar1])(param_1);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  piVar2 = (int *)thunk_FUN_10147830(*(undefined4 *)(this + 0x24),&DAT_101cdd44);
  if (((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 7) & 4) != 0)) &&
     ((*(byte *)(piVar2 + 0x12) & 2) == 0)) {
    puVar3 = puStack_34;
    if (unaff_EDI == 0) {
      puVar3 = (undefined4 *)&DAT_101cdd44;
    }
    (**(code **)(*piVar2 + 0x9c))(puVar3,this + piVar2[0x15],1);
  }
  uStack_14._0_1_ = 6;
  FArray::Realloc((FArray *)&puStack_34,2);
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  uStack_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  uStack_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10102da1 UFloatProperty::CopyCompleteValue

/* public: virtual void __thiscall UFloatProperty::CopyCompleteValue(void *,void *,class UObject
   *)const  */

void __thiscall
UFloatProperty::CopyCompleteValue(UFloatProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x2da1  868  ?CopyCompleteValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
  if (*(int *)(this + 0x40) != 1) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x40)) {
      iVar2 = (int)param_2 - (int)param_1;
      do {
        iVar1 = iVar1 + 1;
        *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + (int)param_1);
        param_1 = (void *)((int)param_1 + 4);
      } while (iVar1 < *(int *)(this + 0x40));
    }
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}


// ==== 10102da6 FArchive::IsPersistent

/* public: int __thiscall FArchive::IsPersistent(void) */

int __thiscall FArchive::IsPersistent(FArchive *this)

{
                    /* 0x2da6  1523  ?IsPersistent@FArchive@@QAEHXZ */
  return *(int *)(this + 0x1c);
}


// ==== 10102dab thunk_FUN_1015a830 thunk -> 1015a830

// ==== 10102db0 thunk_FUN_10137370 thunk -> 10137370

// ==== 10102db5 UObject::PostLoad

/* public: virtual void __thiscall UObject::PostLoad(void) */

void __thiscall UObject::PostLoad(UObject *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2db5  1689  ?PostLoad@UObject@@UAEXXZ */
  puStack_c = &LAB_101bd2c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x20000000;
  if ((*(uint *)(this + 0x1c) & 0x100) != 0) {
    LoadLocalized(this);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102dba TArray<unsigned_short>::Last

/* public: unsigned short & __thiscall TArray<unsigned short>::Last(int) */

ushort * __thiscall TArray<unsigned_short>::Last(TArray<unsigned_short> *this,int param_1)

{
                    /* 0x2dba  1543  ?Last@?$TArray@G@@QAEAAGH@Z */
  if (*(int *)(this + 4) <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return (ushort *)(*(int *)this + -2 + (*(int *)(this + 4) - param_1) * 2);
}


// ==== 10102dbf UObject::execStructMember

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall UObject::execStructMember(struct FFrame &,void * const) */

void __thiscall UObject::execStructMember(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2dbf  2380  ?execStructMember@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baad0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  pUVar2 = (UProperty *)**(int **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  iVar3 = thunk_FUN_10142960(*(int *)(pUVar2 + 0x18));
  if (*(int *)(iVar3 + 0x4c) == 0) {
    puStack_18 = (undefined1 *)0x0;
  }
  else {
    puStack_18 = &stack0xffffffbc;
  }
  thunk_FUN_10108420(puStack_18,*(int *)(iVar3 + 0x4c));
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,puStack_18);
  if (GPropAddr != (uchar *)0x0) {
    GPropAddr = GPropAddr + *(int *)(pUVar2 + 0x54);
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  GProperty = pUVar2;
  GPropObject = this;
  if (param_2 != (void *)0x0) {
    (**(code **)(*(int *)pUVar2 + 0xa8))(param_2,puStack_18 + *(int *)(pUVar2 + 0x54),0);
  }
  uStack_8 = 3;
  for (piVar4 = *(int **)(iVar3 + 0x78); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x18]) {
    (**(code **)(*piVar4 + 0xac))(puStack_18 + piVar4[0x15]);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102dc9 UObjectExporterT3D::~UObjectExporterT3D

/* public: virtual __thiscall UObjectExporterT3D::~UObjectExporterT3D(void) */

void __thiscall UObjectExporterT3D::~UObjectExporterT3D(UObjectExporterT3D *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2dc9  339  ??1UObjectExporterT3D@@UAE@XZ */
  puStack_8 = &LAB_101b9208;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = 0xffffffff;
  UExporter::~UExporter((UExporter *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10102dce FRange::Size

/* public: float __thiscall FRange::Size(void)const  */

float __thiscall FRange::Size(FRange *this)

{
  float fVar1;
  float fVar2;
  
                    /* 0x2dce  1878  ?Size@FRange@@QBEMXZ */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  if (*(float *)(this + 4) < *(float *)this) {
    return fVar2 - *(float *)(this + 4);
  }
  return fVar2 - *(float *)this;
}


// ==== 10102ddd thunk_FUN_101634b0 thunk -> 101634b0

// ==== 10102de2 thunk_FUN_10130800 thunk -> 10130800

// ==== 10102de7 FString::operator==

/* public: int __thiscall FString::operator==(unsigned short const *)const  */

int __thiscall FString::operator==(FString *this,ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x2de7  572  ??8FString@@QBEHPBG@Z */
  if (*(int *)(this + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)this;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return (uint)(iVar2 == 0);
}


// ==== 10102dec FArchive::Tell

/* public: virtual int __thiscall FArchive::Tell(void) */

int __thiscall FArchive::Tell(FArchive *this)

{
                    /* 0x2dec  1955  ?Tell@FArchive@@UAEHXZ */
  return -1;
}


// ==== 10102df6 thunk_FUN_10130840 thunk -> 10130840

// ==== 10102dfb thunk_FUN_10130820 thunk -> 10130820

// ==== 10102e00 UDelegateProperty::CopySingleValue

/* public: virtual void __thiscall UDelegateProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UDelegateProperty::CopySingleValue
          (UDelegateProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x2e00  876  ?CopySingleValue@UDelegateProperty@@UBEXPAX0PAVUObject@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
  return;
}


// ==== 10102e05 thunk_FUN_10108c50 thunk -> 10108c50

// ==== 10102e0a UObject::execRotatorToString

/* public: void __thiscall UObject::execRotatorToString(struct FFrame &,void * const) */

void __thiscall UObject::execRotatorToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2e0a  2360  ?execRotatorToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bab90;
  pvStack_c = ExceptionList;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  pFVar3 = (FArray *)
           FString::Printf((ushort *)&stack0xffffffd4,L"%i,%i,%i",uStack_20 & 0xffff,
                           uStack_1c & 0xffff,uStack_18 & 0xffff);
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
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10102e0f FRotator::operator-

/* public: class FRotator __thiscall FRotator::operator-(class FRotator const &)const  */

void __thiscall FRotator::operator-(FRotator *this,FRotator *param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
                    /* 0x2e0f  628  ??GFRotator@@QBE?AV0@ABV0@@Z */
  *(int *)param_1 = *(int *)this - *in_stack_00000008;
  iVar1 = *(int *)(this + 8);
  iVar2 = in_stack_00000008[2];
  *(int *)(param_1 + 4) = *(int *)(this + 4) - in_stack_00000008[1];
  *(int *)(param_1 + 8) = iVar1 - iVar2;
  return;
}


// ==== 10102e14 thunk_FUN_101216e0 thunk -> 101216e0

// ==== 10102e19 FCoords::operator*

/* public: class FCoords __thiscall FCoords::operator*(class FVector const &)const  */

void __thiscall FCoords::operator*(FCoords *this,FVector *param_1)

{
  int iVar1;
  float *pfVar2;
  float *in_stack_00000008;
  float afStack_30 [12];
  
  pfVar2 = afStack_30;
                    /* 0x2e19  602  ??DFCoords@@QBE?AV0@ABVFVector@@@Z */
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *(float *)this;
    this = this + 4;
    pfVar2 = pfVar2 + 1;
  }
  afStack_30[0] = afStack_30[0] - *in_stack_00000008;
  afStack_30[1] = afStack_30[1] - in_stack_00000008[1];
  afStack_30[2] = afStack_30[2] - in_stack_00000008[2];
  pfVar2 = afStack_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(float *)param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 10102e1e FBitReader::SerializeBits

/* public: virtual void __thiscall FBitReader::SerializeBits(void *,int) */

void __thiscall FBitReader::SerializeBits(FBitReader *this,void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x2e1e  1831  ?SerializeBits@FBitReader@@UAEXPAXH@Z */
  uVar1 = param_2 + 7 >> 3;
  uVar2 = uVar1 & 3;
  puVar3 = param_1;
  for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  uVar1 = *(uint *)(this + 0x48);
  if (*(int *)(this + 0x44) < (int)(uVar1 + param_2)) {
    *(undefined4 *)(this + 0x2c) = 1;
    return;
  }
  if (param_2 != 1) {
    thunk_FUN_1012e300(param_1,0,*(undefined4 *)(this + 0x38),uVar1,param_2);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + param_2;
    return;
  }
  if (((&DAT_102387e4)[uVar1 & 7] & *(byte *)(((int)uVar1 >> 3) + *(int *)(this + 0x38))) != 0) {
    *(byte *)param_1 = *(byte *)param_1 | 1;
  }
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  return;
}


// ==== 10102e23 appSprintf

/* int __cdecl appSprintf(unsigned short *,unsigned short const *,...) */

int __cdecl appSprintf(ushort *param_1,ushort *param_2,...)

{
  int iVar1;
  
                    /* 0x2e23  2100  ?appSprintf@@YAHPAGPBGZZ */
  iVar1 = __vsnwprintf((wchar_t *)param_1,0x400,(wchar_t *)param_2,&stack0x0000000c);
  return iVar1;
}


// ==== 10102e2d appStrcmp

/* int __cdecl appStrcmp(unsigned short const *,unsigned short const *) */

int __cdecl appStrcmp(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  
  while( true ) {
    uVar1 = *param_1;
    bVar2 = uVar1 < *param_2;
    if (uVar1 != *param_2) break;
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = param_1[1];
    bVar2 = uVar1 < param_2[1];
    if (uVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}


// ==== 10102e32 UStructProperty::Identical

/* public: virtual int __thiscall UStructProperty::Identical(void const *,void const *)const  */

int __thiscall UStructProperty::Identical(UStructProperty *this,void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
                    /* 0x2e32  1440  ?Identical@UStructProperty@@UBEHPBX0@Z */
  if (*(int *)(this + 0x78) == 0) {
    piStack_4 = (int *)0x0;
  }
  else {
    piStack_4 = *(int **)(*(int *)(this + 0x78) + 0x48);
  }
  thunk_FUN_10114340();
  do {
    if (piStack_4 == (int *)0x0) {
      return 1;
    }
    iVar3 = 0;
    if (0 < piStack_4[0x10]) {
      do {
        iVar1 = piStack_4[0x11] * iVar3 + piStack_4[0x15];
        if (param_2 == (void *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar1 + (int)param_2;
        }
        iVar1 = (**(code **)(*piStack_4 + 0x84))(iVar1 + (int)param_1,iVar2);
        if (iVar1 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < piStack_4[0x10]);
    }
    piStack_4 = (int *)piStack_4[0xe];
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10102e37 UClassProperty::UClassProperty

/* public: __thiscall UClassProperty::UClassProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long,class UClass *) */

UClassProperty * __thiscall
UClassProperty::UClassProperty
          (UClassProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4,
          UClass *param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2e37  197  ??0UClassProperty@@QAE@W4ECppProperty@@HPBGKPAVUClass@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObjectProperty::UObjectProperty
            ((UObjectProperty *)this,0,param_2,param_3,param_4,&UClass::PrivateStaticClass);
  *(undefined ***)this = vftable;
  *(UClass **)(this + 0x7c) = param_5;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102e3c ULinkerLoad::DetachAllLazyLoaders

/* private: void __thiscall ULinkerLoad::DetachAllLazyLoaders(int) */

void __thiscall ULinkerLoad::DetachAllLazyLoaders(ULinkerLoad *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2e3c  931  ?DetachAllLazyLoaders@ULinkerLoad@@AAEXH@Z */
  puStack_c = &LAB_101bb790;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x504); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(this + 0x500) + iVar2 * 4);
    if (param_1 != 0) {
      (**(code **)*puVar1)();
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  thunk_FUN_1011a670(0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102e41 thunk_FUN_10130f30 thunk -> 10130f30

// ==== 10102e46 UObject::execGetStateName

/* public: void __thiscall UObject::execGetStateName(struct FFrame &,void * const) */

void __thiscall UObject::execGetStateName(UObject *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  
                    /* 0x2e46  2232  ?execGetStateName@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((*(int *)(this + 0xc) != 0) && (iVar1 = *(int *)(*(int *)(this + 0xc) + 0x1c), iVar1 != 0)) {
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x20);
    return;
  }
  *(undefined4 *)param_2 = 0;
  return;
}


// ==== 10102e4b UObject::execSaveConfig

/* public: void __thiscall UObject::execSaveConfig(struct FFrame &,void * const) */

void __thiscall UObject::execSaveConfig(UObject *this,FFrame *param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2e4b  2362  ?execSaveConfig@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baa90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  SaveConfig(this,0x4000,(ushort *)0x0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102e50 FDummyCodec::FDummyCodec

/* public: __thiscall FDummyCodec::FDummyCodec(class FDummyCodec const &) */

void __thiscall FDummyCodec::FDummyCodec(FDummyCodec *this,FDummyCodec *param_1)

{
                    /* 0x2e50  38  ??0FDummyCodec@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10102e55 UClass::PostLoad

/* public: virtual void __thiscall UClass::PostLoad(void) */

void __thiscall UClass::PostLoad(UClass *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2e55  1686  ?PostLoad@UClass@@UAEXXZ */
  puStack_c = &LAB_101b9f40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x4bc) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("ClassWithin",".\\UnClass.cpp",0x3a8);
  }
  UStruct::PostLoad((UStruct *)this);
  if (*(UObject **)(this + 0x34) != (UObject *)0x0) {
    UObject::ConditionalPostLoad(*(UObject **)(this + 0x34));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102e5a thunk_FUN_101344d0 thunk -> 101344d0

// ==== 10102e5f thunk_FUN_1011d4b0 thunk -> 1011d4b0

// ==== 10102e64 FQuat::operator=

/* public: class FQuat & __thiscall FQuat::operator=(class FQuat const &) */

FQuat * __thiscall FQuat::operator=(FQuat *this,FQuat *param_1)

{
                    /* 0x2e64  481  ??4FQuat@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 10102e69 FArchive::AttachLazyLoader

/* public: virtual void __thiscall FArchive::AttachLazyLoader(class FLazyLoader *) */

void __thiscall FArchive::AttachLazyLoader(FArchive *this,FLazyLoader *param_1)

{
                    /* 0x2e69  808  ?AttachLazyLoader@FArchive@@UAEXPAVFLazyLoader@@@Z */
  return;
}


// ==== 10102e6e appMD5Update

/* void __cdecl appMD5Update(struct FMD5Context *,unsigned char *,int) */

void __cdecl appMD5Update(FMD5Context *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  size_t _Size;
  int iVar3;
  
                    /* 0x2e6e  2075  ?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */
  uVar1 = *(uint *)(param_1 + 0x10) + param_3 * 8;
  uVar2 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (uVar1 < (uint)(param_3 * 8)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ((uint)param_3 >> 0x1d);
  _Size = -uVar2 + 0x40;
  if (param_3 < (int)_Size) {
    _Size = 0;
  }
  else {
    _memcpy(param_1 + uVar2 + 0x18,param_2,_Size);
    appMD5Transform((ulong *)param_1,(uchar *)(param_1 + 0x18));
    for (iVar3 = -uVar2 + 0x7f; iVar3 < param_3; iVar3 = iVar3 + 0x40) {
      appMD5Transform((ulong *)param_1,param_2 + iVar3 + -0x3f);
      _Size = _Size + 0x40;
    }
    uVar2 = 0;
  }
  _memcpy(param_1 + uVar2 + 0x18,param_2 + _Size,param_3 - _Size);
  return;
}


// ==== 10102e73 UNameProperty::~UNameProperty

/* public: virtual __thiscall UNameProperty::~UNameProperty(void) */

void __thiscall UNameProperty::~UNameProperty(UNameProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2e73  337  ??1UNameProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7c58;
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


// ==== 10102e7d thunk_FUN_1015bde0 thunk -> 1015bde0

// ==== 10102e82 UState::operator_new

/* public: static void * __cdecl UState::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UState::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x2e82  409  ??2UState@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10102e8c thunk_FUN_1015ad70 thunk -> 1015ad70

// ==== 10102e91 UTextBuffer::operator_new

/* public: static void * __cdecl UTextBuffer::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UTextBuffer::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x2e91  421  ??2UTextBuffer@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10102e96 FVector::GridSnap

/* public: class FVector __thiscall FVector::GridSnap(class FVector const &) */

void __thiscall FVector::GridSnap(FVector *this,FVector *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 *in_stack_00000008;
  
                    /* 0x2e96  1423  ?GridSnap@FVector@@QAE?AV1@ABV1@@Z */
  fVar1 = (float10)thunk_FUN_1010c390(*(undefined4 *)this,*in_stack_00000008);
  fVar2 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 4),in_stack_00000008[1]);
  fVar3 = (float10)thunk_FUN_1010c390(*(undefined4 *)(this + 8),in_stack_00000008[2]);
  *(float *)param_1 = (float)fVar1;
  *(float *)(param_1 + 4) = (float)fVar2;
  *(float *)(param_1 + 8) = (float)fVar3;
  return;
}


// ==== 10102e9b FVector::SizeSquared2D

/* public: float __thiscall FVector::SizeSquared2D(void)const  */

float __thiscall FVector::SizeSquared2D(FVector *this)

{
                    /* 0x2e9b  1880  ?SizeSquared2D@FVector@@QBEMXZ */
  return *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
}


// ==== 10102ea0 FPlane::operator-

/* public: class FPlane __thiscall FPlane::operator-(class FPlane const &)const  */

void __thiscall FPlane::operator-(FPlane *this,FPlane *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x2ea0  619  ??GFPlane@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *(float *)this - *in_stack_00000008;
  *(float *)(param_1 + 4) = *(float *)(this + 4) - in_stack_00000008[1];
  *(float *)(param_1 + 8) = *(float *)(this + 8) - in_stack_00000008[2];
  *(float *)(param_1 + 0xc) = *(float *)(this + 0xc) - in_stack_00000008[3];
  return;
}


// ==== 10102ea5 FFeedbackContext::MapCheck_Hide

/* public: virtual void __thiscall FFeedbackContext::MapCheck_Hide(void) */

void __thiscall FFeedbackContext::MapCheck_Hide(FFeedbackContext *this)

{
                    /* 0x2ea5  1604  ?MapCheck_Hide@FFeedbackContext@@UAEXXZ */
  return;
}


// ==== 10102eaa appPackage

/* unsigned short const * __cdecl appPackage(void) */

ushort * __cdecl appPackage(void)

{
  ushort *puVar1;
  LPWSTR lpWideCharStr;
  WCHAR aWStack_320 [256];
  CHAR aCStack_120 [268];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2eaa  2083  ?appPackage@@YAPBGXZ */
  puStack_c = &LAB_101be460;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffcd4;
  uStack_8 = 0;
  if (DAT_1033dbd0 == 0) {
    lpWideCharStr = aWStack_320;
    if ((GUnicode == 0) || (GUnicodeOS != 0)) {
      ExceptionList = &pvStack_10;
      GetModuleFileNameW((HMODULE)0x0,aWStack_320,0x100);
    }
    else {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffcd4;
      GetModuleFileNameA((HMODULE)0x0,aCStack_120,0x100);
      MultiByteToWideChar(0,0,aCStack_120,-1,lpWideCharStr,0x100);
    }
    while( true ) {
      puVar1 = appStrchr((ushort *)lpWideCharStr,0x5c);
      if (puVar1 == (ushort *)0x0) break;
      puVar1 = appStrchr((ushort *)lpWideCharStr,0x5c);
      lpWideCharStr = (LPWSTR)(puVar1 + 1);
    }
    while( true ) {
      puVar1 = appStrchr((ushort *)lpWideCharStr,0x2f);
      if (puVar1 == (ushort *)0x0) break;
      puVar1 = appStrchr((ushort *)lpWideCharStr,0x2f);
      lpWideCharStr = (LPWSTR)(puVar1 + 1);
    }
    puVar1 = appStrchr((ushort *)lpWideCharStr,0x2e);
    if (puVar1 != (ushort *)0x0) {
      puVar1 = appStrchr((ushort *)lpWideCharStr,0x2e);
      *puVar1 = 0;
    }
    appStrcpy((ushort *)&DAT_1033dbd0,(ushort *)lpWideCharStr);
  }
  ExceptionList = pvStack_10;
  return (ushort *)&DAT_1033dbd0;
}


// ==== 10102eaf UObject::execSquare

/* public: void __thiscall UObject::execSquare(struct FFrame &,void * const) */

void __thiscall UObject::execSquare(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2eaf  2368  ?execSquare@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = (float)&uStack_4 * (float)&uStack_4;
  return;
}


// ==== 10102eb4 thunk_FUN_1012a9f0 thunk -> 1012a9f0

// ==== 10102eb9 UPackageMap::Serialize

/* public: virtual void __thiscall UPackageMap::Serialize(class FArchive &) */

void __thiscall UPackageMap::Serialize(UPackageMap *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2eb9  1821  ?Serialize@UPackageMap@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101ba9f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObject::Serialize((UObject *)this,param_1);
  uVar1 = thunk_FUN_101385b0(param_1,this + 0x34,this + 0x40,this + 0x54);
  uVar1 = thunk_FUN_10138180(uVar1);
  thunk_FUN_10138270(uVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102ebe UObject::ConditionalPostLoad

/* public: void __thiscall UObject::ConditionalPostLoad(void) */

void __thiscall UObject::ConditionalPostLoad(UObject *this)

{
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2ebe  858  ?ConditionalPostLoad@UObject@@QAEXXZ */
  puStack_c = &LAB_101bcbe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((*(uint *)(this + 0x1c) & 0x1000000) != 0) {
    ExceptionList = &pvStack_10;
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xdeffffff;
    (**(code **)(*(int *)this + 0x24))();
    if ((*(uint *)(this + 0x1c) & 0x20000000) == 0) {
      GetFullName(this,(ushort *)0x0);
      FOutputDevice::Logf(this_00,(ushort *)GError);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102ec3 UClassProperty::InternalConstructor

/* public: static void __cdecl UClassProperty::InternalConstructor(void *) */

void __cdecl UClassProperty::InternalConstructor(void *param_1)

{
                    /* 0x2ec3  1479  ?InternalConstructor@UClassProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UClassProperty(param_1);
    return;
  }
  return;
}


// ==== 10102ec8 FRangeVector::operator*=

/* public: class FRangeVector __thiscall FRangeVector::operator*=(class FRangeVector const &) */

void __thiscall FRangeVector::operator*=(FRangeVector *this,FRangeVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x2ec8  668  ??XFRangeVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = in_stack_00000008[1] * *(float *)(this + 4);
  *(float *)(this + 8) = in_stack_00000008[2] * *(float *)(this + 8);
  *(float *)(this + 0xc) = in_stack_00000008[3] * *(float *)(this + 0xc);
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * in_stack_00000008[4];
  *(float *)(this + 0x14) = in_stack_00000008[5] * *(float *)(this + 0x14);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


// ==== 10102ecd FString::Locs

/* public: class FString __thiscall FString::Locs(void)const  */

FString * __thiscall FString::Locs(FString *this)

{
  short *psVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  FString *in_stack_00000004;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2ecd  1591  ?Locs@FString@@QBE?AV1@XZ */
  puStack_8 = &LAB_101b7149;
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
      if ((ushort)(sVar2 - 0x41U) < 0x1a) {
        sVar2 = sVar2 + 0x20;
      }
      iVar4 = iVar4 + 1;
      *psVar1 = sVar2;
    } while (iVar4 < *(int *)(this + 4));
  }
  ExceptionList = pvStack_c;
  return in_stack_00000004;
}


// ==== 10102ed2 FArchive::IsSaving

/* public: int __thiscall FArchive::IsSaving(void) */

int __thiscall FArchive::IsSaving(FArchive *this)

{
                    /* 0x2ed2  1528  ?IsSaving@FArchive@@QAEHXZ */
  return *(int *)(this + 0x14);
}


// ==== 10102ed7 UObject::execByteToString

/* public: void __thiscall UObject::execByteToString(struct FFrame &,void * const) */

void __thiscall UObject::execByteToString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  uint unaff_ESI;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2ed7  2167  ?execByteToString@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb350;
  pvStack_c = ExceptionList;
  uStack_1c = (uint)(uint3)uStack_1c;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,(int)&uStack_1c + 3);
  pFVar3 = (FArray *)FString::Printf((ushort *)&stack0xffffffe0,&DAT_101d3d60,unaff_ESI >> 0x18);
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


// ==== 10102ee1 UFunction::InternalConstructor

/* public: static void __cdecl UFunction::InternalConstructor(void *) */

void __cdecl UFunction::InternalConstructor(void *param_1)

{
                    /* 0x2ee1  1486  ?InternalConstructor@UFunction@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UFunction(param_1);
    return;
  }
  return;
}


// ==== 10102ee6 UParamStack::~UParamStack

/* public: virtual __thiscall UParamStack::~UParamStack(void) */

void __thiscall UParamStack::~UParamStack(UParamStack *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2ee6  343  ??1UParamStack@@UAE@XZ */
  puStack_8 = &LAB_101b68b8;
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


// ==== 10102eeb winToOEM

/* char * __cdecl winToOEM(char *,unsigned short const *,int) */

char * __cdecl winToOEM(char *param_1,ushort *param_2,int param_3)

{
                    /* 0x2eeb  2417  ?winToOEM@@YAPADPADPBGH@Z */
  WideCharToMultiByte(1,0,(LPCWSTR)param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
  return param_1;
}


// ==== 10102ef0 thunk_FUN_10165350 thunk -> 10165350

// ==== 10102ef5 UObject::execSelf

/* public: void __thiscall UObject::execSelf(struct FFrame &,void * const) */

void __thiscall UObject::execSelf(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x2ef5  2363  ?execSelf@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(UObject **)param_2 = this;
  return;
}


// ==== 10102efa thunk_FUN_101329d0 thunk -> 101329d0

// ==== 10102eff thunk_FUN_1012b6f0 thunk -> 1012b6f0

// ==== 10102f04 appCreateTempFilename

/* void __cdecl appCreateTempFilename(unsigned short const *,unsigned short *) */

void __cdecl appCreateTempFilename(ushort *param_1,ushort *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2f04  2033  ?appCreateTempFilename@@YAXPBGPAG@Z */
  puStack_c = &LAB_101bc120;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  do {
    iVar1 = DAT_10323ad0;
    DAT_10323ad0 = DAT_10323ad0 + 1;
    appSprintf(param_2,(ushort *)L"%s%04X.tmp",param_1,iVar1);
    iVar1 = (**(code **)(*(int *)GFileManager + 0x10))(param_2);
  } while (0 < iVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102f09 appSaveArrayToFile

/* int __cdecl appSaveArrayToFile(class TArray<unsigned char> const &,unsigned short const *,class
   FFileManager *) */

int __cdecl appSaveArrayToFile(TArray<unsigned_char> *param_1,ushort *param_2,FFileManager *param_3)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2f09  2093  ?appSaveArrayToFile@@YAHABV?$TArray@E@@PBGPAVFFileManager@@@Z
                        */
  puStack_c = &LAB_101bc110;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)(**(code **)(*(int *)param_3 + 0xc))(param_2,0,GNull);
  if (piVar1 == (int *)0x0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  (**(code **)(*piVar1 + 4))(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  (**(code **)*piVar1)(1);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10102f0e thunk_FUN_10129d30 thunk -> 10129d30

// ==== 10102f13 UNameProperty::UNameProperty

/* public: __thiscall UNameProperty::UNameProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UNameProperty * __thiscall
UNameProperty::UNameProperty
          (UNameProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2f13  245  ??0UNameProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102f18 UBoolProperty::UBoolProperty

/* public: __thiscall UBoolProperty::UBoolProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UBoolProperty * __thiscall
UBoolProperty::UBoolProperty
          (UBoolProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2f18  186  ??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x78) = 1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10102f1d thunk_FUN_10149440 thunk -> 10149440

// ==== 10102f22 FString::operator+

/* public: class FString __thiscall FString::operator+(class FString const &) */

FString * __thiscall FString::operator+(FString *this,FString *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2f22  641  ??HFString@@QAE?AV0@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7049;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator+(this,(ushort *)param_1);
  ExceptionList = (void *)0x0;
  return param_1;
}


// ==== 10102f27 appStrncat

/* unsigned short * __cdecl appStrncat(unsigned short *,unsigned short const *,int) */

ushort * __cdecl appStrncat(ushort *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2f27  2113  ?appStrncat@@YAPAGPAGPBGH@Z */
  puStack_c = &LAB_101b9bc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = appStrlen(param_1);
  iVar2 = param_3 - iVar1;
  if (0 < iVar2) {
    appStrncpy(param_1 + iVar1,param_2,iVar2);
    (param_1 + iVar1)[iVar2 + -1] = 0;
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10102f2c USystem::operator_new

/* public: static void * __cdecl USystem::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
USystem::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x2f2c  419  ??2USystem@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10102f31 FPackageFileSummary::operator=

/* public: struct FPackageFileSummary & __thiscall FPackageFileSummary::operator=(struct
   FPackageFileSummary const &) */

FPackageFileSummary * __thiscall
FPackageFileSummary::operator=(FPackageFileSummary *this,FPackageFileSummary *param_1)

{
                    /* 0x2f31  476  ??4FPackageFileSummary@@QAEAAU0@ABU0@@Z */
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
  thunk_FUN_10119480(param_1 + 0x34);
  return this;
}


// ==== 10102f36 UObject::execIsInState

/* public: void __thiscall UObject::execIsInState(struct FFrame &,void * const) */

void __thiscall UObject::execIsInState(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2f36  2278  ?execIsInState@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(int *)(this + 0xc) != 0) {
    for (iVar2 = *(int *)(*(int *)(this + 0xc) + 0x1c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x34))
    {
      if (*(int *)(iVar2 + 0x20) == unaff_EDI) {
        *unaff_retaddr = 1;
        return;
      }
    }
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 10102f3b FVector::operator*=

/* public: class FVector __thiscall FVector::operator*=(float) */

void __thiscall FVector::operator*=(FVector *this,float param_1)

{
  undefined4 uVar1;
  float in_stack_00000008;
  
                    /* 0x2f3b  674  ??XFVector@@QAE?AV0@M@Z */
  *(float *)this = in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = *(float *)(this + 4) * in_stack_00000008;
  *(float *)(this + 8) = in_stack_00000008 * *(float *)(this + 8);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = uVar1;
  return;
}


// ==== 10102f40 FCoords::ApplyPivotWithoutScale

/* public: class FCoords __thiscall FCoords::ApplyPivotWithoutScale(class FCoords const &)const  */

FCoords * __thiscall FCoords::ApplyPivotWithoutScale(FCoords *this,FCoords *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float *in_stack_00000008;
  float *pfVar3;
  undefined1 *puVar4;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
                    /* 0x2f40  802  ?ApplyPivotWithoutScale@FCoords@@QBE?AV1@ABV1@@Z */
  thunk_FUN_1010f5b0();
  fVar1 = *in_stack_00000008 + fStack_18;
  fStack_20 = in_stack_00000008[1] + fStack_14;
  fStack_1c = in_stack_00000008[2];
  *(float *)param_1 = fVar1;
  fStack_1c = fStack_1c + fStack_10;
  *(float *)(param_1 + 4) = fStack_20;
  *(float *)(param_1 + 8) = fStack_1c;
  fStack_18 = in_stack_00000008[3];
  fStack_14 = in_stack_00000008[4];
  fStack_10 = in_stack_00000008[5];
  puVar4 = auStack_c;
  uVar2 = FVector::GetNormalized((FVector *)&fStack_18);
  thunk_FUN_1010f5b0(this,uVar2,&stack0xffffffd8,puVar4);
  *(undefined4 *)(param_1 + 0xc) = unaff_EBX;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fStack_20;
  fStack_1c = in_stack_00000008[6];
  fStack_18 = in_stack_00000008[7];
  fStack_14 = in_stack_00000008[8];
  pfVar3 = &fStack_10;
  uVar2 = FVector::GetNormalized((FVector *)&fStack_1c);
  thunk_FUN_1010f5b0(this,uVar2,&stack0xffffffd4,pfVar3);
  *(undefined4 *)(param_1 + 0x18) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x1c) = unaff_EBX;
  *(float *)(param_1 + 0x20) = fVar1;
  fStack_20 = in_stack_00000008[9];
  fStack_18 = in_stack_00000008[0xb];
  fStack_1c = in_stack_00000008[10];
  pfVar3 = &fStack_14;
  uVar2 = FVector::GetNormalized((FVector *)&fStack_20);
  thunk_FUN_1010f5b0(this,uVar2,&stack0xffffffd0,pfVar3);
  *(undefined4 *)(param_1 + 0x24) = unaff_EDI;
  *(undefined4 *)(param_1 + 0x28) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x2c) = unaff_EBX;
  return param_1;
}


// ==== 10102f4a thunk_FUN_10108900 thunk -> 10108900

// ==== 10102f4f UObject::QueryInterface

/* public: virtual unsigned long __stdcall UObject::QueryInterface(class FGuid const &,void * *) */

ulong UObject::QueryInterface(FGuid *param_1,void **param_2)

{
  undefined4 *in_stack_0000000c;
  
                    /* 0x2f4f  1743  ?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
  *in_stack_0000000c = 0;
  return 0;
}


// ==== 10102f54 thunk_FUN_1011f740 thunk -> 1011f740

// ==== 10102f59 thunk_FUN_10138060 thunk -> 10138060

// ==== 10102f5e thunk_FUN_10120cf0 thunk -> 10120cf0

// ==== 10102f63 UObject::execAddEqual_VectorVector

/* public: void __thiscall UObject::execAddEqual_VectorVector(struct FFrame &,void * const) */

void __thiscall UObject::execAddEqual_VectorVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float unaff_EDI;
  float *pfVar2;
  float afStack_14 [2];
  undefined1 auStack_c [4];
  float *pfStack_8;
  
                    /* 0x2f63  2145  ?execAddEqual_VectorVector@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *pfVar2 = *pfVar2 + (float)param_1;
  pfVar2[1] = (float)auStack_c + pfVar2[1];
  pfVar2[2] = pfVar2[2] + unaff_EDI;
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 10102f68 FBitWriterMark::Pop

/* public: void __thiscall FBitWriterMark::Pop(struct FBitWriter &) */

void __thiscall FBitWriterMark::Pop(FBitWriterMark *this,FBitWriter *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
                    /* 0x2f68  1682  ?Pop@FBitWriterMark@@QAEXAAUFBitWriter@@@Z */
  if (((byte)this[4] & 7) != 0) {
    pbVar2 = (byte *)(((int)*(uint *)(this + 4) >> 3) + *(int *)(param_1 + 0x38));
    *pbVar2 = *pbVar2 & (&DAT_102387ec)[*(uint *)(this + 4) & 7];
  }
  iVar1 = *(int *)(this + 4) + 7 >> 3;
  uVar3 = (*(int *)(param_1 + 0x44) + 7 >> 3) - iVar1;
  uVar4 = uVar3 & 3;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x38) + iVar1);
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(this + 4);
  return;
}


// ==== 10102f6d UClass::GetNameCPP

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual unsigned short * __thiscall UClass::GetNameCPP(void) */

ushort * __thiscall UClass::GetNameCPP(UClass *this)

{
  UClass *pUVar1;
  ushort *puVar2;
  int iVar3;
  undefined *puVar4;
  
                    /* 0x2f6d  1359  ?GetNameCPP@UClass@@UAEPAGXZ */
  puVar2 = appStaticString1024();
  pUVar1 = this;
  do {
    if (pUVar1 == (UClass *)0x0) {
      puVar4 = &DAT_101ce1bc;
LAB_10115a6f:
      appSprintf(puVar2,(ushort *)L"%s%s",puVar4,*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc)
      ;
      return puVar2;
    }
    iVar3 = appStricmp((ushort *)(*(int *)(_Names + *(int *)(pUVar1 + 0x20) * 4) + 0xc),
                       (ushort *)L"Actor");
    if (iVar3 == 0) {
      puVar4 = &DAT_101ce1ac;
      goto LAB_10115a6f;
    }
    pUVar1 = *(UClass **)(pUVar1 + 0x34);
  } while( true );
}


// ==== 10102f72 UFunction::GetOuterUState

/* public: class UState * __thiscall UFunction::GetOuterUState(void)const  */

UState * __thiscall UFunction::GetOuterUState(UFunction *this)

{
                    /* 0x2f72  1376  ?GetOuterUState@UFunction@@QBEPAVUState@@XZ */
  return *(UState **)(this + 0x18);
}


// ==== 10102f77 thunk_FUN_10122ee0 thunk -> 10122ee0

// ==== 10102f81 FRangeVector::operator+=

/* public: class FRangeVector __thiscall FRangeVector::operator+=(class FVector const &) */

void __thiscall FRangeVector::operator+=(FRangeVector *this,FVector *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *in_stack_00000008;
  
                    /* 0x2f81  682  ??YFRangeVector@@QAE?AV0@ABVFVector@@@Z */
  fVar1 = *in_stack_00000008;
  *(float *)this = fVar1 + *(float *)this;
  *(float *)(this + 4) = fVar1 + *(float *)(this + 4);
  fVar1 = in_stack_00000008[1];
  *(float *)(this + 8) = fVar1 + *(float *)(this + 8);
  *(float *)(this + 0xc) = fVar1 + *(float *)(this + 0xc);
  fVar1 = in_stack_00000008[2];
  *(float *)(this + 0x10) = fVar1 + *(float *)(this + 0x10);
  *(float *)(this + 0x14) = fVar1 + *(float *)(this + 0x14);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


// ==== 10102f86 UFloatProperty::operator_new

/* public: static void * __cdecl UFloatProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UFloatProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2f86  380  ??2UFloatProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102f90 FBlowFish::BlowfishEncrypt

/* public: void __thiscall FBlowFish::BlowfishEncrypt(unsigned char *,int) */

void __thiscall FBlowFish::BlowfishEncrypt(FBlowFish *this,uchar *param_1,int param_2)

{
  FBlowFish *extraout_ECX;
  int iVar1;
  
                    /* 0x2f90  820  ?BlowfishEncrypt@FBlowFish@@QAEXPAEH@Z */
  iVar1 = param_2 >> 3;
  if (0 < iVar1) {
    do {
      Blowfish_encipher(this,(ulong *)param_1,(ulong *)((int)param_1 + 4));
      param_1 = (uchar *)((int)param_1 + 8);
      iVar1 = iVar1 + -1;
      this = extraout_ECX;
    } while (iVar1 != 0);
  }
  return;
}


// ==== 10102f95 FString::Left

/* public: class FString __thiscall FString::Left(int)const  */

int __thiscall FString::Left(FString *this,int param_1)

{
  int iVar1;
  ushort *puVar2;
  int in_stack_00000008;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2f95  1546  ?Left@FString@@QBE?AV1@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8419;
  pvStack_c = ExceptionList;
  if (*(int *)(this + 4) == 0) {
    puVar2 = &DAT_101cdd44;
    iVar1 = 0;
  }
  else {
    puVar2 = *(ushort **)this;
    iVar1 = *(int *)(this + 4) + -1;
  }
  if (in_stack_00000008 < 0) {
    iVar1 = 0;
  }
  else if (in_stack_00000008 < iVar1) {
    iVar1 = in_stack_00000008;
  }
  ExceptionList = &pvStack_c;
  FString((FString *)param_1,iVar1,puVar2);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 10102f9a ULinkerLoad::operator_new

/* public: static void * __cdecl ULinkerLoad::operator new(unsigned int,enum EInternal *) */

void * __cdecl ULinkerLoad::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x2f9a  390  ??2ULinkerLoad@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10102f9f FMemStack::Tick

/* public: void __thiscall FMemStack::Tick(void) */

void __thiscall FMemStack::Tick(FMemStack *this)

{
  int iVar1;
  
                    /* 0x2f9f  1961  ?Tick@FMemStack@@QAEXXZ */
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  FMemStackFrame::Tick((FMemStackFrame *)(this + iVar1 * 0x10));
  return;
}


// ==== 10102fa9 FString::SplitIntoArray

/* public: int __thiscall FString::SplitIntoArray(unsigned short const *,class TArray<class FString>
   *) */

int __thiscall FString::SplitIntoArray(FString *this,ushort *param_1,TArray<FString> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FString aFStack_34 [12];
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2fa9  1885  ?SplitIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */
  puStack_c = &LAB_101b8500;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc0;
  if (param_2 == (TArray<FString> *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("InArray","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                  0x629);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FString(aFStack_28,this);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar2 = appStrlen(param_1);
  while (iVar3 = InStr(aFStack_28,param_1,0), -1 < iVar3) {
    iVar4 = thunk_FUN_101146f0(0xc,param_2);
    if (iVar4 != 0) {
      Left(aFStack_28,iVar4);
    }
    pFVar5 = (FString *)Mid(aFStack_28,(int)aFStack_34,iVar3 + iVar2);
    uStack_8._0_1_ = 2;
    operator=(aFStack_28,pFVar5);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    ~FString(aFStack_34);
  }
  pFVar5 = (FString *)thunk_FUN_101146f0(0xc,param_2);
  if (pFVar5 != (FString *)0x0) {
    FString(pFVar5,aFStack_28);
  }
  iVar2 = *(int *)(param_2 + 4);
  uStack_8 = uStack_8 & 0xffffff00;
  ~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return iVar2;
}


// ==== 10102fb3 UStructProperty::operator=

/* public: class UStructProperty & __thiscall UStructProperty::operator=(class UStructProperty const
   &) */

UStructProperty * __thiscall
UStructProperty::operator=(UStructProperty *this,UStructProperty *param_1)

{
                    /* 0x2fb3  542  ??4UStructProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 10102fb8 thunk_FUN_10155540 thunk -> 10155540

// ==== 10102fbd L2ThreadInterface::operator=

/* public: class L2ThreadInterface & __thiscall L2ThreadInterface::operator=(class L2ThreadInterface
   const &) */

L2ThreadInterface * __thiscall
L2ThreadInterface::operator=(L2ThreadInterface *this,L2ThreadInterface *param_1)

{
                    /* 0x2fbd  508  ??4L2ThreadInterface@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 10102fc2 UObject::ResolveName

/* protected: static int __cdecl UObject::ResolveName(class UObject * &,unsigned short const *
   &,int,int) */

int __cdecl UObject::ResolveName(UObject **param_1,ushort **param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  UPackage *pUVar6;
  wchar_t *pwVar7;
  ushort auStack_224 [260];
  ushort *puStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2fc2  1772  ?ResolveName@UObject@@KAHAAPAV1@AAPBGHH@Z */
  puStack_c = &LAB_101bd780;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xfffffdd0;
  if (*param_2 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("InName",".\\UnObj.cpp",0xa92);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  iVar2 = appStrnicmp(*param_2,(ushort *)L"ini:",4);
  iVar3 = appStrnicmp(*param_2,(ushort *)L"usr:",4);
  if ((((iVar2 == 0) || (iVar3 == 0)) && (iVar3 = appStrlen(*param_2), iVar3 < 0x400)) &&
     (puVar4 = appStrstr(*param_2,(ushort *)&DAT_101daa0c), puVar4 != (ushort *)0x0)) {
    appStrcpy(auStack_224,*param_2 + 4);
    puVar4 = auStack_224;
    while (puVar5 = appStrstr(puVar4,(ushort *)&DAT_101daa10), puVar5 != (ushort *)0x0) {
      puVar4 = appStrstr(puVar4,(ushort *)&DAT_101daa14);
      puVar4 = puVar4 + 1;
    }
    if (puVar4 == auStack_224) {
      appFailAssert("Key!=Section",".\\UnObj.cpp",0xa9f);
    }
    puVar4[-1] = 0;
    puStack_1c = appStaticString1024();
    pwVar7 = L"System";
    if (iVar2 != 0) {
      pwVar7 = L"User";
    }
    iVar2 = (**(code **)(*(int *)GConfig + 0x10))(auStack_224,puVar4,puStack_1c,0x400,pwVar7);
    if (iVar2 == 0) {
      if (param_4 != 0) {
        puVar4 = *param_2;
        puVar5 = LocalizeError((ushort *)L"ConfigNotFound",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar5,puVar4);
      }
      ExceptionList = pvStack_10;
      return 0;
    }
    *param_2 = puStack_1c;
  }
  do {
    puVar4 = appStrstr(*param_2,(ushort *)&DAT_101daa7c);
    if (puVar4 == (ushort *)0x0) {
      ExceptionList = pvStack_10;
      return 1;
    }
    appStrcpy(auStack_224,*param_2);
    puVar4 = appStrstr(auStack_224,(ushort *)&DAT_101daa80);
    *puVar4 = 0;
    if (param_3 == 0) {
      pUVar6 = (UPackage *)thunk_FUN_101495d0(*param_1,auStack_224,0);
      if ((pUVar6 == (UPackage *)0x0) &&
         (pUVar6 = (UPackage *)thunk_FUN_1015c210(*param_1,auStack_224,0), pUVar6 == (UPackage *)0x0
         )) {
        ExceptionList = pvStack_10;
        return 0;
      }
    }
    else {
      pUVar6 = CreatePackage(*param_1,auStack_224);
    }
    *param_1 = (UObject *)pUVar6;
    puVar4 = appStrstr(*param_2,(ushort *)&DAT_101daa84);
    *param_2 = puVar4 + 1;
  } while( true );
}


// ==== 10102fc7 UObject::execSubtract_PreFloat

/* public: void __thiscall UObject::execSubtract_PreFloat(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_PreFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2fc7  2392  ?execSubtract_PreFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -(float)&uStack_4;
  return;
}


// ==== 10102fcc UObject::Modify

/* public: virtual void __thiscall UObject::Modify(void) */

void __thiscall UObject::Modify(UObject *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2fcc  1623  ?Modify@UObject@@UAEXXZ */
  puStack_c = &LAB_101bcbf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((GUndo != (FTransactionBase *)0x0) && (((byte)this[0x1c] & 1) != 0)) {
    ExceptionList = &pvStack_10;
    (*(code *)**(undefined4 **)GUndo)(this);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102fd1 thunk_FUN_10164220 thunk -> 10164220

// ==== 10102fd6 appUpdateFileModTime

/* int __cdecl appUpdateFileModTime(unsigned short *) */

int __cdecl appUpdateFileModTime(ushort *param_1)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2fd6  2130  ?appUpdateFileModTime@@YAHPAG@Z */
  puStack_c = &LAB_101bc100;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)(**(code **)(*(int *)GFileManager + 0xc))(param_1,0x10,GNull);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10102fdb UPackageMap::GetClassNetCache

/* public: virtual class FClassNetCache * __thiscall UPackageMap::GetClassNetCache(class UClass *)
    */

FClassNetCache * __thiscall UPackageMap::GetClassNetCache(UPackageMap *this,UClass *param_1)

{
  int iVar1;
  FClassNetCache *this_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  FFieldNetCache *pFVar7;
  int iStack_44;
  FClassNetCache *pFStack_38;
  undefined4 uStack_34;
  FClassNetCache *pFStack_30;
  UClass *pUStack_2c;
  undefined4 uStack_28;
  UClass *pUStack_24;
  int iStack_20;
  UPackageMap *pUStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2fdb  1292
                       ?GetClassNetCache@UPackageMap@@UAEPAVFClassNetCache@@PAVUClass@@@Z */
  puStack_c = &LAB_101ba9db;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa4;
  iStack_8 = 0;
  pUStack_24 = param_1;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  this_00 = (FClassNetCache *)thunk_FUN_10137120(&pUStack_24);
  if ((this_00 == (FClassNetCache *)0x0) &&
     (pFStack_30 = this_00, iVar2 = (**(code **)(*(int *)this + 0x74))(param_1), iVar2 != -1)) {
    pFStack_38 = (FClassNetCache *)thunk_FUN_101088a0(0x3c);
    iStack_8._0_1_ = 1;
    if (pFStack_38 == (FClassNetCache *)0x0) {
      uStack_28 = 0;
    }
    else {
      uStack_28 = FClassNetCache::FClassNetCache(pFStack_38,param_1);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    pUStack_2c = param_1;
    puVar3 = (undefined4 *)thunk_FUN_101381e0(&pUStack_2c,&uStack_28);
    this_00 = (FClassNetCache *)*puVar3;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    pFStack_30 = this_00;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar4 = (**(code **)(*(int *)this + 0x88))(*(int *)(param_1 + 0x34));
      *(undefined4 *)(this_00 + 0x10) = uVar4;
      thunk_FUN_10120810(uVar4);
      *(undefined4 *)(this_00 + 0x14) = *(undefined4 *)(*(int *)(this_00 + 0x10) + 0x14);
      *(int *)(this_00 + 0xc) =
           *(int *)(*(int *)(this_00 + 0x10) + 0xc) + *(int *)(*(int *)(this_00 + 0x10) + 0x20);
    }
    thunk_FUN_10119a80(*(undefined4 *)(param_1 + 0x4d4));
    for (iStack_18 = 0; iStack_18 < *(int *)(param_1 + 0x4d4); iStack_18 = iStack_18 + 1) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) + iStack_18 * 4);
      iVar2 = (**(code **)(*(int *)pUStack_1c + 0x74))(uVar4);
      if (iVar2 != -1) {
        iStack_20 = -1;
        iVar2 = *(int *)(this_00 + 0x20);
        iVar1 = *(int *)(this_00 + 0xc);
        iVar5 = thunk_FUN_10137450(uVar4,0x8000);
        if ((iVar5 != 0) &&
           ((*(int *)(iVar5 + 0x68) == iVar5 ||
            (iVar5 = (**(code **)(*(int *)pUStack_1c + 0x74))(*(undefined4 *)(iVar5 + 0x68)),
            iVar5 == -1)))) {
          iStack_20 = *(int *)(this_00 + 0x14);
          *(int *)(this_00 + 0x14) = iStack_20 + 1;
        }
        puVar3 = (undefined4 *)thunk_FUN_10114ad0(0xc,this_00 + 0x1c);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uVar4;
          puVar3[1] = iVar1 + iVar2;
          puVar3[2] = iStack_20;
        }
      }
    }
    thunk_FUN_10137090();
    for (iVar2 = 0; iVar2 < *(int *)(this_00 + 0x20); iVar2 = iVar2 + 1) {
      pUStack_1c = (UPackageMap *)(*(int *)(this_00 + 0x1c) + iVar2 * 0xc);
      uStack_34 = *(undefined4 *)pUStack_1c;
      thunk_FUN_10138060(&uStack_34,&pUStack_1c);
    }
    for (iStack_44 = 0; iStack_44 < *(int *)(this_00 + 0x20); iStack_44 = iStack_44 + 1) {
      pUStack_1c = (UPackageMap *)(iStack_44 * 0xc + *(int *)(this_00 + 0x1c));
      piVar6 = (int *)thunk_FUN_10137450(*(undefined4 *)pUStack_1c,0x8000);
      if (piVar6 != (int *)0x0) {
        if (*(int *)(pUStack_1c + 8) == -1) {
          pFVar7 = FClassNetCache::GetFromField(this_00,(UObject *)piVar6[0x1a]);
          *(undefined4 *)(pUStack_1c + 8) = *(undefined4 *)(pFVar7 + 8);
        }
        iVar2 = (**(code **)(*piVar6 + 0x74))();
        if ((*(uint *)(iVar2 + 0x4a4) & 0x800) == 0) {
          pFStack_38 = (FClassNetCache *)(*(int *)(this_00 + 0x1c) + iStack_44 * 0xc);
          thunk_FUN_10137570(&pFStack_38);
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return this_00;
}


// ==== 10102fe0 FMemCache::Init

/* public: void __thiscall FMemCache::Init(int,int,void *,int) */

void __thiscall FMemCache::Init(FMemCache *this,int param_1,int param_2,void *param_3,int param_4)

{
  FCacheItem *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FMemCache *pFVar6;
  FCacheItem *pFVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2fe0  1462  ?Init@FMemCache@@QAEXHHPAXH@Z */
  puStack_c = &LAB_101b9d00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)this != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Initialized==0",".\\UnCache.cpp",0x21);
  }
  *(int *)(this + 0x10054) = param_1;
  *(int *)(this + 0x10044) = param_2;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  if (param_3 == (void *)0x0) {
    param_3 = (void *)thunk_FUN_101088e0(param_1,L"CacheMemory");
  }
  *(void **)(this + 0x10024) = param_3;
  uVar2 = thunk_FUN_101088e0(-(uint)((int)((ulonglong)(uint)param_2 * 0x20 >> 0x20) != 0) |
                             (uint)((ulonglong)(uint)param_2 * 0x20),L"CacheItems");
  *(undefined4 *)(this + 0x14) = uVar2;
  pFVar6 = this + 0x20;
  for (iVar4 = 0; iVar4 < param_2; iVar4 = iVar4 + 1) {
    *(int *)pFVar6 = *(int *)(this + 0x14) + iVar4 * 0x20;
    pFVar6 = (FMemCache *)(*(int *)(this + 0x14) + 0x14 + iVar4 * 0x20);
  }
  iVar4 = 0;
  *(undefined4 *)pFVar6 = 0;
  pFVar7 = (FCacheItem *)0x0;
  if (param_4 == 0) {
    pFVar7 = *(FCacheItem **)(this + 0x20);
    CreateNewFreeSpace(this,*(uchar **)(this + 0x10024),*(uchar **)(this + 0x10024) + param_1,
                       (FCacheItem *)0x0,(FCacheItem *)0x0,0);
    iVar4 = 1;
  }
  else {
    while( true ) {
      iVar3 = iVar4 * param_4;
      if (param_1 <= iVar3) break;
      pFVar1 = *(FCacheItem **)(this + 0x20);
      iVar5 = param_1 - iVar3;
      if (param_4 <= param_1 - iVar3) {
        iVar5 = param_4;
      }
      CreateNewFreeSpace(this,(uchar *)(iVar3 + *(int *)(this + 0x10024)),
                         (uchar *)(iVar3 + *(int *)(this + 0x10024)) + iVar5,pFVar7,
                         (FCacheItem *)0x0,iVar4);
      iVar4 = iVar4 + 1;
      pFVar7 = pFVar1;
    }
  }
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x20);
  CreateNewFreeSpace(this,(uchar *)(*(int *)(this + 0x10024) + param_1),
                     (uchar *)(*(int *)(this + 0x10024) + param_1),pFVar7,(FCacheItem *)0x0,iVar4);
  for (iVar4 = 0; iVar4 < 0x4000; iVar4 = iVar4 + 1) {
    *(undefined4 *)(this + iVar4 * 4 + 0x24) = 0;
  }
  *(undefined4 *)this = 1;
  CheckState(this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10102fe5 FRotator::ClampPos

/* public: class FRotator __thiscall FRotator::ClampPos(void) */

int * __thiscall FRotator::ClampPos(FRotator *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  
                    /* 0x2fe5  837  ?ClampPos@FRotator@@QAE?AV1@XZ */
  iVar3 = *(int *)(this + 8);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar2 = *(int *)(this + 4);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = *(int *)this;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *in_stack_00000004 = iVar1 % 0xffff;
  in_stack_00000004[1] = iVar2 % 0xffff;
  in_stack_00000004[2] = iVar3 % 0xffff;
  return in_stack_00000004;
}


// ==== 10102fea FRotator::FRotator

/* public: __thiscall FRotator::FRotator(int,int,int) */

void __thiscall FRotator::FRotator(FRotator *this,int param_1,int param_2,int param_3)

{
                    /* 0x2fea  127  ??0FRotator@@QAE@HHH@Z */
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}


// ==== 10102fef UObject::execRand

/* public: void __thiscall UObject::execRand(struct FFrame &,void * const) */

void __thiscall UObject::execRand(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x2fef  2353  ?execRand@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (0 < (int)&uStack_4) {
    iVar2 = appRand();
    *unaff_retaddr = iVar2 % (int)&uStack_4;
    return;
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 10102ff9 thunk_FUN_10166450 thunk -> 10166450

// ==== 10102ffe FErrorOutError::FErrorOutError

/* public: __thiscall FErrorOutError::FErrorOutError(void) */

void __thiscall FErrorOutError::FErrorOutError(FErrorOutError *this)

{
                    /* 0x2ffe  46  ??0FErrorOutError@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103003 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,signed char &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,char *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3003  1653  ?Parse@@YAHPBG0AAC@Z */
  puStack_c = &LAB_101bc040;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (char)iVar3;
    if (((char)iVar3 != '\0') || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10103008 UObject::execSubtractSubtract_PreInt

/* public: void __thiscall UObject::execSubtractSubtract_PreInt(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractSubtract_PreInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x3008  2389  ?execSubtractSubtract_PreInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *piVar2 = *piVar2 + -1;
  *unaff_retaddr = *piVar2;
  return;
}


// ==== 1010300d UObject::execLess_StringString

/* public: void __thiscall UObject::execLess_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execLess_StringString(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x300d  2292  ?execLess_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (uint *)&LAB_101bad20;
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
  *puStack_8 = (uint)(iVar2 < 0);
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


// ==== 10103012 L2ThreadUtil::~L2ThreadUtil

/* public: virtual __thiscall L2ThreadUtil::~L2ThreadUtil(void) */

void __thiscall L2ThreadUtil::~L2ThreadUtil(L2ThreadUtil *this)

{
  int iVar1;
  FScopeCriticalSection aFStack_1c [4];
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x3012  316  ??1L2ThreadUtil@@UAE@XZ */
  puStack_c = &LAB_101b9708;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  iStack_8 = 0;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_1c,ThreadUtilCS);
  iStack_8._0_1_ = 1;
  for (iVar1 = 0; iStack_18 = iVar1, iVar1 < *(int *)(this + 0x2c4); iVar1 = iVar1 + 1) {
    if (*(int *)(this + iVar1 * 4 + 4) != 0) {
      if (*(undefined4 **)(this + iVar1 * 4 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + iVar1 * 4 + 4))(1);
      }
      *(undefined4 *)(this + iVar1 * 4 + 4) = 0;
    }
    if (*(int *)(this + 0x2c8) != 0) {
      *(undefined4 *)(this + 0x2c8) = 0;
      thunk_FUN_1012a530(1);
    }
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_1c);
  if (ThreadUtilCS != (FCriticalSection *)0x0) {
    thunk_FUN_101286e0(1);
    ThreadUtilCS = (FCriticalSection *)0x0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103017 FVertexHit::FVertexHit

/* public: __thiscall FVertexHit::FVertexHit(class ABrush *,int,int) */

void __thiscall FVertexHit::FVertexHit(FVertexHit *this,ABrush *param_1,int param_2,int param_3)

{
                    /* 0x3017  171  ??0FVertexHit@@QAE@PAVABrush@@HH@Z */
  *(ABrush **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}


// ==== 10103021 UObject::ParseParms

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::ParseParms(unsigned short const *) */

void __thiscall UObject::ParseParms(UObject *this,ushort *param_1)

{
  int *piVar1;
  FString *pFVar2;
  FString *this_00;
  ushort *puVar3;
  int iVar4;
  undefined2 *puVar5;
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  undefined2 *puStack_34;
  int iStack_30;
  int *piStack_24;
  UObject *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x3021  1673  ?ParseParms@UObject@@QAEXPBG@Z */
  puStack_c = &LAB_101bd038;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa8;
  uStack_8 = 0;
  if (param_1 != (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    pUStack_18 = this;
    thunk_FUN_10119210(*(undefined4 *)(this + 0x24));
    while (piVar1 = piStack_24, piStack_24 != (int *)0x0) {
      if ((UClass *)piStack_24[6] != &PrivateStaticClass) {
        FString::FString((FString *)&puStack_34);
        uStack_8._0_1_ = 1;
        pFVar2 = (FString *)
                 FString::FString(aFStack_4c,(ushort *)(*(int *)(_Names + piVar1[8] * 4) + 0xc));
        uStack_8._0_1_ = 2;
        this_00 = (FString *)FString::operator+(pFVar2,(ushort *)aFStack_40);
        uStack_8._0_1_ = 3;
        pFVar2 = (FString *)&puStack_34;
        puVar3 = FString::operator*(this_00);
        iVar4 = Parse(param_1,puVar3,pFVar2);
        uStack_8._0_1_ = 2;
        FString::~FString(aFStack_40);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        FString::~FString(aFStack_4c);
        if (iVar4 != 0) {
          puVar5 = puStack_34;
          if (iStack_30 == 0) {
            puVar5 = &DAT_101cdd44;
          }
          (**(code **)(*piVar1 + 0x9c))(puVar5,pUStack_18 + piVar1[0x15],1);
        }
        uStack_8 = uStack_8 & 0xffffff00;
        FString::~FString((FString *)&puStack_34);
      }
      piStack_24 = (int *)piVar1[0xe];
      thunk_FUN_10114340();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103026 UIntProperty::operator_new

/* public: static void * __cdecl UIntProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UIntProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x3026  384  ??2UIntProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010302b UObjectProperty::InternalConstructor

/* public: static void __cdecl UObjectProperty::InternalConstructor(void *) */

void __cdecl UObjectProperty::InternalConstructor(void *param_1)

{
                    /* 0x302b  1494  ?InternalConstructor@UObjectProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UObjectProperty(param_1);
    return;
  }
  return;
}


// ==== 10103030 TArray<unsigned_short>::Add

/* public: int __thiscall TArray<unsigned short>::Add(int) */

int __thiscall TArray<unsigned_short>::Add(TArray<unsigned_short> *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x3030  775  ?Add@?$TArray@G@@QAEHH@Z */
  iVar2 = *(int *)(this + 4);
  iVar1 = iVar2 + param_1;
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc((FArray *)this,2);
  }
  return iVar2;
}


// ==== 10103035 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,unsigned char &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,uchar *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3035  1654  ?Parse@@YAHPBG0AAE@Z */
  puStack_c = &LAB_101bc030;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (uchar)iVar3;
    if (((uchar)iVar3 != '\0') || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1010303a FArray::Remove

/* public: void __thiscall FArray::Remove(int,int,int) */

void __thiscall FArray::Remove(FArray *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x303a  1764  ?Remove@FArray@@QAEXHHH@Z */
  if (param_2 != 0) {
    appMemmove((void *)(param_1 * param_3 + *(int *)this),
               (void *)((param_1 + param_2) * param_3 + *(int *)this),
               ((*(int *)(this + 4) - param_1) - param_2) * param_3);
    *(int *)(this + 4) = *(int *)(this + 4) - param_2;
    iVar1 = *(int *)(this + 4);
    iVar2 = *(int *)(this + 8);
    if (((iVar1 * 3 < iVar2 * 2) || (0x3fff < (iVar2 - iVar1) * param_3)) &&
       ((0x40 < iVar2 - iVar1 || (iVar1 == 0)))) {
      *(int *)(this + 8) = iVar1;
      Realloc(this,param_3);
    }
  }
  return;
}


// ==== 1010303f FStringNoInit::operator=

/* public: struct FStringNoInit & __thiscall FStringNoInit::operator=(class FString const &) */

FStringNoInit * __thiscall FStringNoInit::operator=(FStringNoInit *this,FString *param_1)

{
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x303f  496  ??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */
  if (this != (FStringNoInit *)param_1) {
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


// ==== 10103044 UParamStack::execGetString

/* public: void __thiscall UParamStack::execGetString(struct FFrame &,void * const) */

void __thiscall UParamStack::execGetString(UParamStack *this,FFrame *param_1,void *param_2)

{
  ushort *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3044  2233  ?execGetString@UParamStack@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bcb60;
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
    FString::operator=(param_2,puVar1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103049 UObject::execLocalize

/* public: void __thiscall UObject::execLocalize(struct FFrame &,void * const) */

void __thiscall UObject::execLocalize(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FArray *this_00;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_48;
  FFrame *pFStack_44;
  undefined4 *puStack_40;
  ushort *puStack_30;
  int aiStack_2c [2];
  void *pvStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  FArray *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3049  2297  ?execLocalize@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb1e0;
  pvStack_c = ExceptionList;
  uStack_18 = 0;
  uStack_14 = 0;
  pFStack_10 = (FArray *)0x0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_40 = &uStack_18;
  pFStack_44 = param_1;
  puStack_48 = (ushort *)0x10145653;
  (*(code *)(&GNatives)[bVar1])();
  aiStack_2c[0] = 0;
  aiStack_2c[1] = 0;
  pvStack_24 = (void *)0x0;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_48 = (ushort *)aiStack_2c;
  (*(code *)(&GNatives)[bVar1])(param_1);
  puStack_40 = (undefined4 *)0x0;
  uStack_14 = CONCAT31(uStack_14._1_3_,8);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&puStack_40);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_48;
  if (pFStack_44 == (FFrame *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  if (aiStack_2c[0] == 0) {
    puStack_30 = &DAT_101cdd44;
  }
  puVar3 = Localize(puStack_30,&DAT_101cdd44,puVar3,(ushort *)0x0,0);
  this_00 = pFStack_10;
  if (*(ushort **)pFStack_10 != puVar3) {
    if (*puVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(puVar3);
      iVar2 = iVar2 + 1;
    }
    *(int *)(this_00 + 8) = iVar2;
    *(int *)(this_00 + 4) = iVar2;
    FArray::Realloc(this_00,2);
    if (*(int *)(this_00 + 4) != 0) {
      _memcpy(*(void **)this_00,puVar3,*(int *)(this_00 + 4) * 2);
    }
  }
  uStack_1c._0_1_ = 9;
  pFStack_44 = (FFrame *)0x0;
  puStack_40 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_48,2);
  uStack_1c._0_1_ = 5;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_48);
  uStack_1c._0_1_ = 10;
  FArray::Realloc((FArray *)&stack0xffffffc4,2);
  uStack_1c = CONCAT31(uStack_1c._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffc4);
  uStack_1c = 0xb;
  aiStack_2c[0] = 0;
  aiStack_2c[1] = 0;
  FArray::Realloc((FArray *)&puStack_30,2);
  uStack_1c = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_30);
  ExceptionList = pvStack_24;
  return;
}


// ==== 1010304e UIntProperty::ExportCppItem

/* public: virtual void __thiscall UIntProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall UIntProperty::ExportCppItem(UIntProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x304e  967  ?ExportCppItem@UIntProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bde00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)&DAT_101deda0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103053 thunk_FUN_101142d0 thunk -> 101142d0

// ==== 10103058 FBitWriterMark::GetNumBits

/* public: int __thiscall FBitWriterMark::GetNumBits(void) */

int __thiscall FBitWriterMark::GetNumBits(FBitWriterMark *this)

{
                    /* 0x3058  1366  ?GetNumBits@FBitWriterMark@@QAEHXZ */
  return *(int *)(this + 4);
}


// ==== 1010305d UObject::execSmerp

/* public: void __thiscall UObject::execSmerp(struct FFrame &,void * const) */

void __thiscall UObject::execSmerp(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x305d  2366  ?execSmerp@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xfffffff4);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  return;
}


// ==== 10103067 FName::GetEntry

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct FNameEntry * __cdecl FName::GetEntry(int) */

FNameEntry * __cdecl FName::GetEntry(int param_1)

{
                    /* 0x3067  1309  ?GetEntry@FName@@SAPAUFNameEntry@@H@Z */
  return *(FNameEntry **)(_Names + param_1 * 4);
}


// ==== 1010306c UObject::GetPackageLinker

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class ULinkerLoad * __cdecl UObject::GetPackageLinker(class UObject *,unsigned
   short const *,unsigned long,class UPackageMap *,class FGuid *) */

ULinkerLoad * __cdecl
UObject::GetPackageLinker
          (UObject *param_1,ushort *param_2,ulong param_3,UPackageMap *param_4,FGuid *param_5)

{
  ULinkerLoad *pUVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  UPackage *this;
  int iVar4;
  ushort *puVar5;
  FOutputDevice *this_00;
  ULinkerLoad *pUVar6;
  ushort auStack_434 [256];
  ushort uStack_234;
  undefined1 auStack_232 [518];
  undefined1 *puStack_2c;
  int iStack_28;
  int iStack_24;
  ULinkerLoad *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x306c  1380
                       ?GetPackageLinker@UObject@@SAPAVULinkerLoad@@PAV1@PBGKPAVUPackageMap@@PAVFGuid@@@Z
                        */
  puStack_c = &LAB_101bda80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xfffffbc0;
  if ((GObjBeginLoadCount == 0) &&
     (ExceptionList = &pvStack_10, puVar2 = &stack0xfffffbc0, GSWObjBeginLoadCount == 0)) {
    ExceptionList = &pvStack_10;
    appFailAssert("GObjBeginLoadCount || GSWObjBeginLoadCount",".\\UnObj.cpp",0x9d4);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  pUVar6 = (ULinkerLoad *)0x0;
  pUStack_18 = (ULinkerLoad *)0x0;
  if (param_1 != (UObject *)0x0) {
    iStack_28 = 0;
    while ((iStack_28 < DAT_103308a4 && (pUVar6 == (ULinkerLoad *)0x0))) {
      pUVar1 = *(ULinkerLoad **)(_GObjLoaders + iStack_28 * 4);
      if (*(UObject **)(pUVar1 + 0x34) == param_1) {
        pUVar6 = pUVar1;
        pUStack_18 = pUVar1;
      }
      iStack_28 = iStack_28 + 1;
    }
  }
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uStack_234 = 0;
  _memset(auStack_232,0,0x1fe);
  if (pUVar6 == (ULinkerLoad *)0x0) {
    if (param_2 == (ushort *)0x0) {
      if (param_1 == (UObject *)0x0) {
        puVar5 = LocalizeError((ushort *)L"PackageResolveFailed",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar5);
      }
      iVar4 = appFindPackageFile((ushort *)(*(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc),
                                 param_5,&uStack_234);
      if (iVar4 == 0) {
        if ((GIsUCC == 0) ||
           ((((param_3 & 0x20) != 0 &&
             (iVar4 = IsA(param_1,&UPackage::PrivateStaticClass), iVar4 != 0)) &&
            (*(int *)(param_1 + 0x34) != 0)))) {
          ExceptionList = pvStack_10;
          return (ULinkerLoad *)0x0;
        }
        puVar5 = LocalizeError((ushort *)L"PackageNotFound",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar5);
      }
    }
    else {
      iVar4 = appFindPackageFile(param_2,param_5,&uStack_234);
      if (iVar4 == 0) {
        puVar5 = LocalizeError((ushort *)L"FileNotFound",(ushort *)L"Core",(ushort *)0x0);
        appThrowf(puVar5);
      }
      puVar5 = auStack_434;
      appStrcpy(puVar5,param_2);
      while( true ) {
        while( true ) {
          while (puVar3 = appStrstr(puVar5,(ushort *)&DAT_101da78c), puVar3 != (ushort *)0x0) {
            puVar5 = appStrstr(puVar5,(ushort *)&DAT_101da790);
            iVar4 = appStrlen((ushort *)&DAT_101da794);
            puVar5 = puVar5 + iVar4;
          }
          puVar3 = appStrstr(puVar5,(ushort *)&DAT_101da798);
          if (puVar3 == (ushort *)0x0) break;
          puVar5 = appStrstr(puVar5,(ushort *)&DAT_101da79c);
          puVar5 = puVar5 + 1;
        }
        puVar3 = appStrstr(puVar5,(ushort *)&DAT_101da7a0);
        if (puVar3 == (ushort *)0x0) break;
        puVar5 = appStrstr(puVar5,(ushort *)&DAT_101da7a4);
        puVar5 = puVar5 + 1;
      }
      puVar3 = appStrstr(puVar5,(ushort *)&DAT_101da7a8);
      if (puVar3 != (ushort *)0x0) {
        puVar3 = appStrstr(puVar5,(ushort *)&DAT_101da7ac);
        *puVar3 = 0;
      }
      this = CreatePackage((UObject *)0x0,puVar5);
      if (param_1 == (UObject *)0x0) {
        if (this == (UPackage *)0x0) {
          puVar5 = LocalizeError((ushort *)L"FilenameToPackage",(ushort *)L"Core",(ushort *)0x0);
          appThrowf(puVar5);
        }
        iStack_24 = 0;
        while ((param_1 = (UObject *)this, iStack_24 < DAT_103308a4 &&
               (pUStack_18 == (ULinkerLoad *)0x0))) {
          pUVar6 = *(ULinkerLoad **)(_GObjLoaders + iStack_24 * 4);
          if (*(UPackage **)(pUVar6 + 0x34) == this) {
            pUStack_18 = pUVar6;
          }
          iStack_24 = iStack_24 + 1;
        }
      }
      else if (param_1 != (UObject *)this) {
        if (GLog != (undefined *)0x0) {
          GetFullName((UObject *)this,(ushort *)0x0);
          GetFullName(param_1,(ushort *)0x0);
          FOutputDevice::Logf2(this_00,(ushort *)GLog);
        }
        ResetLoaders(param_1,0,1);
      }
    }
  }
  else {
    appStrcpy(&uStack_234,(ushort *)&DAT_101da6fc);
  }
  if ((param_4 != (UPackageMap *)0x0) &&
     (iVar4 = (**(code **)(*(int *)param_4 + 0x8c))(), iVar4 == 0)) {
    puVar5 = LocalizeError((ushort *)L"Sandbox",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar5);
  }
  if (pUStack_18 == (ULinkerLoad *)0x0) {
    puStack_2c = &stack0xfffffbbc;
    pUVar6 = ULinkerLoad::operator_new(0x52c,GObjTransientPkg);
    if (pUVar6 == (ULinkerLoad *)0x0) {
      pUStack_18 = (ULinkerLoad *)0x0;
    }
    else {
      pUStack_18 = (ULinkerLoad *)ULinkerLoad::ULinkerLoad(pUVar6,param_1,&uStack_234,param_3);
    }
  }
  if ((param_5 != (FGuid *)0x0) && (iVar4 = thunk_FUN_1015aa70(), iVar4 != 0)) {
    puVar5 = LocalizeError((ushort *)L"PackageVersion",(ushort *)L"Core",(ushort *)0x0);
    appThrowf(puVar5);
  }
  ExceptionList = pvStack_10;
  return pUStack_18;
}


// ==== 10103071 UByteProperty::CopySingleValue

/* public: virtual void __thiscall UByteProperty::CopySingleValue(void *,void *,class UObject
   *)const  */

void __thiscall
UByteProperty::CopySingleValue(UByteProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x3071  875  ?CopySingleValue@UByteProperty@@UBEXPAX0PAVUObject@@@Z */
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}


// ==== 10103076 FInterpCurvePoint::operator==

/* public: int __thiscall FInterpCurvePoint::operator==(class FInterpCurvePoint const &) */

int __thiscall FInterpCurvePoint::operator==(FInterpCurvePoint *this,FInterpCurvePoint *param_1)

{
                    /* 0x3076  561  ??8FInterpCurvePoint@@QAEHABV0@@Z */
  if ((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4))) {
    return 1;
  }
  return 0;
}


// ==== 1010307b FArchiveCountMem::GetMax

/* public: unsigned long __thiscall FArchiveCountMem::GetMax(void) */

ulong __thiscall FArchiveCountMem::GetMax(FArchiveCountMem *this)

{
                    /* 0x307b  1348  ?GetMax@FArchiveCountMem@@QAEKXZ */
  return *(ulong *)(this + 0x3c);
}


// ==== 10103080 UPackageMap::CopyLinkers

/* public: void __thiscall UPackageMap::CopyLinkers(class UPackageMap *) */

void __thiscall UPackageMap::CopyLinkers(UPackageMap *this,UPackageMap *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3080  873  ?CopyLinkers@UPackageMap@@QAEXPAV1@@Z */
  puStack_c = &LAB_101ba790;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x38); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc + iVar2 * 0x44);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x7c))(iVar1);
    }
  }
  (**(code **)(*(int *)this + 0x80))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103085 thunk_FUN_10123e50 thunk -> 10123e50

// ==== 1010308a FMatrix::FMatrix

/* public: __thiscall FMatrix::FMatrix(class FPlane,class FPlane,class FPlane,class FPlane) */

void __thiscall
FMatrix::FMatrix(FMatrix *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                undefined4 param_17)

{
                    /* 0x308a  72  ??0FMatrix@@QAE@VFPlane@@000@Z */
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x14) = param_7;
  *(undefined4 *)(this + 0x18) = param_8;
  *(undefined4 *)(this + 0x1c) = param_9;
  *(undefined4 *)(this + 0x20) = param_10;
  *(undefined4 *)(this + 0x24) = param_11;
  *(undefined4 *)(this + 0x28) = param_12;
  *(undefined4 *)(this + 0x2c) = param_13;
  *(undefined4 *)(this + 0x30) = param_14;
  *(undefined4 *)(this + 0x34) = param_15;
  *(undefined4 *)(this + 0x38) = param_16;
  *(undefined4 *)(this + 0x3c) = param_17;
  return;
}


// ==== 1010308f UParamStack::UParamStack

/* protected: __thiscall UParamStack::UParamStack(void) */

UParamStack * __thiscall UParamStack::UParamStack(UParamStack *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x308f  261  ??0UParamStack@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b68d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103094 Localize

/* unsigned short const * __cdecl Localize(unsigned short const *,unsigned short const *,unsigned
   short const *,unsigned short const *,int) */

ushort * __cdecl
Localize(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  int iVar2;
  ushort auStack_224 [262];
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3094  1579  ?Localize@@YAPBGPBG000H@Z */
  puStack_c = &LAB_101bc0f0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStaticString1024();
  puStack_18 = puVar1;
  if ((GIsStarted == 0) || (GConfig == (FConfigCache *)0x0)) {
    appStrcpy(puVar1,param_2);
    ExceptionList = pvStack_10;
    return puVar1;
  }
  if (param_4 == (ushort *)0x0) {
    param_4 = UObject::GetLanguage();
  }
  while( true ) {
    appSprintf(auStack_224,(ushort *)L"%s.%s",param_3,param_4);
    iVar2 = (**(code **)(*(int *)GConfig + 0x10))(param_1,param_2,puStack_18,0x400,auStack_224);
    if (iVar2 != 0) {
      ExceptionList = pvStack_10;
      return puStack_18;
    }
    iVar2 = appStricmp(param_4,(ushort *)&DAT_101d6324);
    if (iVar2 == 0) break;
    param_4 = (ushort *)&DAT_101d632c;
  }
  if (param_5 != 0) {
    ExceptionList = pvStack_10;
    return puStack_18;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2((FOutputDevice *)param_1,(EName)GLog,(ushort *)0x311);
  }
  appSprintf(puStack_18,(ushort *)L"<?%s?%s.%s.%s?>",param_4,param_3,param_1,param_2);
  ExceptionList = pvStack_10;
  return puStack_18;
}


// ==== 10103099 thunk_FUN_10129850 thunk -> 10129850

// ==== 1010309e FName::GetFlags

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned long __thiscall FName::GetFlags(void)const  */

ulong __thiscall FName::GetFlags(FName *this)

{
                    /* 0x309e  1322  ?GetFlags@FName@@QBEKXZ */
  return *(ulong *)(*(int *)(_Names + *(int *)this * 4) + 4);
}


// ==== 101030a3 ULanguage::operator_new

/* public: static void * __cdecl ULanguage::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
ULanguage::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x30a3  385  ??2ULanguage@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101030a8 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,unsigned short &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x30a8  1656  ?Parse@@YAHPBG0AAG@Z */
  puStack_c = &LAB_101bc050;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (ushort)iVar3;
    if (((ushort)iVar3 != 0) || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 101030b2 FPlane::TransformPlaneByOrtho

/* public: class FPlane __thiscall FPlane::TransformPlaneByOrtho(class FCoords const &)const  */

void __thiscall FPlane::TransformPlaneByOrtho(FPlane *this,FCoords *param_1)

{
  float fVar1;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x30b2  1977  ?TransformPlaneByOrtho@FPlane@@QBE?AV1@ABVFCoords@@@Z */
  thunk_FUN_1010f5b0();
  thunk_FUN_1010f5b0();
  fVar1 = *(float *)(this + 0xc);
  *(float *)param_1 = fStack_18;
  *(float *)(param_1 + 4) = fStack_14;
  *(float *)(param_1 + 8) = fStack_10;
  *(float *)(param_1 + 0xc) =
       fVar1 - (fStack_4 * fStack_10 + fStack_18 * fStack_c + fStack_8 * fStack_14);
  return;
}


// ==== 101030b7 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,int &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x30b7  1657  ?Parse@@YAHPBG0AAH@Z */
  puStack_c = &LAB_101bc080;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar2 = appStrlen(param_2);
  iVar2 = appAtoi(puVar1 + iVar2);
  *param_3 = iVar2;
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 101030bc Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,short &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,short *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x30bc  1655  ?Parse@@YAHPBG0AAF@Z */
  puStack_c = &LAB_101bc060;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    iVar2 = appStrlen(param_2);
    iVar3 = appAtoi(puVar1 + iVar2);
    *param_3 = (short)iVar3;
    if (((short)iVar3 != 0) || ((ushort)(puVar1[iVar2] - 0x30) < 10)) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 101030c1 ULinkerLoad::DetachRoughLoader

/* private: virtual void __thiscall ULinkerLoad::DetachRoughLoader(class FRoughLoader *) */

void __thiscall ULinkerLoad::DetachRoughLoader(ULinkerLoad *this,FRoughLoader *param_1)

{
  undefined *puVar1;
  int iVar2;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x30c1  937  ?DetachRoughLoader@ULinkerLoad@@EAEXPAVFRoughLoader@@@Z */
  puStack_c = &LAB_101bba20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar2 = thunk_FUN_1014a020(&param_1);
  puVar1 = GLog;
  if ((iVar2 == 0) && (GLog != (undefined *)0x0)) {
    FString::operator*((FString *)(this + -0x20));
    FOutputDevice::Logf2(this_00,(ushort *)puVar1);
  }
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 8); iVar2 = iVar2 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 4) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101030c6 FInterpCurvePoint::FInterpCurvePoint

/* public: __thiscall FInterpCurvePoint::FInterpCurvePoint(float,float) */

void __thiscall
FInterpCurvePoint::FInterpCurvePoint(FInterpCurvePoint *this,float param_1,float param_2)

{
                    /* 0x30c6  65  ??0FInterpCurvePoint@@QAE@MM@Z */
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  return;
}


// ==== 101030cb UTextBuffer::InternalConstructor

/* public: static void __cdecl UTextBuffer::InternalConstructor(void *) */

void __cdecl UTextBuffer::InternalConstructor(void *param_1)

{
                    /* 0x30cb  1503  ?InternalConstructor@UTextBuffer@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UTextBuffer(param_1,&DAT_101cdd44);
  }
  return;
}


// ==== 101030d0 thunk_FUN_1014fa20 thunk -> 1014fa20

// ==== 101030d5 UObject::execMax

/* WARNING: Removing unreachable block (ram,0x1013cdb7) */
/* public: void __thiscall UObject::execMax(struct FFrame &,void * const) */

void __thiscall UObject::execMax(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x30d5  2301  ?execMax@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 101030da UObject::execNot_PreBool

/* public: void __thiscall UObject::execNot_PreBool(struct FFrame &,void * const) */

void __thiscall UObject::execNot_PreBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  
                    /* 0x30da  2336  ?execNot_PreBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = (uint)(&stack0x00000000 == (undefined1 *)0x4);
  return;
}


// ==== 101030e4 appStrCrcCaps

/* unsigned long __cdecl appStrCrcCaps(unsigned short const *) */

ulong __cdecl appStrCrcCaps(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
                    /* 0x30e4  2104  ?appStrCrcCaps@@YAKPBG@Z */
  iVar1 = appStrlen(param_1);
  uVar2 = 0xffffffff;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = param_1[iVar4];
      if ((ushort)(uVar3 - 0x61) < 0x1a) {
        uVar3 = uVar3 - 0x20;
      }
      uVar2 = uVar2 << 8 ^ (uint)(&GCRCTable)[uVar2 >> 0x18 ^ uVar3 & 0xff];
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 << 8 ^ (uint)(&GCRCTable)[(uVar2 >> 0x10 ^ (uint)uVar3) >> 8];
    } while (iVar4 < iVar1);
  }
  return ~uVar2;
}


// ==== 101030e9 FObjectImport::FObjectImport

/* public: __thiscall FObjectImport::FObjectImport(class UObject *) */

void __thiscall FObjectImport::FObjectImport(FObjectImport *this,UObject *param_1)

{
                    /* 0x30e9  94  ??0FObjectImport@@QAE@PAVUObject@@@Z */
  *(undefined4 *)this = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x20);
  *(undefined4 *)(this + 4) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x20);
  *(UObject **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  UObject::GImportCount = UObject::GImportCount + 1;
  return;
}


// ==== 101030ee FString::FString

/* public: __thiscall FString::FString(double,int,int,int) */

void __thiscall FString::FString(FString *this,double param_1,int param_2,int param_3,int param_4)

{
                    /* 0x30ee  150  ??0FString@@QAE@NHHH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 101030f3 FString::FString

/* public: __thiscall FString::FString(float,int,int,int) */

void __thiscall FString::FString(FString *this,float param_1,int param_2,int param_3,int param_4)

{
                    /* 0x30f3  149  ??0FString@@QAE@MHHH@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 101030f8 FString::Split

/* public: int __thiscall FString::Split(class FString const &,class FString *,class FString
   *,int)const  */

int __thiscall
FString::Split(FString *this,FString *param_1,FString *param_2,FString *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  int unaff_retaddr;
  undefined1 auStack_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x30f8  1884  ?Split@FString@@QBEHABV1@PAV1@1H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b84a0;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)param_1;
  }
  ExceptionList = &pvStack_c;
  iVar2 = InStr(this,puVar1,param_4);
  if (-1 < iVar2) {
    if (param_2 != (FString *)0x0) {
      pFVar3 = (FString *)Left(this,(int)auStack_18);
      puStack_8 = (undefined1 *)0x0;
      operator=(param_2,pFVar3);
      puStack_8 = (undefined1 *)0xffffffff;
      ~FString((FString *)&stack0xffffffe4);
      if (*(int *)(unaff_retaddr + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(unaff_retaddr + 4) + -1;
      }
      pFVar3 = (FString *)Mid(this,(int)&stack0xffffffe4,iVar4 + iVar2);
      pvStack_c = (void *)0x1;
      operator=(param_2,pFVar3);
      pvStack_c = (void *)0xffffffff;
      ~FString((FString *)&stack0xffffffe0);
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_c;
  return 0;
}


// ==== 10103102 FRange::operator+

/* public: class FRange __thiscall FRange::operator+(float)const  */

float __thiscall FRange::operator+(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x3102  637  ??HFRange@@QBE?AV0@M@Z */
  FRange((FRange *)param_1,in_stack_00000008 + *(float *)this,
         in_stack_00000008 + *(float *)(this + 4));
  return param_1;
}


// ==== 10103107 UObject::execSubtractEqual_FloatFloat

/* public: void __thiscall UObject::execSubtractEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x3107  2382  ?execSubtractEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *pfVar3 = fVar1 - unaff_ESI;
  *pfStack_8 = fVar1 - unaff_ESI;
  return;
}


// ==== 1010310c thunk_FUN_1015bab0 thunk -> 1015bab0

// ==== 10103111 thunk_FUN_1015d870 thunk -> 1015d870

// ==== 10103116 UObject::execSubtract_RotatorRotator

/* public: void __thiscall UObject::execSubtract_RotatorRotator(struct FFrame &,void * const) */

void __thiscall UObject::execSubtract_RotatorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int unaff_ESI;
  int iStack_18;
  int aiStack_14 [3];
  int *piStack_8;
  
                    /* 0x3116  2395  ?execSubtract_RotatorRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *piStack_8 = (int)aiStack_14 - unaff_ESI;
  piStack_8[1] = (int)param_1 - iStack_18;
  piStack_8[2] = (int)aiStack_14 + (-4 - aiStack_14[0]);
  return;
}


// ==== 1010311b UProperty::CopyCompleteValue

/* public: virtual void __thiscall UProperty::CopyCompleteValue(void *,void *,class UObject *)const
    */

void __thiscall
UProperty::CopyCompleteValue(UProperty *this,void *param_1,void *param_2,UObject *param_3)

{
  int iVar1;
  
                    /* 0x311b  872  ?CopyCompleteValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
  iVar1 = 0;
  if (0 < *(int *)(this + 0x40)) {
    do {
      (**(code **)(*(int *)this + 0xa4))
                ((void *)(*(int *)(this + 0x44) * iVar1 + (int)param_1),
                 (void *)(*(int *)(this + 0x44) * iVar1 + (int)param_2),param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x40));
  }
  return;
}


// ==== 10103120 thunk_FUN_10114b20 thunk -> 10114b20

// ==== 10103125 UObject::execClassIsChildOf

/* public: void __thiscall UObject::execClassIsChildOf(struct FFrame &,void * const) */

void __thiscall UObject::execClassIsChildOf(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 *unaff_ESI;
  FFrame *unaff_EDI;
  undefined4 uStack_4;
  
                    /* 0x3125  2173  ?execClassIsChildOf@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((unaff_EDI != (FFrame *)0x0) && (pFVar2 != (FFrame *)0x0)) {
    do {
      if (pFVar2 == unaff_EDI) {
        *unaff_ESI = 1;
        return;
      }
      pFVar2 = *(FFrame **)(pFVar2 + 0x34);
    } while (pFVar2 != (FFrame *)0x0);
    *unaff_ESI = 0;
    return;
  }
  *unaff_ESI = 0;
  return;
}


// ==== 1010312a thunk_FUN_10120250 thunk -> 10120250

// ==== 1010312f FTerritoryInfoHit::operator!=

/* public: int __thiscall FTerritoryInfoHit::operator!=(class FTerritoryInfoHit const &)const  */

int __thiscall FTerritoryInfoHit::operator!=(FTerritoryInfoHit *this,FTerritoryInfoHit *param_1)

{
                    /* 0x312f  590  ??9FTerritoryInfoHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}


// ==== 10103134 UObject::execDivide_IntInt

/* public: void __thiscall UObject::execDivide_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execDivide_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 *puStack_4;
  
                    /* 0x3134  2193  ?execDivide_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  puStack_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (&stack0x00000000 == (undefined1 *)0x4) {
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2((FOutputDevice *)0x0,(ushort *)GLog);
    }
    *puStack_4 = param_1;
    return;
  }
  *unaff_ESI = (int)&puStack_4 / (int)&puStack_4;
  return;
}


// ==== 10103139 FMemMark::operator=

/* public: class FMemMark & __thiscall FMemMark::operator=(class FMemMark const &) */

FMemMark * __thiscall FMemMark::operator=(FMemMark *this,FMemMark *param_1)

{
                    /* 0x3139  462  ??4FMemMark@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 1010313e FPackageFileSummary::~FPackageFileSummary

/* public: __thiscall FPackageFileSummary::~FPackageFileSummary(void) */

void __thiscall FPackageFileSummary::~FPackageFileSummary(FPackageFileSummary *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x313e  306  ??1FPackageFileSummary@@QAE@XZ */
  puStack_8 = &LAB_101b882b;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  thunk_FUN_101211b0(this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103143 thunk_FUN_10132af0 thunk -> 10132af0

// ==== 10103148 TArray<unsigned_short>::TArray<unsigned_short>

/* public: __thiscall TArray<unsigned short>::TArray<unsigned short>(class TArray<unsigned short>
   const &) */

TArray<unsigned_short> * __thiscall
TArray<unsigned_short>::TArray<unsigned_short>
          (TArray<unsigned_short> *this,TArray<unsigned_short> *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3148  1  ??0?$TArray@G@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6c78;
  pvStack_c = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 4);
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar1;
  FArray::Realloc((FArray *)this,2);
  iVar2 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      *(undefined2 *)(*(int *)this + iVar2 * 2) = *(undefined2 *)(*(int *)param_1 + iVar2 * 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 4));
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010314d UObject::execDefaultVariable

/* public: void __thiscall UObject::execDefaultVariable(struct FFrame &,void * const) */

void __thiscall UObject::execDefaultVariable(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x314d  2183  ?execDefaultVariable@UObject@@QAEXAAUFFrame@@QAX@Z */
  GProperty = (UProperty *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  GPropAddr = (uchar *)(*(int *)(*(int *)(this + 0x24) + 0x4f4) + *(int *)(GProperty + 0x54));
  GPropObject = (UObject *)0x0;
  if (param_2 != (void *)0x0) {
    (**(code **)(*(int *)GProperty + 0xa8))(param_2,GPropAddr,0);
  }
  return;
}


// ==== 10103152 FClassNetCache::GetRepConditionCount

/* public: int __thiscall FClassNetCache::GetRepConditionCount(void) */

int __thiscall FClassNetCache::GetRepConditionCount(FClassNetCache *this)

{
                    /* 0x3152  1390  ?GetRepConditionCount@FClassNetCache@@QAEHXZ */
  return *(int *)(this + 0x14);
}


// ==== 10103157 UBoolProperty::operator_new

/* public: static void * __cdecl UBoolProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UBoolProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3157  355  ??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 1010315c _DllMain@12 thunk -> 10109890

// ==== 10103161 FArray::FArray

/* public: __thiscall FArray::FArray(enum ENoInit) */

FArray * __thiscall FArray::FArray(FArray *this,ENoInit param_1)

{
                    /* 0x3161  12  ??0FArray@@QAE@W4ENoInit@@@Z */
  return this;
}


// ==== 1010316b UExporter::ExportToOutputDevice

/* public: static void __cdecl UExporter::ExportToOutputDevice(class UObject *,class UExporter
   *,class FOutputDevice &,unsigned short const *,int) */

void __cdecl
UExporter::ExportToOutputDevice
          (UObject *param_1,UExporter *param_2,FOutputDevice *param_3,ushort *param_4,int param_5)

{
  UExporter *pUVar1;
  int iVar2;
  FOutputDevice *this;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x316b  991
                       ?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z
                        */
  puStack_c = &LAB_101b9a00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Object",".\\UExporter.cpp",0x66);
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
    appFailAssert("Object->IsA(Exporter->SupportedClass)",".\\UExporter.cpp",0x71);
  }
  iVar2 = *(int *)(pUVar1 + 0x44);
  *(int *)(pUVar1 + 0x44) = param_5;
  (**(code **)(*(int *)pUVar1 + 0x68))(param_1,param_4,param_3,GWarn);
  *(int *)(pUVar1 + 0x44) = iVar2;
  if (param_2 == (UExporter *)0x0) {
    (**(code **)(*(int *)pUVar1 + 0xc))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103170 UFixedArrayProperty::DestroyValue

/* public: virtual void __thiscall UFixedArrayProperty::DestroyValue(void *)const  */

void __thiscall UFixedArrayProperty::DestroyValue(UFixedArrayProperty *this,void *param_1)

{
  int iVar1;
  
                    /* 0x3170  925  ?DestroyValue@UFixedArrayProperty@@UBEXPAX@Z */
  iVar1 = 0;
  if (0 < *(int *)(this + 0x7c)) {
    do {
      (**(code **)(**(int **)(this + 0x78) + 0xac))
                ((void *)((*(int **)(this + 0x78))[0x11] * iVar1 + (int)param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x7c));
  }
  return;
}


// ==== 10103175 FArchive::IsError

/* public: int __thiscall FArchive::IsError(void) */

int __thiscall FArchive::IsError(FArchive *this)

{
                    /* 0x3175  1513  ?IsError@FArchive@@QAEHXZ */
  return *(int *)(this + 0x2c);
}


// ==== 1010317a Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,float &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,float *param_3)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x317a  1659  ?Parse@@YAHPBG0AAM@Z */
  puStack_c = &LAB_101bc070;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar2 = appStrlen(param_2);
  fVar3 = appAtof(puVar1 + iVar2);
  *param_3 = fVar3;
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 1010317f FString::operator*=

/* public: class FString & __thiscall FString::operator*=(class FString const &) */

FString * __thiscall FString::operator*=(FString *this,FString *param_1)

{
  FString *pFVar1;
  ushort *puVar2;
  
                    /* 0x317f  671  ??XFString@@QAEAAV0@ABV0@@Z */
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = &DAT_101cdd44;
  }
  else {
    puVar2 = *(ushort **)param_1;
  }
  if ((1 < *(int *)(this + 4)) && (*(short *)(*(int *)this + -4 + *(int *)(this + 4) * 2) != 0x5c))
  {
    operator+=(this,(ushort *)&DAT_101ce154);
  }
  pFVar1 = operator+=(this,puVar2);
  return pFVar1;
}


// ==== 10103184 FArray::CountBytes

/* public: void __thiscall FArray::CountBytes(class FArchive &,int) */

void __thiscall FArray::CountBytes(FArray *this,FArchive *param_1,int param_2)

{
                    /* 0x3184  891  ?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */
  (**(code **)(*(int *)param_1 + 0x14))(*(int *)(this + 4) * param_2,*(int *)(this + 8) * param_2);
  return;
}


// ==== 10103189 UObject::execSubtractSubtract_PreByte

/* public: void __thiscall UObject::execSubtractSubtract_PreByte(struct FFrame &,void * const) */

void __thiscall UObject::execSubtractSubtract_PreByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x3189  2388  ?execSubtractSubtract_PreByte@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *puVar2 = *puVar2 + 0xff;
  *unaff_retaddr = *puVar2;
  return;
}


// ==== 1010318e FCoords::PivotInverse

/* public: class FCoords __thiscall FCoords::PivotInverse(void)const  */

float * __thiscall FCoords::PivotInverse(FCoords *this)

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
  float *in_stack_00000004;
  
                    /* 0x318e  1678  ?PivotInverse@FCoords@@QBE?AV1@XZ */
  fVar9 = 1.0 / ((*(float *)(this + 0x18) * *(float *)(this + 0x28) -
                 *(float *)(this + 0x1c) * *(float *)(this + 0x24)) * *(float *)(this + 0x14) +
                (*(float *)(this + 0x1c) * *(float *)(this + 0x2c) -
                *(float *)(this + 0x20) * *(float *)(this + 0x28)) * *(float *)(this + 0xc) +
                (*(float *)(this + 0x24) * *(float *)(this + 0x20) -
                *(float *)(this + 0x2c) * *(float *)(this + 0x18)) * *(float *)(this + 0x10));
  fVar1 = *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x2c);
  fVar5 = *(float *)(this + 0x10);
  fVar6 = *(float *)(this + 0x20);
  fVar7 = *(float *)(this + 0x14);
  fVar8 = *(float *)(this + 0x1c);
  in_stack_00000004[3] =
       fVar9 * (*(float *)(this + 0x2c) * *(float *)(this + 0x1c) -
               *(float *)(this + 0x28) * *(float *)(this + 0x20));
  in_stack_00000004[4] = (fVar1 * fVar2 - fVar3 * fVar4) * fVar9;
  in_stack_00000004[5] = (fVar5 * fVar6 - fVar7 * fVar8) * fVar9;
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x2c);
  fVar3 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 0x24);
  fVar5 = *(float *)(this + 0x14);
  fVar6 = *(float *)(this + 0x18);
  fVar7 = *(float *)(this + 0x20);
  fVar8 = *(float *)(this + 0xc);
  in_stack_00000004[6] =
       (*(float *)(this + 0x20) * *(float *)(this + 0x24) -
       *(float *)(this + 0x2c) * *(float *)(this + 0x18)) * fVar9;
  in_stack_00000004[7] = (fVar1 * fVar2 - fVar3 * fVar4) * fVar9;
  in_stack_00000004[8] = (fVar5 * fVar6 - fVar7 * fVar8) * fVar9;
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x24);
  fVar3 = *(float *)(this + 0x28);
  fVar4 = *(float *)(this + 0xc);
  fVar5 = *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 0x10);
  fVar8 = *(float *)(this + 0x18);
  fVar10 = (*(float *)(this + 0x28) * *(float *)(this + 0x18) -
           *(float *)(this + 0x1c) * *(float *)(this + 0x24)) * fVar9;
  in_stack_00000004[9] = fVar10;
  fVar1 = (fVar1 * fVar2 - fVar3 * fVar4) * fVar9;
  in_stack_00000004[10] = fVar1;
  fVar9 = fVar9 * (fVar5 * fVar6 - fVar7 * fVar8);
  in_stack_00000004[0xb] = fVar9;
  thunk_FUN_1010f5b0();
  *in_stack_00000004 = fVar10;
  in_stack_00000004[1] = fVar1;
  in_stack_00000004[2] = fVar9;
  return in_stack_00000004;
}


// ==== 10103193 UStrProperty::UStrProperty

/* public: __thiscall UStrProperty::UStrProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UStrProperty * __thiscall
UStrProperty::UStrProperty
          (UStrProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3193  272  ??0UStrProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103198 thunk_FUN_10149290 thunk -> 10149290

// ==== 101031a2 Parse

/* int __cdecl Parse(unsigned short const *,unsigned short const *,unsigned long &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,ulong *param_3)

{
  ushort *puVar1;
  int iVar2;
  ulong uVar3;
  ushort **ppuVar4;
  int iVar5;
  ushort *apuStack_1c [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x31a2  1658  ?Parse@@YAHPBG0AAK@Z */
  puStack_c = &LAB_101bc020;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = appStrfind(param_1,param_2);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar5 = 10;
  ppuVar4 = apuStack_1c;
  iVar2 = appStrlen(param_2);
  uVar3 = appStrtoi(puVar1 + iVar2,ppuVar4,iVar5);
  *param_3 = uVar3;
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 101031a7 UObject::GetRegistryObjects

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::GetRegistryObjects(class TArray<class FRegistryObjectInfo>
   &,class UClass *,class UClass *,int) */

void __cdecl
UObject::GetRegistryObjects
          (TArray<FRegistryObjectInfo> *param_1,UClass *param_2,UClass *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  FRegistryObjectInfo *this;
  int iVar5;
  ushort *puVar6;
  ushort *puStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x31a7  1389
                       ?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z
                        */
  puStack_c = &LAB_101bd980;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_2 == (UClass *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Class",".\\UnObj.cpp",0x124f);
  }
  if ((param_2 == &UClass::PrivateStaticClass) && (param_3 == (UClass *)0x0)) {
    appFailAssert("Class!=UClass::StaticClass() || MetaClass",".\\UnObj.cpp",0x1250);
  }
  CacheDrivers(param_4);
  iVar1 = *(int *)(_Names + *(int *)(param_2 + 0x20) * 4);
  if (param_3 == (UClass *)0x0) {
    puStack_18 = (ushort *)&DAT_101dbacc;
  }
  else {
    puStack_18 = GetPathName((UObject *)param_3,(UObject *)0x0,(ushort *)0x0);
  }
  for (iVar5 = 0; iVar5 < DAT_103308d4; iVar5 = iVar5 + 1) {
    iVar2 = iVar5 * 0x3c;
    puVar6 = (ushort *)(iVar1 + 0xc);
    puVar3 = FString::operator*((FString *)(iVar2 + 0xc + _GObjDrivers));
    iVar4 = appStricmp(puVar3,puVar6);
    if (iVar4 == 0) {
      puVar6 = puStack_18;
      puVar3 = FString::operator*((FString *)(iVar2 + 0x18 + _GObjDrivers));
      iVar4 = appStricmp(puVar3,puVar6);
      if (iVar4 == 0) {
        this = (FRegistryObjectInfo *)thunk_FUN_1015c260(0x3c,param_1);
        if (this != (FRegistryObjectInfo *)0x0) {
          FRegistryObjectInfo::FRegistryObjectInfo
                    (this,(FRegistryObjectInfo *)(_GObjDrivers + iVar2));
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101031ac thunk_FUN_10131070 thunk -> 10131070

// ==== 101031b1 UStructProperty::~UStructProperty

/* public: virtual __thiscall UStructProperty::~UStructProperty(void) */

void __thiscall UStructProperty::~UStructProperty(UStructProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x31b1  348  ??1UStructProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7ed8;
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


// ==== 101031b6 UObjectProperty::UObjectProperty

/* public: __thiscall UObjectProperty::UObjectProperty(void) */

UObjectProperty * __thiscall UObjectProperty::UObjectProperty(UObjectProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x31b6  256  ??0UObjectProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101031bb thunk_FUN_10167460 thunk -> 10167460

// ==== 101031c0 UObject::execNormal

/* public: void __thiscall UObject::execNormal(struct FFrame &,void * const) */

void __thiscall UObject::execNormal(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puStack_20;
  undefined1 auStack_18 [20];
  undefined4 *puStack_4;
  
                    /* 0x31c0  2326  ?execNormal@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_20 = auStack_18;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = (undefined4 *)FVector::SafeNormal((FVector *)&puStack_20);
  *puStack_4 = *puVar2;
  puStack_4[1] = puVar2[1];
  puStack_4[2] = puVar2[2];
  return;
}


// ==== 101031cf FBox::GetExtrema

/* public: class FVector & __thiscall FBox::GetExtrema(int) */

FVector * __thiscall FBox::GetExtrema(FBox *this,int param_1)

{
                    /* 0x31cf  1317  ?GetExtrema@FBox@@QAEAAVFVector@@H@Z */
  return (FVector *)(this + param_1 * 0xc);
}


// ==== 101031d4 USubsystem::Tick

/* public: virtual void __thiscall USubsystem::Tick(float) */

void __thiscall USubsystem::Tick(USubsystem *this,float param_1)

{
                    /* 0x31d4  1963  ?Tick@USubsystem@@UAEXM@Z */
  return;
}


// ==== 101031d9 FArray::Realloc

/* protected: void __thiscall FArray::Realloc(int) */

void __thiscall FArray::Realloc(FArray *this,int param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x31d9  1754  ?Realloc@FArray@@IAEXH@Z */
  puStack_c = &LAB_101bbf70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  uVar1 = (**(code **)(*(int *)GMalloc + 4))
                    (*(undefined4 *)this,*(int *)(this + 8) * param_1,L"FArray");
  *(undefined4 *)this = uVar1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 101031de FPlane::PlaneDot

/* public: float __thiscall FPlane::PlaneDot(class FVector const &)const  */

float __thiscall FPlane::PlaneDot(FPlane *this,FVector *param_1)

{
                    /* 0x31de  1680  ?PlaneDot@FPlane@@QBEMABVFVector@@@Z */
  return (*(float *)(param_1 + 8) * *(float *)(this + 8) +
         *(float *)param_1 * *(float *)this + *(float *)(param_1 + 4) * *(float *)(this + 4)) -
         *(float *)(this + 0xc);
}


// ==== 101031e3 UObject::InitClassDefaultObject

/* public: void __thiscall UObject::InitClassDefaultObject(class UClass *,int) */

void __thiscall UObject::InitClassDefaultObject(UObject *this,UClass *param_1,int param_2)

{
  UObject *pUVar1;
  int iVar2;
  UClass *pUVar3;
  uchar *puVar4;
  int iVar5;
  UObject *pUVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x31e3  1465  ?InitClassDefaultObject@UObject@@QAEXPAVUClass@@H@Z */
  puStack_c = &LAB_101bccc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  appMemset(this,0,0x34);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(UClass **)(this + 0x24) = param_1;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  if (param_2 != 0) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  pUVar3 = *(UClass **)(param_1 + 0x34);
  pUVar6 = (UObject *)0x0;
  pUVar1 = (UObject *)(-(uint)(param_2 != 0) & (uint)this);
  iVar5 = 0;
  puVar4 = (uchar *)0x0;
  iVar2 = (**(code **)(*(int *)param_1 + 0x78))();
  InitProperties((uchar *)this,iVar2,pUVar3,puVar4,iVar5,pUVar1,pUVar6);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101031e8 FMemCache::FCacheItem::GetCost

/* public: int __thiscall FMemCache::FCacheItem::GetCost(void) */

int __thiscall FMemCache::FCacheItem::GetCost(FCacheItem *this)

{
                    /* 0x31e8  1293  ?GetCost@FCacheItem@FMemCache@@QAEHXZ */
  return *(int *)(this + 0x10);
}


// ==== 101031ed thunk_FUN_1016c6a0 thunk -> 1016c6a0

// ==== 101031f7 UStructProperty::SerializeItem

/* public: virtual void __thiscall UStructProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UStructProperty::SerializeItem(UStructProperty *this,FArchive *param_1,void *param_2,int param_3)

{
  int iVar1;
  
                    /* 0x31f7  1848  ?SerializeItem@UStructProperty@@UBEXAAVFArchive@@PAXH@Z */
  if ((((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x14) != 0)) &&
      (0x75 < *(int *)(param_1 + 4))) &&
     (((iVar1 = *(int *)(*(int *)(this + 0x78) + 0x20), iVar1 != 0x57 && (iVar1 != 0x58)) &&
      (iVar1 != 0x5a)))) {
    (**(code **)(**(int **)(this + 0x78) + 0x88))(param_1,param_2,0);
    return;
  }
  (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 0x78));
  (**(code **)(**(int **)(this + 0x78) + 0x84))(param_1,param_1,param_2);
  return;
}


// ==== 101031fc UState::Serialize

/* public: virtual void __thiscall UState::Serialize(class FArchive &) */

void __thiscall UState::Serialize(UState *this,FArchive *param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x31fc  1823  ?Serialize@UState@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101b9f20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UStruct::Serialize((UStruct *)this,param_1);
  uVar1 = thunk_FUN_10130860(param_1,this + 0x8c,this + 0x94);
  thunk_FUN_10130860(uVar1);
  uVar1 = thunk_FUN_10130800(param_1,this + 0xa0,this + 0x9c);
  thunk_FUN_10108c50(uVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103201 FSuperPointInfoHit::operator=

/* public: class FSuperPointInfoHit & __thiscall FSuperPointInfoHit::operator=(class
   FSuperPointInfoHit const &) */

FSuperPointInfoHit * __thiscall
FSuperPointInfoHit::operator=(FSuperPointInfoHit *this,FSuperPointInfoHit *param_1)

{
                    /* 0x3201  498  ??4FSuperPointInfoHit@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10103206 UMapProperty::operator=

/* public: class UMapProperty & __thiscall UMapProperty::operator=(class UMapProperty const &) */

UMapProperty * __thiscall UMapProperty::operator=(UMapProperty *this,UMapProperty *param_1)

{
                    /* 0x3206  530  ??4UMapProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return this;
}


// ==== 1010320b UByteProperty::operator_new

/* public: static void * __cdecl UByteProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UByteProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x320b  358  ??2UByteProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10103210 thunk_FUN_10130ed0 thunk -> 10130ed0

// ==== 10103215 FArchive::operator<<

/* public: virtual class FArchive & __thiscall FArchive::operator<<(class FName &) */

FArchive * __thiscall FArchive::operator<<(FArchive *this,FName *param_1)

{
                    /* 0x3215  556  ??6FArchive@@UAEAAV0@AAVFName@@@Z */
  return this;
}


// ==== 1010321f UTextBuffer::UTextBuffer

/* public: __thiscall UTextBuffer::UTextBuffer(unsigned short const *) */

UTextBuffer * __thiscall UTextBuffer::UTextBuffer(UTextBuffer *this,ushort *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x321f  287  ??0UTextBuffer@@QAE@PBG@Z */
  puStack_8 = &LAB_101bd3a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = UObject::vftable;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  uStack_4 = 0;
  *(undefined ***)(this + 0x34) = FOutputDevice::vftable;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  FString::FString((FString *)(this + 0x40),param_1);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103224 thunk_FUN_101147b0 thunk -> 101147b0

// ==== 10103229 FName::GetIndex

/* public: int __thiscall FName::GetIndex(void)const  */

int __thiscall FName::GetIndex(FName *this)

{
                    /* 0x3229  1334  ?GetIndex@FName@@QBEHXZ */
  return *(int *)this;
}


// ==== 1010322e FVector::operator|

/* public: float __thiscall FVector::operator|(class FVector const &)const  */

float __thiscall FVector::operator|(FVector *this,FVector *param_1)

{
                    /* 0x322e  658  ??UFVector@@QBEMABV0@@Z */
  return *(float *)(param_1 + 8) * *(float *)(this + 8) +
         *(float *)param_1 * *(float *)this + *(float *)(param_1 + 4) * *(float *)(this + 4);
}


// ==== 10103233 FArchive::~FArchive

/* public: virtual __thiscall FArchive::~FArchive(void) */

void __thiscall FArchive::~FArchive(FArchive *this)

{
                    /* 0x3233  291  ??1FArchive@@UAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1010323d FArray::IsValidIndex

/* public: int __thiscall FArray::IsValidIndex(int)const  */

int __thiscall FArray::IsValidIndex(FArray *this,int param_1)

{
                    /* 0x323d  1534  ?IsValidIndex@FArray@@QBEHH@Z */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return 1;
  }
  return 0;
}


// ==== 10103242 UObject::BindPackage

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::BindPackage(class UPackage *) */

void __cdecl UObject::BindPackage(UPackage *param_1)

{
  int iVar1;
  ushort *puVar2;
  void *pvVar3;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3242  818  ?BindPackage@UObject@@SAXPAVUPackage@@@Z */
  puStack_c = &LAB_101bccf0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  if (((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (*(int *)(param_1 + 0x38) == 0)) {
    iVar1 = *(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc;
    ExceptionList = &pvStack_10;
    puVar2 = appBaseDir();
    appSprintf(auStack_220,(ushort *)L"%s%s",puVar2,iVar1);
    *(undefined4 *)(param_1 + 0x38) = 1;
    GObjNoRegister = 0;
    pvVar3 = appGetDllHandle(auStack_220);
    *(void **)(param_1 + 0x34) = pvVar3;
    GObjNoRegister = 1;
    if (*(int *)(param_1 + 0x34) != 0) {
      if (GLog != (undefined *)0x0) {
        FOutputDevice::Logf2
                  ((FOutputDevice *)(*(int *)(_Names + *(int *)(param_1 + 0x20) * 4) + 0xc),
                   (EName)GLog,(ushort *)0x2f8);
      }
      ProcessRegistrants();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103247 UStruct::UStruct

/* public: __thiscall UStruct::UStruct(enum EStaticConstructor,int,unsigned short const *,unsigned
   short const *,unsigned long) */

UStruct * __thiscall
UStruct::UStruct(UStruct *this,EStaticConstructor param_1,int param_2,ushort *param_3,
                ushort *param_4,ulong param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3247  278  ??0UStruct@@QAE@W4EStaticConstructor@@HPBG1K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba02b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UField::UField((UField *)this,0,param_3,param_4,param_5);
  *(int *)(this + 0x4c) = param_2;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
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


// ==== 1010324c UClassProperty::Serialize

/* public: virtual void __thiscall UClassProperty::Serialize(class FArchive &) */

void __thiscall UClassProperty::Serialize(UClassProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x324c  1805  ?Serialize@UClassProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be080;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UObjectProperty::Serialize((UObjectProperty *)this,param_1);
  thunk_FUN_1012a9f0(param_1,this + 0x7c);
  if (*(int *)(this + 0x7c) == 0) {
    appFailAssert("MetaClass",".\\UnProp.cpp",0x3e1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103256 UObject::SafeLoadError

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* protected: static void __cdecl UObject::SafeLoadError(unsigned long,unsigned short const
   *,unsigned short const *,...) */

void __cdecl UObject::SafeLoadError(ulong param_1,ushort *param_2,ushort *param_3,...)

{
  FOutputDevice *this;
  FOutputDevice aFStack_2020 [8200];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3256  1782  ?SafeLoadError@UObject@@KAXKPBG0ZZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101bc7a0;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x1015a933;
  puStack_14 = &stack0xffffdfd4;
  ExceptionList = &pvStack_10;
  appGetVarArgs((ushort *)aFStack_2020,0x1000,&param_3);
  uStack_8 = 0;
  if (((param_1 & 0x2000) == 0) && (GLog != (undefined *)0x0)) {
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x2ff);
  }
  if ((param_1 & 8) != 0) {
    appThrowf((ushort *)&DAT_101da6a0);
  }
  if ((param_1 & 1) != 0) {
    FOutputDevice::Logf(aFStack_2020,(ushort *)GError);
  }
  if ((param_1 & 2) == 0) {
    FOutputDevice::Logf((FOutputDevice *)GWarn,(ushort *)GWarn);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010325b FPlane::operator*=

/* public: class FPlane __thiscall FPlane::operator*=(class FPlane const &) */

void __thiscall FPlane::operator*=(FPlane *this,FPlane *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *in_stack_00000008;
  
                    /* 0x325b  664  ??XFPlane@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 * *(float *)this;
  *(float *)(this + 4) = in_stack_00000008[1] * *(float *)(this + 4);
  *(float *)(this + 8) = in_stack_00000008[2] * *(float *)(this + 8);
  fVar1 = in_stack_00000008[3];
  fVar2 = *(float *)(this + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(float *)(this + 0xc) = fVar1 * fVar2;
  uVar3 = *(undefined4 *)(this + 8);
  *(float *)(param_1 + 0xc) = fVar1 * fVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}


// ==== 10103260 LocalizeProgress

/* unsigned short const * __cdecl LocalizeProgress(char const *,unsigned short const *,unsigned
   short const *) */

ushort * __cdecl LocalizeProgress(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x3260  1584  ?LocalizeProgress@@YAPBGPBDPBG1@Z */
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  puVar1 = Localize((ushort *)L"Progress",puVar1,param_2,param_3,0);
  return puVar1;
}


// ==== 10103265 UObjectExporterT3D::UObjectExporterT3D

/* public: __thiscall UObjectExporterT3D::UObjectExporterT3D(void) */

UObjectExporterT3D * __thiscall UObjectExporterT3D::UObjectExporterT3D(UObjectExporterT3D *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3265  253  ??0UObjectExporterT3D@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9228;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UExporter::UExporter((UExporter *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010326a UStruct::StructCompare

/* public: int __thiscall UStruct::StructCompare(void const *,void const *) */

int __thiscall UStruct::StructCompare(UStruct *this,void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piStack_4;
  
                    /* 0x326a  1952  ?StructCompare@UStruct@@QAEHPBX0@Z */
  if (this == (UStruct *)0x0) {
    piStack_4 = (int *)0x0;
  }
  else {
    piStack_4 = *(int **)(this + 0x48);
  }
  thunk_FUN_10114340();
  do {
    if (piStack_4 == (int *)0x0) {
      return 1;
    }
    iVar3 = 0;
    if (0 < piStack_4[0x10]) {
      do {
        iVar1 = piStack_4[0x11] * iVar3 + piStack_4[0x15];
        if (param_2 == (void *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar1 + (int)param_2;
        }
        iVar1 = (**(code **)(*piStack_4 + 0x84))(iVar1 + (int)param_1,iVar2);
        if (iVar1 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < piStack_4[0x10]);
    }
    piStack_4 = (int *)piStack_4[0xe];
    thunk_FUN_10114340();
  } while( true );
}


// ==== 1010326f appGetDllHandle

/* void * __cdecl appGetDllHandle(unsigned short const *) */

void * __cdecl appGetDllHandle(ushort *param_1)

{
  undefined1 *puVar1;
  ushort *puVar2;
  void *pvVar3;
  FString *pFVar4;
  undefined *puVar5;
  wchar_t *pwVar6;
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  FString aFStack_34 [12];
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x326f  2052  ?appGetDllHandle@@YAPAXPBG@Z */
  puStack_c = &LAB_101be570;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffa8;
  if (param_1 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Filename",".\\UnVcWin32.cpp",0x1ed);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar2 = appStristr(param_1,(ushort *)L"System\\orc");
  if (puVar2 != (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return (void *)0x0;
  }
  pvVar3 = (void *)FUN_10175b40();
  if (pvVar3 == (void *)0x0) {
    pFVar4 = (FString *)FString::FString(aFStack_34,param_1);
    iStack_8._0_1_ = 1;
    pwVar6 = L".dll";
    pFVar4 = (FString *)FString::operator+(pFVar4,(ushort *)aFStack_28);
    iStack_8._0_1_ = 2;
    FString::operator*(pFVar4);
    pvVar3 = (void *)FUN_10175b40(pwVar6);
    iStack_8._0_1_ = 1;
    FString::~FString(aFStack_28);
    iStack_8._0_1_ = 0;
    FString::~FString(aFStack_34);
    if (pvVar3 == (void *)0x0) {
      pFVar4 = (FString *)FString::FString(aFStack_4c,(ushort *)&DAT_101e16b8);
      iStack_8._0_1_ = 3;
      puVar5 = &DAT_101e16bc;
      pFVar4 = (FString *)FString::operator+(pFVar4,(ushort *)aFStack_40);
      iStack_8._0_1_ = 4;
      pFVar4 = (FString *)FString::operator+(pFVar4,(ushort *)aFStack_28);
      iStack_8._0_1_ = 5;
      pwVar6 = L".dll";
      pFVar4 = (FString *)FString::operator+(pFVar4,(ushort *)aFStack_34);
      iStack_8._0_1_ = 6;
      FString::operator*(pFVar4);
      pvVar3 = (void *)FUN_10175b40(pwVar6,param_1,puVar5);
      iStack_8._0_1_ = 5;
      FString::~FString(aFStack_34);
      iStack_8._0_1_ = 4;
      FString::~FString(aFStack_28);
      iStack_8._0_1_ = 3;
      FString::~FString(aFStack_40);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_4c);
    }
  }
  ExceptionList = pvStack_10;
  return pvVar3;
}


// ==== 10103274 thunk_FUN_101278f0 thunk -> 101278f0

// ==== 10103279 FPackageFileSummary::GetFileVersion

/* public: int __thiscall FPackageFileSummary::GetFileVersion(void)const  */

int __thiscall FPackageFileSummary::GetFileVersion(FPackageFileSummary *this)

{
                    /* 0x3279  1320  ?GetFileVersion@FPackageFileSummary@@QBEHXZ */
  return *(uint *)(this + 4) & 0xffff;
}


// ==== 1010327e ULinker::ULinker

/* public: __thiscall ULinker::ULinker(class UObject *,unsigned short const *) */

ULinker * __thiscall ULinker::ULinker(ULinker *this,UObject *param_1,ushort *param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x327e  236  ??0ULinker@@QAE@PAVUObject@@PBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbab0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(UObject **)(this + 0x34) = param_1;
  FPackageFileSummary::FPackageFileSummary((FPackageFileSummary *)(this + 0x38));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  uStack_4._1_3_ = (undefined3)((uint)uStack_4 >> 8);
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  uStack_4._0_1_ = 7;
  *(undefined4 *)(this + 0x9c) = 0x1e240;
  FString::FString((FString *)(this + 0xa0),param_2);
  uStack_4 = CONCAT31(uStack_4._1_3_,8);
  *(undefined4 *)(this + 0xac) = 0;
  if (*(int *)(this + 0x34) == 0) {
    appFailAssert("LinkerRoot",".\\UnLinker.cpp",0x54);
  }
  if (param_2 == (ushort *)0x0) {
    appFailAssert("InFilename",".\\UnLinker.cpp",0x55);
  }
  if (GIsEditor != 0) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x40000;
  }
  if (GIsClient != 0) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x10000;
  }
  if (GIsServer != 0) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x20000;
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103283 TArray<unsigned_short>::InsertZeroed

/* public: void __thiscall TArray<unsigned short>::InsertZeroed(int,int) */

void __thiscall
TArray<unsigned_short>::InsertZeroed(TArray<unsigned_short> *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x3283  1472  ?InsertZeroed@?$TArray@G@@QAEXHH@Z */
  FArray::Insert((FArray *)this,param_1,param_2,2);
  uVar2 = param_2 * 2 & 3;
  puVar3 = (undefined4 *)(*(int *)this + param_1 * 2);
  for (uVar1 = (param_2 & 0x7fffffffU) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


// ==== 10103288 UObject::execVectorToBool

/* public: void __thiscall UObject::execVectorToBool(struct FFrame &,void * const) */

void __thiscall UObject::execVectorToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  float afStack_c [3];
  
                    /* 0x3288  2406  ?execVectorToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  afStack_c[0] = 0.0;
  afStack_c[1] = 0.0;
  afStack_c[2] = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if ((((float)param_1 == 0.0) && ((float)afStack_c == 0.0)) && (afStack_c[0] == 0.0)) {
    *unaff_retaddr = 0;
    return;
  }
  *unaff_retaddr = 1;
  return;
}


// ==== 1010328d FMemCache::FCacheItem::GetData

/* public: unsigned char * __thiscall FMemCache::FCacheItem::GetData(void) */

uchar * __thiscall FMemCache::FCacheItem::GetData(FCacheItem *this)

{
                    /* 0x328d  1303  ?GetData@FCacheItem@FMemCache@@QAEPAEXZ */
  return *(uchar **)(this + 8);
}


// ==== 10103292 appClipboardCopy

/* void __cdecl appClipboardCopy(unsigned short const *) */

void __cdecl appClipboardCopy(ushort *param_1)

{
  HWND hWndNewOwner;
  BOOL BVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  HANDLE pvVar3;
  ushort *hMem;
  char *pcVar4;
  char *pcVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3292  2023  ?appClipboardCopy@@YAXPBG@Z */
  puStack_c = &LAB_101be330;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hWndNewOwner = GetActiveWindow();
  BVar1 = OpenClipboard(hWndNewOwner);
  if (BVar1 == 0) {
    ExceptionList = pvStack_10;
    return;
  }
  BVar1 = EmptyClipboard();
  if (BVar1 == 0) {
    appFailAssert("EmptyClipboard()",".\\UnVcWin32.cpp",0x197);
  }
  if ((GUnicode == 0) || (GUnicodeOS != 0)) {
    iVar2 = appStrlen(param_1);
    hMem = GlobalAlloc(0x2000,iVar2 * 2 + 2);
    appStrcpy(hMem,param_1);
    pvVar3 = SetClipboardData((-(uint)(GUnicode != 0) & 0xc) + 1,hMem);
    if (pvVar3 != (HANDLE)0x0) goto LAB_10175a6b;
    iVar2 = 0x1a6;
    pcVar5 = ".\\UnVcWin32.cpp";
    pcVar4 = "SetClipboardData( GUnicode ? CF_UNICODETEXT : CF_TEXT, Data )";
  }
  else {
    iVar2 = WideCharToMultiByte(0,0,(LPCWSTR)param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    lpMultiByteStr = GlobalAlloc(0x2000,iVar2 + 1);
    WideCharToMultiByte(0,0,(LPCWSTR)param_1,-1,lpMultiByteStr,iVar2,(LPCSTR)0x0,(LPBOOL)0x0);
    lpMultiByteStr[iVar2] = '\0';
    pvVar3 = SetClipboardData(1,lpMultiByteStr);
    if (pvVar3 != (HANDLE)0x0) goto LAB_10175a6b;
    iVar2 = 0x19f;
    pcVar5 = ".\\UnVcWin32.cpp";
    pcVar4 = "SetClipboardData( CF_TEXT, Data )";
  }
  appFailAssert(pcVar4,pcVar5,iVar2);
LAB_10175a6b:
  BVar1 = CloseClipboard();
  if (BVar1 == 0) {
    appFailAssert("CloseClipboard()",".\\UnVcWin32.cpp",0x1a8);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103297 FVector::AddBounded

/* public: void __thiscall FVector::AddBounded(class FVector const &,float) */

void __thiscall FVector::AddBounded(FVector *this,FVector *param_1,float param_2)

{
  undefined4 *puVar1;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
                    /* 0x3297  779  ?AddBounded@FVector@@QAEXABV1@M@Z */
  fStack_18 = *(float *)param_1 + *(float *)this;
  fStack_14 = *(float *)(param_1 + 4) + *(float *)(this + 4);
  fStack_10 = *(float *)(param_1 + 8) + *(float *)(this + 8);
  puVar1 = (undefined4 *)BoundToCube((FVector *)&fStack_18,(float)auStack_c);
  *(undefined4 *)this = *puVar1;
  *(undefined4 *)(this + 4) = puVar1[1];
  *(undefined4 *)(this + 8) = puVar1[2];
  return;
}


// ==== 1010329c UPackage::UPackage

/* public: __thiscall UPackage::UPackage(class UPackage const &) */

UPackage * __thiscall UPackage::UPackage(UPackage *this,UPackage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x329c  257  ??0UPackage@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b67d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101032a1 UObject::UObject

/* public: __thiscall UObject::UObject(enum EStaticConstructor,unsigned short const *,unsigned short
   const *,unsigned long) */

void __thiscall
UObject::UObject(UObject *this,EStaticConstructor param_1,ushort *param_2,ushort *param_3,
                ulong param_4)

{
                    /* 0x32a1  250  ??0UObject@@QAE@W4EStaticConstructor@@PBG1K@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x1c) = param_4 | 0x4000000;
  *(undefined4 *)(this + 0x20) = 0;
  GObjCurCount = GObjCurCount + 1;
  GObjNewCount = GObjNewCount + 1;
  if (GObjPeakCount < GObjCurCount) {
    GObjPeakCount = GObjCurCount;
  }
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  *(ushort **)(this + 0x20) = param_2;
  *(ushort **)(this + 0x18) = param_3;
  if (GObjInitialized == 0) {
    *(UObject **)(this + 0x14) = GAutoRegister;
    GAutoRegister = this;
  }
  return;
}


// ==== 101032a6 thunk_FUN_10126b90 thunk -> 10126b90

// ==== 101032b0 UObject::execAddEqual_IntInt

/* public: void __thiscall UObject::execAddEqual_IntInt(struct FFrame &,void * const) */

void __thiscall UObject::execAddEqual_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *unaff_EBX;
  int *piVar2;
  int unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x32b0  2143  ?execAddEqual_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = *piVar2 + unaff_ESI;
  *unaff_EBX = *piVar2;
  return;
}


// ==== 101032b5 UObject::ScriptConsoleExec

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall UObject::ScriptConsoleExec(unsigned short const *,class
   FOutputDevice &,class UObject *) */

int __thiscall
UObject::ScriptConsoleExec(UObject *this,ushort *param_1,FOutputDevice *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  FOutputDevice *this_00;
  int iVar3;
  undefined1 *puVar4;
  ushort auStack_c0 [72];
  int *piStack_30;
  int iStack_2c;
  UObject *pUStack_28;
  int iStack_24;
  int *piStack_1c;
  UFunction *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x32b5  1788  ?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
  puStack_c = &LAB_101bcc30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff34;
  iVar3 = 0;
  uStack_8 = 0;
  if ((GIsScriptable != 0) &&
     (ExceptionList = &pvStack_10, pUStack_28 = this, iVar2 = ParseToken(&param_1,auStack_c0,0x40,1)
     , iVar2 != 0)) {
    piStack_1c = (int *)FName::FName((FName *)&piStack_1c,auStack_c0,0);
    piStack_1c = (int *)*piStack_1c;
    if ((piStack_1c != (int *)0x0) &&
       ((pUStack_18 = FindFunction(this), pUStack_18 != (UFunction *)0x0 &&
        ((*(uint *)(pUStack_18 + 0x8c) & 0x200) != 0)))) {
      if (*(short *)(pUStack_18 + 0x96) == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puStack_14 = &stack0xffffff2c;
        puVar4 = &stack0xffffff2c;
      }
      thunk_FUN_10108420(puVar4,*(short *)(pUStack_18 + 0x96));
      iStack_24 = 0;
      iStack_2c = 0;
      thunk_FUN_10119210(pUStack_18);
      do {
        piVar1 = piStack_30;
        if ((piStack_30 == (int *)0x0) || ((piStack_30[0x12] & 0x480U) != 0x80)) goto LAB_1015f27d;
        if ((iVar3 == 0) &&
           (((param_3 != (UObject *)0x0 && (iVar2 = thunk_FUN_10132a30(piStack_30), iVar2 != 0)) &&
            (iVar2 = IsA(param_3,*(UClass **)(iVar2 + 0x78)), iVar2 != 0)))) {
          *(UObject **)(puVar4 + piVar1[0x15]) = param_3;
        }
        else {
          ParseNext(&param_1);
          param_1 = (ushort *)(**(code **)(*piVar1 + 0x9c))(param_1,puVar4 + piVar1[0x15],1);
          if (param_1 == (ushort *)0x0) {
            if ((*(byte *)(piVar1 + 0x12) & 0x10) == 0) {
              LocalizeError((ushort *)L"BadProperty",(ushort *)L"Core",(ushort *)0x0);
              FOutputDevice::Logf(this_00,(ushort *)param_2);
              iStack_24 = 1;
              goto LAB_1015f294;
            }
LAB_1015f27d:
            if (iStack_24 == 0) {
              (**(code **)(*(int *)pUStack_28 + 0x10))(pUStack_18,puVar4,0);
            }
LAB_1015f294:
            thunk_FUN_10119210(pUStack_18);
            while ((piVar1 = piStack_1c, piStack_1c != (int *)0x0 &&
                   ((piStack_1c[0x12] & 0x480U) == 0x80))) {
              (**(code **)(*piStack_1c + 0xac))(puVar4 + piStack_1c[0x15]);
              piStack_1c = (int *)piVar1[0xe];
              thunk_FUN_10114340();
            }
            ExceptionList = pvStack_10;
            return 1;
          }
        }
        piStack_30 = (int *)piVar1[0xe];
        thunk_FUN_10114340();
        iVar3 = iVar3 + 1;
        iStack_2c = iVar3;
      } while( true );
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 101032ba UObject::execConcat_StringString

/* public: void __thiscall UObject::execConcat_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execConcat_StringString(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  FFrame *pFStack_44;
  undefined4 *puStack_40;
  FArray aFStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  FArray *pFStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x32ba  2178  ?execConcat_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bac30;
  pFStack_c = ExceptionList;
  uStack_24 = 0;
  pvStack_20 = (void *)0x0;
  uStack_1c = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pFStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_40 = &uStack_24;
  pFStack_44 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pFStack_c = (FArray *)CONCAT31(pFStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffc8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar5 = (FArray *)FString::operator+((FString *)&stack0xffffffcc,(FString *)&uStack_28);
  pFVar4 = pFStack_c;
  uStack_18._0_1_ = 6;
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
  uStack_18._0_1_ = 7;
  uStack_28 = 0;
  uStack_24 = 0;
  FArray::Realloc(aFStack_2c,2);
  uStack_18._0_1_ = 5;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_2c);
  uStack_18._0_1_ = 8;
  puStack_40 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&pFStack_44,2);
  uStack_18 = CONCAT31(uStack_18._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&pFStack_44);
  uStack_18 = 9;
  FArray::Realloc((FArray *)&stack0xffffffc8,2);
  uStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffc8);
  ExceptionList = pvStack_20;
  return;
}


// ==== 101032bf FClassNetCache::GetFromIndex

/* public: class FFieldNetCache * __thiscall FClassNetCache::GetFromIndex(int) */

FFieldNetCache * __thiscall FClassNetCache::GetFromIndex(FClassNetCache *this,int param_1)

{
  int iVar1;
  
  while( true ) {
    if (this == (FClassNetCache *)0x0) {
      return (FFieldNetCache *)0x0;
    }
    iVar1 = *(int *)(this + 0xc);
    if ((iVar1 <= param_1) && (param_1 < *(int *)(this + 0x20) + iVar1)) break;
    this = *(FClassNetCache **)(this + 0x10);
  }
  return (FFieldNetCache *)(*(int *)(this + 0x1c) + (param_1 - iVar1) * 0xc);
}


// ==== 101032c4 FMalloc::operator=

/* public: class FMalloc & __thiscall FMalloc::operator=(class FMalloc const &) */

FMalloc * __thiscall FMalloc::operator=(FMalloc *this,FMalloc *param_1)

{
                    /* 0x32c4  459  ??4FMalloc@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 101032c9 thunk_FUN_10123d50 thunk -> 10123d50

// ==== 101032ce thunk_FUN_1011a5d0 thunk -> 1011a5d0

// ==== 101032d3 FFrame::ReadObject

/* public: class UObject * __thiscall FFrame::ReadObject(void) */

UObject * __thiscall FFrame::ReadObject(FFrame *this)

{
  UObject *pUVar1;
  
                    /* 0x32d3  1752  ?ReadObject@FFrame@@QAEPAVUObject@@XZ */
  pUVar1 = (UObject *)**(undefined4 **)(this + 0xc);
  *(undefined4 **)(this + 0xc) = *(undefined4 **)(this + 0xc) + 1;
  return pUVar1;
}


// ==== 101032d8 thunk_FUN_101689b0 thunk -> 101689b0

// ==== 101032dd UObject::execAddAdd_Byte

/* public: void __thiscall UObject::execAddAdd_Byte(struct FFrame &,void * const) */

void __thiscall UObject::execAddAdd_Byte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x32dd  2137  ?execAddAdd_Byte@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *puVar2 = *puVar2 + '\x01';
  return;
}


// ==== 101032e2 UPackage::Destroy

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UPackage::Destroy(void) */

void __thiscall UPackage::Destroy(UPackage *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x32e2  919  ?Destroy@UPackage@@UAEXXZ */
  puStack_c = &LAB_101bd790;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if ((*(int *)(this + 0x34) != 0) && (ExceptionList = &pvStack_10, GLog != (undefined *)0x0)) {
    ExceptionList = &pvStack_10;
    FOutputDevice::Logf2
              ((FOutputDevice *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc),(EName)GLog,
               (ushort *)0x2f8);
  }
  UObject::Destroy((UObject *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101032e7 FBox::operator[]

/* public: class FVector & __thiscall FBox::operator[](int) */

FVector * __thiscall FBox::operator[](FBox *this,int param_1)

{
                    /* 0x32e7  594  ??AFBox@@QAEAAVFVector@@H@Z */
  if (0x7fffffff < (uint)param_1) {
    appFailAssert("i>-1","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x7dc);
  }
  if (1 < param_1) {
    appFailAssert("i<2","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x7dd);
  }
  if (param_1 != 0) {
    this = this + 0xc;
  }
  return (FVector *)this;
}


// ==== 101032ec FVertexHit::operator=

/* public: class FVertexHit & __thiscall FVertexHit::operator=(class FVertexHit const &) */

FVertexHit * __thiscall FVertexHit::operator=(FVertexHit *this,FVertexHit *param_1)

{
                    /* 0x32ec  505  ??4FVertexHit@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 101032f1 UObject::execNoObject

/* public: void __thiscall UObject::execNoObject(struct FFrame &,void * const) */

void __thiscall UObject::execNoObject(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x32f1  2325  ?execNoObject@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined4 *)param_2 = 0;
  return;
}


// ==== 101032f6 FMemCache::FMemCache

/* public: __thiscall FMemCache::FMemCache(void) */

void __thiscall FMemCache::FMemCache(FMemCache *this)

{
                    /* 0x32f6  74  ??0FMemCache@@QAE@XZ */
  *(undefined4 *)this = 0;
  return;
}


// ==== 101032fb UField::StaticClass

/* public: static class UClass * __cdecl UField::StaticClass(void) */

UClass * __cdecl UField::StaticClass(void)

{
                    /* 0x32fb  1899  ?StaticClass@UField@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103300 UObject::execAcos

/* public: void __thiscall UObject::execAcos(struct FFrame &,void * const) */

void __thiscall UObject::execAcos(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x3300  2136  ?execAcos@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appAcos((double)(float)&uStack_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 10103305 operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,class FFieldNetCache &) */

FArchive * __cdecl operator<<(FArchive *param_1,FFieldNetCache *param_2)

{
  FArchive *pFVar1;
  
                    /* 0x3305  552  ??6@YAAAVFArchive@@AAV0@AAVFFieldNetCache@@@Z */
  pFVar1 = (FArchive *)(**(code **)(*(int *)param_1 + 0x18))(param_2);
  return pFVar1;
}


// ==== 1010330a UObject::ProcessRegistrants

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::ProcessRegistrants(void) */

void __cdecl UObject::ProcessRegistrants(void)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x330a  1734  ?ProcessRegistrants@UObject@@SAXXZ */
  puStack_c = &LAB_101bcce0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  GObjRegisterCount = GObjRegisterCount + 1;
  ExceptionList = &pvStack_10;
  if (GObjRegisterCount == 1) {
    for (; GAutoRegister != (UObject *)0x0; GAutoRegister = *(UObject **)(GAutoRegister + 0x14)) {
      thunk_FUN_101287a0(&GAutoRegister);
    }
    for (iVar1 = 0; iVar1 < DAT_103308bc; iVar1 = iVar1 + 1) {
      ConditionalRegister(*(UObject **)(_GObjRegistrants + iVar1 * 4));
    }
    thunk_FUN_10128110(0);
    if (GAutoRegister != (UObject *)0x0) {
      appFailAssert("!GAutoRegister",".\\UnObj.cpp",0x689);
    }
  }
  GObjRegisterCount = GObjRegisterCount + -1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103314 UObjectProperty::ExportTextItem

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UObjectProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UObjectProperty::ExportTextItem
          (UObjectProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  UObject *this_00;
  int iVar1;
  ushort *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3314  986  ?ExportTextItem@UObjectProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101be1c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  this_00 = *(UObject **)param_2;
  if (this_00 == (UObject *)0x0) {
    ExceptionList = &pvStack_10;
    appStrcpy(param_1,(ushort *)L"None");
  }
  else {
    iVar1 = *(int *)(_Names + *(int *)(*(int *)(this_00 + 0x24) + 0x20) * 4);
    ExceptionList = &pvStack_10;
    puVar2 = UObject::GetPathName(this_00,(UObject *)0x0,(ushort *)0x0);
    appSprintf(param_1,(ushort *)L"%s\'%s\'",iVar1 + 0xc,puVar2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103319 appCleanFileCache

/* void __cdecl appCleanFileCache(void) */

void __cdecl appCleanFileCache(void)

{
  ushort *puVar1;
  FOutputDevice *pFVar2;
  ushort *puVar3;
  FString *pFVar4;
  int iVar5;
  USystem *pUVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  FString aFStack_58 [12];
  int iStack_4c;
  int iStack_48;
  FOutputDevice *pFStack_40;
  int iStack_3c;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  
                    /* 0x3319  2022  ?appCleanFileCache@@YAXXZ */
  puStack_c = &LAB_101be708;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff9c;
  uStack_8 = 1;
  uStack_7 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = FString::operator*((FString *)(GSys + 0x4c));
  FString::Printf((ushort *)&pFStack_40,L"%s\\*.tmp",puVar1);
  uStack_8 = 2;
  pFVar2 = pFStack_40;
  if (iStack_3c == 0) {
    pFVar2 = (FOutputDevice *)&DAT_101cdd44;
  }
  (**(code **)(*(int *)GFileManager + 0x30))(&iStack_4c,pFVar2,1,0);
  uStack_8 = 3;
  for (iVar7 = 0; iStack_18 = iVar7, iVar7 < iStack_48; iVar7 = iVar7 + 1) {
    puVar1 = FString::operator*((FString *)(iStack_4c + iVar7 * 0xc));
    puVar3 = FString::operator*((FString *)(GSys + 0x4c));
    pFVar4 = (FString *)FString::Printf((ushort *)aFStack_58,L"%s\\%s",puVar3,puVar1);
    uStack_8 = 4;
    FString::operator=((FString *)&pFStack_40,pFVar4);
    uStack_8 = 3;
    FString::~FString(aFStack_58);
    if (GLog != (undefined *)0x0) {
      pFVar2 = pFStack_40;
      if (iStack_3c == 0) {
        pFVar2 = (FOutputDevice *)&DAT_101cdd44;
      }
      FOutputDevice::Logf2(pFVar2,(ushort *)GLog);
    }
    pFVar2 = pFStack_40;
    if (iStack_3c == 0) {
      pFVar2 = (FOutputDevice *)&DAT_101cdd44;
    }
    (**(code **)(*(int *)GFileManager + 0x14))(pFVar2,0,0);
  }
  uStack_8 = 2;
  thunk_FUN_10124a00();
  _uStack_8 = CONCAT31(uStack_7,1);
  FString::~FString((FString *)&pFStack_40);
  uStack_8 = 6;
  uStack_7 = 0;
  puVar10 = &DAT_101e199c;
  pFVar4 = (FString *)FString::operator*((FString *)(GSys + 0x4c),(ushort *)&pFStack_40);
  uStack_8 = 7;
  pUVar6 = GSys + 0x58;
  pFVar4 = (FString *)FString::operator+(pFVar4,aFStack_58);
  uStack_8 = 8;
  iVar7 = *(int *)GFileManager;
  uVar9 = 0;
  uVar8 = 1;
  puVar1 = FString::operator*(pFVar4);
  (**(code **)(iVar7 + 0x30))(&iStack_4c,puVar1,uVar8,uVar9,pUVar6,puVar10);
  uStack_8 = 10;
  FString::~FString(aFStack_58);
  _uStack_8 = CONCAT31(uStack_7,0xb);
  FString::~FString((FString *)&pFStack_40);
  if (*(int *)(GSys + 0x3c) != 0) {
    for (iVar7 = 0; iStack_1c = iVar7, iVar7 < iStack_48; iVar7 = iVar7 + 1) {
      puVar1 = FString::operator*((FString *)(iStack_4c + iVar7 * 0xc));
      puVar3 = FString::operator*((FString *)(GSys + 0x4c));
      FString::Printf((ushort *)&pFStack_40,L"%s\\%s",puVar3,puVar1);
      _uStack_8 = CONCAT31(uStack_7,0xc);
      iVar5 = FUN_10176a30();
      if (*(int *)(GSys + 0x3c) < iVar5) {
        if (GLog != (undefined *)0x0) {
          pFVar2 = pFStack_40;
          if (iStack_3c == 0) {
            pFVar2 = (FOutputDevice *)&DAT_101cdd44;
          }
          FOutputDevice::Logf2(pFVar2,(ushort *)GLog);
        }
        pFVar2 = pFStack_40;
        if (iStack_3c == 0) {
          pFVar2 = (FOutputDevice *)&DAT_101cdd44;
        }
        (**(code **)(*(int *)GFileManager + 0x14))(pFVar2,0,0);
      }
      _uStack_8 = CONCAT31(uStack_7,0xb);
      FString::~FString((FString *)&pFStack_40);
    }
  }
  _uStack_8 = CONCAT31(uStack_7,6);
  thunk_FUN_10124a00();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010331e thunk_FUN_1011dd80 thunk -> 1011dd80

// ==== 10103323 FString::InStr

/* public: int __thiscall FString::InStr(class FString const &,int)const  */

int __thiscall FString::InStr(FString *this,FString *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x3323  1455  ?InStr@FString@@QBEHABV1@H@Z */
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = InStr(this,*(ushort **)param_1,param_2);
    return iVar1;
  }
  iVar1 = InStr(this,&DAT_101cdd44,param_2);
  return iVar1;
}


// ==== 10103328 FMemMark::Pop

/* public: void __thiscall FMemMark::Pop(void) */

void __thiscall FMemMark::Pop(FMemMark *this)

{
                    /* 0x3328  1683  ?Pop@FMemMark@@QAEXXZ */
  if (*(FTaggedMemory **)(this + 8) != *(FTaggedMemory **)(*(FMemStackFrame **)(this + 4) + 0xc)) {
    FMemStackFrame::FreeChunks(*(FMemStackFrame **)(this + 4),*(FTaggedMemory **)(this + 8));
  }
  **(undefined4 **)(this + 4) = *(undefined4 *)this;
  return;
}


// ==== 1010332d thunk_FUN_10149490 thunk -> 10149490

// ==== 10103332 UObjectExporterT3D::ExportText

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall UObjectExporterT3D::ExportText(class UObject *,unsigned short
   const *,class FOutputDevice &,class FFeedbackContext *) */

int __thiscall
UObjectExporterT3D::ExportText
          (UObjectExporterT3D *this,UObject *param_1,ushort *param_2,FOutputDevice *param_3,
          FFeedbackContext *param_4)

{
  UClass *pUVar1;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3332  975
                       ?ExportText@UObjectExporterT3D@@UAEHPAVUObject@@PBGAAVFOutputDevice@@PAVFFeedbackContext@@@Z
                        */
  puStack_c = &LAB_101b97c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  appSpc(*(int *)(this + 0x44));
  FOutputDevice::Logf(this_00,(ushort *)param_3);
  pUVar1 = *(UClass **)(param_1 + 0x24);
  UObject::ExportProperties
            (param_3,pUVar1,(uchar *)param_1,*(int *)(this + 0x44) + 3,pUVar1,
             *(uchar **)(pUVar1 + 0x4f4));
  appSpc(*(int *)(this + 0x44));
  FOutputDevice::Logf(this_01,(ushort *)param_3);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10103337 thunk_FUN_1015ce60 thunk -> 1015ce60

// ==== 1010333c UStrProperty::~UStrProperty

/* public: virtual __thiscall UStrProperty::~UStrProperty(void) */

void __thiscall UStrProperty::~UStrProperty(UStrProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x333c  346  ??1UStrProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7cd8;
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


// ==== 10103346 FCoords::operator*

/* public: class FCoords __thiscall FCoords::operator*(class FCoords const &)const  */

void __thiscall FCoords::operator*(FCoords *this,FCoords *param_1)

{
  FCoords *pFVar1;
  int iVar2;
  FCoords *in_stack_00000008;
  FCoords aFStack_30 [48];
  
  pFVar1 = aFStack_30;
                    /* 0x3346  599  ??DFCoords@@QBE?AV0@ABV0@@Z */
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


// ==== 10103350 ULinkerLoad::FindExportIndex

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall ULinkerLoad::FindExportIndex(class FName,class FName,class FName,int) */

int __thiscall
ULinkerLoad::FindExportIndex(ULinkerLoad *this,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  UObject *pUVar2;
  int iVar3;
  int iVar4;
  FName aFStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3350  1002  ?FindExportIndex@ULinkerLoad@@QAEHVFName@@00H@Z */
  puStack_c = &LAB_101bbb90;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    iVar4 = *(int *)(this + (param_2 * 7 + param_3 * 0x1f + param_4 & 0xffU) * 4 + 0x100);
    while (iVar4 != -1) {
      iVar3 = *(int *)(this + 0x90) + iVar4 * 0x24;
      if (((*(int *)(iVar3 + 0xc) == param_4) &&
          (((*(int *)(iVar3 + 8) == param_5 || (param_5 == -1)) &&
           (piVar1 = (int *)GetExportClassPackage(this,(int)auStack_20), *piVar1 == param_3)))) &&
         (piVar1 = (int *)GetExportClassName(this,(int)auStack_24), *piVar1 == param_2)) {
        ExceptionList = pvStack_10;
        return iVar4;
      }
      iVar4 = *(int *)(iVar3 + 0x20);
    }
    for (iVar4 = 0; iStack_18 = iVar4, iVar4 < *(int *)(this + 0x94); iVar4 = iVar4 + 1) {
      piVar1 = (int *)(*(int *)(this + 0x90) + iVar4 * 0x24);
      if ((piVar1[3] == param_4) && ((param_5 == -1 || (piVar1[2] == param_5)))) {
        pUVar2 = IndexToObject(this,*piVar1);
        for (iVar3 = thunk_FUN_10149630(pUVar2); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
          if (*(int *)(iVar3 + 0x20) == param_2) {
            ExceptionList = pvStack_10;
            return iVar4;
          }
        }
      }
    }
    iVar4 = appStricmp((ushort *)(*(int *)(_Names + param_2 * 4) + 0xc),(ushort *)L"Mesh");
    if (iVar4 != 0) break;
    piVar1 = (int *)FName::FName(aFStack_28,(ushort *)L"LodMesh",1);
    param_2 = *piVar1;
  }
  ExceptionList = pvStack_10;
  return -1;
}


// ==== 10103355 TArray<unsigned_short>::operator()

/* public: unsigned short & __thiscall TArray<unsigned short>::operator()(int) */

ushort * __thiscall TArray<unsigned_short>::operator()(TArray<unsigned_short> *this,int param_1)

{
                    /* 0x3355  655  ??R?$TArray@G@@QAEAAGH@Z */
  return (ushort *)(*(int *)this + param_1 * 2);
}


// ==== 1010335f FString::Right

/* public: class FString __thiscall FString::Right(int)const  */

int __thiscall FString::Right(FString *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int in_stack_00000008;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x335f  1775  ?Right@FString@@QBE?AV1@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b70e9;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    puVar3 = &DAT_101cdd44;
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    puVar3 = *(undefined2 **)this;
    iVar2 = iVar1 + -1;
    iVar1 = iVar1 + -1;
  }
  if (in_stack_00000008 < 0) {
    iVar1 = 0;
  }
  else if (in_stack_00000008 < iVar1) {
    iVar1 = in_stack_00000008;
  }
  ExceptionList = &pvStack_c;
  FString((FString *)param_1,puVar3 + (iVar2 - iVar1));
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 10103364 UStruct::Link

/* public: virtual void __thiscall UStruct::Link(class FArchive &,int) */

void __thiscall UStruct::Link(UStruct *this,FArchive *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  UStruct *pUVar9;
  undefined **appuStack_bc [14];
  undefined1 *puStack_84;
  void *pvStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  int *piStack_48;
  UStruct *pUStack_40;
  int *piStack_38;
  UStruct *pUStack_30;
  int *apiStack_28 [2];
  int *piStack_20;
  int *piStack_1c;
  uint uStack_14;
  UStruct *pUStack_10;
  UStruct *pUStack_c;
  int *piStack_8;
  
                    /* 0x3364  1566  ?Link@UStruct@@UAEXAAVFArchive@@H@Z */
  puStack_7c = &LAB_101ba700;
  pvStack_80 = ExceptionList;
  puStack_84 = &stack0xffffff38;
  uStack_78 = 1;
  pUStack_30 = this;
  if (param_2 == 0) {
    piStack_20 = (int *)0x0;
    ExceptionList = &pvStack_80;
    puStack_84 = &stack0xffffff38;
    for (iVar2 = *(int *)(this + 0x48);
        (param_2 = iVar2, iVar2 != 0 && (*(UStruct **)(iVar2 + 0x18) == this));
        iVar2 = *(int *)(iVar2 + 0x38)) {
      piVar4 = (int *)thunk_FUN_10132a00(iVar2);
      if (piVar4 != (int *)0x0) {
        iVar5 = thunk_FUN_101329d0(piVar4);
        iVar2 = piVar4[0x15];
        if (iVar5 == 0) {
          piStack_8 = (int *)0x0;
        }
        else {
          piStack_8 = *(int **)(iVar5 + 0x78);
        }
        (**(code **)(*piVar4 + 0x80))(param_1,piStack_20);
        piVar4[0x15] = iVar2;
        piStack_20 = piVar4;
        iVar5 = thunk_FUN_101329d0(piVar4);
        iVar2 = param_2;
        if (iVar5 != 0) {
          iVar2 = thunk_FUN_101329d0(piVar4);
          *(int **)(iVar2 + 0x78) = piStack_8;
          iVar2 = param_2;
        }
      }
    }
  }
  else {
    ExceptionList = &pvStack_80;
    *(undefined4 *)(this + 0x4c) = 0;
    iVar2 = (**(code **)(*(int *)this + 0x7c))();
    if (iVar2 != 0) {
      iVar2 = *(int *)param_1;
      uVar3 = (**(code **)(*(int *)this + 0x7c))();
      (**(code **)(iVar2 + 0x10))(uVar3);
      piVar4 = (int *)(**(code **)(*(int *)this + 0x7c))();
      iVar2 = (**(code **)(*piVar4 + 0x78))();
      *(uint *)(this + 0x4c) = iVar2 + 3U & 0xfffffffc;
    }
    piStack_1c = (int *)0x0;
    for (iVar2 = *(int *)(this + 0x48);
        (iVar2 != 0 &&
        ((**(code **)(*(int *)param_1 + 0x10))(iVar2), *(UStruct **)(iVar2 + 0x18) == this));
        iVar2 = *(int *)(iVar2 + 0x38)) {
      piVar4 = (int *)thunk_FUN_10132a00(iVar2);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x80))(param_1,piStack_1c);
        *(int *)(this + 0x4c) = piVar4[0x11] * piVar4[0x10] + piVar4[0x15];
        piStack_1c = piVar4;
      }
    }
    *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + 3U & 0xfffffffc;
  }
  uStack_78 = 3;
  pUVar9 = this + 0x6c;
  pUStack_40 = pUVar9;
  thunk_FUN_10119210(this);
  while (uVar1 = uStack_14, uStack_14 != 0) {
    iVar2 = thunk_FUN_10132a30(uStack_14);
    if ((((iVar2 != 0) || (iVar2 = thunk_FUN_101329a0(uVar1), iVar2 != 0)) ||
        (iVar2 = thunk_FUN_10132a60(uVar1), iVar2 != 0)) ||
       (iVar2 = thunk_FUN_10132a90(uVar1), iVar2 != 0)) {
      *(uint *)pUVar9 = uVar1;
      pUVar9 = (UStruct *)(uVar1 + 100);
      pUStack_40 = pUVar9;
    }
    uStack_14 = *(uint *)(uVar1 + 0x38);
    thunk_FUN_10114340();
  }
  *(uint *)pUVar9 = 0;
  uStack_78._0_1_ = 5;
  uStack_78._1_3_ = 0;
  thunk_FUN_10135d90();
  uStack_78 = CONCAT31(uStack_78._1_3_,6);
  pUVar9 = this + 0x70;
  pUStack_10 = this + 0x74;
  pUStack_c = this + 0x78;
  param_2 = (int)pUVar9;
  thunk_FUN_10119210(this);
  while (piVar4 = piStack_38, piStack_38 != (int *)0x0) {
    if (((*(byte *)(piStack_38 + 0x12) & 0x20) != 0) && (GIsEditor == 0)) {
      piStack_38[0x1a] = (int)piStack_38;
      FArchive::FArchive((FArchive *)appuStack_bc);
      uStack_78 = CONCAT31(uStack_78._1_3_,7);
      param_1 = (FArchive *)(uint)*(ushort *)(piVar4 + 0x14);
      piVar6 = (int *)(**(code **)(*piVar4 + 0x74))();
      (**(code **)(*piVar6 + 0x90))(&param_1,appuStack_bc);
      piStack_8 = piVar4;
      thunk_FUN_10134440(&piStack_8,&param_1);
      thunk_FUN_10119210(this);
      while (piVar6 = piStack_48, piStack_48 != piVar4) {
        if ((*(byte *)(piStack_48 + 0x12) & 0x20) != 0) {
          apiStack_28[0] = piStack_48;
          piVar7 = (int *)thunk_FUN_101325e0(apiStack_28);
          if (piVar7 == (int *)0x0) {
            appFailAssert("iCodePtr",".\\UnClass.cpp",0x1b5);
          }
          uStack_14 = (uint)*(ushort *)(piVar6 + 0x14);
          if ((int)param_1 - (uint)*(ushort *)(piVar4 + 0x14) == *piVar7 - uStack_14) {
            iVar2 = (**(code **)(*piVar6 + 0x74))();
            pvVar8 = (void *)(*(int *)(iVar2 + 0x54) + uStack_14);
            uStack_14 = (uint)*(ushort *)(piVar4 + 0x14);
            iVar2 = (**(code **)(*piVar4 + 0x74))();
            iVar2 = appMemcmp((void *)(*(int *)(iVar2 + 0x54) + uStack_14),pvVar8,
                              (int)param_1 - (uint)*(ushort *)(piVar4 + 0x14));
            if (iVar2 == 0) {
              piVar6[0x1a] = piVar4[0x1a];
            }
          }
        }
        piStack_48 = (int *)piVar6[0xe];
        thunk_FUN_10114340();
        this = pUStack_30;
      }
      uStack_78 = CONCAT31(uStack_78._1_3_,6);
      appuStack_bc[0] = FArchive::vftable;
      pUVar9 = (UStruct *)param_2;
    }
    if ((piVar4[0x12] & 0x400000U) != 0) {
      *(int **)pUStack_c = piVar4;
      pUStack_c = (UStruct *)(piVar4 + 0x18);
    }
    if ((piVar4[0x12] & 0x4000U) != 0) {
      *(int **)pUStack_10 = piVar4;
      pUStack_10 = (UStruct *)(piVar4 + 0x17);
    }
    *(int **)pUVar9 = piVar4;
    pUVar9 = (UStruct *)(piVar4 + 0x16);
    piStack_38 = (int *)piVar4[0xe];
    param_2 = (int)pUVar9;
    thunk_FUN_10114340();
  }
  *(int *)pUVar9 = 0;
  *(int *)pUStack_10 = 0;
  *(int *)pUStack_c = 0;
  thunk_FUN_10134410();
  uStack_78 = CONCAT31(uStack_78._1_3_,5);
  thunk_FUN_10135de0();
  ExceptionList = pvStack_80;
  return;
}


// ==== 10103369 FSuperPointInfoHit::FSuperPointInfoHit

/* public: __thiscall FSuperPointInfoHit::FSuperPointInfoHit(class ASuperPointInfo *,int) */

void __thiscall
FSuperPointInfoHit::FSuperPointInfoHit
          (FSuperPointInfoHit *this,ASuperPointInfo *param_1,int param_2)

{
                    /* 0x3369  157  ??0FSuperPointInfoHit@@QAE@PAVASuperPointInfo@@H@Z */
  *(ASuperPointInfo **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


// ==== 1010336e FMemStackStats::operator=

/* public: class FMemStackStats & __thiscall FMemStackStats::operator=(class FMemStackStats const &)
    */

FMemStackStats * __thiscall FMemStackStats::operator=(FMemStackStats *this,FMemStackStats *param_1)

{
                    /* 0x336e  465  ??4FMemStackStats@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 10103373 thunk_FUN_10109340 thunk -> 10109340

// ==== 10103378 UFunction::UFunction

/* public: __thiscall UFunction::UFunction(class UFunction *) */

UFunction * __thiscall UFunction::UFunction(UFunction *this,UFunction *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3378  227  ??0UFunction@@QAE@PAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this,(UStruct *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103382 thunk_FUN_1012b550 thunk -> 1012b550

// ==== 10103387 UIntProperty::UIntProperty

/* public: __thiscall UIntProperty::UIntProperty(class UIntProperty const &) */

UIntProperty * __thiscall UIntProperty::UIntProperty(UIntProperty *this,UIntProperty *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3387  228  ??0UIntProperty@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,(UProperty *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010338c TArray<unsigned_short>::operator()

/* public: unsigned short const & __thiscall TArray<unsigned short>::operator()(int)const  */

ushort * __thiscall TArray<unsigned_short>::operator()(TArray<unsigned_short> *this,int param_1)

{
                    /* 0x338c  656  ??R?$TArray@G@@QBEABGH@Z */
  return (ushort *)(*(int *)this + param_1 * 2);
}


// ==== 10103391 FTransactionBase::operator=

/* public: class FTransactionBase & __thiscall FTransactionBase::operator=(class FTransactionBase
   const &) */

FTransactionBase * __thiscall
FTransactionBase::operator=(FTransactionBase *this,FTransactionBase *param_1)

{
                    /* 0x3391  501  ??4FTransactionBase@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 1010339b appMemIsZero

/* int __cdecl appMemIsZero(void const *,int) */

int __cdecl appMemIsZero(void *param_1,int param_2)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return 1;
    }
    cVar1 = *(char *)param_1;
    param_2 = param_2 + -1;
    param_1 = (void *)((int)param_1 + 1);
  } while (cVar1 == '\0');
  return 0;
}


// ==== 101033a5 UBoolProperty::ExportTextItem

/* public: virtual void __thiscall UBoolProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UBoolProperty::ExportTextItem
          (UBoolProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  wchar_t *pwVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x33a5  978  ?ExportTextItem@UBoolProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101bde50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((param_4 & 1U) == 0) {
    pwVar1 = L"True";
    if ((*(uint *)param_2 & *(uint *)(this + 0x78)) == 0) {
      pwVar1 = L"False";
    }
  }
  else if ((*(uint *)param_2 & *(uint *)(this + 0x78)) == 0) {
    pwVar1 = GFalse;
  }
  else {
    pwVar1 = GTrue;
  }
  ExceptionList = &pvStack_10;
  appSprintf(param_1,(ushort *)&DAT_101defac,pwVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101033aa FArchiveDummySave::FArchiveDummySave

/* public: __thiscall FArchiveDummySave::FArchiveDummySave(class FArchiveDummySave const &) */

FArchiveDummySave * __thiscall
FArchiveDummySave::FArchiveDummySave(FArchiveDummySave *this,FArchiveDummySave *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x33aa  9  ??0FArchiveDummySave@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6668;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FArchive::FArchive((FArchive *)this,(FArchive *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101033af FCoords::operator/

/* public: class FCoords __thiscall FCoords::operator/(class FScale const &)const  */

void __thiscall FCoords::operator/(FCoords *this,FScale *param_1)

{
  FCoords *pFVar1;
  int iVar2;
  FScale *in_stack_00000008;
  FCoords aFStack_30 [48];
  
  pFVar1 = aFStack_30;
                    /* 0x33af  645  ??KFCoords@@QBE?AV0@ABVFScale@@@Z */
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


// ==== 101033b4 thunk_FUN_10132470 thunk -> 10132470

// ==== 101033b9 thunk_FUN_10114d10 thunk -> 10114d10

// ==== 101033be thunk_FUN_101287a0 thunk -> 101287a0

// ==== 101033c3 UConst::~UConst

/* public: virtual __thiscall UConst::~UConst(void) */

void __thiscall UConst::~UConst(UConst *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x33c3  323  ??1UConst@@UAE@XZ */
  puStack_8 = &LAB_101b7853;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0x40));
  uStack_4 = 0xffffffff;
  UField::~UField((UField *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101033c8 thunk_FUN_10174e70 thunk -> 10174e70

// ==== 101033cd thunk_FUN_10149350 thunk -> 10149350

// ==== 101033d2 UBoolProperty::NetSerializeItem

/* public: virtual int __thiscall UBoolProperty::NetSerializeItem(class FArchive &,class UPackageMap
   *,void *)const  */

int __thiscall
UBoolProperty::NetSerializeItem
          (UBoolProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
  void *pvVar1;
  
                    /* 0x33d2  1630
                       ?NetSerializeItem@UBoolProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  pvVar1 = param_3;
  param_3 = (void *)CONCAT31(param_3._1_3_,(*(uint *)(this + 0x78) & *(uint *)param_3) != 0);
  (**(code **)(*(int *)param_1 + 8))(&param_3,1);
  if ((char)param_1 != '\0') {
    *(uint *)pvVar1 = *(uint *)pvVar1 | *(uint *)(this + 0x78);
    return 1;
  }
  *(uint *)pvVar1 = *(uint *)pvVar1 & ~*(uint *)(this + 0x78);
  return 1;
}


// ==== 101033d7 appCos

/* double __cdecl appCos(double) */

double __cdecl appCos(double param_1)

{
  float10 fVar1;
  
                    /* 0x33d7  2028  ?appCos@@YANN@Z */
  fVar1 = (float10)FUN_1017c6b0();
  return (double)fVar1;
}


// ==== 101033dc thunk_FUN_101484d0 thunk -> 101484d0

// ==== 101033e1 FEdge::FEdge

/* public: __thiscall FEdge::FEdge(class FVector,class FVector) */

void __thiscall
FEdge::FEdge(FEdge *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
                    /* 0x33e1  43  ??0FEdge@@QAE@VFVector@@0@Z */
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x14) = param_7;
  return;
}


// ==== 101033eb thunk_FUN_10124b40 thunk -> 10124b40

// ==== 101033f0 UObject::execStaticSaveConfig

/* public: void __thiscall UObject::execStaticSaveConfig(struct FFrame &,void * const) */

void __thiscall UObject::execStaticSaveConfig(UObject *this,FFrame *param_1,void *param_2)

{
  UObject *this_00;
  ulong uVar1;
  ushort *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x33f0  2369  ?execStaticSaveConfig@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101baaa0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = (ushort *)0x0;
  uVar1 = 0x4000;
  this_00 = UClass::GetDefaultObject(*(UClass **)(this + 0x24));
  SaveConfig(this_00,uVar1,puVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101033f5 FCriticalSection::Unlock

/* public: void __thiscall FCriticalSection::Unlock(void) */

void __thiscall FCriticalSection::Unlock(FCriticalSection *this)

{
                    /* 0x33f5  1989  ?Unlock@FCriticalSection@@QAEXXZ */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
  return;
}


// ==== 101033fa UObject::execDivideEqual_ByteByte

/* public: void __thiscall UObject::execDivideEqual_ByteByte(struct FFrame &,void * const) */

void __thiscall UObject::execDivideEqual_ByteByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  byte *unaff_EBX;
  byte unaff_SI;
  byte *pbVar2;
  undefined4 uStack_4;
  
                    /* 0x33fa  2187  ?execDivideEqual_ByteByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)this & 0xffffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,(int)&uStack_4 + 3);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pbVar2 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pbVar2 = &stack0xfffffff7;
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
  if (unaff_SI != 0) {
    bVar1 = (byte)((ulonglong)*pbVar2 / (ulonglong)(longlong)(int)(uint)unaff_SI);
    *pbVar2 = bVar1;
    *unaff_EBX = bVar1;
    return;
  }
  *unaff_EBX = 0;
  return;
}


// ==== 10103409 FQuat::FQuatToAngAxis

/* public: class FQuat __thiscall FQuat::FQuatToAngAxis(void) */

float * __thiscall FQuat::FQuatToAngAxis(FQuat *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float *in_stack_00000004;
  
                    /* 0x3409  994  ?FQuatToAngAxis@FQuat@@QAE?AV1@XZ */
  dVar3 = appSin((double)*(float *)(this + 0xc));
  fVar2 = (float)dVar3;
  if (1e-05 <= fVar2) {
    fVar1 = *(float *)(this + 8);
    *in_stack_00000004 = fVar1 / fVar2;
    in_stack_00000004[1] = *(float *)(this + 4) / fVar2;
    in_stack_00000004[2] = fVar1 / fVar2;
    dVar3 = appAcos((double)*(float *)(this + 0xc));
    in_stack_00000004[3] = (float)((float10)dVar3 + (float10)dVar3);
    return in_stack_00000004;
  }
  *in_stack_00000004 = 0.0;
  in_stack_00000004[1] = 0.0;
  in_stack_00000004[2] = 1.0;
  in_stack_00000004[3] = 0.0;
  return in_stack_00000004;
}


// ==== 1010340e UFunction::StaticClass

/* public: static class UClass * __cdecl UFunction::StaticClass(void) */

UClass * __cdecl UFunction::StaticClass(void)

{
                    /* 0x340e  1902  ?StaticClass@UFunction@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103413 UStruct::operator_new

/* public: static void * __cdecl UStruct::operator new(unsigned int,enum EInternal *) */

void * __cdecl UStruct::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x3413  414  ??2UStruct@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010341d UObject::ResetConfig

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::ResetConfig(class UClass *) */

void __cdecl UObject::ResetConfig(UClass *param_1)

{
  UStruct *this;
  wchar_t *pwVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  UObject *pUVar6;
  int iVar7;
  UClass *pUVar8;
  undefined4 uVar9;
  ushort auStack_fa28 [32008];
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x341d  1769  ?ResetConfig@UObject@@SAXPAVUClass@@@Z */
  puStack_c = &LAB_101bd850;
  pvStack_10 = ExceptionList;
  puStack_18 = (ushort *)0x10166c43;
  puStack_14 = &stack0xffff05cc;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x4c0) == 0x2e8) {
    pwVar1 = L"Default.ini";
  }
  else {
    if (*(int *)(param_1 + 0x4c0) != 0x2e9) {
      return;
    }
    pwVar1 = L"DefUser.ini";
  }
  iVar3 = *(int *)GConfig;
  uVar9 = 32000;
  puVar5 = auStack_fa28;
  ExceptionList = &pvStack_10;
  puVar2 = GetPathName((UObject *)param_1,(UObject *)0x0,(ushort *)0x0);
  iVar3 = (**(code **)(iVar3 + 0x18))(puVar2,puVar5,uVar9,pwVar1);
  if (iVar3 != 0) {
    puVar5 = auStack_fa28;
    while (puVar2 = puVar5, *puVar2 != 0) {
      iVar3 = appStrlen(puVar2);
      puStack_18 = puVar2 + iVar3 + 1;
      puVar4 = appStrstr(puVar2,(ushort *)&DAT_101d98d4);
      puVar5 = puStack_18;
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        iVar7 = *(int *)(_Names + *(int *)(param_1 + 0x4c0) * 4) + 0xc;
        iVar3 = *(int *)GConfig;
        puVar5 = GetPathName((UObject *)param_1,(UObject *)0x0,(ushort *)0x0);
        (**(code **)(iVar3 + 0x30))(puVar5,puVar2,puVar4,iVar7);
        puVar5 = puStack_18;
      }
    }
  }
  thunk_FUN_1012b800();
  while ((int)puStack_18 < DAT_1033088c) {
    this = *(UStruct **)(_GObjObjects + (int)puStack_18 * 4);
    iVar3 = UStruct::IsChildOf(this,(UStruct *)param_1);
    if (iVar3 != 0) {
      puVar5 = (ushort *)0x0;
      pUVar8 = (UClass *)0x0;
      iVar3 = 1;
      pUVar6 = UClass::GetDefaultObject((UClass *)this);
      LoadConfig(pUVar6,iVar3,pUVar8,puVar5);
    }
    thunk_FUN_1012ae60();
  }
  thunk_FUN_10162dc0();
  while (puVar5 = puStack_18, (int)puStack_18 < DAT_1033088c) {
    pUVar6 = *(UObject **)(_GObjObjects + (int)puStack_18 * 4);
    iVar3 = IsA(pUVar6,param_1);
    if (iVar3 != 0) {
      LoadConfig(pUVar6,1,(UClass *)0x0,(ushort *)0x0);
      (**(code **)(**(int **)(_GObjObjects + (int)puVar5 * 4) + 0x44))();
    }
    thunk_FUN_1012ae60();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103422 thunk_FUN_10123730 thunk -> 10123730

// ==== 10103427 UObject::NetDirty

/* public: virtual void __thiscall UObject::NetDirty(class UProperty *) */

void __thiscall UObject::NetDirty(UObject *this,UProperty *param_1)

{
                    /* 0x3427  1628  ?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
  return;
}


// ==== 1010342c FLogOutError::FLogOutError

/* public: __thiscall FLogOutError::FLogOutError(class FLogOutError const &) */

void __thiscall FLogOutError::FLogOutError(FLogOutError *this,FLogOutError *param_1)

{
                    /* 0x342c  68  ??0FLogOutError@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103436 UObjectProperty::ImportText

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual unsigned short const * __thiscall UObjectProperty::ImportText(unsigned short
   const *,unsigned char *,int)const  */

ushort * __thiscall
UObjectProperty::ImportText(UObjectProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  UObjectProperty *this_00;
  ushort *puVar1;
  int iVar2;
  UObject *pUVar3;
  short *psVar4;
  UClass *pUVar5;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_01;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  ushort *puVar6;
  wchar_t *pwVar7;
  ushort auStack_1028 [1024];
  ushort auStack_828 [1030];
  UObjectProperty *pUStack_1c;
  ushort *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3436  1452  ?ImportText@UObjectProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be1d0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffefcc;
  uStack_8 = 0;
  puStack_18 = param_1;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  puVar1 = (ushort *)thunk_FUN_10170590(param_1,auStack_828,0x400,1);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  puStack_18 = puVar1;
  iVar2 = appStricmp(auStack_828,(ushort *)L"None");
  if (iVar2 == 0) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    ExceptionList = pvStack_10;
    return puVar1;
  }
  for (; *puVar1 == 0x20; puVar1 = puVar1 + 1) {
  }
  puVar6 = puVar1 + 1;
  puStack_18 = puVar6;
  if (*puVar1 != 0x27) {
    pUVar3 = UObject::StaticFindObject
                       (*(UClass **)(this + 0x78),(UObject *)0xffffffff,auStack_828,0);
    *(UObject **)param_2 = pUVar3;
    if (pUVar3 != (UObject *)0x0) {
      ExceptionList = pvStack_10;
      return puVar6;
    }
    if ((param_3 & 4U) == 0) {
      ExceptionList = pvStack_10;
      return (ushort *)0x0;
    }
    puVar1 = UObject::GetFullName((UObject *)this,(ushort *)0x0);
    pwVar7 = L"%s: unresolved reference to \'%s\'";
    this_01 = extraout_ECX;
    goto LAB_1017357f;
  }
  psVar4 = (short *)thunk_FUN_10170590(puVar6,auStack_1028,0x400,1);
  if (psVar4 == (short *)0x0) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  if (*psVar4 != 0x27) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  puStack_18 = (ushort *)(psVar4 + 1);
  pUVar5 = (UClass *)thunk_FUN_10149600(0xffffffff,auStack_828,0);
  if (pUVar5 == (UClass *)0x0) {
    if ((param_3 & 4U) == 0) {
      ExceptionList = pvStack_10;
      return (ushort *)0x0;
    }
    puVar1 = UObject::GetFullName((UObject *)pUStack_1c,(ushort *)0x0);
    pwVar7 = L"%s: unresolved cast in \'%s\'";
    this_01 = extraout_ECX_00;
    goto LAB_1017357f;
  }
  pUVar3 = UObject::StaticFindObject(pUVar5,(UObject *)0xffffffff,auStack_1028,0);
  *(UObject **)param_2 = pUVar3;
  if (pUVar3 == (UObject *)0x0) {
    pUVar3 = UObject::StaticLoadObject
                       (pUVar5,(UObject *)0x0,auStack_1028,(ushort *)0x0,2,(UPackageMap *)0x0);
    *(UObject **)param_2 = pUVar3;
    if (pUVar3 != (UObject *)0x0) goto LAB_10173642;
  }
  else {
LAB_10173642:
    this_00 = pUStack_1c;
    if (((param_3 & 4U) != 0) &&
       (iVar2 = UStruct::IsChildOf(*(UStruct **)(*(int *)param_2 + 0x24),
                                   *(UStruct **)(pUStack_1c + 0x78)), iVar2 == 0)) {
      UObject::GetFullName((UObject *)this_00,(ushort *)0x0);
      FOutputDevice::Logf((FOutputDevice *)GWarn,(EName)GWarn,(ushort *)0x315);
    }
    if (*(int *)param_2 != 0) {
      ExceptionList = pvStack_10;
      return (ushort *)(psVar4 + 1);
    }
  }
  if ((param_3 & 4U) == 0) {
    ExceptionList = pvStack_10;
    return (ushort *)0x0;
  }
  UObject::GetFullName((UObject *)pUStack_1c,(ushort *)0x0);
  puVar1 = (ushort *)0x315;
  this_01 = extraout_ECX_01;
  pwVar7 = (wchar_t *)GWarn;
LAB_1017357f:
  FOutputDevice::Logf(this_01,(EName)pwVar7,puVar1);
  ExceptionList = pvStack_10;
  return (ushort *)0x0;
}


// ==== 1010343b thunk_FUN_101247c0 thunk -> 101247c0

// ==== 10103440 FEdge::operator=

/* public: class FEdge & __thiscall FEdge::operator=(class FEdge const &) */

FEdge * __thiscall FEdge::operator=(FEdge *this,FEdge *param_1)

{
                    /* 0x3440  445  ??4FEdge@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}


// ==== 10103445 thunk_FUN_10135d90 thunk -> 10135d90

// ==== 1010344a FPackageFileSummary::FPackageFileSummary

/* public: __thiscall FPackageFileSummary::FPackageFileSummary(void) */

FPackageFileSummary * __thiscall FPackageFileSummary::FPackageFileSummary(FPackageFileSummary *this)

{
  int iVar1;
  FPackageFileSummary *pFVar2;
  
                    /* 0x344a  101  ??0FPackageFileSummary@@QAE@XZ */
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  pFVar2 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = 0;
    pFVar2 = pFVar2 + 4;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pFVar2 = (FPackageFileSummary)0x0;
    pFVar2 = pFVar2 + 1;
  }
  return this;
}


// ==== 1010344f FNpcPosInfoHit::FNpcPosInfoHit

/* public: __thiscall FNpcPosInfoHit::FNpcPosInfoHit(class ANpcPosInfo *,int) */

void __thiscall
FNpcPosInfoHit::FNpcPosInfoHit(FNpcPosInfoHit *this,ANpcPosInfo *param_1,int param_2)

{
                    /* 0x344f  88  ??0FNpcPosInfoHit@@QAE@PAVANpcPosInfo@@H@Z */
  *(ANpcPosInfo **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


// ==== 10103454 FTerritoryInfoHit::operator=

/* public: class FTerritoryInfoHit & __thiscall FTerritoryInfoHit::operator=(class FTerritoryInfoHit
   const &) */

FTerritoryInfoHit * __thiscall
FTerritoryInfoHit::operator=(FTerritoryInfoHit *this,FTerritoryInfoHit *param_1)

{
                    /* 0x3454  499  ??4FTerritoryInfoHit@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}


// ==== 10103459 ULinker::QuickMD5

/* public: class FString __thiscall ULinker::QuickMD5(void) */

FString * __thiscall ULinker::QuickMD5(ULinker *this)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int iVar3;
  FString *in_stack_00000004;
  FArray aFStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x3459  1745  ?QuickMD5@ULinker@@QAE?AVFString@@XZ */
  puStack_8 = &LAB_101bb949;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  uStack_4 = 0;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)
             FString::Printf((ushort *)aFStack_18,L"%02x",(uint)(byte)this[iVar3 + 0xb0]);
    uStack_4 = 3;
    if (puVar1[1] == 0) {
      puVar2 = &DAT_101cdd44;
    }
    else {
      puVar2 = (ushort *)*puVar1;
    }
    FString::operator+=(in_stack_00000004,puVar2);
    uStack_4 = 4;
    uStack_14 = 0;
    uStack_10 = 0;
    FArray::Realloc(aFStack_18,2);
    uStack_4 = uStack_4 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_18);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  ExceptionList = pvStack_c;
  return in_stack_00000004;
}


// ==== 1010345e thunk_FUN_10134670 thunk -> 10134670

// ==== 10103463 UExporter::FindExporter

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UExporter * __cdecl UExporter::FindExporter(class UObject *,unsigned short
   const *) */

UExporter * __cdecl UExporter::FindExporter(UObject *param_1,ushort *param_2)

{
  UStruct *this;
  int iVar1;
  UObject *pUVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  UExporter *pUVar7;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x3463  1003  ?FindExporter@UExporter@@SAPAV1@PAVUObject@@PBG@Z */
  puStack_c = &LAB_101b99d8;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Object",".\\UExporter.cpp",0x2d);
  }
  thunk_FUN_1012b850();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  thunk_FUN_1012b800();
  do {
    if (DAT_1033088c <= iStack_18) {
      iVar1 = *(int *)(param_1 + 0x24);
      while( true ) {
        if (iVar1 == 0) {
          uStack_8 = uStack_8 & 0xffffff00;
          thunk_FUN_1012b8a0();
          ExceptionList = pvStack_10;
          return (UExporter *)0x0;
        }
        puVar6 = (undefined4 *)thunk_FUN_1012aab0();
        if (puVar6 != (undefined4 *)0x0) break;
        iVar1 = *(int *)(iVar1 + 0x34);
      }
      pUVar7 = (UExporter *)thunk_FUN_1012b1c0(*puVar6,0xffffffff);
      uStack_8 = uStack_8 & 0xffffff00;
      thunk_FUN_1012b8a0();
      ExceptionList = pvStack_10;
      return pUVar7;
    }
    this = *(UStruct **)(_GObjObjects + iStack_18 * 4);
    iVar1 = UStruct::IsChildOf(this,(UStruct *)&PrivateStaticClass);
    if (((iVar1 != 0) &&
        (pUVar2 = UClass::GetDefaultObject((UClass *)this), *(int *)(pUVar2 + 0x34) != 0)) &&
       (iVar1 = UObject::IsA(param_1,*(UClass **)(pUVar2 + 0x34)), iVar1 != 0)) {
      for (iVar1 = 0; iVar1 < *(int *)(pUVar2 + 0x3c); iVar1 = iVar1 + 1) {
        puVar5 = param_2;
        puVar3 = FString::operator*((FString *)(*(int *)(pUVar2 + 0x38) + iVar1 * 0xc));
        iVar4 = appStricmp(puVar3,puVar5);
        if (iVar4 == 0) {
LAB_1012bc52:
          thunk_FUN_1012b770();
        }
        else {
          puVar3 = (ushort *)&DAT_101d047c;
          puVar5 = FString::operator*((FString *)(*(int *)(pUVar2 + 0x38) + iVar1 * 0xc));
          iVar4 = appStricmp(puVar5,puVar3);
          if (iVar4 == 0) goto LAB_1012bc52;
        }
      }
    }
    thunk_FUN_1012ae60();
  } while( true );
}


// ==== 10103468 UFunction::Serialize

/* public: virtual void __thiscall UFunction::Serialize(class FArchive &) */

void __thiscall UFunction::Serialize(UFunction *this,FArchive *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3468  1813  ?Serialize@UFunction@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101ba0d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UStruct::Serialize((UStruct *)this,param_1);
  if (*(int *)(param_1 + 4) < 0x40) {
    thunk_FUN_10130800(param_1,this + 0x96);
  }
  thunk_FUN_10130800(param_1,this + 0x90);
  if (*(int *)(param_1 + 4) < 0x40) {
    thunk_FUN_101307e0(param_1,this + 0x95);
  }
  thunk_FUN_101307e0(param_1,this + 0x94);
  if (*(int *)(param_1 + 4) < 0x40) {
    thunk_FUN_10130800(param_1,this + 0x98);
  }
  thunk_FUN_10108c50(param_1,this + 0x8c);
  if (((byte)this[0x8c] & 0x40) != 0) {
    thunk_FUN_10130800(param_1,this + 0x92);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    this[0x95] = (UFunction)0x0;
    *(undefined2 *)(this + 0x96) = 0;
    *(undefined2 *)(this + 0x98) = 0xffff;
    for (iVar1 = thunk_FUN_10132a00(*(undefined4 *)(this + 0x48));
        (iVar1 != 0 && ((*(byte *)(iVar1 + 0x48) & 0x80) != 0));
        iVar1 = thunk_FUN_10132a00(*(undefined4 *)(iVar1 + 0x38))) {
      this[0x95] = (UFunction)((char)this[0x95] + '\x01');
      *(short *)(this + 0x96) =
           (short)*(undefined4 *)(iVar1 + 0x44) * (short)*(undefined4 *)(iVar1 + 0x40) +
           (short)*(undefined4 *)(iVar1 + 0x54);
      if ((*(uint *)(iVar1 + 0x48) & 0x400) != 0) {
        *(undefined2 *)(this + 0x98) = *(undefined2 *)(iVar1 + 0x54);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103472 UStrProperty::UStrProperty

/* public: __thiscall UStrProperty::UStrProperty(void) */

UStrProperty * __thiscall UStrProperty::UStrProperty(UStrProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3472  273  ??0UStrProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7cf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103477 UObject::GetLoader

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: static class ULinkerLoad * __cdecl UObject::GetLoader(int) */

ULinkerLoad * __cdecl UObject::GetLoader(int param_1)

{
                    /* 0x3477  1346  ?GetLoader@UObject@@KAPAVULinkerLoad@@H@Z */
  return *(ULinkerLoad **)(_GObjLoaders + param_1 * 4);
}


// ==== 1010347c UPackage::UPackage

/* public: __thiscall UPackage::UPackage(void) */

UPackage * __thiscall UPackage::UPackage(UPackage *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x347c  258  ??0UPackage@@QAE@XZ */
  puStack_c = &LAB_101bd4f8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = UObject::vftable;
  UObject::GObjCurCount = UObject::GObjCurCount + 1;
  UObject::GObjNewCount = UObject::GObjNewCount + 1;
  if (UObject::GObjPeakCount < UObject::GObjCurCount) {
    UObject::GObjPeakCount = UObject::GObjCurCount;
  }
  *(undefined ***)this = vftable;
  uStack_8 = 1;
  UObject::BindPackage(this);
  *(undefined4 *)(this + 0x40) = 0;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 10103481 appCreateJpeg

/* int __cdecl appCreateJpeg(unsigned short const *,int,int,unsigned long *,class FFileManager
   *,int) */

int __cdecl
appCreateJpeg(ushort *param_1,int param_2,int param_3,ulong *param_4,FFileManager *param_5,
             int param_6)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  void *in_ECX;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 *unaff_EBP;
  int iVar7;
  int unaff_retaddr;
  undefined *puVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3481  2031  ?appCreateJpeg@@YAHPBGHHPAKPAVFFileManager@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbf5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*(int *)param_5 + 0x10))(param_1);
  if ((iVar1 < 0) && (iVar1 = (**(code **)(*(int *)param_5 + 0xc))(param_1,0,GNull), iVar1 != 0)) {
    puVar8 = &DAT_101d6434;
    iVar7 = 0;
    iVar2 = (*(code *)**(undefined4 **)GMalloc)((int)param_1 * param_2 * 3);
    puVar6 = param_1;
    iVar1 = param_2;
    if (0 < param_2) {
      do {
        puVar3 = puVar6;
        puVar5 = param_1;
        if (0 < (int)param_1) {
          do {
            *(ushort *)(iVar2 + iVar7) = *puVar3;
            *(char *)(iVar2 + 2 + iVar7) = (char)puVar3[1];
            iVar7 = iVar7 + 3;
            puVar5 = (ushort *)((int)puVar5 + -1);
            puVar3 = puVar3 + 2;
            iVar1 = unaff_retaddr;
          } while (puVar5 != (ushort *)0x0);
        }
        param_2 = param_2 + -1;
        puVar6 = puVar6 + (int)param_1 * 2;
      } while (param_2 != 0);
    }
    piVar4 = (int *)(*(code *)**(undefined4 **)GMalloc)(0x3048,&DAT_101cd5d8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *(short *)((int)piVar4 + 6) = (short)iVar1;
      *(short *)((int)piVar4 + 10) = (short)iVar1;
      *(short *)(piVar4 + 1) = (short)param_1;
      *(short *)(piVar4 + 2) = (short)param_1;
      *piVar4 = iVar2;
      piVar4[3] = (int)unaff_EBP;
      thunk_FUN_10127d40(param_1);
    }
    thunk_FUN_10127f40();
    (**(code **)(*(int *)GMalloc + 8))(iVar2);
    if (piVar4 != (int *)0x0) {
      thunk_FUN_101279c0();
      (**(code **)(*(int *)GMalloc + 8))(piVar4);
    }
    (**(code **)*unaff_EBP)(1);
    ExceptionList = puVar8;
    return 1;
  }
  ExceptionList = in_ECX;
  return 0;
}


// ==== 10103486 UObject::execQuatProduct

/* public: void __thiscall UObject::execQuatProduct(struct FFrame &,void * const) */

void __thiscall UObject::execQuatProduct(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  FQuat aFStack_30 [16];
  FQuat aFStack_20 [20];
  undefined4 *puStack_c;
  
                    /* 0x3486  2351  ?execQuatProduct@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  puVar2 = (undefined4 *)FQuat::operator*(aFStack_30,aFStack_20);
  *puStack_c = *puVar2;
  puStack_c[1] = puVar2[1];
  puStack_c[2] = puVar2[2];
  puStack_c[3] = puVar2[3];
  return;
}


// ==== 1010348b UStrProperty::InternalConstructor

/* public: static void __cdecl UStrProperty::InternalConstructor(void *) */

void __cdecl UStrProperty::InternalConstructor(void *param_1)

{
                    /* 0x348b  1499  ?InternalConstructor@UStrProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UStrProperty(param_1);
    return;
  }
  return;
}


// ==== 10103490 thunk_FUN_1015c2b0 thunk -> 1015c2b0

// ==== 10103495 FFeedbackContext::MapCheck_Clear

/* public: virtual void __thiscall FFeedbackContext::MapCheck_Clear(void) */

void __thiscall FFeedbackContext::MapCheck_Clear(FFeedbackContext *this)

{
                    /* 0x3495  1603  ?MapCheck_Clear@FFeedbackContext@@UAEXXZ */
  return;
}


// ==== 1010349a FVector::operator/=

/* public: class FVector __thiscall FVector::operator/=(class FVector const &) */

void __thiscall FVector::operator/=(FVector *this,FVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x349a  703  ??_0FVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this / *in_stack_00000008;
  *(float *)(this + 4) = *(float *)(this + 4) / in_stack_00000008[1];
  *(float *)(this + 8) = *(float *)(this + 8) / in_stack_00000008[2];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// ==== 1010349f FGenerationInfo::FGenerationInfo

/* public: __thiscall FGenerationInfo::FGenerationInfo(int,int) */

void __thiscall FGenerationInfo::FGenerationInfo(FGenerationInfo *this,int param_1,int param_2)

{
                    /* 0x349f  59  ??0FGenerationInfo@@QAE@HH@Z */
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


// ==== 101034a4 thunk_FUN_1015cad0 thunk -> 1015cad0

// ==== 101034ae FBitWriterMark::FBitWriterMark

/* public: __thiscall FBitWriterMark::FBitWriterMark(struct FBitWriter &) */

void __thiscall FBitWriterMark::FBitWriterMark(FBitWriterMark *this,FBitWriter *param_1)

{
                    /* 0x34ae  18  ??0FBitWriterMark@@QAE@AAUFBitWriter@@@Z */
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0x44);
  return;
}


// ==== 101034b8 thunk_FUN_10129db0 thunk -> 10129db0

// ==== 101034bd UStructProperty::ExportTextItem

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UStructProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UStructProperty::ExportTextItem
          (UStructProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 auStack_20034 [131088];
  int *piStack_24;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x34bd  988  ?ExportTextItem@UStructProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101be220;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iStack_18 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_10119210(*(undefined4 *)(this + 0x78));
  while (piStack_24 != (int *)0x0) {
    iVar1 = (**(code **)(*piStack_24 + 0xb0))();
    if (iVar1 != 0) {
      for (iVar1 = 0; iVar1 < piStack_24[0x10]; iVar1 = iVar1 + 1) {
        iVar2 = (**(code **)(*piStack_24 + 0xa0))(iVar1,auStack_20034,param_2,param_3,2);
        if (iVar2 != 0) {
          iStack_18 = iStack_18 + 1;
          if (iStack_18 == 1) {
            *param_1 = 0x28;
          }
          else {
            *param_1 = 0x2c;
          }
          puVar4 = param_1 + 1;
          if (piStack_24[0x10] == 1) {
            iVar2 = appSprintf(puVar4,(ushort *)&DAT_101df708,
                               *(int *)(_Names + piStack_24[8] * 4) + 0xc);
          }
          else {
            iVar2 = appSprintf(puVar4,(ushort *)L"%s[%i]=",
                               *(int *)(_Names + piStack_24[8] * 4) + 0xc,iVar1);
          }
          iVar3 = appSprintf(puVar4 + iVar2,(ushort *)&DAT_101df720,auStack_20034);
          param_1 = puVar4 + iVar2 + iVar3;
        }
      }
    }
    piStack_24 = (int *)piStack_24[0xe];
    thunk_FUN_10114340();
  }
  if (0 < iStack_18) {
    *param_1 = 0x29;
    param_1[1] = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101034cc appStrlen

/* int __cdecl appStrlen(unsigned short const *) */

int __cdecl appStrlen(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
                    /* 0x34cc  2112  ?appStrlen@@YAHPBG@Z */
  puVar1 = param_1 + 1;
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (uVar2 != 0);
  return (int)param_1 - (int)puVar1 >> 1;
}


// ==== 101034d1 UCommandlet::operator_new

/* public: static void * __cdecl UCommandlet::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UCommandlet::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x34d1  363  ??2UCommandlet@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101034d6 FUnknown::operator=

/* public: class FUnknown & __thiscall FUnknown::operator=(class FUnknown const &) */

FUnknown * __thiscall FUnknown::operator=(FUnknown *this,FUnknown *param_1)

{
                    /* 0x34d6  502  ??4FUnknown@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 101034db thunk_FUN_10120c40 thunk -> 10120c40

// ==== 101034e0 FString::Empty

/* public: void __thiscall FString::Empty(void) */

void __thiscall FString::Empty(FString *this)

{
                    /* 0x34e0  945  ?Empty@FString@@QAEXXZ */
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  FArray::Realloc((FArray *)this,2);
  return;
}


// ==== 101034e5 ULinkerLoad::StaticClass

/* public: static class UClass * __cdecl ULinkerLoad::StaticClass(void) */

UClass * __cdecl ULinkerLoad::StaticClass(void)

{
                    /* 0x34e5  1906  ?StaticClass@ULinkerLoad@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101034ea FDummyCodec::Encode

/* public: virtual int __thiscall FDummyCodec::Encode(class FArchive &,class FArchive &) */

int __thiscall FDummyCodec::Encode(FDummyCodec *this,FArchive *param_1,FArchive *param_2)

{
                    /* 0x34ea  949  ?Encode@FDummyCodec@@UAEHAAVFArchive@@0@Z */
  return 0;
}


// ==== 101034f4 FArray::Insert

/* public: void __thiscall FArray::Insert(int,int,int) */

void __thiscall FArray::Insert(FArray *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* 0x34f4  1471  ?Insert@FArray@@QAEXHHH@Z */
  iVar2 = *(int *)(this + 4);
  iVar1 = iVar2 + param_2;
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 8) < iVar1) {
    *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    Realloc(this,param_3);
  }
  appMemmove((void *)((param_1 + param_2) * param_3 + *(int *)this),
             (void *)(param_1 * param_3 + *(int *)this),(iVar2 - param_1) * param_3);
  return;
}


// ==== 101034f9 UFactory::UFactory

/* public: __thiscall UFactory::UFactory(void) */

UFactory * __thiscall UFactory::UFactory(UFactory *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x34f9  213  ??0UFactory@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9b6c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101034fe thunk_FUN_1012a890 thunk -> 1012a890

// ==== 10103503 Parse

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* int __cdecl Parse(unsigned short const *,unsigned short const *,class FString &) */

int __cdecl Parse(ushort *param_1,ushort *param_2,FString *param_3)

{
  int iVar1;
  ushort uStack_2020;
  undefined1 auStack_201e [8198];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3503  1662  ?Parse@@YAHPBG0AAVFString@@@Z */
  puStack_c = &LAB_101bc190;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x10154823;
  puStack_14 = &stack0xffffdfd4;
  uStack_8 = 0;
  uStack_2020 = 0;
  ExceptionList = &pvStack_10;
  _memset(auStack_201e,0,0x1ffe);
  iVar1 = Parse(param_1,param_2,&uStack_2020,0x1000);
  if (iVar1 != 0) {
    FString::operator=(param_3,&uStack_2020);
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10103508 thunk_FUN_10129d20 thunk -> 10129d20

// ==== 1010350d thunk_FUN_10149550 thunk -> 10149550

// ==== 10103512 UDelegateProperty::Identical

/* public: virtual int __thiscall UDelegateProperty::Identical(void const *,void const *)const  */

int __thiscall UDelegateProperty::Identical(UDelegateProperty *this,void *param_1,void *param_2)

{
                    /* 0x3512  1432  ?Identical@UDelegateProperty@@UBEHPBX0@Z */
  if (param_2 == (void *)0x0) {
    return (uint)(*(int *)param_1 == 0);
  }
  if ((*(int *)param_1 == *(int *)param_2) &&
     (*(int *)((int)param_1 + 4) == *(int *)((int)param_2 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 10103521 FArchive::ThisContainsCode

/* public: void __thiscall FArchive::ThisContainsCode(void) */

void __thiscall FArchive::ThisContainsCode(FArchive *this)

{
                    /* 0x3521  1958  ?ThisContainsCode@FArchive@@QAEXXZ */
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


// ==== 10103526 FBitReader::GetData

/* public: unsigned char * __thiscall FBitReader::GetData(void) */

uchar * __thiscall FBitReader::GetData(FBitReader *this)

{
                    /* 0x3526  1301  ?GetData@FBitReader@@QAEPAEXZ */
  return *(uchar **)(this + 0x38);
}


// ==== 1010352b LocalizeQuery

/* unsigned short const * __cdecl LocalizeQuery(unsigned short const *,unsigned short const
   *,unsigned short const *) */

ushort * __cdecl LocalizeQuery(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x352b  1587  ?LocalizeQuery@@YAPBGPBG00@Z */
  puVar1 = Localize((ushort *)L"Query",param_1,param_2,param_3,0);
  return puVar1;
}


// ==== 10103530 UObject::AttemptDelete

/* public: static int __cdecl UObject::AttemptDelete(class UObject * &,unsigned long,int) */

int __cdecl UObject::AttemptDelete(UObject **param_1,ulong param_2,int param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3530  812  ?AttemptDelete@UObject@@SAHAAPAV1@KH@Z */
  puStack_c = &LAB_101bd380;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((*(uint *)(*param_1 + 0x1c) & 0x4000000) == 0) {
    ExceptionList = &pvStack_10;
    iVar1 = IsReferenced(param_1,param_2,param_3);
    if (iVar1 == 0) {
      PurgeGarbage();
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 10103535 UObject::execEqualEqual_StringString

/* public: void __thiscall UObject::execEqualEqual_StringString(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_StringString(UObject *this,FFrame *param_1,void *param_2)

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
  
                    /* 0x3535  2212  ?execEqualEqual_StringString@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = (uint *)&LAB_101baea0;
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


// ==== 1010353a UObject::execByteConst

/* public: void __thiscall UObject::execByteConst(struct FFrame &,void * const) */

void __thiscall UObject::execByteConst(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x353a  2163  ?execByteConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  *(undefined1 *)param_2 = **(undefined1 **)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// ==== 1010353f UState::InternalConstructor

/* public: static void __cdecl UState::InternalConstructor(void *) */

void __cdecl UState::InternalConstructor(void *param_1)

{
                    /* 0x353f  1498  ?InternalConstructor@UState@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UState(param_1);
    return;
  }
  return;
}


// ==== 10103544 UProperty::~UProperty

/* public: virtual __thiscall UProperty::~UProperty(void) */

void __thiscall UProperty::~UProperty(UProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x3544  344  ??1UProperty@@UAE@XZ */
  puStack_8 = &LAB_101b7903;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0x6c));
  uStack_4 = 0xffffffff;
  UField::~UField((UField *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103549 FArchive::AtEnd

/* public: virtual int __thiscall FArchive::AtEnd(void) */

int __thiscall FArchive::AtEnd(FArchive *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x3549  804  ?AtEnd@FArchive@@UAEHXZ */
  iVar1 = (**(code **)(*(int *)this + 0x28))();
  if (iVar1 != -1) {
    iVar2 = (**(code **)(*(int *)this + 0x2c))();
    if (iVar2 <= iVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== 1010354e thunk_FUN_101377e0 thunk -> 101377e0

// ==== 10103553 thunk_FUN_101279c0 thunk -> 101279c0

// ==== 10103558 FRange::FRange

/* public: __thiscall FRange::FRange(float,float) */

FRange * __thiscall FRange::FRange(FRange *this,float param_1,float param_2)

{
  float fVar1;
  
                    /* 0x3558  120  ??0FRange@@QAE@MM@Z */
  fVar1 = param_1;
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  *(float *)this = param_1;
  if (fVar1 < param_2) {
    *(float *)(this + 4) = param_2;
    return this;
  }
  *(float *)(this + 4) = fVar1;
  return this;
}


// ==== 1010355d thunk_FUN_101636c0 thunk -> 101636c0

// ==== 10103567 USystem::USystem

/* public: __thiscall USystem::USystem(void) */

USystem * __thiscall USystem::USystem(USystem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3567  285  ??0USystem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101be67f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  USubsystem::USubsystem((USubsystem *)this);
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010356c UState::UState

/* protected: __thiscall UState::UState(void) */

UState * __thiscall UState::UState(UState *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x356c  266  ??0UState@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7768;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103571 UBoolProperty::StaticClass

/* public: static class UClass * __cdecl UBoolProperty::StaticClass(void) */

UClass * __cdecl UBoolProperty::StaticClass(void)

{
                    /* 0x3571  1889  ?StaticClass@UBoolProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103576 UDelegateProperty::NetSerializeItem

/* public: virtual int __thiscall UDelegateProperty::NetSerializeItem(class FArchive &,class
   UPackageMap *,void *)const  */

int __thiscall
UDelegateProperty::NetSerializeItem
          (UDelegateProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
  int *piVar1;
  
                    /* 0x3576  1632
                       ?NetSerializeItem@UDelegateProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z
                        */
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x18))(param_3);
  (**(code **)(*piVar1 + 0x1c))((int)param_3 + 4);
  return 1;
}


// ==== 1010357b L2ParamStack::Top

/* public: void * __thiscall L2ParamStack::Top(void) */

void * __thiscall L2ParamStack::Top(L2ParamStack *this)

{
  int iVar1;
  void *pvVar2;
  
                    /* 0x357b  1964  ?Top@L2ParamStack@@QAEPAXXZ */
  iVar1 = *(int *)(this + 4);
  if (iVar1 < *(int *)(this + 8)) {
    pvVar2 = *(void **)(*(int *)this + iVar1 * 4);
    *(int *)(this + 4) = iVar1 + 1;
    return pvVar2;
  }
  return (void *)0x0;
}


// ==== 10103580 FQuat::operator!=

/* public: int __thiscall FQuat::operator!=(class FQuat const &)const  */

int __thiscall FQuat::operator!=(FQuat *this,FQuat *param_1)

{
                    /* 0x3580  583  ??9FQuat@@QBEHABV0@@Z */
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
      && (*(float *)(param_1 + 8) == *(float *)(this + 8))) &&
     (*(float *)(param_1 + 0xc) == *(float *)(this + 0xc))) {
    return 0;
  }
  return 1;
}


// ==== 10103585 LocalizeProgress

/* unsigned short const * __cdecl LocalizeProgress(unsigned short const *,unsigned short const
   *,unsigned short const *) */

ushort * __cdecl LocalizeProgress(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x3585  1585  ?LocalizeProgress@@YAPBGPBG00@Z */
  puVar1 = Localize((ushort *)L"Progress",param_1,param_2,param_3,0);
  return puVar1;
}


// ==== 1010358f thunk_FUN_1011f4a0 thunk -> 1011f4a0

// ==== 10103594 FVector::operator^

/* public: class FVector __thiscall FVector::operator^(class FVector const &)const  */

void __thiscall FVector::operator^(FVector *this,FVector *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x3594  657  ??TFVector@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 =
       in_stack_00000008[2] * *(float *)(this + 4) - in_stack_00000008[1] * *(float *)(this + 8);
  *(float *)(param_1 + 4) =
       *(float *)(this + 8) * *in_stack_00000008 - *(float *)this * in_stack_00000008[2];
  *(float *)(param_1 + 8) =
       in_stack_00000008[1] * *(float *)this - *in_stack_00000008 * *(float *)(this + 4);
  return;
}


// ==== 10103599 thunk_FUN_10137710 thunk -> 10137710

// ==== 1010359e appRandInit

/* void __cdecl appRandInit(int) */

void __cdecl appRandInit(int param_1)

{
  _ptiddata p_Var1;
  
                    /* 0x359e  2088  ?appRandInit@@YAXH@Z */
  p_Var1 = __getptd();
  p_Var1->_holdrand = param_1;
  return;
}


// ==== 101035a3 FPackageInfo::FPackageInfo

/* public: __thiscall FPackageInfo::FPackageInfo(class FPackageInfo const &) */

FPackageInfo * __thiscall FPackageInfo::FPackageInfo(FPackageInfo *this,FPackageInfo *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x35a3  102  ??0FPackageInfo@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
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
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101035a8 UFactory::operator_new

/* public: static void * __cdecl UFactory::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UFactory::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x35a8  373  ??2UFactory@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101035ad thunk_FUN_10137430 thunk -> 10137430

// ==== 101035b2 thunk_FUN_10162ed0 thunk -> 10162ed0

// ==== 101035bc thunk_FUN_1012b010 thunk -> 1012b010

// ==== 101035c6 FRangeVector::GetCenter

/* public: class FVector __thiscall FRangeVector::GetCenter(void)const  */

void __thiscall FRangeVector::GetCenter(FRangeVector *this)

{
  float *in_stack_00000004;
  
                    /* 0x35c6  1288  ?GetCenter@FRangeVector@@QBE?AVFVector@@XZ */
  *in_stack_00000004 = (*(float *)(this + 4) + *(float *)this) * 0.5;
  in_stack_00000004[1] = (*(float *)(this + 0xc) + *(float *)(this + 8)) * 0.5;
  in_stack_00000004[2] = (*(float *)(this + 0x14) + *(float *)(this + 0x10)) * 0.5;
  return;
}


// ==== 101035cb FDummyCodec::Decode

/* public: virtual int __thiscall FDummyCodec::Decode(class FArchive &,class FArchive &) */

int __thiscall FDummyCodec::Decode(FDummyCodec *this,FArchive *param_1,FArchive *param_2)

{
                    /* 0x35cb  906  ?Decode@FDummyCodec@@UAEHAAVFArchive@@0@Z */
  return 0;
}


// ==== 101035d0 appSecondsSlow

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* double __cdecl appSecondsSlow(void) */

double __cdecl appSecondsSlow(void)

{
  DWORD DVar1;
  int iVar2;
  
                    /* 0x35d0  2096  ?appSecondsSlow@@YANXZ */
  DVar1 = GetTickCount();
  iVar2 = DVar1 - _DAT_1033d494;
  _DAT_1033d494 = DVar1;
  _DAT_1033d488 = (double)iVar2 / 1000.0 + _DAT_1033d488;
  return _DAT_1033d488;
}


// ==== 101035d5 UObject::execMultiply_FloatRotator

/* public: void __thiscall UObject::execMultiply_FloatRotator(struct FFrame &,void * const) */

void __thiscall UObject::execMultiply_FloatRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_10 [2];
  undefined4 *puStack_8;
  
                    /* 0x35d5  2314  ?execMultiply_FloatRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
  auStack_10[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_10);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffec);
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


// ==== 101035da UObject::execHighNative7

/* public: void __thiscall UObject::execHighNative7(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative7(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x35da  2260  ?execHighNative7@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101035df thunk_FUN_10136a80 thunk -> 10136a80

// ==== 101035e4 FRange::Booleanize

/* public: int __thiscall FRange::Booleanize(void) */

int __thiscall FRange::Booleanize(FRange *this)

{
  float fVar1;
  
                    /* 0x35e4  823  ?Booleanize@FRange@@QAEHXZ */
  if (*(float *)this <= 0.0) {
    if (*(float *)this < 0.0) {
      return 0;
    }
    fVar1 = *(float *)(this + 4);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      return 0;
    }
  }
  return 1;
}


// ==== 101035e9 FPlane::Flip

/* public: class FPlane __thiscall FPlane::Flip(void)const  */

void __thiscall FPlane::Flip(FPlane *this)

{
  float *in_stack_00000004;
  
                    /* 0x35e9  1017  ?Flip@FPlane@@QBE?AV1@XZ */
  *in_stack_00000004 = -*(float *)this;
  in_stack_00000004[1] = -*(float *)(this + 4);
  in_stack_00000004[2] = -*(float *)(this + 8);
  in_stack_00000004[3] = -*(float *)(this + 0xc);
  return;
}


// ==== 101035ee UObject::IsValid

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::IsValid(void) */

int __thiscall UObject::IsValid(UObject *this)

{
  int iVar1;
  int iVar2;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FOutputDevice *this_03;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x35ee  1533  ?IsValid@UObject@@QAEHXZ */
  puStack_c = &LAB_101bd2b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
  if (iVar1 == 0) {
    if (this != (UObject *)0x0) {
      iVar1 = *(int *)(this + 4);
      iVar2 = FArray::IsValidIndex((FArray *)&GObjObjects,iVar1);
      if (iVar2 == 0) {
        if (GLog == (undefined *)0x0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2ff);
        if (GLog == (undefined *)0x0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        GetFullName(this,(ushort *)0x0);
        FOutputDevice::Logf2(this_02,(EName)GLog,(ushort *)0x2ff);
        ExceptionList = pvStack_10;
        return 0;
      }
      if (*(int *)(_GObjObjects + iVar1 * 4) == 0) {
        if (GLog == (undefined *)0x0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2ff);
        if (GLog == (undefined *)0x0) {
          ExceptionList = pvStack_10;
          return 0;
        }
        GetFullName(this,(ushort *)0x0);
        FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2ff);
        ExceptionList = pvStack_10;
        return 0;
      }
      if (*(UObject **)(_GObjObjects + iVar1 * 4) == this) {
        ExceptionList = pvStack_10;
        return 1;
      }
      if (GLog == (undefined *)0x0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      FOutputDevice::Logf2(this_01,(EName)GLog,(ushort *)0x2ff);
      if (GLog == (undefined *)0x0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      GetFullName(this,(ushort *)0x0);
      FOutputDevice::Logf2(this_03,(EName)GLog,(ushort *)0x2ff);
      if (GLog == (undefined *)0x0) {
        ExceptionList = pvStack_10;
        return 0;
      }
      GetFullName(*(UObject **)(_GObjObjects + *(int *)(this + 4) * 4),(ushort *)0x0);
      FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2ff);
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  else if (this != (UObject *)0x0) {
    ExceptionList = pvStack_10;
    return 1;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(EName)GLog,(ushort *)0x2ff);
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 101035f3 appGetLastError

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* void __cdecl appGetLastError(void) */

void __cdecl appGetLastError(void)

{
  ushort *puVar1;
  DWORD DVar2;
  WCHAR WStack_2020;
  undefined1 auStack_201e [8198];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x35f3  2054  ?appGetLastError@@YAXXZ */
  puStack_c = &LAB_101be380;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x10176083;
  puStack_14 = &stack0xffffdfd4;
  uStack_8 = 0;
  WStack_2020 = L'\0';
  ExceptionList = &pvStack_10;
  _memset(auStack_201e,0,0x1ffe);
  puVar1 = appGetSystemErrorMessage(0);
  DVar2 = GetLastError();
  appSprintf((ushort *)&WStack_2020,(ushort *)L"GetLastError : %d\n\n%s",DVar2,puVar1);
  MessageBoxW((HWND)0x0,&WStack_2020,L"System Error",0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101035f8 UObject::SWBeginLoad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::SWBeginLoad(void) */

void __cdecl UObject::SWBeginLoad(void)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x35f8  1780  ?SWBeginLoad@UObject@@SAXXZ */
  puStack_c = &LAB_101bcf70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  GSWObjBeginLoadCount = GSWObjBeginLoadCount + 2;
  if (GSWObjBeginLoadCount == 1) {
    ExceptionList = &pvStack_10;
    if (GAutoRegister != (UObject *)0x0) {
      ExceptionList = &pvStack_10;
      appFailAssert("!GAutoRegister",".\\UnObj.cpp",0xc9d);
    }
    for (iVar1 = 0; iVar1 < DAT_103308a4; iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(_GObjLoaders + iVar1 * 4) + 0x9c) == 0) {
        appFailAssert("GetLoader(i)->Success",".\\UnObj.cpp",0xc9f);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103602 thunk_FUN_10120f50 thunk -> 10120f50

// ==== 10103607 FRange::operator==

/* public: int __thiscall FRange::operator==(class FRange const &)const  */

int __thiscall FRange::operator==(FRange *this,FRange *param_1)

{
                    /* 0x3607  567  ??8FRange@@QBEHABV0@@Z */
  if ((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4))) {
    return 1;
  }
  return 0;
}


// ==== 1010360c L2ParamStack::`default_constructor_closure'

/* public: void __thiscall L2ParamStack::`default constructor closure'(void) */

void __thiscall L2ParamStack::_default_constructor_closure_(L2ParamStack *this)

{
                    /* 0x360c  773  ??_FL2ParamStack@@QAEXXZ */
  L2ParamStack(this,10);
  return;
}


// ==== 10103611 FSharedMemory::operator=

/* public: class FSharedMemory & __thiscall FSharedMemory::operator=(class FSharedMemory const &) */

FSharedMemory * __thiscall FSharedMemory::operator=(FSharedMemory *this,FSharedMemory *param_1)

{
                    /* 0x3611  490  ??4FSharedMemory@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


// ==== 10103616 FNpcPosInfoHit::FNpcPosInfoHit

/* public: __thiscall FNpcPosInfoHit::FNpcPosInfoHit(void) */

void __thiscall FNpcPosInfoHit::FNpcPosInfoHit(FNpcPosInfoHit *this)

{
                    /* 0x3616  89  ??0FNpcPosInfoHit@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 1010361b thunk_FUN_101494d0 thunk -> 101494d0

// ==== 10103620 UObject::execClamp

/* WARNING: Type propagation algorithm not settling */
/* public: void __thiscall UObject::execClamp(struct FFrame &,void * const) */

void __thiscall UObject::execClamp(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  FFrame *pFStack_14;
  int *piStack_10;
  int aiStack_8 [2];
  
                    /* 0x3620  2171  ?execClamp@UObject@@QAEXAAUFFrame@@QAX@Z */
  piStack_10 = aiStack_8;
  aiStack_8[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_14 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  aiStack_8[1] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,aiStack_8 + 1);
  pFStack_14 = (FFrame *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((int)&pFStack_14 < (int)pFStack_14) {
    *piStack_10 = (int)pFStack_14;
    return;
  }
  if ((int)&pFStack_14 < (int)pFVar2) {
    *piStack_10 = (int)&pFStack_14;
    return;
  }
  *piStack_10 = (int)pFVar2;
  return;
}


// ==== 10103625 UObject::DissociateImports

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl UObject::DissociateImports(void) */

void __cdecl UObject::DissociateImports(void)

{
  int iVar1;
  FScopeCriticalSection aFStack_20 [4];
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x3625  940  ?DissociateImports@UObject@@SAXXZ */
  puStack_c = &LAB_101bcf58;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_20,GDissociateImportsCS);
  if (GImportCount != 0) {
    for (iStack_1c = 0; iStack_1c < DAT_103308a4; iStack_1c = iStack_1c + 1) {
      iStack_18 = 0;
      while( true ) {
        iVar1 = *(int *)(_GObjLoaders + iStack_1c * 4);
        if (*(int *)(iVar1 + 0x88) <= iStack_18) break;
        iVar1 = *(int *)(iVar1 + 0x84) + iStack_18 * 0x1c;
        if ((*(int *)(iVar1 + 0x10) != 0) &&
           ((*(uint *)(*(int *)(iVar1 + 0x10) + 0x1c) & 0x4000000) == 0)) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        iStack_18 = iStack_18 + 1;
      }
    }
  }
  GImportCount = 0;
  uStack_8 = uStack_8 & 0xffffff00;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_20);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010362f UObject::execAsc

/* public: void __thiscall UObject::execAsc(struct FFrame &,void * const) */

void __thiscall UObject::execAsc(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int unaff_ESI;
  ushort *unaff_EDI;
  uint *unaff_retaddr;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x362f  2153  ?execAsc@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb0e0;
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
    unaff_EDI = &DAT_101cdd44;
  }
  *unaff_retaddr = (uint)*unaff_EDI;
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10103634 thunk_FUN_10123ff0 thunk -> 10123ff0

// ==== 10103639 FArchive::IsNet

/* public: int __thiscall FArchive::IsNet(void) */

int __thiscall FArchive::IsNet(FArchive *this)

{
                    /* 0x3639  1521  ?IsNet@FArchive@@QAEHXZ */
  return *(uint *)(this + 8) >> 0x1f;
}


// ==== 1010363e FMalloc::GetOsCurrent

/* public: virtual int __thiscall FMalloc::GetOsCurrent(void) */

int __thiscall FMalloc::GetOsCurrent(FMalloc *this)

{
                    /* 0x363e  1371  ?GetOsCurrent@FMalloc@@UAEHXZ */
  return 0;
}


// ==== 10103643 FOutputDevice::Log

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FOutputDevice::Log(class FString const &) */

void __thiscall FOutputDevice::Log(FOutputDevice *this,FString *param_1)

{
                    /* 0x3643  1592  ?Log@FOutputDevice@@QAEXABVFString@@@Z */
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + 0xbe0) + 4) & 0x1000) == 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)**(undefined4 **)this)(*(undefined4 *)param_1,0x2f8);
      return;
    }
    (*(code *)**(undefined4 **)this)(&DAT_101cdd44,0x2f8);
  }
  return;
}


// ==== 10103648 appGetGMTRef

/* class FString __cdecl appGetGMTRef(void) */

FString * __cdecl appGetGMTRef(void)

{
  ushort *puVar1;
  tm *_Tm;
  wchar_t *pwVar2;
  __time64_t _Var3;
  longlong lVar4;
  FString *in_stack_00000004;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3648  2053  ?appGetGMTRef@@YA?AVFString@@XZ */
  puStack_c = &LAB_101b9be9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_20 = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  puVar1 = appStaticString1024();
  __time64((__time64_t *)&uStack_30);
  _Tm = __gmtime64((__time64_t *)&uStack_30);
  _Var3 = __mktime64(_Tm);
  lVar4 = __alldiv(uStack_30 - (uint)_Var3,
                   (iStack_2c - (int)((ulonglong)_Var3 >> 0x20)) - (uint)(uStack_30 < (uint)_Var3),
                   0xe10,0);
  uStack_1c = (undefined4)lVar4;
  fStack_18 = (float)lVar4;
  pwVar2 = L"+%1.1f";
  if (fStack_18 <= 0.0) {
    pwVar2 = L"%1.1f";
  }
  appSprintf(puVar1,(ushort *)pwVar2,(double)lVar4);
  FString::FString(in_stack_00000004,puVar1);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1010364d thunk_FUN_10163650 thunk -> 10163650

// ==== 10103652 UObject::execDivide_VectorFloat

/* public: void __thiscall UObject::execDivide_VectorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivide_VectorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  undefined4 unaff_ESI;
  undefined1 auStack_18 [12];
  float fStack_c;
  float *pfStack_8;
  undefined4 *puStack_4;
  
                    /* 0x3652  2195  ?execDivide_VectorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  puStack_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  this_00 = extraout_ECX;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
    this_00 = extraout_ECX_00;
  }
  if (fStack_c != 0.0) {
    fStack_c = 1.0 / fStack_c;
    *pfStack_8 = fStack_c * (float)&puStack_4;
    pfStack_8[1] = fStack_c * (float)param_1;
    pfStack_8[2] = fStack_c * (float)auStack_18;
    return;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(ushort *)GLog);
  }
  *puStack_4 = param_1;
  puStack_4[1] = auStack_18;
  puStack_4[2] = unaff_ESI;
  return;
}


// ==== 10103657 thunk_FUN_10127f40 thunk -> 10127f40

// ==== 1010365c L2ParamStack::Restart

/* public: void __thiscall L2ParamStack::Restart(void) */

void __thiscall L2ParamStack::Restart(L2ParamStack *this)

{
                    /* 0x365c  1773  ?Restart@L2ParamStack@@QAEXXZ */
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 10103661 L2ThreadUtil::GetCurrentThreadID

/* public: unsigned long __thiscall L2ThreadUtil::GetCurrentThreadID(void) */

ulong __thiscall L2ThreadUtil::GetCurrentThreadID(L2ThreadUtil *this)

{
  DWORD DVar1;
  
                    /* 0x3661  1296  ?GetCurrentThreadID@L2ThreadUtil@@QAEKXZ */
                    /* WARNING: Could not recover jumptable at 0x10128be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


// ==== 10103666 UObject::execRotatorToVector

/* public: void __thiscall UObject::execRotatorToVector(struct FFrame &,void * const) */

void __thiscall UObject::execRotatorToVector(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined4 uStack_6c;
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  FCoords aFStack_38 [56];
  
                    /* 0x3666  2361  ?execRotatorToVector@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_6c = 0;
  auStack_68[0] = 0;
  auStack_68[1] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_6c);
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


// ==== 1010366b FRangeVector::operator+=

/* public: class FRangeVector __thiscall FRangeVector::operator+=(class FRangeVector const &) */

void __thiscall FRangeVector::operator+=(FRangeVector *this,FRangeVector *param_1)

{
  undefined4 uVar1;
  float *in_stack_00000008;
  
                    /* 0x366b  681  ??YFRangeVector@@QAE?AV0@ABV0@@Z */
  *(float *)this = *in_stack_00000008 + *(float *)this;
  *(float *)(this + 4) = in_stack_00000008[1] + *(float *)(this + 4);
  *(float *)(this + 8) = in_stack_00000008[2] + *(float *)(this + 8);
  *(float *)(this + 0xc) = in_stack_00000008[3] + *(float *)(this + 0xc);
  *(float *)(this + 0x10) = *(float *)(this + 0x10) + in_stack_00000008[4];
  *(float *)(this + 0x14) = in_stack_00000008[5] + *(float *)(this + 0x14);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


// ==== 10103675 UObject::CreatePackage

/* public: static class UPackage * __cdecl UObject::CreatePackage(class UObject *,unsigned short
   const *) */

UPackage * __cdecl UObject::CreatePackage(UObject *param_1,ushort *param_2)

{
  UPackage *pUVar1;
  UObject *this;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3675  900  ?CreatePackage@UObject@@SAPAVUPackage@@PAV1@PBG@Z */
  puStack_c = &LAB_101bd770;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ResolveName(&param_1,&param_2,1,0);
  pUVar1 = (UPackage *)thunk_FUN_101495d0(param_1,param_2,0);
  if (pUVar1 == (UPackage *)0x0) {
    FName::FName((FName *)&uStack_18,param_2,1);
    this = StaticAllocateObject(&UPackage::PrivateStaticClass,param_1,uStack_18,4,0,GError,0,0);
    if (this == (UObject *)0x0) {
      ExceptionList = pvStack_10;
      return (UPackage *)0x0;
    }
    pUVar1 = (UPackage *)UPackage::UPackage((UPackage *)this);
  }
  ExceptionList = pvStack_10;
  return pUVar1;
}


// ==== 1010367a FString::Reverse

/* public: class FString __thiscall FString::Reverse(void) */

FString * __thiscall FString::Reverse(FString *this)

{
  int iVar1;
  FString *pFVar2;
  FString *in_stack_00000004;
  FString aFStack_30 [20];
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x367a  1774  ?Reverse@FString@@QAE?AV1@XZ */
  puStack_c = &LAB_101b8591;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_18 = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString(in_stack_00000004);
  uStack_18 = 1;
  if (*(int *)(this + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 4) + -1;
  }
  while (iVar1 = iVar1 + -1, iStack_1c = iVar1, -1 < iVar1) {
    pFVar2 = (FString *)Mid(this,(int)aFStack_30,iVar1);
    uStack_8._0_1_ = 2;
    operator+=(in_stack_00000004,pFVar2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    ~FString(aFStack_30);
  }
  operator=(this,in_stack_00000004);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1010367f UArrayProperty::DestroyValue

/* public: virtual void __thiscall UArrayProperty::DestroyValue(void *)const  */

void __thiscall UArrayProperty::DestroyValue(UArrayProperty *this,void *param_1)

{
  UClass *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x367f  924  ?DestroyValue@UArrayProperty@@UBEXPAX@Z */
  if (*(int *)(this + 0x54) == 0) {
    for (pUVar1 = *(UClass **)(*(int *)(this + 0x18) + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UClass::PrivateStaticClass) {
        return;
      }
    }
  }
  if ((*(uint *)(*(int *)(this + 0x78) + 0x48) & 0x400000) != 0) {
    iVar3 = *(int *)param_1;
    iVar4 = 0;
    iVar2 = *(int *)(*(int *)(this + 0x78) + 0x44);
    if (0 < *(int *)((int)param_1 + 4)) {
      do {
        (**(code **)(**(int **)(this + 0x78) + 0xac))(iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + iVar2;
      } while (iVar4 < *(int *)((int)param_1 + 4));
    }
  }
  if (*(int *)param_1 != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)param_1);
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  return;
}


// ==== 10103684 FRange::operator-

/* public: class FRange __thiscall FRange::operator-(float)const  */

float __thiscall FRange::operator-(FRange *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x3684  623  ??GFRange@@QBE?AV0@M@Z */
  FRange((FRange *)param_1,*(float *)this - in_stack_00000008,
         *(float *)(this + 4) - in_stack_00000008);
  return param_1;
}


// ==== 10103689 thunk_FUN_1014fad0 thunk -> 1014fad0

// ==== 10103693 FRotator::operator!=

/* public: int __thiscall FRotator::operator!=(class FRotator const &)const  */

int __thiscall FRotator::operator!=(FRotator *this,FRotator *param_1)

{
                    /* 0x3693  586  ??9FRotator@@QBEHABV0@@Z */
  if (((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(this + 8) == *(int *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}


// ==== 10103698 UObject::execNew

/* public: void __thiscall UObject::execNew(struct FFrame &,void * const) */

void __thiscall UObject::execNew(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  FOutputDevice *this_00;
  void *unaff_EDI;
  void **ppvVar6;
  FFrame *pFStack_3c;
  ushort *puVar7;
  FString aFStack_20 [4];
  uint uStack_1c;
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3698  2324  ?execNew@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb220;
  pvStack_c = ExceptionList;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  pFStack_3c = (FFrame *)0x101458aa;
  FString::FString(aFStack_20,(ushort *)&DAT_101d3ef0);
  pvStack_c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pFStack_3c = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvVar6 = &pvStack_c;
  pFVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,ppvVar6);
  puVar7 = (ushort *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffc8);
  if ((uStack_1c & 0xff87bf7a) != 0) {
    FOutputDevice::Logf(this_00,(ushort *)param_1);
  }
  if (pFVar2 == (FFrame *)0x0) {
    pFVar2 = (FFrame *)GetTransientPackage();
  }
  if ((param_1 == (FFrame *)0x0) || (param_1 == (FFrame *)0x1)) {
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined4 *)FName::FName((FName *)&pFStack_3c,puVar7,1);
    uVar4 = *puVar3;
  }
  pUVar5 = StaticConstructObject(ppvVar6,pFVar2,uVar4,uStack_1c & 0x784085,0,param_1,0);
  *puStack_18 = pUVar5;
  FArray::Realloc((FArray *)&stack0xffffffc8,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffc8);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 101036a7 UObject::PostEditChange

/* public: virtual void __thiscall UObject::PostEditChange(void) */

void __thiscall UObject::PostEditChange(UObject *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x36a7  1685  ?PostEditChange@UObject@@UAEXXZ */
  puStack_c = &LAB_101bd2d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0x20))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 101036b1 FString::operator=

/* public: class FString & __thiscall FString::operator=(class FString const &) */

FString * __thiscall FString::operator=(FString *this,FString *param_1)

{
  undefined4 uVar1;
  undefined2 *_Src;
  
                    /* 0x36b1  493  ??4FString@@QAEAAV0@ABV0@@Z */
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


// ==== 101036b6 thunk_FUN_1014fa60 thunk -> 1014fa60

// ==== 101036bb thunk_FUN_101370b0 thunk -> 101370b0

// ==== 101036c0 thunk_FUN_1012adf0 thunk -> 1012adf0

// ==== 101036ca FVehicleRoutePointHit::operator==

/* public: int __thiscall FVehicleRoutePointHit::operator==(class FVehicleRoutePointHit const
   &)const  */

int __thiscall
FVehicleRoutePointHit::operator==(FVehicleRoutePointHit *this,FVehicleRoutePointHit *param_1)

{
                    /* 0x36ca  576  ??8FVehicleRoutePointHit@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}


// ==== 101036cf UObject::execMirrorVectorByNormal

/* public: void __thiscall UObject::execMirrorVectorByNormal(struct FFrame &,void * const) */

void __thiscall UObject::execMirrorVectorByNormal(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 **ppuStack_34;
  FFrame *pFStack_30;
  float **ppfStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *apfStack_c [3];
  
                    /* 0x36cf  2305  ?execMirrorVectorByNormal@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppfStack_2c = apfStack_c;
  pFStack_30 = param_1;
  ppuStack_34 = (undefined4 **)0x10140026;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppuStack_34 = &ppfStack_2c;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pfVar5 = (float *)FVector::SafeNormal((FVector *)&ppuStack_34);
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  fVar4 = fStack_20 * *pfVar5 + fStack_1c * fVar2 + fStack_18 * fVar3;
  *apfStack_c[0] = fStack_20 - fVar4 * *pfVar5 * 2.0;
  apfStack_c[0][1] = fStack_1c - fVar2 * 2.0 * fVar4;
  apfStack_c[0][2] = fStack_18 - fVar4 * fVar3 * 2.0;
  return;
}


// ==== 101036d4 UObject::execMid

/* public: void __thiscall UObject::execMid(struct FFrame &,void * const) */

void __thiscall UObject::execMid(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined2 *_Src;
  FFrame *pFStack_40;
  undefined4 *puStack_3c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FArray *pFStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x36d4  2303  ?execMid@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb4d0;
  pvStack_c = ExceptionList;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_3c = &uStack_24;
  pFStack_40 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd0);
  puStack_3c = (undefined4 *)0xffff;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&puStack_3c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar3 = (FArray *)FString::Mid((FString *)&puStack_3c,(int)&stack0xffffffd0,(int)pFStack_40);
  uStack_20._0_1_ = 3;
  if (pFStack_14 != pFVar3) {
    uVar2 = *(undefined4 *)(pFVar3 + 4);
    *(undefined4 *)(pFStack_14 + 8) = uVar2;
    *(undefined4 *)(pFStack_14 + 4) = uVar2;
    FArray::Realloc(pFStack_14,2);
    if (*(int *)(pFStack_14 + 4) != 0) {
      if (*(int *)(pFVar3 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)pFVar3;
      }
      _memcpy(*(void **)pFStack_14,_Src,*(int *)(pFStack_14 + 4) * 2);
    }
  }
  uStack_20._0_1_ = 4;
  FArray::Realloc((FArray *)&stack0xffffffcc,2);
  uStack_20 = CONCAT31(uStack_20._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffcc);
  uStack_20 = 5;
  puStack_3c = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&pFStack_40,2);
  uStack_20 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&pFStack_40);
  ExceptionList = pvStack_28;
  return;
}


// ==== 101036d9 FRangeVector::operator==

/* public: int __thiscall FRangeVector::operator==(class FRangeVector const &)const  */

int __thiscall FRangeVector::operator==(FRangeVector *this,FRangeVector *param_1)

{
                    /* 0x36d9  568  ??8FRangeVector@@QBEHABV0@@Z */
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
      && (*(float *)(param_1 + 8) == *(float *)(this + 8))) &&
     (((*(float *)(param_1 + 0xc) == *(float *)(this + 0xc) &&
       (*(float *)(param_1 + 0x10) == *(float *)(this + 0x10))) &&
      (*(float *)(param_1 + 0x14) == *(float *)(this + 0x14))))) {
    return 1;
  }
  return 0;
}


// ==== 101036de UObject::LoadLocalized

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::LoadLocalized(void) */

void __thiscall UObject::LoadLocalized(UObject *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x36de  1573  ?LoadLocalized@UObject@@QAEXXZ */
  puStack_c = &LAB_101bcc50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 0x24);
  if ((*(byte *)(iVar1 + 0x4a4) & 0x20) == 0) {
    return;
  }
  if (GIsEditor != 0) {
    return;
  }
  iVar4 = *(int *)(this + 4);
  if (iVar4 == -1) {
LAB_1015f674:
    iVar3 = *(int *)(iVar1 + 0x18);
  }
  else {
    if (((*(uint *)(this + 0x1c) & 0x100) != 0) && (*(int *)(*(int *)(this + 0x18) + 0x18) != 0)) {
      iVar2 = *(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc;
      iVar4 = *(int *)(_Names + *(int *)(*(int *)(this + 0x18) + 0x20) * 4);
      iVar3 = *(int *)(_Names + *(int *)(*(int *)(*(int *)(this + 0x18) + 0x18) + 0x20) * 4);
      goto LAB_1015f6a3;
    }
    if (iVar4 == -1) goto LAB_1015f674;
    iVar3 = *(int *)(this + 0x18);
  }
  iVar3 = *(int *)(_Names + *(int *)(iVar3 + 0x20) * 4);
  if (iVar4 == -1) {
    iVar4 = *(int *)(iVar1 + 0x20);
  }
  else {
    iVar4 = *(int *)(this + 0x20);
  }
  iVar4 = *(int *)(_Names + iVar4 * 4);
  iVar2 = 0;
LAB_1015f6a3:
  ExceptionList = &pvStack_10;
  FUN_1015f460(iVar1,iVar3 + 0xc,iVar4 + 0xc,iVar2,this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101036e3 FBufferReader::Tell

/* public: virtual int __thiscall FBufferReader::Tell(void) */

int __thiscall FBufferReader::Tell(FBufferReader *this)

{
                    /* 0x36e3  1956  ?Tell@FBufferReader@@UAEHXZ */
  return *(int *)(this + 0x3c);
}


// ==== 101036e8 FFileStream::~FFileStream

/* private: __thiscall FFileStream::~FFileStream(void) */

void __thiscall FFileStream::~FFileStream(FFileStream *this)

{
                    /* 0x36e8  301  ??1FFileStream@@AAE@XZ */
  return;
}


// ==== 101036ed FNotifyHook::FNotifyHook

/* public: __thiscall FNotifyHook::FNotifyHook(class FNotifyHook const &) */

void __thiscall FNotifyHook::FNotifyHook(FNotifyHook *this,FNotifyHook *param_1)

{
                    /* 0x36ed  86  ??0FNotifyHook@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 101036f2 AllocateNameEntry

/* struct FNameEntry * __cdecl AllocateNameEntry(unsigned short const *,unsigned long,unsigned
   long,struct FNameEntry *) */

FNameEntry * __cdecl
AllocateNameEntry(ushort *param_1,ulong param_2,ulong param_3,FNameEntry *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  FNameEntry *pFVar3;
  wchar_t *pwVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x36f2  798  ?AllocateNameEntry@@YAPAUFNameEntry@@PBGKKPAU1@@Z */
  puStack_c = &LAB_101bc550;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  puVar1 = *(undefined4 **)GMalloc;
  pwVar4 = L"NameEntry";
  ExceptionList = &pvStack_10;
  iVar2 = appStrlen(param_1);
  pFVar3 = (FNameEntry *)(*(code *)*puVar1)(iVar2 * 2 + 0xe,pwVar4);
  *(ulong *)pFVar3 = param_2;
  *(ulong *)(pFVar3 + 4) = param_3;
  *(FNameEntry **)(pFVar3 + 8) = param_4;
  appStrcpy((ushort *)(pFVar3 + 0xc),param_1);
  ExceptionList = pvStack_10;
  return pFVar3;
}


// ==== 101036f7 UFunction::Bind

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UFunction::Bind(void) */

void __thiscall UFunction::Bind(UFunction *this)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  _func_void_FFrame_ptr_void_ptr **pp_Var5;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x36f7  817  ?Bind@UFunction@@UAEXXZ */
  puStack_c = &LAB_101ba0f0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  if ((*(uint *)(this + 0x8c) & 0x400) == 0) {
    if (*(short *)(this + 0x90) != 0) {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffdd4;
      appFailAssert("iNative==0",".\\UnClass.cpp",0x641);
    }
    *(code **)(this + 0x9c) = UObject::ProcessInternal;
  }
  else {
    if (*(ushort *)(this + 0x90) == 0) {
      ExceptionList = &pvStack_10;
      piVar1 = (int *)(**(code **)(*(int *)this + 0x74))();
      uVar2 = (**(code **)(*piVar1 + 0x94))(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
      appSprintf(auStack_220,(ushort *)L"int%sexec%s",uVar2);
      iVar3 = (**(code **)(*(int *)this + 0x74))();
      puVar4 = UPackage::GetDllExport(*(UPackage **)(iVar3 + 0x18),auStack_220,1);
      if (puVar4 == (undefined4 *)0x0) {
        ExceptionList = pvStack_10;
        return;
      }
      pp_Var5 = (_func_void_FFrame_ptr_void_ptr **)*puVar4;
    }
    else {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffdd4;
      if (0xfff < *(ushort *)(this + 0x90)) {
        ExceptionList = &pvStack_10;
        puStack_14 = &stack0xfffffdd4;
        appFailAssert("iNative<EX_Max",".\\UnClass.cpp",0x647);
      }
      if ((&GNatives)[*(ushort *)(this + 0x90)] == (_func_void_FFrame_ptr_void_ptr **)0x0) {
        appFailAssert("GNatives[iNative]!=0",".\\UnClass.cpp",0x648);
      }
      pp_Var5 = (&GNatives)[*(ushort *)(this + 0x90)];
    }
    *(_func_void_FFrame_ptr_void_ptr ***)(this + 0x9c) = pp_Var5;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101036fc FString::operator>

/* public: int __thiscall FString::operator>(unsigned short const *)const  */

int __thiscall FString::operator>(FString *this,ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x36fc  653  ??OFString@@QBEHPBG@Z */
  if (*(int *)(this + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)this;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return (uint)(0 < iVar2);
}


// ==== 10103701 UParamStack::operator_new

/* public: static void * __cdecl UParamStack::operator new(unsigned int,enum EInternal *) */

void * __cdecl UParamStack::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x3701  406  ??2UParamStack@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10103706 thunk_FUN_1011a1c0 thunk -> 1011a1c0

// ==== 1010370b TArray<unsigned_short>::RemoveItem

/* public: int __thiscall TArray<unsigned short>::RemoveItem(unsigned short const &) */

int __thiscall TArray<unsigned_short>::RemoveItem(TArray<unsigned_short> *this,ushort *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x370b  1766  ?RemoveItem@?$TArray@G@@QAEHABG@Z */
  iVar1 = *(int *)(this + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(ushort *)(*(int *)this + iVar2 * 2) == *param_1) {
        Remove(this,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 4));
  }
  return iVar1 - *(int *)(this + 4);
}


// ==== 10103710 FSphere::FSphere

/* public: __thiscall FSphere::FSphere(class FSphere const &) */

void __thiscall FSphere::FSphere(FSphere *this,FSphere *param_1)

{
                    /* 0x3710  134  ??0FSphere@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ==== 10103715 FPackageFileSummary::GetFileVersionLicensee

/* public: int __thiscall FPackageFileSummary::GetFileVersionLicensee(void)const  */

int __thiscall FPackageFileSummary::GetFileVersionLicensee(FPackageFileSummary *this)

{
                    /* 0x3715  1321  ?GetFileVersionLicensee@FPackageFileSummary@@QBEHXZ */
  return (uint)*(ushort *)(this + 6);
}


// ==== 1010371a FFeedbackContext::MapCheck_ShowConditionally

/* public: virtual void __thiscall FFeedbackContext::MapCheck_ShowConditionally(void) */

void __thiscall FFeedbackContext::MapCheck_ShowConditionally(FFeedbackContext *this)

{
                    /* 0x371a  1606  ?MapCheck_ShowConditionally@FFeedbackContext@@UAEXXZ */
  return;
}


// ==== 10103724 L2ThreadUtil::DeleteThreadSafeParam

/* public: void __thiscall L2ThreadUtil::DeleteThreadSafeParam(void *) */

void __thiscall L2ThreadUtil::DeleteThreadSafeParam(L2ThreadUtil *this,void *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3724  912  ?DeleteThreadSafeParam@L2ThreadUtil@@QAEXPAX@Z */
  puStack_c = &LAB_101b94d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_101088c0(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103729 FOutputDeviceError::operator=

/* public: class FOutputDeviceError & __thiscall FOutputDeviceError::operator=(class
   FOutputDeviceError const &) */

FOutputDeviceError * __thiscall
FOutputDeviceError::operator=(FOutputDeviceError *this,FOutputDeviceError *param_1)

{
                    /* 0x3729  475  ??4FOutputDeviceError@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 1010372e thunk_FUN_10148720 thunk -> 10148720

// ==== 10103733 ULinker::operator_new

/* public: static void * __cdecl ULinker::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
ULinker::operator_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3733  387  ??2ULinker@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10103738 UPackage::InternalConstructor

/* public: static void __cdecl UPackage::InternalConstructor(void *) */

void __cdecl UPackage::InternalConstructor(void *param_1)

{
                    /* 0x3738  1495  ?InternalConstructor@UPackage@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UPackage(param_1);
    return;
  }
  return;
}


// ==== 1010373d FBitReader::ReadBit

/* public: unsigned char __thiscall FBitReader::ReadBit(void) */

uchar __thiscall FBitReader::ReadBit(FBitReader *this)

{
  undefined1 *puVar1;
  
                    /* 0x373d  1747  ?ReadBit@FBitReader@@QAEEXZ */
  puVar1 = &stack0xffffffff;
  (**(code **)(*(int *)this + 8))(puVar1,1,(uint)this & 0xffffff);
  return (uchar)((uint)puVar1 >> 0x18);
}


// ==== 10103742 thunk_FUN_10126040 thunk -> 10126040

// ==== 10103747 appAsin

/* double __cdecl appAsin(double) */

double __cdecl appAsin(double param_1)

{
  float10 fVar1;
  
                    /* 0x3747  2014  ?appAsin@@YANN@Z */
  fVar1 = (float10)FUN_1017c560();
  return (double)fVar1;
}


// ==== 1010374c UStructProperty::NetSerializeItem

/* public: virtual int __thiscall UStructProperty::NetSerializeItem(class FArchive &,class
   UPackageMap *,void *)const  */

int __thiscall
UStructProperty::NetSerializeItem
          (UStructProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
  int *piVar1;
  UPackageMap *pUVar2;
  void *pvVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FArchive *pFVar14;
  int unaff_ESI;
  int unaff_EDI;
  char unaff_retaddr;
  undefined4 uStack_84;
  float **ppfStack_80;
  int iStack_7c;
  undefined1 *puStack_78;
  FArchive *pFStack_74;
  char *pcStack_70;
  FArchive *pFStack_6c;
  FArchive *pFStack_64;
  undefined4 uStack_60;
  short sVar15;
  char cStack_40;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int *piStack_18;
  float *pfStack_14;
  byte bStack_10;
  char cStack_c;
  undefined1 auStack_8 [4];
  char acStack_4 [4];
  
                    /* 0x374c  1639
                       ?NetSerializeItem@UStructProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  pvVar3 = param_3;
  iVar5 = *(int *)(*(int *)(this + 0x78) + 0x20);
  if (iVar5 == 0x57) {
    uStack_60 = (UPackageMap *)0x10173d25;
    iVar5 = appRound(*(float *)param_3);
    uStack_60 = (UPackageMap *)0x10173d36;
    iStack_34 = iVar5;
    iVar6 = appRound(*(float *)((int)pvVar3 + 4));
    uStack_60 = (UPackageMap *)0x10173d47;
    iStack_38 = iVar6;
    iVar7 = appRound(*(float *)((int)pvVar3 + 8));
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    if (iVar5 < iVar7) {
      iVar5 = iVar7;
    }
    uStack_60 = (UPackageMap *)0x10173d79;
    bVar4 = appCeilLogTwo(iVar5 + 1);
    uVar8 = (uint)bVar4;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    else if (0x13 < uVar8) {
      uVar8 = 0x14;
    }
    param_2 = (UPackageMap *)(uVar8 - 1);
    iVar6 = 0x14;
    uStack_60 = (UPackageMap *)&param_2;
    pFStack_64 = (FArchive *)0x10173db0;
    (**(code **)(*(int *)param_1 + 0xc))();
    iVar5 = 1 << (unaff_retaddr + 1U & 0x1f);
    pFVar14 = (FArchive *)(1 << (unaff_retaddr + 2U & 0x1f));
    pFStack_6c = (FArchive *)0x10173df4;
    pFStack_64 = pFVar14;
    (**(code **)(*(int *)param_1 + 0xc))();
    pcStack_70 = &stack0xffffffb0;
    pFStack_74 = (FArchive *)0x10173e03;
    pFStack_6c = pFVar14;
    (**(code **)(*(int *)param_1 + 0xc))();
    puStack_78 = &stack0xffffffa4;
    iStack_7c = 0x10173e12;
    pFStack_74 = pFVar14;
    (**(code **)(*(int *)param_1 + 0xc))();
    if (*(int *)(param_1 + 0x10) != 0) {
      *pfStack_14 = (float)(iVar6 - iVar5);
      pfStack_14[1] = (float)((int)uStack_60 - iVar5);
      pfStack_14[2] = (float)((int)pFStack_64 - iVar5);
      return 1;
    }
  }
  else if (iVar5 == 0x58) {
    param_2 = (UPackageMap *)
              CONCAT31(param_2._1_3_,(char)((uint)*(undefined4 *)((int)param_3 + 4) >> 8));
    uStack_60 = (UPackageMap *)&param_3;
    param_3 = (void *)CONCAT31(param_3._1_3_,(char)((uint)*(undefined4 *)param_3 >> 8) != '\0');
    pFStack_64 = (FArchive *)0x10173ec0;
    (**(code **)(*(int *)param_1 + 8))();
    if ((char)param_1 != '\0') {
      pFStack_64 = (FArchive *)0x1;
      pFStack_6c = (FArchive *)0x10173ed7;
      (**(code **)(*(int *)param_1 + 4))();
    }
    pFStack_64 = (FArchive *)0x1;
    pFStack_6c = (FArchive *)0x10173efa;
    (**(code **)(*(int *)param_1 + 8))();
    if (acStack_4[0] == '\0') {
      auStack_8[0] = 0;
    }
    else {
      pFStack_6c = (FArchive *)0x1;
      pcStack_70 = auStack_8;
      pFStack_74 = (FArchive *)0x10173f11;
      (**(code **)(*(int *)param_1 + 4))();
    }
    acStack_4[0] = (char)((uint)unaff_EDI >> 0x10) != '\0';
    pFStack_6c = (FArchive *)0x1;
    pcStack_70 = acStack_4;
    pFStack_74 = (FArchive *)0x10173f34;
    (**(code **)(*(int *)param_1 + 8))();
    if (cStack_c == '\0') {
      bVar4 = 0;
    }
    else {
      pFStack_74 = (FArchive *)0x1;
      puStack_78 = (undefined1 *)((int)&uStack_60 + 2);
      iStack_7c = 0x10173f4b;
      (**(code **)(*(int *)param_1 + 4))();
      bVar4 = uStack_60._2_1_;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(uint *)pvVar3 = ((uint)uStack_60 >> 0x18) << 8;
      *(uint *)((int)pvVar3 + 4) = (uint)bStack_10 << 8;
      *(uint *)((int)pvVar3 + 8) = (uint)bVar4 << 8;
      return 1;
    }
  }
  else if (iVar5 == 0x5b) {
    uStack_60 = (UPackageMap *)0x10173fa0;
    uVar8 = appRound(*(float *)param_3);
    param_3 = (void *)(uVar8 & 0xffff);
    uStack_60 = (UPackageMap *)0x10173fb2;
    uVar8 = appRound(*(float *)((int)pvVar3 + 4));
    param_2 = (UPackageMap *)(uVar8 & 0xffff);
    uStack_60 = (UPackageMap *)0x10173fc4;
    appRound(*(float *)((int)pvVar3 + 8));
    uStack_60 = (UPackageMap *)0x10173fd6;
    appRound(*(float *)((int)pvVar3 + 0xc));
    sVar15 = 2;
    uStack_60 = (UPackageMap *)&param_3;
    pFStack_64 = (FArchive *)0x10173ff4;
    (**(code **)(*(int *)param_1 + 4))();
    pFStack_64 = (FArchive *)0x2;
    pFStack_6c = (FArchive *)0x10174004;
    (**(code **)(*(int *)param_1 + 4))();
    pFStack_6c = (FArchive *)0x2;
    pcStack_70 = &stack0xffffffb4;
    pFStack_74 = (FArchive *)0x10174014;
    (**(code **)(*(int *)param_1 + 4))();
    pFStack_74 = (FArchive *)0x2;
    puStack_78 = &stack0xffffffa8;
    iStack_7c = 0x10174024;
    (**(code **)(*(int *)param_1 + 4))();
    if (*(int *)(param_1 + 0x10) != 0) {
      *(float *)pvVar3 = (float)(int)(short)pfStack_14;
      *(float *)((int)pvVar3 + 4) = (float)(int)(short)piStack_18;
      *(float *)((int)pvVar3 + 8) = (float)(int)sVar15;
      *(float *)((int)pvVar3 + 0xc) = (float)(int)(short)uStack_60;
      return 1;
    }
  }
  else if (iVar5 == 0x5d) {
    uStack_60 = (UPackageMap *)0x101740b4;
    uVar9 = appRound(*(float *)((int)param_3 + 0x18));
    uStack_60 = (UPackageMap *)0x101740c5;
    uStack_24 = uVar9;
    uVar10 = appRound(*(float *)((int)pvVar3 + 0x1c));
    uStack_60 = (UPackageMap *)0x101740d6;
    uStack_20 = uVar10;
    uStack_1c = appRound(*(float *)((int)pvVar3 + 0x20));
    uVar8 = uStack_1c;
    if ((int)uStack_1c < 0) {
      uVar8 = -uStack_1c;
    }
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
    }
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if ((int)uVar9 < (int)uVar10) {
      uVar9 = uVar10;
    }
    if ((int)uVar8 <= (int)uVar9) {
      uVar8 = uVar9;
    }
    uStack_60 = (UPackageMap *)0x10174108;
    bVar4 = appCeilLogTwo(uVar8 + 1);
    uVar8 = (uint)bVar4;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    else if (0x13 < uVar8) {
      uVar8 = 0x14;
    }
    iStack_34 = uVar8 - 1;
    uStack_60 = (UPackageMap *)0x10174137;
    fVar11 = (float)appRound(*(float *)pvVar3);
    uStack_60 = (UPackageMap *)0x10174148;
    fStack_30 = fVar11;
    fVar12 = (float)appRound(*(float *)((int)pvVar3 + 4));
    uStack_60 = (UPackageMap *)0x10174159;
    fStack_2c = fVar12;
    fStack_28 = (float)appRound(*(float *)((int)pvVar3 + 8));
    fVar13 = fStack_28;
    if ((int)fStack_28 < 0) {
      fVar13 = (float)-(int)fStack_28;
    }
    if ((int)fVar12 < 0) {
      fVar12 = (float)-(int)fVar12;
    }
    if ((int)fVar11 < 0) {
      fVar11 = (float)-(int)fVar11;
    }
    if ((int)fVar11 < (int)fVar12) {
      fVar11 = fVar12;
    }
    if ((int)fVar11 < (int)fVar13) {
      fVar11 = fVar13;
    }
    uStack_60 = (UPackageMap *)0x10174189;
    bVar4 = appCeilLogTwo((int)fVar11 + 1);
    uVar8 = (uint)bVar4;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    else if (0x13 < uVar8) {
      uVar8 = 0x14;
    }
    iStack_38 = uVar8 - 1;
    iVar6 = 0x14;
    uStack_60 = (UPackageMap *)&iStack_38;
    pFStack_64 = (FArchive *)0x101741c0;
    (**(code **)(*(int *)param_1 + 0xc))();
    iVar5 = 1 << (cStack_40 + 1U & 0x1f);
    pFVar14 = (FArchive *)(1 << (cStack_40 + 2U & 0x1f));
    pFStack_6c = (FArchive *)0x10174208;
    pFStack_64 = pFVar14;
    (**(code **)(*(int *)param_1 + 0xc))();
    pcStack_70 = &stack0xffffffb0;
    pFStack_74 = (FArchive *)0x10174217;
    pFStack_6c = pFVar14;
    (**(code **)(*(int *)param_1 + 0xc))();
    puStack_78 = &stack0xffffffac;
    iStack_7c = 0x10174226;
    pFStack_74 = pFVar14;
    (**(code **)(*(int *)param_1 + 0xc))();
    if (*(int *)(param_1 + 0x10) != 0) {
      fStack_30 = (float)((int)pFStack_64 - iVar5);
      fStack_2c = (float)((int)uStack_60 - iVar5);
      pfStack_14 = (float *)(iVar6 - iVar5);
      *(float *)pvVar3 = fStack_30;
      fStack_28 = (float)(int)pfStack_14;
      *(float *)((int)pvVar3 + 4) = fStack_2c;
      *(float *)((int)pvVar3 + 8) = fStack_28;
    }
    pfStack_14 = (float *)CONCAT31(pfStack_14._1_3_,
                                   (char)((uint)*(undefined4 *)((int)pvVar3 + 0xc) >> 8));
    iStack_7c = 1;
    ppfStack_80 = &pfStack_14;
    piStack_18 = (int *)CONCAT31(piStack_18._1_3_,
                                 (char)((uint)*(undefined4 *)((int)pvVar3 + 0x10) >> 8));
    uStack_84 = 0x1017429b;
    (**(code **)(*(int *)param_1 + 4))();
    uStack_84 = 1;
    (**(code **)(*(int *)param_1 + 4))(&uStack_20);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(uint *)((int)pvVar3 + 0xc) = (uStack_24 & 0xff) << 8;
      *(uint *)((int)pvVar3 + 0x10) = ((uint)fStack_28 & 0xff) << 8;
      *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    }
    (**(code **)(*(int *)param_1 + 0xc))();
    iVar7 = 1 << ((char)pFStack_6c + 1U & 0x1f);
    iVar5 = 1 << ((char)pFStack_6c + 2U & 0x1f);
    iStack_7c = iVar7 + iVar6;
    puStack_78 = (undefined1 *)(iVar7 + unaff_EDI);
    pFStack_74 = (FArchive *)(iVar7 + unaff_ESI);
    (**(code **)(*(int *)param_1 + 0xc))(&iStack_7c);
    (**(code **)(*(int *)param_1 + 0xc))(&ppfStack_80,iVar5);
    (**(code **)(*(int *)param_1 + 0xc))(&uStack_84,iVar5);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(float *)((int)pvVar3 + 0x18) = (float)(iVar5 - iVar7);
      *(float *)((int)pvVar3 + 0x1c) = (float)((int)&pFStack_64 - iVar7);
      *(float *)((int)pvVar3 + 0x20) = (float)(0x14 - iVar7);
      return 1;
    }
  }
  else {
    uStack_60 = (UPackageMap *)0x101743ab;
    thunk_FUN_10119210();
    pUVar2 = param_2;
    piVar1 = piStack_18;
    while (piVar1 != (int *)0x0) {
      uStack_60 = (UPackageMap *)0x101743ca;
      piStack_18 = piVar1;
      iVar5 = (**(code **)(*(int *)pUVar2 + 0x74))();
      if ((iVar5 != -1) && (iVar5 = 0, 0 < piVar1[0x10])) {
        do {
          uStack_60 = pUVar2;
          pFStack_64 = param_1;
          (**(code **)(*piVar1 + 0x94))();
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar1[0x10]);
      }
      piStack_18 = (int *)piVar1[0xe];
      thunk_FUN_10114340();
      piVar1 = piStack_18;
    }
  }
  return 1;
}


// ==== 10103751 L2ThreadBase::GetEventHandle

/* public: virtual void * __thiscall L2ThreadBase::GetEventHandle(void) */

void * __thiscall L2ThreadBase::GetEventHandle(L2ThreadBase *this)

{
                    /* 0x3751  1311  ?GetEventHandle@L2ThreadBase@@UAEPAXXZ */
  return *(void **)(this + 0xc);
}


// ==== 10103756 FRange::GetSRand

/* public: float __thiscall FRange::GetSRand(void)const  */

float __thiscall FRange::GetSRand(FRange *this)

{
  float fVar1;
  
                    /* 0x3756  1392  ?GetSRand@FRange@@QBEMXZ */
  fVar1 = appSRand();
  return (*(float *)this - *(float *)(this + 4)) * fVar1 + *(float *)(this + 4);
}


// ==== 1010375b FArchive::Precache

/* public: virtual void __thiscall FArchive::Precache(int) */

void __thiscall FArchive::Precache(FArchive *this,int param_1)

{
                    /* 0x375b  1691  ?Precache@FArchive@@UAEXH@Z */
  return;
}


// ==== 10103760 USystem::USystem

/* public: __thiscall USystem::USystem(class USystem const &) */

USystem * __thiscall USystem::USystem(USystem *this,USystem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3760  284  ??0USystem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b90df;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  USubsystem::USubsystem((USubsystem *)this,(USubsystem *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::FString((FString *)(this + 0x40),(FString *)(param_1 + 0x40));
  uStack_4._0_1_ = 1;
  FString::FString((FString *)(this + 0x4c),(FString *)(param_1 + 0x4c));
  uStack_4._0_1_ = 2;
  FString::FString((FString *)(this + 0x58),(FString *)(param_1 + 0x58));
  uStack_4._0_1_ = 3;
  thunk_FUN_10120630(param_1 + 100);
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  thunk_FUN_10118cb0(param_1 + 0x70);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1010376a appExit

/* void __cdecl appExit(void) */

void __cdecl appExit(void)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x376a  2038  ?appExit@@YAXXZ */
  puStack_c = &LAB_101bc140;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FFileStream::Destroy();
  if (GConfig != (FConfigCache *)0x0) {
    (**(code **)(*(int *)GConfig + 0x44))();
    if (GConfig != (FConfigCache *)0x0) {
      (**(code **)(*(int *)GConfig + 0x4c))(1);
    }
    GConfig = (FConfigCache *)0x0;
  }
  FName::StaticExit();
  if (GIsCriticalError == 0) {
    (**(code **)(*(int *)GMalloc + 0xc))();
  }
  thunk_FUN_10178560();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010376f UBoolProperty::Serialize

/* public: virtual void __thiscall UBoolProperty::Serialize(class FArchive &) */

void __thiscall UBoolProperty::Serialize(UBoolProperty *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x376f  1802  ?Serialize@UBoolProperty@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_101be030;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UProperty::Serialize((UProperty *)this,param_1);
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    thunk_FUN_10108c50(param_1,this + 0x78);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103774 FRangeVector::operator*

/* public: class FRangeVector __thiscall FRangeVector::operator*(float)const  */

void __thiscall FRangeVector::operator*(FRangeVector *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x3774  612  ??DFRangeVector@@QBE?AV0@M@Z */
  fVar1 = in_stack_00000008 * *(float *)(this + 8);
  fVar2 = *(float *)(this + 0xc) * in_stack_00000008;
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar3 = in_stack_00000008 * *(float *)(this + 8);
  fVar1 = *(float *)(this + 0xc) * in_stack_00000008;
  fStack_10 = fVar1;
  if (fVar3 <= fVar1) {
    fStack_10 = fVar3;
  }
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar3 = *(float *)this * in_stack_00000008;
  fVar4 = in_stack_00000008 * *(float *)(this + 4);
  fStack_18 = fVar4;
  if (fVar3 <= fVar4) {
    fStack_18 = fVar3;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)param_1 = fStack_18;
  *(float *)((int)param_1 + 4) = fVar4;
  *(float *)((int)param_1 + 8) = fStack_10;
  *(float *)((int)param_1 + 0xc) = fVar1;
  *(float *)((int)param_1 + 0x10) = fStack_8;
  *(float *)((int)param_1 + 0x14) = fVar2;
  return;
}


// ==== 10103779 L2ThreadInterface::L2ThreadInterface

/* public: __thiscall L2ThreadInterface::L2ThreadInterface(class L2ThreadInterface const &) */

void __thiscall
L2ThreadInterface::L2ThreadInterface(L2ThreadInterface *this,L2ThreadInterface *param_1)

{
                    /* 0x3779  177  ??0L2ThreadInterface@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1010377e FRangeVector::operator-=

/* public: class FRangeVector __thiscall FRangeVector::operator-=(class FVector const &) */

void __thiscall FRangeVector::operator-=(FRangeVector *this,FVector *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *in_stack_00000008;
  
                    /* 0x377e  692  ??ZFRangeVector@@QAE?AV0@ABVFVector@@@Z */
  fVar1 = *in_stack_00000008;
  *(float *)this = *(float *)this - fVar1;
  *(float *)(this + 4) = *(float *)(this + 4) - fVar1;
  fVar1 = in_stack_00000008[1];
  *(float *)(this + 8) = *(float *)(this + 8) - fVar1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) - fVar1;
  fVar1 = in_stack_00000008[2];
  *(float *)(this + 0x10) = *(float *)(this + 0x10) - fVar1;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) - fVar1;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


// ==== 10103783 UStructProperty::ExportCppItem

/* public: virtual void __thiscall UStructProperty::ExportCppItem(class FOutputDevice &,int)const
    */

void __thiscall
UStructProperty::ExportCppItem(UStructProperty *this,FOutputDevice *param_1,int param_2)

{
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3783  972  ?ExportCppItem@UStructProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bdf90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x78) + 0x94))();
  FOutputDevice::Logf(this_00,(ushort *)param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103788 appClipboardPaste

/* class FString __cdecl appClipboardPaste(void) */

FString * __cdecl appClipboardPaste(void)

{
  HWND hWndNewOwner;
  BOOL BVar1;
  ushort *puVar2;
  FString *in_stack_00000004;
  ushort *puStack_34;
  int iStack_30;
  undefined4 uStack_20;
  ushort *puStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3788  2024  ?appClipboardPaste@@YA?AVFString@@XZ */
  puStack_c = &LAB_101be521;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_20 = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(in_stack_00000004);
  uStack_20 = 1;
  hWndNewOwner = GetActiveWindow();
  BVar1 = OpenClipboard(hWndNewOwner);
  if (BVar1 == 0) {
    FString::operator=(in_stack_00000004,(ushort *)&DAT_101e166c);
    ExceptionList = pvStack_10;
    return in_stack_00000004;
  }
  puStack_1c = (ushort *)0x0;
  if (((GUnicode == 0) || (GUnicodeOS == 0)) ||
     (puVar2 = GetClipboardData(0xd), puStack_1c = puVar2, puVar2 == (ushort *)0x0)) {
    puVar2 = GetClipboardData(1);
    puStack_1c = puVar2;
    if (puVar2 != (ushort *)0x0) {
      for (iStack_18 = 0; *(char *)(iStack_18 + (int)puVar2) != '\0'; iStack_18 = iStack_18 + 1) {
      }
      TArray<unsigned_short>::TArray<unsigned_short>
                ((TArray<unsigned_short> *)&puStack_34,iStack_18 + 1);
      uStack_8._0_1_ = 2;
      for (iStack_18 = 0; iStack_18 < iStack_30; iStack_18 = iStack_18 + 1) {
        puStack_34[iStack_18] = (ushort)*(byte *)(iStack_18 + (int)puVar2);
      }
      FString::operator=(in_stack_00000004,puStack_34);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
      if (puVar2 != (ushort *)0x0) goto LAB_1017894c;
    }
    puVar2 = (ushort *)&DAT_101e1644;
  }
  FString::operator=(in_stack_00000004,puVar2);
LAB_1017894c:
  BVar1 = CloseClipboard();
  if (BVar1 != 0) {
    ExceptionList = pvStack_10;
    return in_stack_00000004;
  }
  appFailAssert("CloseClipboard()",".\\UnVcWin32.cpp",0x1d1);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1010378d UObject::execNotEqual_NameName

/* public: void __thiscall UObject::execNotEqual_NameName(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_NameName(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x378d  2331  ?execNotEqual_NameName@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10103792 UProperty::ExportText

/* public: virtual int __thiscall UProperty::ExportText(int,unsigned short *,unsigned char
   *,unsigned char *,int)const  */

int __thiscall
UProperty::ExportText
          (UProperty *this,int param_1,ushort *param_2,uchar *param_3,uchar *param_4,int param_5)

{
  int iVar1;
  uchar *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3792  976  ?ExportText@UProperty@@UBEHHPAGPAE1H@Z */
  puStack_c = &LAB_101bdfc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *param_2 = 0;
  if ((param_3 != param_4) && (iVar1 = Matches(this,param_3,param_4,param_1), iVar1 != 0)) {
    ExceptionList = pvStack_10;
    return 0;
  }
  if (param_4 == (uchar *)0x0) {
    puVar2 = (uchar *)0x0;
  }
  else {
    puVar2 = param_4 + *(int *)(this + 0x44) * param_1 + *(int *)(this + 0x54);
  }
  (**(code **)(*(int *)this + 0x98))
            (param_2,param_3 + *(int *)(this + 0x44) * param_1 + *(int *)(this + 0x54),puVar2,
             param_5);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10103797 FQuat::operator+

/* public: class FQuat __thiscall FQuat::operator+(class FQuat const &)const  */

void __thiscall FQuat::operator+(FQuat *this,FQuat *param_1)

{
  float *in_stack_00000008;
  
                    /* 0x3797  635  ??HFQuat@@QBE?AV0@ABV0@@Z */
  *(float *)param_1 = *in_stack_00000008 + *(float *)this;
  *(float *)(param_1 + 4) = in_stack_00000008[1] + *(float *)(this + 4);
  *(float *)(param_1 + 8) = in_stack_00000008[2] + *(float *)(this + 8);
  *(float *)(param_1 + 0xc) = in_stack_00000008[3] + *(float *)(this + 0xc);
  return;
}


// ==== 1010379c FOutputDevice::Log

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FOutputDevice::Log(enum EName,class FString const &) */

void __thiscall FOutputDevice::Log(FOutputDevice *this,EName param_1,FString *param_2)

{
                    /* 0x379c  1594  ?Log@FOutputDevice@@QAEXW4EName@@ABVFString@@@Z */
  if ((FName::Initialized == 0) || ((*(uint *)(*(int *)(_Names + param_1 * 4) + 4) & 0x1000) == 0))
  {
    if (*(int *)(param_2 + 4) != 0) {
      (*(code *)**(undefined4 **)this)(*(undefined4 *)param_2,param_1);
      return;
    }
    (*(code *)**(undefined4 **)this)(&DAT_101cdd44,param_1);
  }
  return;
}


// ==== 101037a1 FPlane::FPlane

/* public: __thiscall FPlane::FPlane(class FVector,float) */

void __thiscall
FPlane::FPlane(FPlane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
                    /* 0x37a1  109  ??0FPlane@@QAE@VFVector@@M@Z */
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  return;
}


// ==== 101037ab UFixedArrayProperty::StaticClass

/* public: static class UClass * __cdecl UFixedArrayProperty::StaticClass(void) */

UClass * __cdecl UFixedArrayProperty::StaticClass(void)

{
                    /* 0x37ab  1900  ?StaticClass@UFixedArrayProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101037b0 appTimestamp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned short const * __cdecl appTimestamp(void) */

ushort * __cdecl appTimestamp(void)

{
  int iVar1;
  ushort *puVar2;
  char cStack_420;
  undefined1 auStack_41f [1035];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x37b0  2125  ?appTimestamp@@YAPBGXZ */
  puStack_c = &LAB_101b9bb0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbd4;
  uStack_8 = 0;
  _DAT_1027bda0 = 0;
  if (GUnicodeOS == 0) {
    cStack_420 = '\0';
    ExceptionList = &pvStack_10;
    _memset(auStack_41f,0,0x3ff);
    __strdate(&cStack_420);
    puVar2 = appFromAnsi(&cStack_420,(ushort *)0x0);
    appStrcpy((ushort *)&DAT_1027bda0,puVar2);
    appStrcat((ushort *)&DAT_1027bda0,(ushort *)&DAT_101d1168);
    __strtime(&cStack_420);
    puVar2 = appFromAnsi(&cStack_420,(ushort *)0x0);
    appStrcat((ushort *)&DAT_1027bda0,puVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xfffffbd4;
    __wstrdate((wchar_t *)&DAT_1027bda0);
    appStrcat((ushort *)&DAT_1027bda0,(ushort *)&DAT_101d1160);
    iVar1 = appStrlen((ushort *)&DAT_1027bda0);
    __wstrtime((wchar_t *)(&DAT_1027bda0 + iVar1 * 2));
  }
  ExceptionList = pvStack_10;
  return (ushort *)&DAT_1027bda0;
}


// ==== 101037b5 winAnsiToTCHAR

/* unsigned short * __cdecl winAnsiToTCHAR(char *) */

ushort * __cdecl winAnsiToTCHAR(char *param_1)

{
  uint cchWideChar;
  LPWSTR lpWideCharStr;
  
                    /* 0x37b5  2413  ?winAnsiToTCHAR@@YAPAGPAD@Z */
  cchWideChar = MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)0x0,0);
  lpWideCharStr =
       (LPWSTR)(*(code *)**(undefined4 **)GMalloc)
                         (-(uint)((int)((ulonglong)cchWideChar * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)cchWideChar * 2),&DAT_101cd5d8);
  appStrcpy((ushort *)lpWideCharStr,&DAT_101cdd44);
  MultiByteToWideChar(0,0,param_1,-1,lpWideCharStr,cchWideChar);
  return (ushort *)lpWideCharStr;
}


// ==== 101037ba thunk_FUN_10125f90 thunk -> 10125f90

// ==== 101037bf UDelegateProperty::operator_new

/* public: static void * __cdecl UDelegateProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UDelegateProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x37bf  367  ??2UDelegateProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 101037c4 appFreeDllHandle

/* void __cdecl appFreeDllHandle(void *) */

void __cdecl appFreeDllHandle(void *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x37c4  2048  ?appFreeDllHandle@@YAXPAX@Z */
  puStack_c = &LAB_101be340;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (void *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("DllHandle",".\\UnVcWin32.cpp",0x210);
  }
  FreeLibrary(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101037c9 FEdLoadError::~FEdLoadError

/* public: __thiscall FEdLoadError::~FEdLoadError(void) */

void __thiscall FEdLoadError::~FEdLoadError(FEdLoadError *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x37c9  300  ??1FEdLoadError@@QAE@XZ */
  puStack_8 = &LAB_101b815b;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 4));
  ExceptionList = pvStack_c;
  return;
}


// ==== 101037ce FArchive::NetVer

/* public: int __thiscall FArchive::NetVer(void) */

int __thiscall FArchive::NetVer(FArchive *this)

{
                    /* 0x37ce  1640  ?NetVer@FArchive@@QAEHXZ */
  return *(uint *)(this + 8) & 0x7fffffff;
}


// ==== 101037d3 UState::UState

/* public: __thiscall UState::UState(enum ENativeConstructor,int,unsigned short const *,unsigned
   short const *,unsigned long,class UState *) */

UState * __thiscall
UState::UState(UState *this,ENativeConstructor param_1,int param_2,ushort *param_3,ushort *param_4,
              ulong param_5,UState *param_6)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x37d3  269  ??0UState@@QAE@W4ENativeConstructor@@HPBG1KPAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101ba1f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UStruct::UStruct((UStruct *)this,0,param_2,param_3,param_4,param_5,(UStruct *)param_6);
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


// ==== 101037d8 FVector::GetNonParallel

/* public: class FVector __thiscall FVector::GetNonParallel(void) */

void __thiscall FVector::GetNonParallel(FVector *this)

{
  float fVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x37d8  1361  ?GetNonParallel@FVector@@QAE?AV1@XZ */
  fVar1 = *(float *)this;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (0.57 < fVar1) {
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0x3f800000;
    in_stack_00000004[2] = 0;
    return;
  }
  fVar1 = *(float *)(this + 4);
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (0.57 < fVar1) {
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
    in_stack_00000004[2] = 0x3f800000;
    return;
  }
  *in_stack_00000004 = 0x3f800000;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  return;
}


// ==== 101037e7 UPackageMap::UPackageMap

/* public: __thiscall UPackageMap::UPackageMap(void) */

UPackageMap * __thiscall UPackageMap::UPackageMap(UPackageMap *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x37e7  260  ??0UPackageMap@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8fa4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  uStack_4._0_1_ = 2;
  uStack_4._1_3_ = 0;
  thunk_FUN_10123e80();
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  thunk_FUN_10124020();
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101037ec UTextBuffer::UTextBuffer

/* public: __thiscall UTextBuffer::UTextBuffer(class UTextBuffer const &) */

UTextBuffer * __thiscall UTextBuffer::UTextBuffer(UTextBuffer *this,UTextBuffer *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x37ec  286  ??0UTextBuffer@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7623;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this,(UObject *)param_1);
  uStack_4 = 0;
  *(undefined ***)(this + 0x34) = FOutputDevice::vftable;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FOutputDevice_;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::FString((FString *)(this + 0x40),(FString *)(param_1 + 0x40));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101037f1 thunk_FUN_101146f0 thunk -> 101146f0

// ==== 101037f6 FNotifyHook::NotifyDestroy

/* public: virtual void __thiscall FNotifyHook::NotifyDestroy(void *) */

void __thiscall FNotifyHook::NotifyDestroy(FNotifyHook *this,void *param_1)

{
                    /* 0x37f6  1644  ?NotifyDestroy@FNotifyHook@@UAEXPAX@Z */
  return;
}


// ==== 10103805 FVector::operator*

/* public: class FVector __thiscall FVector::operator*(float)const  */

void __thiscall FVector::operator*(FVector *this,float param_1)

{
  float in_stack_00000008;
  
                    /* 0x3805  618  ??DFVector@@QBE?AV0@M@Z */
  *(float *)param_1 = in_stack_00000008 * *(float *)this;
  *(float *)((int)param_1 + 4) = *(float *)(this + 4) * in_stack_00000008;
  *(float *)((int)param_1 + 8) = in_stack_00000008 * *(float *)(this + 8);
  return;
}


// ==== 1010380a thunk_FUN_10132f10 thunk -> 10132f10

// ==== 1010380f thunk_FUN_10121530 thunk -> 10121530

// ==== 1010381e appFrand

/* float __cdecl appFrand(void) */

float __cdecl appFrand(void)

{
  int iVar1;
  
                    /* 0x381e  2047  ?appFrand@@YAMXZ */
  iVar1 = _rand();
  return (float)iVar1 / 32767.0;
}


// ==== 10103823 UDelegateProperty::operator_new

/* public: static void * __cdecl UDelegateProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UDelegateProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x3823  368  ??2UDelegateProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10103828 FRange::FRange

/* public: __thiscall FRange::FRange(void) */

FRange * __thiscall FRange::FRange(FRange *this)

{
                    /* 0x3828  121  ??0FRange@@QAE@XZ */
  return this;
}


// ==== 10103832 UObject::execDynamicCast

/* public: void __thiscall UObject::execDynamicCast(struct FFrame &,void * const) */

void __thiscall UObject::execDynamicCast(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FFrame *pFVar5;
  int unaff_ESI;
  int *unaff_retaddr;
  
                    /* 0x3832  2201  ?execDynamicCast@UObject@@QAEXAAUFFrame@@QAX@Z */
  pFVar5 = param_1;
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = *piVar2;
  *(int **)(param_1 + 0xc) = piVar2 + 1;
  param_1 = (FFrame *)0x0;
  bVar1 = *(byte *)(piVar2 + 1);
  *(int *)(pFVar5 + 0xc) = (int)piVar2 + 5;
  (*(code *)(&GNatives)[bVar1])(pFVar5,&param_1);
  if (unaff_ESI != 0) {
    for (iVar4 = *(int *)(unaff_ESI + 0x24); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x34)) {
      if (iVar4 == iVar3) goto LAB_1013a938;
    }
    if (iVar3 == 0) {
LAB_1013a938:
      *unaff_retaddr = unaff_ESI;
      return;
    }
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 10103837 FBitReader::GetNumBits

/* public: int __thiscall FBitReader::GetNumBits(void) */

int __thiscall FBitReader::GetNumBits(FBitReader *this)

{
                    /* 0x3837  1364  ?GetNumBits@FBitReader@@QAEHXZ */
  return *(int *)(this + 0x44);
}


// ==== 1010383c UPackageMap::IndexToObject

/* public: virtual class UObject * __thiscall UPackageMap::IndexToObject(int,int) */

UObject * __thiscall UPackageMap::IndexToObject(UPackageMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x383c  1458  ?IndexToObject@UPackageMap@@UAEPAVUObject@@HH@Z */
  puStack_c = &LAB_101ba7c0;
  pvStack_10 = ExceptionList;
  iVar2 = 0;
  uStack_8 = 0;
  if (-1 < param_1) {
    for (; iVar2 < *(int *)(this + 0x38); iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(this + 0x34) + iVar2 * 0x44;
      if (param_1 < *(int *)(iVar1 + 0x2c)) {
        pUVar3 = *(UObject **)(*(int *)(*(int *)(iVar1 + 0xc) + 0x90) + 0x1c + param_1 * 0x24);
        if ((pUVar3 == (UObject *)0x0) && (param_2 != 0)) {
          ExceptionList = &pvStack_10;
          UObject::BeginLoad();
          pUVar3 = ULinkerLoad::CreateExport(*(ULinkerLoad **)(iVar1 + 0xc),param_1,0);
          UObject::EndLoad();
        }
        ExceptionList = pvStack_10;
        return pUVar3;
      }
      param_1 = param_1 - *(int *)(iVar1 + 0x2c);
    }
  }
  return (UObject *)0x0;
}


// ==== 10103841 UStruct::SerializeBin

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UStruct::SerializeBin(class FArchive &,unsigned char *,int) */

void __thiscall UStruct::SerializeBin(UStruct *this,FArchive *param_1,uchar *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UProperty *pUStack_30;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3841  1829  ?SerializeBin@UStruct@@UAEXAAVFArchive@@PAEH@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101ba070;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  iVar2 = (**(code **)(*(int *)param_1 + 0x28))();
  if (*(int *)(param_1 + 4) < 0x73) {
    iVar3 = appStrcmp((ushort *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc),
                      (ushort *)L"DecorationLayer");
    bVar1 = true;
    if (iVar3 == 0) goto LAB_10133661;
  }
  bVar1 = false;
LAB_10133661:
  uStack_8 = 0;
  thunk_FUN_10119210(this);
  do {
    if (pUStack_30 == (UProperty *)0x0) {
      ExceptionList = pvStack_10;
      return;
    }
    iVar3 = *(int *)(pUStack_30 + 0x20);
    if (bVar1) {
      iVar4 = appStrcmp((ushort *)(*(int *)(_Names + iVar3 * 4) + 0xc),(ushort *)L"LitDirectional");
      if (iVar4 != 0) {
        iVar3 = appStrcmp((ushort *)(*(int *)(_Names + iVar3 * 4) + 0xc),
                          (ushort *)L"DisregardTerrainLighting");
        if (iVar3 != 0) goto LAB_10133700;
      }
      if (GLog != (undefined *)0x0) {
        FOutputDevice::Logf2(_Names,(EName)GLog,(ushort *)0x2ff);
      }
    }
    else {
LAB_10133700:
      iVar3 = UProperty::ShouldSerializeValue(pUStack_30,param_1);
      if (iVar3 != 0) {
        iVar3 = 0;
LAB_1013370e:
        do {
          if (*(int *)(pUStack_30 + 0x40) <= iVar3) break;
          if (((*(int *)(param_1 + 4) < 0x76) && (param_3 != 0)) && (*(int *)(param_1 + 0x10) != 0))
          {
            iVar4 = (**(code **)(*(int *)param_1 + 0x28))();
            if (iVar4 < iVar2 + param_3) goto LAB_10133775;
            if (GLog != (undefined *)0x0) {
              FOutputDevice::Logf2
                        ((FOutputDevice *)(*(int *)(_Names + *(int *)(pUStack_30 + 0x20) * 4) + 0xc)
                         ,(EName)GLog,(ushort *)0x2ff);
              iVar3 = iVar3 + 1;
              goto LAB_1013370e;
            }
          }
          else {
LAB_10133775:
            (**(code **)(*(int *)pUStack_30 + 0x90))
                      (param_1,param_2 + *(int *)(pUStack_30 + 0x44) * iVar3 +
                                         *(int *)(pUStack_30 + 0x54),0);
          }
          iVar3 = iVar3 + 1;
        } while( true );
      }
    }
    pUStack_30 = *(UProperty **)(pUStack_30 + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 10103846 thunk_FUN_10128450 thunk -> 10128450

// ==== 1010384b UFixedArrayProperty::operator_new

/* public: static void * __cdecl UFixedArrayProperty::operator new(unsigned int,enum EInternal *) */

void * __cdecl UFixedArrayProperty::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x384b  378  ??2UFixedArrayProperty@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 1010385a UObject::HashObjectBuffer

/* protected: void __thiscall UObject::HashObjectBuffer(void) */

void __thiscall UObject::HashObjectBuffer(UObject *this)

{
                    /* 0x385a  1428  ?HashObjectBuffer@UObject@@IAEXXZ */
  *(UObject ***)(this + 8) = (&GObjHashBuffer)[*(uint *)(this + 0x20) & 0xfff];
  (&GObjHashBuffer)[*(uint *)(this + 0x20) & 0xfff] = (UObject **)this;
  return;
}


// ==== 1010385f thunk_FUN_1015a690 thunk -> 1015a690

// ==== 10103864 UParamStack::execPushInt

/* public: void __thiscall UParamStack::execPushInt(struct FFrame &,void * const) */

void __thiscall UParamStack::execPushInt(UParamStack *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  void *pvStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3864  2346  ?execPushInt@UParamStack@@QAEXAAUFFrame@@QAX@Z */
  puStack_c = &LAB_101bcb90;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  pvStack_18 = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pvStack_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(L2ParamStack **)(this + 0x34) != (L2ParamStack *)0x0) {
    L2ParamStack::PushBack(*(L2ParamStack **)(this + 0x34),pvStack_18);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103869 thunk_FUN_101375c0 thunk -> 101375c0

// ==== 1010386e thunk_FUN_1012b2d0 thunk -> 1012b2d0

// ==== 10103878 FMemStackFrame::AllocateNewChunk

/* public: unsigned char * __thiscall FMemStackFrame::AllocateNewChunk(int) */

uchar * __thiscall FMemStackFrame::AllocateNewChunk(FMemStackFrame *this,int param_1)

{
  FTaggedMemory *pFVar1;
  FTaggedMemory *pFVar2;
  FScopeCriticalSection aFStack_1c [4];
  FTaggedMemory *pFStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x3878  799  ?AllocateNewChunk@FMemStackFrame@@QAEPAEH@Z */
  puStack_c = &LAB_101bbe68;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_1c,MemStackCS);
  iStack_8._0_1_ = 1;
  pFVar2 = (FTaggedMemory *)&UnusedChunks;
  do {
    pFStack_18 = pFVar2;
    pFVar2 = (FTaggedMemory *)0x0;
    if (*(FTaggedMemory **)pFStack_18 == (FTaggedMemory *)0x0) goto LAB_1014f40a;
    pFVar2 = *(FTaggedMemory **)pFStack_18;
  } while (*(int *)(pFVar2 + 4) < param_1);
  *(int *)pFStack_18 = *(int *)pFVar2;
LAB_1014f40a:
  if (pFVar2 == (FTaggedMemory *)0x0) {
    if (param_1 < *(int *)(this + 8) + -0xc) {
      param_1 = *(int *)(this + 8) + -0xc;
    }
    pFVar2 = (FTaggedMemory *)(*(code *)**(undefined4 **)GMalloc)(param_1 + 0xc,L"MemChunk");
    *(int *)(pFVar2 + 4) = param_1;
  }
  *(int *)pFVar2 = *(int *)(this + 0xc);
  *(FTaggedMemory **)(this + 0xc) = pFVar2;
  pFVar1 = pFVar2 + 8;
  *(FTaggedMemory **)this = pFVar1;
  *(FTaggedMemory **)(this + 4) = pFVar1 + *(int *)(pFVar2 + 4);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_1c);
  ExceptionList = pvStack_10;
  return (uchar *)pFVar1;
}


// ==== 1010387d FOutputDevice::FOutputDevice

/* public: __thiscall FOutputDevice::FOutputDevice(class FOutputDevice const &) */

void __thiscall FOutputDevice::FOutputDevice(FOutputDevice *this,FOutputDevice *param_1)

{
                    /* 0x387d  96  ??0FOutputDevice@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103882 thunk_FUN_10165100 thunk -> 10165100

// ==== 1010388c UObject::SetLoadingProgress

/* public: void __thiscall UObject::SetLoadingProgress(void (__cdecl*)(float)) */

void __thiscall UObject::SetLoadingProgress(UObject *this,_func_void_float *param_1)

{
                    /* 0x388c  1863  ?SetLoadingProgress@UObject@@QAEXP6AXM@Z@Z */
  LoadingProgress = param_1;
  return;
}


// ==== 10103891 UPackageMap::CanSerializeObject

/* public: virtual int __thiscall UPackageMap::CanSerializeObject(class UObject *) */

int __thiscall UPackageMap::CanSerializeObject(UPackageMap *this,UObject *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3891  830  ?CanSerializeObject@UPackageMap@@UAEHPAVUObject@@@Z */
  puStack_c = &LAB_101ba760;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Logf((FOutputDevice *)this,(ushort *)GError);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 10103896 FNotifyHook::operator=

/* public: class FNotifyHook & __thiscall FNotifyHook::operator=(class FNotifyHook const &) */

FNotifyHook * __thiscall FNotifyHook::operator=(FNotifyHook *this,FNotifyHook *param_1)

{
                    /* 0x3896  469  ??4FNotifyHook@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 1010389b FFieldNetCache::operator=

/* public: class FFieldNetCache & __thiscall FFieldNetCache::operator=(class FFieldNetCache const &)
    */

FFieldNetCache * __thiscall FFieldNetCache::operator=(FFieldNetCache *this,FFieldNetCache *param_1)

{
                    /* 0x389b  449  ??4FFieldNetCache@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 101038a0 ULinkerLoad::GetExportClassName

/* public: class FName __thiscall ULinkerLoad::GetExportClassName(int) */

void __thiscall ULinkerLoad::GetExportClassName(ULinkerLoad *this,int param_1)

{
  int iVar1;
  int in_stack_00000008;
  
                    /* 0x38a0  1312  ?GetExportClassName@ULinkerLoad@@QAE?AVFName@@H@Z */
  iVar1 = *(int *)(*(int *)(this + 0x90) + in_stack_00000008 * 0x24);
  if (iVar1 < 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x84) + iVar1 * -0x1c + -0x10);
    return;
  }
  if (0 < iVar1) {
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x90) + -0x18 + iVar1 * 0x24);
    return;
  }
  *(undefined4 *)param_1 = 0x2a5;
  return;
}


// ==== 101038a5 UStruct::IsChildOf

/* public: int __thiscall UStruct::IsChildOf(class UStruct const *)const  */

int __thiscall UStruct::IsChildOf(UStruct *this,UStruct *param_1)

{
  while( true ) {
    if (this == (UStruct *)0x0) {
      return 0;
    }
    if (this == param_1) break;
    this = *(UStruct **)(this + 0x34);
  }
  return 1;
}


// ==== 101038af UClass::UClass

/* public: __thiscall UClass::UClass(class UClass *) */

UClass * __thiscall UClass::UClass(UClass *this,UClass *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x38af  192  ??0UClass@@QAE@PAV0@@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101ba410;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  UState::UState((UState *)this,(UState *)param_1);
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
  uStack_8 = 0x12;
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x4bc) = *(undefined4 *)(iVar1 + 0x4bc);
    thunk_FUN_10118830(iVar1 + 0x4f4);
    Bind(this);
  }
  ExceptionList = pvStack_10;
  return this;
}


// ==== 101038b4 UBoolProperty::SerializeItem

/* public: virtual void __thiscall UBoolProperty::SerializeItem(class FArchive &,void *,int)const
    */

void __thiscall
UBoolProperty::SerializeItem(UBoolProperty *this,FArchive *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  char unaff_retaddr;
  
                    /* 0x38b4  1838  ?SerializeItem@UBoolProperty@@UBEXAAVFArchive@@PAXH@Z */
  pvVar1 = param_2;
  param_2 = (void *)CONCAT31(param_2._1_3_,(*(uint *)(this + 0x78) & *(uint *)param_2) != 0);
  (**(code **)(*(int *)param_1 + 4))(&param_2,1);
  if (unaff_retaddr != '\0') {
    *(uint *)pvVar1 = *(uint *)pvVar1 | *(uint *)(this + 0x78);
    return;
  }
  *(uint *)pvVar1 = *(uint *)pvVar1 & ~*(uint *)(this + 0x78);
  return;
}


// ==== 101038b9 ULinkerLoad::LoadOnSystemMemory

/* public: void __thiscall ULinkerLoad::LoadOnSystemMemory(void) */

void __thiscall ULinkerLoad::LoadOnSystemMemory(ULinkerLoad *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x38b9  1575  ?LoadOnSystemMemory@ULinkerLoad@@QAEXXZ */
  puStack_c = &LAB_101bb720;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x504); iVar1 = iVar1 + 1) {
    (**(code **)**(undefined4 **)(*(int *)(this + 0x500) + iVar1 * 4))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101038be UObject::RemoveFromRoot

/* public: void __thiscall UObject::RemoveFromRoot(void) */

void __thiscall UObject::RemoveFromRoot(UObject *this)

{
  UObject *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x38be  1765  ?RemoveFromRoot@UObject@@QAEXXZ */
  puStack_c = &LAB_101bcf90;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  thunk_FUN_10149350(&pUStack_18);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101038c3 ULinkerLoad::ULinkerLoad

/* protected: __thiscall ULinkerLoad::ULinkerLoad(void) */

ULinkerLoad * __thiscall ULinkerLoad::ULinkerLoad(ULinkerLoad *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x38c3  237  ??0ULinkerLoad@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8aa2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ULinker::ULinker((ULinker *)this);
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
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x514) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101038c8 FDummyCodec::operator=

/* public: class FDummyCodec & __thiscall FDummyCodec::operator=(class FDummyCodec const &) */

FDummyCodec * __thiscall FDummyCodec::operator=(FDummyCodec *this,FDummyCodec *param_1)

{
                    /* 0x38c8  443  ??4FDummyCodec@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 101038cd FBitWriter::SetOverflowed

/* public: void __thiscall FBitWriter::SetOverflowed(void) */

void __thiscall FBitWriter::SetOverflowed(FBitWriter *this)

{
                    /* 0x38cd  1865  ?SetOverflowed@FBitWriter@@QAEXXZ */
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}


// ==== 101038d2 UStruct::StaticClass

/* public: static class UClass * __cdecl UStruct::StaticClass(void) */

UClass * __cdecl UStruct::StaticClass(void)

{
                    /* 0x38d2  1918  ?StaticClass@UStruct@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 101038dc FMemStack::~FMemStack

/* public: __thiscall FMemStack::~FMemStack(void) */

void __thiscall FMemStack::~FMemStack(FMemStack *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x38dc  304  ??1FMemStack@@QAE@XZ */
  puStack_8 = &LAB_101b6983;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  _eh_vector_destructor_iterator_(this,0x10,8,FMemStackFrame::~FMemStackFrame);
  ExceptionList = pvStack_c;
  return;
}


// ==== 101038e6 FBlowFish::operator=

/* public: class FBlowFish & __thiscall FBlowFish::operator=(class FBlowFish const &) */

FBlowFish * __thiscall FBlowFish::operator=(FBlowFish *this,FBlowFish *param_1)

{
                    /* 0x38e6  434  ??4FBlowFish@@QAEAAV0@ABV0@@Z */
  _memcpy(this,param_1,0x1048);
  return this;
}


// ==== 101038eb UObject::execNameConst

/* public: void __thiscall UObject::execNameConst(struct FFrame &,void * const) */

void __thiscall UObject::execNameConst(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  
                    /* 0x38eb  2320  ?execNameConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)param_2 = uVar1;
  return;
}


// ==== 101038f0 thunk_FUN_1012a960 thunk -> 1012a960

// ==== 101038f5 thunk_FUN_1011a4d0 thunk -> 1011a4d0

// ==== 101038fa appGetDllExport

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* void * __cdecl appGetDllExport(void *,unsigned short const *) */

void * __cdecl appGetDllExport(void *param_1,ushort *param_2)

{
  int iVar1;
  FARPROC pFVar2;
  char *pcVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x38fa  2051  ?appGetDllExport@@YAPAXPAXPBG@Z */
  puStack_c = &LAB_101be350;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (void *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("DllHandle",".\\UnVcWin32.cpp",0x21f);
  }
  if (param_2 == (ushort *)0x0) {
    appFailAssert("ProcName",".\\UnVcWin32.cpp",0x220);
  }
  iVar1 = winGetSizeANSI(param_2);
  if (iVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    winGetSizeANSI(param_2);
    pcVar3 = &stack0xffffffd8;
  }
  iVar1 = winGetSizeANSI(param_2);
  pcVar3 = winToANSI(pcVar3,param_2,iVar1);
  pFVar2 = GetProcAddress(param_1,pcVar3);
  ExceptionList = pvStack_10;
  return pFVar2;
}


// ==== 10103904 FRangeVector::operator-

/* public: class FRangeVector __thiscall FRangeVector::operator-(class FVector const &)const  */

void __thiscall FRangeVector::operator-(FRangeVector *this,FVector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000008;
  float fStack_18;
  float fStack_10;
  float fStack_8;
  
                    /* 0x3904  626  ??GFRangeVector@@QBE?AV0@ABVFVector@@@Z */
  fVar1 = *(float *)(this + 0x10) - in_stack_00000008[2];
  fVar2 = *(float *)(this + 0x14) - in_stack_00000008[2];
  fStack_8 = fVar2;
  if (fVar1 <= fVar2) {
    fStack_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(this + 8) - in_stack_00000008[1];
  fVar3 = *(float *)(this + 0xc) - in_stack_00000008[1];
  fStack_10 = fVar3;
  if (fVar1 <= fVar3) {
    fStack_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)this - *in_stack_00000008;
  fVar4 = *(float *)(this + 4) - *in_stack_00000008;
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


// ==== 10103909 UObject::execMultiplyEqual_RotatorFloat

/* public: void __thiscall UObject::execMultiplyEqual_RotatorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiplyEqual_RotatorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uchar *puVar3;
  FFrame *pFVar4;
  undefined4 *puVar5;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3909  2309  ?execMultiplyEqual_RotatorFloat@UObject@@QAEXAAUFFrame@@QAX@Z
                        */
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_c);
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
  uVar2 = FUN_1017b700(pFVar4,puVar5,uStack_c);
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


// ==== 1010390e ULinkerLoad::operator=

/* public: class ULinkerLoad & __thiscall ULinkerLoad::operator=(class ULinkerLoad const &) */

ULinkerLoad * __thiscall ULinkerLoad::operator=(ULinkerLoad *this,ULinkerLoad *param_1)

{
  ULinkerLoad *pUVar1;
  int iVar2;
  
                    /* 0x390e  529  ??4ULinkerLoad@@QAEAAV0@ABV0@@Z */
  ULinker::operator=((ULinker *)this,(ULinker *)param_1);
  if (param_1 == (ULinkerLoad *)0x0) {
    pUVar1 = (ULinkerLoad *)0x0;
  }
  else {
    pUVar1 = param_1 + 0xc0;
  }
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(pUVar1 + 4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(pUVar1 + 8);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(pUVar1 + 0xc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(pUVar1 + 0x10);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(pUVar1 + 0x14);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(pUVar1 + 0x18);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(pUVar1 + 0x1c);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(pUVar1 + 0x20);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(pUVar1 + 0x24);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(pUVar1 + 0x28);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(pUVar1 + 0x2c);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(pUVar1 + 0x30);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(pUVar1 + 0x34);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  pUVar1 = this + 0x100;
  iVar2 = 0x100;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + ((int)param_1 - (int)this));
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_101216e0(param_1 + 0x500);
  thunk_FUN_10121860(param_1 + 0x50c);
  *(undefined4 *)(this + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(this + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(this + 0x520) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(this + 0x524) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(this + 0x528) = *(undefined4 *)(param_1 + 0x528);
  return this;
}


// ==== 10103913 UObject::FindFNameProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindFNameProperty(class FString,class FName *) */

int __thiscall
UObject::FindFNameProperty
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
  
                    /* 0x3913  1004  ?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */
  puStack_8 = &LAB_101bcf10;
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
      if (pUVar1 == &UNameProperty::PrivateStaticClass) {
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


// ==== 10103918 FFileStream::Init

/* public: static class FFileStream * __cdecl FFileStream::Init(int) */

FFileStream * __cdecl FFileStream::Init(int param_1)

{
  FCriticalSection *this;
  uint uVar1;
  int iVar2;
  FStream *pFVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x3918  1461  ?Init@FFileStream@@SAPAV1@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bbeb6;
  pvStack_c = ExceptionList;
  if (Instance == (FFileStream *)0x0) {
    ExceptionList = &pvStack_c;
    Instance = (FFileStream *)(*(code *)**(undefined4 **)GMalloc)(1,&DAT_101cd5d8);
    uVar1 = uStack_4;
    pvStack_c = (void *)0xffffffff;
    Streams = (FStream *)
              (*(code *)**(undefined4 **)GMalloc)
                        ((uint)((ulonglong)uStack_4 * 0x24) |
                         -(uint)((int)((ulonglong)uStack_4 * 0x24 >> 0x20) != 0),&DAT_101cd5d8);
    this = (FCriticalSection *)(*(code *)**(undefined4 **)GMalloc)(4,&DAT_101cd5d8);
    uStack_4 = 1;
    if (this == (FCriticalSection *)0x0) {
      CriticalSection = (FCriticalSection *)0x0;
    }
    else {
      CriticalSection = (FCriticalSection *)FCriticalSection::FCriticalSection(this);
    }
    MaxStreams = uVar1;
    iVar2 = 0;
    pFVar3 = Streams;
    for (uVar1 = uVar1 * 0x24 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)pFVar3 = 0;
      pFVar3 = pFVar3 + 4;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pFVar3 = (FStream)0x0;
      pFVar3 = pFVar3 + 1;
    }
  }
  ExceptionList = pvStack_c;
  return Instance;
}


// ==== 10103922 thunk_FUN_101242c0 thunk -> 101242c0

// ==== 10103927 FBitReader::SetData

/* public: void __thiscall FBitReader::SetData(struct FBitReader &,int) */

void __thiscall FBitReader::SetData(FBitReader *this,FBitReader *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3927  1854  ?SetData@FBitReader@@QAEXAAU1@H@Z */
  puStack_c = &LAB_101b9c00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x44) = param_2;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  thunk_FUN_10113f60(0);
  thunk_FUN_1012aa10(param_2 + 7 >> 3);
  (**(code **)(*(int *)param_1 + 8))(*(undefined4 *)(this + 0x38),param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010392c FOutputDeviceError::FOutputDeviceError

/* public: __thiscall FOutputDeviceError::FOutputDeviceError(class FOutputDeviceError const &) */

void __thiscall
FOutputDeviceError::FOutputDeviceError(FOutputDeviceError *this,FOutputDeviceError *param_1)

{
                    /* 0x392c  98  ??0FOutputDeviceError@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103936 thunk_FUN_10132a00 thunk -> 10132a00

// ==== 1010393b FBitWriter::GetData

/* public: unsigned char * __thiscall FBitWriter::GetData(void) */

uchar * __thiscall FBitWriter::GetData(FBitWriter *this)

{
                    /* 0x393b  1302  ?GetData@FBitWriter@@QAEPAEXZ */
  return *(uchar **)(this + 0x38);
}


// ==== 10103940 FMemCache::Exit

/* public: void __thiscall FMemCache::Exit(int) */

void __thiscall FMemCache::Exit(FMemCache *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3940  954  ?Exit@FMemCache@@QAEXH@Z */
  puStack_c = &LAB_101b9d10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)this != 0) {
    ExceptionList = &pvStack_10;
    CheckState(this);
    thunk_FUN_101088c0(*(undefined4 *)(this + 0x14));
    if (param_1 != 0) {
      (**(code **)(*(int *)GMalloc + 8))(*(undefined4 *)(this + 0x10024));
    }
    *(undefined4 *)this = 0;
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010394a thunk_FUN_101148f0 thunk -> 101148f0

// ==== 10103954 appStrstr

/* unsigned short * __cdecl appStrstr(unsigned short const *,unsigned short const *) */

ushort * __cdecl appStrstr(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
                    /* 0x3954  2118  ?appStrstr@@YAPAGPBG0@Z */
  if (*param_2 != 0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      iVar3 = (int)param_1 - (int)param_2;
      puVar2 = param_2;
joined_r0x1017d911:
      do {
        if (uVar1 != 0) {
          if (*puVar2 == 0) {
            return param_1;
          }
          if (*(ushort *)(iVar3 + (int)puVar2) == *puVar2) {
            uVar1 = *(ushort *)(iVar3 + (int)(puVar2 + 1));
            puVar2 = puVar2 + 1;
            goto joined_r0x1017d911;
          }
        }
        if (*puVar2 == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        uVar1 = *param_1;
        iVar3 = iVar3 + 2;
        puVar2 = param_2;
      } while (uVar1 != 0);
    }
    param_1 = (ushort *)0x0;
  }
  return param_1;
}


// ==== 10103959 UMapProperty::ExportTextItem

/* public: virtual void __thiscall UMapProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UMapProperty::ExportTextItem
          (UMapProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
                    /* 0x3959  984  ?ExportTextItem@UMapProperty@@UBEXPAGPAE1H@Z */
  return;
}


// ==== 1010395e thunk_FUN_10121290 thunk -> 10121290

// ==== 10103963 thunk_FUN_10178080 thunk -> 10178080

// ==== 10103968 thunk_FUN_10137120 thunk -> 10137120

// ==== 1010396d UObject::StaticFindObjectChecked

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class UObject * __cdecl UObject::StaticFindObjectChecked(class UClass *,class
   UObject *,unsigned short const *,int) */

UObject * __cdecl
UObject::StaticFindObjectChecked(UClass *param_1,UObject *param_2,ushort *param_3,int param_4)

{
  UObject *pUVar1;
  FOutputDevice *this;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x396d  1936  ?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z
                        */
  puStack_c = &LAB_101bd880;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar1 = StaticFindObject(param_1,param_2,param_3,param_4);
  if (pUVar1 == (UObject *)0x0) {
    LocalizeError((ushort *)L"ObjectNotFound",(ushort *)L"Core",(ushort *)0x0);
    FOutputDevice::Logf(this,(ushort *)GError);
  }
  ExceptionList = pvStack_10;
  return pUVar1;
}


// ==== 10103972 UFactory::FactoryCreateText

/* public: virtual class UObject * __thiscall UFactory::FactoryCreateText(class ULevel *,class
   UClass *,class UObject *,class FName,unsigned long,class UObject *,unsigned short const
   *,unsigned short const * &,unsigned short const *,class FFeedbackContext *) */

UObject * __thiscall UFactory::FactoryCreateText(void)

{
                    /* 0x3972  997
                       ?FactoryCreateText@UFactory@@UAEPAVUObject@@PAVULevel@@PAVUClass@@PAV2@VFName@@K2PBGAAPBG4PAVFFeedbackContext@@@Z
                        */
  return (UObject *)0x0;
}


// ==== 10103977 thunk_FUN_10109300 thunk -> 10109300

// ==== 1010397c FFileManager::FFileManager

/* public: __thiscall FFileManager::FFileManager(void) */

void __thiscall FFileManager::FFileManager(FFileManager *this)

{
                    /* 0x397c  54  ??0FFileManager@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103981 UObject::execNotEqual_RotatorRotator

/* public: void __thiscall UObject::execNotEqual_RotatorRotator(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_RotatorRotator(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined1 **unaff_ESI;
  FFrame *pFStack_18;
  undefined1 *apuStack_14 [3];
  undefined4 *puStack_8;
  
                    /* 0x3981  2333  ?execNotEqual_RotatorRotator@UObject@@QAEXAAUFFrame@@QAX@Z */
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
    *puStack_8 = 0;
    return;
  }
  *puStack_8 = 1;
  return;
}


// ==== 10103986 thunk_FUN_10112de0 thunk -> 10112de0

// ==== 1010398b ULinkerLoad::CreateExport

/* private: class UObject * __thiscall ULinkerLoad::CreateExport(int,unsigned long) */

UObject * __thiscall ULinkerLoad::CreateExport(ULinkerLoad *this,int param_1,ulong param_2)

{
  int *piVar1;
  int *piVar2;
  ULinkerLoad *this_00;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  FOutputDevice *this_01;
  FScopeCriticalSection aFStack_1c [4];
  ULinkerLoad *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x398b  896  ?CreateExport@ULinkerLoad@@AAEPAVUObject@@HK@Z */
  puStack_c = &LAB_101bb758;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  FScopeCriticalSection::FScopeCriticalSection(aFStack_1c,UObject::GLoadingCS);
  iStack_8._0_1_ = 1;
  piVar2 = (int *)(*(int *)(this + 0x90) + param_1 * 0x24);
  piVar1 = piVar2 + 7;
  if ((*piVar1 == 0) && ((*(uint *)(this + 0xac) & piVar2[4]) != 0)) {
    if ((piVar2[3] == 0) && ((piVar2[4] & 4U) != 0)) {
      appFailAssert("Export.ObjectName!=NAME_None || !(Export.ObjectFlags&RF_Public)",
                    ".\\UnLinker.cpp",0x3be);
    }
    pUVar3 = (UClass *)IndexToObject(this,*piVar2);
    if (pUVar3 == (UClass *)0x0) {
      pUVar3 = &UClass::PrivateStaticClass;
    }
    if (*(UClass **)(pUVar3 + 0x24) != &UClass::PrivateStaticClass) {
      appFailAssert("LoadClass->GetClass()==UClass::StaticClass()",".\\UnLinker.cpp",0x3c9);
    }
    if ((*(int *)(pUVar3 + 0x20) == 0xa2) || (*(int *)(pUVar3 + 0x20) == 0xa3)) {
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FScopeCriticalSection::~FScopeCriticalSection(aFStack_1c);
      ExceptionList = pvStack_10;
      return (UObject *)0x0;
    }
    (**(code **)(*(int *)(pUStack_18 + 0xc0) + 0x10))(pUVar3);
    if (piVar2[2] == 0) {
      pUVar4 = *(UObject **)(pUStack_18 + 0x34);
    }
    else {
      pUVar4 = IndexToObject(pUStack_18,piVar2[2]);
    }
    if (*piVar1 == 0) {
      pUVar4 = UObject::StaticConstructObject
                         (pUVar3,pUVar4,piVar2[3],piVar2[4] & 0x67f01a5U | 0x1000200,0,GError,0);
      this_00 = pUStack_18;
      *piVar1 = (int)pUVar4;
      UObject::SetLinker(pUVar4,pUStack_18,param_1);
      iVar5 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,1);
      if ((((iVar5 == 0) && (GIsEditor == 0)) && (((byte)GL2ThreadFilter & 4) != 0)) &&
         ((iVar5 = L2ThreadUtil::IsCurrentThread(&GThreadUtil,3), iVar5 != 0 ||
          ((param_2 & 0x8000) != 0)))) {
        thunk_FUN_10128950();
      }
      else {
        thunk_FUN_101287a0(piVar1);
      }
      UObject::GetFullName((UObject *)*piVar1,(ushort *)0x0);
      FOutputDevice::Logf(this_01,(EName)GNull,(ushort *)0x308);
      iVar5 = UObject::IsA((UObject *)*piVar1,&UStruct::PrivateStaticClass);
      if ((iVar5 != 0) && (piVar2[1] != 0)) {
        pUVar4 = IndexToObject(this_00,piVar2[1]);
        *(UObject **)(*piVar1 + 0x34) = pUVar4;
      }
      iVar5 = UObject::IsA((UObject *)*piVar1,&UClass::PrivateStaticClass);
      if (iVar5 != 0) {
        (**(code **)(*(int *)*piVar1 + 0x70))();
      }
    }
  }
  pUVar4 = (UObject *)*piVar1;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_1c);
  ExceptionList = pvStack_10;
  return pUVar4;
}


// ==== 10103990 thunk_FUN_10114740 thunk -> 10114740

// ==== 10103995 FMemStackFrame::Exit

/* public: void __thiscall FMemStackFrame::Exit(void) */

void __thiscall FMemStackFrame::Exit(FMemStackFrame *this)

{
  FTaggedMemory *pFVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3995  956  ?Exit@FMemStackFrame@@QAEXXZ */
  puStack_c = &LAB_101bbe20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  Tick(this);
  while (pFVar1 = UnusedChunks, UnusedChunks != (FTaggedMemory *)0x0) {
    UnusedChunks = *(FTaggedMemory **)UnusedChunks;
    (**(code **)(*(int *)GMalloc + 8))(pFVar1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1010399a FTerritoryInfoHit::FTerritoryInfoHit

/* public: __thiscall FTerritoryInfoHit::FTerritoryInfoHit(class ATerritoryInfo *,int) */

void __thiscall
FTerritoryInfoHit::FTerritoryInfoHit(FTerritoryInfoHit *this,ATerritoryInfo *param_1,int param_2)

{
                    /* 0x399a  159  ??0FTerritoryInfoHit@@QAE@PAVATerritoryInfo@@H@Z */
  *(ATerritoryInfo **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


// ==== 1010399f thunk_FUN_10121370 thunk -> 10121370

// ==== 101039a4 ULinkerLoad::VerifyImport

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall ULinkerLoad::VerifyImport(int) */

void __thiscall ULinkerLoad::VerifyImport(ULinkerLoad *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  UPackage *pUVar6;
  ULinkerLoad *pUVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  ushort *puVar12;
  ushort *puVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *extraout_ECX_00;
  int iVar16;
  int iVar17;
  int iVar18;
  FString aFStack_48 [16];
  FName aFStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  int *piStack_24;
  int iStack_20;
  UPackage *pUStack_1c;
  ULinkerLoad *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x39a4  1995  ?VerifyImport@ULinkerLoad@@QAEXH@Z */
  puStack_c = &LAB_101bb9a0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffac;
  uStack_8 = 0;
  piVar1 = (int *)(*(int *)(this + 0x84) + param_1 * 0x1c);
  if ((((piVar1[5] != 0) && (piVar1[6] != -1)) || (*piVar1 == 0)) ||
     ((piVar1[1] == 0 || (piVar1[3] == 0)))) {
    return;
  }
  pUStack_1c = (UPackage *)0x0;
  piStack_24 = piVar1;
  pUStack_18 = this;
  if (piVar1[2] == 0) {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffac;
    if (piVar1[1] != 0x2a2) {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffac;
      appFailAssert("Import.ClassName==NAME_Package",".\\UnLinker.cpp",0x28b);
    }
    if (*piVar1 != 0x14) {
      appFailAssert("Import.ClassPackage==NAME_Core",".\\UnLinker.cpp",0x28c);
    }
    pUVar6 = UObject::CreatePackage
                       ((UObject *)0x0,(ushort *)(*(int *)(_Names + piVar1[3] * 4) + 0xc));
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    pUVar7 = UObject::GetPackageLinker
                       ((UObject *)pUVar6,(ushort *)0x0,8,(UPackageMap *)0x0,(FGuid *)0x0);
    piVar1[5] = (int)pUVar7;
    uStack_8 = 0;
    this = pUStack_18;
  }
  else {
    ExceptionList = &pvStack_10;
    puVar5 = &stack0xffffffac;
    if (-1 < piVar1[2]) {
      ExceptionList = &pvStack_10;
      appFailAssert("Import.PackageIndex<0",".\\UnLinker.cpp",0x299);
      puVar5 = puStack_14;
    }
    puStack_14 = puVar5;
    VerifyImport(this,-1 - piVar1[2]);
    iVar10 = *(int *)(*(int *)(this + 0x84) + piVar1[2] * -0x1c + -8);
    piVar1[5] = iVar10;
    piVar8 = piVar1;
    if (iVar10 != 0) {
      for (; piVar8[2] < 0; piVar8 = (int *)(*(int *)(this + 0x84) + (piVar8[2] + 1) * -0x1c)) {
      }
      pUStack_1c = UObject::CreatePackage
                             ((UObject *)0x0,(ushort *)(*(int *)(_Names + piVar8[3] * 4) + 0xc));
    }
  }
  iStack_20 = 0;
  do {
    if (piVar1[5] != 0) {
      iVar10 = *(int *)(piVar1[5] + 0x100 + (piVar1[1] * 7 + *piVar1 * 0x1f + piVar1[3] & 0xffU) * 4
                       );
      while (iVar10 != -1) {
        iVar17 = *(int *)(piVar1[5] + 0x90) + iVar10 * 0x24;
        if (((*(int *)(iVar17 + 0xc) == piVar1[3]) &&
            (iVar16 = iVar10,
            piVar8 = (int *)GetExportClassName((ULinkerLoad *)piVar1[5],(int)auStack_30),
            *piVar8 == piVar1[1])) &&
           (iVar18 = iVar10,
           piVar8 = (int *)GetExportClassPackage((ULinkerLoad *)piVar1[5],(int)auStack_34),
           pUVar7 = pUStack_18, *piVar8 == *piVar1)) {
          if ((piVar1[2] < 0) &&
             (iVar9 = *(int *)(pUStack_18 + 0x84) + (piVar1[2] + 1) * -0x1c,
             *(int *)(iVar9 + 0x14) != 0)) {
            iVar9 = *(int *)(iVar9 + 0x18);
            if (iVar9 == -1) {
              iVar2 = *(int *)(iVar17 + 8);
            }
            else {
              iVar2 = *(int *)(iVar17 + 8);
              if (iVar9 + 1 == iVar2) goto LAB_1014ab6b;
            }
            if (iVar2 != 0) goto LAB_1014ab52;
          }
LAB_1014ab6b:
          if ((*(byte *)(iVar17 + 0x10) & 4) == 0) {
            if ((*(uint *)(pUStack_18 + 0xf8) & 0x1000) != 0) {
              uVar3 = *(undefined4 *)(pUStack_18 + 0x34);
              iVar10 = thunk_FUN_101495a0(uVar3,iVar18,iVar16);
              if (iVar10 != 0) {
                iVar10 = thunk_FUN_101495a0(uVar3,iVar18,iVar16);
                *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) | 8;
              }
              if (GLog == (undefined *)0x0) {
                ExceptionList = pvStack_10;
                return;
              }
              pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)pUVar7,(int)aFStack_48);
              uStack_8 = CONCAT31(uStack_8._1_3_,3);
              FString::operator*((FString *)(piVar1[5] + 0xa0));
              FString::operator*(pFVar11);
              this_00 = extraout_ECX;
              goto LAB_1014abf3;
            }
            iVar17 = param_1;
            pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)pUStack_18,(int)aFStack_48);
            uStack_8._0_1_ = 4;
            iVar16 = *(int *)(_Names + piVar1[1] * 4) + 0xc;
            puVar12 = FString::operator*(pFVar11);
            puVar13 = LocalizeError((ushort *)L"FailedImportPrivate",(ushort *)L"Core",(ushort *)0x0
                                   );
            appThrowf(puVar13,iVar16,puVar12,iVar17,iVar18);
            uStack_8 = (uint)uStack_8._1_3_ << 8;
            FString::~FString(aFStack_48);
          }
          piVar1[6] = iVar10;
          this = pUStack_18;
          break;
        }
LAB_1014ab52:
        this = pUStack_18;
        iVar10 = *(int *)(iVar17 + 0x20);
      }
    }
    iVar10 = appStricmp((ushort *)(*(int *)(_Names + piVar1[1] * 4) + 0xc),(ushort *)L"Mesh");
    pUVar6 = pUStack_1c;
    if (iVar10 != 0) {
      if ((piVar1[6] == -1) && (pUStack_1c != (UPackage *)0x0)) {
        iVar10 = thunk_FUN_101495d0(0,*(int *)(_Names + *piVar1 * 4) + 0xc,0);
        if ((iVar10 != 0) &&
           (pUVar14 = (UClass *)thunk_FUN_10149600(iVar10,*(int *)(_Names + piVar1[1] * 4) + 0xc,0),
           pUVar14 != (UClass *)0x0)) {
          pUVar15 = UObject::StaticFindObject
                              (pUVar14,(UObject *)pUVar6,
                               (ushort *)(*(int *)(_Names + piVar1[3] * 4) + 0xc),0);
          if ((((pUVar15 == (UObject *)0x0) || (uVar4 = *(uint *)(pUVar15 + 0x1c), (uVar4 & 4) == 0)
               ) || ((uVar4 & 0x4000000) == 0)) || ((uVar4 & 0x4000) == 0)) {
            if ((GIsEditor != 0) && (GIsUCC == 0)) {
              iVar10 = param_1;
              pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)this,(int)aFStack_48);
              uStack_8._0_1_ = 5;
              puVar12 = FString::operator*(pFVar11);
              EdLoadErrorf(1,puVar12,iVar10);
              uStack_8 = (uint)uStack_8._1_3_ << 8;
              FString::~FString(aFStack_48);
            }
            iStack_20 = 1;
          }
          else {
            piVar1[4] = (int)pUVar15;
            UObject::GImportCount = UObject::GImportCount + 1;
          }
        }
        if ((piVar1[4] == 0) && (iStack_20 == 0)) {
          if (GLog != (undefined *)0x0) {
            pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)pUStack_18,(int)aFStack_48);
            uStack_8._0_1_ = 6;
            FString::operator*((FString *)(piVar1[5] + 0xa0));
            FString::operator*(pFVar11);
            FOutputDevice::Logf2(this_01,(ushort *)GLog);
            uStack_8 = (uint)uStack_8._1_3_ << 8;
            FString::~FString(aFStack_48);
            this = pUStack_18;
          }
          if ((*(uint *)(this + 0xf8) & 0x1000) != 0) {
            uVar3 = *(undefined4 *)(this + 0x34);
            iVar10 = thunk_FUN_101495a0(uVar3);
            if (iVar10 != 0) {
              iVar10 = thunk_FUN_101495a0(uVar3);
              *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) | 8;
            }
            if (GLog == (undefined *)0x0) {
              ExceptionList = pvStack_10;
              return;
            }
            pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)pUStack_18,(int)aFStack_48);
            uStack_8 = CONCAT31(uStack_8._1_3_,7);
            FString::operator*((FString *)(piVar1[5] + 0xa0));
            FString::operator*(pFVar11);
            this_00 = extraout_ECX_00;
LAB_1014abf3:
            FOutputDevice::Logf2(this_00,(ushort *)GLog);
            uStack_8 = uStack_8 & 0xffffff00;
            FString::~FString(aFStack_48);
            ExceptionList = pvStack_10;
            return;
          }
          pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)this,(int)aFStack_48);
          uStack_8._0_1_ = 8;
          iVar10 = *(int *)(_Names + piVar1[1] * 4) + 0xc;
          puVar12 = FString::operator*(pFVar11);
          puVar13 = LocalizeError((ushort *)L"FailedImport",(ushort *)L"Core",(ushort *)0x0);
          appThrowf(puVar13,iVar10,puVar12,param_1);
          uStack_8 = (uint)uStack_8._1_3_ << 8;
          FString::~FString(aFStack_48);
        }
      }
      ExceptionList = pvStack_10;
      return;
    }
    piVar8 = (int *)FName::FName(aFStack_38,(ushort *)L"LodMesh",1);
    piVar1[1] = *piVar8;
  } while( true );
}


// ==== 101039a9 UObject::execDynArrayLength

/* public: void __thiscall UObject::execDynArrayLength(struct FFrame &,void * const) */

void __thiscall UObject::execDynArrayLength(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  
                    /* 0x39a9  2199  ?execDynArrayLength@UObject@@QAEXAAUFFrame@@QAX@Z */
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  GPropObject = this;
  if (GPropAddr != (uchar *)0x0) {
    if (unaff_retaddr == (undefined4 *)0x0) {
      GRuntimeUCFlags = GRuntimeUCFlags | 1;
      return;
    }
    *unaff_retaddr = *(undefined4 *)(GPropAddr + 4);
  }
  return;
}


// ==== 101039ae thunk_FUN_1012cc90 thunk -> 1012cc90

// ==== 101039b8 GInitRunaway

/* void __cdecl GInitRunaway(void) */

void __cdecl GInitRunaway(void)

{
                    /* 0x39b8  1066  ?GInitRunaway@@YAXXZ */
  DAT_10283778 = 0;
  DAT_1028377c = 0;
  return;
}


// ==== 101039bd UFixedArrayProperty::ExportCppItem

/* public: virtual void __thiscall UFixedArrayProperty::ExportCppItem(class FOutputDevice
   &,int)const  */

void __thiscall
UFixedArrayProperty::ExportCppItem(UFixedArrayProperty *this,FOutputDevice *param_1,int param_2)

{
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x39bd  965  ?ExportCppItem@UFixedArrayProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bded0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 0x78) + 0x8c))(param_1,0);
  FOutputDevice::Logf(this_00,(ushort *)param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101039c2 UObject::Register

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UObject::Register(void) */

void __thiscall UObject::Register(UObject *this)

{
  ushort *puVar1;
  undefined1 *puVar2;
  UPackage *pUVar3;
  UObject *pUVar4;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x39c2  1758  ?Register@UObject@@UAEXXZ */
  puStack_c = &LAB_101bd890;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffd4;
  if (GObjInitialized == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert("GObjInitialized",".\\UnObj.cpp",0x5fe);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  puVar1 = *(ushort **)(this + 0x20);
  pUVar3 = CreatePackage((UObject *)0x0,*(ushort **)(this + 0x18));
  *(UPackage **)(this + 0x18) = pUVar3;
  FName::FName((FName *)&uStack_18,puVar1,1);
  *(undefined4 *)(this + 0x20) = uStack_18;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  if (*(int *)(this + 0x18) == 0) {
    GetFullName(this,(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  if (*(int *)(this + 0x20) == 0) {
    GetFullName(this,(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  pUVar4 = StaticFindObject((UClass *)0x0,*(UObject **)(this + 0x18),
                            (ushort *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc),0);
  if (pUVar4 != (UObject *)0x0) {
    GetFullName(this,(ushort *)0x0);
    FOutputDevice::Logf(this_01,(ushort *)GError);
  }
  AddObject(this,-1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 101039c7 L2ThreadUtil::SetThreadAffinityMask

/* public: void __thiscall L2ThreadUtil::SetThreadAffinityMask(int) */

void __thiscall L2ThreadUtil::SetThreadAffinityMask(L2ThreadUtil *this,int param_1)

{
  HANDLE hThread;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x39c7  1869  ?SetThreadAffinityMask@L2ThreadUtil@@QAEXH@Z */
  puStack_c = &LAB_101b9470;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hThread = GetCurrentThread();
  ::SetThreadAffinityMask(hThread,param_1);
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(ushort *)GLog);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101039cc UPackageMap::SerializeObject

/* public: virtual int __thiscall UPackageMap::SerializeObject(class FArchive &,class UClass *,class
   UObject * &) */

int __thiscall
UPackageMap::SerializeObject(UPackageMap *this,FArchive *param_1,UClass *param_2,UObject **param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x39cc  1850
                       ?SerializeObject@UPackageMap@@UAEHAAVFArchive@@PAVUClass@@AAPAVUObject@@@Z */
  puStack_c = &LAB_101ba770;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Logf((FOutputDevice *)this,(ushort *)GError);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 101039d1 USubsystem::USubsystem

/* protected: __thiscall USubsystem::USubsystem(void) */

USubsystem * __thiscall USubsystem::USubsystem(USubsystem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x39d1  282  ??0USubsystem@@IAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b6818;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UObject::UObject((UObject *)this);
  *(undefined ***)(this + 0x34) = FExec::vftable;
  *(undefined ***)this = vftable_for_UObject_;
  *(undefined ***)(this + 0x34) = vftable_for_FExec_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 101039d6 FOutputDevice::FOutputDevice

/* public: __thiscall FOutputDevice::FOutputDevice(void) */

void __thiscall FOutputDevice::FOutputDevice(FOutputDevice *this)

{
                    /* 0x39d6  97  ??0FOutputDevice@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 101039db UObject::execAdd_FloatFloat

/* public: void __thiscall UObject::execAdd_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execAdd_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x39db  2146  ?execAdd_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *unaff_ESI = (float)&uStack_4 + (float)&uStack_4;
  return;
}


// ==== 101039e0 FArchive::FArchive

/* public: __thiscall FArchive::FArchive(void) */

void __thiscall FArchive::FArchive(FArchive *this)

{
                    /* 0x39e0  6  ??0FArchive@@QAE@XZ */
  *(undefined ***)this = vftable;
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
  return;
}


// ==== 101039ea UStruct::SerializeTaggedProperties

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UStruct::SerializeTaggedProperties(class FArchive &,unsigned char
   *,class UClass *) */

void __thiscall
UStruct::SerializeTaggedProperties(UStruct *this,FArchive *param_1,uchar *param_2,UClass *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_00;
  UProperty *pUVar6;
  FArray *this_01;
  int iVar7;
  wchar_t *in_stack_ffffff70;
  ushort *in_stack_ffffff74;
  byte abStack_68 [4];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  UProperty *pUStack_50;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  UStruct *pUStack_1c;
  undefined1 uStack_15;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x39ea  1852
                       ?SerializeTaggedProperties@UStruct@@UAEXAAVFArchive@@PAEPAVUClass@@@Z */
  puStack_c = &LAB_101ba160;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff8c;
  iStack_28 = 0;
  iStack_24 = -1;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUStack_1c = this;
  puVar1 = &stack0xffffff8c;
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (ExceptionList = &pvStack_10, puVar1 = &stack0xffffff8c, *(int *)(param_1 + 0x14) == 0)) {
    ExceptionList = &pvStack_10;
    appFailAssert("Ar.IsLoading() || Ar.IsSaving()",".\\UnClass.cpp",0x200);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  uStack_20 = 0;
  uStack_30 = 0;
  if (param_3 != (UClass *)0x0) {
    uStack_20 = *(uint *)(param_3 + 0x4f4);
    uStack_30 = *(uint *)(param_3 + 0x4f8);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    thunk_FUN_10119210(this);
    while (pUVar6 = pUStack_50, pUStack_50 != (UProperty *)0x0) {
      iVar4 = UProperty::ShouldSerializeValue(pUStack_50,param_1);
      if (iVar4 != 0) {
        iStack_28 = *(int *)(pUVar6 + 0x20);
        for (iVar4 = 0; iStack_24 = iVar4, iVar4 < *(int *)(pUVar6 + 0x40); iVar4 = iVar4 + 1) {
          iVar7 = *(int *)(pUVar6 + 0x44) * iVar4 + *(int *)(pUVar6 + 0x54);
          iVar5 = UObject::IsA((UObject *)pUStack_1c,&UClass::PrivateStaticClass);
          if (((iVar5 == 0) && (uStack_20 == 0)) ||
             (iVar5 = UProperty::Matches(pUVar6,param_2,
                                         (void *)(((int)uStack_30 < *(int *)(pUVar6 + 0x44) + iVar7)
                                                  - 1 & uStack_20),iVar4), iVar5 == 0)) {
            thunk_FUN_10132d50(param_1,pUVar6,iVar4,param_2 + iVar7);
            thunk_FUN_10132f10(param_1,abStack_68);
            thunk_FUN_10131090(param_1,pUVar6,param_2 + iVar7,0);
          }
        }
      }
      pUStack_50 = *(UProperty **)(pUVar6 + 0x38);
      thunk_FUN_10114340();
    }
    param_3 = (UClass *)0x0;
    (**(code **)(*(int *)param_1 + 0x1c))(&param_3);
  }
  else {
    uStack_2c = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
LAB_10134770:
    thunk_FUN_10132f10(param_1,abStack_68);
    if (iStack_64 != 0) {
      iStack_28 = iStack_64;
      for (pUVar6 = *(UProperty **)(this + 0x70); pUVar6 != (UProperty *)0x0;
          pUVar6 = *(UProperty **)(pUVar6 + 0x58)) {
        if (*(int *)(pUVar6 + 0x20) == iStack_64) {
          iVar4 = thunk_FUN_10132a60(pUVar6);
          if ((iVar4 != 0) && (abStack_68[0] != 9)) {
            iVar4 = thunk_FUN_10132a60(pUVar6);
            bVar2 = (**(code **)(**(int **)(iVar4 + 0x78) + 0xb4))();
            if (bVar2 == abStack_68[0]) {
              if (GLog != (undefined *)0x0) {
                in_stack_ffffff74 = (ushort *)0x10134859;
                FOutputDevice::Logf2
                          ((FOutputDevice *)(*(int *)(_Names + iStack_64 * 4) + 0xc),(EName)GLog,
                           (ushort *)0x2ff);
              }
              iVar4 = thunk_FUN_10132a60(pUVar6);
              iVar4 = *(int *)(iVar4 + 0x78);
              this_01 = (FArray *)(param_2 + *(int *)(pUVar6 + 0x54));
              if (*(int *)(this_01 + 4) <= iStack_58) {
                FArray::AddZeroed(this_01,*(int *)(iVar4 + 0x44),
                                  (iStack_58 - *(int *)(this_01 + 4)) + 1);
              }
              thunk_FUN_10131090(param_1,iVar4,*(int *)(iVar4 + 0x44) * iStack_58 + *(int *)this_01,
                                 0);
              goto LAB_10134770;
            }
          }
          if ((abStack_68[0] == 1) &&
             (cVar3 = (**(code **)(*(int *)pUVar6 + 0xb4))(), cVar3 == '\x04')) {
            thunk_FUN_101307e0(param_1,(int)&param_3 + 3);
            uStack_30 = (uint)param_3 >> 0x18;
            *(float *)(param_2 + *(int *)(pUVar6 + 0x44) * iStack_58 + *(int *)(pUVar6 + 0x54)) =
                 (float)uStack_30;
            goto LAB_10134770;
          }
          bVar2 = (**(code **)(*(int *)pUVar6 + 0xb4))();
          if (abStack_68[0] != bVar2) {
            if (GLog != (undefined *)0x0) {
              in_stack_ffffff74 = (ushort *)(*(int *)(_Names + iStack_64 * 4) + 0xc);
              (**(code **)(*(int *)pUVar6 + 0xb4))();
              in_stack_ffffff70 = L"Type mismatch in %s of %s: file %i, class %i";
              FOutputDevice::Logf2((FOutputDevice *)(uint)abStack_68[0],(EName)GLog,(ushort *)0x2ff)
              ;
              this = pUStack_1c;
            }
            goto LAB_10134a8e;
          }
          if (*(int *)(pUVar6 + 0x40) <= iStack_58) {
            if (GLog != (undefined *)0x0) {
              in_stack_ffffff74 = (ushort *)0x2ff;
              in_stack_ffffff70 = (wchar_t *)GLog;
              FOutputDevice::Logf2(_Names,(EName)GLog,(ushort *)0x2ff);
            }
            goto LAB_10134a8e;
          }
          if ((abStack_68[0] == 10) &&
             (iVar4 = thunk_FUN_10134670(pUVar6),
             iStack_60 != *(int *)(*(int *)(iVar4 + 0x78) + 0x20))) {
            if (GLog != (undefined *)0x0) {
              thunk_FUN_10134670(pUVar6);
              in_stack_ffffff74 = (ushort *)0x2ff;
              in_stack_ffffff70 = (wchar_t *)GLog;
              FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,(ushort *)0x2ff);
            }
            goto LAB_10134a8e;
          }
          iVar4 = UProperty::ShouldSerializeValue(pUVar6,param_1);
          if (iVar4 != 0) {
            iVar4 = (**(code **)(*(int *)param_1 + 0x28))();
            thunk_FUN_10131090(param_1,pUVar6,
                               param_2 + *(int *)(pUVar6 + 0x44) * iStack_58 +
                                         *(int *)(pUVar6 + 0x54),iStack_5c);
            this = pUStack_1c;
            if ((*(int *)(param_1 + 4) < 0x76) &&
               (iVar5 = (**(code **)(*(int *)param_1 + 0x28))(), this = pUStack_1c,
               iVar5 - iVar4 != iStack_5c)) {
              if (GLog != (undefined *)0x0) {
                in_stack_ffffff74 = (ushort *)0x2ff;
                in_stack_ffffff70 = (wchar_t *)GLog;
                FOutputDevice::Logf2
                          ((FOutputDevice *)
                           (*(int *)(_Names + *(int *)(pUStack_1c + 0x20) * 4) + 0xc),(EName)GLog,
                           (ushort *)0x2ff);
              }
              (**(code **)(*(int *)param_1 + 0x3c))(iStack_5c + iVar4);
              this = pUStack_1c;
            }
            goto LAB_10134770;
          }
          iVar4 = appStricmp((ushort *)(*(int *)(_Names + iStack_64 * 4) + 0xc),(ushort *)L"XLevel")
          ;
          if ((iVar4 == 0) || (GLog == (undefined *)0x0)) goto LAB_10134a8e;
          this_00 = (FOutputDevice *)(*(int *)(_Names + iStack_64 * 4) + 0xc);
          in_stack_ffffff70 = (wchar_t *)GLog;
          goto LAB_10134a86;
        }
      }
      if (GLog != (undefined *)0x0) {
        UObject::GetFullName((UObject *)this,(ushort *)0x0);
        this_00 = extraout_ECX;
LAB_10134a86:
        FOutputDevice::Logf2(this_00,(EName)in_stack_ffffff70,in_stack_ffffff74);
      }
LAB_10134a8e:
      iVar4 = appStricmp((ushort *)(*(int *)(_Names + iStack_64 * 4) + 0xc),(ushort *)L"XLevel");
      if ((iVar4 != 0) && (GLog != (undefined *)0x0)) {
        in_stack_ffffff74 = (ushort *)0x10134ad1;
        FOutputDevice::Logf2((FOutputDevice *)(uint)abStack_68[0],(EName)GLog,(ushort *)0x2ff);
      }
      for (iVar4 = 0; iStack_34 = iVar4, iVar4 < iStack_5c; iVar4 = iVar4 + 1) {
        thunk_FUN_101307e0(param_1,&uStack_15);
      }
      goto LAB_10134770;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101039ef UField::Bind

/* public: virtual void __thiscall UField::Bind(void) */

void __thiscall UField::Bind(UField *this)

{
                    /* 0x39ef  816  ?Bind@UField@@UAEXXZ */
  return;
}


// ==== 101039f4 L2ThreadStats::SleepEnd

/* public: void __thiscall L2ThreadStats::SleepEnd(void) */

void __thiscall L2ThreadStats::SleepEnd(L2ThreadStats *this)

{
  L2ThreadStats *pLVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
                    /* 0x39f4  1882  ?SleepEnd@L2ThreadStats@@QAEXXZ */
  _Var5 = appCyclesQPC();
  uVar3 = (uint)_Var5 - *(uint *)(this + 0x20);
  iVar4 = ((int)(_Var5 >> 0x20) - *(int *)(this + 0x24)) -
          (uint)((uint)_Var5 < *(uint *)(this + 0x20));
  if ((iVar4 < 1) && ((iVar4 < 0 || (uVar3 == 0)))) {
    uVar3 = 0;
    iVar4 = 0;
  }
  pLVar1 = this + 0x28;
  uVar2 = *(uint *)pLVar1;
  *(uint *)pLVar1 = *(uint *)pLVar1 + uVar3;
  *(uint *)(this + 0x2c) = *(int *)(this + 0x2c) + iVar4 + (uint)CARRY4(uVar2,uVar3);
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  return;
}


// ==== 101039f9 UDelegateProperty::CleanupDestroyed

/* public: virtual void __thiscall UDelegateProperty::CleanupDestroyed(unsigned char *)const  */

void __thiscall UDelegateProperty::CleanupDestroyed(UDelegateProperty *this,uchar *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x39f9  839  ?CleanupDestroyed@UDelegateProperty@@UBEXPAE@Z */
  puStack_c = &LAB_101be020;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x40); iVar3 = iVar3 + 1) {
    piVar2 = (int *)(param_1 + *(int *)(this + 0x44) * iVar3);
    if (*piVar2 != 0) {
      iVar1 = UObject::IsValid((UObject *)*piVar2);
      if (iVar1 == 0) {
        appFailAssert("Delegate->Object->IsValid()",".\\UnProp.cpp",0x269);
      }
      iVar1 = (**(code **)(*(int *)*piVar2 + 0x30))();
      if (iVar1 != 0) {
        (**(code **)(*(int *)*piVar2 + 0x20))();
        *piVar2 = 0;
        piVar2[1] = 0;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 101039fe UObject::GetName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned short const * __thiscall UObject::GetName(void)const  */

ushort * __thiscall UObject::GetName(UObject *this)

{
                    /* 0x39fe  1358  ?GetName@UObject@@QBEPBGXZ */
  return (ushort *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
}


// ==== 10103a03 UFloatProperty::ExportCppItem

/* public: virtual void __thiscall UFloatProperty::ExportCppItem(class FOutputDevice &,int)const  */

void __thiscall
UFloatProperty::ExportCppItem(UFloatProperty *this,FOutputDevice *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3a03  966  ?ExportCppItem@UFloatProperty@@UBEXAAVFOutputDevice@@H@Z */
  puStack_c = &LAB_101bde60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FOutputDevice::Log(param_1,(ushort *)L"FLOAT");
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103a08 UIntProperty::CopySingleValue

/* public: virtual void __thiscall UIntProperty::CopySingleValue(void *,void *,class UObject *)const
    */

void __thiscall
UIntProperty::CopySingleValue(UIntProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x3a08  879  ?CopySingleValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}


// ==== 10103a0d FThrowOut::FThrowOut

/* public: __thiscall FThrowOut::FThrowOut(void) */

void __thiscall FThrowOut::FThrowOut(FThrowOut *this)

{
                    /* 0x3a0d  162  ??0FThrowOut@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103a12 FArchive::Serialize

/* public: virtual void __thiscall FArchive::Serialize(void *,int) */

void __thiscall FArchive::Serialize(FArchive *this,void *param_1,int param_2)

{
                    /* 0x3a12  1792  ?Serialize@FArchive@@UAEXPAXH@Z */
  return;
}


// ==== 10103a17 UParamStack::operator_new

/* public: static void * __cdecl UParamStack::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UParamStack::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3a17  405  ??2UParamStack@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10103a1c thunk_FUN_101619b0 thunk -> 101619b0

// ==== 10103a21 UObject::ConditionalShutdownAfterError

/* public: void __thiscall UObject::ConditionalShutdownAfterError(void) */

void __thiscall UObject::ConditionalShutdownAfterError(UObject *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3a21  860  ?ConditionalShutdownAfterError@UObject@@QAEXXZ */
  puStack_c = &LAB_101bca60;
  pvStack_10 = ExceptionList;
  if ((*(uint *)(this + 0x1c) & 0x10000000) == 0) {
    ExceptionList = &pvStack_10;
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x10000000;
    uStack_8 = 0;
    (**(code **)(*(int *)this + 0x40))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103a26 UNameProperty::InternalConstructor

/* public: static void __cdecl UNameProperty::InternalConstructor(void *) */

void __cdecl UNameProperty::InternalConstructor(void *param_1)

{
                    /* 0x3a26  1491  ?InternalConstructor@UNameProperty@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    UNameProperty(param_1);
    return;
  }
  return;
}


// ==== 10103a2b FStringNoInit::~FStringNoInit

/* public: __thiscall FStringNoInit::~FStringNoInit(void) */

void __thiscall FStringNoInit::~FStringNoInit(FStringNoInit *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3a2b  313  ??1FStringNoInit@@QAE@XZ */
  puStack_8 = &LAB_101b71b8;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 10103a30 appCreateProc

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* void * __cdecl appCreateProc(unsigned short const *,unsigned short const *) */

void * __cdecl appCreateProc(ushort *param_1,ushort *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  _SECURITY_ATTRIBUTES *lpProcessAttributes;
  _SECURITY_ATTRIBUTES *lpThreadAttributes;
  BOOL bInheritHandles;
  DWORD dwCreationFlags;
  LPVOID lpEnvironment;
  LPCSTR lpCurrentDirectory;
  _STARTUPINFOA *lpStartupInfo;
  _PROCESS_INFORMATION *lpProcessInformation;
  WCHAR aWStack_8c0 [1024];
  _PROCESS_INFORMATION _Stack_c0;
  _STARTUPINFOA _Stack_ac;
  undefined1 *puStack_68;
  void *pvStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  _STARTUPINFOW _Stack_58;
  _SECURITY_ATTRIBUTES _Stack_10;
  
                    /* 0x3a30  2032  ?appCreateProc@@YAPAXPBG0@Z */
  puStack_60 = &LAB_101be3d0;
  pvStack_64 = ExceptionList;
  puStack_68 = &stack0xfffff734;
  uStack_5c = 0;
  ExceptionList = &pvStack_64;
  puVar1 = &stack0xfffff734;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &pvStack_64;
    FOutputDevice::Logf2((FOutputDevice *)param_2,(EName)GLog,(ushort *)0x2f8);
    puVar1 = puStack_68;
  }
  puStack_68 = puVar1;
  appSprintf((ushort *)aWStack_8c0,(ushort *)L"%s %s");
  _Stack_10.nLength = 0xc;
  _Stack_10.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_10.bInheritHandle = 1;
  if ((GUnicode == 0) || (GUnicodeOS != 0)) {
    _Stack_58.cb = 0x44;
    _Stack_58.lpReserved = (LPWSTR)0x0;
    _Stack_58.lpDesktop = (LPWSTR)0x0;
    _Stack_58.lpTitle = (LPWSTR)0x0;
    _Stack_58.dwX = 0x80000000;
    _Stack_58.dwY = 0x80000000;
    _Stack_58.dwXSize = 0x80000000;
    _Stack_58.dwYSize = 0x80000000;
    _Stack_58.dwXCountChars = 0;
    _Stack_58.dwYCountChars = 0;
    _Stack_58.dwFillAttribute = 0;
    _Stack_58.dwFlags = 0;
    _Stack_58.wShowWindow = 0;
    _Stack_58.cbReserved2 = 0;
    _Stack_58.lpReserved2 = (LPBYTE)0x0;
    _Stack_58.hStdInput = (HANDLE)0x0;
    _Stack_58.hStdOutput = (HANDLE)0x0;
    _Stack_58.hStdError = (HANDLE)0x0;
    iVar2 = CreateProcessW((LPCWSTR)0x0,aWStack_8c0,&_Stack_10,&_Stack_10,1,0x108,(LPVOID)0x0,
                           (LPCWSTR)0x0,&_Stack_58,&_Stack_c0);
  }
  else {
    _Stack_ac.cb = 0x44;
    _Stack_ac.lpReserved = (LPSTR)0x0;
    _Stack_ac.lpDesktop = (LPSTR)0x0;
    _Stack_ac.lpTitle = (LPSTR)0x0;
    _Stack_ac.dwX = 0x80000000;
    _Stack_ac.dwY = 0x80000000;
    _Stack_ac.dwXSize = 0x80000000;
    _Stack_ac.dwYSize = 0x80000000;
    _Stack_ac.dwXCountChars = 0;
    _Stack_ac.dwYCountChars = 0;
    _Stack_ac.dwFillAttribute = 0;
    _Stack_ac.dwFlags = 0;
    _Stack_ac.wShowWindow = 0;
    _Stack_ac.cbReserved2 = 0;
    _Stack_ac.lpReserved2 = (LPBYTE)0x0;
    _Stack_ac.hStdInput = (HANDLE)0x0;
    _Stack_ac.hStdOutput = (HANDLE)0x0;
    _Stack_ac.hStdError = (HANDLE)0x0;
    iVar2 = winGetSizeANSI((ushort *)aWStack_8c0);
    if (iVar2 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)aWStack_8c0);
      puStack_68 = &stack0xfffff73c;
      pcVar4 = &stack0xfffff73c;
    }
    lpProcessInformation = &_Stack_c0;
    lpStartupInfo = &_Stack_ac;
    lpCurrentDirectory = (LPCSTR)0x0;
    lpEnvironment = (LPVOID)0x0;
    dwCreationFlags = 0x108;
    bInheritHandles = 1;
    lpProcessAttributes = &_Stack_10;
    lpThreadAttributes = lpProcessAttributes;
    iVar2 = winGetSizeANSI((ushort *)aWStack_8c0);
    pcVar4 = winToANSI(pcVar4,(ushort *)aWStack_8c0,iVar2);
    iVar2 = CreateProcessA((LPCSTR)0x0,pcVar4,lpProcessAttributes,lpThreadAttributes,bInheritHandles
                           ,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,
                           lpProcessInformation);
  }
  pvVar3 = (void *)0x0;
  if (iVar2 != 0) {
    pvVar3 = _Stack_c0.hProcess;
  }
  ExceptionList = pvStack_64;
  return pvVar3;
}


// ==== 10103a3a FDummyCodec::FDummyCodec

/* public: __thiscall FDummyCodec::FDummyCodec(void) */

void __thiscall FDummyCodec::FDummyCodec(FDummyCodec *this)

{
                    /* 0x3a3a  39  ??0FDummyCodec@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103a44 FMatrix::operator=

/* public: class FMatrix & __thiscall FMatrix::operator=(class FMatrix const &) */

FMatrix * __thiscall FMatrix::operator=(FMatrix *this,FMatrix *param_1)

{
  int iVar1;
  FMatrix *pFVar2;
  
                    /* 0x3a44  460  ??4FMatrix@@QAEAAV0@ABV0@@Z */
  pFVar2 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pFVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pFVar2 = pFVar2 + 4;
  }
  return this;
}


// ==== 10103a49 FBitWriterMark::FBitWriterMark

/* public: __thiscall FBitWriterMark::FBitWriterMark(void) */

void __thiscall FBitWriterMark::FBitWriterMark(FBitWriterMark *this)

{
                    /* 0x3a49  19  ??0FBitWriterMark@@QAE@XZ */
  *(undefined4 *)(this + 4) = 0;
  return;
}


// ==== 10103a4e thunk_FUN_101484c0 thunk -> 101484c0

// ==== 10103a53 appStrrchr

/* unsigned short * __cdecl appStrrchr(unsigned short const *,int) */

ushort * __cdecl appStrrchr(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
                    /* 0x3a53  2117  ?appStrrchr@@YAPAGPBGH@Z */
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  do {
    puVar2 = puVar2 + -1;
    if (puVar2 == param_1) break;
  } while (*puVar2 != (ushort)param_2);
  return (ushort *)((uint)puVar2 & ~-(uint)(*puVar2 != (ushort)param_2));
}


// ==== 10103a58 UObject::execGotoState

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::execGotoState(struct FFrame &,void * const) */

void __thiscall UObject::execGotoState(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FOutputDevice *pFVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  FOutputDevice *pFStack_4;
  
                    /* 0x3a58  2237  ?execGotoState@UObject@@QAEXAAUFFrame@@QAX@Z */
  if ((*(int *)(this + 0xc) == 0) ||
     (iVar3 = *(int *)(*(int *)(this + 0xc) + 0x1c), iVar3 == *(int *)(this + 0x24))) {
    pFStack_4 = (FOutputDevice *)0x0;
  }
  else {
    pFStack_4 = *(FOutputDevice **)(iVar3 + 0x20);
  }
  pFVar2 = pFStack_4;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  pFStack_4 = (FOutputDevice *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pFStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((FOutputDevice *)&pFStack_4 == pFVar2) ||
     (iVar3 = (**(code **)(*(int *)this + 0x34))((FOutputDevice *)&pFStack_4), iVar3 == 1)) {
    if (unaff_ESI == 0) {
      unaff_ESI = 100;
    }
    iVar3 = (**(code **)(*(int *)this + 0x38))(unaff_ESI);
    if ((iVar3 == 0) && (unaff_EDI != 0)) {
      FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + unaff_EDI * 4) + 0xc),
                          (ushort *)param_1);
      return;
    }
    return;
  }
  if (iVar3 != 0) {
    return;
  }
  if ((FOutputDevice *)&pFStack_4 == (FOutputDevice *)0x0) {
    return;
  }
  if ((FOutputDevice *)&pFStack_4 == (FOutputDevice *)0x2b2) {
    return;
  }
  FOutputDevice::Logf((FOutputDevice *)&pFStack_4,(ushort *)param_1);
  return;
}


// ==== 10103a62 FBitWriter::Serialize

/* public: virtual void __thiscall FBitWriter::Serialize(void *,int) */

void __thiscall FBitWriter::Serialize(FBitWriter *this,void *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x3a62  1794  ?Serialize@FBitWriter@@UAEXPAXH@Z */
  iVar1 = param_2 * 8;
  if (*(int *)(this + 0x44) + iVar1 <= *(int *)(this + 0x48)) {
    thunk_FUN_1012e300(*(undefined4 *)(this + 0x38),*(int *)(this + 0x44),param_1,0,iVar1);
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + iVar1;
    return;
  }
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}


// ==== 10103a6c UObjectExporterT3D::operator_new

/* public: static void * __cdecl UObjectExporterT3D::operator new(unsigned int,enum EInternal *) */

void * __cdecl UObjectExporterT3D::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x3a6c  398  ??2UObjectExporterT3D@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10103a71 UObject::execGetEnum

/* public: void __thiscall UObject::execGetEnum(struct FFrame &,void * const) */

void __thiscall UObject::execGetEnum(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  FFrame *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3a71  2228  ?execGetEnum@UObject@@QAEXAAUFFrame@@QAX@Z */
  pFVar2 = param_1;
  puStack_c = &LAB_101bb230;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  uStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  param_1 = (FFrame *)0x0;
  bVar1 = **(byte **)(pFVar2 + 0xc);
  *(byte **)(pFVar2 + 0xc) = *(byte **)(pFVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(pFVar2,&param_1);
  *(int *)(pFVar2 + 0xc) = *(int *)(pFVar2 + 0xc) + 1;
  if (**(char **)(pFVar2 + 0xc) == 'B') {
    *(char **)(pFVar2 + 0xc) = *(char **)(pFVar2 + 0xc) + 1;
    (*DAT_1027f878)(pFVar2,0);
  }
  uVar3 = uStack_18;
  *(undefined4 *)param_2 = 0;
  iVar4 = thunk_FUN_101429d0(uStack_18);
  pFVar2 = param_1;
  if ((iVar4 != 0) && (-1 < (int)param_1)) {
    iVar4 = thunk_FUN_101429d0(uVar3);
    if ((int)pFVar2 < *(int *)(iVar4 + 0x44)) {
      iVar4 = thunk_FUN_101429d0(uVar3);
      *(undefined4 *)param_2 = *(undefined4 *)(*(int *)(iVar4 + 0x40) + (int)pFVar2 * 4);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103a76 appComputerName

/* unsigned short const * __cdecl appComputerName(void) */

ushort * __cdecl appComputerName(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  CHAR aCStack_12c [268];
  short *psStack_20;
  short *psStack_1c;
  DWORD DStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3a76  2026  ?appComputerName@@YAPBGXZ */
  puStack_c = &LAB_101be440;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffec8;
  uStack_8 = 0;
  if (DAT_1033d700 == 0) {
    DStack_18 = 0x100;
    if ((GUnicode == 0) || (GUnicodeOS != 0)) {
      ExceptionList = &pvStack_10;
      GetComputerNameW(&DAT_1033d700,&DStack_18);
    }
    else {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffec8;
      GetComputerNameA(aCStack_12c,&DStack_18);
      MultiByteToWideChar(0,0,aCStack_12c,-1,&DAT_1033d700,0x100);
    }
    psStack_20 = &DAT_1033d700;
    psStack_1c = &DAT_1033d700;
    psVar4 = &DAT_1033d700;
    while( true ) {
      psVar2 = psStack_20;
      sVar1 = *psStack_20;
      if (sVar1 == 0) break;
      iVar3 = thunk_FUN_1014fa20(sVar1);
      if (iVar3 != 0) {
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
        psStack_1c = psVar4;
      }
      psStack_20 = psVar2 + 1;
    }
    *psVar4 = 0;
  }
  ExceptionList = pvStack_10;
  return (ushort *)&DAT_1033d700;
}


// ==== 10103a7b UObject::execIterator

/* public: void __thiscall UObject::execIterator(struct FFrame &,void * const) */

void __thiscall UObject::execIterator(UObject *this,FFrame *param_1,void *param_2)

{
                    /* 0x3a7b  2279  ?execIterator@UObject@@QAEXAAUFFrame@@QAX@Z */
  return;
}


// ==== 10103a80 appMD5Init

/* void __cdecl appMD5Init(struct FMD5Context *) */

void __cdecl appMD5Init(FMD5Context *param_1)

{
                    /* 0x3a80  2073  ?appMD5Init@@YAXPAUFMD5Context@@@Z */
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0x67452301;
  *(undefined4 *)(param_1 + 4) = 0xefcdab89;
  *(undefined4 *)(param_1 + 8) = 0x98badcfe;
  *(undefined **)(param_1 + 0xc) = &DAT_10325476;
  return;
}


// ==== 10103a85 appCeilLogTwo

/* unsigned char __cdecl appCeilLogTwo(unsigned long) */

uchar __cdecl appCeilLogTwo(ulong param_1)

{
  sbyte sVar1;
  uint uVar2;
  byte bVar3;
  
                    /* 0x3a85  2021  ?appCeilLogTwo@@YAEK@Z */
  uVar2 = param_1 - 1;
  if (uVar2 == 0xffffffff) {
    return '\0';
  }
  if (uVar2 < 0x10001) {
    bVar3 = -(0x100 < uVar2) & 8;
    return (&DAT_10284b68)[uVar2 >> bVar3] + bVar3;
  }
  sVar1 = (0x1000000 < uVar2) * '\b' + 0x10;
  return (&DAT_10284b68)[uVar2 >> sVar1] + sVar1;
}


// ==== 10103a8a UObject::FindBoolProperty

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall UObject::FindBoolProperty(class FString,int *) */

int __thiscall
UObject::FindBoolProperty
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
  
                    /* 0x3a8a  1001  ?FindBoolProperty@UObject@@QAEHVFString@@PAH@Z */
  puStack_8 = &LAB_101bcec0;
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
      if (pUVar1 == &UBoolProperty::PrivateStaticClass) {
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


// ==== 10103a8f UObject::UObject

/* public: __thiscall UObject::UObject(void) */

void __thiscall UObject::UObject(UObject *this)

{
                    /* 0x3a8f  251  ??0UObject@@QAE@XZ */
  *(undefined ***)this = vftable;
  GObjNewCount = GObjNewCount + 1;
  GObjCurCount = GObjCurCount + 1;
  if (GObjPeakCount < GObjCurCount) {
    GObjPeakCount = GObjCurCount;
  }
  return;
}


// ==== 10103a94 thunk_FUN_10121b50 thunk -> 10121b50

// ==== 10103a9e FFrame::ReadName

/* public: class FName __thiscall FFrame::ReadName(void) */

void __thiscall FFrame::ReadName(FFrame *this)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x3a9e  1751  ?ReadName@FFrame@@QAE?AVFName@@XZ */
  puVar1 = *(undefined4 **)(this + 0xc);
  *in_stack_00000004 = *puVar1;
  *(undefined4 **)(this + 0xc) = puVar1 + 1;
  return;
}


// ==== 10103aa3 appAnsiStaticString1024

/* char * __cdecl appAnsiStaticString1024(void) */

char * __cdecl appAnsiStaticString1024(void)

{
  char *pcVar1;
  
                    /* 0x3aa3  2012  ?appAnsiStaticString1024@@YAPADXZ */
  pcVar1 = &DAT_10289ec8 + (DAT_10323864 & 0xff) * 0x800;
  DAT_10323864 = DAT_10323864 + 1;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  return pcVar1;
}


// ==== 10103aa8 UObject::GetLoaderList

/* public: static class TArray<class UObject *> __cdecl UObject::GetLoaderList(void) */

undefined4 __cdecl UObject::GetLoaderList(void)

{
  undefined4 in_stack_00000004;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3aa8  1347  ?GetLoaderList@UObject@@SA?AV?$TArray@PAVUObject@@@@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7459;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_101188d0(&GObjLoaders);
  ExceptionList = pvStack_c;
  return in_stack_00000004;
}


// ==== 10103aad UObject::execGreaterGreaterGreater_IntInt

/* public: void __thiscall UObject::execGreaterGreaterGreater_IntInt(struct FFrame &,void * const)
    */

void __thiscall
UObject::execGreaterGreaterGreater_IntInt(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_ESI;
  undefined4 uStack_4;
  
                    /* 0x3aad  2241  ?execGreaterGreaterGreater_IntInt@UObject@@QAEXAAUFFrame@@QAX@Z
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
  *unaff_ESI = (uint)&uStack_4 >> ((byte)&uStack_4 & 0x1f);
  return;
}


// ==== 10103ab2 UObject::execIntConst

/* public: void __thiscall UObject::execIntConst(struct FFrame &,void * const) */

void __thiscall UObject::execIntConst(UObject *this,FFrame *param_1,void *param_2)

{
  undefined4 uVar1;
  
                    /* 0x3ab2  2265  ?execIntConst@UObject@@QAEXAAUFFrame@@QAX@Z */
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *(undefined4 *)param_2 = uVar1;
  return;
}


// ==== 10103ab7 appSpc

/* unsigned short const * __cdecl appSpc(int) */

ushort * __cdecl appSpc(int param_1)

{
                    /* 0x3ab7  2099  ?appSpc@@YAPBGH@Z */
  if (param_1 != DAT_1023a4c4) {
    for (DAT_1023a4c4 = 0; DAT_1023a4c4 < param_1; DAT_1023a4c4 = DAT_1023a4c4 + 1) {
      (&DAT_10323868)[DAT_1023a4c4] = 0x20;
    }
    (&DAT_10323868)[param_1] = 0;
  }
  return &DAT_10323868;
}


// ==== 10103abc thunk_FUN_1012ab60 thunk -> 1012ab60

// ==== 10103ac1 UObject::execMultiplyEqual_FloatFloat

/* public: void __thiscall UObject::execMultiplyEqual_FloatFloat(struct FFrame &,void * const) */

void __thiscall UObject::execMultiplyEqual_FloatFloat(UObject *this,FFrame *param_1,void *param_2)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *pfStack_8;
  undefined4 uStack_4;
  
                    /* 0x3ac1  2307  ?execMultiplyEqual_FloatFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
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
  *pfVar3 = fVar1 * unaff_ESI;
  *pfStack_8 = fVar1 * unaff_ESI;
  return;
}


// ==== 10103ac6 FPlane::operator-=

/* public: class FPlane __thiscall FPlane::operator-=(class FPlane const &) */

void __thiscall FPlane::operator-=(FPlane *this,FPlane *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *in_stack_00000008;
  
                    /* 0x3ac6  688  ??ZFPlane@@QAE?AV0@ABV0@@Z */
  *(float *)this = *(float *)this - *in_stack_00000008;
  *(float *)(this + 4) = *(float *)(this + 4) - in_stack_00000008[1];
  *(float *)(this + 8) = *(float *)(this + 8) - in_stack_00000008[2];
  fVar1 = *(float *)(this + 0xc);
  fVar2 = in_stack_00000008[3];
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(float *)(this + 0xc) = fVar1 - fVar2;
  uVar3 = *(undefined4 *)(this + 8);
  *(float *)(param_1 + 0xc) = fVar1 - fVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}


// ==== 10103acb UMapProperty::operator_new

/* public: static void * __cdecl UMapProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UMapProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3acb  391  ??2UMapProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10103ad0 UPackageMap::Compute

/* public: virtual void __thiscall UPackageMap::Compute(void) */

void __thiscall UPackageMap::Compute(UPackageMap *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ad0  855  ?Compute@UPackageMap@@UAEXXZ */
  puStack_c = &LAB_101ba900;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  iVar3 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar4 = 0; iStack_20 = iVar4, iVar4 < *(int *)(this + 0x38); iVar4 = iVar4 + 1) {
    if (*(int *)(*(int *)(this + 0x34) + 0xc + iVar4 * 0x44) == 0) {
      appFailAssert("List(i).Linker",".\\UnCoreNet.cpp",0xf2);
    }
  }
  thunk_FUN_10113560(DAT_10327ae4);
  thunk_FUN_10136fa0(DAT_10327ae4);
  for (iStack_24 = 0; iStack_24 < *(int *)(this + 0x6c); iStack_24 = iStack_24 + 1) {
    *(undefined4 *)(*(int *)(this + 0x68) + iStack_24 * 4) = 0xffffffff;
  }
  thunk_FUN_101376e0();
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  for (; iVar3 < *(int *)(this + 0x38); iVar3 = iVar3 + 1) {
    iVar4 = *(int *)(this + 0x34) + iVar3 * 0x44;
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x94);
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x7c);
    uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x70);
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    if (*(int *)(iVar4 + 0x3c) == 0) {
      *(undefined4 *)(iVar4 + 0x3c) = uVar1;
    }
    if (*(int *)(iVar4 + 0x3c) < *(int *)(iVar4 + 0x38)) {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0xc) + 0x6c) + -8 + *(int *)(iVar4 + 0x3c) * 8);
      if (*(int *)(iVar4 + 0x2c) <= iVar2) {
        iVar2 = *(int *)(iVar4 + 0x2c);
      }
      *(int *)(iVar4 + 0x2c) = iVar2;
      iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0xc) + 0x6c) + -4 + *(int *)(iVar4 + 0x3c) * 8);
      if (*(int *)(iVar4 + 0x34) <= iVar2) {
        iVar2 = *(int *)(iVar4 + 0x34);
      }
      *(int *)(iVar4 + 0x34) = iVar2;
    }
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + *(int *)(iVar4 + 0x2c);
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + *(int *)(iVar4 + 0x34);
    iStack_28 = 0;
    while( true ) {
      iStack_2c = *(int *)(iVar4 + 0xc);
      iStack_1c = *(int *)(iStack_2c + 0x7c);
      iVar2 = *(int *)(iVar4 + 0x34);
      if (iStack_1c <= *(int *)(iVar4 + 0x34)) {
        iVar2 = iStack_1c;
      }
      if (iVar2 <= iStack_28) break;
      iVar2 = *(int *)(*(int *)(iStack_2c + 0x78) + iStack_28 * 4);
      if (*(int *)(*(int *)(this + 0x68) + iVar2 * 4) == -1) {
        *(int *)(*(int *)(this + 0x68) + iVar2 * 4) = *(int *)(iVar4 + 0x30) + iStack_28;
      }
      iStack_28 = iStack_28 + 1;
    }
    iStack_18 = iVar3;
    thunk_FUN_101380f0(&iStack_2c,&iStack_18);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103ad5 UFloatProperty::UFloatProperty

/* public: __thiscall UFloatProperty::UFloatProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long) */

UFloatProperty * __thiscall
UFloatProperty::UFloatProperty
          (UFloatProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3ad5  223  ??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103adf UObject::execStringToFloat

/* public: void __thiscall UObject::execStringToFloat(struct FFrame &,void * const) */

void __thiscall UObject::execStringToFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int unaff_ESI;
  ushort *unaff_EDI;
  float fVar2;
  float *unaff_retaddr;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3adf  2374  ?execStringToFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb480;
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
  fVar2 = appAtof(unaff_EDI);
  *unaff_retaddr = fVar2;
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10103ae4 UObject::execOrOr_BoolBool

/* WARNING: Removing unreachable block (ram,0x1013b245) */
/* public: void __thiscall UObject::execOrOr_BoolBool(struct FFrame &,void * const) */

void __thiscall UObject::execOrOr_BoolBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_retaddr;
  
                    /* 0x3ae4  2341  ?execOrOr_BoolBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar3 = *(ushort **)(param_1 + 0xc);
  uVar2 = *puVar3;
  *(ushort **)(param_1 + 0xc) = puVar3 + 1;
  if (&stack0x00000000 == (undefined1 *)0x4) {
    uVar2 = puVar3[1];
    *(int *)(param_1 + 0xc) = (int)puVar3 + 3;
    (*(code *)(&GNatives)[(byte)uVar2])(param_1);
    *unaff_ESI = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return;
  }
  *unaff_retaddr = 1;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar2;
  return;
}


// ==== 10103ae9 UMapProperty::NetSerializeItem

/* public: virtual int __thiscall UMapProperty::NetSerializeItem(class FArchive &,class UPackageMap
   *,void *)const  */

int __thiscall
UMapProperty::NetSerializeItem
          (UMapProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3)

{
                    /* 0x3ae9  1636
                       ?NetSerializeItem@UMapProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
  return 1;
}


// ==== 10103aee FVector::TransformVectorBy

/* public: class FVector __thiscall FVector::TransformVectorBy(class FCoords const &)const  */

FCoords * __thiscall FVector::TransformVectorBy(FVector *this,FCoords *param_1)

{
                    /* 0x3aee  1980  ?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */
  thunk_FUN_1010f5b0();
  return param_1;
}


// ==== 10103af3 FBitWriter::WriteBit

/* public: void __thiscall FBitWriter::WriteBit(unsigned char) */

void __thiscall FBitWriter::WriteBit(FBitWriter *this,uchar param_1)

{
  uint uVar1;
  byte *pbVar2;
  
                    /* 0x3af3  1997  ?WriteBit@FBitWriter@@QAEXE@Z */
  uVar1 = *(uint *)(this + 0x44);
  if ((int)(uVar1 + 1) <= *(int *)(this + 0x48)) {
    if (param_1 != '\0') {
      pbVar2 = (byte *)(((int)uVar1 >> 3) + *(int *)(this + 0x38));
      *pbVar2 = *pbVar2 | (&DAT_102387e4)[uVar1 & 7];
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    return;
  }
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}


// ==== 10103af8 thunk_FUN_10128670 thunk -> 10128670

// ==== 10103afd thunk_FUN_10109380 thunk -> 10109380

// ==== 10103b02 FTransactionBase::FTransactionBase

/* public: __thiscall FTransactionBase::FTransactionBase(void) */

void __thiscall FTransactionBase::FTransactionBase(FTransactionBase *this)

{
                    /* 0x3b02  164  ??0FTransactionBase@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103b07 UObject::execDivide_RotatorFloat

/* public: void __thiscall UObject::execDivide_RotatorFloat(struct FFrame &,void * const) */

void __thiscall UObject::execDivide_RotatorFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this_00;
  float fStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
                    /* 0x3b07  2194  ?execDivide_RotatorFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  this_00 = extraout_ECX;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
    this_00 = extraout_ECX_00;
  }
  if (fStack_c != 0.0) {
    fStack_c = 1.0 / fStack_c;
    iVar2 = FUN_1017b700();
    iVar3 = FUN_1017b700();
    iVar4 = FUN_1017b700();
    *piStack_8 = iVar2;
    piStack_8[1] = iVar3;
    piStack_8[2] = iVar4;
    return;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this_00,(ushort *)GLog);
  }
  *piStack_8 = (int)&uStack_4;
  piStack_8[1] = (int)param_1;
  piStack_8[2] = (int)&fStack_c;
  return;
}


// ==== 10103b0c UMapProperty::CopySingleValue

/* public: virtual void __thiscall UMapProperty::CopySingleValue(void *,void *,class UObject *)const
    */

void __thiscall
UMapProperty::CopySingleValue(UMapProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x3b0c  880  ?CopySingleValue@UMapProperty@@UBEXPAX0PAVUObject@@@Z */
  return;
}


// ==== 10103b11 thunk_FUN_10137570 thunk -> 10137570

// ==== 10103b16 thunk_FUN_10121780 thunk -> 10121780

// ==== 10103b1b thunk_FUN_1012a970 thunk -> 1012a970

// ==== 10103b20 thunk_FUN_10128600 thunk -> 10128600

// ==== 10103b25 UPackageMap::SerializeName

/* public: virtual int __thiscall UPackageMap::SerializeName(class FArchive &,class FName &) */

int __thiscall UPackageMap::SerializeName(UPackageMap *this,FArchive *param_1,FName *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b25  1849  ?SerializeName@UPackageMap@@UAEHAAVFArchive@@AAVFName@@@Z */
  puStack_c = &LAB_101ba7a0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  if (*(int *)param_2 < *(int *)(this + 0x6c)) {
    uStack_18 = *(uint *)(*(int *)(this + 0x68) + *(int *)param_2 * 4);
  }
  else {
    uStack_18 = *(uint *)(this + 0x78);
  }
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)param_1 + 0xc))(&uStack_18,*(int *)(this + 0x78) + 1);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)param_2 = 0;
    if ((uStack_18 < *(uint *)(this + 0x78)) && (*(int *)(param_1 + 0x2c) == 0)) {
      for (iVar3 = 0; iVar3 < *(int *)(this + 0x38); iVar3 = iVar3 + 1) {
        iVar1 = *(int *)(this + 0x34) + iVar3 * 0x44;
        uVar2 = *(uint *)(iVar1 + 0x34);
        if (uStack_18 < uVar2) {
          *(undefined4 *)param_2 =
               *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x78) + uStack_18 * 4);
          ExceptionList = pvStack_10;
          return 1;
        }
        uStack_18 = uStack_18 - uVar2;
      }
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return (uint)(uStack_18 != *(uint *)(this + 0x78));
}


// ==== 10103b2a UNameProperty::StaticClass

/* public: static class UClass * __cdecl UNameProperty::StaticClass(void) */

UClass * __cdecl UNameProperty::StaticClass(void)

{
                    /* 0x3b2a  1908  ?StaticClass@UNameProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103b2f UStruct::GetSuperStruct

/* public: class UStruct * __thiscall UStruct::GetSuperStruct(void)const  */

UStruct * __thiscall UStruct::GetSuperStruct(UStruct *this)

{
                    /* 0x3b2f  1403  ?GetSuperStruct@UStruct@@QBEPAV1@XZ */
  return *(UStruct **)(this + 0x34);
}


// ==== 10103b34 ULinkerLoad::InternalConstructor

/* public: static void __cdecl ULinkerLoad::InternalConstructor(void *) */

void __cdecl ULinkerLoad::InternalConstructor(void *param_1)

{
                    /* 0x3b34  1489  ?InternalConstructor@ULinkerLoad@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    ULinkerLoad(param_1);
    return;
  }
  return;
}


// ==== 10103b39 UObject::ConditionalDestroy

/* public: int __thiscall UObject::ConditionalDestroy(void) */

int __thiscall UObject::ConditionalDestroy(UObject *this)

{
  uint uVar1;
  FOutputDevice *this_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b39  857  ?ConditionalDestroy@UObject@@QAEHXZ */
  puStack_c = &LAB_101bcbc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((*(int *)(this + 4) != -1) && (uVar1 = *(uint *)(this + 0x1c), (uVar1 & 0x800000) == 0)) {
    ExceptionList = &pvStack_10;
    *(uint *)(this + 0x1c) = uVar1 | 0x800000;
    *(uint *)(this + 0x1c) = uVar1 & 0x7fffffff | 0x800000;
    (**(code **)(*(int *)this + 0x28))();
    if ((*(uint *)(this + 0x1c) & 0x80000000) == 0) {
      GetFullName(this,(ushort *)0x0);
      FOutputDevice::Logf(this_00,(ushort *)GError);
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  return 0;
}


// ==== 10103b3e UClass::GetDefaultActor

/* public: class AActor * __thiscall UClass::GetDefaultActor(void) */

AActor * __thiscall UClass::GetDefaultActor(UClass *this)

{
                    /* 0x3b3e  1305  ?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */
  if (*(int *)(this + 0x4f8) == 0) {
    appFailAssert("Defaults.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnClass.h",0x21f);
  }
  return *(AActor **)(this + 0x4f4);
}


// ==== 10103b43 UStrProperty::StaticClass

/* public: static class UClass * __cdecl UStrProperty::StaticClass(void) */

UClass * __cdecl UStrProperty::StaticClass(void)

{
                    /* 0x3b43  1917  ?StaticClass@UStrProperty@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10103b4d FString::Mid

/* public: class FString __thiscall FString::Mid(int,int)const  */

int __thiscall FString::Mid(FString *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int in_stack_0000000c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3b4d  1618  ?Mid@FString@@QBE?AV1@HH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b8479;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(this + 4);
  uVar2 = in_stack_0000000c + param_2;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 - 1U;
    if ((uint)param_2 < iVar1 - 1U) goto LAB_10121eca;
  }
  param_2 = uVar5;
LAB_10121eca:
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 - 1;
  }
  uVar3 = param_2;
  if (((uint)param_2 <= uVar2) && (uVar3 = uVar2, uVar5 <= uVar2)) {
    uVar3 = uVar5;
  }
  if (iVar1 == 0) {
    puVar4 = &DAT_101cdd44;
  }
  else {
    puVar4 = *(undefined2 **)this;
  }
  ExceptionList = &pvStack_c;
  FString((FString *)param_1,uVar3 - param_2,puVar4 + param_2);
  ExceptionList = pvStack_c;
  return param_1;
}


// ==== 10103b52 thunk_FUN_1015dcd0 thunk -> 1015dcd0

// ==== 10103b57 thunk_FUN_101429d0 thunk -> 101429d0

// ==== 10103b5c UObject::execStringToByte

/* public: void __thiscall UObject::execStringToByte(struct FFrame &,void * const) */

void __thiscall UObject::execStringToByte(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  ushort *unaff_EDI;
  undefined1 *unaff_retaddr;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3b5c  2373  ?execStringToByte@UObject@@QAEXAAUFFrame@@QAX@Z */
  puStack_8 = &LAB_101bb3c0;
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
  *unaff_retaddr = (char)iVar2;
  pvStack_c = (void *)0x3;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10103b61 FRangeVector::GetMax

/* public: class FVector __thiscall FRangeVector::GetMax(void)const  */

void __thiscall FRangeVector::GetMax(FRangeVector *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_stack_00000004;
  
                    /* 0x3b61  1350  ?GetMax@FRangeVector@@QBE?AVFVector@@XZ */
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0xc);
  if (fVar3 < fVar1 != (fVar3 == fVar1)) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)this;
  fVar4 = *(float *)(this + 4);
  if (fVar4 < fVar1 != (fVar4 == fVar1)) {
    fVar4 = fVar1;
  }
  *in_stack_00000004 = fVar4;
  in_stack_00000004[1] = fVar3;
  in_stack_00000004[2] = fVar2;
  return;
}


// ==== 10103b66 FArchive::AttachRoughLoader

/* public: virtual void __thiscall FArchive::AttachRoughLoader(class FRoughLoader *) */

void __thiscall FArchive::AttachRoughLoader(FArchive *this,FRoughLoader *param_1)

{
                    /* 0x3b66  810  ?AttachRoughLoader@FArchive@@UAEXPAVFRoughLoader@@@Z */
  return;
}


// ==== 10103b6b FMalloc::GetTotalAllocs

/* public: virtual int __thiscall FMalloc::GetTotalAllocs(void) */

int __thiscall FMalloc::GetTotalAllocs(FMalloc *this)

{
                    /* 0x3b6b  1412  ?GetTotalAllocs@FMalloc@@UAEHXZ */
  return 0;
}


// ==== 10103b70 UObject::ConditionalRegister

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall UObject::ConditionalRegister(void) */

void __thiscall UObject::ConditionalRegister(UObject *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b70  859  ?ConditionalRegister@UObject@@QAEXXZ */
  puStack_c = &LAB_101bcbd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 4) == -1) {
    for (iVar1 = 0; (iVar1 < DAT_103308bc && (*(UObject **)(_GObjRegistrants + iVar1 * 4) != this));
        iVar1 = iVar1 + 1) {
    }
    ExceptionList = &pvStack_10;
    if (iVar1 == DAT_103308bc) {
      ExceptionList = &pvStack_10;
      appFailAssert("i!=GObjRegistrants.Num()",".\\UnObj.cpp",0x1bd);
    }
    (**(code **)(*(int *)this + 0x50))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103b75 thunk_FUN_10129d90 thunk -> 10129d90

// ==== 10103b7a appUserName

/* unsigned short const * __cdecl appUserName(void) */

ushort * __cdecl appUserName(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  CHAR aCStack_12c [268];
  short *psStack_20;
  short *psStack_1c;
  DWORD DStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b7a  2131  ?appUserName@@YAPBGXZ */
  puStack_c = &LAB_101be450;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffec8;
  uStack_8 = 0;
  if (DAT_1033d968 == 0) {
    DStack_18 = 0x100;
    if ((GUnicode == 0) || (GUnicodeOS != 0)) {
      ExceptionList = &pvStack_10;
      GetUserNameW(&DAT_1033d968,&DStack_18);
    }
    else {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xfffffec8;
      GetUserNameA(aCStack_12c,&DStack_18);
      MultiByteToWideChar(0,0,aCStack_12c,-1,&DAT_1033d968,0x100);
    }
    psStack_20 = &DAT_1033d968;
    psStack_1c = &DAT_1033d968;
    psVar4 = &DAT_1033d968;
    while( true ) {
      psVar2 = psStack_20;
      sVar1 = *psStack_20;
      if (sVar1 == 0) break;
      iVar3 = thunk_FUN_1014fa20(sVar1);
      if (iVar3 != 0) {
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
        psStack_1c = psVar4;
      }
      psStack_20 = psVar2 + 1;
    }
    *psVar4 = 0;
  }
  ExceptionList = pvStack_10;
  return (ushort *)&DAT_1033d968;
}


// ==== 10103b7f UObject::execPrimitiveCast

/* public: void __thiscall UObject::execPrimitiveCast(struct FFrame &,void * const) */

void __thiscall UObject::execPrimitiveCast(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x3b7f  2345  ?execPrimitiveCast@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
                    /* WARNING: Jumptable at 0x1013901e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&GCasts)[bVar1])();
  return;
}


// ==== 10103b84 UNameProperty::ImportText

/* public: virtual unsigned short const * __thiscall UNameProperty::ImportText(unsigned short const
   *,unsigned char *,int)const  */

ushort * __thiscall
UNameProperty::ImportText(UNameProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort auStack_824 [1030];
  UNameProperty *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b84  1451  ?ImportText@UNameProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be0a0;
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
  puVar2 = (undefined4 *)FName::FName((FName *)&param_1,auStack_824,1);
  *(undefined4 *)param_2 = *puVar2;
  ExceptionList = pvStack_10;
  return puVar1;
}


// ==== 10103b89 UExporter::ExportToFile

/* public: static int __cdecl UExporter::ExportToFile(class UObject *,class UExporter *,unsigned
   short const *,int,int) */

int __cdecl
UExporter::ExportToFile(UObject *param_1,UExporter *param_2,ushort *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FArchive aFStack_8c [64];
  void *pvStack_4c;
  int iStack_48;
  FOutputDevice aFStack_40 [4];
  ushort *puStack_3c;
  int iStack_38;
  ushort *puStack_30;
  int iStack_2c;
  UExporter *pUStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x3b89  990  ?ExportToFile@UExporter@@SAHPAVUObject@@PAV1@PBGHH@Z */
  puStack_c = &LAB_101b9a33;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff68;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffff68;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert("Object",".\\UExporter.cpp",0x84);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  pUStack_1c = param_2;
  puVar2 = appFExt(param_3);
  iStack_18 = 0;
  if ((param_2 == (UExporter *)0x0) &&
     (pUStack_1c = FindExporter(param_1,puVar2), pUStack_1c == (UExporter *)0x0)) {
    UObject::GetFullName(param_1,(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GWarn,(ushort *)GWarn);
    ExceptionList = pvStack_10;
    return 0;
  }
  if (((byte)pUStack_1c[0x48] & 1) != 0) {
    thunk_FUN_1012b240(&DAT_101d05f8);
    iStack_8._0_1_ = 1;
    ExportToOutputDevice(param_1,pUStack_1c,aFStack_40,puVar2,0);
    if (param_4 != 0) {
      FString::FString((FString *)&puStack_30);
      iStack_8 = CONCAT31(iStack_8._1_3_,2);
      iVar3 = appLoadFileToString((FString *)&puStack_30,param_3,(FFileManager *)GFileManager);
      if (iVar3 != 0) {
        if (iStack_2c == 0) {
          puStack_30 = &DAT_101cdd44;
        }
        if (iStack_38 == 0) {
          puStack_3c = &DAT_101cdd44;
        }
        iVar3 = appStrcmp(puStack_3c,puStack_30);
        if (iVar3 != 0) goto LAB_1012c20f;
        if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(this,(ushort *)GLog);
        }
LAB_1012c1eb:
        iStack_18 = 1;
        iStack_8._0_1_ = 1;
        FString::~FString((FString *)&puStack_30);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        thunk_FUN_1012b550();
        goto LAB_1012c456;
      }
LAB_1012c20f:
      if (param_5 != 0) {
        iVar3 = *(int *)GWarn;
        puVar2 = param_3;
        puVar4 = LocalizeQuery((ushort *)L"Overwrite",(ushort *)L"Core",(ushort *)0x0);
        iVar3 = (**(code **)(iVar3 + 0xc))(GWarn,puVar4,puVar2);
        if (iVar3 == 0) goto LAB_1012c1eb;
      }
      iStack_8._0_1_ = 1;
      FString::~FString((FString *)&puStack_30);
    }
    iVar3 = appSaveStringToFile((FString *)&puStack_3c,param_3,(FFileManager *)GFileManager);
    if (iVar3 == 0) {
      iVar3 = *(int *)GWarn;
      puVar2 = LocalizeQuery((ushort *)L"OverwriteReadOnly",(ushort *)L"Core",(ushort *)0x0);
      iVar3 = (**(code **)(iVar3 + 0xc))(GWarn,puVar2);
      if (iVar3 != 0) {
        (**(code **)(*(int *)GFileManager + 0x14))(param_3,0,1);
        iVar3 = appSaveStringToFile((FString *)&puStack_3c,param_3,(FFileManager *)GFileManager);
        if (iVar3 != 0) goto LAB_1012c2c1;
      }
      UObject::GetFullName(param_1,(ushort *)0x0);
      LocalizeError((ushort *)L"ExportOpen",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this_00,(ushort *)GWarn);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_1012b550();
    }
    else {
LAB_1012c2c1:
      iStack_18 = 1;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_1012b550();
    }
    goto LAB_1012c456;
  }
  thunk_FUN_1012b2d0();
  iStack_8._0_1_ = 3;
  ExportToArchive(param_1,pUStack_1c,aFStack_8c,puVar2);
  if (param_4 == 0) {
LAB_1012c3f9:
    iVar3 = appSaveArrayToFile((TArray<unsigned_char> *)&pvStack_4c,param_3,
                               (FFileManager *)GFileManager);
    if (iVar3 == 0) {
      UObject::GetFullName(param_1,(ushort *)0x0);
      LocalizeError((ushort *)L"ExportOpen",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this_02,(ushort *)GWarn);
    }
    else {
      iStack_18 = 1;
    }
  }
  else {
    thunk_FUN_10113aa0();
    iStack_8 = CONCAT31(iStack_8._1_3_,4);
    iVar3 = appLoadFileToArray((TArray<unsigned_char> *)&puStack_30,param_3,
                               (FFileManager *)GFileManager);
    if (((iVar3 == 0) || (iStack_2c != iStack_48)) ||
       (iVar3 = appMemcmp(puStack_30,pvStack_4c,iStack_48), iVar3 != 0)) {
      if (param_5 != 0) {
        iVar3 = *(int *)GWarn;
        puVar2 = param_3;
        puVar4 = LocalizeQuery((ushort *)L"Overwrite",(ushort *)L"Core",(ushort *)0x0);
        iVar3 = (**(code **)(iVar3 + 0xc))(GWarn,puVar4,puVar2);
        if (iVar3 == 0) goto LAB_1012c39e;
      }
      iStack_8._0_1_ = 3;
      thunk_FUN_10118750();
      goto LAB_1012c3f9;
    }
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(this_01,(ushort *)GLog);
    }
LAB_1012c39e:
    iStack_18 = 1;
    iStack_8._0_1_ = 3;
    thunk_FUN_10118750();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_1012b370();
LAB_1012c456:
  if (param_2 == (UExporter *)0x0) {
    (**(code **)(*(int *)pUStack_1c + 0xc))();
  }
  ExceptionList = pvStack_10;
  return iStack_18;
}


// ==== 10103b8e thunk_FUN_10130f10 thunk -> 10130f10

// ==== 10103b98 FScale::operator==

/* public: int __thiscall FScale::operator==(class FScale const &)const  */

int __thiscall FScale::operator==(FScale *this,FScale *param_1)

{
                    /* 0x3b98  570  ??8FScale@@QBEHABV0@@Z */
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(param_1 + 4) == *(float *)(this + 4)))
      && (*(float *)(param_1 + 8) == *(float *)(this + 8))) &&
     ((*(float *)(param_1 + 0xc) == *(float *)(this + 0xc) && (this[0x10] == param_1[0x10])))) {
    return 1;
  }
  return 0;
}


// ==== 10103b9d ULinkerLoad::Serialize

/* private: virtual void __thiscall ULinkerLoad::Serialize(void *,int) */

void __thiscall ULinkerLoad::Serialize(ULinkerLoad *this,void *param_1,int param_2)

{
  FArchive *pFVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3b9d  1816  ?Serialize@ULinkerLoad@@EAEXPAXH@Z */
  puStack_c = &LAB_101bb710;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = GetReader(this + -0xc0);
  (**(code **)(*(int *)pFVar1 + 4))(param_1,param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103ba2 UObject::LanguageChange

/* public: virtual void __thiscall UObject::LanguageChange(void) */

void __thiscall UObject::LanguageChange(UObject *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ba2  1542  ?LanguageChange@UObject@@UAEXXZ */
  puStack_c = &LAB_101bccd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  LoadLocalized(this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103ba7 FString::Len

/* public: int __thiscall FString::Len(void)const  */

int __thiscall FString::Len(FString *this)

{
                    /* 0x3ba7  1549  ?Len@FString@@QBEHXZ */
  if (*(int *)(this + 4) != 0) {
    return *(int *)(this + 4) + -1;
  }
  return 0;
}


// ==== 10103bac FFileStream::FFileStream

/* private: __thiscall FFileStream::FFileStream(void) */

FFileStream * __thiscall FFileStream::FFileStream(FFileStream *this)

{
                    /* 0x3bac  55  ??0FFileStream@@AAE@XZ */
  return this;
}


// ==== 10103bb1 thunk_FUN_1015cd10 thunk -> 1015cd10

// ==== 10103bb6 UProperty::CopySingleValue

/* public: virtual void __thiscall UProperty::CopySingleValue(void *,void *,class UObject *)const
    */

void __thiscall
UProperty::CopySingleValue(UProperty *this,void *param_1,void *param_2,UObject *param_3)

{
                    /* 0x3bb6  883  ?CopySingleValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
  _memcpy(param_1,param_2,*(size_t *)(this + 0x44));
  return;
}


// ==== 10103bbb UObject::execEqualEqual_ObjectObject

/* public: void __thiscall UObject::execEqualEqual_ObjectObject(struct FFrame &,void * const) */

void __thiscall UObject::execEqualEqual_ObjectObject(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x3bbb  2210  ?execEqualEqual_ObjectObject@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10103bc0 UStruct::PostLoad

/* public: virtual void __thiscall UStruct::PostLoad(void) */

void __thiscall UStruct::PostLoad(UStruct *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3bc0  1690  ?PostLoad@UStruct@@UAEXXZ */
  puStack_c = &LAB_101b9dd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  UField::PostLoad((UField *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103bc5 thunk_FUN_10125560 thunk -> 10125560

// ==== 10103bca UObjectProperty::operator=

/* public: class UObjectProperty & __thiscall UObjectProperty::operator=(class UObjectProperty const
   &) */

UObjectProperty * __thiscall
UObjectProperty::operator=(UObjectProperty *this,UObjectProperty *param_1)

{
                    /* 0x3bca  534  ??4UObjectProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return this;
}


// ==== 10103bcf thunk_FUN_10109c30 thunk -> 10109c30

// ==== 10103bd4 TArray<unsigned_short>::Empty

/* public: void __thiscall TArray<unsigned short>::Empty(int) */

void __thiscall TArray<unsigned_short>::Empty(TArray<unsigned_short> *this,int param_1)

{
                    /* 0x3bd4  943  ?Empty@?$TArray@G@@QAEXH@Z */
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 8) = param_1;
  FArray::Realloc((FArray *)this,2);
  return;
}


// ==== 10103bd9 L2ThreadStats::operator=

/* public: class L2ThreadStats & __thiscall L2ThreadStats::operator=(class L2ThreadStats const &) */

L2ThreadStats * __thiscall L2ThreadStats::operator=(L2ThreadStats *this,L2ThreadStats *param_1)

{
  int iVar1;
  L2ThreadStats *pLVar2;
  
                    /* 0x3bd9  509  ??4L2ThreadStats@@QAEAAV0@ABV0@@Z */
  pLVar2 = this;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pLVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pLVar2 = pLVar2 + 4;
  }
  return this;
}


// ==== 10103bde thunk_FUN_10156eb0 thunk -> 10156eb0

// ==== 10103be3 ULinker::LinksToCode

/* public: virtual int __thiscall ULinker::LinksToCode(void) */

int __thiscall ULinker::LinksToCode(ULinker *this)

{
                    /* 0x3be3  1569  ?LinksToCode@ULinker@@UAEHXZ */
  return 0;
}


// ==== 10103be8 UStrProperty::Identical

/* public: virtual int __thiscall UStrProperty::Identical(void const *,void const *)const  */

int __thiscall UStrProperty::Identical(UStrProperty *this,void *param_1,void *param_2)

{
  ushort *puVar1;
  int iVar2;
  
                    /* 0x3be8  1439  ?Identical@UStrProperty@@UBEHPBX0@Z */
  if (param_2 == (void *)0x0) {
    puVar1 = (ushort *)&DAT_101df370;
  }
  else if (*(int *)((int)param_2 + 4) == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = *(ushort **)param_2;
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar2 = appStricmp(*(ushort **)param_1,puVar1);
    return (uint)(iVar2 == 0);
  }
  iVar2 = appStricmp(&DAT_101cdd44,puVar1);
  return (uint)(iVar2 == 0);
}


// ==== 10103bed FBlowFish::FBlowFish

/* public: __thiscall FBlowFish::FBlowFish(void) */

FBlowFish * __thiscall FBlowFish::FBlowFish(FBlowFish *this)

{
                    /* 0x3bed  20  ??0FBlowFish@@QAE@XZ */
  return this;
}


// ==== 10103bf2 TArray<unsigned_short>::operator=

/* public: class TArray<unsigned short> & __thiscall TArray<unsigned short>::operator=(class
   TArray<unsigned short> const &) */

TArray<unsigned_short> * __thiscall
TArray<unsigned_short>::operator=(TArray<unsigned_short> *this,TArray<unsigned_short> *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x3bf2  426  ??4?$TArray@G@@QAEAAV0@ABV0@@Z */
  if (this == param_1) {
    return this;
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar5 = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = uVar3;
  FArray::Realloc((FArray *)this,2);
  if (*(int *)(param_1 + 4) < 1) {
    return this;
  }
  do {
    iVar4 = *(int *)(this + 4);
    iVar1 = iVar4 + 1;
    *(int *)(this + 4) = iVar1;
    if (*(int *)(this + 8) < iVar1) {
      *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
      FArray::Realloc((FArray *)this,2);
    }
    puVar2 = (undefined2 *)(*(int *)this + iVar4 * 2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *(undefined2 *)(*(int *)param_1 + iVar5 * 2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(param_1 + 4));
  return this;
}


// ==== 10103bf7 winToANSI

/* char * __cdecl winToANSI(char *,unsigned short const *,int) */

char * __cdecl winToANSI(char *param_1,ushort *param_2,int param_3)

{
                    /* 0x3bf7  2416  ?winToANSI@@YAPADPADPBGH@Z */
  WideCharToMultiByte(0,0,(LPCWSTR)param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
  return param_1;
}


// ==== 10103bfc UObject::execNotEqual_ObjectObject

/* public: void __thiscall UObject::execNotEqual_ObjectObject(struct FFrame &,void * const) */

void __thiscall UObject::execNotEqual_ObjectObject(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
                    /* 0x3bfc  2332  ?execNotEqual_ObjectObject@UObject@@QAEXAAUFFrame@@QAX@Z */
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


// ==== 10103c01 UStrProperty::ExportTextItem

/* public: virtual void __thiscall UStrProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UStrProperty::ExportTextItem
          (UStrProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  ushort *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3c01  987  ?ExportTextItem@UStrProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101be200;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = FString::operator*((FString *)param_2);
  if ((param_4 & 2U) == 0) {
    appStrcpy(param_1,puVar1);
  }
  else {
    appSprintf(param_1,(ushort *)L"\"%s\"");
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103c06 UClassProperty::UClassProperty

/* public: __thiscall UClassProperty::UClassProperty(void) */

UClassProperty * __thiscall UClassProperty::UClassProperty(UClassProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3c06  198  ??0UClassProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = UObjectProperty::vftable;
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103c10 thunk_FUN_10161b20 thunk -> 10161b20

// ==== 10103c15 UObject::execHighNative14

/* public: void __thiscall UObject::execHighNative14(struct FFrame &,void * const) */

void __thiscall UObject::execHighNative14(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  
                    /* 0x3c15  2252  ?execHighNative14@UObject@@QAEXAAUFFrame@@QAX@Z */
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282f70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10103c1a UProperty::ExportCpp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UProperty::ExportCpp(class FOutputDevice &,int,int,int,int)const
    */

void __thiscall
UProperty::ExportCpp
          (UProperty *this,FOutputDevice *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  FOutputDevice *pFVar3;
  ushort uStack_c4;
  undefined1 auStack_c2 [170];
  UProperty *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3c1a  960  ?ExportCpp@UProperty@@UBEXAAVFOutputDevice@@HHHH@Z */
  puStack_c = &LAB_101be170;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff30;
  uStack_8 = 0;
  uStack_c4 = 0;
  ExceptionList = &pvStack_10;
  pUStack_18 = this;
  _memset(auStack_c2,0,0x9e);
  if (((param_3 != 0) &&
      (iVar1 = UObject::IsA((UObject *)this,&UStrProperty::PrivateStaticClass), iVar1 != 0)) &&
     ((*(uint *)(this + 0x48) & 0x100) == 0)) {
    FOutputDevice::Log(param_1,(ushort *)L"const ");
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(*(int *)this + 0x8c))(param_1,uVar2);
  if (*(int *)(this + 0x40) != 1) {
    appSprintf(&uStack_c4,(ushort *)L"[%i]",*(int *)(this + 0x40));
  }
  iVar1 = UObject::IsA((UObject *)this,&UBoolProperty::PrivateStaticClass);
  if (iVar1 == 0) {
    iVar1 = UObject::IsA((UObject *)this,&UStrProperty::PrivateStaticClass);
    pFVar3 = _Names;
    if (iVar1 == 0) {
      if (param_3 != 0) {
        if (1 < *(int *)(this + 0x40)) {
          FOutputDevice::Logf(*(FOutputDevice **)(this + 0x20),(ushort *)param_1);
          ExceptionList = pvStack_10;
          return;
        }
        if ((*(uint *)(this + 0x48) & 0x100) != 0) {
          pFVar3 = (FOutputDevice *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
        }
      }
    }
    else {
      if (param_3 != 0) {
        if (1 < *(int *)(this + 0x40)) {
          FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc),
                              (ushort *)param_1);
          ExceptionList = pvStack_10;
          return;
        }
        FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc),
                            (ushort *)param_1);
        ExceptionList = pvStack_10;
        return;
      }
      if (param_2 != 0) {
        FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc),
                            (ushort *)param_1);
        ExceptionList = pvStack_10;
        return;
      }
      if (param_5 == 0) {
        pFVar3 = *(FOutputDevice **)(this + 0x20);
      }
    }
    goto LAB_10172c02;
  }
  if ((*(int *)(this + 0x40) == 1) && (param_2 == 0)) {
    pFVar3 = _Names;
    if (param_3 == 0) goto LAB_10172c02;
LAB_10172a8a:
    if ((*(uint *)(this + 0x48) & 0x100) != 0) {
      pFVar3 = *(FOutputDevice **)(this + 0x20);
      goto LAB_10172c02;
    }
  }
  else if (param_3 != 0) goto LAB_10172a8a;
  pFVar3 = (FOutputDevice *)(*(int *)(_Names + *(int *)(this + 0x20) * 4) + 0xc);
LAB_10172c02:
  FOutputDevice::Logf(pFVar3,(ushort *)param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103c1f FRotator::Reduce

/* public: class FRotator __thiscall FRotator::Reduce(void)const  */

void __thiscall FRotator::Reduce(FRotator *this)

{
  uint uVar1;
  uint *in_stack_00000004;
  
                    /* 0x3c1f  1755  ?Reduce@FRotator@@QBE?AV1@XZ */
  *in_stack_00000004 = *(uint *)this & 0xfffc;
  uVar1 = *(uint *)(this + 8);
  in_stack_00000004[1] = *(uint *)(this + 4) & 0xfffc;
  in_stack_00000004[2] = uVar1 & 0xfffc;
  return;
}


// ==== 10103c29 FRotator::operator*=

/* public: class FRotator __thiscall FRotator::operator*=(float) */

void __thiscall FRotator::operator*=(FRotator *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* 0x3c29  670  ??XFRotator@@QAE?AV0@M@Z */
  uVar2 = FUN_1017b700();
  *(undefined4 *)this = uVar2;
  uVar2 = FUN_1017b700();
  *(undefined4 *)(this + 4) = uVar2;
  uVar2 = FUN_1017b700();
  *(undefined4 *)(this + 8) = uVar2;
  uVar2 = *(undefined4 *)(this + 4);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 4) = uVar2;
  *(undefined4 *)((int)param_1 + 8) = uVar1;
  return;
}


// ==== 10103c2e FName::FName

/* public: __thiscall FName::FName(void) */

FName * __thiscall FName::FName(FName *this)

{
                    /* 0x3c2e  85  ??0FName@@QAE@XZ */
  return this;
}


// ==== 10103c33 thunk_FUN_101286d0 thunk -> 101286d0

// ==== 10103c38 FVector::operator=

/* public: class FVector & __thiscall FVector::operator=(class FVector const &) */

FVector * __thiscall FVector::operator=(FVector *this,FVector *param_1)

{
                    /* 0x3c38  503  ??4FVector@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 10103c3d operator<<

/* class FArchive & __cdecl operator<<(class FArchive &,struct FLabelEntry &) */

FArchive * __cdecl operator<<(FArchive *param_1,FLabelEntry *param_2)

{
                    /* 0x3c3d  547  ??6@YAAAVFArchive@@AAV0@AAUFLabelEntry@@@Z */
  (**(code **)(*(int *)param_1 + 0x1c))(param_2);
  (**(code **)(*(int *)param_1 + 4))(param_2 + 4,4);
  return param_1;
}


// ==== 10103c42 UDelegateProperty::ExportTextItem

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall UDelegateProperty::ExportTextItem(unsigned short *,unsigned char
   *,unsigned char *,int)const  */

void __thiscall
UDelegateProperty::ExportTextItem
          (UDelegateProperty *this,ushort *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3c42  980  ?ExportTextItem@UDelegateProperty@@UBEXPAGPAE1H@Z */
  puStack_c = &LAB_101be1a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  appSprintf(param_1,(ushort *)L"%s.%s",
             *(int *)(_Names + *(int *)(*(int *)param_2 + 0x20) * 4) + 0xc,
             *(int *)(_Names + *(int *)(param_2 + 4) * 4) + 0xc);
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103c47 appStricmp

/* int __cdecl appStricmp(unsigned short const *,unsigned short const *) */

int __cdecl appStricmp(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* 0x3c47  2110  ?appStricmp@@YAHPBG0@Z */
  if (DAT_1033e2bc == 0) {
    if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
      puVar3 = (undefined4 *)FUN_10183cab();
      *puVar3 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      iVar4 = 0x7fffffff;
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
      } while ((uVar1 != 0) && (uVar1 == uVar2));
      iVar4 = (uint)uVar1 - (uint)uVar2;
    }
  }
  else {
    iVar4 = __wcsicmp_l((wchar_t *)param_1,(wchar_t *)param_2,(_locale_t)0x0);
  }
  return iVar4;
}


// ==== 10103c4c UStructProperty::UStructProperty

/* public: __thiscall UStructProperty::UStructProperty(enum ECppProperty,int,unsigned short const
   *,unsigned long,class UStruct *) */

UStructProperty * __thiscall
UStructProperty::UStructProperty
          (UStructProperty *this,ECppProperty param_1,int param_2,ushort *param_3,ulong param_4,
          UStruct *param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3c4c  280  ??0UStructProperty@@QAE@W4ECppProperty@@HPBGKPAVUStruct@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this,0,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  *(UStruct **)(this + 0x78) = param_5;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103c51 FStateFrame::Describe

/* public: unsigned short const * __thiscall FStateFrame::Describe(void) */

ushort * __thiscall FStateFrame::Describe(FStateFrame *this)

{
  ushort *puVar1;
  
                    /* 0x3c51  913  ?Describe@FStateFrame@@QAEPBGXZ */
  if (*(UObject **)(this + 4) != (UObject *)0x0) {
    puVar1 = UObject::GetFullName(*(UObject **)(this + 4),(ushort *)0x0);
    return puVar1;
  }
  return (ushort *)L"None";
}


// ==== 10103c5b FMemCache::Flush

/* public: void __thiscall FMemCache::Flush(unsigned __int64,unsigned long,int) */

void __thiscall FMemCache::Flush(FMemCache *this,__uint64 param_1,ulong param_2,int param_3)

{
  FCacheItem *pFVar1;
  void *pvVar2;
  FCacheItem *pFVar3;
  uint uVar4;
  int *piVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pvVar2 = ExceptionList;
                    /* 0x3c5b  1019  ?Flush@FMemCache@@QAEX_KKH@Z */
  puStack_c = &LAB_101b9cd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  if (*(int *)this != 0) {
    if (param_1 == 0) {
      param_2 = 0;
    }
    else if (param_2 == 0xffffffff) {
      pFVar3 = (FCacheItem *)
               (this + ((((uint)param_1 >> 0xc ^ (uint)param_1) >> 0xc ^ (uint)param_1) & 0x3fff) *
                       4 + 0x24);
      while( true ) {
        if (*(int *)pFVar3 == 0) {
          ExceptionList = pvVar2;
          return;
        }
        pFVar1 = *(FCacheItem **)pFVar3;
        if ((*(uint *)pFVar1 == (uint)param_1) && (*(int *)(pFVar1 + 4) == param_1._4_4_)) break;
        pFVar3 = pFVar1 + 0x1c;
      }
      *(int *)pFVar3 = *(int *)(pFVar1 + 0x1c);
      FlushItem(this,pFVar1,param_3);
      ExceptionList = pvStack_10;
      return;
    }
    pFVar3 = *(FCacheItem **)(this + 0x18);
    while (pFVar3 != (FCacheItem *)0x0) {
      uVar4 = *(uint *)pFVar3;
      if ((uVar4 == 0 && *(int *)(pFVar3 + 4) == 0) ||
         ((param_2 & uVar4) != (param_2 & (uint)param_1))) {
        pFVar3 = *(FCacheItem **)(pFVar3 + 0x14);
      }
      else {
        if (*(int *)(pFVar3 + 0x10) < 0x1000000) {
          Unhash(this,CONCAT44(*(undefined4 *)(pFVar3 + 4),uVar4));
        }
        pFVar3 = FlushItem(this,pFVar3,param_3);
      }
    }
    if ((param_2 == 0) && (param_3 == 0)) {
      if (*(int *)(this + 0x18) == 0) {
        appFailAssert("CacheItems!=NULL",".\\UnCache.cpp",0x1a3);
      }
      uVar4 = 0;
      for (piVar5 = *(int **)(this + 0x18); piVar5 != *(int **)(this + 0x1c);
          piVar5 = (int *)piVar5[5]) {
        if (*piVar5 != 0 || piVar5[1] != 0) {
          appFailAssert("TestItem->Id==0",".\\UnCache.cpp",0x1a7);
        }
        if (*(byte *)((int)piVar5 + 0xe) != uVar4) {
          appFailAssert("TestItem->Segment==ExpectSegment++",".\\UnCache.cpp",0x1a8);
        }
        uVar4 = uVar4 + 1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103c60 FBox::GetExtrema

/* public: class FVector const & __thiscall FBox::GetExtrema(int)const  */

FVector * __thiscall FBox::GetExtrema(FBox *this,int param_1)

{
                    /* 0x3c60  1318  ?GetExtrema@FBox@@QBEABVFVector@@H@Z */
  return (FVector *)(this + param_1 * 0xc);
}


// ==== 10103c65 UClassProperty::operator_new

/* public: static void * __cdecl UClassProperty::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
UClassProperty::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x3c65  361  ??2UClassProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject(&PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return pUVar1;
}


// ==== 10103c6a FNullOutError::FNullOutError

/* public: __thiscall FNullOutError::FNullOutError(class FNullOutError const &) */

void __thiscall FNullOutError::FNullOutError(FNullOutError *this,FNullOutError *param_1)

{
                    /* 0x3c6a  90  ??0FNullOutError@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 10103c6f thunk_FUN_10109320 thunk -> 10109320

// ==== 10103c74 thunk_FUN_10172930 thunk -> 10172930

// ==== 10103c79 TArray<unsigned_short>::Remove

/* public: void __thiscall TArray<unsigned short>::Remove(int,int) */

void __thiscall TArray<unsigned_short>::Remove(TArray<unsigned_short> *this,int param_1,int param_2)

{
                    /* 0x3c79  1763  ?Remove@?$TArray@G@@QAEXHH@Z */
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(this + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(this + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove((FArray *)this,param_1,param_2,2);
  return;
}


// ==== 10103c7e thunk_FUN_10139700 thunk -> 10139700

// ==== 10103c83 FVector::FindBestAxisVectors

/* public: void __thiscall FVector::FindBestAxisVectors(class FVector &,class FVector &) */

void __thiscall FVector::FindBestAxisVectors(FVector *this,FVector *param_1,FVector *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float10 fVar12;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3c83  1000  ?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */
  puStack_c = &LAB_101bbda0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff90;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  fVar12 = (float10)thunk_FUN_101147e0(*(undefined4 *)this);
  fStack_1c = (float)fVar12;
  fVar12 = (float10)thunk_FUN_101147e0(*(undefined4 *)(this + 4));
  fStack_20 = (float)fVar12;
  fVar12 = (float10)thunk_FUN_101147e0(*(undefined4 *)(this + 8));
  fStack_18 = (float)fVar12;
  if ((fStack_18 <= fStack_1c) || (fStack_18 <= fStack_20)) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0x3f800000;
    uVar9 = 0;
    uVar11 = 0x3f800000;
  }
  else {
    uStack_34 = 0x3f800000;
    uStack_30 = 0;
    uStack_2c = 0;
    uVar9 = 0x3f800000;
    uVar11 = 0;
  }
  *(undefined4 *)param_1 = uVar9;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = uVar11;
  fVar1 = *(float *)(this + 8) * *(float *)(param_1 + 8) +
          *(float *)(param_1 + 4) * *(float *)(this + 4) + *(float *)param_1 * *(float *)this;
  fStack_58 = *(float *)param_1 - fVar1 * *(float *)this;
  fStack_54 = *(float *)(param_1 + 4) - *(float *)(this + 4) * fVar1;
  fStack_50 = *(float *)(param_1 + 8) - fVar1 * *(float *)(this + 8);
  fStack_20 = fStack_54;
  fStack_1c = fStack_50;
  puVar10 = (undefined4 *)SafeNormal((FVector *)&fStack_58);
  *(undefined4 *)param_1 = *puVar10;
  *(undefined4 *)(param_1 + 4) = puVar10[1];
  *(undefined4 *)(param_1 + 8) = puVar10[2];
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)param_1;
  fVar5 = *(float *)(this + 4);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)this;
  *(float *)param_2 =
       *(float *)(param_1 + 4) * *(float *)(this + 8) -
       *(float *)(this + 4) * *(float *)(param_1 + 8);
  *(float *)(param_2 + 4) = fVar1 * fVar2 - fVar3 * fVar4;
  *(float *)(param_2 + 8) = fVar5 * fVar6 - fVar7 * fVar8;
  ExceptionList = pvStack_10;
  return;
}


// ==== 10103c8d UDelegateProperty::UDelegateProperty

/* public: __thiscall UDelegateProperty::UDelegateProperty(void) */

UDelegateProperty * __thiscall UDelegateProperty::UDelegateProperty(UDelegateProperty *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x3c8d  206  ??0UDelegateProperty@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  UProperty::UProperty((UProperty *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 10103c92 FString::operator!=

/* public: int __thiscall FString::operator!=(class FString const &)const  */

int __thiscall FString::operator!=(FString *this,FString *param_1)

{
  int iVar1;
  ushort *puVar2;
  
                    /* 0x3c92  587  ??9FString@@QBEHABV0@@Z */
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = &DAT_101cdd44;
  }
  else {
    puVar2 = *(ushort **)param_1;
  }
  if (*(int *)(this + 4) != 0) {
    iVar1 = appStricmp(*(ushort **)this,puVar2);
    return (uint)(iVar1 != 0);
  }
  iVar1 = appStricmp(&DAT_101cdd44,puVar2);
  return (uint)(iVar1 != 0);
}


// ==== 10103c97 FMalloc::GetCurrentAllocs

/* public: virtual int __thiscall FMalloc::GetCurrentAllocs(void) */

int __thiscall FMalloc::GetCurrentAllocs(FMalloc *this)

{
                    /* 0x3c97  1294  ?GetCurrentAllocs@FMalloc@@UAEHXZ */
  return 0;
}


// ==== 10103ca1 UObject::execObjectToBool

/* public: void __thiscall UObject::execObjectToBool(struct FFrame &,void * const) */

void __thiscall UObject::execObjectToBool(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x3ca1  2339  ?execObjectToBool@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (uint)(param_1 != (FFrame *)0x0);
  return;
}


// ==== 10103ca6 UDelegateProperty::ImportText

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual unsigned short const * __thiscall UDelegateProperty::ImportText(unsigned short
   const *,unsigned char *,int)const  */

ushort * __thiscall
UDelegateProperty::ImportText(UDelegateProperty *this,ushort *param_1,uchar *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  UDelegateProperty *pUVar3;
  UObject *pUVar4;
  int iVar5;
  undefined4 uVar6;
  uchar *puVar7;
  uchar **ppuVar8;
  int iVar9;
  ushort auStack_148 [54];
  undefined2 auStack_dc [10];
  ushort auStack_c8 [68];
  int iStack_40;
  int iStack_38;
  int iStack_30;
  UDelegateProperty *pUStack_28;
  int iStack_24;
  int iStack_20;
  UObject *pUStack_1c;
  uchar *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ca6  1446  ?ImportText@UDelegateProperty@@UBEPBGPBGPAEH@Z */
  puStack_c = &LAB_101be2d0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffeac;
  iVar9 = 0;
  uStack_8 = 0;
  iStack_20 = 0;
  pUStack_28 = this;
  for (; (uVar1 = *param_1, uVar1 != 0 && (uVar1 != 0x2e)); param_1 = param_1 + 1) {
    auStack_148[iStack_20] = uVar1;
    iStack_20 = iStack_20 + 1;
  }
  auStack_148[iStack_20] = 0;
  if (*param_1 == 0) {
    auStack_c8[0] = 0;
  }
  else {
    iStack_20 = 0;
    while( true ) {
      param_1 = param_1 + 1;
      if (*param_1 == 0) break;
      auStack_c8[iStack_20] = *param_1;
      iStack_20 = iStack_20 + 1;
    }
    auStack_c8[iStack_20] = 0;
  }
  ExceptionList = &pvStack_10;
  pUVar4 = UObject::StaticFindObject
                     (&UObject::PrivateStaticClass,(UObject *)0xffffffff,auStack_148,0);
  iStack_24 = 0;
  if (pUVar4 != (UObject *)0x0) {
    pUStack_1c = pUVar4;
    iVar9 = thunk_FUN_10149630(pUVar4);
    if (iVar9 == 0) {
      iVar9 = *(int *)(pUVar4 + 0x24);
    }
    iVar9 = thunk_FUN_10174d70(iVar9,auStack_c8);
    pUVar3 = pUStack_28;
    if (iVar9 != 0) {
      iStack_24 = iVar9;
      appStrcpy(auStack_c8,(ushort *)(*(int *)(_Names + *(int *)(pUStack_28 + 0x20) * 4) + 0x10));
      iVar5 = appStrlen(auStack_c8);
      if (iVar5 < 0xb) {
        appFailAssert("appStrlen(FuncName) > 10",".\\UnProp.cpp",0x23f);
      }
      iVar5 = appStrlen(auStack_c8);
      auStack_dc[iVar5] = 0;
      uVar6 = thunk_FUN_10174e70(*(undefined4 *)(pUVar3 + 0x18),auStack_c8);
      puVar7 = (uchar *)thunk_FUN_10174d70(uVar6);
      puStack_18 = puVar7;
      if (puVar7 == (uchar *)0x0) {
        appFailAssert("Delegate",".\\UnProp.cpp",0x242);
      }
      if (*(uchar *)(iVar9 + 0x95) == puVar7[0x95]) {
        iStack_40 = 0;
        thunk_FUN_10119210(iVar9);
        thunk_FUN_10119210(puVar7);
        iVar5 = 0;
        while (iVar2 = iStack_38, pUVar4 = pUStack_1c, iVar5 < (int)(uint)puVar7[0x95]) {
          if ((*(int *)(iStack_30 + 0x24) != *(int *)(iStack_38 + 0x24)) ||
             (((*(uint *)(iStack_38 + 0x48) ^ *(uint *)(iStack_30 + 0x48)) & 0x100) != 0)) {
            iVar9 = 0;
            break;
          }
          iStack_30 = *(int *)(iStack_30 + 0x38);
          thunk_FUN_10114340();
          iStack_38 = *(int *)(iVar2 + 0x38);
          thunk_FUN_10114340();
          iVar5 = iVar5 + 1;
          puVar7 = puStack_18;
          iStack_40 = iVar5;
        }
      }
      else {
        iVar9 = 0;
        pUVar4 = pUStack_1c;
      }
    }
  }
  *(uint *)param_2 = -(uint)(iVar9 != 0) & (uint)pUVar4;
  if (iVar9 == 0) {
    puStack_18 = (uchar *)0x0;
    ppuVar8 = &puStack_18;
  }
  else {
    ppuVar8 = &param_2;
  }
  *(uchar **)(param_2 + 4) = *ppuVar8;
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10103cab UObject::GetFullName

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: unsigned short const * __thiscall UObject::GetFullName(unsigned short *)const  */

ushort * __thiscall UObject::GetFullName(UObject *this,ushort *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3cab  1326  ?GetFullName@UObject@@QBEPBGPAG@Z */
  puStack_c = &LAB_101bcbb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (ushort *)0x0) {
    ExceptionList = &pvStack_10;
    param_1 = appStaticString1024();
  }
  if (this == (UObject *)0x0) {
    appStrcpy(param_1,(ushort *)L"None");
  }
  else {
    appSprintf(param_1,(ushort *)&DAT_101d93e8,
               *(int *)(_Names + *(int *)(*(int *)(this + 0x24) + 0x20) * 4) + 0xc);
    iVar1 = appStrlen(param_1);
    GetPathName(this,(UObject *)0x0,param_1 + iVar1);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10103cb0 thunk_FUN_1015f980 thunk -> 1015f980

// ==== 10103cb5 UObject::execBoolToFloat

/* public: void __thiscall UObject::execBoolToFloat(struct FFrame &,void * const) */

void __thiscall UObject::execBoolToFloat(UObject *this,FFrame *param_1,void *param_2)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 uStack_4;
  
                    /* 0x3cb5  2159  ?execBoolToFloat@UObject@@QAEXAAUFFrame@@QAX@Z */
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *unaff_retaddr = (float)((uint)param_1 & 1);
  return;
}


// ==== 10103cba FVector::RotateAngleAxis

/* public: class FVector __thiscall FVector::RotateAngleAxis(int,class FVector const &)const  */

void __thiscall FVector::RotateAngleAxis(FVector *this,int param_1,FVector *param_2)

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
  float *in_stack_0000000c;
  
                    /* 0x3cba  1777  ?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */
  fVar1 = *(float *)(&DAT_1023ffd4 + ((int)param_2 >> 2 & 0x3fffU) * 4);
  fVar2 = *(float *)(&DAT_1023ffd4 + ((int)(param_2 + 0x4000) >> 2 & 0x3fffU) * 4);
  fVar3 = in_stack_0000000c[2];
  fVar4 = in_stack_0000000c[1];
  fVar5 = *in_stack_0000000c;
  fVar6 = in_stack_0000000c[1];
  fVar7 = in_stack_0000000c[2];
  fVar10 = 1.0 - fVar2;
  fVar9 = fVar10 * in_stack_0000000c[1] * *in_stack_0000000c;
  fVar8 = fVar10 * in_stack_0000000c[2] * *in_stack_0000000c;
  *(float *)param_1 =
       (fVar6 * fVar1 + fVar8) * *(float *)(this + 8) +
       (fVar9 - fVar1 * fVar7) * *(float *)(this + 4) +
       (*in_stack_0000000c * *in_stack_0000000c * fVar10 + fVar2) * *(float *)this;
  fVar3 = fVar10 * fVar3 * fVar4;
  *(float *)(param_1 + 4) =
       (fVar3 - fVar1 * fVar5) * *(float *)(this + 8) +
       (in_stack_0000000c[1] * in_stack_0000000c[1] * fVar10 + fVar2) * *(float *)(this + 4) +
       *(float *)this * (fVar1 * fVar7 + fVar9);
  *(float *)(param_1 + 8) =
       (fVar1 * fVar5 + fVar3) * *(float *)(this + 4) + *(float *)this * (fVar8 - fVar6 * fVar1) +
       *(float *)(this + 8) * (in_stack_0000000c[2] * in_stack_0000000c[2] * fVar10 + fVar2);
  return;
}


// ==== 10103cbf UStrProperty::operator=

/* public: class UStrProperty & __thiscall UStrProperty::operator=(class UStrProperty const &) */

UStrProperty * __thiscall UStrProperty::operator=(UStrProperty *this,UStrProperty *param_1)

{
                    /* 0x3cbf  540  ??4UStrProperty@@QAEAAV0@ABV0@@Z */
  UProperty::operator=((UProperty *)this,(UProperty *)param_1);
  return this;
}


// ==== 10103cc9 FName::operator!=

/* public: int __thiscall FName::operator!=(class FName const &)const  */

int __thiscall FName::operator!=(FName *this,FName *param_1)

{
                    /* 0x3cc9  580  ??9FName@@QBEHABV0@@Z */
  return (uint)(*(int *)this != *(int *)param_1);
}


// ==== 10103cce UObject::execDelegateProperty

/* public: void __thiscall UObject::execDelegateProperty(struct FFrame &,void * const) */

void __thiscall UObject::execDelegateProperty(UObject *this,FFrame *param_1,void *param_2)

{
  int iVar1;
  
                    /* 0x3cce  2185  ?execDelegateProperty@UObject@@QAEXAAUFFrame@@QAX@Z */
  iVar1 = **(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  *(int *)((int)param_2 + 4) = iVar1;
  *(uint *)param_2 = -(uint)(iVar1 != 0) & (uint)this;
  return;
}


// ==== 10103cd3 UEnum::operator_new

/* public: static void * __cdecl UEnum::operator new(unsigned int,enum EInternal *) */

void * __cdecl UEnum::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x3cd3  370  ??2UEnum@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 10103cd8 LocalizeQuery

/* unsigned short const * __cdecl LocalizeQuery(char const *,unsigned short const *,unsigned short
   const *) */

ushort * __cdecl LocalizeQuery(char *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
                    /* 0x3cd8  1586  ?LocalizeQuery@@YAPBGPBDPBG1@Z */
  puVar1 = appFromAnsi(param_1,(ushort *)0x0);
  puVar1 = Localize((ushort *)L"Query",puVar1,param_2,param_3,0);
  return puVar1;
}


// ==== 10103cdd thunk_FUN_101493f0 thunk -> 101493f0

// ==== 10103ce2 L2ThreadBase::~L2ThreadBase

/* public: virtual __thiscall L2ThreadBase::~L2ThreadBase(void) */

void __thiscall L2ThreadBase::~L2ThreadBase(L2ThreadBase *this)

{
                    /* 0x3ce2  315  ??1L2ThreadBase@@UAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


