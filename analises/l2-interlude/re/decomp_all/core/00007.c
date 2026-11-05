// ==== 1019ad89 ___crtLCMapStringA

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


// ==== 1019adcc __crtGetStringTypeA_stat

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
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_1033e8f8 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1033e8f8 = 2;
      }
      goto LAB_1019ae25;
    }
    DAT_1033e8f8 = 1;
  }
  else {
LAB_1019ae25:
    if ((DAT_1033e8f8 == 2) || (DAT_1033e8f8 == 0)) {
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
           (_Memory = (void *)___convertcp(param_5,puVar5,param_2,&param_3,0,0),
           param_2 = (ulong)_Memory, _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_1019af72;
    }
    if (DAT_1033e8f8 != 1) goto LAB_1019af72;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1019af72;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1019aeb5:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1019aeb5;
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
LAB_1019af72:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 1019af84 ___crtGetStringTypeA

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


// ==== 1019aff3 __get_lc_time

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2005 Release */

uint __get_lc_time(void)

{
  LPCWSTR pWVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  void *unaff_ESI;
  localeinfo_struct local_14;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_c = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (unaff_ESI == (void *)0x0) {
    return 0xffffffff;
  }
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  uVar2 = ___getlocaleinfo(&local_14,1,local_8,0x31,(void *)((int)unaff_ESI + 4));
  uVar3 = ___getlocaleinfo(&local_14,1,local_8,0x32,(void *)((int)unaff_ESI + 8));
  uVar4 = ___getlocaleinfo(&local_14,1,local_8,0x33,(void *)((int)unaff_ESI + 0xc));
  uVar5 = ___getlocaleinfo(&local_14,1,local_8,0x34,(void *)((int)unaff_ESI + 0x10));
  uVar6 = ___getlocaleinfo(&local_14,1,local_8,0x35,(void *)((int)unaff_ESI + 0x14));
  uVar7 = ___getlocaleinfo(&local_14,1,local_8,0x36,(void *)((int)unaff_ESI + 0x18));
  uVar8 = ___getlocaleinfo(&local_14,1,local_8,0x37,unaff_ESI);
  uVar9 = ___getlocaleinfo(&local_14,1,local_8,0x2a,(void *)((int)unaff_ESI + 0x20));
  uVar10 = ___getlocaleinfo(&local_14,1,local_8,0x2b,(void *)((int)unaff_ESI + 0x24));
  uVar11 = ___getlocaleinfo(&local_14,1,local_8,0x2c,(void *)((int)unaff_ESI + 0x28));
  uVar12 = ___getlocaleinfo(&local_14,1,local_8,0x2d,(void *)((int)unaff_ESI + 0x2c));
  uVar13 = ___getlocaleinfo(&local_14,1,local_8,0x2e,(void *)((int)unaff_ESI + 0x30));
  uVar14 = ___getlocaleinfo(&local_14,1,local_8,0x2f,(void *)((int)unaff_ESI + 0x34));
  uVar15 = ___getlocaleinfo(&local_14,1,local_8,0x30,(void *)((int)unaff_ESI + 0x1c));
  uVar16 = ___getlocaleinfo(&local_14,1,local_8,0x44,(void *)((int)unaff_ESI + 0x38));
  uVar17 = ___getlocaleinfo(&local_14,1,local_8,0x45,(void *)((int)unaff_ESI + 0x3c));
  uVar18 = ___getlocaleinfo(&local_14,1,local_8,0x46,(void *)((int)unaff_ESI + 0x40));
  uVar19 = ___getlocaleinfo(&local_14,1,local_8,0x47,(void *)((int)unaff_ESI + 0x44));
  uVar20 = ___getlocaleinfo(&local_14,1,local_8,0x48,(void *)((int)unaff_ESI + 0x48));
  uVar21 = ___getlocaleinfo(&local_14,1,local_8,0x49,(void *)((int)unaff_ESI + 0x4c));
  uVar22 = ___getlocaleinfo(&local_14,1,local_8,0x4a,(void *)((int)unaff_ESI + 0x50));
  uVar23 = ___getlocaleinfo(&local_14,1,local_8,0x4b,(void *)((int)unaff_ESI + 0x54));
  uVar24 = ___getlocaleinfo(&local_14,1,local_8,0x4c,(void *)((int)unaff_ESI + 0x58));
  uVar25 = ___getlocaleinfo(&local_14,1,local_8,0x4d,(void *)((int)unaff_ESI + 0x5c));
  uVar26 = ___getlocaleinfo(&local_14,1,local_8,0x4e,(void *)((int)unaff_ESI + 0x60));
  uVar27 = ___getlocaleinfo(&local_14,1,local_8,0x4f,(void *)((int)unaff_ESI + 100));
  uVar28 = ___getlocaleinfo(&local_14,1,local_8,0x38,(void *)((int)unaff_ESI + 0x68));
  uVar29 = ___getlocaleinfo(&local_14,1,local_8,0x39,(void *)((int)unaff_ESI + 0x6c));
  uVar30 = ___getlocaleinfo(&local_14,1,local_8,0x3a,(void *)((int)unaff_ESI + 0x70));
  uVar31 = ___getlocaleinfo(&local_14,1,local_8,0x3b,(void *)((int)unaff_ESI + 0x74));
  uVar32 = ___getlocaleinfo(&local_14,1,local_8,0x3c,(void *)((int)unaff_ESI + 0x78));
  uVar33 = ___getlocaleinfo(&local_14,1,local_8,0x3d,(void *)((int)unaff_ESI + 0x7c));
  uVar34 = ___getlocaleinfo(&local_14,1,local_8,0x3e,(void *)((int)unaff_ESI + 0x80));
  uVar35 = ___getlocaleinfo(&local_14,1,local_8,0x3f,(void *)((int)unaff_ESI + 0x84));
  uVar36 = ___getlocaleinfo(&local_14,1,local_8,0x40,(void *)((int)unaff_ESI + 0x88));
  uVar37 = ___getlocaleinfo(&local_14,1,local_8,0x41,(void *)((int)unaff_ESI + 0x8c));
  uVar38 = ___getlocaleinfo(&local_14,1,local_8,0x42,(void *)((int)unaff_ESI + 0x90));
  uVar39 = ___getlocaleinfo(&local_14,1,local_8,0x43,(void *)((int)unaff_ESI + 0x94));
  uVar40 = ___getlocaleinfo(&local_14,1,local_8,0x28,(void *)((int)unaff_ESI + 0x98));
  uVar41 = ___getlocaleinfo(&local_14,1,local_8,0x29,(void *)((int)unaff_ESI + 0x9c));
  uVar42 = ___getlocaleinfo(&local_14,1,local_c,0x1f,(void *)((int)unaff_ESI + 0xa0));
  uVar43 = ___getlocaleinfo(&local_14,1,local_c,0x20,(void *)((int)unaff_ESI + 0xa4));
  uVar44 = ___getlocaleinfo(&local_14,1,local_c,0x1003,(void *)((int)unaff_ESI + 0xa8));
  pWVar1 = local_c;
  uVar45 = ___getlocaleinfo(&local_14,0,local_c,0x1009,(void *)((int)unaff_ESI + 0xb0));
  *(LPCWSTR *)((int)unaff_ESI + 0xac) = pWVar1;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}


// ==== 1019b40c ___free_lc_time

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void ___free_lc_time(undefined4 *param_1)

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


// ==== 1019b59c ___init_time

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  int **ppiVar3;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_1023bb10;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    iVar2 = __get_lc_time();
    if (iVar2 != 0) {
      ___free_lc_time(_Memory);
      _free(_Memory);
      return 1;
    }
    _Memory[0x2d] = (undefined *)0x1;
  }
  ppiVar3 = &_LocInfo[1].lc_category[0].wrefcount;
  ppuVar1 = (undefined **)*ppiVar3;
  if (ppuVar1 != &PTR_DAT_1023bb10) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}


// ==== 1019b642 ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1023bbd0) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1023bbd4) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1023bbd8) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 1019b682 ___init_numeric

/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_1023bbd0;
LAB_1019b7ec:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_1023bbd0;
          _Address->lc_codepage = (uint)PTR_DAT_1023bbd4;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_1023bbd8;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_1019b712:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num(_Address);
            iVar7 = -1;
            goto LAB_1019b712;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_1019b79c;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_1019b79c:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_1019b7ec;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}


// ==== 1019b87d ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1023bbdc) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1023bbe0) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1023bbe4) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1023bbe8) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1023bbec) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1023bbf0) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1023bbf4) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 1019b906 ___init_monetary

/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  LONG LVar19;
  int iVar20;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_1023bbd0;
LAB_1019bb6d:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar19 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar19 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar20 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar22 = &PTR_DAT_1023bbd0;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_1019bb38:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_1019bb6d;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar20 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar16 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          if (iVar16 == 0 &&
              (((((((((((((iVar20 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = _Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar21 = pcVar17;
                if (cVar2 != ';') goto LAB_1019bb0d;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_1019bb0d:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_1019bb38;
          }
          ___free_lconv_mon(_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar20 = 1;
  }
  return iVar20;
}


// ==== 1019bbcd __Getdays_l

/* Library Function - Single Match
    __Getdays_l
   
   Library: Visual Studio 2005 Release */

char * __Getdays_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  int iVar6;
  int local_1c [2];
  int local_14;
  char local_10;
  char *local_c;
  uint local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_1c,param_1);
  iVar1 = *(int *)(local_1c[0] + 0xd4);
  local_8 = 0;
  do {
    iVar6 = local_8 * 4;
    local_c = (char *)_strlen(*(char **)(iVar6 + 0x1c + iVar1));
    sVar2 = _strlen(*(char **)(iVar6 + iVar1));
    local_8 = local_8 + 1;
    iVar5 = sVar2 + iVar5 + 2 + (int)local_c;
  } while (local_8 < 7);
  pcVar3 = __malloc_crt(iVar5 + 1);
  local_c = pcVar3;
  if (pcVar3 != (char *)0x0) {
    local_8 = 0;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + 0x1c + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      local_8 = local_8 + 1;
    } while (local_8 < 7);
    *pcVar3 = '\0';
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return local_c;
}


// ==== 1019bcd4 __Getmonths_l

/* Library Function - Single Match
    __Getmonths_l
   
   Library: Visual Studio 2005 Release */

char * __Getmonths_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_20 [2];
  int local_18;
  char local_14;
  size_t local_10;
  int local_c;
  char *local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
  iVar1 = *(int *)(local_20[0] + 0xd4);
  puVar6 = (undefined4 *)(iVar1 + 0x38);
  local_c = 0xc;
  do {
    local_8 = (char *)puVar6;
    local_10 = _strlen((char *)puVar6[0xc]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = (undefined4 *)((int)local_8 + 4);
    local_c = local_c + -1;
    iVar5 = sVar2 + iVar5 + 2 + local_10;
  } while (local_c != 0);
  local_8 = (char *)puVar6;
  pcVar3 = __malloc_crt(iVar5 + 1);
  local_8 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    puVar6 = (undefined4 *)(iVar1 + 0x68);
    local_c = 0xc;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)puVar6[-0xc]);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)*puVar6);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      puVar6 = puVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    *pcVar3 = '\0';
  }
  if (local_14 != '\0') {
    *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
  }
  return local_8;
}


// ==== 1019bddb __Gettnames_l

/* Library Function - Single Match
    __Gettnames_l
   
   Library: Visual Studio 2005 Release */

void * __Gettnames_l(localeinfo_struct *param_1)

{
  void *_Src;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  void *_Dst;
  errno_t eVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_28 [2];
  int local_20;
  char local_1c;
  size_t local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  size_t local_c;
  undefined4 *local_8;
  
  iVar8 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_1);
  _Src = *(void **)(local_28[0] + 0xd4);
  local_8 = (undefined4 *)0x0;
  do {
    iVar7 = (int)local_8 * 4;
    local_18 = _strlen(*(char **)(iVar7 + 0x1c + (int)_Src));
    sVar2 = _strlen(*(char **)(iVar7 + (int)_Src));
    local_8 = (undefined4 *)((int)local_8 + 1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_8 < 7);
  local_14 = (undefined4 *)((int)_Src + 0x38);
  local_10 = (undefined4 *)0xc;
  do {
    puVar1 = local_14;
    local_18 = _strlen((char *)local_14[0xc]);
    sVar2 = _strlen((char *)*puVar1);
    local_14 = local_14 + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_10 != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)((int)_Src + 0x9c));
  sVar3 = _strlen(*(char **)((int)_Src + 0x98));
  sVar4 = _strlen(*(char **)((int)_Src + 0xa0));
  sVar5 = _strlen(*(char **)((int)_Src + 0xa4));
  local_c = _strlen(*(char **)((int)_Src + 0xa8));
  local_c = sVar3 + iVar8 + sVar2 + sVar4 + sVar5 + 0xbd + local_c;
  _Dst = __malloc_crt(local_c);
  if (_Dst != (void *)0x0) {
    pcVar9 = (char *)((int)_Dst + 0xb8);
    _memcpy(_Dst,_Src,0xb8);
    local_8 = (undefined4 *)0x0;
    local_10 = (undefined4 *)((int)_Src + 0x1c);
    local_14 = (undefined4 *)((int)_Dst - (int)_Src);
    do {
      *(char **)((int)_Dst + (int)local_8 * 4) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[-7]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *(char **)((int)local_14 + (int)local_10) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_8 = (undefined4 *)((int)local_8 + 1);
      local_10 = local_10 + 1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_8 < 7);
    local_8 = (undefined4 *)((int)_Dst + 0x68);
    local_10 = (undefined4 *)((int)_Src + 0x38);
    local_18 = 0xc;
    do {
      *(char **)((int)local_10 + (int)local_14) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *local_8 = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[0xc]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = local_18 + -1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_18 != 0);
    *(char **)((int)_Dst + 0x98) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x98));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0x9c) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x9c));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa0) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa0));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa4) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa4));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa8) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa8));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return _Dst;
}


// ==== 1019c139 FUN_1019c139

void FUN_1019c139(void)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  char *in_EDX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*in_EDX != '\0')); in_EDX = in_EDX + 1) {
    *(char *)*in_ECX = *in_EDX;
    *in_ECX = *in_ECX + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}


// ==== 1019c18f FID_conflict:__store_num

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_num(int,int,char * *,unsigned int *,unsigned int)
    __store_num
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void FID_conflict___store_num(int param_1)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  uint *in_ECX;
  uint in_EDX;
  char *pcVar5;
  int *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    if (in_EDX < *in_ECX) {
      iVar3 = in_EDX - 1;
      if (in_EDX != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *unaff_EDI) = (char)(in_EAX % 10) + '0';
          iVar3 = iVar3 + -1;
          in_EAX = in_EAX / 10;
        } while (iVar3 != -1);
      }
      *unaff_EDI = *unaff_EDI + local_8;
      *in_ECX = *in_ECX - local_8;
    }
    else {
      *in_ECX = 0;
    }
  }
  else {
    uVar2 = *in_ECX;
    pcVar5 = (char *)*unaff_EDI;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_EAX / 10;
      *pcVar5 = (char)(in_EAX % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *in_ECX = *in_ECX - 1;
      uVar2 = *in_ECX;
      in_EAX = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*unaff_EDI;
    *unaff_EDI = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return;
}


// ==== 1019c208 FUN_1019c208

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1019c208(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char in_AL;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *in_EDX;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (in_AL < 'Z') {
    if (in_AL == 'Y') {
      if ((-0x76d < in_EDX[5]) && (in_EDX[5] < 0x1fa4)) goto LAB_1019c453;
LAB_1019c3bb:
      puVar3 = (undefined4 *)FUN_10183cab();
      goto LAB_1019c4e3;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < in_EDX[2]) && (in_EDX[2] < 0x18)) goto LAB_1019c453;
      }
      else {
        if (in_AL == '\x04') {
          return 1;
        }
        if (in_AL == '\r') {
          return 1;
        }
        if (in_AL == '%') {
          *(undefined1 *)*in_ECX = 0x25;
          *in_ECX = *in_ECX + 1;
          *param_2 = *param_2 + -1;
          return 1;
        }
        if (in_AL == 'A') {
          iVar2 = in_EDX[6];
joined_r0x1019c4d7:
          if ((-1 < iVar2) && (iVar2 < 7)) goto LAB_1019c5de;
        }
        else if (in_AL == 'B') {
          iVar2 = in_EDX[4];
joined_r0x1019c4bd:
          if ((-1 < iVar2) && (iVar2 < 0xc)) goto LAB_1019c5de;
        }
        else {
          if (in_AL != 'H') {
            return 0;
          }
          iVar1 = in_EDX[2];
          if (-1 < iVar1) {
            bVar5 = SBORROW4(iVar1,0x17);
            iVar2 = iVar1 + -0x17;
            bVar4 = iVar1 == 0x17;
            goto LAB_1019c26c;
          }
        }
      }
    }
    else {
      if (in_AL == 'M') {
        iVar2 = in_EDX[1];
      }
      else {
        if (in_AL != 'S') {
          if (in_AL == 'U') {
            iVar2 = in_EDX[6];
          }
          else {
            if (in_AL != 'W') {
              if (in_AL != 'X') {
                return 0;
              }
LAB_1019c49a:
              uVar6 = 2;
LAB_1019c49e:
              iVar2 = FUN_1019c5ee(param_1,uVar6);
              if (iVar2 == 0) {
                return 0;
              }
              return 1;
            }
            iVar2 = in_EDX[6];
          }
          if ((-1 < iVar2) && (iVar2 < 7)) {
            iVar2 = in_EDX[7];
joined_r0x1019c41a:
            if ((-1 < iVar2) && (iVar2 < 0x16e)) goto LAB_1019c453;
          }
          goto LAB_1019c4de;
        }
        iVar2 = *in_EDX;
      }
      if (-1 < iVar2) {
        bVar5 = SBORROW4(iVar2,0x3b);
        iVar2 = iVar2 + -0x3b;
        bVar4 = iVar2 == 0;
LAB_1019c26c:
        if (bVar4 || bVar5 != iVar2 < 0) {
LAB_1019c453:
          FID_conflict___store_num(param_4);
          return 1;
        }
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL != 'm') {
      if (in_AL == 'Z') {
LAB_1019c535:
        ___tzset();
        FUN_10184062();
LAB_1019c5de:
        FUN_1019c139();
        return 1;
      }
      if (in_AL == 'a') {
        iVar2 = in_EDX[6];
        goto joined_r0x1019c4d7;
      }
      if (in_AL == 'b') {
        iVar2 = in_EDX[4];
        goto joined_r0x1019c4bd;
      }
      if (in_AL == 'c') {
        iVar2 = FUN_1019c5ee(param_1,param_4 != 0);
        if (iVar2 == 0) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        *(undefined1 *)*in_ECX = 0x20;
        *in_ECX = *in_ECX + 1;
        *param_2 = *param_2 + -1;
        goto LAB_1019c49a;
      }
      if (in_AL != 'd') {
        if (in_AL != 'j') {
          return 0;
        }
        iVar2 = in_EDX[7];
        goto joined_r0x1019c41a;
      }
      if ((0 < in_EDX[3]) && (in_EDX[3] < 0x20)) goto LAB_1019c453;
      goto LAB_1019c3bb;
    }
    if ((-1 < in_EDX[4]) && (in_EDX[4] < 0xc)) goto LAB_1019c453;
  }
  else if (in_AL == 'p') {
    if ((-1 < in_EDX[2]) && (in_EDX[2] < 0x18)) goto LAB_1019c5de;
  }
  else if (in_AL == 'w') {
    if ((-1 < in_EDX[6]) && (in_EDX[6] < 7)) goto LAB_1019c453;
  }
  else {
    if (in_AL == 'x') {
      if (param_4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      goto LAB_1019c49e;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_1019c535;
    }
    if (-1 < in_EDX[5]) goto LAB_1019c453;
  }
LAB_1019c4de:
  puVar3 = (undefined4 *)FUN_10183cab();
LAB_1019c4e3:
  *puVar3 = 0x16;
  FUN_10183c33(0,0,0,0,0);
  return 0;
}


// ==== 1019c5ee FUN_1019c5ee

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_1019c5ee(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,
                 int param_6)

{
  code cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  code *_Str1;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  short local_24;
  short local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  code *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    _Str1 = *(code **)(param_6 + 0xa0);
  }
  else if (param_2 == 1) {
    _Str1 = *(code **)(param_6 + 0xa4);
  }
  else {
    _Str1 = *(code **)(param_6 + 0xa8);
  }
  if (*(int *)(param_6 + 0xb0) != 1) {
    local_10 = GetDateFormatA_exref;
    if (param_2 == 2) {
      local_10 = GetTimeFormatA_exref;
    }
    local_24 = param_3[10] + 0x76c;
    local_22 = param_3[8] + 1;
    local_1e = param_3[6];
    local_1c = param_3[4];
    local_1a = param_3[2];
    local_18 = *param_3;
    local_16 = 0;
    local_14 = (*local_10)(*(undefined4 *)(param_6 + 0xac),0,&local_24,_Str1,0,0);
    if (local_14 != 0) {
      if ((int)(local_14 + 8U) < 0x401) {
        puVar2 = (undefined4 *)&stack0xffffffd0;
        puVar6 = (undefined4 *)&stack0xffffffd0;
        if (&stack0x00000000 != (undefined1 *)0x30) {
LAB_1019c6ce:
          puVar6 = puVar2 + 2;
        }
      }
      else {
        puVar2 = _malloc(local_14 + 8U);
        puVar6 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0xdddd;
          goto LAB_1019c6ce;
        }
      }
      local_c = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        iVar3 = (*local_10)(*(undefined4 *)(param_6 + 0xac),0,&local_24,_Str1,puVar6,local_14);
        while ((iVar3 = iVar3 + -1, 0 < iVar3 && (*param_5 != 0))) {
          local_14 = iVar3;
          *(undefined1 *)*param_4 = *(undefined1 *)puVar6;
          *param_4 = *param_4 + 1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          *param_5 = *param_5 - 1;
        }
        __freea(local_c);
LAB_1019c720:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x1019c736:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_1019c720;
  local_c = (undefined4 *)0x0;
  local_10 = _Str1;
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    local_10 = local_10 + 1;
    uVar5 = uVar4 + 1;
  } while (*local_10 == cVar1);
  iVar3 = (int)(char)cVar1;
  if (iVar3 < 0x65) {
    if (iVar3 == 100) {
      if (uVar4 == 0) {
        local_c = (undefined4 *)0x1;
      }
      else {
joined_r0x1019c8b9:
        if ((uVar4 != 1) && (uVar4 != 2)) {
joined_r0x1019c8bf:
          if (uVar4 != 3) goto LAB_1019c78a;
        }
      }
      goto LAB_1019ca21;
    }
    if (iVar3 != 0x27) {
      if (iVar3 == 0x41) {
LAB_1019c812:
        iVar3 = ___ascii_stricmp((char *)_Str1,"am/pm");
        if (iVar3 == 0) {
          local_10 = _Str1 + 5;
        }
        else {
          iVar3 = ___ascii_stricmp((char *)_Str1,"a/p");
          if (iVar3 == 0) {
            local_10 = _Str1 + 3;
          }
        }
      }
      else if (iVar3 == 0x48) {
        if (uVar4 != 0) goto joined_r0x1019ca11;
        local_c = (undefined4 *)0x1;
      }
      else {
        if (iVar3 != 0x4d) {
          if (iVar3 != 0x61) goto LAB_1019c78a;
          goto LAB_1019c812;
        }
        if (uVar4 != 0) goto joined_r0x1019c8b9;
        local_c = (undefined4 *)0x1;
      }
      goto LAB_1019ca21;
    }
    _Str1 = _Str1 + uVar5;
    if ((uVar5 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_1019c720;
      do {
        if (*param_5 == 0) break;
        if (cVar1 == (code)0x27) {
          _Str1 = _Str1 + 1;
          break;
        }
        iVar3 = __isleadbyte_l((int)(char)cVar1,param_1);
        pcVar7 = _Str1;
        if ((iVar3 != 0) && (1 < *param_5)) {
          pcVar7 = _Str1 + 1;
          if (*pcVar7 == (code)0x0) goto LAB_1019c720;
          *(code *)*param_4 = *_Str1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        *(code *)*param_4 = *pcVar7;
        *param_4 = *param_4 + 1;
        _Str1 = pcVar7 + 1;
        *param_5 = *param_5 - 1;
        cVar1 = *_Str1;
      } while (cVar1 != (code)0x0);
    }
  }
  else {
    if (iVar3 == 0x68) {
      if (uVar4 == 0) {
        local_c = (undefined4 *)0x1;
      }
      else {
joined_r0x1019ca11:
        if (uVar5 != 2) {
LAB_1019c78a:
          iVar3 = __isleadbyte_l(iVar3,param_1);
          pcVar7 = _Str1;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar7 = _Str1 + 1;
            if (*pcVar7 == (code)0x0) goto LAB_1019c720;
            *(code *)*param_4 = *_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(code *)*param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar7 + 1;
          goto LAB_1019c7c1;
        }
      }
    }
    else if (iVar3 == 0x6d) {
      if (uVar4 != 0) goto joined_r0x1019ca11;
      local_c = (undefined4 *)0x1;
    }
    else if (iVar3 == 0x73) {
      if (uVar4 != 0) goto joined_r0x1019ca11;
      local_c = (undefined4 *)0x1;
    }
    else {
      if (iVar3 == 0x74) {
        if (*(int *)(param_3 + 4) < 0xc) {
          pcVar9 = *(char **)(param_6 + 0x98);
        }
        else {
          pcVar9 = *(char **)(param_6 + 0x9c);
        }
        if ((uVar5 == 1) && (*param_5 != 0)) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_1019c720;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_1019c7c1;
        }
        while ((_Str1 = local_10, *pcVar9 != '\0' && (*param_5 != 0))) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_1019c720;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          pcVar9 = pcVar8 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_1019c7c1;
      }
      if (iVar3 != 0x79) goto LAB_1019c78a;
      if (uVar4 != 1) goto joined_r0x1019c8bf;
    }
LAB_1019ca21:
    iVar3 = FUN_1019c208(param_1,param_5,param_6,local_c);
    _Str1 = local_10;
    if (iVar3 == 0) goto LAB_1019c720;
  }
LAB_1019c7c1:
  cVar1 = *_Str1;
  goto joined_r0x1019c736;
}


