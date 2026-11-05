// ==== 11139e86 _wcstol

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2005 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1118a2d8 == 0) {
    ppuVar2 = &PTR_DAT_11187b50;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 11139eca _wcstoul

/* Library Function - Single Match
    _wcstoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1118a2d8 == 0) {
    ppuVar2 = &PTR_DAT_11187b50;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


// ==== 11139f2e ___initconout

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_1118893c = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// ==== 1113a149 __crtGetStringTypeW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  LPWORD pWVar1;
  uint _Size;
  LPSTR lpSrcStr;
  BOOL BVar2;
  DWORD DVar3;
  uint _Size_00;
  undefined4 *puVar4;
  LPWORD lpCharType;
  int iVar5;
  LPSTR local_c;
  uint local_8;
  
  local_8 = DAT_11187648 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_1113a35b;
  if (DAT_1118a790 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1118a790 = 2;
      }
      goto LAB_1113a1b0;
    }
    DAT_1118a790 = 1;
  }
  else {
LAB_1113a1b0:
    if (DAT_1118a790 != 1) {
      if ((DAT_1118a790 != 2) && (DAT_1118a790 != 0)) goto LAB_1113a35b;
      if (param_7 == 0) {
        param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
      }
      if (param_6 == 0) {
        param_6 = param_1->locinfo->lc_codepage;
      }
      iVar5 = ___ansicp(param_7);
      if ((param_6 != iVar5) && (iVar5 != -1)) {
        param_6 = iVar5;
      }
      _Size_00 = WideCharToMultiByte(param_6,0,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (_Size_00 == 0) goto LAB_1113a35b;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_1113a261:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_1113a261;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_1113a35b;
      _memset(local_c,0,_Size_00);
      iVar5 = WideCharToMultiByte(param_6,0,param_3,param_4,local_c,_Size_00,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar5 != 0) {
        if (((int)(_Size_00 + 1) < 1) || (0x7ffffff0 < _Size_00 + 1)) {
          lpCharType = (LPWORD)0x0;
        }
        else {
          _Size = _Size_00 * 2 + 10;
          if (_Size < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_1113a34f;
            lpCharType = (LPWORD)&stack0xffffffe8;
          }
          else {
            lpCharType = _malloc(_Size);
            if (lpCharType != (LPWORD)0x0) {
              lpCharType[0] = 0xdddd;
              lpCharType[1] = 0;
              lpCharType = lpCharType + 4;
            }
          }
        }
        lpSrcStr = local_c;
        if (lpCharType != (LPWORD)0x0) {
          if (param_7 == 0) {
            param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
          }
          pWVar1 = lpCharType + param_4;
          *pWVar1 = 0xffff;
          pWVar1[-1] = 0xffff;
          GetStringTypeA(param_7,param_2,lpSrcStr,_Size_00,lpCharType);
          if ((pWVar1[-1] != 0xffff) && (*pWVar1 == 0xffff)) {
            _memmove(param_5,lpCharType,param_4 * 2);
          }
          __freea(lpCharType);
        }
      }
LAB_1113a34f:
      __freea(local_c);
      goto LAB_1113a35b;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_1113a35b:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 1113a36d ___crtGetStringTypeW

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetStringTypeW_stat(&local_14,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 1113a3ab __getenv_helper_nolock

/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_1118bca0 == 0) {
    return (char *)0x0;
  }
  if (((DAT_11189d24 != (int *)0x0) ||
      (((DAT_11189d2c != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_11189d24 != (int *)0x0)))) && (piVar3 = DAT_11189d24, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}


// ==== 1113a42c __getenv_s_helper

/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  DWORD *pDVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_1113a469;
    }
    else if (param_2 != 0) {
LAB_1113a469:
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      _Str = __getenv_helper_nolock(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        *in_EAX = sVar2 + 1;
        if (param_2 != 0) {
          if (param_2 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = _strcpy_s(param_1,param_2,_Str);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      return 0;
    }
  }
  pDVar1 = FUN_1111c682();
  *pDVar1 = 0x16;
  FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 1113a4bf __dupenv_s_helper

/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl __dupenv_s_helper(size_t *param_1,char *param_2)

{
  DWORD *pDVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *unaff_EBX = 0;
    if (param_1 != (size_t *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (char *)0x0) {
      _Str = __getenv_helper_nolock(param_2);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = _calloc(sVar2,1);
        *unaff_EBX = _Dst;
        if (_Dst == (char *)0x0) {
          pDVar1 = FUN_1111c682();
          *pDVar1 = 0xc;
          pDVar1 = FUN_1111c682();
          return *pDVar1;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_1 != (size_t *)0x0) {
          *param_1 = sVar2;
        }
      }
      return 0;
    }
  }
  pDVar1 = FUN_1111c682();
  *pDVar1 = 0x16;
  FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 1113a7b0 ___ascii_strnicmp

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2005 Release */

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
      if (bVar2 != (byte)uVar3) goto LAB_1113a801;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_1113a801:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 1113a811 __wchartodigit

/* Library Function - Single Match
    __wchartodigit
   
   Library: Visual Studio 2005 Release */

int __cdecl __wchartodigit(ushort param_1)

{
  int iVar1;
  bool bVar2;
  
  if (0x2f < param_1) {
    if (param_1 < 0x3a) {
      return param_1 - 0x30;
    }
    iVar1 = 0xff10;
    if (param_1 < 0xff10) {
      iVar1 = 0x660;
      if (param_1 < 0x660) {
        return -1;
      }
      if (param_1 < 0x66a) goto LAB_1113a84f;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_1113a84f;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_1113a84f;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_1113a84f;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_1113a84f;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_1113a84f;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_1113a84f;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_1113a84f;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_1113a84f;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_1113a84f;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_1113a84f;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_1113a84f;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_1113a84f;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_1113a84f;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_1113a84f;
      iVar1 = 0x1810;
      if (param_1 < 0x1810) {
        return -1;
      }
      bVar2 = param_1 < 0x181a;
    }
    else {
      bVar2 = param_1 < 0xff1a;
    }
    if (bVar2) {
LAB_1113a84f:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}


// ==== 1113a993 FUN_1113a993

undefined4 __cdecl FUN_1113a993(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1118bba0 + 0x74) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1118bba0 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1113a9f2;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1113a9f4;
    }
  }
LAB_1113a9f2:
  DVar4 = 0;
LAB_1113a9f4:
  FUN_1113752e(param_1);
  *(undefined1 *)((&DAT_1118bba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x38) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1111c6a8(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ==== 1113ab20 __mbsnbicoll_l

/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
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
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    pDVar1 = FUN_1111c682();
    *pDVar1 = 0x16;
    FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_1113abe9;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    pDVar1 = FUN_1111c682();
    *pDVar1 = 0x16;
    FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1113abe9:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 1113ac0c __mbsnbicoll

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 1113ac23 ___wtomb_environ

/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2005 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_11189d2c;
  puVar2 = DAT_11189d2c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = FUN_1113b27e(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


// ==== 1113acec __crtCompareStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  ulong uVar8;
  byte *in_EDX;
  byte *pbVar9;
  PCNZCH _Memory;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_11187648 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_1118a794 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1118a794 = 2;
      }
    }
    else {
      DAT_1118a794 = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_1113b063;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_1113ad66;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_1113ad66:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_1113b063;
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_1113ad88;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_1113ad88:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_1118a794 == 2) || (DAT_1118a794 == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_1113b063;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0)
      ;
      if (pbVar9 == (byte *)0x0) goto LAB_1113b063;
      _Memory = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                     (LPSTR)0x0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        goto LAB_1113b063;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
    }
    goto LAB_1113b063;
  }
  if (DAT_1118a794 != 1) goto LAB_1113b063;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_1113b063;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_1113b063;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               (((byte)*lpMultiByteStr < *pBVar4 || (pBVar4[1] < (byte)*lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_1113b063;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1113b063;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1113aedc:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_1113aedc;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_1113b063;
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_1113af9d;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = _malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_1113af9d:
  __freea(local_24);
LAB_1113b063:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


// ==== 1113b075 ___crtCompareStringA

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


// ==== 1113b0b5 __strnicoll_l

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
    pDVar1 = FUN_1111c682();
    *pDVar1 = 0x16;
    FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        pDVar1 = FUN_1111c682();
        *pDVar1 = 0x16;
        goto LAB_1113b18a;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    pDVar1 = FUN_1111c682();
    *pDVar1 = 0x16;
    FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1113b18a:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 1113b1ad __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_1118a2d8 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 1113b1d4 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_11189d24;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_11189d24 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_11189d24 >> 2;
}


// ==== 1113b221 copy_environ

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


// ==== 1113b27e FUN_1113b27e

undefined4 __cdecl FUN_1113b27e(undefined4 *param_1,int param_2)

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
    pDVar1 = FUN_1111c682();
    *pDVar1 = 0x16;
    FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_1113b30c:
    pDVar1 = FUN_1111c682();
    *pDVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_11189d24 == DAT_11189d28) {
    DAT_11189d24 = copy_environ();
  }
  if (DAT_11189d24 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_11189d2c == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_11189d24 = __malloc_crt(4);
      if (DAT_11189d24 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_11189d24 = 0;
      if (DAT_11189d2c == (undefined4 *)0x0) {
        DAT_11189d2c = __malloc_crt(4);
        if (DAT_11189d2c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_11189d2c = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_1113b30c;
    }
  }
  piVar4 = DAT_11189d24;
  if (DAT_11189d24 == (int *)0x0) {
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
    piVar4 = __recalloc_crt(DAT_11189d24,4,_Size);
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
      goto LAB_1113b41d;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_11189d24,_Count,4), piVar4 == (int *)0x0)) goto LAB_1113b41d;
  }
  DAT_11189d24 = piVar4;
