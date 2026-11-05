// ==== 10001000 FUN_10001000

void __cdecl FUN_10001000(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 10001020 AAmbientCreatureFlock::StaticClass

/* public: static class UClass * __cdecl AAmbientCreatureFlock::StaticClass(void) */

UClass * __cdecl AAmbientCreatureFlock::StaticClass(void)

{
                    /* 0x1020  36  ?StaticClass@AAmbientCreatureFlock@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10001030 AAmbientCreatureFlock::operator_new

/* public: static void * __cdecl AAmbientCreatureFlock::operator new(unsigned int,class UObject
   *,class FName,unsigned long) */

void * __cdecl
AAmbientCreatureFlock::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1030  9  ??2AAmbientCreatureFlock@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 10001060 AAmbientCreature::StaticClass

/* public: static class UClass * __cdecl AAmbientCreature::StaticClass(void) */

UClass * __cdecl AAmbientCreature::StaticClass(void)

{
                    /* 0x1060  35  ?StaticClass@AAmbientCreature@@SAPAVUClass@@XZ */
  return &PrivateStaticClass;
}


// ==== 10001070 AAmbientCreature::operator_new

/* public: static void * __cdecl AAmbientCreature::operator new(unsigned int,class UObject *,class
   FName,unsigned long) */

void * __cdecl
AAmbientCreature::operator_new
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  
                    /* 0x1070  7  ??2AAmbientCreature@@SAPAXIPAVUObject@@VFName@@K@Z */
  pUVar1 = UObject::StaticAllocateObject
                     (&PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0)
  ;
  return pUVar1;
}


// ==== 100010a0 AAmbientCreature::operator_new

/* public: static void * __cdecl AAmbientCreature::operator new(unsigned int,enum EInternal *) */

void * __cdecl AAmbientCreature::operator_new(uint param_1,EInternal *param_2)

{
                    /* 0x10a0  8  ??2AAmbientCreature@@SAPAXIPAW4EInternal@@@Z
                       0x10a0  10  ??2AAmbientCreatureFlock@@SAPAXIPAW4EInternal@@@Z */
  return param_2;
}


// ==== 100010b0 AAmbientCreature::~AAmbientCreature

/* public: virtual __thiscall AAmbientCreature::~AAmbientCreature(void) */

void __thiscall AAmbientCreature::~AAmbientCreature(AAmbientCreature *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10b0  5  ??1AAmbientCreature@@UAE@XZ */
  puStack_8 = &LAB_10010429;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 0;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = 0xffffffff;
  APawn::~APawn((APawn *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10001110 AAmbientCreature::InternalConstructor

/* public: static void __cdecl AAmbientCreature::InternalConstructor(void *) */

void __cdecl AAmbientCreature::InternalConstructor(void *param_1)

{
                    /* 0x1110  16  ?InternalConstructor@AAmbientCreature@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AAmbientCreature(param_1);
    return;
  }
  return;
}


// ==== 10001120 AAmbientCreature::AAmbientCreature

/* public: __thiscall AAmbientCreature::AAmbientCreature(class AAmbientCreature const &) */

AAmbientCreature * __thiscall
AAmbientCreature::AAmbientCreature(AAmbientCreature *this,AAmbientCreature *param_1)

{
                    /* 0x1120  1  ??0AAmbientCreature@@QAE@ABV0@@Z */
  APawn::APawn((APawn *)this,(APawn *)param_1);
  *(undefined ***)this = vftable;
  this[0x18d8] = param_1[0x18d8];
  *(undefined4 *)(this + 0x18dc) = *(undefined4 *)(param_1 + 0x18dc);
  *(undefined4 *)(this + 0x18e0) = *(undefined4 *)(param_1 + 0x18e0);
  *(uint *)(this + 0x18e4) =
       *(uint *)(this + 0x18e4) ^ (*(uint *)(param_1 + 0x18e4) ^ *(uint *)(this + 0x18e4)) & 1;
  *(undefined4 *)(this + 0x18e8) = *(undefined4 *)(param_1 + 0x18e8);
  *(undefined4 *)(this + 0x18ec) = *(undefined4 *)(param_1 + 0x18ec);
  *(undefined4 *)(this + 0x18f0) = *(undefined4 *)(param_1 + 0x18f0);
  *(undefined4 *)(this + 0x18f4) = *(undefined4 *)(param_1 + 0x18f4);
  *(undefined4 *)(this + 0x18f8) = *(undefined4 *)(param_1 + 0x18f8);
  *(undefined4 *)(this + 0x18fc) = *(undefined4 *)(param_1 + 0x18fc);
  *(undefined4 *)(this + 0x1900) = *(undefined4 *)(param_1 + 0x1900);
  *(undefined4 *)(this + 0x1904) = *(undefined4 *)(param_1 + 0x1904);
  *(undefined4 *)(this + 0x1908) = *(undefined4 *)(param_1 + 0x1908);
  *(undefined4 *)(this + 0x190c) = *(undefined4 *)(param_1 + 0x190c);
  *(undefined4 *)(this + 0x1910) = *(undefined4 *)(param_1 + 0x1910);
  *(undefined4 *)(this + 0x1914) = *(undefined4 *)(param_1 + 0x1914);
  *(undefined4 *)(this + 0x1918) = *(undefined4 *)(param_1 + 0x1918);
  *(undefined4 *)(this + 0x191c) = *(undefined4 *)(param_1 + 0x191c);
  *(undefined4 *)(this + 0x1920) = *(undefined4 *)(param_1 + 0x1920);
  *(undefined4 *)(this + 0x1924) = *(undefined4 *)(param_1 + 0x1924);
  *(undefined4 *)(this + 0x1928) = *(undefined4 *)(param_1 + 0x1928);
  *(uint *)(this + 0x192c) =
       *(uint *)(this + 0x192c) ^ (*(uint *)(this + 0x192c) ^ *(uint *)(param_1 + 0x192c)) & 1;
  *(uint *)(this + 0x192c) =
       (*(uint *)(param_1 + 0x192c) ^ *(uint *)(this + 0x192c)) & 2 ^ *(uint *)(this + 0x192c);
  *(undefined4 *)(this + 0x1930) = *(undefined4 *)(param_1 + 0x1930);
  *(undefined4 *)(this + 0x1934) = *(undefined4 *)(param_1 + 0x1934);
  *(undefined4 *)(this + 0x1938) = *(undefined4 *)(param_1 + 0x1938);
  *(undefined4 *)(this + 0x193c) = *(undefined4 *)(param_1 + 0x193c);
  *(undefined4 *)(this + 0x1940) = *(undefined4 *)(param_1 + 0x1940);
  *(undefined4 *)(this + 0x1944) = *(undefined4 *)(param_1 + 0x1944);
  *(undefined4 *)(this + 0x1948) = *(undefined4 *)(param_1 + 0x1948);
  *(uint *)(this + 0x194c) =
       *(uint *)(this + 0x194c) ^ (*(uint *)(param_1 + 0x194c) ^ *(uint *)(this + 0x194c)) & 1;
  *(undefined4 *)(this + 0x1950) = *(undefined4 *)(param_1 + 0x1950);
  return this;
}


// ==== 100012f0 AAmbientCreature::operator=

/* public: class AAmbientCreature & __thiscall AAmbientCreature::operator=(class AAmbientCreature &)
    */

AAmbientCreature * __thiscall
AAmbientCreature::operator=(AAmbientCreature *this,AAmbientCreature *param_1)

{
                    /* 0x12f0  11  ??4AAmbientCreature@@QAEAAV0@AAV0@@Z */
  APawn::operator=((APawn *)this,(APawn *)param_1);
  this[0x18d8] = param_1[0x18d8];
  *(undefined4 *)(this + 0x18dc) = *(undefined4 *)(param_1 + 0x18dc);
  *(undefined4 *)(this + 0x18e0) = *(undefined4 *)(param_1 + 0x18e0);
  *(uint *)(this + 0x18e4) =
       *(uint *)(this + 0x18e4) ^ (*(uint *)(param_1 + 0x18e4) ^ *(uint *)(this + 0x18e4)) & 1;
  *(undefined4 *)(this + 0x18e8) = *(undefined4 *)(param_1 + 0x18e8);
  *(undefined4 *)(this + 0x18ec) = *(undefined4 *)(param_1 + 0x18ec);
  *(undefined4 *)(this + 0x18f0) = *(undefined4 *)(param_1 + 0x18f0);
  *(undefined4 *)(this + 0x18f4) = *(undefined4 *)(param_1 + 0x18f4);
  *(undefined4 *)(this + 0x18f8) = *(undefined4 *)(param_1 + 0x18f8);
  *(undefined4 *)(this + 0x18fc) = *(undefined4 *)(param_1 + 0x18fc);
  *(undefined4 *)(this + 0x1900) = *(undefined4 *)(param_1 + 0x1900);
  *(undefined4 *)(this + 0x1904) = *(undefined4 *)(param_1 + 0x1904);
  *(undefined4 *)(this + 0x1908) = *(undefined4 *)(param_1 + 0x1908);
  *(undefined4 *)(this + 0x190c) = *(undefined4 *)(param_1 + 0x190c);
  *(undefined4 *)(this + 0x1910) = *(undefined4 *)(param_1 + 0x1910);
  *(undefined4 *)(this + 0x1914) = *(undefined4 *)(param_1 + 0x1914);
  *(undefined4 *)(this + 0x1918) = *(undefined4 *)(param_1 + 0x1918);
  *(undefined4 *)(this + 0x191c) = *(undefined4 *)(param_1 + 0x191c);
  *(undefined4 *)(this + 0x1920) = *(undefined4 *)(param_1 + 0x1920);
  *(undefined4 *)(this + 0x1924) = *(undefined4 *)(param_1 + 0x1924);
  *(undefined4 *)(this + 0x1928) = *(undefined4 *)(param_1 + 0x1928);
  *(uint *)(this + 0x192c) =
       *(uint *)(this + 0x192c) ^ (*(uint *)(this + 0x192c) ^ *(uint *)(param_1 + 0x192c)) & 1;
  *(uint *)(this + 0x192c) =
       (*(uint *)(param_1 + 0x192c) ^ *(uint *)(this + 0x192c)) & 2 ^ *(uint *)(this + 0x192c);
  *(undefined4 *)(this + 0x1930) = *(undefined4 *)(param_1 + 0x1930);
  *(undefined4 *)(this + 0x1934) = *(undefined4 *)(param_1 + 0x1934);
  *(undefined4 *)(this + 0x1938) = *(undefined4 *)(param_1 + 0x1938);
  *(undefined4 *)(this + 0x193c) = *(undefined4 *)(param_1 + 0x193c);
  *(undefined4 *)(this + 0x1940) = *(undefined4 *)(param_1 + 0x1940);
  *(undefined4 *)(this + 0x1944) = *(undefined4 *)(param_1 + 0x1944);
  *(undefined4 *)(this + 0x1948) = *(undefined4 *)(param_1 + 0x1948);
  *(uint *)(this + 0x194c) =
       *(uint *)(this + 0x194c) ^ (*(uint *)(param_1 + 0x194c) ^ *(uint *)(this + 0x194c)) & 1;
  *(undefined4 *)(this + 0x1950) = *(undefined4 *)(param_1 + 0x1950);
  return this;
}


// ==== 100014b0 FUN_100014b0

AAmbientCreature * __thiscall FUN_100014b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x1954,*(int *)((int)this + -4),AAmbientCreature::~AAmbientCreature);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AAmbientCreature *)((int)this + -4));
    }
    return (AAmbientCreature *)((int)this + -4);
  }
  AAmbientCreature::~AAmbientCreature(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x1954);
  }
  return this;
}


// ==== 10001520 FUN_10001520

int __cdecl FUN_10001520(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10001540 AAmbientCreature::eventAmbientCreatureMoveTo

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AAmbientCreature::eventAmbientCreatureMoveTo(class FVector) */

void __thiscall
AAmbientCreature::eventAmbientCreatureMoveTo
          (AAmbientCreature *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  UFunction *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1540  39  ?eventAmbientCreatureMoveTo@AAmbientCreature@@QAEXVFVector@@@Z */
  iVar1 = *(int *)this;
  uVar4 = 0;
  local_c = param_2;
  puVar3 = &local_c;
  local_8 = param_3;
  local_4 = param_4;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,_LINEAGECREATURE_AmbientCreatureMoveTo,0);
  (**(code **)(iVar1 + 0x10))(pUVar2,puVar3,uVar4);
  return;
}


// ==== 10001590 FUN_10001590

FArray * __thiscall FUN_10001590(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10010459;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(this,param_1[1],4);
  iVar2 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)FUN_10001520(4,this);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 10001620 FUN_10001620

FArray * __thiscall FUN_10001620(void *this,FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (this != param_1) {
    FArray::Empty(this,4,*(int *)(param_1 + 4));
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        puVar1 = (undefined4 *)FUN_10001520(4,this);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar2 * 4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    return this;
  }
  return this;
}


// ==== 10001670 FUN_10001670