// ==== 1019ca4b __Strftime_l

/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2005 Release */

int __Strftime_l(char *param_1,uint param_2,char *param_3,int param_4,int *param_5,
                localeinfo_struct *param_6)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  localeinfo_struct local_24;
  int local_1c;
  char local_18;
  char *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,param_6);
  if (param_1 == (char *)0x0) {
    puVar2 = (undefined4 *)FUN_10183cab();
    *puVar2 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_10183cab();
    *puVar2 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  *param_1 = '\0';
  if (param_3 != (char *)0x0) {
    if (param_5 == (int *)0x0) {
      param_5 = local_24.locinfo[1].lc_category[0].wrefcount;
    }
    local_8 = param_2;
    local_10 = param_5;
    if (param_2 != 0) {
      do {
        cVar1 = *param_3;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if (param_4 == 0) {
            puVar2 = (undefined4 *)FUN_10183cab();
            *puVar2 = 0x16;
            goto LAB_1019cbe7;
          }
          pcVar4 = param_3 + 1;
          cVar1 = *pcVar4;
          if (cVar1 == '#') {
            pcVar4 = param_3 + 2;
          }
          iVar3 = FUN_1019c208(&local_24,&local_8,local_10,cVar1 == '#');
          if (iVar3 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_1019cb98;
          }
        }
        else {
          iVar3 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar4 = param_3;
          if ((iVar3 != 0) && (1 < local_8)) {
            pcVar4 = param_3 + 1;
            if (*pcVar4 == '\0') {
              local_c = 1;
              goto LAB_1019cb98;
            }
            *param_1 = *param_3;
            param_1 = param_1 + 1;
            local_8 = local_8 - 1;
          }
          *param_1 = *pcVar4;
          param_1 = param_1 + 1;
          local_8 = local_8 - 1;
        }
        param_3 = pcVar4 + 1;
      } while (local_8 != 0);
      if (local_8 != 0) {
        *param_1 = '\0';
        if (local_18 == '\0') {
          return param_2 - local_8;
        }
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        return param_2 - local_8;
      }
    }
LAB_1019cb98:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      puVar2 = (undefined4 *)FUN_10183cab();
      *puVar2 = 0x22;
      goto LAB_1019cbe7;
    }
  }
  puVar2 = (undefined4 *)FUN_10183cab();
  *puVar2 = 0x16;
  FUN_10183c33(0,0,0,0,0);
LAB_1019cbe7:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}


// ==== 1019cbfa __strftime_l

/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,_Tm,0,_Locale);
  return sVar1;
}


// ==== 1019cc35 __Strftime

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,param_4,param_5,0);
  return sVar1;
}


// ==== 1019cc80 _strcspn

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2005 Release */

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


// ==== 1019ccc6 _TranslateName

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2005 Release */

bool _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}


// ==== 1019cd3a _ProcessCodePage

/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2005 Release */

void _ProcessCodePage(void)

{
  int iVar1;
  CHAR *in_ECX;
  int unaff_EDI;
  LCTYPE LCType;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  if ((in_ECX == (char *)0x0) || (*in_ECX == '\0')) {
LAB_1019cd82:
    LCType = 0x1004;
LAB_1019cd8d:
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
    if (iVar1 == 0) goto LAB_1019cda4;
    in_ECX = local_10;
  }
  else {
    iVar1 = _strcmp(in_ECX,"ACP");
    if (iVar1 == 0) goto LAB_1019cd82;
    iVar1 = _strcmp(in_ECX,"OCP");
    if (iVar1 == 0) {
      LCType = 0xb;
      goto LAB_1019cd8d;
    }
  }
  _atol(in_ECX);
LAB_1019cda4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1019cdb1 _TestDefaultCountry

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_101f1250 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


// ==== 1019cdcf _LcidFromHexString

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2005 Release */

int _LcidFromHexString(void)

{
  char cVar1;
  char *in_EDX;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *in_EDX, cVar1 != '\0') {
    in_EDX = in_EDX + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}


// ==== 1019ce01 _GetPrimaryLen

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2005 Release */

int _GetPrimaryLen(void)

{
  char cVar1;
  int iVar2;
  char *in_EDX;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *in_EDX;
    in_EDX = in_EDX + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== 1019ce1c _CountryEnumProc@4

/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _CountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry(Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1019ceb2 _TestDefaultLanguage

/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2005 Release */

void _TestDefaultLanguage(uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(), param_1 != uVar2)) && (param_2 != 0)) {
    _Str = (char *)*in_ECX;
    _GetPrimaryLen();
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1019cf24 _LangCountryEnumProc@4

/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LangCountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  _setloc_struct *p_Var5;
  undefined8 uVar6;
  undefined4 uVar7;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  p_Var5 = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_1019cf75:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1019d0e3;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_1019cf75;
    iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_1019d025:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) ||
         (iVar3 = __strnicmp((char *)p_Var5->pchLanguage,local_80,sVar4), iVar3 != 0)) {
        if (((p_Var2->_setloc_data).iLocState & 1U) == 0) {
          uVar6 = _TestDefaultCountry(Locale);
          if ((int)uVar6 != 0) {
            (p_Var2->_setloc_data).iLocState = (uint)((ulonglong)uVar6 >> 0x20) | 1;
            goto LAB_1019d025;
          }
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)p_Var5->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_1019d0e3;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_1019cf75;
  iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)p_Var5->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen)
         ) {
        uVar7 = 1;
        goto LAB_1019d0bb;
      }
      goto LAB_1019d0c9;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)p_Var5->pchLanguage,local_80), iVar3 != 0)) goto LAB_1019d0e3;
    uVar7 = 0;
LAB_1019d0bb:
    iVar3 = _TestDefaultLanguage(Locale,uVar7);
    if (iVar3 == 0) goto LAB_1019d0e3;
LAB_1019d0c9:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_1019d0e3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1019d0f4 _LanguageEnumProc@4

/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LanguageEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 uVar4;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1019d1a3;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      uVar4 = 1;
      goto LAB_1019d180;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchLanguage,local_80), iVar3 != 0))
    goto LAB_1019d1a3;
    uVar4 = 0;
LAB_1019d180:
    iVar3 = _TestDefaultLanguage(Locale,uVar4);
    if (iVar3 == 0) goto LAB_1019d1a3;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_1019d1a3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1019d1df _GetLcidFromLangCountry

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  sVar2 = _strlen((char *)*unaff_ESI);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    uVar3 = _GetPrimaryLen();
  }
  else {
    uVar3 = 2;
  }
  unaff_ESI[3] = uVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 1019d244 _GetLcidFromLanguage

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  sVar1 = _strlen((char *)*unaff_ESI);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    uVar2 = _GetPrimaryLen();
  }
  else {
    uVar2 = 2;
  }
  unaff_ESI[3] = uVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 1019d280 ___get_qualified_locale

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  _ptiddata p_Var4;
  size_t sVar5;
  LCID LVar6;
  uint _Value;
  BOOL BVar7;
  errno_t eVar8;
  int iVar9;
  _setloc_struct *p_Var10;
  
  p_Var4 = __getptd();
  p_Var10 = &p_Var4->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var4->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_1019d358:
    LVar6 = GetUserDefaultLCID();
    (p_Var4->_setloc_data)._cachecp = LVar6;
    *(LCID *)(p_Var4->_setloc_data)._cachein = LVar6;
  }
  else {
    pwVar3 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var4->_setloc_data).pchCountry;
    p_Var10->pchLanguage = _LpInStr->szLanguage;
    *ppwVar2 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && ((char)*pwVar3 != '\0')) {
      _TranslateName(&PTR_s_america_101f1198,0x16,ppwVar2);
    }
    (p_Var4->_setloc_data).iLocState = 0;
    if ((p_Var10->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var10->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var4->_setloc_data).iLocState = 0x104;
        goto LAB_1019d358;
      }
      sVar5 = _strlen((char *)pwVar3);
      (p_Var4->_setloc_data).bAbbrevCountry = (uint)(sVar5 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var4->_setloc_data).iLocState & 4) == 0) {
        (p_Var4->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var4->_setloc_data).iLocState != 0) goto LAB_1019d36d;
      iVar9 = _TranslateName(&PTR_s_american_101f0f90,0x40,p_Var10);
      if (iVar9 != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var4->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_1019d36d:
  _Value = _ProcessCodePage();
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar7 = IsValidCodePage(_Value & 0xffff), BVar7 == 0 ||
      (BVar7 = IsValidLocale((p_Var4->_setloc_data)._cachecp,1), BVar7 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var4->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var4->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar8 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar9 = GetLocaleInfoA((p_Var4->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar9 == 0) {
        return 0;
      }
    }
    iVar9 = GetLocaleInfoA(*(LCID *)(p_Var4->_setloc_data)._cachein,0x1002,
                           (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar9 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}


// ==== 101a0055 _strncmp

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_101a010f;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_101a010f;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_101a010f;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_101a010f;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_101a010f:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}


// ==== 101a0120 _strpbrk

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2005 Release */

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


// ==== 101a0160 ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101a01a7 ___convertcp

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

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
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_101a0347;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_101a0347;
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
LAB_101a0287:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_101a0287;
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
LAB_101a0347:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101a0408 __RoundMan

/* Library Function - Single Match
    __RoundMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  local_8 = 0;
  iVar8 = param_2 + -1;
  iVar7 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar5 = 0x1f - ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + iVar7 * 4) & 1 << (bVar5 & 0x1f)) != 0) {
    uVar3 = *(uint *)(param_1 + iVar7 * 4) & ~(-1 << (bVar5 & 0x1f));
    iVar4 = iVar7;
    while (uVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (2 < iVar4) goto LAB_101a04d0;
      uVar3 = *(uint *)(param_1 + iVar4 * 4);
    }
    iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
    param_2 = 0;
    uVar6 = 1 << (0x1f - ((byte)iVar8 & 0x1f) & 0x1f);
    uVar2 = *(uint *)(param_1 + iVar4 * 4);
    uVar3 = uVar2 + uVar6;
    if ((uVar3 < uVar2) || (uVar3 < uVar6)) {
      param_2 = 1;
    }
    *(uint *)(param_1 + iVar4 * 4) = uVar3;
    while ((iVar4 = iVar4 + -1, local_8 = param_2, -1 < iVar4 && (param_2 != 0))) {
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      uVar3 = uVar2 + 1;
      param_2 = 0;
      if ((uVar3 < uVar2) || (uVar3 == 0)) {
        param_2 = 1;
      }
      *(uint *)(param_1 + iVar4 * 4) = uVar3;
    }
  }
LAB_101a04d0:
  puVar1 = (uint *)(param_1 + iVar7 * 4);
  *puVar1 = *puVar1 & -1 << (bVar5 & 0x1f);
  iVar7 = iVar7 + 1;
  if (iVar7 < 3) {
    puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
    for (iVar8 = 3 - iVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return local_8;
}


// ==== 101a0536 __ShrMan

/* Library Function - Single Match
    __ShrMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  param_2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + param_2 * 4);
    *(uint *)(param_1 + param_2 * 4) = *(uint *)(param_1 + param_2 * 4) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = (undefined4 *)(param_1 + (2 - iVar2) * 4);
  do {
    if (iVar4 < iVar2) {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar4 * 4) = *puVar5;
    }
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  return;
}


// ==== 101a05ce __ld12cvt

/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2005 Release */

undefined4 __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_24[3] = param_1[5] & 0x8000;
  uVar9 = *(uint *)(param_1 + 3);
  local_24[0] = uVar9;
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *param_1;
  uVar10 = param_1[5] & 0x7fff;
  iVar11 = uVar10 - 0x3fff;
  local_24[1] = uVar2;
  local_24[2] = (uint)uVar1 << 0x10;
  if (iVar11 == -0x3fff) {
    iVar11 = 0;
    iVar3 = 0;
    do {
      if (local_24[iVar3] != 0) goto LAB_101a073e;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
LAB_101a0ab4:
    uVar5 = 0;
  }
  else {
    param_1 = (ushort *)0x0;
    uVar8 = param_3[2];
    iVar12 = uVar8 - 1;
    iVar3 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = uVar8 & 0x8000001f;
    local_14 = iVar11;
    local_10 = iVar3;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar4 = local_24 + iVar3;
    bVar6 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
      uVar8 = local_24[iVar3] & ~(-1 << (bVar6 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar3 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
          local_8 = 0;
          uVar8 = 1 << (0x1f - ((byte)iVar12 & 0x1f) & 0x1f);
          puVar7 = local_24 + iVar3;
          param_1 = (ushort *)(*puVar7 + uVar8);
          if (param_1 < *puVar7) goto LAB_101a06f3;
          bVar13 = param_1 < uVar8;
          do {
            local_8 = 0;
            if (!bVar13) goto LAB_101a06fa;
LAB_101a06f3:
            do {
              local_8 = 1;
LAB_101a06fa:
              iVar3 = iVar3 + -1;
              *puVar7 = (uint)param_1;
              if ((iVar3 < 0) || (local_8 == 0)) {
                param_1 = (ushort *)local_8;
                goto LAB_101a0708;
              }
              local_8 = 0;
              puVar7 = local_24 + iVar3;
              param_1 = (ushort *)(*puVar7 + 1);
            } while (param_1 < *puVar7);
            bVar13 = param_1 == (ushort *)0x0;
          } while( true );
        }
        iVar3 = iVar3 + 1;
        if (2 < iVar3) break;
        uVar8 = local_24[iVar3];
      }
    }
LAB_101a0708:
    *puVar4 = *puVar4 & -1 << ((byte)local_c & 0x1f);
    iVar3 = local_10 + 1;
    if (iVar3 < 3) {
      puVar4 = local_24 + iVar3;
      for (iVar12 = 3 - iVar3; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_1 != (ushort *)0x0) {
      iVar11 = uVar10 - 0x3ffe;
    }
    iVar3 = param_3[1];
    if (iVar11 < iVar3 - param_3[2]) {
LAB_101a073e:
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (iVar3 < iVar11) {
        if (*param_3 <= iVar11) {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          uVar9 = param_3[3];
          iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = uVar9 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          param_1 = (ushort *)0x0;
          local_8 = 0x20 - uVar9;
          do {
            uVar2 = local_24[(int)param_1];
            local_14 = uVar2 & ~(-1 << ((byte)uVar9 & 0x1f));
            local_24[(int)param_1] = uVar2 >> ((byte)uVar9 & 0x1f) | local_10;
            param_1 = (ushort *)((int)param_1 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)param_1 < 3);
          iVar3 = 2;
          puVar4 = local_24 + (2 - iVar11);
          do {
            if (iVar3 < iVar11) {
              local_24[iVar3] = 0;
            }
            else {
              local_24[iVar3] = *puVar4;
            }
            iVar3 = iVar3 + -1;
            puVar4 = puVar4 + -1;
          } while (-1 < iVar3);
          iVar11 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_101a0ab6;
        }
        local_24[0] = local_24[0] & 0x7fffffff;
        uVar9 = param_3[3];
        iVar11 = param_3[5] + iVar11;
        iVar3 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
        uVar9 = uVar9 & 0x8000001f;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
        }
        local_10 = 0;
        param_1 = (ushort *)0x0;
        local_8 = 0x20 - uVar9;
        do {
          local_14 = local_24[(int)param_1] & ~(-1 << ((byte)uVar9 & 0x1f));
          local_24[(int)param_1] = local_24[(int)param_1] >> ((byte)uVar9 & 0x1f) | local_10;
          param_1 = (ushort *)((int)param_1 + 1);
          local_10 = local_14 << ((byte)(0x20 - uVar9) & 0x1f);
        } while ((int)param_1 < 3);
        iVar12 = 2;
        puVar4 = local_24 + (2 - iVar3);
        do {
          if (iVar12 < iVar3) {
            local_24[iVar12] = 0;
          }
          else {
            local_24[iVar12] = *puVar4;
          }
          iVar12 = iVar12 + -1;
          puVar4 = puVar4 + -1;
        } while (-1 < iVar12);
        goto LAB_101a0ab4;
      }
      local_14 = iVar3 - local_14;
      local_24[0] = uVar9;
      local_24[1] = uVar2;
      iVar11 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = local_14 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = 0x20 - uVar9;
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar9 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar9 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar11);
      do {
        if (iVar3 < iVar11) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
      uVar9 = param_3[2];
      iVar3 = uVar9 - 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      local_10 = iVar11;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      bVar6 = (byte)(0x1f - uVar9);
      puVar4 = local_24 + iVar11;
      local_14 = 0x1f - uVar9;
      if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
        uVar9 = local_24[iVar11] & ~(-1 << (bVar6 & 0x1f));
        while (uVar9 == 0) {
          iVar11 = iVar11 + 1;
          if (2 < iVar11) goto LAB_101a08a9;
          uVar9 = local_24[iVar11];
        }
        iVar11 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
        bVar13 = false;
        uVar10 = 1 << (0x1f - ((byte)iVar3 & 0x1f) & 0x1f);
        uVar2 = local_24[iVar11];
        uVar9 = uVar2 + uVar10;
        if ((uVar9 < uVar2) || (uVar9 < uVar10)) {
          bVar13 = true;
        }
        local_24[iVar11] = uVar9;
        while ((iVar11 = iVar11 + -1, -1 < iVar11 && (bVar13))) {
          uVar2 = local_24[iVar11];
          uVar9 = uVar2 + 1;
          bVar13 = false;
          if ((uVar9 < uVar2) || (uVar9 == 0)) {
            bVar13 = true;
          }
          local_24[iVar11] = uVar9;
        }
      }
LAB_101a08a9:
      *puVar4 = *puVar4 & -1 << ((byte)local_14 & 0x1f);
      iVar11 = local_10 + 1;
      if (iVar11 < 3) {
        puVar4 = local_24 + iVar11;
        for (iVar3 = 3 - iVar11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      uVar9 = param_3[3] + 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = 0x20 - uVar9;
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar9 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar9 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar11);
      do {
        if (iVar3 < iVar11) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
    }
    iVar11 = 0;
    uVar5 = 2;
  }
LAB_101a0ab6:
  local_24[0] = iVar11 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)(local_24[3] != 0) & 0x80000000
                | local_24[0];
  if (param_3[4] == 0x40) {
    param_2[1] = local_24[0];
    *param_2 = local_24[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_24[0];
  }
  return uVar5;
}


// ==== 101a0af7 __ld12tod

/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

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
        goto LAB_101a0ff6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1023bc18 - 1;
    iVar4 = (int)(DAT_1023bc18 + ((int)DAT_1023bc18 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1023bc18 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_101a0c2a;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_101a0c31;
LAB_101a0c2a:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_101a0c31:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_101a0c3f;
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
LAB_101a0c3f:
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
    if (iVar12 < (int)(DAT_1023bc14 - DAT_1023bc18)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1023bc14 < iVar12) {
        if (iVar12 < DAT_1023bc10) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1023bc24;
          iVar2 = (int)(DAT_1023bc1c + ((int)DAT_1023bc1c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1023bc1c & 0x8000001f;
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
          iVar12 = (int)(DAT_1023bc1c + ((int)DAT_1023bc1c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1023bc1c & 0x8000001f;
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
          iVar12 = DAT_1023bc24 + DAT_1023bc10;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_101a0ff6;
      }
      local_14 = DAT_1023bc14 - local_14;
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
      iVar2 = DAT_1023bc18 - 1;
      iVar12 = (int)(DAT_1023bc18 + ((int)DAT_1023bc18 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1023bc18 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_101a0de2;
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
LAB_101a0de2:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1023bc1c + 1;
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
LAB_101a0ff6:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1023bc1c & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1023bc20 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1023bc20 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 101a1039 __ld12tof

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  uint uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  _LDBL12 *p_Var8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  uint local_24;
  float local_20;
  uint local_1c [5];
  _LDBL12 *local_8;
  
  local_1c[1] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar9 = *(uint *)(_Ifp->ld12 + 6);
  local_24 = uVar9;
  fVar12 = *(float *)(_Ifp->ld12 + 2);
  uVar10 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar11 = uVar10 - 0x3fff;
  uVar1 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_20 = fVar12;
  local_1c[0] = uVar1;
  if (iVar11 == -0x3fff) {
    iVar11 = 0;
    iVar2 = 0;
    do {
      if ((&local_24)[iVar2] != 0) {
        local_24 = 0;
        local_20 = 0.0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_101a1538;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1023bc30 - 1;
    iVar2 = (int)(DAT_1023bc30 + ((int)DAT_1023bc30 >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_1023bc30 & 0x8000001f;
    local_1c[2] = iVar11;
    local_1c[3] = iVar2;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    puVar6 = &local_24 + iVar2;
    bVar4 = (byte)(0x1f - uVar7);
    local_1c[4] = 0x1f - uVar7;
    if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
      uVar7 = (&local_24)[iVar2] & ~(-1 << (bVar4 & 0x1f));
      while( true ) {
        if (uVar7 != 0) {
          iVar2 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var8 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar5 = &local_24 + iVar2;
          _Ifp = (_LDBL12 *)(p_Var8->ld12 + *puVar5);
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_101a116c;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_101a1173;
LAB_101a116c:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_101a1173:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_101a1181;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar5 = &local_24 + iVar2;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar5)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar5);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar2 = iVar2 + 1;
        if (2 < iVar2) break;
        uVar7 = (&local_24)[iVar2];
      }
    }
LAB_101a1181:
    *puVar6 = *puVar6 & -1 << ((byte)local_1c[4] & 0x1f);
    iVar2 = local_1c[3] + 1;
    if (iVar2 < 3) {
      puVar6 = &local_24 + iVar2;
      for (iVar13 = 3 - iVar2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar11 = uVar10 - 0x3ffe;
    }
    if (iVar11 < (int)(DAT_1023bc2c - DAT_1023bc30)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_1023bc2c < iVar11) {
        if (iVar11 < DAT_1023bc28) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_1023bc3c;
          iVar2 = (int)(DAT_1023bc34 + ((int)DAT_1023bc34 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_1023bc34 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            local_1c[2] = (&local_24)[(int)_Ifp] & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = (&local_24)[(int)_Ifp] >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar13 = 2;
          puVar6 = local_1c + -iVar2;
          do {
            if (iVar13 < iVar2) {
              (&local_24)[iVar13] = 0;
            }
            else {
              (&local_24)[iVar13] = *puVar6;
            }
            iVar13 = iVar13 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar13);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_20 = 0.0;
          local_1c[0] = 0;
          local_24 = 0x80000000;
          iVar11 = (int)(DAT_1023bc34 + ((int)DAT_1023bc34 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_1023bc34 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            uVar1 = (&local_24)[(int)_Ifp];
            local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar6 = local_1c + -iVar11;
          do {
            if (iVar2 < iVar11) {
              (&local_24)[iVar2] = 0;
            }
            else {
              (&local_24)[iVar2] = *puVar6;
            }
            iVar2 = iVar2 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar2);
          iVar11 = DAT_1023bc3c + DAT_1023bc28;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_101a1538;
      }
      local_1c[2] = DAT_1023bc2c - local_1c[2];
      local_24 = uVar9;
      local_20 = fVar12;
      iVar11 = (int)(local_1c[2] + ((int)local_1c[2] >> 0x1f & 0x1fU)) >> 5;
      uVar9 = local_1c[2] & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_1023bc30 - 1;
      iVar11 = (int)(DAT_1023bc30 + ((int)DAT_1023bc30 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_1023bc30 & 0x8000001f;
      local_1c[3] = iVar11;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      bVar4 = (byte)(0x1f - uVar9);
      puVar6 = &local_24 + iVar11;
      local_1c[2] = 0x1f - uVar9;
      if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
        uVar9 = (&local_24)[iVar11] & ~(-1 << (bVar4 & 0x1f));
        while (uVar9 == 0) {
          iVar11 = iVar11 + 1;
          if (2 < iVar11) goto LAB_101a1324;
          uVar9 = (&local_24)[iVar11];
        }
        iVar11 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar10 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar1 = (&local_24)[iVar11];
        uVar9 = uVar1 + uVar10;
        if ((uVar9 < uVar1) || (uVar9 < uVar10)) {
          bVar14 = true;
        }
        (&local_24)[iVar11] = uVar9;
        while ((iVar11 = iVar11 + -1, -1 < iVar11 && (bVar14))) {
          uVar1 = (&local_24)[iVar11];
          uVar9 = uVar1 + 1;
          bVar14 = false;
          if ((uVar9 < uVar1) || (uVar9 == 0)) {
            bVar14 = true;
          }
          (&local_24)[iVar11] = uVar9;
        }
      }
LAB_101a1324:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_1023bc34 + 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
    }
    iVar11 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_101a1538:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_1023bc34 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_1023bc38 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_1023bc38 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}


// ==== 101a157b __ld12told

/* Library Function - Single Match
    __ld12told
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *_Ifp,_LDOUBLE *_Ld)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  uint local_18 [3];
  INTRNCVT_STATUS local_c;
  
  uVar2 = *(ushort *)(_Ifp->ld12 + 10);
  local_18[0] = *(uint *)(_Ifp->ld12 + 6);
  uVar3 = *(uint *)(_Ifp->ld12 + 2);
  uVar7 = uVar2 & 0x7fff;
  uVar6 = uVar3;
  if (((*(ushort *)_Ifp->ld12 & 0x8000) != 0) && ((*(ushort *)_Ifp->ld12 & 0x7fff) != 0)) {
    uVar6 = uVar3 + 1;
    bVar5 = false;
    if ((uVar6 < uVar3) || (uVar6 == 0)) {
      bVar5 = true;
    }
    _Ifp = (_LDBL12 *)0x0;
    do {
      if (!bVar5) goto LAB_101a1619;
      bVar5 = false;
      puVar1 = local_18 + (int)_Ifp;
      uVar4 = *puVar1;
      uVar3 = uVar4 + 1;
      if ((uVar3 < uVar4) || (uVar3 == 0)) {
        bVar5 = true;
      }
      _Ifp = (_LDBL12 *)(_Ifp[-1].ld12 + 0xb);
      *puVar1 = uVar3;
    } while (-1 < (int)_Ifp);
    if (bVar5) {
      local_18[0] = 0x80000000;
      uVar7 = uVar7 + 1;
    }
  }
LAB_101a1619:
  local_c = (INTRNCVT_STATUS)(uVar7 == 0x7fff);
  *(uint *)_Ld->ld = uVar6;
  *(uint *)(_Ld->ld + 4) = local_18[0];
  *(ushort *)(_Ld->ld + 8) = uVar2 & 0x8000 | uVar7;
  return local_c;
}


// ==== 101a16aa ___mtold12

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void ___mtold12(char *param_1,int param_2,uint *param_3)

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
  
  uVar7 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
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


// ==== 101a1876 __crtGetStringTypeW_stat

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
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_101a1a88;
  if (DAT_1033e904 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1033e904 = 2;
      }
      goto LAB_101a18dd;
    }
    DAT_1033e904 = 1;
  }
  else {
LAB_101a18dd:
    if (DAT_1033e904 != 1) {
      if ((DAT_1033e904 != 2) && (DAT_1033e904 != 0)) goto LAB_101a1a88;
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
      if (_Size_00 == 0) goto LAB_101a1a88;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_101a198e:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_101a198e;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_101a1a88;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_101a1a7c;
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
LAB_101a1a7c:
      __freea(local_c);
      goto LAB_101a1a88;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_101a1a88:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 101a1a9a ___crtGetStringTypeW

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2005 Release */

void ___crtGetStringTypeW
               (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,
               ushort *param_5,int param_6,int param_7)

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


// ==== 101a1ad8 __validdrive

/* Library Function - Single Match
    __validdrive
   
   Library: Visual Studio 2005 Release */

int __cdecl __validdrive(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


// ==== 101a1b0f __getdcwd_nolock

/* Library Function - Single Match
    __getdcwd_nolock
   
   Library: Visual Studio 2005 Release */

LPSTR __getdcwd_nolock(uint param_1,LPSTR param_2,DWORD param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR lpBuffer;
  LPSTR local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    uVar3 = __getdrive();
  }
  else {
    iVar1 = __validdrive(param_1);
    uVar3 = param_1;
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_10183cbe();
      *puVar2 = 0xf;
      puVar2 = (undefined4 *)FUN_10183cab();
      *puVar2 = 0xd;
      FUN_10183c33(0,0,0,0,0);
      return (LPSTR)0x0;
    }
  }
  if (param_2 == (LPSTR)0x0) {
    param_1 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      puVar2 = (undefined4 *)FUN_10183cab();
      *puVar2 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      return (LPSTR)0x0;
    }
    param_1 = param_3;
    *param_2 = '\0';
  }
  if (uVar3 == 0) {
    local_8 = CONCAT22(local_8._2_2_,0x2e);
  }
  else {
    local_8 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar3 + '@'));
  }
  DVar4 = GetFullPathNameA((LPCSTR)&local_8,param_1,param_2,&local_c);
  if (DVar4 != 0) {
    if (param_2 != (LPSTR)0x0) {
      if ((int)param_1 <= (int)DVar4) {
        puVar2 = (undefined4 *)FUN_10183cab();
        *puVar2 = 0x22;
        *param_2 = '\0';
        return (LPSTR)0x0;
      }
      return param_2;
    }
    if ((int)param_3 < (int)DVar4) {
      param_3 = DVar4;
    }
    lpBuffer = _calloc(param_3,1);
    if (lpBuffer == (LPSTR)0x0) {
      puVar2 = (undefined4 *)FUN_10183cab();
      *puVar2 = 0xc;
      puVar2 = (undefined4 *)FUN_10183cbe();
      *puVar2 = 8;
      return (LPSTR)0x0;
    }
    DVar4 = GetFullPathNameA((LPCSTR)&local_8,param_3,lpBuffer,&local_c);
    if ((DVar4 != 0) && ((int)DVar4 < (int)param_3)) {
      return lpBuffer;
    }
  }
  DVar4 = GetLastError();
  FUN_10183cd1(DVar4);
  return (LPSTR)0x0;
}


// ==== 101a1c44 __getcwd

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getcwd
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getcwd(char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  
  __lock(7);
  pcVar1 = (char *)__getdcwd_nolock(0,_DstBuf,_SizeInBytes);
  FUN_101a1c84();
  return pcVar1;
}


// ==== 101a1c84 FUN_101a1c84

void FUN_101a1c84(void)

{
  FUN_101902f8(7);
  return;
}


// ==== 101a1cd7 __mbsicmp_l

/* Library Function - Single Match
    __mbsicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  byte *pbVar7;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte local_8;
  byte local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    puVar4 = (undefined4 *)FUN_10183cab();
    *puVar4 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    puVar4 = (undefined4 *)FUN_10183cab();
    *puVar4 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else {
    ptVar6 = local_18.mbcinfo;
    if ((local_18.mbcinfo)->ismbcodepage == 0) {
      iVar5 = __stricmp_l((char *)_Str1,(char *)_Str2,&local_18);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        bVar1 = *_Str1;
        pbVar7 = _Str1 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar2 = (ushort)bVar1;
            _Str1 = pbVar7;
          }
          else {
            uVar2 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
            _Str1 = pbVar7;
          }
        }
        else if (*pbVar7 == 0) {
          uVar2 = 0;
          _Str1 = pbVar7;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str1,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar2 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) goto LAB_101a1ea9;
            uVar2 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          ptVar6 = local_18.mbcinfo;
          _Str1 = _Str1 + 2;
        }
        bVar1 = *_Str2;
        pbVar7 = _Str2 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar3 = (ushort)bVar1;
          }
          else {
            uVar3 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
          }
        }
        else if (*pbVar7 == 0) {
          uVar3 = 0;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str2,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar3 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) {
LAB_101a1ea9:
              puVar4 = (undefined4 *)FUN_10183cab();
              *puVar4 = 0x16;
              if (local_c != '\0') {
                *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
              }
              return 0x7fffffff;
            }
            uVar3 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          pbVar7 = _Str2 + 2;
          ptVar6 = local_18.mbcinfo;
        }
        if (uVar3 != uVar2) {
          iVar5 = (-(uint)(uVar3 < uVar2) & 2) - 1;
          if (local_c == '\0') {
            return iVar5;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return iVar5;
        }
        _Str2 = pbVar7;
      } while (uVar2 != 0);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}


// ==== 101a1ef1 __mbsicmp

/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}


// ==== 101a1f04 __mbsrchr_l

/* Library Function - Single Match
    __mbsrchr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
  if (*(int *)(local_14 + 8) == 0) {
    local_8 = (byte *)_strrchr((char *)_Str,_Ch);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str == (uchar *)0x0) {
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    local_8 = (byte *)0x0;
  }
  else {
    do {
      bVar5 = *_Str;
      if ((*(byte *)(bVar5 + 0x1d + local_14) & 4) == 0) {
        bVar6 = _Ch == bVar5;
LAB_101a1fa6:
        pbVar4 = _Str;
        if (bVar6) {
          local_8 = _Str;
        }
      }
      else {
        pbVar4 = _Str + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          bVar6 = local_8 == (byte *)0x0;
          _Str = pbVar4;
          bVar5 = bVar1;
          goto LAB_101a1fa6;
        }
        uVar2 = CONCAT11(bVar5,bVar1);
        bVar5 = bVar1;
        if (_Ch == uVar2) {
          local_8 = _Str;
        }
      }
      _Str = pbVar4 + 1;
    } while (bVar5 != 0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return local_8;
}


// ==== 101a1fc4 __mbsrchr

/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbsrchr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 101a1fd7 FUN_101a1fd7

int FUN_101a1fd7(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                int param_7)

{
  uint uVar1;
  errno_t eVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  tm local_34;
  long local_10;
  int local_c;
  long local_8;
  
  iVar6 = param_1;
  uVar5 = param_1 - 0x76c;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (((((int)uVar5 < 0x46) || (0x8a < (int)uVar5)) || (0xb < param_2 - 1U)) ||
     (((0x17 < param_4 || (0x3b < param_5)) || ((0x3b < param_6 || (param_3 < 1)))))) {
LAB_101a21c8:
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 0x16;
    iVar6 = -1;
  }
  else {
    if ((&DAT_1023a9b8)[param_2] - *(int *)(&DAT_1023a9b4 + param_2 * 4) < param_3) {
      uVar1 = uVar5 & 0x80000003;
      bVar7 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar7) || ((int)uVar5 % 100 == 0)) && (param_1 % 400 != 0)) ||
         ((param_2 != 2 || (0x1d < param_3)))) goto LAB_101a21c8;
    }
    param_3 = *(int *)(&DAT_1023a9b4 + param_2 * 4) + param_3;
    uVar1 = uVar5 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar7) && ((int)uVar5 % 100 != 0)) ||
        (iVar4 = param_1 % 400, param_1 = param_3, iVar4 == 0)) && (param_1 = param_3, 2 < param_2))
    {
      param_1 = param_3 + 1;
    }
    iVar4 = iVar6 + -0x76d;
    ___tzset();
    eVar2 = __get_daylight(&local_c);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    eVar2 = __get_dstbias(&local_10);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    eVar2 = __get_timezone(&local_8);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar6 = (((uVar5 * 0x16d +
              ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + param_1 +
              ((iVar6 + -0x641) / 400 - iVar4 / 100)) * 0x18 + param_4) * 0x3c + param_5) * 0x3c +
            0x7c558180 + param_6 + local_8;
    local_34.tm_yday = param_1;
    local_34.tm_mon = param_2 + -1;
    local_34.tm_hour = param_4;
    local_34.tm_min = param_5;
    local_34.tm_sec = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (local_c != 0)) &&
        (local_34.tm_year = uVar5, iVar4 = __isindst(&local_34), iVar4 != 0)))) {
      iVar6 = iVar6 + local_10;
    }
  }
  return iVar6;
}


// ==== 101a21e3 __toupper_l

/* Library Function - Single Match
    __toupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __toupper_l(int _C,_locale_t _Locale)

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
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 2;
    }
    else {
      uVar2 = __isctype_l(_C,2,&local_1c);
    }
    if (uVar2 == 0) {
LAB_101a2240:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].refcount + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      puVar4 = (undefined4 *)FUN_10183cab();
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
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x200,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_101a2240;
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


// ==== 101a22fb _toupper

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 2005 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_1033e2bc == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 101a2322 __wgetdcwd_nolock

/* Library Function - Single Match
    __wgetdcwd_nolock
   
   Library: Visual Studio 2005 Release */

void __wgetdcwd_nolock(uint param_1,LPWSTR param_2,size_t param_3)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  LPWSTR lpBuffer;
  LPWSTR local_18;
  DWORD local_14;
  WCHAR local_10 [4];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    iVar1 = __validdrive(param_1);
    if (iVar1 != 0) goto LAB_101a237b;
    puVar2 = (undefined4 *)FUN_10183cbe();
    *puVar2 = 0xf;
    puVar2 = (undefined4 *)FUN_10183cab();
    *puVar2 = 0xd;
LAB_101a2362:
    FUN_10183c33(0,0,0,0,0);
    goto LAB_101a2452;
  }
  param_1 = __getdrive();
LAB_101a237b:
  if (param_2 == (LPWSTR)0x0) {
    local_14 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      puVar2 = (undefined4 *)FUN_10183cab();
      *puVar2 = 0x16;
      goto LAB_101a2362;
    }
    local_14 = param_3;
    *param_2 = L'\0';
  }
  if (param_1 == 0) {
    local_10[0] = L'.';
    local_10[1] = 0;
  }
  else {
    local_10[0] = (short)param_1 + L'@';
    local_10[1] = 0x3a;
    local_10[2] = 0x2e;
    local_10[3] = 0;
  }
  DVar3 = GetFullPathNameW(local_10,local_14,param_2,&local_18);
  if (DVar3 != 0) {
    if (param_2 != (LPWSTR)0x0) {
      if ((int)local_14 <= (int)DVar3) {
        puVar2 = (undefined4 *)FUN_10183cab();
        *puVar2 = 0x22;
        *param_2 = L'\0';
      }
      goto LAB_101a2452;
    }
    if ((int)param_3 < (int)DVar3) {
      param_3 = DVar3;
    }
    lpBuffer = _calloc(param_3,2);
    if (lpBuffer == (LPWSTR)0x0) {
      puVar2 = (undefined4 *)FUN_10183cab();
      *puVar2 = 0xc;
      puVar2 = (undefined4 *)FUN_10183cbe();
      *puVar2 = 8;
      goto LAB_101a2452;
    }
    DVar3 = GetFullPathNameW(local_10,param_3,lpBuffer,&local_18);
    if ((DVar3 != 0) && ((int)DVar3 < (int)param_3)) goto LAB_101a2452;
  }
  DVar3 = GetLastError();
  FUN_10183cd1(DVar3);
LAB_101a2452:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101a2461 __wgetcwd

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wgetcwd
   
   Library: Visual Studio 2005 Release */

wchar_t * __cdecl __wgetcwd(wchar_t *_DstBuf,int _SizeInWords)

{
  wchar_t *pwVar1;
  
  __lock(7);
  pwVar1 = (wchar_t *)__wgetdcwd_nolock(0,_DstBuf,_SizeInWords);
  FUN_101a24a1();
  return pwVar1;
}


// ==== 101a24a1 FUN_101a24a1

void FUN_101a24a1(void)

{
  FUN_101902f8(7);
  return;
}


// ==== 101a276d FUN_101a276d

undefined4 FUN_101a276d(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *piVar7;
  HANDLE pvVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
  _SECURITY_ATTRIBUTES local_38;
  int local_2c;
  uint local_28 [2];
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28[0] = 0;
  local_2c = 0;
  local_6 = 0;
  local_38.nLength = 0xc;
  local_38.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_38.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_101a7c42(local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = __get_osplatform(&local_2c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28[0] != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_c = 0x40000000;
        goto LAB_101a2856;
      }
    }
    else if (uVar4 != 2) goto LAB_101a2812;
    local_c = 0xc0000000;
  }
LAB_101a2856:
  if (param_4 == 0x10) {
    local_14 = 0;
  }
  else if (param_4 == 0x20) {
    local_14 = 1;
  }
  else if (param_4 == 0x30) {
    local_14 = 2;
  }
  else if (param_4 == 0x40) {
    local_14 = 3;
  }
  else {
    if (param_4 != 0x80) goto LAB_101a2812;
    local_14 = (uint)(local_c == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_18 = 3;
    }
    else if (uVar4 == 0x100) {
      local_18 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_101a2960;
      if (uVar4 != 0x300) goto LAB_101a2812;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_101a2960:
        local_18 = 5;
        goto LAB_101a290a;
      }
      if (uVar4 != 0x700) {
LAB_101a2812:
        puVar5 = (undefined4 *)FUN_10183cbe();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar5 = (undefined4 *)FUN_10183cab();
        *puVar5 = 0x16;
        FUN_10183c33(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_101a290a:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_1033e198 & param_5))) {
    local_10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x4000000;
    local_c = local_c | 0x10000;
    if (local_2c == 2) {
      local_14 = local_14 | 4;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    local_10 = local_10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_10 = local_10 | 0x10000000;
    }
  }
  else {
    local_10 = local_10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = (undefined4 *)FUN_10183cbe();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar5 = (undefined4 *)FUN_10183cab();
    *puVar5 = 0x18;
    goto LAB_101a2a28;
  }
  *param_1 = 1;
  local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_101a2a34;
    }
    pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10183cd1(DVar6);
    goto LAB_101a2a28;
  }
LAB_101a2a34:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10183cd1(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      puVar5 = (undefined4 *)FUN_10183cab();
      *puVar5 = 0xd;
    }
    goto LAB_101a2a28;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_101a2c3e;
    if ((param_3 & 2) == 0) goto LAB_101a2b6e;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      piVar7 = (int *)FUN_10183cbe();
      bVar11 = local_5;
      if (*piVar7 == 0x83) goto LAB_101a2b6e;
    }
    else {
      local_8 = '\0';
      iVar3 = FUN_101a71d3(*in_EAX,&local_8,1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_101a2b6e;
    }
LAB_101a2b21:
    __close_nolock(*in_EAX);
    goto LAB_101a2a28;
  }
LAB_101a2b6e:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28[0] & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28[0] & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_101a2bdd;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_101a2bdd:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_101a2c3e;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_101a2e40;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_101a2dd6;
          }
LAB_101a2c35:
          if (local_18 != 5) goto LAB_101a2c3e;
        }
LAB_101a2e40:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_101a2c3e;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_10183cab();
            return *puVar5;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_101a2c35;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_101a2b21;
                goto LAB_101a2d5f;
              }
            }
            goto LAB_101a2e40;
          }
          goto LAB_101a2c3e;
        }
LAB_101a2d5f:
        iVar3 = FUN_101a71d3(*in_EAX,&local_1c,3);
        if (iVar3 == -1) goto LAB_101a2b21;
        if (iVar3 == 2) {
LAB_101a2de4:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_10183cab();
            *puVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_101a2b21;
            local_6 = 2;
            goto LAB_101a2c3e;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_101a2c3e;
          }
          goto LAB_101a2de4;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_101a2dd6:
        if (uVar4 == 0xffffffff) goto LAB_101a2b21;
      }
    }
  }