LAB_1113b41d:
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
        pDVar1 = FUN_1111c682();
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


// ==== 1113b4ca __strdup

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


// ==== 1113b51a __mbschr_l

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
    pDVar3 = FUN_1111c682();
    *pDVar3 = 0x16;
    FUN_1111c60a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
          if (bVar1 == 0) goto LAB_1113b5c2;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_1113b5b4;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_1113b5c2:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_1113b5b4:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 1113b5d4 __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 1113b600 _strchr

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


// ==== 1113b6be KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:00000153

// ==== 11148960 Unwind@11148960

void Unwind_11148960(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClient::~UClient(*(UClient **)(unaff_EBP + -0x18));
  return;
}


// ==== 111489e0 Unwind@111489e0

void Unwind_111489e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x111489e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClient::~UClient(*(UClient **)(unaff_EBP + -0x10));
  return;
}


// ==== 11148a00 Unwind@11148a00

void Unwind_11148a00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 11148a80 Unwind@11148a80

void Unwind_11148a80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 4));
  return;
}


// ==== 11148aa0 Unwind@11148aa0

void Unwind_11148aa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UClient::~UClient(*(UClient **)(unaff_EBP + -0x10));
  return;
}


// ==== 11148ac0 Unwind@11148ac0

void Unwind_11148ac0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UViewport::~UViewport(*(UViewport **)(unaff_EBP + -0x10));
  return;
}