void __fastcall FUN_10001670(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10010489;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  if (iVar1 < 0) {
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


// ==== 10001710 AAmbientCreatureFlock::operator=

/* public: class AAmbientCreatureFlock & __thiscall AAmbientCreatureFlock::operator=(class
   AAmbientCreatureFlock const &) */

AAmbientCreatureFlock * __thiscall
AAmbientCreatureFlock::operator=(AAmbientCreatureFlock *this,AAmbientCreatureFlock *param_1)

{
                    /* 0x1710  12  ??4AAmbientCreatureFlock@@QAEAAV0@ABV0@@Z */
  AEnvCreatureManagerInfo::operator=
            ((AEnvCreatureManagerInfo *)this,(AEnvCreatureManagerInfo *)param_1);
  FUN_10001620(this + 0x3bc,(FArray *)(param_1 + 0x3bc));
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(uint *)(this + 0x3dc) =
       *(uint *)(this + 0x3dc) ^ (*(uint *)(param_1 + 0x3dc) ^ *(uint *)(this + 0x3dc)) & 1;
  *(undefined4 *)(this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(this + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(this + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(this + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(this + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
  this[0x3f8] = param_1[0x3f8];
  return this;
}


// ==== 100017e0 thunk_FUN_10001670 thunk -> 10001670

// ==== 100017f0 AAmbientCreatureFlock::~AAmbientCreatureFlock

/* public: virtual __thiscall AAmbientCreatureFlock::~AAmbientCreatureFlock(void) */

void __thiscall AAmbientCreatureFlock::~AAmbientCreatureFlock(AAmbientCreatureFlock *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x17f0  6  ??1AAmbientCreatureFlock@@UAE@XZ */
  puStack_8 = &LAB_100104c7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = vftable;
  local_4 = 1;
  UObject::ConditionalDestroy((UObject *)this);
  local_4 = local_4 & 0xffffff00;
  FUN_10001670((FArray *)(this + 0x3bc));
  local_4 = 0xffffffff;
  AEnvCreatureManagerInfo::~AEnvCreatureManagerInfo((AEnvCreatureManagerInfo *)this);
  ExceptionList = local_c;
  return;
}


// ==== 10001860 AAmbientCreatureFlock::AAmbientCreatureFlock

/* public: __thiscall AAmbientCreatureFlock::AAmbientCreatureFlock(void) */

AAmbientCreatureFlock * __thiscall
AAmbientCreatureFlock::AAmbientCreatureFlock(AAmbientCreatureFlock *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1860  4  ??0AAmbientCreatureFlock@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100104f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AEnvCreatureManagerInfo::AEnvCreatureManagerInfo((AEnvCreatureManagerInfo *)this);
  local_4 = 0;
  *(undefined ***)this = vftable;
  FArray::FArray((FArray *)(this + 0x3bc),0);
  ExceptionList = local_c;
  return this;
}


// ==== 100018c0 AAmbientCreatureFlock::AAmbientCreatureFlock

/* public: __thiscall AAmbientCreatureFlock::AAmbientCreatureFlock(class AAmbientCreatureFlock const
   &) */

AAmbientCreatureFlock * __thiscall
AAmbientCreatureFlock::AAmbientCreatureFlock
          (AAmbientCreatureFlock *this,AAmbientCreatureFlock *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18c0  3  ??0AAmbientCreatureFlock@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10010529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AEnvCreatureManagerInfo::AEnvCreatureManagerInfo
            ((AEnvCreatureManagerInfo *)this,(AEnvCreatureManagerInfo *)param_1);
  local_4 = 0;
  *(undefined ***)this = vftable;
  FUN_10001590(this + 0x3bc,(int *)(param_1 + 0x3bc));
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(uint *)(this + 0x3dc) =
       *(uint *)(this + 0x3dc) ^ (*(uint *)(param_1 + 0x3dc) ^ *(uint *)(this + 0x3dc)) & 1;
  *(undefined4 *)(this + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(this + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(this + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(this + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(this + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(this + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
  this[0x3f8] = param_1[0x3f8];
  ExceptionList = local_c;
  return this;
}


// ==== 100019d0 FUN_100019d0

AAmbientCreatureFlock * __thiscall FUN_100019d0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x3fc,*(int *)((int)this + -4),AAmbientCreatureFlock::~AAmbientCreatureFlock);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((AAmbientCreatureFlock *)((int)this + -4));
    }
    return (AAmbientCreatureFlock *)((int)this + -4);
  }
  AAmbientCreatureFlock::~AAmbientCreatureFlock(this);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(this,0x3fc);
  }
  return this;
}


// ==== 10001a40 AAmbientCreatureFlock::InternalConstructor

/* public: static void __cdecl AAmbientCreatureFlock::InternalConstructor(void *) */

void __cdecl AAmbientCreatureFlock::InternalConstructor(void *param_1)

{
                    /* 0x1a40  17  ?InternalConstructor@AAmbientCreatureFlock@@SAXPAX@Z */
  if (param_1 != (void *)0x0) {
    AAmbientCreatureFlock(param_1);
    return;
  }
  return;
}


// ==== 10001a50 _DllMain@12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _DllMain_12(undefined4 param_1)

{
                    /* 0x1a50  41  _DllMain@12 */
  _DAT_1001c604 = param_1;
  return 1;
}


// ==== 10001a70 AAmbientCreature::execStartAmbientCreature

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AAmbientCreature::execStartAmbientCreature(struct FFrame &,void * const)
    */

void __thiscall
AAmbientCreature::execStartAmbientCreature(AAmbientCreature *this,FFrame *param_1,void *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1a70  40  ?execStartAmbientCreature@AAmbientCreature@@QAEXAAUFFrame@@QAX@Z
                        */
  puStack_c = &LAB_10010550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  local_8 = 0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar1 = (undefined4 *)FName::FName((FName *)&param_1,(ushort *)L"AmbientCreatureMoveTo",2);
  _LINEAGECREATURE_AmbientCreatureMoveTo = *puVar1;
  ExceptionList = local_10;
  return;
}


// ==== 10001af5 Catch@10001af5

void Catch_10001af5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10014ee8);
}


// ==== 10001b09 Catch_All@10001b09

void Catch_All_10001b09(void)

{
  appUnwindf((ushort *)&DAT_10011da8,L"AAmbientCreature::execStartAmbientCreature");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10001b30 AAmbientCreature::AAmbientCreature

/* public: __thiscall AAmbientCreature::AAmbientCreature(void) */

AAmbientCreature * __thiscall AAmbientCreature::AAmbientCreature(AAmbientCreature *this)

{
                    /* 0x1b30  2  ??0AAmbientCreature@@QAE@XZ */
  APawn::APawn((APawn *)this);
  *(undefined4 *)(this + 0x1950) = 0;
  *(uint *)(this + 0x194c) = *(uint *)(this + 0x194c) | 1;
  *(undefined4 *)(this + 0x191c) = *(undefined4 *)(this + 0x1bc);
  *(undefined4 *)(this + 0x1920) = *(undefined4 *)(this + 0x1c0);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1924) = *(undefined4 *)(this + 0x1c4);
  return this;
}


// ==== 10001b80 AAmbientCreature::SetTargetLocation

/* public: void __thiscall AAmbientCreature::SetTargetLocation(class FVector &) */

void __thiscall AAmbientCreature::SetTargetLocation(AAmbientCreature *this,FVector *param_1)

{
                    /* 0x1b80  33  ?SetTargetLocation@AAmbientCreature@@QAEXAAVFVector@@@Z */
  *(undefined4 *)(this + 0x1940) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1944) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x1948) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 10001bb0 AAmbientCreature::SetFlockLocation

/* public: void __thiscall AAmbientCreature::SetFlockLocation(class FVector &) */

void __thiscall AAmbientCreature::SetFlockLocation(AAmbientCreature *this,FVector *param_1)

{
                    /* 0x1bb0  31  ?SetFlockLocation@AAmbientCreature@@QAEXAAVFVector@@@Z */
  *(undefined4 *)(this + 0x18e8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x18ec) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x18f0) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 10001be0 AAmbientCreature::SetState

/* public: void __thiscall AAmbientCreature::SetState(int) */

void __thiscall AAmbientCreature::SetState(AAmbientCreature *this,int param_1)

{
                    /* 0x1be0  32  ?SetState@AAmbientCreature@@QAEXH@Z */
  *(uint *)(this + 0x18e4) = *(uint *)(this + 0x18e4) | 1;
  *(int *)(this + 0x18e0) = param_1;
  return;
}


// ==== 10001c00 AAmbientCreature::PreProcessAction

/* public: void __thiscall AAmbientCreature::PreProcessAction(void) */

void __thiscall AAmbientCreature::PreProcessAction(AAmbientCreature *this)

{
                    /* 0x1c00  19  ?PreProcessAction@AAmbientCreature@@QAEXXZ */
  *(uint *)(this + 0x194c) = *(uint *)(this + 0x194c) & 0xfffffffe;
  SetState(this,0);
  return;
}


// ==== 10001c10 AAmbientCreature::SetAmbientCreatureTargetLocation

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* public: void __thiscall AAmbientCreature::SetAmbientCreatureTargetLocation(void) */

void __thiscall AAmbientCreature::SetAmbientCreatureTargetLocation(AAmbientCreature *this)

{
  AAmbientCreature AVar1;
  undefined4 uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  APhysicsVolume *pAVar6;
  int iVar7;
  ULevel *pUVar8;
  uint unaff_EDI;
  float fVar9;
  double dVar10;
  float fStack_3c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
                    /* 0x1c10  30  ?SetAmbientCreatureTargetLocation@AAmbientCreature@@QAEXXZ */
  _fStack_3c = (double)((ulonglong)unaff_EDI << 0x20);
  pAVar6 = ALevelInfo::L2GetPhysicsVolume
                     (*(ALevelInfo **)(this + 0xe0),*(undefined4 *)(this + 0x1bc),
                      *(undefined4 *)(this + 0x1c0),*(undefined4 *)(this + 0x1c4),this);
  AVar1 = this[0x18d8];
  if (AVar1 == (AAmbientCreature)0x3) {
    _fStack_3c = 0.0;
    (**(code **)(*(int *)this + 0x1c8))(4,0,0,0,0x3f800000);
    if (((byte)pAVar6[0x4c0] & 1) == 0) goto LAB_10002ece;
    _fStack_3c = (double)CONCAT44(*(float *)(this + 0x1c0) - *(float *)(this + 0x18ec),
                                  *(float *)(this + 0x1bc) - *(float *)(this + 0x18e8));
    fVar9 = FVector::Size((FVector *)&fStack_3c);
    if ((fVar9 < (float)*(int *)(this + 0x18fc)) && (*(int *)(this + 0x18dc) == 0)) {
      if ((*(float *)(this + 0x1bc) != *(float *)(this + 0x191c)) ||
         (*(float *)(this + 0x1c0) != *(float *)(this + 0x1920))) {
        *(undefined4 *)(this + 0x191c) = *(undefined4 *)(this + 0x1bc);
        *(undefined4 *)(this + 0x1920) = *(undefined4 *)(this + 0x1c0);
        *(undefined4 *)(this + 0x1924) = *(undefined4 *)(this + 0x1c4);
        *(undefined4 *)(this + 0x1928) = 0;
        _fStack_3c = (double)CONCAT44(*(float *)(this + 0x1c0) - *(float *)(this + 0x1944),
                                      *(float *)(this + 0x1bc) - *(float *)(this + 0x1940));
        fVar9 = FVector::Size((FVector *)&fStack_3c);
        if ((100.0 <= fVar9) && (ABS(*(float *)(this + 0x1c4) - *(float *)(this + 0x1948)) <= 100.0)
           ) {
          return;
        }
        iVar7 = _rand();
        *(int *)(this + 0x18f4) = iVar7 % *(int *)(this + 0x1914);
        switch(iVar7 % *(int *)(this + 0x1914)) {
        case 0:
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1940);
          return;
        case 1:
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1944);
          return;
        case 2:
          _fStack_3c = (double)*(float *)(this + 0x1940);
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        case 3:
          _fStack_3c = (double)*(float *)(this + 0x1944);
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        case 4:
          iVar7 = _rand();
          *(float *)(this + 0x1948) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1948);
          return;
        case 5:
          _fStack_3c = (double)*(float *)(this + 0x1948);
          iVar7 = _rand();
          *(float *)(this + 0x1948) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        default:
          return;
        }
      }
      iVar7 = *(int *)(this + 0x1928);
      if (iVar7 < 3) goto LAB_10001d38;
      fStack_3c = *(float *)(this + 0x18e8);
      uVar2 = *(undefined4 *)(this + 0x18ec);
      *(undefined4 *)(this + 0x1928) = 0;
      iVar7 = _rand();
      _fStack_3c = (double)CONCAT44(uVar2,(float)(iVar7 % 100) + fStack_3c);
      iVar7 = _rand();
      fVar9 = (float)(iVar7 % 100);
      goto LAB_10001dc2;
    }
LAB_10002ec5:
    if (*(int *)(this + 0x18dc) == 1) {
      return;
    }
LAB_10002ece:
    SetState(this,3);
    return;
  }
  if (AVar1 == (AAmbientCreature)0x0) {
    _fStack_3c = (double)CONCAT44(*(float *)(this + 0x1c0) - *(float *)(this + 0x18ec),
                                  *(float *)(this + 0x1bc) - *(float *)(this + 0x18e8));
    fVar9 = FVector::Size((FVector *)&fStack_3c);
    if ((fVar9 < (float)*(int *)(this + 0x18fc)) && (*(int *)(this + 0x18dc) == 0)) {
      if ((*(float *)(this + 0x1bc) != *(float *)(this + 0x191c)) ||
         (*(float *)(this + 0x1c0) != *(float *)(this + 0x1920))) {
        *(undefined4 *)(this + 0x191c) = *(undefined4 *)(this + 0x1bc);
        *(undefined4 *)(this + 0x1920) = *(undefined4 *)(this + 0x1c0);
        *(undefined4 *)(this + 0x1924) = *(undefined4 *)(this + 0x1c4);
        *(undefined4 *)(this + 0x1928) = 0;
        _fStack_3c = (double)CONCAT44(*(float *)(this + 0x1c0) - *(float *)(this + 0x1944),
                                      *(float *)(this + 0x1bc) - *(float *)(this + 0x1940));
        fVar9 = FVector::Size((FVector *)&fStack_3c);
        if ((100.0 <= fVar9) && (ABS(*(float *)(this + 0x1c4) - *(float *)(this + 0x1948)) <= 100.0)
           ) {
          return;
        }
        iVar7 = _rand();
        *(int *)(this + 0x18f4) = iVar7 % *(int *)(this + 0x1914);
        switch(iVar7 % *(int *)(this + 0x1914)) {
        case 0:
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1940);
          return;
        case 1:
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1944);
          return;
        case 2:
          _fStack_3c = (double)*(float *)(this + 0x1940);
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        case 3:
          _fStack_3c = (double)*(float *)(this + 0x1944);
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        case 4:
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1940);
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1944);
          return;
        case 5:
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1940);
          _fStack_3c = (double)*(float *)(this + 0x1944);
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        case 6:
          _fStack_3c = (double)*(float *)(this + 0x1940);
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
               *(float *)(this + 0x1944);
          return;
        case 7:
          _fStack_3c = (double)*(float *)(this + 0x1940);
          iVar7 = _rand();
          *(float *)(this + 0x1940) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          _fStack_3c = (double)*(float *)(this + 0x1944);
          iVar7 = _rand();
          *(float *)(this + 0x1944) =
               (float)_fStack_3c -
               (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
          return;
        default:
          return;
        }
      }
      iVar7 = *(int *)(this + 0x1928);
      if (iVar7 < 3) {
LAB_10001d38:
        *(int *)(this + 0x1928) = iVar7 + 1;
        *(undefined4 *)(this + 0x191c) = *(undefined4 *)(this + 0x1bc);
        *(undefined4 *)(this + 0x1920) = *(undefined4 *)(this + 0x1c0);
        *(undefined4 *)(this + 0x1924) = *(undefined4 *)(this + 0x1c4);
        return;
      }
      fStack_3c = *(float *)(this + 0x18e8);
      uVar2 = *(undefined4 *)(this + 0x18ec);
      *(undefined4 *)(this + 0x1928) = 0;
      iVar7 = _rand();
      _fStack_3c = (double)CONCAT44(uVar2,(float)(iVar7 % 100) + fStack_3c);
      iVar7 = _rand();
      fVar9 = (float)(iVar7 % 100);
LAB_10001dc2:
      uVar5 = _fStack_3c;
      uVar4 = (ulonglong)_fStack_3c >> 0x20;
      fStack_3c = (float)uVar5;
      _fStack_3c = (double)CONCAT44(fVar9 + (float)uVar4,fStack_3c);
      SetTargetLocation(this,(FVector *)&fStack_3c);
      return;
    }
    goto LAB_10002ec5;
  }
  if (AVar1 != (AAmbientCreature)0x5) {
    if (AVar1 != (AAmbientCreature)0x4) {
      fStack_28 = *(float *)(this + 0x1bc) - *(float *)(this + 0x18e8);
      fStack_24 = *(float *)(this + 0x1c0) - *(float *)(this + 0x18ec);
      fStack_20 = *(float *)(this + 0x1c4) - *(float *)(this + 0x18f0);
      fVar9 = FVector::Size((FVector *)&fStack_28);
      if ((fVar9 < (float)*(int *)(this + 0x18fc)) && (*(int *)(this + 0x18dc) == 0)) {
        if ((*(float *)(this + 0x1bc) != *(float *)(this + 0x191c)) ||
           (*(float *)(this + 0x1c0) != *(float *)(this + 0x1920))) {
          *(undefined4 *)(this + 0x191c) = *(undefined4 *)(this + 0x1bc);
          *(undefined4 *)(this + 0x1920) = *(undefined4 *)(this + 0x1c0);
          *(undefined4 *)(this + 0x1924) = *(undefined4 *)(this + 0x1c4);
          *(undefined4 *)(this + 0x1928) = 0;
          fStack_28 = *(float *)(this + 0x1bc) - *(float *)(this + 0x1940);
          fStack_24 = *(float *)(this + 0x1c0) - *(float *)(this + 0x1944);
          fStack_20 = *(float *)(this + 0x1c4) - *(float *)(this + 0x1948);
          fVar9 = FVector::Size((FVector *)&fStack_28);
          if ((100.0 <= fVar9) &&
             (ABS(*(float *)(this + 0x1c4) - *(float *)(this + 0x1948)) <= 100.0)) {
            return;
          }
          iVar7 = _rand();
          *(int *)(this + 0x18f4) = iVar7 % *(int *)(this + 0x1914);
          switch(iVar7 % *(int *)(this + 0x1914)) {
          case 0:
            iVar7 = _rand();
            *(float *)(this + 0x1940) =
                 (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
                 *(float *)(this + 0x1940);
            return;
          case 1:
            iVar7 = _rand();
            *(float *)(this + 0x1944) =
                 (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
                 *(float *)(this + 0x1944);
            return;
          case 2:
            _fStack_3c = (double)*(float *)(this + 0x1940);
            iVar7 = _rand();
            *(float *)(this + 0x1940) =
                 (float)_fStack_3c -
                 (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
            return;
          case 3:
            _fStack_3c = (double)*(float *)(this + 0x1944);
            iVar7 = _rand();
            *(float *)(this + 0x1944) =
                 (float)_fStack_3c -
                 (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
            return;
          case 4:
            iVar7 = _rand();
            *(float *)(this + 0x1948) =
                 (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918)) +
                 *(float *)(this + 0x1948);
            return;
          case 5:
            _fStack_3c = (double)*(float *)(this + 0x1948);
            iVar7 = _rand();
            *(float *)(this + 0x1948) =
                 (float)_fStack_3c -
                 (float)(iVar7 % *(int *)(this + 0x18f8) + *(int *)(this + 0x1918));
            return;
          default:
            return;
          }
        }
        if (*(int *)(this + 0x1928) < 3) {
          *(int *)(this + 0x1928) = *(int *)(this + 0x1928) + 1;
          *(undefined4 *)(this + 0x191c) = *(undefined4 *)(this + 0x1bc);
          *(undefined4 *)(this + 0x1920) = *(undefined4 *)(this + 0x1c0);
          *(undefined4 *)(this + 0x1924) = *(undefined4 *)(this + 0x1c4);
          return;
        }
        fStack_3c = *(float *)(this + 0x18e8);
        uVar2 = *(undefined4 *)(this + 0x18ec);
        *(undefined4 *)(this + 0x1928) = 0;
        iVar7 = _rand();
        _fStack_3c = (double)CONCAT44(uVar2,(float)(iVar7 % 100) + fStack_3c);
        iVar7 = _rand();
        fVar9 = (float)(iVar7 % 100);
        goto LAB_10001dc2;
      }
      goto LAB_10002ec5;
    }
    if (*(float *)(this + 0x1930) < *(float *)(this + 0x1950)) {
      SetState(this,0);
      *(uint *)(this + 0x192c) = *(uint *)(this + 0x192c) | 1;
      return;
    }
    if (*(int *)(this + 0x1928) == 0) {
      *(undefined4 *)(this + 0x1928) = 1;
      iVar7 = _rand();
      *(int *)(this + 0x18f4) = iVar7 % *(int *)(this + 0x1914);
    }
    switch(*(undefined4 *)(this + 0x18f4)) {
    case 0:
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
           *(float *)(this + 0x1940);
      iVar7 = _rand();
      fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
              *(float *)(this + 0x1944);
      break;
    case 1:
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
           *(float *)(this + 0x1940);
      _fStack_3c = (double)*(float *)(this + 0x1944);
      iVar7 = _rand();
      fVar9 = (float)_fStack_3c -
              (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
      break;
    case 2:
      _fStack_3c = (double)*(float *)(this + 0x1940);
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)_fStack_3c -
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
      iVar7 = _rand();
      fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
              *(float *)(this + 0x1944);
      break;
    case 3:
      _fStack_3c = (double)*(float *)(this + 0x1940);
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)_fStack_3c -
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
      _fStack_3c = (double)*(float *)(this + 0x1944);
      iVar7 = _rand();
      fVar9 = (float)_fStack_3c -
              (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
      break;
    case 4:
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
           *(float *)(this + 0x1940);
      goto switchD_10002954_default;
    case 5:
      _fStack_3c = (double)*(float *)(this + 0x1940);
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)_fStack_3c -
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
      goto switchD_10002954_default;
    case 6:
      iVar7 = _rand();
      fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
              *(float *)(this + 0x1944);
      break;
    case 7:
      _fStack_3c = (double)*(float *)(this + 0x1944);
      iVar7 = _rand();
      fVar9 = (float)_fStack_3c -
              (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
      break;
    default:
      goto switchD_10002954_default;
    }
    *(float *)(this + 0x1944) = fVar9;
switchD_10002954_default:
    *(float *)(this + 0x1948) = (float)(*(int *)(this + 0x1918) / 2) + *(float *)(this + 0x1948);
    return;
  }
  if ((((*(int *)(this + 0xe4) != 0) && (iVar7 = *(int *)(*(int *)(this + 0xe4) + 0x74), iVar7 != 0)
       ) && (iVar7 = *(int *)(iVar7 + 0x54), iVar7 != 0)) &&
     (((piVar3 = *(int **)(iVar7 + 0x38), *piVar3 != 0 &&
       (iVar7 = *(int *)(*piVar3 + 0x3c), iVar7 != 0)) &&
      (iVar7 = *(int *)(iVar7 + 0x3bc), iVar7 != 0)))) {
    _fStack_3c = *(double *)(iVar7 + 0x1bc);
    fStack_28 = *(float *)(this + 0x1bc) - *(float *)(iVar7 + 0x1bc);
    fStack_24 = *(float *)(this + 0x1c0) - *(float *)(iVar7 + 0x1c0);
    fStack_20 = *(float *)(this + 0x1c4) - *(float *)(iVar7 + 0x1c4);
    fVar9 = FVector::Size((FVector *)&fStack_28);
    if (fVar9 < (float)*(int *)(this + 0x1900)) {
      *(uint *)(this + 0x192c) = *(uint *)(this + 0x192c) | 2;
      this[0x34] = (AAmbientCreature)0x4;
    }
  }
  if ((*(uint *)(this + 0x192c) & 2) == 0) {
    iVar7 = _rand();
    *(int *)(this + 0x18f4) = iVar7 % *(int *)(this + 0x1914);
    switch(iVar7 % *(int *)(this + 0x1914)) {
    case 0:
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918) / 2) +
           *(float *)(this + 0x1940);
      break;
    case 1:
      iVar7 = _rand();
      fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918) / 2) +
              *(float *)(this + 0x1944);
      goto LAB_1000288d;
    case 2:
      _fStack_3c = (double)*(float *)(this + 0x1940);
      iVar7 = _rand();
      *(float *)(this + 0x1940) =
           (float)_fStack_3c -
           (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918) / 2);
      break;
    case 3:
      _fStack_3c = (double)*(float *)(this + 0x1944);
      iVar7 = _rand();
      fVar9 = (float)_fStack_3c -
              (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918) / 2);
LAB_1000288d:
      *(float *)(this + 0x1944) = fVar9;
    }
    fStack_28 = *(float *)(this + 0x18e8) - *(float *)(this + 0x1bc);
    fStack_24 = *(float *)(this + 0x18ec) - *(float *)(this + 0x1c0);
    fStack_20 = *(float *)(this + 0x18f0) - *(float *)(this + 0x1c4);
    fVar9 = FVector::Size((FVector *)&fStack_28);
    if (fVar9 <= (float)*(int *)(this + 0x18fc)) {
      return;
    }
    *(uint *)(this + 0x192c) = *(uint *)(this + 0x192c) | 1;
    return;
  }
  if (*(float *)(this + 0x1930) < *(float *)(this + 0x1950)) {
    *(uint *)(this + 0x192c) = *(uint *)(this + 0x192c) | 1;
    return;
  }
  pUVar8 = AActor::GetLevel((AActor *)this);
  (**(code **)(**(int **)(*(int *)(pUVar8 + 0x74) + 0x58) + 0x80))
            (this,0,*(undefined4 *)(this + 0x193c),*(undefined4 *)(this + 0x1bc),
             *(undefined4 *)(this + 0x1c0),*(undefined4 *)(this + 0x1c4),0x42c80000,0x42c80000,
             0x3f800000,0,0,0);
  if (*(int *)(this + 0x1928) == 0) {
    *(undefined4 *)(this + 0x1928) = 1;
    iVar7 = _rand();
    *(int *)(this + 0x18f4) = iVar7 % *(int *)(this + 0x1914);
  }
  switch(*(undefined4 *)(this + 0x18f4)) {
  case 0:
    iVar7 = _rand();
    *(float *)(this + 0x1940) =
         (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
         *(float *)(this + 0x1940);
    iVar7 = _rand();
    fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
            *(float *)(this + 0x1944);
    break;
  case 1:
    iVar7 = _rand();
    *(float *)(this + 0x1940) =
         (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
         *(float *)(this + 0x1940);
    dVar10 = (double)*(float *)(this + 0x1944);
    iVar7 = _rand();
    fVar9 = (float)dVar10 - (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918))
    ;
    break;
  case 2:
    dVar10 = (double)*(float *)(this + 0x1940);
    iVar7 = _rand();
    *(float *)(this + 0x1940) =
         (float)dVar10 - (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
    iVar7 = _rand();
    fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
            *(float *)(this + 0x1944);
    break;
  case 3:
    dVar10 = (double)*(float *)(this + 0x1940);
    iVar7 = _rand();
    *(float *)(this + 0x1940) =
         (float)dVar10 - (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
    dVar10 = (double)*(float *)(this + 0x1944);
    iVar7 = _rand();
    fVar9 = (float)dVar10 - (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918))
    ;
    break;
  case 4:
    iVar7 = _rand();
    *(float *)(this + 0x1940) =
         (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
         *(float *)(this + 0x1940);
    goto switchD_1000252e_default;
  case 5:
    dVar10 = (double)*(float *)(this + 0x1940);
    iVar7 = _rand();
    *(float *)(this + 0x1940) =
         (float)dVar10 - (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918));
    goto switchD_1000252e_default;
  case 6:
    iVar7 = _rand();
    fVar9 = (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918)) +
            *(float *)(this + 0x1944);
    break;
  case 7:
    dVar10 = (double)*(float *)(this + 0x1944);
    iVar7 = _rand();
    fVar9 = (float)dVar10 - (float)(iVar7 % (*(int *)(this + 0x18f8) + 1) + *(int *)(this + 0x1918))
    ;
    break;
  default:
    goto switchD_1000252e_default;
  }
  *(float *)(this + 0x1944) = fVar9;
switchD_1000252e_default:
  *(float *)(this + 0x1948) = (float)(*(int *)(this + 0x1918) / 2) + *(float *)(this + 0x1948);
  return;
}


// ==== 10002f80 AAmbientCreature::CreatureStates

/* public: bool __thiscall AAmbientCreature::CreatureStates(enum E_EVENTT,enum CREATURE_STATE) */

bool __thiscall
AAmbientCreature::CreatureStates(AAmbientCreature *this,E_EVENTT param_1,CREATURE_STATE param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x2f80  15
                       ?CreatureStates@AAmbientCreature@@QAE_NW4E_EVENTT@@W4CREATURE_STATE@@@Z */
  if (-1 < (int)param_2) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1750) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1754) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1758) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x175c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1764) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1760) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x78c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x7cc) = param_1;
        return true;
      }
      if (param_1 == 1) {
        if (this[0x18d8] == (AAmbientCreature)0x1) {
          SetTargetLocation(this,(FVector *)(this + 0x18e8));
        }
        else {
          SetAmbientCreatureTargetLocation(this);
        }
        if ((((*(int *)(this + 0xe4) != 0) &&
             (iVar4 = *(int *)(*(int *)(this + 0xe4) + 0x74), iVar4 != 0)) &&
            (iVar4 = *(int *)(iVar4 + 0x54), iVar4 != 0)) &&
           (((piVar1 = *(int **)(iVar4 + 0x38), *piVar1 != 0 &&
             (iVar4 = *(int *)(*piVar1 + 0x3c), iVar4 != 0)) &&
            ((iVar4 = *(int *)(iVar4 + 0x3bc), iVar4 != 0 && (this[0x18d8] == (AAmbientCreature)0x1)
             ))))) {
          fVar5 = *(float *)(iVar4 + 0x1bc);
          fVar2 = *(float *)(iVar4 + 0x1c0);
          fVar3 = *(float *)(iVar4 + 0x1c4);
          iVar4 = appRand();
          if (iVar4 % 10000 == 1) {
            local_c = *(float *)(this + 0x1bc) - fVar5;
            local_8 = *(float *)(this + 0x1c0) - fVar2;
            local_4 = *(float *)(this + 0x1c4) - fVar3;
            fVar5 = FVector::Size((FVector *)&local_c);
            if (fVar5 < (float)*(int *)(this + 0x18fc)) {
              SetState(this,2);
            }
          }
        }
        return true;
      }
    }
    else if (param_2 == 1) {
      if (param_1 == 0) {
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1750) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1754) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1758) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x175c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1764) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1760) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x78c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x86c) = param_1;
        return true;
      }
      if (param_1 == 1) {
        return true;
      }
    }
    else {
      if (param_2 != 2) {
        if (param_2 != 3) {
          return false;
        }
        if (param_1 == 0) {
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1750) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1754) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1758) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x175c) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1764) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1760) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x78c) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x7cc) = param_1;
          return true;
        }
        if (param_1 == 1) {
          SetTargetLocation(this,(FVector *)(this + 0x18e8));
          return true;
        }
        if (param_1 != 2) {
          return false;
        }
        return true;
      }
      if (param_1 == 0) {
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1750) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1754) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1758) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x175c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1764) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1760) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x78c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x9ac) = param_1;
        return true;
      }
      if (param_1 == 1) {
        iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(*(int *)(this + 0xe4) + 0x74) + 0x54)
                                            + 0x38) + 0x3c) + 0x3bc);
        local_c = *(float *)(iVar4 + 0x1bc);
        local_8 = *(float *)(iVar4 + 0x1c0);
        local_4 = *(float *)(iVar4 + 0x1c4);
        SetTargetLocation(this,(FVector *)&local_c);
        return true;
      }
    }
    if (param_1 == 2) {
      return true;
    }
  }
  return false;
}


// ==== 100034c0 AAmbientCreature::States

/* public: void __thiscall AAmbientCreature::States(enum E_EVENTT,int) */

void __thiscall AAmbientCreature::States(AAmbientCreature *this,E_EVENTT param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (-1 < param_2) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1750) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1754) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1758) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x175c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1764) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x1760) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x78c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)&DAT_10011e64,1);
        *(E_EVENTT *)(this + 0x7cc) = param_1;
        return;
      }
      if (param_1 == 1) {
        if (this[0x18d8] == (AAmbientCreature)0x1) {
          SetTargetLocation(this,(FVector *)(this + 0x18e8));
        }
        else {
          SetAmbientCreatureTargetLocation(this);
        }
        if ((((*(int *)(this + 0xe4) != 0) &&
             (iVar4 = *(int *)(*(int *)(this + 0xe4) + 0x74), iVar4 != 0)) &&
            (iVar4 = *(int *)(iVar4 + 0x54), iVar4 != 0)) &&
           (((piVar1 = *(int **)(iVar4 + 0x38), *piVar1 != 0 &&
             (iVar4 = *(int *)(*piVar1 + 0x3c), iVar4 != 0)) &&
            ((iVar4 = *(int *)(iVar4 + 0x3bc), iVar4 != 0 && (this[0x18d8] == (AAmbientCreature)0x1)
             ))))) {
          fVar5 = *(float *)(iVar4 + 0x1bc);
          fVar2 = *(float *)(iVar4 + 0x1c0);
          fVar3 = *(float *)(iVar4 + 0x1c4);
          iVar4 = appRand();
          if (iVar4 % 10000 == 1) {
            fStack_c = *(float *)(this + 0x1bc) - fVar5;
            fStack_8 = *(float *)(this + 0x1c0) - fVar2;
            fStack_4 = *(float *)(this + 0x1c4) - fVar3;
            fVar5 = FVector::Size((FVector *)&fStack_c);
            if (fVar5 < (float)*(int *)(this + 0x18fc)) {
              SetState(this,2);
            }
          }
        }
        return;
      }
    }
    else if (param_2 == 1) {
      if (param_1 == 0) {
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1750) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1754) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1758) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x175c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1764) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x1760) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x78c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"WAIT",1);
        *(E_EVENTT *)(this + 0x86c) = param_1;
        return;
      }
      if (param_1 == 1) {
        return;
      }
    }
    else {
      if (param_2 != 2) {
        if (param_2 != 3) {
          return;
        }
        if (param_1 == 0) {
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1750) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1754) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1758) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x175c) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1764) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x1760) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x78c) = param_1;
          FName::FName((FName *)&param_1,(ushort *)L"WALK",1);
          *(E_EVENTT *)(this + 0x7cc) = param_1;
          return;
        }
        if (param_1 == 1) {
          SetTargetLocation(this,(FVector *)(this + 0x18e8));
          return;
        }
        if (param_1 != 2) {
          return;
        }
        return;
      }
      if (param_1 == 0) {
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1750) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1754) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1758) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x175c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1764) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x1760) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x78c) = param_1;
        FName::FName((FName *)&param_1,(ushort *)L"ATK01",1);
        *(E_EVENTT *)(this + 0x9ac) = param_1;
        return;
      }
      if (param_1 == 1) {
        iVar4 = *(int *)(*(int *)(**(int **)(*(int *)(*(int *)(*(int *)(this + 0xe4) + 0x74) + 0x54)
                                            + 0x38) + 0x3c) + 0x3bc);
        fStack_c = *(float *)(iVar4 + 0x1bc);
        fStack_8 = *(float *)(iVar4 + 0x1c0);
        fStack_4 = *(float *)(iVar4 + 0x1c4);
        SetTargetLocation(this,(FVector *)&fStack_c);
        return;
      }
    }
    if (param_1 == 2) {
      return;
    }
  }
  return;
}