LAB_101a2c3e:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileA(param_2,uVar4 & 0x7fffffff,local_14,&local_38,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_10183cd1(DVar6);
      pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_101a2a28:
      puVar5 = (undefined4 *)FUN_10183cab();
      return *puVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_1033e9a0)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}


// ==== 101a2f7c FID_conflict:__sopen_helper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  undefined4 *puVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1020e610;
  uStack_c = 0x101a2f88;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_10183cab();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_101a276d(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_101a301a();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


// ==== 101a301a FUN_101a301a

void FUN_101a301a(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 101a3048 FID_conflict:__sopen

/* Library Function - Multiple Matches With Different Base Names
    __sopen
    __wsopen
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl FID_conflict___sopen(wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  errno_t eVar1;
  int in_stack_00000010;
  int local_8;
  
  local_8 = -1;
  eVar1 = FID_conflict___sopen_helper
                    ((char *)_Filename,_OpenFlag,_ShareFlag,in_stack_00000010,&local_8,0);
  if (eVar1 != 0) {
    return -1;
  }
  return local_8;
}


// ==== 101a3078 __sopen_s

/* Library Function - Multiple Matches With Different Base Names
    __sopen_s
    __wsopen_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl
__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___sopen_helper(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}


// ==== 101a3096 __mbsnbcmp_l

/* Library Function - Single Match
    __mbsnbcmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  uint uVar6;
  ushort uVar7;
  byte *pbVar8;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
    if (*(int *)(local_10 + 8) == 0) {
      iVar3 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else if (_Str1 == (uchar *)0x0) {
      puVar4 = (undefined4 *)FUN_10183cab();
      *puVar4 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
    else {
      if (_Str2 != (uchar *)0x0) {
        do {
          bVar2 = *_Str1;
          uVar7 = (ushort)bVar2;
          sVar1 = _MaxCount - 1;
          puVar5 = _Str1 + 1;
          if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
LAB_101a3195:
            _Str1 = puVar5;
            uVar6 = (uint)*_Str2;
            pbVar8 = _Str2 + 1;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
              if (sVar1 != 0) {
                sVar1 = _MaxCount - 2;
                if (*pbVar8 != 0) {
                  uVar6 = (uint)CONCAT11(*_Str2,*pbVar8);
                  pbVar8 = _Str2 + 2;
                  goto LAB_101a31c5;
                }
              }
              _MaxCount = sVar1;
              uVar6 = 0;
              sVar1 = _MaxCount;
            }
          }
          else {
            if (sVar1 != 0) {
              if (*puVar5 == '\0') {
                uVar7 = 0;
              }
              else {
                uVar7 = CONCAT11(bVar2,*puVar5);
                puVar5 = _Str1 + 2;
              }
              goto LAB_101a3195;
            }
            uVar6 = (uint)*_Str2;
            uVar7 = 0;
            pbVar8 = _Str2;
            _Str1 = puVar5;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
LAB_101a31d8:
              if (local_8 != '\0') {
                *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
              }
              return 0;
            }
          }
LAB_101a31c5:
          _MaxCount = sVar1;
          if ((ushort)uVar6 != uVar7) {
            iVar3 = (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
            if (local_8 == '\0') {
              return iVar3;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return iVar3;
          }
          if ((uVar7 == 0) || (_Str2 = pbVar8, _MaxCount == 0)) goto LAB_101a31d8;
        } while( true );
      }
      puVar4 = (undefined4 *)FUN_10183cab();
      *puVar4 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
  }
  return iVar3;
}


// ==== 101a31ff __mbsnbcmp

/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 101a3216 FUN_101a3216

undefined4 FUN_101a3216(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *piVar7;
  HANDLE pvVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
  _SECURITY_ATTRIBUTES local_3c;
  undefined4 local_30;
  int local_2c;
  uint local_28 [2];
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28[0] = 0;
  local_2c = 0;
  local_6 = 0;
  local_3c.nLength = 0xc;
  local_3c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_3c.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_101a7c42(local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = __get_osplatform(&local_2c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28[0] != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_c = 0x40000000;
        goto LAB_101a32ff;
      }
    }
    else if (uVar4 != 2) goto LAB_101a32bb;
    local_c = 0xc0000000;
  }
LAB_101a32ff:
  if (param_4 == 0x10) {
    local_14 = 0;
  }
  else if (param_4 == 0x20) {
    local_14 = 1;
  }
  else if (param_4 == 0x30) {
    local_14 = 2;
  }
  else if (param_4 == 0x40) {
    local_14 = 3;
  }
  else {
    if (param_4 != 0x80) goto LAB_101a32bb;
    local_14 = (uint)(local_c == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_18 = 3;
    }
    else if (uVar4 == 0x100) {
      local_18 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_101a3409;
      if (uVar4 != 0x300) goto LAB_101a32bb;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_101a3409:
        local_18 = 5;
        goto LAB_101a33b3;
      }
      if (uVar4 != 0x700) {
LAB_101a32bb:
        puVar5 = (undefined4 *)FUN_10183cbe();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar5 = (undefined4 *)FUN_10183cab();
        *puVar5 = 0x16;
        FUN_10183c33(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_101a33b3:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_1033e198 & param_5))) {
    local_10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x4000000;
    local_c = local_c | 0x10000;
    if (local_2c == 2) {
      local_14 = local_14 | 4;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    local_10 = local_10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_10 = local_10 | 0x10000000;
    }
  }
  else {
    local_10 = local_10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = (undefined4 *)FUN_10183cbe();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar5 = (undefined4 *)FUN_10183cab();
    *puVar5 = 0x18;
    goto LAB_101a34d1;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_101a34dd;
    }
    pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10183cd1(DVar6);
    goto LAB_101a34d1;
  }
LAB_101a34dd:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10183cd1(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      puVar5 = (undefined4 *)FUN_10183cab();
      *puVar5 = 0xd;
    }
    goto LAB_101a34d1;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_101a36e8;
    if ((param_3 & 2) == 0) goto LAB_101a3618;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      piVar7 = (int *)FUN_10183cbe();
      bVar11 = local_5;
      if (*piVar7 == 0x83) goto LAB_101a3618;
    }
    else {
      local_30 = 0;
      iVar3 = FUN_101a71d3(*in_EAX,&local_30,1);
      if ((((iVar3 != 0) || ((short)local_30 != 0x1a)) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_101a3618;
    }
LAB_101a35ca:
    __close_nolock(*in_EAX);
    goto LAB_101a34d1;
  }
LAB_101a3618:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28[0] & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28[0] & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_101a3687;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_101a3687:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_101a36e8;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_101a38ea;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_101a3880;
          }
LAB_101a36df:
          if (local_18 != 5) goto LAB_101a36e8;
        }
LAB_101a38ea:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_101a36e8;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_10183cab();
            return *puVar5;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_101a36df;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_101a35ca;
                goto LAB_101a3809;
              }
            }
            goto LAB_101a38ea;
          }
          goto LAB_101a36e8;
        }
LAB_101a3809:
        iVar3 = FUN_101a71d3(*in_EAX,&local_1c,3);
        if (iVar3 == -1) goto LAB_101a35ca;
        if (iVar3 == 2) {
LAB_101a388e:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_10183cab();
            *puVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_101a35ca;
            local_6 = 2;
            goto LAB_101a36e8;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_101a36e8;
          }
          goto LAB_101a388e;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_101a3880:
        if (uVar4 == 0xffffffff) goto LAB_101a35ca;
      }
    }
  }
LAB_101a36e8:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_3c,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_10183cd1(DVar6);
      pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_101a34d1:
      puVar5 = (undefined4 *)FUN_10183cab();
      return *puVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_1033e9a0)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}


// ==== 101a3a26 FID_conflict:__sopen_helper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  undefined4 *puVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1020e650;
  uStack_c = 0x101a3a32;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_10183cab();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_101a3216(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_101a3ac4();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


// ==== 101a3ac4 FUN_101a3ac4

void FUN_101a3ac4(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_1033e9a0)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 101a3af2 FID_conflict:__sopen

/* Library Function - Multiple Matches With Different Base Names
    __sopen
    __wsopen
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl FID_conflict___sopen(wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  errno_t eVar1;
  int in_stack_00000010;
  int local_8;
  
  local_8 = -1;
  eVar1 = FID_conflict___sopen_helper
                    ((char *)_Filename,_OpenFlag,_ShareFlag,in_stack_00000010,&local_8,0);
  if (eVar1 != 0) {
    return -1;
  }
  return local_8;
}


// ==== 101a3b22 __wsopen_s

/* Library Function - Single Match
    __wsopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wsopen_s(int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___sopen_helper
                    ((char *)_Filename,_OpenFlag,_ShareFlag,_PermissionFlag,_FileHandle,1);
  return eVar1;
}


// ==== 101a3b40 x_ismbbtype_l

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
    if (uVar1 == 0) goto LAB_101a3b82;
  }
  iVar2 = 1;
LAB_101a3b82:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 101a3cfe __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 101a3d39 __ismbbkana_l

/* Library Function - Single Match
    __ismbbkana_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if ((local_10 == 0) || (*(int *)(local_10 + 4) != 0x3a4)) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


// ==== 101a3d9a FUN_101a3d9a

/* WARNING: Removing unreachable block (ram,0x101a428b) */
/* WARNING: Removing unreachable block (ram,0x101a4295) */
/* WARNING: Removing unreachable block (ram,0x101a429a) */

void FUN_101a3d9a(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  bool bVar4;
  errno_t eVar5;
  short *psVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  undefined **ppuVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  ushort uVar22;
  ushort uVar23;
  char *pcVar24;
  undefined **local_6c;
  ushort *local_60;
  ushort *local_5c;
  undefined **local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  undefined2 local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  undefined *local_38;
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
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar7 = CONCAT22(local_24._2_2_,(undefined2)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12._0_2_ = (ushort)((uint)param_1 >> 0x10);
  uStack_12._2_2_ = (ushort)param_2;
  uStack_e._0_2_ = (ushort)(param_2 >> 0x10);
  uStack_e._2_2_ = param_3;
  uVar14 = CONCAT22(param_3,(ushort)uStack_e);
  uVar10 = CONCAT22(param_3,(ushort)uStack_e);
  uVar8 = param_3 & 0x8000;
  uVar13 = param_3 & 0x7fff;
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
  if ((((short)uVar13 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_101a4618;
  }
  if ((short)uVar13 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_101a3ec9;
        pcVar24 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_101a3ec9:
          pcVar24 = "1#QNAN";
          goto LAB_101a3ece;
        }
        pcVar24 = "1#IND";
      }
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar24 = "1#SNAN";
LAB_101a3ece:
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
    uVar7 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    goto LAB_101a4618;
  }
  local_50 = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar13 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar13;
  bStack_19 = (byte)(uVar13 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  uVar7 = param_1 << 0x10;
  local_6c = &PTR_DAT_1023bbe0;
  uStack_1c = (ushort)uStack_e;
  uStack_20 = uStack_12;
  if (uVar16 != 0) {
    uVar13 = -uVar16;
    uVar14 = uVar10;
    uVar7 = param_1 << 0x10;
    if ((int)-uVar16 < 0) {
      local_6c = (undefined **)&DAT_1023bd40;
      uVar13 = uVar16;
    }
joined_r0x101a3f5c:
    if (uVar13 != 0) {
      local_6c = local_6c + 0x15;
      uVar10 = uVar13 & 7;
      uVar13 = (int)uVar13 >> 3;
      if (uVar10 != 0) {
        ppuVar11 = local_6c + uVar10 * 3;
        if (0x7fff < *(ushort *)ppuVar11) {
          local_40 = SUB42(*ppuVar11,0);
          uStack_3e._0_2_ = (undefined2)((uint)*ppuVar11 >> 0x10);
          ppuVar2 = ppuVar11 + 2;
          uStack_3e._2_2_ = SUB42(ppuVar11[1],0);
          uStack_3a = (ushort)((uint)ppuVar11[1] >> 0x10);
          ppuVar11 = (undefined **)&local_40;
          local_38 = *ppuVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        uVar12 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar22 = *(ushort *)((int)ppuVar11 + 10) & 0x7fff;
        local_4c = (ushort *)0x0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uStack_12 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uVar16 = 0;
        uStack_a = 0;
        uVar9 = (*(ushort *)((int)ppuVar11 + 10) ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar23 = uVar22 + uVar12;
        uVar10 = 0;
        uVar14 = 0;
        if (((uVar12 < 0x7fff) && (uVar10 = 0, uVar14 = 0, uVar22 < 0x7fff)) &&
           (uVar10 = uStack_12, uVar14 = uVar16, uVar23 < 0xbffe)) {
          if (uVar23 < 0x3fc0) {
            uStack_1c = 0;
            local_1a = 0;
            bStack_19 = 0;
            uStack_20._0_2_ = 0;
            uStack_20._2_2_ = 0;
            local_24._0_2_ = 0;
            local_24._2_2_ = 0;
            uStack_20 = 0;
            uVar7 = 0;
            goto joined_r0x101a3f5c;
          }
          if (((uVar12 == 0) &&
              (uVar23 = uVar23 + 1,
              (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
             ((uStack_20 == 0 && (uVar7 == 0)))) {
            local_1a = 0;
            bStack_19 = 0;
            goto joined_r0x101a3f5c;
          }
          if ((((uVar22 == 0) && (uVar23 = uVar23 + 1, ((uint)ppuVar11[2] & 0x7fffffff) == 0)) &&
              (ppuVar11[1] == (undefined *)0x0)) && (*ppuVar11 == (undefined *)0x0)) {
            uStack_1c = 0;
            local_1a = 0;
            bStack_19 = 0;
            uStack_20._0_2_ = 0;
            uStack_20._2_2_ = 0;
            local_24._0_2_ = 0;
            local_24._2_2_ = 0;
            uStack_20 = 0;
            uVar7 = 0;
            goto joined_r0x101a3f5c;
          }
          psVar6 = (short *)((int)&uStack_12 + 2);
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = ppuVar11 + 2;
              do {
                bVar4 = false;
                uVar14 = *(uint *)(psVar6 + -2) + (uint)*local_5c * (uint)*(ushort *)local_58;
                if ((uVar14 < *(uint *)(psVar6 + -2)) ||
                   (uVar14 < (uint)*local_5c * (uint)*(ushort *)local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar6 + -2) = uVar14;
                if (bVar4) {
                  *psVar6 = *psVar6 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = (undefined **)((int)local_58 + -2);
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar6 = psVar6 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar23 = uVar23 + 0xc002;
          if ((short)uVar23 < 1) {
LAB_101a4113:
            uVar23 = uVar23 - 1;
            if ((short)uVar23 < 0) {
              local_48 = (uint)(ushort)-uVar23;
              uVar23 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,uStack_e._2_2_);
                uVar14 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                iVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                uStack_a = uStack_a >> 1;
                uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar7 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                uStack_12._2_2_ = (ushort)(uVar14 >> 1);
                local_14 = (byte)uVar7;
                uStack_13 = (undefined1)(uVar7 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar12 = (ushort)uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
              uStack_12._2_2_ = (ushort)iVar17 | uVar12 >> 0xf;
              iVar20 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
              uStack_e._2_2_ = (ushort)iVar20 | (ushort)uStack_e >> 0xf;
              uVar23 = uVar23 - 1;
              uStack_e._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar23);
            if ((short)uVar23 < 1) goto LAB_101a4113;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (uVar14 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
             uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
             (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
              uStack_12._0_2_ = 0;
              uStack_12._2_2_ = 0;
              uVar10 = 0;
              if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                uStack_e._0_2_ = 0;
                uStack_e._2_2_ = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar23 = uVar23 + 1;
                  uVar14 = 0;
                  uVar10 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  uVar14 = 0;
                  uVar10 = 0;
                }
              }
              else {
                uVar14 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                uStack_e._0_2_ = (ushort)uVar14;
                uStack_e._2_2_ = (ushort)(uVar14 >> 0x10);
              }
            }
            else {
              uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
              uStack_12._0_2_ = (ushort)uVar10;
              uStack_12._2_2_ = (ushort)(uVar10 >> 0x10);
              uVar14 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
            }
          }
          if (uVar23 < 0x7fff) {
            local_24 = uVar10;
            bStack_19 = (byte)(uVar23 >> 8) | (byte)(uVar9 >> 8);
            uStack_20 = uVar14;
            uStack_1c = uStack_a;
            local_1a = (undefined1)uVar23;
            uStack_12 = uVar10;
            uVar7 = uVar10;
            goto joined_r0x101a3f5c;
          }
        }
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        uStack_20 = 0;
        iVar17 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uVar7 = 0;
        uStack_1c = (ushort)iVar17;
        local_1a = (undefined1)((uint)iVar17 >> 0x10);
        bStack_19 = (byte)((uint)iVar17 >> 0x18);
        uStack_12 = uVar10;
      }
      goto joined_r0x101a3f5c;
    }
  }
  uVar13 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uVar10 = uVar14;
  if (0x3ffe < (ushort)(uVar13 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar14 = uVar13 >> 0x10 & 0x7fff;
    iVar17 = uVar14 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    uStack_12 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    uVar10 = 0;
    uStack_a = 0;
    if (((ushort)uVar14 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar14 == 0) &&
             (iVar17 = uVar14 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (uStack_20 == 0)) && (uVar7 == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_101a4457;
        }
        local_58 = (undefined **)0x0;
        psVar6 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar14 = *(uint *)(psVar6 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar14 < *(uint *)(psVar6 + -2)) || (uVar14 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar6 + -2) = uVar14;
              if (bVar4) {
                *psVar6 = *psVar6 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar6 = psVar6 + 1;
          local_58 = (undefined **)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_101a4365:
          uVar23 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar23 < 0) {
            uVar14 = -(iVar17 + 0xffff);
            uVar7 = uVar14 & 0xffff;
            uVar23 = uVar23 + (short)uVar14;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar14 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar10 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar7 = uVar7 - 1;
              uStack_12._2_2_ = (ushort)(uVar14 >> 1);
              local_14 = (byte)uVar10;
              uStack_13 = (undefined1)(uVar10 >> 8);
            } while (uVar7 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar23 = (ushort)uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar20 | uVar23 >> 0xf;
            iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar3 | (ushort)uStack_e >> 0xf;
            iVar17 = iVar17 + 0xffff;
            uStack_e._0_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar23 = (ushort)iVar17;
          if ((short)uVar23 < 1) goto LAB_101a4365;
        }
        uStack_20 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            uStack_12 = uStack_20;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              uVar10 = uStack_20;
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar23 = uVar23 + 1;
              }
              else {
                uStack_a = uStack_a + 1;
              }
            }
            else {
              uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            uVar10 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        if (uVar23 < 0x7fff) {
          bStack_19 = (byte)(uVar23 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar23;
          uStack_20 = uVar10;
          uVar7 = uStack_12;
        }
        else {
          iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar17;
          local_1a = (undefined1)((uint)iVar17 >> 0x10);
          bStack_19 = (byte)((uint)iVar17 >> 0x18);
          uVar7 = uStack_20;
        }
        goto LAB_101a4457;
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
    uStack_12 = 0;
    uVar10 = 0;
    uStack_20 = 0;
    uVar7 = 0;
  }
LAB_101a4457:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    uVar14 = uVar7;
    do {
      uVar7 = uVar14 << 1;
      uVar13 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar13 | uVar14 >> 0x1f);
      uStack_20._2_2_ = (ushort)(uVar13 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
      uVar14 = uVar7;
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar14 = -iVar20 & 0xff, uVar14 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar16 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar13 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar13;
        local_1a = (undefined1)(uVar13 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        local_24._2_2_ = (ushort)(uVar7 >> 0x11) | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar14 = uVar14 - 1;
        uStack_20._0_2_ = (ushort)(uVar16 >> 1);
        local_24._0_2_ = (undefined2)(uVar7 >> 1);
        uVar7 = CONCAT22(local_24._2_2_,(undefined2)local_24);
      } while (0 < (int)uVar14);
    }
    psVar6 = param_6 + 2;
    psVar18 = psVar6;
    uVar23 = uStack_20._2_2_;
    for (param_4 = param_4 + 1; 0 < param_4; param_4 = param_4 + -1) {
      local_24._2_2_ = (ushort)(uVar7 >> 0x10);
      local_24._0_2_ = (undefined2)uVar7;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = (undefined *)CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar13 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar23 >> 0xf)) * 2 |
               (CONCAT22(uVar23,(ushort)uStack_20) & 0x7fffffff) >> 0x1e;
      uVar16 = (CONCAT22(uVar23,(ushort)uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar7 & 0x7fffffff) >> 0x1e;
      uVar14 = uVar7 * 5;
      if ((uVar14 < uVar7 * 4) || (uVar21 = uVar16, uVar14 < uVar7)) {
        uVar21 = uVar16 + 1;
        bVar4 = false;
        if ((uVar21 < uVar16) || (uVar21 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar13 = uVar13 + 1;
        }
      }
      uVar16 = CONCAT22(uVar23,(ushort)uStack_20) + uVar21;
      if ((uVar16 < uVar21) || (uVar16 < CONCAT22(uVar23,(ushort)uStack_20))) {
        uVar13 = uVar13 + 1;
      }
      iVar17 = (int)(local_38 + uVar13) * 2;
      uStack_1c = (ushort)iVar17 | (ushort)(uVar16 >> 0x1f);
      uVar7 = uVar7 * 10;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar16 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar17 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar16 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (undefined2)local_24;
      uStack_3a = uVar23;
      uVar23 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar23,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar6 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar6) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar6 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_101a4618;
      }
    }
    else {
      for (; (psVar6 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar6) {
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
LAB_101a4618:
  local_24 = uVar7;
  uStack_e = uVar10;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101a4660 __set_controlfp

/* Library Function - Single Match
    __set_controlfp
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_controlfp(uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ushort in_FPUControlWord;
  
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((in_FPUControlWord & 0x1f3d) != 0x23d))
     || ((DAT_1033fe34 != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = __controlfp_s((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}


// ==== 101a4763 __hw_cw

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


// ==== 101a48cc ___hw_cw_sse2

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint ___hw_cw_sse2(void)

{
  uint uVar1;
  uint uVar2;
  uint in_EDX;
  
  uVar1 = 0;
  if ((in_EDX & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((in_EDX & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_EDX & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((in_EDX & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((in_EDX & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((in_EDX & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = in_EDX & 0x300;
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
  uVar2 = in_EDX & 0x3000000;
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


// ==== 101a49b6 __statusfp

/* Library Function - Single Match
    __statusfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __statusfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar2 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  if (DAT_1033fe34 != 0) {
    uVar1 = 0;
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}


// ==== 101a4a7c ___statusfp_sse2

/* Library Function - Single Match
    ___statusfp_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___statusfp_sse2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ___get_fpsr_sse2();
  uVar2 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  return uVar2;
}


// ==== 101a4c76 __statusfp2

/* Library Function - Single Match
    __statusfp2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __statusfp2(uint *_X86_status,uint *_SSE2_status)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (_X86_status != (uint *)0x0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    *_X86_status = uVar1;
  }
  if (_SSE2_status != (uint *)0x0) {
    uVar1 = ___statusfp_sse2();
    *_SSE2_status = uVar1;
  }
  return;
}


// ==== 101a4cce __clearfp

/* WARNING: Removing unreachable block (ram,0x101a4d58) */
/* WARNING: Removing unreachable block (ram,0x101a4d48) */
/* WARNING: Removing unreachable block (ram,0x101a4d38) */
/* WARNING: Removing unreachable block (ram,0x101a4d33) */
/* WARNING: Removing unreachable block (ram,0x101a4d3b) */
/* WARNING: Removing unreachable block (ram,0x101a4d40) */
/* WARNING: Removing unreachable block (ram,0x101a4d43) */
/* WARNING: Removing unreachable block (ram,0x101a4d4b) */
/* WARNING: Removing unreachable block (ram,0x101a4d50) */
/* WARNING: Removing unreachable block (ram,0x101a4d53) */
/* WARNING: Removing unreachable block (ram,0x101a4d5b) */
/* WARNING: Removing unreachable block (ram,0x101a4d60) */
/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_1033fe34 == 0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1;
}


// ==== 101a4da5 ___control87_2

/* Library Function - Single Match
    ___control87_2
   
   Library: Visual Studio 2005 Release */

int __cdecl ___control87_2(uint _NewValue,uint _Mask,uint *_X86_cw,uint *_Sse2_cw)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar4 = 0;
  if (_X86_cw != (uint *)0x0) {
    if ((in_FPUControlWord & 1) != 0) {
      uVar4 = 0x10;
    }
    if ((in_FPUControlWord & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((in_FPUControlWord & 8) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((in_FPUControlWord & 0x10) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((in_FPUControlWord & 0x20) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((in_FPUControlWord & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar3 = in_FPUControlWord & 0xc00;
    if ((in_FPUControlWord & 0xc00) != 0) {
      if (uVar3 == 0x400) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar4 = uVar4 | 0x300;
      }
    }
    if ((in_FPUControlWord & 0x300) == 0) {
      uVar4 = uVar4 | 0x20000;
    }
    else if ((in_FPUControlWord & 0x300) == 0x200) {
      uVar4 = uVar4 | 0x10000;
    }
    if ((in_FPUControlWord & 0x1000) != 0) {
      uVar4 = uVar4 | 0x40000;
    }
    uVar5 = ~_Mask & uVar4 | _NewValue & _Mask;
    if (uVar5 != uVar4) {
      uVar4 = __hw_cw();
      uVar5 = 0;
      if ((uVar4 & 1) != 0) {
        uVar5 = 0x10;
      }
      if ((uVar4 & 4) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((uVar4 & 8) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((uVar4 & 0x10) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((uVar4 & 0x20) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((uVar4 & 2) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar1 = uVar4 & 0xc00;
      if (uVar1 != 0) {
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
      if ((uVar4 & 0x300) == 0) {
        uVar5 = uVar5 | 0x20000;
      }
      else if ((uVar4 & 0x300) == 0x200) {
        uVar5 = uVar5 | 0x10000;
      }
      if ((uVar4 & 0x1000) != 0) {
        uVar5 = uVar5 | 0x40000;
      }
    }
    *_X86_cw = uVar5;
  }
  if (_Sse2_cw != (uint *)0x0) {
    uVar4 = 0;
    if (DAT_1033fe34 == 0) {
      *_Sse2_cw = 0;
    }
    else {
      if ((char)MXCSR < '\0') {
        uVar4 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar5 = MXCSR & 0x6000;
      if (uVar5 != 0) {
        if (uVar5 == 0x2000) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar5 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar5 == 0x6000) {
          uVar4 = uVar4 | 0x300;
        }
      }
      uVar5 = MXCSR & 0x8040;
      if (uVar5 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar5 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar5 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
      if ((~(_Mask & 0x308031f) & uVar4 | _Mask & 0x308031f & _NewValue) != uVar4) {
        uVar2 = ___hw_cw_sse2();
        ___set_fpsr_sse2(uVar2);
        uVar4 = 0;
        if ((char)MXCSR < '\0') {
          uVar4 = 0x10;
        }
        if ((MXCSR & 0x200) != 0) {
          uVar4 = uVar4 | 8;
        }
        if ((MXCSR & 0x400) != 0) {
          uVar4 = uVar4 | 4;
        }
        if ((MXCSR & 0x800) != 0) {
          uVar4 = uVar4 | 2;
        }
        if ((MXCSR & 0x1000) != 0) {
          uVar4 = uVar4 | 1;
        }
        if ((MXCSR & 0x100) != 0) {
          uVar4 = uVar4 | 0x80000;
        }
        uVar5 = MXCSR & 0x6000;
        if (uVar5 != 0) {
          if (uVar5 == 0x2000) {
            uVar4 = uVar4 | 0x100;
          }
          else if (uVar5 == 0x4000) {
            uVar4 = uVar4 | 0x200;
          }
          else if (uVar5 == 0x6000) {
            uVar4 = uVar4 | 0x300;
          }
        }
        uVar5 = MXCSR & 0x8040;
        if (uVar5 == 0x40) {
          uVar4 = uVar4 | 0x2000000;
        }
        else if (uVar5 == 0x8000) {
          uVar4 = uVar4 | 0x3000000;
        }
        else if (uVar5 == 0x8040) {
          uVar4 = uVar4 | 0x1000000;
        }
      }
      *_Sse2_cw = uVar4;
    }
  }
  return 1;
}


// ==== 101a50af __control87

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
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
  if (DAT_1033fe34 != 0) {
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
    if ((~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue) != uVar5) {
      uVar4 = ___hw_cw_sse2();
      ___set_fpsr_sse2(uVar4);
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


// ==== 101a56bb strtoxl

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
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 0x16;
    FUN_10183c33(0,0,0,0,0);
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
LAB_101a5772:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_101a5772;
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
      goto LAB_101a57d8;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_101a57d8;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_101a57d8;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_101a57d8:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_101a5832:
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
          puVar3 = (undefined4 *)FUN_10183cab();
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
    if ((uint)param_4 <= uVar6) goto LAB_101a5832;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_101a5832;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 101a58e6 _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1033e2bc == 0) {
    ppuVar2 = &PTR_DAT_1023b598;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 101a592a _strtoul

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1033e2bc == 0) {
    ppuVar2 = &PTR_DAT_1023b598;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


// ==== 101a596f strtoxq

/* WARNING: Removing unreachable block (ram,0x101a5ae8) */
/* WARNING: Removing unreachable block (ram,0x101a5b7e) */
/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint extraout_ECX;
  pthreadlocinfo ptVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  localeinfo_struct local_3c;
  int local_34;
  char local_30;
  int local_28;
  uint local_24;
  int local_20;
  ulonglong local_1c;
  undefined8 local_14;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_3c,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar4 = (undefined4 *)FUN_10183cab();
    *puVar4 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_30 != '\0') {
      *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  local_14._0_4_ = 0;
  local_14._4_4_ = 0;
  ptVar7 = local_3c.locinfo;
  pbVar9 = (byte *)param_2;
  do {
    pbVar8 = pbVar9;
    local_5 = *pbVar8;
    pbVar9 = pbVar8 + 1;
    if ((int)ptVar7->locale_name[3] < 2) {
      uVar5 = (byte)ptVar7[1].lc_category[0].locale[(uint)local_5 * 2] & 8;
    }
    else {
      uVar5 = __isctype_l((uint)local_5,8,&local_3c);
      ptVar7 = local_3c.locinfo;
    }
  } while (uVar5 != 0);
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_101a5a2d:
    local_5 = *pbVar9;
    pbVar9 = pbVar8 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_101a5a2d;
  local_c = pbVar9;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_101a5a82;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_101a5a82;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    local_5 = pbVar9[1];
    local_c = pbVar9 + 2;
  }
LAB_101a5a82:
  local_28 = param_4 >> 0x1f;
  local_1c = __aulldvrm(0xffffffff,0xffffffff,param_4,local_28);
  local_20 = 0;
  pcVar2 = ptVar7[1].lc_category[0].locale;
  local_24 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_101a5b15:
        local_c = local_c + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            local_c = (byte *)param_2;
          }
          uVar3 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                ((uVar3 = local_14, (param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x8000000000000000 < local_14)) ||
                  (((param_5 & 2U) == 0 &&
                   ((0x7ffffffeffffffff < local_14 && (0x7fffffffffffffff < local_14)))))))))) {
          puVar4 = (undefined4 *)FUN_10183cab();
          *puVar4 = 0x22;
          if ((param_5 & 1U) == 0) {
            if ((param_5 & 2U) == 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            else {
              uVar3 = 0x8000000000000000;
            }
          }
          else {
            uVar3 = 0xffffffffffffffff;
          }
        }
        local_14._4_4_ = (int)(uVar3 >> 0x20);
        local_14._0_4_ = (int)uVar3;
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)local_c;
        }
        if ((param_5 & 2U) != 0) {
          uVar3 = CONCAT44(-(local_14._4_4_ + (uint)((int)local_14 != 0)),-(int)local_14);
        }
        if (local_30 != '\0') {
          *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
        }
        return uVar3;
      }
      iVar6 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar6 = iVar6 + -0x20;
      }
      uVar5 = iVar6 - 0x37;
    }
    else {
      uVar5 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar5) goto LAB_101a5b15;
    if ((local_14 < local_1c) ||
       ((local_1c == local_14 && ((local_20 != 0 || (uVar5 <= local_24)))))) {
      lVar10 = __allmul(param_4,local_28,local_14);
      local_14 = lVar10 + (ulonglong)uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_101a5b15;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
}


// ==== 101a5c03 __strtoi64

/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_1033e2bc == 0) {
    ppuVar2 = &PTR_DAT_1023b598;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}


// ==== 101a5c47 __strtoui64

/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2005 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_1033e2bc == 0) {
    ppuVar2 = &PTR_DAT_1023b598;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}


// ==== 101a5c8c __mbsnbicoll_l

/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
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
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
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
      if (iVar2 == 0) goto LAB_101a5d55;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
LAB_101a5d55:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 101a5d78 __mbsnbicoll

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 101a5d8f ___wtomb_environ

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
  lpWideCharStr = (LPCWSTR)*DAT_1033e1c4;
  puVar2 = DAT_1033e1c4;
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
    iVar1 = FUN_101a8319(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


// ==== 101a5e3e __set_osfhnd

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_1033e960)) {
    iVar2 = (param_1 & 0x1fU) * 0x38;
    if (*(int *)(iVar2 + (&DAT_1033e9a0)[param_1 >> 5]) == -1) {
      if (DAT_1033de50 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_101a5e98;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_101a5e98:
      *(intptr_t *)(iVar2 + (&DAT_1033e9a0)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_10183cab();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_10183cbe();
  *puVar1 = 0;
  return -1;
}


// ==== 101a5ebb __free_osfhnd

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_1033e960)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_1033e9a0)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1033de50 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_101a5f19;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_101a5f19:
      *(undefined4 *)(iVar3 + (&DAT_1033e9a0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_10183cab();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_10183cbe();
  *puVar2 = 0;
  return -1;
}


// ==== 101a5f3c __get_osfhandle

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  undefined4 *puVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_10183cbe();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1033e960)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_1033e9a0)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  puVar1 = (undefined4 *)FUN_10183cbe();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_10183cab();
  *puVar1 = 9;
  FUN_10183c33(0,0,0,0,0);
  return -1;
}


// ==== 101a5fad ___lock_fhandle

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2005 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_1033e9a0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_101a6044();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_1033e9a0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}


// ==== 101a6044 FUN_101a6044

void FUN_101a6044(void)

{
  FUN_101902f8(10);
  return;
}


// ==== 101a604d __unlock_fhandle

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1033e9a0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  return;
}


// ==== 101a606f __alloc_osfhnd

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  local_20 = -1;
  iVar4 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)(&DAT_1033e9a0)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x38);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_1033e9a0)[iVar4] = puVar3;
          DAT_1033e960 = DAT_1033e960 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_1033e9a0)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_1033e9a0)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_1033e9a0)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            FUN_101a6142();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_1033e9a0)[iVar4]) / 0x38 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_101a6205();
  }
  return local_20;
}


// ==== 101a6142 FUN_101a6142

void FUN_101a6142(void)

{
  FUN_101902f8(10);
  return;
}


// ==== 101a6205 FUN_101a6205

void FUN_101a6205(void)

{
  FUN_101902f8(0xb);
  return;
}


// ==== 101a6323 __putwch_nolock

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  if (DAT_1023befc != 0) {
    if (DAT_1023c004 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_1023c004 == (HANDLE)0xffffffff) goto LAB_101a63cc;
    BVar2 = WriteConsoleW(DAT_1023c004,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_1023befc = 1;
      goto LAB_101a63cc;
    }
    if ((DAT_1023befc != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_101a63cc;
    DAT_1023befc = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_1023c004 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_1023c004,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_101a63cc:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}


// ==== 101a64c6 __flswbuf

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  char *_Buf;
  char *pcVar2;
  uint _FileHandle;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint _MaxCharCount;
  longlong lVar6;
  uint local_8;
  
  _FileHandle = __fileno(_File);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 9;
LAB_101a64ea:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 0x22;
    goto LAB_101a64ea;
  }
  if ((uVar1 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      _File->_flag = uVar1 | 0x20;
      return 0xffff;
    }
    _File->_ptr = _File->_base;
    _File->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = _File->_flag;
  _File->_cnt = 0;
  local_8 = 0;
  _MaxCharCount = 2;
  _File->_flag = uVar1 & 0xffffffef | 2;
  if (((uVar1 & 0x10c) == 0) &&
     (((iVar4 = FUN_1018ed9f(), _File != (FILE *)(iVar4 + 0x20) &&
       (iVar4 = FUN_1018ed9f(), _File != (FILE *)(iVar4 + 0x40))) ||
      (iVar4 = __isatty(_FileHandle), iVar4 == 0)))) {
    __getbuf(_File);
  }
  if ((_File->_flag & 0x108) == 0) {
    local_8 = CONCAT22(local_8._2_2_,(short)_Ch);
    local_8 = __write(_FileHandle,&local_8,2);
  }
  else {
    _Buf = _File->_base;
    pcVar2 = _File->_ptr;
    _File->_ptr = _Buf + 2;
    _MaxCharCount = (int)pcVar2 - (int)_Buf;
    _File->_cnt = _File->_bufsiz + -2;
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar5 = &DAT_1023b820;
      }
      else {
        puVar5 = (undefined *)((_FileHandle & 0x1f) * 0x38 + (&DAT_1033e9a0)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_101a661f;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_101a661f:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}


// ==== 101a6636 __stbuf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_1018ed9f();
  if (_File == (FILE *)(iVar3 + 0x20)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1018ed9f();
    if (_File != (FILE *)(iVar3 + 0x40)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_1033e2e4 = _DAT_1033e2e4 + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_1033e90c + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_101a66ba;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_101a66ba:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}


// ==== 101a6821 ___ascii_stricmp

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}


// ==== 101a6856 __stricmp_l

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}


// ==== 101a6929 __stricmp

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1033e2bc == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 101a6979 __strnicmp_l

/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      puVar1 = (undefined4 *)FUN_10183cab();
      *puVar1 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        do {
          iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
          _Str1 = _Str1 + 1;
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_10183cab();
      *puVar1 = 0x16;
      FUN_10183c33(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 101a6a69 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1033e2bc == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 101a6ac5 xtoa_s

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release
   __stdcall xtoa_s,20 */

undefined4 xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  undefined4 *puVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_101a6af7:
    puVar3 = (undefined4 *)FUN_10183cab();
    uVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_101a6af7;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    puVar3 = (undefined4 *)FUN_10183cab();
    uVar7 = 0x22;
  }
  *puVar3 = uVar7;
  FUN_10183c33(0,0,0,0,0);
  return uVar7;
}


// ==== 101a6ba0 __itoa_s

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 uVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar2 = 1;
    _Radix = 10;
  }
  else {
    uVar2 = 0;
  }
  eVar1 = xtoa_s(_Size,_Radix,uVar2);
  return eVar1;
}


// ==== 101a6bc8 __ltoa_s

/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    uVar1 = 1;
  }
  eVar2 = xtoa_s(_Size,_Radix,uVar1);
  return eVar2;
}


