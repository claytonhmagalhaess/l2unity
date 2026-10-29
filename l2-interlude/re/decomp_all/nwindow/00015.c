// ==== 101bedd0 FUN_101bedd0

void FUN_101bedd0(void)

{
  return;
}


// ==== 101bede0 FUN_101bede0

bool FUN_101bede0(LPCSTR param_1)

{
  int *lpBuffer;
  char cVar1;
  HANDLE hFile;
  HMODULE pHVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  char *pcVar9;
  DWORD local_240;
  short local_23c [30];
  LONG local_200;
  int local_1fc [13];
  uint local_1c8;
  CHAR local_104 [260];
  
  if (*in_ECX != 0) {
    FUN_101befa0();
  }
  GetSystemDirectoryA(local_104,0x104);
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_1035352c;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = local_104;
  do {
    pcVar8 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar3 = 0xffffffff;
  pCVar7 = param_1;
  do {
    pcVar6 = pCVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pCVar7 + 1;
    cVar1 = *pCVar7;
    pCVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar9 = local_104;
  do {
    pcVar8 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  lpBuffer = in_ECX + 1;
  GetTempPathA(0x104,(LPSTR)lpBuffer);
  GetTempFileNameA((LPCSTR)lpBuffer,&DAT_103543cc,0,(LPSTR)lpBuffer);
  CopyFileA(local_104,(LPCSTR)lpBuffer,0);
  hFile = CreateFileA((LPCSTR)lpBuffer,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    ReadFile(hFile,local_23c,0x40,&local_240,(LPOVERLAPPED)0x0);
    if (local_23c[0] == 0x5a4d) {
      SetFilePointer(hFile,local_200,(PLONG)0x0,0);
      ReadFile(hFile,local_1fc,0xf8,&local_240,(LPOVERLAPPED)0x0);
      if ((local_1fc[0] == 0x4550) && (0x80000000 < local_1c8)) {
        local_1c8 = 0x10000000;
        SetFilePointer(hFile,local_200,(PLONG)0x0,0);
        WriteFile(hFile,local_1fc,0xf8,&local_240,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(hFile);
  }
  pHVar2 = LoadLibraryExA((LPCSTR)lpBuffer,(HANDLE)0x0,8);
  *in_ECX = (int)pHVar2;
  if (pHVar2 != (HMODULE)0x0) {
    return true;
  }
  *(CHAR *)lpBuffer = '\0';
  pHVar2 = LoadLibraryExA(param_1,(HANDLE)0x0,8);
  *in_ECX = (int)pHVar2;
  return pHVar2 != (HMODULE)0x0;
}


// ==== 101befa0 FUN_101befa0

void FUN_101befa0(void)

{
  HANDLE hHeap;
  undefined4 *in_ECX;
  DWORD dwFlags;
  HMODULE hLibModule;
  
  hLibModule = (HMODULE)*in_ECX;
  if (hLibModule != (HMODULE)0x0) {
    if (*(char *)(in_ECX + 1) != '\0') {
      FreeLibrary(hLibModule);
      DeleteFileA((LPCSTR)(in_ECX + 1));
      *in_ECX = 0;
      return;
    }
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,hLibModule);
    *in_ECX = 0;
  }
  return;
}


// ==== 101beff0 FUN_101beff0

undefined4 FUN_101beff0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 101bf000 FUN_101bf000

void FUN_101bf000(void)

{
  BOOL BVar1;
  HCRYPTPROV *in_ECX;
  
  in_ECX[5] = 0;
  in_ECX[3] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[9] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[8] = 0;
  in_ECX[0x11] = 0;
  in_ECX[4] = 0;
  BVar1 = CryptAcquireContextA
                    (in_ECX,(LPCSTR)0x0,s_Microsoft_Base_Cryptographic_Pro_10354428,1,0xf0000000);
  if (BVar1 == 0) {
    *in_ECX = 0;
  }
  return;
}


// ==== 101bf050 FUN_101bf050

void FUN_101bf050(void)

{
  HCRYPTPROV *in_ECX;
  
  if ((void *)in_ECX[1] != (void *)0x0) {
    _free((void *)in_ECX[1]);
  }
  if ((void *)in_ECX[5] != (void *)0x0) {
    _free((void *)in_ECX[5]);
  }
  if (in_ECX[3] != 0) {
    CryptDestroyHash(in_ECX[3]);
  }
  if (in_ECX[4] != 0) {
    CryptDestroyKey(in_ECX[4]);
  }
  if (in_ECX[0xf] != 0) {
    CryptDestroyKey(in_ECX[0xf]);
  }
  if (in_ECX[0x10] != 0) {
    CryptDestroyHash(in_ECX[0x10]);
  }
  if (*in_ECX != 0) {
    CryptReleaseContext(*in_ECX,0);
  }
  return;
}


// ==== 101bf0c0 FUN_101bf0c0

undefined4 FUN_101bf0c0(char *param_1,char param_2)

{
  HCRYPTPROV *pHVar1;
  HCRYPTKEY *phKey;
  HCRYPTHASH *phHash;
  HCRYPTPROV *pHVar2;
  HCRYPTPROV HVar3;
  HANDLE hFile;
  DWORD DVar4;
  void *lpBuffer;
  HCRYPTPROV *pHVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  char *pcVar8;
  int iVar9;
  HCRYPTPROV *in_ECX;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  HCRYPTPROV *local_4;
  
  if (param_1 == (LPCSTR)0x0) {
    in_ECX[0x11] = 1;
    return 0;
  }
  if (*param_1 == '\0') {
    in_ECX[0x11] = 2;
    return 0;
  }
  local_4 = in_ECX;
  hFile = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    in_ECX[0x11] = 3;
    return 0;
  }
  DVar4 = GetFileSize(hFile,(LPDWORD)0x0);
  in_ECX[9] = DVar4;
  if (DVar4 == 0xffffffff) {
    CloseHandle(hFile);
    in_ECX[0x11] = 0x21;
    return 0;
  }
  if ((void *)in_ECX[1] != (void *)0x0) {
    _free((void *)in_ECX[1]);
    in_ECX[1] = 0;
  }
  lpBuffer = _malloc(in_ECX[9]);
  in_ECX[1] = (HCRYPTPROV)lpBuffer;
  if (lpBuffer == (void *)0x0) {
    CloseHandle(hFile);
    in_ECX[0x11] = 4;
    return 0;
  }
  ReadFile(hFile,lpBuffer,in_ECX[9],(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
  pHVar5 = (HCRYPTPROV *)in_ECX[9];
  if (local_4 != pHVar5) {
    CloseHandle(hFile);
    in_ECX[0x11] = 5;
    return 0;
  }
  pHVar1 = in_ECX + 10;
  pHVar2 = (HCRYPTPROV *)((in_ECX[1] - 0x10) + (int)pHVar5);
  *pHVar1 = *pHVar2;
  in_ECX[0xb] = pHVar2[1];
  in_ECX[0xc] = pHVar2[2];
  in_ECX[0xd] = pHVar2[3];
  if ((*pHVar1 == 0x32812622) && (in_ECX[0xd] == 0x32812621)) {
    *(undefined1 *)(in_ECX + 7) = 1;
    HVar3 = in_ECX[0xc] + 0x10 + in_ECX[0xb];
    in_ECX[0xe] = in_ECX[0xb];
    in_ECX[8] = HVar3;
    in_ECX[2] = (int)pHVar5 - HVar3;
  }
  else {
    *pHVar1 = 0;
    in_ECX[0xb] = 0;
    in_ECX[0xc] = 0;
    in_ECX[0xd] = 0;
    pHVar5 = (HCRYPTPROV *)in_ECX[9];
    *(undefined1 *)(in_ECX + 7) = 0;
    in_ECX[8] = 0;
    in_ECX[2] = (HCRYPTPROV)pHVar5;
    in_ECX[0xe] = 0;
  }
  if (pHVar5 < (HCRYPTPROV *)in_ECX[8]) {
    *(undefined1 *)(in_ECX + 7) = 0;
    in_ECX[8] = 0;
    in_ECX[9] = 0;
    in_ECX[2] = 0;
    in_ECX[0xe] = 0;
  }
  CloseHandle(hFile);
  if ((char)in_ECX[7] == '\0') {
    in_ECX[0x11] = 6;
    return 0;
  }
  in_ECX[6] = in_ECX[0xc];
  if ((void *)in_ECX[5] != (void *)0x0) {
    _free((void *)in_ECX[5]);
    in_ECX[5] = 0;
  }
  puVar6 = _malloc(in_ECX[6]);
  in_ECX[5] = (HCRYPTPROV)puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    in_ECX[0x11] = 7;
    return 0;
  }
  uVar11 = in_ECX[6];
  puVar12 = (undefined4 *)(in_ECX[2] + in_ECX[1] + in_ECX[0xe]);
  for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar6 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((*in_ECX == 0) &&
     (BVar7 = CryptAcquireContextA
                        (in_ECX,(LPCSTR)0x0,s_Microsoft_Base_Cryptographic_Pro_10354428,1,0xf0000000
                        ), BVar7 == 0)) {
    in_ECX[0x11] = 8;
    return 0;
  }
  phKey = in_ECX + 4;
  if (in_ECX[4] != 0) {
    CryptDestroyKey(in_ECX[4]);
    *phKey = 0;
  }
  BVar7 = CryptImportKey(*in_ECX,&DAT_103543d0,DAT_10354424,0,0,phKey);
  if (BVar7 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x57) {
LAB_101bf374:
      in_ECX[0x11] = 9;
      return 0;
    }
    BVar7 = CryptAcquireContextA
                      (in_ECX,(LPCSTR)0x0,s_Microsoft_Base_Cryptographic_Pro_10354428,1,0xf0000000);
    if (BVar7 == 0) {
      in_ECX[0x11] = 0x62;
      return 0;
    }
    BVar7 = CryptImportKey(*in_ECX,&DAT_103543d0,DAT_10354424,0,0,phKey);
    if (BVar7 == 0) goto LAB_101bf374;
  }
  phHash = in_ECX + 3;
  if (in_ECX[3] != 0) {
    CryptDestroyHash(in_ECX[3]);
    *phHash = 0;
  }
  BVar7 = CryptCreateHash(*in_ECX,0x8003,0,0,phHash);
  if (BVar7 == 0) {
    in_ECX[0x11] = 10;
    return 0;
  }
  BVar7 = CryptHashData(*phHash,(BYTE *)in_ECX[1],in_ECX[2] + in_ECX[0xe],0);
  if (BVar7 == 0) {
    in_ECX[0x11] = 0xb;
    return 0;
  }
  BVar7 = CryptVerifySignatureA(*phHash,(BYTE *)in_ECX[5],in_ECX[6],*phKey,(LPCSTR)0x0,0);
  if (BVar7 != 0) {
LAB_101bf464:
    if (param_2 != '\0') {
      pcVar8 = _strrchr(param_1,0x5c);
      if (pcVar8 != (char *)0x0) {
        param_1 = pcVar8 + 1;
      }
      iVar9 = __strnicmp(param_1,(char *)(in_ECX[2] + in_ECX[1]),in_ECX[0xe]);
      if (iVar9 != 0) {
        in_ECX[0x11] = 0xd;
        return 0;
      }
    }
    if ((void *)in_ECX[1] != (void *)0x0) {
      _free((void *)in_ECX[1]);
      in_ECX[1] = 0;
    }
    return 1;
  }
  DVar4 = GetLastError();
  if (DVar4 == 0x57) {
    BVar7 = CryptAcquireContextA
                      (in_ECX,(LPCSTR)0x0,s_Microsoft_Base_Cryptographic_Pro_10354428,1,0xf0000000);
    if (BVar7 == 0) {
      in_ECX[0x11] = 0x80;
      return 0;
    }
    BVar7 = CryptVerifySignatureA(*phHash,(BYTE *)in_ECX[5],in_ECX[6],*phKey,(LPCSTR)0x0,0);
    if (BVar7 != 0) goto LAB_101bf464;
  }
  in_ECX[0x11] = 0xc;
  return 0;
}


// ==== 101bf4d0 FUN_101bf4d0

undefined1 FUN_101bf4d0(LPCSTR param_1,undefined4 *param_2,uint param_3,BYTE *param_4)

{
  HCRYPTPROV *pHVar1;
  HCRYPTHASH *phHash;
  HCRYPTKEY *phKey;
  HCRYPTPROV *pHVar2;
  HCRYPTPROV HVar3;
  BYTE BVar4;
  char cVar5;
  HANDLE hFile;
  DWORD DVar6;
  void *lpBuffer;
  HCRYPTPROV *pHVar7;
  BOOL BVar8;
  HCRYPTPROV *in_ECX;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  BYTE *pBVar12;
  undefined4 *puVar13;
  HCRYPTPROV *local_4;
  
  local_4 = in_ECX;
  hFile = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    in_ECX[0x11] = 1;
    return 0;
  }
  DVar6 = GetFileSize(hFile,(LPDWORD)0x0);
  in_ECX[9] = DVar6;
  if (DVar6 == 0xffffffff) {
    CloseHandle(hFile);
    in_ECX[0x11] = 0xb;
    return 0;
  }
  if ((void *)in_ECX[1] != (void *)0x0) {
    _free((void *)in_ECX[1]);
    in_ECX[1] = 0;
  }
  lpBuffer = _malloc(in_ECX[9]);
  in_ECX[1] = (HCRYPTPROV)lpBuffer;
  if (lpBuffer == (void *)0x0) {
    CloseHandle(hFile);
    in_ECX[0x11] = 2;
    return 0;
  }
  ReadFile(hFile,lpBuffer,in_ECX[9],(LPDWORD)&local_4,(LPOVERLAPPED)0x0);
  pHVar7 = (HCRYPTPROV *)in_ECX[9];
  if (local_4 != pHVar7) {
    CloseHandle(hFile);
    in_ECX[0x11] = 3;
    return 0;
  }
  pHVar1 = in_ECX + 10;
  pHVar2 = (HCRYPTPROV *)((in_ECX[1] - 0x10) + (int)pHVar7);
  *pHVar1 = *pHVar2;
  in_ECX[0xb] = pHVar2[1];
  in_ECX[0xc] = pHVar2[2];
  in_ECX[0xd] = pHVar2[3];
  if ((*pHVar1 == 0x32812622) && (in_ECX[0xd] == 0x32812621)) {
    *(undefined1 *)(in_ECX + 7) = 1;
    HVar3 = in_ECX[0xc] + 0x10 + in_ECX[0xb];
    in_ECX[0xe] = in_ECX[0xb];
    in_ECX[8] = HVar3;
    in_ECX[2] = (int)pHVar7 - HVar3;
  }
  else {
    *pHVar1 = 0;
    in_ECX[0xb] = 0;
    in_ECX[0xc] = 0;
    in_ECX[0xd] = 0;
    *(undefined1 *)(in_ECX + 7) = 0;
    pHVar7 = (HCRYPTPROV *)in_ECX[9];
    in_ECX[8] = 0;
    in_ECX[2] = (HCRYPTPROV)pHVar7;
    in_ECX[0xe] = 0;
  }
  if (pHVar7 < (HCRYPTPROV *)in_ECX[8]) {
    *(undefined1 *)(in_ECX + 7) = 0;
    in_ECX[8] = 0;
    in_ECX[9] = 0;
    in_ECX[2] = 0;
    in_ECX[0xe] = 0;
  }
  CloseHandle(hFile);
  if (*in_ECX == 0) {
    BVar8 = CryptAcquireContextA
                      (in_ECX,(LPCSTR)0x0,s_Microsoft_Base_Cryptographic_Pro_10354428,1,0xf0000000);
    if (BVar8 == 0) {
      in_ECX[0x11] = 4;
      return 0;
    }
  }
  phHash = in_ECX + 0x10;
  if (in_ECX[0x10] != 0) {
    CryptDestroyHash(in_ECX[0x10]);
    *phHash = 0;
  }
  BVar8 = CryptCreateHash(*in_ECX,0x8003,0,0,phHash);
  if (BVar8 == 0) {
    in_ECX[0x11] = 5;
    return 0;
  }
  uVar9 = 0xffffffff;
  pBVar12 = param_4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    BVar4 = *pBVar12;
    pBVar12 = pBVar12 + 1;
  } while (BVar4 != '\0');
  BVar8 = CryptHashData(*phHash,param_4,~uVar9 - 1,0);
  if (BVar8 == 0) {
    in_ECX[0x11] = 6;
    return 0;
  }
  phKey = in_ECX + 0xf;
  if (in_ECX[0xf] != 0) {
    CryptDestroyKey(in_ECX[0xf]);
    *phKey = 0;
  }
  BVar8 = CryptDeriveKey(*in_ECX,0x6801,*phHash,0,phKey);
  if (BVar8 == 0) {
    in_ECX[0x11] = 7;
    return 0;
  }
  param_1 = (LPCSTR)in_ECX[2];
  BVar8 = CryptDecrypt(*phKey,0,1,0,(BYTE *)in_ECX[1],(DWORD *)&param_1);
  if (BVar8 == 0) {
    DVar6 = GetLastError();
    if (DVar6 != 0x80090010) {
      in_ECX[0x11] = 8;
      return 0;
    }
    cVar5 = FUN_101bfe70(in_ECX[1],param_1);
    if (cVar5 == '\0') {
      in_ECX[0x11] = 0x58;
      return 0;
    }
  }
  uVar9 = param_3;
  if (in_ECX[2] < param_3) {
    uVar9 = in_ECX[2];
  }
  puVar11 = (undefined4 *)in_ECX[1];
  puVar13 = param_2;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  *(undefined1 *)((int)param_2 + uVar9) = 0;
  if ((void *)in_ECX[1] != (void *)0x0) {
    _free((void *)in_ECX[1]);
    in_ECX[1] = 0;
  }
  return 1;
}


// ==== 101bf7d0 FUN_101bf7d0

void FUN_101bf7d0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar2 = param_1;
  puVar1 = param_1 + 2;
  uVar6 = 0;
  uVar3 = 0;
  puVar5 = puVar1;
  do {
    *puVar5 = uVar3;
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar3 < 0x100);
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = 0;
  param_1 = (uint *)0x40;
  do {
    puVar5 = puVar2 + 4;
    uVar3 = puVar2[2];
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    puVar2[2] = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    uVar3 = puVar2[3];
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    puVar2[3] = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    uVar3 = *puVar5;
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    *puVar5 = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    uVar3 = puVar2[5];
    uVar6 = *(byte *)(iVar4 + param_3) + uVar3 + uVar6 & 0xff;
    iVar4 = iVar4 + 1;
    if (iVar4 == param_2) {
      iVar4 = 0;
    }
    puVar2[5] = puVar1[uVar6];
    puVar1[uVar6] = uVar3;
    param_1 = (uint *)((int)param_1 + -1);
    puVar2 = puVar5;
  } while (param_1 != (uint *)0x0);
  return;
}


// ==== 101bf8c0 FUN_101bf8c0

void FUN_101bf8c0(uint *param_1,uint param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = param_1[1];
  uVar7 = *param_1;
  uVar1 = param_2 >> 3;
  if (uVar1 != 0) {
    uVar5 = uVar7 + 1 & 0xff;
    uVar7 = param_1[uVar5 + 2];
    uVar3 = uVar4 + uVar7 & 0xff;
    uVar4 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar4;
    param_1[uVar3 + 2] = uVar7;
    *param_4 = (byte)param_1[(uVar4 + uVar7 & 0xff) + 2] ^ *param_3;
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[1] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[1];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[2] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[2];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[3] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[3];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[4] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[4];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[5] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[5];
    uVar6 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar6 + 2];
    uVar5 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar5 + 2];
    param_1[uVar6 + 2] = uVar7;
    param_1[uVar5 + 2] = uVar4;
    param_4[6] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[6];
    uVar7 = uVar6 + 1 & 0xff;
    uVar3 = param_1[uVar7 + 2];
    uVar4 = uVar5 + uVar3 & 0xff;
    uVar5 = param_1[uVar4 + 2];
    param_1[uVar7 + 2] = uVar5;
    param_1[uVar4 + 2] = uVar3;
    param_4[7] = (byte)param_1[(uVar5 + uVar3 & 0xff) + 2] ^ param_3[7];
    while( true ) {
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 8;
      param_4 = param_4 + 8;
      if (uVar1 == 0) break;
      uVar5 = uVar7 + 1 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      uVar3 = uVar4 + uVar7 & 0xff;
      uVar4 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar4;
      param_1[uVar3 + 2] = uVar7;
      *param_4 = (byte)param_1[(uVar4 + uVar7 & 0xff) + 2] ^ *param_3;
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[1] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[1];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[2] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[2];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[3] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[3];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[4] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[4];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[5] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[5];
      uVar6 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar6 + 2];
      uVar5 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      param_1[uVar6 + 2] = uVar7;
      param_1[uVar5 + 2] = uVar4;
      param_4[6] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[6];
      uVar7 = uVar6 + 1 & 0xff;
      uVar3 = param_1[uVar7 + 2];
      uVar4 = uVar5 + uVar3 & 0xff;
      uVar5 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar5;
      param_1[uVar4 + 2] = uVar3;
      param_4[7] = (byte)param_1[(uVar5 + uVar3 & 0xff) + 2] ^ param_3[7];
    }
  }
  if ((param_2 & 7) != 0) {
    uVar7 = uVar7 + 1 & 0xff;
    uVar1 = param_1[uVar7 + 2];
    uVar4 = uVar4 + uVar1 & 0xff;
    uVar3 = param_1[uVar4 + 2];
    param_1[uVar7 + 2] = uVar3;
    param_1[uVar4 + 2] = uVar1;
    *param_4 = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ *param_3;
    for (iVar2 = (param_2 & 7) - 1; iVar2 != 0; iVar2 = iVar2 + -7) {
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[1] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[1];
      if (iVar2 == 1) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[2] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[2];
      if (iVar2 == 2) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[3] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[3];
      if (iVar2 == 3) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[4] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[4];
      if (iVar2 == 4) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[5] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[5];
      if (iVar2 == 5) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[6] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[6];
      param_4 = param_4 + 7;
      param_3 = param_3 + 7;
      if (iVar2 == 6) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      *param_4 = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ *param_3;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar4;
  return;
}


// ==== 101bfe70 FUN_101bfe70

undefined4 FUN_101bfe70(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  int in_ECX;
  DWORD local_41c;
  BYTE local_418 [5];
  undefined4 local_413;
  undefined4 local_40f;
  undefined2 local_40b;
  undefined1 local_409;
  undefined1 local_408 [1032];
  
  local_41c = 0x10;
  BVar1 = CryptGetHashParam(*(HCRYPTHASH *)(in_ECX + 0x40),2,local_418,&local_41c,0);
  if (BVar1 == 0) {
    return 0;
  }
  local_413 = 0;
  local_40f = 0;
  local_40b = 0;
  local_409 = 0;
  FUN_101bf7d0(local_408,0x10,local_418);
  FUN_101bf8c0(local_408,param_2,param_1,param_1);
  return 1;
}


// ==== 101bff00 FUN_101bff00

undefined4 FUN_101bff00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x138);
}


// ==== 101bff10 FUN_101bff10

undefined4 FUN_101bff10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x144);
}


// ==== 101bff20 FUN_101bff20

int FUN_101bff20(void)

{
  int in_ECX;
  
  return in_ECX + 0x18;
}


// ==== 101bff30 FUN_101bff30

undefined4 FUN_101bff30(undefined4 param_1,int param_2,CHAR *param_3)

{
  int iVar1;
  LPCSTR nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  int in_ECX;
  uint uVar4;
  CHAR *pCVar5;
  HANDLE hFile;
  undefined4 *lpBuffer;
  DWORD local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  LPCSTR local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  LPCSTR local_108;
  CHAR local_104 [260];
  
  hFile = *(HANDLE *)(in_ECX + 4);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  local_140 = *(undefined4 *)(in_ECX + 0xc);
  local_144 = param_1;
  local_13c = param_2;
  local_138 = param_3;
  if (param_2 == 0x613) {
    iVar1 = lstrlenA(param_3);
    local_138 = (LPCSTR)(iVar1 + 1);
    if ((LPCSTR)0x104 < local_138) {
      param_3[0x103] = '\0';
      local_138 = (LPCSTR)0x104;
    }
    local_114 = local_144;
    local_10c = local_13c;
    local_110 = local_140;
    pCVar5 = local_104;
    for (uVar4 = (uint)local_138 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar5 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pCVar5 = pCVar5 + 4;
    }
    nNumberOfBytesToWrite = local_138 + 0x10;
    for (uVar4 = (uint)local_138 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pCVar5 = *param_3;
      param_3 = param_3 + 1;
      pCVar5 = pCVar5 + 1;
    }
    lpBuffer = &local_114;
    hFile = *(HANDLE *)(in_ECX + 4);
    local_108 = local_138;
  }
  else if (param_2 == 0x619) {
    local_12c = param_2;
    local_120 = *(undefined4 *)(param_3 + 4);
    local_138 = (LPCSTR)0x10;
    local_134 = param_1;
    local_124 = *(undefined4 *)param_3;
    local_128 = 0x10;
    local_11c = *(undefined4 *)(param_3 + 8);
    local_118 = *(undefined4 *)(param_3 + 0xc);
    lpBuffer = &local_134;
    nNumberOfBytesToWrite = (LPCSTR)0x20;
    local_130 = local_140;
  }
  else {
    lpBuffer = &local_144;
    nNumberOfBytesToWrite = (LPCSTR)0x10;
  }
  BVar2 = WriteFile(hFile,lpBuffer,(DWORD)nNumberOfBytesToWrite,&local_148,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) && (((DVar3 = GetLastError(), DVar3 == 0x6d || (DVar3 == 0xe8)) || (DVar3 == 6)))
     ) {
    return 0;
  }
  return 1;
}


// ==== 101c0090 FUN_101c0090

undefined4 FUN_101c0090(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX + 0x14c) != 0x619) {
    if (((*(int *)(in_ECX + 0x148) == param_1) && (*(int *)(in_ECX + 0x14c) == param_2)) &&
       (*(int *)(in_ECX + 0x150) == param_3)) {
      uVar2 = *(int *)(in_ECX + 0x154) + 1;
      *(uint *)(in_ECX + 0x154) = uVar2;
      if (2 < uVar2) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x154) = 0;
    }
    *(int *)(in_ECX + 0x148) = param_1;
    *(int *)(in_ECX + 0x14c) = param_2;
    *(int *)(in_ECX + 0x150) = param_3;
  }
  uVar1 = FUN_101bff30(param_1,param_2,param_3);
  return uVar1;
}


// ==== 101c0110 FUN_101c0110

void FUN_101c0110(void)

{
  undefined4 *in_ECX;
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0xffffffff;
  in_ECX[3] = (local_10._6_4_ & 0xffff) * (uint)local_10.wMonth * (uint)local_10.wYear ^ 0xdad53a;
  *in_ECX = 0;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  return;
}


// ==== 101c0170 thunk_FUN_101c0350 thunk -> 101c0350

// ==== 101c0180 FUN_101c0180

undefined4 FUN_101c0180(void)

{
  PHANDLE ppvVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  int in_ECX;
  LPHANDLE lpTargetHandle;
  LPHANDLE lpTargetHandle_00;
  DWORD DVar6;
  DWORD DVar7;
  _SECURITY_ATTRIBUTES local_c;
  
  lpTargetHandle_00 = (LPHANDLE)(in_ECX + 4);
  if (*(int *)(in_ECX + 4) != -1) {
    return 0;
  }
  local_c.nLength = 0xc;
  local_c.bInheritHandle = 1;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar2 = GetStdHandle(0xfffffff5);
  *(HANDLE *)(in_ECX + 0x134) = pvVar2;
  ppvVar1 = (PHANDLE)(in_ECX + 0x140);
  BVar3 = CreatePipe(ppvVar1,(PHANDLE)(in_ECX + 0x144),&local_c,0);
  if (BVar3 == 0) {
    return 0;
  }
  BVar3 = SetStdHandle(0xfffffff5,*(PHANDLE)(in_ECX + 0x144));
  if (BVar3 == 0) {
    return 0;
  }
  DVar7 = 2;
  BVar3 = 0;
  lpTargetHandle = (LPHANDLE)(in_ECX + 8);
  DVar6 = 0;
  pvVar4 = GetCurrentProcess();
  pvVar2 = *ppvVar1;
  pvVar5 = GetCurrentProcess();
  BVar3 = DuplicateHandle(pvVar5,pvVar2,pvVar4,lpTargetHandle,DVar6,BVar3,DVar7);
  if (BVar3 == 0) {
    return 0;
  }
  CloseHandle(*ppvVar1);
  pvVar2 = GetStdHandle(0xfffffff6);
  *(HANDLE *)(in_ECX + 0x130) = pvVar2;
  ppvVar1 = (PHANDLE)(in_ECX + 0x13c);
  BVar3 = CreatePipe((PHANDLE)(in_ECX + 0x138),ppvVar1,&local_c,0);
  if (BVar3 == 0) {
    return 0;
  }
  BVar3 = SetStdHandle(0xfffffff6,*(PHANDLE)(in_ECX + 0x138));
  if (BVar3 == 0) {
    return 0;
  }
  DVar7 = 2;
  BVar3 = 0;
  DVar6 = 0;
  pvVar4 = GetCurrentProcess();
  pvVar2 = *ppvVar1;
  pvVar5 = GetCurrentProcess();
  BVar3 = DuplicateHandle(pvVar5,pvVar2,pvVar4,lpTargetHandle_00,DVar6,BVar3,DVar7);
  if (BVar3 == 0) {
    return 0;
  }
  CloseHandle(*ppvVar1);
  return 1;
}


// ==== 101c02d0 FUN_101c02d0

uint FUN_101c02d0(void)

{
  BOOL BVar1;
  HANDLE pvVar2;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  if (in_ECX[1] == -1) {
    return 0;
  }
  local_4 = in_ECX;
  BVar1 = SetStdHandle(0xfffffff6,(HANDLE)in_ECX[0x4c]);
  if (BVar1 == 0) {
    return 0;
  }
  BVar1 = SetStdHandle(0xfffffff5,(HANDLE)in_ECX[0x4d]);
  if (BVar1 == 0) {
    return 0;
  }
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  in_ECX[4] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    return 0;
  }
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_101c03d0,in_ECX,0,(LPDWORD)&local_4);
  *in_ECX = pvVar2;
  return -(uint)(pvVar2 != (HANDLE)0x0) & (uint)local_4;
}


// ==== 101c0350 FUN_101c0350

undefined4 FUN_101c0350(void)

{
  DWORD DVar1;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == -1) {
    return 0;
  }
  if ((HANDLE)in_ECX[4] != (HANDLE)0x0) {
    SetEvent((HANDLE)in_ECX[4]);
  }
  if ((HANDLE)*in_ECX != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject((HANDLE)*in_ECX,100);
    if (DVar1 == 0x102) {
      TerminateThread((HANDLE)*in_ECX,0);
    }
    CloseHandle((HANDLE)*in_ECX);
    *in_ECX = 0;
  }
  if ((HANDLE)in_ECX[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)in_ECX[1]);
    in_ECX[1] = 0xffffffff;
  }
  if ((HANDLE)in_ECX[2] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)in_ECX[2]);
    in_ECX[2] = 0xffffffff;
  }
  return 1;
}


// ==== 101c03d0 FUN_101c03d0

undefined4 FUN_101c03d0(int param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  DWORD local_24;
  DWORD local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1029a830;
  puStack_10 = &LAB_101c4e90;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  local_24 = 0;
  local_44 = 0;
  local_30 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
LAB_101c040d:
  do {
    if (local_24 == 0) {
      BVar2 = PeekNamedPipe(*(HANDLE *)(param_1 + 8),(LPVOID)0x0,0,(LPDWORD)0x0,&local_24,
                            (LPDWORD)0x0);
      if ((BVar2 == 0) && (cVar1 = FUN_101bc540(param_1,0x60f,0), cVar1 == '\0')) goto LAB_101c06f9;
      if (local_24 != 0) goto LAB_101c0501;
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0x32);
      if ((DVar3 == 0) ||
         ((local_30 = local_30 + 1, 199 < local_30 &&
          (((cVar1 = FUN_101bff30(0x8b1,0x60e,0), cVar1 == '\0' &&
            (cVar1 = FUN_101bc540(param_1,0x60f,0), cVar1 == '\0')) ||
           ((799 < local_30 && (cVar1 = FUN_101bc540(param_1,0x618,local_30), cVar1 == '\0'))))))))
      goto LAB_101c06f9;
      if ((*(char *)(param_1 + 0x14) == '\0') || (local_44 = local_44 + 1, local_44 < 0x50))
      goto LAB_101c040d;
      local_44 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      cVar1 = FUN_101bff30(0x8b0,0,0);
      if (cVar1 != '\0') goto LAB_101c040d;
      cVar1 = FUN_101bc540(param_1,0x60f,0);
    }
    else {
LAB_101c0501:
      local_30 = 0;
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),&local_40,0x10,&local_20,(LPOVERLAPPED)0x0);
      if (((BVar2 == 0) || (local_20 == 0)) &&
         (cVar1 = FUN_101bc540(param_1,0x60f,0), cVar1 == '\0')) goto LAB_101c06f9;
      local_24 = local_24 - local_20;
      if (local_38 == 0x60e) goto LAB_101c040d;
      if (local_40 == 0x8b1) {
        if (local_38 == 0x613) {
          if ((0x104 < local_34) ||
             (((BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),(LPVOID)(param_1 + 0x2c),local_34,
                                 &local_20,(LPOVERLAPPED)0x0), BVar2 == 0 || (local_20 == 0)) &&
              (cVar1 = FUN_101bc540(param_1,0x60f,0), cVar1 == '\0')))) goto LAB_101c06f9;
          local_24 = local_24 - local_20;
          goto LAB_101c040d;
        }
        if (local_38 == 0x619) {
          if ((local_34 < 0x11) &&
             (((BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),(LPVOID)(param_1 + 0x18),local_34,
                                 &local_20,(LPOVERLAPPED)0x0), BVar2 != 0 && (local_20 != 0)) ||
              (cVar1 = FUN_101bc540(param_1,0x60f,0), cVar1 != '\0')))) {
            local_24 = local_24 - local_20;
            cVar1 = FUN_101bc540(param_1,local_38,local_34);
            goto joined_r0x101c062f;
          }
          goto LAB_101c06f9;
        }
      }
      if (local_40 == 0x8b2) {
        if (local_38 == 0) {
          *(undefined1 *)(param_1 + 0x14) = 0;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          goto LAB_101c040d;
        }
        if (local_38 != 0x610) goto LAB_101c040d;
        cVar1 = FUN_101bc540(param_1,0x610,0);
      }
      else {
        if (local_40 == 0x8b0) {
          if (*(int *)(param_1 + 0xc) == local_3c) {
            cVar1 = FUN_101bff30(0x8b2,local_38,0);
            if ((cVar1 == '\0') && (cVar1 = FUN_101bc540(param_1,0x60f,0), cVar1 == '\0'))
            goto LAB_101c06f9;
            *(undefined1 *)(param_1 + 0x14) = 1;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
          else {
            cVar1 = FUN_101bc540(param_1,0x60f,0);
            if (cVar1 == '\0') goto LAB_101c06f9;
            *(undefined1 *)(param_1 + 0x14) = 1;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
          goto LAB_101c040d;
        }
        if (local_40 != 0x8b1) goto LAB_101c040d;
        if ((local_38 == 0x610) && (cVar1 = FUN_101bc540(param_1,0x610,0), cVar1 == '\0'))
        goto LAB_101c06f9;
        cVar1 = FUN_101bff30(0x8b2,local_38,local_34);
        if (cVar1 == '\0') {
          cVar1 = FUN_101bc540(param_1,0x60f,0);
        }
        else {
          cVar1 = FUN_101bc540(param_1,local_38,local_34);
        }
      }
    }
joined_r0x101c062f:
    if (cVar1 == '\0') {
LAB_101c06f9:
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        CloseHandle(*(HANDLE *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
      }
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),30000);
      if (((DVar3 == 0) && (local_38 != 0x610)) && (local_38 != 0x60f)) {
        FUN_101bff30(0x8b1,0x610,0);
      }
      ExceptionList = local_14;
      return 0;
    }
  } while( true );
}


// ==== 101c0780 FUN_101c0780

undefined * FUN_101c0780(LPCSTR param_1)

{
  int iVar1;
  char cVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  pCVar3 = param_1;
  iVar4 = lstrlenA(param_1);
  if (iVar4 == 0) {
    return &DAT_103b3060;
  }
  uVar5 = (uint)param_1 & 0xff;
  DAT_103b3061 = (char)param_1;
  DAT_103b3060 = 1;
  param_1._0_1_ = DAT_103b3061 * '\x03' + 0x65;
  iVar6 = 4;
  iVar1 = (uVar5 * 3 + 1) * 3;
  cVar2 = (char)iVar1;
  if (0 < iVar4) {
    do {
      iVar1 = (iVar1 + 1) * 3;
      (&DAT_103b3060)[iVar6] = pCVar3[iVar6 + -4] ^ (char)iVar1 + 0x65U;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (&DAT_103b3060)[iVar6] = 0;
  DAT_103b3062 = (byte)((uint)(iVar6 + -4) >> 8) ^ (byte)param_1;
  DAT_103b3063 = cVar2 + 0x65U ^ (byte)(iVar6 + -4);
  return &DAT_103b3060;
}


// ==== 101c0820 FUN_101c0820

void FUN_101c0820(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\x01') {
    cVar2 = param_1[1] * '\t';
    cVar1 = cVar2 + '\x03';
    param_1[2] = param_1[2] ^ param_1[1] * '\x03' + 0x65U;
    iVar5 = 0;
    bVar4 = param_1[3] ^ cVar2 + 0x68U;
    uVar3 = (uint)CONCAT11(param_1[2],bVar4);
    param_1[3] = bVar4;
    if (uVar3 != 0) {
      do {
        cVar1 = (cVar1 + '\x01') * '\x03';
        param_1[iVar5] = param_1[iVar5 + 4] ^ cVar1 + 0x65U;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar3);
    }
    param_1[uVar3] = '\0';
  }
  return;
}


// ==== 101c0890 FUN_101c0890

char * FUN_101c0890(char *param_1)

{
  char cVar1;
  LPCSTR lpString2;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  byte local_400 [1024];
  
  if ((DAT_103b3058 & 1) == 0) {
    DAT_103b3058 = DAT_103b3058 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_103b2fd8);
    _atexit((_func_4879 *)&LAB_101c0a60);
  }
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_103b2fd8);
  if (*param_1 == '\x01') {
    iVar10 = 0;
    cVar2 = param_1[1] * '\t';
    cVar1 = cVar2 + '\x03';
    param_1[2] = param_1[2] ^ param_1[1] * '\x03' + 0x65U;
    bVar8 = param_1[3] ^ cVar2 + 0x68U;
    uVar6 = (uint)CONCAT11(param_1[2],bVar8);
    param_1[3] = bVar8;
    if (uVar6 != 0) {
      do {
        cVar1 = (cVar1 + '\x01') * '\x03';
        param_1[iVar10] = param_1[iVar10 + 4] ^ cVar1 + 0x65U;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar6);
    }
    param_1[uVar6] = '\0';
  }
  DVar4 = GetCurrentThreadId();
  uVar6 = 1;
  pDVar5 = &DAT_103b2ff4;
  do {
    if (*pDVar5 == DVar4) {
      uVar3 = uVar6;
      if (uVar6 != 0) goto LAB_101c0981;
      break;
    }
    pDVar5 = pDVar5 + 1;
    uVar6 = uVar6 + 1;
    uVar3 = 0;
  } while ((int)pDVar5 < 0x103b3018);
  uVar6 = uVar3;
  if (DAT_103b3460 < 9) {
    uVar6 = DAT_103b3460 + 1;
    DAT_103b3460 = uVar6;
    *(DWORD *)(&DAT_103b2ff0 + uVar6 * 4) = DVar4;
  }
LAB_101c0981:
  lpString2 = (LPCSTR)(&DAT_103b3018)[uVar6];
  (&DAT_103b3018)[uVar6] = param_1;
  if ((((lpString2 != (LPCSTR)0x0) && (lpString2 != param_1)) && (*param_1 != '\x01')) &&
     (*lpString2 != '\x01')) {
    lstrcpyA((LPSTR)local_400,lpString2);
    iVar10 = lstrlenA((LPCSTR)local_400);
    if (iVar10 != 0) {
      *lpString2 = '\x01';
      iVar9 = 4;
      lpString2[1] = '\0';
      iVar7 = 0;
      cVar1 = '\x03';
      if (0 < iVar10) {
        do {
          cVar1 = (cVar1 + '\x01') * '\x03';
          lpString2[iVar9] = local_400[iVar7] ^ cVar1 + 0x65U;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar10);
      }
      lpString2[iVar9] = '\0';
      lpString2[2] = (byte)((uint)(iVar9 + -4) >> 8) ^ 0x65;
      lpString2[3] = (byte)(iVar9 + -4) ^ 0x68;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_103b2fd8);
  return param_1;
}


// ==== 101c0a70 FUN_101c0a70

undefined4 FUN_101c0a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_84;
  char local_80 [64];
  char local_40 [64];
  
  _sprintf(local_80,&DAT_10354458,param_3);
  FUN_101c0ae0(param_1,param_2,local_80,local_40,0x40,param_4);
  local_84 = 0;
  FID_conflict__sscanf(local_40,&DAT_10354458,&local_84);
  return local_84;
}


// ==== 101c0ae0 FUN_101c0ae0

int FUN_101c0ae0(undefined4 param_1,undefined4 param_2,uchar *param_3,uchar *param_4,size_t param_5,
                undefined4 param_6)

{
  uchar uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  uchar local_180 [64];
  uchar local_140 [63];
  uchar auStack_101 [257];
  
  _sprintf((char *)local_140,&DAT_10354460,param_1);
  _sprintf((char *)local_180,&DAT_1035445c,param_2);
  uVar4 = 0xffffffff;
  puVar6 = local_140;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (uVar1 != '\0');
  uVar5 = 0xffffffff;
  puVar6 = local_180;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (uVar1 != '\0');
  pcVar2 = (char *)FUN_101c0c60(param_6,auStack_101 + 1);
  iVar3 = __mbsnbicmp(local_140,auStack_101 + 1,~uVar4 - 1);
  while (iVar3 != 0) {
    if (*pcVar2 == '\0') goto LAB_101c0c35;
    pcVar2 = (char *)FUN_101c0c60(pcVar2,auStack_101 + 1);
    iVar3 = __mbsnbicmp(local_140,auStack_101 + 1,~uVar4 - 1);
  }
  pcVar2 = (char *)FUN_101c0c60(pcVar2,auStack_101 + 1);
  while (auStack_101[1] != '[') {
    iVar3 = __mbsnbicmp(local_180,auStack_101 + 1,~uVar5 - 1);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
      puVar6 = local_180;
      goto code_r0x101c0c27;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = (char *)FUN_101c0c60(pcVar2,auStack_101 + 1);
  }
  goto LAB_101c0c35;
  while( true ) {
    uVar4 = uVar4 - 1;
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    if (uVar1 == '\0') break;
code_r0x101c0c27:
    if (uVar4 == 0) break;
  }
  param_3 = auStack_101 + ~uVar4;
LAB_101c0c35:
  __mbsnbcpy(param_4,param_3,param_5);
  uVar4 = 0xffffffff;
  param_4[param_5 - 1] = '\0';
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    uVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (uVar1 != '\0');
  return ~uVar4 - 1;
}


// ==== 101c0c60 FUN_101c0c60

char * FUN_101c0c60(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    while ((cVar1 != '\r' && (cVar1 != '\n'))) {
      *param_2 = cVar1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
      if ((0xfe < iVar2) || (cVar1 = *param_1, cVar1 == '\0')) break;
    }
  }
  *param_2 = '\0';
  if (*param_1 == '\r') {
    param_1 = param_1 + 1;
  }
  if (*param_1 == '\n') {
    param_1 = param_1 + 1;
  }
  return param_1;
}


// ==== 101c0cc0 FUN_101c0cc0

void FUN_101c0cc0(void)

{
  FUN_101c0cf0();
  return;
}


// ==== 101c0cd0 FUN_101c0cd0

void FUN_101c0cd0(void)

{
  _atexit((_func_4879 *)&LAB_101c0ce0);
  return;
}


// ==== 101c0cf0 FUN_101c0cf0

void FUN_101c0cf0(void)

{
  uint *in_ECX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = 8;
    uVar1 = uVar3;
    do {
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xedb88320;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *in_ECX = uVar1;
    uVar3 = uVar3 + 1;
    in_ECX = in_ECX + 1;
  } while ((int)uVar3 < 0x100);
  return;
}


// ==== 101c0d30 FUN_101c0d30

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_101c0d30(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  int iVar1;
  byte *pbVar2;
  int in_ECX;
  DWORD local_1004;
  byte local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x101c0d3a;
  *param_2 = 0xffffffff;
  if ((param_1 == (LPCSTR)0x0) || (*param_1 == '\0')) {
    *(undefined4 *)(in_ECX + 0x400) = 1;
    return 0;
  }
  hFile = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    *(undefined4 *)(in_ECX + 0x400) = 2;
    return 0;
  }
  iVar1 = ReadFile(hFile,local_1000,0x1000,&local_1004,(LPOVERLAPPED)0x0);
  do {
    if (iVar1 == 0) {
LAB_101c0e0f:
      *(undefined4 *)(in_ECX + 0x400) = 3;
LAB_101c0e19:
      CloseHandle(hFile);
      *param_2 = ~*param_2;
      return 1;
    }
    if (local_1004 == 0) {
      if (iVar1 != 0) goto LAB_101c0e19;
      goto LAB_101c0e0f;
    }
    for (pbVar2 = local_1000; pbVar2 < local_1000 + local_1004; pbVar2 = pbVar2 + 1) {
      *param_2 = *(uint *)(in_ECX + (uint)(byte)((byte)*param_2 ^ *pbVar2) * 4) ^ *param_2 >> 8;
    }
    iVar1 = ReadFile(hFile,local_1000,0x1000,&local_1004,(LPOVERLAPPED)0x0);
  } while( true );
}


// ==== 101c0e50 IMM32.DLL::ImmGetDefaultIMEWnd thunk -> EXTERNAL:000001fc

// ==== 101c0e56 IMM32.DLL::ImmReleaseContext thunk -> EXTERNAL:000001fb

// ==== 101c0e5c IMM32.DLL::ImmGetContext thunk -> EXTERNAL:000001fd

// ==== 101c0e62 IMM32.DLL::ImmAssociateContext thunk -> EXTERNAL:000001f9

// ==== 101c0e68 IMM32.DLL::ImmNotifyIME thunk -> EXTERNAL:000001f8

// ==== 101c0e6e IMM32.DLL::ImmGetIMEFileNameA thunk -> EXTERNAL:000001f7

// ==== 101c0e74 IMM32.DLL::ImmGetCompositionStringW thunk -> EXTERNAL:000001f6

// ==== 101c0e7a IMM32.DLL::ImmGetCandidateListW thunk -> EXTERNAL:000001f5

// ==== 101c0e80 IMM32.DLL::ImmDestroyContext thunk -> EXTERNAL:000001f2

// ==== 101c0e86 IMM32.DLL::ImmSetConversionStatus thunk -> EXTERNAL:000001f3

// ==== 101c0e8c IMM32.DLL::ImmGetConversionStatus thunk -> EXTERNAL:000001fa

// ==== 101c0e92 IMM32.DLL::ImmGetOpenStatus thunk -> EXTERNAL:000001f4

// ==== 101c0e98 VERSION.DLL::VerQueryValueA thunk -> EXTERNAL:00000203

// ==== 101c0e9e VERSION.DLL::GetFileVersionInfoA thunk -> EXTERNAL:000001fe

// ==== 101c0ea4 VERSION.DLL::GetFileVersionInfoSizeA thunk -> EXTERNAL:000001ff

// ==== 101c0eaa VERSION.DLL::VerQueryValueW thunk -> EXTERNAL:00000200

// ==== 101c0eb0 VERSION.DLL::GetFileVersionInfoW thunk -> EXTERNAL:00000201

// ==== 101c0eb6 VERSION.DLL::GetFileVersionInfoSizeW thunk -> EXTERNAL:00000202

// ==== 101c0ebc WS2_32.DLL::WSAGetLastError thunk -> EXTERNAL:00000204

// ==== 101c0ec2 WS2_32.DLL::connect thunk -> EXTERNAL:00000205

// ==== 101c0ec8 WS2_32.DLL::htons thunk -> EXTERNAL:00000206

// ==== 101c0ece WS2_32.DLL::gethostbyname thunk -> EXTERNAL:00000207

// ==== 101c0ed4 WS2_32.DLL::inet_addr thunk -> EXTERNAL:00000208

// ==== 101c0eda WS2_32.DLL::socket thunk -> EXTERNAL:00000209

// ==== 101c0ee0 WS2_32.DLL::WSAStartup thunk -> EXTERNAL:0000020a

// ==== 101c0ee6 WS2_32.DLL::recv thunk -> EXTERNAL:0000020b

// ==== 101c0eec WS2_32.DLL::send thunk -> EXTERNAL:0000020c

// ==== 101c0ef2 WS2_32.DLL::WSAAsyncSelect thunk -> EXTERNAL:0000020d

// ==== 101c0ef8 WS2_32.DLL::htonl thunk -> EXTERNAL:0000020e

// ==== 101c0efe WS2_32.DLL::closesocket thunk -> EXTERNAL:0000020f

// ==== 101c0f0f FUN_101c0f0f

void FUN_101c0f0f(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = std::out_of_range::vftable;
  FUN_10022d50();
  if ((param_1 & 1) != 0) {
    FUN_10024ca0();
  }
  return;
}


// ==== 101c0f31 FUN_101c0f31

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_101c0f31(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x101c0f3d;
  FUN_10023410("string too long");
  local_8 = 0;
  FUN_100231a0(local_2c);
  local_54[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_102ae3b8);
}


// ==== 101c0f70 FUN_101c0f70

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_101c0f70(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x101c0f7c;
  FUN_10023410("invalid string position");
  local_8 = 0;
  FUN_100231a0(local_2c);
  local_54[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_10320ac4);
}


// ==== 101c0fd0 _com_issue_error

/* Library Function - Single Match
    void __stdcall _com_issue_error(long)
   
   Library: Visual Studio 2005 Release */

void _com_issue_error(long param_1)

{
  (*(code *)PTR_FUN_10355490)(param_1,0);
  return;
}


// ==== 101c0fe0 _com_issue_errorex

/* Library Function - Single Match
    void __stdcall _com_issue_errorex(long,struct IUnknown *,struct _GUID const &)
   
   Library: Visual Studio 2005 Release */

void _com_issue_errorex(long param_1,IUnknown *param_2,_GUID *param_3)

{
  HRESULT HVar1;
  void **unaff_ESI;
  IErrorInfo *local_4;
  
  local_4 = (IErrorInfo *)0x0;
  if (param_2 != (IUnknown *)0x0) {
    HVar1 = (*param_2->lpVtbl->QueryInterface)(param_2,(IID *)&DAT_1029a870,&param_2);
    if (-1 < HVar1) {
      HVar1 = (*param_2->lpVtbl[1].QueryInterface)(param_2,param_3,unaff_ESI);
      (**(code **)(param_3->Data1 + 8))(param_3);
      if (HVar1 == 0) {
        HVar1 = GetErrorInfo(0,&local_4);
        if (HVar1 != 0) {
          local_4 = (IErrorInfo *)0x0;
        }
      }
    }
  }
  (*(code *)PTR_FUN_10355490)(param_1,local_4);
  return;
}


// ==== 101c1060 ConvertStringToBSTR

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Multiple Matches With Same Base Name
    unsigned short * __stdcall _com_util::ConvertStringToBSTR(char const *)
    wchar_t * __stdcall _com_util::ConvertStringToBSTR(char const *)
   
   Library: Visual Studio 2005 Release */

void ConvertStringToBSTR(LPCSTR param_1)

{
  uint uVar1;
  int iVar2;
  int cchWideChar;
  DWORD DVar3;
  OLECHAR *lpWideCharStr;
  BSTR pOVar4;
  uint local_3c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_103554c4 ^ 0x10320b30;
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_14;
  local_3c = uVar1;
  if (param_1 == (LPCSTR)0x0) goto LAB_101c11c0;
  iVar2 = lstrlenA(param_1);
  cchWideChar = MultiByteToWideChar(0,0,param_1,iVar2 + 1,(LPWSTR)0x0,0);
  if (cchWideChar != 0) {
    local_8 = 0;
    if (cchWideChar < 0x1000) {
      lpWideCharStr = (OLECHAR *)&local_3c;
    }
    else {
      lpWideCharStr = _malloc(cchWideChar * 2);
    }
    local_8 = 0xfffffffe;
    if (lpWideCharStr == (OLECHAR *)0x0) {
      _com_issue_error(-0x7ff8fff2);
      goto LAB_101c11c0;
    }
    iVar2 = MultiByteToWideChar(0,0,param_1,iVar2 + 1,lpWideCharStr,cchWideChar);
    if (iVar2 != 0) {
      pOVar4 = SysAllocString(lpWideCharStr);
      if (0xfff < cchWideChar) {
        _free(lpWideCharStr);
      }
      if (pOVar4 == (BSTR)0x0) {
        _com_issue_error(-0x7ff8fff2);
      }
      goto LAB_101c11c0;
    }
    if (0xfff < cchWideChar) {
      _free(lpWideCharStr);
    }
  }
  DVar3 = GetLastError();
  if ((int)DVar3 < 1) {
    DVar3 = GetLastError();
    _com_issue_error(DVar3);
  }
  else {
    DVar3 = GetLastError();
    _com_issue_error(DVar3 & 0xffff | 0x80070000);
  }
LAB_101c11c0:
  ExceptionList = local_14;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101c11f0 FUN_101c11f0

void FUN_101c11f0(void)

{
  int *piVar1;
  HANDLE hHeap;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  *in_ECX = _com_error::vftable;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (in_ECX[3] != 0) {
    hHeap = GetProcessHeap();
    if (hHeap != (HANDLE)0x0) {
      HeapFree(hHeap,0,(LPVOID)in_ECX[3]);
    }
  }
  return;
}


// ==== 101c1230 FUN_101c1230

void FUN_101c1230(undefined4 param_1,undefined4 param_2)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _com_error::vftable;
  local_c = param_1;
  local_8 = param_2;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10,&DAT_10320b4c);
}


// ==== 101c12b0 FUN_101c12b0

void FUN_101c12b0(byte param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[2];
  *in_ECX = _com_error::vftable;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (in_ECX[3] != 0) {
    hHeap = GetProcessHeap();
    if (hHeap != (HANDLE)0x0) {
      HeapFree(hHeap,0,(LPVOID)in_ECX[3]);
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_10024ca0();
  }
  return;
}


// ==== 101c12fb _JumpToContinuation

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x101c1324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// ==== 101c132b FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x101c1330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 101c1332 _UnwindNestedFrames

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x101c135b,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// ==== 101c1384 FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4
FID_conflict____CxxFrameHandler3
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler(param_1,param_2,param_3,param_4);
  return uVar1;
}


// ==== 101c13ea _CallSETranslator

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
    *(undefined4 *)param_2 = 0x101c1493;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_103554c4 ^ (uint)&local_2c;
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


// ==== 101c14bf TranslatorGuardHandler

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
            (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x101c1554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}


// ==== 101c155c _GetRangeOfTrysToCheck

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


// ==== 101c15cf __CreateFrameInfo

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}


// ==== 101c15f7 __IsExceptionObjectToBeDestroyed

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __IsExceptionObjectToBeDestroyed(int param_1)

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


// ==== 101c1618 __FindAndUnlinkFrame

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __FindAndUnlinkFrame(void *param_1)

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


// ==== 101c1664 _CallCatchBlock2

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
  
  local_14 = DAT_103554c4 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_101c13ba;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


// ==== 101c16c2 __security_check_cookie

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_103554c4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 101c16d1 __cfltcvt_init

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_103555a0 = __cfltcvt;
  PTR_LAB_103555a4 = &LAB_101c6d69;
  PTR_LAB_103555a8 = &LAB_101c6d27;
  PTR_LAB_103555ac = &LAB_101c6d5b;
  PTR_LAB_103555b0 = &LAB_101c6cd1;
  PTR_LAB_103555b4 = __cfltcvt;
  PTR_LAB_103555b8 = __cfltcvt_l;
  PTR_LAB_103555bc = __fassign_l;
  PTR_LAB_103555c0 = __cropzeros_l;
  PTR_LAB_103555c4 = __forcdecpt_l;
  return;
}


// ==== 101c1731 __fpmath

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_103b3974 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


// ==== 101c174f __CxxThrowException@8

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
  
  pDVar2 = &DAT_1029a894;
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


// ==== 101c1799 type_info::~type_info

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}


// ==== 101c17a7 type_info::`scalar_deleting_destructor'

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_10024ca0(this);
  }
  return this;
}


// ==== 101c17c3 type_info::operator==

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 101c17de FUN_101c17de

undefined4 FUN_101c17de(undefined4 param_1)

{
  uint uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  undefined4 uVar6;
  
  _Memory = (undefined4 *)FUN_101c64b3(DAT_103b56d4);
  puVar2 = (undefined4 *)FUN_101c64b3(DAT_103b56d0);
  if (_Memory <= puVar2) {
    uVar1 = ((int)puVar2 - (int)_Memory) + 4;
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
        puVar2 = (undefined4 *)((int)pvVar5 + ((int)puVar2 - (int)_Memory >> 2) * 4);
        DAT_103b56d4 = FUN_101c643c(pvVar5);
      }
      uVar6 = FUN_101c643c(param_1);
      *puVar2 = uVar6;
      DAT_103b56d0 = FUN_101c643c(puVar2 + 1);
      return param_1;
    }
  }
  return 0;
}


// ==== 101c18c6 __onexit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_101c7a5d();
  p_Var1 = (_onexit_t)FUN_101c17de(_Func);
  FUN_101c18fc();
  return p_Var1;
}


// ==== 101c18fc FUN_101c18fc

void FUN_101c18fc(void)

{
  FUN_101c7a66();
  return;
}


// ==== 101c1902 _atexit

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// ==== 101c1914 __ArrayUnwind

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


// ==== 101c1972 `eh_vector_destructor_iterator'

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
  FUN_101c19bd();
  return;
}


// ==== 101c19bd FUN_101c19bd

void FUN_101c19bd(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// ==== 101c19e0 FUN_101c19e0

ulonglong FUN_101c19e0(void)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 in_EDX;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_103b56c8 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(in_EDX,(int)in_ST0);
}


// ==== 101c1a16 FUN_101c1a16

ulonglong FUN_101c1a16(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}


// ==== 101c1a8b xtow

/* Library Function - Single Match
    _xtow@16
   
   Library: Visual Studio 2005 Release
   __stdcall xtow,16 */

void xtow(uint param_1,int param_2)

{
  short *psVar1;
  uint in_EAX;
  uint uVar2;
  short *in_ECX;
  short *psVar3;
  short sVar4;
  
  psVar1 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = 0x2d;
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    psVar1 = in_ECX;
  }
  do {
    psVar3 = psVar1;
    uVar2 = in_EAX / param_1;
    sVar4 = (short)(in_EAX % param_1);
    if (in_EAX % param_1 < 10) {
      sVar4 = sVar4 + 0x30;
    }
    else {
      sVar4 = sVar4 + 0x57;
    }
    *psVar3 = sVar4;
    in_EAX = uVar2;
    psVar1 = psVar3 + 1;
  } while (uVar2 != 0);
  psVar3[1] = 0;
  do {
    sVar4 = *psVar3;
    *psVar3 = *in_ECX;
    *in_ECX = sVar4;
    psVar3 = psVar3 + -1;
    in_ECX = in_ECX + 1;
  } while (in_ECX < psVar3);
  return;
}


// ==== 101c1ad9 __itow

/* Library Function - Single Match
    __itow
   
   Library: Visual Studio 2005 Release */

wchar_t * __cdecl __itow(int _Value,wchar_t *_Dest,int _Radix)

{
  undefined4 uVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar1 = 1;
    _Radix = 10;
  }
  else {
    uVar1 = 0;
  }
  xtow(_Radix,uVar1);
  return _Dest;
}


// ==== 101c1b01 FUN_101c1b01

void FUN_101c1b01(wchar_t *param_1)

{
  _wcstol(param_1,(wchar_t **)0x0,10);
  return;
}


// ==== 101c1b12 thunk_FUN_101c1b01 thunk -> 101c1b01

// ==== 101c1b17 FUN_101c1b17

longlong FUN_101c1b17(wchar_t *param_1)

{
  longlong lVar1;
  
  lVar1 = __wcstoi64(param_1,(wchar_t **)0x0,10);
  return lVar1;
}


// ==== 101c1b28 __vswprintf_l

/* Library Function - Single Match
    __vswprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vswprintf_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,va_list _Ap)

{
  undefined4 *puVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Count == 0) || (_String == (wchar_t *)0x0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = (char *)_String;
    local_24._ptr = (char *)_String;
    local_24._flag = 0x42;
    local_24._cnt = 0x7fffffff;
    iVar2 = FUN_101c82d7(&local_24,_Count,_Format,_Plocinfo);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = 0;
      local_24._ptr = (char *)((int)local_24._ptr + 1);
    }
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = 0;
    }
  }
  return iVar2;
}


// ==== 101c1bbf __vswprintf

/* Library Function - Single Match
    __vswprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __vswprintf(wchar_t *_Dest,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  va_list unaff_retaddr;
  
  iVar1 = __vswprintf_l(_Dest,(size_t)_Format,(wchar_t *)0x0,(_locale_t)_Args,unaff_retaddr);
  return iVar1;
}


// ==== 101c1bd6 FUN_101c1bd6

int FUN_101c1bd6(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (int)in_ECX - *(int *)(*(int *)(*in_ECX + -4) + 4);
  iVar1 = *(int *)(*(int *)(*in_ECX + -4) + 8);
  if (iVar1 != 0) {
    iVar2 = iVar2 - *(int *)((int)in_ECX - iVar1);
  }
  return iVar2;
}


// ==== 101c1bec FindSITargetTypeInstance

/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindSITargetTypeInstance(struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,struct TypeDescriptor *)
   
   Library: Visual Studio 2005 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindSITargetTypeInstance
          (_s_RTTICompleteObjectLocator *param_1,TypeDescriptor *param_2,TypeDescriptor *param_3)

{
  uint uVar1;
  int iVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  int *piVar4;
  _s_RTTICompleteObjectLocator *p_Var5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  uVar7 = 0;
  iVar2 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  if (uVar1 != 0) {
    do {
      p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar2 + uVar7 * 4);
      if ((*(TypeDescriptor **)p_Var3 == param_2) ||
         (iVar6 = _strcmp((char *)(*(TypeDescriptor **)p_Var3 + 1),(char *)(param_2 + 1)),
         iVar6 == 0)) {
        do {
          uVar7 = uVar7 + 1;
          if (uVar1 <= uVar7) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          piVar4 = *(int **)(iVar2 + uVar7 * 4);
          if ((*(byte *)(piVar4 + 5) & 4) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          p_Var5 = (_s_RTTICompleteObjectLocator *)*piVar4;
          if (p_Var5 == param_1) {
            return p_Var3;
          }
          iVar6 = _strcmp((char *)(p_Var5 + 8),(char *)(param_1 + 8));
        } while (iVar6 != 0);
        return p_Var3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}


// ==== 101c1c61 PMDtoOffset

/* Library Function - Single Match
    int __cdecl PMDtoOffset(void *,struct PMD const &)
   
   Library: Visual Studio 2005 Release */

int __cdecl PMDtoOffset(void *param_1,PMD *param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = in_EAX[1];
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1 + *(int *)(*(int *)(iVar1 + (int)param_1) + in_EAX[2]);
  }
  return *in_EAX + iVar2;
}


// ==== 101c1c80 FindMITargetTypeInstance

/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2005 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor _Var1;
  uint uVar2;
  int iVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  int in_EAX;
  int iVar5;
  TypeDescriptor *pTVar6;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *local_18;
  _s_RTTIBaseClassDescriptor *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0xffffffff;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  iVar3 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_14 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_10 = 0;
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      p_Var4 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + local_8 * 4);
      if ((local_10 < local_8 - local_c) &&
         ((*(int *)p_Var4 == param_4 ||
          (iVar5 = _strcmp((char *)(*(int *)p_Var4 + 8),(char *)(param_4 + 8)), iVar5 == 0)))) {
        local_14 = p_Var4;
        if (local_18 != (_s_RTTIBaseClassDescriptor *)0x0) {
          if (((byte)p_Var4[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          _Var1 = local_18[0x14];
          goto joined_r0x101c1d37;
        }
        local_c = local_8;
        local_10 = *(uint *)(p_Var4 + 4);
      }
      if ((((*(_s_RTTICompleteObjectLocator **)p_Var4 == param_2) ||
           (iVar5 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var4 + 8),
                            (char *)(param_2 + 8)), iVar5 == 0)) &&
          (pTVar6 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar6 == param_3)) &&
         (local_18 = p_Var4, local_14 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        if (local_10 < local_8 - local_c) {
          if (((byte)local_14[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
        else {
          if (((byte)local_14[0x14] & 0x40) != 0) {
            return (_s_RTTIBaseClassDescriptor *)
                   ((uint)local_14 &
                   ~-(uint)((*(byte *)(*(int *)(*(int *)(*(int *)(local_14 + 0x18) + 0xc) +
                                               (local_8 - local_c) * 4) + 0x14) & 1) != 0));
          }
          if (local_c != 0) {
            return local_14;
          }
        }
        _Var1 = p_Var4[0x14];
joined_r0x101c1d37:
        if (((byte)_Var1 & 1) != 0) {
          return (_s_RTTIBaseClassDescriptor *)0x0;
        }
        return local_14;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}


// ==== 101c1d82 FindVITargetTypeInstance

/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindVITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2005 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindVITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  int iVar1;
  uint uVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *p_Var10;
  bool bVar11;
  _s_RTTIBaseClassDescriptor *local_24;
  _s_RTTIBaseClassDescriptor *local_20;
  int local_1c;
  _s_RTTIBaseClassDescriptor *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_10 = 0xffffffff;
  local_1c = -1;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  p_Var10 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_20 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_24 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_14 = 0;
  bVar5 = true;
  local_c = 0;
  if (uVar2 != 0) {
    do {
      p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar1 + local_c * 4);
      if ((local_14 < local_c - local_10) &&
         ((*(int *)p_Var3 == param_4 ||
          (iVar7 = _strcmp((char *)(*(int *)p_Var3 + 8),(char *)(param_4 + 8)), iVar7 == 0)))) {
        if (((byte)p_Var3[0x14] & 3) == 0) {
          local_24 = p_Var3;
        }
        local_10 = local_c;
        local_14 = *(uint *)(p_Var3 + 4);
        p_Var10 = p_Var3;
      }
      iVar7 = local_1c;
      if (((*(_s_RTTICompleteObjectLocator **)p_Var3 == param_2) ||
          (iVar8 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var3 + 8),
                           (char *)(param_2 + 8)), iVar8 == 0)) &&
         (pTVar9 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar9 == param_3)) {
        if (local_14 < local_c - local_10) {
          if (((byte)p_Var3[0x14] & 5) == 0) {
            local_20 = p_Var3;
          }
        }
        else if (bVar5) {
          if (((byte)p_Var10[0x14] & 0x40) == 0) {
            if ((local_10 == 0) && (((byte)p_Var3[0x14] & 1) != 0)) {
              bVar5 = false;
            }
            bVar6 = 1;
          }
          else {
            uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(p_Var10 + 0x18) + 0xc) +
                                      (local_c - local_10) * 4) + 0x14);
            if ((uVar4 & 1) != 0) {
              bVar5 = false;
            }
            bVar6 = ~(byte)(uVar4 >> 2) & 1;
          }
          if (((bVar5) && (bVar6 != 0)) &&
             ((iVar7 = PMDtoOffset(param_1,unaff_EDI),
              bVar11 = local_18 != (_s_RTTIBaseClassDescriptor *)0x0, local_18 = p_Var10, bVar11 &&
              (local_1c != iVar7)))) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
      }
      local_1c = iVar7;
      local_c = local_c + 1;
    } while (local_c < uVar2);
    if ((bVar5) && (local_18 != (_s_RTTIBaseClassDescriptor *)0x0)) {
      return local_18;
    }
    if ((local_20 != (_s_RTTIBaseClassDescriptor *)0x0) &&
       (local_24 != (_s_RTTIBaseClassDescriptor *)0x0)) {
      return local_24;
    }
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}


// ==== 101c1ed6 FUN_101c1ed6

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_101c1ed6(int *param_1,int param_2,_s_RTTICompleteObjectLocator *param_3,
                TypeDescriptor *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  TypeDescriptor *pTVar5;
  PMD *in_stack_ffffffc4;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x101c1ee2;
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    local_8 = 0;
    pvVar3 = (void *)FUN_101c1bd6();
    pTVar5 = (TypeDescriptor *)((int)param_1 + (-(int)pvVar3 - param_2));
    uVar1 = *(uint *)(*(int *)(*(int *)(*param_1 + -4) + 0x10) + 4);
    if ((uVar1 & 1) == 0) {
      p_Var4 = FindSITargetTypeInstance(param_3,param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    else if ((uVar1 & 2) == 0) {
      p_Var4 = FindMITargetTypeInstance
                         (pvVar3,param_3,pTVar5,(int)param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    else {
      p_Var4 = FindVITargetTypeInstance
                         (pvVar3,param_3,pTVar5,(int)param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    if (p_Var4 == (_s_RTTIBaseClassDescriptor *)0x0) {
      iVar2 = 0;
      local_20 = 0;
      if (param_5 != 0) {
        FUN_101c215b("Bad dynamic_cast!");
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_2c,&DAT_10320c34);
      }
    }
    else {
      iVar2 = PMDtoOffset(pvVar3,in_stack_ffffffc4);
      iVar2 = iVar2 + (int)pvVar3;
    }
  }
  return iVar2;
}


// ==== 101c1fab _memcpy_s

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  undefined4 *puVar2;
  
  if (_MaxCount == 0) {
LAB_101c1fb9:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_101c1fc2:
      puVar2 = (undefined4 *)FUN_101c8c22();
      eVar1 = 0x16;
      *puVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_101c1fb9;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_101c1fc2;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      puVar2 = (undefined4 *)FUN_101c8c22();
      eVar1 = 0x22;
      *puVar2 = 0x22;
    }
    FUN_101c2369(0,0,0,0,0);
  }
  return eVar1;
}


// ==== 101c2026 _memmove_s

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  undefined4 *puVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_101c207b:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      puVar1 = (undefined4 *)FUN_101c8c22();
      eVar2 = 0x16;
      *puVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_101c207b;
      }
      puVar1 = (undefined4 *)FUN_101c8c22();
      eVar2 = 0x22;
      *puVar1 = 0x22;
    }
    FUN_101c2369(0,0,0,0,0);
  }
  return eVar2;
}


// ==== 101c2081 FUN_101c2081

void FUN_101c2081(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = std::exception::vftable;
  return;
}


// ==== 101c2092 std::exception::exception

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


// ==== 101c20e0 std::exception::exception

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}


// ==== 101c2138 exception::~exception

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


// ==== 101c214e FUN_101c214e

char * FUN_101c214e(void)

{
  char *pcVar1;
  int in_ECX;
  
  pcVar1 = *(char **)(in_ECX + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


// ==== 101c215b FUN_101c215b

void FUN_101c215b(void)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,(char **)&stack0x00000004);
  *(undefined ***)in_ECX = std::bad_cast::vftable;
  return;
}


// ==== 101c2203 FUN_101c2203

void FUN_101c2203(byte param_1)

{
  exception *in_ECX;
  
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10024ca0();
  }
  return;
}


// ==== 101c221f FUN_101c221f

void FUN_101c221f(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = std::bad_cast::vftable;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10024ca0();
  }
  return;
}


// ==== 101c2241 FUN_101c2241

void FUN_101c2241(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = std::bad_typeid::vftable;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10024ca0();
  }
  return;
}


// ==== 101c2263 FUN_101c2263

void FUN_101c2263(undefined4 param_1)

{
  DAT_103b3978 = param_1;
  return;
}


// ==== 101c226d __invoke_watson

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  undefined4 uVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  uVar1 = DAT_103554c4;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_101c8ccb(2);
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(uVar1);
  return;
}


// ==== 101c2369 FUN_101c2369

void FUN_101c2369(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_101c64b3(DAT_103b3978);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101c237d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_101c8ccb(2);
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 101c238d FUN_101c238d

void FUN_101c238d(void)

{
  FUN_101c2369(0,0,0,0,0);
  return;
}


// ==== 101c239d _atol

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}


// ==== 101c23ae _atol thunk -> 101c239d

// ==== 101c23c0 _memcpy

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_101c25a3_caseD_2;
        case 3:
          goto switchD_101c25a3_caseD_3;
        }
        goto switchD_101c25a3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_101c25a3_caseD_0;
      case 1:
        goto switchD_101c25a3_caseD_1;
      case 2:
        goto switchD_101c25a3_caseD_2;
      case 3:
        goto switchD_101c25a3_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
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
              return _Dst;
            case 2:
              goto switchD_101c25a3_caseD_2;
            case 3:
              goto switchD_101c25a3_caseD_3;
            }
            goto switchD_101c25a3_caseD_1;
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
              return _Dst;
            case 2:
              goto switchD_101c25a3_caseD_2;
            case 3:
              goto switchD_101c25a3_caseD_3;
            }
            goto switchD_101c25a3_caseD_1;
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
              return _Dst;
            case 2:
              goto switchD_101c25a3_caseD_2;
            case 3:
              goto switchD_101c25a3_caseD_3;
            }
            goto switchD_101c25a3_caseD_1;
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
switchD_101c25a3_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_101c25a3_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_101c25a3_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_101c25a3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_103b56c8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_101c241c_caseD_2;
      case 3:
        goto switchD_101c241c_caseD_3;
      }
      goto switchD_101c241c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_101c241c_caseD_0;
    case 1:
      goto switchD_101c241c_caseD_1;
    case 2:
      goto switchD_101c241c_caseD_2;
    case 3:
      goto switchD_101c241c_caseD_3;
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
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_101c241c_caseD_2;
          case 3:
            goto switchD_101c241c_caseD_3;
          }
          goto switchD_101c241c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_101c241c_caseD_2;
          case 3:
            goto switchD_101c241c_caseD_3;
          }
          goto switchD_101c241c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_101c241c_caseD_2;
          case 3:
            goto switchD_101c241c_caseD_3;
          }
          goto switchD_101c241c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_101c241c_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_101c241c_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_101c241c_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_101c241c_caseD_0:
  return _Dst;
}


// ==== 101c2730 __alloca_probe

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


// ==== 101c2760 __allmul

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2005 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


// ==== 101c27a0 __alldiv

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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


// ==== 101c2850 _memmove

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_101c2a33_caseD_2;
        case 3:
          goto switchD_101c2a33_caseD_3;
        }
        goto switchD_101c2a33_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_101c2a33_caseD_0;
      case 1:
        goto switchD_101c2a33_caseD_1;
      case 2:
        goto switchD_101c2a33_caseD_2;
      case 3:
        goto switchD_101c2a33_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
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
              return _Dst;
            case 2:
              goto switchD_101c2a33_caseD_2;
            case 3:
              goto switchD_101c2a33_caseD_3;
            }
            goto switchD_101c2a33_caseD_1;
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
              return _Dst;
            case 2:
              goto switchD_101c2a33_caseD_2;
            case 3:
              goto switchD_101c2a33_caseD_3;
            }
            goto switchD_101c2a33_caseD_1;
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
              return _Dst;
            case 2:
              goto switchD_101c2a33_caseD_2;
            case 3:
              goto switchD_101c2a33_caseD_3;
            }
            goto switchD_101c2a33_caseD_1;
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
switchD_101c2a33_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_101c2a33_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_101c2a33_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_101c2a33_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_103b56c8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)__VEC_memcpy();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_101c28ac_caseD_2;
      case 3:
        goto switchD_101c28ac_caseD_3;
      }
      goto switchD_101c28ac_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_101c28ac_caseD_0;
    case 1:
      goto switchD_101c28ac_caseD_1;
    case 2:
      goto switchD_101c28ac_caseD_2;
    case 3:
      goto switchD_101c28ac_caseD_3;
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
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_101c28ac_caseD_2;
          case 3:
            goto switchD_101c28ac_caseD_3;
          }
          goto switchD_101c28ac_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_101c28ac_caseD_2;
          case 3:
            goto switchD_101c28ac_caseD_3;
          }
          goto switchD_101c28ac_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_101c28ac_caseD_2;
          case 3:
            goto switchD_101c28ac_caseD_3;
          }
          goto switchD_101c28ac_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_101c28ac_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_101c28ac_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_101c28ac_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_101c28ac_caseD_0:
  return _Dst;
}


// ==== 101c2bb5 `eh_vector_constructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_101c2c02();
  return;
}


// ==== 101c2c02 FUN_101c2c02

void FUN_101c2c02(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


// ==== 101c2c1a _rand

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


// ==== 101c2c3c _LocaleUpdate::_LocaleUpdate

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
    if ((*(undefined **)this != PTR_DAT_10355d58) && ((p_Var2->_ownlocale & DAT_10355c74) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10355b78) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10355c74) == 0)) {
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


// ==== 101c2cbe __mbstowcs_l_helper

/* Library Function - Single Match
    __mbstowcs_l_helper
   
   Library: Visual Studio 2005 Release */

uint __mbstowcs_l_helper(LPWSTR param_1,byte *param_2,uint param_3,localeinfo_struct *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD DVar4;
  size_t sVar5;
  byte *pbVar6;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != (LPWSTR)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    if (param_3 != 0) {
      *param_1 = L'\0';
    }
  }
  if ((param_2 == (byte *)0x0) || (0x7fffffff < param_3)) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    return 0xffffffff;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_4);
  if (param_1 == (LPWSTR)0x0) {
    if ((local_18.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      sVar5 = _strlen((char *)param_2);
      goto LAB_101c2e35;
    }
    iVar3 = MultiByteToWideChar((local_18.locinfo)->lc_codepage,9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)FUN_101c8c22();
      *puVar2 = 0x2a;
      goto LAB_101c2e23;
    }
  }
  else {
    if ((local_18.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      if (param_3 != 0) {
        do {
          *param_1 = (ushort)param_2[local_8];
          if (param_2[local_8] == 0) {
            if (local_c != '\0') {
              *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
              return local_8;
            }
            return local_8;
          }
          local_8 = local_8 + 1;
          param_1 = param_1 + 1;
        } while (local_8 < param_3);
      }
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      return local_8;
    }
    iVar3 = MultiByteToWideChar((local_18.locinfo)->lc_codepage,9,(LPCSTR)param_2,-1,param_1,param_3
                               );
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      pbVar6 = param_2;
      uVar1 = param_3;
      if (DVar4 == 0x7a) {
        while (uVar1 != 0) {
          if (*pbVar6 == 0) break;
          iVar3 = __isleadbyte_l((uint)*pbVar6,&local_18);
          if ((iVar3 != 0) && (pbVar6 = pbVar6 + 1, *pbVar6 == 0)) goto LAB_101c2de6;
          pbVar6 = pbVar6 + 1;
          uVar1 = uVar1 - 1;
        }
        sVar5 = MultiByteToWideChar((local_18.locinfo)->lc_codepage,1,(LPCSTR)param_2,
                                    (int)pbVar6 - (int)param_2,param_1,param_3);
        if (sVar5 != 0) goto LAB_101c2e35;
      }
LAB_101c2de6:
      puVar2 = (undefined4 *)FUN_101c8c22();
      *puVar2 = 0x2a;
      *param_1 = L'\0';
LAB_101c2e23:
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      return 0xffffffff;
    }
  }
  sVar5 = iVar3 - 1;
LAB_101c2e35:
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    return sVar5;
  }
  return sVar5;
}


// ==== 101c2e46 _mbstowcs

/* Library Function - Single Match
    _mbstowcs
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _mbstowcs(wchar_t *_Dest,char *_Source,size_t _MaxCount)

{
  size_t sVar1;
  undefined **ppuVar2;
  
  if (DAT_103b3d3c == 0) {
    ppuVar2 = &PTR_DAT_10355d60;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  sVar1 = __mbstowcs_l_helper(_Dest,_Source,_MaxCount,ppuVar2);
  return sVar1;
}


// ==== 101c2e6e __snprintf

/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_Count < 0x80000000) {
      local_24._cnt = _Count;
    }
    local_24._flag = 0x42;
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    iVar2 = FUN_101c9b39(&local_24,_Format,0,&stack0x00000010);
    if (_Dest != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 101c2f1b __wcstombs_l_helper

/* Library Function - Single Match
    __wcstombs_l_helper
   
   Library: Visual Studio 2005 Release */

void __wcstombs_l_helper(LPSTR param_1,LPCWSTR param_2,uint param_3,localeinfo_struct *param_4)

{
  char cVar1;
  WCHAR WVar2;
  undefined4 *puVar3;
  LPCWSTR pWVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  LPCWSTR local_30;
  uint local_28;
  int local_24 [2];
  int local_1c;
  char local_18;
  BOOL local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_30 = param_2;
  local_28 = 0;
  local_14 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) goto LAB_101c30a4;
  if ((param_2 == (LPCWSTR)0x0) || (0x7fffffff < param_3)) {
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    goto LAB_101c30a4;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_24,param_4);
  if (param_1 == (LPSTR)0x0) {
    if (*(int *)(local_24[0] + 0x14) == 0) {
      FUN_101c4794(param_2);
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  &local_14);
      if ((iVar5 == 0) || (local_14 != 0)) goto LAB_101c308a;
    }
LAB_101c2fd9:
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if (*(int *)(local_24[0] + 0x14) == 0) {
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*param_2) goto LAB_101c308a;
          param_1[local_28] = (CHAR)*param_2;
          WVar2 = *param_2;
          param_2 = param_2 + 1;
          if (WVar2 == L'\0') goto LAB_101c2fd9;
          local_28 = local_28 + 1;
        } while (local_28 < param_3);
      }
      if (local_18 != '\0') {
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
      }
      goto LAB_101c30a4;
    }
    if (*(int *)(local_24[0] + 0xac) == 1) {
      pWVar4 = param_2;
      uVar8 = param_3;
      if (param_3 != 0) {
        do {
          if (*pWVar4 == L'\0') break;
          pWVar4 = pWVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((uVar8 != 0) && (*pWVar4 == L'\0')) {
          param_3 = ((int)pWVar4 - (int)param_2 >> 1) + 1;
        }
      }
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,param_3,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) {
joined_r0x101c306c:
        if (local_14 == 0) goto LAB_101c2fd9;
      }
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) goto joined_r0x101c306c;
      if (local_14 == 0) {
        DVar6 = GetLastError();
        uVar8 = 0;
        if (DVar6 == 0x7a) {
          while (uVar8 < param_3) {
            uVar7 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,local_30,1,local_10,
                                        *(int *)(local_24[0] + 0xac),(LPCSTR)0x0,&local_14);
            if ((((uVar7 == 0) || (local_14 != 0)) || ((int)uVar7 < 0)) || (5 < uVar7))
            goto LAB_101c308a;
            if (param_3 < uVar7 + uVar8) break;
            iVar5 = 0;
            if (0 < (int)uVar7) {
              do {
                cVar1 = local_10[iVar5];
                param_1[uVar8] = cVar1;
                if (cVar1 == '\0') goto LAB_101c3112;
                iVar5 = iVar5 + 1;
                uVar8 = uVar8 + 1;
              } while (iVar5 < (int)uVar7);
            }
            local_30 = local_30 + 1;
          }
LAB_101c3112:
          if (local_18 != '\0') {
            *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
          }
          goto LAB_101c30a4;
        }
      }
    }
LAB_101c308a:
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x2a;
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
  }
LAB_101c30a4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101c3161 _wcstombs

/* Library Function - Single Match
    _wcstombs
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _wcstombs(char *_Dest,wchar_t *_Source,size_t _MaxCount)

{
  size_t sVar1;
  
  sVar1 = __wcstombs_l_helper(_Dest,_Source,_MaxCount,0);
  return sVar1;
}


// ==== 101c3178 __purecall

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_101c64b3(DAT_103b407c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_101ca5de(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 101c31a2 `eh_vector_copy_constructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,int,void
   (__thiscall*)(void *,void *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,int param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
    (*param_5)(param_2,in_stack_ffffffcc);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_101c31f3();
  return;
}


// ==== 101c31f3 FUN_101c31f3

void FUN_101c31f3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}


// ==== 101c320b __wcsicmp_l

/* Library Function - Single Match
    __wcsicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wint_t wVar3;
  wint_t wVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (wchar_t *)0x0) {
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar6 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      do {
        wVar1 = *_Str1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        uVar8 = (uint)(ushort)wVar1;
        wVar2 = *_Str2;
        if ((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) {
          wVar2 = wVar2 + L' ';
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        uVar7 = (uint)(ushort)wVar2;
      } while ((wVar1 != L'\0') && (wVar1 == wVar2));
    }
    else {
      do {
        wVar3 = __towlower_l(*_Str1,&local_14);
        uVar8 = (uint)wVar3;
        _Str1 = _Str1 + 1;
        wVar4 = __towlower_l(*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        uVar7 = (uint)wVar4;
        if (wVar3 == 0) break;
      } while (wVar3 == wVar4);
    }
    iVar6 = uVar8 - uVar7;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar6;
}


// ==== 101c331a __wcsicmp

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_103b3d3c == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0x16;
      FUN_101c2369(0,0,0,0,0);
      iVar4 = 0x7fffffff;
    }
    else {
      do {
        wVar1 = *_Str1;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          wVar1 = wVar1 + L' ';
        }
        wVar2 = *_Str2;
        if ((0x40 < (ushort)wVar2) && ((ushort)wVar2 < 0x5b)) {
          wVar2 = wVar2 + L' ';
        }
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
      } while ((wVar1 != L'\0') && (wVar1 == wVar2));
      iVar4 = (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
    }
  }
  else {
    iVar4 = __wcsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar4;
}


// ==== 101c33ab FUN_101c33ab

short * FUN_101c33ab(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    sVar1 = *param_1;
    if (sVar1 != 0) {
      iVar3 = (int)param_1 - (int)param_2;
      psVar2 = param_2;
joined_r0x101c33d1:
      do {
        if (sVar1 != 0) {
          if (*psVar2 == 0) {
            return param_1;
          }
          if (*(short *)(iVar3 + (int)psVar2) == *psVar2) {
            sVar1 = *(short *)(iVar3 + (int)(psVar2 + 1));
            psVar2 = psVar2 + 1;
            goto joined_r0x101c33d1;
          }
        }
        if (*psVar2 == 0) {
          return param_1;
        }
        param_1 = param_1 + 1;
        sVar1 = *param_1;
        iVar3 = iVar3 + 2;
        psVar2 = param_2;
      } while (sVar1 != 0);
    }
    param_1 = (short *)0x0;
  }
  return param_1;
}


// ==== 101c3409 wcstoxl

/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(struct localeinfo_struct *,wchar_t const *,wchar_t const *
   *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
wcstoxl(localeinfo_struct *param_1,wchar_t *param_2,wchar_t **param_3,int param_4,int param_5)

{
  wchar_t _C;
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  uint local_c;
  ulong uVar9;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  if (param_3 != (wchar_t **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (wchar_t *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  _C = *param_2;
  uVar9 = 0;
  pwVar1 = param_2;
  while( true ) {
    pwVar8 = pwVar1 + 1;
    iVar3 = __iswctype_l(_C,8,&local_1c);
    if (iVar3 == 0) break;
    _C = *pwVar8;
    pwVar1 = pwVar8;
  }
  if (_C == L'-') {
    param_5 = param_5 | 2;
LAB_101c34a0:
    _C = *pwVar8;
    pwVar8 = pwVar1 + 2;
  }
  else if (_C == L'+') goto LAB_101c34a0;
  uVar7 = (uint)(ushort)_C;
  if (param_4 == 0) {
    iVar3 = __wchartodigit(uVar7);
    if (iVar3 != 0) {
      param_4 = 10;
      goto LAB_101c3504;
    }
    if ((*pwVar8 != L'x') && (*pwVar8 != L'X')) {
      param_4 = 8;
      goto LAB_101c3504;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (iVar3 = __wchartodigit(uVar7), iVar3 == 0)) &&
     ((*pwVar8 == L'x' || (*pwVar8 == L'X')))) {
    uVar7 = (uint)(ushort)pwVar8[1];
    pwVar8 = pwVar8 + 2;
  }
LAB_101c3504:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  local_c = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  do {
    uVar5 = __wchartodigit(uVar7);
    if (uVar5 == 0xffffffff) {
      uVar6 = (ushort)uVar7;
      if (((uVar6 < 0x41) || (0x5a < uVar6)) && (0x19 < (ushort)(uVar6 - 0x61))) {
LAB_101c3563:
        pwVar8 = pwVar8 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (wchar_t **)0x0) {
            pwVar8 = param_2;
          }
          uVar9 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < uVar9)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < uVar9)))))))) {
          puVar2 = (undefined4 *)FUN_101c8c22();
          *puVar2 = 0x22;
          if ((param_5 & 1U) == 0) {
            uVar9 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            uVar9 = 0xffffffff;
          }
        }
        if (param_3 != (wchar_t **)0x0) {
          *param_3 = pwVar8;
        }
        if ((param_5 & 2U) != 0) {
          uVar9 = -uVar9;
        }
        if (local_10 != '\0') {
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
        }
        return uVar9;
      }
      if ((ushort)(uVar6 - 0x61) < 0x1a) {
        uVar7 = uVar7 - 0x20;
      }
      uVar5 = uVar7 - 0x37;
    }
    if ((uint)param_4 <= uVar5) goto LAB_101c3563;
    if ((uVar9 < uVar4) || ((uVar9 == uVar4 && (uVar5 <= local_c)))) {
      uVar9 = uVar9 * param_4 + uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (wchar_t **)0x0) goto LAB_101c3563;
    }
    uVar7 = (uint)(ushort)*pwVar8;
    pwVar8 = pwVar8 + 1;
  } while( true );
}


// ==== 101c3600 _wcstol

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2005 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_103b3d3c == 0) {
    ppuVar2 = &PTR_DAT_10355d60;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 101c3629 _wcstoul

/* Library Function - Single Match
    _wcstoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_103b3d3c == 0) {
    ppuVar2 = &PTR_DAT_10355d60;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = wcstoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


// ==== 101c3660 _memset

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_103b56c8 != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
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


// ==== 101c36da __iswctype_l

/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  int iVar1;
  int local_18 [2];
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    local_8[0] = 0;
  }
  else if (_C < 0x100) {
    local_8[0] = *(ushort *)(PTR_DAT_10355e34 + (uint)_C * 2) & _Type;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_18,_Locale);
    iVar1 = ___crtGetStringTypeW
                      (local_18,1,&_C,1,local_8,*(undefined4 *)(local_18[0] + 4),
                       *(undefined4 *)(local_18[0] + 0x14));
    if (iVar1 == 0) {
      local_8[0] = 0;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return (uint)(local_8[0] & _Type);
}


// ==== 101c375c _iswctype

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  undefined1 local_8 [4];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_10355e34 + (uint)_C * 2) & _Type);
  }
  if (DAT_103b3d3c == 0) {
    ___crtGetStringTypeW(&PTR_DAT_10355d60,1,&_C,1,local_8,DAT_10355c84,DAT_10355c94);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}


// ==== 101c37ca __toupper_l

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
LAB_101c3827:
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
      puVar4 = (undefined4 *)FUN_101c8c22();
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
    if (iVar3 == 0) goto LAB_101c3827;
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


// ==== 101c38e2 _toupper

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 2005 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_103b3d3c == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 101c3909 __isdigit_l

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


// ==== 101c3958 _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_103b3d3c == 0) {
    return (byte)PTR_DAT_10355d48[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 101c3981 __isxdigit_l

/* Library Function - Single Match
    __isxdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 101c3a00 __isspace_l

/* Library Function - Single Match
    __isspace_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 101c3a78 _free

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  if (_Memory != (void *)0x0) {
    if (DAT_103b56bc == 3) {
      __lock(4);
      iVar1 = thunk_FUN_101cb50f(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_101c3ace();
      if (iVar1 != 0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_103b4088,0,_Memory);
    if (BVar2 == 0) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      DVar4 = GetLastError();
      uVar5 = FUN_101c8be7(DVar4);
      *puVar3 = uVar5;
    }
  }
  return;
}


// ==== 101c3ace FUN_101c3ace

void FUN_101c3ace(void)

{
  FUN_101cb39a(4);
  return;
}


// ==== 101c3b06 __wcsdup

/* Library Function - Single Match
    __wcsdup
   
   Library: Visual Studio 2005 Release */

wchar_t * __cdecl __wcsdup(wchar_t *_Str)

{
  wchar_t *_Dst;
  int iVar1;
  errno_t eVar2;
  
  if (_Str == (wchar_t *)0x0) {
    _Dst = (wchar_t *)0x0;
  }
  else {
    iVar1 = FUN_101c4794(_Str);
    _Dst = _calloc(iVar1 + 1U,2);
    if (_Dst == (wchar_t *)0x0) {
      _Dst = (wchar_t *)0x0;
    }
    else {
      eVar2 = _wcscpy_s(_Dst,iVar1 + 1U,_Str);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}


// ==== 101c3b59 FUN_101c3b59

undefined4 FUN_101c3b59(char *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  FILE local_24;
  
  if (param_3 == 0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    uVar2 = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_1 != (char *)0x0)) {
    local_24._flag = 0x42;
    local_24._base = param_1;
    local_24._ptr = param_1;
    if (param_2 < 0x40000000) {
      local_24._cnt = param_2 * 2;
    }
    else {
      local_24._cnt = 0x7fffffff;
    }
    uVar2 = FUN_101c82d7(&local_24,param_3,0,&stack0x00000010);
    if (param_1 != (char *)0x0) {
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
        local_24._ptr = local_24._ptr + 1;
      }
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== 101c3c2a _V6_HeapAlloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

undefined4 _V6_HeapAlloc(uint param_1)

{
  undefined4 local_20;
  
  local_20 = 0;
  if (param_1 <= DAT_103b56ac) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_101c3c70();
  }
  return local_20;
}


// ==== 101c3c70 FUN_101c3c70

void FUN_101c3c70(void)

{
  FUN_101cb39a(4);
  return;
}


// ==== 101c3c79 _malloc

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_103b4088 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_101ca5de(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_103b56bc == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_101c3cea:
      pvVar1 = HeapAlloc(DAT_103b4088,0,dwBytes);
    }
    else if ((DAT_103b56bc != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0))
    {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_101c3cea;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_103b41e8 == 0) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0xc;
      goto LAB_101c3d18;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_101c3d18:
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 101c3d3c _wcsncpy

/* Library Function - Single Match
    _wcsncpy
   
   Library: Visual Studio 2005 Release */

wchar_t * __cdecl _wcsncpy(wchar_t *_Dest,wchar_t *_Source,size_t _Count)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  pwVar4 = _Dest;
  if (_Count != 0) {
    do {
      wVar1 = *_Source;
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
      _Source = _Source + 1;
      if (wVar1 == L'\0') break;
      _Count = _Count - 1;
    } while (_Count != 0);
    if ((_Count != 0) && (uVar2 = _Count - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        pwVar4[0] = L'\0';
        pwVar4[1] = L'\0';
        pwVar4 = pwVar4 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *pwVar4 = L'\0';
        pwVar4 = pwVar4 + 1;
      }
    }
  }
  return _Dest;
}


// ==== 101c3d79 FUN_101c3d79

uint FUN_101c3d79(undefined1 *param_1,size_t param_2,uint param_3,uint param_4,FILE *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint local_10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (undefined1 *)0x0) {
      if ((param_5 != (FILE *)0x0) && (param_4 <= (uint)(0xffffffff / (ulonglong)param_3))) {
LAB_101c3df2:
        uVar8 = param_3 * param_4;
        uVar7 = uVar8;
        puVar2 = param_1;
        uVar1 = param_2;
        if ((param_5->_flag & 0x10c) == 0) {
          local_10 = 0x1000;
        }
        else {
          local_10 = param_5->_bufsiz;
        }
joined_r0x101c3e17:
        do {
          while( true ) {
            if (uVar7 == 0) {
              return param_4;
            }
            if ((param_5->_flag & 0x10c) == 0) break;
            uVar4 = param_5->_cnt;
            if (uVar4 == 0) break;
            if ((int)uVar4 < 0) {
LAB_101c3f67:
              param_5->_flag = param_5->_flag | 0x20;
LAB_101c3f6b:
              return (uVar8 - uVar7) / param_3;
            }
            uVar6 = uVar7;
            if (uVar4 <= uVar7) {
              uVar6 = uVar4;
            }
            if (uVar1 < uVar6) {
              if (param_2 != 0xffffffff) {
                _memset(param_1,0,param_2);
              }
              puVar3 = (undefined4 *)FUN_101c8c22();
              *puVar3 = 0x22;
              goto LAB_101c3dae;
            }
            _memcpy_s(puVar2,uVar1,param_5->_ptr,uVar6);
            param_5->_cnt = param_5->_cnt - uVar6;
            param_5->_ptr = param_5->_ptr + uVar6;
            uVar7 = uVar7 - uVar6;
            uVar1 = uVar1 - uVar6;
            puVar2 = puVar2 + uVar6;
          }
          if (local_10 <= uVar7) {
            if (local_10 == 0) {
              uVar4 = 0x7fffffff;
              if (uVar7 < 0x80000000) {
                uVar4 = uVar7;
              }
            }
            else {
              if (uVar7 < 0x80000000) {
                uVar6 = uVar7 % local_10;
                uVar4 = uVar7;
              }
              else {
                uVar6 = (uint)(0x7fffffff % (ulonglong)local_10);
                uVar4 = 0x7fffffff;
              }
              uVar4 = uVar4 - uVar6;
            }
            if (uVar1 < uVar4) {
LAB_101c3f3a:
              if (param_2 != 0xffffffff) {
                _memset(param_1,0,param_2);
              }
              puVar3 = (undefined4 *)FUN_101c8c22();
              *puVar3 = 0x22;
              goto LAB_101c3dae;
            }
            puVar9 = puVar2;
            iVar5 = __fileno(param_5);
            iVar5 = FUN_101cc878(iVar5,puVar9,uVar4);
            if (iVar5 == 0) {
              param_5->_flag = param_5->_flag | 0x10;
              goto LAB_101c3f6b;
            }
            if (iVar5 == -1) goto LAB_101c3f67;
            uVar7 = uVar7 - iVar5;
            uVar1 = uVar1 - iVar5;
            puVar2 = puVar2 + iVar5;
            goto joined_r0x101c3e17;
          }
          iVar5 = __filbuf(param_5);
          if (iVar5 == -1) goto LAB_101c3f6b;
          if (uVar1 == 0) goto LAB_101c3f3a;
          *puVar2 = (char)iVar5;
          local_10 = param_5->_bufsiz;
          uVar7 = uVar7 - 1;
          uVar1 = uVar1 - 1;
          puVar2 = puVar2 + 1;
        } while( true );
      }
      if (param_2 != 0xffffffff) {
        _memset(param_1,0,param_2);
      }
      if ((param_5 != (FILE *)0x0) && (param_4 <= (uint)(0xffffffff / (ulonglong)param_3)))
      goto LAB_101c3df2;
    }
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x16;
LAB_101c3dae:
    FUN_101c2369(0,0,0,0,0);
  }
  return 0;
}


// ==== 101c3f7f _fread_s

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_101cca79(_File);
      sVar2 = FUN_101c3d79(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_101c400b();
      return sVar2;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  return 0;
}


// ==== 101c400b FUN_101c400b

void FUN_101c400b(void)

{
  int unaff_EBP;
  
  FUN_101ccae3(*(undefined4 *)(unaff_EBP + 0x18));
  return;
}


// ==== 101c4015 FUN_101c4015

void FUN_101c4015(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  _fread_s(param_1,0xffffffff,param_2,param_3,param_4);
  return;
}


// ==== 101c4030 FUN_101c4030

int FUN_101c4030(FILE *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar3 = -1;
  }
  else {
    if ((param_1->_flag & 0x83) != 0) {
      iVar3 = __flush(param_1);
      __freebuf(param_1);
      iVar2 = __fileno(param_1);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        _free(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    param_1->_flag = 0;
  }
  return iVar3;
}


// ==== 101c40a2 _fclose

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _fclose(FILE *_File)

{
  undefined4 *puVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    FUN_101cca79(_File);
    local_20 = FUN_101c4030(_File);
    FUN_101c4116();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}


// ==== 101c4116 FUN_101c4116

void FUN_101c4116(void)

{
  FUN_101ccae3();
  return;
}


// ==== 101c411e __fseek_nolock

/* Library Function - Single Match
    __fseek_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  
  if ((_File->_flag & 0x83U) == 0) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x16;
    iVar3 = -1;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    if (_Origin == 1) {
      lVar4 = __ftell_nolock(_File);
      _Offset = _Offset + lVar4;
      _Origin = 0;
    }
    __flush(_File);
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    iVar3 = __fileno(_File);
    lVar4 = __lseek(iVar3,_Offset,_Origin);
    iVar3 = (lVar4 != -1) - 1;
  }
  return iVar3;
}


// ==== 101c41a5 _fseek

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2005 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((_File == (FILE *)0x0) || (((_Origin != 0 && (_Origin != 1)) && (_Origin != 2)))) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    FUN_101cca79(_File);
    iVar2 = __fseek_nolock(_File,_Offset,_Origin);
    FUN_101c4220();
  }
  return iVar2;
}


// ==== 101c4220 FUN_101c4220

void FUN_101c4220(void)

{
  int unaff_EBP;
  
  FUN_101ccae3(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 101c422a __fsopen

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  undefined4 *puVar1;
  int iVar2;
  FILE *pFVar3;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10320d70;
  uStack_c = 0x101c4236;
  if (((_Filename == (char *)0x0) || (_Mode == (char *)0x0)) || (*_Mode == '\0')) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    iVar2 = FUN_101cd3dd();
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != '\0') {
        pFVar3 = (FILE *)FUN_101cd13d(_Filename,_Mode,_ShFlag,iVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_101c42e4();
        return pFVar3;
      }
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x16;
      __local_unwind4(&DAT_103554c4,local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}


// ==== 101c42e4 FUN_101c42e4

void FUN_101c42e4(void)

{
  int unaff_EBP;
  
  FUN_101ccae3(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 101c42ee _fopen

/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}


// ==== 101c4301 __wfsopen

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wfsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10320d90;
  uStack_c = 0x101c430d;
  if (((_Filename == (wchar_t *)0x0) || (_Mode == (wchar_t *)0x0)) || (*_Mode == L'\0')) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    pFVar2 = (FILE *)FUN_101cd3dd();
    if (pFVar2 == (FILE *)0x0) {
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != L'\0') {
        pFVar2 = __wopenfile(_Filename,_Mode,_ShFlag,pFVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_101c43bd();
        return pFVar2;
      }
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x16;
      __local_unwind4(&DAT_103554c4,local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}


// ==== 101c43bd FUN_101c43bd

void FUN_101c43bd(void)

{
  int unaff_EBP;
  
  FUN_101ccae3(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 101c43c7 __wfopen

/* Library Function - Single Match
    __wfopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wfopen(wchar_t *_Filename,wchar_t *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __wfsopen(_Filename,_Mode,0x40);
  return pFVar1;
}


// ==== 101c43e0 __alloca_probe_16

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


// ==== 101c43f6 __alloca_probe_8

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


// ==== 101c440c __wtof_l

/* Library Function - Single Match
    __wtof_l
   
   Library: Visual Studio 2005 Release */

double __cdecl __wtof_l(wchar_t *_Str,_locale_t _Locale)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  _locale_t _Locale_00;
  FLT p_Var4;
  _flt local_2c;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str == (wchar_t *)0x0) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      iVar3 = __iswctype_l(*_Str,8,&local_14);
      if (iVar3 == 0) break;
      _Str = _Str + 1;
    }
    _Locale_00 = (_locale_t)FUN_101c4794(_Str,0,0,&local_14);
    p_Var4 = __wfltin2(&local_2c,_Str,_Locale_00);
    dVar1 = p_Var4->dval;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return dVar1;
}


// ==== 101c4496 __wtof

/* Library Function - Single Match
    __wtof
   
   Library: Visual Studio 2005 Release */

double __cdecl __wtof(wchar_t *_Str)

{
  double dVar1;
  
  dVar1 = __wtof_l(_Str,(_locale_t)0x0);
  return dVar1;
}


// ==== 101c44a4 __CRT_INIT@12

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
  SIZE_T dwBytes;
  
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
        _DAT_103b3ce4 = DVar2 * 0x100 + DVar3;
        DAT_103b3cdc = DVar1;
        _DAT_103b3ce0 = uVar8;
        DAT_103b3ce8 = DVar2;
        _DAT_103b3cec = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_103b56e0 = GetCommandLineA();
            DAT_103b3980 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_103b397c = DAT_103b397c + 1;
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
    if (0 < DAT_103b397c) {
      DAT_103b397c = DAT_103b397c + -1;
      if (DAT_103b3d18 == 0) {
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
    FUN_101c652a();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      pcVar7 = (code *)FUN_101c64b3(DAT_103b3998,DAT_10355594,_Memory);
      iVar6 = (*pcVar7)();
      if (iVar6 != 0) {
        FUN_101c6599(_Memory,0);
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


// ==== 101c467d ___DllMainCRTStartup

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x101c470f) */
/* WARNING: Removing unreachable block (ram,0x101c46bc) */
/* WARNING: Removing unreachable block (ram,0x101c473c) */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int ___DllMainCRTStartup(undefined4 param_1)

{
  int iVar1;
  undefined4 in_ECX;
  int in_EDX;
  int local_20;
  
  if (((in_EDX == 0) && (DAT_103b397c == 0)) ||
     (((in_EDX == 1 || (in_EDX == 2)) && (iVar1 = __CRT_INIT_12(param_1,in_EDX,in_ECX), iVar1 == 0))
     )) {
    local_20 = 0;
  }
  else {
    local_20 = _DllMain_12(param_1,in_EDX,in_ECX);
    if ((in_EDX == 1) && (local_20 == 0)) {
      _DllMain_12(param_1,0,in_ECX);
      __CRT_INIT_12(param_1,0,in_ECX);
    }
    if (((in_EDX == 0) || (in_EDX == 3)) &&
       (iVar1 = __CRT_INIT_12(param_1,in_EDX,in_ECX), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  return local_20;
}


// ==== 101c4773 entry

void entry(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_1);
  return;
}


// ==== 101c4794 FUN_101c4794

int FUN_101c4794(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


// ==== 101c47aa _sprintf

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_101c9b39(&local_24,_Format,0,&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}


// ==== 101c4828 __global_unwind2

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x101c4840,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 101c488d __local_unwind2

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_101c4848;
  local_20 = ExceptionList;
  uVar2 = DAT_103554c4 ^ (uint)&local_20;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_101c495c(uVar2);
    }
  }
  ExceptionList = local_20;
  return;
}


// ==== 101c4934 __NLG_Notify1

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __NLG_Notify1(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 unaff_EBP;
  
  DAT_10355568 = in_ECX;
  DAT_10355564 = in_EAX;
  DAT_1035556c = unaff_EBP;
  return in_EAX;
}


// ==== 101c493d __NLG_Notify

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10355568 = param_1;
  DAT_10355564 = in_EAX;
  DAT_1035556c = unaff_EBP;
  return;
}


// ==== 101c495c FUN_101c495c

void FUN_101c495c(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}


// ==== 101c495f __mbsicmp_l

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
    puVar4 = (undefined4 *)FUN_101c8c22();
    *puVar4 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    puVar4 = (undefined4 *)FUN_101c8c22();
    *puVar4 = 0x16;
    FUN_101c2369(0,0,0,0,0);
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
            if (iVar5 != 2) goto LAB_101c4b31;
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
LAB_101c4b31:
              puVar4 = (undefined4 *)FUN_101c8c22();
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


// ==== 101c4b79 __mbsicmp

/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}


// ==== 101c4b8c __mbsrchr_l

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
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x16;
    FUN_101c2369(0,0,0,0,0);
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
LAB_101c4c2e:
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
          goto LAB_101c4c2e;
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


// ==== 101c4c4c __mbsrchr

/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbsrchr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 101c4c5f FID_conflict:__waccess_s

/* Library Function - Multiple Matches With Different Base Names
    __access_s
    __waccess_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl FID_conflict___waccess_s(wchar_t *_Filename,int _AccessMode)

{
  undefined4 *puVar1;
  DWORD DVar2;
  errno_t *peVar3;
  
  if ((_Filename == (wchar_t *)0x0) || ((_AccessMode & 0xfffffff9U) != 0)) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    return 0x16;
  }
  DVar2 = GetFileAttributesA((LPCSTR)_Filename);
  if (DVar2 == 0xffffffff) {
    DVar2 = GetLastError();
    FUN_101c8c48(DVar2);
  }
  else {
    if ((((DVar2 & 0x10) != 0) || ((DVar2 & 1) == 0)) || ((_AccessMode & 2U) == 0)) {
      return 0;
    }
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 5;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0xd;
  }
  peVar3 = (errno_t *)FUN_101c8c22();
  return *peVar3;
}


// ==== 101c4ce6 FID_conflict:__access

/* Library Function - Multiple Matches With Different Base Names
    __access
    __waccess
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___access(wchar_t *_Filename,int _AccessMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___waccess_s(_Filename,_AccessMode);
  return -(uint)(eVar1 != 0);
}


// ==== 101c4cfa __mbsnbcpy_l

/* Library Function - Single Match
    __mbsnbcpy_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsnbcpy_l(uchar *_Dest,uchar *_Source,size_t _Count,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  size_t sVar4;
  undefined4 *puVar5;
  byte *_Dst;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (((_Dest == (uchar *)0x0) && (_Count != 0)) || ((_Source == (uchar *)0x0 && (_Count != 0)))) {
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Dest = (uchar *)0x0;
  }
  else {
    _Dst = _Dest;
    sVar4 = _Count;
    if (*(int *)(local_10 + 8) == 0) {
      _Dest = (uchar *)_strncpy((char *)_Dest,(char *)_Source,_Count);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        while( true ) {
          pbVar3 = _Dst;
          if (sVar4 == 0) goto LAB_101c4db6;
          bVar1 = *_Source;
          _Count = sVar4 - 1;
          bVar2 = *(byte *)(bVar1 + 0x1d + local_10);
          *pbVar3 = bVar1;
          if ((bVar2 & 4) != 0) break;
          _Dst = pbVar3 + 1;
          _Source = _Source + 1;
          sVar4 = _Count;
          if (bVar1 == 0) goto LAB_101c4da3;
        }
        if (_Count == 0) {
          *pbVar3 = 0;
          goto LAB_101c4db6;
        }
        bVar1 = _Source[1];
        _Count = sVar4 - 2;
        pbVar3[1] = bVar1;
        _Dst = pbVar3 + 2;
        _Source = _Source + 2;
        sVar4 = _Count;
      } while (bVar1 != 0);
      *pbVar3 = 0;
LAB_101c4da3:
      if (_Count != 0) {
        _memset(_Dst,0,_Count);
      }
LAB_101c4db6:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
  }
  return _Dest;
}


// ==== 101c4ddb __mbsnbcpy

/* Library Function - Single Match
    __mbsnbcpy
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  uchar *puVar1;
  
  puVar1 = __mbsnbcpy_l(_Dest,_Source,_Count,(_locale_t)0x0);
  return puVar1;
}


// ==== 101c4df2 __vsprintf_l

/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_DstBuf == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_101c9b39(&local_24,_Format,param_3,_ArgList);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}


// ==== 101c4e6e _vsprintf

/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}


// ==== 101c4f8e FUN_101c4f8e

void FUN_101c4f8e(int param_1)

{
  __local_unwind2(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}


// ==== 101c4fa9 __strnicmp_l

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
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x16;
      FUN_101c2369(0,0,0,0,0);
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
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x16;
      FUN_101c2369(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 101c5099 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_103b3d3c == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 101c5100 _strrchr

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


// ==== 101c51b6 __freea

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


// ==== 101c51d1 vscan_fn

/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl vscan_fn(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *unaff_ESI;
  
  _strlen(unaff_ESI);
  if ((unaff_ESI == (char *)0x0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*param_1)(&stack0xffffffdc,param_2,param_3,param_4);
  }
  return uVar2;
}


// ==== 101c5239 FID_conflict:_sscanf

/* Library Function - Multiple Matches With Different Base Names
    _sscanf
    _sscanf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(&DAT_101cf67e,_Format,0,&stack0x0000000c);
  return iVar1;
}


// ==== 101c5258 __mbsnbicmp_l

/* Library Function - Single Match
    __mbsnbicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  ushort local_c;
  ushort local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (_MaxCount == 0) {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar4 = 0;
  }
  else if (*(int *)(local_18 + 8) == 0) {
    iVar4 = __strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else {
    if (_Str2 != (uchar *)0x0) {
      do {
        bVar3 = *_Str1;
        uVar6 = (uint)bVar3;
        sVar1 = _MaxCount - 1;
        puVar2 = _Str1 + 1;
        if ((*(byte *)(uVar6 + 0x1d + local_18) & 4) == 0) {
          if ((*(byte *)(uVar6 + local_18 + 0x1d) & 0x10) != 0) {
            uVar6 = (uint)*(byte *)(uVar6 + local_18 + 0x11d);
          }
          local_c = (ushort)uVar6;
          _Str1 = puVar2;
LAB_101c5398:
          uVar6 = (uint)*_Str2;
          pbVar7 = _Str2 + 1;
          if ((*(byte *)(uVar6 + 0x1d + local_18) & 4) == 0) {
            if ((*(byte *)(uVar6 + local_18 + 0x1d) & 0x10) != 0) {
              uVar6 = (uint)*(byte *)(uVar6 + local_18 + 0x11d);
            }
            goto LAB_101c5359;
          }
          if (sVar1 == 0) {
LAB_101c53b6:
            _MaxCount = sVar1;
            local_8 = 0;
          }
          else {
            bVar3 = *pbVar7;
            sVar1 = _MaxCount - 2;
            if (bVar3 == 0) goto LAB_101c53b6;
            pbVar7 = _Str2 + 2;
            local_8 = CONCAT11(*_Str2,bVar3);
            _MaxCount = sVar1;
            if ((local_8 < *(ushort *)(local_18 + 0x10)) || (*(ushort *)(local_18 + 0x12) < local_8)
               ) {
              if ((*(ushort *)(local_18 + 0x16) <= local_8) &&
                 (local_8 <= *(ushort *)(local_18 + 0x18))) {
                local_8 = local_8 + *(short *)(local_18 + 0x1a);
              }
            }
            else {
              local_8 = local_8 + *(short *)(local_18 + 0x14);
            }
          }
        }
        else {
          if (sVar1 != 0) {
            if (*puVar2 == '\0') {
              local_c = 0;
              _Str1 = puVar2;
            }
            else {
              _Str1 = _Str1 + 2;
              local_c = CONCAT11(bVar3,*puVar2);
              if ((local_c < *(ushort *)(local_18 + 0x10)) ||
                 (*(ushort *)(local_18 + 0x12) < local_c)) {
                if ((*(ushort *)(local_18 + 0x16) <= local_c) &&
                   (local_c <= *(ushort *)(local_18 + 0x18))) {
                  local_c = local_c + *(short *)(local_18 + 0x1a);
                }
              }
              else {
                local_c = local_c + *(short *)(local_18 + 0x14);
              }
            }
            goto LAB_101c5398;
          }
          uVar6 = (uint)*_Str2;
          if ((*(byte *)(uVar6 + 0x1d + local_18) & 4) != 0) {
LAB_101c542f:
            if (local_10 != '\0') {
              *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
            }
            return 0;
          }
          local_c = 0;
          pbVar7 = _Str2;
          _Str1 = puVar2;
LAB_101c5359:
          local_8 = (ushort)uVar6;
          _MaxCount = sVar1;
        }
        if (local_8 != local_c) {
          iVar4 = (-(uint)(local_8 < local_c) & 2) - 1;
          if (local_10 == '\0') {
            return iVar4;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return iVar4;
        }
        if ((local_c == 0) || (_Str2 = pbVar7, _MaxCount == 0)) goto LAB_101c542f;
      } while( true );
    }
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  return iVar4;
}


// ==== 101c548a __mbsnbicmp

/* Library Function - Single Match
    __mbsnbicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 101c54b0 _strlen

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
    if (((uint)puVar2 & 3) == 0) goto LAB_101c54e0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_101c5513:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_101c54e0:
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
  goto LAB_101c5513;
}


// ==== 101c553b __EH_prolog3

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_103554c4 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 101c556e __EH_prolog3_catch

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3_catch(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_103554c4 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 101c55b0 __except_handler4

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)(param_2 + 8) ^ DAT_103554c4);
  bVar3 = false;
  local_c = 1;
  iVar1 = param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)(param_2 + -4) = &local_8;
    iVar7 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_2 + 0xc) == -2) {
      return 1;
    }
    do {
      iVar2 = piVar8[iVar7 * 3 + 4];
      if (piVar8[iVar7 * 3 + 5] != 0) {
        iVar4 = _EH4_CallFilterFunc(piVar8[iVar7 * 3 + 5],iVar1);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_101c565b;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1029a93c)
             , BVar5 != 0)) {
            ___DestructExceptionObject(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(int *)(param_2 + 0xc) != iVar7) {
            _EH4_LocalUnwind(param_2,iVar7,iVar1,&DAT_103554c4);
          }
          *(int *)(param_2 + 0xc) = iVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((piVar8 + iVar7 * 3 + 4)[2],iVar1);
          return uVar6;
        }
      }
      iVar7 = iVar2;
    } while (iVar2 != -2);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind(param_2,0xfffffffe,iVar1,&DAT_103554c4);
  }
LAB_101c565b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}


// ==== 101c5751 FUN_101c5751

void FUN_101c5751(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = std::bad_exception::vftable;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10024ca0();
  }
  return;
}


// ==== 101c5773 ___TypeMatch

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_101c57c9:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_101c57a7:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_101c57c9;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_101c57a7;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== 101c5813 ___FrameUnwindToState

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

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
  FUN_101c58d9();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


// ==== 101c58d9 FUN_101c58d9

void FUN_101c58d9(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}


// ==== 101c5939 ___DestructExceptionObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void ___DestructExceptionObject(int *param_1)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (iVar1 = *(int *)(param_1[7] + 4), iVar1 != 0)) {
    FID_conflict__CallMemberFunction1(param_1[6],iVar1);
  }
  return;
}


// ==== 101c598d ___AdjustPointer

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}


// ==== 101c59b2 IsInExceptionSpec

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
          iVar1 = ___TypeMatch(unaff_EDI[1] + local_c * 0x10,*piVar3,*(undefined4 *)(param_1 + 0x1c)
                              );
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


// ==== 101c5a2b CallUnexpected

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


// ==== 101c5a5c Catch_All@101c5a5c

void Catch_All_101c5a5c(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101c5a74 CallCatchBlock

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
  undefined1 local_40 [8];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10320e70;
  uStack_c = 0x101c5a80;
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
  FUN_101c5b9a();
  return local_20;
}


// ==== 101c5b9a FUN_101c5b9a

void FUN_101c5b9a(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(undefined4 *)(unaff_EBP + -0x28));
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
      ___DestructExceptionObject();
    }
  }
  return;
}


// ==== 101c5c10 ___BuildCatchObjectHelper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

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
          pvVar2 = (void *)___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
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
        goto LAB_101c5c95;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_101c5c95:
      iVar1 = ___AdjustPointer(iVar1,param_4 + 8);
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


// ==== 101c5d8f ___BuildCatchObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void ___BuildCatchObject(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    iVar3 = param_3[2] + 0xc + param_2;
  }
  iVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  return;
}


// ==== 101c5e20 CatchIt

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
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject(param_1);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_EDI + 4) + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}


// ==== 101c5e8c FindHandlerForForeignException

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


// ==== 101c5f7e FindHandler

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
                ___DestructExceptionObject(param_1,1);
                param_1 = (EHExceptionRecord *)s_bad_exception_1029a94c;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_10320ed4);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_101c60bc;
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
                iVar6 = ___TypeMatch(local_10,p_Var10,p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffd0,0));
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_101c61e6;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_101c61e6:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject(p_Var11,1);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_101c62bc;
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
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
      CallUnexpected(p_Var11->pESTypeList);
      p_Var10 = param_5;
    }
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_101c60bc:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_101c62bc:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}


// ==== 101c62ec ___InternalCxxFrameHandler

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4
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
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
    }
  }
  return 1;
}


// ==== 101c63d0 FUN_101c63d0

undefined4 FUN_101c63d0(void)

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


// ==== 101c643c FUN_101c643c

int FUN_101c643c(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10355598);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10355594 != -1)) {
    iVar3 = DAT_10355594;
    pcVar2 = TlsGetValue(DAT_10355598);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_101c6496;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_101c63d0();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_101c6496:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 101c64aa __encoded_null

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_101c643c(0);
  return;
}


// ==== 101c64b3 FUN_101c64b3

int FUN_101c64b3(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10355598);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10355594 != -1)) {
    iVar3 = DAT_10355594;
    pcVar2 = TlsGetValue(DAT_10355598);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_101c650d;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_101c63d0();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_101c650d:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 101c652a FUN_101c652a

LPVOID FUN_101c652a(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10355598);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_101c64b3(DAT_103b3994);
    TlsSetValue(DAT_10355598,lpTlsValue);
  }
  return lpTlsValue;
}


// ==== 101c655c __mtterm

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  
  if (DAT_10355594 != -1) {
    pcVar1 = (code *)FUN_101c64b3(DAT_103b399c,DAT_10355594);
    (*pcVar1)();
    DAT_10355594 = -1;
  }
  if (DAT_10355598 != 0xffffffff) {
    TlsFree(DAT_10355598);
    DAT_10355598 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


// ==== 101c6599 FUN_101c6599

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_101c6599(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10356318;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_101c63d0();
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
  *(undefined **)(param_1 + 0x68) = &DAT_10355750;
  InterlockedIncrement((LONG *)&DAT_10355750);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10355d58;
  }
  ___addlocaleref(*(undefined4 *)(param_1 + 0x6c));
  FUN_101c664f();
  return;
}


// ==== 101c664f FUN_101c664f

void FUN_101c664f(void)

{
  FUN_101cb39a(0xc);
  return;
}


// ==== 101c6658 FUN_101c6658

DWORD * FUN_101c6658(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  
  dwErrCode = GetLastError();
  pcVar1 = (code *)FUN_101c652a(DAT_10355594);
  _Memory = (DWORD *)(*pcVar1)();
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      pcVar1 = (code *)FUN_101c64b3(DAT_103b3998,DAT_10355594,_Memory);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_101c6599(_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}


// ==== 101c66cf __getptd

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_101c6658();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


// ==== 101c66e7 __freefls@4

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *lpAddend;
  int *piVar1;
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
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10356318) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    lpAddend = *(LONG **)((int)param_1 + 0x68);
    if (lpAddend != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(lpAddend);
      if ((LVar2 == 0) && (lpAddend != (LONG *)&DAT_10355750)) {
        _free(lpAddend);
      }
    }
    FUN_101c67f3();
    __lock(0xc);
    piVar1 = *(int **)((int)param_1 + 0x6c);
    if (piVar1 != (int *)0x0) {
      ___removelocaleref(piVar1);
      if (((piVar1 != (int *)PTR_DAT_10355d58) && (piVar1 != (int *)&DAT_10355c80)) &&
         (*piVar1 == 0)) {
        ___freetlocinfo(piVar1);
      }
    }
    FUN_101c67ff();
    _free(param_1);
  }
  return;
}


// ==== 101c67f3 FUN_101c67f3

void FUN_101c67f3(void)

{
  FUN_101cb39a(0xd);
  return;
}


// ==== 101c67ff FUN_101c67ff

void FUN_101c67ff(void)

{
  FUN_101cb39a(0xc);
  return;
}


// ==== 101c6808 __freeptd

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  
  if (DAT_10355594 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10355598), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10355594;
      pcVar2 = TlsGetValue(DAT_10355598);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    pcVar2 = (code *)FUN_101c64b3(DAT_103b3998,DAT_10355594,0);
    (*pcVar2)();
    __freefls_4(_Ptd);
  }
  if (DAT_10355598 != 0xffffffff) {
    TlsSetValue(DAT_10355598,(LPVOID)0x0);
  }
  return;
}


// ==== 101c6871 __mtinit

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
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_103b3990 = GetProcAddress(hModule,"FlsAlloc");
  DAT_103b3994 = GetProcAddress(hModule,"FlsGetValue");
  DAT_103b3998 = GetProcAddress(hModule,"FlsSetValue");
  DAT_103b399c = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_103b3990 == (FARPROC)0x0) || (DAT_103b3994 == (FARPROC)0x0)) ||
      (DAT_103b3998 == (FARPROC)0x0)) || (DAT_103b399c == (FARPROC)0x0)) {
    DAT_103b3994 = TlsGetValue_exref;
    DAT_103b3990 = (FARPROC)&LAB_101c6521;
    DAT_103b3998 = TlsSetValue_exref;
    DAT_103b399c = TlsFree_exref;
  }
  DAT_10355598 = TlsAlloc();
  if ((DAT_10355598 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10355598,DAT_103b3994), BVar1 != 0))
  {
    __init_pointers();
    DAT_103b3990 = (FARPROC)FUN_101c643c(DAT_103b3990);
    DAT_103b3994 = (FARPROC)FUN_101c643c(DAT_103b3994);
    DAT_103b3998 = (FARPROC)FUN_101c643c(DAT_103b3998);
    DAT_103b399c = (FARPROC)FUN_101c643c(DAT_103b399c);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar3 = (code *)FUN_101c64b3(DAT_103b3990,__freefls_4);
      DAT_10355594 = (*pcVar3)();
      if ((DAT_10355594 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        pcVar3 = (code *)FUN_101c64b3(DAT_103b3998,DAT_10355594,pDVar4);
        iVar2 = (*pcVar3)();
        if (iVar2 != 0) {
          FUN_101c6599(pDVar4,0);
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


// ==== 101c69f5 terminate

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


// ==== 101c6a2e unexpected

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


// ==== 101c6a41 _inconsistency

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_101c64b3(DAT_103b39a0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}


// ==== 101c6a78 __initp_eh_hooks

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_103b39a0 = FUN_101c643c(terminate);
  return;
}


// ==== 101c6a90 __CallSettingFrame@12

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


// ==== 101c6adc ___report_gsfailure

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
  
  _DAT_103b3ac0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_103b3ac4 = &stack0x00000004;
  _DAT_103b3a00 = 0x10001;
  _DAT_103b39a8 = 0xc0000409;
  _DAT_103b39ac = 1;
  local_32c = DAT_103554c4;
  local_328 = DAT_103554c8;
  _DAT_103b39b4 = unaff_retaddr;
  _DAT_103b3a8c = in_GS;
  _DAT_103b3a90 = in_FS;
  _DAT_103b3a94 = in_ES;
  _DAT_103b3a98 = in_DS;
  _DAT_103b3a9c = unaff_EDI;
  _DAT_103b3aa0 = unaff_ESI;
  _DAT_103b3aa4 = unaff_EBX;
  _DAT_103b3aa8 = in_EDX;
  _DAT_103b3aac = in_ECX;
  _DAT_103b3ab0 = in_EAX;
  _DAT_103b3ab4 = unaff_EBP;
  DAT_103b3ab8 = unaff_retaddr;
  _DAT_103b3abc = in_CS;
  _DAT_103b3ac8 = in_SS;
  DAT_103b39f8 = IsDebuggerPresent();
  FUN_101c8ccb(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1029a9c0);
  if (DAT_103b39f8 == 0) {
    FUN_101c8ccb(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 101c6be0 __forcdecpt_l

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


// ==== 101c6c51 __cropzeros_l

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


// ==== 101c6ce7 __fassign_l

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


// ==== 101c6d3e __shift

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


// ==== 101c6d77 __cftoe2_l

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

undefined4
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
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
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
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 == 0) {
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
            iVar4 = iVar3 / 100;
            iVar3 = iVar3 % 100;
            _Dst[2] = _Dst[2] + (char)iVar4;
          }
          if (9 < iVar3) {
            iVar4 = iVar3 / 10;
            iVar3 = iVar3 % 10;
            _Dst[3] = _Dst[3] + (char)iVar4;
          }
          _Dst[4] = _Dst[4] + (char)iVar3;
        }
        if (((DAT_103b4428 & 1) != 0) && (_Dst[2] == '0')) {
          _memmove(_Dst + 2,_Dst + 3,3);
        }
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    puVar1 = (undefined4 *)FUN_101c8c22();
    uVar7 = 0x22;
  }
  *puVar1 = uVar7;
  FUN_101c2369(0,0,0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar7;
}


// ==== 101c6ee4 __cftoe_l

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cftoe_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (uint)(local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30,0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101c6fb2 __cftoe

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return eVar1;
}


// ==== 101c6fd0 __cftoa_l

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

errno_t __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
                 localeinfo_struct *param_6)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  errno_t *peVar4;
  size_t _SizeInBytes;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  int iVar9;
  undefined4 extraout_EDX_00;
  short sVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
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
    peVar4 = (errno_t *)FUN_101c8c22();
    eVar14 = 0x16;
LAB_101c7009:
    *peVar4 = eVar14;
    FUN_101c2369(0,0,0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    peVar4 = (errno_t *)FUN_101c8c22();
    eVar14 = 0x22;
    goto LAB_101c7009;
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
        return eVar14;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return eVar14;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar5 = _strrchr(param_2 + 2,0x65);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar5[3] = '\0';
    }
    goto LAB_101c732d;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
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
  pcVar12 = param_2 + 3;
  pcVar5 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      sVar2 = __aullshr();
      uVar3 = sVar2 + 0x30;
      if (0x39 < uVar3) {
        uVar3 = uVar3 + sVar10;
      }
      local_8 = local_8 + -4;
      *pcVar5 = (char)uVar3;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar5 = pcVar5 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) && (uVar3 = __aullshr(), pcVar11 = pcVar5, 8 < uVar3)) {
      while( true ) {
        pcVar6 = pcVar11 + -1;
        if ((*pcVar6 != 'f') && (*pcVar6 != 'F')) break;
        *pcVar6 = '0';
        pcVar11 = pcVar6;
      }
      if (pcVar6 == pcVar12) {
        pcVar11[-2] = pcVar11[-2] + '\x01';
      }
      else if (*pcVar6 == '9') {
        *pcVar6 = (char)sVar10 + ':';
      }
      else {
        *pcVar6 = *pcVar6 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar5,0x30,param_4);
    pcVar5 = pcVar5 + param_4;
  }
  if (*pcVar12 == '\0') {
    pcVar5 = pcVar12;
  }
  *pcVar5 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar7 = __aullshr();
  uVar8 = (uVar7 & 0x7ff) - local_18;
  iVar9 = -(uint)((uVar7 & 0x7ff) < local_18);
  if (iVar9 < 0) {
    pcVar5[1] = '-';
    bVar13 = uVar8 != 0;
    uVar8 = -uVar8;
    iVar9 = -(iVar9 + (uint)bVar13);
  }
  else {
    pcVar5[1] = '+';
  }
  pcVar11 = pcVar5 + 2;
  *pcVar11 = '0';
  pcVar12 = pcVar11;
  if ((iVar9 < 0) || ((iVar9 < 1 && (uVar8 < 1000)))) {
LAB_101c72dc:
    if ((-1 < iVar9) && ((0 < iVar9 || (99 < uVar8)))) goto LAB_101c72e7;
  }
  else {
    cVar1 = __alldvrm(uVar8,iVar9,1000,0);
    *pcVar11 = cVar1 + '0';
    pcVar12 = pcVar5 + 3;
    iVar9 = 0;
    uVar8 = extraout_ECX;
    local_14 = extraout_EDX;
    if (pcVar12 == pcVar11) goto LAB_101c72dc;
LAB_101c72e7:
    cVar1 = __alldvrm(uVar8,iVar9,100,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    iVar9 = 0;
    uVar8 = extraout_ECX_00;
    local_14 = extraout_EDX_00;
  }
  if ((pcVar12 != pcVar11) || ((-1 < iVar9 && ((0 < iVar9 || (9 < uVar8)))))) {
    cVar1 = __alldvrm(uVar8,iVar9,10,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    uVar8 = extraout_ECX_01;
  }
  *pcVar12 = (char)uVar8 + '0';
  pcVar12[1] = '\0';
LAB_101c732d:
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 0;
}


// ==== 101c7341 __cftof2_l

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __cftof2_l(int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *in_ECX;
  size_t sVar5;
  undefined1 *puVar6;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((in_ECX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar3 = (undefined4 *)FUN_101c8c22();
    uVar4 = 0x16;
    *puVar3 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      iVar2 = *in_EAX;
      in_ECX[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
      (in_ECX + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *in_ECX = 0x2d;
      in_ECX = in_ECX + 1;
    }
    if (in_EAX[1] < 1) {
      __shift();
      *in_ECX = 0x30;
      puVar6 = in_ECX + 1;
    }
    else {
      puVar6 = in_ECX + in_EAX[1];
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar6 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== 101c7436 __cftof_l

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cftof_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
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
      __cftof2_l(param_3,param_4,0,param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101c74ef __cftog_l

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cftog_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || (param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34,1,param_6);
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
        __cftof2_l(param_3,param_4,1,param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101c75e7 __cfltcvt_l

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      eVar1 = __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}


// ==== 101c766d __cfltcvt

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


// ==== 101c768e __initp_misc_cfltcvt_tab

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    puVar1 = (undefined4 *)((int)&PTR_LAB_103555a0 + uVar3);
    uVar2 = FUN_101c643c(*puVar1);
    uVar3 = uVar3 + 4;
    *puVar1 = uVar2;
  } while (uVar3 < 0x28);
  return;
}


// ==== 101c76ad __setdefaultprecision

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


// ==== 101c76d6 __ms_p5_test_fdiv

/* WARNING: Removing unreachable block (ram,0x101c7709) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}


// ==== 101c7712 __ms_p5_mp_test_fdiv

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


// ==== 101c773b type_info::_Type_info_dtor

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
  _Memory = DAT_103b3cd0;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_103b3ccc;
    do {
      piVar2 = piVar1;
      if (DAT_103b3cd0 == (int *)0x0) goto LAB_101c777f;
      piVar1 = DAT_103b3cd0;
    } while (*DAT_103b3cd0 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_103b3cd0[1];
    _free(_Memory);
LAB_101c777f:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_101c77a2();
  return;
}


// ==== 101c77a2 FUN_101c77a2

void FUN_101c77a2(void)

{
  FUN_101cb39a(0xe);
  return;
}


// ==== 101c77b0 _strcmp

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
      if (bVar4 != *_Str2) goto LAB_101c77f4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_101c77c0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_101c77f4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_101c77f4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_101c77c0:
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
LAB_101c77f4:
  return (uint)bVar5 * -2 + 1;
}


// ==== 101c7838 __malloc_crt

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
    if (DAT_103b3cd4 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_103b3cd4 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 101c7878 __calloc_crt

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = (void *)__calloc_impl(_Count,_Size,0);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_103b3cd4 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_103b3cd4 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 101c78c0 __realloc_crt

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
    if (DAT_103b3cd4 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_103b3cd4 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 101c795b __msize

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
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_103b56bc == 3) {
      __lock(4);
      iVar3 = thunk_FUN_101cb50f(_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_101c79f5();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_103b4088,0,_Memory);
  }
  return sVar2;
}


// ==== 101c79f5 FUN_101c79f5

void FUN_101c79f5(void)

{
  FUN_101cb39a(4);
  return;
}


// ==== 101c79fe __amsg_exit

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_101ca5de(param_1);
  pcVar1 = (code *)FUN_101c64b3(PTR___exit_103555d0);
  (*pcVar1)(0xff);
  return;
}


// ==== 101c7a22 FUN_101c7a22

void FUN_101c7a22(undefined4 param_1)

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


// ==== 101c7a48 ___crtExitProcess

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_101c7a22(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ==== 101c7a5d FUN_101c7a5d

void FUN_101c7a5d(void)

{
  __lock(8);
  return;
}


// ==== 101c7a66 FUN_101c7a66

void FUN_101c7a66(void)

{
  FUN_101cb39a(8);
  return;
}


// ==== 101c7a6f FUN_101c7a6f

void FUN_101c7a6f(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


// ==== 101c7a87 __initterm_e

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __initterm_e(undefined4 *param_1,undefined4 *param_2)

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


// ==== 101c7aa7 __get_osplatform

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_103b3cdc != 0)) {
    *param_1 = DAT_103b3cdc;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  return 0x16;
}


// ==== 101c7ade __get_winmajor

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_103b3cdc != 0)) {
    *param_1 = DAT_103b3ce8;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  return 0x16;
}


// ==== 101c7b1a __cinit

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1029a888);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e(&DAT_1022dda8,&DAT_1022ddc0);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_101ce7cb);
    puVar3 = &DAT_1022cba4;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1022dda4);
    if ((DAT_103b56dc != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_103b56dc), BVar1 != 0)) {
      (*DAT_103b56dc)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 101c7bac FUN_101c7bac

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x101c7c7f) */

void FUN_101c7bac(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_103b3d1c != 1) {
    DAT_103b3d18 = 1;
    DAT_103b3d14 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_101c64b3(DAT_103b56d4);
      piVar3 = (int *)FUN_101c64b3(DAT_103b56d0);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_101c64b3(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_101c7a6f(&DAT_1022ddd0);
    }
    FUN_101c7a6f(&DAT_1022ddd8);
  }
  FUN_101c7c79();
  if (param_3 != 0) {
    return;
  }
  DAT_103b3d1c = 1;
  FUN_101cb39a(8);
  ___crtExitProcess(param_1);
  return;
}


// ==== 101c7c79 FUN_101c7c79

void FUN_101c7c79(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_101cb39a(8);
  }
  return;
}


// ==== 101c7c8e __exit

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_101c7bac(_Code,1,0);
  return;
}


// ==== 101c7c9f __cexit

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_101c7bac(0,0,1);
  return;
}


// ==== 101c7cae __init_pointers

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_101cc16b(uVar1);
  FUN_101d0eca(uVar1);
  FUN_101c2263(uVar1);
  FUN_101ca7b7(uVar1);
  FUN_101d0ec0(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_101ce7ef(uVar1);
  __initp_eh_hooks(uVar1);
  PTR___exit_103555d0 = (undefined *)FUN_101c643c(__exit);
  return;
}


// ==== 101c7cfc __SEH_prolog4

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_103554c4 ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 101c7d41 __SEH_epilog4

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


// ==== 101c7d70 __aulldvrm

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 101c7e05 wcstoxq

/* WARNING: Removing unreachable block (ram,0x101c7f89) */
/* WARNING: Removing unreachable block (ram,0x101c8017) */
/* Library Function - Single Match
    unsigned __int64 __cdecl wcstoxq(struct localeinfo_struct *,wchar_t const *,wchar_t const *
   *,int,int)
   
   Library: Visual Studio 2005 Release */

__uint64 __cdecl
wcstoxq(localeinfo_struct *param_1,wchar_t *param_2,wchar_t **param_3,int param_4,int param_5)

{
  wchar_t _C;
  wchar_t *pwVar1;
  __uint64 _Var2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  ushort uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  localeinfo_struct local_34;
  int local_2c;
  char local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  ulonglong local_14;
  undefined8 local_c;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_34,param_1);
  if (param_3 != (wchar_t **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (wchar_t *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_28 != '\0') {
      *(uint *)(local_2c + 0x70) = *(uint *)(local_2c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  local_c._0_4_ = 0;
  local_c._4_4_ = 0;
  _C = *param_2;
  pwVar1 = param_2;
  while( true ) {
    pwVar8 = pwVar1 + 1;
    iVar4 = __iswctype_l(_C,8,&local_34);
    if (iVar4 == 0) break;
    _C = *pwVar8;
    pwVar1 = pwVar8;
  }
  if (_C == L'-') {
    param_5 = param_5 | 2;
LAB_101c7ea2:
    _C = *pwVar8;
    pwVar8 = pwVar1 + 2;
  }
  else if (_C == L'+') goto LAB_101c7ea2;
  uVar7 = (uint)(ushort)_C;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (wchar_t **)0x0) {
      *param_3 = param_2;
    }
    if (local_28 != '\0') {
      *(uint *)(local_2c + 0x70) = *(uint *)(local_2c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    iVar4 = __wchartodigit(uVar7);
    if (iVar4 != 0) {
      param_4 = 10;
      goto LAB_101c7f20;
    }
    if ((*pwVar8 != L'x') && (*pwVar8 != L'X')) {
      param_4 = 8;
      goto LAB_101c7f20;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (iVar4 = __wchartodigit(uVar7), iVar4 == 0)) &&
     ((*pwVar8 == L'x' || (*pwVar8 == L'X')))) {
    uVar7 = (uint)(ushort)pwVar8[1];
    pwVar8 = pwVar8 + 2;
  }
LAB_101c7f20:
  local_20 = param_4 >> 0x1f;
  local_24 = param_4;
  local_14 = __aulldvrm(0xffffffff,0xffffffff,param_4,local_20);
  local_18 = 0x10;
  local_1c = extraout_ECX;
  do {
    uVar5 = __wchartodigit(uVar7);
    if (uVar5 == 0xffffffff) {
      uVar6 = (ushort)uVar7;
      if (((uVar6 < 0x41) || (0x5a < uVar6)) && (0x19 < (ushort)(uVar6 - 0x61))) {
LAB_101c7fb6:
        pwVar8 = pwVar8 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (wchar_t **)0x0) {
            pwVar8 = param_2;
          }
          _Var2 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                ((_Var2 = local_c, (param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x8000000000000000 < local_c)) ||
                  (((param_5 & 2U) == 0 &&
                   ((0x7ffffffeffffffff < local_c && (0x7fffffffffffffff < local_c)))))))))) {
          puVar3 = (undefined4 *)FUN_101c8c22();
          *puVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            if ((param_5 & 2U) == 0) {
              _Var2 = 0x7fffffffffffffff;
            }
            else {
              _Var2 = 0x8000000000000000;
            }
          }
          else {
            _Var2 = 0xffffffffffffffff;
          }
        }
        local_c._4_4_ = (int)(_Var2 >> 0x20);
        local_c._0_4_ = (int)_Var2;
        if (param_3 != (wchar_t **)0x0) {
          *param_3 = pwVar8;
        }
        if ((param_5 & 2U) != 0) {
          _Var2 = CONCAT44(-(local_c._4_4_ + (uint)((int)local_c != 0)),-(int)local_c);
        }
        if (local_28 == '\0') {
          return _Var2;
        }
        *(uint *)(local_2c + 0x70) = *(uint *)(local_2c + 0x70) & 0xfffffffd;
        return _Var2;
      }
      if ((ushort)(uVar6 - 0x61) < 0x1a) {
        uVar7 = uVar7 - 0x20;
      }
      uVar5 = uVar7 - 0x37;
    }
    if ((uint)param_4 <= uVar5) goto LAB_101c7fb6;
    if ((local_c < local_14) || ((local_14 == local_c && ((local_18 != 0 || (uVar5 <= local_1c))))))
    {
      lVar9 = __allmul(local_24,local_20,local_c);
      local_c = lVar9 + (ulonglong)uVar5;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (wchar_t **)0x0) goto LAB_101c7fb6;
    }
    uVar7 = (uint)(ushort)*pwVar8;
    pwVar8 = pwVar8 + 1;
  } while( true );
}


// ==== 101c80b5 __wcstoi64

/* Library Function - Single Match
    __wcstoi64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __wcstoi64(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_103b3d3c == 0) {
    ppuVar2 = &PTR_DAT_10355d60;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = wcstoxq((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return _Var1;
}


// ==== 101c80de __flsbuf

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_EDI;
  uint uVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar5 = _File_00->_flag;
  if ((uVar5 & 0x82) == 0) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 9;
LAB_101c8102:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar5 & 0x40) != 0) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x22;
    goto LAB_101c8102;
  }
  if ((uVar5 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar5 & 0x10) == 0) {
      _File_00->_flag = uVar5 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = _File_00->_flag;
  _File_00->_flag = uVar5 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar5 & 0x10c) == 0) &&
     (((iVar3 = FUN_101cc9a2(), _File_00 != (FILE *)(iVar3 + 0x20) &&
       (iVar3 = FUN_101cc9a2(), _File_00 != (FILE *)(iVar3 + 0x40))) ||
      (iVar3 = __isatty((int)_File), iVar3 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108) == 0) {
    uVar5 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar5 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar5 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar4 = &DAT_103562e0;
      }
      else {
        puVar4 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_103b4580)[(int)_File >> 5]);
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_101c8228;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar5);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar5) {
    return _Ch & 0xff;
  }
LAB_101c8228:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}


// ==== 101c823e write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(wchar_t param_1)

{
  wint_t wVar1;
  FILE *in_EAX;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    wVar1 = __fputwc_nolock(param_1,in_EAX);
    if (wVar1 == 0xffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 101c8263 write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1);
  } while (*in_EAX != -1);
  return;
}


// ==== 101c8288 write_string

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  undefined2 *in_ECX;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char(*in_ECX);
      in_ECX = in_ECX + 1;
      if (*in_EAX == -1) {
        piVar1 = (int *)FUN_101c8c22();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char(0x3f);
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


// ==== 101c82d7 FUN_101c82d7

void FUN_101c82d7(int param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  ushort uVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  wchar_t *pwVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int extraout_ECX;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  bool bVar14;
  longlong lVar15;
  uint local_470;
  uint local_46c;
  uint local_468;
  undefined4 local_464;
  int local_460;
  localeinfo_struct local_45c;
  int local_454;
  char local_450;
  int local_44c;
  wchar_t *local_448;
  ushort *local_444;
  int local_440;
  undefined2 local_43c;
  short local_43a;
  char local_438;
  undefined1 local_437;
  int local_434;
  uint local_430;
  int local_42c;
  int local_428;
  int local_424;
  wchar_t *local_420;
  uint local_41c;
  uint local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [8];
  undefined1 local_3f8 [495];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)local_3f8;
  local_434 = param_1;
  local_420 = param_4;
  local_44c = 0;
  local_40c = 0;
  local_430 = 0;
  local_410 = 0;
  local_428 = 0;
  local_440 = 0;
  local_42c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_45c,param_3);
  if ((local_434 == 0) || (param_2 == (ushort *)0x0)) {
    puVar6 = (undefined4 *)FUN_101c8c22();
    *puVar6 = 0x16;
LAB_101c8347:
    FUN_101c2369(0,0,0,0,0);
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  else {
    uVar1 = *param_2;
    local_424 = 0;
    local_418 = 0;
    local_448 = (wchar_t *)0x0;
    iVar11 = 0;
    while (local_41c = (uint)uVar1, uVar1 != 0) {
      local_444 = param_2 + 1;
      if (local_424 < 0) break;
      if ((ushort)(uVar1 - 0x20) < 0x59) {
        uVar7 = (byte)(&DAT_1029aaa8)[local_41c] & 0xf;
      }
      else {
        uVar7 = 0;
      }
      local_460 = (int)(char)(&DAT_1029aac8)[uVar7 * 8 + iVar11] >> 4;
      switch(local_460) {
      case 0:
switchD_101c83c7_caseD_0:
        local_42c = 1;
        write_char(local_41c);
        break;
      case 1:
        local_410 = 0xffffffff;
        local_464 = 0;
        local_440 = 0;
        local_430 = 0;
        local_428 = 0;
        local_40c = 0;
        local_42c = 0;
        break;
      case 2:
        if (local_41c == 0x20) {
          local_40c = local_40c | 2;
        }
        else if (local_41c == 0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (local_41c == 0x2b) {
          local_40c = local_40c | 1;
        }
        else if (local_41c == 0x2d) {
          local_40c = local_40c | 4;
        }
        else if (local_41c == 0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (uVar1 == 0x2a) {
          local_420 = param_4 + 2;
          local_430 = *(uint *)param_4;
          if ((int)local_430 < 0) {
            local_40c = local_40c | 4;
            local_430 = -local_430;
          }
        }
        else {
          local_430 = local_41c + local_430 * 10 + -0x30;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (uVar1 == 0x2a) {
          local_420 = param_4 + 2;
          local_410 = *(uint *)param_4;
          if ((int)local_410 < 0) {
            local_410 = 0xffffffff;
          }
        }
        else {
          local_410 = local_41c + local_410 * 10 + -0x30;
        }
        break;
      case 6:
        if (local_41c == 0x49) {
          uVar1 = *local_444;
          if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
            local_444 = param_2 + 3;
            local_40c = local_40c | 0x8000;
          }
          else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
            local_444 = param_2 + 3;
            local_40c = local_40c & 0xffff7fff;
          }
          else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                   ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
            local_460 = 0;
            goto switchD_101c83c7_caseD_0;
          }
        }
        else if (local_41c == 0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (local_41c == 0x6c) {
          if (*local_444 == 0x6c) {
            local_444 = param_2 + 2;
            local_40c = local_40c | 0x1000;
          }
          else {
            local_40c = local_40c | 0x10;
          }
        }
        else if (local_41c == 0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        if (local_41c < 0x65) {
          if (local_41c == 100) {
LAB_101c87d0:
            local_40c = local_40c | 0x40;
LAB_101c87d4:
            local_41c = 10;
LAB_101c87db:
            if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
              local_420 = param_4 + 2;
              if ((local_40c & 0x20) == 0) {
                uVar7 = *(uint *)param_4;
                if ((local_40c & 0x40) == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (int)uVar7 >> 0x1f;
                }
              }
              else {
                if ((local_40c & 0x40) == 0) {
                  uVar7 = (uint)(ushort)*param_4;
                }
                else {
                  uVar7 = (uint)*param_4;
                }
                uVar10 = (int)uVar7 >> 0x1f;
              }
            }
            else {
              uVar7 = *(uint *)param_4;
              uVar10 = *(uint *)(param_4 + 2);
              local_420 = param_4 + 4;
            }
            if ((((local_40c & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
              bVar14 = uVar7 != 0;
              uVar7 = -uVar7;
              uVar10 = -(uVar10 + bVar14);
              local_40c = local_40c | 0x100;
            }
            if ((local_40c & 0x9000) == 0) {
              uVar10 = 0;
            }
            lVar15 = CONCAT44(uVar10,uVar7);
            if ((int)local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar7 == 0 && uVar10 == 0) {
              local_428 = 0;
            }
            pwVar13 = &local_209;
            while ((uVar7 = local_410 - 1, 0 < (int)local_410 || (lVar15 != 0))) {
              local_410 = uVar7;
              lVar15 = __aulldvrm(lVar15,local_41c,(int)local_41c >> 0x1f);
              iVar11 = extraout_ECX + 0x30;
              if (0x39 < iVar11) {
                iVar11 = iVar11 + local_44c;
              }
              *(byte *)pwVar13 = (byte)iVar11;
              pwVar13 = (wchar_t *)((int)pwVar13 + -1);
            }
            local_418 = (int)&local_209 + -(int)pwVar13;
            local_414 = (wchar_t *)((int)pwVar13 + 1);
            local_410 = uVar7;
            if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30)))) {
              *(byte *)pwVar13 = 0x30;
              local_418 = (int)&local_209 + -(int)pwVar13 + 1;
              local_414 = pwVar13;
            }
          }
          else if (local_41c < 0x54) {
            if (local_41c == 0x53) {
              if ((local_40c & 0x830) == 0) {
                local_40c = local_40c | 0x20;
              }
              goto LAB_101c8626;
            }
            if (local_41c != 0x41) {
              if (local_41c == 0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
LAB_101c86ad:
                wVar2 = *param_4;
                local_468 = (uint)(ushort)wVar2;
                local_420 = param_4 + 2;
                local_42c = 1;
                if ((local_40c & 0x20) == 0) {
                  local_408[0] = wVar2;
                }
                else {
                  local_438 = (char)wVar2;
                  local_437 = 0;
                  iVar11 = __mbtowc_l(local_408,&local_438,
                                      (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                  if (iVar11 < 0) {
                    local_440 = 1;
                  }
                }
                local_418 = 1;
                local_414 = local_408;
                goto LAB_101c8a51;
              }
              if ((local_41c != 0x45) && (local_41c != 0x47)) goto LAB_101c8a51;
            }
            local_41c = local_41c + 0x20;
            local_464 = 1;
LAB_101c85dd:
            local_40c = local_40c | 0x40;
            local_418 = 0x200;
            pwVar12 = local_408;
            uVar7 = local_418;
            pwVar13 = local_408;
            if ((int)local_410 < 0) {
              local_410 = 6;
            }
            else if (local_410 == 0) {
              if ((short)local_41c == 0x67) {
                local_410 = 1;
              }
            }
            else {
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
              if (0xa3 < (int)local_410) {
                uVar7 = local_410 + 0x15d;
                local_414 = local_408;
                local_448 = __malloc_crt(uVar7);
                pwVar12 = local_448;
                pwVar13 = local_448;
                if (local_448 == (wchar_t *)0x0) {
                  local_410 = 0xa3;
                  pwVar12 = local_408;
                  uVar7 = local_418;
                  pwVar13 = local_414;
                }
              }
            }
            local_414 = pwVar13;
            local_418 = uVar7;
            local_470 = *(uint *)param_4;
            local_420 = param_4 + 4;
            local_46c = *(uint *)(param_4 + 2);
            pcVar8 = (code *)FUN_101c64b3(PTR_LAB_103555b8,&local_470,pwVar12,local_418,
                                          (int)(char)local_41c,local_410,local_464,&local_45c);
            (*pcVar8)();
            uVar7 = local_40c & 0x80;
            if ((uVar7 != 0) && (local_410 == 0)) {
              pcVar8 = (code *)FUN_101c64b3(PTR_LAB_103555c4,pwVar12,&local_45c);
              (*pcVar8)();
            }
            if (((short)local_41c == 0x67) && (uVar7 == 0)) {
              pcVar8 = (code *)FUN_101c64b3(PTR_LAB_103555c0,pwVar12,&local_45c);
              (*pcVar8)();
            }
            pwVar13 = pwVar12;
            pwVar5 = local_414;
            if ((byte)*pwVar12 == 0x2d) {
              local_40c = local_40c | 0x100;
              pwVar13 = (wchar_t *)((int)pwVar12 + 1);
              pwVar5 = (wchar_t *)((int)pwVar12 + 1);
            }
LAB_101c8746:
            local_414 = pwVar5;
            local_418 = _strlen((char *)pwVar13);
          }
          else {
            if (local_41c == 0x58) goto LAB_101c88dc;
            if (local_41c == 0x5a) {
              psVar3 = *(short **)param_4;
              local_420 = param_4 + 2;
              pwVar13 = (wchar_t *)PTR_DAT_10355d68;
              pwVar5 = (wchar_t *)PTR_DAT_10355d68;
              if ((psVar3 == (short *)0x0) ||
                 (local_414 = *(wchar_t **)(psVar3 + 2), pwVar5 = (wchar_t *)PTR_DAT_10355d68,
                 local_414 == (wchar_t *)0x0)) goto LAB_101c8746;
              local_418 = (uint)*psVar3;
              if ((local_40c & 0x800) != 0) {
                iVar11 = local_418 - ((int)local_418 >> 0x1f);
                goto LAB_101c8a4c;
              }
              local_42c = 0;
            }
            else {
              if (local_41c == 0x61) goto LAB_101c85dd;
              if (local_41c == 99) goto LAB_101c86ad;
            }
          }
LAB_101c8a51:
          uVar7 = local_418;
          if (local_440 == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_101c8a8d;
                  local_43c = 0x20;
                }
                else {
                  local_43c = 0x2b;
                }
              }
              else {
                local_43c = 0x2d;
              }
              local_428 = 1;
            }
LAB_101c8a8d:
            iVar11 = local_430 + (-local_428 - local_418);
            if ((local_40c & 0xc) == 0) {
              write_multi_char(0x20,iVar11,local_434);
            }
            iVar9 = local_434;
            write_string(local_428);
            if (((local_40c & 8) != 0) && ((local_40c & 4) == 0)) {
              write_multi_char(0x30,iVar11,iVar9);
            }
            if ((local_42c == 0) && (0 < (int)uVar7)) {
              local_41c = uVar7;
              pwVar13 = local_414;
              do {
                local_41c = local_41c - 1;
                iVar9 = __mbtowc_l((wchar_t *)&local_468,(char *)pwVar13,
                                   (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                if (iVar9 < 1) {
                  local_424 = -1;
                  break;
                }
                write_char(local_468);
                pwVar13 = (wchar_t *)((int)pwVar13 + iVar9);
              } while (0 < (int)local_41c);
            }
            else {
              write_string(uVar7);
            }
            if ((-1 < local_424) && ((local_40c & 4) != 0)) {
              write_multi_char(0x20,iVar11,local_434);
            }
          }
        }
        else {
          if (0x70 < local_41c) {
            if (local_41c == 0x73) {
LAB_101c8626:
              uVar7 = local_410;
              if (local_410 == 0xffffffff) {
                uVar7 = 0x7fffffff;
              }
              local_420 = param_4 + 2;
              local_414 = *(wchar_t **)param_4;
              if ((local_40c & 0x20) == 0) {
                pwVar13 = local_414;
                if (local_414 == (wchar_t *)0x0) {
                  pwVar13 = (wchar_t *)PTR_u__null__10355d6c;
                  local_414 = (wchar_t *)PTR_u__null__10355d6c;
                }
                for (; (uVar7 != 0 && (uVar7 = uVar7 - 1, *pwVar13 != L'\0')); pwVar13 = pwVar13 + 1
                    ) {
                }
                iVar11 = (int)pwVar13 - (int)local_414;
LAB_101c8a4c:
                local_420 = param_4 + 2;
                local_42c = 1;
                local_418 = iVar11 >> 1;
              }
              else {
                if (local_414 == (wchar_t *)0x0) {
                  local_414 = (wchar_t *)PTR_DAT_10355d68;
                }
                local_418 = 0;
                pwVar13 = local_414;
                if (0 < (int)uVar7) {
                  do {
                    if ((byte)*pwVar13 == 0) break;
                    iVar11 = __isleadbyte_l((uint)(byte)*pwVar13,&local_45c);
                    if (iVar11 != 0) {
                      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                    }
                    pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                    local_418 = local_418 + 1;
                  } while ((int)local_418 < (int)uVar7);
                }
              }
              goto LAB_101c8a51;
            }
            if (local_41c == 0x75) goto LAB_101c87d4;
            if (local_41c != 0x78) goto LAB_101c8a51;
            local_44c = 0x27;
LAB_101c8902:
            local_41c = 0x10;
            if ((local_40c & 0x80) != 0) {
              local_43a = (short)local_44c + 0x51;
              local_43c = 0x30;
              local_428 = 2;
            }
            goto LAB_101c87db;
          }
          if (local_41c == 0x70) {
            local_410 = 8;
LAB_101c88dc:
            local_44c = 7;
            goto LAB_101c8902;
          }
          if (local_41c < 0x65) goto LAB_101c8a51;
          if (local_41c < 0x68) goto LAB_101c85dd;
          if (local_41c == 0x69) goto LAB_101c87d0;
          if (local_41c != 0x6e) {
            if (local_41c != 0x6f) goto LAB_101c8a51;
            local_41c = 8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_101c87db;
          }
          piVar4 = *(int **)param_4;
          local_420 = param_4 + 2;
          iVar11 = FUN_101d1b24();
          if (iVar11 == 0) {
            puVar6 = (undefined4 *)FUN_101c8c22();
            *puVar6 = 0x16;
            goto LAB_101c8347;
          }
          if ((local_40c & 0x20) == 0) {
            *piVar4 = local_424;
          }
          else {
            *(undefined2 *)piVar4 = (undefined2)local_424;
          }
          local_440 = 1;
        }
        if (local_448 != (wchar_t *)0x0) {
          _free(local_448);
          local_448 = (wchar_t *)0x0;
        }
      }
      iVar11 = local_460;
      param_4 = local_420;
      param_2 = local_444;
      uVar1 = *local_444;
    }
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_3f8);
  return;
}


// ==== 101c8be7 FUN_101c8be7

int FUN_101c8be7(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_103555e0)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x103555e4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}


// ==== 101c8c22 FUN_101c8c22

undefined * FUN_101c8c22(void)

{
  int iVar1;
  
  iVar1 = FUN_101c6658();
  if (iVar1 == 0) {
    return &DAT_10355748;
  }
  return (undefined *)(iVar1 + 8);
}


// ==== 101c8c35 FUN_101c8c35

undefined * FUN_101c8c35(void)

{
  int iVar1;
  
  iVar1 = FUN_101c6658();
  if (iVar1 == 0) {
    return &DAT_1035574c;
  }
  return (undefined *)(iVar1 + 0xc);
}


// ==== 101c8c48 FUN_101c8c48

void FUN_101c8c48(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_101c8c35();
  *puVar1 = param_1;
  uVar2 = FUN_101c8be7(param_1);
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = uVar2;
  return;
}


// ==== 101c8c66 _strcpy_s

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
      puVar2 = (undefined4 *)FUN_101c8c22();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_101c8c85;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_101c8c22();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_101c8c85:
  FUN_101c2369(0,0,0,0,0);
  return eVar4;
}


// ==== 101c8ccb FUN_101c8ccb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c8ccb(void)

{
  _DAT_103b56c0 = 0;
  return;
}


// ==== 101c8cd3 strtoxl

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
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x16;
    FUN_101c2369(0,0,0,0,0);
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
LAB_101c8d8a:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_101c8d8a;
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
      goto LAB_101c8df0;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_101c8df0;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_101c8df0;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_101c8df0:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_101c8e4a:
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
          puVar3 = (undefined4 *)FUN_101c8c22();
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
    if ((uint)param_4 <= uVar6) goto LAB_101c8e4a;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_101c8e4a;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 101c8efe _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_103b3d3c == 0) {
    ppuVar2 = &PTR_DAT_10355d60;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 101c8f27 FUN_101c8f27

void FUN_101c8f27(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
  
  param_3 = param_3 >> 7;
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
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}


// ==== 101c8fae __VEC_memcpy

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
      FUN_101c8f27(param_1,param_2,param_3 - uVar3);
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
    __VEC_memcpy((undefined1 *)((int)param_1 + iVar1),(undefined1 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}


// ==== 101c9091 FUN_101c9091

undefined4 FUN_101c9091(void)

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


// ==== 101c90c0 setSBCS

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
    *puVar1 = puVar1[(int)&DAT_10355750 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10355750 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 101c9115 setSBUpLow

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
  
  local_8 = DAT_103554c4 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_101c927c:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_101c927c;
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
          goto LAB_101c9223;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_101c9223:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}


// ==== 101c929f ___updatetmbcinfo

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
  if (((p_Var1->_ownlocale & DAT_10355c74) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10355b78) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10355750)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10355b78;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10355b78;
      InterlockedIncrement((LONG *)PTR_DAT_10355b78);
    }
    FUN_101c933a();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


// ==== 101c933a FUN_101c933a

void FUN_101c933a(void)

{
  FUN_101cb39a(0xd);
  return;
}


// ==== 101c9343 getSystemCP

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
  DAT_103b3d20 = 0;
  if (unaff_ESI == -2) {
    DAT_103b3d20 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_103b3d20 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_103b3d20 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_103b3d20 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}


// ==== 101c93bd FUN_101c93bd

void FUN_101c93bd(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  undefined8 uVar13;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_101c93f9:
    if (*(uint *)((int)&DAT_10355b80 + uVar5) != uVar4) goto code_r0x101c9405;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar9 = &DAT_10355b90 + (int)local_20 * 0x30;
    local_20 = pbVar9;
    do {
      for (; (*pbVar9 != 0 && (bVar3 = pbVar9[1], bVar3 != 0)); pbVar9 = pbVar9 + 2) {
        for (uVar5 = (uint)*pbVar9; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x10355b7c);
          bVar3 = pbVar9[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar9 = local_20 + 8;
      local_20 = pbVar9;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar7 = FUN_101c9091();
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    puVar8 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10355b84 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_101c952a;
  }
LAB_101c93e6:
  setSBCS(unaff_EDI);
LAB_101c9587:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x101c9405:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x101c9412;
  goto LAB_101c93f9;
code_r0x101c9412:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_101c9587;
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
            pbVar9 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar9 = *pbVar9 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar9 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar9 = *pbVar9 | 8;
        pbVar9 = pbVar9 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar13 = FUN_101c9091();
      *(int *)(param_2 + 0xc) = (int)uVar13;
      *(int *)(param_2 + 8) = (int)((ulonglong)uVar13 >> 0x20);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_101c952a:
    setSBUpLow(unaff_EDI);
    goto LAB_101c9587;
  }
  if (DAT_103b3d20 == 0) goto LAB_101c9587;
  goto LAB_101c93e6;
}


// ==== 101c9596 __setmbcp

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
      local_24 = FUN_101c93bd(iVar2,ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10355750)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10355c74 & 1) == 0)) {
          __lock(0xd);
          _DAT_103b3d30 = ptVar3->mbcodepage;
          _DAT_103b3d34 = ptVar3->ismbcodepage;
          _DAT_103b3d38 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_103b3d24)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10355970)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10355a78)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10355b78);
          if ((LVar4 == 0) && (PTR_DAT_10355b78 != &DAT_10355750)) {
            _free(PTR_DAT_10355b78);
          }
          PTR_DAT_10355b78 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_101c96f7();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10355750) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_101c8c22();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}


// ==== 101c96f7 FUN_101c96f7

void FUN_101c96f7(void)

{
  FUN_101cb39a(0xd);
  return;
}


// ==== 101c9730 ___initmbctable

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_103b56d8 == 0) {
    __setmbcp(-3);
    DAT_103b56d8 = 1;
  }
  return 0;
}


// ==== 101c974e ___freetlocinfo

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10356460)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(undefined4 *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 *)((int)param_1 + 0xbc));
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
  if ((ppuVar2 != &PTR_DAT_103563a0) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10355c78) &&
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


// ==== 101c988e ___addlocaleref

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void ___addlocaleref(LONG *param_1)

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
    if (((undefined *)pLVar1[-2] != &DAT_10355c78) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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


// ==== 101c9914 ___removelocaleref

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * ___removelocaleref(LONG *param_1)

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
      if (((undefined *)pLVar1[-2] != &DAT_10355c78) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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


// ==== 101c99a0 __updatetlocinfoEx_nolock

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

int * __updatetlocinfoEx_nolock(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int *unaff_EDI;
  
  if ((unaff_EDI != (int *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    piVar1 = (int *)*in_EAX;
    if (piVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref();
      if (piVar1 != (int *)0x0) {
        ___removelocaleref(piVar1);
        if ((*piVar1 == 0) && (piVar1 != (int *)&DAT_10355c80)) {
          ___freetlocinfo(piVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (int *)0x0;
}


// ==== 101c99de ___updatetlocinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10355c74) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_101c9a48();
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


// ==== 101c9a48 FUN_101c9a48

void FUN_101c9a48(void)

{
  FUN_101cb39a(0xc);
  return;
}


// ==== 101c9a54 __isleadbyte_l

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


// ==== 101c9a8a _isleadbyte

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 101c9a98 write_char

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


// ==== 101c9acb write_multi_char

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


// ==== 101c9aef write_string

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = (int *)FUN_101c8c22();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


// ==== 101c9b39 FUN_101c9b39

/* WARNING: Type propagation algorithm not settling */

void FUN_101c9b39(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  wchar_t *pwVar3;
  int *piVar4;
  ulonglong uVar5;
  FILE *pFVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  code *pcVar11;
  errno_t eVar12;
  int extraout_ECX;
  byte *pbVar13;
  size_t sVar14;
  wchar_t *pwVar15;
  bool bVar16;
  longlong lVar17;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_234;
  char local_233;
  int local_230;
  FILE *local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [10];
  undefined1 local_1fc [491];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)local_1fc;
  local_22c = param_1;
  local_228 = param_4;
  local_248 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_24c = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  if (local_22c != (FILE *)0x0) {
    if ((local_22c->_flag & 0x40) == 0) {
      iVar8 = __fileno(local_22c);
      if ((iVar8 == -1) || (iVar8 = __fileno(local_22c), iVar8 == -2)) {
        puVar10 = &DAT_103562e0;
      }
      else {
        iVar8 = __fileno(local_22c);
        uVar9 = __fileno(local_22c);
        puVar10 = (undefined *)((uVar9 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar8 >> 5]);
      }
      if ((puVar10[0x24] & 0x7f) == 0) {
        iVar8 = __fileno(local_22c);
        if ((iVar8 == -1) || (iVar8 = __fileno(local_22c), iVar8 == -2)) {
          puVar10 = &DAT_103562e0;
        }
        else {
          iVar8 = __fileno(local_22c);
          uVar9 = __fileno(local_22c);
          puVar10 = (undefined *)((uVar9 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar8 >> 5]);
        }
        if ((puVar10[0x24] & 0x80) == 0) goto LAB_101c9c77;
      }
    }
    else {
LAB_101c9c77:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_230 = 0;
        local_224 = 0;
        local_250 = (wchar_t *)0x0;
        iVar8 = 0;
        while ((local_215 != 0 && (pbVar13 = param_2 + 1, local_244 = pbVar13, -1 < local_230))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar9 = (byte)(&DAT_1029aaa8)[(char)local_215] & 0xf;
          }
          else {
            uVar9 = 0;
          }
          local_270 = (int)(char)(&DAT_1029aac8)[uVar9 * 8 + iVar8] >> 4;
          switch(local_270) {
          case 0:
switchD_101c9cdb_caseD_0:
            local_240 = 0;
            iVar8 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar8 != 0) {
              write_char();
              local_244 = param_2 + 2;
              if (*pbVar13 == 0) {
LAB_101ca46e:
                puVar7 = (undefined4 *)FUN_101c8c22();
                *puVar7 = 0x16;
                goto LAB_101c9ba9;
              }
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_274 = 0;
            local_24c = 0;
            local_23c = 0;
            local_238 = 0;
            local_214 = 0;
            local_240 = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_23c = *(int *)param_4;
              if (local_23c < 0) {
                local_214 = local_214 | 4;
                local_23c = -local_23c;
              }
            }
            else {
              local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_21c = *(int *)param_4;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar13;
              if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_244 = param_2 + 3;
              }
              else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_244 = param_2 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_270 = 0;
                goto switchD_101c9cdb_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar13 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_244 = param_2 + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_101ca0ba:
                local_214 = local_214 | 0x40;
LAB_101ca0be:
                local_224 = 10;
LAB_101ca0c5:
                if (((short)local_214 < 0) || ((local_214 & 0x1000) != 0)) {
                  uVar9 = *(uint *)param_4;
                  iVar8 = *(int *)(param_4 + 2);
                  local_228 = param_4 + 4;
                }
                else {
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x20) == 0) {
                    uVar9 = *(uint *)param_4;
                    if ((local_214 & 0x40) == 0) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = (int)uVar9 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar9 = (uint)(ushort)*param_4;
                    }
                    else {
                      uVar9 = (uint)*param_4;
                    }
                    iVar8 = (int)uVar9 >> 0x1f;
                  }
                }
                if ((((local_214 & 0x40) != 0) && (iVar8 < 1)) && (iVar8 < 0)) {
                  bVar16 = uVar9 != 0;
                  uVar9 = -uVar9;
                  iVar8 = -(iVar8 + (uint)bVar16);
                  local_214 = local_214 | 0x100;
                }
                if ((local_214 & 0x9000) == 0) {
                  iVar8 = 0;
                }
                lVar17 = CONCAT44(iVar8,uVar9);
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar9 == 0 && iVar8 == 0) {
                  local_238 = 0;
                }
                pwVar15 = &local_11;
                while( true ) {
                  uVar5 = (ulonglong)lVar17 >> 0x20;
                  iVar8 = local_21c + -1;
                  if ((local_21c < 1) && (lVar17 == 0)) break;
                  local_21c = iVar8;
                  lVar17 = __aulldvrm(lVar17,local_224,(int)local_224 >> 0x1f);
                  iVar8 = extraout_ECX + 0x30;
                  if (0x39 < iVar8) {
                    iVar8 = iVar8 + local_248;
                  }
                  *(char *)pwVar15 = (char)iVar8;
                  pwVar15 = (wchar_t *)((int)pwVar15 + -1);
                  local_264 = (size_t)uVar5;
                }
                local_224 = (int)&local_11 + -(int)pwVar15;
                local_220 = (wchar_t *)((int)pwVar15 + 1);
                local_21c = iVar8;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar15 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar15 + 1;
                  local_220 = pwVar15;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_101c9f43;
                }
                if (local_215 == 0x41) {
LAB_101c9eef:
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_101c9efc:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar15 = local_210;
                  sVar14 = local_264;
                  pwVar3 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar14 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_250 = __malloc_crt(sVar14);
                      pwVar15 = local_250;
                      pwVar3 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar15 = local_210;
                        sVar14 = local_264;
                        pwVar3 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar3;
                  local_264 = sVar14;
                  local_27c = *(undefined4 *)param_4;
                  local_228 = param_4 + 4;
                  local_278 = *(undefined4 *)(param_4 + 2);
                  pcVar11 = (code *)FUN_101c64b3(PTR_LAB_103555b8,&local_27c,pwVar15,local_264,
                                                 (int)(char)local_215,local_21c,local_274,&local_260
                                                );
                  (*pcVar11)();
                  uVar9 = local_214 & 0x80;
                  if ((uVar9 != 0) && (local_21c == 0)) {
                    pcVar11 = (code *)FUN_101c64b3(PTR_LAB_103555c4,pwVar15,&local_260);
                    (*pcVar11)();
                  }
                  if ((local_215 == 0x67) && (uVar9 == 0)) {
                    pcVar11 = (code *)FUN_101c64b3(PTR_LAB_103555c0,pwVar15,&local_260);
                    (*pcVar11)();
                  }
                  if ((char)*pwVar15 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar15 + 1);
                    pwVar15 = local_220;
                  }
LAB_101ca030:
                  local_224 = _strlen((char *)pwVar15);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_101c9fa0:
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*param_4;
                    local_224 = 1;
                  }
                  else {
                    eVar12 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*param_4);
                    if (eVar12 != 0) {
                      local_24c = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_101c9eef;
              }
              else {
                if (local_215 == 0x58) goto LAB_101ca1c5;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)param_4;
                  local_228 = param_4 + 2;
                  pwVar15 = (wchar_t *)PTR_DAT_10355d68;
                  local_220 = (wchar_t *)PTR_DAT_10355d68;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar3 = *(wchar_t **)(psVar2 + 2), pwVar3 == (wchar_t *)0x0))
                  goto LAB_101ca030;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar3;
                  if ((local_214 & 0x800) == 0) {
                    local_240 = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_240 = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_101c9efc;
                  if (local_215 == 99) goto LAB_101c9fa0;
                }
              }
LAB_101ca33d:
              if (local_24c == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_101ca373;
                      local_234 = 0x20;
                    }
                    else {
                      local_234 = 0x2b;
                    }
                  }
                  else {
                    local_234 = 0x2d;
                  }
                  local_238 = 1;
                }
LAB_101ca373:
                iVar8 = (local_23c - local_224) - local_238;
                if ((local_214 & 0xc) == 0) {
                  write_multi_char(0x20,iVar8,local_22c);
                }
                pFVar6 = local_22c;
                write_string(local_238);
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  write_multi_char(0x30,iVar8,pFVar6);
                }
                if ((local_240 == 0) || ((int)local_224 < 1)) {
                  write_string(local_224);
                }
                else {
                  local_264 = local_224;
                  pwVar15 = local_220;
                  do {
                    _WCh = *pwVar15;
                    local_264 = local_264 - 1;
                    pwVar15 = pwVar15 + 1;
                    eVar12 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar12 != 0) || (local_26c[0] == 0)) {
                      local_230 = -1;
                      break;
                    }
                    write_string(local_26c[0]);
                  } while (local_264 != 0);
                }
                if ((-1 < local_230) && ((local_214 & 4) != 0)) {
                  write_multi_char(0x20,iVar8,pFVar6);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_101c9f43:
                  iVar8 = local_21c;
                  if (local_21c == -1) {
                    iVar8 = 0x7fffffff;
                  }
                  local_228 = param_4 + 2;
                  local_220 = *(wchar_t **)param_4;
                  if ((local_214 & 0x810) == 0) {
                    pwVar15 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar15 = (wchar_t *)PTR_DAT_10355d68;
                      local_220 = (wchar_t *)PTR_DAT_10355d68;
                    }
                    for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar15 != '\0'));
                        pwVar15 = (wchar_t *)((int)pwVar15 + 1)) {
                    }
                    local_224 = (int)pwVar15 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__10355d6c;
                    }
                    local_240 = 1;
                    for (pwVar15 = local_220;
                        (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar15 != L'\0'));
                        pwVar15 = pwVar15 + 1) {
                    }
                    local_224 = (int)pwVar15 - (int)local_220 >> 1;
                  }
                  goto LAB_101ca33d;
                }
                if (local_215 == 0x75) goto LAB_101ca0be;
                if (local_215 != 0x78) goto LAB_101ca33d;
                local_248 = 0x27;
LAB_101ca1eb:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_233 = (char)local_248 + 'Q';
                  local_234 = 0x30;
                  local_238 = 2;
                }
                goto LAB_101ca0c5;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_101ca1c5:
                local_248 = 7;
                goto LAB_101ca1eb;
              }
              if ((char)local_215 < 'e') goto LAB_101ca33d;
              if ((char)local_215 < 'h') goto LAB_101c9efc;
              if (local_215 == 0x69) goto LAB_101ca0ba;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_101ca33d;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_101ca0c5;
              }
              piVar4 = *(int **)param_4;
              local_228 = param_4 + 2;
              iVar8 = FUN_101d1b24();
              if (iVar8 == 0) goto LAB_101ca46e;
              if ((local_214 & 0x20) == 0) {
                *piVar4 = local_230;
              }
              else {
                *(undefined2 *)piVar4 = (undefined2)local_230;
              }
              local_24c = 1;
            }
            if (local_250 != (wchar_t *)0x0) {
              _free(local_250);
              local_250 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_244;
          iVar8 = local_270;
          param_2 = local_244;
          param_4 = local_228;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_101ca495;
      }
    }
  }
  puVar7 = (undefined4 *)FUN_101c8c22();
  *puVar7 = 0x16;
LAB_101c9ba9:
  FUN_101c2369(0,0,0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_101ca495:
  __security_check_cookie(local_8 ^ (uint)local_1fc);
  return;
}


// ==== 101ca4cd _abort

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_10355d70 & 1) != 0) {
    FUN_101ca5de(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_10355d70 & 2) != 0) {
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


// ==== 101ca5c0 __set_abort_behavior

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_10355d70;
  DAT_10355d70 = ~_Mask & DAT_10355d70 | _Flags & _Mask;
  return uVar1;
}


// ==== 101ca5de FUN_101ca5de

void FUN_101ca5de(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  char *_Dst;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_10355d78)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_103b398c == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x10355d7c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_103b3d60,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_103b3e7d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_103b3d79,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_103b3d79,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_103b3d79);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_103b3d79);
        _Dst = (char *)((int)&DAT_103b3d3c + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_103b4074 - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_103b3d60,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_103b3d60,0x314,*(char **)(uVar6 * 8 + 0x10355d7c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_101d24aa(&DAT_103b3d60,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ==== 101ca77e __FF_MSGBANNER

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
    if (DAT_103b398c != 1) {
      return;
    }
  }
  FUN_101ca5de(0xfc);
  FUN_101ca5de(0xff);
  return;
}


// ==== 101ca7b7 FUN_101ca7b7

void FUN_101ca7b7(undefined4 param_1)

{
  DAT_103b407c = param_1;
  return;
}


// ==== 101ca7c1 __towlower_l

/* Library Function - Single Match
    __towlower_l
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale)

{
  wchar_t *_DWMapFlag;
  wint_t wVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  wVar1 = 0xffff;
  if (_C != 0xffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    _DWMapFlag = (local_18.locinfo)->lc_category[0].wlocale;
    if (_DWMapFlag == (wchar_t *)0x0) {
      wVar1 = _C;
      if ((ushort)(_C - 0x41) < 0x1a) {
        wVar1 = _C + 0x20;
      }
    }
    else if (_C < 0x100) {
      iVar2 = __iswctype_l(_C,1,&local_18);
      wVar1 = _C;
      if (iVar2 != 0) {
        wVar1 = (wint_t)*(byte *)((int)local_18.locinfo[1].lc_category[0].wlocale + (__C & 0xffff));
      }
    }
    else {
      iVar2 = ___crtLCMapStringW((LPCWSTR)&local_18,(DWORD)_DWMapFlag,(LPCWSTR)0x100,(int)&_C,
                                 (LPWSTR)0x1,(int)local_8);
      wVar1 = _C;
      if (iVar2 != 0) {
        wVar1 = local_8[0];
      }
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return wVar1;
}


// ==== 101ca86e __wchartodigit

/* Library Function - Single Match
    __wchartodigit
   
   Library: Visual Studio 2005 Release */

int __wchartodigit(ushort param_1)

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
      if (param_1 < 0x66a) goto LAB_101ca8ac;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_101ca8ac;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_101ca8ac;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_101ca8ac;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_101ca8ac;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_101ca8ac;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_101ca8ac;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_101ca8ac;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_101ca8ac;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_101ca8ac;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_101ca8ac;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_101ca8ac;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_101ca8ac;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_101ca8ac;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_101ca8ac;
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
LAB_101ca8ac:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}


// ==== 101ca9f0 fastzero_I

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  param_2 = param_2 >> 7;
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
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}


// ==== 101caa47 __VEC_memzero

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 * __VEC_memzero(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = param_1 + (param_3 - uVar2);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    puVar4 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    __VEC_memzero(param_1 + iVar3,0,param_3 - iVar3);
  }
  return param_1;
}


// ==== 101caad6 __crtGetStringTypeW_stat

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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_101cace8;
  if (DAT_103b4080 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_103b4080 = 2;
      }
      goto LAB_101cab3d;
    }
    DAT_103b4080 = 1;
  }
  else {
LAB_101cab3d:
    if (DAT_103b4080 != 1) {
      if ((DAT_103b4080 != 2) && (DAT_103b4080 != 0)) goto LAB_101cace8;
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
      if (_Size_00 == 0) goto LAB_101cace8;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_101cabee:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_101cabee;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_101cace8;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_101cacdc;
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
LAB_101cacdc:
      __freea(local_c);
      goto LAB_101cace8;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_101cace8:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 101cacfa ___crtGetStringTypeW

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


// ==== 101cad38 __crtLCMapStringA_stat

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
  LPSTR pCVar7;
  int *in_ECX;
  char *pcVar8;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  if (DAT_103b4084 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_103b4084 = 2;
      }
    }
    else {
      DAT_103b4084 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_101cada7;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_101cada7:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_103b4084 == 2) || (DAT_103b4084 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    iVar3 = ___ansicp(param_1);
    if (iVar3 == -1) goto LAB_101cb0c8;
    if (iVar3 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,iVar3,param_3,&param_4,0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_101cb0c8;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar7 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_101cb0a5;
          pCVar7 = &stack0xffffffe4;
        }
        else {
          pCVar7 = _malloc(local_c + 8);
          if (pCVar7 != (LPSTR)0x0) {
            pCVar7[0] = -0x23;
            pCVar7[1] = -0x23;
            pCVar7[2] = '\0';
            pCVar7[3] = '\0';
            pCVar7 = pCVar7 + 8;
          }
        }
        if (pCVar7 != (LPSTR)0x0) {
          _memset(pCVar7,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pCVar7,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(iVar3,param_7,pCVar7,&local_c,param_5,param_6);
          }
          __freea(pCVar7);
        }
      }
    }
LAB_101cb0a5:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_101cb0c8;
  }
  if (DAT_103b4084 != 1) goto LAB_101cb0c8;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_101cb0c8;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_101cae4f:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_101cae4f;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_101cb0c8;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_101caf5e;
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
          pCVar7 = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            pCVar7 = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,pCVar7,(int)pcVar5,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_101caf5e:
  __freea(local_10);
LAB_101cb0c8:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 101cb0da ___crtLCMapStringA

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


// ==== 101cb11d __isctype_l

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


// ==== 101cb1d3 ___heap_select

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


// ==== 101cb22e __heap_init

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_103b4088 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_103b4088 == (HANDLE)0x0) {
    return 0;
  }
  DAT_103b56bc = ___heap_select();
  if ((DAT_103b56bc == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_103b4088);
    DAT_103b4088 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}


// ==== 101cb288 __heap_term

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_103b56bc == 3) {
    iVar2 = 0;
    if (0 < DAT_103b56a4) {
      puVar1 = (undefined4 *)((int)DAT_103b56a8 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_103b4088,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_103b56a4);
    }
    HeapFree(DAT_103b4088,0,DAT_103b56a8);
  }
  HeapDestroy(DAT_103b4088);
  DAT_103b4088 = (HANDLE)0x0;
  return;
}


// ==== 101cb2fc __mtinitlocks

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_103b4090;
  do {
    if ((&DAT_10355e44)[iVar2 * 2] == 1) {
      (&DAT_10355e40)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10355e40)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10355e40)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


// ==== 101cb345 __mtdeletelocks

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10355e40;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10355f60);
  puVar1 = &DAT_10355e40;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10355f60);
  return;
}


// ==== 101cb39a FUN_101cb39a

void FUN_101cb39a(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10355e40)[param_1 * 2]);
  return;
}


// ==== 101cb3af __mtinitlocknum

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
  if (DAT_103b4088 == 0) {
    __FF_MSGBANNER();
    FUN_101ca5de(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10355e40 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_101c8c22();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_101c8c22();
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
      FUN_101cb469();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// ==== 101cb469 FUN_101cb469

void FUN_101cb469(void)

{
  FUN_101cb39a(10);
  return;
}


// ==== 101cb472 __lock

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10355e40)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10355e40)[_File * 2]);
  return;
}


// ==== 101cb4a3 ___sbh_heap_init

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_103b56a8 = HeapAlloc(DAT_103b4088,0,0x140);
  if (DAT_103b56a8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_103b41e0 = 0;
  DAT_103b56a4 = 0;
  DAT_103b56b0 = DAT_103b56a8;
  DAT_103b56ac = param_1;
  DAT_103b56b4 = 0x10;
  return 1;
}


// ==== 101cb4eb thunk_FUN_101cb50f thunk -> 101cb50f

// ==== 101cb50f FUN_101cb50f

void FUN_101cb50f(int param_1)

{
  uint in_EAX;
  uint in_ECX;
  
  for (; (in_EAX < in_ECX && (0xfffff < (uint)(param_1 - *(int *)(in_EAX + 0xc))));
      in_EAX = in_EAX + 0x14) {
  }
  return;
}


// ==== 101cb516 ___sbh_free_block

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void ___sbh_free_block(uint *param_1,int param_2)

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
    puVar10 = (uint *)(((int)local_8 >> 4) + -1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) + -1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) + -1);
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
      if (DAT_103b41e0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_103b56b8 * 0x8000 + DAT_103b41e0[3]),0x8000,0x4000);
        DAT_103b41e0[2] = DAT_103b41e0[2] | 0x80000000U >> ((byte)DAT_103b56b8 & 0x1f);
        *(undefined4 *)(DAT_103b41e0[4] + 0xc4 + DAT_103b56b8 * 4) = 0;
        *(char *)(DAT_103b41e0[4] + 0x43) = *(char *)(DAT_103b41e0[4] + 0x43) + -1;
        if (*(char *)(DAT_103b41e0[4] + 0x43) == '\0') {
          DAT_103b41e0[1] = DAT_103b41e0[1] & 0xfffffffe;
        }
        if (DAT_103b41e0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_103b41e0[3],0,0x8000);
          HeapFree(DAT_103b4088,0,(LPVOID)DAT_103b41e0[4]);
          _memmove(DAT_103b41e0,DAT_103b41e0 + 5,
                   (DAT_103b56a4 * 0x14 - (int)DAT_103b41e0) + -0x14 + DAT_103b56a8);
          DAT_103b56a4 = DAT_103b56a4 + -1;
          if (DAT_103b41e0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_103b56b0 = DAT_103b56a8;
        }
      }
      DAT_103b41e0 = param_1;
      DAT_103b56b8 = uVar14;
    }
  }
  return;
}


// ==== 101cb82a ___sbh_alloc_new_region

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_103b56a4 == DAT_103b56b4) {
    pvVar1 = HeapReAlloc(DAT_103b4088,0,DAT_103b56a8,(DAT_103b56b4 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_103b56b4 = DAT_103b56b4 + 0x10;
    DAT_103b56a8 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_103b56a4 * 0x14 + (int)DAT_103b56a8);
  pvVar1 = HeapAlloc(DAT_103b4088,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_103b56a4 = DAT_103b56a4 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_103b4088,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


// ==== 101cb8da ___sbh_alloc_new_group

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int ___sbh_alloc_new_group(int param_1)

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


// ==== 101cb9e0 ___sbh_resize_block

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar8 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar8;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  param_3 = *(int *)(param_2 + -4) + -1;
  puVar9 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar9;
  if (param_3 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + param_3) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar9[1] == puVar9[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar8);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar8);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar9[2] + 4) = puVar9[1];
    *(uint *)(puVar9[1] + 8) = puVar9[2];
    iVar6 = uVar13 + (param_3 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
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
        cVar7 = *(char *)(uVar13 + 4 + uVar8);
        *(char *)(uVar13 + 4 + uVar8) = cVar7 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar7 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar9 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar7 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar9 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar9 = *puVar9 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar4) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < param_3) {
    param_3 = param_3 - uVar12;
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
      if (puVar9[1] == puVar9[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar8);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar8);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar9[2] + 4) = puVar9[1];
      *(uint *)(puVar9[1] + 8) = puVar9[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar6 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar6;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar7 = *(char *)(uVar11 + 4 + uVar8);
      *(char *)(uVar11 + 4 + uVar8) = cVar7 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar7 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar9 = (uint *)(uVar8 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar7 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar9 = (uint *)(uVar8 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar9 = *puVar9 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}


// ==== 101cbcbf ___sbh_alloc_block

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint local_c;
  int local_8;
  
  puVar10 = DAT_103b56a8 + DAT_103b56a4 * 5;
  uVar8 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar9 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar7 = (byte)iVar9;
  param_1 = DAT_103b56b0;
  if (iVar9 < 0x20) {
    uVar16 = 0xffffffff >> (bVar7 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar16 = 0;
    local_c = 0xffffffff >> (bVar7 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar10 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar16) == 0));
      param_1 = param_1 + 5) {
  }
  puVar14 = DAT_103b56a8;
  if (param_1 == puVar10) {
    for (; (puVar14 < DAT_103b56b0 && ((puVar14[1] & local_c) == 0 && (*puVar14 & uVar16) == 0));
        puVar14 = puVar14 + 5) {
    }
    param_1 = puVar14;
    if (puVar14 == DAT_103b56b0) {
      for (; (puVar14 < puVar10 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
      }
      puVar15 = DAT_103b56a8;
      param_1 = puVar14;
      if (puVar14 == puVar10) {
        for (; (puVar15 < DAT_103b56b0 && (puVar15[2] == 0)); puVar15 = puVar15 + 5) {
        }
        param_1 = puVar15;
        if ((puVar15 == DAT_103b56b0) &&
           (param_1 = (uint *)___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      uVar6 = ___sbh_alloc_new_group(param_1);
      *(undefined4 *)param_1[4] = uVar6;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar16) == 0)) {
    local_8 = 0;
    puVar10 = (uint *)(piVar5 + 0x11);
    uVar12 = piVar5[0x31];
    while ((uVar12 & local_c) == 0 && (*puVar10 & uVar16) == 0) {
      local_8 = local_8 + 1;
      puVar14 = puVar10 + 0x21;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar14;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar9 = 0;
  uVar16 = piVar5[local_8 + 0x11] & uVar16;
  if (uVar16 == 0) {
    uVar16 = piVar5[local_8 + 0x31] & local_c;
    iVar9 = 0x20;
  }
  for (; -1 < (int)uVar16; uVar16 = uVar16 * 2) {
    iVar9 = iVar9 + 1;
  }
  piVar13 = (int *)piVar3[iVar9 * 2 + 1];
  iVar11 = *piVar13 - uVar8;
  iVar17 = (iVar11 >> 4) + -1;
  if (0x3f < iVar17) {
    iVar17 = 0x3f;
  }
  DAT_103b56b0 = param_1;
  if (iVar17 != iVar9) {
    if (piVar13[1] == piVar13[2]) {
      if (iVar9 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar9 + 4);
        uVar16 = ~(0x80000000U >> ((byte)iVar9 & 0x1f));
        piVar5[local_8 + 0x11] = uVar16 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar16;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar9 + 4);
        uVar16 = ~(0x80000000U >> ((byte)iVar9 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar16;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar16;
        }
      }
    }
    *(int *)(piVar13[2] + 4) = piVar13[1];
    *(int *)(piVar13[1] + 8) = piVar13[2];
    if (iVar11 == 0) goto LAB_101cbf5f;
    piVar1 = piVar3 + iVar17 * 2;
    iVar9 = piVar1[1];
    piVar13[2] = (int)piVar1;
    piVar13[1] = iVar9;
    piVar1[1] = (int)piVar13;
    *(int **)(piVar13[1] + 8) = piVar13;
    if (piVar13[1] == piVar13[2]) {
      cVar4 = *(char *)(iVar17 + 4 + (int)piVar5);
      *(char *)(iVar17 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar7 = (byte)iVar17;
      if (iVar17 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar11 != 0) {
    *piVar13 = iVar11;
    *(int *)(iVar11 + -4 + (int)piVar13) = iVar11;
  }
LAB_101cbf5f:
  piVar13 = (int *)((int)piVar13 + iVar11);
  *piVar13 = uVar8 + 1;
  *(uint *)((int)piVar13 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar3;
  *piVar3 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_103b41e0)) && (local_8 == DAT_103b56b8)) {
    DAT_103b41e0 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar13 + 1;
}


// ==== 101cbfa2 _wcscpy_s

/* Library Function - Single Match
    _wcscpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        wVar1 = *_Src;
        *pwVar3 = wVar1;
        _Src = _Src + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
        pwVar3 = pwVar3 + 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      puVar2 = (undefined4 *)FUN_101c8c22();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_101cbfc1;
    }
    *_Dst = L'\0';
  }
  puVar2 = (undefined4 *)FUN_101c8c22();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_101cbfc1:
  FUN_101c2369(0,0,0,0,0);
  return eVar4;
}


// ==== 101cc00e __calloc_impl

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

void * __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  uint dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    param_1 = param_1 * param_2;
    dwBytes = param_1;
    if (param_1 == 0) {
      dwBytes = 1;
    }
    do {
      _Dst = (void *)0x0;
      if (dwBytes < 0xffffffe1) {
        if ((DAT_103b56bc == 3) && (dwBytes = dwBytes + 0xf & 0xfffffff0, param_1 <= DAT_103b56ac))
        {
          __lock(4);
          _Dst = (void *)___sbh_alloc_block(param_1);
          FUN_101cc10a();
          if (_Dst != (void *)0x0) {
            _memset(_Dst,0,param_1);
            goto LAB_101cc0bf;
          }
        }
        else {
LAB_101cc0bf:
          if (_Dst != (void *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_103b4088,8,dwBytes);
      }
      if (_Dst != (void *)0x0) {
        return _Dst;
      }
      if (DAT_103b41e8 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (void *)0x0;
        }
        *param_3 = 0xc;
        return (void *)0x0;
      }
      iVar2 = __callnewh(dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0xc;
    FUN_101c2369(0,0,0,0,0);
  }
  return (void *)0x0;
}


// ==== 101cc10a FUN_101cc10a

void FUN_101cc10a(void)

{
  FUN_101cb39a(4);
  return;
}


// ==== 101cc12c _calloc

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  pvVar2 = (void *)__calloc_impl(_Count,_Size,&local_8);
  iVar1 = local_8;
  if (((pvVar2 == (void *)0x0) && (local_8 != 0)) && (iVar3 = FUN_101c8c22(), iVar3 != 0)) {
    piVar4 = (int *)FUN_101c8c22();
    *piVar4 = iVar1;
  }
  return pvVar2;
}


// ==== 101cc16b FUN_101cc16b

void FUN_101cc16b(undefined4 param_1)

{
  DAT_103b41e4 = param_1;
  return;
}


// ==== 101cc175 __callnewh

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_101c64b3(DAT_103b41e4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 101cc197 __filbuf

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    uVar5 = _File->_flag;
    if (((uVar5 & 0x83) != 0) && ((uVar5 & 0x40) == 0)) {
      if ((uVar5 & 2) == 0) {
        _File->_flag = uVar5 | 1;
        if ((uVar5 & 0x10c) == 0) {
          __getbuf(_File);
        }
        else {
          _File->_ptr = _File->_base;
        }
        iVar4 = _File->_bufsiz;
        pcVar7 = _File->_base;
        iVar3 = __fileno(_File);
        iVar4 = FUN_101cc878(iVar3,pcVar7,iVar4);
        _File->_cnt = iVar4;
        if ((iVar4 != 0) && (iVar4 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar4 = __fileno(_File);
            if ((iVar4 == -1) || (iVar4 = __fileno(_File), iVar4 == -2)) {
              puVar6 = &DAT_103562e0;
            }
            else {
              iVar4 = __fileno(_File);
              uVar5 = __fileno(_File);
              puVar6 = (undefined *)((uVar5 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar4 >> 5]);
            }
            if ((puVar6[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -1;
          bVar1 = *_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
          return (uint)bVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar4 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar5 | 0x20;
      }
    }
  }
  return -1;
}


// ==== 101cc2b7 FUN_101cc2b7

int FUN_101cc2b7(uint param_1,LPWSTR param_2,LPWSTR param_3)

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
    puVar7 = (undefined4 *)FUN_101c8c35();
    *puVar7 = 0;
    puVar7 = (undefined4 *)FUN_101c8c22();
    *puVar7 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_103b456c <= param_1)) {
    puVar7 = (undefined4 *)FUN_101c8c35();
    *puVar7 = 0;
    puVar7 = (undefined4 *)FUN_101c8c22();
    *puVar7 = 9;
    FUN_101c2369(0,0,0,0,0);
    return -1;
  }
  iVar14 = (param_1 & 0x1f) * 0x38;
  piVar1 = &DAT_103b4580 + ((int)param_1 >> 5);
  bVar3 = *(byte *)(*piVar1 + iVar14 + 4);
  if ((bVar3 & 1) == 0) {
    puVar7 = (undefined4 *)FUN_101c8c35();
    *puVar7 = 0;
    puVar7 = (undefined4 *)FUN_101c8c22();
    *puVar7 = 9;
    goto LAB_101cc3bf;
  }
  if (param_3 < 0x80000000) {
    local_14 = (LPWSTR)0x0;
    if ((param_3 == (LPWSTR)0x0) || ((bVar3 & 2) != 0)) {
      return 0;
    }
    if (param_2 != (LPWSTR)0x0) {
      local_6 = (char)(*(char *)(*piVar1 + iVar14 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~(uint)param_3 & 1) == 0) goto LAB_101cc3ad;
        uVar8 = (uint)param_3 >> 1;
        param_3 = (LPWSTR)0x4;
        if (3 < uVar8) {
          param_3 = (LPWSTR)uVar8;
        }
        local_10 = __malloc_crt((size_t)param_3);
        if (local_10 == (LPWSTR)0x0) {
          puVar7 = (undefined4 *)FUN_101c8c22();
          *puVar7 = 0xc;
          puVar7 = (undefined4 *)FUN_101c8c35();
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
          if ((~(uint)param_3 & 1) == 0) goto LAB_101cc3ad;
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
            goto LAB_101cc6cc;
          }
          goto LAB_101cc6c1;
        }
        puVar7 = (undefined4 *)FUN_101c8c22();
        *puVar7 = 9;
        puVar7 = (undefined4 *)FUN_101c8c35();
        *puVar7 = 5;
      }
      else {
        local_14 = (LPWSTR)((int)local_14 + local_1c);
        pbVar2 = (byte *)(iVar14 + 4 + *piVar1);
        if ((*pbVar2 & 0x80) == 0) goto LAB_101cc6cc;
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
                    goto LAB_101cc76f;
                  }
LAB_101cc804:
                  param_3 = param_3 + 1;
                  *pWVar9 = L'\r';
                }
                else {
                  pWVar6 = param_3 + 1;
                  BVar10 = ReadFile(*(HANDLE *)(iVar14 + *piVar1),&local_c,2,&local_1c,
                                    (LPOVERLAPPED)0x0);
                  if (((BVar10 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) || (local_1c == 0))
                  goto LAB_101cc804;
                  if ((*(byte *)(iVar14 + 4 + *piVar1) & 0x48) == 0) {
                    if ((pWVar9 == local_10) && (local_c == 10)) goto LAB_101cc76f;
                    __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_101cc80b;
                    goto LAB_101cc804;
                  }
                  if (local_c == 10) {
LAB_101cc76f:
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
LAB_101cc80b:
              param_3 = pWVar6;
            } while (param_3 < local_14);
          }
          local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
          goto LAB_101cc6cc;
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
                  goto LAB_101cc54c;
                }
LAB_101cc5c3:
                param_3 = (LPWSTR)((int)param_3 + 1);
                *(byte *)pWVar9 = 0xd;
              }
              else {
                pWVar12 = (LPWSTR)((int)param_3 + 1);
                BVar10 = ReadFile(*(HANDLE *)(iVar14 + *piVar1),&local_5,1,&local_1c,
                                  (LPOVERLAPPED)0x0);
                if (((BVar10 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) || (local_1c == 0))
                goto LAB_101cc5c3;
                if ((*(byte *)(iVar14 + 4 + *piVar1) & 0x48) == 0) {
                  if ((pWVar9 == local_10) && (local_5 == '\n')) goto LAB_101cc54c;
                  __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_101cc5c7;
                  goto LAB_101cc5c3;
                }
                if (local_5 == '\n') {
LAB_101cc54c:
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
LAB_101cc5c7:
            param_3 = pWVar12;
          } while (param_3 < local_14);
        }
        local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (LPWSTR)0x0)) goto LAB_101cc6cc;
        bVar3 = *(byte *)((int)pWVar9 + -1);
        if ((char)bVar3 < '\0') {
          iVar13 = 1;
          pWVar9 = (LPWSTR)((int)pWVar9 + -1);
          while ((((&DAT_10355f60)[bVar3] == '\0' && (iVar13 < 5)) && (local_10 <= pWVar9))) {
            pWVar9 = (LPWSTR)((int)pWVar9 + -1);
            bVar3 = *(byte *)pWVar9;
            iVar13 = iVar13 + 1;
          }
          if ((char)(&DAT_10355f60)[(byte)*pWVar9] == 0) {
            puVar7 = (undefined4 *)FUN_101c8c22();
            *puVar7 = 0x2a;
            goto LAB_101cc6c8;
          }
          if ((char)(&DAT_10355f60)[(byte)*pWVar9] + 1 == iVar13) {
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
          goto LAB_101cc6cc;
        }
        DVar11 = GetLastError();
LAB_101cc6c1:
        FUN_101c8c48(DVar11);
      }
LAB_101cc6c8:
      local_18 = -1;
LAB_101cc6cc:
      if (local_10 != param_2) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_101cc3ad:
  puVar7 = (undefined4 *)FUN_101c8c35();
  *puVar7 = 0;
  puVar7 = (undefined4 *)FUN_101c8c22();
  *puVar7 = 0x16;
LAB_101cc3bf:
  FUN_101c2369(0,0,0,0,0);
  return -1;
}


// ==== 101cc878 FUN_101cc878

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_101cc878(uint param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    return 0xffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_103b456c)) {
    iVar2 = (param_1 & 0x1f) * 0x38;
    if ((*(byte *)((&DAT_103b4580)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
      if (param_3 < 0x80000000) {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_103b4580)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_101c8c22();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_101c8c35();
          *puVar1 = 0;
          local_20 = 0xffffffff;
        }
        else {
          local_20 = FUN_101cc2b7(param_1,param_2,param_3);
        }
        FUN_101cc96b();
        return local_20;
      }
      puVar1 = (undefined4 *)FUN_101c8c35();
      *puVar1 = 0;
      puVar1 = (undefined4 *)FUN_101c8c22();
      *puVar1 = 0x16;
      goto LAB_101cc8c7;
    }
  }
  puVar1 = (undefined4 *)FUN_101c8c35();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = 9;
LAB_101cc8c7:
  FUN_101c2369(0,0,0,0,0);
  return 0xffffffff;
}


// ==== 101cc96b FUN_101cc96b

void FUN_101cc96b(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 101cc975 __fileno

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  undefined4 *puVar1;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    return -1;
  }
  return _File->_file;
}


// ==== 101cc9a2 FUN_101cc9a2

undefined ** FUN_101cc9a2(void)

{
  return &PTR_DAT_10356060;
}


// ==== 101cca79 FUN_101cca79

void FUN_101cca79(uint param_1)

{
  if ((0x1035605f < param_1) && (param_1 < 0x103562c1)) {
    __lock(((int)(param_1 + 0xefca9fa0) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// ==== 101ccab5 FUN_101ccab5

void FUN_101ccab5(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


// ==== 101ccae3 FUN_101ccae3

void FUN_101ccae3(uint param_1)

{
  if ((0x1035605f < param_1) && (param_1 < 0x103562c1)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_101cb39a(((int)(param_1 + 0xefca9fa0) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// ==== 101ccb19 FUN_101ccb19

void FUN_101ccb19(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_101cb39a(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


// ==== 101ccb43 __close_nolock

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
    if (((_FileHandle == 1) && ((*(byte *)(DAT_103b4580 + 0x74) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_103b4580 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_101ccba2;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_101ccba4;
    }
  }
LAB_101ccba2:
  DVar4 = 0;
LAB_101ccba4:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_101c8c48(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}


// ==== 101ccbd7 __close

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2005 Release */

int __cdecl __close(int _FileHandle)

{
  undefined4 *puVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103b456c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_101c8c22();
          *puVar1 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_101ccc9a();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    FUN_101c2369(0,0,0,0,0);
  }
  return -1;
}


// ==== 101ccc9a FUN_101ccc9a

void FUN_101ccc9a(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 101ccca4 __freebuf

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


// ==== 101cccd0 __flush

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2005 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}


// ==== 101ccd32 FUN_101ccd32

int FUN_101ccd32(FILE *param_1)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = FUN_101ccd74(0);
    return iVar1;
  }
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = __fileno(param_1);
    iVar1 = FUN_101d2d15(iVar1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


// ==== 101ccd74 FUN_101ccd74

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_101ccd74(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar3 = 0; iVar3 < DAT_103b56a0; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_103b4680 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_101ccab5(iVar3,iVar2);
      iVar2 = *(int *)(DAT_103b4680 + iVar3 * 4);
      if ((*(uint *)(iVar2 + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar2 = FUN_101ccd32(iVar2);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((*(uint *)(iVar2 + 0xc) & 2) != 0)) {
          iVar2 = FUN_101ccd32(iVar2);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_101cce16();
    }
  }
  FUN_101cce45();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}


// ==== 101cce16 FUN_101cce16

void FUN_101cce16(void)

{
  FUN_101ccb19();
  return;
}


// ==== 101cce45 FUN_101cce45

void FUN_101cce45(void)

{
  FUN_101cb39a(1);
  return;
}


// ==== 101cce57 __lseek_nolock

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
    puVar2 = (undefined4 *)FUN_101c8c22();
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
    pbVar1 = (byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_101c8c48(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


// ==== 101ccec9 __lseek

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  undefined4 *puVar1;
  int iVar2;
  long local_20;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103b456c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_101c8c22();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_101c8c35();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __lseek_nolock(_FileHandle,_Offset,_Origin);
        }
        FUN_101ccf9b();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    FUN_101c2369(0,0,0,0,0);
  }
  return -1;
}


// ==== 101ccf9b FUN_101ccf9b

void FUN_101ccf9b(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 101ccfa5 __ftell_nolock

/* Library Function - Single Match
    __ftell_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __ftell_nolock(FILE *_File)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint _FileHandle;
  FILE *pFVar4;
  long lVar5;
  char *pcVar6;
  FILE *pFVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int local_10;
  int local_c;
  
  pFVar7 = _File;
  if (_File == (FILE *)0x0) {
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    return -1;
  }
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_c = __lseek(_FileHandle,0,1);
  if (local_c < 0) {
    return -1;
  }
  uVar1 = _File->_flag;
  if ((uVar1 & 0x108) == 0) {
    return local_c - _File->_cnt;
  }
  pcVar6 = _File->_ptr;
  pcVar8 = _File->_base;
  local_10 = (int)pcVar6 - (int)pcVar8;
  if ((uVar1 & 3) == 0) {
    if (-1 < (char)uVar1) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0x16;
      return -1;
    }
  }
  else {
    pcVar2 = pcVar8;
    if ((*(byte *)((&DAT_103b4580)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x38) & 0x80)
        != 0) {
      for (; pcVar2 < pcVar6; pcVar2 = pcVar2 + 1) {
        if (*pcVar2 == '\n') {
          local_10 = local_10 + 1;
        }
      }
    }
  }
  if (local_c != 0) {
    if ((_File->_flag & 1) != 0) {
      if (_File->_cnt == 0) {
        local_10 = 0;
      }
      else {
        iVar9 = (_FileHandle & 0x1f) * 0x38;
        pFVar4 = (FILE *)(pcVar6 + (_File->_cnt - (int)pcVar8));
        if ((*(byte *)((&DAT_103b4580)[(int)_FileHandle >> 5] + 4 + iVar9) & 0x80) != 0) {
          lVar5 = __lseek(_FileHandle,0,2);
          if (lVar5 == local_c) {
            pcVar6 = _File->_base;
            pcVar8 = pcVar6 + (int)&pFVar4->_ptr;
            _File = pFVar4;
            for (; pcVar6 < pcVar8; pcVar6 = pcVar6 + 1) {
              if (*pcVar6 == '\n') {
                _File = (FILE *)((int)&_File->_ptr + 1);
              }
            }
            bVar10 = (pFVar7->_flag & 0x2000) == 0;
          }
          else {
            lVar5 = __lseek(_FileHandle,local_c,0);
            if (lVar5 < 0) {
              return -1;
            }
            pFVar7 = (FILE *)0x200;
            if ((((FILE *)0x200 < pFVar4) || ((_File->_flag & 8U) == 0)) ||
               ((_File->_flag & 0x400U) != 0)) {
              pFVar7 = (FILE *)_File->_bufsiz;
            }
            bVar10 = (*(byte *)((&DAT_103b4580)[(int)_FileHandle >> 5] + 4 + iVar9) & 4) == 0;
            _File = pFVar7;
          }
          pFVar4 = _File;
          if (!bVar10) {
            pFVar4 = (FILE *)((int)&_File->_ptr + 1);
          }
        }
        _File = pFVar4;
        local_c = local_c - (int)_File;
      }
    }
    return local_10 + local_c;
  }
  return local_10;
}


// ==== 101cd13d FUN_101cd13d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_101cd13d(char *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  uchar uVar3;
  undefined4 *puVar4;
  int iVar5;
  errno_t eVar6;
  char *pcVar7;
  uchar *_Str2;
  uchar *_Str1;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_103b44a4;
  local_10 = 0;
  local_c = 0;
  local_14 = 0;
  for (pcVar7 = param_2; *pcVar7 == ' '; pcVar7 = pcVar7 + 1) {
  }
  cVar1 = *pcVar7;
  if (cVar1 == 'a') {
    param_2 = (char *)0x109;
LAB_101cd1a9:
    local_8 = DAT_103b44a4 | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') {
        puVar4 = (undefined4 *)FUN_101c8c22();
        *puVar4 = 0x16;
        FUN_101c2369(0,0,0,0,0);
        return (undefined4 *)0x0;
      }
      param_2 = (char *)0x301;
      goto LAB_101cd1a9;
    }
    local_8 = DAT_103b44a4 | 1;
    param_2 = (char *)0x0;
  }
  bVar2 = true;
  _Str2 = (uchar *)(pcVar7 + 1);
  uVar3 = *_Str2;
  if (uVar3 != '\0') {
    do {
      if (!bVar2) break;
      if ((char)uVar3 < 'T') {
        if (uVar3 == 'S') {
          if (local_c != 0) goto LAB_101cd2e1;
          param_2 = (char *)((uint)param_2 | 0x20);
          local_c = 1;
        }
        else if (uVar3 != ' ') {
          if (uVar3 == '+') {
            if (((uint)param_2 & 2) != 0) goto LAB_101cd2e1;
            param_2 = (char *)((uint)param_2 & 0xfffffffe | 2);
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (uVar3 == ',') {
            local_14 = 1;
LAB_101cd2e1:
            bVar2 = false;
          }
          else if (uVar3 == 'D') {
            if (((uint)param_2 & 0x40) != 0) goto LAB_101cd2e1;
            param_2 = (char *)((uint)param_2 | 0x40);
          }
          else if (uVar3 == 'N') {
            param_2 = (char *)((uint)param_2 | 0x80);
          }
          else {
            if (uVar3 != 'R') goto LAB_101cd37c;
            if (local_c != 0) goto LAB_101cd2e1;
            param_2 = (char *)((uint)param_2 | 0x10);
            local_c = 1;
          }
        }
      }
      else if (uVar3 == 'T') {
        if (((uint)param_2 & 0x1000) != 0) goto LAB_101cd2e1;
        param_2 = (char *)((uint)param_2 | 0x1000);
      }
      else if (uVar3 == 'b') {
        if (((uint)param_2 & 0xc000) != 0) goto LAB_101cd2e1;
        param_2 = (char *)((uint)param_2 | 0x8000);
      }
      else if (uVar3 == 'c') {
        if (local_10 != 0) goto LAB_101cd2e1;
        local_8 = local_8 | 0x4000;
        local_10 = 1;
      }
      else if (uVar3 == 'n') {
        if (local_10 != 0) goto LAB_101cd2e1;
        local_8 = local_8 & 0xffffbfff;
        local_10 = 1;
      }
      else {
        if (uVar3 != 't') goto LAB_101cd37c;
        if (((uint)param_2 & 0xc000) != 0) goto LAB_101cd2e1;
        param_2 = (char *)((uint)param_2 | 0x4000);
      }
      _Str2 = _Str2 + 1;
      uVar3 = *_Str2;
    } while (uVar3 != '\0');
    if (local_14 != 0) {
      for (; *_Str2 == ' '; _Str2 = _Str2 + 1) {
      }
      iVar5 = __mbsnbcmp("ccs=",_Str2,4);
      if (iVar5 != 0) goto LAB_101cd37c;
      _Str1 = _Str2 + 4;
      iVar5 = __mbsicmp(_Str1,(uchar *)"UTF-8");
      if (iVar5 == 0) {
        _Str2 = _Str2 + 9;
        param_2 = (char *)((uint)param_2 | 0x40000);
      }
      else {
        iVar5 = __mbsicmp(_Str1,(uchar *)"UTF-16LE");
        if (iVar5 == 0) {
          _Str2 = _Str2 + 0xc;
          param_2 = (char *)((uint)param_2 | 0x20000);
        }
        else {
          iVar5 = __mbsicmp(_Str1,(uchar *)"UNICODE");
          if (iVar5 != 0) goto LAB_101cd37c;
          _Str2 = _Str2 + 0xb;
          param_2 = (char *)((uint)param_2 | 0x10000);
        }
      }
    }
  }
  for (; *_Str2 == ' '; _Str2 = _Str2 + 1) {
  }
  if (*_Str2 == '\0') {
    eVar6 = __sopen_s(&local_14,param_1,(int)param_2,param_3,0x180);
    if (eVar6 != 0) {
      return (undefined4 *)0x0;
    }
    _DAT_103b41ec = _DAT_103b41ec + 1;
    param_4[3] = local_8;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = local_14;
    return param_4;
  }
LAB_101cd37c:
  puVar4 = (undefined4 *)FUN_101c8c22();
  *puVar4 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  return (undefined4 *)0x0;
}


// ==== 101cd3dd FUN_101cd3dd

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 * FUN_101cd3dd(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = (undefined4 *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    puVar7 = puVar6;
    if (DAT_103b56a0 <= iVar5) {
LAB_101cd4d3:
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[3] = puVar7[3] & 0x8000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        puVar7[4] = 0xffffffff;
      }
      FUN_101cd504();
      return puVar7;
    }
    piVar1 = (int *)(DAT_103b4680 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_103b4680) = pvVar4;
      if (*(int *)(DAT_103b4680 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_103b4680 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
          _free(*(void **)(iVar5 + DAT_103b4680));
          *(undefined4 *)(iVar5 + DAT_103b4680) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_103b4680) + 0x20));
          puVar7 = *(undefined4 **)(iVar5 + DAT_103b4680);
        }
      }
      goto LAB_101cd4d3;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && (-1 < (short)uVar2)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar5 + 0x10), iVar3 == 0))
      goto LAB_101cd4d3;
      FUN_101ccab5(iVar5,*(undefined4 *)(DAT_103b4680 + iVar5 * 4));
      puVar7 = *(undefined4 **)(DAT_103b4680 + iVar5 * 4);
      if ((*(byte *)(puVar7 + 3) & 0x83) == 0) goto LAB_101cd4d3;
      FUN_101ccb19(iVar5,puVar7);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 101cd504 FUN_101cd504

void FUN_101cd504(void)

{
  FUN_101cb39a(1);
  return;
}


// ==== 101cd510 __local_unwind4

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __local_unwind4(uint *param_1,int param_2,uint param_3)

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
  puStack_24 = &LAB_101cd5a0;
  pvStack_28 = ExceptionList;
  local_20 = DAT_103554c4 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_101c495c();
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// ==== 101cd5e6 FUN_101cd5e6

void FUN_101cd5e6(int param_1)

{
  __local_unwind4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  return;
}


// ==== 101cd602 _EH4_CallFilterFunc

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(code *param_1)

{
  (*param_1)();
  return;
}


// ==== 101cd619 _EH4_TransferToHandler

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(code *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x101cd630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 101cd632 _EH4_GlobalUnwind

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x101cd647,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 101cd64c _EH4_LocalUnwind

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall
_EH4_LocalUnwind(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}


// ==== 101cd663 __wopenfile

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wopenfile
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __wopenfile(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag,FILE *_File)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t wVar5;
  undefined4 *puVar6;
  int iVar7;
  errno_t eVar8;
  uint _OpenFlag;
  wchar_t *_Str1;
  wchar_t *pwVar9;
  uint uVar10;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  for (pwVar9 = _Mode; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
  }
  wVar5 = *pwVar9;
  if (wVar5 == L'a') {
    _OpenFlag = 0x109;
LAB_101cd6d0:
    uVar10 = DAT_103b44a4 | 2;
  }
  else {
    if (wVar5 != L'r') {
      if (wVar5 != L'w') goto LAB_101cd69e;
      _OpenFlag = 0x301;
      goto LAB_101cd6d0;
    }
    _OpenFlag = 0;
    uVar10 = DAT_103b44a4 | 1;
  }
  bVar1 = true;
  pwVar9 = pwVar9 + 1;
  wVar5 = *pwVar9;
  if (wVar5 != L'\0') {
    do {
      if (!bVar1) break;
      if ((ushort)wVar5 < 0x54) {
        if (wVar5 == L'S') {
          if (bVar2) goto LAB_101cd7fd;
          bVar2 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (wVar5 != L' ') {
          if (wVar5 == L'+') {
            if ((_OpenFlag & 2) != 0) goto LAB_101cd7fd;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            uVar10 = uVar10 & 0xfffffffc | 0x80;
          }
          else if (wVar5 == L',') {
            bVar4 = true;
LAB_101cd7fd:
            bVar1 = false;
          }
          else if (wVar5 == L'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_101cd7fd;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (wVar5 == L'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (wVar5 != L'R') goto LAB_101cd69e;
            if (bVar2) goto LAB_101cd7fd;
            bVar2 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (wVar5 == L'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_101cd7fd;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (wVar5 == L'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_101cd7fd;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (wVar5 == L'c') {
        if (bVar3) goto LAB_101cd7fd;
        bVar3 = true;
        uVar10 = uVar10 | 0x4000;
      }
      else if (wVar5 == L'n') {
        if (bVar3) goto LAB_101cd7fd;
        bVar3 = true;
        uVar10 = uVar10 & 0xffffbfff;
      }
      else {
        if (wVar5 != L't') goto LAB_101cd69e;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_101cd7fd;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      pwVar9 = pwVar9 + 1;
      wVar5 = *pwVar9;
    } while (wVar5 != L'\0');
    if (bVar4) {
      for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
      }
      iVar7 = _wcsncmp(L"ccs=",pwVar9,4);
      if (iVar7 != 0) goto LAB_101cd69e;
      _Str1 = pwVar9 + 4;
      iVar7 = __wcsicmp(_Str1,L"UTF-8");
      if (iVar7 == 0) {
        pwVar9 = pwVar9 + 9;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar7 = __wcsicmp(_Str1,L"UTF-16LE");
        if (iVar7 == 0) {
          pwVar9 = pwVar9 + 0xc;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar7 = __wcsicmp(_Str1,L"UNICODE");
          if (iVar7 != 0) goto LAB_101cd69e;
          pwVar9 = pwVar9 + 0xb;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
  }
  if (*pwVar9 == L'\0') {
    eVar8 = __wsopen_s((int *)&_Mode,_Filename,_OpenFlag,_ShFlag,0x180);
    if (eVar8 != 0) {
      return (FILE *)0x0;
    }
    _DAT_103b41ec = _DAT_103b41ec + 1;
    _File->_flag = uVar10;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = (int)_Mode;
    return _File;
  }
LAB_101cd69e:
  puVar6 = (undefined4 *)FUN_101c8c22();
  *puVar6 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  return (FILE *)0x0;
}


// ==== 101cd8ef __wfltin2

/* Library Function - Single Match
    __wfltin2
   
   Library: Visual Studio 2005 Release */

FLT __cdecl __wfltin2(FLT _Fit,wchar_t *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  int local_28;
  wchar_t *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = FUN_101cd996(&local_14,&local_28,_Str,0,0,0,0);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Fit->nbytes = local_28 - (int)local_24 >> 1;
  *(undefined4 *)&_Fit->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Fit->dval + 4) = local_20.x._4_4_;
  _Fit->flags = uVar3;
  p_Var2 = (FLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}


// ==== 101cd996 FUN_101cd996

void FUN_101cd996(undefined2 *param_1,int *param_2,ushort *param_3,int param_4,int param_5,
                 int param_6,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  ushort uVar18;
  ushort *puVar19;
  undefined4 uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  short *psVar23;
  undefined4 uVar24;
  ushort uVar25;
  bool bVar26;
  ushort *local_70;
  int local_6c;
  int local_68;
  undefined **local_64;
  int local_60;
  char *local_5c;
  ushort *local_58;
  int local_54;
  uint local_50;
  undefined2 local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined *local_44;
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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_5c = local_24;
  iVar16 = 0;
  uVar9 = 0;
  local_68 = 1;
  local_50 = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  local_6c = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((uVar25 = *param_3, uVar25 == 0x20 || (uVar25 == 9)) || (uVar25 == 10)) ||
           (uVar25 == 0xd)); param_3 = param_3 + 1) {
    }
LAB_101cda2c:
    uVar25 = *param_3;
    uVar12 = (uint)uVar25;
    puVar19 = param_3 + 1;
    switch(iVar16) {
    case 0:
      if ((ushort)(uVar25 - 0x31) < 9) {
LAB_101cda4a:
        iVar16 = 3;
        goto LAB_101cda4c;
      }
      if (uVar12 == (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_101cda68:
        iVar16 = 5;
        param_3 = puVar19;
      }
      else {
        iVar16 = 2;
        if (uVar12 == 0x2b) {
          uVar9 = 0;
          param_3 = puVar19;
        }
        else {
          if (uVar12 != 0x2d) {
            if (uVar12 == 0x30) goto LAB_101cda7f;
            goto LAB_101cdc44;
          }
          uVar9 = 0x8000;
          param_3 = puVar19;
        }
      }
      goto LAB_101cda2c;
    case 1:
      bVar6 = true;
      if ((ushort)(uVar25 - 0x31) < 9) goto LAB_101cda4a;
      if (uVar12 == (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_101cdab9;
      if ((uVar12 == 0x2b) || (uVar12 == 0x2d)) goto LAB_101cdae8;
      if (uVar12 == 0x30) goto LAB_101cda7f;
      goto LAB_101cdacb;
    case 2:
      if ((ushort)(uVar25 - 0x31) < 9) goto LAB_101cda4a;
      if (uVar12 == (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_101cda68;
      param_3 = local_58;
      if (uVar12 != 0x30) goto LAB_101cdc70;
LAB_101cda7f:
      iVar16 = 1;
      param_3 = puVar19;
      goto LAB_101cda2c;
    case 3:
      while ((0x2f < (ushort)uVar12 && ((ushort)uVar12 < 0x3a))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *local_5c = (char)uVar12 + -0x30;
          local_5c = local_5c + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        uVar25 = *puVar19;
        puVar19 = puVar19 + 1;
        uVar12 = (uint)uVar25;
      }
      if (uVar12 != (int)*(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_101cdb71;
LAB_101cdab9:
      bVar6 = true;
      iVar16 = 4;
      param_3 = puVar19;
      goto LAB_101cda2c;
    case 4:
      bVar8 = true;
      if (local_50 == 0) {
        while ((short)uVar12 == 0x30) {
          local_54 = local_54 + -1;
          uVar25 = *puVar19;
          puVar19 = puVar19 + 1;
          uVar12 = (uint)uVar25;
        }
      }
      while ((0x2f < (ushort)uVar12 && ((ushort)uVar12 < 0x3a))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          local_54 = local_54 + -1;
          *local_5c = (char)uVar12 + -0x30;
          local_5c = local_5c + 1;
        }
        uVar25 = *puVar19;
        puVar19 = puVar19 + 1;
        uVar12 = (uint)uVar25;
      }
LAB_101cdb71:
      if ((uVar12 == 0x2b) || (uVar12 == 0x2d)) {
LAB_101cdae8:
        bVar6 = true;
        iVar16 = 0xb;
        param_3 = puVar19 + -1;
      }
      else {
LAB_101cdacb:
        bVar6 = true;
        if ((uVar12 < 0x44) || ((0x45 < uVar12 && (1 < uVar12 - 100)))) goto LAB_101cdc44;
        iVar16 = 6;
        param_3 = puVar19;
      }
      goto LAB_101cda2c;
    case 5:
      bVar8 = true;
      param_3 = local_58;
      if ((ushort)(uVar25 - 0x30) < 10) {
        iVar16 = 4;
        goto LAB_101cda4c;
      }
      goto LAB_101cdc70;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (ushort)(uVar25 - 0x31)) {
        if (uVar12 == 0x2b) goto LAB_101cdc25;
        if (uVar12 == 0x2d) goto LAB_101cdc19;
        bVar26 = uVar12 == 0x30;
LAB_101cdc0c:
        param_3 = local_58;
        if (!bVar26) goto LAB_101cdc70;
        iVar16 = 8;
        param_3 = puVar19;
        goto LAB_101cda2c;
      }
      break;
    case 7:
      if (8 < (ushort)(uVar25 - 0x31)) {
        bVar26 = uVar25 == 0x30;
        goto LAB_101cdc0c;
      }
      break;
    case 8:
      bVar7 = true;
      while ((short)uVar12 == 0x30) {
        uVar25 = *puVar19;
        puVar19 = puVar19 + 1;
        uVar12 = (uint)uVar25;
      }
      if (8 < (ushort)((short)uVar12 - 0x31U)) goto LAB_101cdc44;
      break;
    case 9:
      bVar7 = true;
      local_6c = 0;
      goto LAB_101cdcd0;
    default:
      goto switchD_101cda3a_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (uVar12 == 0x2b) {
LAB_101cdc25:
          iVar16 = 7;
          param_3 = puVar19;
        }
        else {
          if (uVar12 != 0x2d) goto LAB_101cdc70;
LAB_101cdc19:
          local_68 = -1;
          iVar16 = 7;
          param_3 = puVar19;
        }
        goto LAB_101cda2c;
      }
      iVar16 = 10;
      puVar19 = param_3;
switchD_101cda3a_caseD_a:
      param_3 = puVar19;
      if (iVar16 != 10) goto LAB_101cda2c;
      goto LAB_101cdc70;
    }
    iVar16 = 9;
LAB_101cda4c:
    param_3 = puVar19 + -1;
    goto LAB_101cda2c;
  }
  puVar11 = (undefined4 *)FUN_101c8c22();
  *puVar11 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_101ce07c;
LAB_101cdcd0:
  if (((ushort)uVar12 < 0x30) || (0x39 < (ushort)uVar12)) goto LAB_101cdcf0;
  local_6c = local_6c * 10 + -0x30 + uVar12;
  if (local_6c < 0x1451) {
    uVar12 = (uint)*puVar19;
    puVar19 = puVar19 + 1;
    goto LAB_101cdcd0;
  }
  local_6c = 0x1451;
LAB_101cdcf0:
  while ((0x2f < (ushort)uVar12 && ((ushort)uVar12 < 0x3a))) {
    uVar25 = *puVar19;
    puVar19 = puVar19 + 1;
    uVar12 = (uint)uVar25;
  }
LAB_101cdc44:
  param_3 = puVar19 + -1;
LAB_101cdc70:
  *param_2 = (int)param_3;
  if (bVar6) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      local_50 = 0x18;
      local_5c = local_5c + -1;
      local_54 = local_54 + 1;
    }
    if (local_50 == 0) goto LAB_101ce05d;
    while (local_5c = local_5c + -1, *local_5c == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar5 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_68 < 0) {
      local_6c = -local_6c;
    }
    local_58 = (ushort *)(local_6c + local_54);
    if (!bVar7) {
      local_58 = (ushort *)((int)local_58 + param_5);
    }
    if (!bVar8) {
      local_58 = (ushort *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_101ce05d;
      ppuVar22 = &PTR_DAT_10356470;
      if (local_58 != (ushort *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (ushort *)-(int)local_58;
          ppuVar22 = (undefined **)&DAT_103565d0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        iVar1 = uStack_2e;
        iVar2 = uStack_2a;
        iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar5 = local_3c;
joined_r0x101cdd8b:
        if (local_58 != (ushort *)0x0) {
          uVar12 = (int)local_58 >> 3;
          ppuVar22 = ppuVar22 + 0x15;
          uVar13 = (uint)local_58 & 7;
          local_58 = (ushort *)uVar12;
          if (uVar13 != 0) {
            ppuVar21 = ppuVar22 + uVar13 * 3;
            if (0x7fff < *(ushort *)ppuVar21) {
              local_4c = SUB42(*ppuVar21,0);
              uStack_4a._0_2_ = (undefined2)((uint)*ppuVar21 >> 0x10);
              uStack_4a._2_2_ = SUB42(ppuVar21[1],0);
              uStack_46 = (undefined2)((uint)ppuVar21[1] >> 0x10);
              local_44 = ppuVar21[2];
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              ppuVar21 = (undefined **)&local_4c;
            }
            local_5c = (char *)0x0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            iVar3 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar4 = 0;
            uStack_26 = 0;
            uVar15 = local_36 & 0x7fff;
            uVar18 = *(ushort *)((int)ppuVar21 + 10) & 0x7fff;
            uVar10 = (*(ushort *)((int)ppuVar21 + 10) ^ local_36) & 0x8000;
            uVar25 = uVar18 + uVar15;
            iVar1 = 0;
            iVar2 = 0;
            if (((uVar15 < 0x7fff) && (iVar1 = 0, iVar2 = 0, uVar18 < 0x7fff)) &&
               (iVar1 = iVar3, iVar2 = iVar4, uVar25 < 0xbffe)) {
              if (0x3fbf < uVar25) {
                if (((uVar15 == 0) &&
                    (uVar25 = uVar25 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar14 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar18 == 0) &&
                         (uVar25 = uVar25 + 1, ((uint)ppuVar21[2] & 0x7fffffff) == 0)) &&
                        ((ppuVar21[1] == (undefined *)0x0 && (*ppuVar21 == (undefined *)0x0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  iVar14 = 0;
                  iVar5 = 0;
                }
                else {
                  local_68 = 0;
                  psVar23 = (short *)((int)&uStack_2e + 2);
                  local_60 = 5;
                  do {
                    local_6c = local_60;
                    if (0 < local_60) {
                      local_70 = (ushort *)((int)&local_40 + local_68 * 2);
                      local_64 = ppuVar21 + 2;
                      do {
                        bVar6 = false;
                        uVar12 = *(uint *)(psVar23 + -2) +
                                 (uint)*local_70 * (uint)*(ushort *)local_64;
                        if ((uVar12 < *(uint *)(psVar23 + -2)) ||
                           (uVar12 < (uint)*local_70 * (uint)*(ushort *)local_64)) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar23 + -2) = uVar12;
                        if (bVar6) {
                          *psVar23 = *psVar23 + 1;
                        }
                        local_70 = local_70 + 1;
                        local_64 = (undefined **)((int)local_64 + -2);
                        local_6c = local_6c + -1;
                      } while (0 < local_6c);
                    }
                    psVar23 = psVar23 + 1;
                    local_68 = local_68 + 1;
                    local_60 = local_60 + -1;
                  } while (0 < local_60);
                  uVar25 = uVar25 + 0xc002;
                  if ((short)uVar25 < 1) {
LAB_101cdf41:
                    uVar25 = uVar25 - 1;
                    if ((short)uVar25 < 0) {
                      uVar12 = (uint)(ushort)-uVar25;
                      uVar25 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_5c = (char *)((int)local_5c + 1);
                        }
                        iVar1 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar13 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar17 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar12 = uVar12 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar13 >> 1);
                        local_30 = (byte)uVar17;
                        uStack_2f = (undefined1)(uVar17 >> 8);
                      } while (uVar12 != 0);
                      if (local_5c != (char *)0x0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar15 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar2 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar2;
                      uStack_2f = (undefined1)((uint)iVar2 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar2 | uVar15 >> 0xf;
                      iVar1 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar1 | (ushort)uStack_2a >> 0xf;
                      uVar25 = uVar25 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar1 >> 0x10);
                    } while (0 < (short)uVar25);
                    if ((short)uVar25 < 1) goto LAB_101cdf41;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      iVar1 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar25 = uVar25 + 1;
                          iVar2 = 0;
                          iVar1 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar2 = 0;
                          iVar1 = 0;
                        }
                      }
                      else {
                        iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar2;
                        uStack_2a._2_2_ = (ushort)((uint)iVar2 >> 0x10);
                      }
                    }
                    else {
                      iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)iVar1;
                      uStack_2e._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar25) goto LAB_101ce000;
                  local_40 = iVar1;
                  local_3c = iVar2;
                  uStack_38 = uStack_26;
                  local_36 = uVar25 | uVar10;
                  iVar14 = iVar1;
                  iVar5 = iVar2;
                }
                goto joined_r0x101cdd8b;
              }
              iVar14 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_101ce000:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar14 = (-(uint)(uVar10 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar14;
            local_36 = (ushort)((uint)iVar14 >> 0x10);
            iVar14 = 0;
            iVar5 = 0;
          }
          goto joined_r0x101cdd8b;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar5 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar5;
      local_40._2_2_ = (undefined2)((uint)iVar14 >> 0x10);
      local_40._0_2_ = (undefined2)iVar14;
      uVar24 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar20 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar25 = local_36;
      uStack_4a = iVar16;
      uStack_2e = iVar1;
      uStack_2a = iVar2;
      local_3c = iVar5;
    }
    else {
      uVar24 = 0;
      uVar25 = 0x7fff;
      uVar20 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_101ce05d:
    iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar25 = 0;
    uVar20 = 0;
    uVar24 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar25 | uVar9;
  *(undefined4 *)(param_1 + 1) = uVar24;
  *(undefined4 *)(param_1 + 3) = uVar20;
LAB_101ce07c:
  local_40 = iVar14;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101ce0ba __ioinit

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
  
  uStack_c = 0x101ce0c6;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_101ce2f1:
    iVar7 = -1;
  }
  else {
    DAT_103b456c = 0x20;
    DAT_103b4580 = puVar2;
    for (; puVar2 < DAT_103b4580 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_103b456c < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_103b456c, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_103b4580)[iVar7] = puVar2;
        DAT_103b456c = DAT_103b456c + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_103b4580)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_103b4580)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_101ce2f1;
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
      piVar8 = DAT_103b4580 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_101ce2f1;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_103b456c);
    iVar7 = 0;
  }
  return iVar7;
}


// ==== 101ce2fa __ioterm

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_103b4580;
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
  } while ((int)puVar2 < 0x103b4680);
  return;
}


// ==== 101ce346 __setenvp

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
  
  if (DAT_103b56d8 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_103b3980;
  if (DAT_103b3980 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_103b3980;
    DAT_103b3cfc = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_103b3980);
          DAT_103b3980 = (char *)0x0;
          *puVar1 = 0;
          _DAT_103b56cc = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_103b3cfc);
            DAT_103b3cfc = (undefined4 *)0x0;
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


// ==== 101ce421 parse_cmdline

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
        goto LAB_101ce4b3;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_101ce4b3:
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


// ==== 101ce5b9 __setargv

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_103b56d8 == 0) {
    ___initmbctable();
  }
  DAT_103b42f4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_103b41f0,0x104);
  _DAT_103b3d0c = &DAT_103b41f0;
  if ((DAT_103b56e0 == (char *)0x0) || (local_8 = DAT_103b56e0, *DAT_103b56e0 == '\0')) {
    local_8 = &DAT_103b41f0;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_103b3cf0 = local_c - 1;
      _DAT_103b3cf4 = pvVar1;
      return 0;
    }
  }
  return -1;
}


// ==== 101ce672 ___crtGetEnvironmentStringsA

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
  if (DAT_103b42f8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_103b42f8 = 1;
      goto LAB_101ce6c4;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_103b42f8 = 2;
    }
  }
  if (DAT_103b42f8 != 1) {
    if ((DAT_103b42f8 != 2) && (DAT_103b42f8 != 0)) {
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
LAB_101ce6c4:
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


// ==== 101ce7a7 __RTC_Initialize

/* WARNING: Removing unreachable block (ram,0x101ce7b9) */
/* WARNING: Removing unreachable block (ram,0x101ce7bf) */
/* WARNING: Removing unreachable block (ram,0x101ce7c1) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}


// ==== 101ce7ef FUN_101ce7ef

void FUN_101ce7ef(void)

{
  return;
}


// ==== 101ce7f0 FUN_101ce7f0

undefined4 FUN_101ce7f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = FUN_101c6658();
  uVar6 = 0;
  if (iVar4 != 0) {
    piVar1 = *(int **)(iVar4 + 0x5c);
    piVar5 = piVar1;
    do {
      if (*piVar5 == param_1) break;
      piVar5 = piVar5 + 3;
    } while (piVar5 < piVar1 + DAT_1035639c * 3);
    if ((piVar1 + DAT_1035639c * 3 <= piVar5) || (*piVar5 != param_1)) {
      piVar5 = (int *)0x0;
    }
    if ((piVar5 == (int *)0x0) || (pcVar2 = (code *)piVar5[2], pcVar2 == (code *)0x0)) {
      uVar6 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar5[2] = 0;
      uVar6 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        uVar6 = *(undefined4 *)(iVar4 + 0x60);
        *(undefined4 *)(iVar4 + 0x60) = param_2;
        if (piVar5[1] == 8) {
          if (DAT_10356390 < DAT_10356394 + DAT_10356390) {
            iVar7 = DAT_10356390 * 0xc;
            iVar8 = DAT_10356390;
            do {
              *(undefined4 *)(iVar7 + 8 + *(int *)(iVar4 + 0x5c)) = 0;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar8 < DAT_10356394 + DAT_10356390);
          }
          iVar8 = *piVar5;
          uVar3 = *(undefined4 *)(iVar4 + 100);
          if (iVar8 == -0x3fffff72) {
            *(undefined4 *)(iVar4 + 100) = 0x83;
          }
          else if (iVar8 == -0x3fffff70) {
            *(undefined4 *)(iVar4 + 100) = 0x81;
          }
          else if (iVar8 == -0x3fffff6f) {
            *(undefined4 *)(iVar4 + 100) = 0x84;
          }
          else if (iVar8 == -0x3fffff6d) {
            *(undefined4 *)(iVar4 + 100) = 0x85;
          }
          else if (iVar8 == -0x3fffff73) {
            *(undefined4 *)(iVar4 + 100) = 0x82;
          }
          else if (iVar8 == -0x3fffff71) {
            *(undefined4 *)(iVar4 + 100) = 0x86;
          }
          else if (iVar8 == -0x3fffff6e) {
            *(undefined4 *)(iVar4 + 100) = 0x8a;
          }
          (*pcVar2)(8,*(undefined4 *)(iVar4 + 100));
          *(undefined4 *)(iVar4 + 100) = uVar3;
        }
        else {
          piVar5[2] = 0;
          (*pcVar2)(piVar5[1]);
        }
        *(undefined4 *)(iVar4 + 0x60) = uVar6;
      }
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}


// ==== 101ce969 ___security_init_cookie

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
  if ((DAT_103554c4 == 0xbb40e64e) || ((DAT_103554c4 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_103554c4 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_103554c4 == 0xbb40e64e) {
      DAT_103554c4 = 0xbb40e64f;
    }
    else if ((DAT_103554c4 & 0xffff0000) == 0) {
      DAT_103554c4 = DAT_103554c4 | DAT_103554c4 << 0x10;
    }
  }
  DAT_103554c8 = ~DAT_103554c4;
  return;
}


// ==== 101ce9fd ___ascii_stricmp

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


// ==== 101cea32 __stricmp_l

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
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
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


// ==== 101ceb10 _strncpy

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x101ceb5c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_101ceba3;
        goto LAB_101cec19;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x101cec15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_101cec19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_101ceba3;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x101cec15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x101cec15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x101cec15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x101ceb5c:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_101ceba3:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


// ==== 101cec34 _CallDestructExceptionObject

/* Library Function - Single Match
    _CallDestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void _CallDestructExceptionObject(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  if ((*param_1 == -0x1f928c9d) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1029a93c),
     BVar1 != 0)) {
    ___DestructExceptionObject(param_1,param_2);
  }
  return;
}


// ==== 101cec70 _ValidateScopeTableHandlers

/* Library Function - Single Match
    _ValidateScopeTableHandlers
   
   Library: Visual Studio 2005 Release */

undefined4 _ValidateScopeTableHandlers(int param_1)

{
  int *piVar1;
  int iVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  PBYTE unaff_EDI;
  
  p_Var3 = (PIMAGE_SECTION_HEADER)0x0;
  uVar4 = 0xffffffff;
  while( true ) {
    if (in_ECX == -1) {
      return 1;
    }
    piVar1 = (int *)(param_1 + in_ECX * 0xc);
    uVar5 = *(int *)(param_1 + 8 + in_ECX * 0xc) - (int)unaff_EDI & 0xfffff000;
    if (((uVar5 != uVar4) &&
        ((((uVar4 = uVar5, p_Var3 == (PIMAGE_SECTION_HEADER)0x0 || (uVar5 < p_Var3->VirtualAddress))
          || ((p_Var3->Misc).PhysicalAddress + p_Var3->VirtualAddress <= uVar5)) &&
         ((p_Var3 = __FindPESection(unaff_EDI,uVar5), p_Var3 == (PIMAGE_SECTION_HEADER)0x0 ||
          ((p_Var3->Characteristics & 0x20000000) == 0)))))) ||
       (((iVar2 = piVar1[1], iVar2 != 0 &&
         ((uVar5 = iVar2 - (int)unaff_EDI & 0xfffff000, uVar5 != uVar4 &&
          ((uVar4 = uVar5, uVar5 < p_Var3->VirtualAddress ||
           ((p_Var3->Misc).PhysicalAddress + p_Var3->VirtualAddress <= uVar5)))))) &&
        ((p_Var3 = __FindPESection(unaff_EDI,uVar5), p_Var3 == (PIMAGE_SECTION_HEADER)0x0 ||
         ((p_Var3->Characteristics & 0x20000000) == 0)))))) break;
    in_ECX = *piVar1;
  }
  return 0;
}


// ==== 101ced30 __ValidateEH3RN

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ValidateEH3RN
   
   Library: Visual Studio 2005 Release */

undefined4 __ValidateEH3RN(void *param_1)

{
  uint uVar1;
  PBYTE pBVar2;
  PVOID pImageBase;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  PIMAGE_SECTION_HEADER p_Var6;
  SIZE_T SVar7;
  uint *puVar8;
  int iVar9;
  PBYTE pBVar10;
  bool bVar11;
  uint uStack_54;
  _MEMORY_BASIC_INFORMATION local_44;
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_103554c4 ^ 0x10321160;
  uStack_54 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_54;
  local_20 = *(uint **)((int)param_1 + 8);
  if (((uint)local_20 & 3) != 0) {
    return 0;
  }
  if ((StackLimit <= local_20) && (local_20 < StackBase)) {
    return 0;
  }
  local_28 = *(uint *)((int)param_1 + 0xc);
  if (local_28 == 0xffffffff) {
    return 1;
  }
  bVar11 = false;
  uVar3 = 0;
  puVar8 = local_20;
  do {
    if ((*puVar8 != 0xffffffff) && (uVar3 <= *puVar8)) {
      return 0;
    }
    if (puVar8[1] != 0) {
      bVar11 = true;
    }
    uVar3 = uVar3 + 1;
    puVar8 = puVar8 + 3;
  } while (uVar3 <= local_28);
  if (bVar11) {
    if (*(void **)((int)param_1 + -8) < StackLimit) {
      return 0;
    }
    if (param_1 <= *(void **)((int)param_1 + -8)) {
      return 0;
    }
  }
  local_24 = (uint)local_20 & 0xfffff000;
  for (iVar9 = 0; ExceptionList = &local_14, puVar8 = &uStack_54, iVar9 < DAT_103b4300;
      iVar9 = iVar9 + 1) {
    uVar3 = (&DAT_103b4308)[iVar9 * 2];
    pBVar10 = (PBYTE)(&DAT_103b430c)[iVar9 * 2];
    if (uVar3 == local_24) {
      local_8 = 0;
      BVar4 = __ValidateImageBase(pBVar10);
      puVar8 = (uint *)local_1c;
      if (((BVar4 != 0) &&
          (iVar5 = _ValidateScopeTableHandlers(local_20), puVar8 = (uint *)local_1c, iVar5 != 0)) &&
         (p_Var6 = __FindPESection(pBVar10,*(int *)((int)param_1 + 4) - (int)pBVar10),
         puVar8 = (uint *)local_1c, p_Var6 != (PIMAGE_SECTION_HEADER)0x0)) {
        if (iVar9 < 1) {
          ExceptionList = local_14;
          return 1;
        }
        LOCK();
        UNLOCK();
        if (DAT_103b4388 != 0) {
          DAT_103b4388 = 1;
          ExceptionList = local_14;
          return 1;
        }
        if ((&DAT_103b4308)[iVar9 * 2] == local_24) goto LAB_101ceed3;
        iVar9 = DAT_103b4300 + -1;
        if (iVar9 < 0) goto LAB_101ceec2;
        goto LAB_101ceea0;
      }
      break;
    }
  }
  local_1c = (undefined1 *)puVar8;
  local_8 = 0xfffffffe;
  SVar7 = VirtualQuery(local_20,&local_44,0x1c);
  if (SVar7 == 0) {
    ExceptionList = local_14;
    return 1;
  }
  if (local_44.Type != 0x1000000) {
    if (local_44.Type != 0x20000) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    if (DAT_103b4304 == 0) {
      _DAT_103b4390 = 0x94;
      BVar4 = GetVersionExA((LPOSVERSIONINFOA)&DAT_103b4390);
      if (BVar4 == 0) {
        if (DAT_103b4304 == 0) goto LAB_101cefc0;
      }
      else {
        DAT_103b4304 = 1;
      }
    }
    if (DAT_103b43a0 != 1) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
  }
LAB_101cefc0:
  pImageBase = local_44.AllocationBase;
  BVar4 = __ValidateImageBase(local_44.AllocationBase);
  if (BVar4 == 0) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if ((((((byte)local_44.Protect & 0xcc) != 0) &&
       ((p_Var6 = __FindPESection(pImageBase,(int)local_20 - (int)pImageBase),
        p_Var6 == (PIMAGE_SECTION_HEADER)0x0 || ((p_Var6->Characteristics & 0x80000000) != 0)))) ||
      (iVar9 = _ValidateScopeTableHandlers(local_20), iVar9 == 0)) ||
     (p_Var6 = __FindPESection(pImageBase,*(int *)((int)param_1 + 4) - (int)pImageBase),
     p_Var6 == (PIMAGE_SECTION_HEADER)0x0)) {
    ExceptionList = local_14;
    return 0;
  }
  LOCK();
  UNLOCK();
  if (DAT_103b4388 != 0) {
    DAT_103b4388 = 1;
    ExceptionList = local_14;
    return 1;
  }
  iVar9 = DAT_103b4300;
  if (0 < DAT_103b4300) {
    puVar8 = (uint *)(&DAT_103b4300 + DAT_103b4300 * 2);
    do {
      if (*puVar8 == local_24) break;
      iVar9 = iVar9 + -1;
      puVar8 = puVar8 + -2;
    } while (0 < iVar9);
  }
  if (iVar9 == 0) {
    iVar9 = DAT_103b4300;
    if (0xf < DAT_103b4300) {
      iVar9 = 0xf;
    }
    if (-1 < iVar9) {
      puVar8 = &DAT_103b4308;
      iVar9 = iVar9 + 1;
      do {
        uVar3 = *puVar8;
        pBVar10 = (PBYTE)puVar8[1];
        *puVar8 = local_24;
        puVar8[1] = (uint)local_44.AllocationBase;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
        local_24 = uVar3;
        local_44.AllocationBase = pBVar10;
      } while (iVar9 != 0);
    }
    if (DAT_103b4300 < 0x10) {
      DAT_103b4300 = DAT_103b4300 + 1;
    }
  }
  else {
    (&DAT_103b4304)[iVar9 * 2] = (int)local_44.AllocationBase;
  }
LAB_101cf0b2:
  LOCK();
  UNLOCK();
  DAT_103b4388 = 0;
  ExceptionList = local_14;
  return 1;
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
LAB_101ceea0:
    if ((&DAT_103b4308)[iVar9 * 2] == local_24) {
      uVar3 = (&DAT_103b4308)[iVar9 * 2];
      pBVar10 = (PBYTE)(&DAT_103b430c)[iVar9 * 2];
      break;
    }
  }
  bVar11 = false;
  if (iVar9 < 0) {
LAB_101ceec2:
    if (DAT_103b4300 < 0x10) {
      DAT_103b4300 = DAT_103b4300 + 1;
    }
    iVar9 = DAT_103b4300 + -1;
LAB_101ceed3:
    bVar11 = iVar9 < 0;
  }
  if ((iVar9 != 0 && !bVar11) && (iVar5 = 0, -1 < iVar9)) {
    do {
      uVar1 = (&DAT_103b4308)[iVar5 * 2];
      pBVar2 = (PBYTE)(&DAT_103b430c)[iVar5 * 2];
      (&DAT_103b4308)[iVar5 * 2] = uVar3;
      (&DAT_103b430c)[iVar5 * 2] = pBVar10;
      iVar5 = iVar5 + 1;
      uVar3 = uVar1;
      pBVar10 = pBVar2;
    } while (iVar5 <= iVar9);
  }
  goto LAB_101cf0b2;
}


// ==== 101cf0d2 __tolower_l

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
LAB_101cf131:
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
      puVar4 = (undefined4 *)FUN_101c8c22();
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
    if (iVar3 == 0) goto LAB_101cf131;
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


// ==== 101cf1e9 _tolower

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_103b3d3c == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 101cf210 ___ascii_strnicmp

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
      if (bVar2 != (byte)uVar3) goto LAB_101cf261;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_101cf261:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 101cf34e __crtLCMapStringW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t const *,int,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          wchar_t *param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  short *psVar4;
  uint cbMultiByte;
  rsize_t _MaxCount;
  undefined4 *puVar5;
  errno_t eVar6;
  int *in_ECX;
  wchar_t *pwVar7;
  char *lpDestStr;
  LPCSTR local_c;
  
  uVar1 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  lpDestStr = (char *)0x0;
  if (DAT_103b4424 == 0) {
    iVar2 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_103b4424 = 2;
      }
    }
    else {
      DAT_103b4424 = 1;
    }
  }
  psVar4 = (short *)param_3;
  pwVar7 = param_4;
  if (0 < (int)param_4) {
    do {
      pwVar7 = (wchar_t *)((int)pwVar7 + -1);
      if (*psVar4 == 0) goto LAB_101cf3c3;
      psVar4 = psVar4 + 1;
    } while (pwVar7 != (wchar_t *)0x0);
    pwVar7 = (wchar_t *)0xffffffff;
LAB_101cf3c3:
    param_4 = (wchar_t *)((int)param_4 + (-1 - (int)pwVar7));
  }
  if (DAT_103b4424 == 1) {
    LCMapStringW((LCID)param_1,param_2,(LPCWSTR)param_3,(int)param_4,(LPWSTR)param_5,(int)param_6);
    goto LAB_101cf59d;
  }
  if ((DAT_103b4424 != 2) && (DAT_103b4424 != 0)) goto LAB_101cf59d;
  if (param_1 == (localeinfo_struct *)0x0) {
    param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
  }
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  iVar2 = ___ansicp(param_1);
  if ((param_7 != iVar2) && (iVar2 != -1)) {
    param_7 = iVar2;
  }
  cbMultiByte = WideCharToMultiByte(param_7,0,(LPCWSTR)param_3,(int)param_4,(LPSTR)0x0,0,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
  if (cbMultiByte == 0) goto LAB_101cf59d;
  if (((int)cbMultiByte < 1) || (0xffffffe0 / cbMultiByte == 0)) {
    local_c = (LPCSTR)0x0;
  }
  else if (cbMultiByte + 8 < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe0;
    local_c = &stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_101cf48c:
      local_c = (LPCSTR)(puVar5 + 2);
    }
  }
  else {
    puVar5 = _malloc(cbMultiByte + 8);
    local_c = (LPCSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_101cf48c;
    }
  }
  if (local_c == (LPCSTR)0x0) goto LAB_101cf59d;
  iVar2 = WideCharToMultiByte(param_7,0,(LPCWSTR)param_3,(int)param_4,local_c,cbMultiByte,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  if ((iVar2 != 0) &&
     (_MaxCount = LCMapStringA((LCID)param_1,param_2,local_c,cbMultiByte,(LPSTR)0x0,0),
     _MaxCount != 0)) {
    if ((0 < (int)_MaxCount) && (0xffffffe0 / _MaxCount != 0)) {
      if (_MaxCount + 8 < 0x401) {
        puVar5 = (undefined4 *)&stack0xffffffe0;
        lpDestStr = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_101cf510:
          lpDestStr = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_MaxCount + 8);
        lpDestStr = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_101cf510;
        }
      }
    }
    if (lpDestStr != (char *)0x0) {
      iVar2 = LCMapStringA((LCID)param_1,param_2,local_c,cbMultiByte,lpDestStr,_MaxCount);
      if (iVar2 != 0) {
        if ((param_2 & 0x400) == 0) {
          if (param_6 == (wchar_t *)0x0) {
            param_6 = (wchar_t *)0x0;
            param_5 = 0;
          }
          MultiByteToWideChar(param_7,1,lpDestStr,_MaxCount,(LPWSTR)param_5,(int)param_6);
        }
        else if (param_6 != (wchar_t *)0x0) {
          if ((int)param_6 <= (int)_MaxCount) {
            _MaxCount = (int)param_6 - 1;
          }
          eVar6 = _strncpy_s((char *)param_5,(rsize_t)param_6,lpDestStr,_MaxCount);
          if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      __freea(lpDestStr);
    }
  }
  __freea(local_c);
LAB_101cf59d:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 101cf5af ___crtLCMapStringW

/* Library Function - Single Match
    ___crtLCMapStringW
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,
                  LPWSTR _LpDestStr,int _CchDest)

{
  int iVar1;
  wchar_t *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,(localeinfo_struct *)_LocaleName);
  iVar1 = __crtLCMapStringW_stat
                    ((localeinfo_struct *)_DWMapFlag,(ulong)_LpSrcStr,_CchSrc,_LpDestStr,_CchDest,
                     in_stack_0000001c,in_stack_00000020,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 101d0410 __ValidateImageBase

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


// ==== 101d0440 __FindPESection

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


// ==== 101d0490 __IsNonwritableInCurrentImage

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
  local_c = DAT_103554c4 ^ 0x10321180;
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


// ==== 101d054b _ValidateRead

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}


// ==== 101d0558 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined1 local_2c [4];
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_101d4e78(&local_14,local_2c,_Str,0,0,0,0,local_28);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_101d05af:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_101d05ef;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_101d05e1:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_101d05ef;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_101d05e1;
    goto LAB_101d05af;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_101d05ef:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 101d05fe FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined1 local_2c [4];
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_101d4e78(&local_14,local_2c,_Str,0,0,0,0,local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_101d0655:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_101d0695;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_101d0687:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_101d0695;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_101d0687;
    goto LAB_101d0655;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_101d0695:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 101d06a4 __fptostr

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
    puVar1 = (undefined4 *)FUN_101c8c22();
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
    puVar1 = (undefined4 *)FUN_101c8c22();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_101c2369(0,0,0,0,0);
  return eVar7;
}


// ==== 101d0761 ___dtold

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void ___dtold(uint *param_1,uint *param_2)

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
      goto LAB_101d0813;
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
LAB_101d0813:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 101d081c __fltout2

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  undefined4 in_stack_ffffffb0;
  undefined2 uVar4;
  short local_30;
  char local_2e;
  char local_2c [24];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffb0 >> 0x10);
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,&_Dbl);
  iVar1 = FUN_101d5538(local_14,uStack_10,CONCAT22(uVar4,uStack_c),0x11,0,&local_30);
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


// ==== 101d08b0 __alldvrm

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


// ==== 101d0990 __aullshr

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __aullshr(void)

{
  uint in_EAX;
  byte in_CL;
  uint in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX >> (in_CL & 0x1f),
                    in_EAX >> (in_CL & 0x1f) | in_EDX << 0x20 - (in_CL & 0x1f));
  }
  return (ulonglong)(in_EDX >> (in_CL & 0x1f));
}


// ==== 101d09b8 __controlfp_s

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
    puVar2 = (undefined4 *)FUN_101c8c22();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  return eVar3;
}


// ==== 101d0a22 _realloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  int local_24;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_103b56bc == 3) {
    do {
      local_20 = (void *)0x0;
      if (0xffffffe0 < _NewSize) goto LAB_101d0bfb;
      __lock(4);
      local_24 = thunk_FUN_101cb50f(_Memory);
      if (local_24 != 0) {
        if (_NewSize <= DAT_103b56ac) {
          iVar2 = ___sbh_resize_block(local_24,_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(_NewSize);
            if (local_20 != (void *)0x0) {
              uVar3 = *(int *)((int)_Memory + -4) - 1;
              if (_NewSize <= uVar3) {
                uVar3 = _NewSize;
              }
              _memcpy(local_20,_Memory,uVar3);
              local_24 = thunk_FUN_101cb50f(_Memory);
              ___sbh_free_block(local_24,_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (void *)0x0) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_103b4088,0,_NewSize);
          if (local_20 != (LPVOID)0x0) {
            uVar3 = *(int *)((int)_Memory + -4) - 1;
            if (_NewSize <= uVar3) {
              uVar3 = _NewSize;
            }
            _memcpy(local_20,_Memory,uVar3);
            ___sbh_free_block(local_24,_Memory);
          }
        }
      }
      FUN_101d0b66();
      if (local_24 == 0) {
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_103b4088,0,_Memory,_NewSize);
      }
      if (local_20 != (void *)0x0) {
        return local_20;
      }
      if (DAT_103b41e8 == 0) {
        puVar4 = (undefined4 *)FUN_101c8c22();
        if (local_24 != 0) {
          *puVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_101d0c28;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_101c8c22();
    if (local_24 != 0) goto LAB_101d0c07;
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) goto LAB_101d0bfb;
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar7 = HeapReAlloc(DAT_103b4088,0,_Memory,_NewSize);
      if (pvVar7 != (LPVOID)0x0) {
        return pvVar7;
      }
      if (DAT_103b41e8 == 0) {
        puVar4 = (undefined4 *)FUN_101c8c22();
LAB_101d0c28:
        DVar5 = GetLastError();
        uVar6 = FUN_101c8be7(DVar5);
        *puVar4 = uVar6;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    puVar4 = (undefined4 *)FUN_101c8c22();
  }
  DVar5 = GetLastError();
  uVar6 = FUN_101c8be7(DVar5);
  *puVar4 = uVar6;
  return (void *)0x0;
LAB_101d0bfb:
  __callnewh(_NewSize);
  puVar4 = (undefined4 *)FUN_101c8c22();
LAB_101d0c07:
  *puVar4 = 0xc;
  return (void *)0x0;
}


// ==== 101d0b66 FUN_101d0b66

void FUN_101d0b66(void)

{
  FUN_101cb39a(4);
  return;
}


// ==== 101d0c3d FUN_101d0c3d

void * FUN_101d0c3d(void *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  size_t sVar3;
  
  sVar3 = 0;
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    param_2 = param_2 * param_3;
    if (param_1 != (void *)0x0) {
      sVar3 = __msize(param_1);
    }
    pvVar2 = _realloc(param_1,param_2);
    if ((pvVar2 != (void *)0x0) && (sVar3 < param_2)) {
      _memset((void *)(sVar3 + (int)pvVar2),0,param_2 - sVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0xc;
    FUN_101c2369(0,0,0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ==== 101d0cb6 __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __initp_misc_winsig(undefined4 param_1)

{
  DAT_103b4468 = param_1;
  DAT_103b446c = param_1;
  DAT_103b4470 = param_1;
  DAT_103b4474 = param_1;
  return;
}


// ==== 101d0ccf siglookup

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
  } while (uVar1 < DAT_1035639c * 0xc + param_1);
  if ((DAT_1035639c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 101d0d03 ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_101c64b3(DAT_103b4470);
  return p_Var1;
}


// ==== 101d0d10 _raise

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  
  iVar6 = 0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_103b4468;
        uVar4 = DAT_103b4468;
        goto LAB_101d0dc5;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_101d0da3;
        if (_SigNum != 8) goto LAB_101d0d87;
      }
    }
    iVar6 = FUN_101c6658();
    if (iVar6 == 0) {
      return -1;
    }
    iVar2 = siglookup(*(undefined4 *)(iVar6 + 0x5c));
    puVar5 = (undefined4 *)(iVar2 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_103b4474;
      uVar4 = DAT_103b4474;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_103b446c;
      uVar4 = DAT_103b446c;
    }
    else {
      if (_SigNum != 0x16) {
LAB_101d0d87:
        puVar5 = (undefined4 *)FUN_101c8c22();
        *puVar5 = 0x16;
        FUN_101c2369(0,0,0,0,0);
        return -1;
      }
LAB_101d0da3:
      puVar5 = &DAT_103b4470;
      uVar4 = DAT_103b4470;
    }
LAB_101d0dc5:
    bVar1 = true;
    pcVar3 = (code *)FUN_101c64b3(uVar4);
  }
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = *(undefined4 *)(iVar6 + 0x60);
    *(undefined4 *)(iVar6 + 0x60) = 0;
    if (_SigNum == 8) {
      local_34 = *(undefined4 *)(iVar6 + 100);
      *(undefined4 *)(iVar6 + 100) = 0x8c;
      goto LAB_101d0e29;
    }
  }
  else {
LAB_101d0e29:
    if (_SigNum == 8) {
      for (local_28 = DAT_10356390; local_28 < DAT_10356394 + DAT_10356390; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + *(int *)(iVar6 + 0x5c)) = 0;
      }
      goto LAB_101d0e63;
    }
  }
  uVar4 = __encoded_null();
  *puVar5 = uVar4;
LAB_101d0e63:
  FUN_101d0e84();
  if (_SigNum == 8) {
    (*pcVar3)(8,*(undefined4 *)(iVar6 + 100));
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar6 + 0x60) = local_30;
  if (_SigNum == 8) {
    *(undefined4 *)(iVar6 + 100) = local_34;
  }
  return 0;
}


// ==== 101d0e84 FUN_101d0e84

void FUN_101d0e84(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_101cb39a(0);
  }
  return;
}


// ==== 101d0ec0 FUN_101d0ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0ec0(undefined4 param_1)

{
  _DAT_103b447c = param_1;
  return;
}


// ==== 101d0eca FUN_101d0eca

void FUN_101d0eca(undefined4 param_1)

{
  DAT_103b4480 = param_1;
  return;
}


// ==== 101d0ed4 ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 101d0ee4 ___crtInitCritSecAndSpinCount

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_103211e0;
  uStack_c = 0x101d0ef0;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_101c64b3(DAT_103b4480);
  if (pcVar1 != (FARPROC)0x0) goto LAB_101d0f5a;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_101d0f49:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_101d0f49;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_101d0f49;
  }
  DAT_103b4480 = FUN_101c643c(pcVar1);
LAB_101d0f5a:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 101d0fa9 FUN_101d0fa9

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_101d0fa9(void)

{
  return 1;
}


// ==== 101d0ff9 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x101d1034) */
/* WARNING: Removing unreachable block (ram,0x101d1021) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_101d0fa9(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 101d1066 __lseeki64_nolock

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 9;
LAB_101d1095:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_101c8c48(DVar4);
        goto LAB_101d1095;
      }
    }
    pbVar1 = (byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}


// ==== 101d10e9 __lseeki64

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  undefined4 *puVar1;
  int iVar2;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103b456c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        puVar1 = (undefined4 *)FUN_101c8c35();
        *puVar1 = 0;
        puVar1 = (undefined4 *)FUN_101c8c22();
        *puVar1 = 9;
        FUN_101c2369(0,0,0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_101c8c22();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_101c8c35();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_101d11f8();
      }
      goto LAB_101d11f2;
    }
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    FUN_101c2369(0,0,0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_101d11f2:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}


// ==== 101d11f8 FUN_101d11f8

void FUN_101d11f8(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 101d1202 __write_nolock

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  wchar_t wVar5;
  undefined4 *puVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD nNumberOfBytesToWrite;
  int iVar10;
  uint uVar11;
  WCHAR *pWVar12;
  uint uVar13;
  char *pcVar14;
  undefined4 uVar15;
  int unaff_EDI;
  int *piVar16;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  char *local_588;
  int local_584;
  WCHAR *local_580;
  char *local_57c;
  WCHAR *local_578;
  char local_571;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [38];
  undefined1 local_51c [264];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_101d17b2;
  if (_Buf == (void *)0x0) {
    puVar6 = (undefined4 *)FUN_101c8c35();
    *puVar6 = 0;
    puVar6 = (undefined4 *)FUN_101c8c22();
    *puVar6 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    goto LAB_101d17b2;
  }
  iVar10 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_103b4580 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar10 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar6 = (undefined4 *)FUN_101c8c35();
    *puVar6 = 0;
    puVar6 = (undefined4 *)FUN_101c8c22();
    *puVar6 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    goto LAB_101d17b2;
  }
  if ((*(byte *)(*piVar16 + iVar10 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar10 + 4 + *piVar16) & 0x80) == 0)) {
LAB_101d14ed:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar10) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar10),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_101d1747:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_101d1750:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_101d17b2;
      goto LAB_101d175a;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_101d1781;
      do {
        local_578 = (WCHAR *)0x0;
        uVar11 = (int)local_56c - (int)local_580;
        pWVar12 = local_568;
        do {
          if (_MaxCharCount <= uVar11) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar11 = uVar11 + 1;
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar12 = '\r';
            pWVar12 = (WCHAR *)((int)pWVar12 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar12 = (char)WVar4;
          pWVar12 = (WCHAR *)((int)pWVar12 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar10 + *piVar16),local_568,(int)pWVar12 - (int)local_568,
                          (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_101d1747;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar12 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_101d1750;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar13 = 0;
          uVar11 = (int)local_56c - (int)local_580;
          pWVar12 = local_568;
          do {
            if (_MaxCharCount <= uVar11) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar11 = uVar11 + 2;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar12 = L'\r';
              pWVar12 = pWVar12 + 1;
              uVar13 = uVar13 + 2;
            }
            *pWVar12 = WVar4;
            pWVar12 = pWVar12 + 1;
            uVar13 = uVar13 + 2;
            piVar16 = local_58c;
            local_56c = pWVar1;
          } while (uVar13 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar10 + *piVar16),local_568,(int)pWVar12 - (int)local_568,
                            (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_101d1747;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar12 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_101d1750;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar11 = (int)local_578 - (int)local_580;
          pWVar12 = local_164;
          do {
            if (_MaxCharCount <= uVar11) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar11 = uVar11 + 2;
            if (WVar4 == L'\n') {
              *pWVar12 = L'\r';
              pWVar12 = pWVar12 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar12 = WVar4;
            pWVar12 = pWVar12 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar14 = (char *)0x0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar12 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_101d1747;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar10 + *local_58c),local_414 + (int)pcVar14,
                              iVar7 - (int)pcVar14,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar14 = pcVar14 + (int)local_588;
          } while ((int)pcVar14 < iVar7);
        } while ((iVar7 <= (int)pcVar14) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_101d1750;
      }
    }
LAB_101d1781:
    uVar15 = 0;
    if (((*(byte *)(iVar10 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_101d17b2;
    puVar6 = (undefined4 *)FUN_101c8c22();
    *puVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar10 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_101d14ed;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar12 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar7 = _isleadbyte(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar7 == 0) {
            iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar12,1);
            if (iVar7 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar12)) < (char *)0x2) ||
               (iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar12,2), iVar7 == -1)) break;
            pWVar12 = (WCHAR *)((int)pWVar12 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar12 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar10 + *piVar16),local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_56c,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_101d1747;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)nNumberOfBytesToWrite) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar10 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_101d1747;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = local_57c + 1;
          }
        }
        else {
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            local_570 = (DWORD)(ushort)*local_590;
            local_594 = (uint)(*local_590 == L'\n');
            local_590 = local_590 + 1;
            local_578 = local_578 + 1;
          }
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_101d1747;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_101d1747;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_101d1750;
    }
LAB_101d175a:
    if (local_570 == 0) goto LAB_101d1781;
    uVar15 = 5;
    if (local_570 != 5) {
      FUN_101c8c48((short)local_570);
      goto LAB_101d17b2;
    }
    puVar6 = (undefined4 *)FUN_101c8c22();
    *puVar6 = 9;
  }
  puVar6 = (undefined4 *)FUN_101c8c35();
  *puVar6 = uVar15;
LAB_101d17b2:
  iVar10 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar10;
}


// ==== 101d17c8 __write

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  undefined4 *puVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103b456c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          puVar1 = (undefined4 *)FUN_101c8c22();
          *puVar1 = 9;
          puVar1 = (undefined4 *)FUN_101c8c35();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_101d189a();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    FUN_101c2369(0,0,0,0,0);
  }
  return -1;
}


// ==== 101d189a FUN_101d189a

void FUN_101d189a(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 101d18a4 __getbuf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_103b41ec = _DAT_103b41ec + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}


// ==== 101d18e8 __isatty

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  undefined4 *puVar1;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103b456c)) {
    return *(byte *)((&DAT_103b4580)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = 9;
  FUN_101c2369(0,0,0,0,0);
  return 0;
}


// ==== 101d1946 __fputwc_nolock

/* Library Function - Single Match
    __fputwc_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __fputwc_nolock(wchar_t _Ch,FILE *_File)

{
  int *piVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  errno_t eVar6;
  char cVar7;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  if ((_File->_flag & 0x40) == 0) {
    iVar3 = __fileno(_File);
    if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
      puVar5 = &DAT_103562e0;
    }
    else {
      iVar3 = __fileno(_File);
      uVar4 = __fileno(_File);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) != 2) {
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_103562e0;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar3 >> 5]);
      }
      if ((puVar5[0x24] & 0x7f) == 1) {
        piVar1 = &_File->_cnt;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar4 = __flsbuf((int)(char)_Ch,_File);
        }
        else {
          *_File->_ptr = (char)_Ch;
          uVar4 = (uint)(byte)*_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
        }
        if (uVar4 != 0xffffffff) {
          piVar1 = &_File->_cnt;
          *piVar1 = *piVar1 + -1;
          cVar7 = (char)((ushort)_Ch >> 8);
          if (*piVar1 < 0) {
            __flsbuf((int)cVar7,_File);
          }
          else {
            *_File->_ptr = cVar7;
            _File->_ptr = _File->_ptr + 1;
          }
        }
        goto LAB_101d1b15;
      }
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_103562e0;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar3 >> 5]);
      }
      if ((puVar5[4] & 0x80) != 0) {
        eVar6 = _wctomb_s(&local_14,local_10,5,_Ch);
        if ((eVar6 == 0) && (iVar3 = 0, 0 < local_14)) {
          do {
            piVar1 = &_File->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar4 = __flsbuf((int)local_10[iVar3],_File);
            }
            else {
              *_File->_ptr = local_10[iVar3];
              uVar4 = (uint)(byte)*_File->_ptr;
              _File->_ptr = _File->_ptr + 1;
            }
          } while ((uVar4 != 0xffffffff) && (iVar3 = iVar3 + 1, iVar3 < local_14));
        }
        goto LAB_101d1b15;
      }
    }
  }
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    __flswbuf((uint)(ushort)_Ch,_File);
  }
  else {
    *(wchar_t *)_File->_ptr = _Ch;
    _File->_ptr = _File->_ptr + 2;
  }
LAB_101d1b15:
  wVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar2;
}


// ==== 101d1b24 FUN_101d1b24

bool FUN_101d1b24(void)

{
  return DAT_103b4484 == (DAT_103554c4 | 1);
}


// ==== 101d1b3a __mbtowc_l

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_101d1b85;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        puVar3 = (undefined4 *)FUN_101c8c22();
        *puVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_101d1b85:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}


// ==== 101d1c4d _mbtowc

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}


// ==== 101d1c64 __crtGetStringTypeA_stat

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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_103b4488 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_103b4488 = 2;
      }
      goto LAB_101d1cbd;
    }
    DAT_103b4488 = 1;
  }
  else {
LAB_101d1cbd:
    if ((DAT_103b4488 == 2) || (DAT_103b4488 == 0)) {
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
      goto LAB_101d1e0a;
    }
    if (DAT_103b4488 != 1) goto LAB_101d1e0a;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_101d1e0a;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_101d1d4d:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_101d1d4d;
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
LAB_101d1e0a:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 101d1e1c ___crtGetStringTypeA

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


// ==== 101d1e5c ___free_lc_time

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


// ==== 101d1fec ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10356460) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10356464) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10356468) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 101d202c ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1035646c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10356470) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10356474) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10356478) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1035647c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10356480) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10356484) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 101d20b5 _strcat_s

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
        puVar2 = (undefined4 *)FUN_101c8c22();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_101d20d4;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_101c8c22();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_101d20d4:
  FUN_101c2369(0,0,0,0,0);
  return eVar4;
}


// ==== 101d2130 _strcspn

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


// ==== 101d2176 _strncpy_s

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
LAB_101d219a:
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
          puVar2 = (undefined4 *)FUN_101c8c22();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_101d21ab;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_101d219a;
  puVar2 = (undefined4 *)FUN_101c8c22();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_101d21ab:
  FUN_101c2369(0,0,0,0,0);
  return eVar5;
}


// ==== 101d2229 _strncmp

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
          goto LAB_101d22e3;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_101d22e3;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_101d22e3;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_101d22e3;
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
LAB_101d22e3:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}


// ==== 101d22f0 _strpbrk

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


// ==== 101d2330 __wctomb_s_l

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  errno_t eVar1;
  undefined4 *puVar2;
  errno_t *peVar3;
  int iVar4;
  DWORD DVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_101d2352:
    eVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      puVar2 = (undefined4 *)FUN_101c8c22();
      *puVar2 = 0x16;
      FUN_101c2369(0,0,0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_101d23e2;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_101d2419:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_101d2352;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar4 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar4 == 0) {
        DVar5 = GetLastError();
        if (DVar5 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_101d23e2:
          puVar2 = (undefined4 *)FUN_101c8c22();
          *puVar2 = 0x22;
          FUN_101c2369(0,0,0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar4;
        }
        goto LAB_101d2419;
      }
    }
    puVar2 = (undefined4 *)FUN_101c8c22();
    *puVar2 = 0x2a;
    peVar3 = (errno_t *)FUN_101c8c22();
    eVar1 = *peVar3;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return eVar1;
}


// ==== 101d248f _wctomb_s

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}


// ==== 101d24aa FUN_101d24aa

undefined4 FUN_101d24aa(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_103b4490 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_103b4490 = FUN_101c643c(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_103b4494 = FUN_101c643c(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_103b4498 = FUN_101c643c(pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_103b44a0 = FUN_101c643c(pFVar1);
      if (DAT_103b44a0 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_103b449c = FUN_101c643c(pFVar1);
      }
    }
  }
  if ((DAT_103b449c != local_c) && (DAT_103b44a0 != local_c)) {
    pcVar3 = (code *)FUN_101c64b3(DAT_103b449c);
    pcVar4 = (code *)FUN_101c64b3(DAT_103b44a0);
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
      goto LAB_101d2640;
    }
  }
  if ((((DAT_103b4494 != local_c) &&
       (pcVar3 = (code *)FUN_101c64b3(DAT_103b4494), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_103b4498 != local_c &&
      (pcVar3 = (code *)FUN_101c64b3(DAT_103b4498), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_101d2640:
  pcVar3 = (code *)FUN_101c64b3(DAT_103b4490);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 101d2667 __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_103b3988;
      DAT_103b3988 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_103b3988;
    }
  }
  puVar2 = (undefined4 *)FUN_101c8c22();
  *puVar2 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  return -1;
}


// ==== 101d26ad ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101d26f4 ___convertcp

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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_101d2894;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_101d2894;
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
LAB_101d27d4:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_101d27d4;
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
LAB_101d2894:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101d28a6 __set_osfhnd

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_103b456c)) {
    iVar2 = (param_1 & 0x1fU) * 0x38;
    if (*(int *)(iVar2 + (&DAT_103b4580)[param_1 >> 5]) == -1) {
      if (DAT_103b398c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_101d2900;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_101d2900:
      *(intptr_t *)(iVar2 + (&DAT_103b4580)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_101c8c35();
  *puVar1 = 0;
  return -1;
}


// ==== 101d2923 __free_osfhnd

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_103b456c)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_103b4580)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_103b398c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_101d2981;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_101d2981:
      *(undefined4 *)(iVar3 + (&DAT_103b4580)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_101c8c22();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_101c8c35();
  *puVar2 = 0;
  return -1;
}


// ==== 101d29a4 __get_osfhandle

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  undefined4 *puVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_101c8c35();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103b456c)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_103b4580)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  puVar1 = (undefined4 *)FUN_101c8c35();
  *puVar1 = 0;
  puVar1 = (undefined4 *)FUN_101c8c22();
  *puVar1 = 9;
  FUN_101c2369(0,0,0,0,0);
  return -1;
}


// ==== 101d2a15 ___lock_fhandle

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
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_103b4580)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_101d2aac();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_103b4580)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}


// ==== 101d2aac FUN_101d2aac

void FUN_101d2aac(void)

{
  FUN_101cb39a(10);
  return;
}


// ==== 101d2ab5 __unlock_fhandle

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_103b4580)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  return;
}


// ==== 101d2ad7 __alloc_osfhnd

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
      puVar3 = (undefined4 *)(&DAT_103b4580)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x38);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_103b4580)[iVar4] = puVar3;
          DAT_103b456c = DAT_103b456c + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_103b4580)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_103b4580)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_103b4580)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
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
            FUN_101d2baa();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_103b4580)[iVar4]) / 0x38 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_101d2c6d();
  }
  return local_20;
}


// ==== 101d2baa FUN_101d2baa

void FUN_101d2baa(void)

{
  FUN_101cb39a(10);
  return;
}


// ==== 101d2c6d FUN_101d2c6d

void FUN_101d2c6d(void)

{
  FUN_101cb39a(0xb);
  return;
}


// ==== 101d2d15 FUN_101d2d15

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD FUN_101d2d15(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_103b456c)) {
      iVar4 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)(iVar4 + 4 + (&DAT_103b4580)[(int)param_1 >> 5]) & 1) != 0) {
        ___lock_fhandle(param_1);
        if ((*(byte *)(iVar4 + 4 + (&DAT_103b4580)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_101d2dd7;
          pDVar3 = (DWORD *)FUN_101c8c35();
          *pDVar3 = local_20;
        }
        puVar1 = (undefined4 *)FUN_101c8c22();
        *puVar1 = 9;
        local_20 = 0xffffffff;
LAB_101d2dd7:
        FUN_101d2dec();
        return local_20;
      }
    }
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 9;
    FUN_101c2369(0,0,0,0,0);
  }
  return 0xffffffff;
}


// ==== 101d2dec FUN_101d2dec

void FUN_101d2dec(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 101d2df6 FUN_101d2df6

undefined4 FUN_101d2df6(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

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
  iVar3 = FUN_101d66d1(local_28);
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
        goto LAB_101d2edf;
      }
    }
    else if (uVar4 != 2) goto LAB_101d2e9b;
    local_c = 0xc0000000;
  }
LAB_101d2edf:
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
    if (param_4 != 0x80) goto LAB_101d2e9b;
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
      if (uVar4 == 0x200) goto LAB_101d2fe9;
      if (uVar4 != 0x300) goto LAB_101d2e9b;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_101d2fe9:
        local_18 = 5;
        goto LAB_101d2f93;
      }
      if (uVar4 != 0x700) {
LAB_101d2e9b:
        puVar5 = (undefined4 *)FUN_101c8c35();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar5 = (undefined4 *)FUN_101c8c22();
        *puVar5 = 0x16;
        FUN_101c2369(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_101d2f93:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_103b3cd8 & param_5))) {
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
    puVar5 = (undefined4 *)FUN_101c8c35();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x18;
    goto LAB_101d30b1;
  }
  *param_1 = 1;
  local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_101d30bd;
    }
    pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_101c8c48(DVar6);
    goto LAB_101d30b1;
  }
LAB_101d30bd:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_101c8c48(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      puVar5 = (undefined4 *)FUN_101c8c22();
      *puVar5 = 0xd;
    }
    goto LAB_101d30b1;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_101d32c7;
    if ((param_3 & 2) == 0) goto LAB_101d31f7;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      piVar7 = (int *)FUN_101c8c35();
      bVar11 = local_5;
      if (*piVar7 == 0x83) goto LAB_101d31f7;
    }
    else {
      local_8 = '\0';
      iVar3 = FUN_101cc2b7(*in_EAX,&local_8,1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_101d31f7;
    }
LAB_101d31aa:
    __close_nolock(*in_EAX);
    goto LAB_101d30b1;
  }
LAB_101d31f7:
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
      if ((param_3 & 0x301) == 0x301) goto LAB_101d3266;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_101d3266:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_101d32c7;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_101d34c9;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_101d345f;
          }
LAB_101d32be:
          if (local_18 != 5) goto LAB_101d32c7;
        }
LAB_101d34c9:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_101d32c7;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_101c8c22();
            return *puVar5;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_101d32be;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_101d31aa;
                goto LAB_101d33e8;
              }
            }
            goto LAB_101d34c9;
          }
          goto LAB_101d32c7;
        }
LAB_101d33e8:
        iVar3 = FUN_101cc2b7(*in_EAX,&local_1c,3);
        if (iVar3 == -1) goto LAB_101d31aa;
        if (iVar3 == 2) {
LAB_101d346d:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_101c8c22();
            *puVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_101d31aa;
            local_6 = 2;
            goto LAB_101d32c7;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_101d32c7;
          }
          goto LAB_101d346d;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_101d345f:
        if (uVar4 == 0xffffffff) goto LAB_101d31aa;
      }
    }
  }
LAB_101d32c7:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileA(param_2,uVar4 & 0x7fffffff,local_14,&local_38,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_101c8c48(DVar6);
      pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_101d30b1:
      puVar5 = (undefined4 *)FUN_101c8c22();
      return *puVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_103b4580)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}


// ==== 101d354f FID_conflict:__sopen_helper

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
  
  local_8 = &DAT_103212e8;
  uStack_c = 0x101d355b;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_101d2df6(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_101d35ed();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


// ==== 101d35ed FUN_101d35ed

void FUN_101d35ed(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_103b4580)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 101d361b __sopen_s

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


// ==== 101d3639 __mbsnbcmp_l

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
      puVar4 = (undefined4 *)FUN_101c8c22();
      *puVar4 = 0x16;
      FUN_101c2369(0,0,0,0,0);
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
LAB_101d3738:
            _Str1 = puVar5;
            uVar6 = (uint)*_Str2;
            pbVar8 = _Str2 + 1;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
              if (sVar1 != 0) {
                sVar1 = _MaxCount - 2;
                if (*pbVar8 != 0) {
                  uVar6 = (uint)CONCAT11(*_Str2,*pbVar8);
                  pbVar8 = _Str2 + 2;
                  goto LAB_101d3768;
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
              goto LAB_101d3738;
            }
            uVar6 = (uint)*_Str2;
            uVar7 = 0;
            pbVar8 = _Str2;
            _Str1 = puVar5;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
LAB_101d377b:
              if (local_8 != '\0') {
                *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
              }
              return 0;
            }
          }
LAB_101d3768:
          _MaxCount = sVar1;
          if ((ushort)uVar6 != uVar7) {
            iVar3 = (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
            if (local_8 == '\0') {
              return iVar3;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return iVar3;
          }
          if ((uVar7 == 0) || (_Str2 = pbVar8, _MaxCount == 0)) goto LAB_101d377b;
        } while( true );
      }
      puVar4 = (undefined4 *)FUN_101c8c22();
      *puVar4 = 0x16;
      FUN_101c2369(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
  }
  return iVar3;
}


// ==== 101d37a2 __mbsnbcmp

/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 101d37b9 FUN_101d37b9

undefined4 FUN_101d37b9(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

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
  iVar3 = FUN_101d66d1(local_28);
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
        goto LAB_101d38a2;
      }
    }
    else if (uVar4 != 2) goto LAB_101d385e;
    local_c = 0xc0000000;
  }
LAB_101d38a2:
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
    if (param_4 != 0x80) goto LAB_101d385e;
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
      if (uVar4 == 0x200) goto LAB_101d39ac;
      if (uVar4 != 0x300) goto LAB_101d385e;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_101d39ac:
        local_18 = 5;
        goto LAB_101d3956;
      }
      if (uVar4 != 0x700) {
LAB_101d385e:
        puVar5 = (undefined4 *)FUN_101c8c35();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        puVar5 = (undefined4 *)FUN_101c8c22();
        *puVar5 = 0x16;
        FUN_101c2369(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_101d3956:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_103b3cd8 & param_5))) {
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
    puVar5 = (undefined4 *)FUN_101c8c35();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x18;
    goto LAB_101d3a74;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_101d3a80;
    }
    pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_101c8c48(DVar6);
    goto LAB_101d3a74;
  }
LAB_101d3a80:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_101c8c48(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      puVar5 = (undefined4 *)FUN_101c8c22();
      *puVar5 = 0xd;
    }
    goto LAB_101d3a74;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar11;
  pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_101d3c8b;
    if ((param_3 & 2) == 0) goto LAB_101d3bbb;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      piVar7 = (int *)FUN_101c8c35();
      bVar11 = local_5;
      if (*piVar7 == 0x83) goto LAB_101d3bbb;
    }
    else {
      local_30 = 0;
      iVar3 = FUN_101cc2b7(*in_EAX,&local_30,1);
      if ((((iVar3 != 0) || ((short)local_30 != 0x1a)) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar9 != -1)) goto LAB_101d3bbb;
    }
LAB_101d3b6d:
    __close_nolock(*in_EAX);
    goto LAB_101d3a74;
  }
LAB_101d3bbb:
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
      if ((param_3 & 0x301) == 0x301) goto LAB_101d3c2a;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_101d3c2a:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_101d3c8b;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_101d3e8d;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_101d3e23;
          }
LAB_101d3c82:
          if (local_18 != 5) goto LAB_101d3c8b;
        }
LAB_101d3e8d:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_101d3c8b;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar10 == -1) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_101c8c22();
            return *puVar5;
          }
          iVar3 = iVar3 + iVar10;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_101d3c82;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_101d3b6d;
                goto LAB_101d3dac;
              }
            }
            goto LAB_101d3e8d;
          }
          goto LAB_101d3c8b;
        }
LAB_101d3dac:
        iVar3 = FUN_101cc2b7(*in_EAX,&local_1c,3);
        if (iVar3 == -1) goto LAB_101d3b6d;
        if (iVar3 == 2) {
LAB_101d3e31:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            puVar5 = (undefined4 *)FUN_101c8c22();
            *puVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_101d3b6d;
            local_6 = 2;
            goto LAB_101d3c8b;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_101d3c8b;
          }
          goto LAB_101d3e31;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_101d3e23:
        if (uVar4 == 0xffffffff) goto LAB_101d3b6d;
      }
    }
  }
LAB_101d3c8b:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar8 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_3c,3,local_10,(HANDLE)0x0);
    if (pvVar8 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_101c8c48(DVar6);
      pbVar1 = (byte *)((&DAT_103b4580)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_101d3a74:
      puVar5 = (undefined4 *)FUN_101c8c22();
      return *puVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_103b4580)[(int)*in_EAX >> 5]) = pvVar8;
  }
  return 0;
}


// ==== 101d3f13 FID_conflict:__sopen_helper

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
  
  local_8 = &DAT_10321308;
  uStack_c = 0x101d3f1f;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    eVar2 = 0x16;
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_101d37b9(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_101d3fb1();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


// ==== 101d3fb1 FUN_101d3fb1

void FUN_101d3fb1(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_103b4580)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 101d3fdf __wsopen_s

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


// ==== 101d3ffd _wcsncmp

/* Library Function - Single Match
    _wcsncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount != 0) {
    for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
        _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return 0;
}


// ==== 101d4032 __ld12tod

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
        goto LAB_101d4531;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_103564a8 - 1;
    iVar4 = (int)(DAT_103564a8 + ((int)DAT_103564a8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_103564a8 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_101d4165;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_101d416c;
LAB_101d4165:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_101d416c:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_101d417a;
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
LAB_101d417a:
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
    if (iVar12 < (int)(DAT_103564a4 - DAT_103564a8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_103564a4 < iVar12) {
        if (iVar12 < DAT_103564a0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_103564b4;
          iVar2 = (int)(DAT_103564ac + ((int)DAT_103564ac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_103564ac & 0x8000001f;
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
          iVar12 = (int)(DAT_103564ac + ((int)DAT_103564ac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_103564ac & 0x8000001f;
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
          iVar12 = DAT_103564b4 + DAT_103564a0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_101d4531;
      }
      local_14 = DAT_103564a4 - local_14;
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
      iVar2 = DAT_103564a8 - 1;
      iVar12 = (int)(DAT_103564a8 + ((int)DAT_103564a8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_103564a8 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_101d431d;
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
LAB_101d431d:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_103564ac + 1;
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
LAB_101d4531:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_103564ac & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_103564b0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_103564b0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 101d4574 __ld12tof

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
        goto LAB_101d4a73;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_103564c0 - 1;
    iVar2 = (int)(DAT_103564c0 + ((int)DAT_103564c0 >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_103564c0 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_101d46a7;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_101d46ae;
LAB_101d46a7:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_101d46ae:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_101d46bc;
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
LAB_101d46bc:
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
    if (iVar11 < (int)(DAT_103564bc - DAT_103564c0)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_103564bc < iVar11) {
        if (iVar11 < DAT_103564b8) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_103564cc;
          iVar2 = (int)(DAT_103564c4 + ((int)DAT_103564c4 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_103564c4 & 0x8000001f;
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
          iVar11 = (int)(DAT_103564c4 + ((int)DAT_103564c4 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_103564c4 & 0x8000001f;
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
          iVar11 = DAT_103564cc + DAT_103564b8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_101d4a73;
      }
      local_1c[2] = DAT_103564bc - local_1c[2];
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
      iVar2 = DAT_103564c0 - 1;
      iVar11 = (int)(DAT_103564c0 + ((int)DAT_103564c0 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_103564c0 & 0x8000001f;
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
          if (2 < iVar11) goto LAB_101d485f;
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
LAB_101d485f:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_103564c4 + 1;
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
LAB_101d4a73:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_103564c4 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_103564c8 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_103564c8 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}


// ==== 101d4ab6 ___mtold12

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
  
  uVar7 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
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


// ==== 101d4c82 x_ismbbtype_l

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
    if (uVar1 == 0) goto LAB_101d4cc4;
  }
  iVar2 = 1;
LAB_101d4cc4:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 101d4cd3 __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 101d4ce6 __ungetc_nolock

/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_103562e0;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_103562e0;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_103b4580)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_101d4da3;
    }
    puVar5 = (undefined4 *)FUN_101c8c22();
    *puVar5 = 0x16;
    FUN_101c2369(0,0,0,0,0);
  }
  else {
LAB_101d4da3:
    if (_Ch != -1) {
      uVar3 = _File->_flag;
      if (((uVar3 & 1) != 0) || (((char)uVar3 < '\0' && ((uVar3 & 2) == 0)))) {
        if (_File->_base == (char *)0x0) {
          __getbuf(_File);
        }
        if (_File->_ptr == _File->_base) {
          if (_File->_cnt != 0) {
            return -1;
          }
          _File->_ptr = _File->_ptr + 1;
        }
        _File->_ptr = _File->_ptr + -1;
        pcVar1 = _File->_ptr;
        if ((_File->_flag & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          _File->_ptr = pcVar1 + 1;
          return -1;
        }
        _File->_cnt = _File->_cnt + 1;
        _File->_flag = _File->_flag & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
  }
  return -1;
}


// ==== 101d4e78 FUN_101d4e78

void FUN_101d4e78(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6
                 ,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  char cVar10;
  ushort uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  ushort uVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  short *psVar23;
  uint uVar24;
  undefined4 uVar25;
  ushort uVar26;
  char *pcVar27;
  int local_6c;
  int local_68;
  undefined **local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  undefined2 local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined *local_44;
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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  iVar16 = 0;
  pcVar27 = local_24;
  uVar9 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar10 = *param_3, cVar10 == ' ' || (cVar10 == '\t')) || (cVar10 == '\n')) ||
           (cVar10 == '\r')); param_3 = param_3 + 1) {
    }
LAB_101d4efd:
    cVar10 = *param_3;
    pcVar19 = param_3 + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar10 - 0x31U) < 9) {
LAB_101d4f1a:
        iVar16 = 3;
        goto LAB_101d4f1c;
      }
      if (cVar10 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_101d4f31:
        iVar16 = 5;
        param_3 = pcVar19;
      }
      else if (cVar10 == '+') {
        uVar9 = 0;
        iVar16 = 2;
        param_3 = pcVar19;
      }
      else {
        if (cVar10 != '-') {
          if (cVar10 == '0') goto LAB_101d4f4b;
          goto LAB_101d50d6;
        }
        iVar16 = 2;
        uVar9 = 0x8000;
        param_3 = pcVar19;
      }
      goto LAB_101d4efd;
    case 1:
      bVar6 = true;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_101d4f1a;
      if (cVar10 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_101d4f82;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_101d4fb2;
      if (cVar10 == '0') goto LAB_101d4f4b;
      goto LAB_101d4f92;
    case 2:
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_101d4f1a;
      if (cVar10 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_101d4f31;
      param_3 = local_58;
      if (cVar10 != '0') goto LAB_101d5101;
LAB_101d4f4b:
      iVar16 = 1;
      param_3 = pcVar19;
      goto LAB_101d4efd;
    case 3:
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar27 = cVar10 + -0x30;
          pcVar27 = pcVar27 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar10 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      }
      if (cVar10 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_101d5025;
LAB_101d4f82:
      bVar6 = true;
      iVar16 = 4;
      param_3 = pcVar19;
      goto LAB_101d4efd;
    case 4:
      bVar8 = true;
      if (local_50 == 0) {
        while (cVar10 == '0') {
          local_54 = local_54 + -1;
          cVar10 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        }
      }
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar27 = cVar10 + -0x30;
          pcVar27 = pcVar27 + 1;
          local_54 = local_54 + -1;
        }
        cVar10 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      }
LAB_101d5025:
      if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_101d4fb2:
        bVar6 = true;
        iVar16 = 0xb;
        param_3 = pcVar19 + -1;
      }
      else {
LAB_101d4f92:
        bVar6 = true;
        if ((cVar10 < 'D') || (('E' < cVar10 && ((cVar10 < 'd' || ('e' < cVar10))))))
        goto LAB_101d50d6;
        iVar16 = 6;
        param_3 = pcVar19;
      }
      goto LAB_101d4efd;
    case 5:
      bVar8 = true;
      param_3 = local_58;
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_101d4f1c;
      }
      goto LAB_101d5101;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar10 - 0x31U)) {
        if (cVar10 == '+') goto LAB_101d50bd;
        if (cVar10 == '-') goto LAB_101d50b1;
LAB_101d50a4:
        param_3 = local_58;
        if (cVar10 != '0') goto LAB_101d5101;
        iVar16 = 8;
        param_3 = pcVar19;
        goto LAB_101d4efd;
      }
      break;
    case 7:
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_101d50a4;
      break;
    case 8:
      bVar7 = true;
      while (cVar10 == '0') {
        cVar10 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      }
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_101d50d6;
      break;
    case 9:
      bVar7 = true;
      local_68 = 0;
      goto LAB_101d5163;
    default:
      goto switchD_101d4f09_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar10 == '+') {
LAB_101d50bd:
          iVar16 = 7;
          param_3 = pcVar19;
        }
        else {
          if (cVar10 != '-') goto LAB_101d5101;
LAB_101d50b1:
          local_6c = -1;
          iVar16 = 7;
          param_3 = pcVar19;
        }
        goto LAB_101d4efd;
      }
      iVar16 = 10;
      pcVar19 = param_3;
switchD_101d4f09_caseD_a:
      param_3 = pcVar19;
      if (iVar16 != 10) goto LAB_101d4efd;
      goto LAB_101d5101;
    }
    iVar16 = 9;
LAB_101d4f1c:
    param_3 = pcVar19 + -1;
    goto LAB_101d4efd;
  }
  puVar12 = (undefined4 *)FUN_101c8c22();
  *puVar12 = 0x16;
  FUN_101c2369(0,0,0,0,0);
  iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_101d54f9;
LAB_101d5163:
  if ((cVar10 < '0') || ('9' < cVar10)) goto LAB_101d517e;
  local_68 = local_68 * 10 + -0x30 + (int)cVar10;
  if (local_68 < 0x1451) {
    cVar10 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    goto LAB_101d5163;
  }
  local_68 = 0x1451;
LAB_101d517e:
  while (('/' < cVar10 && (cVar10 < ':'))) {
    cVar10 = *pcVar19;
    pcVar19 = pcVar19 + 1;
  }
LAB_101d50d6:
  param_3 = pcVar19 + -1;
LAB_101d5101:
  *param_2 = (int)param_3;
  if (bVar6) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar27 = pcVar27 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_101d54db;
    while (pcVar27 = pcVar27 + -1, *pcVar27 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar5 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar7) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar8) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_101d54db;
      ppuVar22 = &PTR_DAT_10356470;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          ppuVar22 = (undefined **)&DAT_103565d0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        iVar1 = uStack_2e;
        iVar2 = uStack_2a;
        iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar5 = local_3c;
joined_r0x101d5209:
        if (local_58 != (char *)0x0) {
          uVar24 = (int)local_58 >> 3;
          ppuVar22 = ppuVar22 + 0x15;
          uVar13 = (uint)local_58 & 7;
          local_58 = (char *)uVar24;
          if (uVar13 != 0) {
            ppuVar21 = ppuVar22 + uVar13 * 3;
            if (0x7fff < *(ushort *)ppuVar21) {
              local_4c = SUB42(*ppuVar21,0);
              uStack_4a._0_2_ = (undefined2)((uint)*ppuVar21 >> 0x10);
              uStack_4a._2_2_ = SUB42(ppuVar21[1],0);
              uStack_46 = (undefined2)((uint)ppuVar21[1] >> 0x10);
              local_44 = ppuVar21[2];
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              ppuVar21 = (undefined **)&local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            iVar3 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar4 = 0;
            uStack_26 = 0;
            uVar15 = local_36 & 0x7fff;
            uVar18 = *(ushort *)((int)ppuVar21 + 10) & 0x7fff;
            uVar11 = (*(ushort *)((int)ppuVar21 + 10) ^ local_36) & 0x8000;
            uVar26 = uVar18 + uVar15;
            iVar1 = 0;
            iVar2 = 0;
            if (((uVar15 < 0x7fff) && (iVar1 = 0, iVar2 = 0, uVar18 < 0x7fff)) &&
               (iVar1 = iVar3, iVar2 = iVar4, uVar26 < 0xbffe)) {
              if (0x3fbf < uVar26) {
                if (((uVar15 == 0) &&
                    (uVar26 = uVar26 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar14 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar18 == 0) &&
                         (uVar26 = uVar26 + 1, ((uint)ppuVar21[2] & 0x7fffffff) == 0)) &&
                        ((ppuVar21[1] == (undefined *)0x0 && (*ppuVar21 == (undefined *)0x0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  iVar14 = 0;
                  iVar5 = 0;
                }
                else {
                  local_6c = 0;
                  psVar23 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = ppuVar21 + 2;
                      do {
                        bVar6 = false;
                        uVar24 = *(uint *)(psVar23 + -2) +
                                 (uint)*(ushort *)local_64 * (uint)*local_60;
                        if ((uVar24 < *(uint *)(psVar23 + -2)) ||
                           (uVar24 < (uint)*(ushort *)local_64 * (uint)*local_60)) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar23 + -2) = uVar24;
                        if (bVar6) {
                          *psVar23 = *psVar23 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = (undefined **)((int)local_64 + -2);
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar23 = psVar23 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar26 = uVar26 + 0xc002;
                  if ((short)uVar26 < 1) {
LAB_101d53bf:
                    uVar26 = uVar26 - 1;
                    if ((short)uVar26 < 0) {
                      uVar24 = (uint)(ushort)-uVar26;
                      uVar26 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar1 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar13 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar17 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar24 = uVar24 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar13 >> 1);
                        local_30 = (byte)uVar17;
                        uStack_2f = (undefined1)(uVar17 >> 8);
                      } while (uVar24 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar15 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar2 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar2;
                      uStack_2f = (undefined1)((uint)iVar2 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar2 | uVar15 >> 0xf;
                      iVar1 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar1 | (ushort)uStack_2a >> 0xf;
                      uVar26 = uVar26 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar1 >> 0x10);
                    } while (0 < (short)uVar26);
                    if ((short)uVar26 < 1) goto LAB_101d53bf;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      iVar1 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar26 = uVar26 + 1;
                          iVar2 = 0;
                          iVar1 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar2 = 0;
                          iVar1 = 0;
                        }
                      }
                      else {
                        iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar2;
                        uStack_2a._2_2_ = (ushort)((uint)iVar2 >> 0x10);
                      }
                    }
                    else {
                      iVar1 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)iVar1;
                      uStack_2e._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar2 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar26) goto LAB_101d547e;
                  local_40 = iVar1;
                  local_3c = iVar2;
                  uStack_38 = uStack_26;
                  local_36 = uVar26 | uVar11;
                  iVar14 = iVar1;
                  iVar5 = iVar2;
                }
                goto joined_r0x101d5209;
              }
              iVar14 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_101d547e:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar14 = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar14;
            local_36 = (ushort)((uint)iVar14 >> 0x10);
            iVar14 = 0;
            iVar5 = 0;
          }
          goto joined_r0x101d5209;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar5 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar5;
      local_40._2_2_ = (undefined2)((uint)iVar14 >> 0x10);
      local_40._0_2_ = (undefined2)iVar14;
      uVar25 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar20 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar26 = local_36;
      uStack_4a = iVar16;
      uStack_2e = iVar1;
      uStack_2a = iVar2;
      local_3c = iVar5;
    }
    else {
      uVar25 = 0;
      uVar26 = 0x7fff;
      uVar20 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_101d54db:
    iVar14 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar26 = 0;
    uVar20 = 0;
    uVar25 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar26 | uVar9;
  *(undefined4 *)(param_1 + 1) = uVar25;
  *(undefined4 *)(param_1 + 3) = uVar20;
LAB_101d54f9:
  local_40 = iVar14;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101d5538 FUN_101d5538

/* WARNING: Removing unreachable block (ram,0x101d5a29) */
/* WARNING: Removing unreachable block (ram,0x101d5a33) */
/* WARNING: Removing unreachable block (ram,0x101d5a38) */

void FUN_101d5538(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
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
    goto LAB_101d5db6;
  }
  if ((short)uVar13 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_101d5667;
        pcVar24 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_101d5667:
          pcVar24 = "1#QNAN";
          goto LAB_101d566c;
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
LAB_101d566c:
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
    goto LAB_101d5db6;
  }
  local_50 = (short)(((uVar13 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar13 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar13;
  bStack_19 = (byte)(uVar13 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  uVar7 = param_1 << 0x10;
  local_6c = &PTR_DAT_10356470;
  uStack_1c = (ushort)uStack_e;
  uStack_20 = uStack_12;
  if (uVar16 != 0) {
    uVar13 = -uVar16;
    uVar14 = uVar10;
    uVar7 = param_1 << 0x10;
    if ((int)-uVar16 < 0) {
      local_6c = (undefined **)&DAT_103565d0;
      uVar13 = uVar16;
    }
joined_r0x101d56fa:
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
            goto joined_r0x101d56fa;
          }
          if (((uVar12 == 0) &&
              (uVar23 = uVar23 + 1,
              (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
             ((uStack_20 == 0 && (uVar7 == 0)))) {
            local_1a = 0;
            bStack_19 = 0;
            goto joined_r0x101d56fa;
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
            goto joined_r0x101d56fa;
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
LAB_101d58b1:
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
            if ((short)uVar23 < 1) goto LAB_101d58b1;
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
            goto joined_r0x101d56fa;
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
      goto joined_r0x101d56fa;
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
          goto LAB_101d5bf5;
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
LAB_101d5b03:
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
          if ((short)uVar23 < 1) goto LAB_101d5b03;
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
        goto LAB_101d5bf5;
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
LAB_101d5bf5:
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
        goto LAB_101d5db6;
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
LAB_101d5db6:
  local_24 = uVar7;
  uStack_e = uVar10;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 101d5dfe __hw_cw

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


// ==== 101d5e8c ___hw_cw_sse2

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


// ==== 101d5f2c __control87

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
  if (DAT_103b56c8 != 0) {
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


// ==== 101d622f __putwch_nolock

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
  
  local_8 = DAT_103554c4 ^ (uint)&stack0xfffffffc;
  if (DAT_10356790 != 0) {
    if (DAT_10356868 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_10356868 == (HANDLE)0xffffffff) goto LAB_101d62d8;
    BVar2 = WriteConsoleW(DAT_10356868,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_10356790 = 1;
      goto LAB_101d62d8;
    }
    if ((DAT_10356790 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_101d62d8;
    DAT_10356790 = 0;
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
  if (DAT_10356868 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_10356868,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_101d62d8:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}


// ==== 101d62f1 __flswbuf

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
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 9;
LAB_101d6315:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    puVar3 = (undefined4 *)FUN_101c8c22();
    *puVar3 = 0x22;
    goto LAB_101d6315;
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
     (((iVar4 = FUN_101cc9a2(), _File != (FILE *)(iVar4 + 0x20) &&
       (iVar4 = FUN_101cc9a2(), _File != (FILE *)(iVar4 + 0x40))) ||
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
        puVar5 = &DAT_103562e0;
      }
      else {
        puVar5 = (undefined *)((_FileHandle & 0x1f) * 0x38 + (&DAT_103b4580)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_101d644a;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_101d644a:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}


// ==== 101d6461 __chsize_nolock

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
  if (uVar13 == 0xffffffffffffffff) goto LAB_101d64e7;
  lVar14 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar5 = (int)((ulonglong)lVar14 >> 0x20);
  if (lVar14 == -1) goto LAB_101d64e7;
  uVar9 = in_stack_00000008 - (uint)lVar14;
  uVar6 = (uint)(in_stack_00000008 < (uint)lVar14);
  iVar1 = (int)_Size - iVar5;
  iVar10 = iVar1 - uVar6;
  if ((iVar10 < 0) ||
     ((iVar10 == 0 || SBORROW4((int)_Size,iVar5) != SBORROW4(iVar1,uVar6) && (uVar9 == 0)))) {
    if ((iVar10 < 1) && (iVar10 < 0)) {
      lVar14 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar14 == -1) goto LAB_101d64e7;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar7 = SetEndOfFile(pvVar2);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        puVar3 = (undefined4 *)FUN_101c8c22();
        *puVar3 = 0xd;
        pDVar8 = (DWORD *)FUN_101c8c35();
        DVar15 = GetLastError();
        *pDVar8 = DVar15;
        goto LAB_101d65e5;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar15 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar15,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0xc;
      goto LAB_101d64e7;
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
      goto LAB_101d6539;
    }
    piVar4 = (int *)FUN_101c8c35();
    if (*piVar4 == 5) {
      puVar3 = (undefined4 *)FUN_101c8c22();
      *puVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_101d6539:
    __setmode_nolock(_FileHandle,iVar5);
    DVar15 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar15,_Buf);
LAB_101d65e5:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_101d64e7;
  }
  lVar14 = __lseeki64_nolock(_FileHandle,uVar13 >> 0x20,unaff_EDI);
  if (lVar14 != -1) {
    return 0;
  }
LAB_101d64e7:
  piVar4 = (int *)FUN_101c8c22();
  return *piVar4;
}


// ==== 101d6615 __setmode_nolock

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
  piVar1 = &DAT_103b4580 + (_FileHandle >> 5);
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
      if (_Mode != 0x40000) goto LAB_101d66b4;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_101d66b4:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}


// ==== 101d66d1 FUN_101d66d1

undefined4 FUN_101d66d1(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_101c8c22();
    *puVar1 = 0x16;
    FUN_101c2369(0,0,0,0,0);
    return 0x16;
  }
  *param_1 = DAT_103b4568;
  return 0;
}


// ==== 101d6705 ___set_fpsr_sse2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void ___set_fpsr_sse2(uint param_1)

{
  if (DAT_103b56c8 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_10356860 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


// ==== 101d6777 ___initconout

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_10356868 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// ==== 101d67c4 KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:00000279

// ==== 101d67d0 Unwind@101d67d0

void Unwind_101d67d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d67d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UTexture::~UTexture(*(UTexture **)(unaff_EBP + -0x18));
  return;
}


// ==== 101d68c0 Unwind@101d68c0

void Unwind_101d68c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d68c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d68f0 Unwind@101d68f0

void Unwind_101d68f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d68f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UTexture::~UTexture(*(UTexture **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d6a00 Unwind@101d6a00

void Unwind_101d6a00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d6a30 Unwind@101d6a30

void Unwind_101d6a30(void)

{
  FUN_10001a20();
  return;
}


// ==== 101d6b00 Unwind@101d6b00

void Unwind_101d6b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::~UObject(*(UObject **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d6b30 Unwind@101d6b30

void Unwind_101d6b30(void)

{
  FUN_10001f30();
  return;
}


// ==== 101d6bc0 Unwind@101d6bc0

void Unwind_101d6bc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d6bf0 Unwind@101d6bf0

void Unwind_101d6bf0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d6c20 Unwind@101d6c20

void Unwind_101d6c20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 4));
  return;
}


// ==== 101d6c70 Unwind@101d6c70

void Unwind_101d6c70(void)

{
  FUN_10002480();
  return;
}


// ==== 101d6ca0 Unwind@101d6ca0

void Unwind_101d6ca0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d6cd0 Unwind@101d6cd0

void Unwind_101d6cd0(void)

{
  FUN_100027e0();
  return;
}


// ==== 101d6d00 Unwind@101d6d00

void Unwind_101d6d00(void)

{
  FUN_10002840();
  return;
}


// ==== 101d6d30 Unwind@101d6d30

void Unwind_101d6d30(void)

{
  FUN_10001fc0();
  return;
}


// ==== 101d6d38 Unwind@101d6d38

void Unwind_101d6d38(void)

{
  FUN_100028c0();
  return;
}


// ==== 101d6d43 Unwind@101d6d43

void Unwind_101d6d43(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xe0));
  return;
}


// ==== 101d6d52 Unwind@101d6d52

void Unwind_101d6d52(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0xec));
  return;
}


// ==== 101d6d61 Unwind@101d6d61

void Unwind_101d6d61(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x14) + 0x10c),0xc,4,FUN_10002790);
  return;
}


// ==== 101d6d79 Unwind@101d6d79

void Unwind_101d6d79(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x144));
  return;
}


// ==== 101d6d88 Unwind@101d6d88

void Unwind_101d6d88(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x164));
  return;
}


// ==== 101d6d97 Unwind@101d6d97

void Unwind_101d6d97(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x174));
  return;
}


// ==== 101d6da6 Unwind@101d6da6

void Unwind_101d6da6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d6daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x180));
  return;
}


// ==== 101d6db5 Unwind@101d6db5

void Unwind_101d6db5(void)

{
  FUN_10002520();
  return;
}


// ==== 101d6dc3 Unwind@101d6dc3

void Unwind_101d6dc3(void)

{
  FUN_10002840();
  return;
}


// ==== 101d6df0 Unwind@101d6df0

void Unwind_101d6df0(void)

{
  FUN_10002910();
  return;
}


// ==== 101d6e20 Unwind@101d6e20

void Unwind_101d6e20(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d6e50 Unwind@101d6e50

void Unwind_101d6e50(void)

{
  FUN_10002b00();
  return;
}


// ==== 101d6e80 Unwind@101d6e80

void Unwind_101d6e80(void)

{
  FUN_10002b00();
  return;
}


// ==== 101d6f70 Unwind@101d6f70

void Unwind_101d6f70(void)

{
  FUN_10002910();
  return;
}


// ==== 101d6fa0 Unwind@101d6fa0

void Unwind_101d6fa0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d6fd0 Unwind@101d6fd0

void Unwind_101d6fd0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d7000 Unwind@101d7000

void Unwind_101d7000(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d7030 Unwind@101d7030

void Unwind_101d7030(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 101d7140 Unwind@101d7140

void Unwind_101d7140(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d7153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101d7260 Unwind@101d7260

void Unwind_101d7260(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101d74f0 Unwind@101d74f0

void Unwind_101d74f0(void)

{
  int unaff_EBP;
  
  FUN_10024ca0(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ==== 101d7520 Unwind@101d7520

void Unwind_101d7520(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d7630 Unwind@101d7630

void Unwind_101d7630(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7639 Unwind@101d7639

void Unwind_101d7639(void)

{
  FUN_10005390();
  return;
}


// ==== 101d7641 Unwind@101d7641

void Unwind_101d7641(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d76b0 Unwind@101d76b0

void Unwind_101d76b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d76b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101d7760 Unwind@101d7760

void Unwind_101d7760(void)

{
  FUN_1003fff0();
  return;
}


// ==== 101d7768 Unwind@101d7768

void Unwind_101d7768(void)

{
  FUN_1003fff0();
  return;
}


// ==== 101d7770 Unwind@101d7770

void Unwind_101d7770(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d7779 Unwind@101d7779

void Unwind_101d7779(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 101d77a0 Unwind@101d77a0

void Unwind_101d77a0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d77a8 Unwind@101d77a8

void Unwind_101d77a8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d77b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2fc));
  return;
}


// ==== 101d77b7 Unwind@101d77b7

void Unwind_101d77b7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d77c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x310));
  return;
}


// ==== 101d77f0 Unwind@101d77f0

void Unwind_101d77f0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d77f8 Unwind@101d77f8

void Unwind_101d77f8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x2fc));
  return;
}


// ==== 101d7807 Unwind@101d7807

void Unwind_101d7807(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x310));
  return;
}


// ==== 101d7816 Unwind@101d7816

void Unwind_101d7816(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x4c));
  return;
}


// ==== 101d781f Unwind@101d781f

void Unwind_101d781f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 101d7828 Unwind@101d7828

void Unwind_101d7828(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d782b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 101d7831 Unwind@101d7831

void Unwind_101d7831(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d7860 Unwind@101d7860

void Unwind_101d7860(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d7868 Unwind@101d7868

void Unwind_101d7868(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x2fc));
  return;
}


// ==== 101d7877 Unwind@101d7877

void Unwind_101d7877(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x310));
  return;
}


// ==== 101d7886 Unwind@101d7886

void Unwind_101d7886(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 101d788f Unwind@101d788f

void Unwind_101d788f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d78c0 Unwind@101d78c0

void Unwind_101d78c0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d78c8 Unwind@101d78c8

void Unwind_101d78c8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d78d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x2fc));
  return;
}


// ==== 101d78d7 Unwind@101d78d7

void Unwind_101d78d7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d78e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x310));
  return;
}


// ==== 101d78e6 Unwind@101d78e6

void Unwind_101d78e6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d78e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d7910 Unwind@101d7910

void Unwind_101d7910(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d7918 Unwind@101d7918

void Unwind_101d7918(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x2fc));
  return;
}


// ==== 101d7927 Unwind@101d7927

void Unwind_101d7927(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x310));
  return;
}


// ==== 101d7960 Unwind@101d7960

void Unwind_101d7960(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7990 Unwind@101d7990

void Unwind_101d7990(void)

{
  FUN_10006780();
  return;
}


// ==== 101d79c0 Unwind@101d79c0

void Unwind_101d79c0(void)

{
  FUN_10006780();
  return;
}


// ==== 101d79f0 Unwind@101d79f0

void Unwind_101d79f0(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7a20 Unwind@101d7a20

void Unwind_101d7a20(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7a50 Unwind@101d7a50

void Unwind_101d7a50(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7a80 Unwind@101d7a80

void Unwind_101d7a80(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7ab0 Unwind@101d7ab0

void Unwind_101d7ab0(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7ae0 Unwind@101d7ae0

void Unwind_101d7ae0(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7ae8 Unwind@101d7ae8

void Unwind_101d7ae8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d7b10 Unwind@101d7b10

void Unwind_101d7b10(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7b40 Unwind@101d7b40

void Unwind_101d7b40(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7b70 Unwind@101d7b70

void Unwind_101d7b70(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7ba0 Unwind@101d7ba0

void Unwind_101d7ba0(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7bd0 Unwind@101d7bd0

void Unwind_101d7bd0(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7c00 Unwind@101d7c00

void Unwind_101d7c00(void)

{
  FUN_10006780();
  return;
}


// ==== 101d7c30 Unwind@101d7c30

void Unwind_101d7c30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d7c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 101d7cb0 Unwind@101d7cb0

void Unwind_101d7cb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d7ce0 Unwind@101d7ce0

void Unwind_101d7ce0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7d10 Unwind@101d7d10

void Unwind_101d7d10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7d19 Unwind@101d7d19

void Unwind_101d7d19(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7d60 Unwind@101d7d60

void Unwind_101d7d60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d7d90 Unwind@101d7d90

void Unwind_101d7d90(void)

{
  FUN_10002910();
  return;
}


// ==== 101d7d98 Unwind@101d7d98

void Unwind_101d7d98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d7da1 Unwind@101d7da1

void Unwind_101d7da1(void)

{
  FUN_100089e0();
  return;
}


// ==== 101d7dd0 Unwind@101d7dd0

void Unwind_101d7dd0(void)

{
  FUN_10002910();
  return;
}


// ==== 101d7dd8 Unwind@101d7dd8

void Unwind_101d7dd8(void)

{
  FUN_100089e0();
  return;
}


// ==== 101d7e10 Unwind@101d7e10

void Unwind_101d7e10(void)

{
  FUN_10002910();
  return;
}


// ==== 101d7e18 Unwind@101d7e18

void Unwind_101d7e18(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1d0));
  return;
}


// ==== 101d7e50 Unwind@101d7e50

void Unwind_101d7e50(void)

{
  FUN_10002910();
  return;
}


// ==== 101d7e58 Unwind@101d7e58

void Unwind_101d7e58(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1d0));
  return;
}


// ==== 101d7e90 Unwind@101d7e90

void Unwind_101d7e90(void)

{
  FUN_10002910();
  return;
}


// ==== 101d7e98 Unwind@101d7e98

void Unwind_101d7e98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x1d0));
  return;
}


// ==== 101d7ef0 Unwind@101d7ef0

void Unwind_101d7ef0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d7f60 Unwind@101d7f60

void Unwind_101d7f60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7f69 Unwind@101d7f69

void Unwind_101d7f69(void)

{
  FUN_10008f90();
  return;
}


// ==== 101d7f71 Unwind@101d7f71

void Unwind_101d7f71(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7fa0 Unwind@101d7fa0

void Unwind_101d7fa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d7fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d7ff0 Unwind@101d7ff0

void Unwind_101d7ff0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d7ff8 Unwind@101d7ff8

void Unwind_101d7ff8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2e8));
  return;
}


// ==== 101d8030 Unwind@101d8030

void Unwind_101d8030(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8038 Unwind@101d8038

void Unwind_101d8038(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2e8));
  return;
}


// ==== 101d8070 Unwind@101d8070

void Unwind_101d8070(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8078 Unwind@101d8078

void Unwind_101d8078(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2e8));
  return;
}


// ==== 101d8190 Unwind@101d8190

void Unwind_101d8190(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d81c0 Unwind@101d81c0

void Unwind_101d81c0(void)

{
  int unaff_EBP;
  
  FUN_10024ca0(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 101d81f0 Unwind@101d81f0

void Unwind_101d81f0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d8203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x28));
    return;
  }
  return;
}


// ==== 101d820a Unwind@101d820a

void Unwind_101d820a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101d821d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101d82a0 Unwind@101d82a0

void Unwind_101d82a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d82a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101d82a9 Unwind@101d82a9

void Unwind_101d82a9(void)

{
  FUN_1000a0e0();
  return;
}


// ==== 101d82b1 Unwind@101d82b1

void Unwind_101d82b1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d82b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101d8320 Unwind@101d8320

void Unwind_101d8320(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101d8410 Unwind@101d8410

void Unwind_101d8410(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d8440 Unwind@101d8440

void Unwind_101d8440(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8448 Unwind@101d8448

void Unwind_101d8448(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d844b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d8451 Unwind@101d8451

void Unwind_101d8451(void)

{
  FUN_1000b5e0();
  return;
}


// ==== 101d8480 Unwind@101d8480

void Unwind_101d8480(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8488 Unwind@101d8488

void Unwind_101d8488(void)

{
  FUN_1000b5e0();
  return;
}


// ==== 101d84c0 Unwind@101d84c0

void Unwind_101d84c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d84c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}


// ==== 101d8570 Unwind@101d8570

void Unwind_101d8570(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 8));
  return;
}


// ==== 101d85a0 Unwind@101d85a0

void Unwind_101d85a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d85a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d85d0 Unwind@101d85d0

void Unwind_101d85d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d85d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 101d8600 Unwind@101d8600

void Unwind_101d8600(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d8630 Unwind@101d8630

void Unwind_101d8630(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d8680 Unwind@101d8680

void Unwind_101d8680(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0xc));
  return;
}


// ==== 101d86f0 Unwind@101d86f0

void Unwind_101d86f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d86f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d86f9 Unwind@101d86f9

void Unwind_101d86f9(void)

{
  FUN_1000bf50();
  return;
}


// ==== 101d8720 Unwind@101d8720

void Unwind_101d8720(void)

{
  FUN_1000bf50();
  return;
}


// ==== 101d8750 Unwind@101d8750

void Unwind_101d8750(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d8759 Unwind@101d8759

void Unwind_101d8759(void)

{
  FUN_1000c030();
  return;
}


// ==== 101d8780 Unwind@101d8780

void Unwind_101d8780(void)

{
  FUN_1000c030();
  return;
}


// ==== 101d87b0 Unwind@101d87b0

void Unwind_101d87b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d87b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d87b9 Unwind@101d87b9

void Unwind_101d87b9(void)

{
  FUN_1000c0d0();
  return;
}


// ==== 101d87e0 Unwind@101d87e0

void Unwind_101d87e0(void)

{
  FUN_1000c0d0();
  return;
}


// ==== 101d8810 Unwind@101d8810

void Unwind_101d8810(void)

{
  FUN_1000c440();
  return;
}


// ==== 101d8840 Unwind@101d8840

void Unwind_101d8840(void)

{
  FUN_1000c550();
  return;
}


// ==== 101d88d0 Unwind@101d88d0

void Unwind_101d88d0(void)

{
  FUN_1000c640();
  return;
}


// ==== 101d8900 Unwind@101d8900

void Unwind_101d8900(void)

{
  FUN_1000c640();
  return;
}


// ==== 101d8908 Unwind@101d8908

void Unwind_101d8908(void)

{
  FUN_1000c940();
  return;
}


// ==== 101d8910 Unwind@101d8910

void Unwind_101d8910(void)

{
  FUN_1000c440();
  return;
}


// ==== 101d8918 Unwind@101d8918

void Unwind_101d8918(void)

{
  FUN_1000c6c0();
  return;
}


// ==== 101d8923 Unwind@101d8923

void Unwind_101d8923(void)

{
  FUN_1000c640();
  return;
}


// ==== 101d892b Unwind@101d892b

void Unwind_101d892b(void)

{
  FUN_1000c940();
  return;
}


// ==== 101d8936 Unwind@101d8936

void Unwind_101d8936(void)

{
  FUN_1000c550();
  return;
}


// ==== 101d893e Unwind@101d893e

void Unwind_101d893e(void)

{
  FUN_1000c710();
  return;
}


// ==== 101d8970 Unwind@101d8970

void Unwind_101d8970(void)

{
  FUN_1000c940();
  return;
}


// ==== 101d8978 Unwind@101d8978

void Unwind_101d8978(void)

{
  FUN_1000c6c0();
  return;
}


// ==== 101d8983 Unwind@101d8983

void Unwind_101d8983(void)

{
  FUN_1000c940();
  return;
}


// ==== 101d898e Unwind@101d898e

void Unwind_101d898e(void)

{
  FUN_1000c710();
  return;
}


// ==== 101d8999 Unwind@101d8999

void Unwind_101d8999(void)

{
  FUN_1000c550();
  return;
}


// ==== 101d89a1 Unwind@101d89a1

void Unwind_101d89a1(void)

{
  FUN_1000c640();
  return;
}


// ==== 101d89a9 Unwind@101d89a9

void Unwind_101d89a9(void)

{
  FUN_1000c440();
  return;
}


// ==== 101d89b1 Unwind@101d89b1

void Unwind_101d89b1(void)

{
  FUN_1000c640();
  return;
}


// ==== 101d8a20 Unwind@101d8a20

void Unwind_101d8a20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d8a70 Unwind@101d8a70

void Unwind_101d8a70(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d8a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101d8a8a Unwind@101d8a8a

void Unwind_101d8a8a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101d8a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x40));
    return;
  }
  return;
}


// ==== 101d8aa4 Unwind@101d8aa4

void Unwind_101d8aa4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x101d8ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x28));
    return;
  }
  return;
}


// ==== 101d8abe Unwind@101d8abe

void Unwind_101d8abe(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffff7;
                    /* WARNING: Could not recover jumptable at 0x101d8ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101d8b00 Unwind@101d8b00

void Unwind_101d8b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d8b09 Unwind@101d8b09

void Unwind_101d8b09(void)

{
  FUN_1000cfe0();
  return;
}


// ==== 101d8b11 Unwind@101d8b11

void Unwind_101d8b11(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d8b40 Unwind@101d8b40

void Unwind_101d8b40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d8b70 Unwind@101d8b70

void Unwind_101d8b70(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8b78 Unwind@101d8b78

void Unwind_101d8b78(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2f8));
  return;
}


// ==== 101d8bb0 Unwind@101d8bb0

void Unwind_101d8bb0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8bb8 Unwind@101d8bb8

void Unwind_101d8bb8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2f8));
  return;
}


// ==== 101d8bf0 Unwind@101d8bf0

void Unwind_101d8bf0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8c20 Unwind@101d8c20

void Unwind_101d8c20(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8c50 Unwind@101d8c50

void Unwind_101d8c50(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d8c80 Unwind@101d8c80

void Unwind_101d8c80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d8c89 Unwind@101d8c89

void Unwind_101d8c89(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d8d30 Unwind@101d8d30

void Unwind_101d8d30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8d60 Unwind@101d8d60

void Unwind_101d8d60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 101d8d6c Unwind@101d8d6c

void Unwind_101d8d6c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


// ==== 101d8d78 Unwind@101d8d78

void Unwind_101d8d78(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 101d8d84 Unwind@101d8d84

void Unwind_101d8d84(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 101d8d90 Unwind@101d8d90

void Unwind_101d8d90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


// ==== 101d8d9c Unwind@101d8d9c

void Unwind_101d8d9c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ==== 101d8da8 Unwind@101d8da8

void Unwind_101d8da8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x78));
  return;
}


// ==== 101d8db4 Unwind@101d8db4

void Unwind_101d8db4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ==== 101d8dc3 Unwind@101d8dc3

void Unwind_101d8dc3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xa8));
  return;
}


// ==== 101d8df0 Unwind@101d8df0

void Unwind_101d8df0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8df9 Unwind@101d8df9

void Unwind_101d8df9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e02 Unwind@101d8e02

void Unwind_101d8e02(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e0b Unwind@101d8e0b

void Unwind_101d8e0b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e14 Unwind@101d8e14

void Unwind_101d8e14(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e1d Unwind@101d8e1d

void Unwind_101d8e1d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e26 Unwind@101d8e26

void Unwind_101d8e26(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e2f Unwind@101d8e2f

void Unwind_101d8e2f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e38 Unwind@101d8e38

void Unwind_101d8e38(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e41 Unwind@101d8e41

void Unwind_101d8e41(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e4a Unwind@101d8e4a

void Unwind_101d8e4a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8e53 Unwind@101d8e53

void Unwind_101d8e53(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d8f00 Unwind@101d8f00

void Unwind_101d8f00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 101d8f0c Unwind@101d8f0c

void Unwind_101d8f0c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


// ==== 101d8f18 Unwind@101d8f18

void Unwind_101d8f18(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 101d8f24 Unwind@101d8f24

void Unwind_101d8f24(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 101d8f30 Unwind@101d8f30

void Unwind_101d8f30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


// ==== 101d8f3c Unwind@101d8f3c

void Unwind_101d8f3c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ==== 101d8f48 Unwind@101d8f48

void Unwind_101d8f48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x78));
  return;
}


// ==== 101d8f54 Unwind@101d8f54

void Unwind_101d8f54(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ==== 101d8f63 Unwind@101d8f63

void Unwind_101d8f63(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d8f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xa8));
  return;
}


// ==== 101d8f90 Unwind@101d8f90

void Unwind_101d8f90(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d8fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x18));
    return;
  }
  return;
}


// ==== 101d8faa Unwind@101d8faa

void Unwind_101d8faa(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101d8fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x24));
    return;
  }
  return;
}


// ==== 101d8fc4 Unwind@101d8fc4

void Unwind_101d8fc4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x101d8fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x30));
    return;
  }
  return;
}


// ==== 101d8fde Unwind@101d8fde

void Unwind_101d8fde(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xfffffff7;
                    /* WARNING: Could not recover jumptable at 0x101d8ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x24));
    return;
  }
  return;
}


// ==== 101d8ff8 Unwind@101d8ff8

void Unwind_101d8ff8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xffffffef;
                    /* WARNING: Could not recover jumptable at 0x101d900b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x18));
    return;
  }
  return;
}


// ==== 101d9012 Unwind@101d9012

void Unwind_101d9012(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x101d9025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x24));
    return;
  }
  return;
}


// ==== 101d902c Unwind@101d902c

void Unwind_101d902c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4c) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) & 0xffffffbf;
                    /* WARNING: Could not recover jumptable at 0x101d903f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x18));
    return;
  }
  return;
}


// ==== 101d9070 Unwind@101d9070

void Unwind_101d9070(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101d90f0 Unwind@101d90f0

void Unwind_101d90f0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d9103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x28));
    return;
  }
  return;
}


// ==== 101d910a Unwind@101d910a

void Unwind_101d910a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101d911d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101d9160 Unwind@101d9160

void Unwind_101d9160(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9169 Unwind@101d9169

void Unwind_101d9169(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d916c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d9172 Unwind@101d9172

void Unwind_101d9172(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d917b Unwind@101d917b

void Unwind_101d917b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d917e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9184 Unwind@101d9184

void Unwind_101d9184(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d918d Unwind@101d918d

void Unwind_101d918d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9196 Unwind@101d9196

void Unwind_101d9196(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d919f Unwind@101d919f

void Unwind_101d919f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91a8 Unwind@101d91a8

void Unwind_101d91a8(void)

{
  FUN_1000e440();
  return;
}


// ==== 101d91b3 Unwind@101d91b3

void Unwind_101d91b3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91bc Unwind@101d91bc

void Unwind_101d91bc(void)

{
  FUN_1000e440();
  return;
}


// ==== 101d91c7 Unwind@101d91c7

void Unwind_101d91c7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91d0 Unwind@101d91d0

void Unwind_101d91d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91d9 Unwind@101d91d9

void Unwind_101d91d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91e2 Unwind@101d91e2

void Unwind_101d91e2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91eb Unwind@101d91eb

void Unwind_101d91eb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d91ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d91f4 Unwind@101d91f4

void Unwind_101d91f4(void)

{
  FUN_1000e440();
  return;
}


// ==== 101d91ff Unwind@101d91ff

void Unwind_101d91ff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9208 Unwind@101d9208

void Unwind_101d9208(void)

{
  FUN_1000e440();
  return;
}


// ==== 101d9213 Unwind@101d9213

void Unwind_101d9213(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d921c Unwind@101d921c

void Unwind_101d921c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d921f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 101d9225 Unwind@101d9225

void Unwind_101d9225(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d922e Unwind@101d922e

void Unwind_101d922e(void)

{
  FUN_1000e440();
  return;
}


// ==== 101d9239 Unwind@101d9239

void Unwind_101d9239(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9242 Unwind@101d9242

void Unwind_101d9242(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d924b Unwind@101d924b

void Unwind_101d924b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d924e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d9254 Unwind@101d9254

void Unwind_101d9254(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d925d Unwind@101d925d

void Unwind_101d925d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9266 Unwind@101d9266

void Unwind_101d9266(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d926f Unwind@101d926f

void Unwind_101d926f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d9278 Unwind@101d9278

void Unwind_101d9278(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d927b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d9281 Unwind@101d9281

void Unwind_101d9281(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d928a Unwind@101d928a

void Unwind_101d928a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d928d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d9293 Unwind@101d9293

void Unwind_101d9293(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d929c Unwind@101d929c

void Unwind_101d929c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d929f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d92a5 Unwind@101d92a5

void Unwind_101d92a5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d92ae Unwind@101d92ae

void Unwind_101d92ae(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92b7 Unwind@101d92b7

void Unwind_101d92b7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d92c0 Unwind@101d92c0

void Unwind_101d92c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92c9 Unwind@101d92c9

void Unwind_101d92c9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92d2 Unwind@101d92d2

void Unwind_101d92d2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92db Unwind@101d92db

void Unwind_101d92db(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92e4 Unwind@101d92e4

void Unwind_101d92e4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92ed Unwind@101d92ed

void Unwind_101d92ed(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d92f6 Unwind@101d92f6

void Unwind_101d92f6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d92f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d92ff Unwind@101d92ff

void Unwind_101d92ff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9308 Unwind@101d9308

void Unwind_101d9308(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d930b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d9311 Unwind@101d9311

void Unwind_101d9311(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d931a Unwind@101d931a

void Unwind_101d931a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d931d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  L2ParamStack::~L2ParamStack((L2ParamStack *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9350 Unwind@101d9350

void Unwind_101d9350(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d9380 Unwind@101d9380

void Unwind_101d9380(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d9388 Unwind@101d9388

void Unwind_101d9388(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x354));
  return;
}


// ==== 101d9397 Unwind@101d9397

void Unwind_101d9397(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d93a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x360));
  return;
}


// ==== 101d93a6 Unwind@101d93a6

void Unwind_101d93a6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d93af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 900));
  return;
}


// ==== 101d93b5 Unwind@101d93b5

void Unwind_101d93b5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d93be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x390));
  return;
}


// ==== 101d93e0 Unwind@101d93e0

void Unwind_101d93e0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d93e8 Unwind@101d93e8

void Unwind_101d93e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d93f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x354));
  return;
}


// ==== 101d93f7 Unwind@101d93f7

void Unwind_101d93f7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x360));
  return;
}


// ==== 101d9406 Unwind@101d9406

void Unwind_101d9406(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d940f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 900));
  return;
}


// ==== 101d9415 Unwind@101d9415

void Unwind_101d9415(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d941e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x390));
  return;
}


// ==== 101d9440 Unwind@101d9440

void Unwind_101d9440(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d9470 Unwind@101d9470

void Unwind_101d9470(void)

{
  FUN_100121d0();
  return;
}


// ==== 101d9478 Unwind@101d9478

void Unwind_101d9478(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2e4));
  return;
}


// ==== 101d94b0 Unwind@101d94b0

void Unwind_101d94b0(void)

{
  FUN_100121d0();
  return;
}


// ==== 101d94b8 Unwind@101d94b8

void Unwind_101d94b8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d94c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2e4));
  return;
}


// ==== 101d94f0 Unwind@101d94f0

void Unwind_101d94f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d94f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x18));
  return;
}


// ==== 101d94fc Unwind@101d94fc

void Unwind_101d94fc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x3c));
  return;
}


// ==== 101d9508 Unwind@101d9508

void Unwind_101d9508(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d950e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x4c));
  return;
}


// ==== 101d9530 Unwind@101d9530

void Unwind_101d9530(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x18));
  return;
}


// ==== 101d953c Unwind@101d953c

void Unwind_101d953c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x3c));
  return;
}


// ==== 101d9548 Unwind@101d9548

void Unwind_101d9548(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d954e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x4c));
  return;
}


// ==== 101d95f0 Unwind@101d95f0

void Unwind_101d95f0(void)

{
  int unaff_EBP;
  
  FUN_10024ca0(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 101d9640 Unwind@101d9640

void Unwind_101d9640(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d9670 Unwind@101d9670

void Unwind_101d9670(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d9678 Unwind@101d9678

void Unwind_101d9678(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d967b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 101d9681 Unwind@101d9681

void Unwind_101d9681(void)

{
  FUN_10012cb0();
  return;
}


// ==== 101d96b0 Unwind@101d96b0

void Unwind_101d96b0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101d96b8 Unwind@101d96b8

void Unwind_101d96b8(void)

{
  FUN_10012cb0();
  return;
}


// ==== 101d9770 Unwind@101d9770

void Unwind_101d9770(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 101d97c0 Unwind@101d97c0

void Unwind_101d97c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d97c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d97c9 Unwind@101d97c9

void Unwind_101d97c9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d97d2 Unwind@101d97d2

void Unwind_101d97d2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d97d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d97db Unwind@101d97db

void Unwind_101d97db(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d97de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101d9800 Unwind@101d9800

void Unwind_101d9800(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 101d9830 Unwind@101d9830

void Unwind_101d9830(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 101d9860 Unwind@101d9860

void Unwind_101d9860(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x4c));
  return;
}


// ==== 101d9869 Unwind@101d9869

void Unwind_101d9869(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x58));
  return;
}


// ==== 101d9890 Unwind@101d9890

void Unwind_101d9890(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d98c0 Unwind@101d98c0

void Unwind_101d98c0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d98d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101d9900 Unwind@101d9900

void Unwind_101d9900(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d9913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101d9960 Unwind@101d9960

void Unwind_101d9960(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 101d99e0 Unwind@101d99e0

void Unwind_101d99e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d99e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d99e9 Unwind@101d99e9

void Unwind_101d99e9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 101d99f2 Unwind@101d99f2

void Unwind_101d99f2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d99f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 101d99fb Unwind@101d99fb

void Unwind_101d99fb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d99fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x4c));
  return;
}


// ==== 101d9a40 Unwind@101d9a40

void Unwind_101d9a40(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101d9a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x40));
    return;
  }
  return;
}


// ==== 101d9a5a Unwind@101d9a5a

void Unwind_101d9a5a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101d9a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x30));
    return;
  }
  return;
}


// ==== 101d9a74 Unwind@101d9a74

void Unwind_101d9a74(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9a7d Unwind@101d9a7d

void Unwind_101d9a7d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9a86 Unwind@101d9a86

void Unwind_101d9a86(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x28));
  return;
}


// ==== 101d9a8f Unwind@101d9a8f

void Unwind_101d9a8f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x28));
  return;
}


// ==== 101d9a98 Unwind@101d9a98

void Unwind_101d9a98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 101d9ac0 Unwind@101d9ac0

void Unwind_101d9ac0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 101d9ac9 Unwind@101d9ac9

void Unwind_101d9ac9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 101d9ad2 Unwind@101d9ad2

void Unwind_101d9ad2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 101d9b00 Unwind@101d9b00

void Unwind_101d9b00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 101d9b09 Unwind@101d9b09

void Unwind_101d9b09(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 101d9b12 Unwind@101d9b12

void Unwind_101d9b12(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 101d9b40 Unwind@101d9b40

void Unwind_101d9b40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d9b49 Unwind@101d9b49

void Unwind_101d9b49(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 101d9b70 Unwind@101d9b70

void Unwind_101d9b70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x4c));
  return;
}


// ==== 101d9c60 Unwind@101d9c60

void Unwind_101d9c60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d9c90 Unwind@101d9c90

void Unwind_101d9c90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d9cc0 Unwind@101d9cc0

void Unwind_101d9cc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d9cf0 Unwind@101d9cf0

void Unwind_101d9cf0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 101d9d40 Unwind@101d9d40

void Unwind_101d9d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 101d9d49 Unwind@101d9d49

void Unwind_101d9d49(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 101d9d52 Unwind@101d9d52

void Unwind_101d9d52(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x5c));
  return;
}


// ==== 101d9d5b Unwind@101d9d5b

void Unwind_101d9d5b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x68));
  return;
}


// ==== 101d9d80 Unwind@101d9d80

void Unwind_101d9d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 101d9d89 Unwind@101d9d89

void Unwind_101d9d89(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 101d9d92 Unwind@101d9d92

void Unwind_101d9d92(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 101d9d9b Unwind@101d9d9b

void Unwind_101d9d9b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 101d9da4 Unwind@101d9da4

void Unwind_101d9da4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 101d9dad Unwind@101d9dad

void Unwind_101d9dad(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 101d9de0 Unwind@101d9de0

void Unwind_101d9de0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 101d9de9 Unwind@101d9de9

void Unwind_101d9de9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 101d9e10 Unwind@101d9e10

void Unwind_101d9e10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101d9e19 Unwind@101d9e19

void Unwind_101d9e19(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 101d9e22 Unwind@101d9e22

void Unwind_101d9e22(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 101d9e2b Unwind@101d9e2b

void Unwind_101d9e2b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 101d9e50 Unwind@101d9e50

void Unwind_101d9e50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d9e59 Unwind@101d9e59

void Unwind_101d9e59(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 101d9e62 Unwind@101d9e62

void Unwind_101d9e62(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101d9e6b Unwind@101d9e6b

void Unwind_101d9e6b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 101d9e90 Unwind@101d9e90

void Unwind_101d9e90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d9e99 Unwind@101d9e99

void Unwind_101d9e99(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d9ea2 Unwind@101d9ea2

void Unwind_101d9ea2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d9ed0 Unwind@101d9ed0

void Unwind_101d9ed0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 101d9f00 Unwind@101d9f00

void Unwind_101d9f00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d9f09 Unwind@101d9f09

void Unwind_101d9f09(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101d9f50 Unwind@101d9f50

void Unwind_101d9f50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d9f59 Unwind@101d9f59

void Unwind_101d9f59(void)

{
  FUN_10015bb0();
  return;
}


// ==== 101d9f61 Unwind@101d9f61

void Unwind_101d9f61(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d9f90 Unwind@101d9f90

void Unwind_101d9f90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d9f99 Unwind@101d9f99

void Unwind_101d9f99(void)

{
  FUN_10015c00();
  return;
}


// ==== 101d9fa1 Unwind@101d9fa1

void Unwind_101d9fa1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d9fd0 Unwind@101d9fd0

void Unwind_101d9fd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101d9fd9 Unwind@101d9fd9

void Unwind_101d9fd9(void)

{
  FUN_10015c50();
  return;
}


// ==== 101d9fe1 Unwind@101d9fe1

void Unwind_101d9fe1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101d9fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 101da010 Unwind@101da010

void Unwind_101da010(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 101da019 Unwind@101da019

void Unwind_101da019(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x30));
  return;
}


// ==== 101da050 Unwind@101da050

void Unwind_101da050(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x40));
  return;
}


// ==== 101da059 Unwind@101da059

void Unwind_101da059(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x40));
  return;
}


// ==== 101da062 Unwind@101da062

void Unwind_101da062(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -100));
  return;
}


// ==== 101da0b0 Unwind@101da0b0

void Unwind_101da0b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101da120 Unwind@101da120

void Unwind_101da120(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101da150 Unwind@101da150

void Unwind_101da150(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101da180 Unwind@101da180

void Unwind_101da180(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x58));
  return;
}


// ==== 101da189 Unwind@101da189

void Unwind_101da189(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x58));
  return;
}


// ==== 101da192 Unwind@101da192

void Unwind_101da192(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x58));
  return;
}


// ==== 101da19b Unwind@101da19b

void Unwind_101da19b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x24));
  return;
}


// ==== 101da1a4 Unwind@101da1a4

void Unwind_101da1a4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101da1ad Unwind@101da1ad

void Unwind_101da1ad(void)

{
  FUN_10019740();
  return;
}


// ==== 101da1b5 Unwind@101da1b5

void Unwind_101da1b5(void)

{
  FString *unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(unaff_EBP);
  return;
}


// ==== 101da1be Unwind@101da1be

void Unwind_101da1be(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 100));
  return;
}


// ==== 101da1c7 Unwind@101da1c7

void Unwind_101da1c7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 100));
  return;
}


// ==== 101da1d0 Unwind@101da1d0

void Unwind_101da1d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x18));
  return;
}


// ==== 101da1d9 Unwind@101da1d9

void Unwind_101da1d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0xc));
  return;
}


// ==== 101da1e2 Unwind@101da1e2

void Unwind_101da1e2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 100));
  return;
}


// ==== 101da1eb Unwind@101da1eb

void Unwind_101da1eb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 100));
  return;
}


// ==== 101da1f4 Unwind@101da1f4

void Unwind_101da1f4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 100));
  return;
}


// ==== 101da1fd Unwind@101da1fd

void Unwind_101da1fd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x54));
  return;
}


// ==== 101da206 Unwind@101da206

void Unwind_101da206(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x54));
  return;
}


// ==== 101da20f Unwind@101da20f

void Unwind_101da20f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 101da218 Unwind@101da218

void Unwind_101da218(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 101da260 Unwind@101da260

void Unwind_101da260(void)

{
  FUN_100197e0();
  return;
}


// ==== 101da290 Unwind@101da290

void Unwind_101da290(void)

{
  FUN_10002a70();
  return;
}


// ==== 101da298 Unwind@101da298

void Unwind_101da298(void)

{
  FUN_1001a7d0();
  return;
}


// ==== 101da2a6 Unwind@101da2a6

void Unwind_101da2a6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x378));
  return;
}


// ==== 101da2b5 Unwind@101da2b5

void Unwind_101da2b5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 900));
  return;
}


// ==== 101da2c4 Unwind@101da2c4

void Unwind_101da2c4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x390));
  return;
}


// ==== 101da2d3 Unwind@101da2d3

void Unwind_101da2d3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 101da2dc Unwind@101da2dc

void Unwind_101da2dc(void)

{
  FUN_10019740();
  return;
}


// ==== 101da2ea Unwind@101da2ea

void Unwind_101da2ea(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da2ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 101da2f3 Unwind@101da2f3

void Unwind_101da2f3(void)

{
  FUN_10019740();
  return;
}


// ==== 101da301 Unwind@101da301

void Unwind_101da301(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da30a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x3b4));
  return;
}


// ==== 101da310 Unwind@101da310

void Unwind_101da310(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x3c0));
  return;
}


// ==== 101da31f Unwind@101da31f

void Unwind_101da31f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x3f4));
  return;
}


// ==== 101da350 Unwind@101da350

void Unwind_101da350(void)

{
  FUN_10002a70();
  return;
}


// ==== 101da358 Unwind@101da358

void Unwind_101da358(void)

{
  FUN_1001a7d0();
  return;
}


// ==== 101da366 Unwind@101da366

void Unwind_101da366(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da36f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x378));
  return;
}


// ==== 101da375 Unwind@101da375

void Unwind_101da375(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 900));
  return;
}


// ==== 101da384 Unwind@101da384

void Unwind_101da384(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x390));
  return;
}


// ==== 101da393 Unwind@101da393

void Unwind_101da393(void)

{
  FUN_10019740();
  return;
}


// ==== 101da3a1 Unwind@101da3a1

void Unwind_101da3a1(void)

{
  FUN_10019740();
  return;
}


// ==== 101da3af Unwind@101da3af

void Unwind_101da3af(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x3b4));
  return;
}


// ==== 101da3be Unwind@101da3be

void Unwind_101da3be(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x3c0));
  return;
}


// ==== 101da3cd Unwind@101da3cd

void Unwind_101da3cd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x3f4));
  return;
}


// ==== 101da3dc Unwind@101da3dc

void Unwind_101da3dc(void)

{
  FUN_100197e0();
  return;
}


// ==== 101da4d0 Unwind@101da4d0

void Unwind_101da4d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101da4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x28));
    return;
  }
  return;
}


// ==== 101da4ea Unwind@101da4ea

void Unwind_101da4ea(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101da4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101da504 Unwind@101da504

void Unwind_101da504(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x101da517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101da51e Unwind@101da51e

void Unwind_101da51e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffff7;
                    /* WARNING: Could not recover jumptable at 0x101da531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x28));
    return;
  }
  return;
}


// ==== 101da580 Unwind@101da580

void Unwind_101da580(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101da593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x34));
    return;
  }
  return;
}


// ==== 101da59a Unwind@101da59a

void Unwind_101da59a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x101da5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x28));
    return;
  }
  return;
}


// ==== 101da5d0 Unwind@101da5d0

void Unwind_101da5d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 101da5d9 Unwind@101da5d9

void Unwind_101da5d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 101da5e2 Unwind@101da5e2

void Unwind_101da5e2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 101da5eb Unwind@101da5eb

void Unwind_101da5eb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da5ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 101da610 Unwind@101da610

void Unwind_101da610(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 101da680 Unwind@101da680

void Unwind_101da680(void)

{
  FUN_10002a70();
  return;
}


// ==== 101da688 Unwind@101da688

void Unwind_101da688(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2d8));
  return;
}


// ==== 101da6c0 Unwind@101da6c0

void Unwind_101da6c0(void)

{
  FUN_10002a70();
  return;
}


// ==== 101da6c8 Unwind@101da6c8

void Unwind_101da6c8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da6d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2d8));
  return;
}


// ==== 101da700 Unwind@101da700

void Unwind_101da700(void)

{
  FUN_10002a70();
  return;
}


// ==== 101da708 Unwind@101da708

void Unwind_101da708(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2d8));
  return;
}


// ==== 101da740 Unwind@101da740

void Unwind_101da740(void)

{
  FUN_1001c300();
  return;
}


// ==== 101da770 Unwind@101da770

void Unwind_101da770(void)

{
  FUN_1001c300();
  return;
}


// ==== 101da7a0 Unwind@101da7a0

void Unwind_101da7a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101da7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0xc));
  return;
}


// ==== 101daad0 Unwind@101daad0

void Unwind_101daad0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101daad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101dab00 Unwind@101dab00

void Unwind_101dab00(void)

{
  FUN_10001f30();
  return;
}


// ==== 101dab08 Unwind@101dab08

void Unwind_101dab08(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dab0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x34));
  return;
}


// ==== 101dab30 Unwind@101dab30

void Unwind_101dab30(void)

{
  FUN_10001f30();
  return;
}


// ==== 101dab38 Unwind@101dab38

void Unwind_101dab38(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dab3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x34));
  return;
}


// ==== 101dab60 Unwind@101dab60

void Unwind_101dab60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dab63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0xc));
  return;
}


// ==== 101dab69 Unwind@101dab69

void Unwind_101dab69(void)

{
  FUN_10001f30();
  return;
}


// ==== 101dab71 Unwind@101dab71

void Unwind_101dab71(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dab77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x34));
  return;
}


// ==== 101dab7d Unwind@101dab7d

void Unwind_101dab7d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dab80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x20));
  return;
}


// ==== 101dad30 Unwind@101dad30

void Unwind_101dad30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dad33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x14));
  return;
}


// ==== 101dad39 Unwind@101dad39

void Unwind_101dad39(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dad3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x14));
  return;
}


// ==== 101dada0 Unwind@101dada0

void Unwind_101dada0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x101dadb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 101dae40 Unwind@101dae40

void Unwind_101dae40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dae43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 101dae90 Unwind@101dae90

void Unwind_101dae90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dae93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 101daf00 Unwind@101daf00

void Unwind_101daf00(void)

{
  FUN_10002520();
  return;
}


// ==== 101daf70 Unwind@101daf70

void Unwind_101daf70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101daf73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101daf79 Unwind@101daf79

void Unwind_101daf79(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101daf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 101dafa0 Unwind@101dafa0

void Unwind_101dafa0(void)

{
  FUN_10002520();
  return;
}


// ==== 101dafd0 Unwind@101dafd0

void Unwind_101dafd0(void)

{
  FUN_10001f30();
  return;
}


// ==== 101dafd8 Unwind@101dafd8

void Unwind_101dafd8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101dafde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x34));
  return;
}


// ==== 101db020 Unwind@101db020

void Unwind_101db020(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x14));
  return;
}


// ==== 101db029 Unwind@101db029

void Unwind_101db029(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 101db032 Unwind@101db032

void Unwind_101db032(void)

{
  FUN_10002910();
  return;
}


// ==== 101db03a Unwind@101db03a

void Unwind_101db03a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x20));
  return;
}


// ==== 101db043 Unwind@101db043

void Unwind_101db043(void)

{
  FUN_1001f950();
  return;
}


// ==== 101db051 Unwind@101db051

void Unwind_101db051(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 101db05a Unwind@101db05a

void Unwind_101db05a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db05d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 101db063 Unwind@101db063

void Unwind_101db063(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 101db06c Unwind@101db06c

void Unwind_101db06c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 101db075 Unwind@101db075

void Unwind_101db075(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 101db07e Unwind@101db07e

void Unwind_101db07e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x101db081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x6c));
  return;
}