// ==== 100034d0 AAmbientCreature::Process

/* public: void __thiscall AAmbientCreature::Process(enum E_EVENTT) */

void __thiscall AAmbientCreature::Process(AAmbientCreature *this,E_EVENTT param_1)

{
  AAmbientCreature AVar1;
  
                    /* 0x34d0  22  ?Process@AAmbientCreature@@QAEXW4E_EVENTT@@@Z */
  States(this,param_1,*(int *)(this + 0x18dc));
  AVar1 = this[0x18e4];
  while (((byte)AVar1 & 1) != 0) {
    *(uint *)(this + 0x18e4) = *(uint *)(this + 0x18e4) & 0xfffffffe;
    States(this,2,*(int *)(this + 0x18dc));
    *(int *)(this + 0x18dc) = *(int *)(this + 0x18e0);
    States(this,0,*(int *)(this + 0x18e0));
    AVar1 = this[0x18e4];
  }
  return;
}


// ==== 10003530 AAmbientCreature::ProcessAction

/* public: void __thiscall AAmbientCreature::ProcessAction(float) */

void __thiscall AAmbientCreature::ProcessAction(AAmbientCreature *this,float param_1)

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
  AAmbientCreature AVar13;
  ULevel *pUVar14;
  int extraout_EDX;
  int iVar15;
  float10 extraout_ST0;
  float10 fVar16;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x3530  23  ?ProcessAction@AAmbientCreature@@QAEXM@Z */
  if (this[0x18d8] == (AAmbientCreature)0x1) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_30 = 0;
    local_18 = 0;
    local_2c = 0;
    local_14 = 0;
    local_10 = 0;
    local_8 = 0xffffffff;
    local_c = 0x3f800000;
    local_4 = 0;
    fVar1 = *(float *)(this + 0x1940);
    fVar2 = *(float *)(this + 0x1bc);
    fVar3 = *(float *)(this + 0x1944);
    fVar4 = *(float *)(this + 0x1c0);
    fVar5 = *(float *)(this + 0x1948);
    fVar6 = *(float *)(this + 0x1c4);
    fVar7 = *(float *)(this + 0x1940);
    fVar8 = *(float *)(this + 0x1bc);
    fVar9 = *(float *)(this + 0x1944);
    fVar10 = *(float *)(this + 0x1c0);
    fVar11 = *(float *)(this + 0x1948);
    fVar12 = *(float *)(this + 0x1c4);
    local_3c = (fVar7 - fVar8) * param_1;
    local_38 = (fVar9 - fVar10) * param_1;
    local_34 = param_1 * (fVar11 - fVar12);
    FVector::Rotation((FVector *)&local_3c);
    if (*(int *)(this + 0x18dc) != 1) {
      pUVar14 = AActor::GetLevel((AActor *)this);
      (**(code **)(*(int *)pUVar14 + 0xa4))
                (this,(fVar1 - fVar2) * param_1,(fVar3 - fVar4) * param_1,(fVar5 - fVar6) * param_1,
                 fVar7 - fVar8,fVar9 - fVar10,fVar11 - fVar12,&local_30,0,0,0,0);
    }
  }
  else {
    eventAmbientCreatureMoveTo
              (this,*(undefined4 *)(this + 0x1940),*(undefined4 *)(this + 0x1944),
               *(undefined4 *)(this + 0x1948));
  }
  AVar13 = this[0x18d8];
  if (AVar13 == (AAmbientCreature)0x4) {
    *(float *)(this + 0x1950) = *(float *)(this + 0x1950) + param_1;
  }
  else {
    iVar15 = 2;
    if ((AVar13 == (AAmbientCreature)0x5) && (((byte)this[0x192c] & 2) != 0)) {
      *(float *)(this + 0x1950) = *(float *)(this + 0x1950) + param_1;
    }
    else if (AVar13 == (AAmbientCreature)0x1) {
      SetState(this,0);
    }
    else {
      if ((*(int *)(this + 0x18dc) != 0) ||
         (fVar1 = *(float *)(this + 0x1950), *(float *)(this + 0x1950) = param_1 + fVar1,
         param_1 + fVar1 <= 10.0)) {
        fVar16 = (float10)param_1;
      }
      else {
        SetState(this,1);
        *(undefined4 *)(this + 0x1950) = 0;
        iVar15 = extraout_EDX;
        fVar16 = extraout_ST0;
      }
      if ((*(int *)(this + 0x18dc) == iVar15) &&
         (fVar1 = *(float *)(this + 0x1950),
         *(float *)(this + 0x1950) = (float)((float10)fVar1 + fVar16),
         3.0 < (float)((float10)fVar1 + fVar16))) {
        SetState(this,3);
        *(float *)(this + 0x1950) = (float)extraout_ST0_00;
        fVar16 = extraout_ST1;
      }
      if ((*(int *)(this + 0x18dc) == 1) &&
         (fVar1 = *(float *)(this + 0x1950),
         *(float *)(this + 0x1950) = (float)((float10)fVar1 + fVar16),
         7.0 < (float)((float10)fVar1 + fVar16))) {
        SetState(this,0);
        *(float *)(this + 0x1950) = (float)extraout_ST0_01;
        fVar16 = extraout_ST1_00;
      }
      if ((*(int *)(this + 0x18dc) == 3) &&
         (fVar1 = *(float *)(this + 0x1950),
         *(float *)(this + 0x1950) = (float)((float10)fVar1 + fVar16),
         5.0 < (float)((float10)fVar1 + fVar16))) {
        SetState(this,0);
        *(float *)(this + 0x1950) = (float)extraout_ST0_02;
      }
    }
  }
  if (*(int *)(this + 0x18dc) == 1) {
    *(uint *)(this + 0x2f8) = *(uint *)(this + 0x2f8) & 0xffffbfff;
  }
  else {
    *(uint *)(this + 0x2f8) = *(uint *)(this + 0x2f8) | 0x4000;
  }
  if (*(int *)(this + 0x18dc) == 3) {
    iVar15 = *(int *)(this + 0x1934) + -0x1e;
  }
  else {
    iVar15 = *(int *)(this + 0x1934);
  }
  fVar1 = (float)iVar15;
  *(float *)(this + 0x6ec) = fVar1;
  *(float *)(this + 0x6f0) = fVar1;
  *(float *)(this + 0x6fc) = fVar1;
  *(float *)(this + 0x700) = fVar1;
  *(float *)(this + 0x6f4) = fVar1;
  *(float *)(this + 0x6f8) = fVar1;
  Process(this,1);
  return;
}


// ==== 10003890 AAmbientCreature::Tick

/* public: virtual int __thiscall AAmbientCreature::Tick(float,enum ELevelTick) */

int __thiscall AAmbientCreature::Tick(AAmbientCreature *this,float param_1,ELevelTick param_2)

{
  int iVar1;
  
                    /* 0x3890  37  ?Tick@AAmbientCreature@@UAEHMW4ELevelTick@@@Z */
  iVar1 = APawn::Tick((APawn *)this,param_1,param_2);
  if (((byte)this[0x194c] & 1) != 0) {
    PreProcessAction(this);
    return iVar1;
  }
  ProcessAction(this,param_1);
  return iVar1;
}


// ==== 100038e0 AAmbientCreatureFlock::ProcessActionAwayFly

/* public: void __thiscall AAmbientCreatureFlock::ProcessActionAwayFly(float) */

void __thiscall
AAmbientCreatureFlock::ProcessActionAwayFly(AAmbientCreatureFlock *this,float param_1)

{
  AAmbientCreature *this_00;
  ULevel *pUVar1;
  int iVar2;
  
                    /* 0x38e0  24  ?ProcessActionAwayFly@AAmbientCreatureFlock@@QAEXM@Z */
  iVar2 = 0;
  if (0 < *(int *)(this + 0x3cc)) {
    do {
      this_00 = *(AAmbientCreature **)(*(int *)(this + 0x3bc) + iVar2 * 4);
      if (((byte)this_00[0x192c] & 1) == 0) {
        AAmbientCreature::SetFlockLocation(this_00,(FVector *)(this + 0x1bc));
      }
      else {
        *(undefined4 *)(this + 0x3cc) = 0;
        FArray::Empty((FArray *)(this + 0x3bc),4,0);
        pUVar1 = AActor::GetLevel((AActor *)this);
        (**(code **)(*(int *)pUVar1 + 0xac))(this_00,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x3cc));
  }
  return;
}


// ==== 10003960 AAmbientCreatureFlock::ProcessActionHideOnFly

/* public: void __thiscall AAmbientCreatureFlock::ProcessActionHideOnFly(float) */

void __thiscall
AAmbientCreatureFlock::ProcessActionHideOnFly(AAmbientCreatureFlock *this,float param_1)

{
  int iVar1;
  int *piVar2;
  AAmbientCreature *this_00;
  ULevel *pUVar3;
  float fVar4;
  int local_1c;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x3960  27  ?ProcessActionHideOnFly@AAmbientCreatureFlock@@QAEXM@Z */
  if (((byte)this[0x3dc] & 1) == 0) {
    local_1c = 0;
    if (0 < *(int *)(this + 0x3cc)) {
      do {
        this_00 = *(AAmbientCreature **)(*(int *)(this + 0x3bc) + local_1c * 4);
        if (((byte)this_00[0x192c] & 1) == 0) {
          AAmbientCreature::SetFlockLocation(this_00,(FVector *)(this + 0x1bc));
        }
        else {
          *(uint *)(this + 0x3dc) = *(uint *)(this + 0x3dc) | 1;
          *(undefined4 *)(this + 0x3cc) = 1;
          FArray::Empty((FArray *)(this + 0x3bc),4,0);
          pUVar3 = AActor::GetLevel((AActor *)this);
          (**(code **)(*(int *)pUVar3 + 0xac))(this_00,0);
        }
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(this + 0x3cc));
    }
  }
  else if ((((*(int *)(this + 0xe4) != 0) &&
            (iVar1 = *(int *)(*(int *)(this + 0xe4) + 0x74), iVar1 != 0)) &&
           (iVar1 = *(int *)(iVar1 + 0x54), iVar1 != 0)) &&
          (((piVar2 = *(int **)(iVar1 + 0x38), *piVar2 != 0 &&
            (iVar1 = *(int *)(*piVar2 + 0x3c), iVar1 != 0)) &&
           (iVar1 = *(int *)(iVar1 + 0x3bc), iVar1 != 0)))) {
    local_c = *(float *)(this + 0x1bc) - *(float *)(iVar1 + 0x1bc);
    local_8 = *(float *)(this + 0x1c0) - *(float *)(iVar1 + 0x1c0);
    local_4 = *(float *)(this + 0x1c4) - *(float *)(iVar1 + 0x1c4);
    fVar4 = FVector::Size((FVector *)&local_c);
    if (fVar4 < 500.0) {
      *(uint *)(this + 0x3dc) = *(uint *)(this + 0x3dc) & 0xfffffffe;
      *(undefined4 *)(this + 0x3cc) = 0;
      return;
    }
  }
  return;
}


// ==== 10003ad0 AAmbientCreatureFlock::ProcessActionFly

/* public: void __thiscall AAmbientCreatureFlock::ProcessActionFly(float) */

void __thiscall AAmbientCreatureFlock::ProcessActionFly(AAmbientCreatureFlock *this,float param_1)

{
  int iVar1;
  
                    /* 0x3ad0  26  ?ProcessActionFly@AAmbientCreatureFlock@@QAEXM@Z
                       0x3ad0  28  ?ProcessActionLand@AAmbientCreatureFlock@@QAEXM@Z
                       0x3ad0  29  ?ProcessActionSwim@AAmbientCreatureFlock@@QAEXM@Z */
  iVar1 = 0;
  if (0 < *(int *)(this + 0x3cc)) {
    do {
      AAmbientCreature::SetFlockLocation
                (*(AAmbientCreature **)(*(int *)(this + 0x3bc) + iVar1 * 4),
                 (FVector *)(this + 0x1bc));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x3cc));
  }
  return;
}


// ==== 10003b10 AAmbientCreatureFlock::ProcessActionCircling

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall AAmbientCreatureFlock::ProcessActionCircling(float) */

void __thiscall
AAmbientCreatureFlock::ProcessActionCircling(AAmbientCreatureFlock *this,float param_1)

{
  FVector *pFVar1;
  float fVar2;
  float fVar3;
  void *extraout_ECX;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x3b10  25  ?ProcessActionCircling@AAmbientCreatureFlock@@QAEXM@Z */
  fVar5 = (float10)FUN_10005350(this);
  fVar6 = (float10)FUN_10005220(extraout_ECX);
  fVar2 = *(float *)(this + 0x1bc);
  pFVar1 = (FVector *)(this + 0x1bc);
  fVar3 = *(float *)(this + 0x1c0);
  local_c = *(float *)pFVar1 - *(float *)(this + 0x3d0);
  local_8 = *(float *)(this + 0x1c0) - *(float *)(this + 0x3d4);
  local_4 = *(float *)(this + 0x1c4) - *(float *)(this + 0x3d8);
  fVar7 = FVector::Size((FVector *)&local_c);
  if (fVar7 <= *(float *)(this + 0x3f4) + 100.0) {
    local_c = *(float *)pFVar1 - *(float *)(this + 0x3d0);
    local_8 = *(float *)(this + 0x1c0) - *(float *)(this + 0x3d4);
    local_4 = *(float *)(this + 0x1c4) - *(float *)(this + 0x3d8);
    fVar7 = FVector::Size((FVector *)&local_c);
    if (fVar7 < *(float *)(this + 0x3f4) - 100.0) {
      _DAT_1001b42c = 0.5;
    }
  }
  else {
    _DAT_1001b42c = -0.5;
  }
  iVar4 = 0;
  *(float *)pFVar1 =
       ((fVar2 - *(float *)(this + 0x3d0)) * (float)fVar5 -
       (fVar3 - *(float *)(this + 0x3d4)) * (float)fVar6) + *(float *)(this + 0x3d0) + _DAT_1001b42c
  ;
  *(float *)(this + 0x1c0) =
       (float)fVar5 * (fVar3 - *(float *)(this + 0x3d4)) +
       (float)fVar6 * (fVar2 - *(float *)(this + 0x3d0)) + *(float *)(this + 0x3d4);
  if (0 < *(int *)(this + 0x3cc)) {
    do {
      AAmbientCreature::SetFlockLocation
                (*(AAmbientCreature **)(*(int *)(this + 0x3bc) + iVar4 * 4),pFVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x3cc));
  }
  return;
}


// ==== 10003c80 AAmbientCreatureFlock::Tick

/* public: virtual int __thiscall AAmbientCreatureFlock::Tick(float,enum ELevelTick) */

int __thiscall
AAmbientCreatureFlock::Tick(AAmbientCreatureFlock *this,float param_1,ELevelTick param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  AAmbientCreatureFlock AVar4;
  UClass *this_00;
  float fVar5;
  AAmbientCreatureFlock *pAVar6;
  int iVar7;
  ULevel *pUVar8;
  AActor *pAVar9;
  undefined4 *puVar10;
  ULevel *pUVar11;
  int iVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  AActor *this_01;
  undefined8 uVar13;
  ulonglong uVar14;
  AAmbientCreatureFlock *pAStack_74;
  float local_70;
  float local_6c;
  AAmbientCreatureFlock *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_34;
  FRotator local_c [12];
  
                    /* 0x3c80  38  ?Tick@AAmbientCreatureFlock@@UAEHMW4ELevelTick@@@Z */
  iVar7 = AEnvCreatureManagerInfo::Tick((AEnvCreatureManagerInfo *)this,param_1,param_2);
  this_00 = *(UClass **)(this + 0x3c8);
  pUVar8 = AActor::GetLevel((AActor *)this);
  if (*(int *)(this + 0x3cc) < *(int *)(this + 0x3e0)) {
    this_01 = (AActor *)0x0;
    pAVar9 = UClass::GetDefaultActor(this_00);
    if (this[0x3f8] == (AAmbientCreatureFlock)0x3) {
      *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(this + 0x1bc);
      *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(this + 0x1c0);
      *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(this + 0x1c4);
      *(float *)(this + 0x1bc) = *(float *)(this + 0x3f4) + *(float *)(this + 0x3d0);
    }
    local_34 = 0;
    if (0 < *(int *)(this + 0x3e0)) {
      do {
        if ((this_00 != (UClass *)0x0) && (pAVar9 != (AActor *)0x0)) {
          fVar1 = *(float *)(pAVar9 + 0x2f4);
          iVar12 = *(int *)pUVar8;
          fVar5 = fVar1 * 0.0;
          fVar2 = *(float *)(this + 0x1bc);
          fVar3 = *(float *)(this + 0x1c0);
          pAVar6 = (AAmbientCreatureFlock *)(*(float *)(this + 0x1c4) + fVar5);
          uStack_54 = 0x10003dae;
          puVar10 = (undefined4 *)FRotator::FRotator(local_c,0,0,0);
          local_64 = *puVar10;
          uStack_54 = 1;
          uStack_58 = 0;
          local_60 = puVar10[1];
          local_5c = puVar10[2];
          pAStack_74 = pAVar6;
          local_70 = fVar2 + fVar1;
          local_6c = fVar3 + fVar5;
          local_68 = pAVar6;
          FName::FName((FName *)&pAStack_74,0);
          uVar13 = (**(code **)(iVar12 + 0xc0))(this_00);
          this_01 = (AActor *)uVar13;
          *(undefined4 *)(this_01 + 0x104) = *(undefined4 *)(this + 0x104);
          uVar14 = FUN_10005440(extraout_ECX,(int)((ulonglong)uVar13 >> 0x20));
          *(int *)(this_01 + 0x1934) = (int)uVar14;
          AVar4 = this[0x3f8];
          if (AVar4 == (AAmbientCreatureFlock)0x1) {
            *(undefined4 *)(this_01 + 0x6ec) = *(undefined4 *)(this + 0x3f0);
            *(undefined4 *)(this_01 + 0x6f0) = *(undefined4 *)(this + 0x3f0);
LAB_10003e78:
            uVar14 = FUN_10005440(extraout_ECX_00,(int)(uVar14 >> 0x20));
            *(int *)(this_01 + 0x18fc) = (int)uVar14;
          }
          else {
            if ((AVar4 == (AAmbientCreatureFlock)0x2) || (AVar4 == (AAmbientCreatureFlock)0x3)) {
              *(undefined4 *)(this_01 + 0x6fc) = *(undefined4 *)(this + 0x3f0);
              *(undefined4 *)(this_01 + 0x700) = *(undefined4 *)(this + 0x3f0);
              goto LAB_10003e78;
            }
            if (AVar4 == (AAmbientCreatureFlock)0x0) {
              *(undefined4 *)(this_01 + 0x6f4) = *(undefined4 *)(this + 0x3f0);
              *(undefined4 *)(this_01 + 0x6f8) = *(undefined4 *)(this + 0x3f0);
              goto LAB_10003e78;
            }
          }
          if (this[0x3f8] == (AAmbientCreatureFlock)0x5) {
            pUVar11 = AActor::GetLevel(this_01);
            local_68 = *(AAmbientCreatureFlock **)(this + 0x1bc);
            uStack_54 = 0x3f800000;
            uStack_58 = 0x42c80000;
            local_5c = 0x42c80000;
            local_64 = *(undefined4 *)(this + 0x1c0);
            local_60 = *(undefined4 *)(this + 0x1c4);
            local_6c = *(float *)(this_01 + 0x1938);
            local_70 = 0.0;
            pAStack_74 = this;
            (**(code **)(**(int **)(*(int *)(pUVar11 + 0x74) + 0x58) + 0x80))();
          }
        }
        if (this_01 != (AActor *)0x0) {
          iVar12 = FArray::Add((FArray *)(this + 0x3bc),1,4);
          *(AActor **)(*(int *)(this + 0x3bc) + iVar12 * 4) = this_01;
          AAmbientCreature::SetTargetLocation((AAmbientCreature *)this_01,(FVector *)(this + 0x1bc))
          ;
        }
        *(int *)(this + 0x3cc) = *(int *)(this + 0x3cc) + 1;
        local_34 = local_34 + 1;
      } while (local_34 < *(int *)(this + 0x3e0));
    }
  }
  switch(this[0x3f8]) {
  case (AAmbientCreatureFlock)0x0:
    ProcessActionFly(this,param_1);
    return iVar7;
  case (AAmbientCreatureFlock)0x1:
    ProcessActionFly(this,param_1);
    return iVar7;
  case (AAmbientCreatureFlock)0x2:
    ProcessActionFly(this,param_1);
    return iVar7;
  case (AAmbientCreatureFlock)0x3:
    ProcessActionCircling(this,param_1);
    return iVar7;
  case (AAmbientCreatureFlock)0x4:
    ProcessActionAwayFly(this,param_1);
    return iVar7;
  case (AAmbientCreatureFlock)0x5:
    ProcessActionHideOnFly(this,param_1);
  }
  return iVar7;
}


// ==== 10004024 ENGINE.DLL::AActor::ProcessEvent thunk -> EXTERNAL:00000134

// ==== 1000402a ENGINE.DLL::AActor::ProcessState thunk -> EXTERNAL:00000133

// ==== 10004030 ENGINE.DLL::AActor::ProcessRemoteFunction thunk -> EXTERNAL:00000132

// ==== 10004036 ENGINE.DLL::AActor::PostLoad thunk -> EXTERNAL:00000131

// ==== 1000403c ENGINE.DLL::APawn::Destroy thunk -> EXTERNAL:00000130

// ==== 10004042 ENGINE.DLL::AActor::Serialize thunk -> EXTERNAL:0000012f

// ==== 10004048 ENGINE.DLL::AActor::IsPendingKill thunk -> EXTERNAL:0000012e

// ==== 1000404e ENGINE.DLL::AActor::InitExecution thunk -> EXTERNAL:0000012d

// ==== 10004054 ENGINE.DLL::AActor::PostEditChange thunk -> EXTERNAL:0000012c

// ==== 1000405a ENGINE.DLL::APawn::ClearL2Game thunk -> EXTERNAL:0000012b

// ==== 10004060 ENGINE.DLL::AActor::NetDirty thunk -> EXTERNAL:0000012a

// ==== 10004066 ENGINE.DLL::APawn::IsLoaded thunk -> EXTERNAL:00000129

// ==== 1000406c ENGINE.DLL::APawn::GetOptimizedRepList thunk -> EXTERNAL:00000128

// ==== 10004072 ENGINE.DLL::APawn::GetPlayerPawn thunk -> EXTERNAL:00000127

// ==== 10004078 ENGINE.DLL::APawn::IsPlayer thunk -> EXTERNAL:00000126

// ==== 1000407e ENGINE.DLL::APawn::GetPawn thunk -> EXTERNAL:00000125

// ==== 10004084 ENGINE.DLL::AActor::GetLight thunk -> EXTERNAL:00000124

// ==== 1000408a ENGINE.DLL::AActor::GetEmitter thunk -> EXTERNAL:00000123

// ==== 10004090 ENGINE.DLL::APawn::GetNetPriority thunk -> EXTERNAL:00000122

// ==== 10004096 ENGINE.DLL::AActor::WorldLightRadius thunk -> EXTERNAL:00000121

// ==== 1000409c ENGINE.DLL::AActor::PostEditMove thunk -> EXTERNAL:00000120

// ==== 100040a2 ENGINE.DLL::AActor::PostEditLoad thunk -> EXTERNAL:0000011f

// ==== 100040a8 ENGINE.DLL::AActor::PreRaytrace thunk -> EXTERNAL:0000011e

// ==== 100040ae ENGINE.DLL::AActor::PostRaytrace thunk -> EXTERNAL:0000011d

// ==== 100040b4 ENGINE.DLL::APawn::Spawned thunk -> EXTERNAL:0000011c

// ==== 100040ba ENGINE.DLL::APawn::PreNetReceive thunk -> EXTERNAL:0000011b

// ==== 100040c0 ENGINE.DLL::APawn::PostNetReceive thunk -> EXTERNAL:0000011a

// ==== 100040c6 ENGINE.DLL::APawn::PostNetReceiveLocation thunk -> EXTERNAL:00000119

// ==== 100040cc ENGINE.DLL::AActor::GetSkin thunk -> EXTERNAL:00000118