// ==== 101a6c05 x64toa_s

/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2005 Release
   __fastcall x64toa_s,24 */

undefined4 __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6,
        char *param_7)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_101a6c13:
    puVar2 = (undefined4 *)FUN_10183cab();
    uVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_7 != (char *)0x0) + 1 < param_5) {
      if (param_6 - 2U < 0x23) {
        bVar6 = param_7 != (char *)0x0;
        param_7 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_3 != 0;
          param_3 = -param_3;
          *unaff_EDI = '-';
          param_7 = unaff_EDI + 1;
          param_4 = -(param_4 + (uint)bVar5);
        }
        lVar7 = CONCAT44(param_4,param_3);
        local_8 = (uint)bVar6;
        pcVar1 = param_7;
        do {
          pcVar4 = pcVar1;
          lVar7 = __aulldvrm(lVar7,param_6,0);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((lVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_5));
        if (local_8 < param_5) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_7;
            pcVar4 = pcVar4 + -1;
            *param_7 = cVar3;
            param_7 = param_7 + 1;
          } while (param_7 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        puVar2 = (undefined4 *)FUN_10183cab();
        uVar8 = 0x22;
        *puVar2 = 0x22;
        goto LAB_101a6c1d;
      }
      goto LAB_101a6c13;
    }
    puVar2 = (undefined4 *)FUN_10183cab();
    uVar8 = 0x22;
  }
  *puVar2 = uVar8;
