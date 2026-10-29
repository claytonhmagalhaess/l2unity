// ==== 1002ec08 ___crtCompareStringA

/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtCompareStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwCmpFlags,_CchCount1,_LpString2,_CchCount2,
                     (char *)_Code_page,in_stack_ffffffec,in_stack_fffffff0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1002ec48 __strnicoll_l

/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  undefined4 *puVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_1001d94b();
    *puVar1 = 0x16;
    FUN_100178f5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)FUN_1001d94b();
        *puVar1 = 0x16;
        goto LAB_1002ed1d;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_1001d94b();
    *puVar1 = 0x16;
    FUN_100178f5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1002ed1d:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 1002ed40 __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_1004d420 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 1002ed67 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_1004ce74;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1004ce74 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1004ce74 >> 2;
}


// ==== 1002edb4 copy_environ

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  
  puVar2 = (undefined4 *)0x0;
  if (unaff_EDI != (int *)0x0) {
    iVar1 = *unaff_EDI;
    piVar4 = unaff_EDI;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar3 = (char *)*unaff_EDI;
    puVar5 = puVar2;
    while (pcVar3 != (char *)0x0) {
      pcVar3 = __strdup(pcVar3);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
      unaff_EDI = unaff_EDI + 1;
      pcVar3 = (char *)*unaff_EDI;
    }
    *puVar5 = 0;
    return puVar2;
  }
  return puVar2;
}


// ==== 1002ee11 FUN_1002ee11

undefined4 __cdecl FUN_1002ee11(undefined4 *param_1,int param_2)

{
  uint _Size;
  uchar *_Str;
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  int *piVar4;
  size_t sVar5;
  char *_Dst;
  errno_t eVar6;
  BOOL BVar7;
  int *piVar8;
  bool bVar9;
  size_t _Size_00;
  uchar *_Src;
  undefined4 local_14;
  
  local_14 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1001d94b();
    *puVar1 = 0x16;
    FUN_100178f5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_1002ee9f:
    puVar1 = (undefined4 *)FUN_1001d94b();
    *puVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_1004ce74 == DAT_1004ce78) {
    DAT_1004ce74 = copy_environ();
  }
  if (DAT_1004ce74 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_1004ce7c == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_1004ce74 = __malloc_crt(4);
      if (DAT_1004ce74 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_1004ce74 = 0;
      if (DAT_1004ce7c == (undefined4 *)0x0) {
        DAT_1004ce7c = __malloc_crt(4);
        if (DAT_1004ce7c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1004ce7c = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_1002ee9f;
    }
  }
  piVar4 = DAT_1004ce74;
  if (DAT_1004ce74 == (int *)0x0) {
    return 0xffffffff;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar4 == 0)) {
    if (bVar9) {
      _free(_Str);
      *param_1 = 0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return 0xffffffff;
    }
    if (0x3ffffffe < _Size) {
      return 0xffffffff;
    }
    piVar4 = __recalloc_crt(DAT_1004ce74,4,_Size);
    if (piVar4 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar4[_Count] = (int)_Str;
    (piVar4 + _Count)[1] = 0;
    *param_1 = 0;
  }
  else {
    piVar8 = piVar4 + _Count;
    _free((void *)*piVar8);
    if (!bVar9) {
      *piVar8 = (int)_Str;
      *param_1 = 0;
      goto LAB_1002efb0;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_1004ce74,_Count,4), piVar4 == (int *)0x0)) goto LAB_1002efb0;
  }
  DAT_1004ce74 = piVar4;
LAB_1002efb0:
  if (param_2 != 0) {
    _Size_00 = 1;
    sVar5 = _strlen((char *)_Str);
    _Dst = __calloc_crt(sVar5 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar5 = _strlen((char *)_Str);
      eVar6 = _strcpy_s(_Dst,sVar5 + 2,(char *)_Src);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar7 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar9 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar7 == 0) {
        local_14 = 0xffffffff;
        puVar1 = (undefined4 *)FUN_1001d94b();
        *puVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar9) {
    _free(_Str);
    *param_1 = 0;
    return local_14;
  }
  return local_14;
}