// ==== 100040d2 ENGINE.DLL::AActor::ShouldTickInEntry thunk -> EXTERNAL:00000117

// ==== 100040d8 ENGINE.DLL::AActor::L2EventShow thunk -> EXTERNAL:00000116

// ==== 100040de ENGINE.DLL::AActor::L2EventPlay thunk -> EXTERNAL:00000115

// ==== 100040e4 ENGINE.DLL::APawn::LostChild thunk -> EXTERNAL:00000114

// ==== 100040ea ENGINE.DLL::AActor::GainedChild thunk -> EXTERNAL:00000113

// ==== 100040f0 ENGINE.DLL::APawn::CanBeAttacked thunk -> EXTERNAL:00000112

// ==== 100040f6 ENGINE.DLL::APawn::CanBeTold thunk -> EXTERNAL:00000111

// ==== 100040fc ENGINE.DLL::APawn::PostRender thunk -> EXTERNAL:00000110

// ==== 10004102 ENGINE.DLL::APawn::SetMeshes thunk -> EXTERNAL:0000010f

// ==== 10004108 ENGINE.DLL::APawn::SetTexes thunk -> EXTERNAL:0000010e

// ==== 1000410e ENGINE.DLL::APawn::GetSubSkin thunk -> EXTERNAL:0000010d

// ==== 10004114 ENGINE.DLL::APawn::GetRightHandSkin thunk -> EXTERNAL:0000010c

// ==== 1000411a ENGINE.DLL::APawn::GetLeftHandSkin thunk -> EXTERNAL:0000010b

// ==== 10004120 ENGINE.DLL::APawn::GetRightArmSkin thunk -> EXTERNAL:00000086

// ==== 10004126 ENGINE.DLL::APawn::GetLeftArmSkin thunk -> EXTERNAL:00000001

// ==== 1000412c ENGINE.DLL::APawn::GetCloakSkin thunk -> EXTERNAL:00000002

// ==== 10004132 ENGINE.DLL::APawn::CheckSameAnim thunk -> EXTERNAL:00000003

// ==== 10004138 ENGINE.DLL::APawn::IsSameAnim thunk -> EXTERNAL:00000004

// ==== 1000413e ENGINE.DLL::APawn::CreateSkin thunk -> EXTERNAL:00000005

// ==== 10004144 ENGINE.DLL::AActor::ClearTexModifier thunk -> EXTERNAL:00000006

// ==== 1000414a ENGINE.DLL::AActor::SetAlphaTexModifier thunk -> EXTERNAL:00000007

// ==== 10004150 ENGINE.DLL::AActor::ClearAlphaTexModifier thunk -> EXTERNAL:00000008

// ==== 10004156 ENGINE.DLL::AActor::SetOverlayTexModifier thunk -> EXTERNAL:00000009

// ==== 1000415c ENGINE.DLL::AActor::SetOverlayDependAlphaTexModifier thunk -> EXTERNAL:0000000a

// ==== 10004162 ENGINE.DLL::AActor::SetSubtractTexModifier thunk -> EXTERNAL:0000000b

// ==== 10004168 ENGINE.DLL::AActor::SetAddTexModifier thunk -> EXTERNAL:0000000c

// ==== 1000416e ENGINE.DLL::AActor::SetAddTexModifier thunk -> EXTERNAL:0000000d

// ==== 10004174 ENGINE.DLL::AActor::SetChangeColorTexModifier thunk -> EXTERNAL:0000000e

// ==== 1000417a ENGINE.DLL::AActor::IsModifiedTexture thunk -> EXTERNAL:0000000f

// ==== 10004180 ENGINE.DLL::AActor::GetModifiedTextureMaterial thunk -> EXTERNAL:00000010

// ==== 10004186 ENGINE.DLL::AActor::SetActorViewType thunk -> EXTERNAL:00000011

// ==== 1000418c ENGINE.DLL::AActor::IsNeedTick thunk -> EXTERNAL:00000012

// ==== 10004192 ENGINE.DLL::AActor::SetStaticMeshActorViewType thunk -> EXTERNAL:00000013

// ==== 10004198 ENGINE.DLL::AActor::GetStepSoundData thunk -> EXTERNAL:00000014

// ==== 1000419e ENGINE.DLL::AActor::ConvertOrthMatrix thunk -> EXTERNAL:00000015

// ==== 100041a4 ENGINE.DLL::AActor::CollisionToWorld thunk -> EXTERNAL:00000016

// ==== 100041aa ENGINE.DLL::AActor::ToLocal thunk -> EXTERNAL:00000017

// ==== 100041b0 ENGINE.DLL::AActor::ToWorld thunk -> EXTERNAL:00000018

// ==== 100041b6 ENGINE.DLL::AActor::LocalToWorld thunk -> EXTERNAL:00000019

// ==== 100041bc ENGINE.DLL::AActor::BillBoardLocalToWorld thunk -> EXTERNAL:0000001a

// ==== 100041c2 ENGINE.DLL::AActor::WorldToLocal thunk -> EXTERNAL:0000001b

// ==== 100041c8 ENGINE.DLL::AActor::GetLightRenderData thunk -> EXTERNAL:0000001c

// ==== 100041ce ENGINE.DLL::APawn::UpdateRenderData thunk -> EXTERNAL:0000001d

// ==== 100041d4 ENGINE.DLL::APawn::PostScriptDestroyed thunk -> EXTERNAL:0000001e

// ==== 100041da ENGINE.DLL::APawn::ShouldTrace thunk -> EXTERNAL:0000001f

// ==== 100041e0 ENGINE.DLL::AActor::GetPrimitive thunk -> EXTERNAL:00000020

// ==== 100041e6 ENGINE.DLL::APawn::NotifyBump thunk -> EXTERNAL:00000021

// ==== 100041ec ENGINE.DLL::APawn::SetBase thunk -> EXTERNAL:00000022

// ==== 100041f2 ENGINE.DLL::APawn::NotifyAnimEnd thunk -> EXTERNAL:00000023

// ==== 100041f8 ENGINE.DLL::APawn::UpdateAnimation thunk -> EXTERNAL:00000024

// ==== 100041fe ENGINE.DLL::AActor::StartAnimPoll thunk -> EXTERNAL:00000025

// ==== 10004204 ENGINE.DLL::AActor::CheckAnimFinished thunk -> EXTERNAL:00000026

// ==== 1000420a ENGINE.DLL::APawn::CheckOwnerUpdated thunk -> EXTERNAL:00000027

// ==== 10004210 ENGINE.DLL::AActor::TickAuthoritative thunk -> EXTERNAL:00000028

// ==== 10004216 ENGINE.DLL::APawn::TickSimulated thunk -> EXTERNAL:00000029

// ==== 1000421c ENGINE.DLL::APawn::TickSpecial thunk -> EXTERNAL:0000002a

// ==== 10004222 ENGINE.DLL::APawn::PlayerControlled thunk -> EXTERNAL:0000002b

// ==== 10004228 ENGINE.DLL::APawn::IsNetRelevantFor thunk -> EXTERNAL:0000002c

// ==== 1000422e ENGINE.DLL::APawn::Attacked thunk -> EXTERNAL:0000002d

// ==== 10004234 ENGINE.DLL::APawn::IsDamageAct thunk -> EXTERNAL:0000002e

// ==== 1000423a ENGINE.DLL::APawn::IsSpineRotation thunk -> EXTERNAL:0000002f

// ==== 10004240 ENGINE.DLL::APawn::GetDamageDist thunk -> EXTERNAL:00000030

// ==== 10004246 ENGINE.DLL::AActor::GetTrailerPrePivot thunk -> EXTERNAL:00000031

// ==== 1000424c ENGINE.DLL::AActor::SetTrailerPrePivot thunk -> EXTERNAL:00000032

// ==== 10004252 ENGINE.DLL::AActor::RenderEditorInfo thunk -> EXTERNAL:00000033

// ==== 10004258 ENGINE.DLL::APawn::RenderEditorSelected thunk -> EXTERNAL:00000034

// ==== 1000425e ENGINE.DLL::AActor::GetAmbientVolume thunk -> EXTERNAL:00000035

// ==== 10004264 ENGINE.DLL::APawn::SetZone thunk -> EXTERNAL:00000036

// ==== 1000426a ENGINE.DLL::APawn::SetVolumes thunk -> EXTERNAL:00000037

// ==== 10004270 ENGINE.DLL::APawn::PostBeginPlay thunk -> EXTERNAL:00000038

// ==== 10004276 ENGINE.DLL::AActor::setPhysics thunk -> EXTERNAL:00000039

// ==== 1000427c ENGINE.DLL::APawn::performPhysics thunk -> EXTERNAL:0000003a

// ==== 10004282 ENGINE.DLL::AActor::BoundProjectileVelocity thunk -> EXTERNAL:0000003b

// ==== 10004288 ENGINE.DLL::APawn::processHitWall thunk -> EXTERNAL:0000003c

// ==== 1000428e ENGINE.DLL::APawn::processLanded thunk -> EXTERNAL:0000003d

// ==== 10004294 ENGINE.DLL::APawn::physFalling thunk -> EXTERNAL:0000003e

// ==== 1000429a ENGINE.DLL::APawn::FindSlopeRotation thunk -> EXTERNAL:0000003f

// ==== 100042a0 ENGINE.DLL::APawn::SmoothHitWall thunk -> EXTERNAL:00000040

// ==== 100042a6 ENGINE.DLL::APawn::stepUp thunk -> EXTERNAL:00000041

// ==== 100042ac ENGINE.DLL::AActor::ShrinkCollision thunk -> EXTERNAL:00000042

// ==== 100042b2 ENGINE.DLL::AActor::L2HitWall thunk -> EXTERNAL:00000043

// ==== 100042b8 ENGINE.DLL::AActor::L2Touch thunk -> EXTERNAL:00000044

// ==== 100042be ENGINE.DLL::AActor::L2Explode thunk -> EXTERNAL:00000045

// ==== 100042c4 ENGINE.DLL::APawn::GetAttackItemSound thunk -> EXTERNAL:00000046

// ==== 100042ca ENGINE.DLL::APawn::GetDefenseItemSound thunk -> EXTERNAL:00000047

// ==== 100042d0 ENGINE.DLL::APawn::GetShieldItemSound thunk -> EXTERNAL:00000048

// ==== 100042d6 ENGINE.DLL::APawn::GetDamageSound thunk -> EXTERNAL:00000049

// ==== 100042dc ENGINE.DLL::APawn::GetAttackVoiceSound thunk -> EXTERNAL:0000004a

// ==== 100042e2 ENGINE.DLL::APawn::AttackedNotify thunk -> EXTERNAL:0000004b

// ==== 100042e8 ENGINE.DLL::APawn::AssociateAttackedNotify thunk -> EXTERNAL:0000004c

// ==== 100042ee ENGINE.DLL::APawn::IsRendered thunk -> EXTERNAL:0000004d

// ==== 100042f4 ENGINE.DLL::APawn::GetRHandBoneName thunk -> EXTERNAL:0000004e

// ==== 100042fa ENGINE.DLL::APawn::GetLHandBoneName thunk -> EXTERNAL:0000004f

// ==== 10004300 ENGINE.DLL::APawn::GetRArmBoneName thunk -> EXTERNAL:00000050

// ==== 10004306 ENGINE.DLL::APawn::GetLArmBoneName thunk -> EXTERNAL:00000051

// ==== 1000430c ENGINE.DLL::APawn::GetCapeBoneName thunk -> EXTERNAL:00000052

// ==== 10004312 ENGINE.DLL::APawn::GetSpineBoneName thunk -> EXTERNAL:00000053

// ==== 10004318 ENGINE.DLL::APawn::GetLowbodyBoneName thunk -> EXTERNAL:00000054

// ==== 1000431e ENGINE.DLL::APawn::GetHeadBoneName thunk -> EXTERNAL:00000055

// ==== 10004324 ENGINE.DLL::APawn::SetRHandBoneName thunk -> EXTERNAL:00000056

// ==== 1000432a ENGINE.DLL::APawn::SetLHandBoneName thunk -> EXTERNAL:00000057

// ==== 10004330 ENGINE.DLL::APawn::SetRArmBoneName thunk -> EXTERNAL:00000058

// ==== 10004336 ENGINE.DLL::APawn::SetLArmBoneName thunk -> EXTERNAL:00000059

// ==== 1000433c ENGINE.DLL::APawn::SetCapeBoneName thunk -> EXTERNAL:0000005a

// ==== 10004342 ENGINE.DLL::APawn::SetSpineBoneName thunk -> EXTERNAL:0000005b

// ==== 10004348 ENGINE.DLL::APawn::SetLowbodyBoneName thunk -> EXTERNAL:0000005c

// ==== 1000434e ENGINE.DLL::APawn::SetHeadBoneName thunk -> EXTERNAL:0000005d

// ==== 10004354 ENGINE.DLL::APawn::GetSubMesh thunk -> EXTERNAL:0000005e

// ==== 1000435a ENGINE.DLL::APawn::GetRightHandMesh thunk -> EXTERNAL:0000005f

// ==== 10004360 ENGINE.DLL::APawn::GetLeftHandMesh thunk -> EXTERNAL:00000060

// ==== 10004366 ENGINE.DLL::APawn::GetRightArmMesh thunk -> EXTERNAL:00000061

// ==== 1000436c ENGINE.DLL::APawn::GetLeftArmMesh thunk -> EXTERNAL:00000062

// ==== 10004372 ENGINE.DLL::APawn::GetCloakMesh thunk -> EXTERNAL:00000063

// ==== 10004378 ENGINE.DLL::APawn::GetCloakCoverMesh thunk -> EXTERNAL:00000064

// ==== 1000437e ENGINE.DLL::APawn::SetSubMesh thunk -> EXTERNAL:00000065

// ==== 10004384 ENGINE.DLL::APawn::SetRightHandMesh thunk -> EXTERNAL:00000066

// ==== 1000438a ENGINE.DLL::APawn::SetLeftHandMesh thunk -> EXTERNAL:00000067

// ==== 10004390 ENGINE.DLL::APawn::SetRightArmMesh thunk -> EXTERNAL:00000068

// ==== 10004396 ENGINE.DLL::APawn::SetLeftArmMesh thunk -> EXTERNAL:00000069

// ==== 1000439c ENGINE.DLL::APawn::SetCloakMesh thunk -> EXTERNAL:0000006a

// ==== 100043a2 ENGINE.DLL::APawn::SetCloakCoverMesh thunk -> EXTERNAL:0000006b

// ==== 100043a8 ENGINE.DLL::APawn::GetSubMeshInstance thunk -> EXTERNAL:0000006c

// ==== 100043ae ENGINE.DLL::APawn::GetRightHandMeshInstance thunk -> EXTERNAL:0000006d

// ==== 100043b4 ENGINE.DLL::APawn::GetLeftHandMeshInstance thunk -> EXTERNAL:0000006e

// ==== 100043ba ENGINE.DLL::APawn::GetRightArmMeshInstance thunk -> EXTERNAL:0000006f

// ==== 100043c0 ENGINE.DLL::APawn::GetLeftArmMeshInstance thunk -> EXTERNAL:00000070

// ==== 100043c6 ENGINE.DLL::APawn::GetCloakMeshInstance thunk -> EXTERNAL:00000071

// ==== 100043cc ENGINE.DLL::APawn::GetCloakCoverMeshInstance thunk -> EXTERNAL:00000072

// ==== 100043d2 ENGINE.DLL::APawn::GetMagicInfo thunk -> EXTERNAL:00000073

// ==== 100043d8 ENGINE.DLL::AActor::GetTargetLocation thunk -> EXTERNAL:00000074

// ==== 100043de ENGINE.DLL::AActor::physL2Movement thunk -> EXTERNAL:00000075

// ==== 100043e4 ENGINE.DLL::AActor::AddMyMarker thunk -> EXTERNAL:00000076

// ==== 100043ea ENGINE.DLL::AActor::ClearMarker thunk -> EXTERNAL:00000077

// ==== 100043f0 ENGINE.DLL::AActor::AssociatedLevelGeometry thunk -> EXTERNAL:00000078

// ==== 100043f6 ENGINE.DLL::AActor::HasAssociatedLevelGeometry thunk -> EXTERNAL:00000079

// ==== 100043fc ENGINE.DLL::AActor::PlayAnim thunk -> EXTERNAL:0000007a

// ==== 10004402 ENGINE.DLL::APawn::CheckForErrors thunk -> EXTERNAL:0000007b

// ==== 10004408 ENGINE.DLL::AActor::PrePath thunk -> EXTERNAL:0000007c

// ==== 1000440e ENGINE.DLL::AActor::PostPath thunk -> EXTERNAL:0000007d

// ==== 10004414 ENGINE.DLL::AActor::GetProjectorBase thunk -> EXTERNAL:0000007e

// ==== 1000441a ENGINE.DLL::AActor::IsABrush thunk -> EXTERNAL:0000007f

// ==== 10004420 ENGINE.DLL::AActor::IsAMover thunk -> EXTERNAL:00000080

// ==== 10004426 ENGINE.DLL::AActor::IsAVolume thunk -> EXTERNAL:00000081

// ==== 1000442c ENGINE.DLL::AActor::IsAPlayerController thunk -> EXTERNAL:00000082

// ==== 10004432 ENGINE.DLL::APawn::IsAPawn thunk -> EXTERNAL:00000083

// ==== 10004438 ENGINE.DLL::AActor::IsAProjectile thunk -> EXTERNAL:00000084

// ==== 1000443e ENGINE.DLL::AActor::IsAAmbientSound thunk -> EXTERNAL:00000085

// ==== 10004444 ENGINE.DLL::AActor::IsAEmitter thunk -> EXTERNAL:00000135

// ==== 1000444a ENGINE.DLL::AActor::IsALight thunk -> EXTERNAL:00000087

// ==== 10004450 ENGINE.DLL::APawn::IsObserverModeActor thunk -> EXTERNAL:00000088

// ==== 10004456 ENGINE.DLL::APawn::IsBroadcastObserverModeActor thunk -> EXTERNAL:00000089

// ==== 1000445c ENGINE.DLL::AActor::GetL2MovementEventName thunk -> EXTERNAL:0000008a

// ==== 10004462 ENGINE.DLL::AActor::GetL2MovementTagName thunk -> EXTERNAL:0000008b

// ==== 10004468 ENGINE.DLL::AActor::AttachL2MovementActor thunk -> EXTERNAL:0000008c

// ==== 1000446e ENGINE.DLL::APawn::PostLoadProcess thunk -> EXTERNAL:0000008d

// ==== 10004474 ENGINE.DLL::AActor::GetTopPlayerController thunk -> EXTERNAL:0000008e

// ==== 1000447a ENGINE.DLL::APawn::HurtByVolume thunk -> EXTERNAL:0000008f

// ==== 10004480 ENGINE.DLL::APawn::physicsRotation thunk -> EXTERNAL:00000090

// ==== 10004486 ENGINE.DLL::APawn::PlayAnim thunk -> EXTERNAL:00000091

// ==== 1000448c ENGINE.DLL::APawn::MoveToLocation thunk -> EXTERNAL:00000092

// ==== 10004492 ENGINE.DLL::APawn::TickMoveInVehicle thunk -> EXTERNAL:00000093

// ==== 10004498 ENGINE.DLL::AActor::Destroy thunk -> EXTERNAL:00000098

// ==== 1000449e ENGINE.DLL::AActor::ClearL2Game thunk -> EXTERNAL:00000099

// ==== 100044a4 ENGINE.DLL::AActor::IsLoaded thunk -> EXTERNAL:0000009a

// ==== 100044aa ENGINE.DLL::AActor::GetOptimizedRepList thunk -> EXTERNAL:0000009b

// ==== 100044b0 ENGINE.DLL::AActor::GetPlayerPawn thunk -> EXTERNAL:0000009c

// ==== 100044b6 ENGINE.DLL::AActor::IsPlayer thunk -> EXTERNAL:0000009d

// ==== 100044bc ENGINE.DLL::AActor::GetPawn thunk -> EXTERNAL:0000009e

// ==== 100044c2 ENGINE.DLL::AActor::GetNetPriority thunk -> EXTERNAL:0000009f

// ==== 100044c8 ENGINE.DLL::AActor::Spawned thunk -> EXTERNAL:000000a0

// ==== 100044ce ENGINE.DLL::AActor::PreNetReceive thunk -> EXTERNAL:000000a1

// ==== 100044d4 ENGINE.DLL::AActor::PostNetReceive thunk -> EXTERNAL:000000a2

// ==== 100044da ENGINE.DLL::AActor::PostNetReceiveLocation thunk -> EXTERNAL:000000a3

// ==== 100044e0 ENGINE.DLL::AActor::LostChild thunk -> EXTERNAL:000000a4

// ==== 100044e6 ENGINE.DLL::AActor::CanBeAttacked thunk -> EXTERNAL:000000a5

// ==== 100044ec ENGINE.DLL::AActor::CanBeTold thunk -> EXTERNAL:000000a6

// ==== 100044f2 ENGINE.DLL::AActor::PostRender thunk -> EXTERNAL:000000a7

// ==== 100044f8 ENGINE.DLL::AActor::SetMeshes thunk -> EXTERNAL:000000a8

// ==== 100044fe ENGINE.DLL::AActor::SetTexes thunk -> EXTERNAL:000000a9

// ==== 10004504 ENGINE.DLL::AActor::GetSubSkin thunk -> EXTERNAL:000000aa

// ==== 1000450a ENGINE.DLL::AActor::GetRightHandSkin thunk -> EXTERNAL:000000ab

// ==== 10004510 ENGINE.DLL::AActor::GetLeftHandSkin thunk -> EXTERNAL:000000ac

// ==== 10004516 ENGINE.DLL::AActor::GetRightArmSkin thunk -> EXTERNAL:000000ad

// ==== 1000451c ENGINE.DLL::AActor::GetLeftArmSkin thunk -> EXTERNAL:000000ae

// ==== 10004522 ENGINE.DLL::AActor::GetCloakSkin thunk -> EXTERNAL:000000af

// ==== 10004528 ENGINE.DLL::AActor::CheckSameAnim thunk -> EXTERNAL:000000b0

// ==== 1000452e ENGINE.DLL::AActor::IsSameAnim thunk -> EXTERNAL:000000b1

// ==== 10004534 ENGINE.DLL::AActor::CreateSkin thunk -> EXTERNAL:000000b2

// ==== 1000453a ENGINE.DLL::AActor::UpdateRenderData thunk -> EXTERNAL:000000b3

// ==== 10004540 ENGINE.DLL::AEnvCreatureManagerInfo::PostScriptDestroyed thunk -> EXTERNAL:000000b4

// ==== 10004546 ENGINE.DLL::AActor::ShouldTrace thunk -> EXTERNAL:000000b5

// ==== 1000454c ENGINE.DLL::AActor::NotifyBump thunk -> EXTERNAL:000000b6

// ==== 10004552 ENGINE.DLL::AActor::SetBase thunk -> EXTERNAL:000000b7

// ==== 10004558 ENGINE.DLL::AActor::NotifyAnimEnd thunk -> EXTERNAL:000000b8

// ==== 1000455e ENGINE.DLL::AActor::UpdateAnimation thunk -> EXTERNAL:000000b9

// ==== 10004564 ENGINE.DLL::AActor::CheckOwnerUpdated thunk -> EXTERNAL:000000ba

// ==== 1000456a ENGINE.DLL::AActor::TickSimulated thunk -> EXTERNAL:000000bb

// ==== 10004570 ENGINE.DLL::AActor::TickSpecial thunk -> EXTERNAL:000000bc

// ==== 10004576 ENGINE.DLL::AActor::PlayerControlled thunk -> EXTERNAL:000000bd

// ==== 1000457c ENGINE.DLL::AActor::IsNetRelevantFor thunk -> EXTERNAL:000000be

// ==== 10004582 ENGINE.DLL::AActor::Attacked thunk -> EXTERNAL:000000bf

// ==== 10004588 ENGINE.DLL::AActor::IsDamageAct thunk -> EXTERNAL:000000c0

// ==== 1000458e ENGINE.DLL::AActor::IsSpineRotation thunk -> EXTERNAL:000000c1

// ==== 10004594 ENGINE.DLL::AActor::GetDamageDist thunk -> EXTERNAL:000000c2

// ==== 1000459a ENGINE.DLL::AActor::RenderEditorSelected thunk -> EXTERNAL:000000c3