LAB_101a6c1d:
  FUN_10183c33(0,0,0,0,0);
  return uVar8;
}


// ==== 101a6cfb __i64toa_s

/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  undefined4 uVar1;
  errno_t eVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  uVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    uVar1 = 1;
  }
  eVar2 = x64toa_s(in_ECX,in_EDX,_Val,_Size,_Radix,uVar1);
  return eVar2;
}


// ==== 101a6d2e __ui64toa_s

/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  eVar1 = x64toa_s(in_ECX,in_EDX,_Val,_Size,_Radix,0);
  return eVar1;
}


// ==== 101a6f1a __chsize_nolock

/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  DWORD *pDVar8;
  uint uVar9;
  int unaff_EDI;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint in_stack_00000008;
  DWORD DVar15;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar13 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar13 == 0xffffffffffffffff) goto LAB_101a6fa0;
  lVar14 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar5 = (int)((ulonglong)lVar14 >> 0x20);
  if (lVar14 == -1) goto LAB_101a6fa0;
  uVar9 = in_stack_00000008 - (uint)lVar14;
  uVar6 = (uint)(in_stack_00000008 < (uint)lVar14);
  iVar1 = (int)_Size - iVar5;
  iVar10 = iVar1 - uVar6;
  if ((iVar10 < 0) ||
     ((iVar10 == 0 || SBORROW4((int)_Size,iVar5) != SBORROW4(iVar1,uVar6) && (uVar9 == 0)))) {
    if ((iVar10 < 1) && (iVar10 < 0)) {
      lVar14 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar14 == -1) goto LAB_101a6fa0;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar7 = SetEndOfFile(pvVar2);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        puVar3 = (undefined4 *)FUN_10183cab();
        *puVar3 = 0xd;
        pDVar8 = (DWORD *)FUN_10183cbe();
        DVar15 = GetLastError();
        *pDVar8 = DVar15;
        goto LAB_101a709e;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar15 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar15,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      puVar3 = (undefined4 *)FUN_10183cab();
      *puVar3 = 0xc;
      goto LAB_101a6fa0;
    }
    iVar5 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar6 = uVar9;
      if ((-1 < iVar10) && ((0 < iVar10 || (0xfff < uVar9)))) {
        uVar6 = 0x1000;
      }
      uVar6 = __write_nolock(_FileHandle,_Buf,uVar6);
      if (uVar6 == 0xffffffff) break;
      bVar11 = uVar9 < uVar6;
      uVar9 = uVar9 - uVar6;
      bVar12 = SBORROW4(iVar10,(int)uVar6 >> 0x1f);
      iVar1 = iVar10 - ((int)uVar6 >> 0x1f);
      iVar10 = iVar1 - (uint)bVar11;
      if ((iVar10 < 0) || ((iVar10 == 0 || bVar12 != SBORROW4(iVar1,(uint)bVar11) && (uVar9 == 0))))
      goto LAB_101a6ff2;
    }
    piVar4 = (int *)FUN_10183cbe();
    if (*piVar4 == 5) {
      puVar3 = (undefined4 *)FUN_10183cab();
      *puVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_101a6ff2:
    __setmode_nolock(_FileHandle,iVar5);
    DVar15 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar15,_Buf);
LAB_101a709e:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_101a6fa0;
  }
  lVar14 = __lseeki64_nolock(_FileHandle,uVar13 >> 0x20,unaff_EDI);
  if (lVar14 != -1) {
    return 0;
  }
LAB_101a6fa0:
  piVar4 = (int *)FUN_10183cab();
  return *piVar4;
}


// ==== 101a71d3 FUN_101a71d3

int FUN_101a71d3(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  WCHAR WVar4;
  uint uVar5;
  WCHAR *pWVar6;
  undefined4 *puVar7;
  uint uVar8;
  LPWSTR pWVar9;
  BOOL BVar10;
  DWORD DVar11;
  LPWSTR pWVar12;
  int iVar13;
  int iVar14;
  int unaff_EDI;
  bool bVar15;
  longlong lVar16;
  uint local_1c;
  int local_18;
  LPWSTR local_14;
  LPWSTR local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  uVar5 = (uint)param_3;
  local_18 = -2;
  if (param_1 == 0xfffffffe) {
    puVar7 = (undefined4 *)FUN_10183cbe();
    *puVar7 = 0;
    puVar7 = (undefined4 *)FUN_10183cab();
    *puVar7 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_1033e960 <= param_1)) {
    puVar7 = (undefined4 *)FUN_10183cbe();
    *puVar7 = 0;
    puVar7 = (undefined4 *)FUN_10183cab();
    *puVar7 = 9;
    FUN_10183c33(0,0,0,0,0);
    return -1;
  }
  iVar14 = (param_1 & 0x1f) * 0x38;
  piVar1 = &DAT_1033e9a0 + ((int)param_1 >> 5);
  bVar3 = *(byte *)(*piVar1 + iVar14 + 4);
  if ((bVar3 & 1) == 0) {
    puVar7 = (undefined4 *)FUN_10183cbe();
    *puVar7 = 0;
    puVar7 = (undefined4 *)FUN_10183cab();
    *puVar7 = 9;
    goto LAB_101a72db;
  }
  if (param_3 < 0x80000000) {
    local_14 = (LPWSTR)0x0;
    if ((param_3 == (LPWSTR)0x0) || ((bVar3 & 2) != 0)) {
      return 0;
    }
    if (param_2 != (LPWSTR)0x0) {
      local_6 = (char)(*(char *)(*piVar1 + iVar14 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~(uint)param_3 & 1) == 0) goto LAB_101a72c9;
        uVar8 = (uint)param_3 >> 1;
        param_3 = (LPWSTR)0x4;
        if (3 < uVar8) {
          param_3 = (LPWSTR)uVar8;
        }
        local_10 = __malloc_crt((size_t)param_3);
        if (local_10 == (LPWSTR)0x0) {
          puVar7 = (undefined4 *)FUN_10183cab();
          *puVar7 = 0xc;
          puVar7 = (undefined4 *)FUN_10183cbe();
          *puVar7 = 8;
          return -1;
        }
        lVar16 = __lseeki64_nolock(param_1,0x100000000,unaff_EDI);
        iVar13 = *piVar1;
        *(int *)(iVar14 + 0x28 + iVar13) = (int)lVar16;
        *(int *)(iVar14 + 0x2c + iVar13) = (int)((ulonglong)lVar16 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~(uint)param_3 & 1) == 0) goto LAB_101a72c9;
          param_3 = (LPWSTR)((uint)param_3 & 0xfffffffe);
        }
        local_10 = param_2;
      }
      pWVar9 = local_10;
      uVar8 = (uint)param_3;
      if ((((*(byte *)(*piVar1 + iVar14 + 4) & 0x48) != 0) &&
          (bVar3 = *(byte *)(*piVar1 + iVar14 + 5), bVar3 != 10)) && (param_3 != (LPWSTR)0x0)) {
        *(byte *)local_10 = bVar3;
        pWVar9 = (LPWSTR)((int)local_10 + 1);
        uVar8 = (int)param_3 - 1;
        local_14 = (LPWSTR)0x1;
        *(undefined1 *)(iVar14 + 5 + *piVar1) = 10;
        if (((local_6 != '\0') && (bVar3 = *(byte *)(iVar14 + 0x25 + *piVar1), bVar3 != 10)) &&
           (uVar8 != 0)) {
          *(byte *)pWVar9 = bVar3;
          pWVar9 = local_10 + 1;
          uVar8 = (int)param_3 - 2;
          local_14 = (LPWSTR)0x2;
          *(undefined1 *)(iVar14 + 0x25 + *piVar1) = 10;
          if (((local_6 == '\x01') && (bVar3 = *(byte *)(iVar14 + 0x26 + *piVar1), bVar3 != 10)) &&
             (uVar8 != 0)) {
            *(byte *)pWVar9 = bVar3;
            pWVar9 = (LPWSTR)((int)local_10 + 3);
            local_14 = (LPWSTR)0x3;
            *(undefined1 *)(iVar14 + 0x26 + *piVar1) = 10;
            uVar8 = (int)param_3 - 3;
          }
        }
      }
      param_3 = (LPWSTR)uVar8;
      BVar10 = ReadFile(*(HANDLE *)(iVar14 + *piVar1),pWVar9,(DWORD)param_3,&local_1c,
                        (LPOVERLAPPED)0x0);
      if (((BVar10 == 0) || ((int)local_1c < 0)) || (param_3 < local_1c)) {
        DVar11 = GetLastError();
        if (DVar11 != 5) {
          if (DVar11 == 0x6d) {
            local_18 = 0;
            goto LAB_101a75e8;
          }
          goto LAB_101a75dd;
        }
        puVar7 = (undefined4 *)FUN_10183cab();
        *puVar7 = 9;
        puVar7 = (undefined4 *)FUN_10183cbe();
        *puVar7 = 5;
      }
      else {
        local_14 = (LPWSTR)((int)local_14 + local_1c);
        pbVar2 = (byte *)(iVar14 + 4 + *piVar1);
        if ((*pbVar2 & 0x80) == 0) goto LAB_101a75e8;
        if (local_6 == '\x02') {
          if ((local_1c == 0) || (*local_10 != L'\n')) {
            *pbVar2 = *pbVar2 & 0xfb;
          }
          else {
            *pbVar2 = *pbVar2 | 4;
          }
          local_14 = (LPWSTR)((int)local_14 + (int)local_10);
          param_3 = local_10;
          pWVar9 = local_10;
          if (local_10 < local_14) {
            do {
              WVar4 = *param_3;
              if (WVar4 == L'\x1a') {
                pbVar2 = (byte *)(iVar14 + 4 + *piVar1);
                if ((*pbVar2 & 0x40) == 0) {
                  *pbVar2 = *pbVar2 | 2;
                }
                else {
                  *pWVar9 = *param_3;
                  pWVar9 = pWVar9 + 1;
                }
                break;
              }
              if (WVar4 == L'\r') {
                if (param_3 < local_14 + -1) {
                  if (param_3[1] == L'\n') {
                    pWVar6 = param_3 + 2;
                    goto LAB_101a768b;
                  }
LAB_101a7720:
                  param_3 = param_3 + 1;
                  *pWVar9 = L'\r';
                }
                else {
                  pWVar6 = param_3 + 1;
                  BVar10 = ReadFile(*(HANDLE *)(iVar14 + *piVar1),&local_c,2,&local_1c,
                                    (LPOVERLAPPED)0x0);
                  if (((BVar10 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) || (local_1c == 0))
                  goto LAB_101a7720;
                  if ((*(byte *)(iVar14 + 4 + *piVar1) & 0x48) == 0) {
                    if ((pWVar9 == local_10) && (local_c == 10)) goto LAB_101a768b;
                    __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_101a7727;
                    goto LAB_101a7720;
                  }
                  if (local_c == 10) {
LAB_101a768b:
                    param_3 = pWVar6;
                    *pWVar9 = L'\n';
                  }
                  else {
                    *pWVar9 = L'\r';
                    *(undefined1 *)(iVar14 + 5 + *piVar1) = (undefined1)local_c;
                    *(undefined1 *)(iVar14 + 0x25 + *piVar1) = local_c._1_1_;
                    *(undefined1 *)(iVar14 + 0x26 + *piVar1) = 10;
                    param_3 = pWVar6;
                  }
                }
                pWVar9 = pWVar9 + 1;
                pWVar6 = param_3;
              }
              else {
                *pWVar9 = WVar4;
                pWVar9 = pWVar9 + 1;
                pWVar6 = param_3 + 1;
              }
LAB_101a7727:
              param_3 = pWVar6;
            } while (param_3 < local_14);
          }
          local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
          goto LAB_101a75e8;
        }
        if ((local_1c == 0) || ((byte)*local_10 != 10)) {
          *pbVar2 = *pbVar2 & 0xfb;
        }
        else {
          *pbVar2 = *pbVar2 | 4;
        }
        local_14 = (LPWSTR)((int)local_14 + (int)local_10);
        param_3 = local_10;
        pWVar9 = local_10;
        if (local_10 < local_14) {
          do {
            bVar3 = (byte)*param_3;
            if (bVar3 == 0x1a) {
              pbVar2 = (byte *)(iVar14 + 4 + *piVar1);
              if ((*pbVar2 & 0x40) == 0) {
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                *(byte *)pWVar9 = (byte)*param_3;
                pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              }
              break;
            }
            if (bVar3 == 0xd) {
              if (param_3 < (LPWSTR)((int)local_14 + -1)) {
                if (*(byte *)((int)param_3 + 1) == 10) {
                  pWVar12 = param_3 + 1;
                  goto LAB_101a7468;
                }
LAB_101a74df:
                param_3 = (LPWSTR)((int)param_3 + 1);
                *(byte *)pWVar9 = 0xd;
              }
              else {
                pWVar12 = (LPWSTR)((int)param_3 + 1);
                BVar10 = ReadFile(*(HANDLE *)(iVar14 + *piVar1),&local_5,1,&local_1c,
                                  (LPOVERLAPPED)0x0);
                if (((BVar10 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) || (local_1c == 0))
                goto LAB_101a74df;
                if ((*(byte *)(iVar14 + 4 + *piVar1) & 0x48) == 0) {
                  if ((pWVar9 == local_10) && (local_5 == '\n')) goto LAB_101a7468;
                  __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_101a74e3;
                  goto LAB_101a74df;
                }
                if (local_5 == '\n') {
LAB_101a7468:
                  param_3 = pWVar12;
                  *(byte *)pWVar9 = 10;
                }
                else {
                  *(byte *)pWVar9 = 0xd;
                  *(char *)(iVar14 + 5 + *piVar1) = local_5;
                  param_3 = pWVar12;
                }
              }
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar12 = param_3;
            }
            else {
              *(byte *)pWVar9 = bVar3;
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar12 = (LPWSTR)((int)param_3 + 1);
            }
LAB_101a74e3:
            param_3 = pWVar12;
          } while (param_3 < local_14);
        }
        local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (LPWSTR)0x0)) goto LAB_101a75e8;
        bVar3 = *(byte *)((int)pWVar9 + -1);
        if ((char)bVar3 < '\0') {
          iVar13 = 1;
          pWVar9 = (LPWSTR)((int)pWVar9 + -1);
          while ((((&DAT_1023bf00)[bVar3] == '\0' && (iVar13 < 5)) && (local_10 <= pWVar9))) {
            pWVar9 = (LPWSTR)((int)pWVar9 + -1);
            bVar3 = *(byte *)pWVar9;
            iVar13 = iVar13 + 1;
          }
          if ((char)(&DAT_1023bf00)[(byte)*pWVar9] == 0) {
            puVar7 = (undefined4 *)FUN_10183cab();
            *puVar7 = 0x2a;
            goto LAB_101a75e4;
          }
          if ((char)(&DAT_1023bf00)[(byte)*pWVar9] + 1 == iVar13) {
            pWVar9 = (LPWSTR)((int)pWVar9 + iVar13);
          }
          else if ((*(byte *)(*piVar1 + iVar14 + 4) & 0x48) == 0) {
            __lseeki64_nolock(param_1,CONCAT44(1,-iVar13 >> 0x1f),unaff_EDI);
          }
          else {
            pWVar12 = (LPWSTR)((int)pWVar9 + 1);
            *(byte *)(*piVar1 + iVar14 + 5) = (byte)*pWVar9;
            if (1 < iVar13) {
              *(byte *)(iVar14 + 0x25 + *piVar1) = *(byte *)pWVar12;
              pWVar12 = pWVar9 + 1;
            }
            if (iVar13 == 3) {
              *(byte *)(iVar14 + 0x26 + *piVar1) = (byte)*pWVar12;
              pWVar12 = (LPWSTR)((int)pWVar12 + 1);
            }
            pWVar9 = (LPWSTR)((int)pWVar12 - iVar13);
          }
        }
        iVar13 = (int)pWVar9 - (int)local_10;
        local_14 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar13,param_2,uVar5 >> 1);
        if (local_14 != (LPWSTR)0x0) {
          bVar15 = local_14 != (LPWSTR)iVar13;
          local_14 = (LPWSTR)((int)local_14 * 2);
          *(uint *)(iVar14 + 0x30 + *piVar1) = (uint)bVar15;
          goto LAB_101a75e8;
        }
        DVar11 = GetLastError();
LAB_101a75dd:
        FUN_10183cd1(DVar11);
      }
LAB_101a75e4:
      local_18 = -1;
LAB_101a75e8:
      if (local_10 != param_2) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_101a72c9:
  puVar7 = (undefined4 *)FUN_10183cbe();
  *puVar7 = 0;
  puVar7 = (undefined4 *)FUN_10183cab();
  *puVar7 = 0x16;
LAB_101a72db:
  FUN_10183c33(0,0,0,0,0);
  return -1;
}


// ==== 101a7891 __close_nolock

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_1033e9a0 + 0x74) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_1033e9a0 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_101a78f0;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_101a78f2;
    }
  }
LAB_101a78f0:
  DVar4 = 0;
LAB_101a78f2:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_1033e9a0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_10183cd1(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}


// ==== 101a79f2 __lseek_nolock

