// ==== 1052c298 ___crtCompareStringA

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


// ==== 1052c2d8 __strnicoll_l

/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  DWORD *pDVar1;
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
    pDVar1 = FUN_1051d46b();
    *pDVar1 = 0x16;
    FUN_10517185((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        pDVar1 = FUN_1051d46b();
        *pDVar1 = 0x16;
        goto LAB_1052c3ad;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    pDVar1 = FUN_1051d46b();
    *pDVar1 = 0x16;
    FUN_10517185((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1052c3ad:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 1052c3d0 __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_1054a3b8 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 1052c3f7 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_10549e08;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10549e08 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10549e08 >> 2;
}


// ==== 1052c444 copy_environ

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


// ==== 1052c4a1 FUN_1052c4a1

undefined4 __cdecl FUN_1052c4a1(undefined4 *param_1,int param_2)

{
  uint _Size;
  uchar *_Str;
  DWORD *pDVar1;
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
    pDVar1 = FUN_1051d46b();
    *pDVar1 = 0x16;
    FUN_10517185((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_1052c52f:
    pDVar1 = FUN_1051d46b();
    *pDVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_10549e08 == DAT_10549e0c) {
    DAT_10549e08 = copy_environ();
  }
  if (DAT_10549e08 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10549e10 == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_10549e08 = __malloc_crt(4);
      if (DAT_10549e08 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10549e08 = 0;
      if (DAT_10549e10 == (undefined4 *)0x0) {
        DAT_10549e10 = __malloc_crt(4);
        if (DAT_10549e10 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10549e10 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_1052c52f;
    }
  }
  piVar4 = DAT_10549e08;
  if (DAT_10549e08 == (int *)0x0) {
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
    piVar4 = __recalloc_crt(DAT_10549e08,4,_Size);
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
      goto LAB_1052c640;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_10549e08,_Count,4), piVar4 == (int *)0x0)) goto LAB_1052c640;
  }
  DAT_10549e08 = piVar4;
LAB_1052c640:
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
        pDVar1 = FUN_1051d46b();
        *pDVar1 = 0x2a;
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


// ==== 1052c6ed __strdup

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


// ==== 1052c73d __mbschr_l

/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  DWORD *pDVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    pDVar3 = FUN_1051d46b();
    *pDVar3 = 0x16;
    FUN_10517185((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
          if (bVar1 == 0) goto LAB_1052c7e5;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_1052c7d7;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_1052c7e5:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_1052c7d7:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 1052c7f7 __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 1052c820 _strchr

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


// ==== 1052c8de KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:00000065

// ==== 10534db0 Unwind@10534db0

void Unwind_10534db0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10534db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UTexture::~UTexture(*(UTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534dd0 Unwind@10534dd0

void Unwind_10534dd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10534dd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UTexture::~UTexture(*(UTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534df0 Unwind@10534df0

void Unwind_10534df0(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534e10 Unwind@10534e10

void Unwind_10534e10(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534e30 Unwind@10534e30

void Unwind_10534e30(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534e50 Unwind@10534e50

void Unwind_10534e50(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534e70 Unwind@10534e70

void Unwind_10534e70(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534e90 Unwind@10534e90

void Unwind_10534e90(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534eb0 Unwind@10534eb0

void Unwind_10534eb0(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534ed0 Unwind@10534ed0

void Unwind_10534ed0(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534ef0 Unwind@10534ef0

void Unwind_10534ef0(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10534f10 Unwind@10534f10

void Unwind_10534f10(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10535050 Unwind@10535050

void Unwind_10535050(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10535053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10535130 Unwind@10535130

void Unwind_10535130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10535133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UTexture::~UTexture(*(UTexture **)(unaff_EBP + -0x18));
  return;
}


// ==== 105351a0 Unwind@105351a0

void Unwind_105351a0(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x1c));
  return;
}


// ==== 105351f0 Unwind@105351f0

void Unwind_105351f0(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x18));
  return;
}


// ==== 10535230 Unwind@10535230

void Unwind_10535230(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x18));
  return;
}


// ==== 10535280 Unwind@10535280

void Unwind_10535280(void)

{
  int unaff_EBP;
  
  UWaterTexture::~UWaterTexture(*(UWaterTexture **)(unaff_EBP + -0x18));
  return;
}


// ==== 105352c0 Unwind@105352c0

void Unwind_105352c0(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x18));
  return;
}


// ==== 10535300 Unwind@10535300

void Unwind_10535300(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10535303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 105353d0 Unwind@105353d0

void Unwind_105353d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x105353d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10535400 Unwind@10535400

void Unwind_10535400(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10535408 Unwind@10535408

void Unwind_10535408(void)

{
  int unaff_EBP;
  
  thunk_FUN_1050f210((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x640));
  return;
}


// ==== 10535430 Unwind@10535430

void Unwind_10535430(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 10535438 Unwind@10535438

void Unwind_10535438(void)

{
  int unaff_EBP;
  
  thunk_FUN_1050f210((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x640));
  return;
}


// ==== 10535460 Unwind@10535460

void Unwind_10535460(void)

{
  int unaff_EBP;
  
  UFractalTexture::~UFractalTexture(*(UFractalTexture **)(unaff_EBP + -0x14));
  return;
}


// ==== 10535468 Unwind@10535468

void Unwind_10535468(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1053546b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10535471 Unwind@10535471

void Unwind_10535471(void)

{
  int unaff_EBP;
  
  thunk_FUN_1050f210((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x640));
  return;
}


// ==== 10536570 FUN_10536570

void FUN_10536570(void)

{
  code *pcVar1;
  code *pcVar2;
  ushort *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  
  pcVar2 = PrivateStaticClass_exref;
  pcVar1 = PrivateStaticClass_exref;
  uVar4 = 0x4084004;
  pcVar5 = InternalConstructor_exref;
  pcVar6 = StaticConstructor_exref;
  puVar3 = UObject::StaticConfigName();
  UClass::UClass(&UFractalTexture::PrivateStaticClass,0,0x624,1,pcVar2,pcVar1,0,0,0,0,
                 L"FractalTexture",GPackage,puVar3,uVar4,pcVar5,pcVar6);
  _atexit((_func_4879 *)&LAB_105379f0);
  return;
}


// ==== 10537a00 FUN_10537a00

void FUN_10537a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x10537a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClass::~UClass(&UFireTexture::PrivateStaticClass);
  return;
}


// ==== 10537a10 FUN_10537a10

void FUN_10537a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x10537a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClass::~UClass(&UWaterTexture::PrivateStaticClass);
  return;
}


// ==== 10537a20 FUN_10537a20

void FUN_10537a20(void)

{
                    /* WARNING: Could not recover jumptable at 0x10537a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClass::~UClass(&UWaveTexture::PrivateStaticClass);
  return;
}


// ==== 10537a30 FUN_10537a30

void FUN_10537a30(void)

{
                    /* WARNING: Could not recover jumptable at 0x10537a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClass::~UClass(&UFluidTexture::PrivateStaticClass);
  return;
}


// ==== 10537a40 FUN_10537a40

void FUN_10537a40(void)

{
                    /* WARNING: Could not recover jumptable at 0x10537a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClass::~UClass(&UWetTexture::PrivateStaticClass);
  return;
}


// ==== 10537a50 FUN_10537a50

void FUN_10537a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x10537a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClass::~UClass(&UIceTexture::PrivateStaticClass);
  return;
}