// ==== 100045a0 ENGINE.DLL::AActor::SetZone thunk -> EXTERNAL:000000c4

// ==== 100045a6 ENGINE.DLL::AActor::SetVolumes thunk -> EXTERNAL:000000c5

// ==== 100045ac ENGINE.DLL::AEnvCreatureManagerInfo::PostBeginPlay thunk -> EXTERNAL:000000c6

// ==== 100045b2 ENGINE.DLL::AActor::performPhysics thunk -> EXTERNAL:000000c7

// ==== 100045b8 ENGINE.DLL::AActor::processHitWall thunk -> EXTERNAL:000000c8

// ==== 100045be ENGINE.DLL::AActor::processLanded thunk -> EXTERNAL:000000c9

// ==== 100045c4 ENGINE.DLL::AActor::physFalling thunk -> EXTERNAL:000000ca

// ==== 100045ca ENGINE.DLL::AActor::FindSlopeRotation thunk -> EXTERNAL:000000cb

// ==== 100045d0 ENGINE.DLL::AActor::SmoothHitWall thunk -> EXTERNAL:000000cc

// ==== 100045d6 ENGINE.DLL::AActor::stepUp thunk -> EXTERNAL:000000cd

// ==== 100045dc ENGINE.DLL::AActor::GetAttackItemSound thunk -> EXTERNAL:000000ce

// ==== 100045e2 ENGINE.DLL::AActor::GetDefenseItemSound thunk -> EXTERNAL:000000cf

// ==== 100045e8 ENGINE.DLL::AActor::GetShieldItemSound thunk -> EXTERNAL:000000d0

// ==== 100045ee ENGINE.DLL::AActor::GetDamageSound thunk -> EXTERNAL:000000d1

// ==== 100045f4 ENGINE.DLL::AActor::GetAttackVoiceSound thunk -> EXTERNAL:000000d2

// ==== 100045fa ENGINE.DLL::AActor::AttackedNotify thunk -> EXTERNAL:000000d3

// ==== 10004600 ENGINE.DLL::AActor::AssociateAttackedNotify thunk -> EXTERNAL:000000d4

// ==== 10004606 ENGINE.DLL::AActor::IsRendered thunk -> EXTERNAL:000000d5

// ==== 1000460c ENGINE.DLL::AActor::GetRHandBoneName thunk -> EXTERNAL:000000d6

// ==== 10004612 ENGINE.DLL::AActor::GetLHandBoneName thunk -> EXTERNAL:000000d7

// ==== 10004618 ENGINE.DLL::AActor::GetRArmBoneName thunk -> EXTERNAL:000000d8

// ==== 1000461e ENGINE.DLL::AActor::GetLArmBoneName thunk -> EXTERNAL:000000d9

// ==== 10004624 ENGINE.DLL::AActor::GetCapeBoneName thunk -> EXTERNAL:000000da

// ==== 1000462a ENGINE.DLL::AActor::GetSpineBoneName thunk -> EXTERNAL:000000db

// ==== 10004630 ENGINE.DLL::AActor::GetLowbodyBoneName thunk -> EXTERNAL:000000dc

// ==== 10004636 ENGINE.DLL::AActor::GetHeadBoneName thunk -> EXTERNAL:000000dd

// ==== 1000463c ENGINE.DLL::AActor::SetRHandBoneName thunk -> EXTERNAL:000000de

// ==== 10004642 ENGINE.DLL::AActor::SetLHandBoneName thunk -> EXTERNAL:000000df

// ==== 10004648 ENGINE.DLL::AActor::SetRArmBoneName thunk -> EXTERNAL:000000e0

// ==== 1000464e ENGINE.DLL::AActor::SetLArmBoneName thunk -> EXTERNAL:000000e1

// ==== 10004654 ENGINE.DLL::AActor::SetCapeBoneName thunk -> EXTERNAL:000000e2

// ==== 1000465a ENGINE.DLL::AActor::SetSpineBoneName thunk -> EXTERNAL:000000e3

// ==== 10004660 ENGINE.DLL::AActor::SetLowbodyBoneName thunk -> EXTERNAL:000000e4

// ==== 10004666 ENGINE.DLL::AActor::SetHeadBoneName thunk -> EXTERNAL:000000e5

// ==== 1000466c ENGINE.DLL::AActor::GetSubMesh thunk -> EXTERNAL:000000e6

// ==== 10004672 ENGINE.DLL::AActor::GetRightHandMesh thunk -> EXTERNAL:000000e7

// ==== 10004678 ENGINE.DLL::AActor::GetLeftHandMesh thunk -> EXTERNAL:000000e8

// ==== 1000467e ENGINE.DLL::AActor::GetRightArmMesh thunk -> EXTERNAL:000000e9

// ==== 10004684 ENGINE.DLL::AActor::GetLeftArmMesh thunk -> EXTERNAL:000000ea

// ==== 1000468a ENGINE.DLL::AActor::GetCloakMesh thunk -> EXTERNAL:000000eb

// ==== 10004690 ENGINE.DLL::AActor::GetCloakCoverMesh thunk -> EXTERNAL:000000ec

// ==== 10004696 ENGINE.DLL::AActor::SetSubMesh thunk -> EXTERNAL:000000ed

// ==== 1000469c ENGINE.DLL::AActor::SetRightHandMesh thunk -> EXTERNAL:000000ee

// ==== 100046a2 ENGINE.DLL::AActor::SetLeftHandMesh thunk -> EXTERNAL:000000ef

// ==== 100046a8 ENGINE.DLL::AActor::SetRightArmMesh thunk -> EXTERNAL:000000f0

// ==== 100046ae ENGINE.DLL::AActor::SetLeftArmMesh thunk -> EXTERNAL:000000f1

// ==== 100046b4 ENGINE.DLL::AActor::SetCloakMesh thunk -> EXTERNAL:000000f2

// ==== 100046ba ENGINE.DLL::AActor::SetCloakCoverMesh thunk -> EXTERNAL:000000f3

// ==== 100046c0 ENGINE.DLL::AActor::GetSubMeshInstance thunk -> EXTERNAL:000000f4

// ==== 100046c6 ENGINE.DLL::AActor::GetRightHandMeshInstance thunk -> EXTERNAL:000000f5

// ==== 100046cc ENGINE.DLL::AActor::GetLeftHandMeshInstance thunk -> EXTERNAL:000000f6

// ==== 100046d2 ENGINE.DLL::AActor::GetRightArmMeshInstance thunk -> EXTERNAL:000000f7

// ==== 100046d8 ENGINE.DLL::AActor::GetLeftArmMeshInstance thunk -> EXTERNAL:000000f8

// ==== 100046de ENGINE.DLL::AActor::GetCloakMeshInstance thunk -> EXTERNAL:000000f9

// ==== 100046e4 ENGINE.DLL::AActor::GetCloakCoverMeshInstance thunk -> EXTERNAL:000000fa

// ==== 100046ea ENGINE.DLL::AActor::GetMagicInfo thunk -> EXTERNAL:000000fb

// ==== 100046f0 ENGINE.DLL::AActor::CheckForErrors thunk -> EXTERNAL:000000fc

// ==== 100046f6 ENGINE.DLL::AActor::IsAPawn thunk -> EXTERNAL:000000fd

// ==== 100046fc ENGINE.DLL::AActor::IsObserverModeActor thunk -> EXTERNAL:000000fe

// ==== 10004702 ENGINE.DLL::AActor::IsBroadcastObserverModeActor thunk -> EXTERNAL:000000ff

// ==== 10004708 ENGINE.DLL::AActor::PostLoadProcess thunk -> EXTERNAL:00000100

// ==== 1000470e ENGINE.DLL::AEnvCreatureManagerInfo::SetInit thunk -> EXTERNAL:00000101

// ==== 10004714 CORE.DLL::UObject::QueryInterface thunk -> EXTERNAL:0000015c

// ==== 1000471a CORE.DLL::UObject::AddRef thunk -> EXTERNAL:0000015b

// ==== 10004720 CORE.DLL::UObject::Release thunk -> EXTERNAL:0000015a

// ==== 10004726 CORE.DLL::UObject::ProcessDelegate thunk -> EXTERNAL:00000159

// ==== 1000472c CORE.DLL::UObject::Modify thunk -> EXTERNAL:00000158

// ==== 10004732 CORE.DLL::UObject::GotoState thunk -> EXTERNAL:00000157

// ==== 10004738 CORE.DLL::UObject::GotoLabel thunk -> EXTERNAL:00000156

// ==== 1000473e CORE.DLL::UObject::ShutdownAfterError thunk -> EXTERNAL:00000155

// ==== 10004744 CORE.DLL::UObject::CallFunction thunk -> EXTERNAL:00000154

// ==== 1000474a CORE.DLL::UObject::ScriptConsoleExec thunk -> EXTERNAL:00000153

// ==== 10004750 CORE.DLL::UObject::Register thunk -> EXTERNAL:00000152

// ==== 10004756 CORE.DLL::UObject::LanguageChange thunk -> EXTERNAL:00000151

// ==== 1000475c CORE.DLL::UObject::Rename thunk -> EXTERNAL:00000150

// ==== 10004770 _memcpy

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10004953_caseD_2;
        case 3:
          goto switchD_10004953_caseD_3;
        }
        goto switchD_10004953_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10004953_caseD_0;
      case 1:
        goto switchD_10004953_caseD_1;
      case 2:
        goto switchD_10004953_caseD_2;
      case 3:
        goto switchD_10004953_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10004953_caseD_2;
            case 3:
              goto switchD_10004953_caseD_3;
            }
            goto switchD_10004953_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10004953_caseD_2;
            case 3:
              goto switchD_10004953_caseD_3;
            }
            goto switchD_10004953_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10004953_caseD_2;
            case 3:
              goto switchD_10004953_caseD_3;
            }
            goto switchD_10004953_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10004953_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10004953_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10004953_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10004953_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1001dc78 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100047cc_caseD_2;
      case 3:
        goto switchD_100047cc_caseD_3;
      }
      goto switchD_100047cc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100047cc_caseD_0;
    case 1:
      goto switchD_100047cc_caseD_1;
    case 2:
      goto switchD_100047cc_caseD_2;
    case 3:
      goto switchD_100047cc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100047cc_caseD_2;
          case 3:
            goto switchD_100047cc_caseD_3;
          }
          goto switchD_100047cc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100047cc_caseD_2;
          case 3:
            goto switchD_100047cc_caseD_3;
          }
          goto switchD_100047cc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100047cc_caseD_2;
          case 3:
            goto switchD_100047cc_caseD_3;
          }
          goto switchD_100047cc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100047cc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100047cc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100047cc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100047cc_caseD_0:
  return _Dst;
}


// ==== 10004ad5 _JumpToContinuation

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10004afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// ==== 10004b05 FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10004b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 10004b0c _UnwindNestedFrames

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10004b35,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// ==== 10004b5e FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 10004bc4 _CallSETranslator

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x10004c6d;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1001b440 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}


// ==== 10004c99 TranslatorGuardHandler

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x10004d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}


// ==== 10004d36 _GetRangeOfTrysToCheck

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}


// ==== 10004da9 __CreateFrameInfo

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}


// ==== 10004dd1 __IsExceptionObjectToBeDestroyed

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}


// ==== 10004df2 __FindAndUnlinkFrame

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pvVar1 = p_Var2->_pFrameInfoChain;
  do {
    pvVar3 = pvVar1;
    if (*(int *)((int)pvVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pvVar1 = *(void **)((int)pvVar3 + 4);
  } while (param_1 != *(void **)((int)pvVar3 + 4));
  *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}


// ==== 10004e3e _CallCatchBlock2

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_1001b440 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_10004b94;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


// ==== 10004e9c __security_check_cookie

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1001b440) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 10004eab type_info::~type_info

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}


// ==== 10004eb9 type_info::`scalar_deleting_destructor'

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_10001000(this);
  }
  return this;
}


// ==== 10004ed5 type_info::operator==

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 10004ef0 __cfltcvt_init

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_1001b4f0 = __cfltcvt;
  PTR_LAB_1001b4f4 = &LAB_100070f3;
  PTR_LAB_1001b4f8 = &LAB_100070b1;
  PTR_LAB_1001b4fc = &LAB_100070e5;
  PTR_LAB_1001b500 = &LAB_1000705b;
  PTR_LAB_1001b504 = __cfltcvt;
  PTR_LAB_1001b508 = __cfltcvt_l;
  PTR_LAB_1001b50c = __fassign_l;
  PTR_LAB_1001b510 = __cropzeros_l;
  PTR_LAB_1001b514 = __forcdecpt_l;
  return;
}


// ==== 10004f50 __fpmath

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_1001d070 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


// ==== 10004f6e __ArrayUnwind

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


// ==== 10004fcc `eh_vector_destructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_10005017();
  return;
}


// ==== 10005017 FUN_10005017

void FUN_10005017(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// ==== 1000502f __CxxThrowException@8

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_10011f10;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}


// ==== 10005079 _rand

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  p_Var1->_holdrand = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


// ==== 1000509b FUN_1000509b

int __cdecl FUN_1000509b(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_100066c6(DAT_1001dc68);
  piVar2 = (int *)FUN_100066c6(DAT_1001dc64);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_1001dc68 = FUN_1000664f((int)pvVar5);
      }
      iVar6 = FUN_1000664f(param_1);
      *piVar2 = iVar6;
      DAT_1001dc64 = FUN_1000664f((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}


// ==== 10005183 __onexit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_10007e9b();
  p_Var1 = (_onexit_t)FUN_1000509b((int)_Func);
  FUN_100051b9();
  return p_Var1;
}


// ==== 100051b9 FUN_100051b9

void FUN_100051b9(void)

{
  FUN_10007ea4();
  return;
}


// ==== 100051bf _atexit

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// ==== 10005220 FUN_10005220

void __fastcall FUN_10005220(void *param_1)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_1001dc74 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_10008140(param_1);
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_10008568(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_10005278(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


// ==== 1000526f FUN_1000526f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000526f(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000850c();
    }
    if (DAT_1001d06c == 0) {
      __startOneArgErrorHandling
                (&DAT_1001b470,0x1e,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_100128ca) * _DAT_100128ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_1001d06c == 0) {
      uVar1 = __math_exit(&DAT_1001b470,0x1e,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 10005278 FUN_10005278

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_10005278(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000850c();
    }
    if (DAT_1001d06c == 0) {
      __startOneArgErrorHandling(&DAT_1001b470,0x1e,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_100128ca) * _DAT_100128ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_1001d06c == 0) {
      uVar1 = __math_exit(&DAT_1001b470,0x1e,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 10005350 FUN_10005350

void __fastcall FUN_10005350(void *param_1)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_1001dc74 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100086d0(param_1);
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_10008568(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100053a8(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


// ==== 1000539f FUN_1000539f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000539f(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000850c();
    }
    if (DAT_1001d06c == 0) {
      __startOneArgErrorHandling
                (&DAT_1001b480,0x12,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_100128ca) * _DAT_100128ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_1001d06c == 0) {
      uVar1 = __math_exit(&DAT_1001b480,0x12,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 100053a8 FUN_100053a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_100053a8(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000850c();
    }
    if (DAT_1001d06c == 0) {
      __startOneArgErrorHandling(&DAT_1001b480,0x12,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_100128ca) * _DAT_100128ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_1001d06c == 0) {
      uVar1 = __math_exit(&DAT_1001b480,0x12,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 10005440 FUN_10005440

ulonglong __fastcall FUN_10005440(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_1001dc78 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


// ==== 100054eb __CRT_INIT@12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2005 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar5;
  int iVar6;
  DWORD *_Memory;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  DWORD *pDVar11;
  
  if (param_2 == 1) {
    dwBytes = 0x94;
    DVar9 = 0;
    pvVar4 = GetProcessHeap();
    lpVersionInformation = HeapAlloc(pvVar4,DVar9,dwBytes);
    if (lpVersionInformation != (LPOSVERSIONINFOA)0x0) {
      lpVersionInformation->dwOSVersionInfoSize = 0x94;
      BVar5 = GetVersionExA(lpVersionInformation);
      DVar9 = 0;
      if (BVar5 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
      }
      else {
        DVar1 = lpVersionInformation->dwPlatformId;
        DVar2 = lpVersionInformation->dwMajorVersion;
        DVar3 = lpVersionInformation->dwMinorVersion;
        uVar8 = lpVersionInformation->dwBuildNumber & 0x7fff;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
        if (DVar1 != 2) {
          uVar8 = uVar8 | 0x8000;
        }
        _DAT_1001d3dc = DVar2 * 0x100 + DVar3;
        DAT_1001d3d4 = DVar1;
        _DAT_1001d3d8 = uVar8;
        DAT_1001d3e0 = DVar2;
        _DAT_1001d3e4 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_1001dc7c = GetCommandLineA();
            DAT_1001d078 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_1001d074 = DAT_1001d074 + 1;
                return 1;
              }
              __ioterm();
            }
            __mtterm();
          }
          __heap_term();
        }
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_1001d074) {
      DAT_1001d074 = DAT_1001d074 + -1;
      if (DAT_1001d410 == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    FUN_1000673d();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_1001b4d0;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_100066c6(DAT_1001d090);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_100067ac((int)_Memory,0);
        DVar9 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar9;
        return 1;
      }
      _free(_Memory);
    }
  }
  return 0;
}


// ==== 100056c4 ___DllMainCRTStartup

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10005756) */
/* WARNING: Removing unreachable block (ram,0x10005703) */
/* WARNING: Removing unreachable block (ram,0x10005783) */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  if (((param_2 == 0) && (DAT_1001d074 == 0)) ||
     (((param_2 == 1 || (param_2 == 2)) &&
      (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)))) {
    local_20 = 0;
  }
  else {
    local_20 = _DllMain_12(param_3);
    if ((param_2 == 1) && (local_20 == 0)) {
      _DllMain_12(param_3);
      __CRT_INIT_12(param_3,0,param_1);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  return local_20;
}


// ==== 100057ba entry

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}


// ==== 100057db FUN_100057db

void __cdecl FUN_100057db(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}


// ==== 10005862 __VEC_memcpy

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_100057db(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}


// ==== 10005964 FUN_10005964

exception * __thiscall FUN_10005964(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_10001000(this);
  }
  return this;
}


// ==== 10005986 ___TypeMatch

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100059dc:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100059ba:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100059dc;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100059ba;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== 10005a26 ___FrameUnwindToState

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_10005aec();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


// ==== 10005aec FUN_10005aec

void FUN_10005aec(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}


// ==== 10005b4c ___DestructExceptionObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(param_1[7] + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    FID_conflict__CallMemberFunction1(param_1[6],UNRECOVERED_JUMPTABLE);
  }
  return;
}


// ==== 10005ba0 ___AdjustPointer

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}


// ==== 10005bc5 IsInExceptionSpec

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  uchar extraout_AL;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_AL;
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}


// ==== 10005c3e CallUnexpected

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  return;
}


// ==== 10005c6f Catch_All@10005c6f

void Catch_All_10005c6f(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10005c87 CallCatchBlock

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100150c8;
  uStack_c = 0x10005c93;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_10005dad();
  return local_20;
}


// ==== 10005dad FUN_10005dad

void FUN_10005dad(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}


// ==== 10005e23 ___BuildCatchObjectHelper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_10005ea8;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_10005ea8:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


// ==== 10005fa2 ___BuildCatchObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  return;
}


// ==== 10006033 CatchIt

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}


// ==== 1000609f FindHandlerForForeignException

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    uVar6 = extraout_var;
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < uVar6);
    }
  }
  return;
}


// ==== 10006191 FindHandler

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  uchar uVar3;
  bool bVar4;
  _ptiddata p_Var5;
  int iVar6;
  _s_TryBlockMapEntry *p_Var7;
  EHRegistrationNode *unaff_EBX;
  int iVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  undefined4 in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var10 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var11 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar6 = *(int *)(param_1 + 0x14), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      p_Var11 = p_Var5->_curexception;
      param_1 = (EHExceptionRecord *)p_Var11;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      iVar6 = _ValidateRead(p_Var11,1);
      if (iVar6 == 0) {
        _inconsistency();
      }
      if ((((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var11->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar2 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        iVar6 = 0;
        p_Var5->_curexcspec = (void *)0x0;
        uVar3 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        p_Var11 = (_s_FuncInfo *)param_1;
        if (uVar3 == '\0') {
          iVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(iVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_10011f44;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_1001512c);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_100062cf;
        }
      }
    }
    p_Var10 = param_5;
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_1c = p_Var7->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
              pHVar9 = p_Var11->pESTypeList[1].pTypeArray;
              for (local_18 = pHVar9->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar9 = (HandlerType *)&pHVar9->pType;
                p_Var10 = *(_s_FuncInfo **)pHVar9;
                iVar6 = ___TypeMatch((byte *)local_10,(byte *)p_Var10,(uint *)p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffd0,0));
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_100063f9;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_100063f9:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)p_Var11);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_100064cf;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = p_Var11;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      pEVar12 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar12 = param_2;
      }
      _UnwindNestedFrames(pEVar12,(EHExceptionRecord *)p_Var11);
      p_Var11 = param_5;
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(p_Var11->pESTypeList);
      p_Var10 = param_5;
    }
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_100062cf:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_100064cf:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}


// ==== 100064ff ___InternalCxxFrameHandler

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}


// ==== 100065e3 FUN_100065e3

undefined4 FUN_100065e3(void)

{
  int iVar1;
  HMODULE pHVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  __get_winmajor(&local_8);
  if (local_8 < 6) {
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    iVar1 = pHVar2[0xf].unused;
    _Str2 = (char *)((int)&pHVar2[6].unused +
                    iVar1 + (uint)*(ushort *)((int)&pHVar2[5].unused + iVar1));
    if (*(short *)((int)&pHVar2[1].unused + iVar1 + 2) != 0) {
      do {
        iVar3 = _strcmp(".mixcrt",_Str2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        _Str2 = _Str2 + 0x28;
      } while (uVar4 < *(ushort *)((int)&pHVar2[1].unused + iVar1 + 2));
    }
  }
  return 1;
}


// ==== 1000664f FUN_1000664f

int __cdecl FUN_1000664f(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001b4d4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001b4d0 != -1)) {
    iVar3 = DAT_1001b4d0;
    pcVar2 = TlsGetValue(DAT_1001b4d4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_100066a9;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_100065e3();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_100066a9:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 100066bd __encoded_null

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1000664f(0);
  return;
}


// ==== 100066c6 FUN_100066c6

int __cdecl FUN_100066c6(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001b4d4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001b4d0 != -1)) {
    iVar3 = DAT_1001b4d0;
    pcVar2 = TlsGetValue(DAT_1001b4d4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_10006720;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_100065e3();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_10006720:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 1000673d FUN_1000673d

LPVOID FUN_1000673d(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1001b4d4);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_100066c6(DAT_1001d08c);
    TlsSetValue(DAT_1001b4d4,lpTlsValue);
  }
  return lpTlsValue;
}


// ==== 1000676f __mtterm

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1001b4d0 != -1) {
    iVar2 = DAT_1001b4d0;
    pcVar1 = (code *)FUN_100066c6(DAT_1001d094);
    (*pcVar1)(iVar2);
    DAT_1001b4d0 = -1;
  }
  if (DAT_1001b4d4 != 0xffffffff) {
    TlsFree(DAT_1001b4d4);
    DAT_1001b4d4 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


// ==== 100067ac FUN_100067ac

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_100067ac(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_1001b590;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_100065e3();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,"EncodePointer");
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,"DecodePointer");
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_1001b838;
  InterlockedIncrement((LONG *)&DAT_1001b838);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1001b828;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_10006862();
  return;
}


// ==== 10006862 FUN_10006862

void FUN_10006862(void)

{
  FUN_10009963(0xc);
  return;
}


// ==== 1000686b FUN_1000686b

DWORD * FUN_1000686b(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1001b4d0;
  pcVar1 = FUN_1000673d();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1001b4d0;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_100066c6(DAT_1001d090);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_100067ac((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}


// ==== 100068e2 __getptd

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_1000686b();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


// ==== 100068fa __freefls@4

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_1001b590) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_1001b838)) {
        _free(pLVar1);
      }
    }
    FUN_10006a06();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_1001b828) && (pLVar1 != (LONG *)&DAT_1001b750)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_10006a12();
    _free(param_1);
  }
  return;
}


// ==== 10006a06 FUN_10006a06

void FUN_10006a06(void)