// ==== 1002f05d __strdup

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}


// ==== 1002f0ad __mbschr_l

/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    puVar3 = (undefined4 *)FUN_1001d94b();
    *puVar3 = 0x16;
    FUN_100178f5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (byte *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)_strchr((char *)_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          pbVar4 = _Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = _Str[1];
          if (bVar1 == 0) goto LAB_1002f155;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_1002f147;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_1002f155:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_1002f147:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 1002f167 __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 1002f190 _strchr

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


// ==== 1002f24e KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:000000b7

// ==== 10038440 Unwind@10038440

void Unwind_10038440(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 10038460 Unwind@10038460

void Unwind_10038460(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 10038480 Unwind@10038480

void Unwind_10038480(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 100384a0 Unwind@100384a0

void Unwind_100384a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100384a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 100384c0 Unwind@100384c0

void Unwind_100384c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100384c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100384e0 Unwind@100384e0

void Unwind_100384e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100384e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038500 Unwind@10038500

void Unwind_10038500(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038509 Unwind@10038509

void Unwind_10038509(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1003850f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}


// ==== 10038530 Unwind@10038530

void Unwind_10038530(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038550 Unwind@10038550

void Unwind_10038550(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038570 Unwind@10038570

void Unwind_10038570(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 10038590 Unwind@10038590

void Unwind_10038590(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 100385b0 Unwind@100385b0

void Unwind_100385b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100385b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100385d0 Unwind@100385d0

void Unwind_100385d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100385d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100385f0 Unwind@100385f0

void Unwind_100385f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100385f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038610 Unwind@10038610

void Unwind_10038610(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}


// ==== 10038630 Unwind@10038630

void Unwind_10038630(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 10038650 Unwind@10038650

void Unwind_10038650(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 0x34));
  return;
}


// ==== 10038670 Unwind@10038670

void Unwind_10038670(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 10038690 Unwind@10038690

void Unwind_10038690(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100386b0 Unwind@100386b0

void Unwind_100386b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100386b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}


// ==== 100386d0 Unwind@100386d0

void Unwind_100386d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100386d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100386f0 Unwind@100386f0

void Unwind_100386f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100386f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UAudioSubsystem::~UAudioSubsystem(*(UAudioSubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 100386f9 Unwind@100386f9

void Unwind_100386f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100386ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ==== 10038705 Unwind@10038705

void Unwind_10038705(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002560((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x7c));
  return;
}


// ==== 10038710 Unwind@10038710

void Unwind_10038710(void)

{
  int unaff_EBP;
  
  thunk_FUN_100026a0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x88));
  return;
}


// ==== 1003871e Unwind@1003871e

void Unwind_1003871e(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002c90((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ==== 1003872c Unwind@1003872c

void Unwind_1003872c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002dc0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ==== 1003873a Unwind@1003873a

void Unwind_1003873a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ==== 10038749 Unwind@10038749

void Unwind_10038749(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002810((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x120));
  return;
}


// ==== 10038780 Unwind@10038780

void Unwind_10038780(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UAudioSubsystem::~UAudioSubsystem(*(UAudioSubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038789 Unwind@10038789

void Unwind_10038789(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1003878f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ==== 10038795 Unwind@10038795

void Unwind_10038795(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002560((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x7c));
  return;
}


// ==== 100387a0 Unwind@100387a0

void Unwind_100387a0(void)

{
  int unaff_EBP;
  
  thunk_FUN_100026a0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x88));
  return;
}


// ==== 100387ae Unwind@100387ae

void Unwind_100387ae(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002c90((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ==== 100387bc Unwind@100387bc

void Unwind_100387bc(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002dc0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ==== 100387ca Unwind@100387ca

void Unwind_100387ca(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100387d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ==== 100387d9 Unwind@100387d9

void Unwind_100387d9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002810((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x120));
  return;
}


// ==== 10038840 Unwind@10038840

void Unwind_10038840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x14));
  return;
}


// ==== 100388d0 Unwind@100388d0

void Unwind_100388d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100388d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100388f0 Unwind@100388f0

void Unwind_100388f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100388f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038910 Unwind@10038910

void Unwind_10038910(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038930 Unwind@10038930

void Unwind_10038930(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038950 Unwind@10038950

void Unwind_10038950(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038970 Unwind@10038970

void Unwind_10038970(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038990 Unwind@10038990

void Unwind_10038990(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100389b0 Unwind@100389b0

void Unwind_100389b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100389b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100389f0 Unwind@100389f0

void Unwind_100389f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100389f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 100389f9 Unwind@100389f9

void Unwind_100389f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100389fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x5c));
  return;
}


// ==== 10038a02 Unwind@10038a02

void Unwind_10038a02(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10038a0b Unwind@10038a0b

void Unwind_10038a0b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 10038a14 Unwind@10038a14

void Unwind_10038a14(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 10038a1d Unwind@10038a1d

void Unwind_10038a1d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10038a26 Unwind@10038a26

void Unwind_10038a26(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x5c));
  return;
}


// ==== 10038a2f Unwind@10038a2f

void Unwind_10038a2f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 10038a38 Unwind@10038a38

void Unwind_10038a38(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10038a41 Unwind@10038a41

void Unwind_10038a41(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x5c));
  return;
}


// ==== 10038a4a Unwind@10038a4a

void Unwind_10038a4a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 10038a53 Unwind@10038a53

void Unwind_10038a53(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x18));
  return;
}


// ==== 10038a90 Unwind@10038a90

void Unwind_10038a90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 10038a99 Unwind@10038a99

void Unwind_10038a99(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 10038aa2 Unwind@10038aa2

void Unwind_10038aa2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 10038aab Unwind@10038aab

void Unwind_10038aab(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 10038ab4 Unwind@10038ab4

void Unwind_10038ab4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 10038abd Unwind@10038abd

void Unwind_10038abd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x1c));
  return;
}


// ==== 10038b00 Unwind@10038b00

void Unwind_10038b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10038b50 Unwind@10038b50

void Unwind_10038b50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038b59 Unwind@10038b59

void Unwind_10038b59(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038b62 Unwind@10038b62

void Unwind_10038b62(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038b6b Unwind@10038b6b

void Unwind_10038b6b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038b74 Unwind@10038b74

void Unwind_10038b74(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038b7d Unwind@10038b7d

void Unwind_10038b7d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038b86 Unwind@10038b86

void Unwind_10038b86(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038b8f Unwind@10038b8f

void Unwind_10038b8f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038b98 Unwind@10038b98

void Unwind_10038b98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038ba1 Unwind@10038ba1

void Unwind_10038ba1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038baa Unwind@10038baa

void Unwind_10038baa(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038bb3 Unwind@10038bb3

void Unwind_10038bb3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038bbc Unwind@10038bbc

void Unwind_10038bbc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038bc5 Unwind@10038bc5

void Unwind_10038bc5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038bce Unwind@10038bce

void Unwind_10038bce(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038bd7 Unwind@10038bd7

void Unwind_10038bd7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038be0 Unwind@10038be0

void Unwind_10038be0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038be9 Unwind@10038be9

void Unwind_10038be9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038bf2 Unwind@10038bf2

void Unwind_10038bf2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 10038bfb Unwind@10038bfb

void Unwind_10038bfb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 10038c40 Unwind@10038c40

void Unwind_10038c40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038d20 Unwind@10038d20

void Unwind_10038d20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038d40 Unwind@10038d40

void Unwind_10038d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10038d60 Unwind@10038d60

void Unwind_10038d60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x18));
  return;
}


// ==== 10038d69 Unwind@10038d69

void Unwind_10038d69(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x18));
  return;
}


// ==== 10038d72 Unwind@10038d72

void Unwind_10038d72(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UAudioSubsystem::~UAudioSubsystem(*(UAudioSubsystem **)(unaff_EBP + -0x18));
  return;
}


// ==== 10038d7b Unwind@10038d7b

void Unwind_10038d7b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x60));
  return;
}


// ==== 10038d87 Unwind@10038d87

void Unwind_10038d87(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10038d90 Unwind@10038d90

void Unwind_10038d90(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002560((FArray *)(*(int *)(unaff_EBP + -0x18) + 0x7c));
  return;
}


// ==== 10038d9b Unwind@10038d9b

void Unwind_10038d9b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10038da4 Unwind@10038da4

void Unwind_10038da4(void)

{
  int unaff_EBP;
  
  thunk_FUN_100026a0((FArray *)(*(int *)(unaff_EBP + -0x18) + 0x88));
  return;
}


// ==== 10038db2 Unwind@10038db2

void Unwind_10038db2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10038dbb Unwind@10038dbb

void Unwind_10038dbb(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002c90((FArray *)(*(int *)(unaff_EBP + -0x18) + 0x94));
  return;
}


// ==== 10038dc9 Unwind@10038dc9

void Unwind_10038dc9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10038dd2 Unwind@10038dd2

void Unwind_10038dd2(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002dc0((FArray *)(*(int *)(unaff_EBP + -0x18) + 0xa0));
  return;
}


// ==== 10038de0 Unwind@10038de0

void Unwind_10038de0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x114));
  return;
}


// ==== 10038def Unwind@10038def

void Unwind_10038def(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10038df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10038df8 Unwind@10038df8

void Unwind_10038df8(void)

{
  int unaff_EBP;
  
  thunk_FUN_10002810((FArray *)(*(int *)(unaff_EBP + -0x18) + 0x120));
  return;
}


// ==== 10038e60 Unwind@10038e60

void Unwind_10038e60(void)

{
  int unaff_EBP;
  
  thunk_FUN_1000c060((FArray *)(unaff_EBP + 0x40));
  return;
}


// ==== 10038e80 Unwind@10038e80

void Unwind_10038e80(void)

{
                    /* WARNING: Could not recover jumptable at 0x10038e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray((FArray *)&UALAudioSubsystem::GSoundObject);
  return;
}


// ==== 10038ea0 Unwind@10038ea0

void Unwind_10038ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x10038ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray((FArray *)&UALAudioSubsystem::GEmptySoundSlot);
  return;
}


// ==== 1003a010 FUN_1003a010

void FUN_1003a010(void)

{
  code *pcVar1;
  code *pcVar2;
  ushort *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  
  pcVar2 = PrivateStaticClass_exref;
  pcVar1 = PrivateStaticClass_exref;
  pcVar6 = UALAudioSubsystem::StaticConstructor;
  pcVar5 = UALAudioSubsystem::InternalConstructor;
  uVar4 = 0x4084004;
  puVar3 = UObject::StaticConfigName();
  UClass::UClass(&UALAudioSubsystem::PrivateStaticClass,0,0x15c,4,pcVar2,pcVar1,0,0,0,0,
                 L"ALAudioSubsystem",GPackage,puVar3,uVar4,pcVar5,pcVar6);
  _atexit((_func_4879 *)&LAB_1003b0c0);
  return;
}


// ==== 1003b0d0 FUN_1003b0d0

void FUN_1003b0d0(void)

{
  thunk_FUN_100087f0((FArray *)&UALAudioSubsystem::GEmptySoundSlot);
  return;
}


// ==== 1003b0e0 FUN_1003b0e0

void FUN_1003b0e0(void)

{
  thunk_FUN_1000bf50((FArray *)&UALAudioSubsystem::GSoundObject);
  return;
}


