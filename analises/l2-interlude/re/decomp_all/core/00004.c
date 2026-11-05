// ==== 101295d6 Catch@101295d6

void Catch_101295d6(void)

{
  appUnwindf((ushort *)&DAT_101d0058,L"L2ThreadUtil::StaticInit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129620 FUN_10129620

undefined1 * FUN_10129620(void *param_1,size_t param_2)

{
  undefined1 *_Dst;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b94c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _Dst = (undefined1 *)thunk_FUN_101088a0(1);
  if (_Dst == (undefined1 *)0x0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    *_Dst = (undefined1)param_2;
  }
  _memcpy(_Dst,param_1,param_2);
  ExceptionList = local_10;
  return _Dst;
}


// ==== 10129687 Catch@10129687

void Catch_10129687(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012969b Catch@1012969b

void Catch_1012969b(void)

{
  appUnwindf((ushort *)&DAT_101d0110,L"L2ThreadUtil::GetThreadSafeParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101296e0 FUN_101296e0

void FUN_101296e0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b94d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_101088c0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1012972e Catch@1012972e

void Catch_1012972e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10129742 Catch@10129742

void Catch_10129742(void)

{
  appUnwindf((ushort *)&DAT_101d0118,L"L2ThreadUtil::DeleteThreadSafeParam");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129780 FUN_10129780

void FUN_10129780(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = appCyclesQPC();
  uVar3 = (uint)_Var5 - *in_ECX;
  iVar4 = ((int)(_Var5 >> 0x20) - in_ECX[1]) - (uint)((uint)_Var5 < *in_ECX);
  if ((iVar4 < 1) && ((iVar4 < 0 || (uVar3 == 0)))) {
    uVar3 = 0;
    iVar4 = 0;
  }
  puVar1 = in_ECX + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  in_ECX[3] = in_ECX[3] + iVar4 + (uint)CARRY4(uVar2,uVar3);
  in_ECX[0x10] = in_ECX[0x10] + 1;
  return;
}


// ==== 101297b0 FUN_101297b0

void FUN_101297b0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = appCyclesQPC();
  uVar3 = (uint)_Var5 - *(uint *)(in_ECX + 0x20);
  iVar4 = ((int)(_Var5 >> 0x20) - *(int *)(in_ECX + 0x24)) -
          (uint)((uint)_Var5 < *(uint *)(in_ECX + 0x20));
  if ((iVar4 < 1) && ((iVar4 < 0 || (uVar3 == 0)))) {
    uVar3 = 0;
    iVar4 = 0;
  }
  puVar1 = (uint *)(in_ECX + 0x28);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + iVar4 + (uint)CARRY4(uVar2,uVar3);
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
  return;
}


// ==== 101297f0 FUN_101297f0

int FUN_101297f0(uint *param_1)

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


// ==== 10129850 FUN_10129850

void FUN_10129850(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)GMalloc)
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
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10129910 FUN_10129910

void FUN_10129910(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10129960 FUN_10129960

void FUN_10129960(int param_1,int param_2)

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


// ==== 10129a50 FUN_10129a50

undefined4 FUN_10129a50(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c8) != 0) {
    puVar1 = (undefined4 *)thunk_FUN_101297f0(&stack0x00000004);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 7;
}


// ==== 10129a80 FUN_10129a80

undefined4 FUN_10129a80(void)

{
  undefined4 *puVar1;
  int in_ECX;
  DWORD local_4;
  
  local_4 = GetCurrentThreadId();
  if (*(int *)(in_ECX + 0x2c8) != 0) {
    puVar1 = (undefined4 *)thunk_FUN_101297f0(&local_4);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 7;
}


// ==== 10129ac0 FUN_10129ac0

int FUN_10129ac0(void)

{
  int *piVar1;
  int in_ECX;
  DWORD local_4;
  
  local_4 = GetCurrentThreadId();
  if (*(int *)(in_ECX + 0x2c8) != 0) {
    piVar1 = (int *)thunk_FUN_101297f0(&local_4);
    if (piVar1 != (int *)0x0) {
      return *piVar1 * 0x54 + 0x24 + in_ECX;
    }
  }
  return in_ECX + 0x270;
}


// ==== 10129b20 FUN_10129b20

void FUN_10129b20(undefined4 param_1,ushort *param_2)

{
  FCriticalSection *this;
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b953f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = L2ThreadBase::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  appStrncpy((ushort *)(in_ECX + 5),param_2,0x40);
  in_ECX[0x25] = 0;
  *in_ECX = L2Thread<int,int>::vftable;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  local_4 = 4;
  in_ECX[0x2d] = param_1;
  in_ECX[0x2c] = 0;
  this = (FCriticalSection *)(*(code *)**(undefined4 **)GMalloc)(4,&DAT_101cd5d8);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  if (this == (FCriticalSection *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FCriticalSection::FCriticalSection(this);
  }
  in_ECX[0x25] = uVar1;
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10129c40 FUN_10129c40

void FUN_10129c40(void)

{
  HANDLE pvVar1;
  LPVOID in_ECX;
  FOutputDevice *this;
  
  if ((*(int *)((int)in_ECX + 4) == 0) && (*(int *)((int)in_ECX + 8) == 0)) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                          *(LPTHREAD_START_ROUTINE *)((int)in_ECX + 0xb4),in_ECX,0,
                          (LPDWORD)((int)in_ECX + 4));
    *(HANDLE *)((int)in_ECX + 8) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      appFailAssert("Handle","..\\Inc\\L2Thread.h",0x29);
    }
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)in_ECX + 0xc) = pvVar1;
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(this,(ushort *)GLog);
    }
  }
  return;
}


// ==== 10129cd0 FUN_10129cd0

void FUN_10129cd0(void)

{
  int in_ECX;
  
  appSleep(0.0);
  WaitForSingleObject(*(HANDLE *)(in_ECX + 0xc),0xffffffff);
  return;
}


// ==== 10129d00 FUN_10129d00

void FUN_10129d00(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) != 0)) {
    SetEvent(*(HANDLE *)(in_ECX + 0xc));
  }
  return;
}


// ==== 10129d20 FUN_10129d20

void FUN_10129d20(void)

{
  int in_ECX;
  
  FCriticalSection::Lock(*(FCriticalSection **)(in_ECX + 0x94));
  return;
}


// ==== 10129d30 FUN_10129d30

void FUN_10129d30(void)

{
  int in_ECX;
  
  FCriticalSection::Unlock(*(FCriticalSection **)(in_ECX + 0x94));
  return;
}


// ==== 10129d40 FUN_10129d40

void FUN_10129d40(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),0);
    return;
  }
  if (param_1 == -1) {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),-2);
    return;
  }
  if (param_1 == 1) {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),2);
  }
  return;
}


// ==== 10129d90 FUN_10129d90

undefined4 FUN_10129d90(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 10129da0 FUN_10129da0

undefined4 FUN_10129da0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 10129db0 FUN_10129db0

void FUN_10129db0(void)

{
  FCriticalSection *this;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(HANDLE *)(in_ECX + 8) != (HANDLE)0x0)) {
    TerminateThread(*(HANDLE *)(in_ECX + 8),0xc);
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2((FOutputDevice *)(in_ECX + 0x14),(ushort *)GLog);
    }
    this = *(FCriticalSection **)(in_ECX + 0x94);
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    if (this != (FCriticalSection *)0x0) {
      FCriticalSection::~FCriticalSection(this);
      (**(code **)(*(int *)GMalloc + 8))(this);
    }
    *(undefined4 *)(in_ECX + 0x94) = 0;
  }
  return;
}


// ==== 10129e40 FUN_10129e40

void FUN_10129e40(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b9584;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = L2Thread<int,int>::vftable;
  local_4 = 2;
  thunk_FUN_10129db0();
  local_4._0_1_ = 1;
  thunk_FUN_101181d0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_101181d0();
  *in_ECX = L2ThreadBase::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10129ed0 FUN_10129ed0

void FUN_10129ed0(byte param_1)

{
  thunk_FUN_10129e40();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10129f00 FUN_10129f00

undefined4 * FUN_10129f00(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  uVar3 = puVar4[1] & *(int *)(in_ECX + 0x10) - 1U;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10129850();
  }
  return puVar4 + 2;
}


// ==== 10129fc0 FUN_10129fc0

void FUN_10129fc0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b95a8;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1012a0a0 FUN_1012a0a0

void FUN_1012a0a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b95d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10129850();
  ExceptionList = local_c;
  return;
}


// ==== 1012a110 FUN_1012a110

void FUN_1012a110(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b95e8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_10129fc0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1012a190 FUN_1012a190

int FUN_1012a190(uint *param_1,undefined4 *param_2)

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
  iVar2 = thunk_FUN_10129f00(param_1,param_2);
  return iVar2;
}


// ==== 1012a210 FUN_1012a210

void FUN_1012a210(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9608;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1012a110();
  ExceptionList = local_c;
  return;
}


// ==== 1012a260 FUN_1012a260

void FUN_1012a260(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1012a0a0();
  ExceptionList = local_c;
  return;
}


// ==== 1012a2b0 FUN_1012a2b0

void FUN_1012a2b0(void)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  FScopeCriticalSection aFStack_18 [4];
  void *pvStack_14;
  FScopeCriticalSection local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b965e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FScopeCriticalSection::FScopeCriticalSection(local_10,L2ThreadUtil::ThreadUtilCS);
  local_4 = 0;
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
  *(int *)(in_ECX + 0x2c4) = *(int *)(in_ECX + 0x2c4) + 1;
  *(int **)(in_ECX + 4) = piVar2;
  if (*(int *)(in_ECX + 0x2c8) == 0) {
    iVar1 = (*(code *)**(undefined4 **)GMalloc)(0x14,&DAT_101cd5d8);
    pvStack_c._0_1_ = 2;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_1012a260();
    }
    pvStack_c._0_1_ = 0;
    *(undefined4 *)(in_ECX + 0x2c8) = uVar4;
  }
  (**(code **)(*piVar2 + 0x28))();
  thunk_FUN_1012a190(&stack0xffffffe4,&stack0xffffffe0);
  pvStack_c = (void *)0xffffffff;
  FScopeCriticalSection::~FScopeCriticalSection(aFStack_18);
  ExceptionList = pvStack_14;
  return;
}


// ==== 1012a400 FUN_1012a400

void FUN_1012a400(void)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
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
  *(int **)(in_ECX + 0x20) = piVar2;
  if (*(int *)(in_ECX + 0x2c8) == 0) {
    iVar1 = (*(code *)**(undefined4 **)GMalloc)(0x14,&DAT_101cd5d8);
    pvStack_c = (void *)0x1;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_1012a260();
    }
    pvStack_c = (void *)0xffffffff;
    *(undefined4 *)(in_ECX + 0x2c8) = uVar4;
  }
  (**(code **)(*piVar2 + 0x28))();
  thunk_FUN_1012a190(&stack0xffffffe8,&stack0xffffffe4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 1012a530 FUN_1012a530

void FUN_1012a530(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b96b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1012a110();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1012a5a0 FUN_1012a5a0

void FUN_1012a5a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  FOutputDevice *in_ECX;
  FScopeCriticalSection local_10 [4];
  void *pvStack_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101b96e3;
  pvStack_c = ExceptionList;
  if (*(int *)(in_ECX + 0x2c4) < 8) {
    ExceptionList = &pvStack_c;
    FScopeCriticalSection::FScopeCriticalSection(local_10,L2ThreadUtil::ThreadUtilCS);
    iVar1 = param_1;
    local_4 = 0;
    if (*(undefined4 **)(in_ECX + param_1 * 4 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + param_1 * 4 + 4))(1);
      *(undefined4 *)(in_ECX + iVar1 * 4 + 4) = 0;
      *(int *)(in_ECX + 0x2c4) = *(int *)(in_ECX + 0x2c4) + -1;
    }
    piVar2 = param_2;
    *(int **)(in_ECX + iVar1 * 4 + 4) = param_2;
    *(int *)(in_ECX + 0x2c4) = *(int *)(in_ECX + 0x2c4) + 1;
    if (*(int *)(in_ECX + 0x2c8) == 0) {
      param_1 = (*(code *)**(undefined4 **)GMalloc)(0x14,&DAT_101cd5d8);
      local_4._0_1_ = 1;
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = thunk_FUN_1012a260();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)(in_ECX + 0x2c8) = uVar3;
    }
    param_1 = iVar1;
    param_2 = (int *)(**(code **)(*piVar2 + 0x28))();
    thunk_FUN_1012a190(&param_2,&param_1);
    local_4 = 0xffffffff;
    FScopeCriticalSection::~FScopeCriticalSection(local_10);
    ExceptionList = pvStack_c;
    return;
  }
  ExceptionList = &pvStack_c;
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  ExceptionList = local_8;
  return;
}


// ==== 1012a710 FUN_1012a710

void FUN_1012a710(void)

{
  undefined4 *in_ECX;
  int iVar1;
  FScopeCriticalSection local_1c [4];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101b9708;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  *in_ECX = L2ThreadUtil::vftable;
  local_8 = 0;
  FScopeCriticalSection::FScopeCriticalSection(local_1c,L2ThreadUtil::ThreadUtilCS);
  local_8._0_1_ = 1;
  for (iVar1 = 0; local_18 = iVar1, iVar1 < (int)in_ECX[0xb1]; iVar1 = iVar1 + 1) {
    if (in_ECX[iVar1 + 1] != 0) {
      if ((undefined4 *)in_ECX[iVar1 + 1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[iVar1 + 1])(1);
      }
      in_ECX[iVar1 + 1] = 0;
    }
    if (in_ECX[0xb2] != 0) {
      in_ECX[0xb2] = 0;
      thunk_FUN_1012a530(1);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(local_1c);
  if (L2ThreadUtil::ThreadUtilCS != (FCriticalSection *)0x0) {
    thunk_FUN_101286e0(1);
    L2ThreadUtil::ThreadUtilCS = (FCriticalSection *)0x0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012a7cd Catch@1012a7cd

void Catch_1012a7cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1012a7e1 Catch@1012a7e1

void Catch_1012a7e1(void)

{
  appUnwindf((ushort *)&DAT_101d0050,L"L2ThreadUtil::~L2ThreadUtil");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012a890 FUN_1012a890

void FUN_1012a890(undefined4 param_1)

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
  *in_ECX = FBufferWriter::vftable;
  in_ECX[0xe] = param_1;
  in_ECX[0xf] = 0;
  in_ECX[5] = 1;
  return;
}


// ==== 1012a950 FUN_1012a950

undefined4 FUN_1012a950(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}


// ==== 1012a960 FUN_1012a960

void FUN_1012a960(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = param_1;
  return;
}


// ==== 1012a970 FUN_1012a970

undefined4 FUN_1012a970(void)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x38) + 4);
}


// ==== 1012a980 FUN_1012a980

void FUN_1012a980(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 1012a9f0 FUN_1012a9f0

void FUN_1012a9f0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 1012aa10 FUN_1012aa10

int FUN_1012aa10(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,1);
  }
  return iVar1;
}


// ==== 1012aa60 FUN_1012aa60

void FUN_1012aa60(void)

{
  return;
}


// ==== 1012aab0 FUN_1012aab0

int FUN_1012aab0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 4);
  }
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  if (iVar4 != -1) {
    iVar2 = *in_ECX;
    do {
      if (*(int *)(iVar2 + 4 + iVar4 * 0xc) == iVar1) {
        return iVar2 + 8 + iVar4 * 0xc;
      }
      iVar4 = *(int *)(iVar2 + iVar4 * 0xc);
    } while (iVar4 != -1);
  }
  return 0;
}


// ==== 1012ab20 FUN_1012ab20

void FUN_1012ab20(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0xc,*(int *)(in_ECX + 8) * 0xc);
  return;
}


// ==== 1012ab60 FUN_1012ab60

void FUN_1012ab60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  
  iVar2 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar3 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[4]);
  }
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar5);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 4);
      }
      uVar4 = in_ECX[4] - 1U & uVar4;
      *(undefined4 *)(*in_ECX + iVar5) = *(undefined4 *)(iVar2 + uVar4 * 4);
      *(int *)(iVar2 + uVar4 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar2;
  return;
}


// ==== 1012ac30 FUN_1012ac30

void FUN_1012ac30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1012ac80 FUN_1012ac80

void FUN_1012ac80(int param_1,int param_2)

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


// ==== 1012ad70 FUN_1012ad70

void FUN_1012ad70(void *param_1,size_t param_2)

{
  FArray *this;
  int iVar1;
  int in_ECX;
  
  this = *(FArray **)(in_ECX + 0x38);
  if (*(int *)(this + 4) < (int)(*(int *)(in_ECX + 0x3c) + param_2)) {
    *(size_t *)(this + 4) =
         *(int *)(this + 4) + (*(int *)(in_ECX + 0x3c) - *(int *)(this + 4)) + param_2;
    iVar1 = *(int *)(this + 4);
    if (*(int *)(this + 8) < iVar1) {
      *(int *)(this + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
      FArray::Realloc(this,1);
    }
  }
  _memcpy((void *)(**(int **)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c)),param_1,param_2);
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + param_2;
  return;
}


// ==== 1012adf0 FUN_1012adf0

void FUN_1012adf0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b97a8;
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


// ==== 1012ae60 FUN_1012ae60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ae60(void)

{
  int iVar1;
  int *in_ECX;
  
  do {
    do {
      in_ECX[1] = in_ECX[1] + 1;
      iVar1 = in_ECX[1];
      if (DAT_1033088c <= iVar1) {
        return;
      }
    } while (*(int *)(_GObjObjects + iVar1 * 4) == 0);
    for (iVar1 = *(int *)(*(int *)(_GObjObjects + iVar1 * 4) + 0x24); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x34)) {
      if (iVar1 == *in_ECX) {
        return;
      }
    }
  } while (*in_ECX != 0);
  return;
}


// ==== 1012aed0 FUN_1012aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1012aed0(uchar *param_1,undefined4 param_2,FOutputDevice *param_3)

{
  UClass *pUVar1;
  int in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b97c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  appSpc(*(int *)(in_ECX + 0x44));
  FOutputDevice::Logf(this,(ushort *)param_3);
  pUVar1 = *(UClass **)(param_1 + 0x24);
  UObject::ExportProperties
            (param_3,pUVar1,param_1,*(int *)(in_ECX + 0x44) + 3,pUVar1,*(uchar **)(pUVar1 + 0x4f4));
  appSpc(*(int *)(in_ECX + 0x44));
  FOutputDevice::Logf(this_00,(ushort *)param_3);
  ExceptionList = local_10;
  return 1;
}


// ==== 1012af7f Catch@1012af7f

void Catch_1012af7f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012af93 Catch@1012af93

void Catch_1012af93(void)

{
  appUnwindf((ushort *)&DAT_101d07cc,L"UObjectExporterT3D::ExportText");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b010 FUN_1012b010

undefined4 * FUN_1012b010(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  if (puVar4[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar4[1] + 4);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_1012ab60();
  }
  return puVar4 + 2;
}


// ==== 1012b0e0 FUN_1012b0e0

void FUN_1012b0e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b97d8;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1012b1c0 FUN_1012b1c0

void FUN_1012b1c0(UClass *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  UClass *pUVar1;
  
  for (pUVar1 = param_1; pUVar1 != (UClass *)0x0; pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
    if (pUVar1 == &UExporter::PrivateStaticClass) goto LAB_1012b1f5;
  }
  appFailAssert("Class->IsChildOf(T::StaticClass())",
                "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
LAB_1012b1f5:
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,GError,0);
  return;
}


// ==== 1012b240 FUN_1012b240

void FUN_1012b240(ushort *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b97fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1),param_1);
  *in_ECX = FStringOutputDevice::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1012b2b0 FUN_1012b2b0

void FUN_1012b2b0(ushort *param_1)

{
  int in_ECX;
  
  FString::operator+=((FString *)(in_ECX + 4),param_1);
  return;
}


// ==== 1012b2d0 FUN_1012b2d0

void FUN_1012b2d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b982b;
  local_c = ExceptionList;
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 0x10;
  }
  ExceptionList = &local_c;
  thunk_FUN_1012a890(puVar1);
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *in_ECX = FBufferArchive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1012b370 FUN_1012b370

void FUN_1012b370(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9877;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10118750();
  *in_ECX = FArchive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1012b3e0 FUN_1012b3e0

void FUN_1012b3e0(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = -1;
  if (param_1 == 0) {
    appFailAssert("Class","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",
                  0x505);
  }
  thunk_FUN_1012ae60();
  return;
}


// ==== 1012b430 FUN_1012b430

void FUN_1012b430(void)

{
  UArrayProperty *this;
  int iVar1;
  UStrProperty *this_00;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b98a0;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar2 = *(undefined4 *)(in_ECX + 0x24);
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Formats",1);
  this = UArrayProperty::operator_new(0x7c,uVar2);
  if (this == (UArrayProperty *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = UArrayProperty::UArrayProperty(this,0,0x38,(ushort *)&DAT_101d0420,0);
  }
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"StrProperty0",1);
  this_00 = UStrProperty::operator_new(0x78,iVar1);
  if (this_00 == (UStrProperty *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = UStrProperty::UStrProperty(this_00);
  }
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 1012b4df Catch@1012b4df

void Catch_1012b4df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012b4f3 Catch@1012b4f3

void Catch_1012b4f3(void)

{
  appUnwindf((ushort *)&DAT_101d0440,L"UExporter::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b550 FUN_1012b550

void FUN_1012b550(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b98d7;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (in_ECX != 0) {
    ExceptionList = &local_c;
    FString::~FString((FString *)(in_ECX + 4));
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FString::~FString((FString *)0x0);
  ExceptionList = local_c;
  return;
}


// ==== 1012b5c0 FUN_1012b5c0

void FUN_1012b5c0(void)

{
  FString *this;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b98f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(UClass **)(in_ECX + 0x34) = &UObject::PrivateStaticClass;
  *(uint *)(in_ECX + 0x48) = *(uint *)(in_ECX + 0x48) | 1;
  this = (FString *)thunk_FUN_101146f0(0xc,in_ECX + 0x38);
  if (this != (FString *)0x0) {
    FString::FString(this,(ushort *)&DAT_101d0754);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012b629 Catch@1012b629

void Catch_1012b629(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012b63d Catch@1012b63d

void Catch_1012b63d(void)

{
  appUnwindf((ushort *)&DAT_101d075c,L"UObjectExporterT3D::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012b680 FUN_1012b680

void FUN_1012b680(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9910;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_1012ab60();
  ExceptionList = local_c;
  return;
}


// ==== 1012b6f0 FUN_1012b6f0

void FUN_1012b6f0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9928;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1012b0e0();
  ExceptionList = pvStack_c;
  return;
}


// ==== 1012b770 FUN_1012b770

int FUN_1012b770(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar4 + 4);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == iVar4) {
        *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc) = *param_2;
        return iVar3 * 0xc + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  iVar4 = thunk_FUN_1012b010(param_1,param_2);
  return iVar4;
}


// ==== 1012b800 FUN_1012b800

void FUN_1012b800(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UClass::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_1012ae60();
  return;
}


// ==== 1012b820 FUN_1012b820

void FUN_1012b820(byte param_1)

{
  thunk_FUN_1012b370();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 1012b850 FUN_1012b850

void FUN_1012b850(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1012b680();
  ExceptionList = local_c;
  return;
}


// ==== 1012b8a0 FUN_1012b8a0

void FUN_1012b8a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9968;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1012b6f0();
  ExceptionList = local_c;
  return;
}


// ==== 1012b8f0 FUN_1012b8f0

FArchive * FUN_1012b8f0(FArchive *param_1,int *param_2)

{
  FString *pFVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9980;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1012ab20(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      operator<<(param_1,(FString *)(*param_2 + iVar2 * 0xc));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_101242c0(local_18);
    while (iVar2 < local_18) {
      pFVar1 = (FString *)thunk_FUN_101146f0(0xc,param_2);
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
  ExceptionList = local_10;
  return param_1;
}


// ==== 1012b9be Catch@1012b9be

void Catch_1012b9be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1012b9d2 Catch@1012b9d2

void Catch_1012b9d2(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ba30 FUN_1012ba30

void FUN_1012ba30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b99ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UExporter::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1012baa0 FUN_1012baa0

void FUN_1012baa0(FArchive *param_1)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b99c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_1012a9f0(param_1,in_ECX + 0x34,in_ECX + 0x38);
  thunk_FUN_1012b8f0(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1012bb07 Catch@1012bb07

void Catch_1012bb07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012bb1b Catch@1012bb1b

void Catch_1012bb1b(void)

{
  appUnwindf((ushort *)&DAT_101d0448,L"UExporter::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bb60 FUN_1012bb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1012bb60(UObject *param_1,ushort *param_2)

{
  UStruct *this;
  int iVar1;
  UObject *pUVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101b99d8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Object",".\\UExporter.cpp",0x2d);
  }
  thunk_FUN_1012b850();
  local_8 = CONCAT31(local_8._1_3_,1);
  thunk_FUN_1012b800();
  do {
    if (DAT_1033088c <= local_18) {
      iVar1 = *(int *)(param_1 + 0x24);
      while( true ) {
        if (iVar1 == 0) {
          local_8 = local_8 & 0xffffff00;
          thunk_FUN_1012b8a0();
          ExceptionList = local_10;
          return 0;
        }
        puVar6 = (undefined4 *)thunk_FUN_1012aab0();
        if (puVar6 != (undefined4 *)0x0) break;
        iVar1 = *(int *)(iVar1 + 0x34);
      }
      uVar7 = thunk_FUN_1012b1c0(*puVar6,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      thunk_FUN_1012b8a0();
      ExceptionList = local_10;
      return uVar7;
    }
    this = *(UStruct **)(_GObjObjects + local_18 * 4);
    iVar1 = UStruct::IsChildOf(this,(UStruct *)&UExporter::PrivateStaticClass);
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


// ==== 1012bd00 Catch@1012bd00

void Catch_1012bd00(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1012bd14 Catch@1012bd14

void Catch_1012bd14(void)

{
  appUnwindf((ushort *)&DAT_101d0480,L"UExporter::FindExporter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bdb0 FUN_1012bdb0

void FUN_1012bdb0(UObject *param_1,UExporter *param_2,undefined4 param_3,ushort *param_4)

{
  UExporter *pUVar1;
  int iVar2;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b99f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Object",".\\UExporter.cpp",0x4e);
  }
  pUVar1 = param_2;
  if (param_2 == (UExporter *)0x0) {
    pUVar1 = UExporter::FindExporter(param_1,param_4);
    if (pUVar1 == (UExporter *)0x0) {
      UObject::GetFullName(param_1,(ushort *)0x0);
      FOutputDevice::Logf(this,(ushort *)GWarn);
      ExceptionList = local_10;
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
  ExceptionList = local_10;
  return;
}


// ==== 1012be9d Catch@1012be9d

void Catch_1012be9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012beb1 Catch@1012beb1

void Catch_1012beb1(void)

{
  appUnwindf((ushort *)&DAT_101d0510,L"UExporter::ExportToArchive");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012bf20 FUN_1012bf20

void FUN_1012bf20(UObject *param_1,UExporter *param_2,undefined4 param_3,ushort *param_4,int param_5
                 )

{
  UExporter *pUVar1;
  int iVar2;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9a00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Object",".\\UExporter.cpp",0x66);
  }
  pUVar1 = param_2;
  if (param_2 == (UExporter *)0x0) {
    pUVar1 = UExporter::FindExporter(param_1,param_4);
    if (pUVar1 == (UExporter *)0x0) {
      UObject::GetFullName(param_1,(ushort *)0x0);
      FOutputDevice::Logf(this,(ushort *)GWarn);
      ExceptionList = local_10;
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
  ExceptionList = local_10;
  return;
}


// ==== 1012c01c Catch@1012c01c

void Catch_1012c01c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012c030 Catch@1012c030

void Catch_1012c030(void)

{
  appUnwindf((ushort *)&DAT_101d05a0,L"UExporter::ExportToOutputDevice");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c0a0 FUN_1012c0a0

undefined4 FUN_1012c0a0(UObject *param_1,UExporter *param_2,ushort *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *this_01;
  FOutputDevice *this_02;
  FArchive local_8c [64];
  void *local_4c;
  int local_48;
  FOutputDevice local_40 [4];
  ushort *local_3c;
  int local_38;
  ushort *local_30;
  int local_2c;
  UExporter *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101b9a33;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff68;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff68;
  if (param_1 == (UObject *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Object",".\\UExporter.cpp",0x84);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_1c = param_2;
  puVar2 = appFExt(param_3);
  local_18 = 0;
  if ((param_2 == (UExporter *)0x0) &&
     (local_1c = UExporter::FindExporter(param_1,puVar2), local_1c == (UExporter *)0x0)) {
    UObject::GetFullName(param_1,(ushort *)0x0);
    FOutputDevice::Logf((FOutputDevice *)GWarn,(ushort *)GWarn);
    ExceptionList = local_10;
    return 0;
  }
  if (((byte)local_1c[0x48] & 1) != 0) {
    thunk_FUN_1012b240(&DAT_101d05f8);
    local_8._0_1_ = 1;
    UExporter::ExportToOutputDevice(param_1,local_1c,local_40,puVar2,0);
    if (param_4 != 0) {
      FString::FString((FString *)&local_30);
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar3 = appLoadFileToString((FString *)&local_30,param_3,(FFileManager *)GFileManager);
      if (iVar3 != 0) {
        if (local_2c == 0) {
          local_30 = &DAT_101cdd44;
        }
        if (local_38 == 0) {
          local_3c = &DAT_101cdd44;
        }
        iVar3 = appStrcmp(local_3c,local_30);
        if (iVar3 != 0) goto LAB_1012c20f;
        if (GLog != (undefined *)0x0) {
          FOutputDevice::Logf2(this,(ushort *)GLog);
        }
LAB_1012c1eb:
        local_18 = 1;
        local_8._0_1_ = 1;
        FString::~FString((FString *)&local_30);
        local_8 = (uint)local_8._1_3_ << 8;
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
      local_8._0_1_ = 1;
      FString::~FString((FString *)&local_30);
    }
    iVar3 = appSaveStringToFile((FString *)&local_3c,param_3,(FFileManager *)GFileManager);
    if (iVar3 == 0) {
      iVar3 = *(int *)GWarn;
      puVar2 = LocalizeQuery((ushort *)L"OverwriteReadOnly",(ushort *)L"Core",(ushort *)0x0);
      iVar3 = (**(code **)(iVar3 + 0xc))(GWarn,puVar2);
      if (iVar3 != 0) {
        (**(code **)(*(int *)GFileManager + 0x14))(param_3,0,1);
        iVar3 = appSaveStringToFile((FString *)&local_3c,param_3,(FFileManager *)GFileManager);
        if (iVar3 != 0) goto LAB_1012c2c1;
      }
      UObject::GetFullName(param_1,(ushort *)0x0);
      LocalizeError((ushort *)L"ExportOpen",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this_00,(ushort *)GWarn);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1012b550();
    }
    else {
LAB_1012c2c1:
      local_18 = 1;
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1012b550();
    }
    goto LAB_1012c456;
  }
  thunk_FUN_1012b2d0();
  local_8._0_1_ = 3;
  UExporter::ExportToArchive(param_1,local_1c,local_8c,puVar2);
  if (param_4 == 0) {
LAB_1012c3f9:
    iVar3 = appSaveArrayToFile((TArray<unsigned_char> *)&local_4c,param_3,
                               (FFileManager *)GFileManager);
    if (iVar3 == 0) {
      UObject::GetFullName(param_1,(ushort *)0x0);
      LocalizeError((ushort *)L"ExportOpen",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this_02,(ushort *)GWarn);
    }
    else {
      local_18 = 1;
    }
  }
  else {
    thunk_FUN_10113aa0();
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar3 = appLoadFileToArray((TArray<unsigned_char> *)&local_30,param_3,
                               (FFileManager *)GFileManager);
    if (((iVar3 == 0) || (local_2c != local_48)) ||
       (iVar3 = appMemcmp(local_30,local_4c,local_48), iVar3 != 0)) {
      if (param_5 != 0) {
        iVar3 = *(int *)GWarn;
        puVar2 = param_3;
        puVar4 = LocalizeQuery((ushort *)L"Overwrite",(ushort *)L"Core",(ushort *)0x0);
        iVar3 = (**(code **)(iVar3 + 0xc))(GWarn,puVar4,puVar2);
        if (iVar3 == 0) goto LAB_1012c39e;
      }
      local_8._0_1_ = 3;
      thunk_FUN_10118750();
      goto LAB_1012c3f9;
    }
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(this_01,(ushort *)GLog);
    }
LAB_1012c39e:
    local_18 = 1;
    local_8._0_1_ = 3;
    thunk_FUN_10118750();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_1012b370();
LAB_1012c456:
  if (param_2 == (UExporter *)0x0) {
    (**(code **)(*(int *)local_1c + 0xc))();
  }
  ExceptionList = local_10;
  return local_18;
}


// ==== 1012c47c Catch@1012c47c

void Catch_1012c47c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1012c490 Catch@1012c490

void Catch_1012c490(void)

{
  appUnwindf((ushort *)&DAT_101d074c,L"UExporter::ExportToFile");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c5b0 FUN_1012c5b0

int FUN_1012c5b0(int param_1)

{
  int in_ECX;
  
  return *(int *)(param_1 + 0x70) - *(int *)(in_ECX + 0x70);
}


// ==== 1012c5f2 Catch@1012c5f2

void Catch_1012c5f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012c606 Catch@1012c606

void Catch_1012c606(void)

{
  appUnwindf((ushort *)&DAT_101d0d98,L"AutoPriorityCompare");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c680 FUN_1012c680

void FUN_1012c680(FArchive *param_1)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9a60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    uVar1 = thunk_FUN_1012a9f0(param_1,in_ECX + 0x34,in_ECX + 0x38);
    thunk_FUN_1012a9f0(uVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012c6f3 Catch@1012c6f3

void Catch_1012c6f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012c707 Catch@1012c707

void Catch_1012c707(void)

{
  appUnwindf((ushort *)&DAT_101d0d90,L"UFactory::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012c750 FUN_1012c750

int FUN_1012c750(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,1);
  }
  *(undefined1 *)(iVar2 + *(int *)in_ECX) = *param_1;
  return iVar2;
}


// ==== 1012c7a0 FUN_1012c7a0

void FUN_1012c7a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1012c840 FUN_1012c840

void FUN_1012c840(int param_1,int param_2)

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


// ==== 1012c8e0 FUN_1012c8e0

void FUN_1012c8e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_13c;
  int local_138;
  undefined1 local_134 [256];
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9a90;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb8;
  local_8 = 0;
  if (1 < param_2) {
    local_13c = param_1;
    local_138 = param_1 + -4 + param_2 * 4;
    ExceptionList = &local_10;
    _memset(local_134,0,0xf8);
    for (local_18 = &local_13c; &local_13c <= local_18; local_18 = local_18 + -2) {
      local_20 = (undefined4 *)*local_18;
      local_1c = (undefined4 *)local_18[1];
      puVar6 = (undefined4 *)*local_18;
LAB_1012c962:
      iVar3 = ((int)local_1c - (int)puVar6 >> 2) + 1;
      if (8 < iVar3) {
        uVar1 = puVar6[iVar3 / 2];
        puVar6[iVar3 / 2] = *puVar6;
        *puVar6 = uVar1;
        puVar4 = local_1c + 1;
        puVar5 = puVar6;
        local_30 = puVar4;
LAB_1012c9d5:
        puVar5 = puVar5 + 1;
        local_34 = puVar5;
        if (puVar5 <= local_1c) goto code_r0x1012c9e0;
        goto LAB_1012c9f1;
      }
      for (; puVar6 < local_1c; local_1c = local_1c + -1) {
        local_2c = puVar6;
        puVar4 = puVar6;
        puVar5 = puVar6;
        while( true ) {
          puVar5 = puVar5 + 1;
          local_28 = puVar5;
          if (local_1c < puVar5) break;
          iVar3 = FUN_1012c5b0(*puVar5);
          if (0 < iVar3) {
            local_2c = puVar5;
            puVar4 = puVar5;
          }
        }
        uVar1 = *puVar4;
        *puVar4 = *local_1c;
        *local_1c = uVar1;
      }
LAB_1012ca7a:
    }
  }
  ExceptionList = local_10;
  return;
code_r0x1012c9e0:
  iVar3 = FUN_1012c5b0(*puVar5);
  if (iVar3 < 1) goto LAB_1012c9d5;
LAB_1012c9f1:
  do {
    puVar7 = puVar4;
    puVar4 = puVar7 + -1;
    local_30 = puVar4;
    if (puVar4 <= puVar6) break;
    iVar3 = FUN_1012c5b0(*puVar4);
  } while (-1 < iVar3);
  puVar2 = local_1c;
  if (puVar5 <= puVar4) {
    uVar1 = *puVar5;
    *puVar5 = *puVar4;
    *puVar4 = uVar1;
    goto LAB_1012c9d5;
  }
  uVar1 = *puVar6;
  *puVar6 = *puVar4;
  *puVar4 = uVar1;
  if ((int)((int)puVar4 + (-4 - (int)puVar6) & 0xfffffffcU) <
      (int)((int)local_1c - (int)puVar5 & 0xfffffffcU)) {
    if (puVar5 < local_1c) {
      *local_18 = (int)puVar5;
      local_18[1] = (int)local_1c;
      local_18 = local_18 + 2;
    }
    if (puVar4 <= puVar6 + 1) goto LAB_1012ca7a;
    local_1c = puVar7 + -2;
  }
  else {
    if (puVar6 + 1 < puVar4) {
      *local_18 = (int)puVar6;
      local_18[1] = (int)(puVar7 + -2);
      local_18 = local_18 + 2;
    }
    if (puVar2 <= puVar5) goto LAB_1012ca7a;
    local_20 = puVar5;
    puVar6 = puVar5;
  }
  goto LAB_1012c962;
}


// ==== 1012caa8 Catch@1012caa8

void Catch_1012caa8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1012cabc Catch@1012cabc

void Catch_1012cabc(void)

{
  appUnwindf((ushort *)&DAT_101d0fcc,L"Sort");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012cb60 FUN_1012cb60

void FUN_1012cb60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9aa8;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1012cc40 FUN_1012cc40

int FUN_1012cc40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 1012cc90 FUN_1012cc90

void FUN_1012cc90(UClass *param_1,UPackage *param_2,undefined4 param_3,undefined4 param_4)

{
  UClass *pUVar1;
  
  for (pUVar1 = param_1; pUVar1 != (UClass *)0x0; pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
    if (pUVar1 == &UFactory::PrivateStaticClass) goto LAB_1012ccc5;
  }
  appFailAssert("Class->IsChildOf(T::StaticClass())",
                "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",0x4d9);
LAB_1012ccc5:
  if (param_2 == (UPackage *)0xffffffff) {
    param_2 = UObject::GetTransientPackage();
  }
  UObject::StaticConstructObject(param_1,param_2,param_3,param_4,0,GError,0);
  return;
}


// ==== 1012cd10 FUN_1012cd10

void FUN_1012cd10(void)

{
  UStrProperty *pUVar1;
  UArrayProperty *this;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ac0;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  ExceptionList = &local_10;
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Description",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar3);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x3c,(ushort *)&DAT_101d0d00,0);
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"InContextCommand",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar3);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x48,(ushort *)&DAT_101d0d28,0);
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"OutOfContextCommand",1);
  pUVar1 = UStrProperty::operator_new(0x78,uVar3);
  if (pUVar1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(pUVar1,0,0x54,(ushort *)&DAT_101d0d54,0);
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  FName::FName((FName *)&stack0xffffffcc,(ushort *)L"Formats",1);
  this = UArrayProperty::operator_new(0x7c,uVar3);
  if (this == (UArrayProperty *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = UArrayProperty::UArrayProperty(this,0,0x60,(ushort *)&DAT_101d0d68,0);
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
  ExceptionList = local_10;
  return;
}


// ==== 1012ce69 Catch@1012ce69

void Catch_1012ce69(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012ce7d Catch@1012ce7d

void Catch_1012ce7d(void)

{
  appUnwindf((ushort *)&DAT_101d0d88,L"UFactory::StaticConstructor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012cf00 FUN_1012cf00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_1012cf00(undefined4 param_1,UStruct *param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,ushort *param_6,undefined4 param_7,int param_8,
                      ushort *param_9,FOutputDevice *param_10)

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
  undefined1 *local_64 [3];
  undefined2 *local_58;
  int local_54;
  int local_4c;
  int local_48;
  int local_38;
  int local_34;
  undefined1 *local_30 [2];
  undefined2 *local_28;
  int local_24;
  int local_20;
  UObject *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101b9ae8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar3 = &stack0xffffff90;
  if (param_2 == (UStruct *)0x0) {
    ExceptionList = &local_10;
    appFailAssert("Class",".\\UFactory.cpp",0x3c);
    puVar3 = local_14;
  }
  local_14 = puVar3;
  thunk_FUN_1012c7a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_8 == 0) {
    thunk_FUN_1012b800();
    while (puVar2 = local_28, (int)local_28 < DAT_1033088c) {
      this = *(UStruct **)(_GObjObjects + (int)local_28 * 4);
      iVar4 = UStruct::IsChildOf(this,(UStruct *)&UFactory::PrivateStaticClass);
      if (iVar4 != 0) {
        pUVar5 = UClass::GetDefaultObject((UClass *)this);
        iVar4 = UStruct::IsChildOf(param_2,*(UStruct **)(pUVar5 + 0x34));
        if ((iVar4 != 0) && (-1 < *(int *)(pUVar5 + 0x70))) {
          local_30[0] = &stack0xffffff88;
          local_20 = thunk_FUN_1012cc90(*(undefined4 *)(_GObjObjects + (int)puVar2 * 4),0xffffffff);
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
  local_24 = 0;
  do {
    if (local_48 <= local_24) {
      if (param_8 == 0) {
        for (iVar4 = 0; local_38 = iVar4, iVar4 < local_48; iVar4 = iVar4 + 1) {
          piVar1 = *(int **)(local_4c + iVar4 * 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0xc))();
          }
        }
      }
      LocalizeError((ushort *)L"NoFindImport",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(param_10,(ushort *)param_10);
      local_8 = local_8 & 0xffffff00;
      thunk_FUN_1012cb60();
      ExceptionList = local_10;
      return (UObject *)0x0;
    }
    local_20 = local_24 * 4;
    pUVar5 = *(UObject **)(local_20 + local_4c);
    local_1c = (UObject *)0x0;
    if (((byte)pUVar5[0x6c] & 1) == 0) {
      iVar4 = appStricmp(param_6,(ushort *)&DAT_101d0e48);
      if (iVar4 != 0) {
        if (((byte)pUVar5[0x6c] & 8) == 0) {
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(*(FOutputDevice **)(param_2 + 0x20),(EName)GLog,(ushort *)0x2f8);
          }
          thunk_FUN_10113aa0();
          local_8 = CONCAT31(local_8._1_3_,3);
          iVar4 = appLoadFileToArray((TArray<unsigned_char> *)local_64,param_6,
                                     (FFileManager *)GFileManager);
          if (iVar4 != 0) {
            local_15 = 0;
            thunk_FUN_1012c750();
            local_30[0] = local_64[0];
            UObject::ParseParms(pUVar5,param_9);
            iVar4 = *(int *)pUVar5;
            ppuVar8 = local_30;
            puVar6 = appFExt(param_6);
            local_1c = (UObject *)
                       (**(code **)(iVar4 + 0x6c))(param_2,param_3,param_4,param_5,0,puVar6,ppuVar8)
            ;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          thunk_FUN_10118750();
        }
        else {
          if (GLog != (undefined *)0x0) {
            FOutputDevice::Logf2(*(FOutputDevice **)(param_2 + 0x20),(EName)GLog,(ushort *)0x2f8);
          }
          FString::FString((FString *)&local_58);
          local_8 = CONCAT31(local_8._1_3_,2);
          iVar4 = appLoadFileToString((FString *)&local_58,param_6,(FFileManager *)GFileManager);
          if (iVar4 != 0) {
            local_28 = local_58;
            if (local_54 == 0) {
              local_28 = &DAT_101cdd44;
            }
            UObject::ParseParms(pUVar5,param_9);
            iVar4 = *(int *)pUVar5;
            ppuVar7 = &local_28;
            puVar6 = appFExt(param_6);
            local_1c = (UObject *)
                       (**(code **)(iVar4 + 0x68))
                                 (param_1,param_2,param_3,param_4,param_5,0,puVar6,ppuVar7);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FString::~FString((FString *)&local_58);
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
        local_1c = (UObject *)(**(code **)(*(int *)pUVar5 + 0x70))(param_2,param_3,param_4,param_5);
LAB_1012d2f0:
        if (local_1c != (UObject *)0x0) {
          iVar4 = UObject::IsA(local_1c,(UClass *)param_2);
          if (iVar4 == 0) {
            appFailAssert("Result->IsA(Class)",".\\UFactory.cpp",0x7f);
          }
          if (param_8 == 0) {
            for (iVar4 = 0; local_34 = iVar4, iVar4 < local_48; iVar4 = iVar4 + 1) {
              piVar1 = *(int **)(local_4c + iVar4 * 4);
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 0xc))();
              }
            }
          }
          local_8 = local_8 & 0xffffff00;
          thunk_FUN_1012cb60();
          ExceptionList = local_10;
          return local_1c;
        }
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}


// ==== 1012d3d2 Catch@1012d3d2

void Catch_1012d3d2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_101f843c);
}


// ==== 1012d3e6 Catch@1012d3e6

void Catch_1012d3e6(void)

{
  appUnwindf((ushort *)&DAT_101d0f4c,L"UFactory::StaticImportObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012d550 FUN_1012d550

void FUN_1012d550(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9b6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UFactory::vftable;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1012d6f0 FUN_1012d6f0

void FUN_1012d6f0(void)

{
  FUN_1017c20c();
  return;
}


// ==== 1012d700 FUN_1012d700

void FUN_1012d700(void)

{
  FUN_1017c2a0();
  return;
}


// ==== 1012d710 FUN_1012d710

void FUN_1012d710(void)

{
  FUN_1017c3ba();
  return;
}


// ==== 1012d720 FUN_1012d720

void FUN_1012d720(void)

{
  FUN_1017c430();
  return;
}


// ==== 1012d730 FUN_1012d730

void FUN_1012d730(void)

{
  FUN_1017c560();
  return;
}


// ==== 1012d740 FUN_1012d740

void FUN_1012d740(void)

{
  FUN_1017c6b0();
  return;
}


// ==== 1012d750 FUN_1012d750

void FUN_1012d750(void)

{
  FUN_1017c7e0();
  return;
}


// ==== 1012d760 FUN_1012d760

void FUN_1012d760(void)

{
  FUN_1017c930();
  return;
}


// ==== 1012d770 FUN_1012d770

void FUN_1012d770(void)

{
  FUN_1017ca60();
  return;
}


// ==== 1012d780 FUN_1012d780

void FUN_1012d780(void)

{
  FUN_1017cb4a();
  return;
}


// ==== 1012d790 FUN_1012d790

void FUN_1012d790(void)

{
  FUN_1017cb60();
  return;
}


// ==== 1012d7a0 FUN_1012d7a0

void FUN_1012d7a0(void)

{
  FUN_1017cc60();
  return;
}


// ==== 1012d7b0 FUN_1012d7b0

bool FUN_1012d7b0(double param_1)

{
  int iVar1;
  
  iVar1 = __isnan(param_1);
  return iVar1 == 1;
}


// ==== 1012d7e0 _rand thunk -> 1017d36d

// ==== 1012d7f0 thunk_FUN_1017d360 thunk -> 1017d360

// ==== 1012d800 FUN_1012d800

float10 FUN_1012d800(void)

{
  int iVar1;
  
  iVar1 = _rand();
  return (float10)((float)iVar1 / 32767.0);
}


// ==== 1012d820 FUN_1012d820

void FUN_1012d820(undefined4 param_1)

{
  DAT_1027bd9c = param_1;
  return;
}


// ==== 1012d830 FUN_1012d830

void FUN_1012d830(float param_1)

{
  FUN_1017bb20((double)param_1);
  FUN_1017b700();
  return;
}


// ==== 1012d860 FUN_1012d860

void FUN_1012d860(float param_1)

{
  FUN_1017ba00((double)param_1);
  FUN_1017b700();
  return;
}


// ==== 1012d890 FUN_1012d890

void FUN_1012d890(float param_1)

{
  FUN_1017bb20((double)(param_1 + 0.5));
  FUN_1017b700();
  return;
}


// ==== 1012d8c0 FUN_1012d8c0

float10 FUN_1012d8c0(float param_1)

{
  int iVar1;
  
  FUN_1017bb20((double)param_1);
  iVar1 = FUN_1017b700();
  return (float10)(param_1 - (float)iVar1);
}


// ==== 1012d910 FUN_1012d910

undefined4 FUN_1012d910(byte *param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_1012d93b;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  if (param_3 == 0) {
LAB_1012d999:
    uVar1 = 0;
  }
  else {
LAB_1012d93b:
    iVar2 = (uint)*param_1 - (uint)*param_2;
    if (iVar2 == 0) {
      if (param_3 == 1) goto LAB_1012d999;
      iVar2 = (uint)param_1[1] - (uint)param_2[1];
      if (iVar2 == 0) {
        if (param_3 == 2) goto LAB_1012d999;
        iVar2 = (uint)param_1[2] - (uint)param_2[2];
        if (iVar2 == 0) {
          if ((param_3 == 3) || (iVar2 = (uint)param_1[3] - (uint)param_2[3], iVar2 == 0))
          goto LAB_1012d999;
        }
      }
    }
    uVar1 = 1;
    if (iVar2 < 1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}


// ==== 1012d9d0 FUN_1012d9d0

undefined4 FUN_1012d9d0(char *param_1,int param_2)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return 1;
    }
    cVar1 = *param_1;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (cVar1 == '\0');
  return 0;
}


// ==== 1012da10 _memmove thunk -> 1017d390

// ==== 1012da20 _memset thunk -> 1017b980

// ==== 1012da30 FUN_1012da30

wchar_t * FUN_1012da30(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ba0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _wcsncpy(param_1,param_2,param_3);
  param_1[param_3 - 1] = L'\0';
  ExceptionList = local_10;
  return param_1;
}


// ==== 1012da86 Catch@1012da86

void Catch_1012da86(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012da9a Catch@1012da9a

void Catch_1012da9a(void)

{
  appUnwindf((ushort *)&DAT_101d1198,L"appStrncpy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012dae0 FUN_1012dae0

void FUN_1012dae0(wchar_t *param_1,size_t param_2,undefined4 *param_3)

{
  __vsnwprintf(param_1,param_2,(wchar_t *)*param_3,(va_list)(param_3 + 1));
  return;
}


// ==== 1012db10 FUN_1012db10

void FUN_1012db10(char *param_1,size_t param_2,undefined4 *param_3)

{
  __vsnprintf(param_1,param_2,(char *)*param_3,(va_list)(param_3 + 1));
  return;
}


// ==== 1012db40 FUN_1012db40

int FUN_1012db40(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}


// ==== 1012db60 FUN_1012db60

int FUN_1012db60(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = param_1 + 1;
  do {
    sVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar2 != 0);
  return (int)param_1 - (int)psVar1 >> 1;
}


// ==== 1012db80 thunk_FUN_1017d8eb thunk -> 1017d8eb

// ==== 1012db90 FUN_1012db90

short * FUN_1012db90(short *param_1,ushort *param_2)

{
  short sVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  
  sVar1 = *param_1;
  if (sVar1 != 0) {
    iVar4 = (int)param_1 - (int)param_2;
    puVar2 = param_2;
joined_r0x1012dbb5:
    do {
      if (sVar1 != 0) {
        uVar5 = *puVar2;
        if (uVar5 == 0) {
          return param_1;
        }
        uVar3 = *(ushort *)(iVar4 + (int)puVar2);
        if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
          uVar3 = uVar3 + 0x20;
        }
        if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
          uVar5 = uVar5 + 0x20;
        }
        if (uVar3 == uVar5) {
          sVar1 = *(short *)(iVar4 + (int)(puVar2 + 1));
          puVar2 = puVar2 + 1;
          goto joined_r0x1012dbb5;
        }
      }
      if (*puVar2 == 0) {
        return param_1;
      }
      sVar1 = param_1[1];
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 2;
      puVar2 = param_2;
    } while (sVar1 != 0);
  }
  return (short *)0x0;
}


// ==== 1012dc40 _wcschr thunk -> 1017d949

// ==== 1012dc50 _wcsrchr thunk -> 1017d96b

// ==== 1012dc60 FUN_1012dc60

int FUN_1012dc60(int param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  undefined4 *puVar5;
  
  psVar2 = param_2;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  puVar5 = (undefined4 *)(param_1 + -2);
  do {
    psVar4 = (short *)((int)puVar5 + 2);
    puVar5 = (undefined4 *)((int)puVar5 + 2);
  } while (*psVar4 != 0);
  psVar4 = param_2;
  for (uVar3 = (uint)((int)psVar2 - (int)param_2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *(undefined4 *)psVar4;
    psVar4 = psVar4 + 2;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = (int)psVar2 - (int)param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*psVar4;
    psVar4 = (short *)((int)psVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return param_1;
}


// ==== 1012dcc0 ATL::ChTraitsOS<wchar_t>::StringCompare

/* Library Function - Single Match
    public: static int __cdecl ATL::ChTraitsOS<wchar_t>::StringCompare(wchar_t const *,wchar_t const
   *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl ATL::ChTraitsOS<wchar_t>::StringCompare(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  
  while( true ) {
    wVar1 = *param_1;
    bVar2 = (ushort)wVar1 < (ushort)*param_2;
    if (wVar1 != *param_2) break;
    if (wVar1 == L'\0') {
      return 0;
    }
    wVar1 = param_1[1];
    bVar2 = (ushort)wVar1 < (ushort)param_2[1];
    if (wVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (wVar1 == L'\0') {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}


// ==== 1012dd00 __wcsicmp thunk -> 1017db3d

// ==== 1012dd10 FUN_1012dd10

int FUN_1012dd10(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  iVar2 = param_1 - (int)param_2;
  do {
    sVar1 = *param_2;
    *(short *)(iVar2 + (int)param_2) = sVar1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return param_1;
}


// ==== 1012dd40 thunk_FUN_1017dddf thunk -> 1017dddf

// ==== 1012dd50 thunk_FUN_1017de48 thunk -> 1017de48

// ==== 1012dd60 FUN_1012dd60

float10 FUN_1012dd60(ushort *param_1)

{
  char *_String;
  double dVar1;
  
  _String = appToAnsi(param_1,(char *)0x0);
  dVar1 = _atof(_String);
  return (float10)(float)dVar1;
}


// ==== 1012dd90 _wcstoul thunk -> 1017e207

// ==== 1012dda0 _wcsncmp thunk -> 1017e24c

// ==== 1012ddb0 __wcsnicmp thunk -> 1017e369

// ==== 1012ddc0 _qsort thunk -> 1017e4d0

// ==== 1012ddd0 FUN_1012ddd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012ddd0(void)

{
  int iVar1;
  ushort *puVar2;
  char local_420;
  undefined1 local_41f [1035];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9bb0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffbd4;
  local_8 = 0;
  _DAT_1027bda0 = 0;
  if (GUnicodeOS == 0) {
    local_420 = '\0';
    ExceptionList = &local_10;
    _memset(local_41f,0,0x3ff);
    __strdate(&local_420);
    puVar2 = appFromAnsi(&local_420,(ushort *)0x0);
    appStrcpy((ushort *)&DAT_1027bda0,puVar2);
    appStrcat((ushort *)&DAT_1027bda0,(ushort *)&DAT_101d1168);
    __strtime(&local_420);
    puVar2 = appFromAnsi(&local_420,(ushort *)0x0);
    appStrcat((ushort *)&DAT_1027bda0,puVar2);
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xfffffbd4;
    __wstrdate((wchar_t *)&DAT_1027bda0);
    appStrcat((ushort *)&DAT_1027bda0,(ushort *)&DAT_101d1160);
    iVar1 = appStrlen((ushort *)&DAT_1027bda0);
    __wstrtime((wchar_t *)(&DAT_1027bda0 + iVar1 * 2));
  }
  ExceptionList = local_10;
  return &DAT_1027bda0;
}


// ==== 1012dec5 Catch@1012dec5

void Catch_1012dec5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012ded9 Catch@1012ded9

void Catch_1012ded9(void)

{
  appUnwindf((ushort *)&DAT_101d116c,L"appTimestamp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012df40 FUN_1012df40

float10 FUN_1012df40(void)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  double dVar4;
  
  DAT_1027bd9c = DAT_1027bd9c * 0xbb38435 + 0x3619636b;
  fVar2 = (float)((DAT_102387e0 ^ DAT_1027bd9c) & 0x7fffff ^ DAT_102387e0);
  dVar4 = (double)fVar2;
  fVar3 = (float10)FUN_1017bb20(dVar4);
  iVar1 = FUN_1017b700(dVar4,(float)fVar3);
  return (float10)(fVar2 - (float)iVar1);
}


// ==== 1012dfc0 FUN_1012dfc0

ushort * FUN_1012dfc0(ushort *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9bc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = appStrlen(param_1);
  param_3 = param_3 - iVar1;
  if (0 < param_3) {
    appStrncpy(param_1 + iVar1,param_2,param_3);
    (param_1 + iVar1)[param_3 + -1] = 0;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1012e028 Catch@1012e028

void Catch_1012e028(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012e03c Catch@1012e03c

void Catch_1012e03c(void)

{
  appUnwindf((ushort *)&DAT_101d11a0,L"appStrncat");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e080 FUN_1012e080

void FUN_1012e080(wchar_t *param_1,wchar_t *param_2)

{
  __vsnwprintf(param_1,0x400,param_2,&stack0x0000000c);
  return;
}


// ==== 1012e0b0 FUN_1012e0b0

FString * FUN_1012e0b0(FString *param_1)

{
  ushort *puVar1;
  tm *_Tm;
  wchar_t *pwVar2;
  __time64_t _Var3;
  longlong lVar4;
  uint local_30;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  float fStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9be9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_20 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  puVar1 = appStaticString1024();
  __time64((__time64_t *)&local_30);
  _Tm = __gmtime64((__time64_t *)&local_30);
  _Var3 = __mktime64(_Tm);
  lVar4 = __alldiv(local_30 - (uint)_Var3,
                   (local_2c - (int)((ulonglong)_Var3 >> 0x20)) - (uint)(local_30 < (uint)_Var3),
                   0xe10,0);
  local_1c = (undefined4)lVar4;
  fStack_18 = (float)lVar4;
  pwVar2 = L"+%1.1f";
  if (fStack_18 <= 0.0) {
    pwVar2 = L"%1.1f";
  }
  appSprintf(puVar1,(ushort *)pwVar2,(double)lVar4);
  FString::FString(param_1,puVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1012e173 Catch@1012e173

void Catch_1012e173(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1012e187 Catch@1012e187

void Catch_1012e187(void)

{
  appUnwindf((ushort *)&DAT_101d1190,L"appGetGMTRef");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012e1e0 FUN_1012e1e0

int FUN_1012e1e0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x44) + 7 >> 3;
}


// ==== 1012e1f0 FUN_1012e1f0

undefined4 FUN_1012e1f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 1012e200 FUN_1012e200

void FUN_1012e200(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2c) = 1;
  return;
}


// ==== 1012e210 FUN_1012e210

undefined1 * FUN_1012e210(undefined4 param_1)

{
  int *in_ECX;
  undefined4 *puVar1;
  undefined4 local_4;
  
  puVar1 = &local_4;
  local_4 = 0;
  (**(code **)(*in_ECX + 0xc))(&local_4,param_1);
  return (undefined1 *)puVar1;
}


// ==== 1012e240 FUN_1012e240

uint FUN_1012e240(void)

{
  int *in_ECX;
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffff;
  (**(code **)(*in_ECX + 8))(puVar1,1,(uint)in_ECX & 0xffffff);
  return (uint)puVar1 >> 0x18;
}


// ==== 1012e260 FUN_1012e260

void FUN_1012e260(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x1012e273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 8))();
  return;
}


// ==== 1012e280 FUN_1012e280

undefined4 FUN_1012e280(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x2c) == 0) && (*(int *)(in_ECX + 0x48) != *(int *)(in_ECX + 0x44))) {
    return 0;
  }
  return 1;
}


// ==== 1012e2a0 FUN_1012e2a0

void FUN_1012e2a0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2c) = 1;
  return;
}


// ==== 1012e2b0 FUN_1012e2b0

int FUN_1012e2b0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x44) + 7 >> 3;
}


// ==== 1012e2c0 FUN_1012e2c0

undefined4 FUN_1012e2c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 1012e2d0 FUN_1012e2d0

undefined4 FUN_1012e2d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x48);
}


// ==== 1012e300 FUN_1012e300

void FUN_1012e300(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte local_4;
  
  if (param_5 != 0) {
    if ((int)param_5 < 9) {
      iVar2 = (param_2 - 1) + param_5;
      iVar10 = (param_4 - 1) + param_5;
      bVar4 = (byte)param_2 & 7;
      param_5._0_1_ = (byte)param_4 & 7;
      bVar5 = (byte)(0xfe << ((byte)iVar2 & 7));
      iVar9 = (int)(param_4 + ((int)param_4 >> 0x1f & 7U)) >> 3;
      iVar7 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
      iVar2 = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
      iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
      if (iVar9 == iVar2) {
        uVar3 = (uint)(*(byte *)(param_3 + iVar9) >> (byte)param_5);
      }
      else {
        uVar3 = (uint)*(byte *)(iVar2 + param_3) << (8 - (byte)param_5 & 0x1f) |
                (uint)(*(byte *)(param_3 + iVar9) >> (byte)param_5);
      }
      bVar6 = (byte)(0xff << bVar4);
      if (iVar10 != iVar7) {
        *(byte *)(iVar10 + param_1) =
             (char)uVar3 << bVar4 & bVar6 | ~bVar6 & *(byte *)(iVar10 + param_1);
        *(byte *)(iVar7 + param_1) =
             (byte)(uVar3 >> (8 - bVar4 & 0x1f)) & ~bVar5 | *(byte *)(iVar7 + param_1) & bVar5;
        return;
      }
      *(byte *)(iVar10 + param_1) =
           (char)uVar3 << bVar4 & ~bVar5 & bVar6 | ~(~bVar5 & bVar6) & *(byte *)(iVar10 + param_1);
      return;
    }
    iVar2 = param_2 + param_5;
    iVar10 = 0xff << ((byte)iVar2 & 7);
    iVar13 = (int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    iVar9 = (param_2 & 7) - (param_4 & 7);
    iVar7 = param_5 + param_4;
    iVar11 = (int)(param_4 + ((int)param_4 >> 0x1f & 7U)) >> 3;
    param_5 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) - iVar13;
    uVar3 = ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) - iVar11;
    bVar4 = (byte)iVar9;
    if (iVar9 < 0) {
      if ((int)param_5 < (int)(uVar3 - 1)) {
        param_5 = uVar3 - 1;
      }
      pbVar1 = (byte *)(iVar11 + param_3);
      iVar2 = iVar11 + 1;
      iVar11 = iVar11 + 1;
      bVar5 = bVar4 + 0x10;
      uVar3 = ((uint)*(byte *)(iVar2 + param_3) << (bVar5 & 0x1f)) +
              ((uint)*pbVar1 << (bVar4 + 8 & 0x1f)) >> 8;
    }
    else {
      if ((int)param_5 < (int)uVar3) {
        param_5 = uVar3;
      }
      uVar3 = (uint)*(byte *)(iVar11 + param_3) << (bVar4 & 0x1f);
      bVar5 = bVar4 + 8;
    }
    bVar4 = (byte)(0xff << (sbyte)(param_2 & 7));
    *(byte *)(iVar13 + param_1) = ~bVar4 & *(byte *)(iVar13 + param_1) | bVar4 & (byte)uVar3;
    uVar12 = iVar11 + 1;
    iVar13 = iVar13 + 1;
    if (1 < param_5) {
      param_5 = param_5 - 1;
      iVar2 = iVar13;
      do {
        pbVar1 = (byte *)(uVar12 + param_3);
        uVar12 = uVar12 + 1;
        iVar13 = iVar2 + 1;
        uVar8 = ((uint)*pbVar1 << (bVar5 & 0x1f)) + uVar3;
        uVar3 = uVar8 >> 8;
        param_5 = param_5 + -1;
        *(char *)(iVar2 + param_1) = (char)(uVar8 >> 8);
        iVar2 = iVar13;
      } while (param_5 != 0);
    }
    if (iVar10 != 0xff) {
      if (iVar7 - 1U >> 3 == uVar12) {
        bVar4 = (byte)(((uint)*(byte *)(uVar12 + param_3) << (bVar5 & 0x1f)) + uVar3 >> 8);
      }
      else {
        bVar4 = (byte)(uVar3 >> 8);
      }
      local_4 = (byte)iVar10;
      *(byte *)(iVar13 + param_1) = ~local_4 & bVar4 | *(byte *)(iVar13 + param_1) & local_4;
    }
  }
  return;
}


// ==== 1012e630 FUN_1012e630

void FUN_1012e630(byte *param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  byte *pbVar2;
  
  uVar1 = *(uint *)(in_ECX + 0x44);
  if (*(int *)(in_ECX + 0x48) < (int)(uVar1 + param_2)) {
    *(undefined4 *)(in_ECX + 0x2c) = 1;
    return;
  }
  if (param_2 == 1) {
    if ((*param_1 & 1) != 0) {
      pbVar2 = (byte *)(((int)uVar1 >> 3) + *(int *)(in_ECX + 0x38));
      *pbVar2 = *pbVar2 | (&DAT_102387e4)[uVar1 & 7];
    }
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
    return;
  }
  thunk_FUN_1012e300(*(undefined4 *)(in_ECX + 0x38),uVar1,param_1,0,param_2);
  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + param_2;
  return;
}


// ==== 1012e6c0 FUN_1012e6c0

void FUN_1012e6c0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  param_2 = param_2 * 8;
  if (*(int *)(in_ECX + 0x44) + param_2 <= *(int *)(in_ECX + 0x48)) {
    thunk_FUN_1012e300(*(undefined4 *)(in_ECX + 0x38),*(int *)(in_ECX + 0x44),param_1,0,param_2);
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + param_2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 1;
  return;
}


// ==== 1012e720 FUN_1012e720

void FUN_1012e720(uint *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  bVar2 = appCeilLogTwo(param_2);
  if (*(int *)(in_ECX + 0x48) < (int)((uint)bVar2 + *(int *)(in_ECX + 0x44))) {
    *(undefined4 *)(in_ECX + 0x2c) = 1;
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
        pcVar1 = (char *)(((int)*(uint *)(in_ECX + 0x44) >> 3) + *(int *)(in_ECX + 0x38));
        *pcVar1 = *pcVar1 + (&DAT_102387e4)[*(uint *)(in_ECX + 0x44) & 7];
        iVar4 = iVar4 + uVar3;
      }
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
      uVar3 = uVar3 * 2;
    } while (uVar3 + iVar4 < param_2);
  }
  return;
}


// ==== 1012e7b0 FUN_1012e7b0

void FUN_1012e7b0(uint param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  bVar2 = appCeilLogTwo(param_2);
  if (*(int *)(in_ECX + 0x48) < (int)((uint)bVar2 + *(int *)(in_ECX + 0x44))) {
    *(undefined4 *)(in_ECX + 0x2c) = 1;
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
        pcVar1 = (char *)(((int)*(uint *)(in_ECX + 0x44) >> 3) + *(int *)(in_ECX + 0x38));
        *pcVar1 = *pcVar1 + (&DAT_102387e4)[*(uint *)(in_ECX + 0x44) & 7];
        iVar4 = iVar4 + uVar3;
      }
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
      uVar3 = uVar3 * 2;
    } while (uVar3 + iVar4 < param_2);
  }
  return;
}


// ==== 1012e840 FUN_1012e840

void FUN_1012e840(char param_1)

{
  uint uVar1;
  int in_ECX;
  byte *pbVar2;
  
  uVar1 = *(uint *)(in_ECX + 0x44);
  if ((int)(uVar1 + 1) <= *(int *)(in_ECX + 0x48)) {
    if (param_1 != '\0') {
      pbVar2 = (byte *)(((int)uVar1 >> 3) + *(int *)(in_ECX + 0x38));
      *pbVar2 = *pbVar2 | (&DAT_102387e4)[uVar1 & 7];
    }
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 1;
  return;
}


// ==== 1012e890 FUN_1012e890

undefined4 FUN_1012e890(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 1012e8a0 FUN_1012e8a0

void FUN_1012e8a0(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(in_ECX + 1) & 7) != 0) {
    pbVar2 = (byte *)(((int)in_ECX[1] >> 3) + *(int *)(param_1 + 0x38));
    *pbVar2 = *pbVar2 & (&DAT_102387ec)[in_ECX[1] & 7];
  }
  iVar1 = in_ECX[1] + 7 >> 3;
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
  *(undefined4 *)(param_1 + 0x2c) = *in_ECX;
  *(undefined4 *)(param_1 + 0x44) = in_ECX[1];
  return;
}


// ==== 1012e930 FUN_1012e930

void FUN_1012e930(int *param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9c00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x44) = param_2;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  thunk_FUN_10113f60(0);
  thunk_FUN_1012aa10(param_2 + 7 >> 3);
  (**(code **)(*param_1 + 8))(*(undefined4 *)(in_ECX + 0x38),param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1012e9a3 Catch@1012e9a3

void Catch_1012e9a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012e9b7 Catch@1012e9b7

void Catch_1012e9b7(void)

{
  appUnwindf((ushort *)&DAT_101d124c,L"FBitReader::SetData");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ea00 FUN_1012ea00

void FUN_1012ea00(byte *param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  byte *pbVar3;
  
  uVar1 = param_2 + 7 >> 3;
  uVar2 = uVar1 & 3;
  pbVar3 = param_1;
  for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3 = pbVar3 + 4;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = 0;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = *(uint *)(in_ECX + 0x48);
  if (*(int *)(in_ECX + 0x44) < (int)(uVar1 + param_2)) {
    *(undefined4 *)(in_ECX + 0x2c) = 1;
    return;
  }
  if (param_2 != 1) {
    thunk_FUN_1012e300(param_1,0,*(undefined4 *)(in_ECX + 0x38),uVar1,param_2);
    *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + param_2;
    return;
  }
  if (((&DAT_102387e4)[uVar1 & 7] & *(byte *)(((int)uVar1 >> 3) + *(int *)(in_ECX + 0x38))) != 0) {
    *param_1 = *param_1 | 1;
  }
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
  return;
}


// ==== 1012eac0 FUN_1012eac0

void FUN_1012eac0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = 1;
  *param_1 = 0;
  if (1 < param_2) {
    while (uVar2 != 0) {
      uVar1 = *(uint *)(in_ECX + 0x48);
      if (*(int *)(in_ECX + 0x44) <= (int)uVar1) {
        *(undefined4 *)(in_ECX + 0x2c) = 1;
        return;
      }
      if (((&DAT_102387e4)[uVar1 & 7] & *(byte *)(((int)uVar1 >> 3) + *(int *)(in_ECX + 0x38))) != 0
         ) {
        *param_1 = *param_1 | uVar2;
      }
      *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
      uVar2 = uVar2 * 2;
      if (param_2 <= *param_1 + uVar2) {
        return;
      }
    }
  }
  return;
}


// ==== 1012eb40 FUN_1012eb40

undefined4 FUN_1012eb40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 1012eb50 FUN_1012eb50

void FUN_1012eb50(undefined4 param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,1);
  ExceptionList = local_c;
  return;
}


// ==== 1012ebc0 FUN_1012ebc0

void FUN_1012ebc0(int param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9c43;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
  local_8 = 0;
  *in_ECX = FBitWriter::vftable;
  thunk_FUN_1012eb50(param_1 + 7 >> 3);
  in_ECX[0x11] = 0;
  in_ECX[0x12] = param_1;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  thunk_FUN_10108420(in_ECX[0xe],in_ECX[0xf]);
  in_ECX[5] = 1;
  in_ECX[7] = 1;
  in_ECX[2] = in_ECX[2] | 0x80000000;
  ExceptionList = local_10;
  return;
}


// ==== 1012ec95 Catch@1012ec95

void Catch_1012ec95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012eca9 Catch@1012eca9

void Catch_1012eca9(void)

{
  appUnwindf((ushort *)&DAT_101d123c,L"FBitWriter::FBitWriter");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ed10 FUN_1012ed10

void FUN_1012ed10(void *param_1,int param_2)

{
  undefined4 *in_ECX;
  size_t _Size;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9c73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
  local_8 = 0;
  *in_ECX = FBitReader::vftable;
  _Size = param_2 + 7 >> 3;
  thunk_FUN_1012eb50(_Size);
  in_ECX[0x11] = param_2;
  in_ECX[0x12] = 0;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  in_ECX[4] = 1;
  in_ECX[7] = 1;
  in_ECX[2] = in_ECX[2] | 0x80000000;
  if (param_1 != (void *)0x0) {
    _memcpy((void *)in_ECX[0xe],param_1,_Size);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012ede9 Catch@1012ede9

void Catch_1012ede9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012edfd Catch@1012edfd

void Catch_1012edfd(void)

{
  appUnwindf((ushort *)&DAT_101d1244,L"FBitReader::FBitReader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ee60 FUN_1012ee60

void FUN_1012ee60(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(iVar2 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x20) = iVar1;
  return;
}


// ==== 1012ee90 FUN_1012ee90

undefined4 FUN_1012ee90(FCacheItem *param_1,int param_2)

{
  FCacheItem *pFVar1;
  int *piVar2;
  FMemCache *in_ECX;
  FMemCache *extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9c90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x10) < 0x1000000) {
    ExceptionList = &local_10;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (((*(int *)(param_1 + 0x18) != 0) &&
        (pFVar1 = *(FCacheItem **)(param_1 + 0x18), *(int *)pFVar1 == 0 && *(int *)(pFVar1 + 4) == 0
        )) && (param_1[0xe] == pFVar1[0xe])) {
      param_1 = FMemCache::MergeWithNext(in_ECX,pFVar1);
      in_ECX = extraout_ECX;
    }
    if (((*(int *)(param_1 + 0x14) != 0) &&
        (piVar2 = *(int **)(param_1 + 0x14), *piVar2 == 0 && piVar2[1] == 0)) &&
       (param_1[0xe] == *(FCacheItem *)((int)piVar2 + 0xe))) {
      param_1 = FMemCache::MergeWithNext(in_ECX,param_1);
    }
  }
  else if (param_2 == 0) {
    ExceptionList = &local_10;
    __aullshr(*(undefined4 *)param_1);
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  ExceptionList = local_10;
  return *(undefined4 *)(param_1 + 0x14);
}


// ==== 1012ef4d Catch@1012ef4d

void Catch_1012ef4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012ef61 Catch@1012ef61

void Catch_1012ef61(void)

{
  appUnwindf((ushort *)&DAT_101d13a4,L"FMemCache::FlushItem");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012efc0 FUN_1012efc0

void FUN_1012efc0(int param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ca0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((param_3 == (int *)0x0) || (*param_3 != 0 || param_3[1] != 0)) ||
     (*(byte *)((int)param_3 + 0xe) != param_5)) {
    if (((param_4 == (int *)0x0) || (*param_4 != 0 || param_4[1] != 0)) ||
       (*(byte *)((int)param_4 + 0xe) != param_5)) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        ExceptionList = &local_10;
        appFailAssert("UnusedItems != NULL",".\\UnCache.cpp",0x149);
      }
      puVar1 = *(undefined4 **)(in_ECX + 0x20);
      *(undefined4 *)(in_ECX + 0x20) = puVar1[5];
      puVar1[2] = param_1;
      *(undefined1 *)((int)puVar1 + 0xe) = (undefined1)param_5;
      *(undefined2 *)(puVar1 + 3) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = param_4;
      puVar1[6] = param_3;
      puVar1[7] = 0;
      if (param_3 == (int *)0x0) {
        *(undefined4 **)(in_ECX + 0x18) = puVar1;
      }
      else {
        param_3[5] = (int)puVar1;
      }
      if (param_4 != (int *)0x0) {
        param_4[6] = (int)puVar1;
      }
    }
    else {
      param_4[2] = param_1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1012f093 Catch@1012f093

void Catch_1012f093(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012f0a7 Catch@1012f0a7

void Catch_1012f0a7(void)

{
  appUnwindf((ushort *)&DAT_101d165c,L"FMemCache::CreateNewFreeSpace");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f110 FUN_1012f110

undefined4 FUN_1012f110(undefined4 param_1,ushort *param_2)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9cb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = ParseCommand((ushort **)&param_1,(ushort *)L"DUMPCACHE");
  puVar1 = param_2;
  if (iVar2 != 0) {
    for (iVar2 = *(int *)(in_ECX + 0x18); iVar2 != *(int *)(in_ECX + 0x1c);
        iVar2 = *(int *)(iVar2 + 0x14)) {
      FOutputDevice::Logf(*(FOutputDevice **)(iVar2 + 0x14),puVar1);
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1012f1df Catch@1012f1df

void Catch_1012f1df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012f1f3 Catch@1012f1f3

void Catch_1012f1f3(void)

{
  appUnwindf((ushort *)&DAT_101d1894,L"FMemCache::Exec");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f250 FUN_1012f250

void FUN_1012f250(ushort *param_1)

{
  int in_ECX;
  
  appSprintf(param_1,(ushort *)
                     L"Gets=%04i (%04.1f) Crts=%03i (%04.1f) Fresh=%03iK Stale=%03iK Items=%03i Tick=%04.1f"
             ,*(undefined4 *)(in_ECX + 0x10028),
             GSecondsPerCycle * (double)*(int *)(in_ECX + 0x10034) * 1000.0,
             *(undefined4 *)(in_ECX + 0x1002c),
             (double)*(int *)(in_ECX + 0x10030) * GSecondsPerCycle * 1000.0,
             (int)(*(int *)(in_ECX + 0x1004c) + (*(int *)(in_ECX + 0x1004c) >> 0x1f & 0x3ffU)) >> 10
             ,(int)(*(int *)(in_ECX + 0x10050) + (*(int *)(in_ECX + 0x10050) >> 0x1f & 0x3ffU)) >>
              10,*(int *)(in_ECX + 0x10048) + *(int *)(in_ECX + 0x10040) +
                 *(int *)(in_ECX + 0x1003c),
             (double)*(int *)(in_ECX + 0x10038) * GSecondsPerCycle * 1000.0);
  *(undefined4 *)(in_ECX + 0x10038) = 0;
  *(undefined4 *)(in_ECX + 0x10030) = 0;
  *(undefined4 *)(in_ECX + 0x1002c) = 0;
  *(undefined4 *)(in_ECX + 0x10034) = 0;
  *(undefined4 *)(in_ECX + 0x10028) = 0;
  return;
}


// ==== 1012f370 FUN_1012f370

void FUN_1012f370(void)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint *puVar6;
  int local_34;
  uint local_30;
  int local_28;
  int local_24;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9cc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*in_ECX != 1) {
    ExceptionList = &local_10;
    appFailAssert("Initialized == 1",".\\UnCache.cpp",0xd1);
  }
  if (in_ECX[6] == 0) {
    appFailAssert("CacheItems != NULL",".\\UnCache.cpp",0xd4);
  }
  local_18 = 0;
  local_28 = 0;
  bVar2 = false;
  local_24 = 0;
  local_30 = 0xffffffff;
  local_1c = in_ECX[0x4009];
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar6 = (uint *)in_ECX[6];
  do {
    if (puVar6 == (uint *)in_ECX[7]) {
      if (local_1c != in_ECX[0x4015] + in_ECX[0x4009]) {
        appFailAssert("ExpectedPointer == CacheMemory + MemTotal",".\\UnCache.cpp",0x104);
      }
      for (iVar4 = in_ECX[8]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
        local_18 = local_18 + 1;
      }
      local_8 = 0;
      if (local_18 + 1 != in_ECX[0x4011]) {
        appFailAssert("ItemCount+1==ItemsTotal",".\\UnCache.cpp",0x10e);
      }
      local_8 = CONCAT31(local_8._1_3_,5);
      for (uVar5 = 0; uVar5 < 0x4000; uVar5 = uVar5 + 1) {
        for (puVar6 = (uint *)in_ECX[uVar5 + 9]; puVar6 != (uint *)0x0; puVar6 = (uint *)puVar6[7])
        {
          local_24 = local_24 + 1;
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
      if (local_24 != local_28) {
        appFailAssert("HashCount == UsedItemCount",".\\UnCache.cpp",0x121);
      }
      ExceptionList = local_10;
      return;
    }
    if (puVar6[2] != local_1c) {
      appFailAssert("Item->Data == ExpectedPointer",".\\UnCache.cpp",0xdf);
    }
    if (puVar6[5] == 0) {
      appFailAssert("Item->LinearNext",".\\UnCache.cpp",0xe0);
    }
    if (*(uint **)(puVar6[5] + 0x18) != puVar6) {
      appFailAssert("Item->LinearNext->LinearPrev == Item",".\\UnCache.cpp",0xe1);
    }
    local_1c = local_1c + (*(int *)(puVar6[5] + 8) - puVar6[2]);
    local_18 = local_18 + 1;
    if (*puVar6 == 0 && puVar6[1] == 0) {
      if ((*(byte *)((int)puVar6 + 0xe) == local_30) && (bVar2)) {
        appFailAssert("!WasFree",".\\UnCache.cpp",0xed);
      }
      bVar2 = true;
      if (*puVar6 != 0 || puVar6[1] != 0) goto LAB_1012f4b0;
    }
    else {
LAB_1012f4b0:
      bVar2 = false;
    }
    local_30 = (uint)*(byte *)((int)puVar6 + 0xe);
    if (puVar6 != (uint *)in_ECX[6]) {
      if (puVar6[6] == 0) {
        appFailAssert("Item->LinearPrev",".\\UnCache.cpp",0xf5);
      }
      if (*(uint **)(puVar6[6] + 0x14) != puVar6) {
        appFailAssert("Item->LinearPrev->LinearNext == Item",".\\UnCache.cpp",0xf6);
      }
    }
    if (*puVar6 != 0 || puVar6[1] != 0) {
      local_28 = local_28 + 1;
      local_34 = 0;
      uVar5 = *puVar6;
      for (puVar3 = (uint *)in_ECX[(((uVar5 >> 0xc ^ uVar5) >> 0xc ^ uVar5) & 0x3fff) + 9];
          puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[7]) {
        local_34 = local_34 + (uint)(puVar3 == puVar6);
      }
      if (local_34 == 0) {
        appFailAssert("HashedCount!=0",".\\UnCache.cpp",0x100);
      }
      else if (local_34 == 1) goto LAB_1012f570;
      appFailAssert("HashedCount==1",".\\UnCache.cpp",0x101);
    }
LAB_1012f570:
    puVar6 = (uint *)puVar6[5];
  } while( true );
}


// ==== 1012f6b9 Catch@1012f6b9

void Catch_1012f6b9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_101f843c);
}


// ==== 1012f6cd Catch@1012f6cd

void Catch_1012f6cd(void)

{
  appUnwindf((ushort *)&DAT_101d1628,&DAT_101d1b80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f6e8 Catch@1012f6e8

void Catch_1012f6e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x40,&DAT_101f843c);
}


// ==== 1012f6fc Catch@1012f6fc

void Catch_1012f6fc(void)

{
  appUnwindf((ushort *)&DAT_101d157c,&DAT_101d1b7c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f717 Catch@1012f717

void Catch_1012f717(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x44,&DAT_101f843c);
}


// ==== 1012f72b Catch@1012f72b

void Catch_1012f72b(void)

{
  appUnwindf((ushort *)&DAT_101d1574,&DAT_101d1b78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f746 Catch@1012f746

void Catch_1012f746(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x48,&DAT_101f843c);
}


// ==== 1012f75a Catch@1012f75a

void Catch_1012f75a(void)

{
  appUnwindf((ushort *)&DAT_101d1630,L"FMemCache::CheckState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012f880 FUN_1012f880

void FUN_1012f880(uint param_1,int param_2,uint param_3,int param_4)

{
  FCacheItem *pFVar1;
  void *pvVar2;
  FCacheItem *pFVar3;
  FMemCache *in_ECX;
  uint uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_101b9cd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (*(int *)in_ECX != 0) {
    if (param_1 == 0 && param_2 == 0) {
      param_3 = 0;
    }
    else if (param_3 == 0xffffffff) {
      pFVar3 = (FCacheItem *)
               (in_ECX + (((param_1 >> 0xc ^ param_1) >> 0xc ^ param_1) & 0x3fff) * 4 + 0x24);
      while( true ) {
        if (*(int *)pFVar3 == 0) {
          ExceptionList = pvVar2;
          return;
        }
        pFVar1 = *(FCacheItem **)pFVar3;
        if ((*(uint *)pFVar1 == param_1) && (*(int *)(pFVar1 + 4) == param_2)) break;
        pFVar3 = pFVar1 + 0x1c;
      }
      *(int *)pFVar3 = *(int *)(pFVar1 + 0x1c);
      FMemCache::FlushItem(in_ECX,pFVar1,param_4);
      ExceptionList = local_10;
      return;
    }
    pFVar3 = *(FCacheItem **)(in_ECX + 0x18);
    while (pFVar3 != (FCacheItem *)0x0) {
      uVar4 = *(uint *)pFVar3;
      if ((uVar4 == 0 && *(int *)(pFVar3 + 4) == 0) || ((param_3 & uVar4) != (param_3 & param_1))) {
        pFVar3 = *(FCacheItem **)(pFVar3 + 0x14);
      }
      else {
        if (*(int *)(pFVar3 + 0x10) < 0x1000000) {
          FMemCache::Unhash(in_ECX,CONCAT44(*(undefined4 *)(pFVar3 + 4),uVar4));
        }
        pFVar3 = FMemCache::FlushItem(in_ECX,pFVar3,param_4);
      }
    }
    if ((param_3 == 0) && (param_4 == 0)) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        appFailAssert("CacheItems!=NULL",".\\UnCache.cpp",0x1a3);
      }
      uVar4 = 0;
      for (piVar5 = *(int **)(in_ECX + 0x18); piVar5 != *(int **)(in_ECX + 0x1c);
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
  ExceptionList = local_10;
  return;
}


// ==== 1012fa26 Catch@1012fa26

void Catch_1012fa26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1012fa3a Catch@1012fa3a

void Catch_1012fa3a(void)

{
  appUnwindf((ushort *)&DAT_101d16dc,L"FMemCache::Flush");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fad0 FUN_1012fad0

undefined8
FUN_1012fad0(FOutputDevice *param_1,int param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  FCacheItem *pFVar3;
  FMemCache *in_ECX;
  FCacheItem *pFVar4;
  int iVar5;
  uchar *puVar6;
  FCacheItem *pFVar7;
  bool bVar8;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  FCacheItem *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ce0;
  local_10 = ExceptionList;
  pFVar7 = (FCacheItem *)0x0;
  local_8 = 0;
  uVar2 = rdtsc();
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x10030) = *(int *)(in_ECX + 0x10030) - (int)uVar2;
  if (*(int *)in_ECX == 0) {
    appFailAssert("Initialized",".\\UnCache.cpp",0x1c7);
  }
  if (param_4 < 1) {
    appFailAssert("CreateSize > 0",".\\UnCache.cpp",0x1c8);
  }
  if (param_1 == (FOutputDevice *)0x0 && param_2 == 0) {
    appFailAssert("Id != 0",".\\UnCache.cpp",0x1c9);
  }
  *(int *)(in_ECX + 0x1002c) = *(int *)(in_ECX + 0x1002c) + 1;
  local_48 = 0x1000000;
  local_44 = 0;
  local_1c = (FCacheItem *)0x0;
  local_40 = 0;
  local_3c = 0;
  pFVar3 = *(FCacheItem **)(in_ECX + 0x18);
  pFVar4 = pFVar3;
  for (; pFVar3 != *(FCacheItem **)(in_ECX + 0x1c); pFVar3 = *(FCacheItem **)(pFVar3 + 0x14)) {
    uVar1 = *(uint *)(pFVar3 + 0x10);
    bVar8 = CARRY4(local_40,uVar1);
    local_40 = local_40 + uVar1;
    local_3c = local_3c + ((int)uVar1 >> 0x1f) + (uint)bVar8;
    while ((pFVar4 != (FCacheItem *)0x0 &&
           (param_4 + param_6 <=
            (int)(*(int *)(*(int *)(pFVar3 + 0x14) + 8) -
                 (*(int *)(pFVar4 + 8) + -1 + param_5 & ~(param_5 - 1U)))))) {
      if ((local_3c <= local_44) &&
         (((local_3c < local_44 || (local_40 < local_48)) && (pFVar4[0xe] == pFVar3[0xe])))) {
        local_48 = local_40;
        local_44 = local_3c;
        pFVar7 = pFVar4;
        local_1c = pFVar3;
      }
      uVar1 = *(uint *)(pFVar4 + 0x10);
      bVar8 = local_40 < uVar1;
      local_40 = local_40 - uVar1;
      local_3c = (local_3c - ((int)uVar1 >> 0x1f)) - (uint)bVar8;
      pFVar4 = *(FCacheItem **)(pFVar4 + 0x14);
    }
  }
  if (pFVar7 == (FCacheItem *)0x0) {
    for (iVar5 = *(int *)(in_ECX + 0x18); iVar5 != *(int *)(in_ECX + 0x1c);
        iVar5 = *(int *)(iVar5 + 0x14)) {
    }
    FMemCache::Exec(in_ECX,(ushort *)L"DUMPCACHE",(FOutputDevice *)GLog);
    FOutputDevice::Logf(param_1,(ushort *)GError);
  }
  for (; local_1c != pFVar7;
      local_1c = FMemCache::MergeWithNext(in_ECX,*(FCacheItem **)(local_1c + 0x18))) {
    if (*(int *)local_1c != 0 || *(int *)(local_1c + 4) != 0) {
      FMemCache::Unhash(in_ECX,*(__uint64 *)local_1c);
    }
  }
  if (*(int *)pFVar7 != 0 || *(int *)(pFVar7 + 4) != 0) {
    FMemCache::Unhash(in_ECX,*(__uint64 *)pFVar7);
  }
  puVar6 = (uchar *)(*(int *)(pFVar7 + 8) + -1 + param_5 & ~(param_5 - 1U));
  *(undefined2 *)(pFVar7 + 0xc) = *(undefined2 *)(in_ECX + 4);
  *(FOutputDevice **)pFVar7 = param_1;
  *(int *)(pFVar7 + 4) = param_2;
  *(int *)(pFVar7 + 0x10) = param_4 + 0x1000000;
  *(undefined4 *)(pFVar7 + 0x1c) =
       *(undefined4 *)
        (in_ECX + ((((uint)param_1 >> 0xc ^ (uint)param_1) >> 0xc ^ (uint)param_1) & 0x3fff) * 4 +
                  0x24);
  *(FCacheItem **)
   (in_ECX + ((((uint)param_1 >> 0xc ^ (uint)param_1) >> 0xc ^ (uint)param_1) & 0x3fff) * 4 + 0x24)
       = pFVar7;
  if (*(int *)(in_ECX + 0x20) != 0) {
    pFVar3 = *(FCacheItem **)(pFVar7 + 0x14);
    if (puVar6 + param_4 < *(uchar **)(pFVar3 + 8)) {
      FMemCache::CreateNewFreeSpace
                (in_ECX,puVar6 + param_4,*(uchar **)(pFVar3 + 8),pFVar7,pFVar3,
                 (uint)(byte)pFVar7[0xe]);
    }
    if ((*(int *)(in_ECX + 0x20) != 0) && (0xff < (int)(puVar6 + -*(int *)(pFVar7 + 8)))) {
      FOutputDevice::Logf((FOutputDevice *)(puVar6 + -*(int *)(pFVar7 + 8)),(ushort *)GError);
      FMemCache::CreateNewFreeSpace
                (in_ECX,*(uchar **)(pFVar7 + 8),puVar6,*(FCacheItem **)(pFVar7 + 0x18),pFVar7,
                 (uint)(byte)pFVar7[0xe]);
      *(uchar **)(pFVar7 + 8) = puVar6;
    }
  }
  *param_3 = pFVar7;
  *(FCacheItem **)(in_ECX + 0x10) = pFVar7;
  *(FOutputDevice **)(in_ECX + 8) = param_1;
  *(int *)(in_ECX + 0xc) = param_2;
  uVar2 = rdtsc();
  *(int *)(in_ECX + 0x10030) = *(int *)(in_ECX + 0x10030) + (int)uVar2 + -0xc;
  ExceptionList = local_10;
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),puVar6);
}


// ==== 1012fdbe Catch@1012fdbe

void Catch_1012fdbe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_101f843c);
}


// ==== 1012fdd2 Catch@1012fdd2

void Catch_1012fdd2(void)

{
  appUnwindf((ushort *)&DAT_101d1820,L"FMemCache::Create");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012fec0 FUN_1012fec0

void FUN_1012fec0(void)

{
  undefined8 uVar1;
  int *piVar2;
  int in_ECX;
  
  uVar1 = rdtsc();
  *(int *)(in_ECX + 0x10038) = *(int *)(in_ECX + 0x10038) - (int)uVar1;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x10050) = 0;
  *(undefined4 *)(in_ECX + 0x1004c) = 0;
  *(undefined4 *)(in_ECX + 0x10048) = 0;
  *(undefined4 *)(in_ECX + 0x10040) = 0;
  *(undefined4 *)(in_ECX + 0x1003c) = 0;
  for (piVar2 = *(int **)(in_ECX + 0x18); piVar2 != *(int **)(in_ECX + 0x1c);
      piVar2 = (int *)piVar2[5]) {
    if ((*piVar2 != 0 || piVar2[1] != 0) &&
       ((int)(uint)*(ushort *)(piVar2 + 3) < *(int *)(in_ECX + 4))) {
      piVar2[4] = piVar2[4] - (piVar2[4] >> 5);
    }
  }
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  uVar1 = rdtsc();
  *(int *)(in_ECX + 0x10038) = *(int *)(in_ECX + 0x10038) + (int)uVar1 + -0xc;
  return;
}


// ==== 1012ff66 Catch@1012ff66

void Catch_1012ff66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1012ff7a Catch@1012ff7a

void Catch_1012ff7a(void)

{
  appUnwindf((ushort *)&DAT_101d1828,L"FMemCache::Tick");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1012ffd0 FUN_1012ffd0

void FUN_1012ffd0(int param_1,uint param_2,int param_3,int param_4)

{
  FCacheItem *pFVar1;
  undefined4 uVar2;
  int iVar3;
  FMemCache *in_ECX;
  int iVar4;
  int iVar5;
  FMemCache *pFVar6;
  FCacheItem *pFVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9d00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)in_ECX != 0) {
    ExceptionList = &local_10;
    appFailAssert("Initialized==0",".\\UnCache.cpp",0x21);
  }
  *(int *)(in_ECX + 0x10054) = param_1;
  *(uint *)(in_ECX + 0x10044) = param_2;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (param_3 == 0) {
    param_3 = thunk_FUN_101088e0(param_1,L"CacheMemory");
  }
  *(int *)(in_ECX + 0x10024) = param_3;
  uVar2 = thunk_FUN_101088e0(-(uint)((int)((ulonglong)param_2 * 0x20 >> 0x20) != 0) |
                             (uint)((ulonglong)param_2 * 0x20),L"CacheItems");
  *(undefined4 *)(in_ECX + 0x14) = uVar2;
  pFVar6 = in_ECX + 0x20;
  for (iVar4 = 0; iVar4 < (int)param_2; iVar4 = iVar4 + 1) {
    *(int *)pFVar6 = *(int *)(in_ECX + 0x14) + iVar4 * 0x20;
    pFVar6 = (FMemCache *)(*(int *)(in_ECX + 0x14) + 0x14 + iVar4 * 0x20);
  }
  iVar4 = 0;
  *(undefined4 *)pFVar6 = 0;
  pFVar7 = (FCacheItem *)0x0;
  if (param_4 == 0) {
    pFVar7 = *(FCacheItem **)(in_ECX + 0x20);
    FMemCache::CreateNewFreeSpace
              (in_ECX,*(uchar **)(in_ECX + 0x10024),*(uchar **)(in_ECX + 0x10024) + param_1,
               (FCacheItem *)0x0,(FCacheItem *)0x0,0);
    iVar4 = 1;
  }
  else {
    while( true ) {
      iVar3 = iVar4 * param_4;
      if (param_1 <= iVar3) break;
      pFVar1 = *(FCacheItem **)(in_ECX + 0x20);
      iVar5 = param_1 - iVar3;
      if (param_4 <= param_1 - iVar3) {
        iVar5 = param_4;
      }
      FMemCache::CreateNewFreeSpace
                (in_ECX,(uchar *)(iVar3 + *(int *)(in_ECX + 0x10024)),
                 (uchar *)(iVar3 + *(int *)(in_ECX + 0x10024)) + iVar5,pFVar7,(FCacheItem *)0x0,
                 iVar4);
      iVar4 = iVar4 + 1;
      pFVar7 = pFVar1;
    }
  }
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0x20);
  FMemCache::CreateNewFreeSpace
            (in_ECX,(uchar *)(*(int *)(in_ECX + 0x10024) + param_1),
             (uchar *)(*(int *)(in_ECX + 0x10024) + param_1),pFVar7,(FCacheItem *)0x0,iVar4);
  for (iVar4 = 0; iVar4 < 0x4000; iVar4 = iVar4 + 1) {
    *(undefined4 *)(in_ECX + iVar4 * 4 + 0x24) = 0;
  }
  *(undefined4 *)in_ECX = 1;
  FMemCache::CheckState(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10130163 Catch@10130163

void Catch_10130163(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10130177 Catch@10130177

void Catch_10130177(void)

{
  appUnwindf((ushort *)&DAT_101d1348,L"FMemCache::Init");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130210 FUN_10130210

void FUN_10130210(int param_1)

{
  FMemCache *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9d10;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)in_ECX != 0) {
    ExceptionList = &local_10;
    FMemCache::CheckState(in_ECX);
    thunk_FUN_101088c0(*(undefined4 *)(in_ECX + 0x14));
    if (param_1 != 0) {
      (**(code **)(*(int *)GMalloc + 8))(*(undefined4 *)(in_ECX + 0x10024));
    }
    *(undefined4 *)in_ECX = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013028a Catch@1013028a

void Catch_1013028a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013029e Catch@1013029e

void Catch_1013029e(void)

{
  appUnwindf((ushort *)&DAT_101d1350,L"FMemCache::Exit");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101302f0 FUN_101302f0

void FUN_101302f0(undefined4 param_1,UClass *param_2,ushort *param_3,ushort *param_4,ulong param_5,
                 undefined4 param_6)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,0,param_2,param_3,param_4,param_5);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined4 *)(in_ECX + 0x34) = param_6;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10130390 FUN_10130390

void FUN_10130390(undefined4 param_1,ushort *param_2,ushort *param_3,ulong param_4)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10130420 FUN_10130420

void FUN_10130420(undefined4 param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10130490 FUN_10130490

void FUN_10130490(void)

{
  return;
}


// ==== 101304d0 Catch@101304d0

void Catch_101304d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101304e4 Catch@101304e4

void Catch_101304e4(void)

{
  appUnwindf((ushort *)&DAT_101d1c50,L"UField::Bind");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130520 FUN_10130520

void FUN_10130520(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9d90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::PostLoad(in_ECX);
  (**(code **)(*(int *)in_ECX + 0x70))();
  ExceptionList = local_10;
  return;
}


// ==== 10130570 Catch@10130570

void Catch_10130570(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10130584 Catch@10130584

void Catch_10130584(void)

{
  appUnwindf((ushort *)&DAT_101d1c58,L"UField::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101305c0 FUN_101305c0

undefined4 FUN_101305c0(void)

{
  return 0;
}


// ==== 101305d0 FUN_101305d0

undefined4 FUN_101305d0(void)

{
  return 1;
}


// ==== 101305e0 FUN_101305e0

void FUN_101305e0(void)

{
  FOutputDevice *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9da0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  ExceptionList = local_10;
  return;
}


// ==== 10130635 Catch@10130635

void Catch_10130635(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10130649 Catch@10130649

void Catch_10130649(void)

{
  appUnwindf((ushort *)&DAT_101d1ca4,L"UField::AddCppProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130690 FUN_10130690

void FUN_10130690(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9db0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Register(in_ECX);
  if (*(UObject **)(in_ECX + 0x34) != (UObject *)0x0) {
    UObject::ConditionalRegister(*(UObject **)(in_ECX + 0x34));
  }
  ExceptionList = local_10;
  return;
}


// ==== 101306e3 Catch@101306e3

void Catch_101306e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101306f7 Catch@101306f7

void Catch_101306f7(void)

{
  appUnwindf((ushort *)&DAT_101d1cac,L"UField::Register");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130740 FUN_10130740

void FUN_10130740(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(in_ECX + 0x48);
  *(int *)(in_ECX + 0x48) = param_1;
  return;
}


// ==== 1013078e Catch@1013078e

void Catch_1013078e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101307a2 Catch@101307a2

void Catch_101307a2(void)

{
  appUnwindf((ushort *)&DAT_101d1cc4,L"UStruct::AddCppProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101307e0 FUN_101307e0

int * FUN_101307e0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,1);
  return param_1;
}


// ==== 10130800 FUN_10130800

int * FUN_10130800(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,2);
  return param_1;
}


// ==== 10130820 FUN_10130820

int * FUN_10130820(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,4);
  return param_1;
}


// ==== 10130840 FUN_10130840

int * FUN_10130840(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,4);
  return param_1;
}


// ==== 10130860 FUN_10130860

int * FUN_10130860(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 4))(param_2,8);
  return param_1;
}


// ==== 10130880 FUN_10130880

void FUN_10130880(void)

{
  return;
}


// ==== 10130890 FUN_10130890

void FUN_10130890(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 101308b0 FUN_101308b0

int * FUN_101308b0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x1c))(param_2);
  (**(code **)(*param_1 + 4))(param_2 + 4,4);
  return param_1;
}


// ==== 101308f0 FUN_101308f0

void FUN_101308f0(void)

{
  UField *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9dd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UField::PostLoad(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10130935 Catch@10130935

void Catch_10130935(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10130949 Catch@10130949

void Catch_10130949(void)

{
  appUnwindf((ushort *)&DAT_101d2618,L"UStruct::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130990 FUN_10130990

void FUN_10130990(void)

{
  UStruct *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9de0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::PostLoad(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 101309d5 Catch@101309d5

void Catch_101309d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101309e9 Catch@101309e9

void Catch_101309e9(void)

{
  appUnwindf((ushort *)&DAT_101d2628,L"UFunction::PostLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130a30 FUN_10130a30

void FUN_10130a30(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  return;
}


// ==== 10130a50 FUN_10130a50

void FUN_10130a50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10130aa0 FUN_10130aa0

void FUN_10130aa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10130af0 FUN_10130af0

void FUN_10130af0(void)

{
  FArray *in_ECX;
  
  if (*(int *)(in_ECX + 8) != *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4);
    FArray::Realloc(in_ECX,4);
  }
  return;
}


// ==== 10130b10 FUN_10130b10

void FUN_10130b10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10130bd0 FUN_10130bd0

void FUN_10130bd0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 4,*(int *)(in_ECX + 8) * 4);
  return;
}


// ==== 10130c50 FUN_10130c50

void FUN_10130c50(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0xc,*(int *)(in_ECX + 8) * 0xc);
  return;
}


// ==== 10130c90 FUN_10130c90

void FUN_10130c90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10130dc0 FUN_10130dc0

void FUN_10130dc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9e70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_10108c50(param_1,param_2,param_2 + 4,param_2 + 8,param_2 + 0xc);
  uVar1 = thunk_FUN_10108c50(uVar1);
  uVar1 = thunk_FUN_10108c50(uVar1);
  thunk_FUN_10108c50(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10130e30 Catch@10130e30

void Catch_10130e30(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10130e44 Catch@10130e44

void Catch_10130e44(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FGuid<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10130e90 FUN_10130e90

void FUN_10130e90(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10130ed0 FUN_10130ed0

void FUN_10130ed0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10130ef0 FUN_10130ef0

void FUN_10130ef0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10130f10 FUN_10130f10

void FUN_10130f10(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10130f30 FUN_10130f30

void FUN_10130f30(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_c;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  in_ECX[0xe] = 0;
  *in_ECX = FPropertyTag::FArchiveCountSize::vftable;
  in_ECX[0xf] = param_1;
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  *unaff_FS_OFFSET = uVar1;
  return;
}


// ==== 10130ff0 FUN_10130ff0

void FUN_10130ff0(undefined4 *param_1)

{
  FArchive *in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x24))(*param_1);
  operator<<(in_ECX,(FCompactIndex *)&stack0x00000000);
  return;
}


// ==== 10131030 FUN_10131030

void FUN_10131030(undefined4 param_1)

{
  FArchive *in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x20))(param_1);
  operator<<(in_ECX,(FCompactIndex *)&stack0x00000000);
  return;
}


// ==== 10131070 FUN_10131070

void FUN_10131070(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + param_2;
  return;
}


// ==== 10131090 FUN_10131090

void FUN_10131090(int param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ea0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((UClass *)param_2[9] == &UBoolProperty::PrivateStaticClass) {
    if (param_2[0x1e] == 0) {
      appFailAssert("Bool->BitMask!=0",".\\UnClass.cpp",0xbf);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      if ((*(byte *)(in_ECX + 1) & 0x80) == 0) {
        *param_3 = *param_3 & ~param_2[0x1e];
      }
      else {
        *param_3 = *param_3 | param_2[0x1e];
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x90))(param_1,param_3,param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


// ==== 10131137 Catch@10131137

void Catch_10131137(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013114b Catch@1013114b

void Catch_1013114b(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FPropertyTag::SerializeTaggedProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101311a0 FUN_101311a0

void FUN_101311a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 101311f0 FUN_101311f0

void FUN_101311f0(void)

{
  int in_ECX;
  
  if (*(UClass **)(in_ECX + 0x24) != &UClass::PrivateStaticClass) {
    do {
      in_ECX = *(int *)(in_ECX + 0x18);
    } while (*(UClass **)(in_ECX + 0x24) != &UClass::PrivateStaticClass);
  }
  return;
}


// ==== 10131210 FUN_10131210

void FUN_10131210(FArchive *param_1)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ed0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_10130ed0(param_1,in_ECX + 0x34,in_ECX + 0x38);
  thunk_FUN_10130ed0(uVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131287 Catch@10131287

void Catch_10131287(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013129b Catch@1013129b

void Catch_1013129b(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d1c60,L"UField::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131300 FUN_10131300

void FUN_10131300(void)

{
  UField *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ee0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UField::Register(in_ECX);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x20);
  ExceptionList = local_10;
  return;
}


// ==== 1013134d Catch@1013134d

void Catch_1013134d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10131361 Catch@10131361

void Catch_10131361(void)

{
  appUnwindf((ushort *)&DAT_101d1ccc,L"UStruct::Register");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101313a0 FUN_101313a0

void FUN_101313a0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9ef0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10113f60(0);
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 101313f3 Catch@101313f3

void Catch_101313f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10131407 Catch@10131407

void Catch_10131407(void)

{
  appUnwindf((ushort *)&DAT_101d21ac,L"UStruct::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131450 FUN_10131450

void FUN_10131450(FOutputDevice *param_1)

{
  FArchive *pFVar1;
  undefined4 uVar2;
  UField *in_ECX;
  FOutputDevice *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar1 = (FArchive *)param_1;
  puStack_c = &LAB_101b9f00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  UField::Serialize(in_ECX,(FArchive *)param_1);
  uVar2 = thunk_FUN_10130e90(pFVar1,in_ECX + 0x40,in_ECX + 0x48);
  thunk_FUN_10130ed0(uVar2);
  (**(code **)(*(int *)pFVar1 + 0x1c))(in_ECX + 0x50);
  if (*(int *)(in_ECX + 0x50) == 0) {
    appFailAssert("FriendlyName!=NAME_None",".\\UnClass.cpp",0x2aa);
  }
  if (0x77 < *(int *)(pFVar1 + 4)) {
    thunk_FUN_10130e90(pFVar1,in_ECX + 0x44);
  }
  uVar2 = thunk_FUN_10130820(pFVar1,in_ECX + 100,in_ECX + 0x60);
  thunk_FUN_10130820(uVar2);
  param_1 = *(FOutputDevice **)(in_ECX + 0x58);
  thunk_FUN_10130820(pFVar1,&param_1);
  if (*(int *)(pFVar1 + 0x10) != 0) {
    thunk_FUN_10113f60(0);
    thunk_FUN_1012aa10(param_1);
  }
  local_18 = (FOutputDevice *)0x0;
  while( true ) {
    if ((int)param_1 <= (int)local_18) break;
    (**(code **)(*(int *)in_ECX + 0x90))(&local_18,pFVar1);
  }
  if (local_18 != param_1) {
    FOutputDevice::Logf(param_1,(ushort *)GError);
  }
  if (*(int *)(pFVar1 + 0x10) != 0) {
    (**(code **)(*(int *)in_ECX + 0x80))(pFVar1,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013158b Catch@1013158b

void Catch_1013158b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1013159f Catch@1013159f

void Catch_1013159f(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2250,L"UStruct::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131640 FUN_10131640

void FUN_10131640(void)

{
  UStruct *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10131685 Catch@10131685

void Catch_10131685(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10131699 Catch@10131699

void Catch_10131699(void)

{
  appUnwindf((ushort *)&DAT_101d2288,L"UState::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101316e0 FUN_101316e0

void FUN_101316e0(FArchive *param_1)

{
  undefined4 uVar1;
  UStruct *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_10130860(param_1,in_ECX + 0x8c,in_ECX + 0x94);
  thunk_FUN_10130860(uVar1);
  uVar1 = thunk_FUN_10130800(param_1,in_ECX + 0xa0,in_ECX + 0x9c);
  thunk_FUN_10108c50(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1013176d Catch@1013176d

void Catch_1013176d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10131781 Catch@10131781

void Catch_10131781(void)

{
  appUnwindf((ushort *)&DAT_101d2290,L"UState::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101317d0 FUN_101317d0

void FUN_101317d0(void)

{
  undefined4 uVar1;
  int *piVar2;
  UField *in_ECX;
  FOutputDevice *this;
  ushort local_224 [264];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f30;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd0;
  local_8 = 0;
  ExceptionList = &local_10;
  UField::Bind(in_ECX);
  if ((((GIsDynamicRecompile == 0) && (GIsEditor == 0)) && (*(int *)(in_ECX + 0x34) == 0)) &&
     (in_ECX != (UField *)&UObject::PrivateStaticClass)) {
    appFailAssert("GIsDynamicRecompile || GIsEditor || GetSuperClass() || this==UObject::StaticClass()"
                  ,".\\UnClass.cpp",0x359);
  }
  if (*(int *)(in_ECX + 0x518) == 0) {
    if ((*(uint *)(in_ECX + 0x1c) & 0x4000000) != 0) {
      uVar1 = (**(code **)(*(int *)in_ECX + 0x94))();
      appSprintf(local_224,(ushort *)L"autoclass%s",uVar1);
      piVar2 = UPackage::GetDllExport(*(UPackage **)(in_ECX + 0x18),local_224,0);
      if (piVar2 == (int *)0x0) {
        if (GIsEditor == 0) {
          UObject::GetPathName((UObject *)in_ECX,(UObject *)0x0,(ushort *)0x0);
          FOutputDevice::Logf(this,(ushort *)GError);
        }
      }
      else {
        if (*piVar2 == 0) {
          appFailAssert("*ClassPtr",".\\UnClass.cpp",0x368);
        }
        if ((UField *)*piVar2 != in_ECX) {
          appFailAssert("*ClassPtr==this",".\\UnClass.cpp",0x369);
        }
        *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(*piVar2 + 0x518);
      }
    }
    if ((*(int *)(in_ECX + 0x518) == 0) && (*(int **)(in_ECX + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(in_ECX + 0x34) + 0x70))();
      *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x518);
    }
  }
  if (((GIsDynamicRecompile == 0) && (GIsEditor == 0)) && (*(int *)(in_ECX + 0x518) == 0)) {
    appFailAssert("GIsDynamicRecompile || GIsEditor || ClassConstructor",".\\UnClass.cpp",0x378);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013196e Catch@1013196e

void Catch_1013196e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10131982 Catch@10131982

void Catch_10131982(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2404,L"UClass::Bind");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x14),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131a30 FUN_10131a30

int FUN_10131a30(void)

{
  int in_EAX;
  int in_ECX;
  
  if ((*(int *)(in_EAX + 0x10) != 0) && (*(int *)(in_ECX + 0x10) != 0)) {
    return *(int *)(in_EAX + 0x14) - *(int *)(in_ECX + 0x14);
  }
  return 0;
}


// ==== 10131a50 FUN_10131a50

void FUN_10131a50(void)

{
  UStruct *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x4bc) == 0) {
    ExceptionList = &local_10;
    appFailAssert("ClassWithin",".\\UnClass.cpp",0x3a8);
  }
  UStruct::PostLoad(in_ECX);
  if (*(UObject **)(in_ECX + 0x34) != (UObject *)0x0) {
    UObject::ConditionalPostLoad(*(UObject **)(in_ECX + 0x34));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10131ac8 Catch@10131ac8

void Catch_10131ac8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10131adc Catch@10131adc

void Catch_10131adc(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2440,L"UClass::PostLoad");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10131b40 FUN_10131b40

int * FUN_10131b40(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_2);
  (**(code **)(*piVar1 + 4))(param_2 + 4,4);
  (**(code **)(*piVar1 + 4))(param_2 + 8,4);
  return piVar1;
}


// ==== 10131b90 FUN_10131b90

FOutputDevice * FUN_10131b90(uint *param_1,FArchive *param_2)

{
  uint uVar1;
  FArchive *pFVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = param_2;
  puStack_c = &LAB_101b9f50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_101307e0(param_2,*param_1 + in_ECX[0x15]);
  *param_1 = *param_1 + 1;
  iVar4 = in_ECX[0x15];
  iVar3 = *param_1 + iVar4;
  this = (FOutputDevice *)(uint)*(byte *)(iVar3 + -1);
  if ((FOutputDevice *)0x6f < this) {
    do {
      iVar4 = (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    } while (iVar4 != 0x16);
    goto LAB_10131d28;
  }
  if ((FOutputDevice *)0x5f < this) {
    thunk_FUN_101307e0(param_2,iVar3);
    *param_1 = *param_1 + 1;
    do {
      iVar4 = (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    } while (iVar4 != 0x16);
    if (in_ECX[0x16] <= (int)*param_1) {
      ExceptionList = local_10;
      return this;
    }
    uVar5 = (**(code **)(*(int *)param_2 + 0x28))();
    goto LAB_10131d3c;
  }
  switch(this) {
  case (FOutputDevice *)0x0:
  case (FOutputDevice *)0x1:
  case (FOutputDevice *)0x2:
  case (FOutputDevice *)0x29:
    thunk_FUN_10130f10(param_2,iVar3);
    *param_1 = *param_1 + 4;
    break;
  default:
    FOutputDevice::Logf(this,(ushort *)GError);
    break;
  case (FOutputDevice *)0x4:
  case (FOutputDevice *)0xd:
  case (FOutputDevice *)0xe:
  case (FOutputDevice *)0x37:
    goto switchD_10131c5c_caseD_4;
  case (FOutputDevice *)0x5:
    thunk_FUN_101307e0(param_2,iVar3);
    goto LAB_10131e2e;
  case (FOutputDevice *)0x7:
    thunk_FUN_10130800(param_2,iVar3);
    *param_1 = *param_1 + 2;
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
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
    thunk_FUN_10130800(param_2,iVar3);
    *param_1 = *param_1 + 2;
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0xa:
    thunk_FUN_10130800(param_2,iVar3);
    *param_1 = *param_1 + 2;
    if (*(short *)((*param_1 - 2) + in_ECX[0x15]) != -1) {
      (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    }
    break;
  case (FOutputDevice *)0xc:
    if ((*param_1 & 3) != 0) {
      appFailAssert("(iCode&3)==0",".\\UnClass.cpp",0x5c4);
    }
    do {
      uVar1 = *param_1;
      iVar4 = in_ECX[0x15];
      operator<<(param_2,(FLabelEntry *)(uVar1 + iVar4));
      *param_1 = *param_1 + 8;
    } while (*(int *)(uVar1 + iVar4) != 0);
    break;
  case (FOutputDevice *)0xf:
  case (FOutputDevice *)0x14:
  case (FOutputDevice *)0x45:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x11:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
  case (FOutputDevice *)0x40:
  case (FOutputDevice *)0x41:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
  case (FOutputDevice *)0x10:
  case (FOutputDevice *)0x1a:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x12:
  case (FOutputDevice *)0x19:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    thunk_FUN_10130800(param_2,*param_1 + in_ECX[0x15]);
    *param_1 = *param_1 + 2;
    thunk_FUN_101307e0(param_2,in_ECX[0x15] + *param_1);
LAB_10131e2e:
    *param_1 = *param_1 + 1;
switchD_10131c5c_caseD_4:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x13:
  case (FOutputDevice *)0x2e:
    thunk_FUN_1012a9f0(param_2,iVar3);
    *param_1 = *param_1 + 4;
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x1b:
  case (FOutputDevice *)0x38:
    (**(code **)(*(int *)param_2 + 0x1c))(iVar3);
    *param_1 = *param_1 + 4;
    do {
      iVar4 = (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    } while (iVar4 != 0x16);
    goto LAB_10131d28;
  case (FOutputDevice *)0x1c:
    thunk_FUN_10130ef0(param_2,iVar3);
    *param_1 = *param_1 + 4;
    do {
      iVar4 = (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    } while (iVar4 != 0x16);
LAB_10131d28:
    if ((int)*param_1 < in_ECX[0x16]) {
      uVar5 = (**(code **)(*(int *)param_2 + 0x28))();
LAB_10131d3c:
      uVar1 = *param_1;
      thunk_FUN_101307e0(param_2,in_ECX[0x15] + uVar1);
      *param_1 = *param_1 + 1;
      param_2 = (FArchive *)0xffffffff;
      if (*(char *)(*param_1 + in_ECX[0x15] + -1) == 'B') {
        thunk_FUN_10130820(pFVar2,*param_1 + in_ECX[0x15]);
        *param_1 = *param_1 + 4;
        param_2 = *(FArchive **)((*param_1 - 4) + in_ECX[0x15]);
      }
      *param_1 = uVar1;
      (**(code **)(*(int *)pFVar2 + 0x3c))(uVar5);
      if (param_2 == (FArchive *)0x64) {
        (**(code **)(*in_ECX + 0x90))(param_1,pFVar2);
      }
    }
    break;
  case (FOutputDevice *)0x1d:
    thunk_FUN_10130820(param_2,iVar3);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x1e:
    thunk_FUN_10130840(param_2,iVar3);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x1f:
    do {
      thunk_FUN_101307e0(param_2,iVar3);
      *param_1 = *param_1 + 1;
      iVar3 = *param_1 + in_ECX[0x15];
    } while (*(char *)(iVar3 + -1) != '\0');
    break;
  case (FOutputDevice *)0x20:
    (**(code **)(*(int *)param_2 + 0x18))(iVar3);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x21:
  case (FOutputDevice *)0x44:
    (**(code **)(*(int *)param_2 + 0x1c))(iVar3);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x22:
    thunk_FUN_10130820(param_2,iVar3);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x23:
    thunk_FUN_10130840(param_2,iVar3);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130840(param_2,in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130840(param_2,in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
    break;
  case (FOutputDevice *)0x24:
  case (FOutputDevice *)0x2c:
    thunk_FUN_101307e0(param_2,iVar3);
    *param_1 = *param_1 + 1;
    break;
  case (FOutputDevice *)0x2f:
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    iVar3 = *param_1 + in_ECX[0x15];
  case (FOutputDevice *)0x6:
    thunk_FUN_10130800(param_2,iVar3);
    *param_1 = *param_1 + 2;
    break;
  case (FOutputDevice *)0x32:
  case (FOutputDevice *)0x33:
    thunk_FUN_10130ef0(param_2,iVar3);
    *param_1 = *param_1 + 4;
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x34:
    do {
      thunk_FUN_10130800(param_2,*param_1 + iVar4);
      *param_1 = *param_1 + 2;
      iVar4 = in_ECX[0x15];
    } while (*(char *)((*param_1 - 1) + iVar4) != '\0');
    break;
  case (FOutputDevice *)0x36:
    thunk_FUN_10130f10(param_2,iVar3);
    *param_1 = *param_1 + 4;
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x39:
    thunk_FUN_101307e0(param_2,iVar3);
    *param_1 = *param_1 + 1;
    (**(code **)(*in_ECX + 0x90))(param_1,param_2);
    break;
  case (FOutputDevice *)0x42:
    thunk_FUN_10130820(param_2,iVar3);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
    thunk_FUN_10130820(param_2,in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
    do {
      thunk_FUN_101307e0(param_2,*param_1 + in_ECX[0x15]);
      *param_1 = *param_1 + 1;
    } while (*(char *)((*param_1 - 1) + in_ECX[0x15]) != '\0');
    break;
  case (FOutputDevice *)0x43:
    thunk_FUN_10130f10(param_2,iVar3);
    *param_1 = *param_1 + 4;
    (**(code **)(*(int *)param_2 + 0x1c))(in_ECX[0x15] + *param_1);
    *param_1 = *param_1 + 4;
  }
  ExceptionList = local_10;
  return this;
}


// ==== 10132108 Catch@10132108

void Catch_10132108(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1013211c Catch@1013211c

void Catch_1013211c(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2600,L"SerializeExpr");
  appUnwindf((ushort *)L"(%02X)",*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101323c0 FUN_101323c0

void FUN_101323c0(FArchive *param_1)

{
  UField *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UField::Serialize(in_ECX,param_1);
  operator<<(param_1,(FString *)(in_ECX + 0x40));
  ExceptionList = local_10;
  return;
}


// ==== 1013241a Catch@1013241a

void Catch_1013241a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013242e Catch@1013242e

void Catch_1013242e(void)

{
  appUnwindf((ushort *)&DAT_101d26d8,L"UConst::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132470 FUN_10132470

FArchive * FUN_10132470(FArchive *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10130bd0(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)param_1 + 0x1c))(*param_2 + iVar2 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10114240(local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      uVar1 = thunk_FUN_10114b70(4,param_2);
      (**(code **)(*(int *)param_1 + 0x1c))(uVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10132526 Catch@10132526

void Catch_10132526(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1013253a Catch@1013253a

void Catch_1013253a(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132590 FUN_10132590

int FUN_10132590(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 101325e0 FUN_101325e0

int FUN_101325e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 4);
  }
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  if (iVar4 != -1) {
    iVar2 = *in_ECX;
    do {
      if (*(int *)(iVar2 + 4 + iVar4 * 0xc) == iVar1) {
        return iVar2 + 8 + iVar4 * 0xc;
      }
      iVar4 = *(int *)(iVar2 + iVar4 * 0xc);
    } while (iVar4 != -1);
  }
  return 0;
}


// ==== 10132650 FUN_10132650

void FUN_10132650(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  
  iVar2 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar3 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[4]);
  }
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar5);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 4);
      }
      uVar4 = in_ECX[4] - 1U & uVar4;
      *(undefined4 *)(*in_ECX + iVar5) = *(undefined4 *)(iVar2 + uVar4 * 4);
      *(int *)(iVar2 + uVar4 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar2;
  return;
}


// ==== 10132720 FUN_10132720

undefined4 * FUN_10132720(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  if (puVar4[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar4[1] + 4);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10132650();
  }
  return puVar4 + 2;
}


// ==== 10132820 FUN_10132820

void FUN_10132820(void)

{
  UClass *pUVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    while( true ) {
      iVar2 = in_ECX[1];
      while (iVar2 != 0) {
        for (pUVar1 = *(UClass **)(in_ECX[1] + 0x24); pUVar1 != (UClass *)0x0;
            pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
          if (pUVar1 == &UStruct::PrivateStaticClass) {
            return;
          }
        }
        iVar2 = *(int *)(in_ECX[1] + 0x38);
        in_ECX[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*in_ECX + 0x7c))();
      *in_ECX = iVar2;
      if (iVar2 == 0) break;
      in_ECX[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 10132890 FUN_10132890

void FUN_10132890(void)

{
  UClass *pUVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    while( true ) {
      iVar2 = in_ECX[1];
      while (iVar2 != 0) {
        for (pUVar1 = *(UClass **)(in_ECX[1] + 0x24); pUVar1 != (UClass *)0x0;
            pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
          if (pUVar1 == &UField::PrivateStaticClass) {
            return;
          }
        }
        iVar2 = *(int *)(in_ECX[1] + 0x38);
        in_ECX[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*in_ECX + 0x7c))();
      *in_ECX = iVar2;
      if (iVar2 == 0) break;
      in_ECX[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 10132900 FUN_10132900

void FUN_10132900(int param_1,int param_2)

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


// ==== 101329a0 FUN_101329a0

int FUN_101329a0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UStructProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 101329d0 FUN_101329d0

int FUN_101329d0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UBoolProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10132a00 FUN_10132a00

int FUN_10132a00(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10132a30 FUN_10132a30

int FUN_10132a30(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UObjectProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10132a60 FUN_10132a60

int FUN_10132a60(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UArrayProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10132a90 FUN_10132a90

int FUN_10132a90(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UDelegateProperty::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10132ac0 FUN_10132ac0

int FUN_10132ac0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UFunction::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10132af0 FUN_10132af0

void FUN_10132af0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_13c;
  int local_138;
  undefined1 local_134 [256];
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9f80;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb8;
  local_8 = 0;
  if (param_2 < 2) {
    return;
  }
  local_13c = param_1;
  local_138 = param_1 + -4 + param_2 * 4;
  ExceptionList = &local_10;
  _memset(local_134,0,0xf8);
  local_18 = &local_13c;
LAB_10132b56:
  if (local_18 < &local_13c) {
    ExceptionList = local_10;
    return;
  }
  puVar5 = (undefined4 *)*local_18;
  local_20 = puVar5;
  puVar4 = (undefined4 *)local_18[1];
LAB_10132b6f:
  local_1c = puVar4;
LAB_10132b72:
  iVar2 = ((int)puVar4 - (int)puVar5 >> 2) + 1;
  if (8 < iVar2) {
    uVar1 = puVar5[iVar2 / 2];
    puVar5[iVar2 / 2] = *puVar5;
    *puVar5 = uVar1;
    puVar3 = puVar4 + 1;
    puVar6 = puVar5;
    local_30 = puVar3;
LAB_10132be0:
    puVar6 = puVar6 + 1;
    local_34 = puVar6;
    if (puVar6 <= puVar4) goto code_r0x10132bea;
    goto LAB_10132bf7;
  }
  while (puVar5 < puVar4) {
    local_2c = puVar5;
    puVar6 = puVar5;
    puVar3 = puVar5;
    while (local_28 = puVar3 + 1, puVar3 + 1 <= puVar4) {
      uVar7 = FUN_10131a30();
      puVar3 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
      if (0 < (int)uVar7) {
        local_2c = puVar3;
        puVar6 = puVar3;
      }
    }
    uVar1 = *puVar6;
    *puVar6 = *puVar4;
    *puVar4 = uVar1;
    puVar4 = puVar4 + -1;
    local_1c = puVar4;
  }
  goto LAB_10132c76;
code_r0x10132bea:
  uVar7 = FUN_10131a30();
  puVar3 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 < 1) goto LAB_10132be0;
LAB_10132bf7:
  do {
    puVar3 = puVar3 + -1;
    local_30 = puVar3;
    if (puVar3 <= puVar5) break;
    uVar7 = FUN_10131a30();
    puVar3 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  } while (-1 < (int)uVar7);
  if (puVar6 <= puVar3) {
    uVar1 = *puVar6;
    *puVar6 = *puVar3;
    *puVar3 = uVar1;
    goto LAB_10132be0;
  }
  uVar1 = *puVar5;
  *puVar5 = *puVar3;
  *puVar3 = uVar1;
  if ((int)((int)puVar3 + (-4 - (int)puVar5) & 0xfffffffcU) <
      (int)((int)puVar4 - (int)puVar6 & 0xfffffffcU)) goto LAB_10132c55;
  if (puVar5 + 1 < puVar3) {
    *local_18 = (int)puVar5;
    local_18[1] = (int)(puVar3 + -1);
    local_18 = local_18 + 2;
  }
  if (puVar4 <= puVar6) goto LAB_10132c76;
  local_20 = puVar6;
  puVar5 = puVar6;
  goto LAB_10132b72;
LAB_10132c55:
  if (puVar6 < puVar4) {
    *local_18 = (int)puVar6;
    local_18[1] = (int)puVar4;
    local_18 = local_18 + 2;
  }
  if (puVar3 <= puVar5 + 1) goto LAB_10132c76;
  puVar4 = puVar3 + -1;
  goto LAB_10132b6f;
LAB_10132c76:
  local_18 = local_18 + -2;
  goto LAB_10132b56;
}


// ==== 10132ca4 Catch@10132ca4

void Catch_10132ca4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10132cb8 Catch@10132cb8

void Catch_10132cb8(void)

{
  appUnwindf((ushort *)&DAT_101d272c,L"Sort");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10132d50 FUN_10132d50

void FUN_10132d50(undefined4 param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  UClass *pUVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 auStack_4c [56];
  int iStack_14;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101b9fa0;
  *unaff_FS_OFFSET = &uStack_c;
  uVar2 = (**(code **)(*param_2 + 0xb4))();
  *in_ECX = uVar2;
  uVar2 = (**(code **)(*param_2 + 0xb4))();
  in_ECX[1] = uVar2;
  *(int *)(in_ECX + 4) = param_2[8];
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = param_3;
  for (pUVar1 = (UClass *)param_2[9]; pUVar1 != (UClass *)0x0; pUVar1 = *(UClass **)(pUVar1 + 0x34))
  {
    if (pUVar1 == &UStructProperty::PrivateStaticClass) {
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_2[0x1e] + 0x20);
      break;
    }
  }
  thunk_FUN_10130f30(param_1);
  uStack_4 = 0;
  thunk_FUN_10131090(auStack_4c,param_2,param_4,0);
  *(int *)(in_ECX + 0xc) = iStack_14;
  if (iStack_14 == 1) {
    bVar3 = 0;
  }
  else if (iStack_14 == 2) {
    bVar3 = 0x10;
  }
  else if (iStack_14 == 4) {
    bVar3 = 0x20;
  }
  else if (iStack_14 == 0xc) {
    bVar3 = 0x30;
  }
  else if (iStack_14 == 0x10) {
    bVar3 = 0x40;
  }
  else if (iStack_14 < 0x100) {
    bVar3 = 0x50;
  }
  else {
    bVar3 = ((0x10000 < iStack_14) - 1U & 0xf0) + 0x70;
  }
  in_ECX[1] = in_ECX[1] | bVar3;
  for (pUVar1 = (UClass *)param_2[9]; pUVar1 != (UClass *)0x0; pUVar1 = *(UClass **)(pUVar1 + 0x34))
  {
    if (pUVar1 == &UBoolProperty::PrivateStaticClass) goto LAB_10132e70;
  }
  param_2 = (int *)0x0;
LAB_10132e70:
  if ((*(int *)(in_ECX + 0x10) != 0) ||
     ((param_2 != (int *)0x0 && ((*param_4 & param_2[0x1e]) != 0)))) {
    in_ECX[1] = in_ECX[1] | 0x80;
  }
  *unaff_FS_OFFSET = uStack_c;
  return;
}


// ==== 10132f10 FUN_10132f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10132f10(int *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_24;
  uint local_20;
  byte local_1a;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9fb0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc0;
  local_8 = 1;
  (**(code **)(*param_1 + 0x1c))(param_2 + 4);
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 == 0) goto LAB_1013314e;
  appStrcpy((ushort *)&DAT_1027c740,(ushort *)(*(int *)(_Names + iVar3 * 4) + 0xc));
  local_8 = 0;
  pbVar1 = param_2 + 1;
  thunk_FUN_101307e0(param_1,pbVar1);
  *param_2 = *pbVar1 & 0xf;
  if ((*pbVar1 & 0xf) == 10) {
    (**(code **)(*param_1 + 0x1c))(param_2 + 8);
  }
  switch(*pbVar1 & 0x70) {
  case 0:
    param_2[0xc] = 1;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    break;
  case 0x10:
    param_2[0xc] = 2;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    break;
  case 0x20:
    param_2[0xc] = 4;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    break;
  case 0x30:
    param_2[0xc] = 0xc;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    break;
  case 0x40:
    param_2[0xc] = 0x10;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    break;
  case 0x50:
    local_16 = param_2[0xc];
    thunk_FUN_101307e0(param_1,&local_16);
    uVar2 = (uint)local_16;
    goto LAB_10133029;
  case 0x60:
    local_20 = (uint)*(ushort *)(param_2 + 0xc);
    thunk_FUN_10130800(param_1,&local_20);
    uVar2 = local_20 & 0xffff;
    goto LAB_10133029;
  case 0x70:
    local_24 = *(uint *)(param_2 + 0xc);
    thunk_FUN_10130820(param_1,&local_24);
    uVar2 = local_24;
LAB_10133029:
    *(uint *)(param_2 + 0xc) = uVar2;
  }
  if (((*pbVar1 & 0x80) != 0) && (*param_2 != 3)) {
    iVar3 = *(int *)(param_2 + 0x10);
    if (0x7f < iVar3) {
      if (iVar3 < 0x4000) {
        iVar3 = (iVar3 >> 8) + 0x80;
      }
      else {
        iVar3 = (iVar3 >> 0x18) + 0xc0;
      }
    }
    local_15 = (byte)iVar3;
    thunk_FUN_101307e0(param_1,&local_15);
    if ((char)local_15 < '\0') {
      if ((local_15 & 0xc0) != 0x80) {
        local_18 = (byte)((uint)*(undefined4 *)(param_2 + 0x10) >> 0x10);
        local_19 = (byte)((uint)*(undefined4 *)(param_2 + 0x10) >> 8);
        local_1a = param_2[0x10];
        uVar4 = thunk_FUN_101307e0(param_1,&local_18,&local_19,&local_1a);
        uVar4 = thunk_FUN_101307e0(uVar4);
        thunk_FUN_101307e0(uVar4);
        *(uint *)(param_2 + 0x10) =
             (((local_15 & 0x3f) * 0x100 + (uint)local_18) * 0x100 + (uint)local_19) * 0x100 +
             (uint)local_1a;
        *unaff_FS_OFFSET = local_10;
        return param_1;
      }
      local_17 = param_2[0x10];
      thunk_FUN_101307e0(param_1,&local_17);
      *(uint *)(param_2 + 0x10) = (local_15 & 0x7f) * 0x100 + (uint)local_17;
      *unaff_FS_OFFSET = local_10;
      return param_1;
    }
    *(uint *)(param_2 + 0x10) = (uint)local_15;
    *unaff_FS_OFFSET = local_10;
    return param_1;
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
LAB_1013314e:
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ==== 10133161 Catch@10133161

void Catch_10133161(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 10133175 Catch@10133175

void Catch_10133175(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TagName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133190 Catch@10133190

void Catch_10133190(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 101331a4 Catch@101331a4

void Catch_101331a4(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FPropertyTag<<");
  appUnwindf((ushort *)L"(After %s)",&DAT_1027c740);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133340 FUN_10133340

void FUN_10133340(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9fc8;
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


// ==== 101333b0 FUN_101333b0

void FUN_101333b0(undefined4 param_1,undefined4 param_2,ushort *param_3,ushort *param_4,
                 ulong param_5,UField *param_6)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9ffb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,0,&UClass::PrivateStaticClass,param_3,param_4,param_5,param_6);
  *(undefined ***)in_ECX = UStruct::vftable;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = param_2;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10133480 FUN_10133480

void FUN_10133480(undefined4 param_1,undefined4 param_2,ushort *param_3,ushort *param_4,
                 ulong param_5)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba02b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,0,param_3,param_4,param_5);
  *(undefined4 *)(in_ECX + 0x4c) = param_2;
  *(undefined ***)in_ECX = UStruct::vftable;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10133540 FUN_10133540

void FUN_10133540(UField *param_1)

{
  undefined4 uVar1;
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba05b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UStruct::vftable;
  if (param_1 == (UField *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1 + 0x78))();
  }
  *(undefined4 *)(in_ECX + 0x4c) = uVar1;
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101335f0 FUN_101335f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101335f0(FArchive *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  UProperty *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ba070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(*(int *)param_1 + 0x28))();
  if (*(int *)(param_1 + 4) < 0x73) {
    iVar3 = appStrcmp((ushort *)(*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc),
                      (ushort *)L"DecorationLayer");
    bVar1 = true;
    if (iVar3 == 0) goto LAB_10133661;
  }
  bVar1 = false;
LAB_10133661:
  local_8 = 0;
  thunk_FUN_10119210(in_ECX);
  do {
    if (local_30 == (UProperty *)0x0) {
      ExceptionList = local_10;
      return;
    }
    iVar3 = *(int *)(local_30 + 0x20);
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
      iVar3 = UProperty::ShouldSerializeValue(local_30,param_1);
      if (iVar3 != 0) {
        iVar3 = 0;
LAB_1013370e:
        do {
          if (*(int *)(local_30 + 0x40) <= iVar3) break;
          if (((*(int *)(param_1 + 4) < 0x76) && (param_3 != 0)) && (*(int *)(param_1 + 0x10) != 0))
          {
            iVar4 = (**(code **)(*(int *)param_1 + 0x28))();
            if (iVar4 < iVar2 + param_3) goto LAB_10133775;
            if (GLog != (undefined *)0x0) {
              FOutputDevice::Logf2
                        ((FOutputDevice *)(*(int *)(_Names + *(int *)(local_30 + 0x20) * 4) + 0xc),
                         (EName)GLog,(ushort *)0x2ff);
              iVar3 = iVar3 + 1;
              goto LAB_1013370e;
            }
          }
          else {
LAB_10133775:
            (**(code **)(*(int *)local_30 + 0x90))
                      (param_1,*(int *)(local_30 + 0x44) * iVar3 + *(int *)(local_30 + 0x54) +
                               param_2,0);
          }
          iVar3 = iVar3 + 1;
        } while( true );
      }
    }
    local_30 = *(UProperty **)(local_30 + 0x38);
    thunk_FUN_10114340();
  } while( true );
}


// ==== 101337b3 Catch@101337b3

void Catch_101337b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 101337c7 Catch@101337c7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Catch_101337c7(void)

{
  int iVar1;
  ushort *puVar2;
  int unaff_EBP;
  undefined4 uVar3;
  
  appUnwindf((ushort *)&DAT_101d1e64,L"UStruct::SerializeBin");
  iVar1 = *(int *)(_Names + *(int *)(unaff_EBP + -0x18) * 4) + 0xc;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
  puVar2 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %s[%i])",puVar2,iVar1,uVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101338a0 FUN_101338a0

void FUN_101338a0(int param_1)

{
  int in_ECX;
  int *piVar1;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba080;
  local_10 = ExceptionList;
  local_8 = 0;
  if (GIsEditor == 0) {
    ExceptionList = &local_10;
    for (piVar1 = *(int **)(in_ECX + 0x6c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x19]) {
      (**(code **)(*piVar1 + 0x7c))(piVar1[0x15] + param_1);
    }
  }
  else {
    ExceptionList = &local_10;
    thunk_FUN_10119210(in_ECX);
    while (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 0x7c))(local_24[0x15] + param_1);
      local_24 = (int *)local_24[0xe];
      thunk_FUN_10114340();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133942 Catch@10133942

void Catch_10133942(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10133956 Catch@10133956

void Catch_10133956(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2264,L"UStruct::CleanupDestroyed");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101339d0 FUN_101339d0

void FUN_101339d0(void)

{
  undefined4 uVar1;
  UObject *pUVar2;
  UStruct *in_ECX;
  UClass *pUVar3;
  ushort *puVar4;
  UStruct *pUVar5;
  int iVar6;
  FArchive local_5c [68];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba098;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::Register(in_ECX);
  FName::FName((FName *)&local_18,*(ushort **)(in_ECX + 0x4c0),1);
  *(undefined4 *)(in_ECX + 0x4c0) = local_18;
  uVar1 = (**(code **)(*(int *)in_ECX + 0x78))();
  thunk_FUN_10113f60(uVar1);
  uVar1 = (**(code **)(*(int *)in_ECX + 0x78))();
  thunk_FUN_1012aa10(uVar1);
  iVar6 = 0;
  pUVar5 = in_ECX;
  pUVar2 = UClass::GetDefaultObject((UClass *)in_ECX);
  UObject::InitClassDefaultObject(pUVar2,(UClass *)pUVar5,iVar6);
  if ((*(int *)(in_ECX + 0x34) == 0) ||
     (*(int *)(*(int *)(in_ECX + 0x34) + 0x51c) != *(int *)(in_ECX + 0x51c))) {
    UClass::GetDefaultObject((UClass *)in_ECX);
    (**(code **)(in_ECX + 0x51c))();
  }
  if (*(int *)(in_ECX + 0x34) != 0) {
    *(uint *)(in_ECX + 0x4a4) =
         *(uint *)(in_ECX + 0x4a4) | *(uint *)(*(int *)(in_ECX + 0x34) + 0x4a4) & 0xf86ec;
  }
  FArchive::FArchive(local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)in_ECX + 0x80))(local_5c,0);
  puVar4 = (ushort *)0x0;
  pUVar3 = (UClass *)0x0;
  iVar6 = 0;
  pUVar2 = UClass::GetDefaultObject((UClass *)in_ECX);
  UObject::LoadConfig(pUVar2,iVar6,pUVar3,puVar4);
  pUVar2 = UClass::GetDefaultObject((UClass *)in_ECX);
  UObject::LoadLocalized(pUVar2);
  ExceptionList = local_10;
  return;
}


// ==== 10133af6 Catch@10133af6

void Catch_10133af6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10133b0a Catch@10133b0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Catch_10133b0a(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d22b0,L"UClass::Register");
  appUnwindf((ushort *)L"(%s)",
             *(int *)(_Names + *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x20) * 4) + 0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133ba0 FUN_10133ba0

void FUN_10133ba0(void)

{
  UState *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba0b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1011a1c0(0);
  thunk_FUN_1011a290(0);
  thunk_FUN_10114240(0);
  UObject::ExitProperties(*(uchar **)(in_ECX + 0x4f4),(UClass *)in_ECX);
  thunk_FUN_10113f60(0);
  FString::operator=((FString *)(in_ECX + 0x520),(ushort *)&DAT_101d2418);
  thunk_FUN_1011a0f0(0);
  thunk_FUN_10114240(0);
  UState::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10133c55 Catch@10133c55

void Catch_10133c55(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10133c69 Catch@10133c69

void Catch_10133c69(void)

{
  appUnwindf((ushort *)&DAT_101d241c,L"UClass::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133cc0 FUN_10133cc0

void FUN_10133cc0(int param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x44) != 0) {
      uVar2 = appStrCrc(*(ushort **)(iVar1 + 0x40));
      in_ECX[2] = uVar2;
      return;
    }
    uVar2 = appStrCrc(&DAT_101cdd44);
    in_ECX[2] = uVar2;
    return;
  }
  in_ECX[2] = 0;
  return;
}


// ==== 10133d30 FUN_10133d30

bool FUN_10133d30(void)

{
  ulong uVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba0c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*in_ECX == 0) {
    ExceptionList = &local_10;
    appFailAssert("Class!=NULL",".\\UnClass.cpp",0x47c);
  }
  uVar1 = UStruct::GetScriptTextCRC((UStruct *)*in_ECX);
  ExceptionList = local_10;
  return uVar1 == in_ECX[2];
}


// ==== 10133d98 Catch@10133d98

void Catch_10133d98(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10133dac Catch@10133dac

void Catch_10133dac(void)

{
  appUnwindf((ushort *)&DAT_101d25b0,L"FDependency::IsUpToDate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133df0 FUN_10133df0

void FUN_10133df0(FArchive *param_1)

{
  int iVar1;
  UStruct *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba0d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::Serialize(in_ECX,param_1);
  if (*(int *)(param_1 + 4) < 0x40) {
    thunk_FUN_10130800(param_1,in_ECX + 0x96);
  }
  thunk_FUN_10130800(param_1,in_ECX + 0x90);
  if (*(int *)(param_1 + 4) < 0x40) {
    thunk_FUN_101307e0(param_1,in_ECX + 0x95);
  }
  thunk_FUN_101307e0(param_1,in_ECX + 0x94);
  if (*(int *)(param_1 + 4) < 0x40) {
    thunk_FUN_10130800(param_1,in_ECX + 0x98);
  }
  thunk_FUN_10108c50(param_1,in_ECX + 0x8c);
  if (((byte)in_ECX[0x8c] & 0x40) != 0) {
    thunk_FUN_10130800(param_1,in_ECX + 0x92);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    in_ECX[0x95] = (UStruct)0x0;
    *(undefined2 *)(in_ECX + 0x96) = 0;
    *(undefined2 *)(in_ECX + 0x98) = 0xffff;
    for (iVar1 = thunk_FUN_10132a00(*(undefined4 *)(in_ECX + 0x48));
        (iVar1 != 0 && ((*(byte *)(iVar1 + 0x48) & 0x80) != 0));
        iVar1 = thunk_FUN_10132a00(*(undefined4 *)(iVar1 + 0x38))) {
      in_ECX[0x95] = (UStruct)((char)in_ECX[0x95] + '\x01');
      *(short *)(in_ECX + 0x96) =
           (short)*(undefined4 *)(iVar1 + 0x44) * (short)*(undefined4 *)(iVar1 + 0x40) +
           (short)*(undefined4 *)(iVar1 + 0x54);
      if ((*(uint *)(iVar1 + 0x48) & 0x400) != 0) {
        *(undefined2 *)(in_ECX + 0x98) = *(undefined2 *)(iVar1 + 0x54);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10133f34 Catch@10133f34

void Catch_10133f34(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10133f48 Catch@10133f48

void Catch_10133f48(void)

{
  appUnwindf((ushort *)&DAT_101d2620,L"UFunction::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10133fd0 FUN_10133fd0

int FUN_10133fd0(void)

{
  undefined4 in_ECX;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba0e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10119210(in_ECX);
  while ((local_20 != 0 && ((char)*(uint *)(local_20 + 0x48) < '\0'))) {
    if ((*(uint *)(local_20 + 0x48) & 0x400) != 0) {
      ExceptionList = local_10;
      return local_20;
    }
    local_20 = *(int *)(local_20 + 0x38);
    thunk_FUN_10114340();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1013403a Catch@1013403a

void Catch_1013403a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013404e Catch@1013404e

void Catch_1013404e(void)

{
  appUnwindf((ushort *)&DAT_101d2630,L"UFunction::GetReturnProperty");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134090 FUN_10134090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134090(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  _func_void_FFrame_ptr_void_ptr **pp_Var4;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba0f0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  if ((in_ECX[0x23] & 0x400U) == 0) {
    if ((short)in_ECX[0x24] != 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xfffffdd4;
      appFailAssert("iNative==0",".\\UnClass.cpp",0x641);
    }
    in_ECX[0x27] = (int)UObject::ProcessInternal;
  }
  else {
    if (*(ushort *)(in_ECX + 0x24) == 0) {
      ExceptionList = &local_10;
      piVar1 = (int *)(**(code **)(*in_ECX + 0x74))();
      uVar2 = (**(code **)(*piVar1 + 0x94))(*(int *)(_Names + in_ECX[8] * 4) + 0xc);
      appSprintf(local_220,(ushort *)L"int%sexec%s",uVar2);
      iVar3 = (**(code **)(*in_ECX + 0x74))();
      piVar1 = UPackage::GetDllExport(*(UPackage **)(iVar3 + 0x18),local_220,1);
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      pp_Var4 = (_func_void_FFrame_ptr_void_ptr **)*piVar1;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xfffffdd4;
      if (0xfff < *(ushort *)(in_ECX + 0x24)) {
        ExceptionList = &local_10;
        local_14 = &stack0xfffffdd4;
        appFailAssert("iNative<EX_Max",".\\UnClass.cpp",0x647);
      }
      if ((&GNatives)[*(ushort *)(in_ECX + 0x24)] == (_func_void_FFrame_ptr_void_ptr **)0x0) {
        appFailAssert("GNatives[iNative]!=0",".\\UnClass.cpp",0x648);
      }
      pp_Var4 = (&GNatives)[*(ushort *)(in_ECX + 0x24)];
    }
    in_ECX[0x27] = (int)pp_Var4;
  }
  ExceptionList = local_10;
  return;
}


// ==== 101341d4 Catch@101341d4

void Catch_101341d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101341e8 Catch@101341e8

void Catch_101341e8(void)

{
  appUnwindf((ushort *)&DAT_101d26b4,L"UFunction::Bind");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134270 FUN_10134270

void FUN_10134270(UField *param_1,ushort *param_2)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba113;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UConst::vftable;
  FString::FString((FString *)(in_ECX + 0x40),param_2);
  ExceptionList = local_c;
  return;
}


// ==== 101342f0 FUN_101342f0

FArchive * FUN_101342f0(FArchive *param_1,int *param_2)

{
  FDependency *pFVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba130;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10130c50(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      operator<<(param_1,(FDependency *)(*param_2 + iVar2 * 0xc));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1011a290(local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      pFVar1 = (FDependency *)thunk_FUN_10114740(0xc,param_2);
      operator<<(param_1,pFVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101343a6 Catch@101343a6

void Catch_101343a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 101343ba Catch@101343ba

void Catch_101343ba(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134410 FUN_10134410

void FUN_10134410(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10132650();
  return;
}


// ==== 10134440 FUN_10134440

int FUN_10134440(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar4 + 4);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == iVar4) {
        *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc) = *param_2;
        return iVar3 * 0xc + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  iVar4 = thunk_FUN_10132720(param_1,param_2);
  return iVar4;
}


// ==== 101344d0 FUN_101344d0

void FUN_101344d0(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_10132820();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_10132820();
  return;
}


// ==== 10134530 FUN_10134530

void FUN_10134530(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_10132890();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_10132890();
  return;
}


// ==== 10134590 FUN_10134590

void FUN_10134590(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba148;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10134670 FUN_10134670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_10134670(UObject *param_1)

{
  UClass *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UStructProperty::PrivateStaticClass) {
        return param_1;
      }
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + DAT_1033b110 * 4) + 0xc),(ushort *)GError)
  ;
  return param_1;
}


// ==== 101346e0 FUN_101346e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101346e0(FArchive *param_1,void *param_2,uint param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  UObject *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  UProperty *pUVar6;
  FArray *this_00;
  int iVar7;
  wchar_t *in_stack_ffffff70;
  ushort *in_stack_ffffff74;
  byte local_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  UProperty *local_50;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_20;
  UObject *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba160;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_28 = 0;
  local_24 = -1;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  puVar1 = &stack0xffffff8c;
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (ExceptionList = &local_10, puVar1 = &stack0xffffff8c, *(int *)(param_1 + 0x14) == 0)) {
    ExceptionList = &local_10;
    appFailAssert("Ar.IsLoading() || Ar.IsSaving()",".\\UnClass.cpp",0x200);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_20 = 0;
  local_30 = 0;
  if (param_3 != 0) {
    local_20 = *(uint *)(param_3 + 0x4f4);
    local_30 = *(uint *)(param_3 + 0x4f8);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    local_8 = CONCAT31(local_8._1_3_,3);
    thunk_FUN_10119210(in_ECX);
    while (pUVar6 = local_50, local_50 != (UProperty *)0x0) {
      iVar4 = UProperty::ShouldSerializeValue(local_50,param_1);
      if (iVar4 != 0) {
        local_28 = *(int *)(pUVar6 + 0x20);
        for (iVar4 = 0; local_24 = iVar4, iVar4 < *(int *)(pUVar6 + 0x40); iVar4 = iVar4 + 1) {
          iVar7 = *(int *)(pUVar6 + 0x44) * iVar4 + *(int *)(pUVar6 + 0x54);
          iVar5 = UObject::IsA(local_1c,&UClass::PrivateStaticClass);
          if (((iVar5 == 0) && (local_20 == 0)) ||
             (iVar5 = UProperty::Matches(pUVar6,param_2,
                                         (void *)(((int)local_30 < *(int *)(pUVar6 + 0x44) + iVar7)
                                                  - 1 & local_20),iVar4), iVar5 == 0)) {
            iVar7 = iVar7 + (int)param_2;
            thunk_FUN_10132d50(param_1,pUVar6,iVar4,iVar7);
            thunk_FUN_10132f10(param_1,local_68);
            thunk_FUN_10131090(param_1,pUVar6,iVar7,0);
          }
        }
      }
      local_50 = *(UProperty **)(pUVar6 + 0x38);
      thunk_FUN_10114340();
    }
    param_3 = 0;
    (**(code **)(*(int *)param_1 + 0x1c))(&param_3);
  }
  else {
    local_2c = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
LAB_10134770:
    thunk_FUN_10132f10(param_1,local_68);
    if (local_64 != 0) {
      local_28 = local_64;
      for (pUVar6 = *(UProperty **)(in_ECX + 0x70); pUVar6 != (UProperty *)0x0;
          pUVar6 = *(UProperty **)(pUVar6 + 0x58)) {
        if (*(int *)(pUVar6 + 0x20) == local_64) {
          iVar4 = thunk_FUN_10132a60(pUVar6);
          if ((iVar4 != 0) && (local_68[0] != 9)) {
            iVar4 = thunk_FUN_10132a60(pUVar6);
            bVar2 = (**(code **)(**(int **)(iVar4 + 0x78) + 0xb4))();
            if (bVar2 == local_68[0]) {
              if (GLog != (undefined *)0x0) {
                in_stack_ffffff74 = (ushort *)0x10134859;
                FOutputDevice::Logf2
                          ((FOutputDevice *)(*(int *)(_Names + local_64 * 4) + 0xc),(EName)GLog,
                           (ushort *)0x2ff);
              }
              iVar4 = thunk_FUN_10132a60(pUVar6);
              iVar4 = *(int *)(iVar4 + 0x78);
              this_00 = (FArray *)(*(int *)(pUVar6 + 0x54) + (int)param_2);
              if (*(int *)(this_00 + 4) <= local_58) {
                FArray::AddZeroed(this_00,*(int *)(iVar4 + 0x44),
                                  (local_58 - *(int *)(this_00 + 4)) + 1);
              }
              thunk_FUN_10131090(param_1,iVar4,*(int *)(iVar4 + 0x44) * local_58 + *(int *)this_00,0
                                );
              goto LAB_10134770;
            }
          }
          if ((local_68[0] == 1) &&
             (cVar3 = (**(code **)(*(int *)pUVar6 + 0xb4))(), cVar3 == '\x04')) {
            thunk_FUN_101307e0(param_1,(int)&param_3 + 3);
            local_30 = param_3 >> 0x18;
            *(float *)(*(int *)(pUVar6 + 0x44) * local_58 + *(int *)(pUVar6 + 0x54) + (int)param_2)
                 = (float)local_30;
            goto LAB_10134770;
          }
          bVar2 = (**(code **)(*(int *)pUVar6 + 0xb4))();
          if (local_68[0] != bVar2) {
            if (GLog != (undefined *)0x0) {
              in_stack_ffffff74 = (ushort *)(*(int *)(_Names + local_64 * 4) + 0xc);
              (**(code **)(*(int *)pUVar6 + 0xb4))();
              in_stack_ffffff70 = L"Type mismatch in %s of %s: file %i, class %i";
              FOutputDevice::Logf2((FOutputDevice *)(uint)local_68[0],(EName)GLog,(ushort *)0x2ff);
              in_ECX = local_1c;
            }
            goto LAB_10134a8e;
          }
          if (*(int *)(pUVar6 + 0x40) <= local_58) {
            if (GLog != (undefined *)0x0) {
              in_stack_ffffff74 = (ushort *)0x2ff;
              in_stack_ffffff70 = (wchar_t *)GLog;
              FOutputDevice::Logf2(_Names,(EName)GLog,(ushort *)0x2ff);
            }
            goto LAB_10134a8e;
          }
          if ((local_68[0] == 10) &&
             (iVar4 = thunk_FUN_10134670(pUVar6),
             local_60 != *(int *)(*(int *)(iVar4 + 0x78) + 0x20))) {
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
                               *(int *)(pUVar6 + 0x44) * local_58 + *(int *)(pUVar6 + 0x54) +
                               (int)param_2,local_5c);
            in_ECX = local_1c;
            if ((*(int *)(param_1 + 4) < 0x76) &&
               (iVar5 = (**(code **)(*(int *)param_1 + 0x28))(), in_ECX = local_1c,
               iVar5 - iVar4 != local_5c)) {
              if (GLog != (undefined *)0x0) {
                in_stack_ffffff74 = (ushort *)0x2ff;
                in_stack_ffffff70 = (wchar_t *)GLog;
                FOutputDevice::Logf2
                          ((FOutputDevice *)(*(int *)(_Names + *(int *)(local_1c + 0x20) * 4) + 0xc)
                           ,(EName)GLog,(ushort *)0x2ff);
              }
              (**(code **)(*(int *)param_1 + 0x3c))(local_5c + iVar4);
              in_ECX = local_1c;
            }
            goto LAB_10134770;
          }
          iVar4 = appStricmp((ushort *)(*(int *)(_Names + local_64 * 4) + 0xc),(ushort *)L"XLevel");
          if ((iVar4 == 0) || (GLog == (undefined *)0x0)) goto LAB_10134a8e;
          this = (FOutputDevice *)(*(int *)(_Names + local_64 * 4) + 0xc);
          in_stack_ffffff70 = (wchar_t *)GLog;
          goto LAB_10134a86;
        }
      }
      if (GLog != (undefined *)0x0) {
        UObject::GetFullName(in_ECX,(ushort *)0x0);
        this = extraout_ECX;
LAB_10134a86:
        FOutputDevice::Logf2(this,(EName)in_stack_ffffff70,in_stack_ffffff74);
      }
LAB_10134a8e:
      iVar4 = appStricmp((ushort *)(*(int *)(_Names + local_64 * 4) + 0xc),(ushort *)L"XLevel");
      if ((iVar4 != 0) && (GLog != (undefined *)0x0)) {
        in_stack_ffffff74 = (ushort *)0x10134ad1;
        FOutputDevice::Logf2((FOutputDevice *)(uint)local_68[0],(EName)GLog,(ushort *)0x2ff);
      }
      for (iVar4 = 0; local_34 = iVar4, iVar4 < local_5c; iVar4 = iVar4 + 1) {
        thunk_FUN_101307e0(param_1,&local_15);
      }
      goto LAB_10134770;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10134b8f Catch@10134b8f

void Catch_10134b8f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x34,&DAT_101f843c);
}


// ==== 10134ba3 Catch@10134ba3

void Catch_10134ba3(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2168,L"LoadStream");
  appUnwindf((ushort *)L"(Count %i)",*(undefined4 *)(unaff_EBP + -0x28));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134cd8 Catch@10134cd8

void Catch_10134cd8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_101f843c);
}


// ==== 10134cec Catch@10134cec

void Catch_10134cec(void)

{
  appUnwindf((ushort *)&DAT_101d2188,L"SaveStream");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134d07 Catch@10134d07

void Catch_10134d07(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_101f843c);
}


// ==== 10134d1b Catch@10134d1b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Catch_10134d1b(void)

{
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2190,L"UStruct::SerializeTaggedProperties");
  appUnwindf((ushort *)L"(%s[%i])",*(int *)(_Names + *(int *)(unaff_EBP + -0x24) * 4) + 0xc,
             *(undefined4 *)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10134f00 FUN_10134f00

FString * FUN_10134f00(FString *param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  FArray local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101ba1a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)
             FString::Printf((ushort *)local_18,L"%02x",(uint)*(byte *)(iVar3 + 0x7c + in_ECX));
    local_4 = 3;
    if (puVar1[1] == 0) {
      puVar2 = &DAT_101cdd44;
    }
    else {
      puVar2 = (ushort *)*puVar1;
    }
    FString::operator+=(param_1,puVar2);
    local_4 = 4;
    local_14 = 0;
    local_10 = 0;
    FArray::Realloc(local_18,2);
    local_4 = local_4 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_18);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10134ff0 FUN_10134ff0

void FUN_10134ff0(UStruct *param_1)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba1d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX,param_1);
  *(undefined ***)in_ECX = UState::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10135060 FUN_10135060

void FUN_10135060(undefined4 param_1,int param_2,ushort *param_3,ushort *param_4,ulong param_5,
                 UStruct *param_6)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba1f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX,0,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)in_ECX = UState::vftable;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined2 *)(in_ECX + 0xa0) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10135110 FUN_10135110

void FUN_10135110(undefined4 param_1,int param_2,ushort *param_3,ushort *param_4,ulong param_5)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX,0,param_2,param_3,param_4,param_5);
  *(undefined ***)in_ECX = UState::vftable;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined2 *)(in_ECX + 0xa0) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101351c0 FUN_101351c0

void FUN_101351c0(FArchive *param_1)

{
  FArchive *pFVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  UObject *pUVar6;
  int iVar7;
  UState *in_ECX;
  code *pcVar8;
  UClass *pUVar9;
  ushort *puVar10;
  UState *pUVar11;
  int iVar12;
  undefined4 uVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar1 = param_1;
  puStack_c = &LAB_101ba230;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UState::Serialize(in_ECX,param_1);
  if (*(int *)(pFVar1 + 4) < 0x3e) {
    param_1 = (FArchive *)0x0;
    thunk_FUN_10130820(pFVar1,&param_1);
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x80004;
  }
  uVar2 = thunk_FUN_10108c50(pFVar1,in_ECX + 0x4a4,in_ECX + 0x4ac);
  thunk_FUN_10130dc0(uVar2);
  uVar2 = thunk_FUN_101342f0(pFVar1,in_ECX + 0x4dc,in_ECX + 0x4e8);
  thunk_FUN_10132470(uVar2);
  if (*(int *)(pFVar1 + 4) < 0x3e) {
    puVar4 = (undefined4 *)FName::FName((FName *)&param_1,(ushort *)L"System",1);
    *(undefined4 *)(in_ECX + 0x4c0) = *puVar4;
  }
  else {
    piVar3 = (int *)thunk_FUN_1012a9f0(pFVar1,in_ECX + 0x4bc);
    (**(code **)(*piVar3 + 0x1c))(in_ECX + 0x4c0);
  }
  if (0x62 < *(int *)(pFVar1 + 4)) {
    thunk_FUN_10132470(pFVar1,in_ECX + 0x500);
  }
  if (*(int *)(pFVar1 + 0x10) == 0) {
    iVar12 = *(int *)(in_ECX + 0x4f8);
    if (*(int *)(pFVar1 + 0x14) == 0) {
      iVar7 = (**(code **)(*(int *)in_ECX + 0x78))();
      if (iVar12 != iVar7) {
        appFailAssert("Defaults.Num()==GetPropertiesSize()",".\\UnClass.cpp",0x406);
      }
      thunk_FUN_10130a30(pFVar1);
      uVar2 = 0;
      uVar13 = *(undefined4 *)(in_ECX + 0x4f4);
      pcVar8 = *(code **)(*(int *)in_ECX + 0x84);
    }
    else {
      iVar7 = (**(code **)(*(int *)in_ECX + 0x78))();
      if (iVar12 != iVar7) {
        appFailAssert("Defaults.Num()==GetPropertiesSize()",".\\UnClass.cpp",0x401);
      }
      uVar2 = *(undefined4 *)(in_ECX + 0x34);
      uVar13 = *(undefined4 *)(in_ECX + 0x4f4);
      pcVar8 = *(code **)(*(int *)in_ECX + 0x88);
    }
    (*pcVar8)(pFVar1,uVar13,uVar2);
  }
  else {
    uVar5 = (**(code **)(*(int *)in_ECX + 0x78))();
    if (uVar5 < 0x34) {
      appFailAssert("GetPropertiesSize()>=sizeof(UObject)",".\\UnClass.cpp",0x3f3);
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && ((*(uint *)(*(int *)(in_ECX + 0x34) + 0x1c) & 0x200) != 0)
       ) {
      appFailAssert("!GetSuperClass() || !(GetSuperClass()->GetFlags()&RF_NeedLoad)",
                    ".\\UnClass.cpp",0x3f4);
    }
    uVar2 = (**(code **)(*(int *)in_ECX + 0x78))();
    thunk_FUN_10113f60(uVar2);
    uVar2 = (**(code **)(*(int *)in_ECX + 0x78))();
    thunk_FUN_1012aa10(uVar2);
    iVar12 = 0;
    pUVar11 = in_ECX;
    pUVar6 = UClass::GetDefaultObject((UClass *)in_ECX);
    UObject::InitClassDefaultObject(pUVar6,(UClass *)pUVar11,iVar12);
    (**(code **)(*(int *)in_ECX + 0x88))
              (pFVar1,*(undefined4 *)(in_ECX + 0x4f4),*(undefined4 *)(in_ECX + 0x34));
    puVar10 = (ushort *)0x0;
    pUVar9 = (UClass *)0x0;
    iVar12 = 0;
    pUVar6 = UClass::GetDefaultObject((UClass *)in_ECX);
    UObject::LoadConfig(pUVar6,iVar12,pUVar9,puVar10);
    pUVar6 = UClass::GetDefaultObject((UClass *)in_ECX);
    UObject::LoadLocalized(pUVar6);
    *(undefined4 *)(in_ECX + 0x4a8) = 0;
    if (*(int *)(pFVar1 + 4) < 0x3e) {
      *(UClass **)(in_ECX + 0x4bc) = &UObject::PrivateStaticClass;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10135425 Catch@10135425

void Catch_10135425(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10135439 Catch@10135439

void Catch_10135439(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d255c,L"UClass::Serialize");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135520 FUN_10135520

void FUN_10135520(void)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX);
  *(undefined ***)in_ECX = UState::vftable;
  *(undefined ***)in_ECX = UClass::vftable;
  *(UClass **)(in_ECX + 0x4bc) = &UObject::PrivateStaticClass;
  *(undefined4 *)(in_ECX + 0x4c4) = 0;
  *(undefined4 *)(in_ECX + 0x4c8) = 0;
  *(undefined4 *)(in_ECX + 0x4cc) = 0;
  *(undefined4 *)(in_ECX + 0x4d0) = 0;
  *(undefined4 *)(in_ECX + 0x4d4) = 0;
  *(undefined4 *)(in_ECX + 0x4d8) = 0;
  *(undefined4 *)(in_ECX + 0x4dc) = 0;
  *(undefined4 *)(in_ECX + 0x4e0) = 0;
  *(undefined4 *)(in_ECX + 0x4e4) = 0;
  *(undefined4 *)(in_ECX + 0x4e8) = 0;
  *(undefined4 *)(in_ECX + 0x4ec) = 0;
  *(undefined4 *)(in_ECX + 0x4f0) = 0;
  *(undefined4 *)(in_ECX + 0x4f4) = 0;
  *(undefined4 *)(in_ECX + 0x4f8) = 0;
  *(undefined4 *)(in_ECX + 0x4fc) = 0;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  *(undefined4 *)(in_ECX + 0x520) = 0;
  *(undefined4 *)(in_ECX + 0x524) = 0;
  *(undefined4 *)(in_ECX + 0x528) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10135680 FUN_10135680

void FUN_10135680(UState *param_1)

{
  int iVar1;
  UState *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101ba410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UState::UState(in_ECX,param_1);
  *(undefined ***)in_ECX = UClass::vftable;
  *(UClass **)(in_ECX + 0x4bc) = &UObject::PrivateStaticClass;
  *(undefined4 *)(in_ECX + 0x4c4) = 0;
  *(undefined4 *)(in_ECX + 0x4c8) = 0;
  *(undefined4 *)(in_ECX + 0x4cc) = 0;
  *(undefined4 *)(in_ECX + 0x4d0) = 0;
  *(undefined4 *)(in_ECX + 0x4d4) = 0;
  *(undefined4 *)(in_ECX + 0x4d8) = 0;
  *(undefined4 *)(in_ECX + 0x4dc) = 0;
  *(undefined4 *)(in_ECX + 0x4e0) = 0;
  *(undefined4 *)(in_ECX + 0x4e4) = 0;
  *(undefined4 *)(in_ECX + 0x4e8) = 0;
  *(undefined4 *)(in_ECX + 0x4ec) = 0;
  *(undefined4 *)(in_ECX + 0x4f0) = 0;
  *(undefined4 *)(in_ECX + 0x4f4) = 0;
  *(undefined4 *)(in_ECX + 0x4f8) = 0;
  *(undefined4 *)(in_ECX + 0x4fc) = 0;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  *(undefined4 *)(in_ECX + 0x520) = 0;
  *(undefined4 *)(in_ECX + 0x524) = 0;
  *(undefined4 *)(in_ECX + 0x528) = 0;
  local_8 = 0x12;
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x4bc) = *(undefined4 *)(iVar1 + 0x4bc);
    thunk_FUN_10118830(iVar1 + 0x4f4);
    UClass::Bind((UClass *)in_ECX);
  }
  ExceptionList = local_10;
  return;
}


// ==== 101357b4 Catch@101357b4

void Catch_101357b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101357c8 Catch@101357c8

void Catch_101357c8(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d2570,L"UClass::UClass");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x18),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10135860 FUN_10135860

void FUN_10135860(undefined4 param_1,int param_2,uint param_3,UState *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 ushort *param_10,ushort *param_11,undefined4 param_12,ulong param_13,
                 undefined4 param_14,undefined4 param_15)

{
  UState *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba510;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UState::UState(in_ECX,0,param_2,param_10,param_11,param_13,
                 (UState *)(-(uint)(param_4 != in_ECX) & (uint)param_4));
  *(undefined4 *)(in_ECX + 0x4ac) = param_6;
  *(uint *)(in_ECX + 0x4a4) = param_3 | 0x12;
  *(undefined4 *)(in_ECX + 0x4b0) = param_7;
  *(undefined4 *)(in_ECX + 0x4b4) = param_8;
  *(undefined ***)in_ECX = UClass::vftable;
  *(undefined4 *)(in_ECX + 0x4a8) = 0;
  *(undefined4 *)(in_ECX + 0x4b8) = param_9;
  *(undefined4 *)(in_ECX + 0x4bc) = param_5;
  *(undefined4 *)(in_ECX + 0x4c4) = 0;
  *(undefined4 *)(in_ECX + 0x4c8) = 0;
  *(undefined4 *)(in_ECX + 0x4cc) = 0;
  *(undefined4 *)(in_ECX + 0x4d0) = 0;
  *(undefined4 *)(in_ECX + 0x4d4) = 0;
  *(undefined4 *)(in_ECX + 0x4d8) = 0;
  *(undefined4 *)(in_ECX + 0x4dc) = 0;
  *(undefined4 *)(in_ECX + 0x4e0) = 0;
  *(undefined4 *)(in_ECX + 0x4e4) = 0;
  *(undefined4 *)(in_ECX + 0x4e8) = 0;
  *(undefined4 *)(in_ECX + 0x4ec) = 0;
  *(undefined4 *)(in_ECX + 0x4f0) = 0;
  *(undefined4 *)(in_ECX + 0x4f4) = 0;
  *(undefined4 *)(in_ECX + 0x4f8) = 0;
  *(undefined4 *)(in_ECX + 0x4fc) = 0;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  *(undefined4 *)(in_ECX + 0x518) = param_14;
  *(undefined4 *)(in_ECX + 0x51c) = param_15;
  *(undefined4 *)(in_ECX + 0x520) = 0;
  *(undefined4 *)(in_ECX + 0x524) = 0;
  *(undefined4 *)(in_ECX + 0x528) = 0;
  *(undefined4 *)(in_ECX + 0x4c0) = param_12;
  ExceptionList = local_c;
  return;
}


// ==== 10135a50 FUN_10135a50

void FUN_10135a50(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,ushort *param_8,ushort *param_9,
                 undefined4 param_10,ulong param_11,undefined4 param_12,undefined4 param_13)

{
  UState *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba610;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UState::UState(in_ECX,0,param_2,param_8,param_9,param_11);
  *(undefined4 *)(in_ECX + 0x4ac) = param_4;
  *(uint *)(in_ECX + 0x4a4) = param_3 | 0x12;
  *(undefined4 *)(in_ECX + 0x4b0) = param_5;
  *(undefined4 *)(in_ECX + 0x4b4) = param_6;
  *(undefined ***)in_ECX = UClass::vftable;
  *(undefined4 *)(in_ECX + 0x4a8) = 0;
  *(undefined4 *)(in_ECX + 0x4b8) = param_7;
  *(undefined4 *)(in_ECX + 0x4c4) = 0;
  *(undefined4 *)(in_ECX + 0x4c8) = 0;
  *(undefined4 *)(in_ECX + 0x4cc) = 0;
  *(undefined4 *)(in_ECX + 0x4d0) = 0;
  *(undefined4 *)(in_ECX + 0x4d4) = 0;
  *(undefined4 *)(in_ECX + 0x4d8) = 0;
  *(undefined4 *)(in_ECX + 0x4dc) = 0;
  *(undefined4 *)(in_ECX + 0x4e0) = 0;
  *(undefined4 *)(in_ECX + 0x4e4) = 0;
  *(undefined4 *)(in_ECX + 0x4e8) = 0;
  *(undefined4 *)(in_ECX + 0x4ec) = 0;
  *(undefined4 *)(in_ECX + 0x4f0) = 0;
  *(undefined4 *)(in_ECX + 0x4f4) = 0;
  *(undefined4 *)(in_ECX + 0x4f8) = 0;
  *(undefined4 *)(in_ECX + 0x4fc) = 0;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  *(undefined4 *)(in_ECX + 0x518) = param_12;
  *(undefined4 *)(in_ECX + 0x51c) = param_13;
  *(undefined4 *)(in_ECX + 0x520) = 0;
  *(undefined4 *)(in_ECX + 0x524) = 0;
  *(undefined4 *)(in_ECX + 0x528) = 0;
  *(undefined4 *)(in_ECX + 0x4c0) = param_10;
  ExceptionList = local_c;
  return;
}


// ==== 10135c30 FUN_10135c30

void FUN_10135c30(UStruct *param_1)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX,param_1);
  *(undefined ***)in_ECX = UFunction::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10135ca0 FUN_10135ca0

void FUN_10135ca0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10132650();
  ExceptionList = local_c;
  return;
}


// ==== 10135d10 FUN_10135d10

void FUN_10135d10(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba698;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_10134590();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10135d90 FUN_10135d90

void FUN_10135d90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10135ca0();
  ExceptionList = local_c;
  return;
}


// ==== 10135de0 FUN_10135de0

void FUN_10135de0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba6d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10135d10();
  ExceptionList = local_c;
  return;
}


// ==== 10135e30 FUN_10135e30

void FUN_10135e30(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  void *pvVar8;
  uint *puVar9;
  undefined **local_bc [14];
  undefined1 *local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  int *local_48;
  uint *local_40;
  int *local_38;
  int *local_30;
  int *local_28 [2];
  int *local_20;
  int *local_1c;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_7c = &LAB_101ba700;
  local_80 = ExceptionList;
  local_84 = &stack0xffffff38;
  local_78 = 1;
  local_30 = in_ECX;
  if (param_2 == (int *)0x0) {
    local_20 = (int *)0x0;
    ExceptionList = &local_80;
    local_84 = &stack0xffffff38;
    for (iVar3 = in_ECX[0x12];
        (param_2 = (int *)iVar3, iVar3 != 0 && (*(int **)(iVar3 + 0x18) == in_ECX));
        iVar3 = *(int *)(iVar3 + 0x38)) {
      piVar5 = (int *)thunk_FUN_10132a00(iVar3);
      if (piVar5 != (int *)0x0) {
        iVar6 = thunk_FUN_101329d0(piVar5);
        iVar3 = piVar5[0x15];
        if (iVar6 == 0) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = *(int **)(iVar6 + 0x78);
        }
        (**(code **)(*piVar5 + 0x80))(param_1,local_20);
        piVar5[0x15] = iVar3;
        local_20 = piVar5;
        iVar6 = thunk_FUN_101329d0(piVar5);
        iVar3 = (int)param_2;
        if (iVar6 != 0) {
          iVar3 = thunk_FUN_101329d0(piVar5);
          *(int **)(iVar3 + 0x78) = local_8;
          iVar3 = (int)param_2;
        }
      }
    }
  }
  else {
    ExceptionList = &local_80;
    in_ECX[0x13] = 0;
    iVar3 = (**(code **)(*in_ECX + 0x7c))();
    if (iVar3 != 0) {
      iVar3 = *param_1;
      uVar4 = (**(code **)(*in_ECX + 0x7c))();
      (**(code **)(iVar3 + 0x10))(uVar4);
      piVar5 = (int *)(**(code **)(*in_ECX + 0x7c))();
      iVar3 = (**(code **)(*piVar5 + 0x78))();
      in_ECX[0x13] = iVar3 + 3U & 0xfffffffc;
    }
    local_1c = (int *)0x0;
    for (iVar3 = in_ECX[0x12];
        (iVar3 != 0 && ((**(code **)(*param_1 + 0x10))(iVar3), *(int **)(iVar3 + 0x18) == in_ECX));
        iVar3 = *(int *)(iVar3 + 0x38)) {
      piVar5 = (int *)thunk_FUN_10132a00(iVar3);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x80))(param_1,local_1c);
        in_ECX[0x13] = piVar5[0x11] * piVar5[0x10] + piVar5[0x15];
        local_1c = piVar5;
      }
    }
    in_ECX[0x13] = in_ECX[0x13] + 3U & 0xfffffffc;
  }
  local_78 = 3;
  puVar9 = (uint *)(in_ECX + 0x1b);
  local_40 = puVar9;
  thunk_FUN_10119210(in_ECX);
  while (uVar2 = local_14, local_14 != 0) {
    iVar3 = thunk_FUN_10132a30(local_14);
    if ((((iVar3 != 0) || (iVar3 = thunk_FUN_101329a0(uVar2), iVar3 != 0)) ||
        (iVar3 = thunk_FUN_10132a60(uVar2), iVar3 != 0)) ||
       (iVar3 = thunk_FUN_10132a90(uVar2), iVar3 != 0)) {
      *puVar9 = uVar2;
      puVar9 = (uint *)(uVar2 + 100);
      local_40 = puVar9;
    }
    local_14 = *(uint *)(uVar2 + 0x38);
    thunk_FUN_10114340();
  }
  *puVar9 = 0;
  local_78._0_1_ = 5;
  local_78._1_3_ = 0;
  thunk_FUN_10135d90();
  local_78 = CONCAT31(local_78._1_3_,6);
  piVar5 = in_ECX + 0x1c;
  local_10 = in_ECX + 0x1d;
  local_c = in_ECX + 0x1e;
  param_2 = piVar5;
  thunk_FUN_10119210(in_ECX);
  while (piVar1 = local_38, local_38 != (int *)0x0) {
    if (((*(byte *)(local_38 + 0x12) & 0x20) != 0) && (GIsEditor == 0)) {
      local_38[0x1a] = (int)local_38;
      FArchive::FArchive((FArchive *)local_bc);
      local_78 = CONCAT31(local_78._1_3_,7);
      param_1 = (int *)(uint)*(ushort *)(piVar1 + 0x14);
      piVar5 = (int *)(**(code **)(*piVar1 + 0x74))();
      (**(code **)(*piVar5 + 0x90))(&param_1,local_bc);
      local_8 = piVar1;
      thunk_FUN_10134440(&local_8,&param_1);
      thunk_FUN_10119210(in_ECX);
      while (piVar5 = local_48, local_48 != piVar1) {
        if ((*(byte *)(local_48 + 0x12) & 0x20) != 0) {
          local_28[0] = local_48;
          piVar7 = (int *)thunk_FUN_101325e0(local_28);
          if (piVar7 == (int *)0x0) {
            appFailAssert("iCodePtr",".\\UnClass.cpp",0x1b5);
          }
          local_14 = (uint)*(ushort *)(piVar5 + 0x14);
          if ((int)param_1 - (uint)*(ushort *)(piVar1 + 0x14) == *piVar7 - local_14) {
            iVar3 = (**(code **)(*piVar5 + 0x74))();
            pvVar8 = (void *)(*(int *)(iVar3 + 0x54) + local_14);
            local_14 = (uint)*(ushort *)(piVar1 + 0x14);
            iVar3 = (**(code **)(*piVar1 + 0x74))();
            iVar3 = appMemcmp((void *)(*(int *)(iVar3 + 0x54) + local_14),pvVar8,
                              (int)param_1 - (uint)*(ushort *)(piVar1 + 0x14));
            if (iVar3 == 0) {
              piVar5[0x1a] = piVar1[0x1a];
            }
          }
        }
        local_48 = (int *)piVar5[0xe];
        thunk_FUN_10114340();
        in_ECX = local_30;
      }
      local_78 = CONCAT31(local_78._1_3_,6);
      local_bc[0] = FArchive::vftable;
      piVar5 = param_2;
    }
    if ((piVar1[0x12] & 0x400000U) != 0) {
      *local_c = (int)piVar1;
      local_c = piVar1 + 0x18;
    }
    if ((piVar1[0x12] & 0x4000U) != 0) {
      *local_10 = (int)piVar1;
      local_10 = piVar1 + 0x17;
    }
    *piVar5 = (int)piVar1;
    piVar5 = piVar1 + 0x16;
    local_38 = (int *)piVar1[0xe];
    param_2 = piVar5;
    thunk_FUN_10114340();
  }
  *piVar5 = 0;
  *local_10 = 0;
  *local_c = 0;
  thunk_FUN_10134410();
  local_78 = CONCAT31(local_78._1_3_,5);
  thunk_FUN_10135de0();
  ExceptionList = local_80;
  return;
}


// ==== 10136218 Catch@10136218

void Catch_10136218(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + 0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_101f843c);
}


// ==== 1013622c Catch@1013622c

void Catch_1013622c(void)

{
  appUnwindf((ushort *)&DAT_101d1d00,L"LinkCleanup");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136247 Catch@10136247

void Catch_10136247(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x50) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x50,&DAT_101f843c);
}


// ==== 1013625b Catch@1013625b

void Catch_1013625b(void)

{
  appUnwindf((ushort *)&DAT_101d1cdc,L"LinkRefs");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136276 Catch@10136276

void Catch_10136276(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x48) = *(undefined4 *)(unaff_EBP + 0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x48,&DAT_101f843c);
}


// ==== 1013628a Catch@1013628a

void Catch_1013628a(void)

{
  appUnwindf((ushort *)&DAT_101d1cd4,L"LinkProperties");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101362a5 Catch@101362a5

void Catch_101362a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x40) = *(undefined4 *)(unaff_EBP + 0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x40,&DAT_101f843c);
}


// ==== 101362b9 Catch@101362b9

void Catch_101362b9(void)

{
  appUnwindf((ushort *)&DAT_101d1d08,L"UStruct::Link");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136400 FUN_10136400

void FUN_10136400(FArchive *param_1,int param_2)

{
  UStruct *in_ECX;
  int iVar1;
  uint uVar2;
  UStruct *pUVar3;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba710;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::Link(in_ECX,param_1,param_2);
  if (*(int *)(in_ECX + 0x34) == 0) {
    pUVar3 = in_ECX + 0xa4;
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pUVar3 = 0;
      pUVar3 = pUVar3 + 4;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pUVar3 = (UStruct)0x0;
      pUVar3 = pUVar3 + 1;
    }
  }
  else {
    _memcpy(in_ECX + 0xa4,(void *)(*(int *)(in_ECX + 0x34) + 0xa4),0x400);
  }
  thunk_FUN_101344d0(in_ECX);
  while ((local_20 != 0 && (*(UStruct **)(local_20 + 0x18) == in_ECX))) {
    uVar2 = *(uint *)(local_20 + 0x20) & 0xff;
    *(undefined4 *)(local_20 + 0x3c) = *(undefined4 *)(in_ECX + uVar2 * 4 + 0xa4);
    *(int *)(in_ECX + uVar2 * 4 + 0xa4) = local_20;
    local_20 = *(int *)(local_20 + 0x38);
    thunk_FUN_10132820();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101364d6 Catch@101364d6

void Catch_101364d6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101364ea Catch@101364ea

void Catch_101364ea(void)

{
  appUnwindf((ushort *)&DAT_101d2298,L"UState::Link");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136550 FUN_10136550

void FUN_10136550(FArchive *param_1,FArchive *param_2)

{
  int iVar1;
  UState *pUVar2;
  int iVar3;
  int *piVar4;
  UState *in_ECX;
  FArchive *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba739;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UState::Link(in_ECX,param_1,(int)param_2);
  if (GIsEditor == 0) {
    thunk_FUN_1011a1c0(0);
    iVar3 = *(int *)(in_ECX + 0x34);
    if (iVar3 == 0) {
      iVar1 = thunk_FUN_10130a50();
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    else {
      iVar1 = iVar3 + 0x4c4;
    }
    thunk_FUN_10120c40(iVar1);
    local_8 = 0;
    if (iVar3 == 0) {
      thunk_FUN_10120b60();
    }
    thunk_FUN_10134530(in_ECX);
    while ((local_2c != (FArchive *)0x0 &&
           (pUVar2 = (UState *)(**(code **)(*(int *)local_2c + 0x74))(), pUVar2 == in_ECX))) {
      iVar3 = thunk_FUN_10132a00(local_2c);
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_10132ac0(local_2c);
        if (((iVar3 == 0) || ((*(byte *)(iVar3 + 0x8c) & 0x40) == 0)) ||
           (*(int *)(iVar3 + 0x34) != 0)) goto LAB_101366b7;
        param_1 = local_2c;
        thunk_FUN_10132590(&param_1);
        local_2c = *(FArchive **)(local_2c + 0x38);
        thunk_FUN_10132890();
      }
      else {
        if ((*(byte *)(iVar3 + 0x48) & 0x20) != 0) {
          param_2 = local_2c;
          thunk_FUN_10132590(&param_2);
          if (*(UState **)(iVar3 + 0x18) == in_ECX) {
            *(short *)(iVar3 + 0x52) = (short)*(undefined4 *)(in_ECX + 0x4c8);
            for (iVar1 = 0; iVar1 < *(int *)(iVar3 + 0x40); iVar1 = iVar1 + 1) {
              piVar4 = (int *)thunk_FUN_10114bc0(8,in_ECX + 0x4c4);
              if (piVar4 != (int *)0x0) {
                *piVar4 = iVar3;
                piVar4[1] = iVar1;
              }
            }
          }
        }
LAB_101366b7:
        local_2c = *(FArchive **)(local_2c + 0x38);
        thunk_FUN_10132890();
      }
    }
    thunk_FUN_10130af0();
    thunk_FUN_10132af0(*(undefined4 *)(in_ECX + 0x4d0),*(undefined4 *)(in_ECX + 0x4d4));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10136703 Catch@10136703

void Catch_10136703(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10136717 Catch@10136717

void Catch_10136717(void)

{
  appUnwindf((ushort *)&DAT_101d2454,L"UClass::Link");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101367b0 FUN_101367b0

void FUN_101367b0(FArchive *param_1,int param_2)

{
  UStruct *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba750;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UStruct::Link(in_ECX,param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 101367ff Catch@101367ff

void Catch_101367ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10136813 Catch@10136813

void Catch_10136813(void)

{
  appUnwindf((ushort *)&DAT_101d26bc,L"UFunction::Link");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136850 FUN_10136850

undefined4 FUN_10136850(void)

{
  FOutputDevice *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba760;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  ExceptionList = local_10;
  return 1;
}


// ==== 101368a3 Catch@101368a3

void Catch_101368a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101368b7 Catch@101368b7

void Catch_101368b7(void)

{
  appUnwindf((ushort *)&DAT_101d31d0,L"UPackageMap::SerializeObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136900 FUN_10136900

undefined4 FUN_10136900(void)

{
  FOutputDevice *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba770;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf(in_ECX,(ushort *)GError);
  ExceptionList = local_10;
  return 1;
}


// ==== 10136953 Catch@10136953

void Catch_10136953(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10136967 Catch@10136967

void Catch_10136967(void)

{
  appUnwindf((ushort *)&DAT_101d3228,L"UPackageMap::SerializeObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136a80 FUN_10136a80

void FUN_10136a80(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10136aa0 FUN_10136aa0

void FUN_10136aa0(int *param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba780;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2 + 0x10,param_2 + 0xc);
  thunk_FUN_10136a80(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10136af7 Catch@10136af7

void Catch_10136af7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10136b0b Catch@10136b0b

void Catch_10136b0b(void)

{
  appUnwindf((ushort *)&DAT_101d3150,L"FPackageInfo<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136b50 FUN_10136b50

void FUN_10136b50(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10136b70 FUN_10136b70

void FUN_10136b70(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba790;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x38); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc + iVar2 * 0x44);
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x7c))(iVar1);
    }
  }
  (**(code **)(*in_ECX + 0x80))();
  ExceptionList = local_10;
  return;
}


// ==== 10136bea Catch@10136bea

void Catch_10136bea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10136bfe Catch@10136bfe

void Catch_10136bfe(void)

{
  appUnwindf((ushort *)&DAT_101d3168,L"UPackageMap::CopyLinkers");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136c50 FUN_10136c50

bool FUN_10136c50(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba7a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if (*param_2 < *(int *)(in_ECX + 0x6c)) {
    local_18 = *(uint *)(*(int *)(in_ECX + 0x68) + *param_2 * 4);
  }
  else {
    local_18 = *(uint *)(in_ECX + 0x78);
  }
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0xc))(&local_18,*(int *)(in_ECX + 0x78) + 1);
  if (param_1[4] != 0) {
    *param_2 = 0;
    if ((local_18 < *(uint *)(in_ECX + 0x78)) && (param_1[0xb] == 0)) {
      for (iVar3 = 0; iVar3 < *(int *)(in_ECX + 0x38); iVar3 = iVar3 + 1) {
        iVar1 = *(int *)(in_ECX + 0x34) + iVar3 * 0x44;
        uVar2 = *(uint *)(iVar1 + 0x34);
        if (local_18 < uVar2) {
          *param_2 = *(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x78) + local_18 * 4);
          ExceptionList = local_10;
          return true;
        }
        local_18 = local_18 - uVar2;
      }
    }
    ExceptionList = local_10;
    return true;
  }
  ExceptionList = local_10;
  return local_18 != *(uint *)(in_ECX + 0x78);
}


// ==== 10136d2f Catch@10136d2f

void Catch_10136d2f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10136d43 Catch@10136d43

void Catch_10136d43(void)

{
  appUnwindf((ushort *)&DAT_101d3170,L"UPackageMap::SerializeName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136db0 FUN_10136db0

undefined4 FUN_10136db0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x38) <= iVar1) {
      return 0;
    }
    if (*(int *)(*(int *)(in_ECX + 0x34) + 0x10 + iVar1 * 0x44) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}


// ==== 10136e27 Catch@10136e27

void Catch_10136e27(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10136e3b Catch@10136e3b

void Catch_10136e3b(void)

{
  appUnwindf((ushort *)&DAT_101d3278,L"UPackageMap::SupportsPackage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136e80 FUN_10136e80

UObject * FUN_10136e80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba7c0;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  if (-1 < param_1) {
    for (; iVar2 < *(int *)(in_ECX + 0x38); iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(in_ECX + 0x34) + iVar2 * 0x44;
      if (param_1 < *(int *)(iVar1 + 0x2c)) {
        pUVar3 = *(UObject **)(*(int *)(*(int *)(iVar1 + 0xc) + 0x90) + 0x1c + param_1 * 0x24);
        if ((pUVar3 == (UObject *)0x0) && (param_2 != 0)) {
          ExceptionList = &local_10;
          UObject::BeginLoad();
          pUVar3 = ULinkerLoad::CreateExport(*(ULinkerLoad **)(iVar1 + 0xc),param_1,0);
          UObject::EndLoad();
        }
        ExceptionList = local_10;
        return pUVar3;
      }
      param_1 = param_1 - *(int *)(iVar1 + 0x2c);
    }
  }
  return (UObject *)0x0;
}


// ==== 10136f32 Catch@10136f32

void Catch_10136f32(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10136f46 Catch@10136f46

void Catch_10136f46(void)

{
  appUnwindf((ushort *)&DAT_101d3280,L"UPackageMap::PairToObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10136fa0 FUN_10136fa0

int FUN_10136fa0(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,4);
  }
  return iVar1;
}


// ==== 10136ff0 FUN_10136ff0

void FUN_10136ff0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10137040 FUN_10137040

void FUN_10137040(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10137090 FUN_10137090

void FUN_10137090(void)

{
  FArray *in_ECX;
  
  if (*(int *)(in_ECX + 8) != *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4);
    FArray::Realloc(in_ECX,0xc);
  }
  return;
}


// ==== 101370b0 FUN_101370b0

int FUN_101370b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 4);
  }
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  if (iVar4 != -1) {
    iVar2 = *in_ECX;
    do {
      if (*(int *)(iVar2 + 4 + iVar4 * 0xc) == iVar1) {
        return iVar2 + 8 + iVar4 * 0xc;
      }
      iVar4 = *(int *)(iVar2 + iVar4 * 0xc);
    } while (iVar4 != -1);
  }
  return 0;
}


// ==== 10137120 FUN_10137120

undefined4 FUN_10137120(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 4);
  }
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  if (iVar4 != -1) {
    iVar2 = *in_ECX;
    do {
      if (*(int *)(iVar2 + 4 + iVar4 * 0xc) == iVar1) {
        return *(undefined4 *)(iVar2 + 8 + iVar4 * 0xc);
      }
      iVar4 = *(int *)(iVar2 + iVar4 * 0xc);
    } while (iVar4 != -1);
  }
  return 0;
}


// ==== 101372a0 FUN_101372a0

void FUN_101372a0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0xc,*(int *)(in_ECX + 8) * 0xc);
  return;
}


// ==== 101372e0 FUN_101372e0

void FUN_101372e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10137330 FUN_10137330

void FUN_10137330(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0x44,*(int *)(in_ECX + 8) * 0x44);
  return;
}


// ==== 10137370 FUN_10137370

void FUN_10137370(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0xc,*(int *)(in_ECX + 8) * 0xc);
  return;
}


// ==== 101373b0 FUN_101373b0

void FUN_101373b0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0xc,*(int *)(in_ECX + 8) * 0xc);
  return;
}


// ==== 101373f0 FUN_101373f0

int * FUN_101373f0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_2 + 4);
  (**(code **)(*piVar1 + 4))(param_2 + 8,4);
  return piVar1;
}


// ==== 10137430 FUN_10137430

void FUN_10137430(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2 + 4);
  return;
}


// ==== 10137450 FUN_10137450

int FUN_10137450(int param_1,uint param_2)

{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x24) + 0x4a4) & param_2) == 0)) {
    param_1 = 0;
  }
  return param_1;
}


// ==== 10137470 FUN_10137470

int FUN_10137470(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba830;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (iVar2 = *(int *)(param_1 + 0x14), iVar2 != -1)) {
    ExceptionList = &local_10;
    param_1 = *(int *)(param_1 + 0x10);
    piVar3 = (int *)thunk_FUN_101370b0(&param_1);
    if ((piVar3 != (int *)0x0) &&
       (iVar1 = *(int *)(in_ECX + 0x34) + *piVar3 * 0x44, iVar2 < *(int *)(iVar1 + 0x2c))) {
      ExceptionList = local_10;
      return *(int *)(iVar1 + 0x28) + iVar2;
    }
  }
  ExceptionList = local_10;
  return -1;
}


// ==== 10137505 Catch@10137505

void Catch_10137505(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10137519 Catch@10137519

void Catch_10137519(void)

{
  appUnwindf((ushort *)&DAT_101d3270,L"UPackageMap::ObjectToIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137570 FUN_10137570

int FUN_10137570(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 101375c0 FUN_101375c0

FArchive * FUN_101375c0(FArchive *param_1,int *param_2)

{
  FFieldNetCache *pFVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba840;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_101372a0(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      operator<<(param_1,(FFieldNetCache *)(*param_2 + iVar2 * 0xc));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10119a80(local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      pFVar1 = (FFieldNetCache *)thunk_FUN_10114ad0(0xc,param_2);
      operator<<(param_1,pFVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10137676 Catch@10137676

void Catch_10137676(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1013768a Catch@1013768a

void Catch_1013768a(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101376e0 FUN_101376e0

void FUN_101376e0(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,0xc);
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10119c90();
  return;
}


// ==== 10137710 FUN_10137710

undefined4 * FUN_10137710(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  if (puVar4[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar4[1] + 4);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10119ab0();
  }
  return puVar4 + 2;
}


// ==== 101377e0 FUN_101377e0

undefined4 * FUN_101377e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  if (puVar4[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar4[1] + 4);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10119c90();
  }
  return puVar4 + 2;
}


// ==== 101378b0 FUN_101378b0

FArchive * FUN_101378b0(FArchive *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba850;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10137370(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      thunk_FUN_101373f0(param_1,*param_2 + iVar2 * 0xc);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10114650(local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      uVar1 = thunk_FUN_10114e50(0xc,param_2);
      thunk_FUN_101373f0(param_1,uVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10137966 Catch@10137966

void Catch_10137966(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1013797a Catch@1013797a

void Catch_1013797a(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137a10 FUN_10137a10

undefined4 * FUN_10137a10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,0xc);
  }
  puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *param_1;
    puVar4[2] = *param_2;
  }
  if (puVar4[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar4[1] + 4);
  }
  uVar3 = *(int *)(in_ECX + 0x10) - 1U & uVar3;
  *puVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
  *(int *)(*(int *)(in_ECX + 0xc) + uVar3 * 4) = *(int *)(in_ECX + 4) + -1;
  if (*(int *)(in_ECX + 0x10) * 2 + 8 < *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) * 2;
    thunk_FUN_10119e70();
  }
  return puVar4 + 2;
}


// ==== 10137ae0 FUN_10137ae0

FArchive * FUN_10137ae0(FArchive *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba860;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_101373b0(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      thunk_FUN_10137430(param_1,*param_2 + iVar2 * 0xc);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_10114680(local_18);
    for (iVar2 = 0; iVar2 < local_18; iVar2 = iVar2 + 1) {
      uVar1 = thunk_FUN_10114ea0(0xc,param_2);
      thunk_FUN_10137430(param_1,uVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10137b96 Catch@10137b96

void Catch_10137b96(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10137baa Catch@10137baa

void Catch_10137baa(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137c00 FUN_10137c00

void FUN_10137c00(ULinkerLoad *param_1)

{
  ULinkerLoad *pUVar1;
  FArchive *pFVar2;
  undefined4 uVar3;
  ushort *puVar4;
  FString *in_ECX;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba888;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  local_8 = 2;
  *(ULinkerLoad **)(in_ECX + 0xc) = param_1;
  if (param_1 == (ULinkerLoad *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  *(undefined4 *)(in_ECX + 0x10) = uVar3;
  if (param_1 == (ULinkerLoad *)0x0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    pUVar1 = (ULinkerLoad *)&local_30;
  }
  else {
    pUVar1 = param_1 + 0x5c;
  }
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)pUVar1;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(pUVar1 + 4);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(pUVar1 + 8);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(pUVar1 + 0xc);
  if (param_1 == (ULinkerLoad *)0x0) {
    uVar3 = 0;
  }
  else {
    pFVar2 = ULinkerLoad::GetReader(param_1);
    uVar3 = (**(code **)(*(int *)pFVar2 + 0x2c))();
  }
  *(undefined4 *)(in_ECX + 0x24) = uVar3;
  *(undefined4 *)(in_ECX + 0x28) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x30) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x34) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  if (param_1 == (ULinkerLoad *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x40);
  }
  *(undefined4 *)(in_ECX + 0x40) = uVar3;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (param_1 != (ULinkerLoad *)0x0) {
    puVar4 = FString::operator*((FString *)(param_1 + 0xa0));
    if ((puVar4 != (ushort *)0x0) && (((byte)param_1[0x40] & 1) != 0)) {
      puVar4 = FString::operator*((FString *)(param_1 + 0xa0));
      FString::operator=(in_ECX,puVar4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10137d01 Catch@10137d01

void Catch_10137d01(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10137d15 Catch@10137d15

void Catch_10137d15(void)

{
  appUnwindf((ushort *)&DAT_101d3148,L"FPackageInfo::FPackageInfo");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137d80 FUN_10137d80

void FUN_10137d80(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba8a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_1012a9f0(param_1,param_2 + 0x18,param_2 + 0x1c);
  thunk_FUN_101375c0(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10137dd9 Catch@10137dd9

void Catch_10137dd9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10137ded Catch@10137ded

void Catch_10137ded(void)

{
  appUnwindf((ushort *)&DAT_101d3158,L"FClassNetCache<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137e30 FUN_10137e30

int FUN_10137e30(ULinkerLoad *param_1)

{
  int iVar1;
  int iVar2;
  FPackageInfo *this;
  ULinkerLoad *pUVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba8b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (((byte)param_1[0x40] & 4) == 0) {
    iVar2 = 0;
    while( true ) {
      if (in_ECX[0xe] <= iVar2) {
        iVar2 = in_ECX[0xe];
        ExceptionList = &local_10;
        this = (FPackageInfo *)thunk_FUN_10114b20(0x44,in_ECX + 0xd);
        if (this != (FPackageInfo *)0x0) {
          FPackageInfo::FPackageInfo(this,param_1);
        }
        for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x88); iVar4 = iVar4 + 1) {
          iVar5 = *(int *)(param_1 + 0x84) + iVar4 * 0x1c;
          if ((*(int *)(iVar5 + 4) == 0x2a2) && (*(int *)(iVar5 + 8) == 0)) {
            for (iVar5 = 0; iVar5 < DAT_103308a4; iVar5 = iVar5 + 1) {
              iVar1 = *(int *)(param_1 + 0x84);
              pUVar3 = UObject::GetLoader(iVar5);
              if (*(int *)(*(int *)(pUVar3 + 0x34) + 0x20) == *(int *)(iVar1 + iVar4 * 0x1c + 0xc))
              {
                iVar1 = *in_ECX;
                pUVar3 = UObject::GetLoader(iVar5);
                (**(code **)(iVar1 + 0x7c))(pUVar3);
              }
            }
          }
        }
        ExceptionList = local_10;
        return iVar2;
      }
      if (*(int *)(in_ECX[0xd] + 0x10 + iVar2 * 0x44) == *(int *)(param_1 + 0x34)) break;
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 10137f5c Catch@10137f5c

void Catch_10137f5c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 10137f70 Catch@10137f70

void Catch_10137f70(void)

{
  appUnwindf((ushort *)&DAT_101d3240,L"UPackageMap::AddLinker");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10137ff0 FUN_10137ff0

void FUN_10137ff0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba8d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10119ab0();
  ExceptionList = local_c;
  return;
}


// ==== 10138060 FUN_10138060

int FUN_10138060(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar4 + 4);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == iVar4) {
        *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc) = *param_2;
        return iVar3 * 0xc + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  iVar4 = thunk_FUN_10137710(param_1,param_2);
  return iVar4;
}


// ==== 101380f0 FUN_101380f0

int FUN_101380f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar4 + 4);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == iVar4) {
        *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc) = *param_2;
        return iVar3 * 0xc + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  iVar4 = thunk_FUN_101377e0(param_1,param_2);
  return iVar4;
}


// ==== 10138180 FUN_10138180

int FUN_10138180(int param_1,int param_2)

{
  int iVar1;
  
  thunk_FUN_101378b0(param_1,param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x10) * 2 + 8 < *(int *)(param_2 + 4)) {
      do {
        iVar1 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar1 * 2;
      } while (iVar1 * 4 + 8 < *(int *)(param_2 + 4));
    }
    thunk_FUN_10119c90();
  }
  return param_1;
}


// ==== 101381e0 FUN_101381e0

int FUN_101381e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar4 + 4);
  }
  iVar3 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar2) * 4);
  if (iVar3 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) == iVar4) {
        *(undefined4 *)(iVar1 + 8 + iVar3 * 0xc) = *param_2;
        return iVar3 * 0xc + 8 + *in_ECX;
      }
      iVar3 = *(int *)(iVar1 + iVar3 * 0xc);
    } while (iVar3 != -1);
  }
  iVar4 = thunk_FUN_10137a10(param_1,param_2);
  return iVar4;
}


// ==== 10138270 FUN_10138270

int FUN_10138270(int param_1,int param_2)

{
  int iVar1;
  
  thunk_FUN_10137ae0(param_1,param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x10) * 2 + 8 < *(int *)(param_2 + 4)) {
      do {
        iVar1 = *(int *)(param_2 + 0x10);
        *(int *)(param_2 + 0x10) = iVar1 * 2;
      } while (iVar1 * 4 + 8 < *(int *)(param_2 + 4));
    }
    thunk_FUN_10119e70();
  }
  return param_1;
}


// ==== 101382d0 FUN_101382d0

void FUN_101382d0(void)

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
    thunk_FUN_10119e70();
    return;
  }
  return;
}


// ==== 10138310 FUN_10138310

void FUN_10138310(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101ba8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10137ff0();
  ExceptionList = local_c;
  return;
}


// ==== 10138360 FUN_10138360

void FUN_10138360(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba900;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar4 = 0; local_20 = iVar4, iVar4 < *(int *)(in_ECX + 0x38); iVar4 = iVar4 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x34) + 0xc + iVar4 * 0x44) == 0) {
      appFailAssert("List(i).Linker",".\\UnCoreNet.cpp",0xf2);
    }
  }
  thunk_FUN_10113560(DAT_10327ae4);
  thunk_FUN_10136fa0(DAT_10327ae4);
  for (local_24 = 0; local_24 < *(int *)(in_ECX + 0x6c); local_24 = local_24 + 1) {
    *(undefined4 *)(*(int *)(in_ECX + 0x68) + local_24 * 4) = 0xffffffff;
  }
  thunk_FUN_101376e0();
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  for (; iVar3 < *(int *)(in_ECX + 0x38); iVar3 = iVar3 + 1) {
    iVar4 = *(int *)(in_ECX + 0x34) + iVar3 * 0x44;
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(in_ECX + 0x74);
    *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(in_ECX + 0x78);
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
    *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) + *(int *)(iVar4 + 0x2c);
    *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x78) + *(int *)(iVar4 + 0x34);
    local_28 = 0;
    while( true ) {
      local_2c = *(int *)(iVar4 + 0xc);
      local_1c = *(int *)(local_2c + 0x7c);
      iVar2 = *(int *)(iVar4 + 0x34);
      if (local_1c <= *(int *)(iVar4 + 0x34)) {
        iVar2 = local_1c;
      }
      if (iVar2 <= local_28) break;
      iVar2 = *(int *)(*(int *)(local_2c + 0x78) + local_28 * 4);
      if (*(int *)(*(int *)(in_ECX + 0x68) + iVar2 * 4) == -1) {
        *(int *)(*(int *)(in_ECX + 0x68) + iVar2 * 4) = *(int *)(iVar4 + 0x30) + local_28;
      }
      local_28 = local_28 + 1;
    }
    local_18 = iVar3;
    thunk_FUN_101380f0(&local_2c,&local_18);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10138509 Catch@10138509

void Catch_10138509(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x2c,&DAT_101f843c);
}


// ==== 1013851d Catch@1013851d

void Catch_1013851d(void)

{
  appUnwindf((ushort *)&DAT_101d3268,L"UPackageMap::Compute");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101385b0 FUN_101385b0

FArchive * FUN_101385b0(FArchive *param_1,int *param_2)

{
  FPackageInfo *pFVar1;
  int iVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba910;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10137330(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
      operator<<(param_1,(FPackageInfo *)(*param_2 + iVar2 * 0x44));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_101244a0(local_18);
    while (iVar2 < local_18) {
      pFVar1 = (FPackageInfo *)thunk_FUN_10114b20(0x44,param_2);
      if (pFVar1 == (FPackageInfo *)0x0) {
        operator<<(param_1,(FPackageInfo *)0x0);
        iVar2 = iVar2 + 1;
      }
      else {
        pFVar1 = (FPackageInfo *)FPackageInfo::FPackageInfo(pFVar1,(ULinkerLoad *)0x0);
        operator<<(param_1,pFVar1);
        iVar2 = iVar2 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10138684 Catch@10138684

void Catch_10138684(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10138698 Catch@10138698

void Catch_10138698(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138700 FUN_10138700

void FUN_10138700(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba956;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_4 = 3;
  thunk_FUN_10137ff0();
  ExceptionList = local_c;
  return;
}


// ==== 10138790 FUN_10138790

void FUN_10138790(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101ba9a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[6] = param_1;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_4 = 3;
  thunk_FUN_10137ff0();
  ExceptionList = local_c;
  return;
}


// ==== 10138820 FUN_10138820

void FUN_10138820(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba9c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10124bd0(param_1 + 0x34);
  thunk_FUN_10123e50(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  thunk_FUN_10123ff0(param_1 + 0x54);
  thunk_FUN_101182b0(param_1 + 0x68);
  ExceptionList = local_10;
  return;
}


// ==== 101388a3 Catch@101388a3

void Catch_101388a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101388b7 Catch@101388b7

void Catch_101388b7(void)

{
  appUnwindf((ushort *)&DAT_101d3160,L"UPackageMap::Copy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138900 FUN_10138900

FClassNetCache * FUN_10138900(UClass *param_1)

{
  int iVar1;
  FClassNetCache *this;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  FFieldNetCache *pFVar7;
  int *in_ECX;
  int local_44;
  FClassNetCache *local_38;
  int local_34;
  FClassNetCache *local_30;
  UClass *local_2c;
  undefined4 local_28;
  UClass *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101ba9db;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  local_24 = param_1;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  this = (FClassNetCache *)thunk_FUN_10137120(&local_24);
  if ((this == (FClassNetCache *)0x0) &&
     (local_30 = this, iVar2 = (**(code **)(*in_ECX + 0x74))(param_1), iVar2 != -1)) {
    local_38 = (FClassNetCache *)thunk_FUN_101088a0(0x3c);
    local_8._0_1_ = 1;
    if (local_38 == (FClassNetCache *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FClassNetCache::FClassNetCache(local_38,param_1);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_2c = param_1;
    puVar3 = (undefined4 *)thunk_FUN_101381e0(&local_2c,&local_28);
    this = (FClassNetCache *)*puVar3;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    local_30 = this;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar4 = (**(code **)(*in_ECX + 0x88))(*(int *)(param_1 + 0x34));
      *(undefined4 *)(this + 0x10) = uVar4;
      thunk_FUN_10120810(uVar4);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(*(int *)(this + 0x10) + 0x14);
      *(int *)(this + 0xc) =
           *(int *)(*(int *)(this + 0x10) + 0xc) + *(int *)(*(int *)(this + 0x10) + 0x20);
    }
    thunk_FUN_10119a80(*(undefined4 *)(param_1 + 0x4d4));
    for (local_18 = 0; local_18 < *(int *)(param_1 + 0x4d4); local_18 = local_18 + 1) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) + local_18 * 4);
      iVar2 = (**(code **)(*local_1c + 0x74))(uVar4);
      if (iVar2 != -1) {
        local_20 = -1;
        iVar2 = *(int *)(this + 0x20);
        iVar1 = *(int *)(this + 0xc);
        iVar5 = thunk_FUN_10137450(uVar4,0x8000);
        if ((iVar5 != 0) &&
           ((*(int *)(iVar5 + 0x68) == iVar5 ||
            (iVar5 = (**(code **)(*local_1c + 0x74))(*(undefined4 *)(iVar5 + 0x68)), iVar5 == -1))))
        {
          local_20 = *(int *)(this + 0x14);
          *(int *)(this + 0x14) = local_20 + 1;
        }
        puVar3 = (undefined4 *)thunk_FUN_10114ad0(0xc,this + 0x1c);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uVar4;
          puVar3[1] = iVar1 + iVar2;
          puVar3[2] = local_20;
        }
      }
    }
    thunk_FUN_10137090();
    for (iVar2 = 0; iVar2 < *(int *)(this + 0x20); iVar2 = iVar2 + 1) {
      local_1c = (int *)(*(int *)(this + 0x1c) + iVar2 * 0xc);
      local_34 = *local_1c;
      thunk_FUN_10138060(&local_34,&local_1c);
    }
    for (local_44 = 0; local_44 < *(int *)(this + 0x20); local_44 = local_44 + 1) {
      local_1c = (int *)(local_44 * 0xc + *(int *)(this + 0x1c));
      piVar6 = (int *)thunk_FUN_10137450(*local_1c,0x8000);
      if (piVar6 != (int *)0x0) {
        if (local_1c[2] == -1) {
          pFVar7 = FClassNetCache::GetFromField(this,(UObject *)piVar6[0x1a]);
          local_1c[2] = *(int *)(pFVar7 + 8);
        }
        iVar2 = (**(code **)(*piVar6 + 0x74))();
        if ((*(uint *)(iVar2 + 0x4a4) & 0x800) == 0) {
          local_38 = (FClassNetCache *)(*(int *)(this + 0x1c) + local_44 * 0xc);
          thunk_FUN_10137570(&local_38);
        }
      }
    }
  }
  ExceptionList = local_10;
  return this;
}


// ==== 10138b67 Catch@10138b67

void Catch_10138b67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_101f843c);
}


// ==== 10138b7b Catch@10138b7b

void Catch_10138b7b(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d3230,L"UPackageMap::GetClassNetCache");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)&DAT_101d3238,puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138c60 FUN_10138c60

void FUN_10138c60(FArchive *param_1)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101ba9f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_101385b0(param_1,in_ECX + 0x34,in_ECX + 0x40,in_ECX + 0x54);
  uVar1 = thunk_FUN_10138180(uVar1);
  thunk_FUN_10138270(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10138cd4 Catch@10138cd4

void Catch_10138cd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10138ce8 Catch@10138ce8

void Catch_10138ce8(void)

{
  appUnwindf((ushort *)&DAT_101d3288,L"UPackageMap::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138d30 FUN_10138d30

void FUN_10138d30(byte param_1)

{
  FClassNetCache *in_ECX;
  
  FClassNetCache::~FClassNetCache(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10138d60 FUN_10138d60

void FUN_10138d60(void)

{
  UObject *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101baa08;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Destroy(in_ECX);
  local_8._0_1_ = 1;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x58); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x54) + 8 + iVar1 * 0xc) != 0) {
      thunk_FUN_10138d30(1);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_101382d0();
  ExceptionList = local_10;
  return;
}


// ==== 10138de8 Catch@10138de8

void Catch_10138de8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10138dfc Catch@10138dfc

void Catch_10138dfc(void)

{
  appUnwindf((ushort *)&DAT_101d3290,L"UPackageMap::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10138e50 FUN_10138e50

void FUN_10138e50(void)

{
  DAT_10283778 = 0;
  DAT_1028377c = 0;
  return;
}


// ==== 10138e60 FUN_10138e60

void FUN_10138e60(EName param_1)

{
  FOutputDevice::Logf(*(FOutputDevice **)(param_1 + 0xc),param_1,(ushort *)0x2f9);
  return;
}


// ==== 10138e90 FUN_10138e90

void FUN_10138e90(int param_1)

{
  byte bVar1;
  UProperty *pUVar2;
  UObject *in_ECX;
  byte *pbVar3;
  undefined4 *unaff_retaddr;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  pbVar3 = *(byte **)(param_1 + 0xc) + 1;
  *(byte **)(param_1 + 0xc) = pbVar3;
  pUVar2 = *(UProperty **)pbVar3;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  GProperty = pUVar2;
  GPropObject = in_ECX;
  if (unaff_retaddr != (undefined4 *)0x0) {
    if ((GPropAddr != (uchar *)0x0) && ((*(uint *)GPropAddr & *(uint *)(pUVar2 + 0x78)) != 0)) {
      *unaff_retaddr = 1;
      return;
    }
    *unaff_retaddr = 0;
  }
  return;
}


// ==== 10138f10 FUN_10138f10

void FUN_10138f10(void)

{
  return;
}


// ==== 10138f20 FUN_10138f20

void FUN_10138f20(int param_1)

{
  GPropObject = (UObject *)0x0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}


// ==== 10138f40 FUN_10138f40

void FUN_10138f40(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ==== 10138f60 FUN_10138f60

void FUN_10138f60(undefined4 param_1,undefined4 *param_2)

{
  undefined4 in_ECX;
  
  *param_2 = in_ECX;
  return;
}


// ==== 10138f70 FUN_10138f70

void FUN_10138f70(int param_1,undefined1 *param_2)

{
  *param_2 = **(undefined1 **)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// ==== 10138f90 FUN_10138f90

void FUN_10138f90(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ==== 10138fa0 FUN_10138fa0

void FUN_10138fa0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return;
}


// ==== 10138fb0 FUN_10138fb0

void FUN_10138fb0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return;
}


// ==== 10138fc0 FUN_10138fc0

void FUN_10138fc0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ==== 10138fd0 FUN_10138fd0

void FUN_10138fd0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ==== 10138fe0 FUN_10138fe0

void FUN_10138fe0(int param_1,uint *param_2)

{
  *param_2 = (uint)**(byte **)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// ==== 10139000 FUN_10139000

void FUN_10139000(int param_1)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
                    /* WARNING: Jumptable at 0x1013901e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&GCasts)[bVar1])();
  return;
}


// ==== 10139030 FUN_10139030

void FUN_10139030(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0xc;
  return;
}


// ==== 10139060 FUN_10139060

void FUN_10139060(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,param_2);
  return;
}


// ==== 101390a0 FUN_101390a0

void FUN_101390a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_1027fb70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101390e0 FUN_101390e0

void FUN_101390e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_1027ff70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139120 FUN_10139120

void FUN_10139120(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139160 FUN_10139160

void FUN_10139160(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280770 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101391a0 FUN_101391a0

void FUN_101391a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280b70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101391e0 FUN_101391e0

void FUN_101391e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10280f70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139220 FUN_10139220

void FUN_10139220(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139260 FUN_10139260

void FUN_10139260(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281770 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101392a0 FUN_101392a0

void FUN_101392a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281b70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101392e0 FUN_101392e0

void FUN_101392e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10281f70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139320 FUN_10139320

void FUN_10139320(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139360 FUN_10139360

void FUN_10139360(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282770 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101393a0 FUN_101393a0

void FUN_101393a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282b70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 101393e0 FUN_101393e0

void FUN_101393e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10282f70 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139420 FUN_10139420

void FUN_10139420(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(&DAT_10283370 + (uint)bVar1 * 4))(param_1,param_2);
  return;
}


// ==== 10139460 FUN_10139460

void FUN_10139460(void)

{
  return;
}


// ==== 10139470 FUN_10139470

uint FUN_10139470(uint param_1,undefined4 *param_2)

{
  int iVar1;
  _func_void_FFrame_ptr_void_ptr ***ppp_Var2;
  
  if (DAT_10284688 == 0) {
    ppp_Var2 = &GNatives;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppp_Var2 = (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined;
      ppp_Var2 = ppp_Var2 + 1;
    }
    DAT_10284688 = 1;
  }
  if (param_1 != 0xffffffff) {
    if ((((int)param_1 < 0) || (0x1000 < param_1)) ||
       ((&GNatives)[param_1] != (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined)) {
      GNativeDuplicate = param_1;
    }
    (&GNatives)[param_1] = (_func_void_FFrame_ptr_void_ptr **)*param_2;
  }
  return param_1 & 0xffffff00;
}


// ==== 101394f0 FUN_101394f0

uint FUN_101394f0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  _func_void_FFrame_ptr_void_ptr ***ppp_Var2;
  
  if (DAT_1028468c == 0) {
    ppp_Var2 = &GCasts;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppp_Var2 = (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined;
      ppp_Var2 = ppp_Var2 + 1;
    }
    DAT_1028468c = 1;
  }
  if (param_1 != 0xffffffff) {
    if ((((int)param_1 < 0) || (0xff < param_1)) ||
       ((&GCasts)[param_1] != (_func_void_FFrame_ptr_void_ptr **)UObject::execUndefined)) {
      GCastDuplicate = param_1;
    }
    (&GCasts)[param_1] = (_func_void_FFrame_ptr_void_ptr **)*param_2;
  }
  return param_1 & 0xffffff00;
}


// ==== 10139570 FUN_10139570

void FUN_10139570(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  UObject *pUVar1;
  int iVar2;
  UFunction *pUVar3;
  int *in_ECX;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baa20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((int *)*param_2 != (int *)0x0) {
    ExceptionList = &local_10;
    iVar2 = (**(code **)(*(int *)*param_2 + 0x30))();
    if (iVar2 == 0) {
      pUVar1 = (UObject *)*param_2;
      if (pUVar1 != (UObject *)0x0) {
        iVar2 = *(int *)pUVar1;
        pUVar3 = UObject::FindFunctionChecked(pUVar1,param_2[1],0,param_3,param_4);
        (**(code **)(iVar2 + 0x10))(pUVar3);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  iVar2 = *in_ECX;
  uVar4 = 0;
  pUVar3 = UObject::FindFunctionChecked();
  (**(code **)(iVar2 + 0x10))(pUVar3,param_1,uVar4,param_3,param_4);
  ExceptionList = local_10;
  return;
}


// ==== 10139619 Catch@10139619

void Catch_10139619(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013962d Catch@1013962d

void Catch_1013962d(void)

{
  appUnwindf((ushort *)&DAT_101d40f8,L"UObject::ProcessDelegate");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139680 FUN_10139680

void FUN_10139680(void)

{
  return;
}


// ==== 10139690 FUN_10139690

undefined4 FUN_10139690(void)

{
  return 0;
}


// ==== 10139700 FUN_10139700

undefined4 FUN_10139700(undefined4 param_1)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  do {
    fVar1 = appFrand();
    local_c = (fVar1 + fVar1) - 1.0;
    fVar1 = appFrand();
    local_8 = (fVar1 + fVar1) - 1.0;
    fVar1 = appFrand();
    local_4 = (fVar1 + fVar1) - 1.0;
  } while (1.0 < local_4 * local_4 + local_c * local_c + local_8 * local_8);
  FVector::UnsafeNormal((FVector *)&local_c);
  return param_1;
}


// ==== 101397c0 FUN_101397c0

void FUN_101397c0(undefined4 param_1,int param_2)

{
  int in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baa30;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_2 == 0x2f9) || (GIsStrict != 0)) {
    ExceptionList = &local_10;
    UObject::GetFullName(*(UObject **)(in_ECX + 4),(ushort *)0x0);
    UObject::GetFullName(*(UObject **)(in_ECX + 8),(ushort *)0x0);
    FOutputDevice::Logf(this_00,(ushort *)GError);
  }
  else if (GLog != (undefined *)0x0) {
    ExceptionList = &local_10;
    UObject::GetFullName(*(UObject **)(in_ECX + 4),(ushort *)0x0);
    UObject::GetFullName(*(UObject **)(in_ECX + 8),(ushort *)0x0);
    FOutputDevice::Logf2(this,(EName)GLog,(ushort *)0x301);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10139892 Catch@10139892

void Catch_10139892(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101398a6 Catch@101398a6

void Catch_101398a6(void)

{
  appUnwindf((ushort *)&DAT_101d3748,L"FFrame::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139910 FUN_10139910

undefined4 FUN_10139910(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x28) = 0;
    if (param_1 != 0) {
      for (iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c); iVar2 != 0;
          iVar2 = *(int *)(iVar2 + 0x34)) {
        if (*(ushort *)(iVar2 + 0xa0) != 0xffff) {
          piVar1 = (int *)((uint)*(ushort *)(iVar2 + 0xa0) + *(int *)(iVar2 + 0x54));
          while( true ) {
            if (*piVar1 == 0) break;
            if (*piVar1 == param_1) {
              *(int *)(*(int *)(in_ECX + 0xc) + 4) = iVar2;
              *(int *)(*(int *)(in_ECX + 0xc) + 0xc) = *(int *)(iVar2 + 0x54) + piVar1[1];
              return 1;
            }
            piVar1 = piVar1 + 2;
          }
        }
      }
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
  }
  return 0;
}


// ==== 101399c3 Catch@101399c3

void Catch_101399c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101399d7 Catch@101399d7

void Catch_101399d7(void)

{
  appUnwindf((ushort *)&DAT_101d3758,L"UObject::GotoLabel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139a30 FUN_10139a30

void FUN_10139a30(int param_1,int param_2)

{
  GProperty = (UProperty *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  GPropAddr = (uchar *)(*(int *)(GProperty + 0x54) + *(int *)(param_1 + 0x10));
  GPropObject = (UObject *)0x0;
  if (param_2 != 0) {
    (**(code **)(*(int *)GProperty + 0xa8))(param_2,GPropAddr,0);
  }
  return;
}


// ==== 10139a90 FUN_10139a90

void FUN_10139a90(int param_1,int param_2)

{
  UObject *in_ECX;
  
  GProperty = (UProperty *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  GPropAddr = (uchar *)(in_ECX + *(int *)(GProperty + 0x54));
  GPropObject = in_ECX;
  if (param_2 != 0) {
    (**(code **)(*(int *)GProperty + 0xa8))(param_2,GPropAddr,0);
  }
  return;
}


// ==== 10139af0 FUN_10139af0

void FUN_10139af0(int param_1,int param_2)

{
  int in_ECX;
  
  GProperty = (UProperty *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  GPropAddr = (uchar *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x4f4) + *(int *)(GProperty + 0x54));
  GPropObject = (UObject *)0x0;
  if (param_2 != 0) {
    (**(code **)(*(int *)GProperty + 0xa8))(param_2,GPropAddr,0);
  }
  return;
}


// ==== 10139b50 FUN_10139b50

void FUN_10139b50(ushort *param_1,int param_2)

{
  byte bVar1;
  UObject *in_ECX;
  UProperty *pUVar2;
  wchar_t *pwVar3;
  int iVar4;
  FOutputDevice *this;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baa50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  GPropObject = in_ECX;
  if ((GProperty != (UProperty *)0x0) && (GPropAddr != (uchar *)0x0)) {
    this = *(FOutputDevice **)(GProperty + 0x40);
    if (((int)this <= local_18) || (pUVar2 = GProperty, local_18 < 0)) {
      pwVar3 = L"Accessed array out of bounds (%i/%i)";
      iVar4 = local_18;
      FOutputDevice::Logf(this,param_1);
      pUVar2 = GProperty;
      local_18 = thunk_FUN_101146b0(local_18,0,*(int *)(GProperty + 0x40) + -1,pwVar3,iVar4,this);
    }
    GPropAddr = GPropAddr + *(int *)(pUVar2 + 0x44) * local_18;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (param_2 != 0) {
      (**(code **)(*(int *)GProperty + 0xa4))(param_2,GPropAddr,0);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10139c57 Catch@10139c57

void Catch_10139c57(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10139c6b Catch@10139c6b

void Catch_10139c6b(void)

{
  appUnwindf((ushort *)&DAT_101d3844,L"ArrayElementCopySingleValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139c86 Catch@10139c86

void Catch_10139c86(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10139c9a Catch@10139c9a

void Catch_10139c9a(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d384c,L"UObject::execArrayElement");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10139d50 FUN_10139d50

void FUN_10139d50(int param_1)

{
  byte bVar1;
  UObject *in_ECX;
  undefined4 *unaff_retaddr;
  
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  GPropObject = in_ECX;
  if (GPropAddr != (uchar *)0x0) {
    if (unaff_retaddr == (undefined4 *)0x0) {
      GRuntimeUCFlags = GRuntimeUCFlags | 1;
      return;
    }
    *unaff_retaddr = *(undefined4 *)(GPropAddr + 4);
  }
  return;
}


// ==== 10139dc0 FUN_10139dc0

void FUN_10139dc0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  if (param_2 != 0) {
    GPropAddr = (uchar *)(piVar1[0x15] + *(int *)(param_1 + 0x10));
    GPropObject = (UObject *)0x0;
    (**(code **)(*piVar1 + 0xa8))(param_2,piVar1[0x15] + *(int *)(param_1 + 0x10),0);
  }
  return;
}


// ==== 10139e20 FUN_10139e20

void FUN_10139e20(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_400 [256];
  
  sVar2 = **(short **)(param_1 + 0xc);
  *(short **)(param_1 + 0xc) = *(short **)(param_1 + 0xc) + 1;
  if (sVar2 != -1) {
    puVar4 = local_400;
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
    (*(code *)(&GNatives)[bVar1])(param_1,local_400);
  }
  return;
}


// ==== 10139eb0 FUN_10139eb0

void FUN_10139eb0(EName param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  FOutputDevice *this;
  wchar_t *pwVar4;
  
  DAT_10283778 = DAT_10283778 + 1;
  if (1000000 < DAT_10283778) {
    pwVar4 = L"norunaway";
    puVar2 = appCmdLine();
    iVar3 = ParseParam(puVar2,(ushort *)pwVar4);
    if (iVar3 == 0) {
      FOutputDevice::Logf(this,param_1,(ushort *)0x2f9);
    }
    DAT_10283778 = 0;
  }
  uVar1 = **(ushort **)(param_1 + 0xc);
  *(ushort **)(param_1 + 0xc) = *(ushort **)(param_1 + 0xc) + 1;
  *(uint *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0x54) + (uint)uVar1;
  return;
}


// ==== 10139f40 FUN_10139f40

void FUN_10139f40(EName param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  FOutputDevice *this;
  wchar_t *pwVar5;
  
  DAT_10283778 = DAT_10283778 + 1;
  if (1000000 < DAT_10283778) {
    pwVar5 = L"norunaway";
    puVar3 = appCmdLine();
    iVar4 = ParseParam(puVar3,(ushort *)pwVar5);
    if (iVar4 == 0) {
      FOutputDevice::Logf(this,param_1,(ushort *)0x2f9);
    }
    DAT_10283778 = 0;
  }
  puVar3 = *(ushort **)(param_1 + 0xc);
  uVar1 = *puVar3;
  *(ushort **)(param_1 + 0xc) = puVar3 + 1;
  param_3 = 0;
  uVar2 = puVar3[1];
  *(int *)(param_1 + 0xc) = (int)puVar3 + 3;
  (*(code *)(&GNatives)[(byte)uVar2])(param_1,&param_3);
  if (param_1 == 0) {
    iRam0000000c = *(int *)(iRam00000004 + 0x54) + (uint)uVar1;
  }
  return;
}


// ==== 1013a000 FUN_1013a000

void FUN_1013a000(EName param_1)

{
  byte bVar1;
  int iVar2;
  EName EVar3;
  byte *pbVar4;
  FOutputDevice *this;
  int unaff_ESI;
  
  EVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0xc);
  pbVar4 = (byte *)(iVar2 + 2);
  *(byte **)(param_1 + 0xc) = pbVar4;
  param_1 = 0;
  bVar1 = *pbVar4;
  *(int *)(EVar3 + 0xc) = iVar2 + 3;
  (*(code *)(&GNatives)[bVar1])(EVar3,&param_1);
  if (unaff_ESI == 0) {
    FOutputDevice::Logf(this,EVar3,(ushort *)0x2f9);
  }
  return;
}


// ==== 1013a070 FUN_1013a070

void FUN_1013a070(EName param_1)

{
  byte bVar1;
  UProperty *pUVar2;
  uchar *this;
  FOutputDevice *this_00;
  int iVar3;
  int unaff_EDI;
  undefined4 *puVar4;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  if (GPropAddr == (uchar *)0x0) {
    FOutputDevice::Logf(this_00,param_1,(ushort *)0x301);
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
  this = GPropAddr;
  pUVar2 = GProperty;
  if ((GRuntimeUCFlags & 1) == 0) {
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,this);
  }
  else {
    GRuntimeUCFlags = GRuntimeUCFlags & 0xfffffffe;
    bVar1 = **(byte **)(param_1 + 0xc);
    *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,&stack0xfffffffc);
    iVar3 = *(int *)(this + 4);
    if (iVar3 < unaff_EDI) {
      FArray::AddZeroed((FArray *)this,*(int *)(*(int *)(pUVar2 + 0x78) + 0x44),unaff_EDI - iVar3);
      return;
    }
    if (unaff_EDI < iVar3) {
      while (iVar3 = iVar3 + -1, unaff_EDI <= iVar3) {
        (**(code **)(**(int **)(pUVar2 + 0x78) + 0xac))
                  ((*(int **)(pUVar2 + 0x78))[0x11] * iVar3 + *(int *)this);
      }
      FArray::Remove((FArray *)this,unaff_EDI,*(int *)(this + 4) - unaff_EDI,
                     *(int *)(*(int *)(pUVar2 + 0x78) + 0x44));
      return;
    }
  }
  return;
}


// ==== 1013a220 FUN_1013a220

void FUN_1013a220(int param_1)

{
  byte bVar1;
  UProperty *pUVar2;
  uchar *puVar3;
  int unaff_ESI;
  
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


// ==== 1013a2f0 FUN_1013a2f0

void FUN_1013a2f0(ushort *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (unaff_EDI == 0) {
    FOutputDevice::Logf((FOutputDevice *)0x0,param_1);
    puVar3 = *(ushort **)(param_1 + 6);
    uVar2 = *puVar3;
    *(ushort **)(param_1 + 6) = puVar3 + 1;
    bVar1 = (byte)puVar3[1];
    *(uint *)(param_1 + 6) = (int)puVar3 + uVar2 + 3;
    GPropAddr = (uchar *)0x0;
    GProperty = (UProperty *)0x0;
    GPropObject = (UObject *)0x0;
    if (param_1 != (ushort *)0x0) {
      uVar5 = bVar1 & 3;
      for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1 = param_1 + 2;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)param_1 = 0;
        param_1 = (ushort *)((int)param_1 + 1);
      }
    }
    return;
  }
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 3;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,unaff_retaddr);
  return;
}


// ==== 1013a3e0 FUN_1013a3e0

void FUN_1013a3e0(int param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = **(undefined4 **)(param_1 + 0xc);
  uVar4 = 0;
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  iVar1 = *in_ECX;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x48))(param_1,unaff_retaddr,pUVar2,uVar3,uVar4);
  return;
}


// ==== 1013a430 FUN_1013a430

void FUN_1013a430(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  (**(code **)(*in_ECX + 0x48))(param_1,param_2,uVar1);
  return;
}


// ==== 1013a460 FUN_1013a460

void FUN_1013a460(int param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = **(undefined4 **)(param_1 + 0xc);
  uVar4 = 1;
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  iVar1 = *in_ECX;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x48))(param_1,unaff_retaddr,pUVar2,uVar3,uVar4);
  return;
}


// ==== 1013a4b0 FUN_1013a4b0

void FUN_1013a4b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  UFunction *pUVar3;
  int *in_ECX;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baa60;
  local_10 = ExceptionList;
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  iVar6 = *piVar1;
  ExceptionList = &local_10;
  *(int **)(param_1 + 0xc) = piVar1 + 1;
  piVar5 = (int *)(*(int *)(iVar6 + 0x54) + (int)in_ECX);
  iVar6 = piVar1[1];
  *(int **)(param_1 + 0xc) = piVar1 + 2;
  if (*piVar5 != 0) {
    iVar2 = (**(code **)(*(int *)*piVar5 + 0x30))();
    if (iVar2 != 0) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    if (*piVar5 != 0) {
      iVar2 = *(int *)*piVar5;
      uVar7 = 0;
      iVar6 = piVar5[1];
      pUVar3 = UObject::FindFunctionChecked((UObject *)*piVar5,iVar6,0);
      pcVar4 = *(code **)(iVar2 + 0x48);
      goto LAB_1013a550;
    }
  }
  iVar2 = *in_ECX;
  uVar7 = 0;
  pUVar3 = UObject::FindFunctionChecked();
  pcVar4 = *(code **)(iVar2 + 0x48);
LAB_1013a550:
  (*pcVar4)(param_1,param_2,pUVar3,iVar6,uVar7);
  ExceptionList = local_10;
  return;
}


// ==== 1013a56d Catch@1013a56d

void Catch_1013a56d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1013a581 Catch@1013a581

void Catch_1013a581(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d3cdc,L"UObject::execDelegateFunction");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013a620 FUN_1013a620

void FUN_1013a620(int param_1,uint *param_2)

{
  uint uVar1;
  uint in_ECX;
  
  uVar1 = **(uint **)(param_1 + 0xc);
  *(uint **)(param_1 + 0xc) = *(uint **)(param_1 + 0xc) + 1;
  param_2[1] = uVar1;
  *param_2 = -(uint)(uVar1 != 0) & in_ECX;
  return;
}


// ==== 1013a67e Catch@1013a67e

void Catch_1013a67e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013a692 Catch@1013a692

void Catch_1013a692(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d3d08,L"UObject::execDelegateProperty");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013a710 FUN_1013a710

void FUN_1013a710(int param_1)

{
  byte bVar1;
  uchar *puVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baa80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  GPropAddr = (uchar *)0x0;
  GProperty = (UProperty *)0x0;
  GPropObject = (UObject *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  puVar2 = GPropAddr;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_24);
  if (puVar2 != (uchar *)0x0) {
    *(undefined4 *)(puVar2 + 4) = local_20;
    *(undefined4 *)puVar2 = local_24;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1013a7b1 Catch@1013a7b1

void Catch_1013a7b1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1013a7c5 Catch@1013a7c5

void Catch_1013a7c5(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d3d34,L"UObject::execLetDelegate");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1013a850 FUN_1013a850

void FUN_1013a850(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *param_2 = uVar1;
  return;
}


// ==== 1013a870 FUN_1013a870

void FUN_1013a870(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *param_2 = uVar1;
  return;
}


// ==== 1013a8a0 FUN_1013a8a0

void FUN_1013a8a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *param_2 = uVar1;
  return;
}


// ==== 1013a8c0 FUN_1013a8c0

void FUN_1013a8c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *param_2 = uVar1;
  return;
}


// ==== 1013a8e0 FUN_1013a8e0

void FUN_1013a8e0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int *unaff_retaddr;
  
  iVar4 = param_1;
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = *piVar2;
  *(int **)(param_1 + 0xc) = piVar2 + 1;
  param_1 = 0;
  bVar1 = *(byte *)(piVar2 + 1);
  *(int *)(iVar4 + 0xc) = (int)piVar2 + 5;
  (*(code *)(&GNatives)[bVar1])(iVar4,&param_1);
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


// ==== 1013a970 FUN_1013a970

void FUN_1013a970(uint param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uint *unaff_retaddr;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffff,(uint)in_ECX);
  *unaff_retaddr = param_1 >> 0x18;
  return;
}


// ==== 1013a9c0 FUN_1013a9c0

void FUN_1013a9c0(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uint *unaff_retaddr;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffff,(uint)in_ECX);
  *unaff_retaddr = (uint)((char)((uint)param_1 >> 0x18) != '\0');
  return;
}


// ==== 1013aa10 FUN_1013aa10

void FUN_1013aa10(uint param_1)

{
  byte bVar1;
  uint3 in_ECX;
  float *unaff_retaddr;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffff,(uint)in_ECX);
  *unaff_retaddr = (float)(param_1 >> 0x18);
  return;
}


// ==== 1013aa60 FUN_1013aa60

void FUN_1013aa60(int param_1)

{
  byte bVar1;
  undefined1 *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (char)param_1;
  return;
}


// ==== 1013aab0 FUN_1013aab0

void FUN_1013aab0(int param_1)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (uint)(param_1 != 0);
  return;
}


// ==== 1013ab00 FUN_1013ab00

void FUN_1013ab00(int param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (float)param_1;
  return;
}


// ==== 1013ab50 FUN_1013ab50

void FUN_1013ab50(int param_1)

{
  byte bVar1;
  byte *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (byte)param_1 & 1;
  return;
}


// ==== 1013aba0 FUN_1013aba0

void FUN_1013aba0(uint param_1)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = param_1 & 1;
  return;
}


// ==== 1013abf0 FUN_1013abf0

void FUN_1013abf0(uint param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (float)(param_1 & 1);
  return;
}


// ==== 1013ac50 FUN_1013ac50

void FUN_1013ac50(float param_1)

{
  byte bVar1;
  undefined1 *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (char)(int)ROUND(param_1);
  return;
}


// ==== 1013acc0 FUN_1013acc0

void FUN_1013acc0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  uVar2 = FUN_1017b700();
  *unaff_retaddr = uVar2;
  return;
}


// ==== 1013ad10 FUN_1013ad10

void FUN_1013ad10(float param_1)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (param_1 != 0.0) {
    *unaff_retaddr = 1;
    return;
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 1013ad80 FUN_1013ad80

void FUN_1013ad80(int param_1)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (uint)(param_1 != 0);
  return;
}


// ==== 1013add0 FUN_1013add0

void FUN_1013add0(int param_1)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *unaff_retaddr = (uint)(param_1 != 0);
  return;
}


// ==== 1013ae20 FUN_1013ae20

void FUN_1013ae20(int param_1)

{
  byte bVar1;
  uint *unaff_retaddr;
  
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


// ==== 1013aea0 FUN_1013aea0

void FUN_1013aea0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013af60 FUN_1013af60

void FUN_1013af60(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013b020 FUN_1013b020

void FUN_1013b020(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_retaddr;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar3 = *(ushort **)(param_1 + 0xc);
  uVar2 = *puVar3;
  *(ushort **)(param_1 + 0xc) = puVar3 + 1;
  if (&stack0x00000000 == (undefined1 *)0x4) {
    *unaff_retaddr = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar2;
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


// ==== 1013b100 FUN_1013b100

void FUN_1013b100(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013b1c0 FUN_1013b1c0

/* WARNING: Removing unreachable block (ram,0x1013b245) */

void FUN_1013b1c0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_retaddr;
  
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
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar2;
  return;
}


// ==== 1013b2a0 FUN_1013b2a0

void FUN_1013b2a0(int param_1)

{
  byte bVar1;
  uchar uVar2;
  uint3 in_ECX;
  uchar *unaff_ESI;
  char unaff_DI;
  uchar *puVar3;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b380 FUN_1013b380

void FUN_1013b380(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  byte *unaff_EBX;
  byte unaff_SI;
  byte *pbVar2;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b480 FUN_1013b480

void FUN_1013b480(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uchar *unaff_ESI;
  char unaff_DI;
  uchar *puVar2;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b560 FUN_1013b560

void FUN_1013b560(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uchar *unaff_ESI;
  char unaff_DI;
  uchar *puVar2;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b640 FUN_1013b640

void FUN_1013b640(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b6f0 FUN_1013b6f0

void FUN_1013b6f0(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b7a0 FUN_1013b7a0

void FUN_1013b7a0(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b850 FUN_1013b850

void FUN_1013b850(int param_1)

{
  byte bVar1;
  uint3 in_ECX;
  uchar *puVar2;
  uchar *unaff_retaddr;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  uStack_4 = (uint)in_ECX;
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


// ==== 1013b900 FUN_1013b900

void FUN_1013b900(int param_1)

{
  byte bVar1;
  uint *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = ~(uint)&local_4;
  return;
}


// ==== 1013b980 FUN_1013b980

void FUN_1013b980(int param_1)

{
  byte bVar1;
  uint *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (uint)&local_4 >> ((byte)&local_4 & 0x1f);
  return;
}


// ==== 1013ba30 FUN_1013ba30

void FUN_1013ba30(int param_1)

{
  byte bVar1;
  int *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -(int)&local_4;
  return;
}


// ==== 1013bab0 FUN_1013bab0

void FUN_1013bab0(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4 * (int)&local_4;
  return;
}


// ==== 1013bb60 FUN_1013bb60

void FUN_1013bb60(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  int *local_4;
  
  local_4 = (int *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  local_4 = (int *)0x0;
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
    *local_4 = param_1;
    return;
  }
  *unaff_ESI = (int)&local_4 / (int)&local_4;
  return;
}


// ==== 1013bc40 FUN_1013bc40

void FUN_1013bc40(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  
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


// ==== 1013bcf0 FUN_1013bcf0

void FUN_1013bcf0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013bda0 FUN_1013bda0

void FUN_1013bda0(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4 << ((byte)&local_4 & 0x1f);
  return;
}


// ==== 1013be50 FUN_1013be50

void FUN_1013be50(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4 >> ((byte)&local_4 & 0x1f);
  return;
}


// ==== 1013bf00 FUN_1013bf00

void FUN_1013bf00(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013bfb0 FUN_1013bfb0

void FUN_1013bfb0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013c060 FUN_1013c060

void FUN_1013c060(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013c110 FUN_1013c110

void FUN_1013c110(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013c1c0 FUN_1013c1c0

void FUN_1013c1c0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013c270 FUN_1013c270

void FUN_1013c270(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013c320 FUN_1013c320

void FUN_1013c320(int param_1)

{
  byte bVar1;
  undefined4 unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *(undefined4 **)unaff_ESI = &local_4;
  return;
}


// ==== 1013c3d0 FUN_1013c3d0

void FUN_1013c3d0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013c480 FUN_1013c480

void FUN_1013c480(int param_1)

{
  byte bVar1;
  undefined4 unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *(undefined4 **)unaff_ESI = &local_4;
  return;
}


// ==== 1013c530 FUN_1013c530

void FUN_1013c530(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  uchar *puVar3;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar3 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar3 = &stack0xfffffff4;
  }
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 1013c620 FUN_1013c620

void FUN_1013c620(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  float unaff_EDI;
  uchar *puVar3;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar3 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar3 = &stack0xfffffff4;
  }
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 1013c740 FUN_1013c740

void FUN_1013c740(int param_1)

{
  byte bVar1;
  int *unaff_EBX;
  int *piVar2;
  int unaff_ESI;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  piVar2 = (int *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    piVar2 = (int *)&stack0xfffffff4;
  }
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = *piVar2 + unaff_ESI;
  *unaff_EBX = *piVar2;
  return;
}


// ==== 1013c830 FUN_1013c830

void FUN_1013c830(int param_1)

{
  byte bVar1;
  int *unaff_EBX;
  int *piVar2;
  int unaff_ESI;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  piVar2 = (int *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    piVar2 = (int *)&stack0xfffffff4;
  }
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *piVar2 = *piVar2 - unaff_ESI;
  *unaff_EBX = *piVar2;
  return;
}


// ==== 1013c920 FUN_1013c920

void FUN_1013c920(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 1013c9d0 FUN_1013c9d0

void FUN_1013c9d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 1013ca80 FUN_1013ca80

void FUN_1013ca80(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 1013cb30 FUN_1013cb30

void FUN_1013cb30(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *unaff_retaddr;
  undefined4 local_4;
  
  GPropAddr = (uchar *)0x0;
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 1013cbe0 FUN_1013cbe0

void FUN_1013cbe0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (0 < (int)&local_4) {
    iVar2 = appRand();
    *unaff_retaddr = iVar2 % (int)&local_4;
    return;
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 1013cc70 FUN_1013cc70

/* WARNING: Removing unreachable block (ram,0x1013ccf7) */

void FUN_1013cc70(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4;
  return;
}


// ==== 1013cd30 FUN_1013cd30

/* WARNING: Removing unreachable block (ram,0x1013cdb7) */

void FUN_1013cd30(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4;
  return;
}


// ==== 1013cdf0 FUN_1013cdf0

/* WARNING: Type propagation algorithm not settling */

void FUN_1013cdf0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iStack_14;
  int *piStack_10;
  int local_8 [2];
  
  piStack_10 = local_8;
  local_8[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  iStack_14 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  local_8[1] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  iVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_8 + 1);
  iStack_14 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((int)&iStack_14 < iStack_14) {
    *piStack_10 = iStack_14;
    return;
  }
  if ((int)&iStack_14 < iVar2) {
    *piStack_10 = (int)&iStack_14;
    return;
  }
  *piStack_10 = iVar2;
  return;
}


// ==== 1013cf00 FUN_1013cf00

void FUN_1013cf00(int param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -(float)&local_4;
  return;
}


// ==== 1013cf70 FUN_1013cf70

void FUN_1013cf70(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  double dVar2;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appPow((double)(float)&local_4,(double)(float)&local_4);
  *unaff_ESI = (float)dVar2;
  return;
}


// ==== 1013d030 FUN_1013d030

void FUN_1013d030(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (float)&local_4 * (float)&local_4;
  return;
}


// ==== 1013d0d0 FUN_1013d0d0

void FUN_1013d0d0(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((float)&local_4 == 0.0) {
    *unaff_ESI = (float)&local_4;
    return;
  }
  *unaff_ESI = (float)&local_4 / (float)&local_4;
  return;
}


// ==== 1013d190 FUN_1013d190

void FUN_1013d190(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  double dVar2;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appFmod((double)(float)&local_4,(double)(float)&local_4);
  *unaff_ESI = (float)dVar2;
  return;
}


// ==== 1013d250 FUN_1013d250

void FUN_1013d250(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (float)&local_4 + (float)&local_4;
  return;
}


// ==== 1013d2f0 FUN_1013d2f0

void FUN_1013d2f0(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (float)&local_4 - (float)&local_4;
  return;
}


// ==== 1013d390 FUN_1013d390

/* WARNING: Removing unreachable block (ram,0x1013d40e) */

void FUN_1013d390(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013d450 FUN_1013d450

/* WARNING: Removing unreachable block (ram,0x1013d4ce) */

void FUN_1013d450(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013d510 FUN_1013d510

/* WARNING: Removing unreachable block (ram,0x1013d59d) */

void FUN_1013d510(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013d5d0 FUN_1013d5d0

/* WARNING: Removing unreachable block (ram,0x1013d65d) */

void FUN_1013d5d0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013d690 FUN_1013d690

/* WARNING: Removing unreachable block (ram,0x1013d71d) */

void FUN_1013d690(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013d750 FUN_1013d750

/* WARNING: Removing unreachable block (ram,0x1013d7ce) */

void FUN_1013d750(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 1013d810 FUN_1013d810

void FUN_1013d810(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar2 = (float)&local_4 - (float)&local_4;
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


// ==== 1013d900 FUN_1013d900

void FUN_1013d900(int param_1)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *local_8;
  undefined4 uStack_4;
  
  local_8 = (float *)0x0;
  GPropAddr = (uchar *)0x0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&local_8);
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
  *local_8 = fVar1 * unaff_ESI;
  return;
}


// ==== 1013d9f0 FUN_1013d9f0

void FUN_1013d9f0(int param_1)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *local_8;
  undefined4 uStack_4;
  
  local_8 = (float *)0x0;
  GPropAddr = (uchar *)0x0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&local_8);
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
  *local_8 = fVar1 / unaff_ESI;
  return;
}


// ==== 1013dae0 FUN_1013dae0

void FUN_1013dae0(int param_1)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *local_8;
  undefined4 uStack_4;
  
  local_8 = (float *)0x0;
  GPropAddr = (uchar *)0x0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&local_8);
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
  *local_8 = fVar1 + unaff_ESI;
  return;
}


// ==== 1013dbd0 FUN_1013dbd0

void FUN_1013dbd0(int param_1)

{
  float fVar1;
  byte bVar2;
  float unaff_ESI;
  float *pfVar3;
  float *local_8;
  undefined4 uStack_4;
  
  local_8 = (float *)0x0;
  GPropAddr = (uchar *)0x0;
  bVar2 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar2])(param_1,&local_8);
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
  *local_8 = fVar1 - unaff_ESI;
  return;
}


// ==== 1013dcc0 FUN_1013dcc0

void FUN_1013dcc0(int param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (0.0 <= (float)&local_4) {
    *unaff_retaddr = (float)&local_4;
    return;
  }
  *unaff_retaddr = -(float)&local_4;
  return;
}


// ==== 1013dd60 FUN_1013dd60

void FUN_1013dd60(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSin((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013dde0 FUN_1013dde0

void FUN_1013dde0(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appAsin((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013de60 FUN_1013de60

void FUN_1013de60(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appCos((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013dee0 FUN_1013dee0

void FUN_1013dee0(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appAcos((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013df60 FUN_1013df60

void FUN_1013df60(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appTan((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013dfe0 FUN_1013dfe0

void FUN_1013dfe0(int param_1)

{
  byte bVar1;
  float *unaff_ESI;
  double dVar2;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appAtan2((double)(float)&local_4,(double)(float)&local_4);
  *unaff_ESI = (float)dVar2;
  return;
}


// ==== 1013e0a0 FUN_1013e0a0

void FUN_1013e0a0(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appExp((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013e120 FUN_1013e120

void FUN_1013e120(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appLoge((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013e1a0 FUN_1013e1a0

void FUN_1013e1a0(int param_1)

{
  byte bVar1;
  double dVar2;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSqrt((double)(float)&local_4);
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013e220 FUN_1013e220

void FUN_1013e220(int param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = (float)&local_4 * (float)&local_4;
  return;
}


// ==== 1013e290 FUN_1013e290

void FUN_1013e290(int param_1,float *param_2)

{
  float fVar1;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar1 = appFrand();
  *param_2 = fVar1;
  return;
}


// ==== 1013e2d0 FUN_1013e2d0

/* WARNING: Removing unreachable block (ram,0x1013e362) */

void FUN_1013e2d0(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4;
  return;
}


// ==== 1013e3a0 FUN_1013e3a0

/* WARNING: Removing unreachable block (ram,0x1013e432) */

void FUN_1013e3a0(int param_1)

{
  byte bVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_ESI = (int)&local_4;
  return;
}


// ==== 1013e470 FUN_1013e470

/* WARNING: Type propagation algorithm not settling */

void FUN_1013e470(float param_1)

{
  byte bVar1;
  float fVar2;
  float fStack_14;
  float *pfStack_10;
  float local_8 [2];
  
  pfStack_10 = local_8;
  local_8[0] = 0.0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  fStack_14 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  local_8[1] = 0.0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  fVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_8 + 1);
  fStack_14 = 0.0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((float)&fStack_14 < fStack_14) {
    *pfStack_10 = fStack_14;
    return;
  }
  if ((float)&fStack_14 < fVar2) {
    *pfStack_10 = (float)&fStack_14;
    return;
  }
  *pfStack_10 = fVar2;
  return;
}


// ==== 1013e5b0 FUN_1013e5b0

void FUN_1013e5b0(float param_1)

{
  byte bVar1;
  float fVar2;
  float *pfStack_10;
  float local_4;
  
  local_4 = 0.0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  pfStack_10 = &local_4;
  (*(code *)(&GNatives)[bVar1])();
  pfStack_10 = (float *)0x0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  fVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,&pfStack_10);
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_10 = (float)&stack0xfffffff4 + fVar2 * (param_1 - (float)&stack0xfffffff4);
  return;
}


// ==== 1013e690 FUN_1013e690

void FUN_1013e690(int param_1)

{
  byte bVar1;
  
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


// ==== 1013e790 FUN_1013e790

void FUN_1013e790(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  *param_2 = uVar1;
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  param_2[1] = uVar1;
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = *(undefined4 **)(param_1 + 0xc) + 1;
  param_2[2] = uVar1;
  return;
}


// ==== 1013e7e0 FUN_1013e7e0

void FUN_1013e7e0(float param_1)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  float local_c [3];
  
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 0.0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (((param_1 == 0.0) && ((float)local_c == 0.0)) && (local_c[0] == 0.0)) {
    *unaff_retaddr = 0;
    return;
  }
  *unaff_retaddr = 1;
  return;
}


// ==== 1013e890 FUN_1013e890

void FUN_1013e890(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *puStack_4;
  
  puStack_1c = (undefined1 *)&local_18;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  iStack_20 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  puVar2 = (undefined4 *)FVector::Rotation((FVector *)&iStack_20);
  *puStack_4 = *puVar2;
  puStack_4[1] = puVar2[1];
  puStack_4[2] = puVar2[2];
  return;
}


// ==== 1013e900 FUN_1013e900

void FUN_1013e900(uint param_1)

{
  byte bVar1;
  undefined4 *unaff_retaddr;
  uint local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if ((((param_1 & 0xffff) == 0) && (((uint)local_c & 0xffff) == 0)) && ((local_c[0] & 0xffff) == 0)
     ) {
    *unaff_retaddr = 0;
    return;
  }
  *unaff_retaddr = 1;
  return;
}


// ==== 1013e9a0 FUN_1013e9a0

void FUN_1013e9a0(int param_1)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined4 local_6c;
  undefined4 local_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  FCoords aFStack_38 [56];
  
  local_6c = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_6c);
  puVar4 = &DAT_1023ff60;
  pFVar2 = aFStack_38;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar2 = pFVar2 + 4;
  }
  pFVar2 = FCoords::operator/=(aFStack_38,(FRotator *)&stack0xffffff8c);
  puVar4 = local_68;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pFVar2;
    pFVar2 = pFVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *unaff_retaddr = local_68[3];
  unaff_retaddr[1] = uStack_58;
  unaff_retaddr[2] = uStack_54;
  return;
}


// ==== 1013ea40 FUN_1013ea40

void FUN_1013ea40(int param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  float fStack_14;
  float fStack_10;
  float local_c [3];
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -fStack_14;
  unaff_retaddr[1] = -fStack_10;
  unaff_retaddr[2] = -local_c[0];
  return;
}


// ==== 1013eae0 FUN_1013eae0

void FUN_1013eae0(int param_1)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_18;
  float fStack_14;
  float local_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_c);
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = local_c * unaff_ESI;
  pfStack_8[1] = fStack_18 * local_c;
  pfStack_8[2] = local_c * fStack_14;
  return;
}


// ==== 1013ebc0 FUN_1013ebc0

void FUN_1013ebc0(int param_1)

{
  byte bVar1;
  float local_1c;
  float fStack_18;
  float afStack_14 [3];
  float *pfStack_8;
  
  local_1c = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_1c);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = (float)afStack_14 * local_1c;
  pfStack_8[1] = fStack_18 * (float)afStack_14;
  pfStack_8[2] = (float)afStack_14 * afStack_14[0];
  return;
}


// ==== 1013eca0 FUN_1013eca0

void FUN_1013eca0(int param_1)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float afStack_14 [3];
  float *pfStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_14);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = fStack_1c * unaff_ESI;
  pfStack_8[1] = fStack_24 * local_18;
  pfStack_8[2] = fStack_20 * afStack_14[0];
  return;
}


// ==== 1013ed70 FUN_1013ed70

void FUN_1013ed70(float param_1)

{
  byte bVar1;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  float unaff_ESI;
  undefined1 local_18 [12];
  float fStack_c;
  float *pfStack_8;
  float *pfStack_4;
  
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  pfStack_4 = (float *)0x0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  this = extraout_ECX;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
    this = extraout_ECX_00;
  }
  if (fStack_c != 0.0) {
    fStack_c = 1.0 / fStack_c;
    *pfStack_8 = fStack_c * (float)&pfStack_4;
    pfStack_8[1] = fStack_c * param_1;
    pfStack_8[2] = fStack_c * (float)local_18;
    return;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(ushort *)GLog);
  }
  *pfStack_4 = param_1;
  pfStack_4[1] = (float)local_18;
  pfStack_4[2] = unaff_ESI;
  return;
}


// ==== 1013eec0 FUN_1013eec0

void FUN_1013eec0(int param_1)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float afStack_14 [3];
  float *pfStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_14);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = fStack_1c + unaff_ESI;
  pfStack_8[1] = fStack_24 + local_18;
  pfStack_8[2] = fStack_20 + afStack_14[0];
  return;
}


// ==== 1013ef90 FUN_1013ef90

void FUN_1013ef90(int param_1)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float afStack_14 [3];
  float *pfStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,afStack_14);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = unaff_ESI - fStack_1c;
  pfStack_8[1] = fStack_24 - local_18;
  pfStack_8[2] = fStack_20 - afStack_14[0];
  return;
}


// ==== 1013f060 FUN_1013f060

void FUN_1013f060(int param_1)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  int iStack_94;
  undefined1 *puStack_90;
  FRotator aFStack_7c [4];
  undefined1 local_78 [4];
  undefined1 auStack_74 [4];
  FCoords aFStack_70 [48];
  undefined4 auStack_40 [14];
  int *piStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_90 = local_78;
  iStack_94 = param_1;
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
  thunk_FUN_1010f5b0(auStack_40,&stack0xffffff78,&iStack_94);
  *piStack_8 = iStack_94;
  piStack_8[1] = (int)puStack_90;
  piStack_8[2] = unaff_EDI;
  return;
}


// ==== 1013f170 FUN_1013f170

void FUN_1013f170(int param_1)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  int iStack_94;
  undefined1 *puStack_90;
  FRotator aFStack_7c [4];
  undefined1 local_78 [4];
  undefined1 auStack_74 [4];
  FCoords aFStack_70 [48];
  undefined4 auStack_40 [14];
  int *piStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_90 = local_78;
  iStack_94 = param_1;
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
  thunk_FUN_1010f5b0(auStack_40,&stack0xffffff78,&iStack_94);
  *piStack_8 = iStack_94;
  piStack_8[1] = (int)puStack_90;
  piStack_8[2] = unaff_EDI;
  return;
}


// ==== 1013f280 FUN_1013f280

void FUN_1013f280(float param_1)

{
  byte bVar1;
  float unaff_ESI;
  float local_18;
  float afStack_14 [3];
  undefined4 *puStack_8;
  
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((unaff_ESI == (float)afStack_14) && (local_18 == param_1)) &&
     (afStack_14[0] == (float)&local_18)) {
    *puStack_8 = 1;
    return;
  }
  *puStack_8 = 0;
  return;
}


// ==== 1013f370 FUN_1013f370

void FUN_1013f370(float param_1)

{
  byte bVar1;
  float unaff_ESI;
  float local_18;
  float afStack_14 [3];
  undefined4 *puStack_8;
  
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((unaff_ESI == (float)afStack_14) && (local_18 == param_1)) &&
     (afStack_14[0] == (float)&local_18)) {
    *puStack_8 = 0;
    return;
  }
  *puStack_8 = 1;
  return;
}


// ==== 1013f460 FUN_1013f460

void FUN_1013f460(float param_1)

{
  byte bVar1;
  float unaff_ESI;
  float local_18;
  float afStack_14 [3];
  float *pfStack_8;
  
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfStack_8 = (float)&local_18 * afStack_14[0] + unaff_ESI * (float)afStack_14 + param_1 * local_18
  ;
  return;
}


// ==== 1013f510 FUN_1013f510

void FUN_1013f510(int param_1)

{
  byte bVar1;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [4];
  float *pfStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_c);
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


// ==== 1013f610 FUN_1013f610

void FUN_1013f610(int param_1)

{
  byte bVar1;
  float *pfVar2;
  float local_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_c);
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
  *pfVar2 = local_c * *pfVar2;
  pfVar2[1] = local_c * pfVar2[1];
  pfVar2[2] = local_c * pfVar2[2];
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 1013f720 FUN_1013f720

void FUN_1013f720(float param_1)

{
  byte bVar1;
  float unaff_EDI;
  float *pfVar2;
  float afStack_14 [2];
  undefined1 local_c [4];
  float *pfStack_8;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = afStack_14;
  }
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfVar2 = *pfVar2 * param_1;
  pfVar2[1] = (float)local_c * pfVar2[1];
  pfVar2[2] = pfVar2[2] * unaff_EDI;
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 1013f820 FUN_1013f820

void FUN_1013f820(int param_1)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float local_c;
  float *pfStack_8;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_c);
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
  fVar2 = 1.0 / local_c;
  *pfVar3 = fVar2 * *pfVar3;
  pfVar3[1] = fVar2 * pfVar3[1];
  pfVar3[2] = fVar2 * pfVar3[2];
  *pfStack_8 = *pfVar3;
  pfStack_8[1] = pfVar3[1];
  pfStack_8[2] = pfVar3[2];
  return;
}


// ==== 1013f940 FUN_1013f940

void FUN_1013f940(float param_1)

{
  byte bVar1;
  float unaff_EDI;
  float *pfVar2;
  float afStack_14 [2];
  undefined1 local_c [4];
  float *pfStack_8;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = afStack_14;
  }
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfVar2 = *pfVar2 + param_1;
  pfVar2[1] = (float)local_c + pfVar2[1];
  pfVar2[2] = pfVar2[2] + unaff_EDI;
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 1013fa40 FUN_1013fa40

void FUN_1013fa40(float param_1)

{
  byte bVar1;
  float unaff_EDI;
  float *pfVar2;
  float afStack_14 [2];
  undefined1 local_c [4];
  float *pfStack_8;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = afStack_14;
  }
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffe0);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *pfVar2 = *pfVar2 - param_1;
  pfVar2[1] = pfVar2[1] - (float)local_c;
  pfVar2[2] = pfVar2[2] - unaff_EDI;
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  pfStack_8[2] = pfVar2[2];
  return;
}


// ==== 1013fb40 FUN_1013fb40

void FUN_1013fb40(int param_1)

{
  byte bVar1;
  float unaff_ESI;
  double dVar2;
  float *unaff_retaddr;
  float local_c [3];
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSqrt((double)(local_c[0] * local_c[0] +
                          (float)local_c * (float)local_c + unaff_ESI * unaff_ESI));
  *unaff_retaddr = (float)dVar2;
  return;
}


// ==== 1013fbe0 FUN_1013fbe0

void FUN_1013fbe0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puStack_20;
  undefined1 local_18 [20];
  undefined4 *puStack_4;
  
  puStack_20 = local_18;
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


// ==== 1013fc70 FUN_1013fc70

void FUN_1013fc70(int param_1)

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
  undefined1 local_18 [24];
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_18);
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


// ==== 1013fec0 FUN_1013fec0

void FUN_1013fec0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar1 = (undefined4 *)thunk_FUN_10139700(local_c);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}


// ==== 1013ff20 FUN_1013ff20

void FUN_1013ff20(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  int *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 10140000 FUN_10140000

void FUN_10140000(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 **ppuStack_34;
  int iStack_30;
  float **ppfStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *local_c [3];
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppfStack_2c = local_c;
  iStack_30 = param_1;
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
  *local_c[0] = fStack_20 - fVar4 * *pfVar5 * 2.0;
  local_c[0][1] = fStack_1c - fVar2 * 2.0 * fVar4;
  local_c[0][2] = fStack_18 - fVar4 * fVar3 * 2.0;
  return;
}


// ==== 10140190 FUN_10140190

void FUN_10140190(int param_1)

{
  byte bVar1;
  undefined1 **unaff_ESI;
  int local_18;
  undefined1 *apuStack_14 [3];
  undefined4 *puStack_8;
  
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
  if (((apuStack_14 == unaff_ESI) && (param_1 == local_18)) && (&local_18 == (int *)apuStack_14[0]))
  {
    *puStack_8 = 1;
    return;
  }
  *puStack_8 = 0;
  return;
}


// ==== 10140260 FUN_10140260

void FUN_10140260(int param_1)

{
  byte bVar1;
  undefined1 **unaff_ESI;
  int local_18;
  undefined1 *apuStack_14 [3];
  undefined4 *puStack_8;
  
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
  if (((apuStack_14 == unaff_ESI) && (param_1 == local_18)) && (&local_18 == (int *)apuStack_14[0]))
  {
    *puStack_8 = 0;
    return;
  }
  *puStack_8 = 1;
  return;
}


// ==== 10140330 FUN_10140330

void FUN_10140330(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_c [4];
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_c);
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


// ==== 10140410 FUN_10140410

void FUN_10140410(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10 [2];
  undefined4 *puStack_8;
  
  local_10[0] = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_10);
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


// ==== 101404f0 FUN_101404f0

void FUN_101404f0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  float local_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  this = extraout_ECX;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
    this = extraout_ECX_00;
  }
  if (local_c != 0.0) {
    local_c = 1.0 / local_c;
    iVar2 = FUN_1017b700();
    iVar3 = FUN_1017b700();
    iVar4 = FUN_1017b700();
    *piStack_8 = iVar2;
    piStack_8[1] = iVar3;
    piStack_8[2] = iVar4;
    return;
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(ushort *)GLog);
  }
  *piStack_8 = (int)&uStack_4;
  piStack_8[1] = param_1;
  piStack_8[2] = (int)&local_c;
  return;
}


// ==== 10140640 FUN_10140640

void FUN_10140640(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_c);
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
  iVar4 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,puVar5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar2 = FUN_1017b700(iVar4,puVar5,local_c);
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


// ==== 10140760 FUN_10140760

void FUN_10140760(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float local_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_c);
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
  iVar4 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,puVar5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar2 = FUN_1017b700(iVar4,puVar5,1.0 / local_c);
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


// ==== 10140890 FUN_10140890

void FUN_10140890(int param_1)

{
  byte bVar1;
  int unaff_ESI;
  undefined1 *puStack_20;
  int iStack_18;
  int iStack_14;
  undefined1 local_c [4];
  int *piStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_20 = local_c;
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
  piStack_8[1] = param_1 + iStack_18;
  piStack_8[2] = (int)(puStack_20 + iStack_14);
  return;
}


// ==== 10140950 FUN_10140950

void FUN_10140950(int param_1)

{
  byte bVar1;
  int unaff_ESI;
  int local_18;
  int aiStack_14 [3];
  int *piStack_8;
  
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
  piStack_8[1] = param_1 - local_18;
  piStack_8[2] = (int)aiStack_14 + (-4 - aiStack_14[0]);
  return;
}


// ==== 10140a00 FUN_10140a00

void FUN_10140a00(int param_1)

{
  byte bVar1;
  int unaff_EDI;
  int *piVar2;
  int aiStack_14 [2];
  undefined1 local_c [4];
  int *piStack_8;
  
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
  *piVar2 = *piVar2 + param_1;
  piVar2[1] = (int)(local_c + piVar2[1]);
  piVar2[2] = piVar2[2] + unaff_EDI;
  *piStack_8 = *piVar2;
  piStack_8[1] = piVar2[1];
  piStack_8[2] = piVar2[2];
  return;
}


// ==== 10140b00 FUN_10140b00

void FUN_10140b00(int param_1)

{
  byte bVar1;
  int unaff_EDI;
  int *piVar2;
  int aiStack_14 [2];
  undefined1 local_c [4];
  int *piStack_8;
  
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
  *piVar2 = *piVar2 - param_1;
  piVar2[1] = piVar2[1] - (int)local_c;
  piVar2[2] = piVar2[2] - unaff_EDI;
  *piStack_8 = *piVar2;
  piStack_8[1] = piVar2[1];
  piStack_8[2] = piVar2[2];
  return;
}


// ==== 10140c00 FUN_10140c00

void FUN_10140c00(int *param_1)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uchar *puVar4;
  int unaff_EBP;
  uchar *puVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  int **ppiVar7;
  int *apiStack_b0 [3];
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
  undefined1 local_54 [4];
  FCoords aFStack_50 [4];
  uchar auStack_4c [8];
  int aiStack_44 [17];
  
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  apiStack_b0[2] = (int *)local_54;
  apiStack_b0[1] = param_1;
  apiStack_b0[0] = (int *)0x10140c2f;
  (*(code *)(&GNatives)[bVar1])();
  GPropAddr = (uchar *)0x0;
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  apiStack_b0[0] = aiStack_44;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar8 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar8 = auStack_4c;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_58);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar5 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar5 = auStack_60;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_78);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar4 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar4 = auStack_80;
  }
  param_1[3] = param_1[3] + 1;
  if (*(char *)param_1[3] == 'B') {
    param_1[3] = (int)((char *)param_1[3] + 1);
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
  ppiVar7 = apiStack_b0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar7 = *(int **)pFVar2;
    pFVar2 = pFVar2 + 4;
    ppiVar7 = ppiVar7 + 1;
  }
  *param_1 = (int)puVar8;
  param_1[1] = unaff_ESI;
  param_1[2] = unaff_EBP;
  *(undefined4 *)puVar5 = unaff_EBX;
  *(undefined4 *)(puVar5 + 4) = uStack_94;
  *(undefined4 *)(puVar5 + 8) = uStack_90;
  *(undefined4 *)puVar4 = uStack_8c;
  *(undefined4 *)(puVar4 + 4) = uStack_88;
  *(undefined4 *)(puVar4 + 8) = uStack_84;
  return;
}


// ==== 10140e20 FUN_10140e20

void FUN_10140e20(int *param_1)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uchar *puVar4;
  int unaff_EBP;
  uchar *puVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  int **ppiVar7;
  int *apiStack_b0 [3];
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
  undefined1 local_54 [4];
  FCoords aFStack_50 [4];
  uchar auStack_4c [8];
  int aiStack_44 [17];
  
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  apiStack_b0[2] = (int *)local_54;
  apiStack_b0[1] = param_1;
  apiStack_b0[0] = (int *)0x10140e4f;
  (*(code *)(&GNatives)[bVar1])();
  GPropAddr = (uchar *)0x0;
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  apiStack_b0[0] = aiStack_44;
  (*(code *)(&GNatives)[bVar1])();
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar8 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar8 = auStack_4c;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_58);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar5 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar5 = auStack_60;
  }
  GPropAddr = (uchar *)0x0;
  bVar1 = *(byte *)param_1[3];
  param_1[3] = (int)((byte *)param_1[3] + 1);
  (*(code *)(&GNatives)[bVar1])(param_1,auStack_78);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  puVar4 = GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    puVar4 = auStack_80;
  }
  param_1[3] = param_1[3] + 1;
  if (*(char *)param_1[3] == 'B') {
    param_1[3] = (int)((char *)param_1[3] + 1);
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
  ppiVar7 = apiStack_b0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar7 = *(int **)pFVar2;
    pFVar2 = pFVar2 + 4;
    ppiVar7 = ppiVar7 + 1;
  }
  *param_1 = (int)puVar8;
  param_1[1] = unaff_ESI;
  param_1[2] = unaff_EBP;
  *(undefined4 *)puVar5 = unaff_EBX;
  *(undefined4 *)(puVar5 + 4) = uStack_94;
  *(undefined4 *)(puVar5 + 8) = uStack_90;
  *(undefined4 *)puVar4 = uStack_8c;
  *(undefined4 *)(puVar4 + 4) = uStack_88;
  *(undefined4 *)(puVar4 + 8) = uStack_84;
  return;
}


// ==== 10141040 FUN_10141040

void FUN_10141040(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_14;
  
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
  iStack_3c = param_1;
  uStack_40 = 0;
  uStack_24 = local_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  puStack_38 = &local_54;
  puVar2 = (undefined4 *)FCoords::OrthoRotation((FCoords *)&uStack_48);
  *puStack_14 = *puVar2;
  puStack_14[1] = puVar2[1];
  puStack_14[2] = puVar2[2];
  return;
}


// ==== 101411a0 FUN_101411a0

void FUN_101411a0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puStack_20;
  undefined1 local_18 [20];
  undefined4 *puStack_4;
  
  puStack_20 = local_18;
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


// ==== 10141230 FUN_10141230

void FUN_10141230(int param_1)

{
  byte bVar1;
  FCoords *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined1 local_6c [4];
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  FCoords aFStack_38 [56];
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_6c);
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


// ==== 101412f0 FUN_101412f0

void FUN_101412f0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint unaff_ESI;
  uint uVar3;
  uint *unaff_retaddr;
  uint local_c [3];
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar3 = (uint)local_c & 0xffff;
  if (0x7fff < uVar3) {
    uVar3 = uVar3 - 0x10000;
  }
  local_c[0] = local_c[0] & 0xffff;
  if (0x7fff < local_c[0]) {
    local_c[0] = local_c[0] - 0x10000;
  }
  uVar2 = unaff_ESI & 0xffff;
  if (0x7fff < uVar2) {
    uVar2 = uVar2 - 0x10000;
  }
  *unaff_retaddr = uVar3;
  unaff_retaddr[1] = uVar2;
  unaff_retaddr[2] = local_c[0];
  return;
}


// ==== 101413c0 FUN_101413c0

void FUN_101413c0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  uVar3 = (uint)&local_4 & 0xffff;
  uVar4 = (uint)&local_4 & 0xffff;
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


// ==== 101414b0 FUN_101414b0

void FUN_101414b0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  FQuat aFStack_30 [16];
  FQuat local_20 [20];
  undefined4 *puStack_c;
  
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
  puVar2 = (undefined4 *)FQuat::operator*(aFStack_30,local_20);
  *puStack_c = *puVar2;
  puStack_c[1] = puVar2[1];
  puStack_c[2] = puVar2[2];
  puStack_c[3] = puVar2[3];
  return;
}


// ==== 10141570 FUN_10141570

void FUN_10141570(int param_1)

{
  byte bVar1;
  float *unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  *unaff_retaddr = -fStack_18;
  unaff_retaddr[1] = -fStack_14;
  unaff_retaddr[2] = -local_10;
  unaff_retaddr[3] = fStack_c;
  return;
}


// ==== 10141630 FUN_10141630

void FUN_10141630(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined1 *puStack_30;
  FQuat aFStack_20 [8];
  undefined4 *puStack_18;
  undefined1 local_10 [16];
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_30 = local_10;
  iVar4 = param_1;
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
  puVar2 = (undefined4 *)FQuat::RotateVector(aFStack_20,&stack0xffffffd4,ppuVar3,iVar4,puStack_30);
  *puStack_18 = *puVar2;
  puStack_18[1] = puVar2[1];
  puStack_18[2] = puVar2[2];
  return;
}


// ==== 10141700 FUN_10141700

void FUN_10141700(int param_1)

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
  float local_1c;
  float fStack_18;
  float fStack_c;
  float *pfStack_8;
  
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_1c);
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
  local_1c = fVar4 * fStack_c;
  fStack_18 = fStack_c * fVar2;
  fVar2 = fVar5 * fStack_20;
  fVar3 = local_1c * fVar5;
  fVar5 = fVar5 * fStack_18;
  dVar6 = appCos(dVar6);
  *pfStack_8 = fVar2;
  pfStack_8[1] = fVar3;
  pfStack_8[2] = fVar5;
  pfStack_8[3] = (float)dVar6;
  return;
}


// ==== 101419b0 FUN_101419b0

void FUN_101419b0(float param_1)

{
  byte bVar1;
  float unaff_ESI;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FVector aFStack_20 [16];
  undefined1 local_10 [4];
  float *pfStack_c;
  undefined4 uStack_4;
  
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_4 = 0;
  bVar1 = **(byte **)((int)param_1 + 0xc);
  *(byte **)((int)param_1 + 0xc) = *(byte **)((int)param_1 + 0xc) + 1;
  fVar3 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_4);
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  if (**(char **)((int)param_1 + 0xc) == 'B') {
    *(char **)((int)param_1 + 0xc) = *(char **)((int)param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  dVar2 = appSin((double)((float)pfStack_c * 0.5));
  fVar4 = (float)dVar2;
  dVar2 = appCos((double)((float)pfStack_c * 0.5));
  fVar5 = (float)dVar2;
  FVector::SafeNormal(aFStack_20);
  *pfStack_c = fVar3 * fVar5;
  pfStack_c[1] = (float)local_10 * fVar3;
  pfStack_c[2] = fVar3 * unaff_ESI;
  pfStack_c[3] = fVar4;
  return;
}


// ==== 10141af0 FUN_10141af0

void FUN_10141af0(int param_1)

{
  byte bVar1;
  int iVar2;
  FArray *unaff_retaddr;
  uint local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  local_4 = (uint)&local_4 & 0xffff;
  if (*(uint **)unaff_retaddr != &local_4) {
    if ((short)&local_4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen((ushort *)&local_4);
      iVar2 = iVar2 + 1;
    }
    *(int *)(unaff_retaddr + 8) = iVar2;
    *(int *)(unaff_retaddr + 4) = iVar2;
    FArray::Realloc(unaff_retaddr,2);
    if (*(int *)(unaff_retaddr + 4) != 0) {
      _memcpy(*(void **)unaff_retaddr,&local_4,*(int *)(unaff_retaddr + 4) * 2);
    }
  }
  return;
}


// ==== 10141bd0 FUN_10141bd0

void FUN_10141bd0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 10141c80 FUN_10141c80

void FUN_10141c80(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 10141d30 FUN_10141d30

void FUN_10141d30(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 10141de0 FUN_10141de0

void FUN_10141de0(int param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
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


// ==== 10141e90 FUN_10141e90

void FUN_10141e90(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  iVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((unaff_EDI != 0) && (iVar2 != 0)) {
    do {
      if (iVar2 == unaff_EDI) {
        *unaff_ESI = 1;
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x34);
    } while (iVar2 != 0);
    *unaff_ESI = 0;
    return;
  }
  *unaff_ESI = 0;
  return;
}


// ==== 10141f80 FUN_10141f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141f80(ushort *param_1)

{
  byte bVar1;
  FOutputDevice *pFVar2;
  int iVar3;
  int *in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  FOutputDevice *local_4;
  
  if ((in_ECX[3] == 0) || (iVar3 = *(int *)(in_ECX[3] + 0x1c), iVar3 == in_ECX[9])) {
    local_4 = (FOutputDevice *)0x0;
  }
  else {
    local_4 = *(FOutputDevice **)(iVar3 + 0x20);
  }
  pFVar2 = local_4;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])();
  local_4 = (FOutputDevice *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((FOutputDevice *)&local_4 == pFVar2) ||
     (iVar3 = (**(code **)(*in_ECX + 0x34))((FOutputDevice *)&local_4), iVar3 == 1)) {
    if (unaff_ESI == 0) {
      unaff_ESI = 100;
    }
    iVar3 = (**(code **)(*in_ECX + 0x38))(unaff_ESI);
    if ((iVar3 == 0) && (unaff_EDI != 0)) {
      FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + unaff_EDI * 4) + 0xc),param_1);
      return;
    }
    return;
  }
  if (iVar3 != 0) {
    return;
  }
  if ((FOutputDevice *)&local_4 == (FOutputDevice *)0x0) {
    return;
  }
  if ((FOutputDevice *)&local_4 == (FOutputDevice *)0x2b2) {
    return;
  }
  FOutputDevice::Logf((FOutputDevice *)&local_4,param_1);
  return;
}


// ==== 10142110 FUN_10142110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142110(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_ECX;
  FOutputDevice *unaff_ESI;
  undefined8 uVar8;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if ((unaff_ESI + -300 < (FOutputDevice *)0x40) && (*(int *)(in_ECX + 0xc) != 0)) {
    iVar2 = *(int *)(in_ECX + 0xc);
    uVar3 = *(uint *)(*(int *)(in_ECX + 0x24) + 0x8c);
    uVar4 = *(uint *)(*(int *)(in_ECX + 0x24) + 0x90);
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
    FOutputDevice::Logf(unaff_ESI,param_1);
  }
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  return;
}


// ==== 10142220 FUN_10142220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142220(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  int unaff_EDI;
  undefined8 uVar3;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (((FOutputDevice *)(unaff_EDI + -300) < (FOutputDevice *)0x40) &&
     (iVar2 = *(int *)(in_ECX + 0xc), iVar2 != 0)) {
    uVar3 = __allshl();
    *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & ~(uint)uVar3;
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & ~(uint)((ulonglong)uVar3 >> 0x20);
    return;
  }
  FOutputDevice::Logf((FOutputDevice *)(unaff_EDI + -300),param_1);
  return;
}


// ==== 101422f0 FUN_101422f0

void FUN_101422f0(int param_1)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baa90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  UObject::SaveConfig(in_ECX,0x4000,(ushort *)0x0);
  ExceptionList = local_10;
  return;
}


// ==== 10142363 Catch@10142363

void Catch_10142363(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10142377 Catch@10142377

void Catch_10142377(void)

{
  appUnwindf((ushort *)&DAT_101d4060,L"UObject::execSaveConfig");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101423c0 FUN_101423c0

void FUN_101423c0(int param_1)

{
  UObject *this;
  int in_ECX;
  ulong uVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baaa0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = (ushort *)0x0;
  uVar1 = 0x4000;
  this = UClass::GetDefaultObject(*(UClass **)(in_ECX + 0x24));
  UObject::SaveConfig(this,uVar1,puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 1014243b Catch@1014243b

void Catch_1014243b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014244f Catch@1014244f

void Catch_1014244f(void)

{
  appUnwindf((ushort *)&DAT_101d4068,L"UObject::execStaticSaveConfig");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101424a0 FUN_101424a0

void FUN_101424a0(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baab0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  UObject::ResetConfig(*(UClass **)(in_ECX + 0x24));
  ExceptionList = local_10;
  return;
}


// ==== 10142511 Catch@10142511

void Catch_10142511(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10142525 Catch@10142525

void Catch_10142525(void)

{
  appUnwindf((ushort *)&DAT_101d4070,L"UObject::execResetConfig");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142570 FUN_10142570

void FUN_10142570(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  int unaff_EDI;
  undefined4 *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    for (iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x34)
        ) {
      if (*(int *)(iVar2 + 0x20) == unaff_EDI) {
        *unaff_retaddr = 1;
        return;
      }
    }
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 10142620 FUN_10142620

void FUN_10142620(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if ((*(int *)(in_ECX + 0xc) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c), iVar1 != 0)
     ) {
    *param_2 = *(undefined4 *)(iVar1 + 0x20);
    return;
  }
  *param_2 = 0;
  return;
}


// ==== 101426a0 FUN_101426a0

void FUN_101426a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  int unaff_EDI;
  uint *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  for (iVar2 = *(int *)(in_ECX + 0x24); (iVar2 != 0 && (*(int *)(iVar2 + 0x20) != unaff_EDI));
      iVar2 = *(int *)(iVar2 + 0x34)) {
  }
  *unaff_retaddr = (uint)(iVar2 != 0);
  return;
}


// ==== 10142740 FUN_10142740

void FUN_10142740(EName param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  uint unaff_EDI;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_404 [1028];
  
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x8c) & 0x20;
  iVar3 = (**(code **)(*in_ECX + 0x1c))(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),0);
  if (((iVar3 == 0) &&
      (((0x3f < *(int *)(*(int *)(param_1 + 4) + 0x20) - 300U || (iVar3 = in_ECX[3], iVar3 == 0)) ||
       (uVar6 = __allshl(),
       ((uint)uVar6 & *(uint *)(iVar3 + 0x20)) != 0 ||
       ((uint)((ulonglong)uVar6 >> 0x20) & *(uint *)(iVar3 + 0x24)) != 0)))) &&
     ((uVar4 & in_ECX[7]) == 0)) {
    in_ECX[7] = in_ECX[7] | uVar4;
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
      FOutputDevice::Logf((FOutputDevice *)0x0,param_1,(ushort *)0x2f9);
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
    in_ECX[7] = in_ECX[7] & ~unaff_EDI;
    DAT_1028377c = DAT_1028377c + -1;
  }
  return;
}


// ==== 101428f0 FUN_101428f0

void FUN_101428f0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = in_ECX[1];
    while (iVar1 != 0) {
      if ((*(uint *)(*(int *)(in_ECX[1] + 0x24) + 0x4a4) & 0x40000) != 0) {
        return;
      }
      iVar1 = *(int *)(in_ECX[1] + 0x38);
      in_ECX[1] = iVar1;
    }
    iVar1 = (**(code **)(*(int *)*in_ECX + 0x7c))();
    *in_ECX = iVar1;
    if (iVar1 != 0) {
      in_ECX[1] = *(int *)(iVar1 + 0x48);
    }
    iVar1 = *in_ECX;
  } while( true );
}


// ==== 10142960 FUN_10142960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * FUN_10142960(UObject *param_1)

{
  UClass *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UStruct::PrivateStaticClass) {
        return param_1;
      }
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + DAT_1027cd30 * 4) + 0xc),(ushort *)GError)
  ;
  return param_1;
}


// ==== 101429d0 FUN_101429d0

int FUN_101429d0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UEnum::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10142a00 FUN_10142a00

void FUN_10142a00(void)

{
  UClass *pUVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    while( true ) {
      iVar2 = in_ECX[1];
      while (iVar2 != 0) {
        for (pUVar1 = *(UClass **)(in_ECX[1] + 0x24); pUVar1 != (UClass *)0x0;
            pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
          if (pUVar1 == &UProperty::PrivateStaticClass) {
            return;
          }
        }
        iVar2 = *(int *)(in_ECX[1] + 0x38);
        in_ECX[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*in_ECX + 0x7c))();
      *in_ECX = iVar2;
      if (iVar2 == 0) break;
      in_ECX[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 10142a70 FUN_10142a70

void FUN_10142a70(ushort *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  UClass *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baac0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = (UClass *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  if (local_18 == (UClass *)0x0) {
    FOutputDevice::Logf((FOutputDevice *)0x0,param_1);
    puVar3 = *(ushort **)(param_1 + 6);
    uVar2 = *puVar3;
    *(ushort **)(param_1 + 6) = puVar3 + 1;
    uVar4 = puVar3[1];
    *(int *)(param_1 + 6) = (int)puVar3 + 3;
    *(uint *)(param_1 + 6) = (int)puVar3 + 3 + (uint)uVar2;
    GPropAddr = (uchar *)0x0;
    GPropObject = (UObject *)0x0;
    GProperty = (UProperty *)0x0;
    if (param_2 != 0) {
      thunk_FUN_10108420(param_2,(char)uVar4);
    }
  }
  else {
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 3;
    UClass::GetDefaultObject(local_18);
    bVar1 = **(byte **)(param_1 + 6);
    *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
    (*(code *)(&GNatives)[bVar1])(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10142b4e Catch@10142b4e

void Catch_10142b4e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10142b62 Catch@10142b62

void Catch_10142b62(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d37c8,L"UObject::execClassContext");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10142c00 FUN_10142c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142c00(ushort *param_1)

{
  byte bVar1;
  UProperty *pUVar2;
  uchar *puVar3;
  UObject *in_ECX;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 local_4;
  
  local_4 = (undefined4 *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,0);
  puVar3 = GPropAddr;
  pUVar2 = GProperty;
  GPropObject = in_ECX;
  if ((GProperty != (UProperty *)0x0) && (GPropAddr != (uchar *)0x0)) {
    if ((*(int *)(GPropAddr + 4) <= (int)&local_4) || ((int)&local_4 < 0)) {
      if ((unaff_EBP != 0) || ((int)&local_4 < 0)) {
        FOutputDevice::Logf(*(FOutputDevice **)(GProperty + 0x20),param_1);
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
          *local_4 = 0;
          local_4 = local_4 + 1;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)local_4 = 0;
          local_4 = (undefined4 *)((int)local_4 + 1);
        }
        return;
      }
      FArray::AddZeroed((FArray *)GPropAddr,*(int *)(*(int *)(GProperty + 0x78) + 0x44),
                        (int)&local_4 + (1 - *(int *)(GPropAddr + 4)));
    }
    GPropAddr = (uchar *)(*(int *)(*(int *)(pUVar2 + 0x78) + 0x44) * (int)&local_4 + *(int *)puVar3)
    ;
    if (unaff_EBP != 0) {
      (**(code **)(**(int **)(pUVar2 + 0x78) + 0xa4))(unaff_EBP,GPropAddr,0);
      return;
    }
  }
  return;
}


// ==== 10142d80 FUN_10142d80

void FUN_10142d80(ushort *param_1)

{
  byte bVar1;
  UClass *pUVar2;
  uchar *this;
  int iVar3;
  int iVar4;
  UObject *in_ECX;
  UProperty *pUVar5;
  int unaff_EDI;
  int iStack_14;
  undefined4 uStack_4;
  
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  iStack_14 = 0;
  GPropObject = in_ECX;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  this = GPropAddr;
  if (GProperty != (UProperty *)0x0) {
    for (pUVar2 = *(UClass **)(GProperty + 0x24); pUVar2 != (UClass *)0x0;
        pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
      pUVar5 = GProperty;
      if (pUVar2 == &UArrayProperty::PrivateStaticClass) goto LAB_10142dd1;
    }
  }
  pUVar5 = (UProperty *)0x0;
LAB_10142dd1:
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  iStack_14 = 0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&iStack_14);
  if (this == (uchar *)0x0) {
    return;
  }
  if ((FOutputDevice *)&uStack_4 == (FOutputDevice *)0x0) {
    return;
  }
  if ((int)&uStack_4 < 0) {
    FOutputDevice::Logf((FOutputDevice *)&uStack_4,param_1);
    return;
  }
  if ((iStack_14 < 0) || (iVar4 = iStack_14, *(int *)(this + 4) < iStack_14)) {
    FOutputDevice::Logf((FOutputDevice *)&uStack_4,param_1);
    iVar3 = *(int *)(this + 4);
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
  FArray::InsertZeroed((FArray *)this,iVar4,(int)&uStack_4,*(int *)(*(int *)(pUVar5 + 0x78) + 0x44))
  ;
  return;
}


// ==== 10142ef0 FUN_10142ef0

void FUN_10142ef0(FOutputDevice *param_1)

{
  byte bVar1;
  UClass *pUVar2;
  uchar *this;
  int iVar3;
  UObject *in_ECX;
  FOutputDevice *pFVar4;
  FOutputDevice *pFVar5;
  int unaff_ESI;
  FOutputDevice *pFVar6;
  int unaff_EDI;
  undefined4 uStack_18;
  FOutputDevice FStack_5;
  undefined4 uStack_4;
  
  GProperty = (UProperty *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  uStack_18 = 0;
  GPropObject = in_ECX;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  this = GPropAddr;
  if (GProperty != (UProperty *)0x0) {
    for (pUVar2 = *(UClass **)(GProperty + 0x24); pUVar2 != (UClass *)0x0;
        pUVar2 = *(UClass **)(pUVar2 + 0x34)) {
      pFVar5 = (FOutputDevice *)GProperty;
      if (pUVar2 == &UArrayProperty::PrivateStaticClass) goto LAB_10142f4b;
    }
  }
  pFVar5 = (FOutputDevice *)0x0;
LAB_10142f4b:
  uStack_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  uStack_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&uStack_18);
  if (this == (uchar *)0x0) {
    return;
  }
  if ((FOutputDevice *)&uStack_4 == (FOutputDevice *)0x0) {
    return;
  }
  if ((int)&uStack_4 < 0) {
    FOutputDevice::Logf((FOutputDevice *)&uStack_4,(ushort *)param_1);
    return;
  }
  if (((-1 < unaff_EDI) && (unaff_EDI < *(int *)(this + 4))) &&
     (iVar3 = unaff_EDI, pFVar4 = (FOutputDevice *)&uStack_4, pFVar5 = param_1,
     (int)((FOutputDevice *)&uStack_4 + unaff_EDI) <= *(int *)(this + 4))) goto LAB_10143050;
  if ((FOutputDevice *)&uStack_4 == (FOutputDevice *)0x1) {
    FOutputDevice::Logf(*(FOutputDevice **)(this + 4),(ushort *)param_1);
  }
  else {
    FOutputDevice::Logf(&FStack_5 + unaff_EDI,(ushort *)param_1);
  }
  iVar3 = *(int *)(this + 4);
  if (unaff_ESI < 0) {
    iVar3 = 0;
LAB_10143036:
    unaff_ESI = iVar3;
  }
  else if (iVar3 <= unaff_ESI) goto LAB_10143036;
  iVar3 = unaff_ESI;
  pFVar4 = param_1;
  if (*(int *)(this + 4) < (int)(param_1 + unaff_ESI)) {
    pFVar4 = (FOutputDevice *)(*(int *)(this + 4) - unaff_ESI);
  }
LAB_10143050:
  pFVar6 = pFVar4 + iVar3 + -1;
  if (iVar3 <= (int)pFVar6) {
    do {
      (**(code **)(**(int **)(pFVar5 + 0x78) + 0xac))
                ((*(int **)(pFVar5 + 0x78))[0x11] * (int)pFVar6 + *(int *)this);
      pFVar6 = pFVar6 + -1;
      iVar3 = unaff_EDI;
      pFVar4 = (FOutputDevice *)&uStack_4;
    } while (unaff_EDI <= (int)pFVar6);
  }
  FArray::Remove((FArray *)this,iVar3,(int)pFVar4,*(int *)(*(int *)(pFVar5 + 0x78) + 0x44));
  return;
}


// ==== 10143100 FUN_10143100

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10143100(int param_1,int param_2)

{
  byte bVar1;
  UProperty *pUVar2;
  int iVar3;
  UObject *in_ECX;
  int *piVar4;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101baad0;
  local_10 = ExceptionList;
  local_8 = 0;
  pUVar2 = (UProperty *)**(int **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(int **)(param_1 + 0xc) = *(int **)(param_1 + 0xc) + 1;
  iVar3 = thunk_FUN_10142960(*(int *)(pUVar2 + 0x18));
  if (*(int *)(iVar3 + 0x4c) == 0) {
    local_18 = (undefined1 *)0x0;
  }
  else {
    local_18 = &stack0xffffffbc;
  }
  thunk_FUN_10108420(local_18,*(int *)(iVar3 + 0x4c));
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_18);
  if (GPropAddr != (uchar *)0x0) {
    GPropAddr = GPropAddr + *(int *)(pUVar2 + 0x54);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  GProperty = pUVar2;
  GPropObject = in_ECX;
  if (param_2 != 0) {
    (**(code **)(*(int *)pUVar2 + 0xa8))(param_2,local_18 + *(int *)(pUVar2 + 0x54),0);
  }
  local_8 = 3;
  for (piVar4 = *(int **)(iVar3 + 0x78); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x18]) {
    (**(code **)(*piVar4 + 0xac))(local_18 + piVar4[0x15]);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014322f Catch@1014322f

void Catch_1014322f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10143243 Catch@10143243

void Catch_10143243(void)

{
  appUnwindf((ushort *)&DAT_101d3b10,L"StructMemberDestroyValue");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014325e Catch@1014325e

void Catch_1014325e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 10143272 Catch@10143272

void Catch_10143272(void)

{
  appUnwindf((ushort *)&DAT_101d3b08,L"StructMemberCopyComplete");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014328d Catch@1014328d

void Catch_1014328d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 101432a1 Catch@101432a1

void Catch_101432a1(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d3b18,L"UObject::execStructMember");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10143370 FUN_10143370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143370(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  undefined4 unaff_EDI;
  
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1);
  iVar2 = (**(code **)(*in_ECX + 0x38))(unaff_EDI);
  if (iVar2 == 0) {
    FOutputDevice::Logf(_Names,param_1);
  }
  return;
}


// ==== 101433f0 FUN_101433f0

void FUN_101433f0(int param_1,FArray *param_2)

{
  char cVar1;
  ushort *_Src;
  int iVar2;
  
  _Src = appFromAnsi(*(char **)(param_1 + 0xc),(ushort *)0x0);
  if (*(ushort **)param_2 != _Src) {
    if (*_Src == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(_Src);
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_2 + 8) = iVar2;
    *(int *)(param_2 + 4) = iVar2;
    FArray::Realloc(param_2,2);
    if (*(int *)(param_2 + 4) != 0) {
      _memcpy(*(void **)param_2,_Src,*(int *)(param_2 + 4) * 2);
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


// ==== 101434a0 FUN_101434a0

void FUN_101434a0(int param_1,FArray *param_2)

{
  short sVar1;
  ushort *_Src;
  int iVar2;
  
  _Src = appFromUnicode(*(ushort **)(param_1 + 0xc));
  if (*(ushort **)param_2 != _Src) {
    if (*_Src == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(_Src);
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_2 + 8) = iVar2;
    *(int *)(param_2 + 4) = iVar2;
    FArray::Realloc(param_2,2);
    if (*(int *)(param_2 + 4) != 0) {
      _memcpy(*(void **)param_2,_Src,*(int *)(param_2 + 4) * 2);
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


// ==== 10143550 FUN_10143550

void FUN_10143550(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  UClass *pUVar4;
  int iVar5;
  int unaff_ESI;
  int *unaff_retaddr;
  
  iVar5 = param_1;
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = *piVar2;
  *(int **)(param_1 + 0xc) = piVar2 + 1;
  param_1 = 0;
  bVar1 = *(byte *)(piVar2 + 1);
  *(int *)(iVar5 + 0xc) = (int)piVar2 + 5;
  (*(code *)(&GNatives)[bVar1])(iVar5,&param_1);
  if (unaff_ESI != 0) {
    for (pUVar4 = *(UClass **)(unaff_ESI + 0x24); pUVar4 != (UClass *)0x0;
        pUVar4 = *(UClass **)(pUVar4 + 0x34)) {
      iVar5 = unaff_ESI;
      if (pUVar4 == &UClass::PrivateStaticClass) {
        do {
          if (iVar5 == iVar3) {
            *unaff_retaddr = unaff_ESI;
            return;
          }
          piVar2 = (int *)(iVar5 + 0x34);
          iVar5 = *piVar2;
        } while (*piVar2 != 0);
        *unaff_retaddr = 0;
        return;
      }
    }
  }
  *unaff_retaddr = 0;
  return;
}


// ==== 101435f0 FUN_101435f0

void FUN_101435f0(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_EDI;
  wchar_t *_Src;
  FArray *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 101436a0 FUN_101436a0

void FUN_101436a0(int param_1)

{
  byte bVar1;
  wchar_t *_Src;
  int iVar2;
  UObject *unaff_EDI;
  FArray *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
  if (unaff_EDI == (UObject *)0x0) {
    _Src = L"None";
  }
  else {
    _Src = (wchar_t *)UObject::GetPathName(unaff_EDI,(UObject *)0x0,(ushort *)0x0);
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


// ==== 10143760 FUN_10143760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10143760(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *_Src;
  int unaff_EDI;
  FArray *unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_4);
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


// ==== 10143810 FUN_10143810

void FUN_10143810(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int unaff_ESI;
  ushort *unaff_EDI;
  float *unaff_retaddr;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bab00;
  pvStack_c = ExceptionList;
  local_24 = 0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_24);
  if (unaff_ESI == 0) {
    unaff_EDI = &DAT_101cdd44;
  }
  local_1c = 0.0;
  fStack_18 = 0.0;
  local_20 = appAtof(unaff_EDI);
  puVar2 = appStrstr(unaff_EDI,(ushort *)&DAT_101d3de0);
  if (puVar2 != (ushort *)0x0) {
    local_1c = appAtof(puVar2 + 1);
    puVar2 = appStrstr(puVar2 + 1,(ushort *)&DAT_101d3de4);
    if (puVar2 != (ushort *)0x0) {
      fStack_18 = appAtof(puVar2 + 1);
    }
  }
  *unaff_retaddr = local_20;
  unaff_retaddr[1] = local_1c;
  unaff_retaddr[2] = fStack_18;
  pvStack_c = (void *)0x3;
  local_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10143970 FUN_10143970

void FUN_10143970(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int unaff_EBX;
  int iVar3;
  ushort *unaff_EBP;
  int iVar4;
  int *unaff_retaddr;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bab40;
  pvStack_c = ExceptionList;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_24);
  if (unaff_EBX == 0) {
    unaff_EBP = &DAT_101cdd44;
  }
  iVar4 = 0;
  iVar3 = 0;
  local_20 = appAtoi(unaff_EBP);
  puVar2 = appStrstr(unaff_EBP,(ushort *)&DAT_101d3de8);
  if (puVar2 != (ushort *)0x0) {
    iVar4 = appAtoi(puVar2 + 1);
    puVar2 = appStrstr(puVar2 + 1,(ushort *)&DAT_101d3dec);
    if (puVar2 != (ushort *)0x0) {
      iVar3 = appAtoi(puVar2 + 1);
    }
  }
  *unaff_retaddr = local_20;
  unaff_retaddr[1] = iVar4;
  unaff_retaddr[2] = iVar3;
  pvStack_c = (void *)0x3;
  local_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10143ac0 FUN_10143ac0

void FUN_10143ac0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  float fStack_20;
  float fStack_1c;
  float local_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bab70;
  pvStack_c = ExceptionList;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  pFVar3 = (FArray *)
           FString::Printf((ushort *)&stack0xffffffd4,L"%.2f,%.2f,%.2f",(double)fStack_20,
                           (double)fStack_1c,(double)local_18);
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


// ==== 10143c00 FUN_10143c00

void FUN_10143c00(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bab90;
  pvStack_c = ExceptionList;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  pFVar3 = (FArray *)
           FString::Printf((ushort *)&stack0xffffffd4,L"%i,%i,%i",uStack_20 & 0xffff,
                           uStack_1c & 0xffff,local_18 & 0xffff);
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


// ==== 10143d40 FUN_10143d40

void FUN_10143d40(int param_1)

{
  byte bVar1;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101babc0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  pvStack_c = (void *)0x3;
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 10143e00 FUN_10143e00

void FUN_10143e00(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  int iStack_44;
  undefined4 *puStack_40;
  FArray aFStack_2c [4];
  undefined4 uStack_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  FArray *pFStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bac30;
  pFStack_c = ExceptionList;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pFStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_40 = &local_24;
  iStack_44 = param_1;
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
  local_24 = 0;
  FArray::Realloc(aFStack_2c,2);
  uStack_18._0_1_ = 5;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)aFStack_2c);
  uStack_18._0_1_ = 8;
  puStack_40 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&iStack_44,2);
  uStack_18 = CONCAT31(uStack_18._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&iStack_44);
  uStack_18 = 9;
  FArray::Realloc((FArray *)&stack0xffffffc8,2);
  uStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffc8);
  ExceptionList = local_20;
  return;
}


// ==== 10143ff0 FUN_10143ff0

void FUN_10143ff0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FString *this;
  FArray *pFVar3;
  undefined2 *_Src;
  undefined1 *puStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ushort local_28 [2];
  void *pvStack_24;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  FArray *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bacb0;
  pvStack_c = ExceptionList;
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_4c = &local_30;
  iStack_50 = param_1;
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
  this = (FString *)FString::operator+((FString *)&stack0xffffffc0,local_28);
  uStack_18 = 6;
  pFVar3 = (FArray *)FString::operator+(this,(FString *)&uStack_38);
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
  local_2c = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  FArray::Realloc((FArray *)&local_30,2);
  uStack_1c._0_1_ = 5;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_30);
  uStack_1c._0_1_ = 10;
  iStack_50 = 0;
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


// ==== 10144220 FUN_10144220

void FUN_10144220(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101bad20;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(iVar2 < 0);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 101443b0 FUN_101443b0

void FUN_101443b0(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101bad80;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(0 < iVar2);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10144540 FUN_10144540

void FUN_10144540(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101bade0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(iVar2 < 1);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 101446d0 FUN_101446d0

void FUN_101446d0(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101bae40;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(-1 < iVar2);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10144860 FUN_10144860

void FUN_10144860(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101baea0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(iVar2 == 0);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 101449f0 FUN_101449f0

void FUN_101449f0(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101baf00;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStrcmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(iVar2 != 0);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10144b80 FUN_10144b80

void FUN_10144b80(ushort *param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  uint *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (uint *)&LAB_101baf60;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar3 = &DAT_101cdd44;
  }
  iVar2 = appStricmp(&DAT_101cdd44,puVar3);
  *puStack_8 = (uint)(iVar2 == 0);
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10144d10 FUN_10144d10

void FUN_10144d10(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  int *unaff_retaddr;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bafa0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
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
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 10144e10 FUN_10144e10

void FUN_10144e10(ushort *param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puStack_34;
  undefined4 *puStack_30;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  int *piStack_8;
  undefined4 local_4;
  
  piStack_8 = (int *)&LAB_101bb000;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_30 = &local_18;
  puStack_34 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffd4);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = puStack_34;
  if (puStack_30 == (undefined4 *)0x0) {
    puVar2 = &DAT_101cdd44;
  }
  iVar3 = FString::InStr((FString *)&stack0xffffffd8,puVar2,0);
  *piStack_8 = iVar3;
  local_14._0_1_ = 6;
  puStack_30 = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10144f80 FUN_10144f80

void FUN_10144f80(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  undefined4 *puStack_38;
  undefined4 uStack_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  FArray *pFStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb050;
  pFStack_c = ExceptionList;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pFStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &local_24;
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
  local_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  uStack_18 = CONCAT31(uStack_18._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  uStack_18 = 5;
  FArray::Realloc((FArray *)&puStack_38,2);
  uStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_38);
  ExceptionList = local_20;
  return;
}


// ==== 10145130 FUN_10145130

void FUN_10145130(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  FArray *local_4;
  
  puStack_8 = &LAB_101bb0a0;
  pvStack_c = ExceptionList;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = (FArray *)0x2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_24);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pFVar5 = (FArray *)FString::Caps((FString *)&stack0xffffffd4);
  pFVar4 = local_4;
  uStack_10._0_1_ = 3;
  if (local_4 != pFVar5) {
    uVar2 = *(undefined4 *)(pFVar5 + 4);
    *(undefined4 *)(local_4 + 8) = uVar2;
    *(undefined4 *)(local_4 + 4) = uVar2;
    FArray::Realloc(local_4,2);
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
  local_20 = 0;
  local_1c = 0;
  FArray::Realloc((FArray *)&local_24,2);
  uStack_10 = CONCAT31(uStack_10._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_24);
  uStack_10 = 5;
  FArray::Realloc((FArray *)&stack0xffffffd0,2);
  uStack_10 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd0);
  ExceptionList = pvStack_18;
  return;
}


// ==== 101452b0 FUN_101452b0

void FUN_101452b0(int param_1)

{
  byte bVar1;
  int unaff_ESI;
  ushort *unaff_EDI;
  uint *unaff_retaddr;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb0e0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
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
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 101453b0 FUN_101453b0

/* WARNING: Removing unreachable block (ram,0x10145459) */

void FUN_101453b0(ushort *param_1)

{
  byte bVar1;
  undefined4 *puStack_28;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb120;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_28 = &local_18;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffdc);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2((FOutputDevice *)GLog,(EName)GLog,param_1);
  }
  local_14 = 3;
  FArray::Realloc((FArray *)&puStack_28,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_28);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10145500 FUN_10145500

void FUN_10145500(ushort *param_1)

{
  byte bVar1;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb160;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  this = extraout_ECX;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
    this = extraout_ECX_00;
  }
  FOutputDevice::Logf(this,param_1);
  puStack_8 = (undefined1 *)0x3;
  local_18 = 0;
  local_14 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe4,2);
  puStack_8 = (undefined1 *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe4);
  ExceptionList = local_10;
  return;
}


// ==== 10145600 FUN_10145600

void FUN_10145600(int param_1)

{
  byte bVar1;
  FArray *this;
  int iVar2;
  ushort *puVar3;
  ushort *puStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  ushort *puStack_30;
  int aiStack_2c [2];
  void *pvStack_24;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  FArray *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb1e0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = (FArray *)0x0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_40 = &local_18;
  iStack_44 = param_1;
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
  local_14 = CONCAT31(local_14._1_3_,8);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&puStack_40);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar3 = puStack_48;
  if (iStack_44 == 0) {
    puVar3 = &DAT_101cdd44;
  }
  if (aiStack_2c[0] == 0) {
    puStack_30 = &DAT_101cdd44;
  }
  puVar3 = Localize(puStack_30,&DAT_101cdd44,puVar3,(ushort *)0x0,0);
  this = local_10;
  if (*(ushort **)local_10 != puVar3) {
    if (*puVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = appStrlen(puVar3);
      iVar2 = iVar2 + 1;
    }
    *(int *)(this + 8) = iVar2;
    *(int *)(this + 4) = iVar2;
    FArray::Realloc(this,2);
    if (*(int *)(this + 4) != 0) {
      _memcpy(*(void **)this,puVar3,*(int *)(this + 4) * 2);
    }
  }
  uStack_1c._0_1_ = 9;
  iStack_44 = 0;
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


// ==== 10145850 FUN_10145850

void FUN_10145850(UPackage *param_1)

{
  byte bVar1;
  UPackage *pUVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  FOutputDevice *this;
  void *unaff_EDI;
  void **ppvVar6;
  UPackage *pUStack_3c;
  ushort *puVar7;
  FString aFStack_20 [4];
  uint uStack_1c;
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb220;
  pvStack_c = ExceptionList;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  pUStack_3c = (UPackage *)0x101458aa;
  FString::FString(aFStack_20,(ushort *)&DAT_101d3ef0);
  pvStack_c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  pUStack_3c = param_1;
  (*(code *)(&GNatives)[bVar1])();
  pvStack_c = (void *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  ppvVar6 = &pvStack_c;
  pUVar2 = param_1;
  (*(code *)(&GNatives)[bVar1])(param_1,ppvVar6);
  puVar7 = (ushort *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffc8);
  if ((uStack_1c & 0xff87bf7a) != 0) {
    FOutputDevice::Logf(this,(ushort *)param_1);
  }
  if (pUVar2 == (UPackage *)0x0) {
    pUVar2 = UObject::GetTransientPackage();
  }
  if ((param_1 == (UPackage *)0x0) || (param_1 == (UPackage *)0x1)) {
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined4 *)FName::FName((FName *)&pUStack_3c,puVar7,1);
    uVar4 = *puVar3;
  }
  pUVar5 = UObject::StaticConstructObject(ppvVar6,pUVar2,uVar4,uStack_1c & 0x784085,0,param_1,0);
  *puStack_18 = pUVar5;
  FArray::Realloc((FArray *)&stack0xffffffc8,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffc8);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10145a30 FUN_10145a30

void FUN_10145a30(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_101bb230;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  param_1 = 0;
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(iVar2,&param_1);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  if (**(char **)(iVar2 + 0xc) == 'B') {
    *(char **)(iVar2 + 0xc) = *(char **)(iVar2 + 0xc) + 1;
    (*DAT_1027f878)(iVar2,0);
  }
  uVar3 = local_18;
  *param_2 = 0;
  iVar4 = thunk_FUN_101429d0(local_18);
  iVar2 = param_1;
  if ((iVar4 != 0) && (-1 < param_1)) {
    iVar4 = thunk_FUN_101429d0(uVar3);
    if (iVar2 < *(int *)(iVar4 + 0x44)) {
      iVar4 = thunk_FUN_101429d0(uVar3);
      *param_2 = *(undefined4 *)(*(int *)(iVar4 + 0x40) + iVar2 * 4);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10145b13 Catch@10145b13

void Catch_10145b13(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10145b27 Catch@10145b27

void Catch_10145b27(void)

{
  appUnwindf((ushort *)&DAT_101d4078,L"UObject::execGetEnum");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10145b90 FUN_10145b90

void FUN_10145b90(ushort *param_1)

{
  byte bVar1;
  ushort *puVar2;
  UObject *pUVar3;
  ushort *puStack_30;
  undefined4 *puStack_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb260;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 6);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  puStack_2c = &local_18;
  puStack_30 = param_1;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])();
  puStack_30 = (ushort *)0x0;
  bVar1 = **(byte **)(param_1 + 6);
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&puStack_30);
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  if (**(char **)(param_1 + 6) == 'B') {
    *(char **)(param_1 + 6) = *(char **)(param_1 + 6) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  puVar2 = puStack_30;
  if (puStack_2c == (undefined4 *)0x0) {
    puVar2 = &DAT_101cdd44;
  }
  pUVar3 = UObject::StaticLoadObject
                     ((UClass *)&stack0xffffffdc,(UObject *)0x0,puVar2,(ushort *)0x0,
                      -(uint)(param_1 != (ushort *)0x0) & 0x2000 | 2,(UPackageMap *)0x0);
  *local_10 = pUVar3;
  puStack_2c = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&puStack_30,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_30);
  ExceptionList = (void *)0x0;
  return;
}


// ==== 10145d10 FUN_10145d10

void FUN_10145d10(UClass *param_1)

{
  byte bVar1;
  UObject *pUVar2;
  undefined4 *puStack_28;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (undefined4 *)&LAB_101bb2a0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_28 = &local_18;
  (*(code *)(&GNatives)[bVar1])();
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&stack0xffffffdc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  pUVar2 = UObject::StaticFindObject(param_1,(UObject *)0x0,&DAT_101cdd44,0);
  *puStack_8 = pUVar2;
  local_14 = 3;
  FArray::Realloc((FArray *)&puStack_28,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_28);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 10145e50 FUN_10145e50

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10145e50(int param_1,void *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  UObject *in_ECX;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 local_4ac [1024];
  int local_ac [32];
  undefined **local_2c;
  int local_28;
  UObject *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  uint local_14;
  int local_10;
  UObject *local_c;
  int local_8;
  
  uVar5 = rdtsc();
  local_10 = -(int)uVar5;
  local_8 = 0;
  if (*(short *)(param_3 + 0x90) == 0) {
    local_c = in_ECX;
    if ((*(uint *)(param_3 + 0x8c) & 0x400) != 0) {
      iVar6 = (**(code **)(*(int *)in_ECX + 0x1c))(param_3,local_4ac,param_1);
      if (iVar6 == 0) {
        (**(code **)(param_3 + 0x9c))(param_1,param_2);
        goto LAB_10146027;
      }
      local_8 = 1;
    }
    local_14 = *(uint *)(param_3 + 0x4c);
    if (local_14 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)&stack0xfffffb48;
    }
    uVar9 = local_14 & 3;
    puVar10 = puVar8;
    for (uVar7 = local_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar6 = *(int *)(param_3 + 0x48);
    local_24 = local_c;
    local_1c = puVar8;
    local_2c = FFrame::vftable;
    local_28 = param_3;
    local_20 = *(undefined4 *)(param_3 + 0x54);
    piVar11 = local_ac;
    cVar2 = **(char **)(param_1 + 0xc);
    while (cVar2 != '\x16') {
      GPropAddr = (uchar *)0x0;
      GPropObject = (UObject *)0x0;
      iVar4 = *(int *)(iVar6 + 0x54);
      bVar3 = **(byte **)(param_1 + 0xc);
      *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
      (*(code *)(&GNatives)[bVar3])(param_1,(undefined1 *)(iVar4 + (int)local_1c));
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
    if (local_8 == 0) {
      UObject::ProcessInternal(local_c,(FFrame *)&local_2c,param_2);
    }
    piVar11 = piVar11 + -2;
    if (local_ac <= piVar11) {
      do {
        (**(code **)(*(int *)*piVar11 + 0xa8))
                  (piVar11[1],(undefined1 *)(((int *)*piVar11)[0x15] + (int)local_1c),0);
        piVar11 = piVar11 + -2;
      } while (local_ac <= piVar11);
    }
    for (piVar11 = *(int **)(param_3 + 0x78); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[0x18])
    {
      (**(code **)(*piVar11 + 0xac))((undefined1 *)(piVar11[0x15] + (int)local_1c));
    }
  }
  else {
    (**(code **)(param_3 + 0x9c))(param_1,param_2);
  }
LAB_10146027:
  uVar5 = rdtsc();
  uVar7 = (int)uVar5 + -0xc + local_10;
  puVar1 = (uint *)(param_3 + 0xa8);
  uVar9 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  *(int *)(param_3 + 0xac) = *(int *)(param_3 + 0xac) + (uint)CARRY4(uVar9,uVar7);
  puVar1 = (uint *)(param_3 + 0xa0);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)(param_3 + 0xa4) = *(int *)(param_3 + 0xa4) + (uint)(0xfffffffe < uVar7);
  return;
}


// ==== 101460f0 FUN_101460f0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_101460f0(UStruct *param_1,void *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  UObject *in_ECX;
  int *piVar4;
  FFrame local_3c [16];
  void *local_2c;
  FScopeCriticalSection local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bb2c8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_18,UObject::GScriptingCS);
  local_8._0_1_ = 1;
  if ((((GIsScriptable != 0) && (iVar2 = UObject::IsProbing(), iVar2 != 0)) &&
      (iVar2 = (**(code **)(*(int *)in_ECX + 0x30))(), iVar2 == 0)) &&
     ((*(short *)(param_1 + 0x90) == 0 &&
      (((*(uint *)(param_1 + 0x8c) & 0x400) == 0 ||
       (iVar2 = (**(code **)(*(int *)in_ECX + 0x1c))(param_1,param_2,0), iVar2 == 0)))))) {
    GScriptEntryTag = GScriptEntryTag + 1;
    if (GScriptEntryTag == 1) {
      uVar1 = rdtsc();
      GScriptCycles = GScriptCycles - (int)uVar1;
    }
    puVar3 = (void *)0x0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      local_14 = &stack0xffffffb8;
      puVar3 = &stack0xffffffb8;
    }
    FFrame::FFrame(local_3c,in_ECX,param_1,0,puVar3);
    _memcpy(local_2c,param_2,(uint)*(ushort *)(param_1 + 0x96));
    thunk_FUN_10108420((uint)*(ushort *)(param_1 + 0x96) + (int)local_2c,
                       *(int *)(param_1 + 0x4c) - (uint)*(ushort *)(param_1 + 0x96));
    (**(code **)(param_1 + 0x9c))(local_3c,(uint)*(ushort *)(param_1 + 0x98) + (int)local_2c);
    _memcpy(param_2,local_2c,(uint)*(ushort *)(param_1 + 0x96));
    for (piVar4 = *(int **)(param_1 + 0x78); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x18]) {
      if ((int)(uint)*(ushort *)(param_1 + 0x96) <= piVar4[0x15]) {
        (**(code **)(*piVar4 + 0xac))(piVar4[0x15] + (int)local_2c);
      }
    }
    GScriptEntryTag = GScriptEntryTag + -1;
    if (GScriptEntryTag == 0) {
      uVar1 = rdtsc();
      GScriptCycles = GScriptCycles + -0xc + (int)uVar1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FScopeCriticalSection::~FScopeCriticalSection(local_18);
    ExceptionList = local_10;
    return;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(local_18);
  ExceptionList = local_10;
  return;
}


// ==== 101462aa Catch@101462aa

void Catch_101462aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101462be Catch@101462be

void Catch_101462be(void)

{
  ushort *puVar1;
  ushort *puVar2;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d40dc,L"UObject::ProcessEvent");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  puVar2 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s, %s)",puVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10146380 FUN_10146380

void FUN_10146380(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_101428f0();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_101428f0();
  return;
}


// ==== 101463e0 FUN_101463e0

void FUN_101463e0(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_10142a00();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_10142a00();
  return;
}


// ==== 10146440 FUN_10146440

undefined4 FUN_10146440(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  UObject *in_ECX;
  UState *pUVar6;
  UState *local_2c;
  int local_20;
  int local_1c;
  UState *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb2e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  pUVar6 = (UState *)0x0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x28) = 0;
    local_18 = (UState *)0x0;
    if (*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) == *(int *)(in_ECX + 0x24)) {
      local_20 = 0;
      piVar3 = &local_20;
    }
    else {
      local_1c = *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x1c) + 0x20);
      piVar3 = &local_1c;
    }
    local_1c = *piVar3;
    if (param_1 == 0x2b2) {
      thunk_FUN_10146380();
      while (local_2c != (UState *)0x0) {
        if (pUVar6 != (UState *)0x0) goto LAB_10146509;
        if (((byte)local_2c[0x9c] & 2) != 0) {
          local_18 = local_2c;
          pUVar6 = local_2c;
        }
        local_2c = *(UState **)(local_2c + 0x38);
        thunk_FUN_101428f0();
      }
    }
    else {
      local_14 = &stack0xffffffc4;
      pUVar6 = UObject::FindState();
      local_18 = pUVar6;
    }
    if (pUVar6 == (UState *)0x0) {
      param_1 = 0;
      pUVar6 = *(UState **)(in_ECX + 0x24);
      local_18 = pUVar6;
    }
    else {
LAB_10146509:
      if (param_1 == 0x2b2) {
        param_1 = *(int *)(pUVar6 + 0x20);
      }
    }
    if ((((local_1c != 0) && (param_1 != local_1c)) && (iVar4 = UObject::IsProbing(), iVar4 != 0))
       && ((*(uint *)(in_ECX + 0x1c) & 0x2000) == 0)) {
      uVar5 = *(uint *)(in_ECX + 0x1c) & 0xffffefff;
      *(uint *)(in_ECX + 0x1c) = uVar5;
      *(uint *)(in_ECX + 0x1c) = uVar5 | 0x2000;
      UObject::eventEndState(in_ECX);
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffdfff;
      if ((*(uint *)(in_ECX + 0x1c) & 0x1000) != 0) {
        ExceptionList = local_10;
        return 2;
      }
    }
    *(UState **)(*(int *)(in_ECX + 0xc) + 4) = pUVar6;
    *(UState **)(*(int *)(in_ECX + 0xc) + 0x1c) = pUVar6;
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
    uVar5 = *(uint *)(*(int *)(in_ECX + 0x24) + 0x90);
    uVar1 = *(uint *)(pUVar6 + 0x90);
    uVar2 = *(uint *)(pUVar6 + 0x98);
    iVar4 = *(int *)(in_ECX + 0xc);
    *(uint *)(iVar4 + 0x20) =
         (*(uint *)(*(int *)(in_ECX + 0x24) + 0x8c) | *(uint *)(pUVar6 + 0x8c)) &
         *(uint *)(pUVar6 + 0x94);
    *(uint *)(iVar4 + 0x24) = (uVar5 | uVar1) & uVar2;
    if (param_1 != 0) {
      if ((param_1 != local_1c) && (iVar4 = UObject::IsProbing(), iVar4 != 0)) {
        *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffefff;
        UObject::eventBeginState(in_ECX);
        if ((*(uint *)(in_ECX + 0x1c) & 0x1000) != 0) {
          ExceptionList = local_10;
          return 2;
        }
      }
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x1000;
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 10146624 Catch@10146624

void Catch_10146624(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10146638 Catch@10146638

void Catch_10146638(void)

{
  appUnwindf((ushort *)&DAT_101d3750,L"UObject::GotoState");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101466e0 FUN_101466e0

void FUN_101466e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  ushort *puVar5;
  undefined4 in_ECX;
  FString aFStack_40 [8];
  undefined4 uStack_38;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvVar4 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bb300;
  local_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = *piVar2;
  ExceptionList = &local_c;
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
  FString::FString(local_18,puVar5);
  local_4 = 0;
  cVar1 = **(char **)(param_1 + 0xc);
  while (cVar1 != '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    cVar1 = **(char **)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (GDebugger != (UDebugger *)0x0) {
    FString::FString(aFStack_40,local_18);
    local_4 = local_4 & 0xffffff00;
    (*(code *)**(undefined4 **)GDebugger)(in_ECX,param_1);
  }
  local_4 = 0xffffffff;
  FString::~FString(local_18);
  ExceptionList = local_c;
  return;
}


// ==== 10146830 FUN_10146830

void FUN_10146830(int param_1)

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
  undefined4 *local_810;
  undefined4 local_80c [254];
  ushort *puStack_414;
  int iStack_410;
  undefined4 local_40c [254];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb326;
  pvStack_c = ExceptionList;
  uStack_814 = (ushort *)CONCAT13(**(undefined1 **)(param_1 + 0xc),(undefined3)uStack_814);
  ExceptionList = &pvStack_c;
  *(undefined1 **)(param_1 + 0xc) = *(undefined1 **)(param_1 + 0xc) + 1;
  puVar6 = local_40c;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  local_810 = local_80c;
  puVar6 = local_810;
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
  (*(code *)(&GNatives)[bVar7])(param_1,local_80c);
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
      if (local_810 == (undefined4 *)0x0) {
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
    local_810 = (undefined4 *)0x0;
    local_80c[0] = 0;
    FArray::Realloc((FArray *)&uStack_814,2);
    pvStack_c = (void *)0xffffffff;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&uStack_814);
    pvStack_c = (void *)0x1;
    iStack_410 = 0;
    local_40c[0] = 0;
    FArray::Realloc((FArray *)&puStack_414,2);
    pvStack_c = (void *)0xffffffff;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_414);
  }
  ExceptionList = pvStack_14;
  return;
}


// ==== 10146aa0 FUN_10146aa0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10146aa0(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  UStruct *this;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  iVar2 = (int)param_1;
  this = (UStruct *)**(undefined4 **)((int)param_1 + 0xc);
  *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
  uVar3 = *(uint *)(this + 0x4c);
  if (uVar3 == 0) {
    param_1 = (undefined4 *)0x0;
    local_8 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)&stack0xffffffe0;
    local_8 = (undefined4 *)&stack0xffffffe0;
  }
  uVar4 = uVar3 & 3;
  puVar5 = param_1;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar4 = *(uint *)(this + 0x4c) & 3;
  puVar5 = local_8;
  for (uVar3 = *(uint *)(this + 0x4c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(iVar2,param_1);
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(iVar2,local_8);
  iVar2 = UStruct::StructCompare(this,param_1,local_8);
  *param_2 = iVar2;
  return;
}


// ==== 10146bc0 FUN_10146bc0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10146bc0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  UStruct *this;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  iVar2 = (int)param_1;
  this = (UStruct *)**(undefined4 **)((int)param_1 + 0xc);
  *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
  uVar3 = *(uint *)(this + 0x4c);
  if (uVar3 == 0) {
    param_1 = (undefined4 *)0x0;
    local_8 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)&stack0xffffffe0;
    local_8 = (undefined4 *)&stack0xffffffe0;
  }
  uVar4 = uVar3 & 3;
  puVar5 = param_1;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar4 = *(uint *)(this + 0x4c) & 3;
  puVar5 = local_8;
  for (uVar3 = *(uint *)(this + 0x4c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(iVar2,param_1);
  bVar1 = **(byte **)(iVar2 + 0xc);
  *(byte **)(iVar2 + 0xc) = *(byte **)(iVar2 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(iVar2,local_8);
  iVar2 = UStruct::StructCompare(this,param_1,local_8);
  *param_2 = (uint)(iVar2 == 0);
  return;
}


// ==== 10146ce0 FUN_10146ce0

void FUN_10146ce0(int param_1)

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


// ==== 10146e00 FUN_10146e00

void FUN_10146e00(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined4 unaff_ESI;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  undefined4 local_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb370;
  pvStack_c = ExceptionList;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_1c);
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
  local_1c = 0;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10146f20 FUN_10146f20

void FUN_10146f20(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  float unaff_EDI;
  undefined2 *_Src;
  FArray *unaff_retaddr;
  undefined4 local_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_101bb390;
  pvStack_c = ExceptionList;
  local_1c = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_1c);
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
  local_1c = 0;
  uStack_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10147050 FUN_10147050

void FUN_10147050(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  ushort *unaff_EDI;
  undefined1 *unaff_retaddr;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb3c0;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  if (unaff_ESI == 0) {
    unaff_EDI = &DAT_101cdd44;
  }
  iVar2 = appAtoi(unaff_EDI);
  *unaff_retaddr = (char)iVar2;
  pvStack_c = (void *)0x3;
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 10147130 FUN_10147130

void FUN_10147130(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_ESI;
  ushort *unaff_EDI;
  int *unaff_retaddr;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb400;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  if (unaff_ESI == 0) {
    unaff_EDI = &DAT_101cdd44;
  }
  iVar2 = appAtoi(unaff_EDI);
  *unaff_retaddr = iVar2;
  pvStack_c = (void *)0x3;
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 10147210 FUN_10147210

void FUN_10147210(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int unaff_ESI;
  ushort *unaff_EDI;
  uint *unaff_retaddr;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb440;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
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
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 101473c0 FUN_101473c0

void FUN_101473c0(int param_1)

{
  byte bVar1;
  int unaff_ESI;
  ushort *unaff_EDI;
  float fVar2;
  float *unaff_retaddr;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb480;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  if (unaff_ESI == 0) {
    unaff_EDI = &DAT_101cdd44;
  }
  fVar2 = appAtof(unaff_EDI);
  *unaff_retaddr = fVar2;
  pvStack_c = (void *)0x3;
  local_18 = 0;
  FArray::Realloc((FArray *)&stack0xffffffe0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ==== 101474a0 FUN_101474a0

void FUN_101474a0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FArray *pFVar3;
  undefined2 *_Src;
  int iStack_40;
  undefined4 *puStack_3c;
  void *pvStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  FArray *pFStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb4d0;
  pvStack_c = ExceptionList;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_3c = &local_24;
  iStack_40 = param_1;
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
  pFVar3 = (FArray *)FString::Mid((FString *)&puStack_3c,(int)&stack0xffffffd0,iStack_40);
  local_20._0_1_ = 3;
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
  local_20._0_1_ = 4;
  FArray::Realloc((FArray *)&stack0xffffffcc,2);
  local_20 = CONCAT31(local_20._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffcc);
  local_20 = 5;
  puStack_3c = (undefined4 *)0x0;
  FArray::Realloc((FArray *)&iStack_40,2);
  local_20 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&iStack_40);
  ExceptionList = pvStack_28;
  return;
}


// ==== 10147680 FUN_10147680

void FUN_10147680(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  FArray *pFVar4;
  FArray *pFVar5;
  undefined2 *_Src;
  undefined4 *puStack_38;
  undefined4 uStack_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  FArray *pFStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb520;
  pFStack_c = ExceptionList;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pFStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_38 = &local_24;
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
  local_24 = 0;
  FArray::Realloc((FArray *)&stack0xffffffd4,2);
  uStack_18 = CONCAT31(uStack_18._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd4);
  uStack_18 = 5;
  FArray::Realloc((FArray *)&puStack_38,2);
  uStack_18 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_38);
  ExceptionList = local_20;
  return;
}


// ==== 10147830 FUN_10147830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10147830(undefined4 param_1,ushort *param_2)

{
  int iVar1;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb540;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_101463e0(param_1);
  while( true ) {
    if (local_20 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = appStricmp((ushort *)(*(int *)(_Names + *(int *)(local_20 + 0x20) * 4) + 0xc),param_2);
    if (iVar1 == 0) break;
    local_20 = *(int *)(local_20 + 0x38);
    thunk_FUN_10142a00();
  }
  ExceptionList = local_10;
  return local_20;
}


// ==== 101478c1 Catch@101478c1

void Catch_101478c1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101478d5 Catch@101478d5

void Catch_101478d5(void)

{
  appUnwindf((ushort *)&DAT_101d413c,L"FindField");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147930 FUN_10147930

void FUN_10147930(int param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  FInterpCurve local_2c [20];
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bb558;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FInterpCurve::FInterpCurve(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,local_2c);
  local_18 = 0.0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  fVar2 = FInterpCurve::Eval(local_2c,local_18);
  *param_2 = fVar2;
  local_8 = local_8 & 0xffffff00;
  FInterpCurve::~FInterpCurve(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10147a00 Catch@10147a00

void Catch_10147a00(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10147a14 Catch@10147a14

void Catch_10147a14(void)

{
  appUnwindf((ushort *)&DAT_101d3ec4,L"UObject::execInterpCurveEval");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147a70 FUN_10147a70

void FUN_10147a70(int param_1)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float *local_34;
  int local_30;
  int local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bb578;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  FInterpCurve::FInterpCurve((FInterpCurve *)&local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_34);
  local_18 = 0.0;
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = &local_18;
  }
  local_1c = 0.0;
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_1c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar4 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar4 = &local_1c;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (local_30 < 2) {
    *pfVar2 = 0.0;
    *pfVar4 = 0.0;
    local_8 = local_8 & 0xffffff00;
    FInterpCurve::~FInterpCurve((FInterpCurve *)&local_34);
    ExceptionList = local_10;
    return;
  }
  *pfVar2 = *local_34;
  fVar5 = (float10)*local_34;
  iVar3 = 1;
  while( true ) {
    *pfVar4 = (float)fVar5;
    local_20 = iVar3;
    if (local_30 <= iVar3) break;
    fVar5 = (float10)thunk_FUN_10114810(*pfVar2,local_34[iVar3 * 2]);
    *pfVar2 = (float)fVar5;
    fVar5 = (float10)thunk_FUN_101147b0(*pfVar4,local_34[iVar3 * 2]);
    iVar3 = iVar3 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  FInterpCurve::~FInterpCurve((FInterpCurve *)&local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10147c1f Catch@10147c1f

void Catch_10147c1f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10147c33 Catch@10147c33

void Catch_10147c33(void)

{
  appUnwindf((ushort *)&DAT_101d3ecc,L"UObject::execInterpCurveGetInputDomain");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147cd0 FUN_10147cd0

void FUN_10147cd0(int param_1)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  int local_34;
  int local_30;
  int local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bb598;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  FInterpCurve::FInterpCurve((FInterpCurve *)&local_34);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_34);
  local_18 = 0.0;
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_18);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar2 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar2 = &local_18;
  }
  local_1c = 0.0;
  GPropAddr = (uchar *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_1c);
  if (GPropObject != (UObject *)0x0) {
    (**(code **)(*(int *)GPropObject + 0x60))(GProperty);
  }
  pfVar4 = (float *)GPropAddr;
  if (GPropAddr == (uchar *)0x0) {
    pfVar4 = &local_1c;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (local_30 < 2) {
    *pfVar2 = 0.0;
    *pfVar4 = 0.0;
    local_8 = local_8 & 0xffffff00;
    FInterpCurve::~FInterpCurve((FInterpCurve *)&local_34);
    ExceptionList = local_10;
    return;
  }
  *pfVar2 = *(float *)(local_34 + 4);
  fVar5 = (float10)*(float *)(local_34 + 4);
  iVar3 = 1;
  while( true ) {
    *pfVar4 = (float)fVar5;
    local_20 = iVar3;
    if (local_30 <= iVar3) break;
    fVar5 = (float10)thunk_FUN_10114810(*pfVar2,*(undefined4 *)(local_34 + 4 + iVar3 * 8));
    *pfVar2 = (float)fVar5;
    fVar5 = (float10)thunk_FUN_101147b0(*pfVar4,*(undefined4 *)(local_34 + 4 + iVar3 * 8));
    iVar3 = iVar3 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  FInterpCurve::~FInterpCurve((FInterpCurve *)&local_34);
  ExceptionList = local_10;
  return;
}


// ==== 10147e83 Catch@10147e83

void Catch_10147e83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10147e97 Catch@10147e97

void Catch_10147e97(void)

{
  appUnwindf((ushort *)&DAT_101d3ed4,L"UObject::execInterpCurveGetOutputRange");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10147f30 FUN_10147f30

void FUN_10147f30(int param_1)

{
  byte bVar1;
  int *piVar2;
  int in_ECX;
  int unaff_EBX;
  undefined2 *unaff_ESI;
  FString *unaff_retaddr;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb5dc;
  pvStack_c = ExceptionList;
  local_818 = 0;
  local_814 = 0;
  local_810 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])(param_1,&local_818);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (*DAT_1027f878)(param_1,0);
  }
  if (unaff_EBX == 0) {
    unaff_ESI = &DAT_101cdd44;
  }
  piVar2 = (int *)thunk_FUN_10147830(*(undefined4 *)(in_ECX + 0x24),unaff_ESI);
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
    local_814 = local_814 & 0xffff0000;
    _memset((void *)((int)&local_814 + 2),0,0x7fe);
    (**(code **)(*piVar2 + 0xa0))(0,&local_814);
    FString::operator=(unaff_retaddr,(ushort *)&local_814);
  }
  pvStack_c = (void *)0x3;
  local_818 = 0;
  FArray::Realloc((FArray *)&stack0xfffff7e0,2);
  pvStack_c = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xfffff7e0);
  ExceptionList = pvStack_14;
  return;
}


// ==== 10148100 FUN_10148100

void FUN_10148100(int param_1)

{
  byte bVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 *puStack_34;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101bb640;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 2;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &pvStack_c;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  puStack_34 = &local_18;
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
  piVar2 = (int *)thunk_FUN_10147830(*(undefined4 *)(in_ECX + 0x24),&DAT_101cdd44);
  if (((piVar2 != (int *)0x0) && ((*(byte *)(piVar2 + 7) & 4) != 0)) &&
     ((*(byte *)(piVar2 + 0x12) & 2) == 0)) {
    puVar3 = puStack_34;
    if (unaff_EDI == 0) {
      puVar3 = (undefined4 *)&DAT_101cdd44;
    }
    (**(code **)(*piVar2 + 0x9c))(puVar3,piVar2[0x15] + in_ECX,1);
  }
  local_14._0_1_ = 6;
  FArray::Realloc((FArray *)&puStack_34,2);
  local_14 = CONCAT31(local_14._1_3_,2);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&puStack_34);
  local_14 = 7;
  FArray::Realloc((FArray *)&stack0xffffffd8,2);
  local_14 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd8);
  ExceptionList = pvStack_1c;
  return;
}


// ==== 101482b0 FUN_101482b0

void FUN_101482b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 101482d0 FUN_101482d0

undefined4 FUN_101482d0(void)

{
  return 0;
}


// ==== 101482e0 FUN_101482e0

float10 FUN_101482e0(void)

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
  return (fVar3 + fVar2 * (float10)4294967296.0) * (float10)GSecondsPerCycle + (float10)16777216.0;
}


// ==== 10148340 FUN_10148340

undefined4 FUN_10148340(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xf0);
}


// ==== 10148350 FUN_10148350

undefined4 FUN_10148350(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb660;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = L2ThreadUtil::GetCurrentThreadIndex(&GThreadUtil);
  ExceptionList = local_10;
  return *(undefined4 *)(in_ECX + 0x518 + iVar1 * 4);
}


// ==== 1014839c Catch@1014839c

void Catch_1014839c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101483b0 Catch@101483b0

void Catch_101483b0(void)

{
  appUnwindf((ushort *)&DAT_101d5150,L"ULinkerLoad::GetReader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101483f0 FUN_101483f0

void FUN_101483f0(void)

{
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb670;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(undefined4 **)(in_ECX + 0xf8) != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (**(code **)**(undefined4 **)(in_ECX + 0xf8))(1);
  }
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  UObject::Destroy(in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 10148455 Catch@10148455

void Catch_10148455(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10148469 Catch@10148469

void Catch_10148469(void)

{
  appUnwindf((ushort *)&DAT_101d517c,L"ULinkerSave::Destroy");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101484b0 FUN_101484b0

void FUN_101484b0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101484b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x38) + 0x3c))();
  return;
}


// ==== 101484c0 FUN_101484c0

void FUN_101484c0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101484c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x38) + 0x28))();
  return;
}


// ==== 101484d0 FUN_101484d0

void FUN_101484d0(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x101484d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x38) + 4))();
  return;
}


// ==== 10148530 FUN_10148530

int FUN_10148530(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,4);
  }
  return iVar1;
}


// ==== 10148620 FUN_10148620

FArchive * FUN_10148620(FArchive *param_1,FCompactIndex *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb680;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  operator<<(param_1,param_2);
  operator<<(param_1,param_2 + 4);
  thunk_FUN_10130820(param_1,param_2 + 8);
  (**(code **)(*(int *)param_1 + 0x1c))(param_2 + 0xc);
  thunk_FUN_10108c50(param_1,param_2 + 0x10);
  operator<<(param_1,param_2 + 0x14);
  if (*(int *)(param_2 + 0x14) != 0) {
    operator<<(param_1,param_2 + 0x18);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101486b5 Catch@101486b5

void Catch_101486b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101486c9 Catch@101486c9

void Catch_101486c9(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FObjectExport<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148720 FUN_10148720

int * FUN_10148720(int *param_1,int param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb690;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))(param_2);
  (**(code **)(*piVar1 + 0x1c))(param_2 + 4);
  thunk_FUN_10130820(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x1c))(param_2 + 0xc);
  if (param_1[4] != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 101487a6 Catch@101487a6

void Catch_101487a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101487ba Catch@101487ba

void Catch_101487ba(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FObjectImport<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148810 FUN_10148810

void FUN_10148810(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb6a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = thunk_FUN_10130820(param_1,param_2,param_2 + 4);
  thunk_FUN_10130820(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 10148866 Catch@10148866

void Catch_10148866(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014887a Catch@1014887a

void Catch_1014887a(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FGenerationInfo<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101488c0 FUN_101488c0

void FUN_101488c0(undefined4 param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101bb6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,8);
  ExceptionList = local_c;
  return;
}


// ==== 10148970 FUN_10148970

void FUN_10148970(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
  return;
}


// ==== 10148990 FUN_10148990

void FUN_10148990(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = param_1;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(undefined4 *)(param_1 + 0x20);
  }
  in_ECX[3] = param_1;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x1c);
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    in_ECX[4] = uVar1 & 0x67f01a5;
    in_ECX[7] = iVar2;
    return;
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  return;
}


// ==== 10148a00 FUN_10148a00

void FUN_10148a00(void)

{
  return;
}


// ==== 10148a10 FUN_10148a10

void FUN_10148a10(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x18) + 0x20);
  in_ECX[1] = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20);
  in_ECX[2] = 0;
  in_ECX[3] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[4] = param_1;
  in_ECX[5] = 0;
  in_ECX[6] = 0xffffffff;
  UObject::GImportCount = UObject::GImportCount + 1;
  return;
}


// ==== 10148a60 FUN_10148a60

void FUN_10148a60(undefined4 *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x90) + param_2 * 0x24);
  if (iVar1 < 0) {
    *param_1 = *(undefined4 *)
                (*(int *)(in_ECX + 0x84) +
                 *(int *)(*(int *)(in_ECX + 0x84) + iVar1 * -0x1c + -0x14) * -0x1c + -0x10);
    return;
  }
  if (0 < iVar1) {
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x20);
    return;
  }
  *param_1 = 0x14;
  return;
}


// ==== 10148ae0 FUN_10148ae0

void FUN_10148ae0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x90) + param_2 * 0x24);
  if (iVar1 < 0) {
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x84) + iVar1 * -0x1c + -0x10);
    return;
  }
  if (0 < iVar1) {
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x90) + -0x18 + iVar1 * 0x24);
    return;
  }
  *param_1 = 0x2a5;
  return;
}


// ==== 10148b50 FUN_10148b50

void FUN_10148b50(UObject *param_1)

{
  UObject *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  FArchive *pFVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb6d0;
  local_10 = ExceptionList;
  local_8 = 0;
  this = (UObject *)(in_ECX + -0x30);
  ExceptionList = &local_10;
  iVar3 = UObject::IsValid(this);
  if (iVar3 == 0) {
    appFailAssert("IsValid()",".\\UnLinker.cpp",0x36c);
  }
  if (param_1 == (UObject *)0x0) {
    appFailAssert("Object",".\\UnLinker.cpp",0x36d);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == in_ECX + -0x30) {
    if ((*(uint *)(param_1 + 0x1c) & 0x200) != 0) {
      iVar3 = UObject::IsA(param_1,&UStruct::PrivateStaticClass);
      if ((iVar3 != 0) && (*(int *)(param_1 + 0x34) != 0)) {
        (**(code **)(*in_ECX + 0x10))(*(int *)(param_1 + 0x34));
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = in_ECX[-0xc] + *(int *)(param_1 + 0x14) * 0x24;
      if (*(UObject **)(iVar3 + 0x1c) != param_1) {
        appFailAssert("Export._Object==Object",".\\UnLinker.cpp",900);
      }
      pFVar4 = ULinkerLoad::GetReader((ULinkerLoad *)this);
      uVar5 = (**(code **)(*(int *)pFVar4 + 0x28))();
      pFVar4 = ULinkerLoad::GetReader((ULinkerLoad *)this);
      (**(code **)(*(int *)pFVar4 + 0x3c))(*(undefined4 *)(iVar3 + 0x18));
      pFVar4 = ULinkerLoad::GetReader((ULinkerLoad *)this);
      (**(code **)(*(int *)pFVar4 + 0x50))(*(undefined4 *)(iVar3 + 0x14));
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffdff;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x8000;
      (**(code **)(*(int *)param_1 + 0x2c))(-(uint)(in_ECX != (int *)0xc0) & (uint)in_ECX);
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff7fff;
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar6 = (**(code **)(*in_ECX + 0x28))();
      if (iVar6 - *(int *)(iVar3 + 0x18) != iVar2) {
        (**(code **)(*in_ECX + 0x28))(iVar2);
        UObject::GetFullName(param_1,(ushort *)0x0);
        LocalizeError((ushort *)L"SerialSize",(ushort *)L"Core",(ushort *)0x0);
        FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
      }
      pFVar4 = ULinkerLoad::GetReader((ULinkerLoad *)this);
      (**(code **)(*(int *)pFVar4 + 0x3c))(uVar5);
    }
  }
  else if (piVar1 != (int *)0x0) {
    (**(code **)(piVar1[0x30] + 0x10))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10148d14 Catch@10148d14

void Catch_10148d14(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 10148d28 Catch@10148d28

void Catch_10148d28(void)

{
  int iVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int unaff_EBP;
  ULinkerLoad *this;
  
  appUnwindf((ushort *)&DAT_101d4d94,L"LoadObject");
  this = (ULinkerLoad *)(*(int *)(unaff_EBP + -0x18) + -0xc0);
  pFVar2 = ULinkerLoad::GetReader(this);
  pFVar3 = ULinkerLoad::GetReader(this);
  pFVar4 = ULinkerLoad::GetReader(this);
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + -0x30) +
          *(int *)(*(int *)(unaff_EBP + 8) + 0x14) * 0x24;
  uVar5 = (**(code **)(*(int *)pFVar2 + 0x2c))
                    (*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x14));
  uVar5 = (**(code **)(*(int *)pFVar3 + 0x28))(uVar5);
  uVar5 = (**(code **)(*(int *)pFVar4 + 0x28))(uVar5);
  puVar6 = UObject::GetFullName(*(UObject **)(unaff_EBP + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %i==%i/%i %i %i)",puVar6,uVar5);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148de3 Catch@10148de3

void Catch_10148de3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 10148df7 Catch@10148df7

void Catch_10148df7(void)

{
  appUnwindf((ushort *)&DAT_101d4dc8,L"ULinkerLoad::Preload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148ee0 FUN_10148ee0

void FUN_10148ee0(undefined4 param_1)

{
  FArchive *pFVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb6e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = ULinkerLoad::GetReader((ULinkerLoad *)(in_ECX + -0xc0));
  (**(code **)(*(int *)pFVar1 + 0x3c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10148f3a Catch@10148f3a

void Catch_10148f3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10148f4e Catch@10148f4e

void Catch_10148f4e(void)

{
  appUnwindf((ushort *)&DAT_101d5128,L"ULinkerLoad::Seek");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10148f90 FUN_10148f90

void FUN_10148f90(void)

{
  FArchive *pFVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb6f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = ULinkerLoad::GetReader((ULinkerLoad *)(in_ECX + -0xc0));
  (**(code **)(*(int *)pFVar1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 10148fdd Catch@10148fdd

void Catch_10148fdd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10148ff1 Catch@10148ff1

void Catch_10148ff1(void)

{
  appUnwindf((ushort *)&DAT_101d5130,L"ULinkerLoad::Tell");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149030 FUN_10149030

void FUN_10149030(void)

{
  FArchive *pFVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb700;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = ULinkerLoad::GetReader((ULinkerLoad *)(in_ECX + -0xc0));
  (**(code **)(*(int *)pFVar1 + 0x2c))();
  ExceptionList = local_10;
  return;
}


// ==== 1014907d Catch@1014907d

void Catch_1014907d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10149091 Catch@10149091

void Catch_10149091(void)

{
  appUnwindf((ushort *)&DAT_101d5138,L"ULinkerLoad::TotalSize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101490d0 FUN_101490d0

void FUN_101490d0(undefined4 param_1,undefined4 param_2)

{
  FArchive *pFVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb710;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pFVar1 = ULinkerLoad::GetReader((ULinkerLoad *)(in_ECX + -0xc0));
  (**(code **)(*(int *)pFVar1 + 4))(param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1014912e Catch@1014912e

void Catch_1014912e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10149142 Catch@10149142

void Catch_10149142(void)

{
  appUnwindf((ushort *)&DAT_101d5140,L"ULinkerLoad::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149190 FUN_10149190

void FUN_10149190(void)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb720;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x504); iVar1 = iVar1 + 1) {
    (**(code **)**(undefined4 **)(*(int *)(in_ECX + 0x500) + iVar1 * 4))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 101491f3 Catch@101491f3

void Catch_101491f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10149207 Catch@10149207

void Catch_10149207(void)

{
  appUnwindf((ushort *)&DAT_101d5148,L"ULinkerLoad::LoadOnSystemMemory");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149250 FUN_10149250

undefined4 FUN_10149250(int *param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x48) + *param_1 * 4);
}


// ==== 10149270 FUN_10149270

undefined4 FUN_10149270(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + *(int *)(param_1 + 4) * 4);
  }
  return 0;
}


// ==== 10149290 FUN_10149290

int FUN_10149290(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 101492e0 FUN_101492e0

int FUN_101492e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 10149350 FUN_10149350

int FUN_10149350(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_10113fa0(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 101493a0 FUN_101493a0

int FUN_101493a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 101493f0 FUN_101493f0

void FUN_101493f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10149440 FUN_10149440

void FUN_10149440(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0x1c,*(int *)(in_ECX + 8) * 0x1c);
  return;
}


// ==== 10149490 FUN_10149490

void FUN_10149490(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 0x24,*(int *)(in_ECX + 8) * 0x24);
  return;
}


// ==== 101494d0 FUN_101494d0

void FUN_101494d0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 4,*(int *)(in_ECX + 8) * 4);
  return;
}


// ==== 10149500 FUN_10149500

int FUN_10149500(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 10149550 FUN_10149550

int FUN_10149550(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 101495a0 FUN_101495a0

int FUN_101495a0(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UPackage::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 101495d0 FUN_101495d0

void FUN_101495d0(UObject *param_1,ushort *param_2,int param_3)

{
  UObject::StaticFindObject(&UPackage::PrivateStaticClass,param_1,param_2,param_3);
  return;
}


// ==== 10149600 FUN_10149600

void FUN_10149600(UObject *param_1,ushort *param_2,int param_3)

{
  UObject::StaticFindObject(&UClass::PrivateStaticClass,param_1,param_2,param_3);
  return;
}


// ==== 10149630 FUN_10149630

int FUN_10149630(int param_1)

{
  UClass *pUVar1;
  
  if (param_1 != 0) {
    for (pUVar1 = *(UClass **)(param_1 + 0x24); pUVar1 != (UClass *)0x0;
        pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
      if (pUVar1 == &UClass::PrivateStaticClass) {
        return param_1;
      }
    }
  }
  return 0;
}


// ==== 10149660 FUN_10149660

int FUN_10149660(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  ULinkerLoad *in_ECX;
  FOutputDevice *this;
  FScopeCriticalSection local_1c [4];
  ULinkerLoad *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bb758;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FScopeCriticalSection::FScopeCriticalSection(local_1c,UObject::GLoadingCS);
  local_8._0_1_ = 1;
  piVar2 = (int *)(*(int *)(in_ECX + 0x90) + param_1 * 0x24);
  piVar1 = piVar2 + 7;
  if ((*piVar1 == 0) && ((*(uint *)(in_ECX + 0xac) & piVar2[4]) != 0)) {
    if ((piVar2[3] == 0) && ((piVar2[4] & 4U) != 0)) {
      appFailAssert("Export.ObjectName!=NAME_None || !(Export.ObjectFlags&RF_Public)",
                    ".\\UnLinker.cpp",0x3be);
    }
    pUVar3 = (UClass *)ULinkerLoad::IndexToObject(in_ECX,*piVar2);
    if (pUVar3 == (UClass *)0x0) {
      pUVar3 = &UClass::PrivateStaticClass;
    }
    if (*(UClass **)(pUVar3 + 0x24) != &UClass::PrivateStaticClass) {
      appFailAssert("LoadClass->GetClass()==UClass::StaticClass()",".\\UnLinker.cpp",0x3c9);
    }
    if ((*(int *)(pUVar3 + 0x20) == 0xa2) || (*(int *)(pUVar3 + 0x20) == 0xa3)) {
      local_8 = (uint)local_8._1_3_ << 8;
      FScopeCriticalSection::~FScopeCriticalSection(local_1c);
      ExceptionList = local_10;
      return 0;
    }
    (**(code **)(*(int *)(local_18 + 0xc0) + 0x10))(pUVar3);
    if (piVar2[2] == 0) {
      pUVar4 = *(UObject **)(local_18 + 0x34);
    }
    else {
      pUVar4 = ULinkerLoad::IndexToObject(local_18,piVar2[2]);
    }
    if (*piVar1 == 0) {
      pUVar4 = UObject::StaticConstructObject
                         (pUVar3,pUVar4,piVar2[3],piVar2[4] & 0x67f01a5U | 0x1000200,0,GError,0);
      *piVar1 = (int)pUVar4;
      UObject::SetLinker(pUVar4,local_18,param_1);
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
      FOutputDevice::Logf(this,(EName)GNull,(ushort *)0x308);
      iVar5 = UObject::IsA((UObject *)*piVar1,&UStruct::PrivateStaticClass);
      if ((iVar5 != 0) && (piVar2[1] != 0)) {
        pUVar4 = ULinkerLoad::IndexToObject(local_18,piVar2[1]);
        *(UObject **)(*piVar1 + 0x34) = pUVar4;
      }
      iVar5 = UObject::IsA((UObject *)*piVar1,&UClass::PrivateStaticClass);
      if (iVar5 != 0) {
        (**(code **)(*(int *)*piVar1 + 0x70))();
      }
    }
  }
  iVar5 = *piVar1;
  local_8 = (uint)local_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(local_1c);
  ExceptionList = local_10;
  return iVar5;
}


// ==== 101498b3 Catch@101498b3

void Catch_101498b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 101498c7 Catch@101498c7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Catch_101498c7(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d4e94,L"ULinkerLoad::CreateExport");
  iVar1 = *(int *)(_Names + *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x90) + 0xc +
                                    *(int *)(unaff_EBP + 8) * 0x24) * 4);
  uVar2 = (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0xc0) + 0x28))();
  appUnwindf((ushort *)L"(%s %i)",iVar1 + 0xc,uVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101499d0 FUN_101499d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101499d0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  ULinkerLoad *in_ECX;
  int iVar4;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb770;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  local_1c = param_1 * 0x24;
  iVar4 = *(int *)(in_ECX + 0x90) + local_1c;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffcc;
  if (*(int *)(iVar4 + 0x1c) == 0) {
    ExceptionList = &local_10;
    appFailAssert("E._Object",".\\UnLinker.cpp",0x431);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  iVar2 = UObject::IsValid(*(UObject **)(iVar4 + 0x1c));
  if (iVar2 == 0) {
    local_18 = *(int *)(_Names + *(int *)(*(int *)(in_ECX + 0x34) + 0x20) * 4) + 0xc;
    piVar3 = (int *)ULinkerLoad::GetExportClassName(in_ECX,(int)local_24);
    FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *piVar3 * 4) + 0xc),(ushort *)GError);
  }
  if (*(ULinkerLoad **)(*(int *)(iVar4 + 0x1c) + 0x10) != in_ECX) {
    local_18 = *(int *)(_Names + *(int *)(*(int *)(in_ECX + 0x34) + 0x20) * 4) + 0xc;
    ULinkerLoad::GetExportClassName(in_ECX,(int)local_24);
    FOutputDevice::Logf(_Names,(ushort *)GError);
  }
  if (*(int *)(*(int *)(iVar4 + 0x1c) + 0x14) != param_1) {
    piVar3 = (int *)ULinkerLoad::GetExportClassName(in_ECX,(int)local_24);
    FOutputDevice::Logf((FOutputDevice *)(*(int *)(_Names + *piVar3 * 4) + 0xc),(ushort *)GError);
  }
  UObject::SetLinker(*(UObject **)(local_1c + 0x1c + *(int *)(in_ECX + 0x90)),(ULinkerLoad *)0x0,-1)
  ;
  ExceptionList = local_10;
  return;
}


// ==== 10149b76 Catch@10149b76

void Catch_10149b76(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10149b8a Catch@10149b8a

void Catch_10149b8a(void)

{
  appUnwindf((ushort *)&DAT_101d501c,L"ULinkerLoad::DetachExport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149c20 FUN_10149c20

void FUN_10149c20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb780;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10149500(&param_1);
  iVar1 = param_1;
  *(uint *)(param_1 + 4) = -(uint)(in_ECX != (int *)0xc0) & (uint)in_ECX;
  uVar2 = (**(code **)(*in_ECX + 0x28))();
  *(undefined4 *)(iVar1 + 8) = uVar2;
  ExceptionList = local_10;
  return;
}


// ==== 10149c91 Catch@10149c91

void Catch_10149c91(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10149ca5 Catch@10149ca5

void Catch_10149ca5(void)

{
  appUnwindf((ushort *)&DAT_101d5040,L"ULinkerLoad::AttachLazyLoader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149cf0 FUN_10149cf0

void FUN_10149cf0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb790;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x504); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x500) + iVar2 * 4);
    if (param_1 != 0) {
      (**(code **)*puVar1)();
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  thunk_FUN_1011a670(0);
  ExceptionList = local_10;
  return;
}


// ==== 10149d6e Catch@10149d6e

void Catch_10149d6e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10149d82 Catch@10149d82

void Catch_10149d82(void)

{
  appUnwindf((ushort *)&DAT_101d5094,L"ULinkerLoad::DetachAllLazyLoaders");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149dd0 FUN_10149dd0

void FUN_10149dd0(undefined4 param_1)

{
  int *in_ECX;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb7a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10149550(&param_1);
  local_18 = -(uint)(in_ECX != (int *)0xc0) & (uint)in_ECX;
  thunk_FUN_10149290(&local_18);
  param_1 = (**(code **)(*in_ECX + 0x28))();
  thunk_FUN_101492e0(&param_1);
  ExceptionList = local_10;
  return;
}


// ==== 10149e59 Catch@10149e59

void Catch_10149e59(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10149e6d Catch@10149e6d

void Catch_10149e6d(void)

{
  appUnwindf((ushort *)&DAT_101d509c,L"ULinkerLoad::AttachRoughLoader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149ec0 FUN_10149ec0

void FUN_10149ec0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb7b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x510); iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x50c) + iVar2 * 4);
    for (iVar3 = 0; iVar3 < (int)puVar1[2]; iVar3 = iVar3 + 1) {
      if (param_1 != 0) {
        (**(code **)*puVar1)(iVar3);
      }
      *(undefined4 *)(puVar1[1] + iVar3 * 4) = 0;
      *(undefined4 *)(puVar1[4] + iVar3 * 4) = 0;
    }
  }
  thunk_FUN_1011a740(0);
  ExceptionList = local_10;
  return;
}


// ==== 10149f62 Catch@10149f62

void Catch_10149f62(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 10149f76 Catch@10149f76

void Catch_10149f76(void)

{
  appUnwindf((ushort *)&DAT_101d5120,L"ULinkerLoad::DetachAllRoughLoaders");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10149fd0 FUN_10149fd0

int FUN_10149fd0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_1011a5d0(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1014a020 FUN_1014a020

int FUN_1014a020(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[1];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*in_ECX + iVar2 * 4) == *param_1) {
        thunk_FUN_1011a6a0(iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  return iVar1 - in_ECX[1];
}


// ==== 1014a070 FUN_1014a070

void FUN_1014a070(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = 0;
    in_ECX = in_ECX + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)in_ECX = 0;
    in_ECX = (undefined4 *)((int)in_ECX + 1);
  }
  return;
}


// ==== 1014a100 FUN_1014a100

void FUN_1014a100(FArchive *param_1)

{
  int *piVar1;
  UObject *in_ECX;
  int iVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb7f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  thunk_FUN_10149440(param_1);
  thunk_FUN_10149490(param_1);
  piVar1 = (int *)thunk_FUN_10132470(param_1,in_ECX + 0x78);
  (**(code **)(*piVar1 + 0x18))(in_ECX + 0x34);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x94); iVar2 = iVar2 + 1) {
    (**(code **)(*(int *)param_1 + 0x1c))(*(int *)(in_ECX + 0x90) + iVar2 * 0x24 + 0xc);
  }
  for (local_18 = 0; local_18 < *(int *)(in_ECX + 0x88); local_18 = local_18 + 1) {
    iVar2 = *(int *)(in_ECX + 0x84) + local_18 * 0x1c;
    (**(code **)(*(int *)param_1 + 0x18))(iVar2 + 0x14);
    piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x1c))(iVar2);
    (**(code **)(*piVar1 + 0x1c))(iVar2 + 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014a1f2 Catch@1014a1f2

void Catch_1014a1f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1014a206 Catch@1014a206

void Catch_1014a206(void)

{
  appUnwindf((ushort *)&DAT_101d492c,L"ULinker::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a270 FUN_1014a270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * FUN_1014a270(FString *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [20];
  int local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb859;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_1c = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(local_34);
  local_8._0_1_ = 2;
  iVar2 = -1 - param_2;
  local_20 = iVar2;
  for (; iVar2 != 0; iVar2 = *(int *)(*(int *)(iVar1 + 0x84) + iVar2 * -0x1c + -0x14)) {
    if (iVar2 != local_20) {
      pFVar3 = (FString *)FString::FString(local_58,(ushort *)&DAT_101d4934);
      local_8._0_1_ = 3;
      pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)local_4c);
      local_8._0_1_ = 4;
      pFVar3 = (FString *)FString::operator+(pFVar3,local_40);
      local_8._0_1_ = 5;
      FString::operator=(local_34,pFVar3);
      local_8._0_1_ = 4;
      FString::~FString(local_40);
      local_8._0_1_ = 3;
      FString::~FString(local_4c);
      local_8._0_1_ = 2;
      FString::~FString(local_58);
    }
    iVar1 = local_18;
    pFVar3 = (FString *)
             FString::FString(local_70,(ushort *)
                                       (*(int *)(_Names + *(int *)(*(int *)(local_18 + 0x84) +
                                                                   iVar2 * -0x1c + -0x10) * 4) + 0xc
                                       ));
    local_8._0_1_ = 6;
    pFVar3 = (FString *)FString::operator+(pFVar3,local_64);
    local_8._0_1_ = 7;
    FString::operator=(local_34,pFVar3);
    local_8._0_1_ = 6;
    FString::~FString(local_64);
    local_8._0_1_ = 2;
    FString::~FString(local_70);
  }
  pFVar3 = (FString *)
           FString::FString(local_64,(ushort *)
                                     (*(int *)(_Names + *(int *)(*(int *)(local_18 + 0x84) +
                                                                 param_2 * 0x1c + 4) * 4) + 0xc));
  local_8._0_1_ = 8;
  pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)local_70);
  local_8._0_1_ = 9;
  FString::operator+(pFVar3,param_1);
  local_1c = local_1c | 1;
  local_8._0_1_ = 8;
  FString::~FString(local_70);
  local_8._0_1_ = 2;
  FString::~FString(local_64);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_34);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1014a43f Catch@1014a43f

void Catch_1014a43f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1014a453 Catch@1014a453

void Catch_1014a453(void)

{
  appUnwindf((ushort *)&DAT_101d4940,L"ULinkerLoad::GetImportFullName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a4f0 FUN_1014a4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * FUN_1014a4f0(FString *param_1,int param_2,int param_3)

{
  FString *pFVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  FString local_68 [12];
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [12];
  FString local_2c [20];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb8e9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(local_2c);
  local_8._0_1_ = 2;
  iVar4 = param_2 + 1;
  for (iVar3 = iVar4; iVar3 != 0; iVar3 = *(int *)(*(int *)(in_ECX + 0x90) + -0x1c + iVar3 * 0x24))
  {
    if (iVar3 != iVar4) {
      pFVar1 = (FString *)FString::FString(local_50,(ushort *)&DAT_101d4948);
      local_8._0_1_ = 3;
      pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_44);
      local_8._0_1_ = 4;
      pFVar1 = (FString *)FString::operator+(pFVar1,local_38);
      local_8._0_1_ = 5;
      FString::operator=(local_2c,pFVar1);
      local_8._0_1_ = 4;
      FString::~FString(local_38);
      local_8._0_1_ = 3;
      FString::~FString(local_44);
      local_8._0_1_ = 2;
      FString::~FString(local_50);
    }
    pFVar1 = (FString *)
             FString::FString(local_68,(ushort *)
                                       (*(int *)(_Names + *(int *)(*(int *)(in_ECX + 0x90) +
                                                                   iVar3 * 0x24 + -0x18) * 4) + 0xc)
                             );
    local_8._0_1_ = 6;
    pFVar1 = (FString *)FString::operator+(pFVar1,local_5c);
    local_8._0_1_ = 7;
    FString::operator=(local_2c,pFVar1);
    local_8._0_1_ = 6;
    FString::~FString(local_5c);
    local_8._0_1_ = 2;
    FString::~FString(local_68);
  }
  iVar3 = *(int *)(*(int *)(in_ECX + 0x90) + param_2 * 0x24);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      piVar2 = (int *)(*(int *)(in_ECX + 0x84) + iVar3 * -0x1c + -0x10);
    }
    else {
      param_2 = 0x2a5;
      piVar2 = &param_2;
    }
  }
  else {
    piVar2 = (int *)(*(int *)(in_ECX + 0x90) + -0x18 + iVar3 * 0x24);
  }
  iVar3 = *piVar2;
  if (param_3 == 0) {
    UObject::GetPathName(*(UObject **)(in_ECX + 0x34),(UObject *)0x0,(ushort *)0x0);
  }
  pFVar1 = (FString *)FString::FString(local_44,(ushort *)(*(int *)(_Names + iVar3 * 4) + 0xc));
  local_8._0_1_ = 8;
  pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_50);
  local_8._0_1_ = 9;
  pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_5c);
  local_8._0_1_ = 10;
  pFVar1 = (FString *)FString::operator+(pFVar1,(ushort *)local_68);
  local_8._0_1_ = 0xb;
  FString::operator+(pFVar1,param_1);
  local_18 = local_18 | 1;
  local_8._0_1_ = 10;
  FString::~FString(local_68);
  local_8._0_1_ = 9;
  FString::~FString(local_5c);
  local_8._0_1_ = 8;
  FString::~FString(local_50);
  local_8._0_1_ = 2;
  FString::~FString(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1014a722 Catch@1014a722

void Catch_1014a722(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014a736 Catch@1014a736

void Catch_1014a736(void)

{
  appUnwindf((ushort *)&DAT_101d4958,L"ULinkerLoad::GetExportFullName");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014a7f0 FUN_1014a7f0

FString * FUN_1014a7f0(FString *param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int in_ECX;
  int iVar3;
  FArray local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101bb949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)
             FString::Printf((ushort *)local_18,L"%02x",(uint)*(byte *)(iVar3 + 0xb0 + in_ECX));
    local_4 = 3;
    if (puVar1[1] == 0) {
      puVar2 = &DAT_101cdd44;
    }
    else {
      puVar2 = (ushort *)*puVar1;
    }
    FString::operator+=(param_1,puVar2);
    local_4 = 4;
    local_14 = 0;
    local_10 = 0;
    FArray::Realloc(local_18,2);
    local_4 = local_4 & 0xffffff00;
    TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_18);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1014a8f0 FUN_1014a8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a8f0(int param_1)

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
  ULinker *in_ECX;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  FOutputDevice *extraout_ECX_00;
  int iVar16;
  int iVar17;
  int iVar18;
  FString local_48 [16];
  FName local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  int *local_24;
  int local_20;
  UPackage *local_1c;
  ULinkerLoad *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101bb9a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_8 = 0;
  piVar1 = (int *)(*(int *)(in_ECX + 0x84) + param_1 * 0x1c);
  if ((((piVar1[5] != 0) && (piVar1[6] != -1)) || (*piVar1 == 0)) ||
     ((piVar1[1] == 0 || (piVar1[3] == 0)))) {
    return;
  }
  local_1c = (UPackage *)0x0;
  local_24 = piVar1;
  local_18 = (ULinkerLoad *)in_ECX;
  if (piVar1[2] == 0) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffac;
    if (piVar1[1] != 0x2a2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffac;
      appFailAssert("Import.ClassName==NAME_Package",".\\UnLinker.cpp",0x28b);
    }
    if (*piVar1 != 0x14) {
      appFailAssert("Import.ClassPackage==NAME_Core",".\\UnLinker.cpp",0x28c);
    }
    pUVar6 = UObject::CreatePackage
                       ((UObject *)0x0,(ushort *)(*(int *)(_Names + piVar1[3] * 4) + 0xc));
    local_8 = CONCAT31(local_8._1_3_,1);
    pUVar7 = UObject::GetPackageLinker
                       ((UObject *)pUVar6,(ushort *)0x0,8,(UPackageMap *)0x0,(FGuid *)0x0);
    piVar1[5] = (int)pUVar7;
    local_8 = 0;
    in_ECX = (ULinker *)local_18;
  }
  else {
    ExceptionList = &local_10;
    puVar5 = &stack0xffffffac;
    if (-1 < piVar1[2]) {
      ExceptionList = &local_10;
      appFailAssert("Import.PackageIndex<0",".\\UnLinker.cpp",0x299);
      puVar5 = local_14;
    }
    local_14 = puVar5;
    ULinkerLoad::VerifyImport((ULinkerLoad *)in_ECX,-1 - piVar1[2]);
    iVar10 = *(int *)(*(int *)(in_ECX + 0x84) + piVar1[2] * -0x1c + -8);
    piVar1[5] = iVar10;
    piVar8 = piVar1;
    if (iVar10 != 0) {
      for (; piVar8[2] < 0; piVar8 = (int *)(*(int *)(in_ECX + 0x84) + (piVar8[2] + 1) * -0x1c)) {
      }
      local_1c = UObject::CreatePackage
                           ((UObject *)0x0,(ushort *)(*(int *)(_Names + piVar8[3] * 4) + 0xc));
    }
  }
  local_20 = 0;
  do {
    if (piVar1[5] != 0) {
      iVar10 = *(int *)(piVar1[5] + 0x100 + (piVar1[1] * 7 + *piVar1 * 0x1f + piVar1[3] & 0xffU) * 4
                       );
      while (iVar10 != -1) {
        iVar17 = *(int *)(piVar1[5] + 0x90) + iVar10 * 0x24;
        if (((*(int *)(iVar17 + 0xc) == piVar1[3]) &&
            (iVar16 = iVar10,
            piVar8 = (int *)ULinkerLoad::GetExportClassName((ULinkerLoad *)piVar1[5],(int)local_30),
            *piVar8 == piVar1[1])) &&
           (iVar18 = iVar10,
           piVar8 = (int *)ULinkerLoad::GetExportClassPackage
                                     ((ULinkerLoad *)piVar1[5],(int)local_34), *piVar8 == *piVar1))
        {
          if ((piVar1[2] < 0) &&
             (iVar9 = *(int *)(local_18 + 0x84) + (piVar1[2] + 1) * -0x1c,
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
            if ((*(uint *)(local_18 + 0xf8) & 0x1000) != 0) {
              uVar3 = *(undefined4 *)(local_18 + 0x34);
              iVar10 = thunk_FUN_101495a0(uVar3,iVar18,iVar16);
              if (iVar10 != 0) {
                iVar10 = thunk_FUN_101495a0(uVar3,iVar18,iVar16);
                *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) | 8;
              }
              if (GLog == (undefined *)0x0) {
                ExceptionList = local_10;
                return;
              }
              pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)local_18,(int)local_48);
              local_8 = CONCAT31(local_8._1_3_,3);
              FString::operator*((FString *)(piVar1[5] + 0xa0));
              FString::operator*(pFVar11);
              this = extraout_ECX;
              goto LAB_1014abf3;
            }
            iVar17 = param_1;
            pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)local_18,(int)local_48);
            local_8._0_1_ = 4;
            iVar16 = *(int *)(_Names + piVar1[1] * 4) + 0xc;
            puVar12 = FString::operator*(pFVar11);
            puVar13 = LocalizeError((ushort *)L"FailedImportPrivate",(ushort *)L"Core",(ushort *)0x0
                                   );
            appThrowf(puVar13,iVar16,puVar12,iVar17,iVar18);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_48);
          }
          piVar1[6] = iVar10;
          in_ECX = (ULinker *)local_18;
          break;
        }
LAB_1014ab52:
        in_ECX = (ULinker *)local_18;
        iVar10 = *(int *)(iVar17 + 0x20);
      }
    }
    iVar10 = appStricmp((ushort *)(*(int *)(_Names + piVar1[1] * 4) + 0xc),(ushort *)L"Mesh");
    pUVar6 = local_1c;
    if (iVar10 != 0) {
      if ((piVar1[6] == -1) && (local_1c != (UPackage *)0x0)) {
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
              pFVar11 = (FString *)ULinker::GetImportFullName(in_ECX,(int)local_48);
              local_8._0_1_ = 5;
              puVar12 = FString::operator*(pFVar11);
              EdLoadErrorf(1,puVar12,iVar10);
              local_8 = (uint)local_8._1_3_ << 8;
              FString::~FString(local_48);
            }
            local_20 = 1;
          }
          else {
            piVar1[4] = (int)pUVar15;
            UObject::GImportCount = UObject::GImportCount + 1;
          }
        }
        if ((piVar1[4] == 0) && (local_20 == 0)) {
          if (GLog != (undefined *)0x0) {
            pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)local_18,(int)local_48);
            local_8._0_1_ = 6;
            FString::operator*((FString *)(piVar1[5] + 0xa0));
            FString::operator*(pFVar11);
            FOutputDevice::Logf2(this_00,(ushort *)GLog);
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_48);
            in_ECX = (ULinker *)local_18;
          }
          if ((*(uint *)(in_ECX + 0xf8) & 0x1000) != 0) {
            uVar3 = *(undefined4 *)(in_ECX + 0x34);
            iVar10 = thunk_FUN_101495a0(uVar3);
            if (iVar10 != 0) {
              iVar10 = thunk_FUN_101495a0(uVar3);
              *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) | 8;
            }
            if (GLog == (undefined *)0x0) {
              ExceptionList = local_10;
              return;
            }
            pFVar11 = (FString *)ULinker::GetImportFullName((ULinker *)local_18,(int)local_48);
            local_8 = CONCAT31(local_8._1_3_,7);
            FString::operator*((FString *)(piVar1[5] + 0xa0));
            FString::operator*(pFVar11);
            this = extraout_ECX_00;
LAB_1014abf3:
            FOutputDevice::Logf2(this,(ushort *)GLog);
            local_8 = local_8 & 0xffffff00;
            FString::~FString(local_48);
            ExceptionList = local_10;
            return;
          }
          pFVar11 = (FString *)ULinker::GetImportFullName(in_ECX,(int)local_48);
          local_8._0_1_ = 8;
          iVar10 = *(int *)(_Names + piVar1[1] * 4) + 0xc;
          puVar12 = FString::operator*(pFVar11);
          puVar13 = LocalizeError((ushort *)L"FailedImport",(ushort *)L"Core",(ushort *)0x0);
          appThrowf(puVar13,iVar10,puVar12,param_1);
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_48);
        }
      }
      ExceptionList = local_10;
      return;
    }
    piVar8 = (int *)FName::FName(local_38,(ushort *)L"LodMesh",1);
    piVar1[1] = *piVar8;
  } while( true );
}


// ==== 1014a9e8 Catch@1014a9e8

undefined * Catch_1014a9e8(void)

{
  int unaff_EBP;
  
  appThrowf(*(ushort **)(unaff_EBP + -0x28));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &DAT_1014aa01;
}


// ==== 1014af06 Catch@1014af06

void Catch_1014af06(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_101f843c);
}


// ==== 1014af1a Catch@1014af1a

void Catch_1014af1a(void)

{
  appUnwindf((ushort *)&DAT_101d4c9c,L"ULinkerLoad::VerifyImport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b0d0 FUN_1014b0d0

void FUN_1014b0d0(void)

{
  ULinkerLoad *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb9c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x4c); iVar1 = iVar1 + 1) {
    ULinkerLoad::CreateExport(in_ECX,iVar1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014b12e Catch@1014b12e

void Catch_1014b12e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014b142 Catch@1014b142

void Catch_1014b142(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d4ca4,L"ULinkerLoad::LoadAllObjects");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x1c),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b1a0 FUN_1014b1a0

undefined4 FUN_1014b1a0(int param_1)

{
  int iVar1;
  UObject *pUVar2;
  ULinkerLoad *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb9d0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x84) + param_1 * 0x1c;
  if (*(int *)(iVar1 + 0x10) == 0) {
    ExceptionList = &local_10;
    if (*(int *)(iVar1 + 0x14) == 0) {
      ExceptionList = &local_10;
      UObject::BeginLoad();
      ULinkerLoad::VerifyImport(in_ECX,param_1);
      UObject::EndLoad();
    }
    if (*(int *)(iVar1 + 0x18) != -1) {
      pUVar2 = ULinkerLoad::CreateExport(*(ULinkerLoad **)(iVar1 + 0x14),*(int *)(iVar1 + 0x18),0);
      *(UObject **)(iVar1 + 0x10) = pUVar2;
      UObject::GImportCount = UObject::GImportCount + 1;
    }
  }
  ExceptionList = local_10;
  return *(undefined4 *)(iVar1 + 0x10);
}


// ==== 1014b230 Catch@1014b230

void Catch_1014b230(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014b244 Catch@1014b244

void Catch_1014b244(void)

{
  appUnwindf((ushort *)&DAT_101d4eac,L"ULinkerLoad::CreateImport");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b290 FUN_1014b290

UObject * FUN_1014b290(int param_1)

{
  int iVar1;
  UObject *pUVar2;
  ULinkerLoad *in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb9e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0 < param_1) {
    ExceptionList = &local_10;
    iVar1 = FArray::IsValidIndex((FArray *)(in_ECX + 0x90),param_1 + -1);
    if (iVar1 == 0) {
      LocalizeError((ushort *)L"ExportIndex",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf(this,(ushort *)GError);
    }
    pUVar2 = ULinkerLoad::CreateExport(in_ECX,param_1 + -1,0);
    ExceptionList = local_10;
    return pUVar2;
  }
  if (param_1 < 0) {
    ExceptionList = &local_10;
    iVar1 = FArray::IsValidIndex((FArray *)(in_ECX + 0x84),-1 - param_1);
    if (iVar1 == 0) {
      LocalizeError((ushort *)L"ImportIndex",(ushort *)L"Core",(ushort *)0x0);
      FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
    }
    pUVar2 = ULinkerLoad::CreateImport(in_ECX,-1 - param_1);
    ExceptionList = local_10;
    return pUVar2;
  }
  return (UObject *)0x0;
}


// ==== 1014b38f Catch@1014b38f

void Catch_1014b38f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014b3a3 Catch@1014b3a3

void Catch_1014b3a3(void)

{
  appUnwindf((ushort *)&DAT_101d4efc,L"IndexToObject");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b410 FUN_1014b410

void FUN_1014b410(FArchive *param_1)

{
  ULinker *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bb9f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ULinker::Serialize(in_ECX,param_1);
  thunk_FUN_101494d0(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1014b469 Catch@1014b469

void Catch_1014b469(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014b47d Catch@1014b47d

void Catch_1014b47d(void)

{
  appUnwindf((ushort *)&DAT_101d5024,L"ULinkerLoad::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b4c0 FUN_1014b4c0

void FUN_1014b4c0(void)

{
  ushort *puVar1;
  ULinkerLoad *in_ECX;
  FOutputDevice *this;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bba00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (GLog != (undefined *)0x0) {
    ExceptionList = &local_10;
    puVar1 = UObject::GetFullName(*(UObject **)(in_ECX + 0x34),(ushort *)0x0);
    thunk_FUN_101482e0(puVar1);
    FOutputDevice::Logf2(this,(ushort *)GLog);
  }
  ULinkerLoad::DetachAllLazyLoaders(in_ECX,0);
  ULinkerLoad::DetachAllRoughLoaders(in_ECX,0);
  for (iVar2 = 0; iVar2 < *(int *)(in_ECX + 0x94); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(in_ECX + 0x90) + 0x1c + iVar2 * 0x24) != 0) {
      ULinkerLoad::DetachExport(in_ECX,iVar2);
    }
  }
  thunk_FUN_10149350();
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    if ((*(int *)(in_ECX + iVar2 * 4 + 0x518) != 0) &&
       (*(undefined4 **)(in_ECX + iVar2 * 4 + 0x518) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(in_ECX + iVar2 * 4 + 0x518))();
    }
    *(undefined4 *)(in_ECX + iVar2 * 4 + 0x518) = 0;
  }
  UObject::Destroy((UObject *)in_ECX);
  ExceptionList = local_10;
  return;
}


// ==== 1014b5be Catch@1014b5be

void Catch_1014b5be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_101f843c);
}


// ==== 1014b5d2 Catch@1014b5d2

void Catch_1014b5d2(void)

{
  ushort *puVar1;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101d502c,L"ULinkerLoad::Destroy");
  puVar1 = UObject::GetFullName(*(UObject **)(unaff_EBP + -0x24),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s)",puVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b660 FUN_1014b660

void FUN_1014b660(int param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bba10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_10149fd0(&param_1);
  if (iVar1 != 1) {
    FString::operator*((FString *)(in_ECX + -0x20));
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1014b6df Catch@1014b6df

void Catch_1014b6df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1014b6f3 Catch@1014b6f3

void Catch_1014b6f3(void)

{
  appUnwindf((ushort *)&DAT_101d508c,L"ULinkerLoad::DetachLazyLoader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b740 FUN_1014b740

void FUN_1014b740(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int in_ECX;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101bba20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = thunk_FUN_1014a020(&param_1);
  puVar1 = GLog;
  if ((iVar2 == 0) && (GLog != (undefined *)0x0)) {
    FString::operator*((FString *)(in_ECX + -0x20));
    FOutputDevice::Logf2(this,(ushort *)puVar1);
  }
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 8); iVar2 = iVar2 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 4) = 0;
  }
  ExceptionList = local_10;
  return;
}


// ==== 1014b7e3 Catch@1014b7e3

void Catch_1014b7e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1014b7f7 Catch@1014b7f7

void Catch_1014b7f7(void)

{
  appUnwindf((ushort *)&DAT_101d5118,L"ULinkerLoad::DetachRoughLoader");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1014b850 FUN_1014b850

int * FUN_1014b850(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101bba38;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10130820(param_1,param_2);
  thunk_FUN_10130820(param_1,(uint *)(param_2 + 4));
  thunk_FUN_10108c50(param_1,param_2 + 8);
  uVar1 = thunk_FUN_10130820(param_1,param_2 + 0xc,param_2 + 0x10);
  thunk_FUN_10130820(uVar1);
  uVar1 = thunk_FUN_10130820(param_1,param_2 + 0x14,param_2 + 0x18);
  thunk_FUN_10130820(uVar1);
  uVar1 = thunk_FUN_10130820(param_1,param_2 + 0x1c,param_2 + 0x20);
  thunk_FUN_10130820(uVar1);
  if ((*(uint *)(param_2 + 4) & 0xffff) < 0x44) {
    uVar1 = thunk_FUN_10130820(param_1,&local_18,&local_20);
    thunk_FUN_10130820(uVar1);
    uVar1 = (**(code **)(*param_1 + 0x28))();
    if (local_18 != 0) {
      (**(code **)(*param_1 + 0x3c))(local_20);
      for (iVar3 = 0; iVar3 < local_18; iVar3 = iVar3 + 1) {
        thunk_FUN_10130dc0(param_1,param_2 + 0x24);
      }
    }
    (**(code **)(*param_1 + 0x3c))(uVar1);
    if (param_1[4] != 0) {
      thunk_FUN_10119450(1);
      puVar2 = (undefined4 *)thunk_FUN_101148f0(8,param_2 + 0x34);
      if (puVar2 != (undefined4 *)0x0) {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
        *puVar2 = *(undefined4 *)(param_2 + 0x14);
        puVar2[1] = uVar1;
      }
    }
  }
  else {
    local_18 = *(int *)(param_2 + 0x38);
    uVar1 = thunk_FUN_10130dc0(param_1,param_2 + 0x24,&local_18);
    thunk_FUN_10130820(uVar1);
    if (param_1[4] != 0) {
      uVar1 = thunk_FUN_101488c0(local_18);
      local_8._0_1_ = 1;
      thunk_FUN_10119480(uVar1);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_101211b0();
    }
    for (iVar3 = 0; iVar3 < local_18; iVar3 = iVar3 + 1) {
      local_1c = iVar3;
      thunk_FUN_10148810(param_1,*(int *)(param_2 + 0x34) + iVar3 * 8);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1014ba03 Catch@1014ba03

void Catch_1014ba03(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_101f843c);
}


// ==== 1014ba17 Catch@1014ba17

void Catch_1014ba17(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FUnrealfileSummary<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