{
  FUN_10009963(0xd);
  return;
}


// ==== 10006a12 FUN_10006a12

void FUN_10006a12(void)

{
  FUN_10009963(0xc);
  return;
}


// ==== 10006a1b __freeptd

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1001b4d0 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1001b4d4), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1001b4d0;
      pcVar2 = TlsGetValue(DAT_1001b4d4);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1001b4d0;
    pcVar2 = (code *)FUN_100066c6(DAT_1001d090);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1001b4d4 != 0xffffffff) {
    TlsSetValue(DAT_1001b4d4,(LPVOID)0x0);
  }
  return;
}


// ==== 10006a84 __mtinit

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  code *pcVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_1001d088 = GetProcAddress(hModule,"FlsAlloc");
  DAT_1001d08c = GetProcAddress(hModule,"FlsGetValue");
  DAT_1001d090 = GetProcAddress(hModule,"FlsSetValue");
  DAT_1001d094 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_1001d088 == (FARPROC)0x0) || (DAT_1001d08c == (FARPROC)0x0)) ||
      (DAT_1001d090 == (FARPROC)0x0)) || (DAT_1001d094 == (FARPROC)0x0)) {
    DAT_1001d08c = TlsGetValue_exref;
    DAT_1001d088 = (FARPROC)&LAB_10006734;
    DAT_1001d090 = TlsSetValue_exref;
    DAT_1001d094 = TlsFree_exref;
  }
  DAT_1001b4d4 = TlsAlloc();
  if ((DAT_1001b4d4 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1001b4d4,DAT_1001d08c), BVar1 != 0))
  {
    __init_pointers();
    DAT_1001d088 = (FARPROC)FUN_1000664f((int)DAT_1001d088);
    DAT_1001d08c = (FARPROC)FUN_1000664f((int)DAT_1001d08c);
    DAT_1001d090 = (FARPROC)FUN_1000664f((int)DAT_1001d090);
    DAT_1001d094 = (FARPROC)FUN_1000664f((int)DAT_1001d094);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_100066c6((int)DAT_1001d088);
      DAT_1001b4d0 = (*pcVar3)(pcVar6);
      if ((DAT_1001b4d0 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1001b4d0;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_100066c6((int)DAT_1001d090);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_100067ac((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}


// ==== 10006c08 terminate

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 10006c41 unexpected

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}


// ==== 10006c54 _inconsistency

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_100066c6(DAT_1001d098);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}


// ==== 10006c8b __initp_eh_hooks

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_1001d098 = FUN_1000664f(0x10006c08);
  return;
}


// ==== 10006ca0 __CallSettingFrame@12

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}


// ==== 10006cec ___report_gsfailure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_1001d1b8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1001d1bc = &stack0x00000004;
  _DAT_1001d0f8 = 0x10001;
  _DAT_1001d0a0 = 0xc0000409;
  _DAT_1001d0a4 = 1;
  local_32c = DAT_1001b440;
  local_328 = DAT_1001b444;
  _DAT_1001d0ac = unaff_retaddr;
  _DAT_1001d184 = in_GS;
  _DAT_1001d188 = in_FS;
  _DAT_1001d18c = in_ES;
  _DAT_1001d190 = in_DS;
  _DAT_1001d194 = unaff_EDI;
  _DAT_1001d198 = unaff_ESI;
  _DAT_1001d19c = unaff_EBX;
  _DAT_1001d1a0 = in_EDX;
  _DAT_1001d1a4 = in_ECX;
  _DAT_1001d1a8 = in_EAX;
  _DAT_1001d1ac = unaff_EBP;
  DAT_1001d1b0 = unaff_retaddr;
  _DAT_1001d1b4 = in_CS;
  _DAT_1001d1c0 = in_SS;
  DAT_1001d0f0 = IsDebuggerPresent();
  FUN_1000a65b();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10011fb8);
  if (DAT_1001d0f0 == 0) {
    FUN_1000a65b();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 10006df0 type_info::_Type_info_dtor

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_1001d3c8;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1001d3c4;
    do {
      piVar2 = piVar1;
      if (DAT_1001d3c8 == (int *)0x0) goto LAB_10006e34;
      piVar1 = DAT_1001d3c8;
    } while (*DAT_1001d3c8 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_1001d3c8[1];
    _free(_Memory);
LAB_10006e34:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_10006e57();
  return;
}


// ==== 10006e57 FUN_10006e57

void FUN_10006e57(void)

{
  FUN_10009963(0xe);
  return;
}


// ==== 10006e60 _strcmp

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10006ea4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10006e70;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10006ea4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10006ea4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10006e70:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10006ea4:
  return (uint)bVar5 * -2 + 1;
}


// ==== 10006ee8 _LocaleUpdate::_LocaleUpdate

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_1001b828) && ((p_Var2->_ownlocale & DAT_1001bd70) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1001bc60) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1001bd70) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}


// ==== 10006f6a __forcdecpt_l

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 10006fdb __cropzeros_l

/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 10007071 __fassign_l

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}


// ==== 100070c8 __shift

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}


// ==== 10007101 __cftoe2_l

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    uVar7 = 0x16;
  }
  else {
    iVar3 = param_2;
    if (param_2 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      puVar6 = puVar5;
      if (0 < param_2) {
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar6;
        *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar6 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar9 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar3 = param_4[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          pcVar9 = (char *)0x64;
          iVar4 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar3) {
          pcVar9 = (char *)0xa;
          iVar4 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
      }
      if (((DAT_1001d6f8 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return pcVar9;
    }
    puVar1 = (undefined4 *)FUN_1000ad0a();
    uVar7 = 0x22;
  }
  uVar8 = 0;
  *puVar1 = uVar7;
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar8;
}


// ==== 1000726e __cftoe_l

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    *puVar1 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1000733c __cftoe

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}


// ==== 1000735a __cftoa_l

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  size_t _SizeInBytes;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar7;
  errno_t unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  errno_t eVar14;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_1000ad0a();
    uVar13 = 0x16;
LAB_10007393:
    eVar14 = 0;
    *puVar2 = uVar13;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar2 = (undefined4 *)FUN_1000ad0a();
    uVar13 = 0x22;
    goto LAB_10007393;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar14 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar14 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar3 = _strrchr(param_2 + 2,0x65);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar3[3] = '\0';
    }
    goto LAB_100076b7;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar7 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar9 = param_2 + 3;
  pcVar3 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar9 = '\0';
  }
  else {
    *pcVar9 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar11 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar7;
      }
      local_8 = local_8 + -4;
      *pcVar3 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar3 = pcVar3 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar8 = pcVar3, 8 < (ushort)uVar11)) {
      while( true ) {
        pcVar4 = pcVar8 + -1;
        if ((*pcVar4 != 'f') && (*pcVar4 != 'F')) break;
        *pcVar4 = '0';
        pcVar8 = pcVar4;
      }
      if (pcVar4 == pcVar9) {
        pcVar8[-2] = pcVar8[-2] + '\x01';
      }
      else if (*pcVar4 == '9') {
        *pcVar4 = (char)sVar7 + ':';
      }
      else {
        *pcVar4 = *pcVar4 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar3,0x30,param_4);
    pcVar3 = pcVar3 + param_4;
  }
  if (*pcVar9 == '\0') {
    pcVar3 = pcVar9;
  }
  *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar11 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar5 = (uint)(uVar11 & 0x7ff);
  uVar6 = uVar5 - local_18;
  uVar5 = -(uint)(uVar5 < local_18);
  if ((int)uVar5 < 0) {
    pcVar3[1] = '-';
    bVar10 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar10);
  }
  else {
    pcVar3[1] = '+';
  }
  pcVar8 = pcVar3 + 2;
  *pcVar8 = '0';
  pcVar9 = pcVar8;
  if (((int)uVar5 < 0) || (((int)uVar5 < 1 && (uVar6 < 1000)))) {
LAB_10007666:
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (99 < uVar6)))) goto LAB_10007671;
  }
  else {
    uVar12 = __alldvrm(uVar6,uVar5,1000,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar8 = (char)uVar12 + '0';
    pcVar9 = pcVar3 + 3;
    uVar5 = 0;
    uVar6 = extraout_ECX;
    if (pcVar9 == pcVar8) goto LAB_10007666;
LAB_10007671:
    uVar12 = __alldvrm(uVar6,uVar5,100,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar5 = 0;
    uVar6 = extraout_ECX_00;
  }
  if ((pcVar9 != pcVar8) || ((-1 < (int)uVar5 && ((0 < (int)uVar5 || (9 < uVar6)))))) {
    uVar12 = __alldvrm(uVar6,uVar5,10,0);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar6 = extraout_ECX_01;
  }
  *pcVar9 = (char)uVar6 + '0';
  pcVar9[1] = '\0';
LAB_100076b7:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}


// ==== 100076cb __cftof2_l

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_1000ad0a();
    uVar4 = 0x16;
    *puVar2 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== 100077c0 __cftof_l

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    *puVar1 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10007879 __cftog_l

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_1000ad0a();
    *puVar2 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10007971 __cfltcvt_l

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  errno_t extraout_EAX;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
      eVar1 = extraout_EAX;
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}


// ==== 100079f7 __cfltcvt

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}


// ==== 10007a18 __initp_misc_cfltcvt_tab

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_1001b4f0 + uVar3);
    iVar2 = FUN_1000664f(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}


// ==== 10007a37 __setdefaultprecision

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2005 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}


// ==== 10007a60 __ms_p5_test_fdiv

/* WARNING: Removing unreachable block (ram,0x10007a93) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}


// ==== 10007a9c __ms_p5_mp_test_fdiv

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}


// ==== 10007ac8 __SEH_prolog4

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001b440 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 10007b0d __SEH_epilog4

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


// ==== 10007b30 __except_handler4

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1001b440);
  bVar3 = false;
  local_c = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)((int)param_2 + -4) = &local_8;
    uVar7 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return 1;
    }
    do {
      uVar2 = piVar8[uVar7 * 3 + 4];
      if ((undefined *)piVar8[uVar7 * 3 + 5] != (undefined *)0x0) {
        iVar4 = _EH4_CallFilterFunc((undefined *)piVar8[uVar7 * 3 + 5]);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_10007bdb;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_10011f34)
             , BVar5 != 0)) {
            ___DestructExceptionObject(param_1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1001b440);
          }
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((undefined *)(piVar8 + uVar7 * 3 + 4)[2]);
          return uVar6;
        }
      }
      uVar7 = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1001b440);
  }
LAB_10007bdb:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}


// ==== 10007cc6 __malloc_crt

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_1001d3cc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1001d3cc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 10007d06 __calloc_crt

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1001d3cc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1001d3cc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 10007d4e __realloc_crt

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_1001d3cc == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1001d3cc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 10007d99 __msize

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    *puVar1 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_1001db3c == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1000b760(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_10007e33();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_1001d524,0,_Memory);
  }
  return sVar2;
}


// ==== 10007e33 FUN_10007e33

void FUN_10007e33(void)

{
  FUN_10009963(4);
  return;
}


// ==== 10007e3c __amsg_exit

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1000c1f3(param_1);
  pcVar1 = (code *)FUN_100066c6((int)PTR___exit_1001b518);
  (*pcVar1)(0xff);
  return;
}


// ==== 10007e60 FUN_10007e60

void __cdecl FUN_10007e60(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}


// ==== 10007e86 ___crtExitProcess

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_10007e60(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ==== 10007e9b FUN_10007e9b

void FUN_10007e9b(void)

{
  __lock(8);
  return;
}


// ==== 10007ea4 FUN_10007ea4

void FUN_10007ea4(void)

{
  FUN_10009963(8);
  return;
}


// ==== 10007ead FUN_10007ead

void __cdecl FUN_10007ead(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


// ==== 10007ec5 __initterm_e

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10007ee5 __get_osplatform

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_1001d3d4 != 0)) {
    *param_1 = DAT_1001d3d4;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_1000ad0a();
  *puVar1 = 0x16;
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10007f1c __get_winmajor

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_1001d3d4 != 0)) {
    *param_1 = DAT_1001d3e0;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_1000ad0a();
  *puVar1 = 0x16;
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10007f58 __cinit

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_10011f04);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1001169c,(undefined4 *)&DAT_100116b0);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1000901b);
    puVar3 = &DAT_10011684;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_10011698);
    if ((DAT_1001dc70 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1001dc70), BVar1 != 0)) {
      (*DAT_1001dc70)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 10007fea FUN_10007fea

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x100080bd) */

void __cdecl FUN_10007fea(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_1001d414 != 1) {
    DAT_1001d410 = 1;
    DAT_1001d40c = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_100066c6(DAT_1001dc68);
      piVar3 = (int *)FUN_100066c6(DAT_1001dc64);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_100066c6(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_10007ead((undefined4 *)&DAT_100116b8);
    }
    FUN_10007ead((undefined4 *)&DAT_100116c0);
  }
  FUN_100080b7();
  if (param_3 != 0) {
    return;
  }
  DAT_1001d414 = 1;
  FUN_10009963(8);
  ___crtExitProcess(param_1);
  return;
}


// ==== 100080b7 FUN_100080b7

void FUN_100080b7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10009963(8);
  }
  return;
}


// ==== 100080cc __exit

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_10007fea(_Code,1,0);
  return;
}


// ==== 100080dd __cexit

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_10007fea(0,0,1);
  return;
}


// ==== 100080ec __init_pointers

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1000c6c9(uVar1);
  FUN_1000c5ea(uVar1);
  FUN_1000a663(uVar1);
  FUN_1000c5e0(uVar1);
  FUN_1000c5d6(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_10009168();
  __initp_eh_hooks();
  PTR___exit_1001b518 = (undefined *)FUN_1000664f(0x100080cc);
  return;
}


// ==== 10008140 FUN_10008140

void __fastcall FUN_10008140(void *param_1)

{
  float10 in_ST0;
  
  FUN_1000815e(param_1,SUB84((double)in_ST0,0));
  return;
}


// ==== 1000815e FUN_1000815e

float10 __thiscall FUN_1000815e(void *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = dVar8 * 3.798187816439979e-12;
    dVar3 = in_XMM0_Qa - dVar8 * 0.09817477042088285;
    dVar13 = in_XMM0_Qa - dVar8 * 0.09817477042088285;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - dVar8 * 3.798187816439979e-12;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&DAT_10012020 + iVar2) + *(double *)(&DAT_10012038 + iVar2);
    dVar11 = *(double *)(&DAT_10012038 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_10012020 + iVar2);
    dVar12 = dVar11 + *(double *)(&DAT_10012028 + iVar2);
    dVar16 = dVar15 + dVar12;
    return (float10)(dVar16 + (dVar8 * 1.2639164054974691e-22 - ((dVar13 - dVar14) - dVar9)) *
                              (*(double *)(&DAT_10012028 + iVar2) * dVar14 - dVar10) +
                              *(double *)(&DAT_10012030 + iVar2) +
                              (*(double *)(&DAT_10012028 + iVar2) - dVar12) + dVar11 +
                              (dVar12 - dVar16) + dVar15 +
                              (dVar5 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar3 * 2.7557319223985893e-06 * dVar4 + -0.0001984126984126984) *
                              dVar5 * dVar5) * dVar10 * dVar14 * dVar5 +
                              (dVar7 * 0.041666666666666664 + -0.5 +
                              (dVar3 * 2.48015873015873e-05 * dVar6 + -0.001388888888888889) *
                              dVar7 * dVar7) * *(double *)(&DAT_10012028 + iVar2) * dVar7);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_XMM0_Qa * 0.9999999999999999);
    }
    return (float10)in_XMM0_Qa;
  }
  FUN_1000526f(param_1,param_2);
  return extraout_ST0;
}


// ==== 1000850c FUN_1000850c

undefined4 FUN_1000850c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}


// ==== 10008525 __fload_withFB

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}


// ==== 10008568 FUN_10008568

uint __cdecl FUN_10008568(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


// ==== 1000858b __math_exit

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}


// ==== 10008670 FUN_10008670

float10 __fastcall
FUN_10008670(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}


// ==== 10008687 __startOneArgErrorHandling

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio 2005 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)local_c;
}


// ==== 100086d0 FUN_100086d0

void __fastcall FUN_100086d0(void *param_1)

{
  float10 in_ST0;
  
  FUN_100086ee(param_1,SUB84((double)in_ST0,0));
  return;
}


// ==== 100086ee FUN_100086ee

float10 __thiscall FUN_100086ee(void *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar14 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_10012910 + iVar3) + *(double *)(&DAT_10012928 + iVar3);
    dVar12 = *(double *)(&DAT_10012928 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_10012910 + iVar3);
    dVar13 = dVar12 + *(double *)(&DAT_10012918 + iVar3);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * 1.2639164054974691e-22 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_10012918 + iVar3) * dVar15 - dVar11) +
                              *(double *)(&DAT_10012920 + iVar3) +
                              (*(double *)(&DAT_10012918 + iVar3) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar15 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_10012918 + iVar3) * dVar8);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  FUN_1000539f(param_1,param_2);
  return extraout_ST0;
}


// ==== 1000887c _free

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_1001db3c == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1000b760(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_100088d2();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_1001d524,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_1000ad0a();
      DVar4 = GetLastError();
      iVar5 = FUN_1000accf(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}


// ==== 100088d2 FUN_100088d2

void FUN_100088d2(void)

{
  FUN_10009963(4);
  return;
}


// ==== 1000890a __ioinit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  UINT UVar10;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x10008916;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10008b41:
    iVar7 = -1;
  }
  else {
    DAT_1001db40 = 0x20;
    DAT_1001db60 = puVar2;
    for (; puVar2 < DAT_1001db60 + 0x1c0; puVar2 = puVar2 + 0xe) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      iVar7 = 1;
      while ((UVar10 = UVar9, (int)DAT_1001db40 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_1001db40, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_1001db60)[iVar7] = puVar2;
        DAT_1001db40 = DAT_1001db40 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_1001db60)[iVar7];
        }
        iVar7 = iVar7 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar10) {
        do {
          pvVar4 = *(HANDLE *)local_20;
          if ((((pvVar4 != (HANDLE)0xffffffff) && (pvVar4 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar4), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_1001db60)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_10008b41;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar10);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_1001db60 + iVar7 * 0xe;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar4 = GetStdHandle(DVar3);
        if (((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar4), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar4;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          iVar5 = ___crtInitCritSecAndSpinCount(piVar8 + 3,4000);
          if (iVar5 == 0) goto LAB_10008b41;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_1001db40);
    iVar7 = 0;
  }
  return iVar7;
}


// ==== 10008b4a __ioterm

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_1001db60;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x700; uVar3 = uVar3 + 0x38) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x1001dc60);
  return;
}


// ==== 10008b96 __setenvp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_1001dc6c == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_1001d078;
  if (DAT_1001d078 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_1001d078;
    DAT_1001d3f4 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_1001d078);
          DAT_1001d078 = (char *)0x0;
          *puVar1 = 0;
          _DAT_1001dc60 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_1001d3f4);
            DAT_1001d3f4 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}


// ==== 10008c71 parse_cmdline

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_10008d03;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10008d03:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}


// ==== 10008e09 __setargv

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_1001dc6c == 0) {
    ___initmbctable();
  }
  DAT_1001d51c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1001d418,0x104);
  _DAT_1001d404 = &DAT_1001d418;
  if ((DAT_1001dc7c == (char *)0x0) || (local_8 = DAT_1001dc7c, *DAT_1001dc7c == '\0')) {
    local_8 = &DAT_1001d418;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1001d3e8 = local_c - 1;
      _DAT_1001d3ec = puVar2;
      return 0;
    }
  }
  return -1;
}