/* Library Function - Single Match
    __lseek_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_10183cab();
    *puVar2 = 9;
    return -1;
  }
  DVar3 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
  if (DVar3 == 0xffffffff) {
    DVar4 = GetLastError();
  }
  else {
    DVar4 = 0;
  }
  if (DVar4 == 0) {
    pbVar1 = (byte *)((&DAT_1033e9a0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_10183cd1(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


// ==== 101a7b40 __setmode_nolock

/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  
  iVar7 = (_FileHandle & 0x1fU) * 0x38;
  piVar1 = &DAT_1033e9a0 + (_FileHandle >> 5);
  iVar4 = *piVar1 + iVar7;
  bVar2 = *(byte *)(iVar4 + 4);
  cVar3 = *(char *)(iVar4 + 0x24);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_101a7bdf;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_101a7bdf:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}


// ==== 101a7c42 FUN_101a7c42

undefined4 FUN_101a7c42(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    return 0x16;
  }
  *param_1 = DAT_1033e918;
  return 0;
}


// ==== 101a7d87 __crtCompareStringA_stat

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
  local_8 = DAT_1023a948 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_1033e914 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1033e914 = 2;
      }
    }
    else {
      DAT_1033e914 = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_101a80fe;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_101a7e01;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_101a7e01:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_101a80fe;
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_101a7e23;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_101a7e23:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_1033e914 == 2) || (DAT_1033e914 == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp(param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_101a80fe;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp(param_6,pcVar7,in_EDX,&param_3,0,0);
      if (pbVar9 == (byte *)0x0) goto LAB_101a80fe;
      _Memory = (PCNZCH)___convertcp(param_6,pcVar7,lpMultiByteStr,&param_5,0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        goto LAB_101a80fe;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
    }
    goto LAB_101a80fe;
  }
  if (DAT_1033e914 != 1) goto LAB_101a80fe;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_101a80fe;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_101a80fe;
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
      goto LAB_101a80fe;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_101a80fe;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_101a7f77:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_101a7f77;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_101a80fe;
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
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_101a8038;
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
LAB_101a8038:
  __freea(local_24);
LAB_101a80fe:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


// ==== 101a8110 ___crtCompareStringA

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


// ==== 101a8150 __strnicoll_l

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
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
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
        puVar1 = (undefined4 *)FUN_10183cab();
        *puVar1 = 0x16;
        goto LAB_101a8225;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
LAB_101a8225:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 101a8248 __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_1033e2bc == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 101a826f findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_1033e1bc;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1033e1bc >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1033e1bc >> 2;
}


// ==== 101a82bc copy_environ

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


// ==== 101a8319 FUN_101a8319

undefined4 FUN_101a8319(undefined4 *param_1,int param_2)

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
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    FUN_10183c33(0,0,0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_101a83a7:
    puVar1 = (undefined4 *)FUN_10183cab();
    *puVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_1033e1bc == DAT_1033e1c0) {
    DAT_1033e1bc = (int *)copy_environ();
  }
  if (DAT_1033e1bc == (int *)0x0) {
    if ((param_2 == 0) || (DAT_1033e1c4 == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_1033e1bc = __malloc_crt(4);
      if (DAT_1033e1bc == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_1033e1bc = 0;
      if (DAT_1033e1c4 == (undefined4 *)0x0) {
        DAT_1033e1c4 = __malloc_crt(4);
        if (DAT_1033e1c4 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1033e1c4 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_101a83a7;
    }
  }
  piVar4 = DAT_1033e1bc;
  if (DAT_1033e1bc == (int *)0x0) {
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
    piVar4 = __recalloc_crt(DAT_1033e1bc,4,_Size);
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
      goto LAB_101a84b8;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_1033e1bc,_Count,4), piVar4 == (int *)0x0)) goto LAB_101a84b8;
  }
  DAT_1033e1bc = piVar4;
LAB_101a84b8:
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
        puVar1 = (undefined4 *)FUN_10183cab();
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


// ==== 101a8584 ___initconout

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_1023c004 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// ==== 101a85d0 write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 101a8603 write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


// ==== 101a914a write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 101a917d write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


// ==== 101aa190 ___ascii_strnicmp

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
      if (bVar2 != (byte)uVar3) goto LAB_101aa1e1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_101aa1e1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 101aa1f1 __freebuf

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


// ==== 101aa21d __strdup

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


// ==== 101aa26d __mbschr_l

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
    puVar3 = (undefined4 *)FUN_10183cab();
    *puVar3 = 0x16;
    FUN_10183c33(0,0,0,0,0);
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
          if (bVar1 == 0) goto LAB_101aa315;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_101aa307;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_101aa315:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_101aa307:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 101aa327 __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 101aa350 _strchr

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


// ==== 101aa414 KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:00000056

// ==== 101b6620 Unwind@101b6620

void Unwind_101b6620(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6640 Unwind@101b6640

void Unwind_101b6640(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6660 Unwind@101b6660

void Unwind_101b6660(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6680 Unwind@101b6680

void Unwind_101b6680(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b66a0 Unwind@101b66a0

void Unwind_101b66a0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b66c0 Unwind@101b66c0

void Unwind_101b66c0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b66e0 Unwind@101b66e0

void Unwind_101b66e0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6700 Unwind@101b6700

void Unwind_101b6700(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6720 Unwind@101b6720

void Unwind_101b6720(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6740 Unwind@101b6740

void Unwind_101b6740(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6760 Unwind@101b6760

void Unwind_101b6760(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6780 Unwind@101b6780

void Unwind_101b6780(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b67b0 Unwind@101b67b0

void Unwind_101b67b0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b67d0 Unwind@101b67d0

void Unwind_101b67d0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b67f0 Unwind@101b67f0

void Unwind_101b67f0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6810 Unwind@101b6810

void Unwind_101b6810(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6830 Unwind@101b6830

void Unwind_101b6830(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6850 Unwind@101b6850

void Unwind_101b6850(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6870 Unwind@101b6870

void Unwind_101b6870(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6890 Unwind@101b6890

void Unwind_101b6890(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b68b0 Unwind@101b68b0

void Unwind_101b68b0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b68d0 Unwind@101b68d0

void Unwind_101b68d0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b68f0 Unwind@101b68f0

void Unwind_101b68f0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6910 Unwind@101b6910

void Unwind_101b6910(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6930 Unwind@101b6930

void Unwind_101b6930(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6950 Unwind@101b6950

void Unwind_101b6950(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6970 Unwind@101b6970

void Unwind_101b6970(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            (*(void **)(unaff_EBP + -0x10),0x10,8,FMemStackFrame::~FMemStackFrame);
  return;
}


// ==== 101b69b0 Unwind@101b69b0

void Unwind_101b69b0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b69d0 Unwind@101b69d0

void Unwind_101b69d0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b69f0 Unwind@101b69f0

void Unwind_101b69f0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6a10 Unwind@101b6a10

void Unwind_101b6a10(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6a30 Unwind@101b6a30

void Unwind_101b6a30(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6a60 Unwind@101b6a60

void Unwind_101b6a60(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6a80 Unwind@101b6a80

void Unwind_101b6a80(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6aa0 Unwind@101b6aa0

void Unwind_101b6aa0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6ac0 Unwind@101b6ac0

void Unwind_101b6ac0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6ae0 Unwind@101b6ae0

void Unwind_101b6ae0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6b00 Unwind@101b6b00

void Unwind_101b6b00(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6b20 Unwind@101b6b20

void Unwind_101b6b20(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6b40 Unwind@101b6b40

void Unwind_101b6b40(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6b60 Unwind@101b6b60

void Unwind_101b6b60(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6b80 Unwind@101b6b80

void Unwind_101b6b80(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6ba0 Unwind@101b6ba0

void Unwind_101b6ba0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6bc0 Unwind@101b6bc0

void Unwind_101b6bc0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6be0 Unwind@101b6be0

void Unwind_101b6be0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6c30 Unwind@101b6c30

void Unwind_101b6c30(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6c50 Unwind@101b6c50

void Unwind_101b6c50(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6c70 Unwind@101b6c70

void Unwind_101b6c70(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6c90 Unwind@101b6c90

void Unwind_101b6c90(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6cb0 Unwind@101b6cb0

void Unwind_101b6cb0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6cd0 Unwind@101b6cd0

void Unwind_101b6cd0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6cf0 Unwind@101b6cf0

void Unwind_101b6cf0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6d10 Unwind@101b6d10

void Unwind_101b6d10(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6d30 Unwind@101b6d30

void Unwind_101b6d30(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6d50 Unwind@101b6d50

void Unwind_101b6d50(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6d70 Unwind@101b6d70

void Unwind_101b6d70(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6d90 Unwind@101b6d90

void Unwind_101b6d90(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6db0 Unwind@101b6db0

void Unwind_101b6db0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6dd0 Unwind@101b6dd0

void Unwind_101b6dd0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6df0 Unwind@101b6df0

void Unwind_101b6df0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6e10 Unwind@101b6e10

void Unwind_101b6e10(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6e30 Unwind@101b6e30

void Unwind_101b6e30(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6e50 Unwind@101b6e50

void Unwind_101b6e50(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6e70 Unwind@101b6e70

void Unwind_101b6e70(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6e90 Unwind@101b6e90

void Unwind_101b6e90(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6eb0 Unwind@101b6eb0

void Unwind_101b6eb0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6ed0 Unwind@101b6ed0

void Unwind_101b6ed0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6ef0 Unwind@101b6ef0

void Unwind_101b6ef0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6f10 Unwind@101b6f10

void Unwind_101b6f10(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6f30 Unwind@101b6f30

void Unwind_101b6f30(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6f38 Unwind@101b6f38

void Unwind_101b6f38(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6f50 Unwind@101b6f50

void Unwind_101b6f50(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6f70 Unwind@101b6f70

void Unwind_101b6f70(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6f90 Unwind@101b6f90

void Unwind_101b6f90(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b6fb0 Unwind@101b6fb0

void Unwind_101b6fb0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6fb8 Unwind@101b6fb8

void Unwind_101b6fb8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6fd0 Unwind@101b6fd0

void Unwind_101b6fd0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b6ff0 Unwind@101b6ff0

void Unwind_101b6ff0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b6ff8 Unwind@101b6ff8

void Unwind_101b6ff8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b7011 Unwind@101b7011

void Unwind_101b7011(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b7030 Unwind@101b7030

void Unwind_101b7030(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b7060 Unwind@101b7060

void Unwind_101b7060(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b7068 Unwind@101b7068

void Unwind_101b7068(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b7081 Unwind@101b7081

void Unwind_101b7081(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b70a0 Unwind@101b70a0

void Unwind_101b70a0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b70d0 Unwind@101b70d0

void Unwind_101b70d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b7100 Unwind@101b7100

void Unwind_101b7100(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b7130 Unwind@101b7130

void Unwind_101b7130(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b7160 Unwind@101b7160

void Unwind_101b7160(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7180 Unwind@101b7180

void Unwind_101b7180(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7188 Unwind@101b7188

void Unwind_101b7188(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7190 Unwind@101b7190

void Unwind_101b7190(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b71b0 Unwind@101b71b0

void Unwind_101b71b0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b71d0 Unwind@101b71d0

void Unwind_101b71d0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b71f0 Unwind@101b71f0

void Unwind_101b71f0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b71f8 Unwind@101b71f8

void Unwind_101b71f8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7200 Unwind@101b7200

void Unwind_101b7200(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7208 Unwind@101b7208

void Unwind_101b7208(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7210 Unwind@101b7210

void Unwind_101b7210(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7218 Unwind@101b7218

void Unwind_101b7218(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xc));
  return;
}


// ==== 101b7223 Unwind@101b7223

void Unwind_101b7223(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b722b Unwind@101b722b

void Unwind_101b722b(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7233 Unwind@101b7233

void Unwind_101b7233(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}


// ==== 101b723e Unwind@101b723e

void Unwind_101b723e(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7246 Unwind@101b7246

void Unwind_101b7246(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b724e Unwind@101b724e

void Unwind_101b724e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x24));
  return;
}


// ==== 101b7259 Unwind@101b7259

void Unwind_101b7259(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7261 Unwind@101b7261

void Unwind_101b7261(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7269 Unwind@101b7269

void Unwind_101b7269(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x30));
  return;
}


// ==== 101b72b0 Unwind@101b72b0

void Unwind_101b72b0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b72b8 Unwind@101b72b8

void Unwind_101b72b8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 101b72c3 Unwind@101b72c3

void Unwind_101b72c3(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 101b72ce Unwind@101b72ce

void Unwind_101b72ce(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 101b72d9 Unwind@101b72d9

void Unwind_101b72d9(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


// ==== 101b7300 Unwind@101b7300

void Unwind_101b7300(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7308 Unwind@101b7308

void Unwind_101b7308(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 101b7313 Unwind@101b7313

void Unwind_101b7313(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 101b731e Unwind@101b731e

void Unwind_101b731e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 101b7329 Unwind@101b7329

void Unwind_101b7329(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


// ==== 101b7350 Unwind@101b7350

void Unwind_101b7350(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7358 Unwind@101b7358

void Unwind_101b7358(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7360 Unwind@101b7360

void Unwind_101b7360(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7368 Unwind@101b7368

void Unwind_101b7368(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7370 Unwind@101b7370

void Unwind_101b7370(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7378 Unwind@101b7378

void Unwind_101b7378(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xc));
  return;
}


// ==== 101b7383 Unwind@101b7383

void Unwind_101b7383(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b738b Unwind@101b738b

void Unwind_101b738b(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7393 Unwind@101b7393

void Unwind_101b7393(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}


// ==== 101b73c0 Unwind@101b73c0

void Unwind_101b73c0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b73c8 Unwind@101b73c8

void Unwind_101b73c8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 101b73d3 Unwind@101b73d3

void Unwind_101b73d3(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 101b7400 Unwind@101b7400

void Unwind_101b7400(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7408 Unwind@101b7408

void Unwind_101b7408(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 101b7413 Unwind@101b7413

void Unwind_101b7413(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ==== 101b7440 Unwind@101b7440

void Unwind_101b7440(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    thunk_FUN_10118970();
    return;
  }
  return;
}


// ==== 101b7470 Unwind@101b7470

void Unwind_101b7470(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7490 Unwind@101b7490

void Unwind_101b7490(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b74b0 Unwind@101b74b0

void Unwind_101b74b0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b74b8 Unwind@101b74b8

void Unwind_101b74b8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 101b74c3 Unwind@101b74c3

void Unwind_101b74c3(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b74ce Unwind@101b74ce

void Unwind_101b74ce(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}


// ==== 101b74d9 Unwind@101b74d9

void Unwind_101b74d9(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}


// ==== 101b74e4 Unwind@101b74e4

void Unwind_101b74e4(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 100),0xc,0x10,FStringNoInit::~FStringNoInit);
  return;
}


// ==== 101b74fa Unwind@101b74fa

void Unwind_101b74fa(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x124),0xc,0x10,FStringNoInit::~FStringNoInit);
  return;
}


// ==== 101b7540 Unwind@101b7540

void Unwind_101b7540(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7548 Unwind@101b7548

void Unwind_101b7548(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 101b7553 Unwind@101b7553

void Unwind_101b7553(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b755e Unwind@101b755e

void Unwind_101b755e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}


// ==== 101b7569 Unwind@101b7569

void Unwind_101b7569(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}


// ==== 101b7590 Unwind@101b7590

void Unwind_101b7590(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7598 Unwind@101b7598

void Unwind_101b7598(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b75a0 Unwind@101b75a0

void Unwind_101b75a0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b75c0 Unwind@101b75c0

void Unwind_101b75c0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b75e0 Unwind@101b75e0

void Unwind_101b75e0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b75e8 Unwind@101b75e8

void Unwind_101b75e8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b7610 Unwind@101b7610

void Unwind_101b7610(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7618 Unwind@101b7618

void Unwind_101b7618(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b7640 Unwind@101b7640

void Unwind_101b7640(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7648 Unwind@101b7648

void Unwind_101b7648(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b7670 Unwind@101b7670

void Unwind_101b7670(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7678 Unwind@101b7678

void Unwind_101b7678(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7680 Unwind@101b7680

void Unwind_101b7680(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7688 Unwind@101b7688

void Unwind_101b7688(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b76b0 Unwind@101b76b0

void Unwind_101b76b0(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b76b8 Unwind@101b76b8

void Unwind_101b76b8(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b76e0 Unwind@101b76e0

void Unwind_101b76e0(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7700 Unwind@101b7700

void Unwind_101b7700(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7720 Unwind@101b7720

void Unwind_101b7720(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7740 Unwind@101b7740

void Unwind_101b7740(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7760 Unwind@101b7760

void Unwind_101b7760(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7780 Unwind@101b7780

void Unwind_101b7780(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b77a0 Unwind@101b77a0

void Unwind_101b77a0(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b77a8 Unwind@101b77a8

void Unwind_101b77a8(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b77d0 Unwind@101b77d0

void Unwind_101b77d0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b77d8 Unwind@101b77d8

void Unwind_101b77d8(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b77e0 Unwind@101b77e0

void Unwind_101b77e0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b77e8 Unwind@101b77e8

void Unwind_101b77e8(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b7810 Unwind@101b7810

void Unwind_101b7810(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7818 Unwind@101b7818

void Unwind_101b7818(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b7840 Unwind@101b7840

void Unwind_101b7840(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7848 Unwind@101b7848

void Unwind_101b7848(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b7870 Unwind@101b7870

void Unwind_101b7870(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7878 Unwind@101b7878

void Unwind_101b7878(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b7880 Unwind@101b7880

void Unwind_101b7880(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7888 Unwind@101b7888

void Unwind_101b7888(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7890 Unwind@101b7890

void Unwind_101b7890(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x40));
  return;
}


// ==== 101b78c0 Unwind@101b78c0

void Unwind_101b78c0(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b78c8 Unwind@101b78c8

void Unwind_101b78c8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b78f0 Unwind@101b78f0

void Unwind_101b78f0(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b78f8 Unwind@101b78f8

void Unwind_101b78f8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x6c));
  return;
}


// ==== 101b7920 Unwind@101b7920

void Unwind_101b7920(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7928 Unwind@101b7928

void Unwind_101b7928(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x6c));
  return;
}


// ==== 101b7950 Unwind@101b7950

void Unwind_101b7950(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7970 Unwind@101b7970

void Unwind_101b7970(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7990 Unwind@101b7990

void Unwind_101b7990(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b79b0 Unwind@101b79b0

void Unwind_101b79b0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b79d0 Unwind@101b79d0

void Unwind_101b79d0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b79f0 Unwind@101b79f0

void Unwind_101b79f0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7a10 Unwind@101b7a10

void Unwind_101b7a10(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7a30 Unwind@101b7a30

void Unwind_101b7a30(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7a50 Unwind@101b7a50

void Unwind_101b7a50(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7a70 Unwind@101b7a70

void Unwind_101b7a70(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7a90 Unwind@101b7a90

void Unwind_101b7a90(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7ab0 Unwind@101b7ab0

void Unwind_101b7ab0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7ad0 Unwind@101b7ad0

void Unwind_101b7ad0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7af0 Unwind@101b7af0

void Unwind_101b7af0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7b10 Unwind@101b7b10

void Unwind_101b7b10(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7b30 Unwind@101b7b30

void Unwind_101b7b30(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7b50 Unwind@101b7b50

void Unwind_101b7b50(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7b70 Unwind@101b7b70

void Unwind_101b7b70(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7b90 Unwind@101b7b90

void Unwind_101b7b90(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7bb0 Unwind@101b7bb0

void Unwind_101b7bb0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7bd0 Unwind@101b7bd0

void Unwind_101b7bd0(void)

{
  int unaff_EBP;
  
  UObjectProperty::~UObjectProperty(*(UObjectProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7bf0 Unwind@101b7bf0

void Unwind_101b7bf0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7bf8 Unwind@101b7bf8

void Unwind_101b7bf8(void)

{
  int unaff_EBP;
  
  UObjectProperty::~UObjectProperty(*(UObjectProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7c10 Unwind@101b7c10

void Unwind_101b7c10(void)

{
  int unaff_EBP;
  
  UObjectProperty::~UObjectProperty(*(UObjectProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7c30 Unwind@101b7c30

void Unwind_101b7c30(void)

{
  int unaff_EBP;
  
  UObjectProperty::~UObjectProperty(*(UObjectProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7c50 Unwind@101b7c50

void Unwind_101b7c50(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7c70 Unwind@101b7c70

void Unwind_101b7c70(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7c90 Unwind@101b7c90

void Unwind_101b7c90(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7cb0 Unwind@101b7cb0

void Unwind_101b7cb0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7cd0 Unwind@101b7cd0

void Unwind_101b7cd0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7cf0 Unwind@101b7cf0

void Unwind_101b7cf0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7d10 Unwind@101b7d10

void Unwind_101b7d10(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7d30 Unwind@101b7d30

void Unwind_101b7d30(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7d50 Unwind@101b7d50

void Unwind_101b7d50(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7d70 Unwind@101b7d70

void Unwind_101b7d70(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7d90 Unwind@101b7d90

void Unwind_101b7d90(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7db0 Unwind@101b7db0

void Unwind_101b7db0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7dd0 Unwind@101b7dd0

void Unwind_101b7dd0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7df0 Unwind@101b7df0

void Unwind_101b7df0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7e10 Unwind@101b7e10

void Unwind_101b7e10(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7e30 Unwind@101b7e30

void Unwind_101b7e30(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7e50 Unwind@101b7e50

void Unwind_101b7e50(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7e70 Unwind@101b7e70

void Unwind_101b7e70(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7e90 Unwind@101b7e90

void Unwind_101b7e90(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7eb0 Unwind@101b7eb0

void Unwind_101b7eb0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7ed0 Unwind@101b7ed0

void Unwind_101b7ed0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7ef0 Unwind@101b7ef0

void Unwind_101b7ef0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7f10 Unwind@101b7f10

void Unwind_101b7f10(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7f30 Unwind@101b7f30

void Unwind_101b7f30(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7f50 Unwind@101b7f50

void Unwind_101b7f50(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7f70 Unwind@101b7f70

void Unwind_101b7f70(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7f90 Unwind@101b7f90

void Unwind_101b7f90(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7fb0 Unwind@101b7fb0

void Unwind_101b7fb0(void)

{
  int unaff_EBP;
  
  UProperty::~UProperty(*(UProperty **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7fd0 Unwind@101b7fd0

void Unwind_101b7fd0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b7fd8 Unwind@101b7fd8

void Unwind_101b7fd8(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b8000 Unwind@101b8000

void Unwind_101b8000(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8008 Unwind@101b8008

void Unwind_101b8008(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b8030 Unwind@101b8030

void Unwind_101b8030(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8038 Unwind@101b8038

void Unwind_101b8038(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b8060 Unwind@101b8060

void Unwind_101b8060(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8068 Unwind@101b8068

void Unwind_101b8068(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b8090 Unwind@101b8090

void Unwind_101b8090(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8098 Unwind@101b8098

void Unwind_101b8098(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b80c0 Unwind@101b80c0

void Unwind_101b80c0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b80c8 Unwind@101b80c8

void Unwind_101b80c8(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b80f0 Unwind@101b80f0

void Unwind_101b80f0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b80f8 Unwind@101b80f8

void Unwind_101b80f8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8100 Unwind@101b8100

void Unwind_101b8100(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 101b8120 Unwind@101b8120

void Unwind_101b8120(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8128 Unwind@101b8128

void Unwind_101b8128(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8130 Unwind@101b8130

void Unwind_101b8130(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 101b8150 Unwind@101b8150

void Unwind_101b8150(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 101b8170 Unwind@101b8170

void Unwind_101b8170(void)

{
  int unaff_EBP;
  
  FEdLoadError::~FEdLoadError((FEdLoadError *)(unaff_EBP + 4));
  return;
}


// ==== 101b8178 Unwind@101b8178

void Unwind_101b8178(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 101b8190 Unwind@101b8190

void Unwind_101b8190(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 101b81b0 Unwind@101b81b0

void Unwind_101b81b0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b81d0 Unwind@101b81d0

void Unwind_101b81d0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b81f0 Unwind@101b81f0

void Unwind_101b81f0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8210 Unwind@101b8210

void Unwind_101b8210(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8230 Unwind@101b8230

void Unwind_101b8230(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8250 Unwind@101b8250

void Unwind_101b8250(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8270 Unwind@101b8270

void Unwind_101b8270(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8290 Unwind@101b8290

void Unwind_101b8290(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b82b0 Unwind@101b82b0

void Unwind_101b82b0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b82d0 Unwind@101b82d0

void Unwind_101b82d0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b82f0 Unwind@101b82f0

void Unwind_101b82f0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8310 Unwind@101b8310

void Unwind_101b8310(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8330 Unwind@101b8330

void Unwind_101b8330(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8350 Unwind@101b8350

void Unwind_101b8350(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8370 Unwind@101b8370

void Unwind_101b8370(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8390 Unwind@101b8390

void Unwind_101b8390(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b83b0 Unwind@101b83b0

void Unwind_101b83b0(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b83d0 Unwind@101b83d0

void Unwind_101b83d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b8400 Unwind@101b8400

void Unwind_101b8400(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b8430 Unwind@101b8430

void Unwind_101b8430(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b8460 Unwind@101b8460

void Unwind_101b8460(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b8490 Unwind@101b8490

void Unwind_101b8490(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b8498 Unwind@101b8498

void Unwind_101b8498(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b84b0 Unwind@101b84b0

void Unwind_101b84b0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101b84b8 Unwind@101b84b8

void Unwind_101b84b8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101b84d0 Unwind@101b84d0

void Unwind_101b84d0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 101b84f0 Unwind@101b84f0

void Unwind_101b84f0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101b84f8 Unwind@101b84f8

void Unwind_101b84f8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101b8510 Unwind@101b8510

void Unwind_101b8510(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + 0x18));
  return;
}


// ==== 101b8518 Unwind@101b8518

void Unwind_101b8518(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + 0xc));
  return;
}


// ==== 101b8520 Unwind@101b8520

void Unwind_101b8520(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101b8539 Unwind@101b8539

void Unwind_101b8539(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101b8541 Unwind@101b8541

void Unwind_101b8541(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101b8570 Unwind@101b8570

void Unwind_101b8570(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101b8589 Unwind@101b8589

void Unwind_101b8589(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101b85b0 Unwind@101b85b0

void Unwind_101b85b0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101b85b8 Unwind@101b85b8

void Unwind_101b85b8(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 101b85c0 Unwind@101b85c0

void Unwind_101b85c0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101b85c8 Unwind@101b85c8

void Unwind_101b85c8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101b85d0 Unwind@101b85d0

void Unwind_101b85d0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b85d8 Unwind@101b85d8

void Unwind_101b85d8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b85e0 Unwind@101b85e0

void Unwind_101b85e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101b85f9 Unwind@101b85f9

void Unwind_101b85f9(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101b8601 Unwind@101b8601

void Unwind_101b8601(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101b8630 Unwind@101b8630

void Unwind_101b8630(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101b8638 Unwind@101b8638

void Unwind_101b8638(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101b8640 Unwind@101b8640

void Unwind_101b8640(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101b8648 Unwind@101b8648

void Unwind_101b8648(void)

{
  thunk_FUN_1011c620();
  return;
}


// ==== 101b8650 Unwind@101b8650

void Unwind_101b8650(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101b8658 Unwind@101b8658

void Unwind_101b8658(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101b8680 Unwind@101b8680

void Unwind_101b8680(void)

{
  int unaff_EBP;
  
  UState::~UState(*(UState **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8688 Unwind@101b8688

void Unwind_101b8688(void)

{
  thunk_FUN_10120b60();
  return;
}


// ==== 101b8696 Unwind@101b8696

void Unwind_101b8696(void)

{
  thunk_FUN_10120cf0();
  return;
}


// ==== 101b86a4 Unwind@101b86a4

void Unwind_101b86a4(void)

{
  thunk_FUN_10120e70();
  return;
}


// ==== 101b86b2 Unwind@101b86b2

void Unwind_101b86b2(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b86c0 Unwind@101b86c0

void Unwind_101b86c0(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b86ce Unwind@101b86ce

void Unwind_101b86ce(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b86dc Unwind@101b86dc

void Unwind_101b86dc(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b86ea Unwind@101b86ea

void Unwind_101b86ea(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x520));
  return;
}


// ==== 101b8730 Unwind@101b8730

void Unwind_101b8730(void)

{
  int unaff_EBP;
  
  UState::~UState(*(UState **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8738 Unwind@101b8738

void Unwind_101b8738(void)

{
  thunk_FUN_10120b60();
  return;
}


// ==== 101b8746 Unwind@101b8746

void Unwind_101b8746(void)

{
  thunk_FUN_10120cf0();
  return;
}


// ==== 101b8754 Unwind@101b8754

void Unwind_101b8754(void)

{
  thunk_FUN_10120e70();
  return;
}


// ==== 101b8762 Unwind@101b8762

void Unwind_101b8762(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b8770 Unwind@101b8770

void Unwind_101b8770(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b877e Unwind@101b877e

void Unwind_101b877e(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b878c Unwind@101b878c

void Unwind_101b878c(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b879a Unwind@101b879a

void Unwind_101b879a(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x520));
  return;
}


// ==== 101b87e0 Unwind@101b87e0

void Unwind_101b87e0(void)

{
  thunk_FUN_10121020();
  return;
}


// ==== 101b8800 Unwind@101b8800

void Unwind_101b8800(void)

{
  thunk_FUN_10121020();
  return;
}


// ==== 101b8820 Unwind@101b8820

void Unwind_101b8820(void)

{
  thunk_FUN_101211b0();
  return;
}


// ==== 101b8840 Unwind@101b8840

void Unwind_101b8840(void)

{
  thunk_FUN_101211b0();
  return;
}


// ==== 101b8860 Unwind@101b8860

void Unwind_101b8860(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b8868 Unwind@101b8868

void Unwind_101b8868(void)

{
  int unaff_EBP;
  
  FPackageFileSummary::~FPackageFileSummary
            ((FPackageFileSummary *)(*(int *)(unaff_EBP + -0x14) + 0x38));
  return;
}


// ==== 101b8873 Unwind@101b8873

void Unwind_101b8873(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b887e Unwind@101b887e

void Unwind_101b887e(void)

{
  thunk_FUN_10121290();
  return;
}


// ==== 101b888c Unwind@101b888c

void Unwind_101b888c(void)

{
  thunk_FUN_10121450();
  return;
}


// ==== 101b889a Unwind@101b889a

void Unwind_101b889a(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xa0));
  return;
}


// ==== 101b88a8 Unwind@101b88a8

void Unwind_101b88a8(void)

{
  thunk_FUN_101211b0();
  return;
}


// ==== 101b88e0 Unwind@101b88e0

void Unwind_101b88e0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b88e8 Unwind@101b88e8

void Unwind_101b88e8(void)

{
  int unaff_EBP;
  
  FPackageFileSummary::~FPackageFileSummary
            ((FPackageFileSummary *)(*(int *)(unaff_EBP + -0x14) + 0x38));
  return;
}


// ==== 101b88f3 Unwind@101b88f3

void Unwind_101b88f3(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b88fb Unwind@101b88fb

void Unwind_101b88fb(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b8906 Unwind@101b8906

void Unwind_101b8906(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b890e Unwind@101b890e

void Unwind_101b890e(void)

{
  thunk_FUN_10121290();
  return;
}


// ==== 101b891c Unwind@101b891c

void Unwind_101b891c(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8924 Unwind@101b8924

void Unwind_101b8924(void)

{
  thunk_FUN_10121450();
  return;
}


// ==== 101b8932 Unwind@101b8932

void Unwind_101b8932(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b893a Unwind@101b893a

void Unwind_101b893a(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8942 Unwind@101b8942

void Unwind_101b8942(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xa0));
  return;
}


// ==== 101b8980 Unwind@101b8980

void Unwind_101b8980(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8988 Unwind@101b8988

void Unwind_101b8988(void)

{
  int unaff_EBP;
  
  FPackageFileSummary::~FPackageFileSummary
            ((FPackageFileSummary *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ==== 101b8993 Unwind@101b8993

void Unwind_101b8993(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b899e Unwind@101b899e

void Unwind_101b899e(void)

{
  thunk_FUN_10121290();
  return;
}


// ==== 101b89ac Unwind@101b89ac

void Unwind_101b89ac(void)

{
  thunk_FUN_10121450();
  return;
}


// ==== 101b89ba Unwind@101b89ba

void Unwind_101b89ba(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ==== 101b89f0 Unwind@101b89f0

void Unwind_101b89f0(void)

{
  int unaff_EBP;
  
  ULinker::~ULinker(*(ULinker **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b89f8 Unwind@101b89f8

void Unwind_101b89f8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0xc0;
  }
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b8a21 Unwind@101b8a21

void Unwind_101b8a21(void)

{
  thunk_FUN_10121600();
  return;
}


// ==== 101b8a2f Unwind@101b8a2f

void Unwind_101b8a2f(void)

{
  thunk_FUN_10121780();
  return;
}


// ==== 101b8a60 Unwind@101b8a60

void Unwind_101b8a60(void)

{
  int unaff_EBP;
  
  ULinker::~ULinker(*(ULinker **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b8a68 Unwind@101b8a68

void Unwind_101b8a68(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive((FArchive *)(*(int *)(unaff_EBP + -0x14) + 0xc0));
  return;
}


// ==== 101b8a76 Unwind@101b8a76

void Unwind_101b8a76(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8a7e Unwind@101b8a7e

void Unwind_101b8a7e(void)

{
  thunk_FUN_10121600();
  return;
}


// ==== 101b8a8c Unwind@101b8a8c

void Unwind_101b8a8c(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8a94 Unwind@101b8a94

void Unwind_101b8a94(void)

{
  thunk_FUN_10121780();
  return;
}


// ==== 101b8ac0 Unwind@101b8ac0

void Unwind_101b8ac0(void)

{
  int unaff_EBP;
  
  ULinker::~ULinker(*(ULinker **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8ac8 Unwind@101b8ac8

void Unwind_101b8ac8(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive((FArchive *)(*(int *)(unaff_EBP + -0x10) + 0xc0));
  return;
}


// ==== 101b8ad6 Unwind@101b8ad6

void Unwind_101b8ad6(void)

{
  thunk_FUN_10121600();
  return;
}


// ==== 101b8ae4 Unwind@101b8ae4

void Unwind_101b8ae4(void)

{
  thunk_FUN_10121780();
  return;
}


// ==== 101b8b10 Unwind@101b8b10

void Unwind_101b8b10(void)

{
  thunk_FUN_10121930();
  return;
}


// ==== 101b8b30 Unwind@101b8b30

void Unwind_101b8b30(void)

{
  thunk_FUN_10121930();
  return;
}


// ==== 101b8b50 Unwind@101b8b50

void Unwind_101b8b50(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8b58 Unwind@101b8b58

void Unwind_101b8b58(void)

{
  thunk_FUN_10121a40();
  return;
}


// ==== 101b8b70 Unwind@101b8b70

void Unwind_101b8b70(void)

{
  thunk_FUN_10121a40();
  return;
}


// ==== 101b8b90 Unwind@101b8b90

void Unwind_101b8b90(void)

{
  thunk_FUN_10121a40();
  return;
}


// ==== 101b8bb0 Unwind@101b8bb0

void Unwind_101b8bb0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8bb8 Unwind@101b8bb8

void Unwind_101b8bb8(void)

{
  thunk_FUN_10121b50();
  return;
}


// ==== 101b8bd0 Unwind@101b8bd0

void Unwind_101b8bd0(void)

{
  thunk_FUN_10121b50();
  return;
}


// ==== 101b8bf0 Unwind@101b8bf0

void Unwind_101b8bf0(void)

{
  thunk_FUN_10121b50();
  return;
}


// ==== 101b8c10 Unwind@101b8c10

void Unwind_101b8c10(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8c30 Unwind@101b8c30

void Unwind_101b8c30(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8c50 Unwind@101b8c50

void Unwind_101b8c50(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8c58 Unwind@101b8c58

void Unwind_101b8c58(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8c70 Unwind@101b8c70

void Unwind_101b8c70(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8c78 Unwind@101b8c78

void Unwind_101b8c78(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8c90 Unwind@101b8c90

void Unwind_101b8c90(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 101b8c9b Unwind@101b8c9b

void Unwind_101b8c9b(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8cc0 Unwind@101b8cc0

void Unwind_101b8cc0(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101b8ce0 Unwind@101b8ce0

void Unwind_101b8ce0(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101b8d00 Unwind@101b8d00

void Unwind_101b8d00(void)

{
  thunk_FUN_10123f70();
  return;
}


// ==== 101b8d20 Unwind@101b8d20

void Unwind_101b8d20(void)

{
  thunk_FUN_10124110();
  return;
}


// ==== 101b8d40 Unwind@101b8d40

void Unwind_101b8d40(void)

{
  thunk_FUN_10123f70();
  return;
}


// ==== 101b8d60 Unwind@101b8d60

void Unwind_101b8d60(void)

{
  thunk_FUN_10124110();
  return;
}


// ==== 101b8d80 Unwind@101b8d80

void Unwind_101b8d80(void)

{
  thunk_FUN_10123f70();
  return;
}


// ==== 101b8da0 Unwind@101b8da0

void Unwind_101b8da0(void)

{
  thunk_FUN_10124110();
  return;
}


// ==== 101b8dc0 Unwind@101b8dc0

void Unwind_101b8dc0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8de0 Unwind@101b8de0

void Unwind_101b8de0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8e00 Unwind@101b8e00

void Unwind_101b8e00(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 101b8e08 Unwind@101b8e08

void Unwind_101b8e08(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    thunk_FUN_10124a00();
    return;
  }
  return;
}


// ==== 101b8e40 Unwind@101b8e40

void Unwind_101b8e40(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8e60 Unwind@101b8e60

void Unwind_101b8e60(void)

{
  thunk_FUN_10120730();
  return;
}


// ==== 101b8e68 Unwind@101b8e68

void Unwind_101b8e68(void)

{
  thunk_FUN_101208b0();
  return;
}


// ==== 101b8e73 Unwind@101b8e73

void Unwind_101b8e73(void)

{
  thunk_FUN_10124710();
  return;
}


// ==== 101b8e7e Unwind@101b8e7e

void Unwind_101b8e7e(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101b8ea0 Unwind@101b8ea0

void Unwind_101b8ea0(void)

{
  thunk_FUN_10120730();
  return;
}


// ==== 101b8ea8 Unwind@101b8ea8

void Unwind_101b8ea8(void)

{
  thunk_FUN_101208b0();
  return;
}


// ==== 101b8eb3 Unwind@101b8eb3

void Unwind_101b8eb3(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101b8ebb Unwind@101b8ebb

void Unwind_101b8ebb(void)

{
  thunk_FUN_10124710();
  return;
}


// ==== 101b8ee0 Unwind@101b8ee0

void Unwind_101b8ee0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b8ee8 Unwind@101b8ee8

void Unwind_101b8ee8(void)

{
  thunk_FUN_10124b40();
  return;
}


// ==== 101b8ef3 Unwind@101b8ef3

void Unwind_101b8ef3(void)

{
  thunk_FUN_101247c0();
  return;
}


// ==== 101b8efe Unwind@101b8efe

void Unwind_101b8efe(void)

{
  thunk_FUN_10124810();
  return;
}


// ==== 101b8f09 Unwind@101b8f09

void Unwind_101b8f09(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b8f14 Unwind@101b8f14

void Unwind_101b8f14(void)

{
  thunk_FUN_10124110();
  return;
}


// ==== 101b8f1c Unwind@101b8f1c

void Unwind_101b8f1c(void)

{
  thunk_FUN_10123f70();
  return;
}


// ==== 101b8f50 Unwind@101b8f50

void Unwind_101b8f50(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b8f58 Unwind@101b8f58

void Unwind_101b8f58(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8f60 Unwind@101b8f60

void Unwind_101b8f60(void)

{
  thunk_FUN_10124b40();
  return;
}


// ==== 101b8f6b Unwind@101b8f6b

void Unwind_101b8f6b(void)

{
  thunk_FUN_10123f70();
  return;
}


// ==== 101b8f73 Unwind@101b8f73

void Unwind_101b8f73(void)

{
  thunk_FUN_101247c0();
  return;
}


// ==== 101b8f7e Unwind@101b8f7e

void Unwind_101b8f7e(void)

{
  thunk_FUN_10124110();
  return;
}


// ==== 101b8f86 Unwind@101b8f86

void Unwind_101b8f86(void)

{
  thunk_FUN_10124810();
  return;
}


// ==== 101b8f91 Unwind@101b8f91

void Unwind_101b8f91(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8f99 Unwind@101b8f99

void Unwind_101b8f99(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b8fd0 Unwind@101b8fd0

void Unwind_101b8fd0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b8fd8 Unwind@101b8fd8

void Unwind_101b8fd8(void)

{
  thunk_FUN_10124b40();
  return;
}


// ==== 101b8fe3 Unwind@101b8fe3

void Unwind_101b8fe3(void)

{
  thunk_FUN_10123f70();
  return;
}


// ==== 101b8feb Unwind@101b8feb

void Unwind_101b8feb(void)

{
  thunk_FUN_101247c0();
  return;
}


// ==== 101b8ff6 Unwind@101b8ff6

void Unwind_101b8ff6(void)

{
  thunk_FUN_10124110();
  return;
}


// ==== 101b8ffe Unwind@101b8ffe

void Unwind_101b8ffe(void)

{
  thunk_FUN_10124810();
  return;
}


// ==== 101b9009 Unwind@101b9009

void Unwind_101b9009(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b9040 Unwind@101b9040

void Unwind_101b9040(void)

{
  int unaff_EBP;
  
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9048 Unwind@101b9048

void Unwind_101b9048(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b9053 Unwind@101b9053

void Unwind_101b9053(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}


// ==== 101b905e Unwind@101b905e

void Unwind_101b905e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}


// ==== 101b9069 Unwind@101b9069

void Unwind_101b9069(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b9074 Unwind@101b9074

void Unwind_101b9074(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b90a0 Unwind@101b90a0

void Unwind_101b90a0(void)

{
  int unaff_EBP;
  
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b90a8 Unwind@101b90a8

void Unwind_101b90a8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101b90b3 Unwind@101b90b3

void Unwind_101b90b3(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}


// ==== 101b90be Unwind@101b90be

void Unwind_101b90be(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}


// ==== 101b90c9 Unwind@101b90c9

void Unwind_101b90c9(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b90d4 Unwind@101b90d4

void Unwind_101b90d4(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101b9100 Unwind@101b9100

void Unwind_101b9100(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9108 Unwind@101b9108

void Unwind_101b9108(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 101b9113 Unwind@101b9113

void Unwind_101b9113(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 101b911e Unwind@101b911e

void Unwind_101b911e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


// ==== 101b9129 Unwind@101b9129

void Unwind_101b9129(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b9150 Unwind@101b9150

void Unwind_101b9150(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9158 Unwind@101b9158

void Unwind_101b9158(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 101b9163 Unwind@101b9163

void Unwind_101b9163(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 101b916e Unwind@101b916e

void Unwind_101b916e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


// ==== 101b9179 Unwind@101b9179

void Unwind_101b9179(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b91a0 Unwind@101b91a0

void Unwind_101b91a0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b91a8 Unwind@101b91a8

void Unwind_101b91a8(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b91d0 Unwind@101b91d0

void Unwind_101b91d0(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b91d8 Unwind@101b91d8

void Unwind_101b91d8(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b9200 Unwind@101b9200

void Unwind_101b9200(void)

{
  int unaff_EBP;
  
  UExporter::~UExporter(*(UExporter **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9220 Unwind@101b9220

void Unwind_101b9220(void)

{
  int unaff_EBP;
  
  UExporter::~UExporter(*(UExporter **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9240 Unwind@101b9240

void Unwind_101b9240(void)

{
  int unaff_EBP;
  
  UExporter::~UExporter(*(UExporter **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9260 Unwind@101b9260

void Unwind_101b9260(void)

{
  int unaff_EBP;
  
  UFactory::~UFactory(*(UFactory **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9280 Unwind@101b9280

void Unwind_101b9280(void)

{
  int unaff_EBP;
  
  UFactory::~UFactory(*(UFactory **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b92a0 Unwind@101b92a0

void Unwind_101b92a0(void)

{
  FArchive::~FArchive((FArchive *)&PTR_vftable_102373e4);
  return;
}


// ==== 101b92c0 Unwind@101b92c0

void Unwind_101b92c0(void)

{
  FArray::~FArray((FArray *)&GEdLoadErrors);
  return;
}


// ==== 101b92e0 Unwind@101b92e0

void Unwind_101b92e0(void)

{
  FArchive::~FArchive((FArchive *)&PTR_vftable_102373e4);
  return;
}


// ==== 101b9300 Unwind@101b9300

void Unwind_101b9300(void)

{
  _eh_vector_destructor_iterator_(&GMem,0x10,8,FMemStackFrame::~FMemStackFrame);
  return;
}


// ==== 101b9350 Unwind@101b9350

void Unwind_101b9350(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9390 Unwind@101b9390

void Unwind_101b9390(void)

{
  int unaff_EBP;
  
  L2ThreadBase::~L2ThreadBase(*(L2ThreadBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9398 Unwind@101b9398

void Unwind_101b9398(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101b93a0 Unwind@101b93a0

void Unwind_101b93a0(void)

{
  thunk_FUN_10118970();
  return;
}


// ==== 101b93ae Unwind@101b93ae

void Unwind_101b93ae(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101b93b6 Unwind@101b93b6

void Unwind_101b93b6(void)

{
  thunk_FUN_10118970();
  return;
}


// ==== 101b93c4 Unwind@101b93c4

void Unwind_101b93c4(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 101b93f0 Unwind@101b93f0

void Unwind_101b93f0(void)

{
  int unaff_EBP;
  
  L2ThreadBase::~L2ThreadBase(*(L2ThreadBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b93f8 Unwind@101b93f8

void Unwind_101b93f8(void)

{
  thunk_FUN_10118970();
  return;
}


// ==== 101b9406 Unwind@101b9406

void Unwind_101b9406(void)

{
  thunk_FUN_10118970();
  return;
}


// ==== 101b9430 Unwind@101b9430

void Unwind_101b9430(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b9450 Unwind@101b9450

void Unwind_101b9450(void)

{
  int unaff_EBP;
  
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b94a0 Unwind@101b94a0

void Unwind_101b94a0(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b94e0 Unwind@101b94e0

void Unwind_101b94e0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9500 Unwind@101b9500

void Unwind_101b9500(void)

{
  int unaff_EBP;
  
  L2ThreadBase::~L2ThreadBase(*(L2ThreadBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9508 Unwind@101b9508

void Unwind_101b9508(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101b9510 Unwind@101b9510

void Unwind_101b9510(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b951e Unwind@101b951e

void Unwind_101b951e(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101b9526 Unwind@101b9526

void Unwind_101b9526(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b9534 Unwind@101b9534

void Unwind_101b9534(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 101b9560 Unwind@101b9560

void Unwind_101b9560(void)

{
  int unaff_EBP;
  
  L2ThreadBase::~L2ThreadBase(*(L2ThreadBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9568 Unwind@101b9568

void Unwind_101b9568(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b9576 Unwind@101b9576

void Unwind_101b9576(void)

{
  thunk_FUN_101181d0();
  return;
}


// ==== 101b95a0 Unwind@101b95a0

void Unwind_101b95a0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b95c0 Unwind@101b95c0

void Unwind_101b95c0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b95c8 Unwind@101b95c8

void Unwind_101b95c8(void)

{
  thunk_FUN_10129fc0();
  return;
}


// ==== 101b95e0 Unwind@101b95e0

void Unwind_101b95e0(void)

{
  thunk_FUN_10129fc0();
  return;
}


// ==== 101b9600 Unwind@101b9600

void Unwind_101b9600(void)

{
  thunk_FUN_1012a110();
  return;
}


// ==== 101b9620 Unwind@101b9620

void Unwind_101b9620(void)

{
  thunk_FUN_1012a110();
  return;
}


// ==== 101b9640 Unwind@101b9640

void Unwind_101b9640(void)

{
  int unaff_EBP;
  
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9648 Unwind@101b9648

void Unwind_101b9648(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 101b9653 Unwind@101b9653

void Unwind_101b9653(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 101b9680 Unwind@101b9680

void Unwind_101b9680(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ==== 101b968b Unwind@101b968b

void Unwind_101b968b(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ==== 101b96b0 Unwind@101b96b0

void Unwind_101b96b0(void)

{
  thunk_FUN_1012a110();
  return;
}


// ==== 101b96d0 Unwind@101b96d0

void Unwind_101b96d0(void)

{
  int unaff_EBP;
  
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)(unaff_EBP + -0x10));
  return;
}


// ==== 101b96d8 Unwind@101b96d8

void Unwind_101b96d8(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + 4));
  return;
}


// ==== 101b9700 Unwind@101b9700

void Unwind_101b9700(void)

{
  int unaff_EBP;
  
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)(unaff_EBP + -0x18));
  return;
}


// ==== 101b9720 Unwind@101b9720

void Unwind_101b9720(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9740 Unwind@101b9740

void Unwind_101b9740(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9760 Unwind@101b9760

void Unwind_101b9760(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9780 Unwind@101b9780

void Unwind_101b9780(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b97a0 Unwind@101b97a0

void Unwind_101b97a0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b97d0 Unwind@101b97d0

void Unwind_101b97d0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b97f0 Unwind@101b97f0

void Unwind_101b97f0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 101b9810 Unwind@101b9810

void Unwind_101b9810(void)

{
  thunk_FUN_1012a980();
  return;
}


// ==== 101b9818 Unwind@101b9818

void Unwind_101b9818(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9820 Unwind@101b9820

void Unwind_101b9820(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b9840 Unwind@101b9840

void Unwind_101b9840(void)

{
  thunk_FUN_1012a980();
  return;
}


// ==== 101b9848 Unwind@101b9848

void Unwind_101b9848(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x40;
  }
  thunk_FUN_10118750();
  return;
}


// ==== 101b986f Unwind@101b986f

void Unwind_101b986f(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b98b0 Unwind@101b98b0

void Unwind_101b98b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FString::~FString(*(FString **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b9900 Unwind@101b9900

void Unwind_101b9900(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9908 Unwind@101b9908

void Unwind_101b9908(void)

{
  thunk_FUN_1012b0e0();
  return;
}


// ==== 101b9920 Unwind@101b9920

void Unwind_101b9920(void)

{
  thunk_FUN_1012b0e0();
  return;
}


// ==== 101b9940 Unwind@101b9940

void Unwind_101b9940(void)

{
  thunk_FUN_1012b6f0();
  return;
}


// ==== 101b9960 Unwind@101b9960

void Unwind_101b9960(void)

{
  thunk_FUN_1012b6f0();
  return;
}


// ==== 101b9990 Unwind@101b9990

void Unwind_101b9990(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b9998 Unwind@101b9998

void Unwind_101b9998(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b99a0 Unwind@101b99a0

void Unwind_101b99a0(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b99d0 Unwind@101b99d0

void Unwind_101b99d0(void)

{
  thunk_FUN_1012b8a0();
  return;
}


// ==== 101b9a10 Unwind@101b9a10

void Unwind_101b9a10(void)

{
  thunk_FUN_1012b550();
  return;
}


// ==== 101b9a18 Unwind@101b9a18

void Unwind_101b9a18(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101b9a20 Unwind@101b9a20

void Unwind_101b9a20(void)

{
  thunk_FUN_1012b370();
  return;
}


// ==== 101b9a2b Unwind@101b9a2b

void Unwind_101b9a2b(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b9a70 Unwind@101b9a70

void Unwind_101b9a70(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9aa0 Unwind@101b9aa0

void Unwind_101b9aa0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9ad0 Unwind@101b9ad0

void Unwind_101b9ad0(void)

{
  thunk_FUN_1012cb60();
  return;
}


// ==== 101b9ad8 Unwind@101b9ad8

void Unwind_101b9ad8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 101b9ae0 Unwind@101b9ae0

void Unwind_101b9ae0(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b9b00 Unwind@101b9b00

void Unwind_101b9b00(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x14));
  return;
}


// ==== 101b9b08 Unwind@101b9b08

void Unwind_101b9b08(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b10 Unwind@101b9b10

void Unwind_101b9b10(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b18 Unwind@101b9b18

void Unwind_101b9b18(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x3c));
  return;
}


// ==== 101b9b23 Unwind@101b9b23

void Unwind_101b9b23(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b2b Unwind@101b9b2b

void Unwind_101b9b2b(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b33 Unwind@101b9b33

void Unwind_101b9b33(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x48));
  return;
}


// ==== 101b9b3e Unwind@101b9b3e

void Unwind_101b9b3e(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b46 Unwind@101b9b46

void Unwind_101b9b46(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b4e Unwind@101b9b4e

void Unwind_101b9b4e(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x54));
  return;
}


// ==== 101b9b59 Unwind@101b9b59

void Unwind_101b9b59(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9b61 Unwind@101b9b61

void Unwind_101b9b61(void)

{
  thunk_FUN_10124a00();
  return;
}


// ==== 101b9bd0 Unwind@101b9bd0

void Unwind_101b9bd0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101b9c10 Unwind@101b9c10

void Unwind_101b9c10(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9c30 Unwind@101b9c30

void Unwind_101b9c30(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x18));
  return;
}


// ==== 101b9c38 Unwind@101b9c38

void Unwind_101b9c38(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b9c60 Unwind@101b9c60

void Unwind_101b9c60(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x18));
  return;
}


// ==== 101b9c68 Unwind@101b9c68

void Unwind_101b9c68(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101b9d20 Unwind@101b9d20

void Unwind_101b9d20(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9d40 Unwind@101b9d40

void Unwind_101b9d40(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9d60 Unwind@101b9d60

void Unwind_101b9d60(void)

{
  int unaff_EBP;
  
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9df0 Unwind@101b9df0

void Unwind_101b9df0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9e10 Unwind@101b9e10

void Unwind_101b9e10(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9e30 Unwind@101b9e30

void Unwind_101b9e30(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9e50 Unwind@101b9e50

void Unwind_101b9e50(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9e80 Unwind@101b9e80

void Unwind_101b9e80(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9eb0 Unwind@101b9eb0

void Unwind_101b9eb0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9f90 Unwind@101b9f90

void Unwind_101b9f90(void)

{
  thunk_FUN_101311a0();
  return;
}


// ==== 101b9f98 Unwind@101b9f98

void Unwind_101b9f98(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive((FArchive *)(unaff_EBP + -0x4c));
  return;
}


// ==== 101b9fc0 Unwind@101b9fc0

void Unwind_101b9fc0(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9fe0 Unwind@101b9fe0

void Unwind_101b9fe0(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101b9fe8 Unwind@101b9fe8

void Unwind_101b9fe8(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x18));
  return;
}


// ==== 101b9ff0 Unwind@101b9ff0

void Unwind_101b9ff0(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba010 Unwind@101ba010

void Unwind_101ba010(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba018 Unwind@101ba018

void Unwind_101ba018(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x14));
  return;
}


// ==== 101ba020 Unwind@101ba020

void Unwind_101ba020(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba040 Unwind@101ba040

void Unwind_101ba040(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba048 Unwind@101ba048

void Unwind_101ba048(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 101ba050 Unwind@101ba050

void Unwind_101ba050(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba090 Unwind@101ba090

void Unwind_101ba090(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive((FArchive *)(unaff_EBP + -0x58));
  return;
}


// ==== 101ba100 Unwind@101ba100

void Unwind_101ba100(void)

{
  int unaff_EBP;
  
  UField::~UField(*(UField **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba108 Unwind@101ba108

void Unwind_101ba108(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 101ba140 Unwind@101ba140

void Unwind_101ba140(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba170 Unwind@101ba170

void Unwind_101ba170(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 101ba178 Unwind@101ba178

void Unwind_101ba178(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + 4));
  return;
}


// ==== 101ba180 Unwind@101ba180

void Unwind_101ba180(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101ba199 Unwind@101ba199

void Unwind_101ba199(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101ba1a1 Unwind@101ba1a1

void Unwind_101ba1a1(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101ba1d0 Unwind@101ba1d0

void Unwind_101ba1d0(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba1f0 Unwind@101ba1f0

void Unwind_101ba1f0(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba210 Unwind@101ba210

void Unwind_101ba210(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba240 Unwind@101ba240

void Unwind_101ba240(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x14));
  return;
}


// ==== 101ba248 Unwind@101ba248

void Unwind_101ba248(void)

{
  int unaff_EBP;
  
  UState::~UState(*(UState **)(unaff_EBP + -0x14));
  return;
}


// ==== 101ba250 Unwind@101ba250

void Unwind_101ba250(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba258 Unwind@101ba258

void Unwind_101ba258(void)

{
  thunk_FUN_10120b60();
  return;
}


// ==== 101ba266 Unwind@101ba266

void Unwind_101ba266(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba26e Unwind@101ba26e

void Unwind_101ba26e(void)

{
  thunk_FUN_10120cf0();
  return;
}


// ==== 101ba27c Unwind@101ba27c

void Unwind_101ba27c(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba284 Unwind@101ba284

void Unwind_101ba284(void)

{
  thunk_FUN_10120e70();
  return;
}


// ==== 101ba292 Unwind@101ba292

void Unwind_101ba292(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba29a Unwind@101ba29a

void Unwind_101ba29a(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba2a8 Unwind@101ba2a8

void Unwind_101ba2a8(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba2b0 Unwind@101ba2b0

void Unwind_101ba2b0(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba2be Unwind@101ba2be

void Unwind_101ba2be(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba2c6 Unwind@101ba2c6

void Unwind_101ba2c6(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba2d4 Unwind@101ba2d4

void Unwind_101ba2d4(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba2dc Unwind@101ba2dc

void Unwind_101ba2dc(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba2ea Unwind@101ba2ea

void Unwind_101ba2ea(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba2f2 Unwind@101ba2f2

void Unwind_101ba2f2(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba2fa Unwind@101ba2fa

void Unwind_101ba2fa(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x520));
  return;
}


// ==== 101ba350 Unwind@101ba350

void Unwind_101ba350(void)

{
  int unaff_EBP;
  
  UState::~UState(*(UState **)(unaff_EBP + -0x18));
  return;
}


// ==== 101ba358 Unwind@101ba358

void Unwind_101ba358(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba360 Unwind@101ba360

void Unwind_101ba360(void)

{
  thunk_FUN_10120b60();
  return;
}


// ==== 101ba36e Unwind@101ba36e

void Unwind_101ba36e(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba376 Unwind@101ba376

void Unwind_101ba376(void)

{
  thunk_FUN_10120cf0();
  return;
}


// ==== 101ba384 Unwind@101ba384

void Unwind_101ba384(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba38c Unwind@101ba38c

void Unwind_101ba38c(void)

{
  thunk_FUN_10120e70();
  return;
}


// ==== 101ba39a Unwind@101ba39a

void Unwind_101ba39a(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba3a2 Unwind@101ba3a2

void Unwind_101ba3a2(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba3b0 Unwind@101ba3b0

void Unwind_101ba3b0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba3b8 Unwind@101ba3b8

void Unwind_101ba3b8(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba3c6 Unwind@101ba3c6

void Unwind_101ba3c6(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba3ce Unwind@101ba3ce

void Unwind_101ba3ce(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba3dc Unwind@101ba3dc

void Unwind_101ba3dc(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba3e4 Unwind@101ba3e4

void Unwind_101ba3e4(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba3f2 Unwind@101ba3f2

void Unwind_101ba3f2(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 101ba3fa Unwind@101ba3fa

void Unwind_101ba3fa(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + 8));
  return;
}


// ==== 101ba402 Unwind@101ba402

void Unwind_101ba402(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x520));
  return;
}


// ==== 101ba450 Unwind@101ba450

void Unwind_101ba450(void)

{
  int unaff_EBP;
  
  UState::~UState(*(UState **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba458 Unwind@101ba458

void Unwind_101ba458(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba460 Unwind@101ba460

void Unwind_101ba460(void)

{
  thunk_FUN_10120b60();
  return;
}


// ==== 101ba46e Unwind@101ba46e

void Unwind_101ba46e(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba476 Unwind@101ba476

void Unwind_101ba476(void)

{
  thunk_FUN_10120cf0();
  return;
}


// ==== 101ba484 Unwind@101ba484

void Unwind_101ba484(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba48c Unwind@101ba48c

void Unwind_101ba48c(void)

{
  thunk_FUN_10120e70();
  return;
}


// ==== 101ba49a Unwind@101ba49a

void Unwind_101ba49a(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba4a2 Unwind@101ba4a2

void Unwind_101ba4a2(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba4b0 Unwind@101ba4b0

void Unwind_101ba4b0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba4b8 Unwind@101ba4b8

void Unwind_101ba4b8(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba4c6 Unwind@101ba4c6

void Unwind_101ba4c6(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba4ce Unwind@101ba4ce

void Unwind_101ba4ce(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba4dc Unwind@101ba4dc

void Unwind_101ba4dc(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba4e4 Unwind@101ba4e4

void Unwind_101ba4e4(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba4f2 Unwind@101ba4f2

void Unwind_101ba4f2(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba4fa Unwind@101ba4fa

void Unwind_101ba4fa(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + 0x10));
  return;
}


// ==== 101ba502 Unwind@101ba502

void Unwind_101ba502(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x520));
  return;
}


// ==== 101ba550 Unwind@101ba550

void Unwind_101ba550(void)

{
  int unaff_EBP;
  
  UState::~UState(*(UState **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba558 Unwind@101ba558

void Unwind_101ba558(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba560 Unwind@101ba560

void Unwind_101ba560(void)

{
  thunk_FUN_10120b60();
  return;
}


// ==== 101ba56e Unwind@101ba56e

void Unwind_101ba56e(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba576 Unwind@101ba576

void Unwind_101ba576(void)

{
  thunk_FUN_10120cf0();
  return;
}


// ==== 101ba584 Unwind@101ba584

void Unwind_101ba584(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba58c Unwind@101ba58c

void Unwind_101ba58c(void)

{
  thunk_FUN_10120e70();
  return;
}


// ==== 101ba59a Unwind@101ba59a

void Unwind_101ba59a(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba5a2 Unwind@101ba5a2

void Unwind_101ba5a2(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba5b0 Unwind@101ba5b0

void Unwind_101ba5b0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba5b8 Unwind@101ba5b8

void Unwind_101ba5b8(void)

{
  thunk_FUN_10118750();
  return;
}


// ==== 101ba5c6 Unwind@101ba5c6

void Unwind_101ba5c6(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba5ce Unwind@101ba5ce

void Unwind_101ba5ce(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba5dc Unwind@101ba5dc

void Unwind_101ba5dc(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba5e4 Unwind@101ba5e4

void Unwind_101ba5e4(void)

{
  thunk_FUN_10118d50();
  return;
}


// ==== 101ba5f2 Unwind@101ba5f2

void Unwind_101ba5f2(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba5fa Unwind@101ba5fa

void Unwind_101ba5fa(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + 0x2c));
  return;
}


// ==== 101ba602 Unwind@101ba602

void Unwind_101ba602(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x520));
  return;
}


// ==== 101ba650 Unwind@101ba650

void Unwind_101ba650(void)

{
  int unaff_EBP;
  
  UStruct::~UStruct(*(UStruct **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba670 Unwind@101ba670

void Unwind_101ba670(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba678 Unwind@101ba678

void Unwind_101ba678(void)

{
  thunk_FUN_10134590();
  return;
}


// ==== 101ba690 Unwind@101ba690

void Unwind_101ba690(void)

{
  thunk_FUN_10134590();
  return;
}


// ==== 101ba6b0 Unwind@101ba6b0

void Unwind_101ba6b0(void)

{
  thunk_FUN_10135d10();
  return;
}


// ==== 101ba6d0 Unwind@101ba6d0

void Unwind_101ba6d0(void)

{
  thunk_FUN_10135d10();
  return;
}


// ==== 101ba6f0 Unwind@101ba6f0

void Unwind_101ba6f0(void)

{
  thunk_FUN_10135de0();
  return;
}


// ==== 101ba6f8 Unwind@101ba6f8

void Unwind_101ba6f8(void)

{
  int unaff_EBP;
  
  FArchive::~FArchive((FArchive *)(unaff_EBP + -0x48));
  return;
}


// ==== 101ba720 Unwind@101ba720

void Unwind_101ba720(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    thunk_FUN_10120b60();
    return;
  }
  return;
}


// ==== 101ba7d0 Unwind@101ba7d0

void Unwind_101ba7d0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba7f0 Unwind@101ba7f0

void Unwind_101ba7f0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba810 Unwind@101ba810

void Unwind_101ba810(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba870 Unwind@101ba870

void Unwind_101ba870(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x18));
  return;
}


// ==== 101ba878 Unwind@101ba878

void Unwind_101ba878(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>(*(TArray<unsigned_short> **)(unaff_EBP + -0x18));
  return;
}


// ==== 101ba880 Unwind@101ba880

void Unwind_101ba880(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + -0x18));
  return;
}


// ==== 101ba8c0 Unwind@101ba8c0

void Unwind_101ba8c0(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba8c8 Unwind@101ba8c8

void Unwind_101ba8c8(void)

{
  thunk_FUN_10121930();
  return;
}


// ==== 101ba8e0 Unwind@101ba8e0

void Unwind_101ba8e0(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101ba920 Unwind@101ba920

void Unwind_101ba920(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x14));
  return;
}


// ==== 101ba928 Unwind@101ba928

void Unwind_101ba928(void)

{
  thunk_FUN_10120730();
  return;
}


// ==== 101ba930 Unwind@101ba930

void Unwind_101ba930(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba938 Unwind@101ba938

void Unwind_101ba938(void)

{
  thunk_FUN_101208b0();
  return;
}


// ==== 101ba943 Unwind@101ba943

void Unwind_101ba943(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101ba94b Unwind@101ba94b

void Unwind_101ba94b(void)

{
  thunk_FUN_10124710();
  return;
}


// ==== 101ba970 Unwind@101ba970

void Unwind_101ba970(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101ba978 Unwind@101ba978

void Unwind_101ba978(void)

{
  thunk_FUN_10120730();
  return;
}


// ==== 101ba980 Unwind@101ba980

void Unwind_101ba980(void)

{
  int unaff_EBP;
  
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 101ba988 Unwind@101ba988

void Unwind_101ba988(void)

{
  thunk_FUN_101208b0();
  return;
}


// ==== 101ba993 Unwind@101ba993

void Unwind_101ba993(void)

{
  thunk_FUN_10123dd0();
  return;
}


// ==== 101ba99b Unwind@101ba99b

void Unwind_101ba99b(void)

{
  thunk_FUN_10124710();
  return;
}


// ==== 101ba9d0 Unwind@101ba9d0

void Unwind_101ba9d0(void)

{
  int unaff_EBP;
  
  thunk_FUN_101088c0(*(undefined4 *)(unaff_EBP + -0x34));
  return;
}


// ==== 101baa00 Unwind@101baa00

void Unwind_101baa00(void)

{
  thunk_FUN_101382d0();
  return;
}


// ==== 101baae0 Unwind@101baae0

void Unwind_101baae0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baae8 Unwind@101baae8

void Unwind_101baae8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baaf0 Unwind@101baaf0

void Unwind_101baaf0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baaf8 Unwind@101baaf8

void Unwind_101baaf8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab20 Unwind@101bab20

void Unwind_101bab20(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab28 Unwind@101bab28

void Unwind_101bab28(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab30 Unwind@101bab30

void Unwind_101bab30(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab38 Unwind@101bab38

void Unwind_101bab38(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab60 Unwind@101bab60

void Unwind_101bab60(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab68 Unwind@101bab68

void Unwind_101bab68(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab80 Unwind@101bab80

void Unwind_101bab80(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bab88 Unwind@101bab88

void Unwind_101bab88(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baba0 Unwind@101baba0

void Unwind_101baba0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baba8 Unwind@101baba8

void Unwind_101baba8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101babb0 Unwind@101babb0

void Unwind_101babb0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101babb8 Unwind@101babb8

void Unwind_101babb8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101babe0 Unwind@101babe0

void Unwind_101babe0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101babe8 Unwind@101babe8

void Unwind_101babe8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101babf0 Unwind@101babf0

void Unwind_101babf0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101babf8 Unwind@101babf8

void Unwind_101babf8(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac00 Unwind@101bac00

void Unwind_101bac00(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac08 Unwind@101bac08

void Unwind_101bac08(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac10 Unwind@101bac10

void Unwind_101bac10(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bac18 Unwind@101bac18

void Unwind_101bac18(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bac20 Unwind@101bac20

void Unwind_101bac20(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac28 Unwind@101bac28

void Unwind_101bac28(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bac50 Unwind@101bac50

void Unwind_101bac50(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac58 Unwind@101bac58

void Unwind_101bac58(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac60 Unwind@101bac60

void Unwind_101bac60(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bac68 Unwind@101bac68

void Unwind_101bac68(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101bac70 Unwind@101bac70

void Unwind_101bac70(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101bac78 Unwind@101bac78

void Unwind_101bac78(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101bac80 Unwind@101bac80

void Unwind_101bac80(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bac88 Unwind@101bac88

void Unwind_101bac88(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bac90 Unwind@101bac90

void Unwind_101bac90(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bac98 Unwind@101bac98

void Unwind_101bac98(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baca0 Unwind@101baca0

void Unwind_101baca0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101baca8 Unwind@101baca8

void Unwind_101baca8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bace0 Unwind@101bace0

void Unwind_101bace0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bace8 Unwind@101bace8

void Unwind_101bace8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bacf0 Unwind@101bacf0

void Unwind_101bacf0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bacf8 Unwind@101bacf8

void Unwind_101bacf8(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad00 Unwind@101bad00

void Unwind_101bad00(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad08 Unwind@101bad08

void Unwind_101bad08(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad10 Unwind@101bad10

void Unwind_101bad10(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad18 Unwind@101bad18

void Unwind_101bad18(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bad40 Unwind@101bad40

void Unwind_101bad40(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bad48 Unwind@101bad48

void Unwind_101bad48(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bad50 Unwind@101bad50

void Unwind_101bad50(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bad58 Unwind@101bad58

void Unwind_101bad58(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad60 Unwind@101bad60

void Unwind_101bad60(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad68 Unwind@101bad68

void Unwind_101bad68(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad70 Unwind@101bad70

void Unwind_101bad70(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bad78 Unwind@101bad78

void Unwind_101bad78(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bada0 Unwind@101bada0

void Unwind_101bada0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bada8 Unwind@101bada8

void Unwind_101bada8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101badb0 Unwind@101badb0

void Unwind_101badb0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101badb8 Unwind@101badb8

void Unwind_101badb8(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101badc0 Unwind@101badc0

void Unwind_101badc0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101badc8 Unwind@101badc8

void Unwind_101badc8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101badd0 Unwind@101badd0

void Unwind_101badd0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101badd8 Unwind@101badd8

void Unwind_101badd8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae00 Unwind@101bae00

void Unwind_101bae00(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae08 Unwind@101bae08

void Unwind_101bae08(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae10 Unwind@101bae10

void Unwind_101bae10(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae18 Unwind@101bae18

void Unwind_101bae18(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae20 Unwind@101bae20

void Unwind_101bae20(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae28 Unwind@101bae28

void Unwind_101bae28(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae30 Unwind@101bae30

void Unwind_101bae30(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae38 Unwind@101bae38

void Unwind_101bae38(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae60 Unwind@101bae60

void Unwind_101bae60(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae68 Unwind@101bae68

void Unwind_101bae68(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae70 Unwind@101bae70

void Unwind_101bae70(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bae78 Unwind@101bae78

void Unwind_101bae78(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae80 Unwind@101bae80

void Unwind_101bae80(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae88 Unwind@101bae88

void Unwind_101bae88(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae90 Unwind@101bae90

void Unwind_101bae90(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bae98 Unwind@101bae98

void Unwind_101bae98(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baec0 Unwind@101baec0

void Unwind_101baec0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baec8 Unwind@101baec8

void Unwind_101baec8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baed0 Unwind@101baed0

void Unwind_101baed0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baed8 Unwind@101baed8

void Unwind_101baed8(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baee0 Unwind@101baee0

void Unwind_101baee0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baee8 Unwind@101baee8

void Unwind_101baee8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baef0 Unwind@101baef0

void Unwind_101baef0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baef8 Unwind@101baef8

void Unwind_101baef8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf20 Unwind@101baf20

void Unwind_101baf20(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf28 Unwind@101baf28

void Unwind_101baf28(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf30 Unwind@101baf30

void Unwind_101baf30(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf38 Unwind@101baf38

void Unwind_101baf38(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baf40 Unwind@101baf40

void Unwind_101baf40(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baf48 Unwind@101baf48

void Unwind_101baf48(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baf50 Unwind@101baf50

void Unwind_101baf50(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baf58 Unwind@101baf58

void Unwind_101baf58(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf80 Unwind@101baf80

void Unwind_101baf80(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf88 Unwind@101baf88

void Unwind_101baf88(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf90 Unwind@101baf90

void Unwind_101baf90(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101baf98 Unwind@101baf98

void Unwind_101baf98(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bafc0 Unwind@101bafc0

void Unwind_101bafc0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bafc8 Unwind@101bafc8

void Unwind_101bafc8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bafd0 Unwind@101bafd0

void Unwind_101bafd0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bafd8 Unwind@101bafd8

void Unwind_101bafd8(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bafe0 Unwind@101bafe0

void Unwind_101bafe0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bafe8 Unwind@101bafe8

void Unwind_101bafe8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baff0 Unwind@101baff0

void Unwind_101baff0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101baff8 Unwind@101baff8

void Unwind_101baff8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb020 Unwind@101bb020

void Unwind_101bb020(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb028 Unwind@101bb028

void Unwind_101bb028(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb030 Unwind@101bb030

void Unwind_101bb030(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb038 Unwind@101bb038

void Unwind_101bb038(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb040 Unwind@101bb040

void Unwind_101bb040(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb048 Unwind@101bb048

void Unwind_101bb048(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb070 Unwind@101bb070

void Unwind_101bb070(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb078 Unwind@101bb078

void Unwind_101bb078(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb080 Unwind@101bb080

void Unwind_101bb080(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb088 Unwind@101bb088

void Unwind_101bb088(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb090 Unwind@101bb090

void Unwind_101bb090(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb098 Unwind@101bb098

void Unwind_101bb098(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb0c0 Unwind@101bb0c0

void Unwind_101bb0c0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb0c8 Unwind@101bb0c8

void Unwind_101bb0c8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb0d0 Unwind@101bb0d0

void Unwind_101bb0d0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb0d8 Unwind@101bb0d8

void Unwind_101bb0d8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb100 Unwind@101bb100

void Unwind_101bb100(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb108 Unwind@101bb108

void Unwind_101bb108(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb110 Unwind@101bb110

void Unwind_101bb110(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb118 Unwind@101bb118

void Unwind_101bb118(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb140 Unwind@101bb140

void Unwind_101bb140(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb148 Unwind@101bb148

void Unwind_101bb148(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb150 Unwind@101bb150

void Unwind_101bb150(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb158 Unwind@101bb158

void Unwind_101bb158(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb180 Unwind@101bb180

void Unwind_101bb180(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb188 Unwind@101bb188

void Unwind_101bb188(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb190 Unwind@101bb190

void Unwind_101bb190(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb198 Unwind@101bb198

void Unwind_101bb198(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb1a0 Unwind@101bb1a0

void Unwind_101bb1a0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb1a8 Unwind@101bb1a8

void Unwind_101bb1a8(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb1b0 Unwind@101bb1b0

void Unwind_101bb1b0(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bb1b8 Unwind@101bb1b8

void Unwind_101bb1b8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bb1c0 Unwind@101bb1c0

void Unwind_101bb1c0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bb1c8 Unwind@101bb1c8

void Unwind_101bb1c8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x30));
  return;
}


// ==== 101bb1d0 Unwind@101bb1d0

void Unwind_101bb1d0(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x24));
  return;
}


// ==== 101bb1d8 Unwind@101bb1d8

void Unwind_101bb1d8(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb210 Unwind@101bb210

void Unwind_101bb210(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb218 Unwind@101bb218

void Unwind_101bb218(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb240 Unwind@101bb240

void Unwind_101bb240(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb248 Unwind@101bb248

void Unwind_101bb248(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb250 Unwind@101bb250

void Unwind_101bb250(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb258 Unwind@101bb258

void Unwind_101bb258(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb280 Unwind@101bb280

void Unwind_101bb280(void)

{
  int unaff_EBP;
  
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb288 Unwind@101bb288

void Unwind_101bb288(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb290 Unwind@101bb290

void Unwind_101bb290(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb298 Unwind@101bb298

void Unwind_101bb298(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb2c0 Unwind@101bb2c0

void Unwind_101bb2c0(void)

{
  int unaff_EBP;
  
  FScopeCriticalSection::~FScopeCriticalSection((FScopeCriticalSection *)(unaff_EBP + -0x14));
  return;
}


// ==== 101bb2f0 Unwind@101bb2f0

void Unwind_101bb2f0(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101bb2f8 Unwind@101bb2f8

void Unwind_101bb2f8(void)

{
  int unaff_EBP;
  
  FString::~FString(*(FString **)(unaff_EBP + 4));
  return;
}


// ==== 101bb310 Unwind@101bb310

void Unwind_101bb310(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x80c));
  return;
}


// ==== 101bb31b Unwind@101bb31b

void Unwind_101bb31b(void)

{
  int unaff_EBP;
  
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x40c));
  return;
}


// ==== 101bb340 Unwind@101bb340

void Unwind_101bb340(void)

{
  int unaff_EBP;
  
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