// ==== 11148ae0 Unwind@11148ae0

void Unwind_11148ae0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UViewport::~UViewport(*(UViewport **)(unaff_EBP + -0x10));
  return;
}


// ==== 11148b00 Unwind@11148b00

void Unwind_11148b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11148b20 Unwind@11148b20

void Unwind_11148b20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x14));
  return;
}


// ==== 11148b40 Unwind@11148b40

void Unwind_11148b40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x14));
  return;
}


// ==== 11148b60 Unwind@11148b60

void Unwind_11148b60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11148c10 Unwind@11148c10

void Unwind_11148c10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x1c));
  return;
}


// ==== 11148c19 Unwind@11148c19

void Unwind_11148c19(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x1c));
  return;
}


// ==== 11148cb0 Unwind@11148cb0

void Unwind_11148cb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11148ce0 Unwind@11148ce0

void Unwind_11148ce0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UViewport::~UViewport(*(UViewport **)(unaff_EBP + -0x18));
  return;
}


// ==== 11148ce9 Unwind@11148ce9

void Unwind_11148ce9(void)

{
  int unaff_EBP;
  
  thunk_FUN_111027a0(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148cf4 Unwind@11148cf4

void Unwind_11148cf4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148cfd Unwind@11148cfd

void Unwind_11148cfd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d06 Unwind@11148d06

void Unwind_11148d06(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d0f Unwind@11148d0f

void Unwind_11148d0f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d18 Unwind@11148d18

void Unwind_11148d18(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d21 Unwind@11148d21

void Unwind_11148d21(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d2a Unwind@11148d2a

void Unwind_11148d2a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d33 Unwind@11148d33

void Unwind_11148d33(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d3c Unwind@11148d3c

void Unwind_11148d3c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11148d80 Unwind@11148d80

void Unwind_11148d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x100));
  return;
}


// ==== 11148d8c Unwind@11148d8c

void Unwind_11148d8c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x10c));
  return;
}


// ==== 11148d98 Unwind@11148d98

void Unwind_11148d98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FCameraSceneNode::~FCameraSceneNode((FCameraSceneNode *)(unaff_EBP + -0x3a8));
  return;
}


// ==== 11148da4 Unwind@11148da4

void Unwind_11148da4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11148daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FCanvasUtil::~FCanvasUtil((FCanvasUtil *)(unaff_EBP + -0x1b4));
  return;
}


// ==== 11149e40 FUN_11149e40

void FUN_11149e40(void)

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
  pcVar13 = UWindowsClient::StaticConstructor;
  pcVar12 = UWindowsClient::InternalConstructor;
  uVar11 = 0x4084004;
  puVar2 = UObject::StaticConfigName();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  pwVar10 = GPackage;
  pwVar9 = L"WindowsClient";
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  pUVar3 = UObject::StaticClass();
  pUVar4 = UClient::StaticClass();
  UClass::UClass(&UWindowsClient::PrivateStaticClass,0,0xf4,0xc,pUVar4,pUVar3,uVar5,uVar6,uVar7,
                 uVar8,pwVar9,pwVar10,puVar2,uVar11,pcVar12,pcVar13);
  _atexit((_func_4879 *)&LAB_1114afa0);
  return;
}


// ==== 11149ef0 FUN_11149ef0

void FUN_11149ef0(void)

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
  pcVar12 = UWindowsViewport::InternalConstructor;
  uVar11 = 0x4084004;
  pcVar13 = StaticConstructor_exref;
  puVar2 = UObject::StaticConfigName();
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  pwVar10 = GPackage;
  pwVar9 = L"WindowsViewport";
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  pUVar4 = &UWindowsClient::PrivateStaticClass;
  pUVar3 = UViewport::StaticClass();
  UClass::UClass(&UWindowsViewport::PrivateStaticClass,0,0x224,8,pUVar3,pUVar4,uVar5,uVar6,uVar7,
                 uVar8,pwVar9,pwVar10,puVar2,uVar11,pcVar12,pcVar13);
  _atexit((_func_4879 *)&LAB_1114afb0);
  return;
}