// ==== 10008ec2 ___crtGetEnvironmentStringsA

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2005 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_1001d520 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1001d520 = 1;
      goto LAB_10008f14;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_1001d520 = 2;
    }
  }
  if (DAT_1001d520 != 1) {
    if ((DAT_1001d520 != 2) && (DAT_1001d520 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_10008f14:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}


// ==== 10008ff7 __RTC_Initialize

/* WARNING: Removing unreachable block (ram,0x10009009) */
/* WARNING: Removing unreachable block (ram,0x1000900f) */
/* WARNING: Removing unreachable block (ram,0x10009011) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}


// ==== 1000903f ___heap_select

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}


// ==== 1000909a __heap_init

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_1001d524 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_1001d524 == (HANDLE)0x0) {
    return 0;
  }
  DAT_1001db3c = ___heap_select();
  if ((DAT_1001db3c == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_1001d524);
    DAT_1001d524 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}


// ==== 100090f4 __heap_term

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1001db3c == 3) {
    iVar2 = 0;
    if (0 < DAT_1001db20) {
      puVar1 = (undefined4 *)((int)DAT_1001db24 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_1001d524,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_1001db20);
    }
    HeapFree(DAT_1001d524,0,DAT_1001db24);
  }
  HeapDestroy(DAT_1001d524);
  DAT_1001d524 = (HANDLE)0x0;
  return;
}


// ==== 10009168 FUN_10009168

void FUN_10009168(void)

{
  return;
}


// ==== 10009169 FUN_10009169

undefined4 __cdecl FUN_10009169(int param_1,DWORD param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pDVar5 = FUN_1000686b();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1001b614 * 3);
    if ((piVar1 + DAT_1001b614 * 3 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 == (int *)0x0) || (pcVar2 = (code *)piVar6[2], pcVar2 == (code *)0x0)) {
      uVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar6[2] = 0;
      uVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        DVar3 = pDVar5[0x18];
        pDVar5[0x18] = param_2;
        if (piVar6[1] == 8) {
          if (DAT_1001b608 < DAT_1001b60c + DAT_1001b608) {
            iVar8 = DAT_1001b608 * 0xc;
            iVar9 = DAT_1001b608;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_1001b60c + DAT_1001b608);
          }
          iVar9 = *piVar6;
          DVar4 = pDVar5[0x19];
          if (iVar9 == -0x3fffff72) {
            pDVar5[0x19] = 0x83;
          }
          else if (iVar9 == -0x3fffff70) {
            pDVar5[0x19] = 0x81;
          }
          else if (iVar9 == -0x3fffff6f) {
            pDVar5[0x19] = 0x84;
          }
          else if (iVar9 == -0x3fffff6d) {
            pDVar5[0x19] = 0x85;
          }
          else if (iVar9 == -0x3fffff73) {
            pDVar5[0x19] = 0x82;
          }
          else if (iVar9 == -0x3fffff71) {
            pDVar5[0x19] = 0x86;
          }
          else if (iVar9 == -0x3fffff6e) {
            pDVar5[0x19] = 0x8a;
          }
          (*pcVar2)(8,pDVar5[0x19]);
          pDVar5[0x19] = DVar4;
        }
        else {
          piVar6[2] = 0;
          (*pcVar2)(piVar6[1]);
        }
        pDVar5[0x18] = DVar3;
      }
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}


// ==== 100092e2 ___security_init_cookie

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_1001b440 == 0xbb40e64e) || ((DAT_1001b440 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1001b440 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1001b440 == 0xbb40e64e) {
      DAT_1001b440 = 0xbb40e64f;
    }
    else if ((DAT_1001b440 & 0xffff0000) == 0) {
      DAT_1001b440 = DAT_1001b440 | DAT_1001b440 << 0x10;
    }
  }
  DAT_1001b444 = ~DAT_1001b440;
  return;
}


// ==== 10009376 FUN_10009376

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_10009376(void)

{
  return 1;
}


// ==== 100093c6 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x10009401) */
/* WARNING: Removing unreachable block (ram,0x100093ee) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_10009376(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 10009433 std::exception::exception

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


// ==== 10009481 FUN_10009481

undefined4 * __thiscall FUN_10009481(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = std::exception::vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)((int)this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)((int)this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}


// ==== 100094d9 exception::~exception

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}


// ==== 100094ef FUN_100094ef

char * __fastcall FUN_100094ef(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


// ==== 100094fc FUN_100094fc

exception * __thiscall FUN_100094fc(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_10001000(this);
  }
  return this;
}


// ==== 10009518 __EH_prolog3_catch

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001b440 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 1000954e _ValidateRead

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}


// ==== 10009560 _memmove

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_10009743_caseD_2;
        case 3:
          goto switchD_10009743_caseD_3;
        }
        goto switchD_10009743_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10009743_caseD_0;
      case 1:
        goto switchD_10009743_caseD_1;
      case 2:
        goto switchD_10009743_caseD_2;
      case 3:
        goto switchD_10009743_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10009743_caseD_2;
            case 3:
              goto switchD_10009743_caseD_3;
            }
            goto switchD_10009743_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10009743_caseD_2;
            case 3:
              goto switchD_10009743_caseD_3;
            }
            goto switchD_10009743_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_10009743_caseD_2;
            case 3:
              goto switchD_10009743_caseD_3;
            }
            goto switchD_10009743_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_10009743_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10009743_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10009743_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10009743_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1001dc78 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100095bc_caseD_2;
      case 3:
        goto switchD_100095bc_caseD_3;
      }
      goto switchD_100095bc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100095bc_caseD_0;
    case 1:
      goto switchD_100095bc_caseD_1;
    case 2:
      goto switchD_100095bc_caseD_2;
    case 3:
      goto switchD_100095bc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100095bc_caseD_2;
          case 3:
            goto switchD_100095bc_caseD_3;
          }
          goto switchD_100095bc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100095bc_caseD_2;
          case 3:
            goto switchD_100095bc_caseD_3;
          }
          goto switchD_100095bc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100095bc_caseD_2;
          case 3:
            goto switchD_100095bc_caseD_3;
          }
          goto switchD_100095bc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100095bc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100095bc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100095bc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100095bc_caseD_0:
  return _Dst;
}


// ==== 100098c5 __mtinitlocks

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_1001d528;
  do {
    if ((&DAT_1001b624)[iVar2 * 2] == 1) {
      (&DAT_1001b620)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1001b620)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1001b620)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


// ==== 1000990e __mtdeletelocks

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1001b620;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001b740);
  puVar1 = &DAT_1001b620;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001b740);
  return;
}


// ==== 10009963 FUN_10009963

void __cdecl FUN_10009963(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1001b620)[param_1 * 2]);
  return;
}


// ==== 10009978 __mtinitlocknum

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_1001d524 == 0) {
    __FF_MSGBANNER();
    FUN_1000c1f3(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1001b620 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_1000ad0a();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_1000ad0a();
          *puVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_10009a32();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// ==== 10009a32 FUN_10009a32

void FUN_10009a32(void)

{
  FUN_10009963(10);
  return;
}


// ==== 10009a3b __lock

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1001b620)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1001b620)[_File * 2]);
  return;
}


// ==== 10009a6c ___freetlocinfo

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1001c070)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_1001bfb0) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1001b748) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}


// ==== 10009bac ___addlocaleref

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_1001b748) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}


// ==== 10009c32 ___removelocaleref

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_1001b748) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}


// ==== 10009cbe __updatetlocinfoEx_nolock

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1001b750)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}


// ==== 10009cfc ___updatetlocinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1001bd70) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_10009d66();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}


// ==== 10009d66 FUN_10009d66

void FUN_10009d66(void)

{
  FUN_10009963(0xc);
  return;
}


// ==== 10009d72 FUN_10009d72

undefined4 FUN_10009d72(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}


// ==== 10009da1 setSBCS

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_1001b838 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1001b838 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 10009df6 setSBUpLow

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_10009f5d:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_10009f5d;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_10009f04;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_10009f04:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}


// ==== 10009f80 ___updatetmbcinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1001bd70) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1001bc60) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1001b838)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1001bc60;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1001bc60;
      InterlockedIncrement((LONG *)PTR_DAT_1001bc60);
    }
    FUN_1000a01b();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


// ==== 1000a01b FUN_1000a01b

void FUN_1000a01b(void)

{
  FUN_10009963(0xd);
  return;
}


// ==== 1000a024 getSystemCP

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_1001d69c = 0;
  if (unaff_ESI == -2) {
    DAT_1001d69c = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_1001d69c = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_1001d69c = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_1001d69c = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}


// ==== 1000a09e FUN_1000a09e

void __cdecl FUN_1000a09e(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  undefined4 extraout_EDX;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1000a0da:
    if (*(uint *)((int)&DAT_1001bc68 + uVar5) != uVar4) goto code_r0x1000a0e6;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1001bc78 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1001bc64);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_10009d72();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1001bc6c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1000a20b;
  }
LAB_1000a0c7:
  setSBCS(unaff_EDI);
LAB_1000a268:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x1000a0e6:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1000a0f3;
  goto LAB_1000a0da;
code_r0x1000a0f3:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1000a268;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar12 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar12;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar9 = FUN_10009d72();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000a20b:
    setSBUpLow(unaff_EDI);
    goto LAB_1000a268;
  }
  if (DAT_1001d69c == 0) goto LAB_1000a268;
  goto LAB_1000a0c7;
}


// ==== 1000a277 __setmbcp

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = FUN_1000a09e(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1001b838)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1001bd70 & 1) == 0)) {
          __lock(0xd);
          _DAT_1001d6ac = ptVar3->mbcodepage;
          _DAT_1001d6b0 = ptVar3->ismbcodepage;
          _DAT_1001d6b4 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_1001d6a0)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1001ba58)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1001bb60)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1001bc60);
          if ((LVar4 == 0) && (PTR_DAT_1001bc60 != &DAT_1001b838)) {
            _free(PTR_DAT_1001bc60);
          }
          PTR_DAT_1001bc60 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1000a3d8();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1001b838) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_1000ad0a();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}


// ==== 1000a3d8 FUN_1000a3d8

void FUN_1000a3d8(void)

{
  FUN_10009963(0xd);
  return;
}


// ==== 1000a411 ___initmbctable

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1001dc6c == 0) {
    __setmbcp(-3);
    DAT_1001dc6c = 1;
  }
  return 0;
}


// ==== 1000a42f _abort

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if ((DAT_1001bd58 & 1) != 0) {
    FUN_1000c1f3(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if ((DAT_1001bd58 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// ==== 1000a524 __global_unwind2

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000a53c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 1000a589 __local_unwind2

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_1000a544;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1000a658();
    }
  }
  ExceptionList = local_20;
  return;
}


// ==== 1000a630 __NLG_Notify1

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1001bd64 = param_1;
  DAT_1001bd60 = in_EAX;
  DAT_1001bd68 = unaff_EBP;
  return in_EAX;
}


// ==== 1000a639 __NLG_Notify

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1001bd64 = param_1;
  DAT_1001bd60 = in_EAX;
  DAT_1001bd68 = unaff_EBP;
  return;
}


// ==== 1000a658 FUN_1000a658

void FUN_1000a658(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}


// ==== 1000a65b FUN_1000a65b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a65b(void)

{
  _DAT_1001db38 = 0;
  return;
}


// ==== 1000a663 FUN_1000a663

void __cdecl FUN_1000a663(undefined4 param_1)

{
  DAT_1001d6b8 = param_1;
  return;
}


// ==== 1000a66d __invoke_watson

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  iVar1 = DAT_1001b440;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1000a65b();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}


// ==== 1000a769 FUN_1000a769

void __cdecl
FUN_1000a769(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_100066c6(DAT_1001d6b8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000a77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1000a65b();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 1000a78d _strcpy_s

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      puVar2 = (undefined4 *)FUN_1000ad0a();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_1000a7ac;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_1000ad0a();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1000a7ac:
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 1000a800 _strlen

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_1000a830;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000a863:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000a830:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_1000a863;
}


// ==== 1000a88b _V6_HeapAlloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_1001db28) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000a8d1();
  }
  return local_20;
}


// ==== 1000a8d1 FUN_1000a8d1

void FUN_1000a8d1(void)

{
  FUN_10009963(4);
  return;
}


// ==== 1000a8da _malloc

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_1000ad0a();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_1001d524 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1000c1f3(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_1001db3c == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_1000a94b:
      piVar1 = HeapAlloc(DAT_1001d524,0,dwBytes);
    }
    else if ((DAT_1001db3c != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_1000a94b;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1001da4c == 0) {
      puVar3 = (undefined4 *)FUN_1000ad0a();
      *puVar3 = 0xc;
      goto LAB_1000a979;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_1000a979:
      puVar3 = (undefined4 *)FUN_1000ad0a();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 1000a9a0 _strrchr

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


// ==== 1000a9cd __isdigit_l

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1000aa1c _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_1001d678 == 0) {
    return (byte)PTR_DAT_1001b818[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 1000aa45 __tolower_l

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_1000aaa4:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      puVar4 = (undefined4 *)FUN_1000ad0a();
      *puVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_1000aaa4;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}


// ==== 1000ab5c _tolower

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_1001d678 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 1000ab83 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1000dec5((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1000abda:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1000ac1a;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1000ac0c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1000ac1a;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1000ac0c;
    goto LAB_1000abda;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1000ac1a:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1000ac29 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1000dec5((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1000ac80:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1000acc0;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1000acb2:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1000acc0;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1000acb2;
    goto LAB_1000ac80;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1000acc0:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1000accf FUN_1000accf

int __cdecl FUN_1000accf(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1001bd78)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1001bd7c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}


// ==== 1000ad0a FUN_1000ad0a

undefined * FUN_1000ad0a(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000686b();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_1001bee0;
  }
  return (undefined *)(pDVar1 + 2);
}


// ==== 1000ad1d __fptostr

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    eVar7 = 0x16;
    *puVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf;
      for (; pcVar3 = pcVar3 + 1, 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    puVar1 = (undefined4 *)FUN_1000ad0a();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}


// ==== 1000adda ___dtold

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_1000ae8c;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_1000ae8c:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 1000ae95 __fltout2

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_1000e585(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var3;
}


// ==== 1000af30 __alldvrm

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 1000b010 _memset

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_1001dc78 != 0)) {
    pauVar2 = __VEC_memzero(_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ==== 1000b090 __aullshr

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}


// ==== 1000b0b8 __controlfp_s

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    puVar2 = (undefined4 *)FUN_1000ad0a();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}


// ==== 1000b124 __local_unwind4

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_1000b1b4;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1001b440 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1000a658();
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// ==== 1000b1fa FUN_1000b1fa

void FUN_1000b1fa(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}


// ==== 1000b216 _EH4_CallFilterFunc

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}


// ==== 1000b22d _EH4_TransferToHandler

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x1000b244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 1000b246 _EH4_GlobalUnwind

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000b25b,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 1000b260 _EH4_LocalUnwind

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}


// ==== 1000b280 __ValidateImageBase

/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}


// ==== 1000b2b0 __FindPESection

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


// ==== 1000b300 __IsNonwritableInCurrentImage

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_1001b440 ^ 0x10015368;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ==== 1000b3bb __calloc_impl

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *_Size;
  int *_Dst;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      _Dst = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_1001db3c == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_1001db28)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1000b4b7();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_1000b46c;
          }
        }
        else {
LAB_1000b46c:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_1001d524,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_1001da4c == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    *puVar1 = 0xc;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}


// ==== 1000b4b7 FUN_1000b4b7

void FUN_1000b4b7(void)

{
  FUN_10009963(4);
  return;
}


// ==== 1000b4d9 _realloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  void *this;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_1001db3c == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000b6b2;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1000b760(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_1001db28) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1000b760(this,(int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_1001d524,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_1000b61d();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_1001d524,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_1001da4c == 0) {
        piVar4 = (int *)FUN_1000ad0a();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_1000b6df;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_1000ad0a();
    if (local_24 != (uint *)0x0) goto LAB_1000b6be;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_1000b6b2;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_1001d524,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_1001da4c == 0) {
        piVar4 = (int *)FUN_1000ad0a();
LAB_1000b6df:
        DVar5 = GetLastError();
        iVar2 = FUN_1000accf(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_1000ad0a();
  }
  DVar5 = GetLastError();
  iVar2 = FUN_1000accf(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_1000b6b2:
  __callnewh(_NewSize);
  piVar4 = (int *)FUN_1000ad0a();
LAB_1000b6be:
  *piVar4 = 0xc;
  return (void *)0x0;
}


// ==== 1000b61d FUN_1000b61d

void FUN_1000b61d(void)

{
  FUN_10009963(4);
  return;
}


// ==== 1000b6f4 ___sbh_heap_init

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1001db24 = HeapAlloc(DAT_1001d524,0,0x140);
  if (DAT_1001db24 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1001d6fc = 0;
  DAT_1001db20 = 0;
  DAT_1001db2c = DAT_1001db24;
  DAT_1001db28 = param_1;
  DAT_1001db30 = 0x10;
  return 1;
}


// ==== 1000b73c thunk_FUN_1000b760 thunk -> 1000b760

// ==== 1000b760 FUN_1000b760

void __thiscall FUN_1000b760(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}


// ==== 1000b767 ___sbh_free_block

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_1001d6fc != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1001db34 * 0x8000 + DAT_1001d6fc[3]),0x8000,0x4000);
        DAT_1001d6fc[2] = DAT_1001d6fc[2] | 0x80000000U >> ((byte)DAT_1001db34 & 0x1f);
        *(undefined4 *)(DAT_1001d6fc[4] + 0xc4 + DAT_1001db34 * 4) = 0;
        *(char *)(DAT_1001d6fc[4] + 0x43) = *(char *)(DAT_1001d6fc[4] + 0x43) + -1;
        if (*(char *)(DAT_1001d6fc[4] + 0x43) == '\0') {
          DAT_1001d6fc[1] = DAT_1001d6fc[1] & 0xfffffffe;
        }
        if (DAT_1001d6fc[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1001d6fc[3],0,0x8000);
          HeapFree(DAT_1001d524,0,(LPVOID)DAT_1001d6fc[4]);
          _memmove(DAT_1001d6fc,DAT_1001d6fc + 5,
                   (DAT_1001db20 * 0x14 - (int)DAT_1001d6fc) + -0x14 + DAT_1001db24);
          DAT_1001db20 = DAT_1001db20 + -1;
          if (DAT_1001d6fc < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1001db2c = DAT_1001db24;
        }
      }
      DAT_1001d6fc = param_1;
      DAT_1001db34 = uVar14;
    }
  }
  return;
}


// ==== 1000ba7b ___sbh_alloc_new_region

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_1001db20 == DAT_1001db30) {
    pvVar1 = HeapReAlloc(DAT_1001d524,0,DAT_1001db24,(DAT_1001db30 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1001db30 = DAT_1001db30 + 0x10;
    DAT_1001db24 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_1001db20 * 0x14 + (int)DAT_1001db24);
  pvVar1 = HeapAlloc(DAT_1001d524,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_1001db20 = DAT_1001db20 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_1001d524,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


// ==== 1000bb2b ___sbh_alloc_new_group

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}


// ==== 1000bc31 ___sbh_resize_block

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}


// ==== 1000bf10 ___sbh_alloc_block

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_1001db24 + DAT_1001db20 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_1001db2c;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_1001db24;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_1001db2c && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_1001db2c) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_1001db24;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_1001db2c && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_1001db2c) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_1001db2c = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_1000c1b0;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_1000c1b0:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1001d6fc)) && (local_8 == DAT_1001db34)) {
    DAT_1001d6fc = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}


// ==== 1000c1f3 FUN_1000c1f3

void __cdecl FUN_1000c1f3(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_1001bef0)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_1001d084 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1001bef4);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_1001d700,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_1001d81d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_1001d719,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_1001d719,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_1001d719);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_1001d719);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x1001d6de),
                           (int)&DAT_1001da14 - (int)(sVar5 + 0x1001d6de),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_1001d700,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_1001d700,0x314,*(char **)(uVar6 * 8 + 0x1001bef4));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1000f362(&DAT_1001d700,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ==== 1000c393 __FF_MSGBANNER

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_1001d084 != 1) {
      return;
    }
  }
  FUN_1000c1f3(0xfc);
  FUN_1000c1f3(0xff);
  return;
}


// ==== 1000c3cc __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1001da14 = param_1;
  DAT_1001da18 = param_1;
  DAT_1001da1c = param_1;
  DAT_1001da20 = param_1;
  return;
}


// ==== 1000c3e5 siglookup

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_1001b614 * 0xc + param_1);
  if ((DAT_1001b614 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 1000c419 ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_100066c6(DAT_1001da1c);
  return p_Var1;
}


// ==== 1000c426 _raise

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD *pDVar7;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  
  pDVar7 = (DWORD *)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_1001da14;
        iVar3 = DAT_1001da14;
        goto LAB_1000c4db;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_1000c4b9;
        if (_SigNum != 8) goto LAB_1000c49d;
      }
    }
    pDVar7 = FUN_1000686b();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_1001da20;
      iVar3 = DAT_1001da20;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_1001da18;
      iVar3 = DAT_1001da18;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1000c49d:
        puVar6 = (undefined4 *)FUN_1000ad0a();
        *puVar6 = 0x16;
        FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_1000c4b9:
      puVar6 = &DAT_1001da1c;
      iVar3 = DAT_1001da1c;
    }
LAB_1000c4db:
    bVar1 = true;
    pcVar4 = (code *)FUN_100066c6(iVar3);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar7[0x18];
    pDVar7[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar7[0x19];
      pDVar7[0x19] = 0x8c;
      goto LAB_1000c53f;
    }
  }
  else {
LAB_1000c53f:
    if (_SigNum == 8) {
      for (local_28 = DAT_1001b608; local_28 < DAT_1001b60c + DAT_1001b608; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_1000c579;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_1000c579:
  FUN_1000c59a();
  if (_SigNum == 8) {
    (*pcVar4)(8,pDVar7[0x19]);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar7[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar7[0x19] = local_34;
  }
  return 0;
}


// ==== 1000c59a FUN_1000c59a

void FUN_1000c59a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10009963(0);
  }
  return;
}


// ==== 1000c5d6 FUN_1000c5d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000c5d6(undefined4 param_1)

{
  _DAT_1001da28 = param_1;
  return;
}


// ==== 1000c5e0 FUN_1000c5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000c5e0(undefined4 param_1)

{
  _DAT_1001da34 = param_1;
  return;
}


// ==== 1000c5ea FUN_1000c5ea

void __cdecl FUN_1000c5ea(undefined4 param_1)

{
  DAT_1001da38 = param_1;
  return;
}


// ==== 1000c5f4 ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 1000c604 ___crtInitCritSecAndSpinCount

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100153e8;
  uStack_c = 0x1000c610;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_100066c6(DAT_1001da38);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1000c67a;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1000c669:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1000c669;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_1000c669;
  }
  DAT_1001da38 = FUN_1000664f((int)pcVar1);
LAB_1000c67a:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 1000c6c9 FUN_1000c6c9

void __cdecl FUN_1000c6c9(undefined4 param_1)

{
  DAT_1001da3c = param_1;
  return;
}


// ==== 1000c6d3 __callnewh

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_100066c6(DAT_1001da3c);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 1000c6f5 __87except

/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2005 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_1001b440 ^ (uint)&local_94;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_1000c74f:
    uVar3 = 8;
LAB_1000c751:
    bVar1 = __handle_exc(uVar3,(double *)(param_2 + 6),local_94);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
    }
  }
  else {
    if (iVar2 == 2) {
      uVar3 = 4;
      goto LAB_1000c751;
    }
    if (iVar2 == 3) {
      uVar3 = 0x11;
      goto LAB_1000c751;
    }
    if (iVar2 == 4) {
      uVar3 = 0x12;
      goto LAB_1000c751;
    }
    if (iVar2 == 5) goto LAB_1000c74f;
    if (iVar2 == 7) {
      *param_2 = 1;
    }
    else if (iVar2 == 8) {
      uVar3 = 0x10;
      goto LAB_1000c751;
    }
  }
  __ctrlfp();
  if ((*param_2 != 8) && (DAT_1001c1c8 == 0)) {
    iVar2 = FUN_1000fa69();
    if (iVar2 != 0) goto LAB_1000c7dc;
  }
  __set_errno_from_matherr(*param_2);
LAB_1000c7dc:
  __security_check_cookie(local_14 ^ (uint)&local_94);
  return;
}


// ==== 1000c7f1 x_ismbbtype_l

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_1000c833;
  }
  iVar2 = 1;
LAB_1000c833:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 1000c842 __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 1000c855 ___free_lc_time

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}


// ==== 1000c9e5 ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1001c070) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1001c074) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1001c078) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 1000ca25 ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1001c07c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1001c080) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1001c084) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1001c088) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1001c08c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1001c090) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1001c094) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 1000caae __freea

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}


// ==== 1000cac9 _strcat_s

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        puVar2 = (undefined4 *)FUN_1000ad0a();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_1000cae8;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_1000ad0a();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1000cae8:
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 1000cb40 _strcspn

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}


// ==== 1000cb86 _strncpy_s

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_1000cbaa:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          puVar2 = (undefined4 *)FUN_1000ad0a();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_1000cbbb;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_1000cbaa;
  puVar2 = (undefined4 *)FUN_1000ad0a();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_1000cbbb:
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}


// ==== 1000cc39 __crtGetStringTypeA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_1001da44 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1001da44 = 2;
      }
      goto LAB_1000cc92;
    }
    DAT_1001da44 = 1;
  }
  else {
LAB_1000cc92:
    if ((DAT_1001da44 == 2) || (DAT_1001da44 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_1000cddf;
    }
    if (DAT_1001da44 != 1) goto LAB_1000cddf;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000cddf;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1000cd22:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1000cd22;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_1000cddf:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 1000cdf1 ___crtGetStringTypeA

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1000ce40 _strpbrk

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


// ==== 1000ce80 __crtLCMapStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  LPCWSTR lpDestStr;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  if (DAT_1001da48 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1001da48 = 2;
      }
    }
    else {
      DAT_1001da48 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000ceef;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000ceef:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1001da48 == 2) || (DAT_1001da48 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1000d210;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_1000d210;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000d1ed;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = _malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_1000d1ed:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1000d210;
  }
  if (DAT_1001da48 != 1) goto LAB_1000d210;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000d210;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1000cf97:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1000cf97;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_1000d210;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1000d0a6;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_1000d0a6:
  __freea(local_10);
LAB_1000d210:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 1000d222 ___crtLCMapStringA

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1000d344 _atol

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}


// ==== 1000d355 __isctype_l

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}


// ==== 1000d40b __isleadbyte_l

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}


// ==== 1000d441 FID_conflict:__ld12tod

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_1000d940;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1001c0b8 - 1;
    iVar4 = (int)(DAT_1001c0b8 + ((int)DAT_1001c0b8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1001c0b8 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1000d574;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1000d57b;
LAB_1000d574:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1000d57b:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1000d589;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_1000d589:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_1001c0b4 - DAT_1001c0b8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1001c0b4 < iVar12) {
        if (iVar12 < DAT_1001c0b0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1001c0c4;
          iVar2 = (int)(DAT_1001c0bc + ((int)DAT_1001c0bc >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001c0bc & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_1001c0bc + ((int)DAT_1001c0bc >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001c0bc & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_1001c0c4 + DAT_1001c0b0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1000d940;
      }
      local_14 = DAT_1001c0b4 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_1001c0b8 - 1;
      iVar12 = (int)(DAT_1001c0b8 + ((int)DAT_1001c0b8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1001c0b8 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_1000d72c;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_1000d72c:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1001c0bc + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_1000d940:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1001c0bc & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1001c0c0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1001c0c0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 1000d983 FID_conflict:__ld12tod

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_1000de82;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1001c0d0 - 1;
    iVar4 = (int)(DAT_1001c0d0 + ((int)DAT_1001c0d0 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1001c0d0 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1000dab6;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1000dabd;
LAB_1000dab6:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1000dabd:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1000dacb;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_1000dacb:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_1001c0cc - DAT_1001c0d0)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1001c0cc < iVar12) {
        if (iVar12 < DAT_1001c0c8) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1001c0dc;
          iVar2 = (int)(DAT_1001c0d4 + ((int)DAT_1001c0d4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001c0d4 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_1001c0d4 + ((int)DAT_1001c0d4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1001c0d4 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_1001c0dc + DAT_1001c0c8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1000de82;
      }
      local_14 = DAT_1001c0cc - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_1001c0d0 - 1;
      iVar12 = (int)(DAT_1001c0d0 + ((int)DAT_1001c0d0 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1001c0d0 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_1000dc6e;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_1000dc6e:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1001c0d4 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_1000de82:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1001c0d4 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1001c0d8 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1001c0d8 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 1000dec5 FUN_1000dec5

void __cdecl
FUN_1000dec5(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined *puVar20;
  short *psVar21;
  uint uVar22;
  undefined4 uVar23;
  ushort uVar24;
  char *pcVar25;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  pcVar25 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_1000df4a:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_1000df67:
        iVar15 = 3;
        goto LAB_1000df69;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_1000df7e:
        iVar15 = 5;
        param_3 = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar15 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_1000df98;
          goto LAB_1000e123;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_1000df4a;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1000df67;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1000dfcf;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1000dfff;
      if (cVar8 == '0') goto LAB_1000df98;
      goto LAB_1000dfdf;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1000df67;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1000df7e;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1000e14e;
LAB_1000df98:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_1000df4a;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1000e072;
LAB_1000dfcf:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_1000df4a;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_1000e072:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1000dfff:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_1000dfdf:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_1000e123;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_1000df4a;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_1000df69;
      }
      goto LAB_1000e14e;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_1000e10a;
        if (cVar8 == '-') goto LAB_1000e0fe;
LAB_1000e0f1:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1000e14e;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_1000df4a;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1000e0f1;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1000e123;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_1000e1b0;
    default:
      goto switchD_1000df56_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_1000e10a:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1000e14e;
LAB_1000e0fe:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_1000df4a;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_1000df56_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_1000df4a;
      goto LAB_1000e14e;
    }
    iVar15 = 9;
LAB_1000df69:
    param_3 = pcVar18 + -1;
    goto LAB_1000df4a;
  }
  puVar10 = (undefined4 *)FUN_1000ad0a();
  *puVar10 = 0x16;
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_1000e546;
LAB_1000e1b0:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_1000e1cb;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_1000e1b0;
  }
  local_68 = 0x1451;
LAB_1000e1cb:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_1000e123:
  param_3 = pcVar18 + -1;
LAB_1000e14e:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar25 = pcVar25 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_1000e528;
    while (pcVar25 = pcVar25 + -1, *pcVar25 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_1000e528;
      puVar20 = &DAT_1001c240;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_1001c3a0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x1000e256:
        if (local_58 != (char *)0x0) {
          uVar16 = (int)local_58 >> 3;
          puVar20 = puVar20 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar16;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar20 + uVar11 * 0xc);
            if (0x7fff < *puVar12) {
              local_4c = (ushort)*(undefined4 *)puVar12;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar12 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar12 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar12 + 4);
              iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar15;
              uStack_4a._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
              puVar12 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar16 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar14 = local_36 & 0x7fff;
            uVar17 = puVar12[5] & 0x7fff;
            uVar9 = (puVar12[5] ^ local_36) & 0x8000;
            uVar24 = uVar17 + uVar14;
            uVar22 = 0;
            iVar1 = 0;
            if (((uVar14 < 0x7fff) && (uVar22 = 0, iVar1 = 0, uVar17 < 0x7fff)) &&
               (uVar22 = uVar16, iVar1 = iVar3, uVar24 < 0xbffe)) {
              if (0x3fbf < uVar24) {
                if (((uVar14 == 0) &&
                    (uVar24 = uVar24 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar13 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar17 == 0) &&
                         (uVar24 = uVar24 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar2 = 0;
                  iVar13 = 0;
                }
                else {
                  local_6c = 0;
                  psVar21 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar22 = *(uint *)(psVar21 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar22 < *(uint *)(psVar21 + -2)) ||
                           (uVar22 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar21 + -2) = uVar22;
                        if (bVar4) {
                          *psVar21 = *psVar21 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar21 = psVar21 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar24 = uVar24 + 0xc002;
                  if ((short)uVar24 < 1) {
LAB_1000e40c:
                    uVar24 = uVar24 - 1;
                    if ((short)uVar24 < 0) {
                      uVar22 = (uint)(ushort)-uVar24;
                      uVar24 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar13 << 0x1f) >> 0x10);
                        uVar16 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar22 = uVar22 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar16;
                        uStack_2f = (undefined1)(uVar16 >> 8);
                      } while (uVar22 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar14 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar14 >> 0xf;
                      iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar13 | (ushort)uStack_2a >> 0xf;
                      uVar24 = uVar24 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar13 >> 0x10);
                    } while (0 < (short)uVar24);
                    if ((short)uVar24 < 1) goto LAB_1000e40c;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar22 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar24 = uVar24 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar22;
                      uStack_2e._2_2_ = (ushort)(uVar22 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar24) goto LAB_1000e4cb;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x1000e256;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_1000e4cb:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar13 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar13;
            local_36 = (ushort)((uint)iVar13 >> 0x10);
            uVar2 = 0;
            iVar13 = 0;
          }
          goto joined_r0x1000e256;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar13;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar23 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar24 = local_36;
      uStack_4a = iVar15;
      uStack_2e = uVar22;
      uStack_2a = iVar1;
      local_3c = iVar13;
    }
    else {
      uVar23 = 0;
      uVar24 = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_1000e528:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar24 = 0;
    uVar19 = 0;
    uVar23 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar24 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar23;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_1000e546:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1000e585 FUN_1000e585

/* WARNING: Removing unreachable block (ram,0x1000ea76) */
/* WARNING: Removing unreachable block (ram,0x1000ea80) */
/* WARNING: Removing unreachable block (ram,0x1000ea85) */

void __cdecl
FUN_1000e585(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  errno_t eVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  char *pcVar25;
  undefined *local_6c;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar17 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar8 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar8 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar14 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_1000ee03;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000e6b4;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_1000e6b4:
          pcVar25 = "1#QNAN";
          goto LAB_1000e6b9;
        }
        pcVar25 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_1000e6b9:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    goto LAB_1000ee03;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_1001c240;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_1001c3a0;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_1000e9da;
      puVar10 = (ushort *)(local_6c + (uVar14 & 7) * 0xc);
      if (0x7fff < *puVar10) {
        local_40 = (ushort)*(undefined4 *)puVar10;
        uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
        puVar2 = puVar10 + 4;
        uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar10 + 2);
        uStack_3a = (ushort)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
        puVar10 = &local_40;
        local_38 = *(int *)puVar2;
        iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
        uStack_3e._0_2_ = (undefined2)iVar1;
        uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
      uVar23 = puVar10[5] & 0x7fff;
      local_4c = (ushort *)0x0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      local_10._0_2_ = 0;
      iVar11 = 0;
      local_10._2_2_ = 0;
      local_c = 0;
      iVar5 = 0;
      uStack_a = 0;
      uVar9 = (puVar10[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
      uVar24 = uVar23 + uVar13;
      iVar17 = 0;
      iVar3 = 0;
      if (((uVar13 < 0x7fff) && (iVar17 = 0, iVar3 = 0, uVar23 < 0x7fff)) &&
         (iVar17 = iVar11, iVar3 = iVar5, uVar24 < 0xbffe)) {
        if (uVar24 < 0x3fc0) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else if (((uVar13 == 0) &&
                 (uVar24 = uVar24 + 1,
                 (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
                ((CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0 &&
                 (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
          local_1a = 0;
          bStack_19 = 0;
        }
        else if ((((uVar23 == 0) &&
                  (uVar24 = uVar24 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                 (*(int *)(puVar10 + 2) == 0)) && (*(int *)puVar10 == 0)) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else {
          psVar7 = (short *)&local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar10 + 4;
              do {
                bVar4 = false;
                uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar16 < *(uint *)(psVar7 + -2)) ||
                   (uVar16 < (uint)*local_5c * (uint)*local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar7 + -2) = uVar16;
                if (bVar4) {
                  *psVar7 = *psVar7 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar7 = psVar7 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar24 = uVar24 + 0xc002;
          if ((short)uVar24 < 1) {
LAB_1000e8fe:
            uVar24 = uVar24 - 1;
            if ((short)uVar24 < 0) {
              local_48 = (uint)(ushort)-uVar24;
              uVar24 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,local_c);
                uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
                iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
                local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                uStack_a = uStack_a >> 1;
                local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                local_10._0_2_ = (ushort)(uVar16 >> 1);
                local_14 = (byte)uVar12;
                uStack_13 = (undefined1)(uVar12 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar13 = uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12 = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
              local_10._0_2_ = (ushort)iVar17 | uVar13 >> 0xf;
              iVar20 = CONCAT22(uStack_a,local_c) * 2;
              local_c = (ushort)iVar20 | local_10._2_2_ >> 0xf;
              uVar24 = uVar24 - 1;
              local_10._2_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar24);
            if ((short)uVar24 < 1) goto LAB_1000e8fe;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (iVar3 = CONCAT22(local_c,local_10._2_2_),
             iVar17 = CONCAT22((ushort)local_10,uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22((ushort)local_10,uStack_12) == -1) {
              uStack_12 = 0;
              local_10._0_2_ = 0;
              iVar17 = 0;
              if (CONCAT22(local_c,local_10._2_2_) == -1) {
                local_10._2_2_ = 0;
                local_c = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar24 = uVar24 + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
              }
              else {
                iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                local_10._2_2_ = (ushort)iVar3;
                local_c = (ushort)((uint)iVar3 >> 0x10);
              }
            }
            else {
              iVar17 = CONCAT22((ushort)local_10,uStack_12) + 1;
              uStack_12 = (ushort)iVar17;
              local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar3 = CONCAT22(local_c,local_10._2_2_);
            }
          }
          local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
          uStack_12 = (ushort)iVar17;
          local_c = (ushort)((uint)iVar3 >> 0x10);
          local_10._2_2_ = (ushort)iVar3;
          if (0x7ffe < uVar24) goto LAB_1000e9be;
          local_24._0_2_ = uStack_12;
          local_24._2_2_ = (ushort)local_10;
          uStack_20._0_2_ = local_10._2_2_;
          iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
          bStack_19 = (byte)(uVar24 >> 8) | (byte)(uVar9 >> 8);
          uStack_20._2_2_ = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
      }
      else {
LAB_1000e9be:
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        iVar11 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar20 = 0;
        uStack_1c = (ushort)iVar11;
        local_1a = (undefined1)((uint)iVar11 >> 0x10);
        bStack_19 = (byte)((uint)iVar11 >> 0x18);
      }
LAB_1000e9da:
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
      uStack_12 = (ushort)iVar17;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar14 = (int)uVar14 >> 3;
    }
  }
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar17 = uVar16 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    param_1 = param_1 & 0xffff;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    param_2 = 0;
    local_c = 0;
    uStack_a = 0;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar16 == 0) &&
             (iVar17 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
          goto LAB_1000ec42;
        }
        local_58 = (ushort *)0x0;
        psVar7 = (short *)&local_10;
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar16 < *(uint *)(psVar7 + -2)) || (uVar16 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar7 + -2) = uVar16;
              if (bVar4) {
                *psVar7 = *psVar7 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar7 = psVar7 + 1;
          local_58 = (ushort *)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_1000eb50:
          uVar24 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar24 < 0) {
            uVar16 = -(iVar17 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar24 = uVar24 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,local_c);
              uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              local_10._0_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar12;
              uStack_13 = (undefined1)(uVar12 >> 8);
            } while (uVar14 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar24 = uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12 = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar20 | uVar24 >> 0xf;
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | local_10._2_2_ >> 0xf;
            iVar17 = iVar17 + 0xffff;
            local_10._2_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar24 = (ushort)iVar17;
          if ((short)uVar24 < 1) goto LAB_1000eb50;
        }
        iVar17 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_20 = CONCAT22(local_c,local_10._2_2_),
           iVar20 = CONCAT22((ushort)local_10,uStack_12),
           (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar24 = uVar24 + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
            }
            else {
              uStack_20 = CONCAT22(local_c,local_10._2_2_) + 1;
              iVar20 = iVar17;
            }
          }
          else {
            iVar20 = CONCAT22((ushort)local_10,uStack_12) + 1;
            uStack_20 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
        uStack_12 = (ushort)iVar20;
        local_c = (ushort)((uint)uStack_20 >> 0x10);
        local_10._2_2_ = (ushort)uStack_20;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar24 < 0x7fff) {
          bStack_19 = (byte)(uVar24 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
        else {
          iVar20 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          uStack_20 = iVar17;
          iVar20 = iVar17;
        }
        local_24._2_2_ = (ushort)((uint)iVar20 >> 0x10);
        local_24._0_2_ = (ushort)iVar20;
        param_1 = CONCAT22(uStack_12,local_24._2_2_);
        goto LAB_1000ec42;
      }
      uStack_1c = 0;
      local_1a = 0;
      bStack_19 = 0;
    }
    else {
      iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
      uStack_1c = (ushort)iVar17;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      bStack_19 = (byte)((uint)iVar17 >> 0x18);
    }
    local_24._0_2_ = 0;
    param_1 = 0;
    param_2 = 0;
    uStack_20 = 0;
  }
LAB_1000ec42:
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    do {
      uVar24 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(ushort)local_24) << 1;
      local_24._0_2_ = (ushort)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)((uint)uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar16 | uVar24 >> 0xf);
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar16 = -iVar20 & 0xff, uVar16 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar12 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        uStack_20._0_2_ = (ushort)(uVar12 >> 1);
        local_24._0_2_ = (ushort)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    psVar7 = param_6 + 2;
    psVar18 = psVar7;
    uVar24 = uStack_20._2_2_;
    for (iVar17 = param_4 + 1; 0 < iVar17; iVar17 = iVar17 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (ushort)uVar16;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar12 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar24 >> 0xf)) * 2 |
               (CONCAT22(uVar24,(ushort)uStack_20) & 0x7fffffff) >> 0x1e;
      uVar21 = (CONCAT22(uVar24,(ushort)uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar16 & 0x7fffffff) >> 0x1e;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar22 = uVar21, uVar14 < uVar16)) {
        uVar22 = uVar21 + 1;
        bVar4 = false;
        if ((uVar22 < uVar21) || (uVar22 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar12 = uVar12 + 1;
        }
      }
      uVar21 = CONCAT22(uVar24,(ushort)uStack_20) + uVar22;
      if ((uVar21 < uVar22) || (uVar21 < CONCAT22(uVar24,(ushort)uStack_20))) {
        uVar12 = uVar12 + 1;
      }
      iVar20 = (uVar12 + local_38) * 2;
      uStack_1c = (ushort)iVar20 | (ushort)(uVar21 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar20 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar21 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar20 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar21 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar24;
      uVar24 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar24,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar7) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar7 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_1000ee03;
      }
    }
    else {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar7) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_1000ee03:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1000ee4b fastzero_I

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}


// ==== 1000eea2 __VEC_memzero

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}


// ==== 1000ef31 __hw_cw

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


// ==== 1000efbf ___hw_cw_sse2

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}


// ==== 1000f05f __control87

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_1001dc78 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}


// ==== 1000f362 FUN_1000f362

undefined4 __cdecl FUN_1000f362(undefined4 param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = __encoded_null();
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (DAT_1001da50 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1001da50 = FUN_1000664f((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1001da54 = FUN_1000664f((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_1001da58 = FUN_1000664f((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_1001da60 = FUN_1000664f((int)pFVar1);
      if (DAT_1001da60 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_1001da5c = FUN_1000664f((int)pFVar1);
      }
    }
  }
  if ((DAT_1001da5c != local_c) && (DAT_1001da60 != local_c)) {
    pcVar3 = (code *)FUN_100066c6(DAT_1001da5c);
    pcVar4 = (code *)FUN_100066c6(DAT_1001da60);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar2 = (*pcVar3)(), iVar2 == 0 ||
         (iVar2 = (*pcVar4)(iVar2,1,local_24,0xc,local_18), iVar2 == 0)) || ((local_1c & 1) == 0))))
    {
      iVar2 = __get_winmajor(&local_14);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_14 < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_1000f4f8;
    }
  }
  if ((((DAT_1001da54 != local_c) &&
       (pcVar3 = (code *)FUN_100066c6(DAT_1001da54), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_1001da58 != local_c &&
      (pcVar3 = (code *)FUN_100066c6(DAT_1001da58), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_1000f4f8:
  pcVar3 = (code *)FUN_100066c6(DAT_1001da50);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 1000f51f __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_1001d080;
      DAT_1001d080 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_1001d080;
    }
  }
  puVar2 = (undefined4 *)FUN_1000ad0a();
  *puVar2 = 0x16;
  FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 1000f565 __raise_exc_ex

/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2005 Release */

void __cdecl
__raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
              int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar3 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar3 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar3 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar3 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = __statfp();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_1000f6c2;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_1000f6c2:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_1000f6f8:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_1000f6f8;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_1000f7fd;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_1000f7fd:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_1000f829;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_1000f829:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}


// ==== 1000f83f __raise_exc

/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2005 Release */

void __cdecl
__raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


// ==== 1000f860 __handle_exc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2005 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar6 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar6;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_1000faaa();
    uVar6 = param_1 & 0x17;
    goto LAB_1000fa1f;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_1000faaa();
    uVar6 = param_1 & 0x1b;
    goto LAB_1000fa1f;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar7 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar8 = (float10)FUN_100101ef(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c
                                     );
        dVar2 = (double)fVar8;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar2 * 0.0;
          bVar7 = bVar3;
        }
        else {
          local_14 = (double)((ulonglong)dVar2 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar7)) {
                bVar7 = bVar3;
              }
              uVar6 = (uint)local_14 >> 1;
              uVar4 = (ulonglong)local_14 & 0x100000000;
              local_14._0_4_ = uVar6;
              if (uVar4 != 0) {
                local_14._0_4_ = uVar6 | 0x80000000;
              }
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar2 < 0.0) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar3 = bVar7;
      }
      if (bVar3) {
        FUN_1000faaa();
      }
      uVar6 = local_8 & 0xfffffffd;
      local_8 = uVar6;
    }
    goto LAB_1000fa1f;
  }
  FUN_1000faaa();
  uVar6 = param_3 & 0xc00;
  dVar2 = _DAT_1001c560;
  dVar5 = _DAT_1001c560;
  if (uVar6 == 0) {
    dVar1 = *param_2;
joined_r0x1000f902:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar5;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar6 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_1001c570;
      goto joined_r0x1000f902;
    }
    dVar5 = _DAT_1001c570;
    if (uVar6 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x1000f902;
    }
    if (uVar6 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_1001c570;
      goto joined_r0x1000f902;
    }
  }
  uVar6 = param_1 & 0x1e;
LAB_1000fa1f:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_1000faaa();
    uVar6 = uVar6 & 0xffffffef;
  }
  return uVar6 == 0;
}


// ==== 1000fa41 __set_errno_from_matherr

/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_1000ad0a();
    *puVar1 = 0x22;
    return;
  }
  return;
}


// ==== 1000fa69 FUN_1000fa69

undefined4 FUN_1000fa69(void)

{
  return 0;
}


// ==== 1000fa6c __statfp

/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2005 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// ==== 1000fa77 __clrfp

/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2005 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// ==== 1000fa83 __ctrlfp

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2005 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// ==== 1000faaa FUN_1000faaa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000faaa(void)

{
  return;
}


// ==== 1000fb00 ___set_fpsr_sse2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_1001dc78 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_1001c1e4 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


// ==== 1000fb80 __alloca_probe_16

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 1000fb96 __alloca_probe_8

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 1000fbac ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1000fbf3 ___convertcp

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1000fd93;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1000fd93;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_1000fcd3:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1000fcd3;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_1000fd93:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1000fda5 strtoxl

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar3 = (undefined4 *)FUN_1000ad0a();
    *puVar3 = 0x16;
    FUN_1000a769((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_1000fe5c:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1000fe5c;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_1000fec2;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1000fec2;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1000fec2;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1000fec2:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1000ff1c:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          puVar3 = (undefined4 *)FUN_1000ad0a();
          *puVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_1000ff1c;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_1000ff1c;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 1000ffd0 _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1001d678 == 0) {
    ppuVar2 = &PTR_DAT_1001b830;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 1000fff9 ___mtold12

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = DAT_1001b440 ^ (uint)&stack0xfffffffc;
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar9 = param_3[1];
    uVar10 = *param_3;
    uVar1 = param_3[1];
    uVar11 = param_3[2];
    bVar4 = false;
    uVar8 = (param_3[2] * 2 | uVar9 >> 0x1f) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
    uVar3 = uVar2 * 4;
    uVar9 = (uVar9 * 2 | uVar2 >> 0x1f) * 2 | (uVar2 & 0x7fffffff) >> 0x1e;
    uVar2 = uVar3 + uVar10;
    *param_3 = uVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar8;
    if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar9) || (uVar10 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar10;
      if (bVar5) {
        param_3[2] = uVar8 + 1;
      }
    }
    uVar10 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar10;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar11;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
    uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar11 + 1;
      bVar4 = false;
      if ((uVar2 < uVar11) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar10 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100101c5 __set_exp

/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


// ==== 100101ef FUN_100101ef

void __cdecl FUN_100101ef(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EDX;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar3 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar3 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar3;
      param_2._2_1_ = (byte)((uint)iVar3 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar3 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar2) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = extraout_EDX;
  }
  else {
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar3;
  return;
}


// ==== 100102a0 __alloca_probe

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


// ==== 100102d0 ___ascii_strnicmp

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_10010321;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_10010321:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 1001040e KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:00000162

// ==== 10010420 Unwind@10010420

void Unwind_10010420(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10010423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  APawn::~APawn(*(APawn **)(unaff_EBP + -0x10));
  return;
}


// ==== 10010450 Unwind@10010450

void Unwind_10010450(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10010453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10010480 Unwind@10010480

void Unwind_10010480(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10010483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100104b0 Unwind@100104b0

void Unwind_100104b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100104b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AEnvCreatureManagerInfo::~AEnvCreatureManagerInfo
            (*(AEnvCreatureManagerInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 100104b9 Unwind@100104b9

void Unwind_100104b9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10001670((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x3bc));
  return;
}


// ==== 100104f0 Unwind@100104f0

void Unwind_100104f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100104f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AEnvCreatureManagerInfo::~AEnvCreatureManagerInfo
            (*(AEnvCreatureManagerInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 10010520 Unwind@10010520

void Unwind_10010520(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10010523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AEnvCreatureManagerInfo::~AEnvCreatureManagerInfo
            (*(AEnvCreatureManagerInfo **)(unaff_EBP + -0x10));
  return;
}


// ==== 10010590 FUN_10010590

void FUN_10010590(void)

{
                    /* WARNING: Could not recover jumptable at 0x10010595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FName::FName(&LINEAGECREATURE_AmbientCreatureMoveTo);
  return;
}


// ==== 100105c0 FUN_100105c0

void FUN_100105c0(void)

{
  undefined4 *puVar1;
  ushort *puVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  code *pcVar12;
  code *pcVar13;
  FGuid local_10 [16];
  
  puVar1 = (undefined4 *)FGuid::FGuid(local_10,0,0,0,0);
  pcVar12 = AAmbientCreature::InternalConstructor;
  uVar11 = 0x4084004;
  pcVar13 = StaticConstructor_exref;
  puVar2 = UObject::StaticConfigName();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  pwVar10 = GPackage;
  pwVar9 = L"AmbientCreature";
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  pUVar3 = UObject::StaticClass();
  pUVar4 = APawn::StaticClass();
  UClass::UClass(&AAmbientCreature::PrivateStaticClass,0,0x1954,4,pUVar4,pUVar3,uVar5,uVar6,uVar7,
                 uVar8,pwVar9,pwVar10,puVar2,uVar11,pcVar12,pcVar13);
  _atexit((_func_4879 *)&LAB_100106e0);
  return;
}


// ==== 10010650 FUN_10010650

void FUN_10010650(void)

{
  undefined4 *puVar1;
  ushort *puVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  code *pcVar12;
  code *pcVar13;
  FGuid local_10 [16];
  
  puVar1 = (undefined4 *)FGuid::FGuid(local_10,0,0,0,0);
  pcVar12 = AAmbientCreatureFlock::InternalConstructor;
  uVar11 = 0x4084004;
  pcVar13 = StaticConstructor_exref;
  puVar2 = UObject::StaticConfigName();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  pwVar10 = GPackage;
  pwVar9 = L"AmbientCreatureFlock";
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  pUVar3 = UObject::StaticClass();
  pUVar4 = AEnvCreatureManagerInfo::StaticClass();
  UClass::UClass(&AAmbientCreatureFlock::PrivateStaticClass,0,0x3fc,0,pUVar4,pUVar3,uVar5,uVar6,
                 uVar7,uVar8,pwVar9,pwVar10,puVar2,uVar11,pcVar12,pcVar13);
  _atexit((_func_4879 *)&LAB_100106f0);
  return;
}


